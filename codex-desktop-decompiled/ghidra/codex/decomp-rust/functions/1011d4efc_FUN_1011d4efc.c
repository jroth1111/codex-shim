
ulong FUN_1011d4efc(undefined8 *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  code *pcVar12;
  short *unaff_x19;
  short *psVar13;
  undefined8 unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  short unaff_w23;
  short sVar14;
  short unaff_w24;
  short sVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar18 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  undefined8 in_stack_00000030;
  uint uStack000000000000003c;
  uint in_stack_00000040;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  
code_r0x0001011d4efc:
  iVar10 = __ZN4core3fmt5write17h64810b21425781ecE(param_1,param_2,s_____m_108ad7b78,param_4);
  if (iVar10 != 0) {
    if (in_stack_00000068 == 0) {
      in_stack_00000070 = &UNK_108cd94bd;
      in_stack_00000078 = 0x1b;
      *(undefined ***)(unaff_x29 + -0x78) = &stack0x00000070;
      *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_<__>__write_ansi_incorrectly_err_108adbda9,unaff_x29 + -0x78,&UNK_10b2525b0);
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1011d5178);
      (*pcVar12)();
    }
LAB_1011d50e0:
    if (in_stack_00000010 != 0) {
      _free(in_stack_00000008);
    }
    return in_stack_00000068;
  }
  if ((in_stack_00000068 & 3) == 1) {
    uVar16 = *(undefined8 *)(in_stack_00000068 - 1);
    puVar17 = *(undefined8 **)(in_stack_00000068 + 7);
    pcVar12 = (code *)*puVar17;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar16);
    }
    if (puVar17[1] != 0) {
      _free(uVar16);
    }
    _free((undefined8 *)(in_stack_00000068 - 1));
  }
  uVar3 = *(uint *)(unaff_x22 + 0x18);
  uVar4 = *(uint *)(unaff_x22 + 0x1c);
  uVar8 = uVar3 >> 8 & 0xff;
  uVar1 = uVar3 & 0xff;
  uStack000000000000003c = uVar4 & 0xff;
  uVar9 = uVar4 >> 8 & 0xff;
  if (*(byte *)(unaff_x22 + 0x20) != in_stack_00000040) goto LAB_1011d4fcc;
LAB_1011d4f64:
  psVar13 = unaff_x19;
  sVar14 = unaff_w23;
  sVar15 = unaff_w24;
  if (in_stack_00000040 == 0x12) {
    if (*(byte *)(unaff_x22 + 0x21) != in_stack_00000030._4_4_) goto LAB_1011d4fcc;
    in_stack_00000040 = 0x12;
  }
  else if (in_stack_00000040 == 0x11) {
    if (*(byte *)(unaff_x22 + 0x21) != in_stack_00000030._4_4_) goto LAB_1011d4fcc;
    if ((uint)*(byte *)(unaff_x22 + 0x22) != (uStack000000000000001c & 0xff)) goto LAB_1011d4fcc;
    if ((uint)*(byte *)(unaff_x22 + 0x23) != (uStack0000000000000018 & 0xff)) goto LAB_1011d4fcc;
    in_stack_00000040 = 0x11;
  }
  do {
    auVar18 = FUN_100f1ad78();
    in_stack_00000068 = auVar18._8_8_;
    unaff_x19 = psVar13 + 8;
    unaff_x28 = unaff_x28 + -0x10;
    if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
    if ((unaff_x28 == 0) || (unaff_x22 = *(long *)(psVar13 + 0xc), unaff_x22 == 0)) {
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000008);
      }
      uVar11 = FUN_1016e38e4();
      if (uVar11 != 0) {
        return uVar11;
      }
      uVar11 = FUN_1016e3a1c();
      if (uVar11 != 0) {
        return uVar11;
      }
      auVar18 = FUN_100f1a9a0();
      if ((auVar18._0_8_ & 1) != 0) {
        return auVar18._8_8_;
      }
      uVar11 = FUN_1016e377c(auVar18._8_8_,0);
      return uVar11;
    }
    unaff_w23 = *unaff_x19;
    unaff_w24 = psVar13[9];
    if ((unaff_w23 != (short)(sVar14 + 1)) || (unaff_w24 != sVar15)) {
      auVar18 = FUN_100f1ac28();
      in_stack_00000068 = auVar18._8_8_;
      if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
    }
    uVar7 = *(ushort *)(unaff_x22 + 0x24);
    if (uVar7 != unaff_w21) {
      *(undefined8 *)(unaff_x29 + -0x78) = unaff_x20;
      uVar2 = unaff_w21 & (uVar7 ^ 0xffff);
      if ((uVar2 >> 6 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x14);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x10);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
        if ((uVar7 >> 1 & 1) != 0) {
          auVar18 = FUN_100f1a830(unaff_x29 + -0x78,2);
          in_stack_00000068 = auVar18._8_8_;
          if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
        }
      }
      if ((uVar2 >> 2 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x11);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 3 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x12);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x10);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 8 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x16);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 & 0x30) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0x13);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      uVar2 = (uint)uVar7 & (unaff_w21 ^ 0xffff);
      if ((uVar2 >> 6 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0xb);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,1);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,3);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 3 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,4);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,2);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 8 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,0xd);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 4 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,9);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      if ((uVar2 >> 5 & 1) != 0) {
        auVar18 = FUN_100f1a830(unaff_x29 + -0x78,10);
        in_stack_00000068 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
      }
      unaff_w21 = (uint)*(ushort *)(unaff_x22 + 0x24);
    }
    if (*(byte *)(unaff_x22 + 0x18) != uVar1) {
LAB_1011d4e7c:
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      uVar3 = *(uint *)(unaff_x22 + 0x1c);
      uVar5 = (&UNK_108cdb73c)[(ulong)uVar1 & 0xff];
      uVar6 = (&UNK_108cdb73c)[(ulong)uVar3 & 0xff];
      in_stack_00000068 = 0;
      *(char *)(unaff_x29 + -0x79) = (char)(uVar1 >> 0x18);
      *(short *)(unaff_x29 + -0x7b) = (short)(uVar1 >> 8);
      *(undefined1 *)(unaff_x29 + -0x7c) = uVar5;
      *(undefined1 *)(unaff_x29 + -0x7d) = 0;
      in_stack_00000070 =
           (undefined *)
           CONCAT71(CONCAT61(CONCAT42(CONCAT31(in_stack_00000070._5_3_,(char)(uVar3 >> 0x18)),
                                      (short)(uVar3 >> 8)),uVar6),1);
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x7d;
      *(undefined **)(unaff_x29 + -0x70) =
           &
           __ZN80__LT_crossterm__style__types__colored__Colored_u20_as_u20_core__fmt__Display_GT_3fmt17hdcf24e4fc5a397bfE
      ;
      *(undefined ***)(unaff_x29 + -0x68) = &stack0x00000070;
      *(undefined **)(unaff_x29 + -0x60) =
           &
           __ZN80__LT_crossterm__style__types__colored__Colored_u20_as_u20_core__fmt__Display_GT_3fmt17hdcf24e4fc5a397bfE
      ;
      param_1 = &stack0x00000060;
      param_4 = unaff_x29 + -0x78;
      param_2 = &UNK_10b249e88;
      in_stack_00000060 = unaff_x20;
      goto code_r0x0001011d4efc;
    }
    if (uVar1 == 0x12) {
      if (*(byte *)(unaff_x22 + 0x19) == uVar8) goto LAB_1011d4df4;
      goto LAB_1011d4e7c;
    }
    if ((uVar1 == 0x11) &&
       (((*(byte *)(unaff_x22 + 0x19) != uVar8 ||
         ((uint)*(byte *)(unaff_x22 + 0x1a) != (uVar3 >> 0x10 & 0xff))) ||
        ((uint)*(byte *)(unaff_x22 + 0x1b) != uVar3 >> 0x18)))) goto LAB_1011d4e7c;
LAB_1011d4df4:
    if (*(byte *)(unaff_x22 + 0x1c) != uStack000000000000003c) goto LAB_1011d4e7c;
    if (uStack000000000000003c == 0x12) {
      if (*(byte *)(unaff_x22 + 0x1d) != uVar9) goto LAB_1011d4e7c;
      uStack000000000000003c = 0x12;
    }
    else if (uStack000000000000003c == 0x11) {
      if (((*(byte *)(unaff_x22 + 0x1d) != uVar9) ||
          ((uint)*(byte *)(unaff_x22 + 0x1e) != (uVar4 >> 0x10 & 0xff))) ||
         ((uint)*(byte *)(unaff_x22 + 0x1f) != uVar4 >> 0x18)) goto LAB_1011d4e7c;
      uStack000000000000003c = 0x11;
    }
    if (*(byte *)(unaff_x22 + 0x20) == in_stack_00000040) goto LAB_1011d4f64;
LAB_1011d4fcc:
    auVar18 = FUN_100f1a9a0();
    in_stack_00000068 = auVar18._8_8_;
    if (((auVar18._0_8_ & 1) != 0) && (in_stack_00000068 != 0)) goto LAB_1011d50e0;
    uStack0000000000000018 = *(uint *)(unaff_x22 + 0x20);
    in_stack_00000030._4_4_ = uStack0000000000000018 >> 8 & 0xff;
    in_stack_00000040 = uStack0000000000000018 & 0xff;
    uStack000000000000001c = uStack0000000000000018 >> 0x10;
    uStack0000000000000018 = uStack0000000000000018 >> 0x18;
    psVar13 = unaff_x19;
    sVar14 = unaff_w23;
    sVar15 = unaff_w24;
  } while( true );
}

