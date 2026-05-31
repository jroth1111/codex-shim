
/* WARNING: Removing unreachable block (ram,0x0001006e9900) */
/* WARNING: Removing unreachable block (ram,0x0001006e9604) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1006ea26c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  int iVar22;
  long lVar23;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  long *plVar24;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x28;
  undefined1 auVar25 [16];
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000048;
  uint *in_stack_00000050;
  undefined1 *in_stack_00000058;
  undefined4 *in_stack_00000060;
  long in_stack_000000c0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  int iStack0000000000000100;
  uint uStack0000000000000108;
  undefined4 uStack0000000000000110;
  code *in_stack_00000118;
  undefined *in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined *in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined *in_stack_00000140;
  undefined *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 *in_stack_00000158;
  undefined *in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000710;
  byte in_stack_00000719;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000748,s_mismatched_types__Rust_type_______108adc36c,&stack0x00000100);
  puVar17 = (undefined8 *)_malloc(0x18);
  if (puVar17 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_1006ea620;
  }
  *puVar17 = in_stack_00000748;
  puVar17[1] = in_stack_00000750;
  puVar17[2] = in_stack_00000758;
  if ((in_stack_00000719 != 2) && ((in_stack_00000719 & 1) != 0)) {
    func_0x000106ca2f3c(in_stack_00000710);
  }
  if (unaff_x21 == -0x7fffffffffffffec) {
    unaff_x21 = -0x7fffffffffffffec;
  }
  FUN_100ded7a4(&stack0x00000770);
  *in_stack_00000058 = 1;
  if (unaff_x21 == -0x7fffffffffffffeb) {
    *(undefined1 *)(unaff_x19 + 0x238) = 3;
    *(undefined1 *)(unaff_x19 + 0x240) = 3;
    uVar18 = 8;
LAB_1006e9a04:
    *(undefined1 *)(unaff_x19 + 0x168) = uVar18;
    uVar16 = 2;
    goto LAB_1006ea180;
  }
  if (unaff_x21 == -0x7fffffffffffffec) {
    unaff_x21 = -0x7ffffffffffffffa;
    _iStack0000000000000100 = (undefined *)0x8000000000000006;
    if (unaff_x24 != 2) {
      FUN_100de5844(&stack0x00000100);
      unaff_x21 = -0x7fffffffffffffec;
    }
  }
  *in_stack_00000048 = 1;
  if ((*in_stack_00000050 & 1) != 0) {
    in_stack_00000050[0] = 1;
    in_stack_00000050[1] = 0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b2092f0);
    goto LAB_1006ea620;
  }
  if (*(char *)(unaff_x23 + 0x88) == '\0') {
LAB_1006e91ec:
    FUN_100d99140(unaff_x23);
  }
  else if (*(char *)(unaff_x23 + 0x88) == '\x03') {
    if (*(char *)(unaff_x23 + 0x80) == '\x03') {
      uVar16 = *(undefined8 *)(unaff_x23 + 0x70);
      puVar10 = *(undefined8 **)(unaff_x23 + 0x78);
      pcVar21 = (code *)*puVar10;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar16);
      }
      if (puVar10[1] != 0) {
        _free(uVar16);
      }
    }
    else if (*(char *)(unaff_x23 + 0x80) == '\0') {
      unaff_x23 = unaff_x23 + 0x38;
      goto LAB_1006e91ec;
    }
  }
  in_stack_00000050[0] = 1;
  in_stack_00000050[1] = 0;
  if (unaff_x21 != -0x7fffffffffffffec) {
    unaff_x28[1] = (long)&UNK_10b209118;
    *unaff_x28 = (long)puVar17;
  }
  *(undefined1 *)(unaff_x19 + 0x240) = 1;
  in_stack_000000c0 = unaff_x21;
  if (unaff_x21 != -0x7fffffffffffffec) {
    unaff_x25 = thunk_FUN_108858e50(&stack0x000000c0);
    unaff_x24 = 2;
  }
  *(long *)(unaff_x19 + 0x200) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0x208) = unaff_x25;
  *(undefined1 *)(unaff_x19 + 0x16d) = 1;
  lVar11 = *(long *)(unaff_x19 + 0x70);
  lVar20 = *(long *)(unaff_x19 + 0x78);
  func_0x000106032954(8);
  func_0x000106032878(&stack0x00000100,&stack0x000007b0,&stack0x00000770);
  uVar2 = 0;
  if (iStack0000000000000100 == 0) {
    uVar2 = uStack0000000000000110;
  }
  puVar17 = (undefined8 *)0x0;
  if (iStack0000000000000100 == 0) {
    puVar17 = _uStack0000000000000108;
  }
  if (*(long *)(unaff_x19 + 0x200) == 2) {
    _in_stack_00000170 =
         __ZN11codex_state9telemetry14classify_error17h6718b73e1ad1ec28E(unaff_x19 + 0x208);
    _uStack0000000000000110 = &UNK_108ca35f5;
    in_stack_00000118 = (code *)0x6;
  }
  else {
    _uStack0000000000000110 = &UNK_108caa470;
    in_stack_00000118 = (code *)0x7;
    in_stack_00000178 = 4;
    in_stack_00000170 = &UNK_108cde35c;
  }
  _iStack0000000000000100 = &UNK_108ca105e;
  _uStack0000000000000108 = (undefined8 *)0x6;
  in_stack_00000120 = &UNK_108caa477;
  in_stack_00000128 = 5;
  in_stack_00000130 = &UNK_108ca8221;
  in_stack_00000138 = 0xf;
  in_stack_00000140 = &UNK_108caa486;
  in_stack_00000148 = (undefined *)0x2;
  in_stack_00000150 = (long *)&UNK_108caa47c;
  in_stack_00000158 = (undefined8 *)0x5;
  in_stack_00000160 = &UNK_108ca33da;
  in_stack_00000168 = 5;
  lVar19 = lVar11;
  lVar23 = lVar20;
  if ((lVar11 == 0) &&
     ((lRam000000010b6302b0 != 0 ||
      (lVar19 = lRam000000010b6302a0 +
                (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
      lVar23 = lRam000000010b6302a8, lVar19 == 0)))) {
LAB_1006e9380:
    if ((lRam000000010b6302b0 == 0) &&
       (lVar11 = lRam000000010b6302a0 +
                 (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
       lVar20 = lRam000000010b6302a8, lVar11 != 0)) goto LAB_1006e93b4;
  }
  else {
    (**(code **)(lVar23 + 0x18))(lVar19,&UNK_108caa488,0x17,1,&stack0x00000100,4);
    if (lVar11 == 0) goto LAB_1006e9380;
LAB_1006e93b4:
    (**(code **)(lVar20 + 0x20))(lVar11,&UNK_108caa49f,0x1d,puVar17,uVar2,&stack0x00000100,4);
  }
  *(undefined1 *)(unaff_x19 + 0x16d) = 0;
  unaff_x22 = *(undefined8 *)(unaff_x19 + 0x208);
  if (*(ulong *)(unaff_x19 + 0x200) == 2) {
    *(undefined1 *)(unaff_x19 + 0x16e) = 0;
    lVar11 = **(long **)(unaff_x19 + 0x138);
    **(long **)(unaff_x19 + 0x138) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x138);
    }
    lVar11 = **(long **)(unaff_x19 + 0x130);
    **(long **)(unaff_x19 + 0x130) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x130);
    }
    *(undefined1 *)(unaff_x19 + 0x169) = 0;
    lVar11 = **(long **)(unaff_x19 + 0x128);
    **(long **)(unaff_x19 + 0x128) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x128);
    }
    *(undefined1 *)(unaff_x19 + 0x16a) = 0;
    if (*(long *)(unaff_x19 + 0x110) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x118));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    if (*(long *)(unaff_x19 + 0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    FUN_100e0a9d0(unaff_x19 + 0xc0);
    FUN_100e0a9d0(unaff_x19 + 0xa0);
    FUN_100e0a9d0(unaff_x19 + 0x80);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x60));
    }
    *(undefined1 *)(unaff_x19 + 0x16b) = 0;
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x48));
    }
    uVar16 = 1;
  }
  else {
    if ((*(ulong *)(unaff_x19 + 0x200) & 1) == 0) {
      unaff_x22 = 0;
    }
    plVar24 = *(long **)(unaff_x19 + 0x138);
    lVar11 = *plVar24;
    *plVar24 = lVar11 + 1;
    if (lVar11 < 0) {
LAB_1006ea620:
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1006ea624);
      (*pcVar21)();
    }
    puVar4 = *(undefined **)(unaff_x19 + 0x128);
    puVar8 = *(undefined **)(unaff_x19 + 0x130);
    puVar5 = *(undefined **)(unaff_x19 + 0x40);
    pcVar21 = *(code **)(unaff_x19 + 0x48);
    *in_stack_00000060 = 0;
    puVar6 = *(undefined **)(unaff_x19 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
    puVar7 = *(undefined **)(unaff_x19 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x68);
    _iStack0000000000000100 = puVar8;
    puVar17 = (undefined8 *)_malloc(0x18);
    if (puVar17 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1006ea620;
    }
    puVar17[1] = 1;
    *puVar17 = 1;
    puVar17[2] = unaff_x22;
    _uStack0000000000000108 = (undefined8 *)0x1;
    _iStack0000000000000100 = (undefined *)0x1;
    _uStack0000000000000110 = puVar5;
    in_stack_00000118 = pcVar21;
    in_stack_00000120 = puVar6;
    in_stack_00000128 = uVar16;
    in_stack_00000130 = puVar7;
    in_stack_00000138 = uVar9;
    in_stack_00000140 = puVar4;
    in_stack_00000148 = puVar8;
    in_stack_00000150 = plVar24;
    in_stack_00000158 = puVar17;
    puVar17 = (undefined8 *)_malloc(0x60);
    if (puVar17 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x60);
      goto LAB_1006ea620;
    }
    puVar17[5] = in_stack_00000128;
    puVar17[4] = in_stack_00000120;
    puVar17[7] = in_stack_00000138;
    puVar17[6] = in_stack_00000130;
    puVar17[9] = in_stack_00000148;
    puVar17[8] = in_stack_00000140;
    puVar17[0xb] = in_stack_00000158;
    puVar17[10] = in_stack_00000150;
    puVar17[1] = _uStack0000000000000108;
    *puVar17 = _iStack0000000000000100;
    puVar17[3] = in_stack_00000118;
    puVar17[2] = _uStack0000000000000110;
    *(undefined8 **)(unaff_x19 + 0x170) = puVar17;
    *(undefined8 **)(unaff_x19 + 0x178) = puVar17 + 2;
    puVar1 = (undefined1 *)(unaff_x19 + 0x194);
    *(undefined1 *)(unaff_x19 + 0x194) = 0;
    *(undefined8 **)(unaff_x19 + 0x180) = puVar17 + 2;
    __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(&stack0x00000100);
    uVar15 = (ulong)_iStack0000000000000100 >> 0x20;
    uVar3 = uStack0000000000000108 + 0x88ca6c00;
    lVar11 = uVar15 - 0xd2efe;
    if (uStack0000000000000108 + 0xc4653600 < 1000000000) {
      uVar3 = uStack0000000000000108 + 0xc4653600;
      lVar11 = uVar15 - 0xd2eff;
    }
    lVar20 = uVar15 - 0xd2f01;
    if (((ulong)_uStack0000000000000108 & 0x80000000) == 0) {
      lVar20 = uVar15 - 0xd2f00;
      uVar13 = uStack0000000000000108;
    }
    else {
      uVar13 = uStack0000000000000108 + 1000000000;
    }
    if ((int)uStack0000000000000108 < 1000000000) {
      uVar3 = uVar13;
    }
    if ((int)uStack0000000000000108 < 1000000000) {
      lVar11 = lVar20;
    }
    uVar15 = (lVar11 % 0x15180 >> 0x3f & 0x15180U) + lVar11 % 0x15180;
    auVar25 = SEXT816((long)(lVar11 - uVar15)) * SEXT816(0x1845c8a0ce512957);
    uVar13 = func_0x00010039c924((ulong)_iStack0000000000000100 & 0xffffffff,
                                 (int)(auVar25._8_8_ >> 0xd) - (auVar25._12_4_ >> 0x1f));
    if (uVar13 == 0) {
      puVar17 = (undefined8 *)0x0;
      *puVar1 = 1;
    }
    else {
      *(uint *)(unaff_x19 + 0x188) = uVar13;
      *(ulong *)((long)in_stack_00000060 + 0x23) = uVar15 & 0xffffffff | (ulong)uVar3 << 0x20;
      lVar11 = *(long *)(unaff_x19 + 0x180);
      iVar14 = (int)uVar13 >> 0xd;
      iVar22 = iVar14 + -1;
      if (iVar14 < 1) {
        iVar14 = (1U - iVar14) / 400 + 1;
        iVar22 = iVar22 + iVar14 * 400;
        iVar14 = iVar14 * -0x23ab1;
      }
      else {
        iVar14 = 0;
      }
      lVar20 = (uVar15 & 0xffffffff) +
               (long)(int)((((uVar13 >> 4 & 0x1ff) + iVar14) - iVar22 / 100) + (iVar22 * 0x5b5 >> 2)
                           + (iVar22 / 100 >> 2) + -0xaf93b) * 0x15180;
      *(long *)(unaff_x19 + 0x198) = lVar11;
      *(long *)(unaff_x19 + 0x1a0) = lVar20;
      *(undefined1 *)(unaff_x19 + 0x1f8) = 0;
      in_stack_00000120 = (undefined *)0x1d;
      _iStack0000000000000100 = (undefined *)0x0;
      _uStack0000000000000108 = (undefined8 *)0x8;
      _uStack0000000000000110 = (undefined *)0x0;
      in_stack_00000118 = (code *)&UNK_108ca863d;
      in_stack_00000128 = CONCAT71(in_stack_00000128._1_7_,1);
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27a018161374f7b2E(&stack0x00000100);
      _uStack0000000000000108[3] = in_stack_000007f8;
      _uStack0000000000000108[2] = in_stack_000007f0;
      _uStack0000000000000108[1] = lVar20;
      *_uStack0000000000000108 = CONCAT44((int)((ulong)in_stack_000007e0 >> 0x20),5);
      _uStack0000000000000110 = (undefined *)0x1;
      lVar11 = *(long *)(lVar11 + 0x38);
      *(undefined8 **)(unaff_x19 + 0x1b0) = _uStack0000000000000108;
      *(undefined **)(unaff_x19 + 0x1a8) = _iStack0000000000000100;
      *(code **)(unaff_x19 + 0x1c0) = in_stack_00000118;
      *(undefined8 *)(unaff_x19 + 0x1b8) = 1;
      *(undefined8 *)(unaff_x19 + 0x1d0) = in_stack_00000128;
      *(undefined **)(unaff_x19 + 0x1c8) = in_stack_00000120;
      *(long *)(unaff_x19 + 0x1d8) = lVar11 + 0x10;
      *(undefined1 *)(unaff_x19 + 0x1f0) = 0;
      FUN_1016f9b88(&stack0x00000100,unaff_x19 + 0x1a8,in_stack_00000038);
      puVar4 = _iStack0000000000000100;
      unaff_x22 = 0x8000000000000014;
      if (_iStack0000000000000100 == (undefined *)0x8000000000000015) {
        *(undefined1 *)(unaff_x19 + 0x1f8) = 3;
        *puVar1 = 3;
LAB_1006e9a00:
        uVar18 = 9;
        goto LAB_1006e9a04;
      }
      if (*(char *)(unaff_x19 + 0x1f0) == '\x03') {
        uVar16 = *(undefined8 *)(unaff_x19 + 0x1e0);
        puVar17 = *(undefined8 **)(unaff_x19 + 0x1e8);
        pcVar21 = (code *)*puVar17;
        if (pcVar21 != (code *)0x0) {
          (*pcVar21)(uVar16);
        }
        if (puVar17[1] != 0) {
          _free(uVar16);
        }
      }
      else if (*(char *)(unaff_x19 + 0x1f0) == '\0') {
        FUN_100d99140(unaff_x19 + 0x1a8);
      }
      if (puVar4 == (undefined *)0x8000000000000014) {
        *(undefined1 *)(unaff_x19 + 0x1f8) = 1;
        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x180) + 0x38);
        *(undefined8 *)(unaff_x19 + 0x198) = 0;
        *(undefined8 *)(unaff_x19 + 0x1a0) = 8;
        *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
        *(undefined **)(unaff_x19 + 0x1b0) = &UNK_108ca865a;
        *(undefined8 *)(unaff_x19 + 0x1b8) = 0x1e;
        *(undefined1 *)(unaff_x19 + 0x1c0) = 1;
        *(long *)(unaff_x19 + 0x1c8) = lVar11 + 0x10;
        *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
        FUN_1016f9b88(&stack0x00000100,unaff_x19 + 0x198,in_stack_00000038);
        puVar4 = _iStack0000000000000100;
        if (_iStack0000000000000100 == (undefined *)0x8000000000000015) {
          *puVar1 = 4;
          goto LAB_1006e9a00;
        }
        if (*(char *)(unaff_x19 + 0x1e0) == '\x03') {
          uVar16 = *(undefined8 *)(unaff_x19 + 0x1d0);
          puVar17 = *(undefined8 **)(unaff_x19 + 0x1d8);
          pcVar21 = (code *)*puVar17;
          if (pcVar21 != (code *)0x0) {
            (*pcVar21)(uVar16);
          }
          if (puVar17[1] != 0) {
            _free(uVar16);
          }
        }
        else if (*(char *)(unaff_x19 + 0x1e0) == '\0') {
          FUN_100d99140(unaff_x19 + 0x198);
        }
        if (puVar4 == (undefined *)0x8000000000000014) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          puVar17 = (undefined8 *)thunk_FUN_108858e50(&stack0x00000748);
        }
      }
      else {
        puVar17 = (undefined8 *)thunk_FUN_108858e50(&stack0x000007b0);
        *(undefined1 *)(unaff_x19 + 0x1f8) = 1;
      }
      *puVar1 = 1;
    }
    FUN_100d61f80(unaff_x19 + 0x178);
    if (puVar17 != (undefined8 *)0x0) {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
        if (1 < bRam000000010b630268 - 1) {
          if (bRam000000010b630268 != 0) {
            cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN11codex_state7runtime12StateRuntime10init_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h95a41cd7e1fffb09E
                               );
            if (cVar12 != '\0') goto LAB_1006e9784;
          }
          goto LAB_1006e9a4c;
        }
LAB_1006e9784:
        uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN11codex_state7runtime12StateRuntime10init_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h95a41cd7e1fffb09E
                           );
        if ((uVar15 & 1) == 0) goto LAB_1006e9a4c;
        _iStack0000000000000100 = &stack0x000007b0;
        _uStack0000000000000108 =
             (undefined8 *)
             &
             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        _uStack0000000000000110 = &stack0x00000730;
        in_stack_00000118 =
             __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        FUN_1006eb28c(&stack0x00000770);
      }
      else {
LAB_1006e9a4c:
        lVar11 = 
        ___ZN11codex_state7runtime12StateRuntime10init_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h95a41cd7e1fffb09E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000000f0 =
               *(undefined8 *)
                (
                ___ZN11codex_state7runtime12StateRuntime10init_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h95a41cd7e1fffb09E
                + 0x20);
          in_stack_000000f8 =
               *(undefined8 *)
                (
                ___ZN11codex_state7runtime12StateRuntime10init_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h95a41cd7e1fffb09E
                + 0x28);
          in_stack_000000e8 = 2;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar14 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x000000e8);
          if (iVar14 != 0) {
            _iStack0000000000000100 = &stack0x00000748;
            _uStack0000000000000108 =
                 (undefined8 *)
                 &
                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            _uStack0000000000000110 = &stack0x00000730;
            in_stack_00000118 =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar11,puVar5,puVar4,&stack0x000007b0,&stack0x00000770);
          }
        }
      }
      (**(code **)*puVar17)();
    }
    unaff_x22 = *(undefined8 *)(unaff_x19 + 0x170);
    *(undefined2 *)(unaff_x19 + 0x16d) = 0;
    lVar11 = **(long **)(unaff_x19 + 0x138);
    **(long **)(unaff_x19 + 0x138) = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x138);
    }
    *(undefined2 *)(unaff_x19 + 0x169) = 0;
    if (*(long *)(unaff_x19 + 0x110) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x118));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    if (*(long *)(unaff_x19 + 0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    FUN_100e0a9d0(unaff_x19 + 0xc0);
    FUN_100e0a9d0(unaff_x19 + 0xa0);
    FUN_100e0a9d0(unaff_x19 + 0x80);
    uVar16 = 0;
    *(undefined1 *)(unaff_x19 + 0x16b) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x16c) = 0;
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
LAB_1006ea180:
  auVar25._8_8_ = unaff_x22;
  auVar25._0_8_ = uVar16;
  return auVar25;
}

