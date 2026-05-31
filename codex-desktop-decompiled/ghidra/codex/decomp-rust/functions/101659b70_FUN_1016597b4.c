
ulong FUN_1016597b4(long param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 unaff_x19;
  uint unaff_w20;
  short unaff_w21;
  ushort *unaff_x22;
  ushort *puVar10;
  ushort unaff_w23;
  uint unaff_w24;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  short unaff_w27;
  ushort *unaff_x28;
  ushort *puVar14;
  long unaff_x29;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  ushort *in_stack_00000030;
  ushort *in_stack_00000058;
  ushort uStack0000000000000070;
  short sStack0000000000000072;
  short sStack0000000000000074;
  ushort uStack0000000000000076;
  ushort uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined *in_stack_00000080;
  undefined7 uStack0000000000000088;
  char cStack000000000000008f;
  undefined *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined *in_stack_000000a8;
  long in_stack_000000b0;
  byte bStack00000000000000b8;
  byte bStack00000000000000b9;
  byte bStack00000000000000ba;
  byte bStack00000000000000bb;
  byte bStack00000000000000bc;
  byte bStack00000000000000bd;
  byte bStack00000000000000be;
  byte bStack00000000000000bf;
  undefined8 in_stack_000000c0;
  
code_r0x0001016597b4:
  iVar7 = __ZN4core3fmt5write17h64810b21425781ecE(param_1,param_2,s_____H_108ad79bb,param_4);
  uVar12 = *(ulong *)(unaff_x29 + -0x60);
  if (iVar7 != 0) {
    if (uVar12 != 0) {
LAB_101659dc4:
      in_stack_00000058 = unaff_x22;
      if (((unaff_w23 & 1) == 0) && (cStack000000000000008f == -0x28)) {
        __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                  (&stack0x00000078);
      }
LAB_101659e14:
      FUN_100e885e4(&stack0x00000050);
      return uVar12;
    }
    puVar9 = &UNK_108cd94f5;
    uVar11 = 0x19;
    in_stack_00000058 = unaff_x22;
LAB_101659ea8:
    *(undefined **)(unaff_x29 + -0xa8) = puVar9;
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
    in_stack_000000a0 = (undefined8 *)(unaff_x29 + -0xa8);
    in_stack_000000a8 = &DAT_100c7b3a0;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_<__>__write_ansi_incorrectly_err_108adbda9,&stack0x000000a0,&UNK_10b2525b0);
LAB_101659f20:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101659f24);
    (*pcVar8)();
  }
  if ((uVar12 & 3) == 1) {
    uVar11 = *(undefined8 *)(uVar12 - 1);
    puVar13 = *(undefined8 **)(uVar12 + 7);
    pcVar8 = (code *)*puVar13;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar11);
    }
    if (puVar13[1] != 0) {
      _free(uVar11);
    }
    _free((undefined8 *)(uVar12 - 1));
  }
  puVar14 = unaff_x28;
  if ((unaff_w23 & 1) != 0) goto LAB_1016596d0;
  do {
    in_stack_000000c0 = in_stack_00000098;
    in_stack_000000a0 = (undefined8 *)CONCAT62(uStack000000000000007a,uStack0000000000000078);
    in_stack_000000b0 = CONCAT17(cStack000000000000008f,uStack0000000000000088);
    in_stack_000000a8 = in_stack_00000080;
    _bStack00000000000000b8 = in_stack_00000090;
    uVar2 = (uint)((ulong)in_stack_00000098 >> 0x20) & 0xffff;
    if (uVar2 != unaff_w20) {
      uVar1 = unaff_w20 & (uVar2 ^ 0xffff);
      if ((uVar1 >> 6 & 1) == 0) {
LAB_101659824:
        if ((uVar1 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
          if ((uVar2 >> 1 & 1) != 0) {
            auVar15 = FUN_100f1aeac();
            uVar12 = auVar15._8_8_;
            if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
          }
        }
        if ((uVar1 >> 2 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar1 >> 3 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar1 >> 8 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar1 & 0x30) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        uVar2 = uVar2 & (unaff_w20 ^ 0xffff);
        if ((uVar2 >> 6 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 2 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 3 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 1 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 8 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 4 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        if ((uVar2 >> 5 & 1) != 0) {
          auVar15 = FUN_100f1aeac();
          uVar12 = auVar15._8_8_;
          if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659e04;
        }
        unaff_w20 = (uint)in_stack_000000c0._4_2_;
        goto LAB_1016599dc;
      }
      auVar15 = FUN_100f1aeac();
      uVar12 = auVar15._8_8_;
      if (((auVar15._0_8_ & 1) == 0) || (uVar12 == 0)) goto LAB_101659824;
LAB_101659e04:
      in_stack_00000058 = unaff_x22;
      if (in_stack_000000b0._7_1_ == -0x28) {
        __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                  (&stack0x000000a0);
      }
      goto LAB_101659e14;
    }
LAB_1016599dc:
    if (bStack00000000000000b8 != in_stack_00000028._4_4_) {
LAB_101659af0:
      uVar3 = (&UNK_108cdb73c)[(ulong)_bStack00000000000000b8 & 0xff];
      uVar4 = (&UNK_108cdb73c)[(ulong)_bStack00000000000000b8 >> 0x20 & 0xff];
      *(undefined8 *)(unaff_x29 + -0x78) = unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x70) = 0;
      *(byte *)(unaff_x29 + -0x84) = bStack00000000000000bb;
      *(short *)(unaff_x29 + -0x86) = (short)((ulong)_bStack00000000000000b8 >> 8);
      *(byte *)(unaff_x29 + -100) = bStack00000000000000bf;
      *(short *)(unaff_x29 + -0x66) = (short)((ulong)_bStack00000000000000b8 >> 0x28);
      *(undefined1 *)(unaff_x29 + -0x87) = uVar3;
      *(undefined1 *)(unaff_x29 + -0x88) = 0;
      *(undefined1 *)(unaff_x29 + -0x67) = uVar4;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
      *(undefined **)(unaff_x29 + -0xa0) =
           &
           __ZN80__LT_crossterm__style__types__colored__Colored_u20_as_u20_core__fmt__Display_GT_3fmt17hdcf24e4fc5a397bfE
      ;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x68;
      *(undefined **)(unaff_x29 + -0x90) =
           &
           __ZN80__LT_crossterm__style__types__colored__Colored_u20_as_u20_core__fmt__Display_GT_3fmt17hdcf24e4fc5a397bfE
      ;
      iVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                        (unaff_x29 + -0x78,&UNK_10b249eb8,s_____m_108ad7b78,unaff_x29 + -0xa8);
      uVar12 = *(ulong *)(unaff_x29 + -0x70);
      if (iVar7 == 0) {
        if ((uVar12 & 3) == 1) {
          uVar11 = *(undefined8 *)(uVar12 - 1);
          puVar13 = *(undefined8 **)(uVar12 + 7);
          pcVar8 = (code *)*puVar13;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar11);
          }
          if (puVar13[1] != 0) {
            _free(uVar11);
          }
          _free((undefined8 *)(uVar12 - 1));
        }
        uStack0000000000000010 = _bStack00000000000000b8 >> 8 & 0xff;
        in_stack_00000028._4_4_ = _bStack00000000000000b8 & 0xff;
        in_stack_00000008 = _bStack00000000000000b8 >> 0x10;
        in_stack_00000000._4_4_ = _bStack00000000000000b8 >> 0x18;
        unaff_w24 = _bStack00000000000000bc & 0xff;
        uStack000000000000001c = _bStack00000000000000bc >> 8 & 0xff;
        uStack0000000000000018 = _bStack00000000000000bc >> 0x10;
        uStack0000000000000014 = _bStack00000000000000bc >> 0x18;
        goto LAB_101659bc4;
      }
      if (uVar12 != 0) goto LAB_101659e04;
      puVar9 = &UNK_108cd94bd;
      uVar11 = 0x1b;
LAB_101659ef0:
      *(undefined **)(unaff_x29 + -0x68) = puVar9;
      *(undefined8 *)(unaff_x29 + -0x60) = uVar11;
      *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x68;
      *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
      in_stack_00000058 = unaff_x22;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_<__>__write_ansi_incorrectly_err_108adbda9,unaff_x29 + -0xa8,&UNK_10b2525b0);
      goto LAB_101659f20;
    }
    if (in_stack_00000028._4_4_ == 0x12) {
      if (bStack00000000000000b9 == uStack0000000000000010) goto LAB_101659a44;
      goto LAB_101659af0;
    }
    if ((in_stack_00000028._4_4_ == 0x11) &&
       (((bStack00000000000000b9 != uStack0000000000000010 ||
         ((uint)bStack00000000000000ba != (in_stack_00000008 & 0xff))) ||
        ((uint)bStack00000000000000bb != (in_stack_00000000._4_4_ & 0xff))))) goto LAB_101659af0;
LAB_101659a44:
    if (bStack00000000000000bc != unaff_w24) goto LAB_101659af0;
    if (unaff_w24 == 0x12) {
      if (bStack00000000000000bd != uStack000000000000001c) goto LAB_101659af0;
      unaff_w24 = 0x12;
    }
    else if (unaff_w24 == 0x11) {
      if (((bStack00000000000000bd != uStack000000000000001c) ||
          ((uint)bStack00000000000000be != (uStack0000000000000018 & 0xff))) ||
         ((uint)bStack00000000000000bf != (uStack0000000000000014 & 0xff))) goto LAB_101659af0;
      unaff_w24 = 0x11;
    }
LAB_101659bc4:
    uVar2 = (uint)(byte)(in_stack_000000b0._7_1_ + 0x40);
    if (0x17 < uVar2) {
      uVar2 = 0x18;
    }
    puVar9 = in_stack_000000a8;
    puVar13 = in_stack_000000a0;
    if (in_stack_000000b0._7_1_ < 0xd8) {
      puVar9 = (undefined *)(ulong)uVar2;
      puVar13 = &stack0x000000a0;
    }
    *(undefined8 **)(unaff_x29 + -0x88) = puVar13;
    *(undefined **)(unaff_x29 + -0x80) = puVar9;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    iVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                      (unaff_x29 + -0x78,&UNK_10b249eb8,s__108b1bd74,unaff_x29 + -0xa8);
    uVar12 = *(ulong *)(unaff_x29 + -0x70);
    if (iVar7 != 0) {
      if (uVar12 != 0) goto LAB_101659e04;
      puVar9 = &UNK_108cd94d8;
      uVar11 = 0x1d;
      goto LAB_101659ef0;
    }
    if ((uVar12 & 3) == 1) {
      uVar11 = *(undefined8 *)(uVar12 - 1);
      puVar13 = *(undefined8 **)(uVar12 + 7);
      pcVar8 = (code *)*puVar13;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar11);
      }
      if (puVar13[1] != 0) {
        _free(uVar11);
      }
      _free((undefined8 *)(uVar12 - 1));
    }
    else {
    }
    unaff_x28 = unaff_x22;
    if (in_stack_000000b0._7_1_ == -0x28) {
      __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                (&stack0x000000a0);
    }
    while( true ) {
      unaff_x22 = unaff_x28 + 0x18;
      puVar10 = in_stack_00000030;
      if ((puVar14 + 0x18 == in_stack_00000030) ||
         (unaff_w23 = *unaff_x28, puVar10 = unaff_x22, unaff_w23 == 2)) {
        in_stack_00000058 = puVar10;
        FUN_100e885e4(&stack0x00000050);
        *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x19;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        in_stack_000000a0 = (undefined8 *)((ulong)in_stack_000000a0 & 0xffffff0000000000);
        uStack0000000000000070 = (ushort)&stack0x000000a0;
        sStack0000000000000072 = (short)((ulong)&stack0x000000a0 >> 0x10);
        sStack0000000000000074 = (short)((ulong)&stack0x000000a0 >> 0x20);
        uStack0000000000000076 = (ushort)((ulong)&stack0x000000a0 >> 0x30);
        uStack0000000000000078 = 0x6d9c;
        uStack000000000000007a = 0x1055d;
        iVar7 = __ZN4core3fmt5write17h64810b21425781ecE
                          (unaff_x29 + -0xa8,&UNK_10b249eb8,s___m_108ad7b71,&stack0x00000070);
        uVar12 = *(ulong *)(unaff_x29 + -0xa0);
        if (iVar7 != 0) {
          if (uVar12 != 0) {
            return uVar12;
          }
          in_stack_000000a0 = (undefined8 *)&UNK_108cd954c;
          in_stack_000000a8 = (undefined *)0x24;
          uStack0000000000000070 = (ushort)&stack0x000000a0;
          sStack0000000000000072 = (short)((ulong)&stack0x000000a0 >> 0x10);
          sStack0000000000000074 = (short)((ulong)&stack0x000000a0 >> 0x20);
          uStack0000000000000076 = (ushort)((ulong)&stack0x000000a0 >> 0x30);
          uStack0000000000000078 = 0xb3a0;
          uStack000000000000007a = 0x100c7;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_<__>__write_ansi_incorrectly_err_108adbda9,&stack0x00000070,&UNK_10b2525b0);
        }
        if ((uVar12 & 3) == 1) {
          uVar11 = *(undefined8 *)(uVar12 - 1);
          puVar13 = *(undefined8 **)(uVar12 + 7);
          pcVar8 = (code *)*puVar13;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(uVar11);
          }
          if (puVar13[1] != 0) {
            _free(uVar11);
          }
          _free((undefined8 *)(uVar12 - 1));
          auVar15 = FUN_100f1aae4();
        }
        else {
          auVar15 = FUN_100f1aae4();
        }
        if ((auVar15._0_8_ & 1) != 0) {
          return auVar15._8_8_;
        }
        auVar15 = FUN_100f1aeac(auVar15._8_8_,0);
        if ((auVar15._0_8_ & 1) != 0) {
          return auVar15._8_8_;
        }
        return 0;
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 1);
      in_stack_00000020[1] = *(undefined8 *)(unaff_x28 + 5);
      *in_stack_00000020 = uVar11;
      uVar11 = *(undefined8 *)(unaff_x28 + 9);
      in_stack_00000020[3] = *(undefined8 *)(unaff_x28 + 0xd);
      in_stack_00000020[2] = uVar11;
      uVar11 = *(undefined8 *)(unaff_x28 + 0x10);
      *(undefined8 *)((long)in_stack_00000020 + 0x26) = *(undefined8 *)(unaff_x28 + 0x14);
      *(undefined8 *)((long)in_stack_00000020 + 0x1e) = uVar11;
      uStack0000000000000070 = unaff_w23;
      if ((sStack0000000000000072 != (short)(unaff_w21 + 1)) ||
         (sStack0000000000000074 != unaff_w27)) {
        *(undefined8 *)(unaff_x29 + -0x68) = unaff_x19;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(short *)(unaff_x29 + -0x78) = sStack0000000000000074 + 1;
        *(short *)(unaff_x29 + -0xa8) = sStack0000000000000072 + 1;
        in_stack_000000a0 = (undefined8 *)(unaff_x29 + -0x78);
        in_stack_000000b0 = unaff_x29 + -0xa8;
        in_stack_000000a8 =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        _bStack00000000000000b8 =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        param_1 = unaff_x29 + -0x68;
        param_4 = &stack0x000000a0;
        param_2 = &UNK_10b249eb8;
        unaff_w21 = sStack0000000000000072;
        unaff_w27 = sStack0000000000000074;
        goto code_r0x0001016597b4;
      }
      puVar14 = unaff_x28;
      unaff_w21 = sStack0000000000000072;
      unaff_w27 = sStack0000000000000074;
      if ((unaff_w23 & 1) == 0) break;
LAB_1016596d0:
      uVar6 = uStack0000000000000078;
      uVar5 = uStack0000000000000076;
      auVar15 = FUN_100f1aeac();
      uVar12 = auVar15._8_8_;
      if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659dc4;
      auVar15 = FUN_100f1aae4();
      uVar12 = auVar15._8_8_;
      if (((auVar15._0_8_ & 1) != 0) && (uVar12 != 0)) goto LAB_101659dc4;
      *(undefined8 *)(unaff_x29 + -0x68) = unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x60) = 0;
      iVar7 = FUN_1015051fc(unaff_x29 + -0x68,&UNK_108cd2066,3);
      uVar12 = *(ulong *)(unaff_x29 + -0x60);
      if (iVar7 != 0) {
        if (uVar12 != 0) goto LAB_101659dc4;
        puVar9 = &UNK_108cd950e;
        uVar11 = 0x1a;
        in_stack_00000058 = unaff_x22;
        goto LAB_101659ea8;
      }
      if ((uVar12 & 3) == 1) {
        uVar11 = *(undefined8 *)(uVar12 - 1);
        puVar13 = *(undefined8 **)(uVar12 + 7);
        pcVar8 = (code *)*puVar13;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar11);
        }
        if (puVar13[1] != 0) {
          _free(uVar11);
        }
        _free((undefined8 *)(uVar12 - 1));
      }
      uStack000000000000001c = (uint)(uVar5 >> 8);
      unaff_w24 = uVar5 & 0xff;
      uStack0000000000000014 = (uint)(uVar6 >> 8);
      uStack0000000000000018 = (uint)uVar6;
      unaff_w20 = 0;
      unaff_x28 = unaff_x22;
    }
  } while( true );
}

