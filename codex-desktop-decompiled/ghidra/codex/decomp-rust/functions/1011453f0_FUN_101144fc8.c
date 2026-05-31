
/* WARNING: Possible PIC construction at 0x000101145c4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101145c50) */

void FUN_101144fc8(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined2 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  long unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  uint uVar30;
  long *unaff_x26;
  long lVar31;
  long unaff_x27;
  long *plVar32;
  ulong *puVar33;
  uint uVar34;
  long unaff_x28;
  long lVar35;
  ulong *puVar36;
  undefined1 **ppuVar37;
  undefined4 uVar38;
  long *plVar39;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_100 [8];
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
  }
  else {
    lVar28 = param_3 * 0x18;
    lVar31 = param_3;
    lStack_70 = _malloc(lVar28);
    if (lStack_70 == 0) {
      uVar12 = func_0x0001087c9084(8,lVar28);
      FUN_100ca9cd4(&lStack_78);
      auVar49 = __Unwind_Resume(uVar12);
      plVar29 = auVar49._8_8_;
      plVar39 = auVar49._0_8_;
      uStack_88 = 0x1011450d4;
      ppuVar37 = &puStack_90;
      if (lVar31 == 0) {
        lStack_f8 = 0;
        lStack_f0 = 8;
      }
      else {
        uVar27 = lVar31 << 5;
        lVar28 = lVar31;
        puStack_90 = &stack0xfffffffffffffff0;
        lStack_f0 = _malloc(uVar27);
        if (lStack_f0 == 0) {
          lVar31 = func_0x0001087c9084(8,uVar27);
          FUN_100cf16bc(&lStack_f8);
          uVar12 = 0x1011451e0;
          auVar50 = __Unwind_Resume(lVar31);
          puVar10 = auStack_100;
SUB_1011451e0:
          lVar22 = auVar50._8_8_;
          *(long *)(puVar10 + -0x60) = unaff_x28;
          *(long *)(puVar10 + -0x58) = unaff_x27;
          *(long **)(puVar10 + -0x50) = unaff_x26;
          *(undefined1 **)(puVar10 + -0x48) = unaff_x25;
          *(long **)(puVar10 + -0x40) = unaff_x24;
          *(long *)(puVar10 + -0x38) = unaff_x23;
          *(long *)(puVar10 + -0x30) = auVar49._8_8_;
          *(ulong *)(puVar10 + -0x28) = uVar27;
          *(long *)(puVar10 + -0x20) = auVar49._0_8_;
          *(long *)(puVar10 + -0x18) = lVar31;
          *(undefined1 ***)(puVar10 + -0x10) = ppuVar37;
          *(undefined8 *)(puVar10 + -8) = uVar12;
          *(long *)(puVar10 + -0xc0) = auVar50._0_8_;
          if (lVar28 != 0) {
            lVar35 = lVar28 * 0x48;
            lVar31 = lVar28;
            lVar11 = _malloc(lVar35);
            if (lVar11 == 0) {
              uVar12 = func_0x0001087c9084(8,lVar35);
              if (lVar28 != 0) {
                _free(unaff_x24);
                *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(puVar10 + -0xb8);
                FUN_100e0e6a8(puVar10 + -0xa8);
                uVar12 = __Unwind_Resume(uVar12);
              }
              *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(puVar10 + -0xb8);
              FUN_100e0e6a8(puVar10 + -0xa8);
              auVar50 = __Unwind_Resume(uVar12);
              plVar29 = auVar50._0_8_;
              *(long *)(puVar10 + -0xf0) = lVar35;
              *(long *)(puVar10 + -0xe8) = lVar22;
              *(long *)(puVar10 + -0xe0) = auVar49._0_8_;
              *(undefined8 *)(puVar10 + -0xd8) = uVar12;
              *(undefined1 **)(puVar10 + -0xd0) = puVar10 + -0x10;
              *(undefined8 *)(puVar10 + -200) = 0x1011453f0;
              if (lVar31 != 0) {
                lVar35 = lVar31 * 0x10;
                lVar22 = lVar31;
                lVar11 = _malloc(lVar35);
                if (lVar11 == 0) {
                  auVar49 = func_0x0001087c9084(8,lVar35);
                  uVar27 = auVar49._8_8_;
                  puVar16 = auVar49._0_8_;
                  *(long *)(puVar10 + -0x150) = unaff_x28;
                  *(long *)(puVar10 + -0x148) = unaff_x27;
                  *(long **)(puVar10 + -0x140) = unaff_x26;
                  *(undefined1 **)(puVar10 + -0x138) = unaff_x25;
                  *(long **)(puVar10 + -0x130) = unaff_x24;
                  *(long *)(puVar10 + -0x128) = lVar28;
                  *(long *)(puVar10 + -0x120) = auVar50._8_8_;
                  *(long *)(puVar10 + -0x118) = lVar35;
                  *(long **)(puVar10 + -0x110) = plVar29;
                  *(long *)(puVar10 + -0x108) = lVar31;
                  *(undefined1 **)(puVar10 + -0x100) = puVar10 + -0xd0;
                  *(undefined8 *)(puVar10 + -0xf8) = 0x101145484;
                  if (lVar22 != 0) {
                    lVar35 = lVar22 << 5;
                    lVar31 = lVar22;
                    lVar11 = _malloc(lVar35);
                    if (lVar11 == 0) {
                      uVar12 = func_0x0001087c9084(8,lVar35);
                      *(long **)(puVar10 + -0x158) = unaff_x26;
                      FUN_100e81ad8(puVar10 + -0x168);
                      auVar49 = __Unwind_Resume(uVar12);
                      lVar22 = auVar49._8_8_;
                      *(long *)(puVar10 + -0x1d0) = unaff_x28;
                      *(long *)(puVar10 + -0x1c8) = unaff_x27;
                      *(long **)(puVar10 + -0x1c0) = unaff_x26;
                      *(undefined1 **)(puVar10 + -0x1b8) = unaff_x25;
                      *(long **)(puVar10 + -0x1b0) = unaff_x24;
                      *(long *)(puVar10 + -0x1a8) = lVar28;
                      *(ulong *)(puVar10 + -0x1a0) = uVar27;
                      *(long *)(puVar10 + -0x198) = lVar35;
                      *(undefined8 **)(puVar10 + -400) = puVar16;
                      *(undefined8 *)(puVar10 + -0x188) = uVar12;
                      *(undefined1 **)(puVar10 + -0x180) = puVar10 + -0x100;
                      *(undefined8 *)(puVar10 + -0x178) = 0x101145638;
                      *(long *)(puVar10 + -0x2e8) = auVar49._0_8_;
                      if (lVar31 != 0) {
                        lVar28 = lVar31 << 7;
                        lVar11 = lVar31;
                        lVar13 = _malloc(lVar28);
                        if (lVar13 == 0) {
                          uVar12 = func_0x0001087c9084(8,lVar28);
                          *(long **)(puVar10 + -0x288) = unaff_x24;
                          FUN_100ca0964(puVar10 + -0x298);
                          auVar49 = __Unwind_Resume(uVar12);
                          *(long *)(puVar10 + -0x350) = unaff_x28;
                          *(long *)(puVar10 + -0x348) = unaff_x27;
                          *(long **)(puVar10 + -0x340) = unaff_x26;
                          *(undefined1 **)(puVar10 + -0x338) = unaff_x25;
                          *(long **)(puVar10 + -0x330) = unaff_x24;
                          *(long *)(puVar10 + -0x328) = lVar28;
                          *(long *)(puVar10 + -800) = lVar22;
                          *(long *)(puVar10 + -0x318) = lVar35;
                          *(undefined8 **)(puVar10 + -0x310) = puVar16;
                          *(undefined8 *)(puVar10 + -0x308) = uVar12;
                          *(undefined1 **)(puVar10 + -0x300) = puVar10 + -0x180;
                          *(undefined8 *)(puVar10 + -0x2f8) = 0x1011458b8;
                          ppuVar37 = (undefined1 **)(puVar10 + -0x300);
                          *(long *)(puVar10 + -0x5c0) = auVar49._8_8_;
                          *(long *)(puVar10 + -0x6a8) = auVar49._0_8_;
                          if (lVar11 == 0) {
                            *(undefined8 *)(puVar10 + -0x5b8) = 0;
                            *(undefined8 *)(puVar10 + -0x5b0) = 8;
LAB_101145f18:
                            uVar12 = *(undefined8 *)(puVar10 + -0x5b8);
                            puVar16 = *(undefined8 **)(puVar10 + -0x6a8);
                            puVar16[1] = *(undefined8 *)(puVar10 + -0x5b0);
                            *puVar16 = uVar12;
                            puVar16[2] = lVar11;
                            return;
                          }
                          lVar31 = _malloc(lVar11 * 0x1a8);
                          if (lVar31 == 0) {
                            uVar12 = func_0x0001087c9084(8,lVar11 * 0x1a8);
                            if ((*(ulong *)(puVar10 + -0x5d8) & 0x7fffffffffffffff) != 0) {
                              _free(*(undefined8 *)(puVar10 + -0x660));
                            }
                            if ((*(ulong *)(puVar10 + -0x5d0) & 0x7fffffffffffffff) != 0) {
                              _free(*(undefined8 *)(puVar10 + -0x5c8));
                            }
                            if ((*(ulong *)(puVar10 + -0x608) & 0x7fffffffffffffff) != 0)
                            goto LAB_1011461d0;
                            if (*(long *)(puVar10 + -0x610) != 0) goto LAB_1011461e0;
                            do {
                              lVar31 = *(long *)(puVar10 + -0x600);
                              while( true ) {
                                if (lVar31 != 0) {
                                  _free(*(undefined8 *)(puVar10 + -0x618));
                                }
                                if ((*(ulong *)(puVar10 + -0x5f0) & 0x7fffffffffffffff) != 0) {
                                  _free(*(undefined8 *)(puVar10 + -0x658));
                                }
                                if (*(long *)(puVar10 + -0x5e8) != 0) {
                                  _free(*(undefined8 *)(puVar10 + -0x5f8));
                                }
                                *(undefined8 *)(puVar10 + -0x5a8) =
                                     *(undefined8 *)(puVar10 + -0x5e0);
                                FUN_100e28ce4(puVar10 + -0x5b8);
                                __Unwind_Resume(uVar12);
LAB_1011461d0:
                                _free(*(undefined8 *)(puVar10 + -0x670));
                                if (*(long *)(puVar10 + -0x610) == 0) break;
LAB_1011461e0:
                                _free(*(undefined8 *)(puVar10 + -0x620));
                                lVar31 = *(long *)(puVar10 + -0x600);
                              }
                            } while( true );
                          }
                          unaff_x23 = 0;
                          unaff_x27 = 0;
                          unaff_x25 = puVar10 + -0x580;
                          *(long *)(puVar10 + -0x5b8) = lVar11;
                          *(long *)(puVar10 + -0x5b0) = lVar31;
                          *(undefined8 *)(puVar10 + -0x5a8) = 0;
                          *(long *)(puVar10 + -0x690) = lVar11;
                          *(long *)(puVar10 + -0x688) = lVar11 * 0x1a8;
                          *(undefined8 *)(puVar10 + -0x648) = extraout_var;
                          *(undefined8 *)(puVar10 + -0x650) = extraout_d0;
                          *(long *)(puVar10 + -0x698) = lVar31;
                          do {
                            if (*(long *)(puVar10 + -0x688) == unaff_x23) goto LAB_101145f18;
                            lVar31 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            uVar12 = *(undefined8 *)(lVar31 + 8);
                            lVar28 = *(long *)(lVar31 + 0x10);
                            *(long *)(puVar10 + -0x5e0) = unaff_x27;
                            if (lVar28 == 0) {
                              lVar22 = 1;
                            }
                            else {
                              lVar22 = _malloc(lVar28);
                              if (lVar22 == 0) {
                                func_0x0001087c9084(1,lVar28);
                                goto LAB_101145ff8;
                              }
                            }
                            *(long *)(puVar10 + -0x5f8) = lVar22;
                            _memcpy(lVar22,uVar12,lVar28);
                            bVar6 = *(byte *)(lVar31 + 0x1a0);
                            lVar22 = *(long *)(lVar31 + 0x60);
                            lVar31 = -0x8000000000000000;
                            *(long *)(puVar10 + -0x5e8) = lVar28;
                            if (lVar22 != -0x8000000000000000) {
                              uVar12 = *(undefined8 *)
                                        (*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x68);
                              lVar31 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x70);
                              if (lVar31 == 0) {
                                lVar28 = 1;
                              }
                              else {
                                lVar28 = _malloc(lVar31);
                                if (lVar28 == 0) {
                                  func_0x0001087c9084(1,lVar31);
                                  goto LAB_101145ff8;
                                }
                              }
                              *(long *)(puVar10 + -0x658) = lVar28;
                              _memcpy(lVar28,uVar12,lVar31);
                            }
                            *(long *)(puVar10 + -0x5f0) = lVar31;
                            lVar28 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            uVar12 = *(undefined8 *)(lVar28 + 0x20);
                            lVar22 = *(long *)(lVar28 + 0x28);
                            if (lVar22 == 0) {
                              lVar31 = 1;
                            }
                            else {
                              lVar31 = _malloc(lVar22);
                              if (lVar31 == 0) {
                                func_0x0001087c9084(1,lVar22);
                                goto LAB_101145ff8;
                              }
                            }
                            *(long *)(puVar10 + -0x618) = lVar31;
                            _memcpy(lVar31,uVar12,lVar22);
                            lVar31 = *(long *)(lVar28 + 0x38);
                            lVar28 = *(long *)(lVar28 + 0x40);
                            *(long *)(puVar10 + -0x600) = lVar22;
                            if (lVar28 == 0) {
                              lVar22 = 1;
                            }
                            else {
                              lVar22 = _malloc(lVar28);
                              if (lVar22 == 0) {
                                func_0x0001087c9084(1,lVar28);
                                goto LAB_101145ff8;
                              }
                            }
                            *(long *)(puVar10 + -0x620) = lVar22;
                            *(long *)(puVar10 + -0x610) = lVar28;
                            auVar40 = _memcpy(lVar22,lVar31,lVar28);
                            lVar28 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            lVar11 = *(long *)(lVar28 + 0x78);
                            lVar22 = -0x8000000000000000;
                            *(undefined8 *)(puVar10 + -0x5d0) = 0x8000000000000000;
                            if (lVar11 != -0x8000000000000000) {
                              lVar31 = *(long *)(lVar28 + 0x80);
                              lVar22 = *(long *)(lVar28 + 0x88);
                              if (lVar22 == 0) {
                                lVar11 = 1;
                              }
                              else {
                                lVar11 = _malloc(lVar22);
                                if (lVar11 == 0) {
                                  func_0x0001087c9084(1,lVar22);
                                  goto LAB_101145ff8;
                                }
                              }
                              *(long *)(puVar10 + -0x670) = lVar11;
                              auVar40 = _memcpy(lVar11,lVar31,lVar22);
                            }
                            lVar11 = *(long *)(lVar28 + 0x90);
                            *(undefined8 *)(puVar10 + -0x5c8) = *(undefined8 *)(lVar28 + 0x98);
                            lVar28 = *(long *)(lVar28 + 0xa0);
                            *(long *)(puVar10 + -0x608) = lVar22;
                            *(uint *)(puVar10 + -0x634) = (uint)bVar6;
                            if (lVar11 != -0x8000000000000000) {
                              if (lVar28 == 0) {
                                lVar31 = 1;
                              }
                              else {
                                lVar31 = _malloc(lVar28);
                                if (lVar31 == 0) {
                                  func_0x0001087c9084(1,lVar28);
                                  goto LAB_101145ff8;
                                }
                              }
                              auVar40 = _memcpy(lVar31,*(undefined8 *)(puVar10 + -0x5c8),lVar28);
                              *(long *)(puVar10 + -0x5d0) = lVar28;
                              *(long *)(puVar10 + -0x5c8) = lVar31;
                            }
                            lVar22 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            lVar11 = *(long *)(lVar22 + 0xa8);
                            *(undefined8 *)(puVar10 + -0x5d8) = 0x8000000000000000;
                            if (lVar11 != -0x8000000000000000) {
                              lVar31 = *(long *)(lVar22 + 0xb0);
                              lVar11 = *(long *)(lVar22 + 0xb8);
                              if (lVar11 == 0) {
                                lVar35 = 1;
                              }
                              else {
                                lVar35 = _malloc(lVar11);
                                if (lVar35 == 0) {
                                  func_0x0001087c9084(1,lVar11);
                                  goto LAB_101145ff8;
                                }
                              }
                              *(long *)(puVar10 + -0x660) = lVar35;
                              *(long *)(puVar10 + -0x5d8) = lVar11;
                              auVar40 = _memcpy(lVar35,lVar31);
                            }
                            *(long *)(puVar10 + -0x630) = lVar28;
                            lVar11 = *(long *)(lVar22 + 0x120);
                            lVar22 = -0x7fffffffffffffff;
                            if (lVar11 != -0x7fffffffffffffff) {
                              lVar28 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x128);
                              lVar35 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x130);
                              *(long *)(puVar10 + -0x668) = lVar35;
                              lVar22 = -0x8000000000000000;
                              if (lVar11 != -0x8000000000000000) {
                                if (lVar35 == 0) {
                                  lVar31 = 1;
                                }
                                else {
                                  lVar31 = _malloc(lVar35);
                                  if (lVar31 == 0) {
                                    func_0x0001087c9084(1,lVar35);
                                    goto LAB_101145ff8;
                                  }
                                }
                                auVar40 = _memcpy(lVar31,lVar28);
                                lVar22 = lVar35;
                                lVar28 = lVar31;
                              }
                            }
                            auVar49._8_8_ = 0x8000000000000000;
                            auVar49._0_8_ = lVar28;
                            lVar35 = *(long *)(puVar10 + -0x5c0);
                            unaff_x26 = *(long **)(lVar35 + unaff_x23 + 0x158);
                            lVar11 = *unaff_x26;
                            *unaff_x26 = lVar11 + 1;
                            if (lVar11 < 0) goto LAB_101145ff8;
                            *(long *)(puVar10 + -0x628) = lVar22;
                            *(long **)(puVar10 + -0x3c0) = unaff_x26;
                            unaff_x24 = *(long **)(lVar35 + unaff_x23 + 0x160);
                            if ((unaff_x24 != (long *)0x0) &&
                               (lVar22 = *unaff_x24, *unaff_x24 = lVar22 + 1, lVar22 < 0))
                            goto LAB_101145ff8;
                            *(long **)(puVar10 + -0x3b8) = unaff_x24;
                            lVar22 = *(long *)(puVar10 + -0x5c0);
                            unaff_x28 = *(long *)(lVar22 + unaff_x23 + 0x138);
                            if (unaff_x28 == -0x8000000000000000) {
LAB_101145c18:
                              uVar38 = *(undefined4 *)(lVar22 + unaff_x23 + 0x150);
                              uVar27 = CONCAT17(0,CONCAT16((char)((uint)uVar38 >> 0x18),
                                                           (uint6)CONCAT14((char)((uint)uVar38 >>
                                                                                 0x10),
                                                                           (uint)CONCAT12((char)((
                                                  uint)uVar38 >> 8),(ushort)(byte)uVar38))));
                              auVar40._8_8_ = 0;
                              auVar40._0_8_ = uVar27;
                              *(undefined8 *)(puVar10 + -0x648) = 0;
                              *(ulong *)(puVar10 + -0x650) = uVar27;
                            }
                            else if (unaff_x28 != -0x7fffffffffffffff) {
                              lVar31 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x140);
                              unaff_x28 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x148)
                              ;
                              if (unaff_x28 == 0) {
                                lVar11 = 1;
                              }
                              else {
                                lVar11 = _malloc(unaff_x28);
                                if (lVar11 == 0) {
                                  *(long *)(puVar10 + -0x6a0) = lVar28;
                                  func_0x0001087c9084(1,unaff_x28);
                                  goto LAB_101145ff8;
                                }
                              }
                              *(long *)(puVar10 + -0x678) = lVar11;
                              _memcpy(lVar11,lVar31,unaff_x28);
                              *(long *)(puVar10 + -0x680) = unaff_x28;
                              goto LAB_101145c18;
                            }
                            lVar22 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            bVar6 = *(byte *)(lVar22 + 0x168);
                            uVar27 = (ulong)bVar6;
                            if (*(long *)(lVar22 + 0xc0) != -0x8000000000000000) goto LAB_101145c44;
                            *(undefined8 *)(puVar10 + -0x3b0) = 0x8000000000000000;
                            lVar22 = *(long *)(puVar10 + -0x5c0);
                            lVar31 = -0x8000000000000000;
                            uVar12 = 0x8000000000000000;
                            if (*(long *)(lVar22 + unaff_x23 + 0xd8) != -0x8000000000000000) {
                              *(long *)(puVar10 + -0x6a0) = lVar28;
                              lVar28 = *(long *)(puVar10 + -0x5c0);
                              *(undefined8 *)(puVar10 + -0x560) = 0;
                              *(undefined **)(puVar10 + -0x568) = &UNK_108c56c70;
                              *(undefined8 *)(puVar10 + -0x550) = 0;
                              *(undefined8 *)(puVar10 + -0x558) = 0;
                              *(undefined8 *)(puVar10 + -0x580) = 0;
                              *(undefined8 *)(puVar10 + -0x578) = 8;
                              *(undefined8 *)(puVar10 + -0x570) = 0;
                              FUN_1011a27dc(puVar10 + -0x580);
                              uVar12 = *(undefined8 *)(puVar10 + -0x580);
                              *(undefined8 *)(puVar10 + -0x388) = *(undefined8 *)(puVar10 + -0x570);
                              *(undefined8 *)(puVar10 + -0x390) = *(undefined8 *)(puVar10 + -0x578);
                              *(undefined8 *)(puVar10 + -0x378) = *(undefined8 *)(puVar10 + -0x560);
                              *(undefined8 *)(puVar10 + -0x380) = *(undefined8 *)(puVar10 + -0x568);
                              *(undefined8 *)(puVar10 + -0x368) = *(undefined8 *)(puVar10 + -0x550);
                              *(undefined8 *)(puVar10 + -0x370) = *(undefined8 *)(puVar10 + -0x558);
                              auVar40 = *(undefined1 (*) [16])(lVar28 + unaff_x23 + 0x110);
                              lVar28 = *(long *)(puVar10 + -0x6a0);
                            }
                            *(undefined8 *)(puVar10 + -0x4a0) = *(undefined8 *)(puVar10 + -0x5d0);
                            *(undefined8 *)(puVar10 + -0x498) = *(undefined8 *)(puVar10 + -0x5c8);
                            *(undefined8 *)(puVar10 + -0x490) = *(undefined8 *)(puVar10 + -0x630);
                            *(undefined8 *)(puVar10 + -0x488) = *(undefined8 *)(puVar10 + -0x5d8);
                            *(undefined8 *)(puVar10 + -0x480) = *(undefined8 *)(puVar10 + -0x660);
                            *(undefined8 *)(puVar10 + -0x478) = *(undefined8 *)(puVar10 + -0x5d8);
                            *(long *)(puVar10 + -0x408) = lVar28;
                            *(undefined8 *)(puVar10 + -0x400) = *(undefined8 *)(puVar10 + -0x668);
                            *(long **)(puVar10 + -0x3d8) = unaff_x26;
                            *(long **)(puVar10 + -0x3d0) = unaff_x24;
                            *(long *)(puVar10 + -0x3f8) = unaff_x28;
                            *(undefined8 *)(puVar10 + -0x3f0) = *(undefined8 *)(puVar10 + -0x678);
                            *(undefined8 *)(puVar10 + -1000) = *(undefined8 *)(puVar10 + -0x680);
                            uVar23 = *(undefined8 *)(puVar10 + -0x650);
                            *(uint *)(puVar10 + -0x3e0) =
                                 CONCAT13((char)((ulong)uVar23 >> 0x30),
                                          CONCAT12((char)((ulong)uVar23 >> 0x20),
                                                   CONCAT11((char)((ulong)uVar23 >> 0x10),
                                                            (char)uVar23)));
                            puVar10[-0x3c8] = bVar6;
                            *(undefined8 *)(puVar10 + -0x460) = *(undefined8 *)(puVar10 + -0x3a0);
                            *(undefined8 *)(puVar10 + -0x468) = *(undefined8 *)(puVar10 + -0x3a8);
                            *(undefined8 *)(puVar10 + -0x470) = *(undefined8 *)(puVar10 + -0x3b0);
                            *(undefined8 *)(puVar10 + -0x410) = *(undefined8 *)(puVar10 + -0x628);
                            *(undefined8 *)(puVar10 + -0x458) = uVar12;
                            *(undefined8 *)(puVar10 + -0x438) = *(undefined8 *)(puVar10 + -0x378);
                            *(undefined8 *)(puVar10 + -0x440) = *(undefined8 *)(puVar10 + -0x380);
                            *(undefined8 *)(puVar10 + -0x428) = *(undefined8 *)(puVar10 + -0x368);
                            *(undefined8 *)(puVar10 + -0x430) = *(undefined8 *)(puVar10 + -0x370);
                            *(undefined8 *)(puVar10 + -0x448) = *(undefined8 *)(puVar10 + -0x388);
                            *(undefined8 *)(puVar10 + -0x450) = *(undefined8 *)(puVar10 + -0x390);
                            *(undefined1 (*) [16])(puVar10 + -0x420) = auVar40;
                            uVar12 = *(undefined8 *)(puVar10 + -0x608);
                            if (*(long *)(lVar22 + unaff_x23 + 0x170) != -0x8000000000000000) {
                              uVar23 = *(undefined8 *)
                                        (*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x178);
                              lVar31 = *(long *)(*(long *)(puVar10 + -0x5c0) + unaff_x23 + 0x180);
                              if (lVar31 == 0) {
                                lVar28 = 1;
                              }
                              else {
                                lVar28 = _malloc(lVar31);
                                if (lVar28 == 0) {
                                  func_0x0001087c9084(1,lVar31);
                                  goto LAB_101145ff8;
                                }
                              }
                              _memcpy(lVar28,uVar23,lVar31);
                            }
                            lVar22 = *(long *)(puVar10 + -0x5c0) + unaff_x23;
                            lVar11 = -0x8000000000000000;
                            if (*(long *)(lVar22 + 0x188) != -0x8000000000000000) {
                              uVar23 = *(undefined8 *)(lVar22 + 400);
                              lVar11 = *(long *)(lVar22 + 0x198);
                              if (lVar11 == 0) {
                                unaff_x26 = (long *)0x1;
                              }
                              else {
                                unaff_x26 = (long *)_malloc(lVar11);
                                if (unaff_x26 == (long *)0x0) {
                                  func_0x0001087c9084(1,lVar11);
LAB_101145ff8:
                    /* WARNING: Does not return */
                                  pcVar9 = (code *)SoftwareBreakpoint(1,0x101145ffc);
                                  (*pcVar9)();
                                }
                              }
                              _memcpy(unaff_x26,uVar23,lVar11);
                            }
                            FUN_101146714(puVar10 + -0x390,*(undefined8 *)(lVar22 + 0x50),
                                          *(undefined8 *)(lVar22 + 0x58));
                            *(undefined8 *)(puVar10 + -0x4c8) = *(undefined8 *)(puVar10 + -1000);
                            *(undefined8 *)(puVar10 + -0x4d0) = *(undefined8 *)(puVar10 + -0x3f0);
                            *(undefined8 *)(puVar10 + -0x4b8) = *(undefined8 *)(puVar10 + -0x3d8);
                            *(undefined8 *)(puVar10 + -0x4c0) = *(undefined8 *)(puVar10 + -0x3e0);
                            *(undefined8 *)(puVar10 + -0x4a8) = *(undefined8 *)(puVar10 + -0x3c8);
                            *(undefined8 *)(puVar10 + -0x4b0) = *(undefined8 *)(puVar10 + -0x3d0);
                            *(undefined8 *)(puVar10 + -0x508) = *(undefined8 *)(puVar10 + -0x428);
                            *(undefined8 *)(puVar10 + -0x510) = *(undefined8 *)(puVar10 + -0x430);
                            *(undefined8 *)(puVar10 + -0x4f8) = *(undefined8 *)(puVar10 + -0x418);
                            *(undefined8 *)(puVar10 + -0x500) = *(undefined8 *)(puVar10 + -0x420);
                            *(undefined8 *)(puVar10 + -0x4e8) = *(undefined8 *)(puVar10 + -0x408);
                            *(undefined8 *)(puVar10 + -0x4f0) = *(undefined8 *)(puVar10 + -0x410);
                            *(undefined8 *)(puVar10 + -0x4d8) = *(undefined8 *)(puVar10 + -0x3f8);
                            *(undefined8 *)(puVar10 + -0x4e0) = *(undefined8 *)(puVar10 + -0x400);
                            *(undefined8 *)(puVar10 + -0x558) = *(undefined8 *)(puVar10 + -0x478);
                            *(undefined8 *)(puVar10 + -0x560) = *(undefined8 *)(puVar10 + -0x480);
                            *(undefined8 *)(puVar10 + -0x548) = *(undefined8 *)(puVar10 + -0x468);
                            *(undefined8 *)(puVar10 + -0x550) = *(undefined8 *)(puVar10 + -0x470);
                            *(undefined8 *)(puVar10 + -0x538) = *(undefined8 *)(puVar10 + -0x458);
                            *(undefined8 *)(puVar10 + -0x540) = *(undefined8 *)(puVar10 + -0x460);
                            *(undefined8 *)(puVar10 + -0x528) = *(undefined8 *)(puVar10 + -0x448);
                            *(undefined8 *)(puVar10 + -0x530) = *(undefined8 *)(puVar10 + -0x450);
                            *(undefined8 *)(puVar10 + -0x518) = *(undefined8 *)(puVar10 + -0x438);
                            *(undefined8 *)(puVar10 + -0x520) = *(undefined8 *)(puVar10 + -0x440);
                            uVar41 = *(undefined8 *)(puVar10 + -0x4a8);
                            uVar24 = *(undefined8 *)(puVar10 + -0x4b0);
                            *(undefined8 *)(puVar10 + -0x578) = *(undefined8 *)(puVar10 + -0x498);
                            *(undefined8 *)(puVar10 + -0x580) = *(undefined8 *)(puVar10 + -0x4a0);
                            *(undefined8 *)(puVar10 + -0x568) = *(undefined8 *)(puVar10 + -0x488);
                            *(undefined8 *)(puVar10 + -0x570) = *(undefined8 *)(puVar10 + -0x490);
                            uVar23 = *(undefined8 *)(puVar10 + -0x390);
                            *(undefined8 *)(puVar10 + -0x598) = *(undefined8 *)(puVar10 + -0x388);
                            *(undefined8 *)(puVar10 + -0x5a0) = uVar23;
                            puVar16 = (undefined8 *)(*(long *)(puVar10 + -0x698) + unaff_x23);
                            puVar16[10] = *(undefined8 *)(puVar10 + -0x388);
                            puVar16[9] = uVar23;
                            uVar42 = *(undefined8 *)(puVar10 + -0x580);
                            uVar21 = *(undefined8 *)(puVar10 + -0x568);
                            uVar23 = *(undefined8 *)(puVar10 + -0x570);
                            puVar16[0x13] = *(undefined8 *)(puVar10 + -0x578);
                            puVar16[0x12] = uVar42;
                            puVar16[0x15] = uVar21;
                            puVar16[0x14] = uVar23;
                            uVar21 = *(undefined8 *)(puVar10 + -0x548);
                            uVar23 = *(undefined8 *)(puVar10 + -0x550);
                            uVar46 = *(undefined8 *)(puVar10 + -0x540);
                            uVar43 = *(undefined8 *)(puVar10 + -0x528);
                            uVar42 = *(undefined8 *)(puVar10 + -0x530);
                            uVar45 = *(undefined8 *)(puVar10 + -0x518);
                            uVar44 = *(undefined8 *)(puVar10 + -0x520);
                            puVar16[0x1b] = *(undefined8 *)(puVar10 + -0x538);
                            puVar16[0x1a] = uVar46;
                            puVar16[0x1d] = uVar43;
                            puVar16[0x1c] = uVar42;
                            uVar42 = *(undefined8 *)(puVar10 + -0x560);
                            puVar16[0x17] = *(undefined8 *)(puVar10 + -0x558);
                            puVar16[0x16] = uVar42;
                            puVar16[0x19] = uVar21;
                            puVar16[0x18] = uVar23;
                            uVar42 = *(undefined8 *)(puVar10 + -0x508);
                            uVar21 = *(undefined8 *)(puVar10 + -0x510);
                            uVar23 = *(undefined8 *)(puVar10 + -0x500);
                            uVar46 = *(undefined8 *)(puVar10 + -0x4e8);
                            uVar43 = *(undefined8 *)(puVar10 + -0x4f0);
                            uVar48 = *(undefined8 *)(puVar10 + -0x4d8);
                            uVar47 = *(undefined8 *)(puVar10 + -0x4e0);
                            puVar16[0x23] = *(undefined8 *)(puVar10 + -0x4f8);
                            puVar16[0x22] = uVar23;
                            puVar16[0x25] = uVar46;
                            puVar16[0x24] = uVar43;
                            puVar16[0x1f] = uVar45;
                            puVar16[0x1e] = uVar44;
                            puVar16[0x21] = uVar42;
                            puVar16[0x20] = uVar21;
                            uVar43 = *(undefined8 *)(puVar10 + -0x4c8);
                            uVar42 = *(undefined8 *)(puVar10 + -0x4d0);
                            uVar23 = *(undefined8 *)(puVar10 + -0x4c0);
                            puVar16[0x2b] = *(undefined8 *)(puVar10 + -0x4b8);
                            puVar16[0x2a] = uVar23;
                            puVar16[0x2d] = uVar41;
                            puVar16[0x2c] = uVar24;
                            uVar23 = *(undefined8 *)(puVar10 + -0x5e8);
                            unaff_x27 = *(long *)(puVar10 + -0x5e0) + 1;
                            uVar21 = *(undefined8 *)(puVar10 + -0x380);
                            *(undefined8 *)(puVar10 + -0x590) = uVar21;
                            uVar24 = *(undefined8 *)(puVar10 + -0x5f8);
                            *puVar16 = uVar23;
                            puVar16[1] = uVar24;
                            puVar16[2] = uVar23;
                            uVar23 = *(undefined8 *)(puVar10 + -0x600);
                            uVar24 = *(undefined8 *)(puVar10 + -0x618);
                            puVar16[3] = uVar23;
                            puVar16[4] = uVar24;
                            puVar16[5] = uVar23;
                            uVar23 = *(undefined8 *)(puVar10 + -0x610);
                            uVar24 = *(undefined8 *)(puVar10 + -0x620);
                            puVar16[6] = uVar23;
                            puVar16[7] = uVar24;
                            puVar16[8] = uVar23;
                            puVar16[0xb] = uVar21;
                            uVar23 = *(undefined8 *)(puVar10 + -0x5f0);
                            uVar21 = *(undefined8 *)(puVar10 + -0x658);
                            puVar16[0xc] = uVar23;
                            puVar16[0xd] = uVar21;
                            puVar16[0xe] = uVar23;
                            puVar16[0xf] = uVar12;
                            puVar16[0x10] = *(undefined8 *)(puVar10 + -0x670);
                            puVar16[0x11] = uVar12;
                            puVar16[0x27] = uVar48;
                            puVar16[0x26] = uVar47;
                            puVar16[0x29] = uVar43;
                            puVar16[0x28] = uVar42;
                            puVar16[0x2e] = lVar31;
                            puVar16[0x2f] = lVar28;
                            puVar16[0x30] = lVar31;
                            puVar16[0x31] = lVar11;
                            puVar16[0x32] = unaff_x26;
                            puVar16[0x33] = lVar11;
                            unaff_x23 = unaff_x23 + 0x1a8;
                            *(char *)(puVar16 + 0x34) = (char)*(undefined4 *)(puVar10 + -0x634);
                            lVar11 = *(long *)(puVar10 + -0x690);
                            if (lVar11 == unaff_x27) goto LAB_101145f18;
                          } while( true );
                        }
                        lVar35 = 0;
                        lVar11 = 0;
                        *(long *)(puVar10 + -0x2a0) = lVar13;
                        *(long *)(puVar10 + -0x298) = lVar31;
                        *(long *)(puVar10 + -0x290) = lVar13;
                        *(ulong *)(puVar10 + -0x2e0) = (ulong)(puVar10 + -0x208) | 2;
                        *(long *)(puVar10 + -0x2d8) = lVar28;
                        *(long *)(puVar10 + -0x2d0) = lVar31;
                        goto LAB_101145764;
                      }
                      *(undefined8 *)(puVar10 + -0x298) = 0;
                      *(undefined8 *)(puVar10 + -0x290) = 8;
                      goto LAB_101145864;
                    }
                    lVar31 = 0;
                    *(long *)(puVar10 + -0x168) = lVar22;
                    *(long *)(puVar10 + -0x160) = lVar11;
                    puVar36 = (ulong *)(uVar27 + 0x18);
                    puVar33 = (ulong *)(lVar11 + 0x10);
                    goto LAB_101145510;
                  }
                  *(undefined8 *)(puVar10 + -0x168) = 0;
                  *(undefined8 *)(puVar10 + -0x160) = 8;
                  goto LAB_1011455d4;
                }
                lVar28 = 0;
                lVar22 = lVar31;
                goto LAB_10114542c;
              }
              lVar11 = 8;
              goto LAB_10114545c;
            }
            lVar31 = 0;
            *(long *)(puVar10 + -0xa8) = lVar28;
            *(long *)(puVar10 + -0xa0) = lVar11;
            puVar16 = (undefined8 *)(lVar11 + 0x20);
            puVar25 = (undefined8 *)(lVar22 + 0x40);
            *(long *)(puVar10 + -0xb0) = lVar28;
            goto LAB_101145278;
          }
          *(undefined8 *)(puVar10 + -0xa8) = 0;
          *(undefined8 *)(puVar10 + -0xa0) = 8;
          goto LAB_101145330;
        }
        lVar28 = 0;
        plVar32 = (long *)(lStack_f0 + 0x10);
        lStack_f8 = lVar31;
        do {
          if (uVar27 == 0) break;
          lVar35 = *plVar29;
          lVar22 = plVar29[2];
          lVar11 = plVar29[3];
          if (lVar11 == 0) {
            lVar13 = 1;
          }
          else {
            lVar13 = _malloc(lVar11);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lVar11);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1011451bc);
              (*pcVar9)();
            }
          }
          _memcpy(lVar13,lVar22,lVar11);
          lVar28 = lVar28 + 1;
          plVar29 = plVar29 + 4;
          plVar32[-2] = lVar35;
          plVar32[-1] = lVar11;
          *plVar32 = lVar13;
          plVar32[1] = lVar11;
          uVar27 = uVar27 - 0x20;
          plVar32 = plVar32 + 4;
        } while (lVar31 != lVar28);
      }
      plVar39[1] = lStack_f0;
      *plVar39 = lStack_f8;
      plVar39[2] = lVar31;
      return;
    }
    lVar31 = 0;
    plVar29 = (long *)(lStack_70 + 0x10);
    lStack_78 = param_3;
    do {
      if (lVar28 == 0) break;
      uVar12 = *(undefined8 *)(param_2 + 8);
      lVar22 = *(long *)(param_2 + 0x10);
      if (lVar22 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(lVar22);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,lVar22);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1011450b0);
          (*pcVar9)();
        }
      }
      _memcpy(lVar11,uVar12,lVar22);
      lVar31 = lVar31 + 1;
      param_2 = param_2 + 0x18;
      plVar29[-2] = lVar22;
      plVar29[-1] = lVar11;
      *plVar29 = lVar22;
      lVar28 = lVar28 + -0x18;
      plVar29 = plVar29 + 3;
    } while (param_3 != lVar31);
  }
  param_1[1] = lStack_70;
  *param_1 = lStack_78;
  param_1[2] = param_3;
  return;
LAB_101145c44:
  lVar28 = *(long *)(lVar22 + 0xd0);
  auVar50._8_8_ = *(undefined8 *)(lVar22 + 200);
  auVar50._0_8_ = puVar10 + -0x580;
  uVar12 = 0x101145c50;
  puVar10 = puVar10 + -0x6b0;
  goto SUB_1011451e0;
  while( true ) {
    uVar4 = *(uint *)(lVar22 + lVar35);
    iVar8 = uVar4 - 2;
    if (uVar4 < 2) {
      iVar8 = 1;
    }
    if ((iVar8 == 0) || (iVar8 != 1)) {
      lVar13 = lVar22 + lVar35;
      uVar21 = *(undefined8 *)(lVar13 + 0xc);
      uVar12 = *(undefined8 *)(lVar13 + 4);
      uVar41 = *(undefined8 *)(lVar13 + 0x1c);
      uVar24 = *(undefined8 *)(lVar13 + 0x14);
      uVar23 = *(undefined8 *)(lVar13 + 0x2c);
      uVar42 = *(undefined8 *)(lVar13 + 0x24);
      uVar34 = *(uint *)(lVar13 + 0x34);
      uVar26 = *(uint *)(lVar13 + 0x38);
      uVar30 = *(uint *)(lVar13 + 0x3c);
      uVar15 = *(undefined2 *)(lVar13 + 0x40);
      uVar43 = *(undefined8 *)(lVar13 + 0x42);
      uVar45 = *(undefined8 *)(lVar13 + 0x5a);
      uVar44 = *(undefined8 *)(lVar13 + 0x52);
      *(undefined8 *)(puVar10 + -0x268) = *(undefined8 *)(lVar13 + 0x4a);
      *(undefined8 *)(puVar10 + -0x270) = uVar43;
      *(undefined8 *)(puVar10 + -600) = uVar45;
      *(undefined8 *)(puVar10 + -0x260) = uVar44;
      uVar43 = *(undefined8 *)(lVar13 + 0x60);
      *(undefined8 *)(puVar10 + -0x24a) = *(undefined8 *)(lVar13 + 0x68);
      *(undefined8 *)(puVar10 + -0x252) = uVar43;
      uVar18 = *(undefined2 *)(lVar13 + 0x70);
      *(undefined2 *)(puVar10 + -0x274) = *(undefined2 *)(lVar13 + 0x76);
      *(undefined4 *)(puVar10 + -0x278) = *(undefined4 *)(lVar13 + 0x72);
      uVar5 = *(undefined1 *)(lVar13 + 0x78);
      *(undefined4 *)(puVar10 + -0x27d) = *(undefined4 *)(lVar13 + 0x7c);
      *(undefined4 *)(puVar10 + -0x280) = *(undefined4 *)(lVar13 + 0x79);
    }
    else {
      lVar31 = lVar22 + lVar35;
      sVar7 = *(short *)(lVar31 + 0x40);
      uVar5 = *(undefined1 *)(lVar31 + 0x78);
      uVar12 = *(undefined8 *)(lVar31 + 4);
      uVar2 = *(undefined4 *)(lVar31 + 0x10);
      uVar38 = *(undefined4 *)(lVar31 + 0x14);
      *(undefined4 *)(puVar10 + -0x2c8) = *(undefined4 *)(lVar31 + 0xc);
      *(undefined4 *)(puVar10 + -0x2c4) = uVar38;
      uVar38 = *(undefined4 *)(lVar31 + 0x18);
      uVar3 = *(undefined4 *)(lVar31 + 0x1c);
      *(undefined4 *)(puVar10 + -0x2c0) = uVar2;
      *(undefined4 *)(puVar10 + -700) = uVar38;
      *(undefined4 *)(puVar10 + -0x2b8) = uVar3;
      uVar38 = *(undefined4 *)(lVar31 + 0x20);
      *(undefined4 *)(puVar10 + -0x2b4) = *(undefined4 *)(lVar31 + 0x24);
      *(undefined4 *)(puVar10 + -0x2b0) = uVar38;
      uVar38 = *(undefined4 *)(lVar31 + 0x2c);
      *(undefined4 *)(puVar10 + -0x2ac) = *(undefined4 *)(lVar31 + 0x28);
      *(undefined4 *)(puVar10 + -0x2a8) = uVar38;
      uVar19 = *(uint *)(lVar31 + 0x30);
      uVar34 = *(uint *)(lVar31 + 0x34);
      *(uint *)(puVar10 + -0x2a4) = uVar19;
      uVar26 = *(uint *)(lVar31 + 0x38);
      uVar30 = *(uint *)(lVar31 + 0x3c);
      if (sVar7 == 2) {
        uVar15 = 2;
      }
      else {
        FUN_101144b20(puVar10 + -0x208);
        uVar19 = (uint)*(ushort *)(lVar22 + lVar35 + 0x70);
        uVar15 = *(undefined2 *)(puVar10 + -0x208);
        puVar16 = *(undefined8 **)(puVar10 + -0x2e0);
        uVar23 = *puVar16;
        uVar24 = puVar16[3];
        uVar21 = puVar16[2];
        *(undefined8 *)(puVar10 + -0x238) = puVar16[1];
        *(undefined8 *)(puVar10 + -0x240) = uVar23;
        *(undefined8 *)(puVar10 + -0x228) = uVar24;
        *(undefined8 *)(puVar10 + -0x230) = uVar21;
        uVar23 = *(undefined8 *)((long)puVar16 + 0x1e);
        *(undefined8 *)(puVar10 + -0x21a) = *(undefined8 *)((long)puVar16 + 0x26);
        *(undefined8 *)(puVar10 + -0x222) = uVar23;
      }
      uVar18 = (undefined2)uVar19;
      *(undefined8 *)(puVar10 + -0x268) = *(undefined8 *)(puVar10 + -0x238);
      *(undefined8 *)(puVar10 + -0x270) = *(undefined8 *)(puVar10 + -0x240);
      *(undefined8 *)(puVar10 + -600) = *(undefined8 *)(puVar10 + -0x228);
      *(undefined8 *)(puVar10 + -0x260) = *(undefined8 *)(puVar10 + -0x230);
      uVar21 = CONCAT44(*(undefined4 *)(puVar10 + -0x2c0),*(undefined4 *)(puVar10 + -0x2c8));
      uVar24 = CONCAT44(*(undefined4 *)(puVar10 + -700),*(undefined4 *)(puVar10 + -0x2c4));
      *(undefined8 *)(puVar10 + -0x24a) = *(undefined8 *)(puVar10 + -0x21a);
      *(undefined8 *)(puVar10 + -0x252) = *(undefined8 *)(puVar10 + -0x222);
      uVar41 = CONCAT44(*(undefined4 *)(puVar10 + -0x2b0),*(undefined4 *)(puVar10 + -0x2b8));
      uVar42 = CONCAT44(*(undefined4 *)(puVar10 + -0x2ac),*(undefined4 *)(puVar10 + -0x2b4));
      uVar23 = *(undefined8 *)(puVar10 + -0x2a8);
      lVar28 = *(long *)(puVar10 + -0x2d8);
      lVar31 = *(long *)(puVar10 + -0x2d0);
    }
    puVar1 = (uint *)(*(long *)(puVar10 + -0x2a0) + lVar35);
    *puVar1 = uVar4;
    lVar11 = lVar11 + 1;
    *(undefined8 *)(puVar1 + 3) = uVar21;
    *(undefined8 *)(puVar1 + 1) = uVar12;
    *(undefined8 *)(puVar1 + 7) = uVar41;
    *(undefined8 *)(puVar1 + 5) = uVar24;
    *(undefined8 *)(puVar1 + 0xb) = uVar23;
    *(undefined8 *)(puVar1 + 9) = uVar42;
    puVar1[0xd] = uVar34;
    puVar1[0xe] = uVar26;
    puVar1[0xf] = uVar30;
    *(undefined2 *)(puVar1 + 0x10) = uVar15;
    uVar12 = *(undefined8 *)(puVar10 + -0x270);
    uVar21 = *(undefined8 *)(puVar10 + -600);
    uVar23 = *(undefined8 *)(puVar10 + -0x260);
    *(undefined8 *)((long)puVar1 + 0x4a) = *(undefined8 *)(puVar10 + -0x268);
    *(undefined8 *)((long)puVar1 + 0x42) = uVar12;
    *(undefined8 *)((long)puVar1 + 0x5a) = uVar21;
    *(undefined8 *)((long)puVar1 + 0x52) = uVar23;
    uVar12 = *(undefined8 *)(puVar10 + -0x252);
    *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)(puVar10 + -0x24a);
    *(undefined8 *)(puVar1 + 0x18) = uVar12;
    *(undefined2 *)(puVar1 + 0x1c) = uVar18;
    *(undefined2 *)((long)puVar1 + 0x76) = *(undefined2 *)(puVar10 + -0x274);
    *(undefined4 *)((long)puVar1 + 0x72) = *(undefined4 *)(puVar10 + -0x278);
    *(undefined1 *)(puVar1 + 0x1e) = uVar5;
    puVar1[0x1f] = *(uint *)(puVar10 + -0x27d);
    lVar35 = lVar35 + 0x80;
    *(undefined4 *)((long)puVar1 + 0x79) = *(undefined4 *)(puVar10 + -0x280);
    if (lVar31 == lVar11) break;
LAB_101145764:
    if (lVar28 == lVar35) break;
  }
LAB_101145864:
  uVar12 = *(undefined8 *)(puVar10 + -0x298);
  puVar16 = *(undefined8 **)(puVar10 + -0x2e8);
  puVar16[1] = *(undefined8 *)(puVar10 + -0x290);
  *puVar16 = uVar12;
  puVar16[2] = lVar31;
  return;
LAB_101145510:
  do {
    if (lVar35 == 0) break;
    uVar20 = puVar36[-3] ^ 0x8000000000000000;
    if (-1 < (long)puVar36[-3]) {
      uVar20 = 1;
    }
    if (uVar20 == 0) {
      uVar20 = puVar36[-1];
      uVar27 = *puVar36;
      if (uVar27 == 0) {
        uVar14 = 1;
      }
      else {
        uVar14 = _malloc(uVar27);
        uVar17 = uVar27;
        if (uVar14 == 0) goto LAB_101145604;
      }
      _memcpy(uVar14,uVar20,uVar27);
      uVar17 = 0x8000000000000000;
      uVar20 = uVar27;
    }
    else if (uVar20 == 1) {
      uVar14 = puVar36[-2];
      uVar17 = puVar36[-1];
      if (uVar17 == 0) {
        uVar20 = 1;
      }
      else {
        uVar20 = _malloc(uVar17);
        if (uVar20 == 0) {
LAB_101145604:
          func_0x0001087c9084(1,uVar17);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x101145614);
          (*pcVar9)();
        }
      }
      _memcpy(uVar20,uVar14,uVar17);
      uVar27 = uVar27 & 0xffffffffffffff00 | (ulong)(byte)*puVar36;
      uVar14 = uVar17;
    }
    else {
      uVar20 = puVar36[-1];
      uVar27 = *puVar36;
      if (uVar27 == 0) {
        uVar14 = 1;
      }
      else {
        uVar14 = _malloc(uVar27);
        uVar17 = uVar27;
        if (uVar14 == 0) goto LAB_101145604;
      }
      _memcpy(uVar14,uVar20,uVar27);
      uVar17 = 0x8000000000000002;
      uVar20 = uVar27;
    }
    lVar31 = lVar31 + 1;
    puVar33[-2] = uVar17;
    puVar33[-1] = uVar20;
    *puVar33 = uVar14;
    puVar33[1] = uVar27;
    puVar36 = puVar36 + 4;
    lVar35 = lVar35 + -0x20;
    puVar33 = puVar33 + 4;
  } while (lVar22 != lVar31);
LAB_1011455d4:
  uVar12 = *(undefined8 *)(puVar10 + -0x168);
  puVar16[1] = *(undefined8 *)(puVar10 + -0x160);
  *puVar16 = uVar12;
  puVar16[2] = lVar22;
  return;
  while( true ) {
    puVar16 = (undefined8 *)(auVar50._8_8_ + lVar28);
    uVar12 = puVar16[1];
    plVar39 = (long *)*puVar16;
    lVar13 = *plVar39;
    *plVar39 = lVar13 + 1;
    if (lVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x101145478);
      (*pcVar9)();
    }
    ((undefined8 *)(lVar11 + lVar28))[1] = uVar12;
    *(undefined8 *)(lVar11 + lVar28) = plVar39;
    lVar28 = lVar28 + 0x10;
    lVar22 = lVar22 + -1;
    if (lVar22 == 0) break;
LAB_10114542c:
    if (lVar35 - lVar28 == 0) break;
  }
LAB_10114545c:
  *plVar29 = lVar31;
  plVar29[1] = lVar11;
  plVar29[2] = lVar31;
  return;
LAB_101145278:
  do {
    if (lVar35 == 0) break;
    uVar12 = *(undefined8 *)(lVar22 + 8);
    lVar28 = *(long *)(lVar22 + 0x10);
    if (lVar28 == 0) {
      lVar11 = 1;
    }
    else {
      lVar11 = _malloc(lVar28);
      if (lVar11 == 0) {
        *(long *)(puVar10 + -0xb8) = lVar31;
        func_0x0001087c9084(1,lVar28);
        goto LAB_101145380;
      }
    }
    _memcpy(lVar11,uVar12,lVar28);
    uVar12 = 0x8000000000000000;
    lVar13 = -0x8000000000000000;
    if (*(long *)(lVar22 + 0x18) != -0x8000000000000000) {
      uVar23 = puVar25[-4];
      lVar13 = puVar25[-3];
      if (lVar13 == 0) {
        unaff_x26 = (long *)0x1;
      }
      else {
        *(long *)(puVar10 + -0xb8) = lVar31;
        unaff_x26 = (long *)_malloc(lVar13,uVar23);
        if (unaff_x26 == (long *)0x0) {
          func_0x0001087c9084(1,lVar13);
LAB_101145380:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x101145384);
          (*pcVar9)();
        }
        lVar31 = *(long *)(puVar10 + -0xb8);
      }
      _memcpy(unaff_x26,uVar23,lVar13);
    }
    if (*(long *)(lVar22 + 0x30) != -0x8000000000000000) {
      FUN_101146714(puVar10 + -0x80,puVar25[-1],*puVar25);
      uVar12 = *(undefined8 *)(puVar10 + -0x80);
      *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x70);
      *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x78);
    }
    lVar22 = lVar22 + 0x48;
    uVar21 = *(undefined8 *)(puVar10 + -0x88);
    uVar23 = *(undefined8 *)(puVar10 + -0x90);
    lVar31 = lVar31 + 1;
    *(undefined8 *)(puVar10 + -0x78) = uVar21;
    *(undefined8 *)(puVar10 + -0x80) = uVar23;
    puVar16[-4] = lVar28;
    puVar16[-3] = lVar11;
    puVar16[-2] = lVar28;
    puVar16[-1] = lVar13;
    *puVar16 = unaff_x26;
    puVar16[1] = lVar13;
    puVar16[2] = uVar12;
    puVar16[4] = uVar21;
    puVar16[3] = uVar23;
    puVar16 = puVar16 + 9;
    puVar25 = puVar25 + 9;
    lVar35 = lVar35 + -0x48;
    lVar28 = *(long *)(puVar10 + -0xb0);
  } while (lVar28 != lVar31);
LAB_101145330:
  uVar12 = *(undefined8 *)(puVar10 + -0xa8);
  puVar16 = *(undefined8 **)(puVar10 + -0xc0);
  puVar16[1] = *(undefined8 *)(puVar10 + -0xa0);
  *puVar16 = uVar12;
  puVar16[2] = lVar28;
  return;
}

