
ulong * FUN_103973e0c(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  ulong extraout_x12;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong *unaff_x24;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong unaff_x28;
  undefined1 auVar26 [16];
  ulong uStack_218;
  ulong uStack_200;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_1b0;
  ulong uStack_1a0;
  ulong *puStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong *puStack_178;
  ulong uStack_170;
  ulong uStack_f8;
  ulong *puStack_f0;
  ulong uStack_78;
  ulong *puStack_70;
  
  if (param_3 == 0) {
    uStack_78 = 0;
    puStack_70 = (ulong *)0x8;
    puVar3 = param_1;
  }
  else {
    lVar17 = param_3 * 0x18;
    uVar22 = param_3;
    puVar3 = (ulong *)_malloc(lVar17);
    if (puVar3 == (ulong *)0x0) {
      uVar5 = func_0x0001087c9084(8,lVar17);
      func_0x00010393d8fc(&uStack_78);
      auVar26 = __Unwind_Resume(uVar5);
      uVar10 = auVar26._8_8_;
      puVar3 = auVar26._0_8_;
      if (uVar22 == 0) {
        uStack_f8 = 0;
        puStack_f0 = (ulong *)0x8;
        puVar6 = puVar3;
      }
      else {
        lVar17 = uVar22 * 0x18;
        uVar4 = uVar22;
        puVar6 = (ulong *)_malloc(lVar17);
        if (puVar6 == (ulong *)0x0) {
          uVar5 = func_0x0001087c9084(8,lVar17);
          func_0x000103927bc0(&uStack_f8);
          auVar26 = __Unwind_Resume(uVar5);
          lVar17 = auVar26._8_8_;
          puVar3 = auVar26._0_8_;
          if (uVar4 == 0) {
            uStack_1b8 = 0;
            puStack_1b0 = (ulong *)0x8;
            puVar6 = puVar3;
          }
          else {
            uVar22 = uVar4 * 0x30;
            puVar8 = (ulong *)_malloc(uVar22);
            if (puVar8 == (ulong *)0x0) {
              uVar5 = func_0x0001087c9084(8,uVar22);
              func_0x0001039429e8(&uStack_1b8);
              uVar5 = __Unwind_Resume(uVar5);
              if ((uStack_200 & 0x7fffffffffffffff) != 0) {
                _free(uStack_218);
              }
              func_0x0001039429e8(&uStack_1b8);
              plVar11 = (long *)__Unwind_Resume(uVar5);
              if ((*plVar11 != -0x8000000000000000) && (*plVar11 == -0x7fffffffffffffff)) {
                return (ulong *)&UNK_108d9b05b;
              }
              return (ulong *)plVar11[1];
            }
            uVar16 = 0;
            lVar12 = lVar17 + uVar4 * 0x30;
            puVar6 = puVar8;
            uVar7 = extraout_x12;
            uVar23 = uVar4;
            uStack_1b8 = uVar4;
            puStack_1b0 = puVar8;
            do {
              if (lVar17 == lVar12) break;
              uVar18 = 0x8000000000000000;
              if (*(long *)(lVar17 + 0x18) != -0x8000000000000000) {
                uVar5 = *(undefined8 *)(lVar17 + 0x20);
                uVar18 = *(ulong *)(lVar17 + 0x28);
                if (uVar18 == 0) {
                  uStack_218 = 1;
                }
                else {
                  uStack_218 = _malloc(uVar18);
                  if (uStack_218 == 0) {
                    func_0x0001087c9084(1,uVar18);
                    goto LAB_103974368;
                  }
                }
                puVar6 = (ulong *)_memcpy(uStack_218,uVar5,uVar18);
              }
              uVar15 = *(ulong *)(lVar17 + 0x10);
              if (uVar15 == 0) {
                uStack_180 = 0;
                puStack_178 = (ulong *)0x8;
              }
              else {
                lVar14 = *(long *)(lVar17 + 8);
                puVar6 = (ulong *)_malloc();
                if (puVar6 == (ulong *)0x0) {
                  func_0x0001087c9084(8,uVar15 * 0x60);
LAB_103974368:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10397436c);
                  (*pcVar2)();
                }
                lVar20 = 0;
                uVar21 = 0;
                uVar9 = uVar16;
                uVar19 = uVar18;
                uVar24 = uVar23;
                uStack_180 = uVar15;
                puStack_178 = puVar6;
                do {
                  if (uVar15 * 0x60 == lVar20) break;
                  uVar25 = *(ulong *)(lVar14 + lVar20);
                  lVar1 = 0;
                  if (uVar25 != 0) {
                    lVar1 = uVar25 - 1;
                  }
                  if (lVar1 == 0) {
                    uVar9 = lVar14 + lVar20;
                    uVar5 = *(undefined8 *)(uVar9 + 0x18);
                    uVar7 = *(ulong *)(uVar9 + 0x20);
                    if (uVar7 == 0) {
                      uStack_1c0 = 1;
                    }
                    else {
                      uStack_1c0 = _malloc(uVar7);
                      if (uStack_1c0 == 0) {
                        func_0x0001087c9084(1,uVar7);
                        goto LAB_103974368;
                      }
                    }
                    _memcpy(uStack_1c0,uVar5,uVar7);
                    uVar19 = 0x8000000000000000;
                    uVar24 = 0x8000000000000000;
                    if (*(long *)(uVar9 + 0x28) != -0x8000000000000000) {
                      uVar5 = *(undefined8 *)(lVar14 + lVar20 + 0x30);
                      uVar24 = *(ulong *)(lVar14 + lVar20 + 0x38);
                      if (uVar24 == 0) {
                        uVar9 = 1;
                      }
                      else {
                        uVar9 = _malloc(uVar24);
                        if (uVar9 == 0) {
                          func_0x0001087c9084(1,uVar24);
                          goto LAB_103974368;
                        }
                      }
                      _memcpy(uVar9,uVar5,uVar24);
                    }
                    lVar1 = lVar14 + lVar20;
                    unaff_x28 = *(ulong *)(lVar1 + 8);
                    uVar25 = uVar25 & 1;
                    unaff_x24 = (ulong *)(ulong)*(byte *)(lVar1 + 0x58);
                    if (*(long *)(lVar1 + 0x40) != -0x8000000000000000) {
                      uVar5 = *(undefined8 *)(lVar1 + 0x48);
                      uVar22 = *(ulong *)(lVar1 + 0x50);
                      if (uVar22 == 0) {
                        uVar10 = 1;
                      }
                      else {
                        uVar10 = _malloc();
                        if (uVar10 == 0) {
                          func_0x0001087c9084(1,uVar22);
                          goto LAB_103974368;
                        }
                      }
                      _memcpy(uVar10,uVar5,uVar22);
                      uVar19 = uVar22;
                    }
                  }
                  else {
                    uVar25 = 2;
                    if (lVar1 != 1) {
                      uVar25 = 3;
                    }
                  }
                  uVar21 = uVar21 + 1;
                  puVar13 = (ulong *)((long)puVar6 + lVar20);
                  *puVar13 = uVar25;
                  puVar13[1] = unaff_x28;
                  puVar13[2] = uVar7;
                  puVar13[3] = uStack_1c0;
                  puVar13[4] = uVar7;
                  puVar13[5] = uVar24;
                  puVar13[6] = uVar9;
                  puVar13[7] = uVar24;
                  puVar13[8] = uVar19;
                  puVar13[9] = uVar10;
                  puVar13[10] = uVar22;
                  lVar20 = lVar20 + 0x60;
                  *(char *)(puVar13 + 0xb) = (char)unaff_x24;
                } while (uVar15 != uVar21);
              }
              lVar17 = lVar17 + 0x30;
              puVar13 = puVar8 + uVar16 * 6;
              uVar16 = uVar16 + 1;
              puStack_198 = puStack_178;
              uStack_1a0 = uStack_180;
              puVar13[1] = (ulong)puStack_178;
              *puVar13 = uStack_180;
              puVar13[2] = uVar15;
              puVar13[3] = uVar18;
              puVar13[4] = uStack_218;
              puVar13[5] = uVar18;
              uVar23 = uVar23 - 1;
              unaff_x24 = puVar8;
              uStack_190 = uVar15;
              uStack_170 = uVar15;
            } while (uVar23 != 0);
          }
          puVar3[1] = (ulong)puStack_1b0;
          *puVar3 = uStack_1b8;
          puVar3[2] = uVar4;
          return puVar6;
        }
        uVar4 = 0;
        puVar8 = puVar6 + 2;
        uStack_f8 = uVar22;
        puStack_f0 = puVar6;
        do {
          if (lVar17 == 0) break;
          uVar5 = *(undefined8 *)(uVar10 + 8);
          uVar16 = *(ulong *)(uVar10 + 0x10);
          if (uVar16 == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = _malloc(uVar16);
            if (uVar7 == 0) {
              func_0x0001087c9084(1,uVar16);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103974000);
              (*pcVar2)();
            }
          }
          puVar6 = (ulong *)_memcpy(uVar7,uVar5,uVar16);
          uVar4 = uVar4 + 1;
          uVar10 = uVar10 + 0x18;
          puVar8[-2] = uVar16;
          puVar8[-1] = uVar7;
          *puVar8 = uVar16;
          lVar17 = lVar17 + -0x18;
          puVar8 = puVar8 + 3;
        } while (uVar22 != uVar4);
      }
      puVar3[1] = (ulong)puStack_f0;
      *puVar3 = uStack_f8;
      puVar3[2] = uVar22;
      return puVar6;
    }
    uVar22 = 0;
    puVar6 = puVar3 + 2;
    uStack_78 = param_3;
    puStack_70 = puVar3;
    do {
      if (lVar17 == 0) break;
      uVar5 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(ulong *)(param_2 + 0x10);
      if (uVar10 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = _malloc(uVar10);
        if (uVar4 == 0) {
          func_0x0001087c9084(1,uVar10);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103973ef4);
          (*pcVar2)();
        }
      }
      puVar3 = (ulong *)_memcpy(uVar4,uVar5,uVar10);
      uVar22 = uVar22 + 1;
      param_2 = param_2 + 0x18;
      puVar6[-2] = uVar10;
      puVar6[-1] = uVar4;
      *puVar6 = uVar10;
      lVar17 = lVar17 + -0x18;
      puVar6 = puVar6 + 3;
    } while (param_3 != uVar22);
  }
  param_1[1] = (ulong)puStack_70;
  *param_1 = uStack_78;
  param_1[2] = param_3;
  return puVar3;
}

