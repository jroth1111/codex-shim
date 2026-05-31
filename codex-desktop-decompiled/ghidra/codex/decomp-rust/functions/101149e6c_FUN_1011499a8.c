
void FUN_1011499a8(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x23;
  long lVar16;
  long unaff_x24;
  long lVar17;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar18;
  long unaff_x28;
  undefined1 auVar19 [16];
  long lStack_328;
  long lStack_320;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_228;
  long lStack_220;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    lStack_128 = 0;
    puStack_120 = (undefined8 *)0x8;
  }
  else {
    lVar14 = param_3 * 0xc0;
    lVar17 = param_3;
    puVar3 = (undefined8 *)_malloc(lVar14);
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = func_0x0001087c9084(8,lVar14);
      FUN_100e47a48(&lStack_128);
      __Unwind_Resume(uVar4);
      auVar19 = func_0x000108a07bc4();
      plVar5 = auVar19._0_8_;
      if (lVar17 == 0) {
        lStack_1a8 = 0;
        lStack_1a0 = 8;
      }
      else {
        lVar13 = lVar17 << 5;
        lVar14 = lVar17;
        lStack_1a0 = _malloc(lVar13);
        if (lStack_1a0 == 0) {
          uVar4 = func_0x0001087c9084(8,lVar13);
          FUN_100e52114(&lStack_1a8);
          auVar19 = __Unwind_Resume(uVar4);
          lVar17 = auVar19._8_8_;
          plVar5 = auVar19._0_8_;
          if (lVar14 == 0) {
            lStack_228 = 0;
            lStack_220 = 8;
          }
          else {
            lVar15 = lVar14 * 0x30;
            lVar13 = lVar14;
            lStack_220 = _malloc(lVar15);
            if (lStack_220 == 0) {
              uVar4 = func_0x0001087c9084(8,lVar15);
              if (unaff_x23 != 0) {
                _free();
                FUN_100cca270(&lStack_228);
                uVar4 = __Unwind_Resume(uVar4);
              }
              FUN_100cca270(&lStack_228);
              auVar19 = __Unwind_Resume(uVar4);
              lVar17 = auVar19._8_8_;
              plVar5 = auVar19._0_8_;
              if (lVar13 == 0) {
                lStack_2a8 = 0;
                lStack_2a0 = 8;
              }
              else {
                lVar15 = lVar13 << 5;
                lVar14 = lVar13;
                lStack_2a0 = _malloc(lVar15);
                if (lStack_2a0 == 0) {
                  uVar4 = func_0x0001087c9084(8,lVar15);
                  FUN_100c99aa0(&lStack_2a8);
                  auVar19 = __Unwind_Resume(uVar4);
                  puVar7 = auVar19._8_8_;
                  plVar5 = auVar19._0_8_;
                  if (lVar14 == 0) {
                    lStack_328 = 0;
                    lStack_320 = 8;
                  }
                  else {
                    lStack_320 = _malloc();
                    if (lStack_320 == 0) {
                      func_0x0001087c9084(8,lVar14 * 0x38);
LAB_10114a180:
                      func_0x0001087c9084(1,unaff_x24);
LAB_10114a18c:
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10114a190);
                      (*pcVar2)();
                    }
                    lVar13 = 0;
                    lVar17 = 0;
                    puVar10 = puVar7;
                    do {
                      lStack_328 = lVar14;
                      if (lVar14 * 0x38 == lVar13) break;
                      uVar8 = *puVar10;
                      lVar15 = uVar8 + 0x7ffffffffffffffb;
                      if (uVar8 < 0x8000000000000005) {
                        lVar15 = 2;
                      }
                      if (lVar15 == 0) {
                        uVar4 = *(undefined8 *)((long)puVar7 + lVar13 + 0x10);
                        unaff_x28 = *(long *)((long)puVar7 + lVar13 + 0x18);
                        if (unaff_x28 == 0) {
                          unaff_x26 = 1;
                        }
                        else {
                          unaff_x26 = _malloc(unaff_x28);
                          if (unaff_x26 == 0) {
LAB_10114a150:
                            func_0x0001087c9084(1,unaff_x28);
                            goto LAB_10114a18c;
                          }
                        }
                        _memcpy(unaff_x26,uVar4,unaff_x28);
                        lVar15 = -0x7ffffffffffffffb;
                        unaff_x27 = unaff_x28;
                      }
                      else if (lVar15 == 1) {
                        uVar4 = *(undefined8 *)((long)puVar7 + lVar13 + 0x10);
                        lVar12 = *(long *)((long)puVar7 + lVar13 + 0x18);
                        if (lVar12 == 0) {
                          unaff_x26 = 1;
                        }
                        else {
                          unaff_x26 = _malloc(lVar12);
                          if (unaff_x26 == 0) {
LAB_10114a164:
                            func_0x0001087c9084(1,lVar12);
                            goto LAB_10114a18c;
                          }
                        }
                        _memcpy(unaff_x26,uVar4,lVar12);
                        lVar15 = -0x7ffffffffffffffa;
                        unaff_x27 = lVar12;
                        unaff_x28 = lVar12;
                      }
                      else {
                        uVar9 = uVar8 ^ 0x8000000000000000;
                        if (-1 < (long)uVar8) {
                          uVar9 = 5;
                        }
                        if ((long)uVar9 < 3) {
                          if (uVar9 == 0) {
                            lVar15 = -0x8000000000000000;
                          }
                          else if (uVar9 == 1) {
                            lVar15 = -0x7fffffffffffffff;
                          }
                          else {
                            lVar15 = -0x7ffffffffffffffe;
                            unaff_x28 = -0x8000000000000000;
                            if (*(long *)((long)puVar7 + lVar13 + 8) != -0x8000000000000000) {
                              uVar4 = *(undefined8 *)((long)puVar7 + lVar13 + 0x10);
                              unaff_x28 = *(long *)((long)puVar7 + lVar13 + 0x18);
                              if (unaff_x28 == 0) {
                                unaff_x26 = 1;
                              }
                              else {
                                unaff_x26 = _malloc(unaff_x28);
                                if (unaff_x26 == 0) goto LAB_10114a150;
                              }
                              _memcpy(unaff_x26,uVar4,unaff_x28);
                              lVar15 = -0x7ffffffffffffffe;
                              unaff_x27 = unaff_x28;
                            }
                          }
                        }
                        else if (uVar9 == 3) {
                          lVar15 = -0x7ffffffffffffffd;
                        }
                        else if (uVar9 == 4) {
                          lVar15 = -0x7ffffffffffffffc;
                        }
                        else {
                          unaff_x25 = (long)puVar7 + lVar13;
                          uVar4 = *(undefined8 *)(unaff_x25 + 8);
                          lVar12 = *(long *)(unaff_x25 + 0x10);
                          if (lVar12 == 0) {
                            unaff_x28 = 1;
                          }
                          else {
                            unaff_x28 = _malloc(lVar12);
                            if (unaff_x28 == 0) goto LAB_10114a164;
                          }
                          _memcpy(unaff_x28,uVar4,lVar12);
                          unaff_x24 = -0x8000000000000000;
                          lVar15 = lVar12;
                          unaff_x26 = lVar12;
                          unaff_x27 = unaff_x24;
                          if (*(long *)(unaff_x25 + 0x18) != -0x8000000000000000) {
                            uVar4 = *(undefined8 *)((long)puVar7 + lVar13 + 0x20);
                            unaff_x24 = *(long *)((long)puVar7 + lVar13 + 0x28);
                            if (unaff_x24 == 0) {
                              unaff_x25 = 1;
                            }
                            else {
                              unaff_x25 = _malloc(unaff_x24);
                              if (unaff_x25 == 0) goto LAB_10114a180;
                            }
                            _memcpy(unaff_x25,uVar4,unaff_x24);
                            unaff_x27 = unaff_x24;
                          }
                        }
                      }
                      lVar17 = lVar17 + 1;
                      uVar8 = puVar10[6];
                      plVar11 = (long *)(lStack_320 + lVar13);
                      *plVar11 = lVar15;
                      plVar11[1] = unaff_x28;
                      plVar11[2] = unaff_x26;
                      plVar11[3] = unaff_x27;
                      plVar11[4] = unaff_x25;
                      plVar11[5] = unaff_x24;
                      *(char *)(plVar11 + 6) = (char)uVar8;
                      lVar13 = lVar13 + 0x38;
                      puVar10 = puVar10 + 7;
                    } while (lVar14 != lVar17);
                  }
                  plVar5[1] = lStack_320;
                  *plVar5 = lStack_328;
                  plVar5[2] = lVar14;
                  return;
                }
                lVar14 = 0;
                plVar11 = (long *)(lStack_2a0 + 0x10);
                lStack_2a8 = lVar13;
                do {
                  if (lVar15 == 0) break;
                  uVar4 = *(undefined8 *)(lVar17 + 8);
                  lVar12 = *(long *)(lVar17 + 0x10);
                  if (lVar12 == 0) {
                    lVar16 = 1;
                  }
                  else {
                    lVar16 = _malloc(lVar12);
                    if (lVar16 == 0) {
                      func_0x0001087c9084(1,lVar12);
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101149e48);
                      (*pcVar2)();
                    }
                  }
                  _memcpy(lVar16,uVar4,lVar12);
                  lVar14 = lVar14 + 1;
                  uVar1 = *(undefined1 *)(lVar17 + 0x18);
                  lVar17 = lVar17 + 0x20;
                  plVar11[-2] = lVar12;
                  plVar11[-1] = lVar16;
                  *plVar11 = lVar12;
                  *(undefined1 *)(plVar11 + 1) = uVar1;
                  lVar15 = lVar15 + -0x20;
                  plVar11 = plVar11 + 4;
                } while (lVar13 != lVar14);
              }
              plVar5[1] = lStack_2a0;
              *plVar5 = lStack_2a8;
              plVar5[2] = lVar13;
              return;
            }
            lVar13 = 0;
            plVar11 = (long *)(lStack_220 + 0x18);
            lStack_228 = lVar14;
            do {
              if (lVar15 == 0) break;
              uVar4 = *(undefined8 *)(lVar17 + 8);
              lVar12 = *(long *)(lVar17 + 0x10);
              if (lVar12 == 0) {
                lVar6 = 1;
                _memcpy(1,uVar4,0);
                uVar4 = *(undefined8 *)(lVar17 + 0x20);
                lVar16 = *(long *)(lVar17 + 0x28);
                if (lVar16 == 0) goto LAB_101149c20;
LAB_101149ca8:
                lVar18 = _malloc(lVar16);
                if (lVar18 == 0) {
                  func_0x0001087c9084(1,lVar16);
LAB_101149d0c:
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101149d10);
                  (*pcVar2)();
                }
              }
              else {
                lVar6 = _malloc(lVar12);
                if (lVar6 == 0) {
                  func_0x0001087c9084(1,lVar12);
                  goto LAB_101149d0c;
                }
                _memcpy(lVar6,uVar4,lVar12);
                uVar4 = *(undefined8 *)(lVar17 + 0x20);
                lVar16 = *(long *)(lVar17 + 0x28);
                if (lVar16 != 0) goto LAB_101149ca8;
LAB_101149c20:
                lVar18 = 1;
              }
              lVar17 = lVar17 + 0x30;
              lVar13 = lVar13 + 1;
              _memcpy(lVar18,uVar4,lVar16);
              plVar11[-3] = lVar12;
              plVar11[-2] = lVar6;
              plVar11[-1] = lVar12;
              *plVar11 = lVar16;
              lVar15 = lVar15 + -0x30;
              plVar11[1] = lVar18;
              plVar11[2] = lVar16;
              plVar11 = plVar11 + 6;
            } while (lVar14 != lVar13);
          }
          plVar5[1] = lStack_220;
          *plVar5 = lStack_228;
          plVar5[2] = lVar14;
          return;
        }
        lVar14 = 0;
        plVar11 = (long *)(lStack_1a0 + 0x10);
        lVar15 = auVar19._8_8_;
        lStack_1a8 = lVar17;
        do {
          if (lVar13 == 0) break;
          uVar4 = *(undefined8 *)(lVar15 + 8);
          lVar12 = *(long *)(lVar15 + 0x10);
          lVar16 = lVar12 << 2;
          if (lVar12 == 0) {
            lVar6 = 4;
          }
          else {
            lVar6 = _malloc(lVar16);
            if (lVar6 == 0) {
              func_0x0001087c9084(4,lVar16);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101149b70);
              (*pcVar2)();
            }
          }
          lVar14 = lVar14 + 1;
          _memcpy(lVar6,uVar4,lVar16);
          uVar1 = *(undefined1 *)(lVar15 + 0x18);
          plVar11[-2] = lVar12;
          plVar11[-1] = lVar6;
          *plVar11 = lVar12;
          *(undefined1 *)(plVar11 + 1) = uVar1;
          lVar13 = lVar13 + -0x20;
          plVar11 = plVar11 + 4;
          lVar15 = lVar15 + 0x20;
        } while (lVar17 != lVar14);
      }
      plVar5[1] = lStack_1a0;
      *plVar5 = lStack_1a8;
      plVar5[2] = lVar17;
      return;
    }
    lVar17 = 0;
    lStack_128 = param_3;
    puStack_120 = puVar3;
    do {
      if (lVar14 == 0) break;
      FUN_1011b5300(&uStack_110,param_2);
      lVar17 = lVar17 + 1;
      param_2 = param_2 + 0xc0;
      puVar3[0x11] = uStack_88;
      puVar3[0x10] = uStack_90;
      puVar3[0x13] = uStack_78;
      puVar3[0x12] = uStack_80;
      puVar3[0x15] = uStack_68;
      puVar3[0x14] = uStack_70;
      puVar3[0x17] = uStack_58;
      puVar3[0x16] = uStack_60;
      puVar3[9] = uStack_c8;
      puVar3[8] = uStack_d0;
      puVar3[0xb] = uStack_b8;
      puVar3[10] = uStack_c0;
      puVar3[0xd] = uStack_a8;
      puVar3[0xc] = uStack_b0;
      puVar3[0xf] = uStack_98;
      puVar3[0xe] = uStack_a0;
      puVar3[1] = uStack_108;
      *puVar3 = uStack_110;
      puVar3[3] = uStack_f8;
      puVar3[2] = uStack_100;
      lVar14 = lVar14 + -0xc0;
      puVar3[5] = uStack_e8;
      puVar3[4] = uStack_f0;
      puVar3[7] = uStack_d8;
      puVar3[6] = uStack_e0;
      puVar3 = puVar3 + 0x18;
    } while (param_3 != lVar17);
  }
  param_1[1] = (long)puStack_120;
  *param_1 = lStack_128;
  param_1[2] = param_3;
  return;
}

