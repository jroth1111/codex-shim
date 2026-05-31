
void FUN_1019aaab4(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x10;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x23;
  long unaff_x25;
  long lVar16;
  undefined8 *puVar17;
  long unaff_x26;
  long unaff_x27;
  long lVar18;
  long unaff_x28;
  undefined1 auVar19 [16];
  long lStack_378;
  long lStack_370;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
  }
  else {
    uVar8 = param_2 >> 1;
    if (param_2 < 2) {
      uVar12 = 1;
    }
    else {
      uVar12 = _malloc(uVar8);
      if (uVar12 == 0) {
        uVar3 = func_0x0001087c9084(1,uVar8);
        FUN_10194fcdc(&uStack_a0);
        __Unwind_Resume(uVar3);
        auVar19 = func_0x000108a07bc4();
        lVar15 = auVar19._8_8_;
        plVar4 = auVar19._0_8_;
        if (param_3 == 0) {
          lStack_118 = 0;
          lStack_110 = 8;
        }
        else {
          lVar14 = param_3 * 0x48;
          lVar13 = param_3;
          lStack_110 = _malloc(lVar14);
          if (lStack_110 == 0) {
            uVar3 = func_0x0001087c9084(8,lVar14);
            if (unaff_x23 != 0) {
              _free(uStack_128);
              FUN_1019334c4(&lStack_118);
              uVar3 = __Unwind_Resume(uVar3);
            }
            FUN_1019334c4(&lStack_118);
            auVar19 = __Unwind_Resume(uVar3);
            lVar15 = auVar19._8_8_;
            plVar4 = auVar19._0_8_;
            if (lVar13 == 0) {
              lStack_1b8 = 0;
              lStack_1b0 = 8;
            }
            else {
              lVar5 = lVar13 * 0x18;
              lVar14 = lVar13;
              lStack_1b0 = _malloc(lVar5);
              if (lStack_1b0 == 0) {
                uVar3 = func_0x0001087c9084(8,lVar5);
                FUN_101965f14(&lStack_1b8);
                auVar19 = __Unwind_Resume(uVar3);
                plVar4 = auVar19._0_8_;
                if (lVar14 == 0) {
                  lStack_238 = 0;
                  lStack_230 = 8;
                }
                else {
                  lVar13 = lVar14 * 0x50;
                  lVar15 = lVar14;
                  lStack_230 = _malloc(lVar13);
                  if (lStack_230 == 0) {
                    uVar3 = func_0x0001087c9084(8,lVar13);
                    if (unaff_x23 != 0) {
                      _free(lStack_248);
                      lStack_228 = lVar5;
                      FUN_101931edc(&lStack_238);
                      uVar3 = __Unwind_Resume(uVar3);
                    }
                    lStack_228 = lVar5;
                    FUN_101931edc(&lStack_238);
                    auVar19 = __Unwind_Resume(uVar3);
                    lVar13 = auVar19._8_8_;
                    plVar4 = auVar19._0_8_;
                    if (lVar15 == 0) {
                      lStack_2f8 = 0;
                      lStack_2f0 = 8;
                    }
                    else {
                      lVar5 = lVar15 * 0x30;
                      lVar14 = lVar15;
                      lStack_2f0 = _malloc(lVar5);
                      if (lStack_2f0 == 0) {
                        uVar3 = func_0x0001087c9084(8,lVar5);
                        if (unaff_x23 != 0) {
                          _free(lStack_248);
                          FUN_101934be0(&lStack_2f8);
                          uVar3 = __Unwind_Resume(uVar3);
                        }
                        FUN_101934be0(&lStack_2f8);
                        auVar19 = __Unwind_Resume(uVar3);
                        puVar2 = auVar19._8_8_;
                        plVar4 = auVar19._0_8_;
                        if (lVar14 == 0) {
                          lStack_378 = 0;
                          lStack_370 = 8;
                        }
                        else {
                          lStack_370 = _malloc();
                          if (lStack_370 == 0) {
                            func_0x0001087c9084(8,lVar14 * 0x38);
LAB_1019ab7d0:
                            func_0x0001087c9084(1,lStack_248);
LAB_1019ab7dc:
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab7e0);
                            (*pcVar1)();
                          }
                          lVar13 = 0;
                          lVar15 = 0;
                          puVar11 = puVar2;
                          do {
                            lStack_378 = lVar14;
                            if (lVar14 * 0x38 == lVar13) break;
                            uVar8 = *puVar11;
                            lVar5 = uVar8 + 0x7ffffffffffffffb;
                            if (uVar8 < 0x8000000000000005) {
                              lVar5 = 2;
                            }
                            if (lVar5 == 0) {
                              uVar3 = *(undefined8 *)((long)puVar2 + lVar13 + 0x10);
                              unaff_x28 = *(long *)((long)puVar2 + lVar13 + 0x18);
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
                              lVar5 = -0x7ffffffffffffffb;
                              unaff_x27 = unaff_x28;
                            }
                            else if (lVar5 == 1) {
                              uVar3 = *(undefined8 *)((long)puVar2 + lVar13 + 0x10);
                              lVar16 = *(long *)((long)puVar2 + lVar13 + 0x18);
                              if (lVar16 == 0) {
                                unaff_x26 = 1;
                              }
                              else {
                                unaff_x26 = _malloc(lVar16);
                                if (unaff_x26 == 0) {
LAB_1019ab7b4:
                                  func_0x0001087c9084(1,lVar16);
                                  goto LAB_1019ab7dc;
                                }
                              }
                              _memcpy(unaff_x26,uVar3,lVar16);
                              lVar5 = -0x7ffffffffffffffa;
                              unaff_x27 = lVar16;
                              unaff_x28 = lVar16;
                            }
                            else {
                              uVar12 = uVar8 ^ 0x8000000000000000;
                              if (-1 < (long)uVar8) {
                                uVar12 = 5;
                              }
                              if ((long)uVar12 < 3) {
                                if (uVar12 == 0) {
                                  lVar5 = -0x8000000000000000;
                                }
                                else if (uVar12 == 1) {
                                  lVar5 = -0x7fffffffffffffff;
                                }
                                else {
                                  lVar5 = -0x7ffffffffffffffe;
                                  unaff_x28 = -0x8000000000000000;
                                  if (*(long *)((long)puVar2 + lVar13 + 8) != -0x8000000000000000) {
                                    uVar3 = *(undefined8 *)((long)puVar2 + lVar13 + 0x10);
                                    unaff_x28 = *(long *)((long)puVar2 + lVar13 + 0x18);
                                    if (unaff_x28 == 0) {
                                      unaff_x26 = 1;
                                    }
                                    else {
                                      unaff_x26 = _malloc(unaff_x28);
                                      if (unaff_x26 == 0) goto LAB_1019ab7a0;
                                    }
                                    _memcpy(unaff_x26,uVar3,unaff_x28);
                                    lVar5 = -0x7ffffffffffffffe;
                                    unaff_x27 = unaff_x28;
                                  }
                                }
                              }
                              else if (uVar12 == 3) {
                                lVar5 = -0x7ffffffffffffffd;
                              }
                              else if (uVar12 == 4) {
                                lVar5 = -0x7ffffffffffffffc;
                              }
                              else {
                                unaff_x25 = (long)puVar2 + lVar13;
                                uVar3 = *(undefined8 *)(unaff_x25 + 8);
                                lVar16 = *(long *)(unaff_x25 + 0x10);
                                if (lVar16 == 0) {
                                  unaff_x28 = 1;
                                }
                                else {
                                  unaff_x28 = _malloc(lVar16);
                                  if (unaff_x28 == 0) goto LAB_1019ab7b4;
                                }
                                _memcpy(unaff_x28,uVar3,lVar16);
                                lStack_248 = -0x8000000000000000;
                                lVar5 = lVar16;
                                unaff_x26 = lVar16;
                                unaff_x27 = lStack_248;
                                if (*(long *)(unaff_x25 + 0x18) != -0x8000000000000000) {
                                  uVar3 = *(undefined8 *)((long)puVar2 + lVar13 + 0x20);
                                  lStack_248 = *(long *)((long)puVar2 + lVar13 + 0x28);
                                  if (lStack_248 == 0) {
                                    unaff_x25 = 1;
                                  }
                                  else {
                                    unaff_x25 = _malloc(lStack_248);
                                    if (unaff_x25 == 0) goto LAB_1019ab7d0;
                                  }
                                  _memcpy(unaff_x25,uVar3,lStack_248);
                                  unaff_x27 = lStack_248;
                                }
                              }
                            }
                            lVar15 = lVar15 + 1;
                            uVar8 = puVar11[6];
                            plVar10 = (long *)(lStack_370 + lVar13);
                            *plVar10 = lVar5;
                            plVar10[1] = unaff_x28;
                            plVar10[2] = unaff_x26;
                            plVar10[3] = unaff_x27;
                            plVar10[4] = unaff_x25;
                            plVar10[5] = lStack_248;
                            *(char *)(plVar10 + 6) = (char)uVar8;
                            lVar13 = lVar13 + 0x38;
                            puVar11 = puVar11 + 7;
                          } while (lVar14 != lVar15);
                        }
                        plVar4[1] = lStack_370;
                        *plVar4 = lStack_378;
                        plVar4[2] = lVar14;
                        return;
                      }
                      lVar14 = 0;
                      plVar10 = (long *)(lStack_2f0 + 0x18);
                      lStack_2f8 = lVar15;
                      do {
                        if (lVar5 == 0) break;
                        uVar3 = *(undefined8 *)(lVar13 + 8);
                        lVar16 = *(long *)(lVar13 + 0x10);
                        if (lVar16 == 0) {
                          lVar6 = 1;
                          _memcpy(1,uVar3,0);
                          uVar3 = *(undefined8 *)(lVar13 + 0x20);
                          lVar7 = *(long *)(lVar13 + 0x28);
                          if (lVar7 == 0) goto LAB_1019ab380;
LAB_1019ab408:
                          lVar18 = _malloc(lVar7);
                          if (lVar18 == 0) {
                            func_0x0001087c9084(1,lVar7);
LAB_1019ab470:
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab474);
                            (*pcVar1)();
                          }
                        }
                        else {
                          lVar6 = _malloc(lVar16);
                          if (lVar6 == 0) {
                            func_0x0001087c9084(1,lVar16);
                            goto LAB_1019ab470;
                          }
                          _memcpy(lVar6,uVar3,lVar16);
                          uVar3 = *(undefined8 *)(lVar13 + 0x20);
                          lVar7 = *(long *)(lVar13 + 0x28);
                          if (lVar7 != 0) goto LAB_1019ab408;
LAB_1019ab380:
                          lVar18 = 1;
                        }
                        lVar13 = lVar13 + 0x30;
                        lVar14 = lVar14 + 1;
                        _memcpy(lVar18,uVar3,lVar7);
                        plVar10[-3] = lVar16;
                        plVar10[-2] = lVar6;
                        plVar10[-1] = lVar16;
                        *plVar10 = lVar7;
                        lVar5 = lVar5 + -0x30;
                        plVar10[1] = lVar18;
                        plVar10[2] = lVar7;
                        plVar10 = plVar10 + 6;
                      } while (lVar15 != lVar14);
                    }
                    plVar4[1] = lStack_2f0;
                    *plVar4 = lStack_2f8;
                    plVar4[2] = lVar15;
                    return;
                  }
                  lVar15 = 0;
                  plVar10 = (long *)(lStack_230 + 0x28);
                  puVar17 = (undefined8 *)(auVar19._8_8_ + 0x28);
                  lStack_248 = extraout_x10;
                  lStack_238 = lVar14;
                  do {
                    if (lVar13 == 0) break;
                    lVar5 = puVar17[-5];
                    if (lVar5 < 2) {
                      if (lVar5 == 0) {
                        uVar3 = puVar17[-3];
                        lVar16 = puVar17[-2];
                        if (lVar16 == 0) {
                          lVar7 = 1;
                          _memcpy(1,uVar3,0);
                          uVar3 = *puVar17;
                          unaff_x23 = puVar17[1];
                          if (unaff_x23 != 0) goto LAB_1019aafcc;
LAB_1019ab078:
                          lStack_248 = 1;
                          _memcpy(1,uVar3,unaff_x23);
                          uVar3 = puVar17[3];
                          lStack_250 = puVar17[4];
                          if (lStack_250 != 0) goto LAB_1019aaff0;
LAB_1019ab094:
                          unaff_x28 = 1;
                        }
                        else {
                          lVar7 = _malloc(lVar16);
                          if (lVar7 == 0) {
LAB_1019ab230:
                            func_0x0001087c9084(1,lVar16);
                            goto LAB_1019ab28c;
                          }
                          _memcpy(lVar7,uVar3,lVar16);
                          uVar3 = *puVar17;
                          unaff_x23 = puVar17[1];
                          if (unaff_x23 == 0) goto LAB_1019ab078;
LAB_1019aafcc:
                          lStack_248 = _malloc(unaff_x23);
                          if (lStack_248 == 0) {
                            func_0x0001087c9084(1,unaff_x23);
                            goto LAB_1019ab28c;
                          }
                          _memcpy(lStack_248,uVar3,unaff_x23);
                          uVar3 = puVar17[3];
                          lStack_250 = puVar17[4];
                          if (lStack_250 == 0) goto LAB_1019ab094;
LAB_1019aaff0:
                          unaff_x28 = _malloc(lStack_250);
                          if (unaff_x28 == 0) {
                            func_0x0001087c9084(1,lStack_250);
LAB_1019ab28c:
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ab290);
                            (*pcVar1)();
                          }
                        }
                        _memcpy(unaff_x28,uVar3,lStack_250);
                        unaff_x26 = unaff_x23;
                        lVar6 = lVar16;
                      }
                      else {
                        uVar3 = *puVar17;
                        unaff_x23 = puVar17[1];
                        if (unaff_x23 == 0) {
                          lStack_248 = 1;
                        }
                        else {
                          lStack_248 = _malloc(unaff_x23);
                          lVar16 = unaff_x23;
                          if (lStack_248 == 0) goto LAB_1019ab230;
                        }
                        _memcpy(lStack_248,uVar3,unaff_x23);
                        lVar16 = -0x8000000000000000;
                        lVar7 = lStack_268;
                        unaff_x26 = unaff_x23;
                        lVar6 = lStack_260;
                        if (puVar17[-4] != -0x8000000000000000) {
                          uVar3 = puVar17[-3];
                          lVar16 = puVar17[-2];
                          if (lVar16 == 0) {
                            lStack_268 = 1;
                          }
                          else {
                            lStack_268 = _malloc(lVar16);
                            if (lStack_268 == 0) {
                              func_0x0001087c9084(1,lVar16);
                              goto LAB_1019ab28c;
                            }
                          }
                          _memcpy(lStack_268,uVar3,lVar16);
                          lVar7 = lStack_268;
                          lVar6 = lVar16;
                          lStack_260 = lVar16;
                        }
                      }
                    }
                    else if (lVar5 == 2) {
                      uVar3 = puVar17[3];
                      lStack_250 = puVar17[4];
                      if (lStack_250 == 0) {
                        unaff_x28 = 1;
                      }
                      else {
                        unaff_x28 = _malloc(lStack_250);
                        lVar16 = lStack_250;
                        if (unaff_x28 == 0) goto LAB_1019ab230;
                      }
                      _memcpy(unaff_x28,uVar3,lStack_250);
                      lVar16 = -0x8000000000000000;
                      lVar7 = 2;
                      if (puVar17[-4] != -0x8000000000000000) {
                        uVar3 = puVar17[-3];
                        lVar16 = puVar17[-2];
                        if (lVar16 == 0) {
                          lVar7 = 1;
                        }
                        else {
                          lVar7 = _malloc(lVar16);
                          if (lVar7 == 0) {
                            func_0x0001087c9084(1,lVar16);
                            goto LAB_1019ab28c;
                          }
                        }
                        _memcpy(lVar7,uVar3,lVar16);
                      }
                      lStack_248 = lStack_270;
                      unaff_x23 = lStack_278;
                      unaff_x26 = -0x8000000000000000;
                      lVar6 = lVar16;
                      if (puVar17[-1] != -0x8000000000000000) {
                        uVar3 = *puVar17;
                        lStack_278 = puVar17[1];
                        if (lStack_278 == 0) {
                          lStack_270 = 1;
                        }
                        else {
                          lStack_270 = _malloc(lStack_278);
                          if (lStack_270 == 0) {
                            func_0x0001087c9084(1,lStack_278);
                            goto LAB_1019ab28c;
                          }
                        }
                        _memcpy(lStack_270,uVar3,lStack_278);
                        lStack_248 = lStack_270;
                        unaff_x23 = lStack_278;
                        unaff_x26 = lStack_278;
                      }
                    }
                    else {
                      uVar3 = puVar17[-3];
                      lVar16 = puVar17[-2];
                      if (lVar16 == 0) {
                        lVar7 = 1;
                      }
                      else {
                        lVar7 = _malloc(lVar16);
                        if (lVar7 == 0) goto LAB_1019ab230;
                      }
                      _memcpy(lVar7,uVar3,lVar16);
                      lVar6 = lVar16;
                    }
                    lVar15 = lVar15 + 1;
                    plVar10[-5] = lVar5;
                    plVar10[-4] = lVar16;
                    plVar10[-3] = lVar7;
                    plVar10[-2] = lVar6;
                    plVar10[-1] = unaff_x26;
                    *plVar10 = lStack_248;
                    plVar10[1] = unaff_x23;
                    plVar10[2] = lStack_250;
                    plVar10[3] = unaff_x28;
                    plVar10[4] = lStack_250;
                    plVar10 = plVar10 + 10;
                    puVar17 = puVar17 + 10;
                    lVar13 = lVar13 + -0x50;
                  } while (lVar14 != lVar15);
                }
                plVar4[1] = lStack_230;
                *plVar4 = lStack_238;
                plVar4[2] = lVar14;
                return;
              }
              lVar14 = 0;
              plVar10 = (long *)(lStack_1b0 + 0x10);
              lStack_1b8 = lVar13;
              do {
                if (lVar5 == 0) break;
                uVar3 = *(undefined8 *)(lVar15 + 8);
                lVar16 = *(long *)(lVar15 + 0x10);
                if (lVar16 == 0) {
                  lVar7 = 1;
                }
                else {
                  lVar7 = _malloc(lVar16);
                  if (lVar7 == 0) {
                    func_0x0001087c9084(1,lVar16);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019aae94);
                    (*pcVar1)();
                  }
                }
                lVar15 = lVar15 + 0x18;
                lVar14 = lVar14 + 1;
                _memcpy(lVar7,uVar3,lVar16);
                plVar10[-2] = lVar16;
                plVar10[-1] = lVar7;
                lVar5 = lVar5 + -0x18;
                *plVar10 = lVar16;
                plVar10 = plVar10 + 3;
              } while (lVar13 != lVar14);
            }
            plVar4[1] = lStack_1b0;
            *plVar4 = lStack_1b8;
            plVar4[2] = lVar13;
            return;
          }
          lStack_120 = 0;
          plVar10 = (long *)(lVar15 + 0x40);
          plVar9 = (long *)(lStack_110 + 0x20);
          lStack_118 = param_3;
          do {
            if (lVar14 == 0) break;
            uVar3 = *(undefined8 *)(lVar15 + 8);
            lVar13 = *(long *)(lVar15 + 0x10);
            if (lVar13 == 0) {
              lVar5 = 1;
            }
            else {
              lVar5 = _malloc(lVar13);
              if (lVar5 == 0) {
                func_0x0001087c9084(1,lVar13);
                goto LAB_1019aad7c;
              }
            }
            _memcpy(lVar5,uVar3,lVar13);
            uVar8 = *(ulong *)(lVar15 + 0x30);
            lVar16 = uVar8 + 0x7fffffffffffffff;
            if (uVar8 < 0x8000000000000001) {
              lVar16 = 2;
            }
            if (lVar16 == 0) {
              lVar16 = -0x7fffffffffffffff;
            }
            else if (lVar16 == 1) {
              lVar16 = -0x7ffffffffffffffe;
            }
            else {
              lVar16 = -0x8000000000000000;
              if (uVar8 != 0x8000000000000000) {
                lVar7 = plVar10[-1];
                lVar16 = *plVar10;
                if (lVar16 == 0) {
                  lStack_130 = 1;
                }
                else {
                  lStack_130 = _malloc(lVar16);
                  if (lStack_130 == 0) {
                    func_0x0001087c9084(1,lVar16);
                    goto LAB_1019aad7c;
                  }
                }
                _memcpy(lStack_130,lVar7,lVar16);
              }
            }
            uVar3 = *(undefined8 *)(lVar15 + 0x20);
            lVar7 = *(long *)(lVar15 + 0x28);
            if (lVar7 == 0) {
              lVar6 = 1;
            }
            else {
              lVar6 = _malloc(lVar7);
              if (lVar6 == 0) {
                func_0x0001087c9084(1,lVar7);
LAB_1019aad7c:
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1019aad80);
                (*pcVar1)();
              }
            }
            lVar15 = lVar15 + 0x48;
            lStack_120 = lStack_120 + 1;
            _memcpy(lVar6,uVar3,lVar7);
            plVar9[-4] = lVar13;
            plVar9[-3] = lVar5;
            plVar9[-2] = lVar13;
            plVar9[-1] = lVar7;
            *plVar9 = lVar6;
            plVar9[1] = lVar7;
            plVar10 = plVar10 + 9;
            lVar14 = lVar14 + -0x48;
            plVar9[2] = lVar16;
            plVar9[3] = lStack_130;
            plVar9[4] = lVar16;
            plVar9 = plVar9 + 9;
          } while (param_3 != lStack_120);
        }
        plVar4[1] = lStack_110;
        *plVar4 = lStack_118;
        plVar4[2] = param_3;
        return;
      }
    }
    _memcpy(uVar12,param_1,uVar8);
    uStack_48 = uVar8;
    uStack_40 = uVar12;
    uStack_38 = uVar8;
  }
  uStack_98 = uStack_40;
  uStack_a0 = uStack_48;
  uStack_90 = uStack_38;
  uStack_88 = 0x8000000000000000;
  uStack_58 = 8;
  puVar2 = (ulong *)_malloc(0x50);
  if (puVar2 == (ulong *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019aab7c);
    (*pcVar1)();
  }
  puVar2[5] = uStack_78;
  puVar2[4] = uStack_80;
  puVar2[7] = uStack_68;
  puVar2[6] = uStack_70;
  puVar2[9] = CONCAT44(uStack_54,uStack_58);
  puVar2[8] = uStack_60;
  puVar2[1] = uStack_98;
  *puVar2 = uStack_a0;
  puVar2[3] = uStack_88;
  puVar2[2] = uStack_90;
  return;
}

