/* Readable-C rendering of rtl8723bu_nic firmware (from IDA listing "assembly.txt").
   Core: 8051/C500 (C517), big-endian. Code image ROM 0x1000..0x8D6C.
   Conventions: A,B,R0-R7,DPTR,CY = registers; RAM[] = 256B IDATA;
   XDATA[] = external memory; CODE[] = instruction ROM; CALL()/L_ labels = branches.
   Best-effort mechanical translation; unchecked vendor opcodes are commented. */
#include <stdint.h>
static uint8_t RAM[256]; static uint8_t XDATA[0x10000];
static uint8_t A, B, CY, R0, R1, R2, R3, R4, R5, R6, R7;
static uint16_t DPTR;

void F_ROM_2013(void)   /* code 0x2013 */
    goto L_code_86D;
}

void F_ROM_217C(void)   /* code 0x217C */
    goto L_E4FF;
}

void F_ROM_2182(void)   /* code 0x2182 */
    A = R7;
}

void F_ROM_2183(void)   /* code 0x2183 */
    F_ROM_27CB();
    A = R7;
    F_ROM_2013();
    F_ROM_2183();
    R5 = A;
    R7 = 2;
    F_ROM_24D1();
    A = 0;
    R7 = A;
    F_ROM_221A();
    A = R7;
    if (A != 0) goto L_ROM_219B;
L_ROM_2196:
    R7 = 6;
    F_0x9F71();
L_ROM_219B:
    return;
}

void F_ROM_221A(void)   /* code 0x221A */
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    goto L_ROM_2048;
}

void F_ROM_246E(void)   /* code 0x246E */
    B = 0xE;
}

void F_ROM_2471(void)   /* code 0x2471 */
    F_ROM_27F2+1();
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_248B; }
    F_0x97D4();
    F_ROM_2722();
    A = 0;
    R3 = A;
    R5 = 1;
    F_ROM_2471();
    F_ROM_27D4+1();
    A = 3;
    F_0xA70F();
    goto L_ROM_201B;
L_ROM_248B:
    F_ROM_2308+1();
L_ROM_248D:
    return;
}

void F_ROM_24C6(void)   /* code 0x24C6 */
    { uint8 t = A; A = RAM[R0]; RAM[R0] = t; }
    goto L_ROM_24CC;
    F_ROM_84FB+1();
L_ROM_24CC:
    F_0xBC46();
L_ROM_24CF:
    PSW = POP();
}

void F_ROM_24D1(void)   /* code 0x24D1 */
    IE_7 = CY;
    return;
}

void F_ROM_2549(void)   /* code 0x2549 */
    B = 0xB;
}

void F_ROM_254C(void)   /* code 0x254C */
    A = R7;
    DPTR = 0xA0E1;
    F_ROM_458A();
    A = XDATA[DPTR];
    A = ~A;
    DPTR = 0x4D5;
    XDATA[DPTR] = A;
    goto L_ROM_2562;
L_ROM_255B:
    DPTR = 0x4D4;
    A = 0;
L_ROM_255F:
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_2562:
    R7 = 1;
L_ROM_2564:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_26B0(void)   /* code 0x26B0 */
    R1 = A;
    F_code_879();
    /* nop */
    /* nop */
    R4++;
    /* nop */
    DPTR = 0xA21F;
    F_code_879();
    /* nop */
    /* nop */
    R4++;
    /* nop */
    R5 = 0x18;
    R4 = 0;
    A = 0;
    R7 = A;
    F_0xB55E();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_271C(void)   /* code 0x271C */
    DPTR = 0xA239;
    F_ROM_47CC();
L_ROM_2722:
    DPTR = 0xA22B;
    A = XDATA[DPTR];
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_3845();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_2751(void)   /* code 0x2751 */
    A = RAM[0x54];
    F_ROM_27FD();
}

void F_ROM_2755(void)   /* code 0x2755 */
    A = XDATA[DPTR];
    R4 = A;
    F_0xBC73();
    F_0xB5D7();
    F_0xBC73();
    F_ROM_254C();
    B = 0xE;
    A = RAM[0x54];
    F_ROM_24B4();
    R5 = RAM[0x54];
    R7 = 1;
    goto L_ROM_2366;
}

void F_ROM_27CB(void)   /* code 0x27CB */
    DPTR = 0x1C0;
    A = XDATA[DPTR];
    A = A | 0x20;
    XDATA[DPTR] = A;
    F_ROM_27EA();
L_ROM_27D4:
    R7 = 0;
}

void F_ROM_27E3(void)   /* code 0x27E3 */
    goto L_ROM_278A;
}

void F_ROM_27EA(void)   /* code 0x27EA */
    P1 = R2;
    CY = CY | !SFR_D8_5;
    F_ROM_458A();
    A = XDATA[DPTR];
L_ROM_27F2:
    A = A + 0xF6;
    R7 = A;
    A = 0;
    DPTR = 0xA2AB;
    XDATA[DPTR] = A;
    DPTR++;
    return;
}

void F_ROM_27FD(void)   /* code 0x27FD */
    B = 1;
    goto L_code_8D6;
}

void F_ROM_288F(void)   /* code 0x288F */
    R2 = RAM[0x44];
    if (A == 0) goto L_ROM_288F+1;
    R7 = 0x16;
    F_ROM_468D();
}

void F_ROM_2898(void)   /* code 0x2898 */
    F_ROM_288F();
    A = A | 5;
    R5 = A;
    R7 = 0x17;
    F_ROM_468D();
    R7 = 0x38;
    F_0xBD42();
    R7 = 0x38;
    F_ROM_468D();
    goto L_ROM_3797+2;
}

void F_ROM_28B1(void)   /* code 0x28B1 */
    F_ROM_46AB();
    A = R7;
    A = A & 0xFC;
    return;
}

void F_ROM_2AD0(void)   /* code 0x2AD0 */
    A = XDATA[DPTR];
    if (A != 0x40) goto L_ROM_2AE8;
}

void F_ROM_2AD4(void)   /* code 0x2AD4 */
    DPTR = 0xFD62;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2AE3; }
    DPTR = 0xA06D;
    A = 1;
    XDATA[DPTR] = A;
    goto L_ROM_2AE8;
}

void F_ROM_2AE3(void)   /* code 0x2AE3 */
    A = 0;
    DPTR = 0xA06D;
    XDATA[DPTR] = A;
L_ROM_2AE8:
    DPTR = 0xFD68;
}

void F_ROM_2AF0(void)   /* code 0x2AF0 */
    F_ROM_2AF0();
    R7 = 4;
L_ROM_2AF4:
    RAM[0x6F] = R7;
    R7 = 2;
    F_ROM_44B7();
    DPTR = 0x9E92;
    A = XDATA[DPTR];
    A = A | RAM[0x6F];
    XDATA[DPTR] = A;
    return;
}

void F_ROM_2B15(void)   /* code 0x2B15 */
    PUSH(PSW);
    DPTR = 0xA25B;
    A = 0x15;
    XDATA[DPTR] = A;
    DPTR = 0xA269;
    A = 1;
    XDATA[DPTR] = A;
    DPTR = 0xA25D;
    A = R7;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA2;
    R1 = 0x5B;
    F_ROM_2B9B();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_2B9B(void)   /* code 0x2B9B */
    A = A ^ RAM[R0];
    A = XDATA[DPTR];
    DPTR = 0xA244;
    XDATA[DPTR] = A;
    DPTR = 0xFD67;
    A = XDATA[DPTR];
    DPTR = 0xA245;
    XDATA[DPTR] = A;
    DPTR = 0xA240;
    A = XDATA[DPTR];
    A = A & 1;
    DPTR = 0xA063;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA2;
    R1 = 0x3D;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_2BC0; }
    CY = 0;
L_ROM_2BC0:
    PUSH(PSW);
    DPTR = 0x9FB8;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 0) goto L_ROM_2BCF;
    DPTR++;
    A = XDATA[DPTR];
    A = A ^ 9;
    if (A == 0) goto L_ROM_2BD9;
L_ROM_2BCF:
    A = R7;
    A--;
    R7 = A;
    DPTR = 0x9FB9;
    A = XDATA[DPTR];
    if (A != RAM_7) goto L_ROM_2BDD;
L_ROM_2BD9:
    R7 = 1;
    goto L_ROM_2BDF;
L_ROM_2BDD:
    R7 = 0;
L_ROM_2BDF:
    A = R7;
    if (A == 0) goto L_ROM_2BEB;
    DPTR = 0x1C1;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    goto L_ROM_2C15;
L_ROM_2BEB:
    PUSH(RAM_1);
    DPTR = 0x9FB9;
    A = XDATA[DPTR];
    F_0x9ECB();
    R0 = RAM_1;
    R4 = A;
    R5 = 1;
    RAM_1 = POP();
    R6 = 0;
    R7 = 0xF;
    F_code_663();
}

void F_ROM_2C02(void)   /* code 0x2C02 */
    DPTR = 0x9FB9;
    F_ROM_7FE0();
    if (A != 0xA) goto L_ROM_2C0D;
}

void F_ROM_2C0B(void)   /* code 0x2C0B */
    R7 = 1;
L_ROM_2C0D:
    A = R7;
    if (A == 0) goto L_ROM_2C15;
    A = 0;
    DPTR = 0x9FB9;
    XDATA[DPTR] = A;
L_ROM_2C15:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_2D27(void)   /* code 0x2D27 */
    DPTR = 0x198;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
L_ROM_2D32:
    R7 = 1;
    F_ROM_2AD4();
    DPTR = 0xA03D;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2D46; }
    DPTR = 0x13B;
    A = XDATA[DPTR];
}

void F_ROM_2D41(void)   /* code 0x2D41 */
    if (!ACC_4) { goto L_ROM_2D46; }
    F_ROM_2FAF();
L_ROM_2D46:
    return;
}

void F_ROM_2FAF(void)   /* code 0x2FAF */
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR++;
    F_ROM_2D41();
    R0 = 0x18;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
}

void F_ROM_2FC5(void)   /* code 0x2FC5 */
    F_nullsub_5();
}

void F_ROM_2FDC(void)   /* code 0x2FDC */
    if (R5 != 0x3A) goto L_ROM_2FDC+1;
}

void F_ROM_2FDF(void)   /* code 0x2FDF */
    RAM[R0] = A;
    A = 0x30;
    goto L_ROM_6616;
}

void F_ROM_2FE6(void)   /* code 0x2FE6 */
    DPTR = 6;
    goto L_code_6A2;
}

void F_ROM_3037(void)   /* code 0x3037 */
    F_0xB13B();
    F_ROM_3E11();
    F_0x9EFD();
    F_ROM_3067+2();
    R7 = 1;
    F_ROM_43A5();
    DPTR = 0xA0AC;
    A = 2;
    XDATA[DPTR] = A;
    R7 = A;
    F_ROM_43A5();
    DPTR = 0xA0AC;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    F_ROM_581D();
    F_0x9129();
    R7 = 0x80;
    F_0xBD42();
    R7 = 0x80;
    F_ROM_468D();
L_ROM_3067:
    RAM[0x28] = 0xFF;
}

void F_ROM_3072(void)   /* code 0x3072 */
    F_ROM_46AB();
}

void F_ROM_31C2(void)   /* code 0x31C2 */
    R6 = 0;
    R7 = A;
L_ROM_31C5:
    R5 = 0;
    R3 = 1;
    R2 = 0xA0;
    R1 = 0x3A;
    F_code_8AA();
    F_0xBCCB();
    F_0xBCC3();
    F_ROM_363A();
    A = 0;
    DPTR = 0xA03C;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_31FC(void)   /* code 0x31FC */
    A = R5;
    A = A & 1;
    R7 = A;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A & 0xFE;
    A = A | R7;
    XDATA[DPTR] = A;
    goto L_ROM_3216;
L_ROM_320A:
    DPTR = 0x9FDC;
    A = R5;
    XDATA[DPTR] = A;
    goto L_ROM_3216;
L_ROM_3211:
    DPTR = 0x9FDB;
    A = R5;
    XDATA[DPTR] = A;
L_ROM_3216:
    R7 = 0x8F;
    F_ROM_46AB();
    A = R7;
    if (!ACC_4) { goto L_ROM_324B; }
    DPTR = 0xA315;
    A = XDATA[DPTR];
    A--;
    if (A == 0) goto L_ROM_322D;
    A--;
    if (A == 0) goto L_ROM_3241;
    A = A + 2;
    if (A != 0) goto L_ROM_324B;
L_ROM_322D:
    DPTR = 0x9FD4;
L_ROM_3230:
    A = XDATA[DPTR];
    F_0xBC58();
    R7 = A;
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    A = A & 0x7F;
    A = A | R7;
    R5 = A;
L_ROM_323D:
    R7 = 0x88;
    goto L_ROM_3248;
L_ROM_3241:
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    R5 = A;
    R7 = 0x89;
L_ROM_3248:
    F_ROM_468D();
L_ROM_324B:
    PSW = POP();
    IE_7 = CY;
L_ROM_324F:
    return;
}

void F_ROM_325A(void)   /* code 0x325A */
    DPTR++;
    A = 0xA;
    return;
}

void F_ROM_33E0(void)   /* code 0x33E0 */
    if (R7 != 1) goto L_ROM_33F9;
L_ROM_33E3:
    DPTR = 0x9FD4;
    F_nullsub_9();
    if (ACC_0) { goto L_ROM_33F9; }
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    CY = 1;
    A = A - 4;
    if (!CY) goto L_ROM_33F9;
    R7 = 1;
    goto L_ROM_33FB;
L_ROM_33F9:
    R7 = 0;
L_ROM_33FB:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_3401(void)   /* code 0x3401 */
    A = A - R7;
    if (--ACC != 0) goto L_ROM_33C8;
    A = RORC8(A);
    if (ACC_0) { goto L_ROM_340D; }
    F_ROM_31C2();
    goto L_ROM_341B;
L_ROM_340D:
    F_0xBA4D();
    F_ROM_3453();
    DPTR = 0x527;
    A = XDATA[DPTR];
    A = A | 0x80;
    XDATA[DPTR] = A;
    F_ROM_324F();
L_ROM_341B:
    A = 0;
    R5 = A;
    R7 = A;
    goto L_ROM_54C6;
}

void F_ROM_3453(void)   /* code 0x3453 */
    A = A + R4;
}

void F_ROM_3454(void)   /* code 0x3454 */
    R7 = 0x6F;
    F_ROM_54C6();
L_ROM_3459:
    F_ROM_8571();
    if (R7 != 1) goto L_ROM_3472;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A | 0x80;
    XDATA[DPTR] = A;
    R5 = 0xE;
    R7 = 1;
    F_ROM_31C5+1();
    DPTR = 0x9FD3;
    A = 0xE;
    XDATA[DPTR] = A;
L_ROM_3472:
    return;
}

void F_ROM_3479(void)   /* code 0x3479 */
    { uint8 t = A; A = RAM[R0]; RAM[R0] = t; }
}

void F_ROM_3480(void)   /* code 0x3480 */
    goto L_ROM_3037;
}

void F_ROM_3484(void)   /* code 0x3484 */
    XDATA[DPTR] = A;
    R5 = A;
    R7 = 3;
    F_ROM_3484();
    F_ROM_47EB();
    A = 0;
    R5 = A;
    R7 = 1;
    F_ROM_31C5+1();
    A = 0;
    DPTR = 0x9FD3;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_350B(void)   /* code 0x350B */
    P0_0 = 1;
    R0--;
L_ROM_350E:
    F_ROM_379A();
}

void F_ROM_3526(void)   /* code 0x3526 */
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_3601(void)   /* code 0x3601 */
    DPTR = 0x9FD5;
    F_ROM_84C9();
    if (!ACC_0) { goto L_ROM_3613; }
    A = R7;
    A = A & 0xBF;
}

void F_ROM_360D(void)   /* code 0x360D */
    F_ROM_350B();
    F_ROM_360D();
    F_ROM_347A();
L_ROM_3613:
    F_ROM_3601();
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (ACC_0) { goto L_ROM_3620; }
    F_ROM_3601();
L_ROM_3620:
    return;
}

void F_ROM_3625(void)   /* code 0x3625 */
    A = A | 4;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_362D(void)   /* code 0x362D */
    A = 0x1D;
    F_0xBD3A();
L_ROM_3632:
    R6 = A;
    RAM[R0] = A;
    A = 0x38;
    A = A + R7;
L_ROM_3637:
    DPL = A;
    A = 0;
}

void F_ROM_363A(void)   /* code 0x363A */
    A = A + 1 + CY;
    DPH = A;
L_ROM_363E:
    A = R6;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_3648(void)   /* code 0x3648 */
    R0 = A;
    A = RAM[R0];
    A = A | R5;
    goto L_ROM_3632;
}

void F_ROM_368C(void)   /* code 0x368C */
    R0--;
    XDATA[DPTR] = A;
    A = 0;
    R7 = A;
    F_ROM_368C();
    A = R7;
    if (A != 0) goto L_ROM_369F;
    F_ROM_36AC();
    A = A & 0xBF;
    XDATA[DPTR] = A;
    A = A & 0x7F;
    XDATA[DPTR] = A;
    goto L_ROM_36A5;
L_ROM_369F:
    R5 = 1;
    R7 = 0xC;
    F_ROM_325A();
L_ROM_36A5:
    F_ROM_36AF+1();
    goto L_BCC3;
}

void F_ROM_36AC(void)   /* code 0x36AC */
    F_0xBBED();
L_ROM_36AF:
    F_0x917E();
}

void F_ROM_374E(void)   /* code 0x374E */
    R7 = RAM[0x22];
    RAM[0x51] = R3;
    RAM[0x52] = R2;
    RAM[0x53] = R1;
    F_ROM_4F8F();
    R7 = A;
    RAM[0x55] = A;
    F_code_689();
    R6 = A;
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_376C; }
    F_ROM_4FA4+1();
    RAM[0x56] = A;
    goto L_ROM_376E;
L_ROM_376C:
    RAM[0x56] = R7;
L_ROM_376E:
    RAM[0x54] = RAM[0x55];
L_ROM_3771:
    A = RAM[0x54];
    CY = 1;
    A = A - RAM[0x56];
    if (!CY) goto L_ROM_379E;
    R3 = RAM[0x51];
    R2 = RAM[0x52];
    R1 = RAM[0x53];
    F_code_689();
    A = A & 1;
    R5 = A;
    R7 = RAM[0x54];
    F_0x9142();
    R7 = RAM[0x54];
    F_ROM_368C();
    A = R7;
    R7 = RAM[0x54];
    if (A != 0) goto L_ROM_3797;
    F_0xB006();
    goto L_ROM_379A;
L_ROM_3797:
    F_0xB002();
L_ROM_379A:
    RAM[0x54]++;
    goto L_ROM_3771;
L_ROM_379E:
    A = RAM[0x55];
    if (A != 0) goto L_ROM_37B0;
    R7 = A;
    F_ROM_368C();
    A = R7;
    if (A != 0) goto L_ROM_37B0;
L_ROM_37A8:
    F_ROM_36AC();
    A = A & 0xBF;
    XDATA[DPTR] = A;
    A = A & 0x7F;
    XDATA[DPTR] = A;
L_ROM_37B0:
    return;
}

void F_ROM_37EC(void)   /* code 0x37EC */
    F_0xA371();
    if (R7 != 1) goto L_ROM_3805;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    R5 = 6;
    R7 = 1;
    F_ROM_31C5+1();
    DPTR = 0x9FD3;
    A = 6;
    XDATA[DPTR] = A;
L_ROM_3805:
    return;
}

void F_ROM_3845(void)   /* code 0x3845 */
    if (A == 0) goto L_ROM_3849;
    F_ROM_3849+1();
L_ROM_3849:
    IE_7 = 0;
}

void F_ROM_38F0(void)   /* code 0x38F0 */
    A = ROR8(A);
    RAM[0x54] = RAM[0x54] | 0x12;
    A = R7;
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_38FE; }
    RAM[0x54] = RAM[0x54] | 0x14;
L_ROM_38FE:
    DPTR = 0x9FCF;
}

void F_ROM_3901(void)   /* code 0x3901 */
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (!ACC_0) { goto L_ROM_390C; }
    RAM[0x54] = RAM[0x54] | 0x80;
L_ROM_390C:
    DPTR = 0x9FCF;
    F_ROM_5FDD+2();
    if (ACC_0) { goto L_ROM_3918; }
    RAM[0x54] = RAM[0x54] | 0x40;
L_ROM_3918:
    F_ROM_39DA();
    DPTR = 0x9FD2;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_3924;
    R7 = 1;
    F_ROM_39E1();
L_ROM_3924:
    F_ROM_3B07();
    if (!ACC_0) { goto L_ROM_392D; }
    R7 = 4;
    goto L_ROM_3938;
L_ROM_392D:
    F_nullsub_11();
    A = R7;
    if (A == 0) goto L_ROM_3936;
    R7 = 1;
    goto L_ROM_3938;
L_ROM_3936:
    R7 = 2;
L_ROM_3938:
    F_ROM_39E1();
    goto L_ROM_39A2;
    RAM[0x54] = 1;
    F_ROM_39DA();
    DPTR = 0x9FD2;
    A = XDATA[DPTR];
    A = A ^ 4;
    if (A == 0) goto L_ROM_394B;
    goto L_ROM_39D5;
L_ROM_394B:
    R7 = A;
    F_ROM_39E1();
    goto L_ROM_39D5;
L_ROM_39A2:
    A = A ^ RAM[R0];
    if (CY) goto L_ROM_3A16;
    R5--;
    if (R7 != 1) goto L_ROM_39B2;
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 1;
    goto L_ROM_39B5;
L_ROM_39B2:
    A = 0;
    R5 = A;
    R7 = A;
L_ROM_39B5:
    F_ROM_6259+1();
    goto L_ROM_39C2;
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    DPTR = 0x9FD3;
    XDATA[DPTR] = A;
L_ROM_39C2:
    DPTR = 0x540;
    A = 0x22;
    XDATA[DPTR] = A;
    goto L_ROM_39F5;
}

void F_ROM_39DA(void)   /* code 0x39DA */
    goto L_ROM_39E7;
}

void F_ROM_39E1(void)   /* code 0x39E1 */
    R0++;
    RAM[R1]++;
    R5 = 1;
    R7 = 0xC;
L_ROM_39E7:
    F_ROM_6259+1();
    F_0xA29A();
    DPTR = 0x9FDB;
    F_ROM_3858+1();
    F_0xB81E();
L_ROM_39F5:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_3B07(void)   /* code 0x3B07 */
    A = XDATA[DPTR];
L_ROM_3B08:
    if (A != 2) goto L_ROM_3B10;
    F_0xB8C7();
    goto L_ROM_3B19;
L_ROM_3B10:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_3B19;
    F_0xB8C1();
L_ROM_3B19:
    PSW = POP();
    IE_7 = CY;
}

void F_ROM_3B29(void)   /* code 0x3B29 */
    { uint8 t = A; A = R7; R7 = t; }
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    return;
}

void F_ROM_3D67(void)   /* code 0x3D67 */
    goto L_ROM_38F0;
}

void F_ROM_3DC2(void)   /* code 0x3DC2 */
    if (CY) goto L_ROM_3DD6;
    A = A - RAM[R1];
    goto L_ROM_3E99+0x89;
}

void F_ROM_3DD4(void)   /* code 0x3DD4 */
    R0 = RAM[0x6E];
L_ROM_3DD6:
    A = A + R0;
    /* nop */
    A = A ^ R6;
    F_ROM_3901();
    A = A ^ R6;
    A = A + R2 + CY;
    goto L_ROM_6E43;
}

void F_ROM_3E02(void)   /* code 0x3E02 */
    A = A ^ R6;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + RAM[R1];
    A = A ^ R6;
    R5 = RAM[0x28];
    A = A ^ R6;
    if (RAM[R0] != 0x40) goto L_ROM_3E78+2;
    if (R7 != 0x42) goto L_ROM_3E7B+2;
    { uint8 t = A; A = R0; R0 = t; }
    A = A | RAM[R1];
}

void F_ROM_3E11(void)   /* code 0x3E11 */
    A = A ^ R6;
    RAM[0x49] = POP();
    A = A ^ R6;
    if (--R1 != 0) goto L_ROM_3E77;
    A = A ^ R6;
    A = XDATA[R0];
    goto L_ROM_3B6E;
}

void F_ROM_3E50(void)   /* code 0x3E50 */
    if (R0 != 0x90) goto L_ROM_3DF4;
    { uint8 t = A; A = R4; R4 = t; }
    F_ROM_4596();
    goto L_ROM_6730;
}

void F_ROM_3FCF(void)   /* code 0x3FCF */
    goto L_ROM_3DD4;
}

void F_ROM_3FE4(void)   /* code 0x3FE4 */
    if (A != 1) goto L_ROM_3FEE;
    DPTR++;
    A = XDATA[DPTR];
    F_0xB438();
    A = R7;
    XDATA[DPTR] = A;
L_ROM_3FEE:
    return;
}

void F_ROM_4025(void)   /* code 0x4025 */
    R7 = A;
    if (A != 0) goto L_ROM_402C;
    DPTR++;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_4011;
L_ROM_402C:
    IE_7 = 0;
    A = R7;
    if (!ACC_0) { goto L_ROM_4040; }
    DPTR = 0x9E92;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    A = 0;
    R7 = A;
    F_ROM_7E92();
    F_ROM_4048();
L_ROM_4040:
    F_ROM_454D();
    R7 = A;
    if (!ACC_1) { goto L_ROM_404C; }
    A = A & 0xFD;
}

void F_ROM_4048(void)   /* code 0x4048 */
    XDATA[DPTR] = A;
L_ROM_4049:
    F_0xAF52();
L_ROM_404C:
    F_ROM_454D();
    R7 = A;
    if (!ACC_2) { goto L_ROM_4058; }
    A = A & 0xFB;
    XDATA[DPTR] = A;
    F_0x9CF5();
L_ROM_4058:
    F_ROM_454D();
    R7 = A;
    if (!ACC_6) { goto L_ROM_4064; }
    A = A & 0xBF;
    XDATA[DPTR] = A;
    F_0x97FC();
L_ROM_4064:
    IE_7 = 1;
    goto L_ROM_4021;
}

void F_ROM_42DD(void)   /* code 0x42DD */
    A = 1;
    A = CODE[CODE[A + DPTR]];
    A = A + R7;
    R7 = A;
    A = 0;
    A = CODE[CODE[A + DPTR]];
    A = A + R6 + CY;
    CY = 0;
    A = RORC8(A);
    R6 = A;
    A = R7;
    A = RORC8(A);
    R7 = A;
    A = RAM[0x51];
    F_0x9473();
    F_ROM_47E4();
    XDATA[DPTR] = A;
    A = 0;
L_ROM_42F4:
    RAM[0x54] = A;
    RAM[0x55] = A;
    goto L_ROM_44F9;
}

void F_ROM_43A5(void)   /* code 0x43A5 */
    A = R7;
L_ROM_43A6:
    F_ROM_4540();
    A = 0;
    XDATA[DPTR] = A;
    goto L_ROM_43B3;
L_ROM_43AC:
    F_ROM_451D();
    F_ROM_453F();
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
L_ROM_43B3:
    F_0xBB4D();
    A = RAM[0x53];
    XDATA[DPTR] = A;
    goto L_ROM_44DF+1;
}

void F_ROM_44DE(void)   /* code 0x44DE */
    A = A & R3;
L_ROM_44DF:
    goto L_ROM_44E5;
L_ROM_44E1:
    A = R7;
    A--;
    RAM[0x5B] = A;
L_ROM_44E5:
    CY = 1;
    DPTR = 0xA1D2;
    A = XDATA[DPTR];
    A = A - 3;
    DPTR = 0xA1D1;
    A = XDATA[DPTR];
    A = A - 0;
    if (!CY) goto L_ROM_44FD;
L_ROM_44F4:
    F_ROM_4CE9();
    A = XDATA[DPTR];
    CY = 0;
L_ROM_44F9:
    A = A - 0x30;
    if (!CY) goto L_ROM_4500;
L_ROM_44FD:
    A = 0;
    RAM[0x5B] = A;
L_ROM_4500:
    B = 0x10;
    A = RAM[0x51];
    F_ROM_47CD();
    A = A & 0xF8;
    DPTR = 0xA1D7;
    XDATA[DPTR] = A;
    A = A | RAM[0x5B];
    R7 = A;
    XDATA[DPTR] = A;
    B = 0x10;
    A = RAM[0x51];
    F_0xBC7C();
    F_ROM_451D();
    A = XDATA[DPTR];
    CY = 1;
}

void F_ROM_451D(void)   /* code 0x451D */
    A = A - 5;
}

void F_ROM_451F(void)   /* code 0x451F */
    A = 0x11;
    if (!CY) goto L_ROM_452A;
    F_ROM_451F();
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
L_ROM_4528:
    goto L_ROM_452E;
L_ROM_452A:
    F_ROM_451F();
    A = 0;
    XDATA[DPTR] = A;
L_ROM_452E:
    RAM[0x5C] = 1;
    R5 = 1;
    R7 = RAM[0x51];
    F_0xB489();
L_ROM_4538:
    RAM[0x51]++;
    goto L_ROM_4049+2;
}

void F_ROM_4540(void)   /* code 0x4540 */
    F_ROM_42F4+1();
    CY = CY & ACC_4;
    A = A + 0x9C + CY;
    DPH = A;
    return;
}

void F_ROM_454D(void)   /* code 0x454D */
    DPL = A;
    A = 0;
    A = A + 0x93 + CY;
    DPH = A;
}

void F_ROM_4556(void)   /* code 0x4556 */
    F_ROM_4025();
    F_ROM_42F4+1();
    CY = CY & ACC_4;
    A = A + 0x98 + CY;
    return;
}

void F_ROM_4567(void)   /* code 0x4567 */
    A = 0;
    A = A + 0x9B + CY;
    DPH = A;
    return;
}

void F_ROM_4572(void)   /* code 0x4572 */
    A = A - R6;
    ACC_0 = CY;
    return;
}

void F_ROM_4579(void)   /* code 0x4579 */
    F_ROM_4596();
L_ROM_457C:
    DPTR = 8;
    goto L_code_7AB;
}

void F_ROM_4585(void)   /* code 0x4585 */
    A = RAM[0x51];
    DPTR = 0x8105;
}

void F_ROM_458A(void)   /* code 0x458A */
    goto L_ROM_458A;
}

void F_ROM_458E(void)   /* code 0x458E */
    goto L_ROM_4025;
}

void F_ROM_459F(void)   /* code 0x459F */
    A = 0;
    A = A + 0x9A + CY;
    DPH = A;
    return;
}

void F_ROM_45A8(void)   /* code 0x45A8 */
    XDATA[DPTR] = A;
    B = 0x10;
    A = RAM[0x51];
    DPTR = 0x8100;
    goto L_ROM_458A;
}

void F_ROM_468D(void)   /* code 0x468D */
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    DPTR = 0xA298;
    XDATA[DPTR] = A;
    A = RAM[0x67];
    A = A & 7;
    DPTR = 0xA29A;
    XDATA[DPTR] = A;
    B = 0x10;
    A = R7;
    F_ROM_47CD();
    DPTR = 0xA29B;
    F_nullsub_8();
    A = XDATA[DPTR];
L_ROM_46AB:
    A = A & 0x7F;
    DPTR = 0xA29E;
    XDATA[DPTR] = A;
    B = 4;
    A = RAM[0x67];
    F_0x9559();
    A = XDATA[DPTR];
    DPTR = 0xA29F;
    XDATA[DPTR] = A;
    F_0xBC85();
    A = RAM[0x69];
    if (A != 0) goto L_ROM_46FE;
    A = RAM[0x67];
L_ROM_46C7:
    if (A == 0) goto L_ROM_46CE;
    CY = 0;
    A = A - 4;
    if (CY) goto L_ROM_46D5;
L_ROM_46CE:
    R5 = RAM[0x68];
    R7 = RAM[0x67];
    F_0xB460();
L_ROM_46D5:
    DPTR = 0xA299;
    A = XDATA[DPTR];
    R7 = A;
    F_0xBB13();
    A = 0;
    A = CODE[CODE[A + DPTR]];
    R4 = A;
    A = 1;
    A = CODE[CODE[A + DPTR]];
    R5 = A;
    A = R7;
    F_0xBB05();
    A = 1;
    A = CODE[CODE[A + DPTR]];
    A = A + R5;
    R7 = A;
    A = 0;
    A = CODE[CODE[A + DPTR]];
    A = A + R4 + CY;
    CY = 0;
    A = RORC8(A);
    R6 = A;
    A = R7;
    A = RORC8(A);
    R7 = A;
    A = RAM[0x67];
    F_0x9473();
    F_ROM_47E4();
    XDATA[DPTR] = A;
L_ROM_46FE:
    DPTR = 0xA29E;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA299;
    A = XDATA[DPTR];
    R6 = A;
    CY = 1;
    A = A - R7;
    if (CY) goto L_ROM_4717;
    A = RAM[0x68];
    A = A & 0x80;
    R5 = A;
    A = R7;
    A = A | R5;
    RAM[0x68] = A;
    goto L_ROM_4723;
L_ROM_4717:
    DPTR = 0xA29F;
    A = XDATA[DPTR];
    R7 = A;
    A = R6;
    CY = 0;
    A = A - R7;
    if (!CY) goto L_ROM_4723;
    RAM[0x68] = R7;
L_ROM_4723:
    F_0xBC85();
    A = RAM[0x68];
    A = A & 0x80;
    DPTR = 0xA29C;
    XDATA[DPTR] = A;
    A = RAM[0x69];
    if (A != 0) goto L_ROM_4759;
    DPTR = 0xA298;
    F_ROM_47C1+1();
    PUSH(DPH);
    PUSH(DPL);
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA29A;
    F_0xBB37();
    goto L_ROM_4747;
L_ROM_4745:
    CY = 0;
    A = ROLC8(A);
L_ROM_4747:
    if (--R0 != 0) goto L_ROM_4745;
    A = ~A;
    A = A & R7;
    DPL = POP();
    DPH = POP();
    XDATA[DPTR] = A;
    DPTR = 0xA29B;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    goto L_ROM_479B;
L_ROM_4759:
    DPTR = 0xA298;
    F_ROM_47C1+1();
    PUSH(DPH);
    PUSH(DPL);
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA29A;
    F_0xBB37();
    goto L_ROM_476E;
L_ROM_476C:
    CY = 0;
    A = ROLC8(A);
L_ROM_476E:
    if (--R0 != 0) goto L_ROM_476C;
    A = A | R7;
    DPL = POP();
    DPH = POP();
    XDATA[DPTR] = A;
    B = 0x10;
    A = RAM[0x67];
    DPTR = 0x8101;
    F_ROM_47DA+1();
    R7 = A;
    DPTR = 0xA29B;
    XDATA[DPTR] = A;
    DPTR = 0xA299;
    A = XDATA[DPTR];
    DPTR = 0x41AD;
    A = CODE[CODE[A + DPTR]];
    R6 = A;
    A = ROLC8(A);
    A = ROLC8(A);
    A = ROLC8(A);
    A = A & 0xF8;
    A = A | R7;
    DPTR = 0xA29B;
    XDATA[DPTR] = A;
    A = A | 0x80;
    XDATA[DPTR] = A;
L_ROM_479B:
    B = 0x10;
    A = RAM[0x67];
    F_ROM_458E();
    A = RAM[0x68];
    XDATA[DPTR] = A;
    A = RAM[0x67];
    if (A != 0) goto L_ROM_47AF;
    DPTR = 0x1C8;
    A = RAM[0x68];
    XDATA[DPTR] = A;
L_ROM_47AF:
    DPTR = 0xA29B;
    A = XDATA[DPTR];
    R7 = A;
    B = 0x10;
    A = RAM[0x67];
    F_0xBC7C();
    B = 0x10;
    A = RAM[0x67];
L_ROM_47C1:
    F_ROM_4567();
}

void F_ROM_47C5(void)   /* code 0x47C5 */
    R4 = A;
    R7 = A;
    A = RAM[0x6A];
    A = A & 3;
    A = A | R7;
L_ROM_47CC:
    R7 = A;
}

void F_ROM_47CD(void)   /* code 0x47CD */
    B = 0x10;
    A = RAM[0x67];
    F_ROM_4567();
    A = R7;
    XDATA[DPTR] = A;
    R5 = 1;
    R7 = RAM[0x67];
L_ROM_47DA:
    F_0xB489();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_47E4(void)   /* code 0x47E4 */
    goto L_ROM_44F4+1;
}

void F_ROM_47EB(void)   /* code 0x47EB */
    A = CODE[CODE[A + PC]];
    return;
}

void F_ROM_4862(void)   /* code 0x4862 */
    A = CODE[CODE[A + PC]];
    ACC = POP();
    RETI(); return;
}

void F_ROM_48A8(void)   /* code 0x48A8 */
    A++;
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    PSW = POP();
    DPL = POP();
    DPH = POP();
L_ROM_48B7:
    B = POP();
    ACC = POP();
    RETI(); return;
}

void F_ROM_48BE(void)   /* code 0x48BE */
    R6 = 0;
    F_ROM_3DC2();
    R7 = 0xF2;
    F_ROM_46AB();
    A = R7;
    if (ACC_6) { goto L_ROM_48D6; }
    R7 = 5;
    F_ROM_48B7();
    R5 = A;
    R7 = 5;
    F_ROM_468D();
L_ROM_48D6:
    return;
}

void F_ROM_49C3(void)   /* code 0x49C3 */
    XDATA[DPTR] = A;
    A = 0x79;
    DPTR++;
    XDATA[DPTR] = A;
    RAM_7 = POP();
    RAM_6 = POP();
    RAM_5 = POP();
    RAM_4 = POP();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    PSW = POP();
    DPL = POP();
    DPH = POP();
    B = POP();
    ACC = POP();
    RETI(); return;
}

void F_ROM_4A4F(void)   /* code 0x4A4F */
    DPTR = 0x47F;
    A = RAM[0x65];
    XDATA[DPTR] = A;
}

void F_ROM_4A55(void)   /* code 0x4A55 */
    DPTR = 0xA1E9;
    A = XDATA[DPTR];
    R7 = 4;
    if (A != 0) goto L_ROM_4A60;
}

void F_ROM_4A5D(void)   /* code 0x4A5D */
    goto L_ROM_5AD4;
}

void F_ROM_4C60(void)   /* code 0x4C60 */
    CY = SFR_D8_0;
    A = XDATA[DPTR];
    if (CY) goto L_ROM_4C6E;
    A = A + 0x91;
    F_ROM_4C6C();
L_ROM_4C69:
    A = 1;
    XDATA[DPTR] = A;
}

void F_ROM_4C6C(void)   /* code 0x4C6C */
    goto L_ROM_4C74;
L_ROM_4C6E:
    A = A + 0x91;
    F_ROM_4C6C();
    A = 0;
    XDATA[DPTR] = A;
L_ROM_4C74:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_4CD3(void)   /* code 0x4CD3 */
    R7 = A;
    A = A & 8;
    R6 = A;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    RAM[0x59] = A;
    A = R7;
    A = A & 4;
}

void F_ROM_4CE1(void)   /* code 0x4CE1 */
    A = RORC8(A);
L_ROM_4CE2:
    A = RORC8(A);
    A = A & 0x3F;
    RAM[0x5A] = A;
    A = RAM[0x56];
}

void F_ROM_4CE9(void)   /* code 0x4CE9 */
    F_0xBC58();
L_ROM_4CEC:
    F_ROM_4E28();
    A = A & 0x7F;
    A = A | R7;
    XDATA[DPTR] = A;
    A = RAM[0x55];
    F_0x9121();
    F_ROM_4E28();
    A = A & 0xBF;
    A = A | R7;
    XDATA[DPTR] = A;
    A = RAM[0x59];
    if (A != 0) goto L_ROM_4D6A;
    A = RAM[0x53];
    A = A & 0x1F;
    F_ROM_4F80();
    A = A & 0xE0;
    A = A | R7;
    XDATA[DPTR] = A;
    A = RAM[0x54];
    A = A & 3;
    F_ROM_4E28();
    A = A & 0xFC;
    A = A | R7;
    XDATA[DPTR] = A;
    A = R7;
    A = A + ACC;
    A = A + ACC;
    F_ROM_4E28();
    A = A & 0xF3;
    A = A | R7;
    XDATA[DPTR] = A;
    A = RAM[0x52];
    A = A & 1;
    A = SWAP(A);
    A = ROLC8(A);
    A = A & 0xE0;
    F_ROM_4F80();
    A = A & 0xDF;
    A = A | R7;
    XDATA[DPTR] = A;
    A = RAM[0x57];
    A = A & 3;
    A = SWAP(A);
    A = A & 0xF0;
    F_ROM_4E28();
    A = A & 0xCF;
    A = A | R7;
    XDATA[DPTR] = A;
    A = 0;
    RAM[0x58] = A;
}

void F_ROM_4DF7(void)   /* code 0x4DF7 */
    A = A - R6;
    A = DEC_ADJ(A);
    F_ROM_458A();
    A = DPL;
    A = A + R1;
    F_ROM_4A55();
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA304;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_4DC1;
L_ROM_4E0B:
    DPTR = 0xA303;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2F3;
    F_0xBB37();
    goto L_ROM_4E1A;
L_ROM_4E18:
    CY = 0;
    A = ROLC8(A);
L_ROM_4E1A:
    if (--R0 != 0) goto L_ROM_4E18;
    A = ~A;
    A = A & R7;
    DPTR = 0xA303;
    XDATA[DPTR] = A;
    DPTR = 0xA2F3;
    A = XDATA[DPTR];
    R7 = A;
}

void F_ROM_4E28(void)   /* code 0x4E28 */
    goto L_ROM_48A8;
}

void F_ROM_4E2E(void)   /* code 0x4E2E */
    CY = 0;
    A = ROLC8(A);
L_ROM_4E30:
    if (--R0 != 0) goto L_ROM_4E2E;
    DPTR = 0x1CC;
    XDATA[DPTR] = A;
L_ROM_4E36:
    DPTR = 0xA2F3;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = A & 3;
    XDATA[DPTR] = A;
    DPTR = 0x9F21;
    F_ROM_4FE0();
    if (A != 0xA) goto L_ROM_4E4A;
    R7 = 1;
L_ROM_4E4A:
    A = R7;
    if (A != 0) goto L_ROM_4E4F;
    goto L_ROM_4D55;
L_ROM_4E4F:
    A = 0;
    DPTR = 0x9F21;
    XDATA[DPTR] = A;
L_ROM_4E54:
    goto L_ROM_4D55;
}

void F_ROM_4E83(void)   /* code 0x4E83 */
    R0++;
    return;
}

void F_ROM_4F80(void)   /* code 0x4F80 */
    XDATA[DPTR] = A;
    if (P1_0) { P1_0 = 0; goto L_ROM_4F05; }
    R1++;
L_ROM_4F85:
    F_ROM_458A();
}

void F_ROM_4F8E(void)   /* code 0x4F8E */
    XDATA[DPTR] = A;
}

void F_ROM_4F8F(void)   /* code 0x4F8F */
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    R7 = A;
}

void F_ROM_4F94(void)   /* code 0x4F94 */
    DPTR = 0xA13C;
}

void F_ROM_4F9C(void)   /* code 0x4F9C */
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    A = A + 0x81;
L_ROM_4FA2:
    F_ROM_4FBC();
L_ROM_4FA4:
    A = 1;
    XDATA[DPTR] = A;
L_ROM_4FA7:
    DPTR = 0xA13D;
}

void F_ROM_4FB5(void)   /* code 0x4FB5 */
    goto L_ROM_4C03;
}

void F_ROM_4FBC(void)   /* code 0x4FBC */
    DPL = A;
    A = 0;
    A = A + 0xA1 + CY;
    DPH = A;
    return;
}

void F_ROM_4FC4(void)   /* code 0x4FC4 */
    A = 0;
    R7 = A;
    goto L_ROM_4E92;
}

void F_ROM_4FCD(void)   /* code 0x4FCD */
    SFR_B1 = R2;
    A = A | R3;
L_ROM_4FD0:
    R7 = 2;
}

void F_ROM_4FD2(void)   /* code 0x4FD2 */
    goto L_ROM_5AD4;
}

void F_ROM_4FD9(void)   /* code 0x4FD9 */
    if (CY) goto L_ROM_4FCB;
    return;
}

void F_ROM_4FE0(void)   /* code 0x4FE0 */
    A = CODE[CODE[A + DPTR]];
    DPH = A;
    return;
}

void F_ROM_4FF6(void)   /* code 0x4FF6 */
    A = A + R5 + CY;
    A = XDATA[DPTR];
}

void F_ROM_4FF9(void)   /* code 0x4FF9 */
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
}

void F_ROM_4FFD(void)   /* code 0x4FFD */
    RAM[0x6A] = A;
    return;
}

void F_ROM_5003(void)   /* code 0x5003 */
    A = XDATA[DPTR];
    R7 = 0;
L_ROM_5006:
    return;
}

void F_ROM_501B(void)   /* code 0x501B */
    A = ROR8(A);
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0x1C4;
    A = 0xE7;
    XDATA[DPTR] = A;
    A = 0x7F;
    DPTR++;
    XDATA[DPTR] = A;
    F_0xB1B3();
    A = RAM[0x21];
    if (!ACC_1) { goto L_ROM_5039; }
    F_0xB1F0();
L_ROM_5039:
    A = RAM[0x21];
    if (!ACC_2) { goto L_ROM_5041; }
    F_0xA3DA();
L_ROM_5041:
    A = RAM[0x21];
    if (!ACC_5) { goto L_ROM_5048; }
    F_ROM_50A5();
}

void F_ROM_5048(void)   /* code 0x5048 */
    A = RAM[0x22];
    if (!ACC_0) { goto L_ROM_5050; }
    F_0xAB8C();
L_ROM_5050:
    A = RAM[0x23];
    if (!ACC_1) { goto L_ROM_5058; }
    F_0xA45E();
L_ROM_5058:
    A = RAM[0x23];
    if (!ACC_0) { goto L_ROM_5060; }
    F_0xA30E();
L_ROM_5060:
    A = RAM[0x23];
    if (!ACC_4) { goto L_ROM_5067; }
    F_ROM_57D7();
L_ROM_5067:
    A = RAM[0x23];
    if (!ACC_2) { goto L_ROM_5076; }
    F_0xB1FF();
    DPTR = 0x78F;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
L_ROM_5076:
    A = RAM[0x24];
    if (!ACC_1) { goto L_ROM_5080; }
    R7 = 4;
    F_ROM_5AD4();
L_ROM_5080:
    A = RAM[0x24];
    if (!ACC_4) { goto L_ROM_5087; }
    F_ROM_50BC+1();
L_ROM_5087:
    A = RAM[0x24];
    if (!ACC_5) { goto L_ROM_508F; }
    F_ROM_6B43();
L_ROM_508F:
    A = RAM[0x24];
    if (!ACC_6) { goto L_ROM_5097; }
    F_ROM_6B74();
L_ROM_5097:
    A = RAM[0x24];
    if (!ACC_7) { goto L_ROM_509F; }
    F_ROM_8BCD();
L_ROM_509F:
    A = 0xE7;
    A++;
    DPTR = 0x1C4;
}

void F_ROM_50A5(void)   /* code 0x50A5 */
    XDATA[DPTR] = A;
    A = 0x7F;
    DPTR++;
    XDATA[DPTR] = A;
    RAM_7 = POP();
    RAM_6 = POP();
    RAM_5 = POP();
    RAM_4 = POP();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    PSW = POP();
L_ROM_50BC:
    DPL = POP();
}

void F_ROM_50E3(void)   /* code 0x50E3 */
    F_ROM_50E3();
    DPTR = 0xA03D;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5102; }
    F_0xBC4F();
L_ROM_50EF:
    DPTR = 0xA040;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_50FA;
    A--;
    XDATA[DPTR] = A;
    goto L_B9D2;
L_ROM_50FA:
    F_0x9EC1();
    A = 0;
    R7 = A;
    F_ROM_64C9();
L_ROM_5102:
    return;
}

void F_ROM_517C(void)   /* code 0x517C */
    DPTR = 0xA054;
    A = XDATA[DPTR];
    R7 = A;
L_ROM_5181:
    DPTR = 0xA05F;
    A = XDATA[DPTR];
    R6 = A;
    CY = 1;
    A = A - R7;
    if (CY) goto L_ROM_51BE;
    A = R6;
L_ROM_518B:
    B = 3;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    R7 = A;
    DPTR = 0xA056;
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = R7;
    A = A - R6;
    R7 = A;
    A = A + 3;
    R5 = A;
    A = 0;
    A = ROLC8(A);
    R4 = A;
    DPTR = 0xA04C;
    A = XDATA[DPTR];
    R6 = A;
    F_0xAB82();
    if (CY) goto L_ROM_51B1;
    A = R6;
    A = A - R7;
    DPTR = 0xA2BF;
    XDATA[DPTR] = A;
    goto L_ROM_51B7;
L_ROM_51B1:
    DPTR = 0xA2BF;
    A = 3;
    XDATA[DPTR] = A;
L_ROM_51B7:
    DPTR = 0xA2BF;
    F_ROM_52CA();
    goto L_ROM_51D1;
L_ROM_51BE:
    DPTR = 0xA057;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_52BB();
    DPTR = 0xA052;
    A = 4;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA05D;
    F_ROM_54B4();
L_ROM_51D1:
    A = 0;
    DPTR = 0xA05F;
    XDATA[DPTR] = A;
    goto L_ROM_51DD;
L_ROM_51D8:
    DPTR = 0xA04C;
    F_ROM_52CA();
L_ROM_51DD:
    DPTR = 0xA04A;
    F_ROM_4FD0+1();
    if (!ACC_0) { goto L_ROM_51ED; }
    A = 0;
    DPTR = 0xA2BE;
    XDATA[DPTR] = A;
    goto L_ROM_51F3;
L_ROM_51ED:
    DPTR = 0xA2BE;
    A = 1;
    XDATA[DPTR] = A;
L_ROM_51F3:
    F_0xBCB2();
    if (ACC_0) { goto L_ROM_520C; }
    DPTR = 0xA08C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5206;
    A = 0;
    DPTR = 0xA2BD;
    XDATA[DPTR] = A;
    goto L_ROM_520C;
L_ROM_5206:
    DPTR = 0xA2BD;
    A = 1;
    XDATA[DPTR] = A;
L_ROM_520C:
    DPTR = 0xA2BD;
L_ROM_520F:
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    F_ROM_4862();
    DPTR = 0xA05C;
    A = 1;
    XDATA[DPTR] = A;
    F_RAM_73();
    if (!ACC_0) { goto L_ROM_5230; }
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_5268;
    R5 = A;
    R7 = A;
    F_ROM_54C6();
    goto L_ROM_5268;
L_ROM_5230:
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_5254; }
    DPTR = 0xA050;
    A = XDATA[DPTR];
    A = A | 0x20;
    XDATA[DPTR] = A;
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_524B;
    R5 = 1;
    goto L_ROM_5263;
L_ROM_524B:
    F_ROM_663A();
    R5 = 1;
    R7 = 0xC;
    goto L_ROM_5265;
L_ROM_5254:
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_5268;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5268;
    A = 0;
    R5 = A;
L_ROM_5263:
    R7 = 4;
L_ROM_5265:
    F_ROM_6259+1();
L_ROM_5268:
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5286;
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_5278;
    R5 = 4;
    goto L_ROM_5282;
L_ROM_5278:
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    A = A ^ 3;
    if (A != 0) goto L_ROM_52B0;
    R5 = 0xB;
L_ROM_5282:
    R7 = 0x6F;
    goto L_ROM_52AD;
L_ROM_5286:
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_5290;
    R5 = A;
    R7 = A;
    goto L_ROM_52AD;
L_ROM_5290:
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_52B0;
    F_0xA10F();
    A = A & 7;
    if (ACC_0) { goto L_ROM_52AA; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_52AA; }
    F_0xA117();
L_ROM_52AA:
    A = 0;
    R5 = A;
    R7 = A;
L_ROM_52AD:
    F_ROM_54C6();
L_ROM_52B0:
    F_ROM_4FCD+1();
    if (!ACC_0) { goto L_ROM_52BB; }
    R7 = 1;
    F_0x8FDD();
}

void F_ROM_52BB(void)   /* code 0x52BB */
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_52D2; }
    DPTR = 0x6CD;
    A = XDATA[DPTR];
    A = A | 0x10;
}

void F_ROM_52CA(void)   /* code 0x52CA */
    XDATA[DPTR] = A;
    DPTR = 0x6CF;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
L_ROM_52D2:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_540D(void)   /* code 0x540D */
    A = 0;
    R7 = A;
    F_ROM_552E();
    F_0xBA45();
    DPTR++;
    A = XDATA[DPTR];
    A = A & 0xFD;
    XDATA[DPTR] = A;
    DPTR = 0xA051;
    A = XDATA[DPTR];
L_ROM_541D:
    A = A & 0xFD;
    XDATA[DPTR] = A;
    A = A & 0xFB;
    F_ROM_6452+1();
    R7 = 3;
    F_ROM_8832();
    DPTR = 0x522;
    A = XDATA[DPTR];
    A = A | 0x10;
    R7 = A;
    R5 = 3;
    F_ROM_54C6();
    DPTR = 0x49C;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_54AF(void)   /* code 0x54AF */
    A = ROR8(A);
L_ROM_54B0:
    A = 2;
    XDATA[DPTR] = A;
L_ROM_54B3:
    A = 0;
}

void F_ROM_54B4(void)   /* code 0x54B4 */
    DPTR = 0xA052;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_54C3(void)   /* code 0x54C3 */
    XDATA[DPTR] = A;
    goto L_ROM_54C9;
}

void F_ROM_54C6(void)   /* code 0x54C6 */
    A = 2;
    XDATA[DPTR] = A;
L_ROM_54C9:
    A = 0;
    DPTR = 0xA052;
    XDATA[DPTR] = A;
L_ROM_54CE:
    return;
}

void F_ROM_54D0(void)   /* code 0x54D0 */
    CY = CY | !RAM[0x2A]_2;
    A = 9;
    XDATA[DPTR] = A;
    DPTR = 0x692;
    A = 4;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_552E(void)   /* code 0x552E */
    DPTR = 0xA2A4;
    A = R6;
    XDATA[DPTR] = A;
    R4 = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    R5 = A;
    DPTR = 0xA2A3;
    A = XDATA[DPTR];
    R7 = A;
    A = 0x10;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA2A2;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_56EE();
    A = A & 0x3F;
    XDATA[DPTR] = A;
    A = R7;
    if (A == 0) goto L_ROM_5586;
    F_ROM_56F8+2();
    A = A | 0x10;
    XDATA[DPTR] = A;
    F_ROM_56EE();
    A = A | 0x80;
    XDATA[DPTR] = A;
    F_ROM_57D7+1();
    A = A & 7;
    if (!ACC_0) { goto L_ROM_5590; }
    F_ROM_8D45();
    if (!CY) goto L_ROM_5578;
    A = R7;
    A = A + ACC;
    A = A + ACC;
L_ROM_5571:
    R7 = A;
    A = 0x2B;
    A = A + R5;
    goto L_A045;
L_ROM_5578:
    A = 0x2B;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = 0x7F;
    XDATA[DPTR] = A;
    return;
L_ROM_5586:
    F_ROM_56F8+2();
    A = A & 0xEF;
    XDATA[DPTR] = A;
    F_ROM_56EE();
    A = A | 0x40;
    XDATA[DPTR] = A;
L_ROM_5590:
    return;
}

void F_ROM_5616(void)   /* code 0x5616 */
    goto L_F106;
}

void F_ROM_56B0(void)   /* code 0x56B0 */
    XDATA[DPTR] = A;
    A = 0x11;
    A = A + R6;
    F_ROM_57B6();
    A = 0xFF;
    XDATA[DPTR] = A;
    A = 0x29;
    A = A + R6;
    F_ROM_56FD();
    A = A & 0xF7;
    XDATA[DPTR] = A;
    DPTR = 0xA04A;
}

void F_ROM_56C4(void)   /* code 0x56C4 */
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_56D5; }
    F_0xBBD5();
    A = A | 0x80;
    XDATA[DPTR] = A;
    DPTR = 0x512;
    A = 0;
    XDATA[DPTR] = A;
    goto L_ROM_56DB;
L_ROM_56D5:
    F_0xBBD5();
    A = A & 0x7F;
    XDATA[DPTR] = A;
L_ROM_56DB:
    R6 = RAM_4;
    R7 = RAM_5;
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_56EE(void)   /* code 0x56EE */
    DPTR = 0xA2D7;
    A = 0xA;
    XDATA[DPTR] = A;
    R5 = 1;
    F_ROM_5616();
L_ROM_56F8:
    DPTR = 0xA2B4;
}

void F_ROM_56FD(void)   /* code 0x56FD */
    R4 = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    R5 = A;
    DPTR = 0xA2B2;
    A = XDATA[DPTR];
}

void F_ROM_5706(void)   /* code 0x5706 */
    R7 = A;
    F_ROM_552E();
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    return;
}

void F_ROM_5751(void)   /* code 0x5751 */
    A = XDATA[DPTR];
    A = A | 0x1F;
    XDATA[DPTR] = A;
    R4 = RAM_7;
    A = 6;
    A = A + R4;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    A = A | 0xE;
    XDATA[DPTR] = A;
    DPTR = 0x4A7;
    A = 0;
    XDATA[DPTR] = A;
    DPTR = 0x4A6;
    XDATA[DPTR] = A;
L_ROM_576E:
    DPTR = 0x4A5;
    A = 0xFF;
    XDATA[DPTR] = A;
    DPTR = 0x4A4;
L_ROM_5777:
    A = 0xFD;
}

void F_ROM_5780(void)   /* code 0x5780 */
    A = A & 0xC0;
    A = A | R5;
    R5 = A;
    A = 0x14;
    A = A + R7;
    F_ROM_5777+1();
    A = R5;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_57AE(void)   /* code 0x57AE */
    { uint8 t = A; A = R4; R4 = t; }
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2D7;
    A = 0xB;
L_ROM_57B6:
    XDATA[DPTR] = A;
    R3 = 8;
    R5 = 1;
    F_ROM_5616();
L_ROM_57BD:
    DPTR = 0xA2E9;
}

void F_ROM_57C5(void)   /* code 0x57C5 */
    XDATA[DPTR] = A;
}

void F_ROM_57C6(void)   /* code 0x57C6 */
    R5 = A;
    DPTR = 0xA2E8;
    A = XDATA[DPTR];
L_ROM_57CB:
    R7 = A;
    goto L_ROM_552E;
}

void F_ROM_57CE(void)   /* code 0x57CE */
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
}

void F_ROM_57DC(void)   /* code 0x57DC */
    A = CODE[CODE[A + PC]];
    return;
}

void F_ROM_57F3(void)   /* code 0x57F3 */
    DPTR = 0xA05D;
    return;
}

void F_ROM_57F9(void)   /* code 0x57F9 */
    CY = CY | !RAM[0x29]_6;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    return;
}

void F_ROM_581D(void)   /* code 0x581D */
    goto L_ROM_58C4;
}

void F_ROM_5832(void)   /* code 0x5832 */
    XDATA[DPTR] = A;
    A = 0x87;
    DPTR++;
    XDATA[DPTR] = A;
    RAM_7 = POP();
    RAM_6 = POP();
    RAM_5 = POP();
    RAM_4 = POP();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    PSW = POP();
    DPL = POP();
    DPH = POP();
    B = POP();
    ACC = POP();
    RETI(); return;
}

void F_ROM_586B(void)   /* code 0x586B */
    if (A == 0) goto L_ROM_587B;
    A = A + 0xFA;
    if (A == 0) goto L_ROM_587F;
    A = A + 0xFC;
    if (A == 0) goto L_ROM_5883;
    A = A + 0xC;
    R7 = 2;
    goto L_ROM_5885;
L_ROM_587B:
    R7 = 3;
    goto L_ROM_5885;
L_ROM_587F:
    R7 = 0xB;
    goto L_ROM_5885;
L_ROM_5883:
    R7 = 0xE;
L_ROM_5885:
    DPTR = 0x778;
    A = R7;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_5898(void)   /* code 0x5898 */
    goto L_ROM_8019;
}

void F_ROM_58B1(void)   /* code 0x58B1 */
    if (R4 != 1) goto L_ROM_58B8;
    R7 = 3;
    goto L_ROM_58C6;
L_ROM_58B8:
    F_ROM_58FB+2();
    if (R4 != 2) goto L_ROM_58C1;
L_ROM_58BD:
    R7 = 9;
    goto L_ROM_58C6;
L_ROM_58C1:
    if (R4 != 3) goto L_ROM_58C8;
}

void F_ROM_58C4(void)   /* code 0x58C4 */
    R7 = 0xD;
L_ROM_58C6:
    F_ROM_5832();
L_ROM_58C8:
    DPTR = 0xA099;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (!ACC_0) { goto L_ROM_590D; }
    A = R5;
    if (A != 0) goto L_ROM_58F1;
    DPTR++;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_58E6; }
    A = 0;
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
    goto L_ROM_58E8;
L_ROM_58E6:
    F_ROM_58EE();
L_ROM_58E8:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    R5 = A;
    A = 0;
}

void F_ROM_58EE(void)   /* code 0x58EE */
    R7 = A;
    goto L_ROM_590A;
L_ROM_58F1:
    DPTR = 0xA09A;
L_ROM_58F4:
    F_ROM_5FDD+2();
L_ROM_58F7:
    if (!ACC_0) { goto L_ROM_5901; }
    A = 0;
L_ROM_58FB:
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
    goto L_ROM_5903;
L_ROM_5901:
    F_ROM_58EE();
L_ROM_5903:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    R5 = A;
    R7 = 1;
L_ROM_590A:
    F_ROM_4862();
L_ROM_590D:
    return;
}

void F_ROM_596D(void)   /* code 0x596D */
    goto L_ROM_5988;
L_ROM_596F:
    DPTR = 0xA0A0;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_5988;
L_ROM_5976:
    F_ROM_59E0+1();
    R3 = 1;
    R5 = 1;
    F_ROM_596D();
    DPTR = 0xA0A0;
    A = 2;
    XDATA[DPTR] = A;
    DPTR = 0xA09E;
    XDATA[DPTR] = A;
L_ROM_5988:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_59DA(void)   /* code 0x59DA */
    RAM[R1] = ACC;
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
L_ROM_59E0:
    F_ROM_5D4D+1();
    DPTR = 0xA099;
    F_ROM_59DA();
    if (ACC_0) { goto L_ROM_59F5; }
L_ROM_59EA:
    DPTR = 0xA1FA;
    A = XDATA[DPTR];
L_ROM_59EE:
    if (A != 0) goto L_ROM_59F5;
    R5 = A;
    R7 = A;
    F_ROM_54C6();
L_ROM_59F5:
    return;
}

void F_ROM_5A12(void)   /* code 0x5A12 */
    R7 = A;
    R5 = RAM_7;
    A = R6;
    R7 = A;
    DPTR = 0x16F;
    A = 0;
    XDATA[DPTR] = A;
    RAM[0x35] = R7;
    R7 = RAM_5;
    RAM[0x36] = R7;
    R3 = A;
    R5 = A;
    R7 = 0x6C;
    R6 = 1;
    F_ROM_3C8B+0x26();
    DPTR = 0x16F;
    A = 5;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_5A6D(void)   /* code 0x5A6D */
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_5A81; }
    A = R7;
    DPTR = 0x6CC;
    if (A != 0) goto L_ROM_5A7F;
L_ROM_5A79:
    A = XDATA[DPTR];
    A = A & 0xFC;
    XDATA[DPTR] = A;
    goto L_ROM_5A88;
L_ROM_5A7F:
    goto L_ROM_5A84;
L_ROM_5A81:
    DPTR = 0x6CC;
L_ROM_5A84:
    A = XDATA[DPTR];
    A = A | 3;
    XDATA[DPTR] = A;
L_ROM_5A88:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_5AD4(void)   /* code 0x5AD4 */
    goto L_ROM_5DF9;
}

void F_ROM_5AE3(void)   /* code 0x5AE3 */
    A = A & R2;
    F_ROM_82B7();
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_5AF7; }
    A = 0;
    DPTR = 0xA1FA;
    XDATA[DPTR] = A;
    goto L_ROM_5AFD;
L_ROM_5AF7:
    DPTR = 0xA1FA;
    A = 1;
    XDATA[DPTR] = A;
L_ROM_5AFD:
    F_0xBCB2();
    if (ACC_0) { goto L_ROM_5B16; }
    DPTR = 0xA08C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5B11;
    DPTR = 0xA1FB;
    A = 1;
    XDATA[DPTR] = A;
    goto L_ROM_5B16;
L_ROM_5B11:
    A = 0;
    DPTR = 0xA1FB;
L_ROM_5B15:
    XDATA[DPTR] = A;
L_ROM_5B16:
    DPTR = 0xA1FB;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA1FA;
    A = XDATA[DPTR];
    R5 = A;
    F_ROM_4862();
    A = 0;
    DPTR = 0xA05C;
    XDATA[DPTR] = A;
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 2) goto L_ROM_5B35;
    F_ROM_82CD+1();
    goto L_ROM_5B3E;
L_ROM_5B35:
    A = R7;
    if (A != 5) goto L_ROM_5B3E;
    A = 0;
    DPTR = 0xA05D;
    XDATA[DPTR] = A;
L_ROM_5B3E:
    F_ROM_5DE3();
    if (!ACC_0) { goto L_ROM_5B5A; }
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_5B4E;
    R5 = 8;
    goto L_ROM_5BA1;
L_ROM_5B4E:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    A = A ^ 5;
    if (A != 0) goto L_ROM_5BA6;
    R5 = 0xE;
    goto L_ROM_5BA1;
L_ROM_5B5A:
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_5B85; }
    F_ROM_87D8();
    A = A & 7;
    if (ACC_0) { goto L_ROM_5B6E; }
    F_ROM_5BB0+2();
L_ROM_5B6E:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_5B79;
    R5 = 9;
    goto L_ROM_5BA1;
L_ROM_5B79:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    A = A ^ 5;
    if (A != 0) goto L_ROM_5BA6;
    R5 = 0xF;
    goto L_ROM_5BA1;
L_ROM_5B85:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5BA6;
    F_ROM_5BB0+2();
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_5B98;
    R5 = 0xA;
    goto L_ROM_5BA1;
L_ROM_5B98:
    DPTR = 0xA1F9;
L_ROM_5B9B:
    A = XDATA[DPTR];
    if (A != 5) goto L_ROM_5BA6;
    R5 = 0x10;
L_ROM_5BA1:
    R7 = 0x6F;
    F_ROM_54C6();
L_ROM_5BA6:
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5BB0; }
    F_ROM_663A();
L_ROM_5BB0:
    F_ROM_4FCD+1();
}

void F_ROM_5C23(void)   /* code 0x5C23 */
    CY = CY | !RAM[0x2B]_5;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 3) goto L_ROM_5C2D;
    goto L_ROM_80EF;
L_ROM_5C2D:
    DPTR = 0xA05D;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 4) goto L_ROM_5C37;
L_ROM_5C35:
    goto L_ROM_5C42;
L_ROM_5C37:
    DPTR = 0xA05D;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 5) goto L_ROM_5C41;
L_ROM_5C3F:
    F_ROM_5A6D();
L_ROM_5C41:
    return;
L_ROM_5C42:
    DPTR = 0xA1F9;
    A = R7;
    XDATA[DPTR] = A;
    R7 = 3;
    F_ROM_82BB();
    F_ROM_87AE();
    DPTR = 0xA05D;
    if (!ACC_0) { goto L_ROM_5C5A; }
    A = 5;
    XDATA[DPTR] = A;
    goto L_ROM_5C5D;
L_ROM_5C5A:
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
L_ROM_5C5D:
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (ACC_0) { goto L_ROM_5C72; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    if (!ACC_0) { goto L_ROM_5CAA; }
L_ROM_5C72:
    F_ROM_87AE();
    if (!ACC_0) { goto L_ROM_5C82; }
    DPTR = 0xA04B;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA05B;
    goto L_ROM_5CA3;
L_ROM_5C82:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    R4 = A;
    if (A != 1) goto L_ROM_5C97;
    DPTR = 0xA04B;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0xA05A;
    A = XDATA[DPTR];
    CY = 0;
    A = A - R6;
    goto L_ROM_5CA6;
L_ROM_5C97:
    A = R4;
    if (A != 4) goto L_ROM_5CAA;
    DPTR = 0xA04C;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA05A;
L_ROM_5CA3:
    A = XDATA[DPTR];
    CY = 0;
    A = A - R7;
L_ROM_5CA6:
    DPTR = 0xA061;
    XDATA[DPTR] = A;
L_ROM_5CAA:
    F_ROM_5DE3();
    if (!ACC_0) { goto L_ROM_5CD2; }
    F_ROM_87D8();
    A = A & 7;
    if (ACC_0) { goto L_ROM_5CB9; }
    goto L_ROM_5D1E;
L_ROM_5CB9:
    F_ROM_5D43+2();
    if (!CY) goto L_ROM_5CC7;
    A = R7;
    A = A + ACC;
    A = A + ACC;
    R3 = A;
    A = 0;
    R5 = A;
    goto L_ROM_5CCC;
L_ROM_5CC7:
    R3 = 0x7F;
    R5 = 0xFF;
    A = 0;
L_ROM_5CCC:
    R7 = A;
    F_0xA04F();
    goto L_ROM_5D3E;
L_ROM_5CD2:
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_5D25; }
    F_0xBC97();
    R5 = A;
    R7 = 4;
    F_ROM_6259+1();
    F_nullsub_10();
    if (!ACC_0) { goto L_ROM_5D25; }
    DPTR = 0xA051;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    A = A & 0xFB;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA060;
    XDATA[DPTR] = A;
    DPTR = 0xA05D;
    XDATA[DPTR] = A;
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 1) goto L_ROM_5D0E;
    DPTR = 0xA052;
    A = 6;
    XDATA[DPTR] = A;
    goto L_ROM_5D18;
L_ROM_5D0E:
    A = R7;
    if (A != 4) goto L_ROM_5D18;
    DPTR = 0xA052;
    A = 7;
    XDATA[DPTR] = A;
L_ROM_5D18:
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5D25;
L_ROM_5D1E:
    DPTR = 0xA051;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
L_ROM_5D25:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_5D30;
    R5 = 6;
    goto L_ROM_5D39;
L_ROM_5D30:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_5D3E;
    R5 = 0xC;
L_ROM_5D39:
    R7 = 0x6F;
    F_ROM_54C6();
L_ROM_5D3E:
    DPTR = 0xA04E;
}

void F_ROM_5D41(void)   /* code 0x5D41 */
    F_ROM_59DA();
L_ROM_5D43:
    if (!ACC_0) { goto L_ROM_5D5A; }
}

void F_ROM_5DF9(void)   /* code 0x5DF9 */
    R4 = A;
    DPH = A;
    A = R1;
    XDATA[DPTR] = A;
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_5FAB(void)   /* code 0x5FAB */
    F_ROM_5010();
    DPTR = 0x9FE2;
    A = XDATA[DPTR];
    B = 3;
}

void F_ROM_5FB5(void)   /* code 0x5FB5 */
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
}

void F_ROM_5FB6(void)   /* code 0x5FB6 */
    A = A + 0xFE;
    F_ROM_5FB6();
    DPTR = 0x9FF2;
L_ROM_5FBD:
    XDATA[DPTR] = A;
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    if (ACC_2) { goto L_ROM_5FC8; }
}

void F_ROM_5FC5(void)   /* code 0x5FC5 */
    F_ROM_6256();
L_ROM_5FC8:
    F_nullsub_7();
    return;
}

void F_ROM_5FD6(void)   /* code 0x5FD6 */
    R7 = A;
    DPTR = 0x9FE1;
    A = XDATA[DPTR];
    A = A + R7;
}

void F_ROM_5FDD(void)   /* code 0x5FDD */
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_5FF7(void)   /* code 0x5FF7 */
    CY = CY | !RAM[0x27]_3;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    return;
}

void F_ROM_6073(void)   /* code 0x6073 */
    DPTR = 0xA08C;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_60B2+1();
L_ROM_607A:
    if (!ACC_1) { goto L_ROM_607F; }
    R7 = 1;
L_ROM_607F:
    goto L_ROM_609C;
L_ROM_6081:
    DPTR = 0x9E98;
    A = XDATA[DPTR];
    A = A ^ 3;
    if (A != 0) goto L_ROM_60A1;
    F_ROM_60AA+2();
    if (!ACC_0) { goto L_ROM_6090; }
    R7 = 1;
L_ROM_6090:
    DPTR = 0xA08C;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_60AA+2();
    if (!ACC_1) { goto L_ROM_609C; }
    R7 = 1;
L_ROM_609C:
    DPTR = 0xA08D;
    A = R7;
    XDATA[DPTR] = A;
L_ROM_60A1:
    DPTR = 0xFD68;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    R7 = 1;
L_ROM_60AA:
    F_ROM_8832();
    F_ROM_60B8+2();
    F_0xA0B4();
L_ROM_60B2:
    DPTR = 0xA063;
}

void F_ROM_60CF(void)   /* code 0x60CF */
    A = XDATA[DPTR];
    R7 = 0;
    return;
}

void F_ROM_611A(void)   /* code 0x611A */
    R7 = 1;
L_ROM_611C:
    goto L_ROM_612D;
}

void F_ROM_6121(void)   /* code 0x6121 */
    A = XDATA[DPTR];
    A = A ^ 3;
    if (A != 0) goto L_ROM_6139;
    F_ROM_60AA+2();
    if (!ACC_2) { goto L_ROM_612D; }
    R7 = 1;
L_ROM_612D:
    A = R7;
    F_ROM_6121();
    R7 = A;
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    A = A & 0xBF;
    A = A | R7;
    XDATA[DPTR] = A;
L_ROM_6139:
    return;
}

void F_ROM_6181(void)   /* code 0x6181 */
    RAM[R0] = 0x80;
    goto L_C333;
}

void F_ROM_61BE(void)   /* code 0x61BE */
    A = R4;
    A--;
    DPTR = 0xA311;
    XDATA[DPTR] = A;
    A = 0xBD;
}

void F_ROM_61C6(void)   /* code 0x61C6 */
    A = A + R1;
    F_ROM_6181();
    A = XDATA[DPTR];
    R3 = A;
    R2 = 0;
    DPTR = 0xA311;
    F_ROM_6329();
    goto L_ROM_61D9;
L_ROM_61D4:
    CY = 0;
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
L_ROM_61D9:
    if (--R0 != 0) goto L_ROM_61D4;
    F_ROM_61DF();
    if (A == 0) goto L_ROM_61EE;
}

void F_ROM_61DF(void)   /* code 0x61DF */
    A = R1;
    B = 8;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    R7 = A;
    DPTR = 0xA311;
    A = XDATA[DPTR];
    A = A + R7;
    A++;
    R7 = A;
    goto L_ROM_61F4;
L_ROM_61EE:
    if (--R4 != 0) goto L_ROM_61BE;
L_ROM_61F0:
    if (--R5 != 0) goto L_ROM_61B2;
    R7 = 0;
L_ROM_61F4:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_6256(void)   /* code 0x6256 */
    A = 0x91;
    A = A + R4;
L_ROM_6259:
    F_ROM_6542();
    A = RAM[0x60];
    XDATA[DPTR] = A;
    A = R1;
    A = A ^ 0x2C;
    if (A != 0) goto L_ROM_628A;
    B = 4;
    A = R4;
    F_ROM_4E2E();
    R7 = A;
    A = A & 3;
    R6 = A;
    A = RAM[0x60];
    CY = 0;
    A = A - R6;
    if (!CY) goto L_ROM_628A;
    RAM[0x60]++;
    A = RAM[0x60];
    F_ROM_655F();
    A = R4;
    DPTR = 0x9614;
    F_ROM_458A();
    A = R7;
    A = A & 0xF3;
    A = A | R6;
    XDATA[DPTR] = A;
    RAM[0x5E] = R1;
    goto L_ROM_62E8;
L_ROM_628A:
    A = R1;
    CY = 0;
    A = A - RAM[0x61];
    if (!CY) goto L_ROM_62BF;
    A = R1;
    A++;
    R5 = A;
L_ROM_6293:
    A = R5;
    CY = 1;
    A = A - RAM[0x61];
    if (!CY) goto L_ROM_62E8;
    A = R5;
    F_ROM_6549+1();
    A = R4;
    F_ROM_7A4A+2();
    A = XDATA[DPTR];
    R3 = A;
    R2 = 0;
    A = R5;
    A = A & 7;
    F_ROM_632A();
    goto L_ROM_62B0;
L_ROM_62AB:
    CY = 0;
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
L_ROM_62B0:
    if (--R0 != 0) goto L_ROM_62AB;
    F_ROM_61DF();
    if (A == 0) goto L_ROM_62BC;
    R1 = RAM_5;
    RAM[0x5E] = R1;
    goto L_ROM_62E8;
L_ROM_62BC:
    R5++;
    goto L_ROM_6293;
L_ROM_62BF:
    A = R1;
    A = A ^ RAM[0x61];
    if (A != 0) goto L_ROM_62DE;
    B = 4;
    A = R4;
    F_ROM_4F85+1();
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (!ACC_0) { goto L_ROM_62F4; }
    A = RAM[0x5E];
L_ROM_62D4:
    if (ACC_7) { goto L_ROM_62F4; }
}

void F_ROM_62D8(void)   /* code 0x62D8 */
    A = A | 0x80;
    RAM[0x5E] = A;
    goto L_ROM_62E8;
L_ROM_62DE:
    A = 0x91;
    A = A + R4;
    F_ROM_62D8();
    A = RAM[0x61];
    XDATA[DPTR] = A;
    RAM[0x5E] = A;
L_ROM_62E8:
    R7 = RAM_4;
    RAM[0x6A] = RAM[0x60];
    R3 = RAM[0x5D];
    R5 = RAM[0x5E];
    F_ROM_7659();
L_ROM_62F4:
    return;
}

void F_ROM_6329(void)   /* code 0x6329 */
    A = R4;
}

void F_ROM_632A(void)   /* code 0x632A */
    F_ROM_655F();
    A = R7;
    F_ROM_4E2E();
    A = A & 0xF3;
    A = A | R6;
    XDATA[DPTR] = A;
L_ROM_6334:
    A = R5;
    CY = 1;
    A = A - R3;
    if (CY) goto L_ROM_633B;
    R5 = RAM_3;
L_ROM_633B:
    F_ROM_62D4+1();
    A = XDATA[DPTR];
    A = A & 0x80;
    RAM_5 = RAM_5 | A;
    RAM[0x6A] = R4;
    A = 0;
    R3 = A;
    goto L_ROM_7659;
}

void F_ROM_6472(void)   /* code 0x6472 */
    A = R5;
    CY = 1;
    A = A - R7;
    if (CY) goto L_ROM_647A;
L_ROM_6477:
    R4--;
L_ROM_6478:
    goto L_ROM_642B;
L_ROM_647A:
    R7 = RAM_5;
    RAM[0x5D] = R7;
    goto L_ROM_6486;
L_ROM_6480:
    DPTR = 0xA1DC;
    A = XDATA[DPTR];
L_ROM_6484:
    RAM[0x5D] = A;
L_ROM_6486:
    R7 = RAM_2;
    RAM[0x6A] = RAM[0x5E];
    A = 0;
    R3 = A;
    R5 = RAM[0x5D];
    goto L_ROM_7659;
}

void F_ROM_64C9(void)   /* code 0x64C9 */
    A = A & R5;
    DPTR++;
    A = XDATA[DPTR];
    RAM[0x5E] = A;
    A = 0;
    RAM[0x62] = A;
L_ROM_64D1:
    DPTR = 0xA1E1;
    F_ROM_4596();
    B = 2;
    A = RAM[0x62];
    F_0xBAF7();
    R0 = RAM[0x61];
    R0++;
    goto L_ROM_64E9;
L_ROM_64E4:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_64E9:
    if (--R0 != 0) goto L_ROM_64E4;
    R7 = A;
    DPTR = 0xA1DE;
    F_ROM_4596();
    DPL = RAM[0x62];
    F_ROM_6572();
    F_0xBD02();
    A = A + RAM[0x5E];
    RAM[0x5E] = A;
    A = R6;
    A = A + RAM[0x5D] + CY;
    RAM[0x5D] = A;
    RAM[0x62]++;
    A = RAM[0x62];
    if (A != 5) goto L_ROM_64D1;
    DPTR = 0xA1DE;
    F_ROM_4596();
    F_ROM_6D4E();
    R5 = A;
    R4 = 0;
L_ROM_6516:
    F_ROM_6539+1();
    R0 = RAM[0x61];
    R0++;
    goto L_ROM_6522;
L_ROM_651D:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_6522:
    if (--R0 != 0) goto L_ROM_651D;
    R7 = A;
    F_code_703();
    RAM[0x5F] = R6;
    RAM[0x60] = R7;
    CY = 1;
    A = RAM[0x5E];
    A = A - RAM[0x60];
    A = RAM[0x5D];
    A = A - RAM[0x5F];
    if (CY) goto L_ROM_6543;
    A = RAM[0x5E];
L_ROM_6539:
    A = A - RAM[0x60];
}

void F_ROM_6542(void)   /* code 0x6542 */
    A++;
L_ROM_6543:
    R6 = 0;
    R7 = 0;
    RAM[0x5D] = R6;
L_ROM_6549:
    RAM[0x5E] = R7;
}

void F_ROM_655F(void)   /* code 0x655F */
    DPTR++;
    A = XDATA[DPTR];
    return;
}

void F_ROM_6572(void)   /* code 0x6572 */
    R0++;
    return;
}

void F_ROM_6621(void)   /* code 0x6621 */
    A = R7;
    if (A != 3) goto L_ROM_65FC;
L_ROM_6625:
    return;
}

void F_ROM_6638(void)   /* code 0x6638 */
    F_ROM_67B4+2();
}

void F_ROM_663A(void)   /* code 0x663A */
    A = 0xC;
    XDATA[DPTR] = A;
    A = 0x11;
    A = A + RAM[0x54];
    F_ROM_4CEC+1();
    A = XDATA[DPTR];
    DPTR = 0xA1D2;
    XDATA[DPTR] = A;
    B = 4;
    A = RAM[0x54];
    F_ROM_4E2E();
    R5 = A;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    DPTR = 0xA1D3;
    XDATA[DPTR] = A;
    A = R5;
    F_ROM_4FD2();
    DPTR++;
    XDATA[DPTR] = A;
    B = 4;
    A = RAM[0x54];
    F_ROM_4E2E();
    R7 = A;
    A = SWAP(A);
    A = A & 3;
    DPTR = 0xA1D5;
    XDATA[DPTR] = A;
    B = 4;
    A = RAM[0x54];
    F_ROM_4FFD();
    A = XDATA[DPTR];
    DPTR = 0xA1D6;
    XDATA[DPTR] = A;
    B = 4;
    A = RAM[0x54];
    F_nullsub_6();
    A = XDATA[DPTR];
    DPTR = 0xA1D7;
    XDATA[DPTR] = A;
    B = 4;
L_ROM_668C:
    A = RAM[0x54];
    F_ROM_4F85+1();
    R5 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = A & 1;
    DPTR = 0xA1D8;
    XDATA[DPTR] = A;
    A = R5;
    A = A & 0x1F;
    DPTR++;
    goto L_ROM_6700;
L_ROM_66A0:
    F_ROM_67B4+2();
    A = 0xD;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8900;
    F_ROM_458A();
L_ROM_66B0:
    A = XDATA[DPTR];
    DPTR = 0xA1D2;
    XDATA[DPTR] = A;
    B = 8;
L_ROM_66B8:
    A = RAM[0x54];
    DPTR = 0x8901;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0xA1D3;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8902;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0xA1D4;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8903;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0xA1D5;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8904;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0xA1D6;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8905;
    F_ROM_458A();
L_ROM_6700:
    A = XDATA[DPTR];
    DPTR = 0xA1D7;
L_ROM_6704:
    XDATA[DPTR] = A;
}

void F_ROM_6705(void)   /* code 0x6705 */
    B = 8;
    A = RAM[0x54];
    DPTR = 0x8906;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0xA1D8;
    XDATA[DPTR] = A;
    B = 8;
    A = RAM[0x54];
    F_0xBCFA();
    DPTR = 0xA1D9;
    F_ROM_6705();
    F_ROM_67DC();
    return;
}

void F_ROM_6791(void)   /* code 0x6791 */
    ACC = POP();
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    DPTR++;
    A = XDATA[DPTR];
    R3 = A;
    DPTR++;
    A = XDATA[DPTR];
    DPTR = 0xA1D8;
    XDATA[DPTR] = A;
L_ROM_67A0:
    DPTR = 0xA1D4;
    A = XDATA[DPTR];
    DPTR = 0xA1D9;
    XDATA[DPTR] = A;
L_ROM_67A8:
    DPTR = 0xA1DA;
    A = 0x12;
    XDATA[DPTR] = A;
    DPTR = 0xA1E8;
    A = 5;
    XDATA[DPTR] = A;
L_ROM_67B4:
    DPTR = 0xA1DC;
    F_ROM_67C1+2();
    DPTR = 0xA1D8;
    A = XDATA[DPTR];
    DPTR = 0xA1DF;
    XDATA[DPTR] = A;
L_ROM_67C1:
    DPTR = 0xA1D9;
}

void F_ROM_67D4(void)   /* code 0x67D4 */
    goto L_ROM_6801;
}

void F_ROM_67DC(void)   /* code 0x67DC */
    DPTR = 0xA1D1;
    return;
}

void F_ROM_67E6(void)   /* code 0x67E6 */
    A = R5;
    XDATA[DPTR] = A;
    DPTR++;
    A = R3;
}

void F_ROM_67EA(void)   /* code 0x67EA */
    XDATA[DPTR] = A;
    return;
}

void F_ROM_67EC(void)   /* code 0x67EC */
    A = 0;
    A = CODE[CODE[A + DPTR]];
    R6 = A;
    A = 1;
    A = CODE[CODE[A + DPTR]];
    R7 = A;
    return;
}

void F_ROM_6801(void)   /* code 0x6801 */
    DPTR = 0xA310;
    A = R7;
    XDATA[DPTR] = A;
    R7 = 2;
    F_ROM_44B7();
    DPTR = 0x9E92;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA310;
    A = XDATA[DPTR];
    R6 = A;
    A = R7;
    A = A | R6;
    DPTR = 0x9E92;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6917(void)   /* code 0x6917 */
    DPTR++;
    A = RAM[0x56];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x57];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x58];
    XDATA[DPTR] = A;
    return;
}

void F_ROM_69E1(void)   /* code 0x69E1 */
    A = RAM[0x51];
    A = A ^ 1;
    if (A == 0) goto L_ROM_69EC;
    RAM[0x6E] = 1;
    goto L_ROM_69EF;
L_ROM_69EC:
    A = 0;
    RAM[0x6E] = A;
L_ROM_69EF:
    A = RAM[0x51];
}

void F_ROM_69F1(void)   /* code 0x69F1 */
    if (A != 1) goto L_ROM_69F9;
    RAM[0x52] = 1;
    goto L_ROM_69FC;
L_ROM_69F9:
    A = 0;
    RAM[0x52] = A;
L_ROM_69FC:
    DPTR = 0xA1CF;
    A = XDATA[DPTR];
    R3 = A;
    R5 = RAM[0x52];
    A = 0;
    R7 = A;
    F_ROM_6917();
    R7 = 4;
    F_0x97E1();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_6AD8(void)   /* code 0x6AD8 */
    A = A | 0x20;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6B12(void)   /* code 0x6B12 */
    A = SWAP(A);
    F_ROM_6EB8();
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_6B3C;
    CY = 0;
    DPTR = 0xA2C7;
    A = XDATA[DPTR];
L_ROM_6B1D:
    A = A - 0xE8;
    DPTR = 0xA2C6;
    A = XDATA[DPTR];
L_ROM_6B23:
    A = A - 3;
    if (CY) goto L_ROM_6B32;
    DPTR = 0x1C0;
    A = XDATA[DPTR];
    A = A | 0x80;
    XDATA[DPTR] = A;
    R7 = 0;
    goto L_ROM_6B3E;
L_ROM_6B32:
    DPTR = 0xA2C6;
L_ROM_6B35:
    F_ROM_57DC();
    F_ROM_6E46();
    goto L_ROM_6B10;
L_ROM_6B3C:
    R7 = 1;
L_ROM_6B3E:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_6B43(void)   /* code 0x6B43 */
    DPTR = 0xA2F8;
    F_ROM_69F1();
L_ROM_6B48:
    DPTR = 0x109;
    A = XDATA[DPTR];
    R7 = 0;
    if (!ACC_7) { goto L_ROM_6B53; }
    R7 = 1;
L_ROM_6B53:
    DPTR = 0xA2F8;
    A = XDATA[DPTR];
    A = A ^ R7;
    if (A == 0) goto L_ROM_6B8F;
    CY = 0;
    DPTR = 0xA2FA;
    A = XDATA[DPTR];
    A = A - 0x88;
    DPTR = 0xA2F9;
    A = XDATA[DPTR];
    A = A - 0x13;
    if (CY) goto L_ROM_6B71;
    DPTR = 0x1C0;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
L_ROM_6B70:
    return;
L_ROM_6B71:
    DPTR = 0xA2F9;
}

void F_ROM_6B74(void)   /* code 0x6B74 */
    F_ROM_57DC();
    F_ROM_6DD5();
    CY = 1;
    DPTR = 0xA2FA;
    A = XDATA[DPTR];
    A = A - 0x32;
    DPTR = 0xA2F9;
    A = XDATA[DPTR];
    A = A - 0;
    if (CY) goto L_ROM_6B48;
    DPTR = 0x1C6;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_6B48; }
L_ROM_6B8F:
    return;
}

void F_ROM_6BA1(void)   /* code 0x6BA1 */
    R7 = A;
    F_ROM_6B23();
    F_ROM_5C0B();
    A = 0;
    R5 = A;
    F_ROM_46C7+1();
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    R7 = A;
}

void F_ROM_6BB1(void)   /* code 0x6BB1 */
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_6BB9; }
    F_ROM_6EE4();
L_ROM_6BB9:
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A & 0xEF;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6C04(void)   /* code 0x6C04 */
    F_ROM_46AB();
    A = R7;
    A = A | 0x10;
    R5 = A;
    R7 = 8;
    F_ROM_468D();
    R7 = 1;
    F_ROM_6B23();
    R7 = 0x90;
    F_ROM_6E9E();
    R7 = 0x90;
    F_ROM_468D();
    R7 = 0x14;
    R6 = 0;
    goto L_ROM_3E50;
}

void F_ROM_6C36(void)   /* code 0x6C36 */
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_6C55; }
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_6C53; }
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_6C51; }
    F_nullsub_14();
    if (R7 != 1) goto L_ROM_6C55;
    goto L_ROM_6C53;
L_ROM_6C51:
    goto L_ROM_6C53;
L_ROM_6C53:
    F_ROM_6C04();
L_ROM_6C55:
    return;
}

void F_ROM_6C9C(void)   /* code 0x6C9C */
    R7 = A;
    A = 0;
    A = ROLC8(A);
    R6 = A;
    F_ROM_6C9C();
    DPTR = 0xA2CF;
    A = XDATA[DPTR];
    A = A + 0x18;
    R7 = A;
    DPTR = 0xA2CC;
    F_ROM_4596();
    F_ROM_6D5A();
    DPTR = 0x296;
    A = 1;
    XDATA[DPTR] = A;
L_ROM_6CB7:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_6CED(void)   /* code 0x6CED */
    A = A & 0xF0;
    XDATA[DPTR] = A;
    A = 3;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFB + CY;
    DPH = A;
    A = XDATA[DPTR];
    A = A | 0x80;
    XDATA[DPTR] = A;
    A = 0xB;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFB + CY;
    DPH = A;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6D4E(void)   /* code 0x6D4E */
    goto L_ROM_7F00;
}

void F_ROM_6D5A(void)   /* code 0x6D5A */
    A = A - R7;
L_ROM_6D5B:
    if (R1 != 0xE0) goto L_ROM_6D5B+2;
L_ROM_6D5E:
    DPTR = 0x9FB8;
    A = XDATA[DPTR];
    if (A != RAM_7) goto L_ROM_6D69;
    R7 = 1;
}

void F_ROM_6D67(void)   /* code 0x6D67 */
    goto L_ROM_6D6B;
L_ROM_6D69:
    R7 = 0;
L_ROM_6D6B:
    A = R7;
    if (A != 0) goto L_ROM_6D75;
L_ROM_6D6E:
    DPTR = 0x9E92;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
L_ROM_6D75:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_6DA7(void)   /* code 0x6DA7 */
    RAM[0x40] = R3;
    RAM[0x41] = R2;
    RAM[0x42] = R1;
    RAM[0x43] = 2;
    RAM_1 = POP();
    RAM_2 = POP();
    RAM_3 = POP();
    F_ROM_3526();
    DPTR = 0xA2C8;
    A = XDATA[DPTR];
    A = A + 2;
    R1 = A;
    A = 0;
    A = A + 0xFB + CY;
    R2 = A;
    R3 = 1;
    PUSH(RAM_3);
    PUSH(RAM_2);
    PUSH(RAM_1);
}

void F_ROM_6DCC(void)   /* code 0x6DCC */
    DPTR++;
    F_ROM_4596();
    A = R1;
    A = A + 2;
    R1 = A;
    A = 0;
L_ROM_6DD5:
    A = A + R2 + CY;
    RAM[0x40] = R3;
    RAM[0x41] = A;
    RAM[0x42] = R1;
    DPTR = 0xA2C9;
    F_ROM_6DCC();
    RAM[0x43] = A;
    RAM_1 = POP();
    RAM_2 = POP();
    RAM_3 = POP();
    goto L_ROM_3526;
}

void F_ROM_6E46(void)   /* code 0x6E46 */
    DPTR = 0x1C7;
    A = 0xFE;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6E4D(void)   /* code 0x6E4D */
    DPTR = 0x19A;
    A = XDATA[DPTR];
    A = A & 0xC0;
    A = A | 0xB;
    F_ROM_6E43+2();
    DPTR = 0x198;
    A = XDATA[DPTR];
    A = A & 0xC0;
    R7 = 0;
    if (A != 0x40) goto L_ROM_6E64;
    R7 = 1;
L_ROM_6E64:
    return;
}

void F_ROM_6E97(void)   /* code 0x6E97 */
    A = A | R5;
    DPTR = 0xA041;
    A = XDATA[DPTR];
    A = A & 0xFE;
}

void F_ROM_6E9E(void)   /* code 0x6E9E */
    A = A | R6;
    XDATA[DPTR] = A;
    A = R7;
    A = A & 2;
    F_ROM_6E97();
    DPTR = 0x9FD4;
}

void F_ROM_6EA8(void)   /* code 0x6EA8 */
    A = XDATA[DPTR];
    A = A & 0xEF;
    A = A | R7;
    XDATA[DPTR] = A;
L_ROM_6EAD:
    DPTR = 0xA041;
    A = XDATA[DPTR];
    A = A & 1;
    R7 = A;
    goto L_ROM_607A+1;
}

void F_ROM_6EB8(void)   /* code 0x6EB8 */
    A = ROLC8(A);
    A = ROLC8(A);
    A = A & 0xF8;
    R7 = A;
    return;
}

void F_ROM_6EC1(void)   /* code 0x6EC1 */
    A = R7;
    A = A | 1;
    R5 = A;
    return;
}

void F_ROM_6ECB(void)   /* code 0x6ECB */
    A = R7;
    A = A & 0xDF;
    return;
}

void F_ROM_6EE4(void)   /* code 0x6EE4 */
    A = XDATA[DPTR];
    A--;
    DPTR = 0xA040;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_6F1A(void)   /* code 0x6F1A */
    A = A + R2 + CY;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_703B(void)   /* code 0x703B */
    DPTR++;
    A = XDATA[DPTR];
    R6 = A;
    A = A + 0x2A;
    F_ROM_703B();
    DPTR = 0xA204;
}

void F_ROM_7045(void)   /* code 0x7045 */
    A = XDATA[DPTR];
    R7 = A;
    A = 0x2B;
    A = A + R6;
    F_ROM_7045();
    A = 0x2C;
    A = A + R6;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    A = A + 2;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_7117(void)   /* code 0x7117 */
    goto L_ROM_54C6;
}

void F_ROM_71B9(void)   /* code 0x71B9 */
    A = A ^ 2;
    if (A == 0) goto L_ROM_71C1;
    F_ROM_7117();
    goto L_ROM_71C7;
L_ROM_71C1:
    F_ROM_7161+1();
    goto L_ROM_71C7;
L_ROM_71C5:
    F_ROM_71B9();
L_ROM_71C7:
    A = RAM[0x63];
    DPTR = 0x9FDD;
    if (!ACC_7) { goto L_ROM_71D4; }
    F_ROM_5003();
    goto L_ROM_724C;
L_ROM_71D4:
    A = XDATA[DPTR];
    A = A & 0xFD;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_7234(void)   /* code 0x7234 */
    goto L_ROM_7238;
L_ROM_7236:
    F_ROM_71B9();
L_ROM_7238:
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    DPTR = 0x9FDD;
    if (!ACC_7) { goto L_ROM_7247; }
    F_ROM_5003();
    goto L_ROM_724C;
L_ROM_7247:
    A = XDATA[DPTR];
L_ROM_7248:
    A = A & 0xFD;
    XDATA[DPTR] = A;
    return;
L_ROM_724C:
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_72A2(void)   /* code 0x72A2 */
    F_ROM_7292+1();
    F_ROM_663A();
    goto L_ROM_7254;
}

void F_ROM_72AA(void)   /* code 0x72AA */
    A = A - R7;
    if (--R4 != 0) goto L_ROM_728D;
    if (A != 0) goto L_ROM_72B2;
    F_ROM_6256();
L_ROM_72B2:
    return;
}

void F_ROM_72E8(void)   /* code 0x72E8 */
    RAM[R1]++;
    R7 = 1;
    if (A == 0) goto L_ROM_72EF;
    R7 = 0;
L_ROM_72EF:
    return;
}

void F_ROM_7371(void)   /* code 0x7371 */
    A++;
    F_ROM_6259+1();
    DPTR = 0xA0AE;
}

void F_ROM_7378(void)   /* code 0x7378 */
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_7390; }
    CY = 0;
    A = RORC8(A);
    A = A & 7;
    F_ROM_77D5();
    R6 = A;
    F_ROM_7399();
    A = R6;
    if (A == 0) goto L_ROM_738D;
    if (A != 2) goto L_ROM_7390;
L_ROM_738D:
    F_ROM_5048();
L_ROM_7390:
    return;
}

void F_ROM_7399(void)   /* code 0x7399 */
    A = 0;
    R3 = A;
    R5 = A;
    R7 = 0x58;
    R6 = 1;
    return;
}

void F_ROM_74F4(void)   /* code 0x74F4 */
    F_ROM_5181+2();
    B = 0xB;
    F_ROM_57CB();
    A = R7;
    F_ROM_770F();
    goto L_ROM_501B;
}

void F_ROM_7519(void)   /* code 0x7519 */
    R6--;
    F_ROM_771B();
    XDATA[DPTR] = A;
    DPTR = 0x9FD4;
    F_ROM_84C9();
    if (!ACC_0) { goto L_ROM_7528; }
    goto L_ROM_773F;
L_ROM_7528:
    F_ROM_776B();
    if (CY) goto L_ROM_7538;
    A = 0;
    R7 = A;
    F_ROM_668C();
    if (R7 != 1) goto L_ROM_7538;
    F_ROM_6C2B+2();
    XDATA[DPTR] = A;
L_ROM_7538:
    return;
}

void F_ROM_7567(void)   /* code 0x7567 */
    F_ROM_72AA();
    SFR_A9 = SFR_A9 & A;
    RAM[0x12] = RAM[0x12] & 0x4F;
    SFR_FF = R7;
    F_code_689();
    R6 = A;
    A = A & 0xF;
    F_ROM_57F9();
    A = R7;
    F_ROM_4FA4();
    A = A & 3;
    R7 = A;
    F_ROM_76D9();
    A = A & 0xFC;
    F_ROM_4FA2+1();
    A = A & 0x1C;
    R7 = A;
    A = R6;
    A = A & 0xF;
    R6 = A;
}

void F_ROM_75CF(void)   /* code 0x75CF */
    SFR_EF = R2;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    A = SWAP(A);
    F_ROM_7707();
    A = R5;
    DPTR = 0xA0BB;
    F_ROM_458A();
    A = R7;
    XDATA[DPTR] = A;
    A = R6;
    A = SWAP(A);
    A = A & 0xF;
    R7 = A;
    A--;
    A = A ^ R5;
    if (A != 0) goto L_ROM_760B;
L_ROM_75EA:
    DPTR = 0xA0AF;
    A = R7;
    F_ROM_5FC5();
    A = A & 0xF;
    A = SWAP(A);
    A = A & 0xF0;
    R7 = A;
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    A = A & 0xF;
    A = A | R7;
    XDATA[DPTR] = A;
    A = A & 0xF1;
    XDATA[DPTR] = A;
    DPTR = 0xA0AD;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    F_ROM_7700();
L_ROM_760B:
    return;
}

void F_ROM_7659(void)   /* code 0x7659 */
    if (CY) goto L_ROM_7680;
    DPTR = 0xA1D3;
    A = R6;
    XDATA[DPTR] = A;
    R3 = RAM[0x55];
    R5 = 0x60;
    F_ROM_76C8();
    A = A + 0x84;
L_ROM_7668:
    R5 = A;
    A = 0;
    A = A + 4 + CY;
    R4 = A;
    B = 0xE;
    A = RAM[0x55];
    F_ROM_76FA();
    B = 3;
    A = R6;
    F_ROM_458A();
    A = R4;
    XDATA[DPTR] = A;
    DPTR++;
    A = R5;
    XDATA[DPTR] = A;
L_ROM_7680:
    return;
}

void F_ROM_76C8(void)   /* code 0x76C8 */
    A = A & RAM[R1];
    A = ROR8(A);
L_ROM_76CA:
    A = RAM[0x56];
    A = A + 0xE8;
    R7 = A;
    F_ROM_76ED();
L_ROM_76D1:
    PUSH(DPH);
    PUSH(DPL);
    DPTR = 0xA1D3;
    A = XDATA[DPTR];
L_ROM_76D9:
    DPL = POP();
    DPH = POP();
L_ROM_76DD:
    B = 3;
    F_ROM_458A();
    A = R7;
    XDATA[DPTR] = A;
L_ROM_76E5:
    R7 = RAM[0x57];
    return;
}

void F_ROM_76ED(void)   /* code 0x76ED */
    goto L_ROM_75CF;
}

void F_ROM_76FA(void)   /* code 0x76FA */
    XDATA[DPTR] = A;
    R6++;
    A = R5;
    DPTR = 0xA0B2;
}

void F_ROM_7700(void)   /* code 0x7700 */
    F_ROM_458A();
    A = XDATA[DPTR];
    return;
}

void F_ROM_7707(void)   /* code 0x7707 */
    RAM[R0]++;
    RAM[0x54] = R1;
    R7++;
    R5 = A;
    return;
}

void F_ROM_770F(void)   /* code 0x770F */
    R6++;
    A = R3;
    DPTR = 0xA0B5;
    goto L_ROM_458A;
}

void F_ROM_771B(void)   /* code 0x771B */
    CY = CY | !P3_3;
    goto L_ROM_458A;
}

void F_ROM_7740(void)   /* code 0x7740 */
    A = 2;
    return;
}

void F_ROM_776B(void)   /* code 0x776B */
    R6 = 0;
    R7 = 0x8D;
    R5 = 0;
    R3 = 1;
    R2 = 0xA0;
    R1 = 0xAD;
    goto L_code_8AA;
}

void F_ROM_77D5(void)   /* code 0x77D5 */
    B = 0xE;
L_ROM_77D8:
    A = R7;
    F_ROM_57F3();
    A = R6;
    A = A & 0xFE;
    F_ROM_517C();
L_ROM_77E2:
    R5 = A;
    R7 = 2;
    F_ROM_5366();
L_ROM_77E8:
    return;
}

void F_ROM_789D(void)   /* code 0x789D */
    if (B_0) { goto L_ROM_78C2; }
    DPTR = 0xA20A;
    A = XDATA[DPTR];
}

void F_ROM_78A4(void)   /* code 0x78A4 */
    R5 = A;
    if (A != 2) goto L_ROM_78AE;
    F_ROM_78A4();
    A = A | 0x60;
    XDATA[DPTR] = A;
    return;
L_ROM_78AE:
    A = R5;
    if (A != 3) goto L_ROM_78B5;
    F_ROM_78A4();
    XDATA[DPTR] = A;
L_ROM_78B5:
    return;
}

void F_ROM_78B7(void)   /* code 0x78B7 */
    goto L_FDFC;
}

void F_ROM_7A3D(void)   /* code 0x7A3D */
    XDATA[DPTR] = A;
    DPTR = 0x9FF2;
    A = XDATA[DPTR];
    CY = 0;
    A = A - 0xA;
}

void F_ROM_7A45(void)   /* code 0x7A45 */
    if (!CY) goto L_ROM_7A4A;
    A = 0xA;
    XDATA[DPTR] = A;
L_ROM_7A4A:
    DPTR = 0x9FF2;
    A = XDATA[DPTR];
}

void F_ROM_7A4E(void)   /* code 0x7A4E */
    A = A + 2;
    XDATA[DPTR] = A;
    F_ROM_7BC0();
    A = 3;
L_ROM_7A55:
    XDATA[DPTR] = A;
    F_ROM_7ABC();
}

void F_ROM_7A58(void)   /* code 0x7A58 */
    A = 0;
    R7 = A;
    F_ROM_7A8D();
    return;
}

void F_ROM_7A70(void)   /* code 0x7A70 */
    goto L_ROM_7DED;
}

void F_ROM_7A8D(void)   /* code 0x7A8D */
    A = XDATA[DPTR];
    R7 = A;
    return;
}

void F_ROM_7AB4(void)   /* code 0x7AB4 */
    A = 0;
    XDATA[DPTR] = A;
    R6++;
    A = R6;
    if (A != 0x2D) goto L_ROM_7AAF;
    A = 0;
}

void F_ROM_7ABC(void)   /* code 0x7ABC */
    DPTR = 0x9FF0;
    XDATA[DPTR] = A;
    DPTR = 0x9FEF;
    XDATA[DPTR] = A;
    DPTR = 0x9FF3;
    XDATA[DPTR] = A;
    A = R7;
    if (A != 1) goto L_ROM_7AD3;
    DPTR++;
    A = 0x2D;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_7AD3:
    return;
}

void F_ROM_7B81(void)   /* code 0x7B81 */
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x558;
    A = XDATA[DPTR];
    A = A ^ R7;
    if (A != 0) goto L_ROM_7B8D;
    A = 0;
L_ROM_7B8D:
    if (A == 0) goto L_ROM_7B91;
    F_ROM_7BE2();
L_ROM_7B91:
    F_ROM_7BD1();
    goto L_ROM_7B9C;
    DPTR = 0x9FD6;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
L_ROM_7B9C:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_7BC0(void)   /* code 0x7BC0 */
    { uint8 t = A; A = RAM[R0]; RAM[R0] = t; }
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (!ACC_6) { goto L_ROM_7BD9; }
    DPTR = 0x12F;
    A = XDATA[DPTR];
    if (!ACC_7) { goto L_ROM_7BD3; }
    A = 0;
    XDATA[DPTR] = A;
L_ROM_7BD1:
    goto L_ROM_7BD9;
L_ROM_7BD3:
    DPTR = 0x12F;
    A = 0x80;
    XDATA[DPTR] = A;
L_ROM_7BD9:
    F_ROM_7BC0();
    A = 2;
    XDATA[DPTR] = A;
    goto L_ROM_7ABC;
}

void F_ROM_7BE2(void)   /* code 0x7BE2 */
    A = R3;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    DPTR = 0x9FF2;
    A = XDATA[DPTR];
    R3 = A;
    DPTR = 0xA2E7;
    return;
}

void F_ROM_7D4B(void)   /* code 0x7D4B */
    P1 = R6;
    CY = CY | !RAM[0x26]_7;
    XDATA[DPTR] = A;
    A = R7;
    A = A & 0xFE;
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & 1;
    A = A | R7;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    DPTR = 0xA039;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_7DCA(void)   /* code 0x7DCA */
    F_ROM_58B1();
    RAM[0x51] = R7;
    A = RAM[0x51];
    if (A != 3) goto L_ROM_7DDE;
    A = 0;
    R7 = A;
    F_ROM_5B15();
    R7 = 4;
    F_0x97E1();
L_ROM_7DDE:
    return;
}

void F_ROM_7DED(void)   /* code 0x7DED */
    DPTR = 0xA1CF;
    A = R7;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_7E92(void)   /* code 0x7E92 */
    A = A & 0xFE;
    XDATA[DPTR] = A;
    A = R7;
    if (!ACC_0) { goto L_ROM_7EC2; }
    F_ROM_5898();
    A = A ^ 4;
    if (A != 0) goto L_ROM_7EC0;
L_ROM_7EA0:
    DPTR = 0xA093;
}

void F_ROM_7F00(void)   /* code 0x7F00 */
    R0--;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_7FD9(void)   /* code 0x7FD9 */
    if (R0 != 0xF0) goto L_ROM_7F7F;
    XDATA[DPTR] = A;
    DPTR = 0x9F20;
}

void F_ROM_7FE0(void)   /* code 0x7FE0 */
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_8019(void)   /* code 0x8019 */
    XDATA[DPTR] = A;
L_ROM_801A:
    F_ROM_663A();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_803E(void)   /* code 0x803E */
    A = 0xF0;
    A = A + R7;
    F_ROM_802A+1();
    A = R6;
    XDATA[DPTR] = A;
    R7++;
    A = R7;
    if (A != 0x10) goto L_ROM_8032;
    return;
}

void F_ROM_80C3(void)   /* code 0x80C3 */
    B--;
    DPTR++;
    A = RAM[0x16];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x17];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x18];
    XDATA[DPTR] = A;
    return;
}

void F_ROM_80D7(void)   /* code 0x80D7 */
    goto L_ROM_8074+1;
}

void F_ROM_82B7(void)   /* code 0x82B7 */
    R1++;
    A = 0x32;
    XDATA[DPTR] = A;
L_ROM_82BB:
    DPTR++;
    A = 0x2F;
    XDATA[DPTR] = A;
    goto L_ROM_82C8;
    A = 0x11;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0xF;
    XDATA[DPTR] = A;
L_ROM_82C8:
    A = RAM[0x53];
    CY = 1;
    A = A - 0x2D;
L_ROM_82CD:
    if (CY) goto L_ROM_82D9;
}

void F_ROM_82E5(void)   /* code 0x82E5 */
    A = RAM[0x53];
    CY = 1;
    A = A - 0x14;
    if (CY) goto L_ROM_82F1;
    DPTR = 0xA1D3;
    goto L_ROM_82F9;
L_ROM_82F1:
    B = 4;
    A = RAM[0x52];
    F_0x9559();
L_ROM_82F9:
    A = XDATA[DPTR];
    R5 = A;
    RAM[0x6A] = RAM[0x54];
    A = 0;
    R3 = A;
    R7 = RAM[0x52];
    goto L_ROM_7659;
}

void F_ROM_84C3(void)   /* code 0x84C3 */
    RAM_3 = R5;
    F_ROM_4F94+1();
    XDATA[DPTR] = A;
}

void F_ROM_84C9(void)   /* code 0x84C9 */
    B = 0xA;
    A = R7;
    DPTR = 0x8D05;
    F_ROM_4F94+1();
    XDATA[DPTR] = A;
    B = 0xA;
    A = R7;
    DPTR = 0x8D07;
    F_ROM_4F94+1();
    XDATA[DPTR] = A;
L_ROM_84DF:
    B = 0xA;
}

void F_ROM_852E(void)   /* code 0x852E */
    if (!ACC_6) { goto L_ROM_8572; }
    R7 = 0x8D;
    F_ROM_46AB();
    A = R7;
    A = A ^ 1;
    if (A != 0) goto L_ROM_8572;
    DPTR = 0xA30A;
    XDATA[DPTR] = A;
L_ROM_853F:
    DPTR = 0xA30A;
    A = XDATA[DPTR];
    R5 = A;
    DPTR = 0xA309;
    A = XDATA[DPTR];
    B = 0x10;
    F_ROM_758E();
    A = DPL;
    A = A + R5;
    F_ROM_7A55();
    A = XDATA[DPTR];
    R3 = A;
    A = 0;
    R7 = A;
    F_ROM_4DF7();
    DPTR = 0xA30A;
}

void F_ROM_8571(void)   /* code 0x8571 */
    A = A & RAM[R1];
L_ROM_8572:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_857C(void)   /* code 0x857C */
    A = A | RAM[R0];
    SFR_D3 = R5;
    if (IE_7) { IE_7 = 0; goto L_ROM_8583; }
    CY = 0;
L_ROM_8583:
    PUSH(PSW);
    DPTR = 0xA219;
    A = R4;
    XDATA[DPTR] = A;
    DPTR++;
    A = R5;
    XDATA[DPTR] = A;
    DPTR = 0xA218;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    F_ROM_3E02();
    DPTR = 0xA223;
    F_code_86D();
    DPTR = 0xA21B;
    F_ROM_4572();
    F_code_83A();
    DPTR = 0xA223;
    F_ROM_8674();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0xA21B;
    F_ROM_4572();
    DPTR = 0xA21F;
    F_ROM_8674();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    DPTR = 0xA227;
    F_code_86D();
    DPTR = 0xA219;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    PUSH(RAM_5);
    DPTR = 0xA227;
    F_ROM_4572();
    DPTR = 0xAA96;
    F_code_86D();
    DPTR = 0xA218;
    A = XDATA[DPTR];
    R7 = A;
    RAM_5 = POP();
    F_ROM_3C8B+0x7E();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_8616(void)   /* code 0x8616 */
    goto L_ROM_80C3;
}

void F_ROM_8669(void)   /* code 0x8669 */
    /* nop */
    /* nop */
    /* nop */
    R7 = A;
    DPTR = 0xA2DC;
    A = XDATA[DPTR];
    R7 = A;
L_ROM_8672:
    F_ROM_8664+1();
}

void F_ROM_8674(void)   /* code 0x8674 */
    R7 = 1;
    F_ROM_855E();
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_876C(void)   /* code 0x876C */
    R7 = A;
    CY = 0;
    A = 0x10;
    A = A - R7;
    R6 = A;
    R7 = RAM_6;
    return;
}

void F_ROM_8783(void)   /* code 0x8783 */
    A = ROR8(A);
    R7 = 0;
    return;
}

void F_ROM_8793(void)   /* code 0x8793 */
    A = A + 0x64;
    R7 = A;
    return;
}

void F_ROM_87AE(void)   /* code 0x87AE */
    DPTR = 0xA13A;
    XDATA[DPTR] = A;
L_ROM_87B2:
    return;
}

void F_ROM_87D8(void)   /* code 0x87D8 */
    F_ROM_374E();
    DPTR = 0xA1C6;
    F_code_86D();
    DPTR = 0xA1C2;
    F_0xB811();
    if (A == 0) goto L_ROM_8802;
    DPTR = 0xA1C2;
    F_0xB808();
    DPTR = 0xA1C2;
    F_code_86D();
    DPTR = 0xA1C2;
    F_ROM_47CC();
    R7 = 0;
    R6 = 8;
    F_ROM_3845();
L_ROM_8802:
    DPTR = 0xA1C6;
    F_0xB811();
    if (A == 0) goto L_ROM_8823;
    DPTR = 0xA1C6;
    F_0xB808();
    DPTR = 0xA1C6;
    F_code_86D();
    DPTR = 0xA1C6;
    F_ROM_47CC();
    R7 = 0;
    R6 = 9;
    F_ROM_3845();
L_ROM_8823:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_8832(void)   /* code 0x8832 */
    A = A | RAM[0x72];
    A = R7;
    A = A & 1;
    R7 = A;
    A = 0;
    R6 = A;
    R5 = A;
    R4 = A;
    A = R7;
    return;
}

void F_ROM_8854(void)   /* code 0x8854 */
    A = 0;
    F_ROM_6073+1();
    DPTR++;
    A = 0xC;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_8880(void)   /* code 0x8880 */
    F_ROM_54C6();
    R5 = 2;
L_ROM_8885:
    R7 = 1;
    F_ROM_61C6();
    F_ROM_8854();
    DPTR = 0x9FD3;
    A = 2;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_88C3(void)   /* code 0x88C3 */
    { uint8 t = A; A = RAM[R0]; RAM[R0] = t; }
    DPTR = 0x9FD2;
    A = 3;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_88EE(void)   /* code 0x88EE */
    F_0x8EAE();
    RAM[R1]++;
    F_ROM_6B1D();
    if (R7 != 1) goto L_ROM_890A;
    DPTR = 0x9FCF;
    F_ROM_5FDD+2();
    if (ACC_0) { goto L_ROM_890A; }
    R7 = RAM_6;
    R5 = 1;
L_ROM_8904:
    F_ROM_6259+1();
    R7 = 1;
    return;
L_ROM_890A:
    R7 = 0;
    return;
}

void F_ROM_89D6(void)   /* code 0x89D6 */
    PSW = POP();
    IE_7 = CY;
}

void F_ROM_89E4(void)   /* code 0x89E4 */
    DPTR++;
    A = 0;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0x64;
    XDATA[DPTR] = A;
L_ROM_89EB:
    DPTR++;
    A = 5;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    return;
}

void F_ROM_8A12(void)   /* code 0x8A12 */
    goto L_ROM_88C3;
}

void F_ROM_8A45(void)   /* code 0x8A45 */
    if (A != 0) goto L_ROM_8A60;
    DPTR = 0xA318;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_8A60;
}

void F_ROM_8A4D(void)   /* code 0x8A4D */
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A & 0xBF;
    XDATA[DPTR] = A;
    F_ROM_8A4D();
    XDATA[DPTR] = A;
    DPTR = 0x9FDC;
    A = 4;
    XDATA[DPTR] = A;
L_ROM_8A5D:
    F_ROM_663A();
L_ROM_8A60:
    PSW = POP();
    IE_7 = CY;
    return;
}

void F_ROM_8BBC(void)   /* code 0x8BBC */
    A = A & 8;
    R6 = A;
    A = R7;
    A = A & 0xF7;
    return;
}

void F_ROM_8BCD(void)   /* code 0x8BCD */
    R1 = 0x3D;
    return;
}

void F_ROM_8D45(void)   /* code 0x8D45 */
    A = R7;
    A = A & 0x7F;
    A = A | R6;
    return;
}

/* ---- block @0x00000663 (outside named functions) ---- */
    /* TODO: code _663:       .byte 0xFF */
    /* TODO: code _689:       .byte 0xFF */
    /* TODO: code _6A2:       .byte 0xFF */
    /* TODO: code _6E1:       .byte 0xFF */
    /* TODO: code _703:       .byte 0xFF */
    /* TODO: code _7AB:       .byte 0xFF */
    /* TODO: code _83A:       .byte 0xFF */
    /* TODO: code _847:       .byte 0xFF */
    /* TODO: code _85A:       .byte 0xFF */
    /* TODO: code _86D:       .byte 0xFF */
    /* TODO: code _879:       .byte 0xFF */
    /* TODO: code _8AA:       .byte 0xFF */
    /* TODO: code _8D6:       .byte 0xFF */
    goto L_ROM_1053;
    if (RAM[0x20]_0) { RAM[0x20]_0 = 0; goto L_ROM_1028; }
    /* nop */
    /* nop */
    /* nop */
    A = ROR8(A);
    A = A + RAM[R0];
    A--;
    A = A + RAM[0x4C] + CY;
    R5 = 0;
    /* nop */
    A = RAM[0x1C];
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    goto L_ROM_45CE;
L_ROM_1028:
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    goto L_ROM_7906;
L_ROM_1053:
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    goto L_ROM_7846;
L_ROM_11B4:
    RETI(); return;
    F_ROM_458A();
    A = 0;
    XDATA[DPTR] = A;
    DPTR++;
    return;
    F_ROM_3526();
    RAM[0x40] = 0xFF;
    return;
/* ---- block @0x2016 (outside named functions) ---- */
    goto L_ROM_24F5;
L_ROM_201B:
    A++;
    A = R7;
    DPTR = 0x9611;
    goto L_ROM_458A;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA2AB;
    XDATA[DPTR] = A;
    DPTR = 0xA037;
    A = XDATA[DPTR];
    DPTR = 0xA2AC;
    XDATA[DPTR] = A;
    A = 0;
    R3 = A;
    R5 = A;
    R7 = 0x54;
    R6 = 1;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_2040; }
    CY = 0;
L_ROM_2040:
    PUSH(PSW);
    DPTR = 0xA2A7;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
L_ROM_2048:
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA2AB;
    A = XDATA[DPTR];
    RAM[0x3B] = A;
    DPTR++;
    A = XDATA[DPTR];
    RAM[0x3C] = A;
    F_ROM_363E();
    DPTR = 0xA2A7;
    F_0x9EB8();
    DPTR++;
    DPTR++;
    DPTR++;
    A = 5;
    XDATA[DPTR] = A;
    PSW = POP();
    IE_7 = CY;
    return;
L_ROM_2090:
    XDATA[DPTR] = A;
    if (A == 0) goto L_ROM_209A;
    A = XDATA[DPTR];
    A = A ^ 2;
    if (A == 0) goto L_ROM_209A;
    goto L_ROM_213B+2;
L_ROM_209A:
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_20D4;
    F_ROM_27E3();
    A = A & 7;
    if (!ACC_0) { goto L_ROM_20A9; }
    goto L_ROM_212D;
L_ROM_20A9:
    F_0xBC61();
    R5 = 0x4E;
    R7 = 0x6F;
    F_ROM_24C6();
    F_ROM_2183();
    F_ROM_271C();
    R3 = 4;
    R5 = 1;
    F_ROM_2471();
    if (R7 != 1) goto L_ROM_20CD;
    F_ROM_2183();
    F_ROM_220E+1();
    A = A | 1;
    XDATA[DPTR] = A;
    DPTR = 0xA0B0;
    A = 1;
    XDATA[DPTR] = A;
    return;
L_ROM_20CD:
    F_0xBBB0();
    R5 = 0x4F;
    goto L_ROM_2140;
L_ROM_20D4:
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_214D;
    F_ROM_2183();
    F_ROM_220E+1();
    R7 = A;
    if (!ACC_0) { goto L_ROM_20EC; }
    DPTR = 0xA1FC;
    A = 1;
    XDATA[DPTR] = A;
    goto L_ROM_2101;
L_ROM_20EC:
    A = R7;
    CY = 0;
    A = RORC8(A);
    if (ACC_0) { goto L_ROM_2101; }
    DPTR = 0xA1FC;
    A = 1;
    XDATA[DPTR] = A;
    F_0xBC61();
    R5 = 0x50;
    R7 = 0x6F;
    F_ROM_24C6();
L_ROM_2101:
    DPTR = 0xA1FC;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_214D;
    DPTR = 0xA139;
    A = XDATA[DPTR];
    A = A ^ 6;
    if (A == 0) goto L_ROM_2142;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    CY = 1;
    A = A - 1;
    if (CY) goto L_ROM_2120;
    DPTR = 0xA1FD;
    A = 4;
    XDATA[DPTR] = A;
    goto L_ROM_2125;
L_ROM_2120:
    A = 0;
    DPTR = 0xA1FD;
    XDATA[DPTR] = A;
L_ROM_2125:
    F_ROM_2183();
    F_ROM_271C();
    DPTR = 0xA1FD;
    A = XDATA[DPTR];
L_ROM_212D:
    F_ROM_246E();
    if (R7 != 1) goto L_ROM_213B;
    F_ROM_27D4+1();
    A = 3;
    F_0xA378();
    goto L_ROM_201B;
L_ROM_213B:
    F_0xBBB0();
    R5 = 0x51;
L_ROM_2140:
    goto L_ROM_24C6;
L_ROM_2142:
    A = 0;
    DPTR = 0xA139;
    F_ROM_217C();
    F_ROM_220E+1();
    A = A & 0xFB;
    XDATA[DPTR] = A;
L_ROM_214D:
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    A = A ^ 5;
    if (A != 0) goto L_ROM_219B;
    R7 = A;
    F_ROM_221A();
    A = R7;
    if (A != 0) goto L_ROM_219B;
    goto L_ROM_2196;
/* ---- block @0x217F (outside named functions) ---- */
    B = 0xB;
/* ---- block @0x219C (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0xA0B0;
    A = 5;
    XDATA[DPTR] = A;
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    A = A & 7;
    return;
    A = 0;
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_222E; }
    F_ROM_27E3();
    A = A & 7;
    if (ACC_0) { goto L_ROM_222E; }
    A = R7;
    CY = 0;
    A = RORC8(A);
    A = A & 7;
    R7 = A;
    F_ROM_220E+1();
    R6 = A;
    if (!ACC_0) { goto L_ROM_222E; }
    B = 0xB;
    A = R7;
    DPTR = 0xA0E2;
    F_ROM_458A();
    A = R6;
    A = A & 0xFE;
    XDATA[DPTR] = A;
    B = 0xB;
    A = R7;
    F_ROM_2210+2();
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_21F6; }
    DPTR = 0xA102;
    F_ROM_27DB+1();
    F_ROM_2183();
    F_ROM_220E+1();
    A = A & 0xFB;
    XDATA[DPTR] = A;
    F_ROM_88EE();
L_ROM_21F6:
    DPTR = 0x4E0;
    A = XDATA[DPTR];
    if (!ACC_1) { goto L_ROM_221F; }
    F_ROM_217C+1();
    F_ROM_220E+1();
    A = A | 2;
    XDATA[DPTR] = A;
    DPTR = 0xA139;
    A = 1;
    F_ROM_2182();
    R5 = A;
    R7 = 2;
L_ROM_220E:
    F_ROM_24D1();
L_ROM_2210:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_222E;
    A = 0;
    DPTR = 0xA100;
/* ---- block @0x221F (outside named functions) ---- */
L_ROM_221F:
    DPTR = 0xA100;
    F_ROM_27DB+1();
    F_ROM_2183();
    F_ROM_220E+1();
    A = A & 0xFD;
    XDATA[DPTR] = A;
    F_ROM_663A();
L_ROM_222E:
    return;
    B = 0xB;
    DPTR = 0xA0E2;
    F_ROM_458A();
    A = XDATA[DPTR];
    return;
    DPTR = 0xA1FE;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_2755();
    A = R7;
    if (A != 0) goto L_ROM_2246;
    R7 = A;
    return;
L_ROM_2246:
    F_ROM_2183();
    DPTR = 0xA0FC;
    XDATA[DPTR] = A;
    F_0xBAAB();
    if (A != RAM_7) goto L_ROM_2256;
    A = R6;
    A = A & 0xF1;
    XDATA[DPTR] = A;
L_ROM_2256:
    F_ROM_2183();
    DPTR = 0xA1FF;
    XDATA[DPTR] = A;
    DPTR = 0xA1FE;
    A = XDATA[DPTR];
    DPTR = 0xA0B0;
    if (A != 0) goto L_ROM_2268;
    XDATA[DPTR] = A;
    goto L_ROM_226B;
L_ROM_2268:
    A = 0x14;
    XDATA[DPTR] = A;
L_ROM_226B:
    F_0xBC6A();
    F_0xBCF2();
    if (!ACC_0) { goto L_ROM_22B6; }
    F_0xBB59();
    A = A + 5;
    DPL = A;
    A = 0;
    A = A + 0xA1 + CY;
    DPH = A;
    A = XDATA[DPTR];
    R6 = A;
    B = 0xB;
    A = R7;
    DPTR = 0xA0DB;
    F_ROM_458A();
    A = R6;
    XDATA[DPTR] = A;
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    R7 = A;
    A = A + 0x28;
    F_0xBB5C();
    A++;
    XDATA[DPTR] = A;
    F_0xBB59();
    R7 = A;
    DPTR = 0xA104;
    A = XDATA[DPTR];
    R6 = A;
    A = R7;
    if (A != RAM_6) goto L_ROM_22B6;
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    A = A + 0x28;
    DPL = A;
    A = 0;
    A = A + 0xA1 + CY;
    DPH = A;
    A = 0;
    XDATA[DPTR] = A;
L_ROM_22B6:
    DPTR = 0xA1FF;
    F_0x9FD1();
    R4 = A;
    DPTR = 0xA0FC;
    F_0x9FD1();
    A = A ^ R4;
    if (A == 0) goto L_ROM_22D9;
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    B = 0xB;
    F_0xB5D4();
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    B = 0xB;
    F_ROM_2549();
L_ROM_22D9:
    F_0xBC6A();
    DPTR = 0xA0E3;
    F_ROM_458A();
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    DPTR = 0xA1FE;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_230F;
    DPTR = 0xA0FE;
    A = XDATA[DPTR];
    R6 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (ACC_0) { goto L_ROM_230F; }
    B = 0xB;
    A = R7;
    F_ROM_77D8();
    R7 = A;
    if (A == 0) goto L_ROM_2304;
    if (R7 != 2) goto L_ROM_230F;
L_ROM_2304:
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
L_ROM_2308:
    F_ROM_271C();
    A = 0;
    R3 = A;
    R5 = A;
    F_ROM_2471();
L_ROM_230F:
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    R5 = A;
    R7 = 1;
    F_ROM_24D1();
    DPTR = 0xA0FE;
    F_ROM_89E4();
    if (R7 != 2) goto L_ROM_2326;
    A = 0;
    R7 = A;
    F_0x9F71();
L_ROM_2326:
    R7 = 1;
    return;
L_ROM_2366:
    R6++;
    DPTR = 0xA0B2;
    F_ROM_254C();
    F_ROM_2183();
    R7 = A;
    B = 0xE;
    DPTR = 0xA0BC;
    F_ROM_458A();
L_ROM_2378:
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    B = 0xE;
    A = R7;
    F_ROM_24B4();
    F_ROM_2183();
    R5 = A;
    R7 = 1;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_238B; }
    CY = 0;
L_ROM_238B:
    PUSH(PSW);
    DPTR = 0xA2E0;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    A = R5;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0xA2E2;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - 3;
    if (CY) goto L_ROM_23A4;
    goto L_ROM_2406+2;
L_ROM_23A4:
    DPTR = 0xA2E1;
    A = XDATA[DPTR];
    R6 = A;
    F_0xA6F7();
    B = 3;
    A = R7;
    F_0xBBBD();
    A = XDATA[DPTR];
    CY = ACC_3;
    XDATA[DPTR] = A;
    DPTR = 0xA2E0;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_23E2;
    DPTR = 0xA2E3;
    A = XDATA[DPTR];
    R7 = A;
    B = 0xE;
    A = R6;
    F_0xA6F1();
    PUSH(DPH);
    PUSH(DPL);
    DPTR = 0xA2E2;
    A = XDATA[DPTR];
    DPL = POP();
    DPH = POP();
    F_0xBB31();
    goto L_ROM_23DD;
L_ROM_23DB:
    CY = 0;
    A = ROLC8(A);
L_ROM_23DD:
    if (--R0 != 0) goto L_ROM_23DB;
    A = A | R7;
    goto L_ROM_2402;
L_ROM_23E2:
    F_0xBC16();
    B = 0xE;
    F_0xA6F1();
    PUSH(DPH);
    PUSH(DPL);
    DPTR = 0xA2E2;
    A = XDATA[DPTR];
    DPL = POP();
    DPH = POP();
    F_0xBB31();
    goto L_ROM_23FE;
L_ROM_23FC:
    CY = 0;
    A = ROLC8(A);
L_ROM_23FE:
    if (--R0 != 0) goto L_ROM_23FC;
    A = ~A;
    A = A & R7;
L_ROM_2402:
    DPTR = 0xA2E3;
    XDATA[DPTR] = A;
L_ROM_2406:
    F_0xBC16();
    F_0xA6F7();
    PUSH(DPH);
    PUSH(DPL);
    DPTR = 0xA2E2;
    A = XDATA[DPTR];
    DPL = POP();
    DPH = POP();
    B = 3;
    F_0xBBBD();
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA2E2;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_2378;
    PSW = POP();
    IE_7 = CY;
    return;
    DPTR = 0xA0AD;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_248D; }
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_2463;
    R5 = 0x16;
    F_ROM_27C3+2();
    F_ROM_2183();
    B = 0xE;
    DPTR = 0xA0BD;
    F_ROM_2722();
    A = 0;
    F_ROM_246E();
    F_ROM_2183();
    B = 0xE;
    F_ROM_27F2+1();
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    F_ROM_27D4+1();
    A = 3;
    F_ROM_2013();
    DPTR = 0xA0B0;
    A = 1;
    XDATA[DPTR] = A;
    return;
L_ROM_2463:
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_248B;
    F_ROM_2183();
    R7 = A;
/* ---- block @0x24B4 (outside named functions) ---- */
L_ROM_24B4:
    RAM[0x12]++;
    { unsigned t = A; A = B ? t / B : 0xFF; B = B ? t % B : B; }
    R4 = A;
    goto L_ROM_24BE;
    R7 = 0;
    goto L_ROM_24CF;
L_ROM_24BE:
    DPTR = 0xA2A6;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 0x15;
/* ---- block @0x24D4 (outside named functions) ---- */
    DPTR = 0xA0BD;
    F_ROM_458A();
    A = XDATA[DPTR];
    R7 = A;
    R6 = 0;
    A = 0;
    R3 = A;
    R5 = A;
    F_ROM_2471();
    A = 0;
    R5 = A;
    R7 = A;
    DPTR = 0x522;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x9E96;
    A = R5;
    XDATA[DPTR] = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_24F6; }
L_ROM_24F5:
    CY = 0;
L_ROM_24F6:
    PUSH(PSW);
    DPTR = 0xA2FF;
    A = R5;
    XDATA[DPTR] = A;
    DPTR = 0xA2FE;
    A = R7;
    XDATA[DPTR] = A;
    A = A ^ 2;
    if (A != 0) goto L_ROM_2529;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA300;
    XDATA[DPTR] = A;
    R5 = 0x4A;
    F_ROM_27C3+2();
    if (R7 != 1) goto L_ROM_251C;
    DPTR = 0x4D4;
    A = 0xFF;
    goto L_ROM_255F;
L_ROM_251C:
    DPTR = 0xA300;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 0x46;
    F_ROM_24C6();
    R7 = 0;
    goto L_ROM_2564;
L_ROM_2529:
    DPTR = 0xA2FE;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_255B;
    R5 = A;
    R7 = A;
    F_ROM_24C6();
    DPTR = 0xA2FF;
    A = XDATA[DPTR];
    R7 = A;
    B = 0xB;
    DPTR = 0xA0E0;
    F_ROM_458A();
    A = XDATA[DPTR];
    A = ~A;
    DPTR = 0x4D4;
    XDATA[DPTR] = A;
/* ---- block @0x25B5 (outside named functions) ---- */
    A = CODE[CODE[A + PC]];
    XDATA[DPTR] = A;
    DPTR = 0xA22D;
    F_code_879();
    /* nop */
    /* nop */
    /* nop */
    goto L_ROM_2090;
/* ---- block @0x26D0 (outside named functions) ---- */
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_26D5; }
    CY = 0;
L_ROM_26D5:
    PUSH(PSW);
    DPTR = 0xA22B;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_374E();
    DPTR = 0xA235;
    F_code_86D();
    DPTR = 0xA22D;
    F_ROM_4572();
    F_code_83A();
    DPTR = 0xA235;
    F_0xB674();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0xA22D;
    F_ROM_4572();
    DPTR = 0xA231;
    F_0xB674();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    DPTR = 0xA239;
    F_code_86D();
/* ---- block @0x2732 (outside named functions) ---- */
    R7 = 0;
    R6 = 9;
    F_ROM_26B0();
    DPTR = 0xA22D;
    return;
    B = 0xB;
    DPTR = 0xA0E4;
    F_ROM_458A();
    A = XDATA[DPTR];
    R7 = A;
    R6 = 0;
    return;
    RAM[0x54] = R7;
    F_ROM_274E+1();
L_ROM_274E:
    B = 0xE;
/* ---- block @0x276F (outside named functions) ---- */
    R5 = 0x17;
    R7 = 0xFF;
    F_ROM_24C6();
    A = 0;
    DPTR = 0xA2FB;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA2FD;
    XDATA[DPTR] = A;
    R5 = 0x47;
    R7 = 0xFF;
    F_ROM_24C6();
L_ROM_278A:
    DPTR = 0x5F8;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_27A1;
    DPTR++;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_27A1;
    DPTR++;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_27A1;
    DPTR++;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_27A1;
    F_ROM_27EA();
    R7 = 1;
    return;
L_ROM_27A1:
    F_nullsub_10();
    if (!ACC_0) { goto L_ROM_27BC; }
    CY = 1;
    DPTR = 0xA2FC;
    A = XDATA[DPTR];
    A = A - 3;
    DPTR = 0xA2FB;
    A = XDATA[DPTR];
    A = A - 0;
    goto L_ROM_8013;
    R7 = 1;
    goto L_ROM_27D9;
L_ROM_27BC:
    CY = 1;
    DPTR = 0xA2FC;
    A = XDATA[DPTR];
    A = A - 0xE8;
L_ROM_27C3:
    DPTR = 0xA2FB;
    A = XDATA[DPTR];
    A = A - 3;
    if (CY) goto L_ROM_27D7;
/* ---- block @0x27D6 (outside named functions) ---- */
    return;
L_ROM_27D7:
    R7 = 0x32;
L_ROM_27D9:
    R6 = 0;
L_ROM_27DB:
    F_ROM_3E50();
    DPTR = 0xA2FB;
    F_ROM_27DB+1();
/* ---- block @0x27FC (outside named functions) ---- */
    A = 0;
/* ---- block @0x2803 (outside named functions) ---- */
    DPTR = 0xA0FE;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    return;
/* ---- block @0x28AF (outside named functions) ---- */
    R7 = 0x17;
/* ---- block @0x28B8 (outside named functions) ---- */
    R7 = 0xA3;
    F_ROM_46AB();
    A = R7;
    A = A & 0xF8;
    A = A | 5;
    R5 = A;
    R7 = 0xA3;
    F_ROM_468D();
    R7 = 0xA0;
    F_ROM_46AB();
    A = R7;
    A = A & 0xF;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_28D6; }
    CY = 0;
L_ROM_28D6:
    PUSH(PSW);
    DPTR = 0xA2AD;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    A = R5;
    XDATA[DPTR] = A;
    DPTR++;
    F_ROM_459F();
    F_ROM_2898();
    A = A ^ 4;
    if (A != 0) goto L_ROM_290C;
    DPTR = 0xFD58;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_2904; }
    DPTR = 0xA2AD;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    DPTR++;
    F_ROM_4596();
    F_0x9578();
    R7 = 1;
    goto L_ROM_2912;
L_ROM_2904:
    R7 = 1;
    F_ROM_2AD0();
    R7 = 2;
    goto L_ROM_2912;
L_ROM_290C:
    R7 = 2;
    F_ROM_2AD0();
    R7 = 3;
L_ROM_2912:
    PSW = POP();
    IE_7 = CY;
    return;
    R7 = A;
    F_0x982B();
    R7 = 4;
    F_ROM_2AD4();
    DPTR = 0xA208;
    A = XDATA[DPTR];
    if (A != 0x23) goto L_ROM_29C8;
    R7 = 1;
    F_ROM_2AE8+2();
L_ROM_29C8:
    DPTR = 0xA208;
    A = XDATA[DPTR];
    if (A != 0x27) goto L_ROM_29D3;
    R7 = 2;
    F_ROM_2AE8+2();
L_ROM_29D3:
    DPTR = 0xA208;
    A = XDATA[DPTR];
    if (A != 0x30) goto L_ROM_29E6;
    A = 0;
    R3 = A;
    R5 = A;
    R7 = 1;
    F_0x9917();
    R7 = 4;
    F_ROM_2AD4();
L_ROM_29E6:
    DPTR = 0xA208;
    A = XDATA[DPTR];
    A = A ^ 0x34;
    if (A == 0) goto L_ROM_29F0;
    goto L_ROM_2A6E;
L_ROM_29F0:
    DPTR = 0xFD62;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2A51; }
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_2A03; }
    goto L_ROM_2A6E;
L_ROM_2A03:
    DPTR = 0xA04D;
    F_ROM_2FDF();
    if (!ACC_0) { goto L_ROM_2A25; }
    F_ROM_2AE3();
    DPTR = 0xA070;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_2AE3();
    A = 0;
    R7 = A;
    R6 = A;
    A = R4;
    F_ROM_47CD+1();
    R7 = 0x48;
    R6 = 9;
    F_ROM_3845();
L_ROM_2A25:
    F_ROM_2C0B();
    R5 = 1;
    F_ROM_46C7+1();
    DPTR = 0xA205;
    A = 1;
    XDATA[DPTR] = A;
    R3 = A;
    R2 = 0xA2;
    R1 = 5;
    R5 = A;
    R7 = 0x34;
    F_ROM_28B1();
    DPTR = 0xA093;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    DPTR = 0x49D;
    A = 0;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    F_0xAEA2();
    goto L_ROM_2A8E;
L_ROM_2A51:
    F_ROM_2C0B();
    A = 0;
    R5 = A;
    F_ROM_46C7+1();
    DPTR = 0xA04D;
    F_ROM_6B0A();
    if (!ACC_0) { goto L_ROM_2A82; }
    F_ROM_2AE3();
    A = 0;
    R3 = A;
    R2 = A;
    A = R5;
    R1 = A;
    A = R4;
    R0 = A;
    DPTR = 0xA070;
    A = XDATA[DPTR];
L_ROM_2A6E:
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    A = 0;
    R4 = A;
    R5 = A;
    F_nullsub_5();
    F_ROM_47CD+1();
    R7 = 0x48;
    R6 = 9;
    F_ROM_3845();
L_ROM_2A82:
    F_ROM_2FE6();
    DPTR = 0x49D;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    F_0xAEE3();
L_ROM_2A8E:
    DPTR = 0xA208;
    A = XDATA[DPTR];
    R5 = A;
    if (A != 0x35) goto L_ROM_2A9D;
    DPTR = 0xA051;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
L_ROM_2A9D:
    A = R5;
    if (A != 0x36) goto L_ROM_2AC3;
    DPTR = 0xFD61;
    A = XDATA[DPTR];
    DPTR = 0xA205;
    XDATA[DPTR] = A;
    DPTR = 0xFD62;
    A = XDATA[DPTR];
    DPTR = 0xA206;
    XDATA[DPTR] = A;
    DPTR = 0xA208;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA205;
    A = XDATA[DPTR];
    R5 = A;
    R3 = 1;
    R2 = 0xA2;
    R1 = 6;
    F_ROM_28B1();
L_ROM_2AC3:
    DPTR = 0xA208;
    A = XDATA[DPTR];
    if (A != 0x37) goto L_ROM_2ACD;
    F_0xAC33();
L_ROM_2ACD:
    DPTR = 0xA208;
/* ---- block @0x2AEB (outside named functions) ---- */
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x2B03 (outside named functions) ---- */
    R7 = 0x48;
    R6 = 9;
    goto L_ROM_374E;
    F_ROM_2B15();
    R7 = 4;
    goto L_ROM_2AF4;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_2B15; }
    CY = 0;
/* ---- block @0x2C1A (outside named functions) ---- */
    DPTR = 0xA207;
    XDATA[DPTR] = A;
    CY = 1;
    A = A - 0x3F;
    return;
    DPTR = 0xA088;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    return;
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 1;
    R7 = A;
    DPTR = 0xA08D;
    A = XDATA[DPTR];
    R3 = A;
    DPTR = 0xA08C;
    A = XDATA[DPTR];
    DPTR = 0xA2C3;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA065;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2C4F; }
    F_0xAC89();
    goto L_ROM_2C52;
L_ROM_2C4F:
    F_0xA0CA();
L_ROM_2C52:
    DPTR = 0xA093;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2C5D; }
    DPTR++;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
L_ROM_2C5D:
    DPTR = 0xA094;
    A = XDATA[DPTR];
    A = A ^ 8;
    if (A != 0) goto L_ROM_2C7C;
    DPTR = 0xA093;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2C77; }
    F_ROM_2C0B();
    A = 0;
    R5 = A;
    F_ROM_46C7+1();
    F_ROM_2FE6();
    goto L_ROM_2C7C;
L_ROM_2C77:
    A = 0;
    DPTR = 0xA094;
    XDATA[DPTR] = A;
L_ROM_2C7C:
    F_ROM_2FDC();
    if (!ACC_0) { goto L_ROM_2C94; }
    DPTR = 0xA095;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    if (A != 0x14) goto L_ROM_2C94;
    DPTR = 0x49C;
    A = 0;
    XDATA[DPTR] = A;
    DPTR = 0xA095;
    XDATA[DPTR] = A;
L_ROM_2C94:
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2CA1; }
    DPTR = 0x9FD1;
    A = 1;
    XDATA[DPTR] = A;
L_ROM_2CA1:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_2CA9;
    goto L_ROM_2D12;
L_ROM_2CA9:
    DPTR = 0x9FF0;
    A = XDATA[DPTR];
    A++;
    F_ROM_2D27();
    F_nullsub_5();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0x562;
    F_ROM_2D41();
    R0 = 0x10;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR++;
    F_ROM_2D41();
    R0 = 0x18;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    DPTR = 0xA024;
    F_code_86D();
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    DPTR++;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_2D09; }
    F_0xABC0();
    A = 5;
    XDATA[DPTR] = A;
    F_0xAABC();
    F_0xABD1();
L_ROM_2D09:
    DPTR = 0x9FD5;
    F_nullsub_9();
    if (!ACC_0) { goto L_ROM_2D1B; }
L_ROM_2D12:
    DPTR = 0x13B;
    A = XDATA[DPTR];
    if (!ACC_4) { goto L_ROM_2D1B; }
    F_ROM_2FAF();
L_ROM_2D1B:
    DPTR = 0xA312;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    CY = 0;
    A = A - 0x80;
    if (CY) goto L_ROM_2D32;
/* ---- block @0x2D47 (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0x561;
    A = XDATA[DPTR];
    R7 = A;
    A = 0;
    R4 = A;
    R5 = A;
    R6 = A;
    R0 = 8;
    F_code_85A();
    R0 = RAM_4;
    R1 = RAM_5;
    R2 = RAM_6;
    R3 = RAM_7;
    DPTR = 0x560;
    A = XDATA[DPTR];
    R7 = A;
    A = 0;
    R4 = A;
    R5 = A;
    R6 = A;
    return;
/* ---- block @0x2FC8 (outside named functions) ---- */
    DPTR = 0xA12F;
    F_code_86D();
    return;
/* ---- block @0x2FE5 (outside named functions) ---- */
    XDATA[DPTR] = A;
/* ---- block @0x2FEC (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0xA1CF;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    return;
    XDATA[DPTR] = A;
    DPTR = 0xA0DE;
    A = XDATA[DPTR];
    A = A & 7;
    return;
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    return;
    DPTR = 0xA093;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
    return;
    R5 = 1;
    R7 = 0x17;
    goto L_ROM_30B1;
    SFR_E8 = 7;
    IE = 0x85;
    return;
    R7 = 0x81;
    F_ROM_46AB();
    A = R7;
    A = A & 0xFE;
    R5 = A;
    R7 = 0x81;
    F_ROM_468D();
    R7 = 0x80;
    F_ROM_78B7();
    R5 = A;
    R7 = 0x80;
    F_ROM_468D();
/* ---- block @0x306A (outside named functions) ---- */
    F_ROM_5FF7();
    F_0x9DDC();
    R7 = 0x81;
/* ---- block @0x3075 (outside named functions) ---- */
    A = R7;
    A = A | 4;
    R5 = A;
    R7 = 0x81;
    F_ROM_468D();
    F_0xB17C();
    F_0xB777();
    A = 0;
    R7 = A;
    goto L_ROM_442E;
    A = 0;
    DPTR = 0x9E92;
    F_ROM_3072+1();
    DPTR++;
    XDATA[DPTR] = A;
    return;
    A = 0;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    return;
    A = R7;
    A = A ^ 1;
    if (A != 0) goto L_ROM_30BF;
    F_ROM_3459+1();
    DPTR = 0x138;
    F_ROM_3072();
    DPTR = 0x130;
    F_ROM_3072+1();
    DPTR = 0x130;
    A = 0x10;
L_ROM_30B1:
    XDATA[DPTR] = A;
    DPTR = 0x139;
    A = 1;
    XDATA[DPTR] = A;
    DPTR = 0x53;
    A = 0x80;
    XDATA[DPTR] = A;
    return;
L_ROM_30BF:
    F_0x9EE4();
    DPTR = 0xA047;
    A = XDATA[DPTR];
    DPTR = 0x131;
    XDATA[DPTR] = A;
    DPTR = 0xA048;
    A = XDATA[DPTR];
    DPTR = 0x132;
    XDATA[DPTR] = A;
    DPTR = 0xA049;
    A = XDATA[DPTR];
    DPTR = 0x133;
    XDATA[DPTR] = A;
    DPTR = 0xA042;
    A = XDATA[DPTR];
    DPTR = 0x138;
    XDATA[DPTR] = A;
    DPTR = 0xA045;
    A = XDATA[DPTR];
    DPTR = 0x13B;
    F_ROM_3479();
    R7 = 1;
    F_ROM_323D+1();
    R6 = 0;
    R7 = 0x62;
    R5 = 0;
    R3 = 1;
    R2 = 0x9F;
    R1 = 0xD4;
    F_code_8AA();
    F_0xBBA3();
    F_code_8AA();
    DPTR = 0x9FD8;
    A = 2;
    XDATA[DPTR] = A;
    DPTR = 0x9FDF;
    A--;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0xA;
    XDATA[DPTR] = A;
    DPTR = 0x9FE5;
    A = 0;
    XDATA[DPTR] = A;
    DPTR++;
    A = 2;
    XDATA[DPTR] = A;
    F_ROM_3230();
    XDATA[DPTR] = A;
    F_0xB9BB();
    A = 0;
    R5 = A;
    R7 = A;
    F_ROM_31C5+1();
    R5 = 0xC;
    R7 = 2;
    F_ROM_31C5+1();
    F_ROM_31C2();
    DPTR = 0x9E98;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_3140;
    DPTR = 0x9FE4;
    A = 0xDD;
    XDATA[DPTR] = A;
    goto L_ROM_3152;
L_ROM_3140:
    DPTR = 0x9E98;
    A = XDATA[DPTR];
    DPTR = 0x9FE4;
    if (A != 3) goto L_ROM_314F;
    A = 0xD4;
    XDATA[DPTR] = A;
    goto L_ROM_3152;
L_ROM_314F:
    A = 0x40;
    XDATA[DPTR] = A;
L_ROM_3152:
    R7 = 0x79;
    F_ROM_46AB();
    A = R7;
    A = A & 3;
    R7 = A;
    if (R7 != 2) goto L_ROM_316D;
    R7 = 0x28;
    F_ROM_46AB();
    A = R7;
    if (!ACC_2) { goto L_ROM_316D; }
    DPTR = 0x9FF6;
    A = 2;
    XDATA[DPTR] = A;
L_ROM_316D:
    F_0xAD42();
    F_ROM_3230();
    XDATA[DPTR] = A;
    DPTR = 0xA041;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    DPTR = 0x138;
    A = XDATA[DPTR];
    DPTR = 0xA042;
    XDATA[DPTR] = A;
    DPTR = 0x139;
    A = XDATA[DPTR];
    DPTR = 0xA043;
    XDATA[DPTR] = A;
    DPTR = 0x13A;
    A = XDATA[DPTR];
    DPTR = 0xA044;
    XDATA[DPTR] = A;
    DPTR = 0x13B;
    A = XDATA[DPTR];
    DPTR = 0xA045;
    XDATA[DPTR] = A;
    DPTR = 0x130;
    A = XDATA[DPTR];
    DPTR = 0xA046;
    XDATA[DPTR] = A;
    DPTR = 0x131;
    A = XDATA[DPTR];
    DPTR = 0xA047;
    XDATA[DPTR] = A;
    DPTR = 0x132;
    A = XDATA[DPTR];
    DPTR = 0xA048;
    XDATA[DPTR] = A;
    DPTR = 0x133;
    A = XDATA[DPTR];
    DPTR = 0xA049;
    XDATA[DPTR] = A;
    R7 = 1;
L_ROM_31BC:
    F_0xAA8D();
    F_0xBC0F();
/* ---- block @0x31DE (outside named functions) ---- */
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    R5 = 0xC;
    R7 = 1;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_31EB; }
    CY = 0;
L_ROM_31EB:
    PUSH(PSW);
    DPTR = 0xA315;
    A = R7;
    XDATA[DPTR] = A;
    A--;
    if (A == 0) goto L_ROM_320A;
    A--;
    if (A == 0) goto L_ROM_3211;
    A = A + 2;
    if (A != 0) goto L_ROM_3216;
/* ---- block @0x3250 (outside named functions) ---- */
    DPTR = 0x9FF6;
    A = XDATA[DPTR];
    A = A + 4;
    DPTR = 0x9FF1;
    XDATA[DPTR] = A;
/* ---- block @0x325E (outside named functions) ---- */
    DPTR = 0xA316;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_36B6+2();
    DPTR = 0xA316;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_326D;
    F_ROM_363A();
L_ROM_326D:
    F_ROM_3454();
    DPTR = 0x9FD3;
    A = 4;
    XDATA[DPTR] = A;
    return;
L_ROM_33C8:
    P1 = POP();
    CY = CY | !RAM[0x29]_2;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_33DD; }
    DPTR = 0xA050;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (!ACC_0) { goto L_ROM_33E3; }
    goto L_ROM_33F9;
L_ROM_33DD:
    F_0xA2B7();
/* ---- block @0x3421 (outside named functions) ---- */
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    DPTR = 0x604;
    if (ACC_0) { goto L_ROM_3432; }
    A = XDATA[DPTR];
    A = A | 0x40;
    F_ROM_3453();
    goto L_ROM_3441;
L_ROM_3432:
    F_ROM_31BC+2();
    DPTR = 0x527;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    DPTR = 0x9FD3;
    A = 0xC;
    XDATA[DPTR] = A;
L_ROM_3441:
    A = 0;
    R5 = A;
    R7 = A;
    goto L_ROM_54C6;
/* ---- block @0x347A (outside named functions) ---- */
L_ROM_347A:
    R5 = 0x2D;
    F_ROM_5751();
/* ---- block @0x3482 (outside named functions) ---- */
    A = 2;
/* ---- block @0x3510 (outside named functions) ---- */
    if (A == 0) goto L_ROM_3518;
    F_ROM_350E+1();
    F_ROM_3625();
    goto L_ROM_351C;
L_ROM_3518:
    F_ROM_350E+1();
    F_ROM_360D();
L_ROM_351C:
    F_ROM_3480();
    R5 = 1;
    R7 = 2;
    F_ROM_3484();
    F_ROM_362D();
/* ---- block @0x352B (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0x13F;
    A = 0x10;
    XDATA[DPTR] = A;
    R5 = A;
    R7 = 3;
    return;
    DPTR = 0x562;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0x561;
    A = XDATA[DPTR];
    R5 = A;
    A = R5;
    R0 = 2;
L_ROM_3543:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
    if (--R0 != 0) goto L_ROM_3543;
    R7 = A;
    DPTR = 0xA1E9;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    F_ROM_37A8();
    if (A == 0) goto L_ROM_3559;
    goto L_ROM_35F5;
L_ROM_3559:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_3561;
    goto L_ROM_35F5;
L_ROM_3561:
    F_0xBB83();
    A = A ^ 1;
    if (A != 0) goto L_ROM_358A;
    DPTR = 0x6AB;
    A = XDATA[DPTR];
    DPTR = 0x9FE0;
    XDATA[DPTR] = A;
    DPTR = 0x6AA;
    A = XDATA[DPTR];
    DPTR = 0x9FDF;
    XDATA[DPTR] = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 0) goto L_ROM_3585;
    DPTR = 0x9FDF;
    A = XDATA[DPTR];
    R6 = A;
    R7 = A;
    goto L_ROM_3585;
L_ROM_3585:
    DPTR = 0x9FE0;
    A = R7;
    XDATA[DPTR] = A;
L_ROM_358A:
    F_0xA8CA();
    A = 0;
    DPTR = 0x9FE2;
    F_0xABE1();
    F_0xA718();
    F_0xA742();
    A = A & 0xEF;
    XDATA[DPTR] = A;
    F_0xBB83();
    A = A + 0xFD;
    if (!CY) goto L_ROM_35A6;
    goto L_ROM_35B5;
L_ROM_35A6:
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_35B2; }
    F_0xA1C1();
    goto L_ROM_35B5;
L_ROM_35B2:
    F_0xA174();
L_ROM_35B5:
    F_ROM_6B12();
    if (!ACC_0) { goto L_ROM_3613; }
    A = R7;
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    if (ACC_0) { goto L_ROM_35E6; }
    F_0xBCE2();
    A = A ^ R7;
    if (A != 0) goto L_ROM_3613;
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    F_0xBCEA();
    F_ROM_350B();
    F_ROM_3625();
    F_ROM_5FB5();
    F_0xBCD3();
    DPTR = 0x9FE0;
    A = XDATA[DPTR];
    A--;
    XDATA[DPTR] = A;
    goto L_ROM_3613;
L_ROM_35E6:
    DPTR = 0x9FD7;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    A = A ^ 1;
    if (A != 0) goto L_ROM_3613;
    F_0xBCE2();
    R6 = A;
L_ROM_35F5:
    A = A ^ R7;
    if (A == 0) goto L_ROM_3613;
    DPTR = 0x573;
    A = XDATA[DPTR];
    R7 = A;
    A = R6;
    A = A ^ R7;
    if (A == 0) goto L_ROM_3613;
/* ---- block @0x3621 (outside named functions) ---- */
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
/* ---- block @0x3629 (outside named functions) ---- */
    R5 = 0x20;
    A = 0;
    R7 = A;
/* ---- block @0x3641 (outside named functions) ---- */
    R5 = 3;
    R7 = 2;
    A = 0x1D;
    A = A + R7;
/* ---- block @0x364D (outside named functions) ---- */
    F_ROM_3637+1();
    F_ROM_31C2();
    DPTR = 0x9FD3;
    A = 0xC;
    XDATA[DPTR] = A;
    return;
    F_ROM_36B6+2();
    A = 0;
    R5 = A;
    R7 = A;
    goto L_ROM_54C6;
    F_ROM_363A();
    F_ROM_3454();
    F_ROM_37EC();
    goto L_ROM_324F;
/* ---- block @0x36B2 (outside named functions) ---- */
    A = XDATA[DPTR];
    R5 = A;
    R4 = 0;
L_ROM_36B6:
    F_0x932B();
    goto L_ROM_36C0;
L_ROM_36BB:
    CY = 0;
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
L_ROM_36C0:
    if (--R0 != 0) goto L_ROM_36BB;
    F_0xBD12();
    R7 = 0;
    if (A == 0) goto L_ROM_36CB;
    R7 = 1;
L_ROM_36CB:
    return;
    F_ROM_36B6+2();
    F_ROM_3648();
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A & 0xF7;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x37B1 (outside named functions) ---- */
    F_ROM_3637+1();
L_ROM_37B3:
    DPTR = 0x9FD2;
    A = 1;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA03F;
    A = XDATA[DPTR];
    DPTR = 0x13F;
    return;
    F_ROM_363A();
    F_ROM_37EC();
    goto L_ROM_37B3;
    A = 0;
    R7 = A;
    F_ROM_368C();
    A = R7;
    A = A ^ 1;
    return;
    A = R7;
    if (A == 0) goto L_ROM_3805;
    F_ROM_37A8();
    if (A != 0) goto L_ROM_3805;
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    R5 = 0x2B;
    R7 = 0xF;
    F_ROM_54C6();
    DPTR = 0x604;
    A = XDATA[DPTR];
    A = A & 0xBF;
    XDATA[DPTR] = A;
/* ---- block @0x3806 (outside named functions) ---- */
    F_ROM_3E3A();
    goto L_ROM_37B3;
    goto L_ROM_37B3;
    DPTR = 0x527;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    return;
    A = 0;
    DPTR = 0xA1C1;
    XDATA[DPTR] = A;
L_ROM_3819:
    DPTR = 0xA1C1;
    A = XDATA[DPTR];
    A = A ^ 1;
    XDATA[DPTR] = A;
    A = A + 0xF4;
    DPTR = 0x1C4;
    XDATA[DPTR] = A;
    A = 0x67;
    DPTR++;
    XDATA[DPTR] = A;
    F_ROM_3E44();
    if (R7 != 1) goto L_ROM_3833;
    F_ROM_31FC();
L_ROM_3833:
    IE_7 = 0;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_3849;
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    A = A ^ R7;
/* ---- block @0x384B (outside named functions) ---- */
    F_0xB148();
    if (R7 != 1) goto L_ROM_3854;
    F_0x9C16();
L_ROM_3854:
    IE_7 = 1;
    IE_7 = 1;
L_ROM_3858:
    DPTR = 0xA13A;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_3862;
    F_0xB7A0();
L_ROM_3862:
    F_ROM_4FF6();
    F_ROM_42DD();
    goto L_ROM_3819;
/* ---- block @0x39D5 (outside named functions) ---- */
L_ROM_39D5:
    RAM[R0]++;
    R5 = 1;
    R7 = 4;
/* ---- block @0x39FA (outside named functions) ---- */
    DPTR = 0x527;
    A = RAM[0x54];
    XDATA[DPTR] = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_3A06; }
    CY = 0;
L_ROM_3A06:
    PUSH(PSW);
    DPTR = 0x9FD2;
    A = XDATA[DPTR];
    DPTR = 0xA314;
    XDATA[DPTR] = A;
    A = A ^ R7;
    if (A != 0) goto L_ROM_3A15;
    goto L_ROM_3AF9;
L_ROM_3A15:
    A = R7;
L_ROM_3A16:
    A--;
    if (A == 0) goto L_ROM_3A5F;
    A--;
    if (A == 0) goto L_ROM_3A90;
    A--;
    if (A != 0) goto L_ROM_3A21;
    goto L_ROM_3A9F;
L_ROM_3A21:
    A--;
    if (A != 0) goto L_ROM_3A26;
    goto L_ROM_3ACE;
L_ROM_3A26:
    A = A + 4;
    if (A == 0) goto L_ROM_3A2C;
    goto L_ROM_3AF9;
L_ROM_3A2C:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_3A38;
    F_0xB845();
    goto L_ROM_3AF9;
L_ROM_3A38:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_3A44;
    F_0xB84A();
    goto L_ROM_3AF9;
L_ROM_3A44:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_3A50;
    F_0xB84F();
    goto L_ROM_3AF9;
L_ROM_3A50:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A == 0) goto L_ROM_3A5A;
    goto L_ROM_3AF9;
L_ROM_3A5A:
    F_0xB83D();
    goto L_ROM_3AF9;
L_ROM_3A5F:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_3A6B;
    F_ROM_67A0+2();
    R1 = A;
L_ROM_3A6B:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_3A77;
    F_ROM_6791();
    goto L_ROM_3AF9;
L_ROM_3A77:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_3A83;
    F_ROM_67E6();
    goto L_ROM_3AF9;
L_ROM_3A83:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_3A8B;
    goto L_ROM_3AF9;
L_ROM_3A8B:
    F_ROM_67EA();
    goto L_ROM_3AF9;
L_ROM_3A90:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_3A9C;
    F_0xB892();
    goto L_ROM_3B19;
L_ROM_3A9C:
    DPTR = 0xA314;
L_ROM_3A9F:
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_3AA8;
    F_0xB873();
    goto L_ROM_3B19;
L_ROM_3AA8:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_3AB4;
    F_0xB88C();
    goto L_ROM_3B19;
L_ROM_3AB4:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_3B19;
    F_0xB87B();
    goto L_ROM_3B19;
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_3ACB;
    F_0xB8B5();
    goto L_ROM_3B19;
L_ROM_3ACB:
    DPTR = 0xA314;
L_ROM_3ACE:
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_3AD7;
    F_0xB89D();
    goto L_ROM_3B19;
L_ROM_3AD7:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_3AE3;
    F_0xB8B0();
    goto L_ROM_3B19;
L_ROM_3AE3:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_3B19;
    F_0xB8AB();
    goto L_ROM_3B19;
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_3AF9;
    F_ROM_3FE4();
    goto L_ROM_3B19;
L_ROM_3AF9:
    DPTR = 0xA314;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_3B04;
    F_ROM_3FCF();
    goto L_ROM_3B19;
L_ROM_3B04:
    DPTR = 0xA314;
/* ---- block @0x3B1E (outside named functions) ---- */
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    return;
/* ---- block @0x3B32 (outside named functions) ---- */
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    R7 = A;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    return;
    DPTR = 0x543;
    A = XDATA[DPTR];
    R7 = 0;
    if (!ACC_7) { goto L_ROM_3B48; }
    R7 = 1;
L_ROM_3B48:
    return;
    DPTR = 0x134;
    A = 0x40;
    XDATA[DPTR] = A;
    R5 = A;
    A = 0;
    R7 = A;
    goto L_ROM_6484;
L_ROM_3B6E:
    F_0xBC8E();
    if (!ACC_0) { goto L_ROM_3B7A; }
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    goto L_ROM_3B7E;
L_ROM_3B7A:
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
L_ROM_3B7E:
    DPTR = 0xA050;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (!ACC_0) { goto L_ROM_3B91; }
    R5 = 1;
    R7 = 0xC;
    goto L_ROM_6259+1;
L_ROM_3B91:
    F_ROM_3849+1();
    return;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_4FD2();
    if (!ACC_0) { goto L_ROM_3BBA; }
    A = R7;
    A = A & 0x7F;
    F_0xBC8E();
    if (!ACC_1) { goto L_ROM_3BAE; }
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    goto L_ROM_3BB2;
L_ROM_3BAE:
    A = XDATA[DPTR];
    A = A & 0xFD;
    XDATA[DPTR] = A;
L_ROM_3BB2:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_3BBA;
    F_ROM_3849+1();
L_ROM_3BBA:
    DPTR = 0xA04E;
    F_ROM_3B08+2();
    if (!ACC_0) { goto L_ROM_3BE4; }
    DPTR = 0xA051;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_3BE4; }
    A = R7;
    A = A & 0xFD;
    XDATA[DPTR] = A;
    DPTR = 0x4E0;
    A = XDATA[DPTR];
    DPTR = 0xA051;
    if (!ACC_1) { goto L_ROM_3BE0; }
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    goto L_ROM_3BE4;
L_ROM_3BE0:
    A = XDATA[DPTR];
    A = A & 0xFB;
    XDATA[DPTR] = A;
L_ROM_3BE4:
    DPTR = 0x4E0;
    A = XDATA[DPTR];
    if (!ACC_1) { goto L_ROM_3BF1; }
    F_0xA7A1();
    F_ROM_518B+1();
L_ROM_3BF1:
    return;
    F_ROM_3B10+2();
    if (!ACC_0) { goto L_ROM_3C03; }
    A = R7;
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    if (!ACC_0) { goto L_ROM_3C03; }
    F_0xBCD3();
L_ROM_3C03:
    DPTR = 0x9FD4;
    F_ROM_84C9();
    if (!ACC_0) { goto L_ROM_3C15; }
    F_0xA73F();
    A = A & 7;
    if (A != 0) goto L_ROM_3C4C;
    goto L_ROM_3C4A;
L_ROM_3C15:
    F_0xA76B();
    if (CY) goto L_ROM_3C4A;
    F_ROM_67A8();
    if (A != 0) goto L_ROM_3C4C;
    F_ROM_3D67();
L_ROM_3C21:
    if (A != 0) goto L_ROM_3C29;
    F_ROM_3C33+1();
    F_ROM_3C2B+2();
    XDATA[DPTR] = A;
    return;
L_ROM_3C29:
    F_ROM_3C33+1();
L_ROM_3C2B:
    DPTR = 0x9FE3;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    CY = 1;
L_ROM_3C33:
    A = A - 2;
    if (CY) goto L_ROM_3C41;
    F_ROM_3C2B+2();
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0x9FE3;
    XDATA[DPTR] = A;
    goto L_ROM_3C44;
L_ROM_3C41:
    F_0xA162();
L_ROM_3C44:
    A = 0;
    DPTR = 0x9FE2;
    XDATA[DPTR] = A;
    return;
L_ROM_3C4A:
    F_ROM_3849+1();
L_ROM_3C4C:
    return;
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A & 0xFB;
    return;
    F_0xA778();
    if (CY) goto L_ROM_3C8A;
    DPTR = 0x9FF3;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    DPTR = 0xA035;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x9FF3;
    A = XDATA[DPTR];
    CY = 1;
    A = A - R7;
    if (!CY) goto L_ROM_3C8A;
    DPTR = 0x9FEB;
    A = XDATA[DPTR];
    A++;
    F_0x8FAB();
    DPTR = 0x9FF2;
    XDATA[DPTR] = A;
    R3 = A;
    DPTR = 0x9FEB;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    DPTR = 0xA2E7;
    A = 4;
    XDATA[DPTR] = A;
    F_0xAABC();
L_ROM_3C8A:
    return;
/* ---- block @0x3D69 (outside named functions) ---- */
    F_0xAABC();
    return;
/* ---- block @0x3DF4 (outside named functions) ---- */
L_ROM_3DF4:
    R1 = 0x20;
    A = A ^ R6;
    goto L_ROM_3C21;
/* ---- block @0x3E3A (outside named functions) ---- */
L_ROM_3E3A:
    A = A ^ R5;
    A = A ^ R7;
    A = A | R4;
    A = A ^ R6;
    A = A ^ R7;
    A = A & RAM[0x6F];
    A = A ^ R7;
    A = A & R6;
L_ROM_3E44:
    /* nop */
    /* nop */
    A = A ^ R7;
    A = A ^ RAM[R1];
    DPTR = 0xA1CC;
    F_ROM_4596();
/* ---- block @0x3E5A (outside named functions) ---- */
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_A422;
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_95CE;
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_A522;
L_ROM_3E77:
    { uint8 t = A; A = R4; R4 = t; }
L_ROM_3E78:
    F_ROM_4596();
L_ROM_3E7B:
    goto L_ACF9;
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_AD0D;
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_ROM_4FAB;
    DPTR = 0xA1CC;
    F_ROM_4596();
    goto L_ROM_5D48;
/* ---- block @0x3FD1 (outside named functions) ---- */
    F_ROM_4CE1();
    B = 0x10;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    R7 = A;
    F_ROM_4C32+2();
    R5 = A;
    A = R7;
    A = A | R5;
    R7 = A;
    DPTR = 0xA1D3;
    A = XDATA[DPTR];
/* ---- block @0x3FEF (outside named functions) ---- */
    R5 = 0x1F;
L_ROM_3FF1:
    R7 = 0x6F;
    F_ROM_54C6();
    DPTR = 0x527;
    A = XDATA[DPTR];
    A = A & 0xBF;
    XDATA[DPTR] = A;
    DPTR = 0x9FD2;
    A = 4;
    XDATA[DPTR] = A;
    return;
    R5 = 0x25;
    goto L_ROM_3FF1;
    R6 = A;
    A = A & 0x10;
    R5 = A;
    A = R7;
    A = A & 0xEF;
    A = A | R5;
    return;
L_ROM_4011:
    A = 0;
    R3 = A;
    R2 = A;
    R5 = A;
    R7 = 1;
    F_ROM_44DE();
    DPTR = 0xA1CA;
    A = R7;
    XDATA[DPTR] = A;
    if (A == 0) goto L_ROM_4011;
L_ROM_4021:
    DPTR = 0x9E92;
    A = XDATA[DPTR];
/* ---- block @0x42FA (outside named functions) ---- */
    F_ROM_451D();
    A = XDATA[DPTR];
    R1 = A;
    A = A ^ 5;
    if (A == 0) goto L_ROM_4304;
    goto L_ROM_439B;
L_ROM_4304:
    B = 0x10;
    A = RAM[0x51];
    DPTR = 0x8101;
    F_ROM_47DA+1();
    RAM[0x5B] = A;
    F_ROM_4CE9();
    A = XDATA[DPTR];
    CY = 0;
    A = A - 0x30;
    if (CY) goto L_ROM_432B;
    F_ROM_4CD3();
    A = XDATA[DPTR];
    if (ACC_2) { goto L_ROM_432B; }
    F_ROM_4E28+1();
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    if (!ACC_0) { goto L_ROM_433A; }
L_ROM_432B:
    A = 0;
    RAM[0x5B] = A;
    F_ROM_451D();
    F_ROM_453F();
    A = 0;
    XDATA[DPTR] = A;
    F_ROM_4579();
    A = 0;
    XDATA[DPTR] = A;
    goto L_ROM_4345;
L_ROM_433A:
    R5 = RAM[0x53];
    R7 = RAM[0x51];
    F_0xB249();
    F_ROM_4579();
    A = R7;
    XDATA[DPTR] = A;
L_ROM_4345:
    F_ROM_4579();
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_43B3;
    F_ROM_456D();
    A = XDATA[DPTR];
    R7 = A;
    A = A + 5;
    R5 = A;
    A = 0;
    A = ROLC8(A);
    R4 = A;
    F_ROM_4CE9();
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    F_0xAB83();
    if (!CY) goto L_ROM_436C;
    F_0xBB4D();
    A = XDATA[DPTR];
    R5 = A;
    A = RAM[0x53];
    CY = 0;
    A = A - R5;
    if (CY) goto L_ROM_4387;
L_ROM_436C:
    A = RAM[0x5B];
    if (A != 0) goto L_ROM_4375;
    RAM[0x5B] = 1;
    goto L_ROM_4382;
L_ROM_4375:
    A = RAM[0x5B];
    if (A != 1) goto L_ROM_437F;
    RAM[0x5B] = 3;
    goto L_ROM_4382;
L_ROM_437F:
    RAM[0x5B] = 5;
L_ROM_4382:
    F_ROM_456D();
    A = R6;
    goto L_ROM_43A6;
L_ROM_4387:
    F_ROM_4CE9();
    A = XDATA[DPTR];
    A = A + 5;
    R5 = A;
    A = 0;
    A = ROLC8(A);
    R4 = A;
    CY = 0;
    A = R7;
    F_0xAB83();
    if (!CY) goto L_ROM_439E;
    F_ROM_4540+1();
    A = XDATA[DPTR];
L_ROM_439B:
    if (A != 0xA) goto L_ROM_43AC;
L_ROM_439E:
    F_ROM_4CE9();
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_456D();
/* ---- block @0x43BB (outside named functions) ---- */
    A = R1;
    A = A ^ 6;
    if (A == 0) goto L_ROM_43C2;
    goto L_ROM_44F9;
L_ROM_43C2:
    RAM[0x54] = A;
    RAM[0x55] = A;
    B = 0x10;
    A = RAM[0x51];
    DPTR = 0x8101;
    F_ROM_47DA+1();
    RAM[0x5B] = A;
    R7 = RAM[0x57];
    R6 = RAM[0x56];
    F_0xB3A1();
    RAM[0x59] = R7;
    A = RAM[0x58];
    CY = 1;
    A = A - 0x13;
    if (CY) goto L_ROM_4401;
    DPTR = 0xA1CB;
    F_ROM_4596();
    F_ROM_6D4E();
    R5 = A;
    R4 = 0;
    A = RAM[0x57];
    R6 = RAM[0x56];
    R0 = RAM_7;
    R0++;
    goto L_ROM_43FC;
L_ROM_43F7:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_43FC:
    if (--R0 != 0) goto L_ROM_43F7;
    R7 = A;
    goto L_ROM_441A;
L_ROM_4401:
    A = RAM[0x57];
    R6 = RAM[0x56];
    R0 = RAM[0x59];
    R0++;
    goto L_ROM_440F;
L_ROM_440A:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_440F:
    if (--R0 != 0) goto L_ROM_440A;
    R7 = A;
    DPTR = 0x41DA;
    A = 0;
    A = CODE[CODE[A + DPTR]];
    R5 = A;
    R4 = 0;
L_ROM_441A:
    F_code_703();
    DPTR = 0xA1D5;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    A = 0;
    RAM[0x5A] = A;
L_ROM_4428:
    A = RAM[0x58];
    CY = 1;
    A = A - 0x13;
L_ROM_442E:
    R6--;
    F_0xBAEC();
    R0 = RAM[0x59];
    R0++;
    goto L_ROM_443C;
L_ROM_4437:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_443C:
    if (--R0 != 0) goto L_ROM_4437;
    R7 = A;
    DPTR = 0xA1CB;
    F_ROM_4596();
    DPL = RAM[0x5A];
    F_0x9572();
    goto L_ROM_4463;
    F_0xBAEC();
    R0 = RAM[0x59];
    R0++;
    goto L_ROM_445A;
L_ROM_4455:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
L_ROM_445A:
    if (--R0 != 0) goto L_ROM_4455;
    R7 = A;
    A = RAM[0x5A];
    DPTR = 0x41D5;
    A = CODE[CODE[A + DPTR]];
L_ROM_4463:
    F_0xBD02();
    A = A + RAM[0x55];
    RAM[0x55] = A;
    A = R6;
    A = A + RAM[0x54] + CY;
    RAM[0x54] = A;
    CY = 0;
    DPTR = 0xA1D6;
    A = XDATA[DPTR];
    A = A - RAM[0x55];
    DPTR = 0xA1D5;
    A = XDATA[DPTR];
    A = A - RAM[0x54];
    if (CY) goto L_ROM_4486;
    RAM[0x5A]++;
    A = RAM[0x5A];
    A = A ^ 5;
    if (A != 0) goto L_ROM_4428;
L_ROM_4486:
    A = RAM[0x5A];
    CY = 0;
    A = RORC8(A);
    RAM[0x5A] = A;
    A = RAM[0x5B];
    A = A + 1;
    R7 = A;
    A = 0;
    A = ROLC8(A);
    CY = ACC_7;
    A = RORC8(A);
    A = R7;
    A = RORC8(A);
    R7 = A;
    CY = 1;
    A = A - RAM[0x5A];
    if (CY) goto L_ROM_44A4;
    A = R7;
    A = A - RAM[0x5A];
    R7 = A;
    goto L_ROM_44A6;
L_ROM_44A4:
    A = 0;
    R7 = A;
L_ROM_44A6:
    F_ROM_4528+1();
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    R6 = A;
    A = R7;
    A = SWAP(A);
    A = ROLC8(A);
    A = A & 0xE0;
    A = A + R6;
    R6 = A;
    F_ROM_4528+1();
    A = R6;
    XDATA[DPTR] = A;
L_ROM_44B7:
    F_ROM_4528+1();
    A = XDATA[DPTR];
    CY = 0;
    A = A - 0xC0;
    if (CY) goto L_ROM_44C4;
    F_ROM_4528+1();
    A = 0xC0;
    XDATA[DPTR] = A;
L_ROM_44C4:
    F_ROM_4528+1();
    A = XDATA[DPTR];
    A = A + 0x1F;
    R7 = A;
    A = 0;
    A = ROLC8(A);
    R6 = A;
    A = R7;
    R0 = 6;
L_ROM_44D0:
    { uint8 t = A; A = R6; R6 = t; }
    CY = ACC_7;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
    if (--R0 != 0) goto L_ROM_44D0;
    A = A + ACC;
    R7 = A;
    if (A != 0) goto L_ROM_44E1;
/* ---- block @0x453C (outside named functions) ---- */
    return;
/* ---- block @0x4549 (outside named functions) ---- */
    A = 1;
    A = A + RAM[0x51];
/* ---- block @0x455F (outside named functions) ---- */
    A = 0;
    XDATA[DPTR] = A;
    A = 0x11;
    A = A + RAM[0x51];
    DPL = A;
/* ---- block @0x456D (outside named functions) ---- */
L_ROM_456D:
    IE_7 = 1;
    IE_7 = 0;
/* ---- block @0x4576 (outside named functions) ---- */
    DPTR = 0xA1CE;
/* ---- block @0x4582 (outside named functions) ---- */
    B = 0x10;
/* ---- block @0x4597 (outside named functions) ---- */
L_ROM_4597:
    A = CODE[CODE[A + PC]];
    return;
    A = 0x91;
    A = A + RAM[0x51];
    DPL = A;
/* ---- block @0x45A5 (outside named functions) ---- */
    DPTR = 0xA1D4;
/* ---- block @0x45B4 (outside named functions) ---- */
    A = 0;
    RAM[0x63] = A;
    DPTR = 0x9FCD;
    A = XDATA[DPTR];
    R7 = A;
    A = RAM[0x63];
    CY = 0;
    A = A - R7;
    if (CY) goto L_ROM_45C4;
    goto L_ROM_464C;
L_ROM_45C4:
    R7 = RAM[0x63];
    F_ROM_668C();
    A = R7;
    if (A != 0) goto L_ROM_45CE;
    goto L_ROM_4648;
L_ROM_45CE:
    A = RAM[0x63];
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    R7 = A;
    A = RAM[0x63];
    A = A & 7;
    R6 = A;
    A = 0x81;
    A = A + R7;
    F_ROM_47C5();
    A = XDATA[DPTR];
    R5 = A;
    R7 = RAM_6;
    F_0x932B();
    goto L_ROM_45EE;
L_ROM_45E9:
    CY = 0;
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
L_ROM_45EE:
    if (--R0 != 0) goto L_ROM_45E9;
    R7 = A;
    A = R7;
    A = A & R5;
    if (A == 0) goto L_ROM_4668;
    B = 0x10;
    A = RAM[0x63];
    F_ROM_47CD();
    if (ACC_7) { goto L_ROM_4601; }
    goto L_ROM_4611;
L_ROM_4601:
    B = 0x10;
    A = RAM[0x63];
    DPTR = 0x8102;
    F_ROM_458A();
    A = XDATA[DPTR];
    R7 = A;
    if (ACC_7) { goto L_ROM_461A; }
L_ROM_4611:
    DPTR = 0x1C1;
    A = XDATA[DPTR];
    A = A | 0x20;
    XDATA[DPTR] = A;
    goto L_ROM_4668;
L_ROM_461A:
    A = R7;
    if (!ACC_6) { goto L_ROM_4636; }
    B = 0x10;
    A = RAM[0x63];
    F_ROM_458E();
    A = XDATA[DPTR];
    R5 = A;
    B = 4;
    A = RAM[0x63];
    F_ROM_4E2E();
    F_ROM_7FD9();
    A = 0;
    R3 = A;
    goto L_ROM_4664;
L_ROM_4636:
    F_ROM_464C+1();
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    F_ROM_464C+1();
    A = XDATA[DPTR];
    CY = 1;
    A = A - 1;
    if (CY) goto L_ROM_464E;
    R7 = RAM[0x63];
    F_0x92E0();
L_ROM_4648:
    F_ROM_464C+1();
    A = 0;
    XDATA[DPTR] = A;
L_ROM_464C:
    goto L_ROM_4668;
L_ROM_464E:
    B = 0x10;
    A = RAM[0x63];
    F_ROM_458E();
    A = XDATA[DPTR];
    R5 = A;
L_ROM_4657:
    B = 4;
    A = RAM[0x63];
    F_ROM_4E2E();
    F_ROM_7FD9();
    R3 = 1;
L_ROM_4664:
    R7 = RAM[0x63];
    F_ROM_4657+2();
L_ROM_4668:
    RAM[0x63]++;
    goto L_ROM_4597;
    return;
    A = 0x11;
    A = A + RAM[0x63];
    DPL = A;
    A = 0;
    A = A + 0x9D + CY;
    DPH = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_467E; }
    CY = 0;
L_ROM_467E:
    PUSH(PSW);
    RAM[0x67] = R7;
    RAM[0x68] = R5;
    RAM[0x69] = R3;
    A = 0;
    DPTR = 0xA29D;
    XDATA[DPTR] = A;
    A = RAM[0x67];
/* ---- block @0x47C3 (outside named functions) ---- */
    A = XDATA[DPTR];
/* ---- block @0x47ED (outside named functions) ---- */
    DPTR = 0x8101;
    F_ROM_458A();
    A = XDATA[DPTR];
    return;
    B = 0xB;
    DPTR = 0xA0DE;
    F_ROM_458A();
    A = XDATA[DPTR];
    A = A & 7;
    return;
/* ---- block @0x48BC (outside named functions) ---- */
    R7 = 1;
/* ---- block @0x48D7 (outside named functions) ---- */
    F_ROM_46AB();
    A = R7;
    A = A | 0x80;
    return;
    R7 = 0x54;
    F_ROM_46AB();
    A = RAM_D;
    A = A & R7;
    RAM[0x11] = A;
    R7 = 0x55;
    F_ROM_46AB();
    A = RAM_E;
    A = A & R7;
    RAM[0x12] = A;
    R7 = 0x56;
    F_ROM_46AB();
    A = RAM_F;
    A = A & R7;
    RAM[0x13] = A;
    R7 = 0x57;
    F_ROM_46AB();
    A = RAM[0x10];
    A = A & R7;
    RAM[0x14] = A;
    R5 = RAM[0x11];
    R7 = 0x54;
    F_ROM_468D();
    R5 = RAM[0x12];
    R7 = 0x55;
    F_ROM_468D();
    R5 = RAM[0x13];
    R7 = 0x56;
    F_ROM_468D();
    R5 = RAM[0x14];
    R7 = 0x57;
    F_ROM_468D();
    SFR_91 = SFR_91 & 0xEF;
    return;
    PUSH(ACC);
    PUSH(B);
    PUSH(DPH);
    PUSH(DPL);
    PUSH(PSW);
    PSW = 0;
    PUSH(RAM_0);
    PUSH(RAM_1);
    PUSH(RAM_2);
    PUSH(RAM_3);
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0x1C4;
    A = 6;
    XDATA[DPTR] = A;
    A = 0x79;
    DPTR++;
    XDATA[DPTR] = A;
    F_0xB186();
    A = RAM[0x19];
    if (!ACC_1) { goto L_ROM_4957; }
    F_ROM_49C3();
L_ROM_4957:
    A = RAM[0x19];
    if (!ACC_4) { goto L_ROM_495E; }
    F_ROM_4FAD+1();
L_ROM_495E:
    A = RAM[0x19];
    if (!ACC_5) { goto L_ROM_4966; }
    F_0xB100();
L_ROM_4966:
    A = RAM[0x19];
    if (!ACC_6) { goto L_ROM_496E; }
    F_0xB1E3();
L_ROM_496E:
    A = RAM[0x1B];
    if (!ACC_0) { goto L_ROM_4976; }
    F_0xA784();
L_ROM_4976:
    A = RAM[0x1B];
    if (!ACC_1) { goto L_ROM_497E; }
    F_ROM_5C23();
L_ROM_497E:
    A = RAM[0x1B];
    if (!ACC_2) { goto L_ROM_4986; }
    F_0xA3B8();
L_ROM_4986:
    A = RAM[0x1B];
    if (!ACC_3) { goto L_ROM_498E; }
    F_0xA75A();
L_ROM_498E:
    A = RAM[0x1B];
    if (!ACC_4) { goto L_ROM_4996; }
    F_0xA723();
L_ROM_4996:
    A = RAM[0x1B];
    if (!ACC_5) { goto L_ROM_499E; }
    F_0xA148();
L_ROM_499E:
    A = RAM[0x1B];
    if (!ACC_6) { goto L_ROM_49A6; }
    F_0xA381();
L_ROM_49A6:
    A = RAM[0x1C];
    if (!ACC_1) { goto L_ROM_49AE; }
    F_0xA2EF();
L_ROM_49AE:
    A = RAM[0x1C];
    if (!ACC_4) { goto L_ROM_49B5; }
    F_ROM_4FA4();
L_ROM_49B5:
    A = RAM[0x1C];
    if (!ACC_5) { goto L_ROM_49BD; }
    F_ROM_77E2();
L_ROM_49BD:
    A = 6;
    A++;
    DPTR = 0x1C4;
/* ---- block @0x49E3 (outside named functions) ---- */
    A = 0;
    R7 = A;
    DPTR = 0xA1E9;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x47E;
    A = XDATA[DPTR];
    RAM[0x64] = A;
    DPTR++;
    A = XDATA[DPTR];
    RAM[0x65] = A;
    A = A ^ RAM[0x64];
    if (A == 0) goto L_ROM_4A63;
    DPTR = 0xA1EA;
    A = 3;
    XDATA[DPTR] = A;
    DPTR = 0xA1F8;
    A = 8;
    XDATA[DPTR] = A;
    A = RAM[0x65];
    A++;
    A = A & 0xF;
    RAM[0x66] = A;
    A = 0;
    RAM[0x63] = A;
L_ROM_4A0E:
    A = RAM[0x66];
    B = 8;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + 0;
    DPL = A;
    A = 0;
    A = A + 0x80 + CY;
    DPH = A;
    A = DPL;
    A = A + RAM[0x63];
    F_ROM_4A55();
    A = XDATA[DPTR];
    R7 = A;
    A = 0xEC;
    A = A + RAM[0x63];
    DPL = A;
    A = 0;
    A = A + 0xA1 + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    RAM[0x63]++;
    A = RAM[0x63];
    if (A != 8) goto L_ROM_4A0E;
    R3 = 1;
    R2 = 0xA1;
    R1 = 0xEA;
    F_ROM_5B9B();
    A = RAM[0x65];
    A++;
    A = A & 0xF;
    RAM[0x65] = A;
    if (A != 0xF) goto L_ROM_4A4F;
    A = 0;
    RAM[0x65] = A;
/* ---- block @0x4A60 (outside named functions) ---- */
L_ROM_4A60:
    F_0x97E1();
L_ROM_4A63:
    return;
L_ROM_4C03:
    CY = 1;
    A = A - R7;
    if (CY) goto L_ROM_4C10;
    DPTR = 0xA2D9;
    A = XDATA[DPTR];
    A = A | R6;
    RAM[0x6D] = A;
    goto L_ROM_4C1C;
L_ROM_4C10:
    A = RAM[0x6D];
    CY = 0;
    A = A - R4;
    if (!CY) goto L_ROM_4C1C;
    R7 = RAM_6;
    A = R4;
    A = A | R7;
    RAM[0x6D] = A;
L_ROM_4C1C:
    DPTR = 0xA2D8;
    A = XDATA[DPTR];
    R7 = A;
    A = A + 0x91;
    F_0xBB51();
    A = RAM[0x6D];
    XDATA[DPTR] = A;
    B = 4;
    A = R7;
    F_ROM_4E2E();
    F_ROM_4FD9();
L_ROM_4C32:
    DPTR = 0xA2D8;
    A = XDATA[DPTR];
    R7 = A;
    A = 0;
    R3 = A;
    R5 = RAM[0x6D];
    F_ROM_7659();
    DPTR = 0xA2D8;
    A = XDATA[DPTR];
    R7 = A;
    B = 0x10;
    F_ROM_4F94();
    A = 0;
    XDATA[DPTR] = A;
    DPTR = 0xA2D9;
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = A - 0xC;
    if (CY) goto L_ROM_4C5B;
    F_ROM_4C69();
    A = 2;
    XDATA[DPTR] = A;
    goto L_ROM_4C74;
L_ROM_4C5B:
    A = R6;
    CY = 0;
    A = A - 4;
/* ---- block @0x4C79 (outside named functions) ---- */
    DPTR = 0xA2D8;
    A = XDATA[DPTR];
    B = 8;
    DPTR = 0x8900;
    F_ROM_458A();
    A = DPL;
    return;
    A = 0x91;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0x95 + CY;
    DPH = A;
    return;
    F_code_689();
    A = A & 0x7F;
    RAM[0x51] = A;
    F_ROM_4F8F();
    R7 = A;
    A = A & 0x1F;
    RAM[0x53] = A;
    A = R7;
    A = A & 0x80;
    F_ROM_4FD2();
    RAM[0x52] = A;
    F_ROM_4FA4+1();
    R7 = A;
    A = A & 3;
    RAM[0x54] = A;
    A = R7;
    A = A & 0x30;
    A = SWAP(A);
    A = A & 0xF;
    RAM[0x57] = A;
    F_ROM_4FA4+1();
    R7 = A;
    A = A & 0x40;
    A = SWAP(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    RAM[0x55] = A;
    A = R7;
    A = A & 0x80;
    F_ROM_4FD2();
    RAM[0x56] = A;
    F_ROM_4FA4+1();
/* ---- block @0x4D45 (outside named functions) ---- */
L_ROM_4D45:
    DPL = RAM[0x58];
    DPH = 0;
    DPTR++;
    DPTR++;
    DPTR++;
    F_code_6A2();
    R7 = A;
    B = 8;
L_ROM_4D55:
    A = RAM[0x51];
    F_ROM_4C60();
    A = A + RAM[0x58];
    F_ROM_4A55();
    A = R7;
    XDATA[DPTR] = A;
    RAM[0x58]++;
    A = RAM[0x58];
    if (A != 4) goto L_ROM_4D45;
    R7 = RAM[0x51];
    F_ROM_4A5D();
L_ROM_4D6A:
    return;
L_ROM_4DC1:
    DPTR = 0xA304;
    A = XDATA[DPTR];
    R1 = A;
    CY = 0;
    A = A - 4;
    if (!CY) goto L_ROM_4E0B;
    F_ROM_4E54+1();
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    R7 = A;
    A = R1;
    R5 = A;
    R4 = 0;
    A = A + R7;
    R7 = A;
    A = R4;
    A = A + B + CY;
    R6 = A;
    A = 0xD0;
    F_ROM_4E83();
    F_0xAFAD();
    A = DPL;
    A = A + R1;
    F_ROM_4A55();
    A = R7;
    F_ROM_4E54();
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + R5;
    R7 = A;
    A = R4;
    A = A + B + CY;
    R6 = A;
    A = 0xF0;
    F_ROM_4E83();
    B = 8;
/* ---- block @0x4E2A (outside named functions) ---- */
    RAM[R1]++;
    R0++;
    goto L_ROM_4E30;
/* ---- block @0x4E56 (outside named functions) ---- */
    DPTR = 0x1C0;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    DPTR = 0xA2F3;
    A = XDATA[DPTR];
    A = A | 0x80;
    DPTR = 0x8A;
    F_ROM_4E54();
    DPTR = 0x1D0;
    F_ROM_458A();
    A = XDATA[DPTR];
    DPTR = 0x1C3;
    XDATA[DPTR] = A;
    return;
    XDATA[DPTR] = A;
    DPTR = 0xA2F3;
    A = XDATA[DPTR];
    B = 4;
    return;
    A = 1;
    R6 = 0;
    R0 = RAM[0x6B];
/* ---- block @0x4E85 (outside named functions) ---- */
    A = RAM[0x6C];
    B = 8;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + RAM[0x6B];
    return;
L_ROM_4E92:
    A = XDATA[DPTR];
    R3 = A;
    A = R7;
    A = A & R3;
    return;
    DPTR = 0xA2D8;
    A = XDATA[DPTR];
    A = A + 0x11;
    DPL = A;
    A = 0;
    A = A + 0x9E + CY;
    return;
    A = A + R7;
    DPL = A;
    A = 1;
    A = A + R6 + CY;
    DPH = A;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x9F21;
    A = XDATA[DPTR];
    return;
    DPTR = 0xA13C;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x9FCD;
    A = XDATA[DPTR];
    DPTR = 0xA1BE;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA13D;
    XDATA[DPTR] = A;
L_ROM_4EC4:
    DPTR = 0xA1BE;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - R6;
    if (!CY) goto L_ROM_4EFE;
    A = XDATA[DPTR];
    R6 = A;
    F_ROM_4F99+1();
    A = 0;
    XDATA[DPTR] = A;
    B = 0x10;
    A = R6;
    F_ROM_4F94();
    A = XDATA[DPTR];
    if (!ACC_7) { goto L_ROM_4EEB; }
    A = 0x81;
    A = A + R7;
    F_ROM_4FBC();
    A = 0;
    XDATA[DPTR] = A;
L_ROM_4EEA:
    R3++;
L_ROM_4EEB:
    F_ROM_4FB5();
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    F_ROM_4F99+1();
    A = 1;
    XDATA[DPTR] = A;
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_4EC4;
L_ROM_4EFE:
    R7 = 0xC;
    R6 = 0;
    F_ROM_3E50();
L_ROM_4F05:
    A = 0;
    DPTR = 0xA13D;
    XDATA[DPTR] = A;
    DPTR = 0xA1BE;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = A - R7;
    if (CY) goto L_ROM_4F1A;
    goto L_ROM_4F8F;
L_ROM_4F1A:
    A = 0x3E;
    A = A + R6;
    F_ROM_4F9C();
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_4F24;
    goto L_ROM_4F85+2;
L_ROM_4F24:
    B = 0x10;
    A = R6;
    DPTR = 0x8106;
    F_ROM_4FC4();
    A = R6;
    DPTR = 0x8107;
    F_ROM_4FCD();
    R4 = A;
    F_0xBB41();
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    B = 0x10;
    A = R4;
    DPTR = 0x810A;
    F_ROM_4FC4();
    A = R4;
    DPTR = 0x810B;
    F_ROM_4FCD();
    B = 0xA;
    F_ROM_4FA7+1();
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    R7 = 1;
L_ROM_4F57:
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    R6 = A;
    B = 0x10;
    DPTR = 0x810B;
    F_ROM_4A4F();
    A = XDATA[DPTR];
    R5 = A;
    B = 0xA;
    A = R6;
    F_ROM_4FA7+1();
    B = 2;
    A = R7;
    F_ROM_4F94+1();
    A = R5;
    XDATA[DPTR] = A;
    R7++;
    A = R7;
    if (A != 5) goto L_ROM_4F57;
    DPTR = 0xA13D;
    A = XDATA[DPTR];
    R7 = A;
/* ---- block @0x4F88 (outside named functions) ---- */
    A = XDATA[DPTR];
    R6 = A;
    F_0xB4F1();
    A = R6;
/* ---- block @0x4F97 (outside named functions) ---- */
    A = XDATA[DPTR];
    R5 = A;
L_ROM_4F99:
    F_0xB489();
/* ---- block @0x4FAA (outside named functions) ---- */
    A = XDATA[DPTR];
L_ROM_4FAB:
    A++;
    XDATA[DPTR] = A;
L_ROM_4FAD:
    goto L_ROM_4EEA;
    return;
/* ---- block @0x4FB7 (outside named functions) ---- */
    goto L_ROM_458A;
    A = A + 0x3E;
/* ---- block @0x4FE4 (outside named functions) ---- */
    F_ROM_458A();
    A = XDATA[DPTR];
    R5 = A;
    B = 0x10;
    return;
/* ---- block @0x5000 (outside named functions) ---- */
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
/* ---- block @0x5010 (outside named functions) ---- */
L_ROM_5010:
    RAM[0x75] = POP();
L_ROM_5013:
    /* nop */
    PUSH(RAM_0);
    PUSH(RAM_1);
    PUSH(RAM_2);
/* ---- block @0x50BE (outside named functions) ---- */
    DPH = POP();
    B = POP();
    ACC = POP();
    RETI(); return;
    DPTR = 0xA0AD;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_50DC; }
    F_ROM_6608+1();
    A = 0;
    DPTR = 0xA0B0;
    F_ROM_5181+1();
    F_0xBACC();
    F_ROM_5013();
L_ROM_50DC:
    return;
    F_FSR_C3();
    F_ROM_6480();
/* ---- block @0x5103 (outside named functions) ---- */
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_510E; }
    A = 0;
    R7 = A;
    F_ROM_50EF();
L_ROM_510E:
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_5114; }
    CY = 0;
L_ROM_5114:
    PUSH(PSW);
    DPTR = 0xA2BC;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    A = 2;
    XDATA[DPTR] = A;
    A = 0;
    R7 = A;
    F_ROM_54C3();
    if (!ACC_0) { goto L_ROM_5129; }
    F_ROM_66B8();
L_ROM_5129:
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5134; }
    R7 = 1;
    goto L_ROM_516B;
L_ROM_5134:
    DPTR = 0xA04A;
    F_ROM_5FDD+2();
    if (!ACC_0) { goto L_ROM_5141; }
    R7 = 0xD;
    goto L_ROM_516B;
L_ROM_5141:
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_515C; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_5158; }
    R7 = 9;
    goto L_ROM_516B;
L_ROM_5158:
    R7 = 3;
    goto L_ROM_516B;
L_ROM_515C:
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_5169; }
    R7 = 3;
    goto L_ROM_516B;
L_ROM_5169:
    R7 = 9;
L_ROM_516B:
    F_ROM_8832();
    DPTR = 0xA2BC;
    A = XDATA[DPTR];
    A = A ^ 3;
    if (A != 0) goto L_ROM_51DD;
    F_nullsub_10();
    if (!ACC_0) { goto L_ROM_51D8; }
/* ---- block @0x52D7 (outside named functions) ---- */
    A = XDATA[DPTR];
    CY = 0;
    A = A - R7;
    R7 = A;
    F_nullsub_12();
    A = R7;
    XDATA[DPTR] = A;
    A = 0;
    R3 = A;
    R5 = A;
    R7 = 0x6C;
    R6 = 1;
    goto L_ROM_501B;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_52BB();
    DPTR = 0xA05D;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    return;
L_ROM_5366:
    DPTR = 0xA052;
    A = XDATA[DPTR];
    A = A ^ 6;
    if (A == 0) goto L_ROM_5370;
    goto L_ROM_541D;
L_ROM_5370:
    F_ROM_54D0();
    if (!CY) goto L_ROM_537C;
    DPTR = 0xA060;
    A = XDATA[DPTR];
    A = A - 3;
    if (CY) goto L_ROM_5396;
L_ROM_537C:
    F_ROM_57AE();
    DPTR = 0xA05D;
    if (!ACC_0) { goto L_ROM_5389; }
    A = 5;
    XDATA[DPTR] = A;
    goto L_ROM_538C;
L_ROM_5389:
    A = 2;
    XDATA[DPTR] = A;
L_ROM_538C:
    A = 0;
    DPTR = 0xA052;
    XDATA[DPTR] = A;
    DPTR = 0xA060;
    XDATA[DPTR] = A;
    return;
L_ROM_5396:
    DPTR = 0xA051;
    F_ROM_54C9();
    if (!ACC_0) { goto L_ROM_53D9; }
    F_ROM_57C6();
    F_ROM_57AE();
    if (!ACC_0) { goto L_ROM_53B0; }
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_53AE; }
    goto L_ROM_544E;
L_ROM_53AE:
    goto L_ROM_5441;
L_ROM_53B0:
    F_ROM_54D0();
    if (CY) goto L_ROM_53BF;
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_53BD; }
    goto L_ROM_5441;
L_ROM_53BD:
    goto L_ROM_544E;
L_ROM_53BF:
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_53D2; }
    F_ROM_54AF();
    A = 0;
    DPTR = 0xA05F;
    XDATA[DPTR] = A;
    DPTR = 0xA2ED;
    goto L_ROM_5455+2;
L_ROM_53D2:
    DPTR = 0xA05D;
    A = 2;
    XDATA[DPTR] = A;
    return;
L_ROM_53D9:
    DPTR = 0xA051;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
    DPTR = 0xA060;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    R7 = 3;
    F_ROM_52BB();
    F_ROM_54D0();
    if (!CY) goto L_ROM_53F8;
    DPTR = 0xA060;
    A = XDATA[DPTR];
    A = A - 3;
    if (!CY) goto L_ROM_53F8;
    goto L_ROM_54AE;
L_ROM_53F8:
    DPTR = 0x9ECB;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2D7;
    A = 0xA;
    XDATA[DPTR] = A;
    R3 = 1;
    R5 = 1;
    F_ROM_5616();
    R5 = RAM_7;
    R4 = RAM_6;
/* ---- block @0x543D (outside named functions) ---- */
    DPTR = 0xA052;
    A = XDATA[DPTR];
L_ROM_5441:
    A = A ^ 7;
    if (A != 0) goto L_ROM_547A;
    DPTR = 0xA060;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_5450;
    F_ROM_54BB+1();
L_ROM_544E:
    goto L_ROM_54B3;
L_ROM_5450:
    DPTR = 0xA051;
    F_ROM_54C9();
L_ROM_5455:
    if (!ACC_0) { goto L_ROM_5470; }
    F_ROM_57C6();
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_546E; }
    F_ROM_54AF();
    A = 0;
    DPTR = 0xA05F;
    XDATA[DPTR] = A;
    DPTR = 0xA2ED;
    A++;
    goto L_ROM_5477;
L_ROM_546E:
    goto L_ROM_54DC;
L_ROM_5470:
    F_ROM_5571();
    DPTR = 0xA060;
    A = XDATA[DPTR];
    A++;
L_ROM_5477:
    XDATA[DPTR] = A;
    goto L_ROM_54B9;
L_ROM_547A:
    DPTR = 0xA052;
    A = XDATA[DPTR];
    A = A ^ 9;
    if (A != 0) goto L_ROM_54CE;
    DPTR = 0xA051;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5493; }
    F_ROM_54BB+1();
    DPTR = 0xA051;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    return;
L_ROM_5493:
    DPTR = 0x692;
    A = XDATA[DPTR];
    if (!ACC_2) { goto L_ROM_54BD; }
    A = 4;
    XDATA[DPTR] = A;
    DPTR = 0xA05F;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_54B9;
    F_ROM_57BD+1();
    if (A == 0) goto L_ROM_54B0;
    A = 5;
    XDATA[DPTR] = A;
/* ---- block @0x54B9 (outside named functions) ---- */
L_ROM_54B9:
    R7 = 3;
L_ROM_54BB:
    goto L_ROM_52BB;
L_ROM_54BD:
    F_ROM_57BD+1();
    if (A == 0) goto L_ROM_54C6;
    A = 5;
/* ---- block @0x54DC (outside named functions) ---- */
L_ROM_54DC:
    DPTR = 0xA05D;
    A = 5;
    XDATA[DPTR] = A;
    return;
    F_ROM_8A12();
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    R7 = A;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    return;
    DPTR = 0xA060;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA05F;
    A = XDATA[DPTR];
    A = A + R7;
    R7 = A;
    A = 0;
    A = ROLC8(A);
    R6 = A;
    R4 = 0;
    R5 = 3;
    F_code_703();
    DPTR = 0xA04B;
    A = XDATA[DPTR];
    A = A + R7;
    R7 = A;
    A = R4;
    A = A + R6 + CY;
    R6 = A;
    DPTR = 0xA07C;
    A = XDATA[DPTR];
    R5 = A;
    CY = 0;
    A = R7;
    A = A - R5;
    A = 0x80;
    R0 = A;
    A = A ^ R6;
    A = A - R0;
    return;
    DPTR = 0xA2A0;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2D7;
    A = 3;
    XDATA[DPTR] = A;
    R3 = 6;
    R5 = 1;
    F_ROM_5616();
/* ---- block @0x5619 (outside named functions) ---- */
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_562E; }
    F_nullsub_10();
    if (!ACC_0) { goto L_ROM_562E; }
    F_0xBCDA();
    R5 = 0x28;
    F_ROM_54C6();
L_ROM_562E:
    F_0xBC46();
    PSW = POP();
    IE_7 = CY;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_563B; }
    CY = 0;
L_ROM_563B:
    PUSH(PSW);
    DPTR = 0xA2D5;
    A = R5;
    XDATA[DPTR] = A;
    DPTR++;
    A = R3;
    XDATA[DPTR] = A;
    DPTR = 0xA2D4;
    A = R7;
    XDATA[DPTR] = A;
    A = 0;
    R5 = A;
    R4 = A;
    F_0xBA97();
    R4 = 0;
    R5 = RAM_7;
    DPTR = 0xA2D4;
    A = XDATA[DPTR];
    DPTR = 0x425;
    XDATA[DPTR] = A;
    DPTR = 0xA2D5;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5668;
    F_0xBBE1();
    A = A | 0x80;
    XDATA[DPTR] = A;
L_ROM_5668:
    R7 = RAM_5;
    A = 0x20;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    A = A & 0xC0;
    XDATA[DPTR] = A;
    F_0xBBE1();
    A = A & 0xC0;
    XDATA[DPTR] = A;
    DPTR = 0xA2D7;
    A = XDATA[DPTR];
    R7 = A;
    R6 = RAM_5;
    A = 0x18;
    A = A + R6;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    A = 0x12;
    A = A + R6;
    F_ROM_576E+2();
    A = XDATA[DPTR];
    A = A & 1;
    R7 = A;
    DPTR = 0xA2D6;
    A = XDATA[DPTR];
    A = A + ACC;
    A = A + ACC;
    R6 = A;
    A = R7;
    A = A | 2;
    A = A | R6;
    R7 = A;
    R6 = RAM_5;
    A = 0x12;
    A = A + R6;
    F_ROM_576E+2();
    A = R7;
/* ---- block @0x56E4 (outside named functions) ---- */
    DPTR = 0x9ECB;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2B3;
    A = XDATA[DPTR];
    R3 = A;
/* ---- block @0x56FB (outside named functions) ---- */
    A = R6;
    XDATA[DPTR] = A;
/* ---- block @0x570E (outside named functions) ---- */
    A = 9;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
    A = 0x29;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
    DPTR = 0xA2B4;
    A = XDATA[DPTR];
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x8100;
    A = XDATA[DPTR];
    A = A & 0xF;
    R5 = A;
    R4 = RAM_7;
    F_ROM_5780();
    A = A | 1;
    XDATA[DPTR] = A;
    F_ROM_5780();
    A = A & 0xFB;
    XDATA[DPTR] = A;
    R4 = RAM_7;
    A = 0x12;
    A = A + R4;
    F_ROM_576E+2();
    A = XDATA[DPTR];
    A = A | 0xFA;
    XDATA[DPTR] = A;
    A = 0x11;
    A = A + R4;
    F_ROM_57B6();
/* ---- block @0x5779 (outside named functions) ---- */
    XDATA[DPTR] = A;
    A = 0x14;
    A = A + R4;
    F_ROM_5777+1();
    A = XDATA[DPTR];
/* ---- block @0x578C (outside named functions) ---- */
    XDATA[DPTR] = A;
    A = 0x12;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    return;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    return;
    A = 0xD;
    A = A + R4;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
/* ---- block @0x57C0 (outside named functions) ---- */
    A = R6;
    XDATA[DPTR] = A;
    R4 = A;
    DPTR++;
    A = R7;
/* ---- block @0x57D7 (outside named functions) ---- */
L_ROM_57D7:
    CY = CY & ACC_4;
    A = A + 0xFC + CY;
/* ---- block @0x57DE (outside named functions) ---- */
    DPTR = 0xA2ED;
    A = XDATA[DPTR];
    DPTR = 0xA05D;
    return;
    A = R7;
    A = A & 0xFB;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
    return;
    A = 0;
    DPTR = 0xA052;
    XDATA[DPTR] = A;
/* ---- block @0x57F7 (outside named functions) ---- */
    return;
/* ---- block @0x581F (outside named functions) ---- */
    A = 0xDF;
    XDATA[DPTR] = A;
    A = 0x87;
    DPTR++;
    XDATA[DPTR] = A;
    F_ROM_58F7();
    SFR_91 = SFR_91 & 0xBF;
    A = 0xDF;
    A++;
    DPTR = 0x1C4;
/* ---- block @0x5852 (outside named functions) ---- */
    DPTR = 0xA06F;
    F_ROM_59DA();
    if (!ACC_0) { goto L_ROM_5861; }
    DPTR = 0x778;
    A = 9;
    XDATA[DPTR] = A;
    return;
L_ROM_5861:
    DPTR = 0xA0AB;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5885; }
    A = R7;
    A = A + 0xFD;
/* ---- block @0x589B (outside named functions) ---- */
    F_ROM_58F4+1();
    if (R4 != 2) goto L_ROM_58A2;
    goto L_ROM_58BD;
L_ROM_58A2:
    A = R4;
    A = A ^ 3;
    if (A != 0) goto L_ROM_58C8;
    goto L_ROM_58C4;
    F_ROM_58FB+2();
    if (A != 0) goto L_ROM_58B1;
    R7 = 1;
    goto L_ROM_58C6;
/* ---- block @0x590E (outside named functions) ---- */
    DPTR = 0xA1F9;
    A = 1;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA09A;
    A = XDATA[DPTR];
    A = A & 3;
    R4 = A;
    return;
    DPTR = 0xA09A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 3;
    R4 = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_592B; }
    CY = 0;
L_ROM_592B:
    PUSH(PSW);
    DPTR = 0xA0A0;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_5936;
    goto L_ROM_5976;
L_ROM_5936:
    DPTR = 0xA0A0;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_594D;
    F_ROM_59EA+1();
    R7 = 1;
    F_ROM_5A12();
    F_ROM_586B();
    DPTR = 0xA0A0;
    A = 3;
    XDATA[DPTR] = A;
    goto L_ROM_5988;
L_ROM_594D:
    DPTR = 0xA0A0;
    A = XDATA[DPTR];
    A = A ^ 3;
    if (A != 0) goto L_ROM_596F;
    DPTR = 0xA0A3;
    F_ROM_59EE();
    A = 0;
    R7 = A;
    F_ROM_5A12();
    F_ROM_586B();
    F_ROM_59E0+1();
    A = 0;
    R3 = A;
    R5 = A;
    F_ROM_596D();
    DPTR = 0xA0A0;
    A = 4;
    XDATA[DPTR] = A;
/* ---- block @0x59F6 (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0xA03B;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    return;
    DPTR = 0xA099;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    A = A & 3;
    R7 = A;
    return;
    DPTR = 0xA0A5;
    A = XDATA[DPTR];
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
/* ---- block @0x5A32 (outside named functions) ---- */
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_5A37; }
    CY = 0;
L_ROM_5A37:
    PUSH(PSW);
    A = R7;
    A = A ^ 3;
    if (A != 0) goto L_ROM_5A4C;
    DPTR = 0xA04D;
    F_ROM_5FDD+2();
    DPTR = 0x6CC;
    if (!ACC_0) { goto L_ROM_5A84; }
    goto L_ROM_5A79;
L_ROM_5A4C:
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_5A66; }
    A = R7;
    DPTR = 0x6CC;
    if (A != 0) goto L_ROM_5A62;
    A = XDATA[DPTR];
    A = A & 0xFC;
    XDATA[DPTR] = A;
    goto L_ROM_5A66;
L_ROM_5A62:
    A = XDATA[DPTR];
    A = A | 3;
    XDATA[DPTR] = A;
L_ROM_5A66:
    DPTR = 0xA099;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5A88; }
/* ---- block @0x5BB3 (outside named functions) ---- */
    if (!ACC_0) { goto L_ROM_5BBA; }
    A = 0;
    R7 = A;
    F_ROM_5FDD();
L_ROM_5BBA:
    DPTR = 0xA04E;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_5BD1; }
    DPTR = 0x6CD;
    A = XDATA[DPTR];
    A = A & 0xEF;
    XDATA[DPTR] = A;
    DPTR = 0x6CF;
    A = XDATA[DPTR];
    A = A & 0xEF;
    XDATA[DPTR] = A;
L_ROM_5BD1:
    return;
L_ROM_5C0B:
    F_ROM_82D4+1();
    DPTR = 0xA05D;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 1) goto L_ROM_5C18;
    goto L_ROM_5C35;
L_ROM_5C18:
    DPTR = 0xA05D;
    A = XDATA[DPTR];
    R7 = A;
    if (A != 2) goto L_ROM_5C22;
    goto L_ROM_5C3F;
/* ---- block @0x5D46 (outside named functions) ---- */
    F_ROM_5D43+2();
L_ROM_5D48:
    if (!CY) goto L_ROM_5D54;
    A = R7;
    R7 = 0;
L_ROM_5D4D:
    A = A + ACC;
    A = A + ACC;
    R6 = A;
    goto L_ROM_5D58;
L_ROM_5D54:
    R7 = 0xFF;
    R6 = 0x7F;
L_ROM_5D58:
    F_ROM_5D4D+1();
L_ROM_5D5A:
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5D64; }
    F_ROM_663A();
L_ROM_5D64:
    return;
    DPTR = 0xA061;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - 0x20;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_5D73; }
    CY = 0;
L_ROM_5D73:
    PUSH(PSW);
    DPTR = 0xA2B7;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x41D;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5DA1;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA2BB;
    XDATA[DPTR] = A;
    R5 = 0x36;
    F_ROM_5751();
    if (R7 != 1) goto L_ROM_5D95;
    F_ROM_5D95+1();
L_ROM_5D95:
    DPTR = 0xA2BB;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 0x37;
    F_ROM_54C6();
    goto L_ROM_5DA3;
L_ROM_5DA1:
    F_ROM_5D95+1();
L_ROM_5DA3:
    F_0xBCDA();
    R5 = 0x38;
    F_ROM_54C6();
    DPTR = 0x41F;
    A = 0x20;
    XDATA[DPTR] = A;
    PSW = POP();
    IE_7 = CY;
    return;
L_ROM_5DE3:
    R1--;
    A = R5;
    XDATA[DPTR] = A;
    A = R4;
    R1 = A;
    A = XDATA[DPTR];
    R7 = A;
    R6 = RAM_3;
    A = 0x2A;
    A = A + R6;
    F_0xA03B();
    A = 0x2B;
    A = A + R6;
    DPL = A;
    A = 0;
/* ---- block @0x5E03 (outside named functions) ---- */
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    F_code_689();
    A = A & 1;
    F_0x9E97();
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    A = A & 0xF7;
    A = A | R7;
    XDATA[DPTR] = A;
    F_ROM_59DA();
    DPTR = 0x765;
    if (!ACC_0) { goto L_ROM_5E28; }
    A = 0x18;
    XDATA[DPTR] = A;
    return;
L_ROM_5E28:
    A = 0;
    XDATA[DPTR] = A;
    return;
    F_ROM_5FD6();
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_5E52; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    if (ACC_0) { goto L_ROM_5E52; }
    F_ROM_87AE();
    if (!ACC_0) { goto L_ROM_5E44; }
    R7 = 3;
    goto L_ROM_5E50;
L_ROM_5E44:
    F_0xAD96();
    if (!ACC_0) { goto L_ROM_5E4E; }
    R7 = 0xD;
    goto L_ROM_5E50;
L_ROM_5E4E:
    R7 = 9;
L_ROM_5E50:
    F_ROM_5832();
L_ROM_5E52:
    return;
    A = 0;
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_5E60;
    goto L_ROM_5ECC;
L_ROM_5E60:
    F_ROM_67A8();
    if (A == 0) goto L_ROM_5E67;
    goto L_ROM_5ECC;
L_ROM_5E67:
    F_0xBCEA();
    F_ROM_5D25+2();
    F_nullsub_5();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR = 0x562;
    F_ROM_5D41();
    R0 = 0x10;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR++;
    F_ROM_5D41();
    R0 = 0x18;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_ROM_5FC5();
    F_ROM_58EE();
    A = 0;
    DPTR = 0x9FE0;
    XDATA[DPTR] = A;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_5ECD; }
    DPTR = 0x9FD3;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_5EC3;
    A = 0;
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
L_ROM_5EC3:
    F_ROM_6B1D();
    A = R7;
    if (A != 0) goto L_ROM_5ECD;
    DPTR = 0xA1F9;
L_ROM_5ECC:
    XDATA[DPTR] = A;
L_ROM_5ECD:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_5EEC;
    F_ROM_5FBD();
    A = 0;
    DPTR = 0xA2AB;
    XDATA[DPTR] = A;
    DPTR = 0x9FE1;
    F_ROM_500F();
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    if (ACC_2) { goto L_ROM_5EEA; }
    F_ROM_6256();
L_ROM_5EEA:
    F_nullsub_7();
L_ROM_5EEC:
    return;
/* ---- block @0x5FCB (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0x9FE2;
    A = XDATA[DPTR];
    B = 3;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + 0xFE;
/* ---- block @0x5FE5 (outside named functions) ---- */
    F_nullsub_5();
    DPTR = 0xA02C;
    F_code_86D();
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A | 0x80;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x6012 (outside named functions) ---- */
L_ROM_6012:
    goto L_ROM_6026;
    A = A | RAM[R1];
    { uint8 t = A; A = R4; R4 = t; }
    R7 = 0x80;
    R6 = 8;
    F_ROM_3845();
    return;
    R6 = 0;
    R7 = 0x19;
    R5 = 0;
    R3 = 1;
L_ROM_6026:
    R2 = 0xA0;
    R1 = 0x7D;
    F_code_8AA();
    F_0xAE40();
    DPTR = 0xA084;
    F_ROM_4572();
    DPTR = 0xA080;
    F_code_86D();
    DPTR = 0x9E98;
    A = XDATA[DPTR];
    R7 = A;
    A = A ^ 2;
    if (A != 0) goto L_ROM_6067;
    F_ROM_611A();
    if (!ACC_0) { goto L_ROM_604C; }
    R6 = 1;
L_ROM_604C:
    DPTR = 0xA08C;
    A = R6;
    XDATA[DPTR] = A;
    F_ROM_611A();
    if (!ACC_1) { goto L_ROM_6058; }
    R6 = 1;
L_ROM_6058:
    DPTR = 0xA08D;
    A = R6;
    XDATA[DPTR] = A;
    DPTR = 0xFD80;
    A = XDATA[DPTR];
    DPTR = 0x2FB;
    XDATA[DPTR] = A;
    goto L_ROM_60A1;
L_ROM_6067:
    A = R7;
    A = A ^ 1;
    if (A != 0) goto L_ROM_6081;
    F_ROM_60B2+1();
    if (!ACC_0) { goto L_ROM_6073; }
L_ROM_6071:
    R7 = 1;
/* ---- block @0x60B5 (outside named functions) ---- */
    A = 1;
    XDATA[DPTR] = A;
L_ROM_60B8:
    DPTR = 0xA099;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    DPTR = 0x48F;
    A = 0;
    XDATA[DPTR] = A;
    DPTR = 0xA0AB;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xFD78;
/* ---- block @0x60D3 (outside named functions) ---- */
    DPTR = 0xFD70;
    A = XDATA[DPTR];
    R7 = 0;
    return;
    R6 = 0;
    R7 = 0x33;
    R5 = 0;
    R3 = 1;
    R2 = 0xA0;
    R1 = 0x4A;
    F_code_8AA();
    DPTR = 0xA04B;
    A = 0xB;
    XDATA[DPTR] = A;
    DPTR++;
    A = 8;
    XDATA[DPTR] = A;
    DPTR = 0x9E98;
    A = XDATA[DPTR];
    R4 = A;
    A = A ^ 2;
    if (A != 0) goto L_ROM_6110;
    F_ROM_611A();
    if (!ACC_2) { goto L_ROM_6103; }
    R6 = 1;
L_ROM_6103:
    A = R6;
    F_ROM_6121();
    R6 = A;
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    A = A & 0xBF;
    A = A | R6;
    XDATA[DPTR] = A;
    return;
L_ROM_6110:
    A = R4;
    A = A ^ 1;
    if (A != 0) goto L_ROM_611E;
    F_ROM_60B2+1();
    if (!ACC_2) { goto L_ROM_611C; }
/* ---- block @0x611E (outside named functions) ---- */
L_ROM_611E:
    DPTR = 0x9E98;
/* ---- block @0x613A (outside named functions) ---- */
    DPTR = 0xFD80;
    A = XDATA[DPTR];
L_ROM_613E:
    R6 = 0;
    return;
    A = A & 1;
    A = SWAP(A);
    A = ROLC8(A);
    A = ROLC8(A);
    A = A & 0xC0;
    return;
    F_ROM_613E+1();
    F_0xAFB6();
    F_ROM_4E36();
    F_0xB81E();
    F_ROM_60CF();
    F_ROM_61D9();
    F_0xA74B();
    goto L_8FFE;
/* ---- block @0x61B2 (outside named functions) ---- */
L_ROM_61B2:
    A = R5;
    A--;
    R1 = A;
    A = A + 0xBD;
    F_ROM_6181();
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_61F0;
    R4 = 8;
/* ---- block @0x62D7 (outside named functions) ---- */
    A = R1;
/* ---- block @0x62F5 (outside named functions) ---- */
    A = 0x91;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0x9D + CY;
    DPH = A;
    return;
    B = 4;
    A = R7;
    F_ROM_4E2E();
    R6 = A;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 3;
    R4 = A;
    F_ROM_4FF9();
    A = XDATA[DPTR];
    R3 = A;
    F_ROM_62D4+1();
    A = XDATA[DPTR];
    A = A & 0x7F;
    R5 = A;
    A = A ^ 0x2C;
    if (A != 0) goto L_ROM_6334;
    A = R6;
    A = A & 3;
    R6 = A;
    A = R4;
    CY = 1;
    A = A - R6;
    if (!CY) goto L_ROM_6334;
    A = R4;
    if (A == 0) goto L_ROM_6334;
    R4--;
/* ---- block @0x6349 (outside named functions) ---- */
    A = XDATA[DPTR];
    R7 = A;
    A = 1;
    R6 = 0;
    R0 = RAM_7;
    R0++;
    return;
L_ROM_642B:
    DPTR = 0xA1DC;
    A = XDATA[DPTR];
    R7 = A;
    A = R4;
    CY = 0;
    A = A - R7;
    if (CY) goto L_ROM_647A;
    A = R4;
    F_ROM_6549+1();
    A = R2;
    F_ROM_7A4A+2();
    A = XDATA[DPTR];
    DPL = A;
    DPH = 0;
    A = R4;
    A = A & 7;
    F_ROM_632A();
    goto L_ROM_644E;
L_ROM_6449:
    CY = 0;
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = ROLC8(A);
    { uint8 t = A; A = R6; R6 = t; }
L_ROM_644E:
    if (--R0 != 0) goto L_ROM_6449;
    R7 = A;
    A = R6;
L_ROM_6452:
    A = A & DPH;
    R6 = A;
    A = R7;
    A = A & DPL;
    A = A | R6;
    if (A == 0) goto L_ROM_6477;
    A = RAM[0x5F];
    R5 = RAM_4;
    if (A != 0x14) goto L_ROM_6464;
    R5 = 0xC;
L_ROM_6464:
    DPTR = 0xA1DB;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = A ^ RAM[0x60];
    if (A == 0) goto L_ROM_647A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
/* ---- block @0x6492 (outside named functions) ---- */
    A = XDATA[DPTR];
    A = A + ACC;
    A = A + 0x91;
    DPL = A;
    A = 0;
    A = A + 0x94 + CY;
    return;
/* ---- block @0x653B (outside named functions) ---- */
    R7 = A;
    A = RAM[0x5D];
    A = A - RAM[0x5F];
    R6 = A;
/* ---- block @0x654B (outside named functions) ---- */
    DPTR = 0xA1DC;
    F_ROM_6472();
    DPH = A;
    A = RAM[0x5D];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x5E];
    XDATA[DPTR] = A;
    DPTR = 0xA1DA;
    A = XDATA[DPTR];
    R6 = A;
/* ---- block @0x6562 (outside named functions) ---- */
    DPL = A;
    A = 0;
    A = A + 0x9B + CY;
    DPH = A;
    return;
/* ---- block @0x6574 (outside named functions) ---- */
    XDATA[DPTR] = A;
    B = 4;
    A = R7;
    DPTR = 0x9612;
    goto L_ROM_458A;
    A = A & 3;
    A = A + ACC;
    A = A + ACC;
    R6 = A;
    B = 4;
    return;
L_ROM_65FC:
    F_ROM_6D5A();
    DPL = R7;
    F_ROM_6572();
    A = A + RAM[0x51];
    R6 = A;
    F_ROM_67D4();
L_ROM_6608:
    F_ROM_458A();
    A = R6;
    XDATA[DPTR] = A;
L_ROM_660D:
    DPL = R7;
    F_ROM_6572();
    A = A + RAM[0x51];
    R6 = A;
L_ROM_6616:
    R3++;
    A = R7;
    DPTR = 0xA0E4;
    F_ROM_458A();
    A = R6;
    XDATA[DPTR] = A;
    R7++;
/* ---- block @0x6626 (outside named functions) ---- */
    RAM[0x54] = R7;
    DPTR = 0xA1CF;
    A = 0xE;
    XDATA[DPTR] = A;
    A = R5;
    A = A + 0xFE;
    if (A == 0) goto L_ROM_66A0;
    A++;
    if (A == 0) goto L_ROM_6638;
    goto L_ROM_6704;
/* ---- block @0x6725 (outside named functions) ---- */
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA1;
    R1 = 0xCF;
    return;
L_ROM_6730:
    RAM[0x7E] = A;
    goto L_ROM_6012;
/* ---- block @0x67C4 (outside named functions) ---- */
    A = XDATA[DPTR];
    DPTR = 0xA1E0;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA1;
    R1 = 0xDA;
    F_ROM_5B9B();
    R7 = 4;
/* ---- block @0x67D6 (outside named functions) ---- */
    DPTR = 0xA1DD;
    A = 9;
    XDATA[DPTR] = A;
/* ---- block @0x67E0 (outside named functions) ---- */
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
/* ---- block @0x67F4 (outside named functions) ---- */
    B = 0xE;
    A = R7;
    DPTR = 0xA0BD;
    return;
    F_ROM_5B9B();
    R7 = 4;
/* ---- block @0x681C (outside named functions) ---- */
    A = 0;
    R3 = 1;
    R2 = 0xA0;
L_ROM_6821:
    R1 = 0x96;
    F_ROM_6821+1();
    if (A != 2) goto L_ROM_6841;
    DPTR = 0xA2EC;
    A = XDATA[DPTR];
    A = A ^ 4;
    if (A == 0) goto L_ROM_683C;
    R7 = 0x40;
    F_0x97E1();
    DPTR = 0xA2EC;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    return;
L_ROM_683C:
    A = 0;
    DPTR = 0xA2EC;
    XDATA[DPTR] = A;
L_ROM_6841:
    return;
    R5 = 3;
    R7 = 0x11;
    F_ROM_58B1();
    A = R7;
    DPTR = 0xA209;
    A = 8;
    XDATA[DPTR] = A;
    DPTR = 0xA217;
    A = 1;
    XDATA[DPTR] = A;
    DPTR = 0xA20B;
    A = R7;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA2;
L_ROM_6860:
    R1 = 9;
    goto L_ROM_5B9B;
    DPTR = 0xA1CF;
    A = 0xA;
    XDATA[DPTR] = A;
    DPTR = 0xA1DD;
    A = 6;
    XDATA[DPTR] = A;
    F_code_689();
    DPTR = 0xA1D1;
    F_ROM_4F8E();
    DPTR = 0xA1D2;
    F_ROM_4FA4();
    DPTR = 0xA1D3;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    DPTR = 0xA1D4;
    F_ROM_4CE1();
    DPTR = 0xA1D5;
    F_ROM_6D4D();
    DPTR = 0xA1D6;
    F_0x9705();
    goto L_ROM_5B9B;
    F_code_689();
    RAM[0x51] = A;
    F_ROM_4F8F();
    RAM[0x54] = A;
    F_ROM_4FA4+1();
    RAM[0x55] = A;
    F_ROM_4C32+2();
    RAM[0x56] = A;
    F_ROM_4CE2();
    RAM[0x57] = A;
    F_ROM_6D4E();
    RAM[0x58] = A;
    F_ROM_5FC5+1();
    RAM[0x59] = A;
    A = RAM[0x51];
    F_ROM_45A8();
    A = A - R0;
    if (R5 != 0) goto L_ROM_6860;
    { uint8 t = A; A = RAM_1; RAM_1 = t; }
    A = A - R0;
    { uint8 t = A; A = R5; R5 = t; }
    goto L_98D5;
    A = ROR8(A);
    A = A - R0;
    if (--R5 != 0) goto L_ROM_68D7;
    A = A - R0;
    A = RAM_5;
    A = A - R0;
L_ROM_68D7:
    A = R5;
    RAM[R0]++;
    /* nop */
    /* nop */
    A = A - R1;
    A++;
    RAM[0x52] = 2;
    RAM[0x53] = 0x29;
    goto L_ROM_692A;
    RAM[0x52] = 6;
    RAM[0x53] = 0x2A;
    goto L_ROM_692A;
    RAM[0x52] = 1;
    RAM[0x53] = 0x31;
    goto L_ROM_692A;
    RAM[0x52] = 1;
    RAM[0x53] = 0x32;
    goto L_ROM_692A;
    RAM[0x52] = 6;
    RAM[0x53] = 0x33;
    goto L_ROM_692A;
/* ---- block @0x6924 (outside named functions) ---- */
    RAM[0x52] = 1;
    RAM[0x53] = 0xFF;
L_ROM_692A:
    R3 = 0;
    R2 = 0;
    R1 = 0x54;
    R5 = RAM[0x52];
    R7 = RAM[0x53];
    goto L_ROM_58B1;
    DPTR = 0xA24C;
    A = 0xB;
    XDATA[DPTR] = A;
    DPTR = 0xA25A;
    A = 7;
    XDATA[DPTR] = A;
    DPTR = 0xA24E;
    A = R7;
    XDATA[DPTR] = A;
    if (A == 0) goto L_ROM_697C;
    DPTR = 0xFD63;
    A = XDATA[DPTR];
    DPTR = 0xA24F;
    XDATA[DPTR] = A;
    DPTR = 0xFD61;
    A = XDATA[DPTR];
    DPTR = 0xA250;
    XDATA[DPTR] = A;
    DPTR = 0xFD64;
    A = XDATA[DPTR];
    DPTR = 0xA251;
    XDATA[DPTR] = A;
    DPTR = 0xFD65;
    A = XDATA[DPTR];
    DPTR = 0xA252;
    XDATA[DPTR] = A;
    DPTR = 0xFD66;
    A = XDATA[DPTR];
    DPTR = 0xA253;
    XDATA[DPTR] = A;
    DPTR = 0xFD67;
    A = XDATA[DPTR];
    DPTR = 0xA254;
    XDATA[DPTR] = A;
    goto L_ROM_6989;
L_ROM_697C:
    DPTR = 0xA24F;
    A = R5;
    XDATA[DPTR] = A;
    DPTR++;
    A = R3;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    F_ROM_6073();
L_ROM_6989:
    R3 = 1;
    R2 = 0xA2;
    R1 = 0x4C;
    goto L_ROM_5B9B;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_6997; }
    CY = 0;
L_ROM_6997:
    PUSH(PSW);
    F_code_689();
    DPTR = 0xA1CF;
    F_ROM_4F8E();
    DPTR = 0xA1D0;
    F_ROM_4FA4();
    DPTR = 0xA1D1;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    DPTR = 0xA1D2;
    F_ROM_4CE1();
    DPTR = 0xA1D3;
    F_ROM_69F1+1();
    DPTR = 0xA072;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    DPTR = 0xA1D0;
    A = XDATA[DPTR];
    if (A != 0xC) goto L_ROM_69CE;
    A = RAM[0x6E];
    if (A != 0) goto L_ROM_69DA;
    goto L_ROM_69CE;
L_ROM_69CE:
    F_0x9706();
    R5 = 7;
    R7 = 0x30;
    F_ROM_58B1();
    RAM[0x51] = R7;
L_ROM_69DA:
    DPTR = 0xA1D0;
    A = XDATA[DPTR];
    if (A != 0xD) goto L_ROM_69EF;
/* ---- block @0x6A11 (outside named functions) ---- */
    A = R7;
    XDATA[DPTR] = A;
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    return;
    F_ROM_6E4D();
    DPTR = 0xA099;
    A = XDATA[DPTR];
    A = A & 0xFE;
    A = A | R6;
    R6 = A;
    XDATA[DPTR] = A;
    A = R7;
    A = A & 6;
    R7 = A;
    A = R6;
    A = A & 0xF9;
    A = A | R7;
    R7 = A;
    XDATA[DPTR] = A;
    F_code_689();
    R6 = A;
    A = A & 8;
    R5 = A;
    A = R7;
    A = A & 0xF7;
    A = A | R5;
    R7 = A;
    DPTR = 0xA099;
    F_ROM_6B35();
    F_ROM_6EA8();
    A = A | R6;
    DPTR = 0xA099;
    F_ROM_4F8E();
    R7 = A;
    A = A & 3;
    R6 = A;
    DPTR = 0xA09A;
    A = XDATA[DPTR];
    A = A & 0xFC;
    A = A | R6;
    R6 = A;
    XDATA[DPTR] = A;
    A = R7;
    A = A & 4;
    R7 = A;
    A = R6;
    A = A & 0xFB;
    A = A | R7;
    R7 = A;
    F_ROM_4F8E();
    R6 = A;
    A = A & 0x30;
    R5 = A;
    A = R7;
    A = A & 0xCF;
    A = A | R5;
    R7 = A;
    DPTR = 0xA09A;
    F_ROM_6AD8();
    A = A | R6;
    F_ROM_4FA4();
    DPTR = 0xA09B;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    DPTR = 0xA09C;
    F_ROM_4CE1();
    DPTR = 0xA09D;
    XDATA[DPTR] = A;
    DPTR = 0xA09B;
    F_ROM_6ACC+1();
    A = R7;
    R0 = 5;
L_ROM_6A8D:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
    if (--R0 != 0) goto L_ROM_6A8D;
    R7 = A;
    DPTR = 0xA0A3;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA09C;
    F_ROM_6ACC+1();
    A = R7;
    R0 = 5;
L_ROM_6AA5:
    { uint8 t = A; A = R6; R6 = t; }
    CY = 0;
    A = RORC8(A);
    { uint8 t = A; A = R6; R6 = t; }
    A = RORC8(A);
    if (--R0 != 0) goto L_ROM_6AA5;
    R7 = A;
    DPTR = 0xA0A5;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA09D;
    F_ROM_6ACC+1();
    DPTR = 0xA0A7;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA099;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_6ADC; }
    DPTR = 0xA09E;
L_ROM_6ACC:
    A = 1;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    F_ROM_69F1+1();
    DPTR = 0x783;
    A = XDATA[DPTR];
/* ---- block @0x6ADC (outside named functions) ---- */
L_ROM_6ADC:
    A = 0;
    DPTR = 0xA09E;
L_ROM_6AE0:
    F_ROM_6073();
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0x783;
    A = XDATA[DPTR];
    A = A & 0xDF;
    XDATA[DPTR] = A;
    return;
L_ROM_6B07:
    P1 = POP();
L_ROM_6B0A:
    A = SWAP(A);
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    F_ROM_69F1();
/* ---- block @0x6B90 (outside named functions) ---- */
    F_ROM_6F1A();
    R7 = 8;
    F_ROM_46AB();
    A = R7;
    A = A & 0xEF;
    R5 = A;
    R7 = 8;
    F_ROM_468D();
    A = 0;
/* ---- block @0x6BC1 (outside named functions) ---- */
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_6BC6; }
    CY = 0;
L_ROM_6BC6:
    PUSH(PSW);
    F_ROM_6BB1();
    F_ROM_6B70();
    PSW = POP();
    IE_7 = CY;
    return;
L_ROM_6BD1:
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    F_ROM_5C0B();
    R5 = 1;
    F_ROM_46C7+1();
    DPTR = 0x9FE4;
    A = XDATA[DPTR];
    R5 = A;
    R7 = 0x93;
    F_ROM_468D();
    DPTR = 0x9FDA;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_6C02;
    DPTR = 0x12F;
    A = XDATA[DPTR];
    if (!ACC_7) { goto L_ROM_6BFC; }
    A = 0x10;
    XDATA[DPTR] = A;
    goto L_ROM_6C02;
L_ROM_6BFC:
    DPTR = 0x12F;
    A = 0x90;
    XDATA[DPTR] = A;
L_ROM_6C02:
    R7 = 8;
/* ---- block @0x6C24 (outside named functions) ---- */
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    R7 = A;
    if (A == 0) goto L_ROM_6C2E;
L_ROM_6C2B:
    if (A != 8) goto L_ROM_6C35;
L_ROM_6C2E:
    F_nullsub_13();
    if (R7 != 1) goto L_ROM_6C35;
    F_ROM_6BA1();
L_ROM_6C35:
    return;
/* ---- block @0x6C56 (outside named functions) ---- */
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_6C5B; }
    CY = 0;
L_ROM_6C5B:
    PUSH(PSW);
    DPTR = 0xA2CC;
    F_ROM_459F();
    R7 = 0x96;
    R6 = 2;
    F_ROM_6AE0+1();
    A = R7;
    if (A == 0) goto L_ROM_6CB7;
    DPTR = 0x117;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0x116;
    F_ROM_6EAD+2();
    R6 = A;
    A = R7;
    A = A + 1;
    R7 = A;
    A = 0;
    A = A + R6 + CY;
    R6 = A;
    DPTR = 0xA2CF;
    A = R7;
    XDATA[DPTR] = A;
    A = R6;
    R7 = A;
    DPTR = 0xFD11;
    XDATA[DPTR] = A;
    DPTR = 0xA2CF;
    A = XDATA[DPTR];
    R5 = A;
    DPTR = 0x294;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA2CC;
    F_ROM_6DCC();
    A = A + 2;
/* ---- block @0x6CBC (outside named functions) ---- */
    A = 0;
    R4 = A;
L_ROM_6CBE:
    A = R5;
    A = A + R4;
    A = A + 0;
    F_ROM_6CED();
    A = 0;
    XDATA[DPTR] = A;
    R4++;
    A = R4;
    if (A != 0x18) goto L_ROM_6CBE;
    A = 0;
    A = A + R5;
    F_ROM_6CED();
    A = R7;
    XDATA[DPTR] = A;
    A = R6;
    A = A & 0x3F;
    R7 = A;
    A = 1;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFB + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    A = 2;
    A = A + R5;
    DPL = A;
    A = 0;
    A = A + 0xFB + CY;
    DPH = A;
    A = XDATA[DPTR];
/* ---- block @0x6D0D (outside named functions) ---- */
    DPL = A;
    A = 0;
    A = A + 0xFB + CY;
    DPH = A;
    return;
/* ---- block @0x6D7A (outside named functions) ---- */
    DPTR = 0xA2C8;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    F_ROM_459F();
    DPTR = 0xA2F4;
    A = XDATA[DPTR];
    R6 = A;
    A++;
    XDATA[DPTR] = A;
    DPTR = 1;
    A = R6;
    F_code_6E1();
    A = 0;
    A = A + R7;
    R1 = A;
    A = 0;
    A = A + 0xFB + CY;
    R2 = A;
    R3 = 1;
    PUSH(RAM_3);
    PUSH(RAM_2);
    PUSH(RAM_1);
    DPTR = 0xA2C9;
    F_ROM_4596();
/* ---- block @0x6E03 (outside named functions) ---- */
L_ROM_6E03:
    F_ROM_6E2B+2();
    A = R7;
    A = A ^ 1;
    if (A == 0) goto L_ROM_6E46;
    CY = 0;
    DPTR = 0xA1C0;
    A = XDATA[DPTR];
    A = A - 0x88;
    DPTR = 0xA1BF;
    A = XDATA[DPTR];
    A = A - 0x13;
    if (CY) goto L_ROM_6E28;
    DPTR = 0x1C1;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    DPTR = 0x1C7;
    A = 0xFD;
    XDATA[DPTR] = A;
    goto L_ROM_6E46;
L_ROM_6E28:
    DPTR = 0xA1BF;
L_ROM_6E2B:
    F_ROM_57DC();
    F_ROM_6DD5();
    CY = 1;
    DPTR = 0xA1C0;
    A = XDATA[DPTR];
    A = A - 0x32;
    DPTR = 0xA1BF;
    A = XDATA[DPTR];
    A = A - 0;
    if (CY) goto L_ROM_6E03;
    DPTR = 0x1C6;
    A = XDATA[DPTR];
L_ROM_6E43:
    if (!ACC_3) { goto L_ROM_6E03; }
/* ---- block @0x6E65 (outside named functions) ---- */
    XDATA[DPTR] = A;
    R7 = 0xA;
    R6 = 0;
    goto L_ROM_3E50;
    F_code_689();
    R7 = A;
    A = A & 1;
    R6 = A;
    return;
    F_ROM_6E4D();
    DPTR = 0xA03D;
    F_ROM_6D6E();
    F_ROM_4F8E();
    DPTR = 0xA03E;
    F_ROM_4FA4();
    DPTR = 0xA03F;
    XDATA[DPTR] = A;
    F_ROM_6EC1();
    DPTR = 0xA03D;
    A = XDATA[DPTR];
    A = A & 1;
    R7 = A;
    goto L_ROM_64C9;
/* ---- block @0x6EB7 (outside named functions) ---- */
    A = ROLC8(A);
/* ---- block @0x6EBE (outside named functions) ---- */
    F_ROM_46AB();
/* ---- block @0x6EC6 (outside named functions) ---- */
    XDATA[DPTR] = A;
    A = R6;
    A = A & 0x20;
    R6 = A;
/* ---- block @0x6ECF (outside named functions) ---- */
    A = XDATA[DPTR];
    R4 = 0;
    A = A + 0;
    R7 = A;
    A = R4;
    A = A + R6 + CY;
    A = XDATA[DPTR];
    R6 = A;
    DPTR++;
    A = XDATA[DPTR];
    DPL = A;
    DPH = R6;
    return;
    DPTR = 0xA03E;
/* ---- block @0x6EEB (outside named functions) ---- */
    B = 0xF;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + 0x22;
    R1 = A;
    A = 0x9F;
    A = A + B + CY;
    return;
    DPTR = 0x9FD2;
    A = XDATA[DPTR];
    A = A ^ 2;
    R7 = 1;
    if (A == 0) goto L_ROM_6F03;
    R7 = 0;
L_ROM_6F03:
    return;
/* ---- block @0x6F1D (outside named functions) ---- */
    DPTR = 0x101;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    DPTR = 0x19A;
    A = XDATA[DPTR];
    A = A & 0xC0;
    F_ROM_6E43+2();
    DPTR = 0x199;
    A = XDATA[DPTR];
    A = A | 0xC0;
    XDATA[DPTR] = A;
    DPTR = 0x19B;
    A = 0x80;
    XDATA[DPTR] = A;
    DPTR = 0x1C4;
    A = 0x1A;
    XDATA[DPTR] = A;
    A = 0x9F;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_6F44:
    R7 = 0x90;
    F_ROM_46AB();
    A = R7;
    if (ACC_0) { goto L_ROM_6F44; }
    A = 0x1A;
    A++;
    DPTR = 0x1C4;
    XDATA[DPTR] = A;
    A = 0x9F;
    DPTR++;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA03D;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    if (ACC_0) { goto L_ROM_6F84; }
    DPTR = 0x287;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_6F8E;
    DPTR = 0x100;
    A = XDATA[DPTR];
    A = A ^ 0x3F;
    if (A != 0) goto L_ROM_6F8E;
    DPTR = 0x296;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_6F8E;
    DPTR = 0x286;
    A = XDATA[DPTR];
    if (!ACC_1) { goto L_ROM_6F8E; }
    DPTR = 0x286;
    A = XDATA[DPTR];
    if (ACC_3) { goto L_ROM_6F8E; }
L_ROM_6F84:
    DPTR = 0xA093;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_6F8E; }
    R7 = 1;
    return;
L_ROM_6F8E:
    R7 = 0;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_6F96; }
    CY = 0;
L_ROM_6F96:
    PUSH(PSW);
    R1 = RAM_7;
    DPTR = 0x563;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0x562;
    F_ROM_6EAD+2();
    R5 = RAM_7;
    R4 = A;
    DPTR = 0x561;
    A = XDATA[DPTR];
    R6 = A;
    DPTR = 0x560;
    A = XDATA[DPTR];
    R2 = 0;
    A = A + 0;
    R7 = A;
    A = R2;
    A = A + R6 + CY;
    R6 = A;
    DPTR = 0xA279;
    A = 0x17;
    XDATA[DPTR] = A;
    DPTR = 0xA287;
    A = 6;
    XDATA[DPTR] = A;
    DPTR = 0xA27B;
    A = R1;
    F_ROM_5181+1();
    F_ROM_6FD1+1();
    DPTR = 0xA27C;
    XDATA[DPTR] = A;
L_ROM_6FD1:
    R3 = RAM_7;
    DPTR++;
    A = R3;
    XDATA[DPTR] = A;
    A = R6;
    DPTR++;
    XDATA[DPTR] = A;
    R7 = RAM_5;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    R6 = RAM_4;
    A = R6;
    DPTR++;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA2;
    R1 = 0x79;
    F_ROM_5B9B();
    PSW = POP();
    IE_7 = CY;
    return;
    A = XDATA[DPTR];
    B = 0xB;
    DPTR = 0xA0DB;
    F_ROM_458A();
    A = XDATA[DPTR];
    return;
    DPTR = 0xA201;
    A = R4;
    F_0x97C4();
    DPTR = 0xA201;
    A = XDATA[DPTR];
    R4 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    F_ROM_852E();
    DPTR = 0xA201;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    R5 = A;
    A = A + 0xD;
    F_ROM_8783();
    A = A | 0x80;
    XDATA[DPTR] = A;
    A = 0xD;
    A = A + R5;
    F_ROM_8783();
    A = A & 0xEF;
    F_ROM_876C();
    A = XDATA[DPTR];
    A = A | 2;
    F_ROM_876C();
    A = XDATA[DPTR];
    A = A & 3;
    XDATA[DPTR] = A;
    DPTR = 0xA203;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA201;
/* ---- block @0x705B (outside named functions) ---- */
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    return;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = R7;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA1FA;
    F_0x97C3();
    DPTR = 0x41D;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_709E;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA1FF;
    XDATA[DPTR] = A;
    R5 = 1;
    F_ROM_5751();
    A = R7;
L_ROM_7089:
    A = A ^ 1;
    if (A != 0) goto L_ROM_7092;
    F_ROM_7089+1();
    F_0x9FDD();
L_ROM_7092:
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 2;
    F_ROM_54C6();
    goto L_ROM_70A3;
L_ROM_709E:
    F_ROM_7089+1();
    F_0x9FDD();
L_ROM_70A3:
    DPTR = 0x41F;
    A = 0x20;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x9ECD;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2D7;
    A = 1;
    XDATA[DPTR] = A;
    R3 = 8;
    R5 = A;
    F_ROM_8616();
    DPTR = 0xA1FD;
    A = R6;
    XDATA[DPTR] = A;
    R4 = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    R5 = A;
    DPTR = 0xA1FA;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R3 = A;
    DPTR++;
    A = XDATA[DPTR];
    DPTR = 0xA204;
    XDATA[DPTR] = A;
    return;
    R6 = 0;
    R7 = 0xA;
    R5 = 0;
    R3 = 1;
    R2 = 0xA0;
    R1 = 0x72;
    F_code_8AA();
    DPTR = 0xA05E;
    A = 2;
    XDATA[DPTR] = A;
    return;
    A = 0;
    R7 = A;
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_712E; }
    DPTR++;
    F_ROM_82B7();
    DPTR = 0xA05D;
    A = 1;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA052;
    XDATA[DPTR] = A;
    DPTR = 0xA05F;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0xA05C;
    A++;
    XDATA[DPTR] = A;
L_ROM_710D:
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_711A;
    R5 = 5;
    R7 = 0x6F;
/* ---- block @0x711A (outside named functions) ---- */
L_ROM_711A:
    F_ROM_663A();
    F_ROM_710D+2();
    A = A & 7;
    if (ACC_0) { goto L_ROM_712E; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_712E; }
    F_ROM_7117();
L_ROM_712E:
    return;
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = RORC8(A);
    return;
L_ROM_7137:
    DPTR = 0xA03B;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = A & 0xF;
    if (ACC_0) { goto L_ROM_7167; }
    DPTR = 0x41D;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_7167;
    DPTR = 0x9ECA;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2D7;
    A = 9;
    XDATA[DPTR] = A;
    R3 = 0x18;
    A = 0;
    R5 = A;
    F_ROM_8616();
    DPTR = 0xA30D;
    A = R6;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
L_ROM_7161:
    DPTR = 0x41F;
    A = 0x20;
    XDATA[DPTR] = A;
L_ROM_7167:
    return;
    A = 0;
    R7 = A;
    F_ROM_668C();
    if (R7 != 1) goto L_ROM_7181;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_7181;
    F_ROM_6D67();
    A = A ^ 2;
    if (A == 0) goto L_ROM_717F;
    goto L_ROM_7137;
L_ROM_717F:
    F_ROM_7161+1();
L_ROM_7181:
    return;
    F_ROM_7234();
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    A = A ^ 0xC;
    if (A == 0) goto L_ROM_7193;
    F_ROM_7292+1();
    F_ROM_663A();
    F_ROM_7371();
L_ROM_7193:
    return;
    A = 0;
    RAM[0x63] = A;
    DPTR = 0x6A9;
    A = XDATA[DPTR];
    RAM[0x63] = A;
    A = A & 0xC0;
    if (A != 0) goto L_ROM_71A9;
    F_ROM_71B9();
    A = A & 0xFD;
    XDATA[DPTR] = A;
    goto L_nullsub_15;
L_ROM_71A9:
    A = RAM[0x63];
    if (!ACC_6) { goto L_ROM_71C5; }
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_71C7;
    F_ROM_6D5E+2();
/* ---- block @0x71D9 (outside named functions) ---- */
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x6A9;
    A = XDATA[DPTR];
    DPTR = 0xA1EB;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    R5 = A;
    A = A & 0xC0;
    if (A != 0) goto L_ROM_71F3;
    F_ROM_71B9();
    goto L_ROM_7248;
L_ROM_71F3:
    A = R5;
    if (!ACC_6) { goto L_ROM_7236; }
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    A = A ^ 2;
    if (A != 0) goto L_ROM_7227;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    if (ACC_0) { goto L_ROM_7212; }
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    goto L_ROM_722E;
L_ROM_7212:
    F_ROM_6D67();
    A = A ^ 1;
    if (A != 0) goto L_ROM_7238;
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    R7 = 1;
    F_0xBA58();
    goto L_ROM_7238;
L_ROM_7227:
    F_ROM_6D5E+2();
    A = A ^ 2;
    if (A == 0) goto L_ROM_7232;
L_ROM_722E:
    F_ROM_7117();
    goto L_ROM_7238;
L_ROM_7232:
    F_ROM_7161+1();
/* ---- block @0x7254 (outside named functions) ---- */
L_ROM_7254:
    DPTR = 0x9FD4;
    F_nullsub_9();
    if (!ACC_0) { goto L_ROM_7262; }
    DPTR = 0x15B;
    A = 0;
    XDATA[DPTR] = A;
L_ROM_7262:
    DPTR = 0x692;
    A = 2;
    XDATA[DPTR] = A;
    DPTR = 0x13C;
    A = 4;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0xA2AB;
    XDATA[DPTR] = A;
    DPTR = 0xA038;
    A = XDATA[DPTR];
    CY = 0;
    A = RORC8(A);
    A = A & 0x7F;
    DPTR = 0xA2AC;
    F_ROM_7378();
    F_ROM_501B();
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A | 8;
    XDATA[DPTR] = A;
    return;
L_ROM_728D:
    A = A | R2;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_72B2; }
L_ROM_7292:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    A = A ^ 1;
    if (A != 0) goto L_ROM_72B2;
    F_FSR_9B();
    F_ROM_6D67();
    if (A == 0) goto L_ROM_72A9;
/* ---- block @0x72F0 (outside named functions) ---- */
    F_ROM_6B07();
    if (!ACC_0) { goto L_ROM_7301; }
    F_ROM_72E8();
    if (A == 0) goto L_ROM_7301;
    R5 = 1;
    R7 = 2;
    F_ROM_6259+1();
L_ROM_7301:
    F_ROM_72E8();
    if (A == 0) goto L_ROM_7307;
    F_ROM_72A2();
L_ROM_7307:
    return;
    DPTR = 0x9FD3;
    A = XDATA[DPTR];
    A = A ^ 2;
    return;
/* ---- block @0x7391 (outside named functions) ---- */
    R5 = 8;
    A = 0;
    R7 = A;
    goto L_ROM_857C;
    XDATA[DPTR] = A;
/* ---- block @0x73A1 (outside named functions) ---- */
    A = 0;
    R7 = A;
    F_ROM_668C();
    if (R7 != 1) goto L_ROM_73B8;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_73B8;
    F_ROM_71B9();
    A = A & 7;
    if (A != 0) goto L_ROM_73B8;
    F_nullsub_15();
L_ROM_73B8:
    return;
    F_ROM_5181+2();
    F_ROM_520F();
    if (ACC_0) { goto L_ROM_73CE; }
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_73D7; }
    DPTR = 0xA0B0;
    A = 5;
    XDATA[DPTR] = A;
    return;
L_ROM_73CE:
    F_ROM_5181+2();
    F_ROM_520F();
    A = A | 4;
    XDATA[DPTR] = A;
L_ROM_73D7:
    return;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_73E4; }
    F_ROM_72E8();
    if (A == 0) goto L_ROM_73F9;
L_ROM_73E4:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_73EE;
    A = R7;
    if (!ACC_0) { goto L_ROM_73F9; }
L_ROM_73EE:
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    A = A ^ 2;
    if (A == 0) goto L_ROM_73F9;
    F_ROM_6516();
L_ROM_73F9:
    return;
L_ROM_73FA:
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_7411;
    DPTR = 0x692;
    A = XDATA[DPTR];
    if (!ACC_1) { goto L_ROM_740B; }
    F_ROM_7234();
    goto L_ROM_7411;
L_ROM_740B:
    F_ROM_66B0();
    F_nullsub_15();
L_ROM_7411:
    DPTR = 0xA0B0;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_741B;
    F_ROM_5048();
L_ROM_741B:
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_7421; }
    CY = 0;
L_ROM_7421:
    PUSH(PSW);
    DPTR = 0x9FCE;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_742E;
    R7 = 4;
    goto L_ROM_743A;
L_ROM_742E:
    F_ROM_6B1D();
    if (R7 != 1) goto L_ROM_7438;
    R7 = 1;
    goto L_ROM_743A;
L_ROM_7438:
    R7 = 2;
L_ROM_743A:
    F_ROM_69E1();
    PSW = POP();
    IE_7 = CY;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_7447; }
    CY = 0;
L_ROM_7447:
    PUSH(PSW);
    F_ROM_7519();
    R7 = A;
    DPTR = 0x9FCE;
    XDATA[DPTR] = A;
    if (R7 != 1) goto L_ROM_745C;
    F_ROM_4F8F();
    A = A ^ 1;
    if (A == 0) goto L_ROM_7479;
    goto L_ROM_7477;
L_ROM_745C:
    R3 = RAM[0x51];
    R2 = RAM[0x52];
    R1 = RAM[0x53];
    F_ROM_4F8F();
    A = A ^ 1;
    if (A == 0) goto L_ROM_7479;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_7477; }
    A = 0;
    R7 = A;
    F_ROM_69E1();
    goto L_ROM_7479;
L_ROM_7477:
    F_ROM_73FA+2();
L_ROM_7479:
    PSW = POP();
    IE_7 = CY;
    return;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_74C6; }
    DPTR = 0x9FD3;
    A = XDATA[DPTR];
    R6 = 0;
    if (A != 2) goto L_ROM_7491;
    R6 = 1;
L_ROM_7491:
    DPTR = 0x9FD2;
    A = XDATA[DPTR];
    R5 = 0;
    if (A != 4) goto L_ROM_749C;
    R5 = 1;
L_ROM_749C:
    A = R5;
    A = A | R6;
    if (A != 0) goto L_ROM_74C6;
    A = R7;
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_74AA; }
    F_ROM_73FA+2();
    goto L_ROM_74C6;
L_ROM_74AA:
    F_ROM_74F4();
    DPTR = 0x9FD3;
    A = XDATA[DPTR];
    if (A != 0xC) goto L_ROM_74B9;
    A = 0;
    R5 = A;
    R7 = 8;
    goto L_ROM_74C3;
L_ROM_74B9:
    DPTR = 0x9FD3;
    A = XDATA[DPTR];
    if (A != 4) goto L_ROM_74C6;
    A = 0;
    R5 = A;
    R7 = A;
L_ROM_74C3:
    F_ROM_6259+1();
L_ROM_74C6:
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_7513; }
    DPTR = 0xA134;
    F_ROM_57DC();
    F_ROM_5181+2();
    F_ROM_77D5();
    DPTR = 0xA1F9;
    XDATA[DPTR] = A;
    DPTR = 0xA0FE;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = A & 0xF;
    if (!ACC_0) { goto L_ROM_7503; }
    A = R7;
    A = A & 0xEF;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    if (ACC_0) { goto L_ROM_7513; }
/* ---- block @0x7503 (outside named functions) ---- */
L_ROM_7503:
    DPTR = 0xA1F9;
    A = XDATA[DPTR];
    if (A != 3) goto L_ROM_7513;
    DPTR = 0xA0B0;
    A = 5;
    XDATA[DPTR] = A;
    F_ROM_5048();
L_ROM_7513:
    return;
/* ---- block @0x758E (outside named functions) ---- */
L_ROM_758E:
    B = 0xE;
    F_ROM_76DD();
    A = A & 0xE3;
    F_ROM_4FA2+1();
    A = A & 0xE0;
    R7 = A;
    B = 0xE;
    A = R6;
    F_ROM_76DD();
    A = A & 0x1F;
    A = A | R7;
    F_ROM_4CE1();
    F_ROM_76E5();
    A = 0;
    R3 = A;
    F_ROM_76D1+1();
    R1 = RAM[0x53];
    F_ROM_6D4E();
    F_ROM_76E5();
    R3 = 1;
    F_ROM_76D1+1();
    R1 = RAM[0x53];
    F_ROM_4C32+2();
    F_0x9E97();
    F_code_689();
    R6 = A;
    A = A & 0xF;
    R5 = A;
    B = 0xE;
    DPTR = 0xA0BA;
/* ---- block @0x760C (outside named functions) ---- */
    RAM[0x54] = R7;
    RAM[0x55] = R5;
    R6 = RAM_3;
    A = 0x1F;
    CY = 0;
    A = A - RAM[0x54];
    if (CY) goto L_ROM_7628;
    DPTR = 0xA1D3;
    A = R6;
    XDATA[DPTR] = A;
    R3 = RAM[0x55];
    A = 0;
    R5 = A;
    F_ROM_76CA();
    A = A + 0xD4;
    goto L_ROM_7668;
L_ROM_7628:
    A = 0x3F;
    CY = 0;
    A = A - RAM[0x54];
    if (CY) goto L_ROM_763E;
    DPTR = 0xA1D3;
    A = R6;
    XDATA[DPTR] = A;
    R3 = RAM[0x55];
    R5 = 0x20;
    F_ROM_76C8();
    A = A + 0x88;
    goto L_ROM_7668;
L_ROM_763E:
    A = 0x5F;
    CY = 0;
    A = A - RAM[0x54];
    if (CY) goto L_ROM_7654;
    DPTR = 0xA1D3;
    A = R6;
    XDATA[DPTR] = A;
    R3 = RAM[0x55];
    R5 = 0x40;
    F_ROM_76C8();
    A = A + 0xD0;
    goto L_ROM_7668;
L_ROM_7654:
    A = 0x7F;
    CY = 0;
    A = A - RAM[0x54];
/* ---- block @0x76EF (outside named functions) ---- */
    A = R7;
    XDATA[DPTR] = A;
    return;
    F_ROM_75EA+2();
    R3 = RAM[0x51];
    R2 = RAM[0x52];
    return;
/* ---- block @0x7718 (outside named functions) ---- */
L_ROM_7718:
    XDATA[DPTR] = A;
    R6++;
/* ---- block @0x7720 (outside named functions) ---- */
    R5 = 0x20;
    A = 0;
    R7 = A;
    goto L_ROM_6625;
    A = RORC8(A);
    A = A & 7;
    R7 = A;
    B = 0xE;
    return;
    XDATA[DPTR] = A;
    A = 0;
    R3 = A;
    R5 = A;
    R7 = 0x54;
    R6 = 1;
    return;
L_ROM_773F:
    A = A + R4 + CY;
/* ---- block @0x7743 (outside named functions) ---- */
    F_ROM_67A8();
    if (A != 0) goto L_ROM_775E;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_775E;
    F_ROM_7718();
    XDATA[DPTR] = A;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    F_ROM_7740();
    A = A & 7;
    if (A != 0) goto L_ROM_775E;
    F_nullsub_15();
L_ROM_775E:
    return;
    A = R7;
    A = A & 0xFB;
    XDATA[DPTR] = A;
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A & 0xFD;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x777A (outside named functions) ---- */
    F_ROM_67A8();
    if (A != 0) goto L_ROM_778A;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_778A;
    F_ROM_7718();
    F_ROM_5006();
L_ROM_778A:
    return;
    DPTR = 0x9FE2;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    A = A & 0xEF;
    XDATA[DPTR] = A;
    DPTR = 0xA036;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x9FE2;
    A = XDATA[DPTR];
    CY = 1;
    A = A - R7;
    return;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_77BB; }
    DPTR++;
    A = 1;
    XDATA[DPTR] = A;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_77BB; }
    F_ROM_73FA+2();
L_ROM_77BB:
    F_0x8ECD();
    goto L_ROM_80E3;
    DPTR = 0xA0AD;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_77E8; }
    DPTR++;
    A = XDATA[DPTR];
    CY = 0;
    F_ROM_7707();
    F_ROM_57F3();
    A = XDATA[DPTR];
    R6 = A;
    if (!ACC_0) { goto L_ROM_77E8; }
/* ---- block @0x7846 (outside named functions) ---- */
L_ROM_7846:
    goto L_ROM_11B4;
/* ---- block @0x78C2 (outside named functions) ---- */
L_ROM_78C2:
    A = A | RAM[0x61];
    DPTR = 0xA065;
    A = XDATA[DPTR];
    A = A & 0x1F;
    return;
    R7 = 0x2C;
    R6 = 9;
    F_ROM_374E();
    A = R7;
    return;
L_ROM_7906:
    R0 = 0x10;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    PUSH(RAM_4);
    PUSH(RAM_5);
    PUSH(RAM_6);
    PUSH(RAM_7);
    DPTR++;
    F_ROM_5D41();
    R0 = 0x18;
    F_code_85A();
    RAM_3 = POP();
    RAM_2 = POP();
    RAM_1 = POP();
    RAM_0 = POP();
    F_nullsub_5();
    DPTR = 0xA028;
    F_code_86D();
    DPTR = 0xA02C;
    F_ROM_4572();
    DPTR = 0xA028;
    F_ROM_789D();
    if (CY) goto L_ROM_7984;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    DPTR = 0xA02C;
    if (!ACC_0) { goto L_ROM_795E; }
    F_ROM_7A70();
    DPTR = 0x9FF6;
    A = XDATA[DPTR];
    A = A + 4;
    A = A + R7;
    R7 = A;
    DPTR = 0xA030;
    goto L_ROM_7963;
L_ROM_795E:
    F_ROM_7A70();
    DPTR = 0xA031;
L_ROM_7963:
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = R7;
    A = A - R6;
    DPTR = 0xA1EC;
    XDATA[DPTR] = A;
    DPTR = 0xA1EC;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - 0x2D;
    if (!CY) goto L_ROM_7984;
    A = 0xF7;
    A = A + R7;
    F_ROM_7AB4();
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    DPTR = 0x9FEF;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
L_ROM_7984:
    DPTR = 0x9FEF;
    A = XDATA[DPTR];
    R7 = A;
    CY = 1;
    DPTR = 0xA033;
    A = XDATA[DPTR];
    A = A - R7;
    DPTR = 0xA032;
    A = XDATA[DPTR];
    A = A - 0;
    if (CY) goto L_ROM_7999;
    goto L_ROM_7A3C;
L_ROM_7999:
    F_ROM_7A4E();
L_ROM_799B:
    F_ROM_7A45();
    if (!CY) goto L_ROM_79BB;
    F_ROM_7A58();
    DPTR = 0xA1ED;
    A = XDATA[DPTR];
    CY = 1;
    A = A - R7;
    if (CY) goto L_ROM_79B3;
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    DPTR = 0xA1EE;
    XDATA[DPTR] = A;
    goto L_ROM_79BB;
L_ROM_79B3:
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_799B;
L_ROM_79BB:
    F_ROM_7A4E();
L_ROM_79BD:
    F_ROM_7A45();
    if (!CY) goto L_ROM_79ED;
    F_ROM_7A58();
    CY = 0;
    DPTR = 0xA033;
    A = XDATA[DPTR];
    A = A - R7;
    R7 = A;
    DPTR = 0xA032;
    A = XDATA[DPTR];
    A = A - 0;
    R6 = A;
    DPTR = 0xA1ED;
    A = XDATA[DPTR];
    CY = 1;
    A = A - R7;
    A = 0;
    A = A - R6;
    if (CY) goto L_ROM_79E5;
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    DPTR = 0xA1EF;
    XDATA[DPTR] = A;
    goto L_ROM_79ED;
L_ROM_79E5:
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_79BD;
L_ROM_79ED:
    DPTR = 0xA1EE;
    A = XDATA[DPTR];
    DPTR = 0x9FF4;
    XDATA[DPTR] = A;
    DPTR = 0xA1EF;
    A = XDATA[DPTR];
    DPTR = 0x9FF5;
    F_ROM_7A3D();
    A = A - 0xA;
    if (CY) goto L_ROM_7A0C;
    A = R7;
    A = A + 0xF6;
    DPTR = 0x9FEC;
    XDATA[DPTR] = A;
    A = 0;
    goto L_ROM_7A15;
L_ROM_7A0C:
    A = 0;
    DPTR = 0x9FEC;
    F_ROM_7A3D();
    A = 0xA;
    A = A - R7;
L_ROM_7A15:
    DPTR = 0x9FEB;
    XDATA[DPTR] = A;
    DPTR = 0x9FF4;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    CY = 0;
    A = A - R7;
    DPTR = 0x9FF2;
    XDATA[DPTR] = A;
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_7A32; }
    DPTR = 0xA030;
    goto L_ROM_7A35;
L_ROM_7A32:
    DPTR = 0xA031;
L_ROM_7A35:
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x9FF2;
    A = XDATA[DPTR];
    A = A + R7;
L_ROM_7A3C:
    A++;
/* ---- block @0x7A5D (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0x9FF4;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    return;
    DPTR = 0xA1EB;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - 0x2D;
    return;
/* ---- block @0x7A72 (outside named functions) ---- */
    XDATA[DPTR] = A;
    DPTR = 0xA1EB;
    XDATA[DPTR] = A;
    return;
    A = 0xF7;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0x9F + CY;
    DPH = A;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA1ED;
    A = XDATA[DPTR];
    A = A + R7;
    XDATA[DPTR] = A;
    DPTR = 0xA034;
/* ---- block @0x7A90 (outside named functions) ---- */
    F_ROM_457C+2();
    DPTR = 0xA028;
    F_ROM_4572();
    F_ROM_4538+1();
    R0 = 0xA;
    F_code_847();
    DPTR = 0x9FF1;
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = 0xA;
    A = A - R6;
    A = A + R7;
    R7 = A;
    return;
    A = 0;
    R6 = A;
L_ROM_7AAF:
    A = 0xF7;
    A = A + R6;
    F_ROM_7AB4();
/* ---- block @0x7AD4 (outside named functions) ---- */
    DPL = A;
    A = 0;
    A = A + 0x9F + CY;
    DPH = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_7AE1; }
    CY = 0;
L_ROM_7AE1:
    PUSH(PSW);
    R4 = RAM_7;
    DPTR = 0x9FD5;
    F_ROM_4FD0+1();
    if (!ACC_0) { goto L_ROM_7AF0; }
    goto L_ROM_7B75;
L_ROM_7AF0:
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_7B0D; }
    DPTR = 0x9FF6;
    A = XDATA[DPTR];
    A = A + 4;
    DPTR = 0x9FEE;
    XDATA[DPTR] = A;
    DPTR = 0x9FF6;
    A = XDATA[DPTR];
    A = A + 3;
    DPTR = 0x9FED;
    XDATA[DPTR] = A;
    goto L_ROM_7B1A;
L_ROM_7B0D:
    DPTR = 0x9FEE;
    A = 2;
    XDATA[DPTR] = A;
    DPTR = 0x9FED;
    A--;
    XDATA[DPTR] = A;
    R3++;
    R3++;
L_ROM_7B1A:
    DPTR = 0x9FED;
    A = XDATA[DPTR];
    R2 = A;
    DPTR = 0x9FEC;
    A = XDATA[DPTR];
    CY = 1;
    A = A - R2;
    if (!CY) goto L_ROM_7B35;
    DPTR = 0x9FE1;
    A = R3;
    XDATA[DPTR] = A;
    DPTR = 0x9FEE;
    A = XDATA[DPTR];
    CY = 0;
    A = A - R5;
    A = A + R4;
    goto L_ROM_7B46;
L_ROM_7B35:
    CY = 0;
    A = R5;
    A = A - R2;
    A = A + R3;
    DPTR = 0x9FE1;
    XDATA[DPTR] = A;
    DPTR = 0x9FED;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    CY = 0;
    A = A - R7;
L_ROM_7B46:
    DPTR = 0x9FF1;
    XDATA[DPTR] = A;
    DPTR = 0x9FEE;
    A = XDATA[DPTR];
    R7 = A;
    A = A + 0xA;
    R5 = A;
    A = 0;
    A = ROLC8(A);
    R4 = A;
    DPTR = 0x9FF1;
    F_ROM_7B81();
    if (CY) goto L_ROM_7B60;
    A = R7;
    A = A + 0xA;
    XDATA[DPTR] = A;
L_ROM_7B60:
    DPTR = 0x9FF1;
    A = XDATA[DPTR];
    R7 = A;
    A = A + 0x23;
    R5 = A;
    A = 0;
    A = ROLC8(A);
    R4 = A;
    DPTR = 0x9FE1;
    F_ROM_7B81();
    if (CY) goto L_ROM_7B76;
    A = R7;
    A = A + 0x23;
L_ROM_7B75:
    XDATA[DPTR] = A;
L_ROM_7B76:
    DPTR = 0x9FF1;
    A = XDATA[DPTR];
    R7 = A;
    R6 = 0;
    DPTR = 0x9FE5;
    A = R6;
/* ---- block @0x7BA1 (outside named functions) ---- */
    A = XDATA[DPTR];
    CY = 1;
    A = A - R5;
    A = R4;
    A = A ^ 0x80;
    R0 = A;
    A = 0x80;
    A = A - R0;
    return;
/* ---- block @0x7BF1 (outside named functions) ---- */
    DPTR = 0x9FD6;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA08C;
    A = XDATA[DPTR];
    R7 = A;
    A = 0;
    R5 = A;
    return;
    XDATA[DPTR] = A;
    DPTR = 0x9FE5;
    DPTR++;
    A = XDATA[DPTR];
    DPTR = 0x558;
    XDATA[DPTR] = A;
    return;
    A = 0;
    DPTR = 0xA1FA;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_7C15:
    R7 = 0x83;
    F_ROM_46AB();
    DPTR = 0xA1FA;
    A = R7;
    XDATA[DPTR] = A;
    R7 = 0x83;
    F_ROM_46AB();
    R6 = RAM_7;
    DPTR = 0xA1FA;
    A = XDATA[DPTR];
    R7 = A;
    if (A != RAM_6) goto L_ROM_7C2F;
    return;
L_ROM_7C2F:
    CY = 0;
    DPTR = 0xA1FC;
    A = XDATA[DPTR];
    A = A - 0x64;
    DPTR = 0xA1FB;
    A = XDATA[DPTR];
    A = A - 0;
    if (CY) goto L_ROM_7C4B;
    DPTR = 0x1C0;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    DPTR = 0xA1FA;
    A = XDATA[DPTR];
    R7 = A;
    return;
L_ROM_7C4B:
    DPTR = 0xA1FB;
    F_ROM_57DC();
    goto L_ROM_7C15;
    DPTR = 0xA04D;
    F_ROM_5FDD+2();
    if (ACC_0) { goto L_ROM_7C7A; }
    DPTR = 0xFD62;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_7C7A; }
    A = XDATA[DPTR];
    DPTR = 0xA209;
L_ROM_7C67:
    if (!ACC_1) { goto L_ROM_7C6F; }
    A = 1;
    XDATA[DPTR] = A;
    goto L_ROM_7C72;
L_ROM_7C6F:
    A = 2;
    XDATA[DPTR] = A;
L_ROM_7C72:
    DPTR = 0xA209;
    A = XDATA[DPTR];
    R7 = A;
    F_0xA7C9();
L_ROM_7C7A:
    return;
L_ROM_7C7B:
    DPTR = 0xA065;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    A = A & 0xE1;
    XDATA[DPTR] = A;
    DPTR = 0xA06A;
    A = XDATA[DPTR];
    R7 = A;
    F_ROM_8832();
    DPTR = 0xA06B;
    A = XDATA[DPTR];
    R7 = A;
    DPTR++;
    A = XDATA[DPTR];
    R5 = A;
    F_ROM_4862();
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_7CA8;
    DPTR = 0xA03D;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_7CA8; }
    F_ROM_6638();
L_ROM_7CA8:
    return;
    F_ROM_8BBC();
    DPTR = 0xA065;
    A = XDATA[DPTR];
    R7 = A;
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    R6 = A;
    A = R7;
    CY = 0;
    A = RORC8(A);
    A = A & 0xF;
    CY = 0;
    A = A - R6;
    if (CY) goto L_ROM_7CC1;
    goto L_ROM_7C7B;
L_ROM_7CC1:
    DPTR = 0xA065;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    A = A & 0xF;
    R6 = A;
    A = R7;
    A = A & 0xE1;
    R7 = A;
    A = R6;
    A++;
    A = A & 0xF;
    A = A + ACC;
    A = A | R7;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x209;
    A = XDATA[DPTR];
    RAM[0x51] = A;
    F_code_689();
    A = A + RAM[0x51];
    DPTR = 0x9EC9;
    F_ROM_4F8E();
    A = A + RAM[0x51];
    DPTR = 0x9ECA;
    F_ROM_4FA4();
    A = A + RAM[0x51];
    DPTR = 0x9ECB;
    XDATA[DPTR] = A;
    F_ROM_4C32+2();
    A = A + RAM[0x51];
    DPTR = 0x9ECC;
    F_ROM_4CE1();
    A = A + RAM[0x51];
    DPTR = 0x9ECD;
    F_ROM_6D4D();
    A = A + RAM[0x51];
    DPTR = 0x9ECE;
    F_ROM_5FC5();
    A = A + RAM[0x51];
    DPTR = 0x9ECF;
    XDATA[DPTR] = A;
    return;
    F_code_689();
    R7 = A;
    DPTR = 0x9FBC;
    XDATA[DPTR] = A;
    if (R7 != 1) goto L_ROM_7D2C;
    F_0x970D();
    A = 0;
    DPTR = 0x9FBC;
    XDATA[DPTR] = A;
L_ROM_7D2C:
    return;
    F_code_689();
    A = A & 1;
    R7 = A;
    DPTR = 0xA13B;
    A = XDATA[DPTR];
    A = A & 0xFE;
    A = A | R7;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x7D62 (outside named functions) ---- */
    DPTR = 0xA036;
    A = 2;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0xF;
    XDATA[DPTR] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & 1;
    A = A | 0x28;
    XDATA[DPTR] = A;
    DPTR++;
    A = 7;
    XDATA[DPTR] = A;
    return;
    F_code_689();
    DPTR = 0x9FE4;
    XDATA[DPTR] = A;
    return;
    F_code_689();
    DPTR = 0xA03C;
    XDATA[DPTR] = A;
    if (A == 0) goto L_ROM_7DB5;
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    if (ACC_0) { goto L_ROM_7DB5; }
    A = 0;
    R5 = A;
    R7 = 4;
L_ROM_7D94:
    F_ROM_6259+1();
    F_0x8FD6();
    A = RORC8(A);
    if (!ACC_0) { goto L_ROM_7DB5; }
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    if (ACC_0) { goto L_ROM_7DB5; }
    F_ROM_7D94+2();
    if (!ACC_0) { goto L_ROM_7DB0; }
    R7 = 0xD;
    goto L_ROM_7DB2;
L_ROM_7DB0:
    R7 = 9;
L_ROM_7DB2:
    F_ROM_8832();
L_ROM_7DB5:
    return;
    DPTR = 0xA03B;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    return;
    DPTR = 0xA072;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    R5 = 1;
    R7 = 0x23;
/* ---- block @0x7DDF (outside named functions) ---- */
    DPTR = 0xA072;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    R5 = 1;
    R7 = 0x1B;
    F_ROM_58B1();
/* ---- block @0x7DF3 (outside named functions) ---- */
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_7DF8; }
    CY = 0;
L_ROM_7DF8:
    PUSH(PSW);
    DPTR = 0xA073;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    R5 = 1;
    R7 = 0x28;
    F_ROM_7DCA();
    PSW = POP();
    IE_7 = CY;
    return;
/* ---- block @0x7EA3 (outside named functions) ---- */
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_7EA9; }
    goto L_ROM_7EC2;
L_ROM_7EA9:
    DPTR = 0xFD62;
    A = XDATA[DPTR];
    if (A != 0xAD) goto L_ROM_7EBE;
    DPTR++;
    A = XDATA[DPTR];
    if (A != 0x35) goto L_ROM_7EBE;
    F_ROM_7EA0+2();
    DPTR = 0x1E5;
    A = 0xDF;
    XDATA[DPTR] = A;
    return;
L_ROM_7EBE:
    goto L_ROM_7EC0;
L_ROM_7EC0:
    goto L_ROM_7F03;
L_ROM_7EC2:
    DPTR = 0x1E7;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
    return;
    A = A + ACC;
    R7 = A;
    DPTR = 0xA06F;
    A = XDATA[DPTR];
    return;
/* ---- block @0x7F03 (outside named functions) ---- */
L_ROM_7F03:
    DPTR = 0x1E7;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    return;
L_ROM_7F38:
    A = A ^ R2;
    A = XDATA[DPTR];
    A = A & 0xFB;
    R5 = A;
    R7 = 0x6A;
    F_ROM_468D();
    DPTR = 0x76E;
    A = 0x55;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0x12;
    XDATA[DPTR] = A;
    DPTR = 0x778;
    A = XDATA[DPTR];
    A = A & 0xF2;
    A = A | 2;
    XDATA[DPTR] = A;
    DPTR = 0x6CC;
    A = XDATA[DPTR];
    A = A | 3;
    XDATA[DPTR] = A;
    DPTR = 0x765;
    A = XDATA[DPTR];
    A = A & 0xF5;
    XDATA[DPTR] = A;
    DPTR = 0x523;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    A = 0;
    R5 = A;
    R7 = 0x66;
    F_ROM_468D();
    return;
L_ROM_7F7F:
    A = A - R7;
    if (ACC_0) { goto L_ROM_7F38; }
    RAM[R1]++;
    A++;
    R7 = 1;
    goto L_ROM_7F8B;
    R7 = 0;
L_ROM_7F8B:
    A = R7;
    if (A != 0) goto L_ROM_7FC8;
L_ROM_7F8E:
    DPTR = 0x9F20;
    A = XDATA[DPTR];
    R6 = A;
    F_ROM_7FAB+2();
    A = XDATA[DPTR];
    R5 = A;
    A = R6;
    B = 8;
    { unsigned t = A * B; A = t & 0xFF; B = t >> 8; }
    A = A + 0xD1;
    R1 = A;
    A = 0x9E;
    A = A + B + CY;
    R2 = A;
    R3 = 1;
    R7 = RAM_5;
    F_ROM_6DA7();
L_ROM_7FAB:
    DPTR = 0x9F20;
    F_ROM_7FE0();
    if (A != 0xA) goto L_ROM_7FB6;
    R7 = 1;
L_ROM_7FB6:
    A = R7;
    if (A == 0) goto L_ROM_7FBE;
    A = 0;
    DPTR = 0x9F20;
    XDATA[DPTR] = A;
L_ROM_7FBE:
    F_ROM_7D4B();
    DPTR = 0x9E92;
    A = XDATA[DPTR];
    A = A | 2;
    XDATA[DPTR] = A;
L_ROM_7FC8:
    PSW = POP();
    IE_7 = CY;
    return;
    B = 8;
    DPTR = 0x9ED0;
    goto L_ROM_458A;
/* ---- block @0x7FE4 (outside named functions) ---- */
L_ROM_7FE4:
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_7FE9; }
    CY = 0;
L_ROM_7FE9:
    PUSH(PSW);
    DPTR = 0xA301;
    A = R7;
    XDATA[DPTR] = A;
    DPTR++;
    A = R5;
    XDATA[DPTR] = A;
    R5 = 0x44;
    F_ROM_57C5();
    DPTR = 0xA302;
    A = XDATA[DPTR];
    DPTR = 0xA301;
    if (A != 1) goto L_ROM_800F;
    A = XDATA[DPTR];
    B = 0x10;
    F_ROM_7567();
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    goto L_ROM_801A;
L_ROM_800F:
    A = XDATA[DPTR];
    B = 0x10;
L_ROM_8013:
    F_ROM_7567();
    A = XDATA[DPTR];
    A = A & 0xFB;
/* ---- block @0x8022 (outside named functions) ---- */
    A = 0;
    R5 = A;
    goto L_ROM_7FE4;
    R5 = 1;
    goto L_ROM_7FE4;
L_ROM_802A:
    DPTR = 0xA2F5;
    F_ROM_459F();
    A = 0;
    R7 = A;
L_ROM_8032:
    DPTR = 0xA2F5;
    F_ROM_4596();
    DPL = R7;
    F_0x9572();
    R6 = A;
/* ---- block @0x804B (outside named functions) ---- */
    DPL = A;
    A = 0;
    A = A + 2 + CY;
    DPH = A;
    return;
    DPTR = 0xF1;
    A = XDATA[DPTR];
    A = A & 0xF0;
    A = SWAP(A);
    A = A & 0xF;
    R7 = A;
    return;
    DPTR = 0x130;
    F_ROM_6071+1();
    DPTR = 0x138;
    F_ROM_6073();
    R5 = A;
    R7 = 0x50;
    F_ROM_468D();
    A = 0;
    R5 = A;
    R7 = 0x51;
L_ROM_8074:
    F_ROM_468D();
    A = 0;
    R5 = A;
    R7 = 0x52;
    F_ROM_468D();
    A = 0;
    R5 = A;
    R7 = 0x53;
    goto L_ROM_468D;
    F_ROM_803E();
    F_ROM_80D7();
    F_ROM_8092+1();
    F_ROM_80B0+2();
    A = 0;
    RAM_D = A;
    RAM_E = A;
L_ROM_8092:
    RAM_F = A;
    RAM[0x10] = 0x80;
    R5 = RAM_D;
    R7 = 0x50;
    F_ROM_468D();
    R5 = RAM_E;
    R7 = 0x51;
    F_ROM_468D();
    R5 = RAM_F;
    R7 = 0x52;
    F_ROM_468D();
    R5 = RAM[0x10];
    R7 = 0x53;
L_ROM_80B0:
    goto L_ROM_468D;
/* ---- block @0x80E3 (outside named functions) ---- */
L_ROM_80E3:
    A++;
    DPTR = 0x138;
    A = RAM[0x1D];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x1E];
    XDATA[DPTR] = A;
    DPTR++;
L_ROM_80EF:
    A = RAM[0x1F];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x20];
    XDATA[DPTR] = A;
    return;
    DPTR = 0x134;
    A = 0xFF;
    F_ROM_6073();
    DPTR = 0x13C;
    F_ROM_6073();
    R5 = A;
    R7 = 0x54;
    F_ROM_468D();
    R5 = 0xFF;
    R7 = 0x55;
    F_ROM_468D();
    R5 = 0xFF;
    R7 = 0x56;
    F_ROM_468D();
    R5 = 0xFF;
    R7 = 0x57;
    goto L_ROM_468D;
    DPTR = 0x1CF;
    A = XDATA[DPTR];
    DPTR = 0xA1E9;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    R7 = A;
    if (!ACC_0) { goto L_ROM_8134; }
    DPTR = 0x1CF;
    A = XDATA[DPTR];
    A = A & 0xFE;
    XDATA[DPTR] = A;
L_ROM_8134:
    A = R7;
    if (!ACC_5) { goto L_ROM_815A; }
    DPTR = 0x1CF;
    A = XDATA[DPTR];
    A = A & 0xDF;
    XDATA[DPTR] = A;
    DPTR = 0x134;
    A = 0x20;
    XDATA[DPTR] = A;
    A = 0;
    IE = A;
    SFR_E8 = A;
    F_ROM_803E();
    DPTR = 3;
    A = XDATA[DPTR];
    A = A & 0xFB;
    R5 = A;
    R7 = 3;
    F_ROM_468D();
L_ROM_8158:
    goto L_ROM_8158;
L_ROM_815A:
    return;
    DPTR = 0x194;
    A = XDATA[DPTR];
    A = A | 1;
    XDATA[DPTR] = A;
    DPTR = 0x1C7;
    A = 0;
    XDATA[DPTR] = A;
    return;
    R5 = 2;
    DPTR = 0x1C4;
    A = 0x48;
    XDATA[DPTR] = A;
    A = 0xB1;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_8174:
    DPTR = 0xA0AC;
    A = XDATA[DPTR];
    R7 = A;
    A = R5;
    CY = 0;
    A = A - R7;
    if (!CY) goto L_ROM_818E;
    A = R5;
    A = A + ACC;
    A = A + 0x81;
    R0 = A;
    A = RAM[R0];
    if (!ACC_4) { goto L_ROM_818B; }
    R7 = 0;
    return;
L_ROM_818B:
    R5++;
    goto L_ROM_8174;
L_ROM_818E:
    A = 0x48;
    A++;
    DPTR = 0x1C4;
    XDATA[DPTR] = A;
    A = 0xB1;
    DPTR++;
    XDATA[DPTR] = A;
    R7 = 1;
    return;
    DPTR = 0x1E4;
    A = 0x23;
    XDATA[DPTR] = A;
    DPTR++;
    A = 0;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x134;
    A = XDATA[DPTR];
    A = A & RAM[0x15];
    RAM[0x19] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x16];
    RAM[0x1A] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x17];
    RAM[0x1B] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x18];
    RAM[0x1C] = A;
    DPTR = 0x134;
    A = RAM[0x19];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x1A];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x1B];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x1C];
    XDATA[DPTR] = A;
    return;
    DPTR = 0x13C;
    A = XDATA[DPTR];
    A = A & RAM[0x1D];
    RAM[0x21] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x1E];
    RAM[0x22] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x1F];
    RAM[0x23] = A;
    DPTR++;
    A = XDATA[DPTR];
    A = A & RAM[0x20];
    RAM[0x24] = A;
    DPTR = 0x13C;
    A = RAM[0x21];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x22];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x23];
    XDATA[DPTR] = A;
    DPTR++;
    A = RAM[0x24];
    XDATA[DPTR] = A;
    SFR_91 = SFR_91 & 0xDF;
    return;
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_820F; }
    A = 0;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
L_ROM_820F:
    return;
    DPTR = 0x9FD9;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_8219;
    F_ROM_6BD1+1();
L_ROM_8219:
    F_ROM_540D();
    goto L_ROM_5048;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_8224; }
    CY = 0;
L_ROM_8224:
    PUSH(PSW);
    DPTR = 0xA099;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_824E; }
    DPTR = 0xA09E;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_8241;
    DPTR++;
    A = XDATA[DPTR];
    if (A != 1) goto L_ROM_824E;
    A = 2;
    XDATA[DPTR] = A;
    F_ROM_89EB();
    goto L_ROM_824E;
L_ROM_8241:
    DPTR = 0xA09E;
    A = XDATA[DPTR];
    if (A != 2) goto L_ROM_824E;
    A = 3;
    XDATA[DPTR] = A;
    F_ROM_8904+2();
L_ROM_824E:
    PSW = POP();
    IE_7 = CY;
    return;
    A = R7;
    DPTR = 0x286;
    if (A == 0) goto L_ROM_825F;
    A = XDATA[DPTR];
    A = A | 4;
    XDATA[DPTR] = A;
    goto L_ROM_8263;
L_ROM_825F:
    A = XDATA[DPTR];
    A = A & 0xFB;
    XDATA[DPTR] = A;
L_ROM_8263:
    DPTR = 0x9E97;
    A = R5;
    XDATA[DPTR] = A;
    return;
    A = 0;
    RAM[0x5D] = A;
    F_ROM_7C67+2();
    A = XDATA[DPTR];
    R6 = A;
    if (A != 2) goto L_ROM_827C;
    A = R5;
    CY = 0;
    A = A - 0x11;
    if (CY) goto L_ROM_829C;
    goto L_ROM_8294;
L_ROM_827C:
    A = R6;
    if (A != 1) goto L_ROM_8288;
    A = R5;
    CY = 0;
    A = A - 0xA;
    if (CY) goto L_ROM_829C;
    goto L_ROM_8294;
L_ROM_8288:
    F_ROM_7C67+2();
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_8299;
    A = R5;
    CY = 0;
    A = A - 3;
    if (CY) goto L_ROM_829C;
L_ROM_8294:
    RAM[0x5D] = 1;
    goto L_ROM_829C;
L_ROM_8299:
    A = 0;
    RAM[0x5D] = A;
L_ROM_829C:
    R7 = RAM[0x5D];
    return;
/* ---- block @0x82CF (outside named functions) ---- */
    B = 4;
    A = RAM[0x52];
L_ROM_82D4:
    F_ROM_4FFD();
    goto L_ROM_82F9;
L_ROM_82D9:
    A = RAM[0x53];
    CY = 1;
    A = A - 0x1E;
    if (CY) goto L_ROM_82E5;
    DPTR = 0xA1D2;
    goto L_ROM_82F9;
/* ---- block @0x8305 (outside named functions) ---- */
    A = R7;
    A = A ^ 0x13;
    if (A == 0) goto L_ROM_830E;
    A = R7;
    if (A != 0xB) goto L_ROM_8313;
L_ROM_830E:
    DPTR = 0xA090;
    goto L_ROM_8332;
L_ROM_8313:
    A = R7;
    A = A ^ 0x12;
    if (A == 0) goto L_ROM_831C;
    A = R7;
    if (A != 0xA) goto L_ROM_8321;
L_ROM_831C:
    DPTR = 0xA091;
    goto L_ROM_8332;
L_ROM_8321:
    A = R7;
    A = A ^ 0x11;
    if (A == 0) goto L_ROM_832A;
    A = R7;
    if (A != 9) goto L_ROM_832F;
L_ROM_832A:
    DPTR = 0xA092;
    goto L_ROM_8332;
L_ROM_832F:
    DPTR = 0xA08F;
L_ROM_8332:
    A = XDATA[DPTR];
    RAM[0x5F] = A;
    R7 = RAM[0x5F];
    return;
    RAM[0x5D] = R5;
    DPTR = 0xA08E;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_8384;
    F_ROM_82E5();
    RAM[0x5E] = R7;
    A = RAM[0x5E];
    CY = 0;
    A = A - 0x80;
    if (!CY) goto L_ROM_8372;
    A = RAM[0x5E];
    A = A - 0x1B;
    if (CY) goto L_ROM_8353;
    goto L_ROM_8365;
L_ROM_8353:
    A = R5;
    A = A + RAM[0x5E];
    R7 = A;
    A = 0;
    A = ROLC8(A);
    R6 = A;
    CY = 1;
    A = R7;
    A = A - 0x1B;
    A = R6;
    A = A ^ 0x80;
    A = A - 0x80;
    if (CY) goto L_ROM_836A;
L_ROM_8365:
    RAM[0x5D] = 0x1B;
    goto L_ROM_8384;
L_ROM_836A:
    A = RAM[0x5E];
    A = A + RAM[0x5D];
    RAM[0x5D] = A;
    goto L_ROM_8384;
L_ROM_8372:
    CY = 0;
    A = 0;
    A = A - RAM[0x5E];
    RAM[0x5E] = A;
    A = R5;
    CY = 1;
    A = A - RAM[0x5E];
    if (CY) goto L_ROM_8384;
    A = RAM[0x5D];
    A = A - RAM[0x5E];
    RAM[0x5D] = A;
L_ROM_8384:
    R7 = RAM[0x5D];
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_838C; }
    CY = 0;
L_ROM_838C:
    PUSH(PSW);
    DPTR = 0x430;
    F_0x97C3();
    DPTR = 0xA293;
    A = XDATA[DPTR];
    DPTR = 0x433;
    XDATA[DPTR] = A;
    DPTR = 0xA294;
    A = XDATA[DPTR];
    DPTR = 0x434;
    XDATA[DPTR] = A;
    DPTR = 0xA295;
    A = XDATA[DPTR];
    DPTR = 0x435;
    XDATA[DPTR] = A;
    DPTR = 0xA296;
    A = XDATA[DPTR];
    DPTR = 0x436;
    XDATA[DPTR] = A;
    DPTR = 0xA297;
    A = XDATA[DPTR];
    DPTR = 0x437;
    XDATA[DPTR] = A;
    PSW = POP();
    IE_7 = CY;
    return;
    CY = 1;
    A = R7;
    A = A - 0xE8;
    A = R6;
    A = A - 3;
    if (CY) goto L_ROM_83CD;
    R7 = 5;
    return;
L_ROM_83CD:
    CY = 1;
    A = R7;
    A = A - 0xC8;
    A = R6;
    A = A - 0;
    R7 = 0;
    if (CY) goto L_ROM_83DA;
    R7 = 2;
L_ROM_83DA:
    return;
    A = 0;
    DPTR = 0xA1E4;
    XDATA[DPTR] = A;
L_ROM_83E0:
    DPTR = 0xA1E4;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = A - 3;
    if (!CY) goto L_ROM_8448;
    A = 0x9E;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0x9E + CY;
    DPH = A;
    A = XDATA[DPTR];
    R7 = A;
    CY = 1;
    A = A - 0xA;
    if (!CY) goto L_ROM_83FD;
    goto L_ROM_83FF;
L_ROM_83FD:
    R7 = 0xA;
L_ROM_83FF:
    R6 = RAM_7;
    A = R7;
    A = A + 2;
    DPTR = 0xA1E3;
    XDATA[DPTR] = A;
    DPTR = 0xA1D5;
    A = 0xE;
    XDATA[DPTR] = A;
    DPTR = 0xA1D7;
    A = 1;
    XDATA[DPTR] = A;
    F_ROM_8428+1();
    DPTR = 0xA1D8;
    XDATA[DPTR] = A;
    A = 0;
    R7 = A;
L_ROM_841C:
    A = R7;
    CY = 0;
    A = A - R6;
    if (!CY) goto L_ROM_8437;
    F_ROM_8428+1();
    A = A + R7;
    F_ROM_8437+1();
    A = XDATA[DPTR];
    R5 = A;
L_ROM_8428:
    A = 0xD9;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0xA1 + CY;
    DPH = A;
    A = R5;
    XDATA[DPTR] = A;
    R7++;
    goto L_ROM_841C;
L_ROM_8437:
    R3 = 1;
    R2 = 0xA1;
    R1 = 0xD5;
    F_0x97DC();
    DPTR = 0xA1E4;
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    goto L_ROM_83E0;
L_ROM_8448:
    return;
    DPTR = 0xA1E4;
    A = XDATA[DPTR];
    A = A + 0x9B;
    DPL = A;
    A = 0;
    A = A + 0x9E + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
    A = A + 0xB5;
    DPL = A;
    A = 0;
    A = A + 0x9E + CY;
    DPH = A;
    return;
    F_ROM_4F8F();
    RAM[0x51] = A;
    F_ROM_4FA4+1();
    RAM[0x52] = A;
    F_code_689();
    RAM[0x53] = A;
    DPTR = 0x9E99;
    XDATA[DPTR] = A;
    A = RAM[0x51];
    if (A == 0) goto L_ROM_847F;
    R5 = A;
    R7 = RAM[0x52];
    F_0x9606();
L_ROM_847F:
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_8485; }
    CY = 0;
L_ROM_8485:
    PUSH(PSW);
    DPTR = 0xA26C;
    A = R5;
    XDATA[DPTR] = A;
    DPTR++;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0xA26A;
    A = 0xC;
    XDATA[DPTR] = A;
    DPTR = 0xA278;
    A = 2;
    XDATA[DPTR] = A;
    R3 = 1;
    R2 = 0xA2;
    R1 = 0x6A;
    F_0x97DC();
    PSW = POP();
    IE_7 = CY;
    return;
/* ---- block @0x84E2 (outside named functions) ---- */
    A = R7;
    DPTR = 0x8D09;
    F_ROM_4F94+1();
    F_ROM_84DF+1();
    A = 0;
    XDATA[DPTR] = A;
    F_ROM_7F8E+2();
    A = XDATA[DPTR];
    A = A & 0xBF;
    A = A | 0x80;
    R6 = A;
    F_ROM_7F8E+2();
    A = R6;
    XDATA[DPTR] = A;
L_ROM_84FB:
    PSW = POP();
    IE_7 = CY;
    return;
    XDATA[DPTR] = A;
    A = R7;
    A = A + ACC;
    A = A + 1;
    DPL = A;
    A = 0;
    A = A + 0x92 + CY;
    DPH = A;
    A = 0;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    A = 0x91;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0x98 + CY;
    DPH = A;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_8521; }
    CY = 0;
L_ROM_8521:
    PUSH(PSW);
    DPTR = 0xA309;
    A = R7;
    XDATA[DPTR] = A;
    R7 = 0x8F;
    F_ROM_46AB();
    A = R7;
/* ---- block @0x855E (outside named functions) ---- */
L_ROM_855E:
    A = XDATA[DPTR];
    A++;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    CY = 0;
    A = A - 0x10;
    if (CY) goto L_ROM_853F;
    R7 = 0x8F;
    F_ROM_46AB();
    A = R7;
    if (!ACC_0) { goto L_ROM_8572; }
/* ---- block @0x8618 (outside named functions) ---- */
    PUSH(PSW);
    DPTR = 0xA2DC;
    A = R7;
    XDATA[DPTR] = A;
    A = R5;
    A = A ^ 1;
    if (A != 0) goto L_ROM_8652;
    A = R3;
    if (A != 1) goto L_ROM_862F;
    A = XDATA[DPTR];
    A = A + 2;
    RAM[0x70] = A;
    goto L_ROM_8637;
L_ROM_862F:
    DPTR = 0xA2DC;
    A = XDATA[DPTR];
    A = A + 0xFE;
    RAM[0x70] = A;
L_ROM_8637:
    DPTR = 0xA21B;
    F_code_879();
    /* nop */
    /* nop */
    /* nop */
    R7 = A;
    R7 = RAM[0x70];
    F_ROM_8664+1();
    F_ROM_865C+1();
    F_code_879();
    /* nop */
    /* nop */
    /* nop */
    R7 = A;
    R7 = RAM[0x70];
    goto L_ROM_8672;
L_ROM_8652:
    DPTR = 0xA21B;
    F_code_879();
    /* nop */
    /* nop */
    /* nop */
    R7 = A;
L_ROM_865C:
    DPTR = 0xA2DC;
    F_ROM_5D41();
    F_ROM_8669();
L_ROM_8664:
    F_ROM_865C+1();
    F_code_879();
/* ---- block @0x867D (outside named functions) ---- */
    A = 0;
    R7 = A;
    F_ROM_855E();
    DPTR = 0xA21B;
    return;
    A = 0;
    R4 = A;
    R5 = A;
    R6 = A;
    DPTR = 0xA21F;
    F_code_86D();
    R5 = 0x18;
    R4 = 0;
    return;
/* ---- block @0x8787 (outside named functions) ---- */
    CY = 0;
    A = R7;
    A = A ^ 0x80;
L_ROM_878B:
    A = A - 0x80;
    if (CY) goto L_ROM_8792;
    R7 = 0x64;
    return;
L_ROM_8792:
    A = R7;
/* ---- block @0x8797 (outside named functions) ---- */
    F_ROM_8793();
    if (R7 != 1) goto L_ROM_87B2;
    DPTR = 0xA1BF;
    A = XDATA[DPTR];
    A = A & 0x30;
    R7 = A;
    if (R7 != 0x20) goto L_ROM_87AD;
    DPTR = 0xA13A;
    A = 1;
    XDATA[DPTR] = A;
    return;
L_ROM_87AD:
    A = 0;
/* ---- block @0x8828 (outside named functions) ---- */
    F_ROM_4572();
    A = R7;
    A = A & 0xFE;
    R7 = A;
    A = R4;
    return;
/* ---- block @0x883E (outside named functions) ---- */
    R6 = 0;
    R7 = 1;
    R5 = 0;
    R3 = 1;
    R2 = 0x9F;
    R1 = 0xCF;
    F_code_8AA();
    DPTR = 0x9FCF;
    A = XDATA[DPTR];
    A = A & 0xFD;
    XDATA[DPTR] = A;
/* ---- block @0x885D (outside named functions) ---- */
L_ROM_885D:
    F_ROM_8854();
    A = 0;
    DPTR = 0x9FD2;
    XDATA[DPTR] = A;
    return;
    F_ROM_67A0+2();
    goto L_ROM_885D;
    F_ROM_6791();
    goto L_ROM_885D;
    F_ROM_67E6();
    goto L_ROM_885D;
    DPTR = 0x527;
    A = XDATA[DPTR];
    A = A & 0xBF;
    XDATA[DPTR] = A;
    return;
    R5 = 0x2E;
    R7 = 0x6F;
/* ---- block @0x8893 (outside named functions) ---- */
L_ROM_8893:
    R5 = 0x20;
    F_ROM_8880();
    A = 2;
    XDATA[DPTR] = A;
    return;
    F_ROM_67EA();
    goto L_ROM_8893;
    R7 = 0xFF;
    F_ROM_54C6();
    F_ROM_47EB();
    DPTR = 0x9FD2;
    return;
    F_ROM_8885();
    A = 2;
    XDATA[DPTR] = A;
    return;
    F_ROM_67EC();
    R5 = 0x23;
    F_ROM_8880();
    A = 2;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x890D (outside named functions) ---- */
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A & 0xFB;
    XDATA[DPTR] = A;
    A = 0;
    DPTR = 0x9FE2;
    XDATA[DPTR] = A;
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0x9FDD;
    XDATA[DPTR] = A;
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A & 0xF7;
    XDATA[DPTR] = A;
    A = A & 0xBF;
    F_ROM_6478+1();
    R5 = 0x10;
    R7 = 3;
    goto L_ROM_660D;
    A = R7;
    A = A + 0xFE;
    if (A == 0) goto L_ROM_8942;
    A++;
    if (A != 0) goto L_ROM_895E;
    DPTR = 0x9FDF;
    A = 2;
    XDATA[DPTR] = A;
    goto L_ROM_8955;
L_ROM_8942:
    A = R5;
    if (A != 0) goto L_ROM_894B;
    DPTR = 0xA039;
    A = XDATA[DPTR];
    goto L_ROM_894D;
L_ROM_894B:
    A = R5;
    A--;
L_ROM_894D:
    DPTR = 0x9FDF;
    XDATA[DPTR] = A;
    DPTR = 0x9FDF;
    A = XDATA[DPTR];
L_ROM_8955:
    DPTR++;
    XDATA[DPTR] = A;
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = A | 8;
    XDATA[DPTR] = A;
L_ROM_895E:
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_8964; }
    CY = 0;
L_ROM_8964:
    PUSH(PSW);
    DPTR = 0xA04A;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_8984; }
    DPTR = 0xA05C;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_89D4;
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    CY = 1;
    A = A - 0;
    if (!CY) goto L_ROM_89D4;
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_89D0;
    goto L_ROM_89D4;
L_ROM_8984:
    F_0xA2B7();
    A = R7;
    A = A ^ 1;
    if (A != 0) goto L_ROM_89D4;
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    R7 = A;
    A = A & 3;
    if (A != 0) goto L_ROM_89D4;
    DPTR = 0x9FDB;
    A = XDATA[DPTR];
    R6 = A;
    A = 0;
    CY = 0;
    A = A - R6;
    if (CY) goto L_ROM_89D4;
    A = R7;
    if (ACC_2) { goto L_ROM_89D4; }
    DPTR = 0x9FDD;
    A = XDATA[DPTR];
    if (ACC_4) { goto L_ROM_89D4; }
    DPTR = 0x9FD5;
    A = XDATA[DPTR];
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x3F;
    if (!ACC_0) { goto L_ROM_89D4; }
    DPTR = 0xA03C;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_89D4;
    DPTR = 0x662;
    A = XDATA[DPTR];
    if (ACC_1) { goto L_ROM_89D4; }
    DPTR = 0x662;
    A = XDATA[DPTR];
    if (!ACC_0) { goto L_ROM_89D0; }
    A = XDATA[DPTR];
    A = A & 0xFC;
    A = A ^ 0x80;
    if (A == 0) goto L_ROM_89D4;
L_ROM_89D0:
    R7 = 1;
    goto L_ROM_89D6;
L_ROM_89D4:
    R7 = 0;
/* ---- block @0x89DB (outside named functions) ---- */
    DPTR = 0xA030;
    A = 4;
    XDATA[DPTR] = A;
    DPTR++;
    A--;
    XDATA[DPTR] = A;
/* ---- block @0x89F2 (outside named functions) ---- */
    R5 = 0x2F;
    R7 = 0xFF;
    F_ROM_54C6();
    F_ROM_47EB();
    R5 = 8;
    R7 = 1;
    F_ROM_61C6();
    DPTR = 0x9FD3;
    A = 8;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x8A14 (outside named functions) ---- */
    PUSH(PSW);
    DPTR = 0xA318;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x9ECB;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0x41C;
    A = XDATA[DPTR];
    A = A ^ R7;
    if (A != 0) goto L_ROM_8A60;
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    A = A ^ 0xE;
    if (A != 0) goto L_ROM_8A3F;
    DPTR = 0xA318;
    A = XDATA[DPTR];
    if (A != 0) goto L_ROM_8A60;
    F_ROM_8A45();
    DPTR = 0x604;
    F_ROM_61BE();
    goto L_ROM_8A5D;
L_ROM_8A3F:
    DPTR = 0x9FDC;
    A = XDATA[DPTR];
    A = A ^ 6;
/* ---- block @0x8A65 (outside named functions) ---- */
    DPTR = 0x9FD4;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x604;
    A = XDATA[DPTR];
    A = A | 0x40;
    XDATA[DPTR] = A;
    A = XDATA[DPTR];
    A = A | 0x80;
    return;
    CY = 1;
    if (IE_7) { IE_7 = 0; goto L_ROM_8A7D; }
    CY = 0;
L_ROM_8A7D:
    PUSH(PSW);
    DPTR = 0xA2E8;
    A = R7;
    XDATA[DPTR] = A;
    DPTR = 0x41D;
    A = XDATA[DPTR];
    if (A == 0) goto L_ROM_8AA9;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA2EB;
    XDATA[DPTR] = A;
    R5 = 0x29;
    F_ROM_5751();
    if (R7 != 1) goto L_ROM_8A9D;
    F_ROM_878B+1();
L_ROM_8A9D:
    DPTR = 0xA2EB;
    A = XDATA[DPTR];
    R7 = A;
    R5 = 0x2A;
    F_ROM_54C6();
    goto L_ROM_8AAC;
L_ROM_8AA9:
    F_ROM_878B+1();
L_ROM_8AAC:
    DPTR = 0x41F;
    A = 0x20;
    XDATA[DPTR] = A;
    PSW = POP();
    IE_7 = CY;
    return;
    A = 0;
    R6 = A;
    A = R7;
    CY = 0;
    A = RORC8(A);
    R5 = A;
    A = R7;
    if (!ACC_0) { goto L_ROM_8AC3; }
    R6 = 0x80;
L_ROM_8AC3:
    DPTR = 0xFD10;
    A = R5;
    XDATA[DPTR] = A;
    R7 = RAM_6;
    return;
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    R7 = A;
    CY = 0;
    A = RORC8(A);
    R6 = A;
    A = R7;
    A = A & 0xF1;
    R7 = A;
    A = R6;
    A++;
    A = A & 7;
    A = A + ACC;
    A = A | R7;
    XDATA[DPTR] = A;
    DPTR++;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA0AE;
    A = XDATA[DPTR];
    R6 = A;
    CY = 0;
    A = RORC8(A);
    A = A & 7;
    return;
/* ---- block @0x8BC3 (outside named functions) ---- */
    R6 = 0;
    R7 = 4;
    R5 = 0;
    R3 = 1;
    R2 = 0xA0;
/* ---- block @0x8BD0 (outside named functions) ---- */
    DPTR = 0xA0FE;
    A = XDATA[DPTR];
    A = A | 0x10;
    XDATA[DPTR] = A;
    DPTR = 0xA1FB;
    A = XDATA[DPTR];
    R7 = A;
    return;
    F_ROM_458A();
    A = XDATA[DPTR];
    R4 = A;
    DPTR++;
    A = XDATA[DPTR];
    DPL = A;
    DPH = R4;
    return;
    F_code_85A();
    DPTR = 0xA231;
    F_code_86D();
    R7 = 0;
    return;
    A = 5;
    A = A + R6;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
    A = 0x21;
    A = A + R7;
    DPL = A;
    A = 0;
    A = A + 0xFC + CY;
    DPH = A;
    A = XDATA[DPTR];
    return;
    A = R7;
    A = RORC8(A);
    A = RORC8(A);
    A = RORC8(A);
    A = A & 0x1F;
    R6 = A;
    A = R7;
    A = A & 7;
    R7 = A;
    return;
    R7 = 0x84;
    R6 = 8;
    F_ROM_56B0();
    DPTR = 0xA21B;
    return;
    R4 = A;
    A = RAM[0x56];
    CY = 0;
    A = RORC8(A);
    R6 = A;
    A = RAM[0x57];
    A = RORC8(A);
    R7 = A;
    return;
    DPTR = 0x558;
    A = 2;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA2E3;
    A = XDATA[DPTR];
    R7 = A;
    DPTR = 0xA2E1;
    A = XDATA[DPTR];
    return;
    A = 1;
    A = CODE[CODE[A + DPTR]];
    A = A - RAM[0x55];
    A = 0;
    A = CODE[CODE[A + DPTR]];
    A = A - RAM[0x54];
    return;
    R6 = A;
    A = A & 0x20;
    R5 = A;
    A = R7;
    A = A & 0xDF;
    A = A | R5;
    R7 = A;
    return;
    F_ROM_458A();
    A = XDATA[DPTR];
    R3 = A;
    A = 0;
    R5 = A;
    R7++;
    return;
    R7 = 0x30;
    R6 = 9;
    F_ROM_374E();
    A = 0;
    return;
    DPTR = 0x41F;
    A = 0x20;
    XDATA[DPTR] = A;
    R7 = 1;
    return;
    DPTR = 0xA03F;
    A = XDATA[DPTR];
    DPTR = 0x573;
    XDATA[DPTR] = A;
    return;
    A = A & 1;
    A = SWAP(A);
    A = ROLC8(A);
    A = ROLC8(A);
    A = ROLC8(A);
    A = A & 0x80;
    return;
    DPTR = 0x522;
    A = XDATA[DPTR];
    DPTR = 0xA1FB;
    XDATA[DPTR] = A;
    return;
    DPTR = 0xA1FF;
    A = XDATA[DPTR];
    R7 = A;
    B = 0xB;
    return;
    B = 0xE;
    A = RAM[0x54];
    DPTR = 0xA0B2;
    return;
    DPTR = 0x8101;
    F_ROM_458A();
    A = R7;
    XDATA[DPTR] = A;
    return;
    A = RAM[0x68];
    A = A & 0x7F;
    DPTR = 0xA299;
    XDATA[DPTR] = A;
    return;
    XDATA[DPTR] = A;
    DPTR = 0x4E0;
    A = XDATA[DPTR];
    DPTR = 0x9FD5;
    return;
    DPTR = 0xA050;
    A = XDATA[DPTR];
    A = A & 0xDF;
    XDATA[DPTR] = A;
    A = 0;
    return;
    R7 = 0x4E;
    F_ROM_46AB();
    A = R7;
    A = A & 0x7F;
    return;
    DPTR = 0xA2C3;
    A = XDATA[DPTR];
    R7 = 0x48;
    R6 = 9;
    return;
    DPTR = 0xA04D;
    A = XDATA[DPTR];
    A = SWAP(A);
    A = RORC8(A);
    A = A & 7;
    return;
    XDATA[DPTR] = A;
    R7 = 0x10;
    R6 = 0;
    goto L_ROM_3E50;
    DPTR = 0x60A;
    A = XDATA[DPTR];
    A = A & 0xF8;
    XDATA[DPTR] = A;
    return;
    DPTR = 0x604;
    A = XDATA[DPTR];
    A = A & 0x7F;
    XDATA[DPTR] = A;
    return;
/* ---- block @0x8D4A (outside named functions) ---- */
    DPTR = 0xA288;
    F_ROM_4572();
    A = R7;
    return;
    F_ROM_4572();
    A = R7;
    A = A | 0x80;
    R7 = A;
    return;
    A = A + R7;
    R0 = A;
    A = RAM[R0];
    R6 = A;
    A = R5;
    A = ~A;
    A = A & R6;
    return;
    F_ROM_46AB();
    A = R7;
    A = A | 0x40;
    R5 = A;
    return;
    A = A | 0xC7;