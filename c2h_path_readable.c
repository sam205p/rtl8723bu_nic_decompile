/* rtl8723bu_nic firmware — hand-readable C for the C2H / event-submission path.
 *
 * Source: IDA Pro listing "assembly.txt" (core 8051/C500 "C517", big-endian).
 * Code image: ROM 0x1000..0x8D6C.  Comments carry the original ROM addresses.
 *
 * This file is a *semantic* rendering of the handful of functions that matter
 * for the C2H investigation; the whole image is in rtl8723bu_fw.c (mechanical).
 */
#include <stdint.h>

/* ---- 8051 / C500 core state ---- */
static uint8_t  A, B, CY;
static uint8_t  R0,R1,R2,R3,R4,R5,R6,R7;
static uint16_t DPTR;
static uint8_t  RAM[256];        /* IDATA (direct addresses, e.g. RAM_2A -> RAM[0x2A]) */
static uint8_t  XDATA[0x10000];  /* external memory: SFRs above 0x80 and firmware data */

/* ---- firmware scratch that forms the event payload (all XDATA) ---- */
#define EV_ARG0     0xA2D4   /* descriptor byte 0 <- R7 */
#define EV_ARG1     0xA2D5   /* descriptor byte 1 <- R5 */
#define EV_ARG2     0xA2D6   /* descriptor byte 2 <- R3 */
#define EV_ID       0xA2D7   /* descriptor byte 3 = C2H event id */
#define EV_PARAM    0xA2B3   /* parameter, written by external/shared code */
#define SRC_9ECB    0x9ECB   /* state/config byte feeding event 0x0A */

/* Event ids match the driver's C2H enum (C2H_8723B_* in rtl8723b_hal.h). */
#define C2H_CCX_TX_RPT      0x03
#define C2H_8723B_BT_INFO   0x09
#define C2H_HW_INFO_EXCH    0x0A
#define C2H_8723B_BT_MP_INFO 0x0B

/* Shared/mask-ROM routine.  0xF106 lies OUTSIDE this image (image ends 0x8D6C),
 * so its body is not available here — this is the missing link for the C2H
 * transport question. */
extern void fw_shared_0F106(void);

/* =========================== ROM 0x5616 =============================== *
 * The single "submit event" trampoline every producer calls.
 *   ROM:5616   ljmp 0xF106        ; -> shared routine consumes A2D4..A2D7
 * ===================================================================== */
static void submit_event(void)          /* acall ROM_5616 */
{
    fw_shared_0F106();                  /* ljmp 0xF106 */
}

/* =========================== ROM 0x563B =============================== *
 * Builds the 4-byte descriptor at 0xA2D4..0xA2D7 from R7/R5/R3,
 * then continues (descriptor is consumed later by the shared routine).
 *   ROM:563B   push PSW
 *   ROM:563D   mov DPTR,#A2D5 ; mov A,R5  ; movx @DPTR,A     -> A2D5 = R5
 *   ROM:5642   inc DPTR       ; mov A,R3  ; movx @DPTR,A     -> A2D6 = R3
 *   ROM:5645   mov DPTR,#A2D4 ; mov A,R7  ; movx @DPTR,A     -> A2D4 = R7
 * ===================================================================== */
static void build_event_descriptor(void)
{
    __push_psw();
    XDATA[EV_ARG1] = R5;   /* 0x563D..0x5641 */
    XDATA[EV_ARG2] = R3;   /* 0x5642..0x5644 */
    XDATA[EV_ARG0] = R7;   /* 0x5645..0x5649 */
    A = 0;                 /* 0x564A: clr A ... (continues; see rtl8723bu_fw.c) */
}

/* ============================ producers =============================== *
 * Each producer stages XDATA[0xA2D7] = <event id> and the R3/R5 parameters,
 * then calls submit_event().  R5==1 in every case found.
 * ===================================================================== */

/* ROM 0x5522 — TX report (CCX).  R3=6. */
static void emit_ccx_tx_report(void)
{
    XDATA[EV_ID] = C2H_CCX_TX_RPT;   /* 0x5522..0x5527 */
    R3 = 6;                          /* 0x5528 */
    R5 = 1;                          /* 0x552A */
    submit_event();                  /* 0x552C */
}

/* ROM 0x53FD — HW info exchange, constant form.  R3=1. */
static void emit_hw_info_exch_const(void)
{
    XDATA[EV_ID] = C2H_HW_INFO_EXCH; /* 0x53FD..0x5402 */
    R3 = 1;                          /* 0x5403 */
    R5 = 1;                          /* 0x5405 */
    submit_event();                  /* 0x5407 */
}

/* ROM 0x57B1 (entry ROM_57B6) — BT MP info.  A already holds 0x0B.  R3=8. */
static void emit_bt_mp_info(void)
{
    XDATA[EV_ID] = C2H_8723B_BT_MP_INFO;  /* 0x57B6..0x57B6 */
    R3 = 8;                               /* 0x57B7 */
    R5 = 1;                               /* 0x57B9 */
    submit_event();                       /* 0x57BB */
}

/* ROM 0x56E4..0x56F6 — HW info exchange, dynamic form (R3 from XDATA[0xA2B3]). */
static void emit_hw_info_exch_dyn(void)
{
    R7 = XDATA[SRC_9ECB];       /* 0x56E4..0x56E8 */
    R3 = XDATA[EV_PARAM];       /* 0x56E9..0x56ED  (writer not in this image) */
    XDATA[EV_ID] = C2H_HW_INFO_EXCH;  /* 0x56EE..0x56F3 */
    R5 = 1;                     /* 0x56F4 */
    submit_event();             /* 0x56F6 */
}

/* NOTE: R3 is a per-event *parameter* (6 / 1 / 8 / [A2B3]); there is no evidence
 * it is the USB RX `pkt_len`.  Whether the shared 0xF106 routine turns these
 * descriptors into a C2H RX packet (and with what length) is still unproven. */
