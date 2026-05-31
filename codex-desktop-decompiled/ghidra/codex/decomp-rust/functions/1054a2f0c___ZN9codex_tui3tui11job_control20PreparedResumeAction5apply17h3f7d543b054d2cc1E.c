
/* WARNING: Type propagation algorithm not settling */

ulong * __ZN9codex_tui3tui11job_control20PreparedResumeAction5apply17h3f7d543b054d2cc1E
                  (short *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ushort *puVar20;
  ulong extraout_x11;
  uint uVar21;
  ulong unaff_x20;
  ushort uVar22;
  ushort *puVar23;
  ulong unaff_x22;
  ushort *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  ulong uStack_178;
  ushort *puStack_170;
  long lStack_168;
  ushort *puStack_160;
  ushort *puStack_158;
  ulong uStack_150;
  ushort *puStack_148;
  ushort uStack_140;
  ushort uStack_13e;
  ushort uStack_13c;
  ushort uStack_13a;
  ushort uStack_138;
  undefined6 uStack_136;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 ******ppppppuStack_120;
  ulong uStack_118;
  undefined8 *******pppppppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 uStack_f8;
  undefined8 *puStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if (*param_1 == 1) {
    uVar11 = *(ulong *)(param_2 + 0x48);
    if (uVar11 < 2) {
      unaff_x20 = *(ulong *)(param_1 + 1);
      __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                (param_2 + uVar11 * 0x20,unaff_x20);
      uVar11 = 1 - *(long *)(param_2 + 0x48);
      if (uVar11 < 2) {
        uVar22 = (ushort)(unaff_x20 >> 0x10);
        __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                  (param_2 + uVar11 * 0x20,unaff_x20);
        *(short *)(param_2 + 0x50) = (short)unaff_x20;
        *(ushort *)(param_2 + 0x52) = uVar22;
        *(int *)(param_2 + 0x54) = (int)(unaff_x20 >> 0x20);
        if ((uint)*(ushort *)(param_2 + 0x60) <= ((uint)(unaff_x20 >> 0x10) & 0xffff)) {
          uVar22 = *(ushort *)(param_2 + 0x60);
        }
        *(ushort *)(param_2 + 0x60) = uVar22;
        return (ulong *)0x0;
      }
      goto LAB_105506144;
    }
  }
  else {
    unaff_x20 = param_2 + 0x40;
    puVar12 = (ulong *)FUN_10512b0c0(unaff_x20,&UNK_108c98770,8);
    if ((((puVar12 != (ulong *)0x0) ||
         (uStack_50 = (undefined1 *)unaff_x20,
         puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                      (&uStack_50), puVar12 != (ulong *)0x0)) ||
        (puVar12 = (ulong *)FUN_10512b0c0(unaff_x20,&UNK_108ede6e8,8), puVar12 != (ulong *)0x0)) ||
       (uStack_50 = (undefined1 *)unaff_x20,
       puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                    (&uStack_50), puVar12 != (ulong *)0x0)) {
      return puVar12;
    }
    __ZN9crossterm8terminal4size17h59acbc74b9110907E(&uStack_50);
    if ((short)uStack_50 == 1) {
      if ((uStack_48 & 3) != 1) {
        return (ulong *)0x0;
      }
      uVar18 = *(undefined8 *)(uStack_48 - 1);
      puVar13 = *(undefined8 **)(uStack_48 + 7);
      pcVar8 = (code *)*puVar13;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar18);
      }
      if (puVar13[1] != 0) {
        _free(uVar18);
      }
      _free((undefined8 *)(uStack_48 - 1));
      return (ulong *)0x0;
    }
    uVar11 = *(ulong *)(param_2 + 0x48);
    if (uVar11 < 2) {
      uVar22 = uStack_50._2_2_;
      uVar6 = uStack_50._4_2_;
      unaff_x22 = (ulong)uStack_50._4_2_;
      unaff_x20 = (ulong)uStack_50._2_2_ << 0x20 | unaff_x22 << 0x30;
      __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                (param_2 + uVar11 * 0x20,unaff_x20);
      uVar11 = 1 - *(long *)(param_2 + 0x48);
      if (uVar11 < 2) {
        __ZN7ratatui6buffer6buffer6Buffer6resize17h024778539444f14bE
                  (param_2 + uVar11 * 0x20,unaff_x20);
        *(undefined4 *)(param_2 + 0x50) = 0;
        *(int *)(param_2 + 0x54) = (int)(unaff_x20 >> 0x20);
        *(undefined2 *)(param_2 + 0x60) = 0;
        if (uVar22 == 0) {
          return (ulong *)0x0;
        }
        if (uVar6 == 0) {
          return (ulong *)0x0;
        }
        lVar10 = param_2 + 0x40;
        puVar12 = (ulong *)FUN_10554dc30(lVar10,0,0);
        if ((puVar12 == (ulong *)0x0) &&
           (puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                         (&stack0xffffffffffffffc8), puVar12 == (ulong *)0x0)) {
          puVar13 = (undefined8 *)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(lVar10);
          puVar12 = (ulong *)__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                                       (&stack0xffffffffffffffc8,&UNK_108eedb07,3);
          iVar4 = *(int *)(puVar13 + 2);
          *(int *)(puVar13 + 2) = iVar4 + -1;
          if (iVar4 + -1 == 0) {
            puVar13[1] = 0;
            _pthread_mutex_unlock(*puVar13);
            puVar13 = (undefined8 *)0x0;
          }
          if ((puVar12 == (ulong *)0x0) &&
             (puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                           (&stack0xffffffffffffffc8), puVar12 == (ulong *)0x0)) {
            uVar11 = 1 - *(long *)(param_2 + 0x48);
            if (1 < uVar11) {
              uVar18 = func_0x000108a07bdc(uVar11,2,&UNK_10b3872d0);
              iVar4 = *(int *)(puVar13 + 2);
              *(int *)(puVar13 + 2) = iVar4 + -1;
              if (iVar4 + -1 == 0) {
                puVar13[1] = 0;
                _pthread_mutex_unlock(*puVar13);
              }
              lVar9 = __Unwind_Resume(uVar18);
              uStack_48 = 0x1054a2db8;
              puVar3 = (undefined8 *)(lVar9 + 0x40);
              puStack_68 = puVar13;
              puStack_60 = (undefined1 *)lVar10;
              uStack_58 = uVar18;
              uStack_50 = &stack0xfffffffffffffff0;
              puVar12 = (ulong *)FUN_10554dc30(puVar3,0,0);
              if ((puVar12 == (ulong *)0x0) &&
                 (puStack_78 = puVar3,
                 puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                              (&puStack_78), puVar12 == (ulong *)0x0)) {
                *(undefined4 *)(lVar9 + 0x5c) = 0;
                puVar13 = (undefined8 *)__ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(puVar3);
                puStack_78 = puVar13;
                puVar12 = (ulong *)__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h1f9f2d857fab7347E
                                             (&puStack_78,&UNK_108cde550,4);
                iVar4 = *(int *)(puVar13 + 2);
                *(int *)(puVar13 + 2) = iVar4 + -1;
                if (iVar4 + -1 == 0) {
                  puVar13[1] = 0;
                  _pthread_mutex_unlock(*puVar13);
                  puVar13 = (undefined8 *)0x0;
                }
                if ((((puVar12 == (ulong *)0x0) &&
                     (puStack_78 = puVar3,
                     puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                                  (&puStack_78), puVar12 == (ulong *)0x0)) &&
                    (puVar12 = (ulong *)FUN_10554dc30(puVar3,0,0), puVar12 == (ulong *)0x0)) &&
                   (puStack_78 = puVar3,
                   puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                                (&puStack_78), puVar12 == (ulong *)0x0)) {
                  *(undefined4 *)(lVar9 + 0x5c) = 0;
                  puStack_78 = puVar3;
                  puVar12 = (ulong *)__ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                                               (&puStack_78);
                  if (puVar12 == (ulong *)0x0) {
                    *(undefined2 *)(lVar9 + 0x60) = 0;
                    uVar11 = 1 - *(long *)(lVar9 + 0x48);
                    if (1 < uVar11) {
                      uVar18 = func_0x000108a07bdc(uVar11,2,&UNK_10b3872d0);
                      iVar4 = *(int *)(puVar13 + 2);
                      *(int *)(puVar13 + 2) = iVar4 + -1;
                      if (iVar4 + -1 == 0) {
                        puVar13[1] = 0;
                        _pthread_mutex_unlock(*puVar13);
                      }
                      lVar10 = __Unwind_Resume(uVar18);
                      uVar11 = *(ulong *)(lVar10 + 0x48);
                      uVar17 = 1 - uVar11;
                      if (uVar17 < 2) {
                        if (uVar11 < 2) {
                          __ZN9codex_tui15custom_terminal12diff_buffers17h43551b4d94c2c10cE
                                    (&uStack_178,lVar10 + uVar17 * 0x20,lVar10 + uVar11 * 0x20);
                          puVar1 = puStack_170 + lStack_168 * 0x18;
                          lVar9 = lStack_168 * 0x30;
                          do {
                            lVar19 = lVar9;
                            if (lVar19 == 0) goto LAB_1054a2f94;
                            lVar9 = lVar19 + -0x30;
                          } while (*(short *)((long)puStack_170 + lVar19 + -0x30) != 0);
                          *(undefined4 *)(lVar10 + 0x5c) =
                               *(undefined4 *)((long)puStack_170 + lVar19 + -0x2e);
LAB_1054a2f94:
                          puStack_160 = puStack_170;
                          uStack_150 = uStack_178;
                          puStack_158 = puStack_170;
                          puStack_148 = puVar1;
                          if (lStack_168 != 0) {
                            bVar5 = 0;
                            uVar11 = 0;
                            uStack_188 = 0;
                            uStack_1a4 = 0;
                            uStack_18c = 0;
                            puVar13 = (undefined8 *)((ulong)&uStack_140 | 2);
                            puVar20 = &uStack_140;
                            uStack_1a0 = extraout_x11;
                            uStack_198 = extraout_x11;
                            do {
                              puVar24 = puStack_170 + 0x18;
                              uVar22 = *puStack_170;
                              puStack_158 = puVar24;
                              if (uVar22 == 2) break;
                              uVar18 = *(undefined8 *)(puStack_170 + 1);
                              uVar29 = *(undefined8 *)(puStack_170 + 0xd);
                              uVar28 = *(undefined8 *)(puStack_170 + 9);
                              puVar13[1] = *(undefined8 *)(puStack_170 + 5);
                              *puVar13 = uVar18;
                              puVar13[3] = uVar29;
                              puVar13[2] = uVar28;
                              uVar18 = *(undefined8 *)(puStack_170 + 0x10);
                              *(undefined8 *)((long)puVar13 + 0x26) =
                                   *(undefined8 *)(puStack_170 + 0x14);
                              *(undefined8 *)((long)puVar13 + 0x1e) = uVar18;
                              uVar17 = (ulong)uStack_13e;
                              puVar23 = (ushort *)(ulong)uStack_13c;
                              uStack_140 = uVar22;
                              if ((!(bool)(bVar5 & (uint)uStack_13e ==
                                                   ((int)uStack_178 + 1U & 0xffff))) ||
                                 (uVar6 = uStack_13a, uVar7 = uStack_138,
                                 (uint)uStack_13c != ((uint)puVar20 & 0xffff))) {
                                auVar30 = FUN_1051f8340(lVar10 + 0x40,uVar17,puVar23);
                                puVar12 = auVar30._8_8_;
                                uVar6 = uStack_13a;
                                uVar7 = uStack_138;
                                if (((auVar30._0_8_ & 1) == 0) || (puVar12 == (ulong *)0x0))
                                goto joined_r0x0001054a30fc;
                                goto LAB_1054a34d0;
                              }
joined_r0x0001054a30fc:
                              bStack_f9 = (byte)((ulong)uStack_128 >> 0x38);
                              uStack_13a = uVar6;
                              uStack_138 = uVar7;
                              if ((uVar22 & 1) == 0) {
                                pppppppuStack_110 = (undefined8 *******)CONCAT62(uStack_136,uVar7);
                                uVar27 = uStack_118 >> 0x20 & 0xffff;
                                uVar21 = (uint)uVar11;
                                uVar26 = (uint)uVar27;
                                uStack_108 = (ulong)puStack_130;
                                uStack_f8 = (ulong)ppppppuStack_120;
                                if (uVar26 == uVar21) {
LAB_1054a3300:
                                  if ((byte)uStack_f8 == (uint)uStack_188) {
                                    if ((uint)uStack_188 == 0x12) {
                                      if (uStack_f8._1_1_ == uStack_1a4) goto LAB_1054a3368;
                                      goto LAB_1054a33e0;
                                    }
                                    if (((uint)uStack_188 == 0x11) &&
                                       (((uStack_f8._1_1_ != uStack_1a4 ||
                                         ((uint)uStack_f8._2_1_ != (uStack_1a8 & 0xff))) ||
                                        ((uint)uStack_f8._3_1_ != (uStack_1ac & 0xff)))))
                                    goto LAB_1054a33e0;
LAB_1054a3368:
                                    if (uStack_f8._4_1_ != uStack_188._4_4_) goto LAB_1054a33e0;
                                    if (uStack_188._4_4_ == 0x12) {
                                      if (uStack_f8._5_1_ != uStack_18c) goto LAB_1054a33e0;
                                      uVar16 = 0x12;
LAB_1054a33d8:
                                      uStack_188 = CONCAT44(uVar16,(uint)uStack_188);
                                    }
                                    else if (uStack_188._4_4_ == 0x11) {
                                      if (((uStack_f8._5_1_ == uStack_18c) &&
                                          ((uint)uStack_f8._6_1_ == ((uint)uStack_198 & 0xff))) &&
                                         ((uint)uStack_f8._7_1_ == ((uint)uStack_1a0 & 0xff))) {
                                        uVar16 = 0x11;
                                        goto LAB_1054a33d8;
                                      }
                                      goto LAB_1054a33e0;
                                    }
                                  }
                                  else {
LAB_1054a33e0:
                                    auVar30 = FUN_1051f7ba8(lVar10 + 0x40,
                                                            CONCAT44(*(uint *)(&UNK_108f52dc0 +
                                                                              ((ulong)uStack_f8.
                                                                                      _4_4_ & 0xff)
                                                                              * 4) |
                                                                     uStack_f8._4_4_ & 0xffffff00,
                                                                     *(uint *)(&UNK_108f52dc0 +
                                                                              (uStack_f8 & 0xff) * 4
                                                                              ) |
                                                                     (uint)uStack_f8 & 0xffffff00));
                                    puVar12 = auVar30._8_8_;
                                    if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                    goto LAB_1054a34b0;
                                    uStack_1a4 = (uint)uStack_f8 >> 8 & 0xff;
                                    uStack_1a8 = (uint)uStack_f8 >> 0x10;
                                    uStack_188 = uStack_f8 & 0xff000000ff;
                                    uStack_1ac = (uint)uStack_f8 >> 0x18;
                                    uStack_18c = uStack_f8._4_4_ >> 8 & 0xff;
                                    uStack_198 = (ulong)(uStack_f8._4_4_ >> 0x10);
                                    uStack_1a0 = (ulong)(uStack_f8._4_4_ >> 0x18);
                                  }
                                  bVar5 = bStack_f9;
                                  uVar26 = (uint)(byte)(bStack_f9 + 0x40);
                                  if (0x17 < uVar26) {
                                    uVar26 = 0x18;
                                  }
                                  if (bStack_f9 < 0xd8) {
                                    uStack_108 = (ulong)uVar26;
                                    pppppppuStack_110 = &pppppppuStack_110;
                                  }
                                  auVar30 = func_0x0001051f7dec(lVar10 + 0x40,pppppppuStack_110,
                                                                uStack_108);
                                  puVar12 = auVar30._8_8_;
                                  if (((auVar30._0_8_ & 1) == 0) || (puVar12 == (ulong *)0x0)) {
                                    if (bVar5 == 0xd8) {
                                      __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                                                (&uStack_138);
                                    }
                                    goto LAB_1054a2fd8;
                                  }
                                }
                                else {
                                  uVar2 = uVar21 & (uVar26 ^ 0xffff);
                                  if ((uVar2 >> 6 & 1) == 0) {
LAB_1054a3150:
                                    if ((uVar2 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x10);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                      if ((uVar26 >> 1 & 1) != 0) {
                                        auVar30 = FUN_1051f81d0(lVar10 + 0x40,2);
                                        puVar12 = auVar30._8_8_;
                                        if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                        goto LAB_1054a34b0;
                                      }
                                    }
                                    if ((uVar2 >> 2 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x11);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar2 >> 3 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x12);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar2 >> 1 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x10);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar2 >> 8 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x16);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar2 & 0x30) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x13);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    uVar26 = uVar26 & (uVar21 ^ 0xffff);
                                    if ((uVar26 >> 6 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0xb);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,1);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 >> 2 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,3);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 >> 3 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,4);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 >> 1 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,2);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 >> 8 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,0xd);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    if ((uVar26 >> 4 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,9);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    uVar11 = uVar27;
                                    if ((uVar26 >> 5 & 1) != 0) {
                                      auVar30 = FUN_1051f81d0(lVar10 + 0x40,10);
                                      puVar12 = auVar30._8_8_;
                                      if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                                      goto LAB_1054a34b0;
                                    }
                                    goto LAB_1054a3300;
                                  }
                                  auVar30 = FUN_1051f81d0(lVar10 + 0x40,0x14);
                                  puVar12 = auVar30._8_8_;
                                  if (((auVar30._0_8_ & 1) == 0) || (puVar12 == (ulong *)0x0))
                                  goto LAB_1054a3150;
                                }
LAB_1054a34b0:
                                if (bStack_f9 == 0xd8) {
                                  __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                                            (&uStack_138);
                                }
                                goto LAB_1054a34e4;
                              }
                              uVar26 = CONCAT22(uVar7,uVar6);
                              auVar30 = FUN_1051f81d0(lVar10 + 0x40,0);
                              puVar12 = auVar30._8_8_;
                              if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0)) {
LAB_1054a34d0:
                                if (((uVar22 & 1) == 0) && (uStack_128._7_1_ == -0x28)) {
                                  __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                                            (&uStack_138);
                                }
LAB_1054a34e4:
                                FUN_1051baa4c(&puStack_160);
                                return puVar12;
                              }
                              auVar30 = FUN_1051f8490(lVar10 + 0x40,
                                                      *(uint *)(&UNK_108f52dc0 +
                                                               ((ulong)uVar26 & 0xff) * 4) |
                                                      uVar26 & 0xffffff00);
                              puVar12 = auVar30._8_8_;
                              if (((auVar30._0_8_ & 1) != 0) && (puVar12 != (ulong *)0x0))
                              goto LAB_1054a34d0;
                              puVar12 = (ulong *)FUN_10512b0c0(lVar10 + 0x40,&UNK_108eedb0a,3);
                              if (puVar12 != (ulong *)0x0) goto LAB_1054a34d0;
                              uVar11 = 0;
                              uStack_1a0 = (ulong)(uVar7 >> 8);
                              uStack_188 = CONCAT44(uVar26,(uint)uStack_188) & 0xffffffffff;
                              uStack_198 = (ulong)uVar7;
                              uStack_18c = (uint)(uVar6 >> 8);
LAB_1054a2fd8:
                              bVar5 = 1;
                              puVar20 = puVar23;
                              uStack_178 = uVar17;
                              puStack_158 = puVar1;
                              puStack_170 = puVar24;
                            } while (puVar24 != puVar1);
                          }
                          FUN_1051baa4c(&puStack_160);
                          auVar30 = FUN_1051f8090(lVar10 + 0x40);
                          puVar12 = auVar30._8_8_;
                          if ((auVar30._0_8_ & 1) == 0) {
                            auVar30 = FUN_1051f8490(puVar12,0);
                            puVar12 = auVar30._8_8_;
                            if ((auVar30._0_8_ & 1) == 0) {
                              auVar30 = FUN_1051f81d0(puVar12,0);
                              puVar12 = auVar30._8_8_;
                              if ((auVar30._0_8_ & 1) == 0) {
                                puVar12 = (ulong *)0x0;
                              }
                            }
                          }
                          return puVar12;
                        }
                      }
                      else {
                        uVar11 = func_0x000108a07bdc(uVar17,2,&UNK_10b387300);
                      }
                      uVar18 = func_0x000108a07bdc(uVar11,2,&UNK_10b387318);
                      do {
                        FUN_1051baa4c(&puStack_160);
                        __Unwind_Resume(uVar18);
                        __ZN65__LT_compact_str__repr__Repr_u20_as_u20_core__ops__drop__Drop_GT_4drop13outlined_drop17h430714d7e358b972E
                                  (&uStack_138);
                      } while( true );
                    }
                    __ZN7ratatui6buffer6buffer6Buffer5reset17h0e531a4d8ca25097E
                              (lVar9 + uVar11 * 0x20);
                    puVar12 = (ulong *)0x0;
                  }
                }
              }
              return puVar12;
            }
            __ZN7ratatui6buffer6buffer6Buffer5reset17h0e531a4d8ca25097E(param_2 + uVar11 * 0x20);
            puVar12 = (ulong *)0x0;
          }
        }
        return puVar12;
      }
      goto LAB_105506144;
    }
  }
  uVar11 = func_0x000108a07bdc(uVar11,2,&UNK_10b3872e8);
LAB_105506144:
  puVar15 = &UNK_10b3872d0;
  puVar13 = (undefined8 *)func_0x000108a07bdc(uVar11,2,&UNK_10b3872d0);
  if (*(long *)(unaff_x22 + 8) != 0) {
    _free(unaff_x20);
  }
  _free(param_2);
  auVar30 = __Unwind_Resume(puVar13);
  lVar9 = auVar30._8_8_;
  uStack_58 = 0x105506178;
  puVar25 = (undefined8 *)(lVar9 + 8);
  puVar12 = (ulong *)*puVar25;
  puVar3 = *(undefined8 **)(lVar9 + 0x10);
  puStack_78 = puVar13;
  uStack_70 = unaff_x20;
  puStack_68 = (undefined8 *)param_2;
  puStack_60 = &stack0xfffffffffffffff0;
  puVar14 = (ulong *)(*(code *)puVar3[3])(&uStack_128,puVar12,puVar15);
  lVar10 = (long)uStack_128;
  if (uStack_128 == (ushort *)0x3) {
    uVar18 = 0x8000000000000005;
  }
  else {
    *(undefined8 *)(lVar9 + 8) = 1;
    *(undefined **)(lVar9 + 0x10) = &UNK_10b36e028;
    lVar19 = puVar3[1];
    if (lVar19 == 0x68 && puVar3[2] == 8) {
      uStack_138 = (ushort)puVar12;
      uStack_136 = (undefined6)((ulong)puVar12 >> 0x10);
      uStack_128 = &uStack_138;
      puStack_130 = puVar3;
      ppppppuStack_120 = (undefined8 ******)puVar25;
      if ((code *)*puVar3 != (code *)0x0) {
        puVar14 = (ulong *)(*(code *)*puVar3)(puVar12);
        puVar12 = (ulong *)CONCAT62(uStack_136,uStack_138);
      }
      *puVar12 = uStack_118;
      puVar12[1] = (ulong)pppppppuStack_110;
      *(undefined1 *)(puVar12 + 0xc) = 0;
      uVar18 = *(undefined8 *)(lVar9 + 8);
      puVar13 = *(undefined8 **)(lVar9 + 0x10);
      pcVar8 = (code *)*puVar13;
      if (pcVar8 != (code *)0x0) {
        puVar14 = (ulong *)(*pcVar8)(uVar18);
      }
      if (puVar13[1] != 0) {
        puVar14 = (ulong *)_free(uVar18);
      }
      *(ulong **)(lVar9 + 8) = puVar12;
    }
    else {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(puVar12);
      }
      if (lVar19 != 0) {
        _free(puVar12);
      }
      uStack_128 = (ushort *)uStack_118;
      ppppppuStack_120 = pppppppuStack_110;
      puVar14 = (ulong *)_malloc(0x68);
      if (puVar14 == (ulong *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x68);
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1055062e8);
        (*pcVar8)();
      }
      *puVar14 = uStack_118;
      puVar14[1] = (ulong)pppppppuStack_110;
      *(undefined1 *)(puVar14 + 0xc) = 0;
      *(ulong **)(lVar9 + 8) = puVar14;
    }
    *(undefined **)(lVar9 + 0x10) = &UNK_10b36e008;
    uVar18 = 0x8000000000000003;
    if (lVar10 == 0) {
      uVar18 = 0x8000000000000004;
    }
  }
  *auVar30._0_8_ = uVar18;
  return puVar14;
}

