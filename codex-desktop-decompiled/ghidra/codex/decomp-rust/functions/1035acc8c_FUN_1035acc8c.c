
void FUN_1035acc8c(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong extraout_x12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong unaff_x24;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  ulong unaff_x28;
  ulong *puVar26;
  undefined1 auVar27 [16];
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_238;
  ulong uStack_230;
  long lStack_198;
  ulong uStack_180;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_78;
  ulong uStack_70;
  
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_70 = 8;
LAB_1035acddc:
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[2] = param_3;
    return;
  }
  uVar15 = param_3 << 5;
  uVar20 = param_3;
  uStack_70 = _malloc(uVar15);
  if (uStack_70 != 0) {
    uVar20 = 0;
    puVar26 = (ulong *)(param_2 + 0x18);
    puVar23 = (ulong *)(uStack_70 + 0x10);
    uStack_78 = param_3;
    do {
      if (uVar15 == 0) break;
      uVar11 = puVar26[-3] ^ 0x8000000000000000;
      if (-1 < (long)puVar26[-3]) {
        uVar11 = 1;
      }
      if (uVar11 == 0) {
        uVar11 = puVar26[-1];
        param_2 = *puVar26;
        if (param_2 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = _malloc(param_2);
          uVar7 = param_2;
          if (uVar3 == 0) goto LAB_1035ace0c;
        }
        _memcpy(uVar3,uVar11,param_2);
        uVar7 = 0x8000000000000000;
        uVar11 = param_2;
      }
      else if (uVar11 == 1) {
        uVar3 = puVar26[-2];
        uVar7 = puVar26[-1];
        if (uVar7 == 0) {
          uVar11 = 1;
        }
        else {
          uVar11 = _malloc(uVar7);
          if (uVar11 == 0) {
LAB_1035ace0c:
            func_0x0001087c9084(1,uVar7);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ace1c);
            (*pcVar2)();
          }
        }
        _memcpy(uVar11,uVar3,uVar7);
        param_2 = param_2 & 0xffffffffffffff00 | (ulong)(byte)*puVar26;
        uVar3 = uVar7;
      }
      else {
        uVar11 = puVar26[-1];
        param_2 = *puVar26;
        if (param_2 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = _malloc(param_2);
          uVar7 = param_2;
          if (uVar3 == 0) goto LAB_1035ace0c;
        }
        _memcpy(uVar3,uVar11,param_2);
        uVar7 = 0x8000000000000002;
        uVar11 = param_2;
      }
      uVar20 = uVar20 + 1;
      puVar23[-2] = uVar7;
      puVar23[-1] = uVar11;
      *puVar23 = uVar3;
      puVar23[1] = param_2;
      puVar26 = puVar26 + 4;
      uVar15 = uVar15 - 0x20;
      puVar23 = puVar23 + 4;
    } while (param_3 != uVar20);
    goto LAB_1035acddc;
  }
  uVar4 = func_0x0001087c9084(8,uVar15);
  func_0x0001033ec08c(&uStack_78);
  auVar27 = __Unwind_Resume(uVar4);
  lVar14 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  if (uVar20 == 0) {
    uStack_138 = 0;
    uStack_130 = 8;
LAB_1035ad108:
    puVar26[1] = uStack_130;
    *puVar26 = uStack_138;
    puVar26[2] = uVar20;
    return;
  }
  uVar11 = uVar20 * 0x30;
  uVar3 = uVar20;
  uVar7 = _malloc(uVar11);
  if (uVar7 != 0) {
    uVar3 = 0;
    lVar8 = lVar14 + uVar20 * 0x30;
    uVar13 = extraout_x12;
    uVar21 = uVar20;
    uStack_138 = uVar20;
    uStack_130 = uVar7;
    do {
      if (lVar14 == lVar8) break;
      uVar16 = 0x8000000000000000;
      if (*(long *)(lVar14 + 0x18) != -0x8000000000000000) {
        uVar4 = *(undefined8 *)(lVar14 + 0x20);
        uVar16 = *(ulong *)(lVar14 + 0x28);
        if (uVar16 == 0) {
          lStack_198 = 1;
        }
        else {
          lStack_198 = _malloc(uVar16);
          if (lStack_198 == 0) {
            func_0x0001087c9084(1,uVar16);
            goto LAB_1035ad184;
          }
        }
        _memcpy(lStack_198,uVar4,uVar16);
      }
      lVar12 = *(long *)(lVar14 + 0x10);
      if (lVar12 == 0) {
        lStack_100 = 0;
        lStack_f8 = 8;
      }
      else {
        lVar10 = *(long *)(lVar14 + 8);
        lVar5 = _malloc();
        if (lVar5 == 0) {
          func_0x0001087c9084(8,lVar12 * 0x60);
LAB_1035ad184:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ad188);
          (*pcVar2)();
        }
        lVar18 = 0;
        lVar19 = 0;
        uVar6 = uVar3;
        uVar17 = uVar16;
        uVar22 = uVar21;
        lStack_100 = lVar12;
        lStack_f8 = lVar5;
        do {
          if (lVar12 * 0x60 == lVar18) break;
          uVar24 = *(ulong *)(lVar10 + lVar18);
          lVar1 = 0;
          if (uVar24 != 0) {
            lVar1 = uVar24 - 1;
          }
          if (lVar1 == 0) {
            uVar6 = lVar10 + lVar18;
            uVar4 = *(undefined8 *)(uVar6 + 0x18);
            uVar13 = *(ulong *)(uVar6 + 0x20);
            if (uVar13 == 0) {
              uStack_140 = 1;
            }
            else {
              uStack_140 = _malloc(uVar13);
              if (uStack_140 == 0) {
                func_0x0001087c9084(1,uVar13);
                goto LAB_1035ad184;
              }
            }
            _memcpy(uStack_140,uVar4,uVar13);
            uVar17 = 0x8000000000000000;
            uVar22 = 0x8000000000000000;
            if (*(long *)(uVar6 + 0x28) != -0x8000000000000000) {
              uVar4 = *(undefined8 *)(lVar10 + lVar18 + 0x30);
              uVar22 = *(ulong *)(lVar10 + lVar18 + 0x38);
              if (uVar22 == 0) {
                uVar6 = 1;
              }
              else {
                uVar6 = _malloc(uVar22);
                if (uVar6 == 0) {
                  func_0x0001087c9084(1,uVar22);
                  goto LAB_1035ad184;
                }
              }
              _memcpy(uVar6,uVar4,uVar22);
            }
            lVar1 = lVar10 + lVar18;
            unaff_x28 = *(ulong *)(lVar1 + 8);
            uVar24 = uVar24 & 1;
            unaff_x24 = (ulong)*(byte *)(lVar1 + 0x58);
            if (*(long *)(lVar1 + 0x40) != -0x8000000000000000) {
              uVar4 = *(undefined8 *)(lVar1 + 0x48);
              uVar11 = *(ulong *)(lVar1 + 0x50);
              if (uVar11 == 0) {
                uVar15 = 1;
              }
              else {
                uVar15 = _malloc();
                if (uVar15 == 0) {
                  func_0x0001087c9084(1,uVar11);
                  goto LAB_1035ad184;
                }
              }
              _memcpy(uVar15,uVar4,uVar11);
              uVar17 = uVar11;
            }
          }
          else {
            uVar24 = 2;
            if (lVar1 != 1) {
              uVar24 = 3;
            }
          }
          lVar19 = lVar19 + 1;
          puVar23 = (ulong *)(lVar5 + lVar18);
          *puVar23 = uVar24;
          puVar23[1] = unaff_x28;
          puVar23[2] = uVar13;
          puVar23[3] = uStack_140;
          puVar23[4] = uVar13;
          puVar23[5] = uVar22;
          puVar23[6] = uVar6;
          puVar23[7] = uVar22;
          puVar23[8] = uVar17;
          puVar23[9] = uVar15;
          puVar23[10] = uVar11;
          lVar18 = lVar18 + 0x60;
          *(char *)(puVar23 + 0xb) = (char)unaff_x24;
        } while (lVar12 != lVar19);
      }
      lVar14 = lVar14 + 0x30;
      plVar9 = (long *)(uVar7 + uVar3 * 0x30);
      uVar3 = uVar3 + 1;
      lStack_118 = lStack_f8;
      lStack_120 = lStack_100;
      plVar9[1] = lStack_f8;
      *plVar9 = lStack_100;
      plVar9[2] = lVar12;
      plVar9[3] = uVar16;
      plVar9[4] = lStack_198;
      plVar9[5] = uVar16;
      uVar21 = uVar21 - 1;
      unaff_x24 = uVar7;
      lStack_110 = lVar12;
      lStack_f0 = lVar12;
    } while (uVar21 != 0);
    goto LAB_1035ad108;
  }
  uVar4 = func_0x0001087c9084(8,uVar11);
  func_0x0001033cc410(&uStack_138);
  uVar4 = __Unwind_Resume(uVar4);
  if ((uStack_180 & 0x7fffffffffffffff) != 0) {
    _free(lStack_198);
  }
  func_0x0001033cc410(&uStack_138);
  auVar27 = __Unwind_Resume(uVar4);
  plVar9 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  if (uVar3 == 0) {
    uStack_238 = 0;
    uStack_230 = 8;
LAB_1035ad2d0:
    puVar26[1] = uStack_230;
    *puVar26 = uStack_238;
    puVar26[2] = uVar3;
    return;
  }
  lVar8 = uVar3 << 5;
  uVar20 = uVar3;
  uStack_230 = _malloc(lVar8);
  if (uStack_230 != 0) {
    uVar20 = 0;
    plVar25 = (long *)(uStack_230 + 0x10);
    uStack_238 = uVar3;
    do {
      if (lVar8 == 0) break;
      lVar5 = *plVar9;
      lVar14 = plVar9[2];
      lVar12 = plVar9[3];
      if (lVar12 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar12);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar12);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ad30c);
          (*pcVar2)();
        }
      }
      _memcpy(lVar10,lVar14,lVar12);
      uVar20 = uVar20 + 1;
      plVar9 = plVar9 + 4;
      plVar25[-2] = lVar5;
      plVar25[-1] = lVar12;
      *plVar25 = lVar10;
      plVar25[1] = lVar12;
      lVar8 = lVar8 + -0x20;
      plVar25 = plVar25 + 4;
    } while (uVar3 != uVar20);
    goto LAB_1035ad2d0;
  }
  uVar4 = func_0x0001087c9084(8,lVar8);
  FUN_1033d6520(&uStack_238);
  auVar27 = __Unwind_Resume(uVar4);
  lVar8 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  if (uVar20 == 0) {
    uStack_2b8 = 0;
    uStack_2b0 = 8;
LAB_1035ad3dc:
    puVar26[1] = uStack_2b0;
    *puVar26 = uStack_2b8;
    puVar26[2] = uVar20;
    return;
  }
  lVar12 = uVar20 * 0x18;
  uVar15 = uVar20;
  uStack_2b0 = _malloc(lVar12);
  if (uStack_2b0 != 0) {
    uVar15 = 0;
    plVar9 = (long *)(uStack_2b0 + 0x10);
    uStack_2b8 = uVar20;
    do {
      if (lVar12 == 0) break;
      uVar4 = *(undefined8 *)(lVar8 + 8);
      lVar14 = *(long *)(lVar8 + 0x10);
      if (lVar14 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(lVar14);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,lVar14);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ad418);
          (*pcVar2)();
        }
      }
      _memcpy(lVar5,uVar4,lVar14);
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + 0x18;
      plVar9[-2] = lVar14;
      plVar9[-1] = lVar5;
      *plVar9 = lVar14;
      lVar12 = lVar12 + -0x18;
      plVar9 = plVar9 + 3;
    } while (uVar20 != uVar15);
    goto LAB_1035ad3dc;
  }
  uVar4 = func_0x0001087c9084(8,lVar12);
  FUN_1033ac1c0(&uStack_2b8);
  auVar27 = __Unwind_Resume(uVar4);
  plVar9 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  if (uVar15 == 0) {
    uStack_338 = 0;
    uStack_330 = 8;
LAB_1035ad4e8:
    puVar26[1] = uStack_330;
    *puVar26 = uStack_338;
    puVar26[2] = uVar15;
    return;
  }
  lVar8 = uVar15 << 5;
  uVar20 = uVar15;
  uStack_330 = _malloc(lVar8);
  if (uStack_330 != 0) {
    uVar20 = 0;
    plVar25 = (long *)(uStack_330 + 0x10);
    uStack_338 = uVar15;
    do {
      if (lVar8 == 0) break;
      lVar5 = *plVar9;
      lVar14 = plVar9[2];
      lVar12 = plVar9[3];
      if (lVar12 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar12);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar12);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ad524);
          (*pcVar2)();
        }
      }
      _memcpy(lVar10,lVar14,lVar12);
      uVar20 = uVar20 + 1;
      plVar9 = plVar9 + 4;
      plVar25[-2] = lVar5;
      plVar25[-1] = lVar12;
      *plVar25 = lVar10;
      plVar25[1] = lVar12;
      lVar8 = lVar8 + -0x20;
      plVar25 = plVar25 + 4;
    } while (uVar15 != uVar20);
    goto LAB_1035ad4e8;
  }
  uVar4 = func_0x0001087c9084(8,lVar8);
  FUN_1032b59bc(&uStack_338);
  auVar27 = __Unwind_Resume(uVar4);
  lVar8 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  if (uVar20 == 0) {
    uStack_3b8 = 0;
    uStack_3b0 = 8;
LAB_1035ad640:
    puVar26[1] = uStack_3b0;
    *puVar26 = uStack_3b8;
    puVar26[2] = uVar20;
    return;
  }
  lVar12 = uVar20 * 0x30;
  uVar15 = uVar20;
  uStack_3b0 = _malloc(lVar12);
  if (uStack_3b0 != 0) {
    uVar15 = 0;
    plVar9 = (long *)(uStack_3b0 + 0x18);
    uStack_3b8 = uVar20;
    do {
      if (lVar12 == 0) break;
      uVar4 = *(undefined8 *)(lVar8 + 8);
      lVar14 = *(long *)(lVar8 + 0x10);
      if (lVar14 == 0) {
        lVar10 = 1;
        _memcpy(1,uVar4,0);
        uVar4 = *(undefined8 *)(lVar8 + 0x20);
        lVar5 = *(long *)(lVar8 + 0x28);
        if (lVar5 == 0) goto LAB_1035ad59c;
LAB_1035ad624:
        lVar19 = _malloc(lVar5);
        if (lVar19 == 0) {
          func_0x0001087c9084(1,lVar5);
LAB_1035ad68c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1035ad690);
          (*pcVar2)();
        }
      }
      else {
        lVar10 = _malloc(lVar14);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar14);
          goto LAB_1035ad68c;
        }
        _memcpy(lVar10,uVar4,lVar14);
        uVar4 = *(undefined8 *)(lVar8 + 0x20);
        lVar5 = *(long *)(lVar8 + 0x28);
        if (lVar5 != 0) goto LAB_1035ad624;
LAB_1035ad59c:
        lVar19 = 1;
      }
      lVar8 = lVar8 + 0x30;
      uVar15 = uVar15 + 1;
      _memcpy(lVar19,uVar4,lVar5);
      plVar9[-3] = lVar14;
      plVar9[-2] = lVar10;
      plVar9[-1] = lVar14;
      *plVar9 = lVar5;
      lVar12 = lVar12 + -0x30;
      plVar9[1] = lVar19;
      plVar9[2] = lVar5;
      plVar9 = plVar9 + 6;
    } while (uVar20 != uVar15);
    goto LAB_1035ad640;
  }
  uVar4 = func_0x0001087c9084(8,lVar12);
  if (lVar14 != 0) {
    _free();
    FUN_1032c0cd4(&uStack_3b8);
    uVar4 = __Unwind_Resume(uVar4);
  }
  FUN_1032c0cd4(&uStack_3b8);
  auVar27 = __Unwind_Resume(uVar4);
  uVar4 = auVar27._8_8_;
  puVar26 = auVar27._0_8_;
  lVar14 = uVar15 << 4;
  if (uVar15 != 0) {
    uVar20 = _malloc(lVar14);
    if (uVar20 != 0) goto LAB_1035ad71c;
    func_0x0001087c9084(1,lVar14);
    uVar4 = extraout_x1;
  }
  uVar20 = 1;
LAB_1035ad71c:
  *puVar26 = uVar15;
  puVar26[1] = uVar20;
  _memcpy(uVar20,uVar4,lVar14);
  puVar26[2] = uVar15;
  return;
}

