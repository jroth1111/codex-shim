
void __ZN10codex_core16realtime_context28build_current_thread_section17hfb7c949c8e35406bE
               (ulong *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  int iStack_1c4;
  ulong uStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long *plStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long *plStack_148;
  long *plStack_140;
  ulong uStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uStack_1a8 = 0;
  plStack_1a0 = (long *)0x8;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_188 = (long *)0x8;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 8;
  uStack_168 = 0;
  if (param_3 == 0) {
    *param_1 = 0x8000000000000000;
    plStack_1b0 = (long *)0x8;
    plVar16 = plStack_188;
  }
  else {
    uStack_1b8 = 0;
    plStack_1b0 = (long *)0x8;
    plVar16 = param_2 + 0x18;
    plVar24 = param_2;
    do {
      plVar18 = plVar16;
      if (*plVar24 == 2) {
        plVar16 = (long *)plVar24[2];
        if (plVar24[3] == 9) {
          if ((*plVar16 == 0x6e61747369737361 && (char)plVar16[1] == 't') &&
             (func_0x000102e899b0(&uStack_a0,plVar24[5],plVar24[6]), plVar16 = plStack_98,
             uVar11 = uStack_a0, uStack_a0 != 0x8000000000000000)) {
            auVar28 = FUN_1033f63d0(plStack_98,uStack_90);
            lVar25 = auVar28._8_8_;
            if (lVar25 == 0) {
              lVar22 = 1;
              _memcpy(1,auVar28._0_8_,0);
            }
            else {
              lVar22 = _malloc(lVar25);
              if (lVar22 == 0) {
                func_0x0001087c9084(1,lVar25);
                goto LAB_102d56b3c;
              }
              _memcpy(lVar22,auVar28._0_8_,lVar25);
            }
            if (uVar11 != 0) {
              _free(plVar16);
            }
            uVar11 = uStack_168;
            if ((lVar25 != -0x8000000000000000) && (lVar25 != 0)) {
              if ((uStack_180 == 0) && (uStack_168 == 0)) {
                _free(lVar22);
              }
              else {
                if (uStack_168 == uStack_178) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_178);
                }
                plVar16 = (long *)(uStack_170 + uVar11 * 0x18);
                *plVar16 = lVar25;
                plVar16[1] = lVar22;
                plVar16[2] = lVar25;
                uStack_168 = uVar11 + 1;
              }
            }
          }
        }
        else if ((plVar24[3] == 4) && ((int)*plVar16 == 0x72657375)) {
          lVar25 = plVar24[5];
          lVar22 = plVar24[6];
          if (lVar22 != 0) {
            lVar27 = lVar22 << 5;
            puVar12 = (undefined8 *)(lVar25 + 0x18);
            do {
              if (puVar12[-3] == -0x8000000000000000) {
                uVar15 = puVar12[-1];
                uVar2 = *puVar12;
                __ZN14codex_protocol5items26parse_hook_prompt_fragment17h1a21072bbf2681afE
                          (&uStack_a0,uVar15,uVar2);
                if (uStack_a0 != 0x8000000000000000) {
                  if (uStack_a0 != 0) {
                    _free(plStack_98);
                  }
                  if (uStack_88 != 0) {
                    _free(uStack_80);
                  }
                  goto LAB_102d55d88;
                }
                uVar11 = func_0x000102e8ebdc(uVar15,uVar2);
                if ((uVar11 & 1) != 0) goto LAB_102d55d88;
              }
              puVar12 = puVar12 + 4;
              lVar27 = lVar27 + -0x20;
            } while (lVar27 != 0);
          }
          func_0x000102e899b0(&uStack_a0,lVar25,lVar22);
          plVar16 = plStack_98;
          uVar11 = uStack_a0;
          if (uStack_a0 != 0x8000000000000000) {
            auVar28 = FUN_1033f63d0(plStack_98,uStack_90);
            lVar25 = auVar28._8_8_;
            if (lVar25 == 0) {
              lVar22 = 1;
              _memcpy(1,auVar28._0_8_,0);
            }
            else {
              lVar22 = _malloc(lVar25);
              if (lVar22 == 0) {
                func_0x0001087c9084(1,lVar25);
                goto LAB_102d56b3c;
              }
              _memcpy(lVar22,auVar28._0_8_,lVar25);
            }
            if (uVar11 != 0) {
              _free(plVar16);
            }
            if ((lVar25 != -0x8000000000000000) && (lVar25 != 0)) {
              if ((uStack_180 == 0) && (uStack_168 == 0)) {
                uVar11 = 0;
                if (uStack_190 == 0) {
LAB_102d5601c:
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_190);
                }
              }
              else {
                plStack_98 = plStack_188;
                uStack_a0 = uStack_190;
                uStack_90 = uStack_180;
                uStack_190 = 0;
                plStack_188 = (long *)0x8;
                uStack_80 = uStack_170;
                uStack_88 = uStack_178;
                uStack_78 = uStack_168;
                uStack_180 = 0;
                uStack_178 = 0;
                uStack_170 = 8;
                uStack_168 = 0;
                if (uStack_1b8 == uStack_1a8) {
                  func_0x00010893d5fc(&uStack_1a8);
                  plStack_1b0 = plStack_1a0;
                }
                puVar17 = (ulong *)(plStack_1b0 + uStack_1b8 * 6);
                puVar17[3] = uStack_88;
                puVar17[2] = uStack_90;
                puVar17[5] = uStack_78;
                puVar17[4] = uStack_80;
                puVar17[1] = (ulong)plStack_98;
                *puVar17 = uStack_a0;
                uStack_1b8 = uStack_1b8 + 1;
                uVar11 = uStack_180;
                uStack_198 = uStack_1b8;
                if (uStack_180 == uStack_190) goto LAB_102d5601c;
              }
              plVar16 = plStack_188 + uVar11 * 3;
              *plVar16 = lVar25;
              plVar16[1] = lVar22;
              plVar16[2] = lVar25;
              uStack_180 = uVar11 + 1;
            }
          }
        }
      }
LAB_102d55d88:
      lVar25 = 0;
      if (plVar18 != param_2 + param_3 * 0x18) {
        lVar25 = 0xc0;
      }
      plVar16 = (long *)((long)plVar18 + lVar25);
      plVar24 = plVar18;
    } while (plVar18 != param_2 + param_3 * 0x18);
    if ((uStack_180 != 0) || (uStack_168 != 0)) {
      plStack_98 = plStack_188;
      uStack_a0 = uStack_190;
      uStack_80 = uStack_170;
      uStack_88 = uStack_178;
      uStack_90 = uStack_180;
      uStack_78 = uStack_168;
      if (uStack_1b8 == uStack_1a8) {
        func_0x00010893d5fc(&uStack_1a8);
        plStack_1b0 = plStack_1a0;
        puVar17 = (ulong *)(plStack_1a0 + uStack_1b8 * 6);
        puVar17[1] = (ulong)plStack_98;
        *puVar17 = uStack_a0;
        puVar17[3] = uStack_88;
        puVar17[2] = uStack_90;
        puVar17[5] = uStack_78;
        puVar17[4] = uStack_80;
        uStack_198 = uStack_1b8 + 1;
        puVar12 = (undefined8 *)_malloc(0x18);
      }
      else {
        puVar17 = (ulong *)(plStack_1b0 + uStack_1b8 * 6);
        puVar17[3] = uStack_178;
        puVar17[2] = uStack_180;
        puVar17[5] = uStack_168;
        puVar17[4] = uStack_170;
        puVar17[1] = (ulong)plStack_188;
        *puVar17 = uStack_190;
        uStack_198 = uStack_1b8 + 1;
        if (uStack_1b8 == 0xffffffffffffffff) {
          *param_1 = 0x8000000000000000;
          uVar11 = uStack_1a8;
          goto joined_r0x000102d5681c;
        }
        puVar12 = (undefined8 *)_malloc(0x18);
      }
      bVar3 = false;
      uStack_1b8 = uStack_1b8 + 1;
joined_r0x000102d56830:
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x18);
      }
      else {
        puVar13 = (undefined8 *)_malloc(0x61);
        if (puVar13 != (undefined8 *)0x0) {
          *(undefined1 *)(puVar13 + 0xc) = 0x2e;
          puVar13[5] = 0x7463617865207369;
          puVar13[4] = 0x6874206d6f726620;
          puVar13[7] = 0x6568742065735520;
          puVar13[6] = 0x2e64616572687420;
          puVar13[9] = 0x797469756e69746e;
          puVar13[8] = 0x6f6320726f66206d;
          puVar13[0xb] = 0x676e69646e6f7073;
          puVar13[10] = 0x6572206e65687720;
          puVar13[1] = 0x7265737520746e65;
          *puVar13 = 0x6365722074736f4d;
          puVar13[3] = 0x736e72757420746e;
          puVar13[2] = 0x617473697373612f;
          *puVar12 = 0x61;
          puVar12[1] = puVar13;
          puVar12[2] = 0x61;
          lStack_160 = 1;
          lStack_150 = 1;
          puStack_158 = puVar12;
          FUN_1034c1c4c(&uStack_a0,puVar12,1,&UNK_108d5275f,1);
          uVar11 = uStack_90 >> 2;
          if ((uStack_90 & 3) != 0) {
            uVar11 = uVar11 + 1;
          }
          uVar21 = 0;
          if (uVar11 < 0x4b1) {
            uVar21 = 0x4b0 - uVar11;
          }
          if (uStack_a0 != 0) {
            _free(plStack_98);
          }
          uVar11 = uStack_1a8;
          iStack_1c4 = 0;
          lVar25 = 0;
          plVar16 = plStack_1b0 + uStack_1b8 * 6;
          uStack_138 = uStack_1a8;
          lStack_128 = 0;
          plStack_148 = plStack_1b0;
          plStack_140 = plStack_1b0;
          plStack_130 = plVar16;
LAB_102d5621c:
          uVar19 = uVar21;
          if (299 < uVar21) {
            uVar19 = 300;
          }
          plVar24 = plVar16 + -6;
          lVar22 = *plVar24;
          plVar18 = plVar24;
          if (uVar21 == 0) {
            if (lVar22 != -0x8000000000000000) {
              plStack_108 = (long *)plVar16[-4];
              uStack_110 = plVar16[-5];
              uVar19 = plVar16[-2];
              uStack_100 = plVar16[-3];
              uVar21 = plVar16[-1];
              lStack_128 = lVar25 + 1;
              plStack_130 = plVar24;
              lStack_120 = lVar25;
              lStack_118 = lVar22;
              uStack_f8 = uVar19;
              uStack_f0 = uVar21;
              uStack_a0 = uStack_110;
              plStack_98 = plStack_108;
              uStack_90 = uStack_100;
              uStack_88 = uVar19;
              uStack_80 = uVar21;
              if (uVar21 != 0) {
                puVar12 = (undefined8 *)(uVar19 + 8);
                do {
                  if (puVar12[-1] != 0) {
                    _free(*puVar12);
                  }
                  puVar12 = puVar12 + 3;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              if (uStack_100 != 0) {
                _free(uVar19);
              }
              uVar21 = uStack_110;
              if (plStack_108 != (long *)0x0) {
                puVar12 = (undefined8 *)(uStack_110 + 8);
                plVar16 = plStack_108;
                do {
                  if (puVar12[-1] != 0) {
                    _free(*puVar12);
                  }
                  puVar12 = puVar12 + 3;
                  plVar16 = (long *)((long)plVar16 + -1);
                } while (plVar16 != (long *)0x0);
              }
              plVar18 = plStack_130;
              lVar25 = lStack_128;
              if (lVar22 != 0) {
                _free(uVar21);
                plVar18 = plStack_130;
                lVar25 = lStack_128;
              }
            }
          }
          else {
            plVar23 = plVar16;
            lVar27 = lVar25;
            plVar16 = plVar24;
            if (lVar22 != -0x8000000000000000) {
              do {
                plStack_108 = (long *)plVar23[-4];
                uStack_110 = plVar23[-5];
                uStack_f8 = plVar23[-2];
                uStack_100 = plVar23[-3];
                uStack_f0 = plVar23[-1];
                lVar25 = lVar27 + 1;
                lStack_e8 = 0;
                puStack_e0 = (undefined8 *)0x8;
                lStack_d8 = 0;
                lStack_120 = lVar27;
                lStack_118 = lVar22;
                uStack_a0 = uStack_110;
                plStack_98 = plStack_108;
                uStack_90 = uStack_100;
                uStack_88 = uStack_f8;
                uStack_80 = uStack_f0;
                if (lVar27 == 0) {
                  puVar12 = (undefined8 *)_malloc(0xf);
                  uVar15 = 0xf;
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = 0x6574614c20232323;
                    *(undefined8 *)((long)puVar12 + 7) = 0x6e72757420747365;
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                              (&lStack_e8,0xf);
                    *puStack_e0 = 0xf;
                    puStack_e0[1] = puVar12;
                    puStack_e0[2] = 0xf;
                    lStack_d8 = 1;
                    lVar27 = lStack_d8;
                    plVar23 = plStack_108;
                    goto joined_r0x000102d56400;
                  }
LAB_102d56b00:
                  plStack_130 = plVar16;
                  lStack_128 = lVar25;
                  func_0x0001087c9084(1,uVar15);
                  goto LAB_102d56b3c;
                }
                plStack_b8 = &lStack_120;
                puStack_b0 = &
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&uStack_d0,s_____Previous_turn_108af16e1,&plStack_b8);
                lVar27 = lStack_d8;
                if (lStack_d8 == lStack_e8) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_e8);
                }
                puVar12 = puStack_e0 + lVar27 * 3;
                puVar12[1] = uStack_c8;
                *puVar12 = uStack_d0;
                puVar12[2] = uStack_c0;
                lVar27 = lVar27 + 1;
                plVar23 = plStack_108;
joined_r0x000102d56400:
                plStack_108 = plVar23;
                uVar26 = uStack_f0;
                if (plVar23 != (long *)0x0) {
                  lStack_d8 = lVar27;
                  puVar14 = (undefined4 *)_malloc(5);
                  uVar15 = 5;
                  if (puVar14 == (undefined4 *)0x0) goto LAB_102d56b00;
                  *(undefined1 *)(puVar14 + 1) = 0x3a;
                  *puVar14 = 0x72657355;
                  if (lVar27 == lStack_e8) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                              (&lStack_e8,5);
                  }
                  puVar12 = puStack_e0 + lVar27 * 3;
                  *puVar12 = 5;
                  puVar12[1] = puVar14;
                  puVar12[2] = 5;
                  lStack_d8 = lVar27 + 1;
                  FUN_1034c1c4c(&plStack_b8,uStack_110,plVar23,&UNK_108d54189,2);
                  uVar26 = uStack_a8;
                  puVar7 = puStack_b0;
                  plVar24 = plStack_b8;
                  lVar27 = lStack_d8;
                  if (lStack_d8 == lStack_e8) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_e8)
                    ;
                  }
                  plVar18 = puStack_e0 + lVar27 * 3;
                  *plVar18 = (long)plVar24;
                  plVar18[1] = (long)puVar7;
                  plVar18[2] = uVar26;
                  lVar27 = lVar27 + 1;
                  uVar26 = uStack_f0;
                }
                uStack_f0 = uVar26;
                lStack_d8 = lVar27;
                if (uVar26 != 0) {
                  if (lVar27 == lStack_e8) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_e8)
                    ;
                  }
                  puVar12 = puStack_e0 + lVar27 * 3;
                  *puVar12 = 0;
                  puVar12[1] = 1;
                  puVar12[2] = 0;
                  lVar1 = lVar27 + 1;
                  lStack_d8 = lVar1;
                  puVar12 = (undefined8 *)_malloc(10);
                  uVar15 = 10;
                  if (puVar12 == (undefined8 *)0x0) goto LAB_102d56b00;
                  *(undefined2 *)(puVar12 + 1) = 0x3a74;
                  *puVar12 = 0x6e61747369737341;
                  if (lVar1 == lStack_e8) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_e8)
                    ;
                  }
                  puVar13 = puStack_e0 + lVar1 * 3;
                  *puVar13 = 10;
                  puVar13[1] = puVar12;
                  puVar13[2] = 10;
                  lStack_d8 = lVar27 + 2;
                  FUN_1034c1c4c(&plStack_b8,uStack_f8,uVar26,&UNK_108d54189,2);
                  uVar4 = uStack_a8;
                  puVar7 = puStack_b0;
                  plVar24 = plStack_b8;
                  lVar27 = lStack_d8;
                  if (lStack_d8 == lStack_e8) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_e8)
                    ;
                  }
                  plVar18 = puStack_e0 + lVar27 * 3;
                  *plVar18 = (long)plVar24;
                  plVar18[1] = (long)puVar7;
                  plVar18[2] = uVar4;
                  lStack_d8 = lVar27 + 1;
                }
                FUN_1034c1c4c(&plStack_b8,puStack_e0,lStack_d8,&UNK_108d5275f,1);
                puVar7 = puStack_b0;
                plVar5 = plStack_b8;
                __ZN10codex_core16realtime_context38truncate_realtime_text_to_token_budget17h5a222b9f490802eeE
                          (&plStack_b8,puStack_b0,uStack_a8,uVar19);
                uVar4 = uStack_a8;
                lVar27 = lStack_150;
                plVar24 = plVar16;
                plVar18 = plVar16;
                if (uStack_a8 != 0) goto LAB_102d56628;
                if (plStack_b8 != (long *)0x0) {
                  _free(puStack_b0);
                }
                if (plVar5 != (long *)0x0) {
                  _free(puVar7);
                }
                puVar12 = puStack_e0;
                if (lStack_d8 != 0) {
                  puVar13 = puStack_e0 + 1;
                  lVar27 = lStack_d8;
                  do {
                    if (puVar13[-1] != 0) {
                      _free(*puVar13);
                    }
                    puVar13 = puVar13 + 3;
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                }
                if (lStack_e8 != 0) {
                  _free(puVar12);
                }
                uVar4 = uStack_f8;
                if (uVar26 != 0) {
                  puVar12 = (undefined8 *)(uStack_f8 + 8);
                  do {
                    if (puVar12[-1] != 0) {
                      _free(*puVar12);
                    }
                    puVar12 = puVar12 + 3;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                if (uStack_100 != 0) {
                  _free(uVar4);
                }
                uVar26 = uStack_110;
                if (plVar23 != (long *)0x0) {
                  puVar12 = (undefined8 *)(uStack_110 + 8);
                  do {
                    if (puVar12[-1] != 0) {
                      _free(*puVar12);
                    }
                    puVar12 = puVar12 + 3;
                    plVar23 = (long *)((long)plVar23 + -1);
                  } while (plVar23 != (long *)0x0);
                }
                if (lVar22 != 0) {
                  _free(uVar26);
                }
                if (plStack_1b0 == plVar16) break;
                plVar24 = plVar16 + -6;
                lVar22 = *plVar24;
                plVar23 = plVar16;
                lVar27 = lVar25;
                plVar16 = plVar24;
                plVar18 = plVar24;
                if (lVar22 == -0x8000000000000000) break;
              } while( true );
            }
          }
          goto LAB_102d568c4;
        }
        func_0x0001087c9084(1,0x61);
      }
LAB_102d56b3c:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x102d56b40);
      (*pcVar9)();
    }
    if (uStack_1b8 != 0) {
      bVar3 = true;
      puVar12 = (undefined8 *)_malloc(0x18);
      goto joined_r0x000102d56830;
    }
    *param_1 = 0x8000000000000000;
    plVar16 = plStack_188;
    if ((uStack_178 != 0) && (_free(uStack_170), plVar16 = plStack_188, uStack_180 != 0)) {
      plVar24 = plStack_188 + 1;
      uVar11 = uStack_180;
      do {
        if (plVar24[-1] != 0) {
          _free(*plVar24);
        }
        plVar24 = plVar24 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  uVar11 = uStack_1a8;
  if (uStack_190 != 0) {
    _free(plVar16);
    uVar11 = uStack_1a8;
  }
  goto joined_r0x000102d5681c;
LAB_102d56628:
  uVar19 = uStack_a8 >> 2;
  if ((uStack_a8 & 3) != 0) {
    uVar19 = uVar19 + 1;
  }
  plStack_130 = plVar16;
  lStack_128 = lVar25;
  if (lStack_150 == lStack_160) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_160);
  }
  puVar8 = puStack_b0;
  plVar6 = plStack_b8;
  puVar12 = puStack_158 + lVar27 * 3;
  *puVar12 = 0;
  puVar12[1] = 1;
  puVar12[2] = 0;
  lVar1 = lVar27 + 1;
  if (lVar1 == lStack_160) {
    lStack_150 = lVar1;
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_160);
  }
  plVar20 = puStack_158 + lVar1 * 3;
  *plVar20 = (long)plVar6;
  plVar20[1] = (long)puVar8;
  plVar20[2] = uVar4;
  lStack_150 = lVar27 + 2;
  bVar10 = uVar19 <= uVar21;
  uVar19 = uVar21 - uVar19;
  uVar21 = 0;
  if (bVar10) {
    uVar21 = uVar19;
  }
  if (plVar5 != (long *)0x0) {
    _free(puVar7);
  }
  puVar12 = puStack_e0;
  if (lStack_d8 != 0) {
    puVar13 = puStack_e0 + 1;
    lVar27 = lStack_d8;
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  if (lStack_e8 != 0) {
    _free(puVar12);
  }
  uVar19 = uStack_f8;
  if (uVar26 != 0) {
    puVar12 = (undefined8 *)(uStack_f8 + 8);
    do {
      if (puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 3;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (uStack_100 != 0) {
    _free(uVar19);
  }
  uVar19 = uStack_110;
  if (plVar23 != (long *)0x0) {
    puVar12 = (undefined8 *)(uStack_110 + 8);
    do {
      if (puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 3;
      plVar23 = (long *)((long)plVar23 + -1);
    } while (plVar23 != (long *)0x0);
  }
  if (lVar22 != 0) {
    _free(uVar19);
  }
  iStack_1c4 = iStack_1c4 + 1;
  if (plStack_1b0 == plVar16) goto LAB_102d568c4;
  goto LAB_102d5621c;
LAB_102d568c4:
  lStack_128 = lVar25;
  plStack_130 = plVar18;
  if ((long)plVar24 - (long)plStack_1b0 != 0) {
    uVar21 = (ulong)((long)plVar24 - (long)plStack_1b0) / 0x30;
    plVar16 = plStack_1b0;
    do {
      FUN_1032a23f0(plVar16);
      plVar16 = plVar16 + 6;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (uVar11 != 0) {
    _free(plStack_1b0);
  }
  if (iStack_1c4 < 1) {
    *param_1 = 0x8000000000000000;
    puVar12 = puStack_158;
    lVar25 = lStack_150;
  }
  else {
    FUN_1034c1c4c(&uStack_a0,puStack_158,lStack_150,&UNK_108d5275f,1);
    param_1[1] = (ulong)plStack_98;
    *param_1 = uStack_a0;
    param_1[2] = uStack_90;
    puVar12 = puStack_158;
    lVar25 = lStack_150;
  }
  puStack_158 = puVar12;
  lStack_150 = lVar25;
  if (lVar25 != 0) {
    puVar13 = puVar12 + 1;
    do {
      if (puVar13[-1] != 0) {
        _free(*puVar13);
      }
      puVar13 = puVar13 + 3;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (lStack_160 != 0) {
    _free(puVar12);
  }
  uVar11 = uStack_170;
  if (!bVar3) {
    return;
  }
  if (uStack_168 != 0) {
    puVar12 = (undefined8 *)(uStack_170 + 8);
    uVar21 = uStack_168;
    do {
      if (puVar12[-1] != 0) {
        _free(*puVar12);
      }
      puVar12 = puVar12 + 3;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (uStack_178 != 0) {
    _free(uVar11);
  }
  plStack_1b0 = plStack_188;
  uVar11 = uStack_190;
  if (uStack_180 != 0) {
    plVar16 = plStack_188 + 1;
    uVar21 = uStack_180;
    do {
      if (plVar16[-1] != 0) {
        _free(*plVar16);
      }
      plVar16 = plVar16 + 3;
      uVar21 = uVar21 - 1;
      uVar11 = uStack_190;
    } while (uVar21 != 0);
  }
joined_r0x000102d5681c:
  if (uVar11 != 0) {
    _free(plStack_1b0);
  }
  return;
}

