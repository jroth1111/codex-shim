
void FUN_1019aade4(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x10;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  long unaff_x23;
  long lVar13;
  long unaff_x25;
  undefined8 *puVar14;
  long unaff_x26;
  long lVar15;
  long unaff_x27;
  long *plVar16;
  long lVar17;
  long unaff_x28;
  undefined1 auVar18 [16];
  long lStack_238;
  long lStack_230;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
  }
  else {
    lVar12 = param_3 * 0x18;
    lVar15 = param_3;
    lStack_70 = _malloc(lVar12);
    if (lStack_70 == 0) {
      uVar3 = func_0x0001087c9084(8,lVar12);
      FUN_101965f14(&lStack_78);
      auVar18 = __Unwind_Resume(uVar3);
      plVar16 = auVar18._0_8_;
      if (lVar15 == 0) {
        lStack_f8 = 0;
        lStack_f0 = 8;
      }
      else {
        lVar2 = lVar15 * 0x50;
        lVar13 = lVar15;
        lStack_f0 = _malloc(lVar2);
        if (lStack_f0 == 0) {
          uVar3 = func_0x0001087c9084(8,lVar2);
          if (unaff_x23 != 0) {
            _free(lStack_108);
            lStack_e8 = lVar12;
            FUN_101931edc(&lStack_f8);
            uVar3 = __Unwind_Resume(uVar3);
          }
          lStack_e8 = lVar12;
          FUN_101931edc(&lStack_f8);
          auVar18 = __Unwind_Resume(uVar3);
          lVar15 = auVar18._8_8_;
          plVar16 = auVar18._0_8_;
          if (lVar13 == 0) {
            lStack_1b8 = 0;
            lStack_1b0 = 8;
          }
          else {
            lVar2 = lVar13 * 0x30;
            lVar12 = lVar13;
            lStack_1b0 = _malloc(lVar2);
            if (lStack_1b0 == 0) {
              uVar3 = func_0x0001087c9084(8,lVar2);
              if (unaff_x23 != 0) {
                _free(lStack_108);
                FUN_101934be0(&lStack_1b8);
                uVar3 = __Unwind_Resume(uVar3);
              }
              FUN_101934be0(&lStack_1b8);
              auVar18 = __Unwind_Resume(uVar3);
              puVar6 = auVar18._8_8_;
              plVar16 = auVar18._0_8_;
              if (lVar12 == 0) {
                lStack_238 = 0;
                lStack_230 = 8;
              }
              else {
                lStack_230 = _malloc();
                if (lStack_230 == 0) {
                  func_0x0001087c9084(8,lVar12 * 0x38);
LAB_1019ab7d0:
                  func_0x0001087c9084(1,lStack_108);
LAB_1019ab7dc:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab7e0);
                  (*pcVar1)();
                }
                lVar13 = 0;
                lVar15 = 0;
                puVar11 = puVar6;
                do {
                  lStack_238 = lVar12;
                  if (lVar12 * 0x38 == lVar13) break;
                  uVar8 = *puVar11;
                  lVar2 = uVar8 + 0x7ffffffffffffffb;
                  if (uVar8 < 0x8000000000000005) {
                    lVar2 = 2;
                  }
                  if (lVar2 == 0) {
                    uVar3 = *(undefined8 *)((long)puVar6 + lVar13 + 0x10);
                    unaff_x28 = *(long *)((long)puVar6 + lVar13 + 0x18);
                    if (unaff_x28 == 0) {
                      unaff_x26 = 1;
                    }
                    else {
                      unaff_x26 = _malloc(unaff_x28);
                      if (unaff_x26 == 0) {
LAB_1019ab7a0:
                        func_0x0001087c9084(1,unaff_x28);
                        goto LAB_1019ab7dc;
                      }
                    }
                    _memcpy(unaff_x26,uVar3,unaff_x28);
                    lVar2 = -0x7ffffffffffffffb;
                    unaff_x27 = unaff_x28;
                  }
                  else if (lVar2 == 1) {
                    uVar3 = *(undefined8 *)((long)puVar6 + lVar13 + 0x10);
                    lVar7 = *(long *)((long)puVar6 + lVar13 + 0x18);
                    if (lVar7 == 0) {
                      unaff_x26 = 1;
                    }
                    else {
                      unaff_x26 = _malloc(lVar7);
                      if (unaff_x26 == 0) {
LAB_1019ab7b4:
                        func_0x0001087c9084(1,lVar7);
                        goto LAB_1019ab7dc;
                      }
                    }
                    _memcpy(unaff_x26,uVar3,lVar7);
                    lVar2 = -0x7ffffffffffffffa;
                    unaff_x27 = lVar7;
                    unaff_x28 = lVar7;
                  }
                  else {
                    uVar9 = uVar8 ^ 0x8000000000000000;
                    if (-1 < (long)uVar8) {
                      uVar9 = 5;
                    }
                    if ((long)uVar9 < 3) {
                      if (uVar9 == 0) {
                        lVar2 = -0x8000000000000000;
                      }
                      else if (uVar9 == 1) {
                        lVar2 = -0x7fffffffffffffff;
                      }
                      else {
                        lVar2 = -0x7ffffffffffffffe;
                        unaff_x28 = -0x8000000000000000;
                        if (*(long *)((long)puVar6 + lVar13 + 8) != -0x8000000000000000) {
                          uVar3 = *(undefined8 *)((long)puVar6 + lVar13 + 0x10);
                          unaff_x28 = *(long *)((long)puVar6 + lVar13 + 0x18);
                          if (unaff_x28 == 0) {
                            unaff_x26 = 1;
                          }
                          else {
                            unaff_x26 = _malloc(unaff_x28);
                            if (unaff_x26 == 0) goto LAB_1019ab7a0;
                          }
                          _memcpy(unaff_x26,uVar3,unaff_x28);
                          lVar2 = -0x7ffffffffffffffe;
                          unaff_x27 = unaff_x28;
                        }
                      }
                    }
                    else if (uVar9 == 3) {
                      lVar2 = -0x7ffffffffffffffd;
                    }
                    else if (uVar9 == 4) {
                      lVar2 = -0x7ffffffffffffffc;
                    }
                    else {
                      unaff_x25 = (long)puVar6 + lVar13;
                      uVar3 = *(undefined8 *)(unaff_x25 + 8);
                      lVar7 = *(long *)(unaff_x25 + 0x10);
                      if (lVar7 == 0) {
                        unaff_x28 = 1;
                      }
                      else {
                        unaff_x28 = _malloc(lVar7);
                        if (unaff_x28 == 0) goto LAB_1019ab7b4;
                      }
                      _memcpy(unaff_x28,uVar3,lVar7);
                      lStack_108 = -0x8000000000000000;
                      lVar2 = lVar7;
                      unaff_x26 = lVar7;
                      unaff_x27 = lStack_108;
                      if (*(long *)(unaff_x25 + 0x18) != -0x8000000000000000) {
                        uVar3 = *(undefined8 *)((long)puVar6 + lVar13 + 0x20);
                        lStack_108 = *(long *)((long)puVar6 + lVar13 + 0x28);
                        if (lStack_108 == 0) {
                          unaff_x25 = 1;
                        }
                        else {
                          unaff_x25 = _malloc(lStack_108);
                          if (unaff_x25 == 0) goto LAB_1019ab7d0;
                        }
                        _memcpy(unaff_x25,uVar3,lStack_108);
                        unaff_x27 = lStack_108;
                      }
                    }
                  }
                  lVar15 = lVar15 + 1;
                  uVar8 = puVar11[6];
                  plVar10 = (long *)(lStack_230 + lVar13);
                  *plVar10 = lVar2;
                  plVar10[1] = unaff_x28;
                  plVar10[2] = unaff_x26;
                  plVar10[3] = unaff_x27;
                  plVar10[4] = unaff_x25;
                  plVar10[5] = lStack_108;
                  *(char *)(plVar10 + 6) = (char)uVar8;
                  lVar13 = lVar13 + 0x38;
                  puVar11 = puVar11 + 7;
                } while (lVar12 != lVar15);
              }
              plVar16[1] = lStack_230;
              *plVar16 = lStack_238;
              plVar16[2] = lVar12;
              return;
            }
            lVar12 = 0;
            plVar10 = (long *)(lStack_1b0 + 0x18);
            lStack_1b8 = lVar13;
            do {
              if (lVar2 == 0) break;
              uVar3 = *(undefined8 *)(lVar15 + 8);
              lVar7 = *(long *)(lVar15 + 0x10);
              if (lVar7 == 0) {
                lVar5 = 1;
                _memcpy(1,uVar3,0);
                uVar3 = *(undefined8 *)(lVar15 + 0x20);
                lVar4 = *(long *)(lVar15 + 0x28);
                if (lVar4 == 0) goto LAB_1019ab380;
LAB_1019ab408:
                lVar17 = _malloc(lVar4);
                if (lVar17 == 0) {
                  func_0x0001087c9084(1,lVar4);
LAB_1019ab470:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab474);
                  (*pcVar1)();
                }
              }
              else {
                lVar5 = _malloc(lVar7);
                if (lVar5 == 0) {
                  func_0x0001087c9084(1,lVar7);
                  goto LAB_1019ab470;
                }
                _memcpy(lVar5,uVar3,lVar7);
                uVar3 = *(undefined8 *)(lVar15 + 0x20);
                lVar4 = *(long *)(lVar15 + 0x28);
                if (lVar4 != 0) goto LAB_1019ab408;
LAB_1019ab380:
                lVar17 = 1;
              }
              lVar15 = lVar15 + 0x30;
              lVar12 = lVar12 + 1;
              _memcpy(lVar17,uVar3,lVar4);
              plVar10[-3] = lVar7;
              plVar10[-2] = lVar5;
              plVar10[-1] = lVar7;
              *plVar10 = lVar4;
              lVar2 = lVar2 + -0x30;
              plVar10[1] = lVar17;
              plVar10[2] = lVar4;
              plVar10 = plVar10 + 6;
            } while (lVar13 != lVar12);
          }
          plVar16[1] = lStack_1b0;
          *plVar16 = lStack_1b8;
          plVar16[2] = lVar13;
          return;
        }
        lVar12 = 0;
        plVar10 = (long *)(lStack_f0 + 0x28);
        puVar14 = (undefined8 *)(auVar18._8_8_ + 0x28);
        lStack_108 = extraout_x10;
        lStack_f8 = lVar15;
        do {
          if (lVar2 == 0) break;
          lVar13 = puVar14[-5];
          if (lVar13 < 2) {
            if (lVar13 == 0) {
              uVar3 = puVar14[-3];
              lVar7 = puVar14[-2];
              if (lVar7 == 0) {
                lVar4 = 1;
                _memcpy(1,uVar3,0);
                uVar3 = *puVar14;
                unaff_x23 = puVar14[1];
                if (unaff_x23 != 0) goto LAB_1019aafcc;
LAB_1019ab078:
                lStack_108 = 1;
                _memcpy(1,uVar3,unaff_x23);
                uVar3 = puVar14[3];
                lStack_110 = puVar14[4];
                if (lStack_110 != 0) goto LAB_1019aaff0;
LAB_1019ab094:
                unaff_x28 = 1;
              }
              else {
                lVar4 = _malloc(lVar7);
                if (lVar4 == 0) {
LAB_1019ab230:
                  func_0x0001087c9084(1,lVar7);
                  goto LAB_1019ab28c;
                }
                _memcpy(lVar4,uVar3,lVar7);
                uVar3 = *puVar14;
                unaff_x23 = puVar14[1];
                if (unaff_x23 == 0) goto LAB_1019ab078;
LAB_1019aafcc:
                lStack_108 = _malloc(unaff_x23);
                if (lStack_108 == 0) {
                  func_0x0001087c9084(1,unaff_x23);
                  goto LAB_1019ab28c;
                }
                _memcpy(lStack_108,uVar3,unaff_x23);
                uVar3 = puVar14[3];
                lStack_110 = puVar14[4];
                if (lStack_110 == 0) goto LAB_1019ab094;
LAB_1019aaff0:
                unaff_x28 = _malloc(lStack_110);
                if (unaff_x28 == 0) {
                  func_0x0001087c9084(1,lStack_110);
LAB_1019ab28c:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab290);
                  (*pcVar1)();
                }
              }
              _memcpy(unaff_x28,uVar3,lStack_110);
              unaff_x26 = unaff_x23;
              lVar5 = lVar7;
            }
            else {
              uVar3 = *puVar14;
              unaff_x23 = puVar14[1];
              if (unaff_x23 == 0) {
                lStack_108 = 1;
              }
              else {
                lStack_108 = _malloc(unaff_x23);
                lVar7 = unaff_x23;
                if (lStack_108 == 0) goto LAB_1019ab230;
              }
              _memcpy(lStack_108,uVar3,unaff_x23);
              lVar7 = -0x8000000000000000;
              lVar4 = lStack_128;
              unaff_x26 = unaff_x23;
              lVar5 = lStack_120;
              if (puVar14[-4] != -0x8000000000000000) {
                uVar3 = puVar14[-3];
                lVar7 = puVar14[-2];
                if (lVar7 == 0) {
                  lStack_128 = 1;
                }
                else {
                  lStack_128 = _malloc(lVar7);
                  if (lStack_128 == 0) {
                    func_0x0001087c9084(1,lVar7);
                    goto LAB_1019ab28c;
                  }
                }
                _memcpy(lStack_128,uVar3,lVar7);
                lVar4 = lStack_128;
                lVar5 = lVar7;
                lStack_120 = lVar7;
              }
            }
          }
          else if (lVar13 == 2) {
            uVar3 = puVar14[3];
            lStack_110 = puVar14[4];
            if (lStack_110 == 0) {
              unaff_x28 = 1;
            }
            else {
              unaff_x28 = _malloc(lStack_110);
              lVar7 = lStack_110;
              if (unaff_x28 == 0) goto LAB_1019ab230;
            }
            _memcpy(unaff_x28,uVar3,lStack_110);
            lVar7 = -0x8000000000000000;
            lVar4 = 2;
            if (puVar14[-4] != -0x8000000000000000) {
              uVar3 = puVar14[-3];
              lVar7 = puVar14[-2];
              if (lVar7 == 0) {
                lVar4 = 1;
              }
              else {
                lVar4 = _malloc(lVar7);
                if (lVar4 == 0) {
                  func_0x0001087c9084(1,lVar7);
                  goto LAB_1019ab28c;
                }
              }
              _memcpy(lVar4,uVar3,lVar7);
            }
            lStack_108 = lStack_130;
            unaff_x23 = lStack_138;
            unaff_x26 = -0x8000000000000000;
            lVar5 = lVar7;
            if (puVar14[-1] != -0x8000000000000000) {
              uVar3 = *puVar14;
              lStack_138 = puVar14[1];
              if (lStack_138 == 0) {
                lStack_130 = 1;
              }
              else {
                lStack_130 = _malloc(lStack_138);
                if (lStack_130 == 0) {
                  func_0x0001087c9084(1,lStack_138);
                  goto LAB_1019ab28c;
                }
              }
              _memcpy(lStack_130,uVar3,lStack_138);
              lStack_108 = lStack_130;
              unaff_x23 = lStack_138;
              unaff_x26 = lStack_138;
            }
          }
          else {
            uVar3 = puVar14[-3];
            lVar7 = puVar14[-2];
            if (lVar7 == 0) {
              lVar4 = 1;
            }
            else {
              lVar4 = _malloc(lVar7);
              if (lVar4 == 0) goto LAB_1019ab230;
            }
            _memcpy(lVar4,uVar3,lVar7);
            lVar5 = lVar7;
          }
          lVar12 = lVar12 + 1;
          plVar10[-5] = lVar13;
          plVar10[-4] = lVar7;
          plVar10[-3] = lVar4;
          plVar10[-2] = lVar5;
          plVar10[-1] = unaff_x26;
          *plVar10 = lStack_108;
          plVar10[1] = unaff_x23;
          plVar10[2] = lStack_110;
          plVar10[3] = unaff_x28;
          plVar10[4] = lStack_110;
          plVar10 = plVar10 + 10;
          puVar14 = puVar14 + 10;
          lVar2 = lVar2 + -0x50;
        } while (lVar15 != lVar12);
      }
      plVar16[1] = lStack_f0;
      *plVar16 = lStack_f8;
      plVar16[2] = lVar15;
      return;
    }
    lVar15 = 0;
    plVar16 = (long *)(lStack_70 + 0x10);
    lStack_78 = param_3;
    do {
      if (lVar12 == 0) break;
      uVar3 = *(undefined8 *)(param_2 + 8);
      lVar13 = *(long *)(param_2 + 0x10);
      if (lVar13 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = _malloc(lVar13);
        if (lVar2 == 0) {
          func_0x0001087c9084(1,lVar13);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1019aae94);
          (*pcVar1)();
        }
      }
      param_2 = param_2 + 0x18;
      lVar15 = lVar15 + 1;
      _memcpy(lVar2,uVar3,lVar13);
      plVar16[-2] = lVar13;
      plVar16[-1] = lVar2;
      lVar12 = lVar12 + -0x18;
      *plVar16 = lVar13;
      plVar16 = plVar16 + 3;
    } while (param_3 != lVar15);
  }
  param_1[1] = lStack_70;
  *param_1 = lStack_78;
  param_1[2] = param_3;
  return;
}

