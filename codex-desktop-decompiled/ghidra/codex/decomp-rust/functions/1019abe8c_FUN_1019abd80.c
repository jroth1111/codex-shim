
void FUN_1019abd80(ulong *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  uint3 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  undefined4 extraout_w12_01;
  undefined4 extraout_w12_02;
  undefined4 extraout_w12_03;
  ulong extraout_x12;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong unaff_x24;
  ulong unaff_x25;
  long lVar27;
  uint uVar28;
  long unaff_x26;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long unaff_x27;
  ulong uVar33;
  undefined1 uVar34;
  ulong unaff_x28;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  long lStack_750;
  long lStack_738;
  ulong uStack_728;
  ulong uStack_718;
  ulong uStack_710;
  undefined8 *puStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  ulong uStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  ulong uStack_678;
  long lStack_670;
  undefined1 uStack_668;
  undefined1 uStack_667;
  undefined2 uStack_666;
  undefined4 uStack_664;
  undefined8 auStack_660 [3];
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e8;
  undefined3 uStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_518;
  ulong uStack_510;
  long lStack_508;
  undefined1 auStack_500 [624];
  long lStack_218;
  ulong uStack_200;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_78;
  ulong uStack_70;
  
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_70 = 8;
LAB_1019abe2c:
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[2] = param_3;
    return;
  }
  lVar23 = param_3 * 0x18;
  uVar29 = param_3;
  uStack_70 = _malloc(lVar23);
  if (uStack_70 != 0) {
    uVar29 = 0;
    plVar18 = (long *)(uStack_70 + 0x10);
    uStack_78 = param_3;
    do {
      if (lVar23 == 0) break;
      uVar8 = *(undefined8 *)(param_2 + 8);
      lVar17 = *(long *)(param_2 + 0x10);
      if (lVar17 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar17);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar17);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1019abe68);
          (*pcVar6)();
        }
      }
      _memcpy(lVar7,uVar8,lVar17);
      uVar29 = uVar29 + 1;
      param_2 = param_2 + 0x18;
      plVar18[-2] = lVar17;
      plVar18[-1] = lVar7;
      *plVar18 = lVar17;
      lVar23 = lVar23 + -0x18;
      plVar18 = plVar18 + 3;
    } while (param_3 != uVar29);
    goto LAB_1019abe2c;
  }
  uVar8 = func_0x0001087c9084(8,lVar23);
  FUN_101932010(&uStack_78);
  auVar38 = __Unwind_Resume(uVar8);
  uVar13 = auVar38._8_8_;
  puVar9 = auVar38._0_8_;
  if (uVar29 == 0) {
    uStack_f8 = 0;
    uStack_f0 = 8;
LAB_1019abf38:
    puVar9[1] = uStack_f0;
    *puVar9 = uStack_f8;
    puVar9[2] = uVar29;
    return;
  }
  lVar23 = uVar29 * 0x18;
  uVar30 = uVar29;
  uStack_f0 = _malloc(lVar23);
  if (uStack_f0 != 0) {
    uVar30 = 0;
    plVar18 = (long *)(uStack_f0 + 0x10);
    uStack_f8 = uVar29;
    do {
      if (lVar23 == 0) break;
      uVar8 = *(undefined8 *)(uVar13 + 8);
      lVar17 = *(long *)(uVar13 + 0x10);
      if (lVar17 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar17);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar17);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1019abf74);
          (*pcVar6)();
        }
      }
      _memcpy(lVar7,uVar8,lVar17);
      uVar30 = uVar30 + 1;
      uVar13 = uVar13 + 0x18;
      plVar18[-2] = lVar17;
      plVar18[-1] = lVar7;
      *plVar18 = lVar17;
      lVar23 = lVar23 + -0x18;
      plVar18 = plVar18 + 3;
    } while (uVar29 != uVar30);
    goto LAB_1019abf38;
  }
  uVar8 = func_0x0001087c9084(8,lVar23);
  FUN_10195a18c(&uStack_f8);
  auVar38 = __Unwind_Resume(uVar8);
  lVar23 = auVar38._8_8_;
  puVar9 = auVar38._0_8_;
  if (uVar30 == 0) {
    uStack_1b8 = 0;
    uStack_1b0 = 8;
LAB_1019ac260:
    puVar9[1] = uStack_1b0;
    *puVar9 = uStack_1b8;
    puVar9[2] = uVar30;
    return;
  }
  uVar29 = uVar30 * 0x30;
  uVar21 = uVar30;
  uVar10 = _malloc(uVar29);
  if (uVar10 != 0) {
    uVar21 = 0;
    lVar17 = lVar23 + uVar30 * 0x30;
    uVar20 = extraout_x12;
    uVar31 = uVar30;
    uStack_1b8 = uVar30;
    uStack_1b0 = uVar10;
    do {
      if (lVar23 == lVar17) break;
      uVar24 = 0x8000000000000000;
      if (*(long *)(lVar23 + 0x18) != -0x8000000000000000) {
        uVar8 = *(undefined8 *)(lVar23 + 0x20);
        uVar24 = *(ulong *)(lVar23 + 0x28);
        if (uVar24 == 0) {
          lStack_218 = 1;
        }
        else {
          lStack_218 = _malloc(uVar24);
          if (lStack_218 == 0) {
            func_0x0001087c9084(1,uVar24);
            goto LAB_1019ac2dc;
          }
        }
        _memcpy(lStack_218,uVar8,uVar24);
      }
      lVar7 = *(long *)(lVar23 + 0x10);
      if (lVar7 == 0) {
        lStack_180 = 0;
        lStack_178 = 8;
      }
      else {
        lVar19 = *(long *)(lVar23 + 8);
        lVar11 = _malloc();
        if (lVar11 == 0) {
          func_0x0001087c9084(8,lVar7 * 0x60);
LAB_1019ac2dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1019ac2e0);
          (*pcVar6)();
        }
        lVar26 = 0;
        lVar27 = 0;
        uVar12 = uVar21;
        uVar25 = uVar24;
        uVar32 = uVar31;
        lStack_180 = lVar7;
        lStack_178 = lVar11;
        do {
          if (lVar7 * 0x60 == lVar26) break;
          uVar33 = *(ulong *)(lVar19 + lVar26);
          lVar2 = 0;
          if (uVar33 != 0) {
            lVar2 = uVar33 - 1;
          }
          if (lVar2 == 0) {
            uVar12 = lVar19 + lVar26;
            uVar8 = *(undefined8 *)(uVar12 + 0x18);
            uVar20 = *(ulong *)(uVar12 + 0x20);
            if (uVar20 == 0) {
              uStack_1c0 = 1;
            }
            else {
              uStack_1c0 = _malloc(uVar20);
              if (uStack_1c0 == 0) {
                func_0x0001087c9084(1,uVar20);
                goto LAB_1019ac2dc;
              }
            }
            _memcpy(uStack_1c0,uVar8,uVar20);
            uVar25 = 0x8000000000000000;
            uVar32 = 0x8000000000000000;
            if (*(long *)(uVar12 + 0x28) != -0x8000000000000000) {
              uVar8 = *(undefined8 *)(lVar19 + lVar26 + 0x30);
              uVar32 = *(ulong *)(lVar19 + lVar26 + 0x38);
              if (uVar32 == 0) {
                uVar12 = 1;
              }
              else {
                uVar12 = _malloc(uVar32);
                if (uVar12 == 0) {
                  func_0x0001087c9084(1,uVar32);
                  goto LAB_1019ac2dc;
                }
              }
              _memcpy(uVar12,uVar8,uVar32);
            }
            lVar2 = lVar19 + lVar26;
            unaff_x28 = *(ulong *)(lVar2 + 8);
            uVar33 = uVar33 & 1;
            unaff_x24 = (ulong)*(byte *)(lVar2 + 0x58);
            if (*(long *)(lVar2 + 0x40) != -0x8000000000000000) {
              uVar8 = *(undefined8 *)(lVar2 + 0x48);
              uVar29 = *(ulong *)(lVar2 + 0x50);
              if (uVar29 == 0) {
                uVar13 = 1;
              }
              else {
                uVar13 = _malloc();
                if (uVar13 == 0) {
                  func_0x0001087c9084(1,uVar29);
                  goto LAB_1019ac2dc;
                }
              }
              _memcpy(uVar13,uVar8,uVar29);
              uVar25 = uVar29;
            }
          }
          else {
            uVar33 = 2;
            if (lVar2 != 1) {
              uVar33 = 3;
            }
          }
          lVar27 = lVar27 + 1;
          puVar1 = (ulong *)(lVar11 + lVar26);
          *puVar1 = uVar33;
          puVar1[1] = unaff_x28;
          puVar1[2] = uVar20;
          puVar1[3] = uStack_1c0;
          puVar1[4] = uVar20;
          puVar1[5] = uVar32;
          puVar1[6] = uVar12;
          puVar1[7] = uVar32;
          puVar1[8] = uVar25;
          puVar1[9] = uVar13;
          puVar1[10] = uVar29;
          lVar26 = lVar26 + 0x60;
          *(char *)(puVar1 + 0xb) = (char)unaff_x24;
        } while (lVar7 != lVar27);
      }
      lVar23 = lVar23 + 0x30;
      plVar18 = (long *)(uVar10 + uVar21 * 0x30);
      uVar21 = uVar21 + 1;
      lStack_198 = lStack_178;
      lStack_1a0 = lStack_180;
      plVar18[1] = lStack_178;
      *plVar18 = lStack_180;
      plVar18[2] = lVar7;
      plVar18[3] = uVar24;
      plVar18[4] = lStack_218;
      plVar18[5] = uVar24;
      uVar31 = uVar31 - 1;
      unaff_x24 = uVar10;
      lStack_190 = lVar7;
      lStack_170 = lVar7;
    } while (uVar31 != 0);
    goto LAB_1019ac260;
  }
  uVar8 = func_0x0001087c9084(8,uVar29);
  FUN_101964870(&uStack_1b8);
  uVar8 = __Unwind_Resume(uVar8);
  if ((uStack_200 & 0x7fffffffffffffff) != 0) {
    _free(lStack_218);
  }
  FUN_101964870(&uStack_1b8);
  auVar38 = __Unwind_Resume(uVar8);
  lVar23 = auVar38._8_8_;
  puVar9 = auVar38._0_8_;
  if (uVar21 == 0) {
    uStack_518 = 0;
    uStack_510 = 8;
LAB_1019ac414:
    puVar9[1] = uStack_510;
    *puVar9 = uStack_518;
    puVar9[2] = uVar21;
    return;
  }
  lVar17 = uVar21 * 0x270;
  uVar29 = _malloc(lVar17);
  if (uVar29 != 0) {
    uVar13 = 0;
    lVar17 = uVar21 * 0x270;
    uStack_518 = uVar21;
    uStack_510 = uVar29;
    do {
      if (lVar17 == 0) break;
      FUN_101aa8a88(auStack_500,lVar23);
      uVar13 = uVar13 + 1;
      lVar23 = lVar23 + 0x270;
      _memcpy(uVar29,auStack_500,0x270);
      lVar17 = lVar17 + -0x270;
      uVar29 = uVar29 + 0x270;
    } while (uVar21 != uVar13);
    goto LAB_1019ac414;
  }
  uVar8 = func_0x0001087c9084(8,lVar17);
  lStack_508 = lVar17;
  FUN_10196df7c(&uStack_518);
  auVar38 = __Unwind_Resume(uVar8);
  puVar15 = auVar38._8_8_;
  puVar14 = auVar38._0_8_;
  puVar22 = (undefined8 *)*puVar15;
  if (puVar22 == (undefined8 *)0x2) {
    uStack_710 = puVar15[1];
    uVar29 = puVar15[2];
    uVar8 = puVar15[3];
    uStack_728 = puVar15[4];
    uVar35 = puVar15[5];
    lVar23 = puVar15[6];
    uVar36 = puVar15[7];
    lVar7 = puVar15[8];
    lStack_750 = puVar15[9];
    lStack_6b0 = puVar15[0xb];
    uStack_6a8 = puVar15[0xc];
    lStack_698 = puVar15[0xe];
    unaff_x26 = puVar15[0xf];
    lStack_680 = puVar15[0x11];
    uStack_678 = puVar15[0x12];
    uVar16 = *(undefined1 *)(puVar15 + 0x14);
    uVar34 = *(undefined1 *)((long)puVar15 + 0xa1);
    uStack_664 = *(undefined4 *)((long)puVar15 + 0xa4);
    lStack_6b8 = puVar15[10];
    lVar17 = puVar15[0xd];
    lStack_688 = puVar15[0x10];
    unaff_x27 = puVar15[0x13];
LAB_1019ac7bc:
    uStack_666 = *(undefined2 *)((long)puVar15 + 0xa2);
    lVar11 = puVar15[0x24];
    uVar13 = uStack_6a8;
    puStack_708 = puVar22;
    uStack_667 = uVar34;
    uStack_668 = uVar16;
    lStack_670 = unaff_x27;
    lStack_690 = unaff_x26;
    lStack_6a0 = lVar17;
    lStack_6c0 = lStack_750;
    lStack_6c8 = lVar7;
    uStack_6d0 = uVar36;
    lStack_6d8 = lVar23;
    uStack_6e0 = uVar35;
    uStack_6e8 = uStack_728;
    uStack_6f0 = uVar8;
    uStack_6f8 = uVar29;
    uStack_700 = uStack_710;
joined_r0x0001019ac4bc:
    uStack_710 = uVar13;
    if (lVar11 == -0x7fffffffffffffff) {
      uStack_710 = puVar15[0x25];
      lVar17 = puVar15[0x26];
      uStack_718._0_1_ = *(byte *)(puVar15 + 0x27);
      uVar28 = (uint)(byte)uStack_718;
      uStack_5e4 = (undefined3)((uint)*(undefined4 *)((long)puVar15 + 0x13c) >> 8);
      uStack_5e8 = *(undefined4 *)((long)puVar15 + 0x139);
      lVar7 = -0x7fffffffffffffff;
      unaff_x25 = puVar15[0x15];
joined_r0x0001019ac830:
      if (unaff_x25 == 3) goto LAB_1019ac834;
LAB_1019ac4f0:
      puVar22 = auStack_660;
      uStack_718 = (ulong)uVar28;
      uVar29 = uStack_718;
      uStack_718._0_1_ = (byte)uVar28;
      if (unaff_x25 != 2) {
        bVar4 = *(byte *)(puVar15 + 0x23);
        uStack_728 = (ulong)bVar4;
        unaff_x26 = -0x8000000000000000;
        if (puVar15[0x1d] != -0x8000000000000000) goto LAB_1019ac65c;
        lVar23 = -0x8000000000000000;
        uVar16 = *(undefined1 *)((long)puVar15 + 0x119);
        uStack_728._0_1_ = bVar4;
        if (puVar15[0x20] == -0x8000000000000000) goto LAB_1019ac60c;
        goto LAB_1019ac8f8;
      }
      uStack_5d8 = puVar15[0x16];
      uStack_5e0 = puVar15[0x15];
      uStack_5c8 = puVar15[0x18];
      uStack_5d0 = puVar15[0x17];
      uVar8 = puVar15[0x19];
      uStack_5b8 = puVar15[0x1b];
      uStack_5c0 = puVar15[0x1a];
      uStack_5b0 = puVar15[0x1c];
      lStack_738 = puVar15[0x1e];
      lVar23 = puVar15[0x1f];
      unaff_x27 = puVar15[0x21];
      unaff_x26 = puVar15[0x22];
      uStack_5f0 = puVar15[0x23];
      lStack_620 = puVar15[0x1d];
      lStack_608 = puVar15[0x20];
      goto LAB_1019aca04;
    }
    uVar28 = (uint)unaff_x26;
    uStack_718._0_1_ = (byte)unaff_x26;
    if (lVar11 == -0x7ffffffffffffffe) {
      unaff_x25 = puVar15[0x15];
      lVar7 = -0x7ffffffffffffffe;
      goto joined_r0x0001019ac830;
    }
    uStack_718._0_1_ = *(byte *)(puVar15 + 0x27);
    uVar28 = (uint)(byte)uStack_718;
    if (lVar11 != -0x8000000000000000) {
      uVar8 = puVar15[0x25];
      lVar17 = puVar15[0x26];
      if (lVar17 == 0) {
        uStack_710 = 1;
      }
      else {
        uStack_710 = _malloc(lVar17);
        if (uStack_710 == 0) {
          func_0x0001087c9084(1,lVar17);
          goto LAB_1019acb98;
        }
      }
      _memcpy(uStack_710,uVar8,lVar17);
      unaff_x25 = puVar15[0x15];
      lVar7 = lVar17;
      goto joined_r0x0001019ac830;
    }
    lVar7 = -0x8000000000000000;
    unaff_x25 = puVar15[0x15];
    if (unaff_x25 != 3) goto LAB_1019ac4f0;
LAB_1019ac834:
    puVar22 = auStack_660;
    auStack_660[0] = 3;
    lVar23 = puVar15[0x2a];
  }
  else {
    if (puVar22 == (undefined8 *)0x3) {
      puStack_708 = (undefined8 *)0x3;
      lVar11 = puVar15[0x24];
      uVar13 = unaff_x24;
      goto joined_r0x0001019ac4bc;
    }
    uVar16 = *(undefined1 *)(puVar15 + 0x14);
    uStack_710 = puVar15[1];
    uVar29 = puVar15[2];
    uVar8 = puVar15[3];
    uStack_728 = puVar15[4];
    uVar35 = puVar15[5];
    lVar23 = puVar15[6];
    uVar34 = *(undefined1 *)((long)puVar15 + 0xa1);
    uVar36 = puVar15[7];
    lVar17 = -0x8000000000000000;
    if (puVar15[8] == -0x8000000000000000) {
      lVar7 = -0x8000000000000000;
      lVar11 = puVar15[0xb];
      uStack_664 = extraout_w12;
joined_r0x0001019ac6b0:
      if (lVar11 == -0x8000000000000000) {
        if (puVar15[0xe] != -0x8000000000000000) goto LAB_1019ac70c;
LAB_1019ac5c4:
        lStack_698 = -0x8000000000000000;
        lVar11 = puVar15[0x11];
        lStack_6b0 = lVar17;
        uStack_6a8 = unaff_x24;
        uStack_678 = unaff_x28;
      }
      else {
        uVar3 = puVar15[0xc];
        lVar17 = puVar15[0xd];
        if (lVar17 == 0) {
          unaff_x24 = 1;
        }
        else {
          unaff_x24 = _malloc(lVar17);
          if (unaff_x24 == 0) {
            func_0x0001087c9084(1,lVar17);
            goto LAB_1019acb98;
          }
        }
        _memcpy(unaff_x24,uVar3,lVar17);
        uStack_664 = extraout_w12_01;
        if (puVar15[0xe] == -0x8000000000000000) goto LAB_1019ac5c4;
LAB_1019ac70c:
        uStack_678 = puVar15[0xf];
        lStack_698 = puVar15[0x10];
        if (lStack_698 == 0) {
          unaff_x26 = 1;
        }
        else {
          unaff_x26 = _malloc(lStack_698);
          if (unaff_x26 == 0) {
            func_0x0001087c9084(1,lStack_698);
            goto LAB_1019acb98;
          }
        }
        _memcpy(unaff_x26,uStack_678,lStack_698);
        lVar11 = puVar15[0x11];
        lStack_6b0 = lVar17;
        uStack_6a8 = unaff_x24;
        uStack_664 = extraout_w12_02;
      }
      lStack_6b8 = lVar7;
      lVar17 = lStack_6b0;
      lStack_688 = lStack_698;
      lStack_738 = lVar23;
      if (lVar11 == -0x8000000000000000) {
        lStack_680 = -0x8000000000000000;
        unaff_x27 = lStack_680;
      }
      else {
        uVar3 = puVar15[0x12];
        lStack_680 = puVar15[0x13];
        if (lStack_680 == 0) {
          uStack_678 = 1;
        }
        else {
          uStack_678 = _malloc(lStack_680);
          if (uStack_678 == 0) {
            func_0x0001087c9084(1,lStack_680);
            goto LAB_1019acb98;
          }
        }
        _memcpy(uStack_678,uVar3,lStack_680);
        unaff_x27 = lStack_680;
        uStack_664 = extraout_w12_03;
      }
      goto LAB_1019ac7bc;
    }
    unaff_x24 = puVar15[9];
    lVar7 = puVar15[10];
    if (lVar7 == 0) {
      lStack_750 = 1;
LAB_1019ac684:
      _memcpy(lStack_750,unaff_x24,lVar7);
      lVar11 = puVar15[0xb];
      uStack_664 = extraout_w12_00;
      goto joined_r0x0001019ac6b0;
    }
    lStack_750 = _malloc(lVar7);
    if (lStack_750 != 0) goto LAB_1019ac684;
    func_0x0001087c9084(1,lVar7);
LAB_1019ac65c:
    uStack_718 = uVar29;
    unaff_x27 = puVar15[0x1e];
    lVar23 = puVar15[0x1f];
    if (lVar23 == 0) {
      lStack_738 = 1;
    }
    else {
      lStack_738 = _malloc(lVar23);
      if (lStack_738 == 0) {
        func_0x0001087c9084(1,lVar23);
        goto LAB_1019acb98;
      }
    }
    _memcpy(lStack_738,unaff_x27,lVar23);
    uVar16 = *(undefined1 *)((long)puVar15 + 0x119);
    if (puVar15[0x20] == unaff_x26) {
LAB_1019ac60c:
      uVar37 = *(undefined4 *)((long)puVar15 + 0x11a);
      uVar34 = *(undefined1 *)((long)puVar15 + 0x11e);
      if ((unaff_x25 & 1) == 0) goto LAB_1019ac938;
LAB_1019ac61c:
      if (puVar15[0x18] == 0) {
        uStack_5e0 = 0;
        uStack_5d0 = 0;
      }
      else {
        if (puVar15[0x16] == 0) {
          func_0x000108a07a20(&UNK_10b26a368);
          goto LAB_1019acb98;
        }
        FUN_101aab4c4(&uStack_5e0,puVar15[0x16],puVar15[0x17]);
      }
      puVar22[2] = puVar22[0x11];
      puVar22[1] = puVar22[0x10];
      uStack_648 = uStack_5d0;
      auStack_660[0] = 1;
      if ((*(uint *)(puVar15 + 0x19) & 1) != 0) goto LAB_1019ac944;
LAB_1019ac98c:
      uVar8 = 0;
    }
    else {
LAB_1019ac8f8:
      uVar8 = puVar15[0x21];
      unaff_x26 = puVar15[0x22];
      if (unaff_x26 == 0) {
        unaff_x27 = 1;
      }
      else {
        unaff_x27 = _malloc(unaff_x26);
        if (unaff_x27 == 0) {
          func_0x0001087c9084(1,unaff_x26);
          goto LAB_1019acb98;
        }
      }
      _memcpy(unaff_x27,uVar8,unaff_x26);
      uVar37 = *(undefined4 *)((long)puVar15 + 0x11a);
      uVar34 = *(undefined1 *)((long)puVar15 + 0x11e);
      if ((unaff_x25 & 1) != 0) goto LAB_1019ac61c;
LAB_1019ac938:
      auStack_660[0] = 0;
      if ((*(uint *)(puVar15 + 0x19) & 1) == 0) goto LAB_1019ac98c;
LAB_1019ac944:
      if (puVar15[0x1c] == 0) {
        uStack_5e0 = 0;
        uStack_5d0 = 0;
      }
      else {
        if (puVar15[0x1a] == 0) {
          func_0x000108a07a20(&UNK_10b26a368);
          goto LAB_1019acb98;
        }
        FUN_101aab4c4(&uStack_5e0,puVar15[0x1a],puVar15[0x1b]);
      }
      puVar22[0x15] = puVar22[0x11];
      puVar22[0x14] = puVar22[0x10];
      uStack_5b0 = uStack_5d0;
      uVar8 = 1;
    }
    uVar5 = CONCAT12((char)((uint)uVar37 >> 8),(short)uVar37) & 0xff00ff;
    puVar22[0x11] = puVar22[1];
    puVar22[0x10] = *puVar22;
    puVar22[0x13] = puVar22[3];
    puVar22[0x12] = puVar22[2];
    uStack_5f0 = CONCAT17(*(undefined1 *)((long)puVar15 + 0x11f),
                          CONCAT16(uVar34,CONCAT15((char)((uint)uVar37 >> 0x18),
                                                   CONCAT14((char)((uint)uVar37 >> 0x10),
                                                            CONCAT13((char)(uVar5 >> 0x10),
                                                                     CONCAT12((char)uVar5,
                                                                              CONCAT11(uVar16,(byte)
                                                  uStack_728)))))));
    lStack_620 = lVar23;
    lStack_608 = unaff_x26;
LAB_1019aca04:
    puVar22[1] = puVar22[0x11];
    *puVar22 = puVar22[0x10];
    puVar22[3] = puVar22[0x13];
    puVar22[2] = puVar22[0x12];
    puVar22[6] = puVar22[0x15];
    puVar22[5] = puVar22[0x14];
    uStack_640 = uVar8;
    uStack_628 = uStack_5b0;
    lStack_618 = lStack_738;
    lStack_610 = lVar23;
    lStack_600 = unaff_x27;
    lStack_5f8 = unaff_x26;
    lVar23 = puVar15[0x2a];
  }
  if (lVar23 == 0) {
    uStack_5e0 = 0;
    uStack_5d0 = 0;
  }
  else {
    if (puVar15[0x28] == 0) {
      func_0x000108a07a20(&UNK_10b26a368);
LAB_1019acb98:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1019acb9c);
      (*pcVar6)();
    }
    FUN_101aad4dc(&uStack_5e0,puVar15[0x28],puVar15[0x29]);
  }
  puVar14[0x11] = lStack_680;
  puVar14[0x10] = lStack_688;
  puVar14[0x13] = lStack_670;
  puVar14[0x12] = uStack_678;
  puVar14[9] = lStack_6c0;
  puVar14[8] = lStack_6c8;
  puVar14[0xb] = lStack_6b0;
  puVar14[10] = lStack_6b8;
  puVar14[0xd] = lStack_6a0;
  puVar14[0xc] = uStack_6a8;
  puVar14[0xf] = lStack_690;
  puVar14[0xe] = lStack_698;
  puVar14[1] = uStack_700;
  *puVar14 = puStack_708;
  puVar14[3] = uStack_6f0;
  puVar14[2] = uStack_6f8;
  puVar14[5] = uStack_6e0;
  puVar14[4] = uStack_6e8;
  puVar14[7] = uStack_6d0;
  puVar14[6] = lStack_6d8;
  uVar8 = puVar22[8];
  uVar36 = puVar22[0xb];
  uVar35 = puVar22[10];
  puVar14[0x1e] = puVar22[9];
  puVar14[0x1d] = uVar8;
  puVar14[0x20] = uVar36;
  puVar14[0x1f] = uVar35;
  uVar8 = puVar22[0xc];
  puVar14[0x22] = puVar22[0xd];
  puVar14[0x21] = uVar8;
  uVar8 = *puVar22;
  uVar36 = puVar22[3];
  uVar35 = puVar22[2];
  puVar14[0x16] = puVar22[1];
  puVar14[0x15] = uVar8;
  puVar14[0x18] = uVar36;
  puVar14[0x17] = uVar35;
  uVar8 = puVar22[4];
  uVar36 = puVar22[7];
  uVar35 = puVar22[6];
  puVar14[0x1a] = puVar22[5];
  puVar14[0x19] = uVar8;
  puVar14[0x14] = CONCAT44(uStack_664,CONCAT22(uStack_666,CONCAT11(uStack_667,uStack_668)));
  puVar14[0x25] = uStack_710;
  puVar14[0x26] = lVar17;
  *(byte *)(puVar14 + 0x27) = (byte)uStack_718;
  *(undefined4 *)((long)puVar14 + 0x139) = uStack_5e8;
  *(undefined4 *)((long)puVar14 + 0x13c) = *(undefined4 *)((long)puVar22 + 0x7b);
  puVar14[0x23] = uStack_5f0;
  puVar14[0x24] = lVar7;
  puVar14[0x1c] = uVar36;
  puVar14[0x1b] = uVar35;
  puVar14[0x2a] = uStack_5d0;
  uVar8 = puVar22[0x10];
  puVar14[0x29] = puVar22[0x11];
  puVar14[0x28] = uVar8;
  return;
}

