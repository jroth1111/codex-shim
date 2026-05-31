
/* WARNING: Possible PIC construction at 0x0001035cf934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035cf938) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1035cefc4(undefined8 *param_1,ulong *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined1 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  ulong unaff_x19;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *******pppppppuVar16;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******unaff_x24;
  undefined8 *******pppppppuVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *******pppppppuVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  undefined1 *unaff_x29;
  undefined1 *puVar29;
  undefined8 unaff_x30;
  undefined1 auStack_340 [88];
  ulong uStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined8 *******pppppppuStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long *plStack_220;
  long *plStack_218;
  ulong uStack_210;
  long *plStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 *******pppppppuStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *******pppppppuStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 uStack_130;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  
  puVar29 = &stack0xfffffffffffffff0;
  puVar5 = auStack_340 + 0x50;
  uVar14 = *param_2;
  uVar11 = uVar14 ^ 0x8000000000000000;
  if (-1 < (long)uVar14) {
    uVar11 = 6;
  }
  if ((long)uVar11 < 4) {
    if ((long)uVar11 < 2) {
      if (uVar11 == 0) {
        pppppppuVar9 = (undefined8 *******)(param_2 + 1);
        puVar5 = (undefined1 *)register0x00000008;
        uVar14 = unaff_x19;
        puVar29 = unaff_x29;
        goto SUB_10892c8e4;
      }
      pppppppuStack_280 = (undefined8 *******)param_2[1];
      uVar10 = 2;
    }
    else {
      if (uVar11 != 2) {
        pppppppuStack_288 =
             (undefined8 *******)((ulong)CONCAT61(pppppppuStack_288._2_6_,(char)param_2[1]) << 8);
        goto LAB_1035cf500;
      }
      pppppppuStack_280 = (undefined8 *******)param_2[1];
      uVar10 = 3;
    }
    pppppppuStack_288 = (undefined8 *******)CONCAT71(pppppppuStack_288._1_7_,uVar10);
LAB_1035cf500:
    func_0x000108921f70(param_1,&pppppppuStack_288,&pppppppuStack_180,&UNK_10b29cab0);
    return;
  }
  if (uVar11 != 5) {
    if (uVar11 == 6) {
      uStack_2e8 = param_2[6];
      plVar21 = (long *)param_2[1];
      pppppppuVar9 = (undefined8 *******)param_2[2];
      uVar11 = param_2[4];
      if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
        _free(param_2[3] + uVar11 * -8 + -8);
      }
      plVar12 = plVar21 + (long)pppppppuVar9 * 0xe;
      pppppppuStack_288 = (undefined8 *******)0x8000000000000000;
      pppppppuStack_1b0 = (undefined8 *******)0x8000000000000000;
      pppppppuStack_198 = (undefined8 *******)0x8000000000000000;
      plStack_220 = plVar21;
      uStack_210 = uVar14;
      plStack_208 = plVar12;
      if (pppppppuVar9 == (undefined8 *******)0x0) {
        pppppppuVar13 = (undefined8 *******)0x8000000000000000;
        pppppppuStack_2c0 = (undefined8 *******)0x8000000000000000;
        plVar22 = plVar12;
        puStack_2c8 = param_1;
        plStack_218 = plVar21;
      }
      else {
        pppppppuVar13 = (undefined8 *******)0x8000000000000000;
        pppppppuStack_2c0 = (undefined8 *******)0x8000000000000000;
        plVar24 = plVar12;
        puStack_2c8 = param_1;
        do {
          plVar12 = plVar24;
          plVar22 = plVar21 + 0xe;
          lVar17 = *plVar21;
          plStack_218 = plVar22;
          if (lVar17 == -0x8000000000000000) break;
          plVar24 = (long *)plVar21[1];
          pppppppuVar19 = (undefined8 *******)plVar21[2];
          pppppppuStack_108 = (undefined8 *******)plVar21[6];
          pppppppuStack_110 = (undefined8 *******)plVar21[5];
          lStack_f8 = plVar21[8];
          lStack_100 = plVar21[7];
          lStack_e8 = plVar21[10];
          lStack_f0 = plVar21[9];
          lStack_d8 = plVar21[0xc];
          lStack_e0 = plVar21[0xb];
          pppppppuStack_118 = (undefined8 *******)plVar21[4];
          pppppppuStack_120 = (undefined8 *******)plVar21[3];
          pppppppuStack_2b8 = pppppppuVar13;
          if (pppppppuVar19 == (undefined8 *******)0x0) {
            pppppppuVar13 = (undefined8 *******)0x1;
          }
          else {
            pppppppuVar13 = (undefined8 *******)_malloc(pppppppuVar19);
            if (pppppppuVar13 == (undefined8 *******)0x0) {
              func_0x0001087c9084(1,pppppppuVar19);
              goto LAB_1035cfbe4;
            }
          }
          _memcpy(pppppppuVar13,plVar24,pppppppuVar19);
          if (pppppppuStack_288 != (undefined8 *******)0x8000000000000000) {
            if (pppppppuStack_288 != (undefined8 *******)0x0) {
              _free(pppppppuStack_280);
            }
            FUN_10337b6e4(&pppppppuStack_270);
          }
          pppppppuStack_258 = pppppppuStack_108;
          pppppppuStack_260 = pppppppuStack_110;
          lStack_248 = lStack_f8;
          lStack_250 = lStack_100;
          lStack_238 = lStack_e8;
          lStack_240 = lStack_f0;
          lStack_228 = lStack_d8;
          lStack_230 = lStack_e0;
          pppppppuStack_268 = pppppppuStack_118;
          pppppppuStack_270 = pppppppuStack_120;
          if (pppppppuVar19 == (undefined8 *******)0xe) {
            iVar7 = 1;
            if (*plVar24 != 0x64656c6261736964 || *(long *)((long)plVar24 + 6) != 0x736c6f6f745f6465
               ) {
              iVar7 = 2;
            }
          }
          else if (pppppppuVar19 == (undefined8 *******)0xd) {
            iVar7 = 2;
            if (*plVar24 == 0x7265766f63736964 && *(long *)((long)plVar24 + 5) == 0x73656c6261726576
               ) {
              iVar7 = 0;
            }
          }
          else {
            iVar7 = 2;
          }
          pppppppuStack_288 = pppppppuVar19;
          pppppppuStack_280 = pppppppuVar13;
          pppppppuStack_278 = pppppppuVar19;
          if (lVar17 != 0) {
            _free(plVar24);
          }
          plVar24 = plVar12;
          if (iVar7 == 0) {
            if (pppppppuStack_2c0 == (undefined8 *******)0x8000000000000000) {
              pppppppuStack_288 = (undefined8 *******)0x8000000000000000;
              if (pppppppuVar19 != (undefined8 *******)0x8000000000000000) {
                func_0x00010367ea74(&pppppppuStack_180,&pppppppuStack_270);
                pppppppuVar27 = pppppppuStack_140;
                if (pppppppuStack_180 == (undefined8 *******)0x2) {
                  if (pppppppuVar19 != (undefined8 *******)0x0) {
                    _free(pppppppuVar13);
                  }
                }
                else {
                  pppppppuStack_98 = pppppppuStack_148;
                  pppppppuStack_a0 = pppppppuStack_150;
                  pppppppuStack_88 = pppppppuStack_138;
                  pppppppuStack_90 = pppppppuStack_140;
                  pppppppuStack_b8 = pppppppuStack_168;
                  pppppppuStack_c0 = pppppppuStack_170;
                  pppppppuStack_a8 = pppppppuStack_158;
                  pppppppuStack_b0 = pppppppuStack_160;
                  uStack_80 = uStack_130;
                  pppppppuStack_c8 = pppppppuStack_178;
                  pppppppuStack_d0 = pppppppuStack_180;
                  if (pppppppuStack_140 == pppppppuStack_150) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                              (&pppppppuStack_a0);
                  }
                  pppppppuVar16 = pppppppuStack_98;
                  if (pppppppuVar27 != (undefined8 *******)0x0) {
                    _memmove(pppppppuStack_98 + 3,pppppppuStack_98,(long)pppppppuVar27 * 0x18);
                  }
                  *pppppppuVar16 = pppppppuVar19;
                  pppppppuVar16[1] = pppppppuVar13;
                  pppppppuVar16[2] = pppppppuVar19;
                  pppppppuStack_140 = (undefined8 *******)((long)pppppppuVar27 + 1);
                  pppppppuStack_158 = pppppppuStack_a8;
                  pppppppuStack_160 = pppppppuStack_b0;
                  pppppppuStack_148 = pppppppuStack_98;
                  pppppppuStack_150 = pppppppuStack_a0;
                  uStack_130 = uStack_80;
                  pppppppuStack_178 = pppppppuStack_c8;
                  pppppppuStack_180 = pppppppuStack_d0;
                  pppppppuStack_168 = pppppppuStack_b8;
                  pppppppuStack_170 = pppppppuStack_c0;
                  pppppppuStack_138 = pppppppuStack_88;
                  pppppppuVar13 = pppppppuStack_b0;
                  pppppppuVar19 = pppppppuStack_d0;
                  pppppppuStack_90 = pppppppuStack_140;
                  if (pppppppuStack_d0 != (undefined8 *******)0x2) goto LAB_1035cf948;
                }
                pppppppuStack_2c0 = pppppppuStack_178;
                pppppppuStack_2d8 = pppppppuStack_170;
                pppppppuStack_2d0 = pppppppuStack_168;
                pppppppuVar13 = pppppppuStack_2b8;
                pppppppuStack_1b0 = pppppppuStack_2c0;
                pppppppuStack_1a8 = pppppppuStack_2d8;
                pppppppuStack_1a0 = pppppppuStack_2d0;
                goto LAB_1035cf1ac;
              }
              pppppppuVar13 = (undefined8 *******)_malloc(0x10);
              if (pppppppuVar13 == (undefined8 *******)0x0) {
                pppppppuStack_2c0 = (undefined8 *******)0x8000000000000000;
LAB_1035cfbd8:
                func_0x0001087c9084(1,0x10);
                goto LAB_1035cfbe4;
              }
              pppppppuVar13[1] = (undefined8 ******)0x676e697373696d20;
              *pppppppuVar13 = (undefined8 ******)0x73692065756c6176;
              pppppppuStack_168 = (undefined8 *******)0x10;
              pppppppuStack_150 = (undefined8 *******)0x0;
              pppppppuStack_158 = (undefined8 *******)0x10;
              pppppppuStack_148 = (undefined8 *******)0x8;
              pppppppuStack_140 = (undefined8 *******)0x0;
              pppppppuStack_138 = (undefined8 *******)0x0;
              pppppppuVar19 = (undefined8 *******)0x0;
LAB_1035cf948:
              pppppppuStack_1c8 = pppppppuStack_140;
              pppppppuStack_1d0 = pppppppuStack_148;
              uStack_1b8 = uStack_130;
              pppppppuStack_1c0 = pppppppuStack_138;
              pppppppuVar23 = (undefined8 *******)0x8000000000000000;
              pppppppuVar27 = pppppppuStack_170;
              pppppppuVar16 = pppppppuStack_158;
              pppppppuVar18 = pppppppuStack_150;
              pppppppuVar20 = pppppppuStack_168;
              pppppppuVar28 = pppppppuStack_178;
              pppppppuStack_160 = pppppppuVar13;
            }
            else {
              func_0x000108922524(&pppppppuStack_d0,&UNK_108d7ae7b,0xd);
LAB_1035cf9e4:
              pppppppuStack_1c8 = pppppppuStack_90;
              pppppppuStack_1d0 = pppppppuStack_98;
              uStack_1b8 = uStack_80;
              pppppppuStack_1c0 = pppppppuStack_88;
              pppppppuVar27 = pppppppuStack_c0;
              pppppppuVar16 = pppppppuStack_a8;
              pppppppuVar18 = pppppppuStack_a0;
              pppppppuVar13 = pppppppuStack_b0;
              pppppppuVar19 = pppppppuStack_d0;
              pppppppuVar20 = pppppppuStack_b8;
              pppppppuVar23 = pppppppuStack_2c0;
              pppppppuVar28 = pppppppuStack_c8;
            }
            pppppppuVar26 = pppppppuStack_2d0;
            if (pppppppuStack_2b8 != (undefined8 *******)0x8000000000000000) {
LAB_1035cfa18:
              pppppppuVar26 = pppppppuStack_2d0;
              pppppppuStack_2c0 = pppppppuVar18;
              if (pppppppuVar9 != (undefined8 *******)0x0) {
                pppppppuVar18 = pppppppuStack_2e0 + 1;
                do {
                  if (pppppppuVar18[-1] != (undefined8 ******)0x0) {
                    _free(*pppppppuVar18);
                  }
                  pppppppuVar18 = pppppppuVar18 + 4;
                  pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + -1);
                } while (pppppppuVar9 != (undefined8 *******)0x0);
              }
              pppppppuVar18 = pppppppuStack_2c0;
              if (pppppppuStack_2b8 != (undefined8 *******)0x0) {
                _free(pppppppuStack_2e0);
                pppppppuVar18 = pppppppuStack_2c0;
              }
            }
LAB_1035cfa60:
            if (pppppppuVar23 != (undefined8 *******)0x8000000000000000) {
              if (pppppppuVar26 != (undefined8 *******)0x0) {
                pppppppuVar9 = pppppppuStack_2d8 + 1;
                do {
                  if (pppppppuVar9[-1] != (undefined8 ******)0x0) {
                    _free(*pppppppuVar9);
                  }
                  pppppppuVar9 = pppppppuVar9 + 4;
                  pppppppuVar26 = (undefined8 *******)((long)pppppppuVar26 + -1);
                } while (pppppppuVar26 != (undefined8 *******)0x0);
              }
              if (pppppppuVar23 != (undefined8 *******)0x0) {
                _free(pppppppuStack_2d8);
              }
            }
            if (pppppppuVar19 != (undefined8 *******)0x2) {
              puStack_2c8[8] = pppppppuStack_1c8;
              puStack_2c8[7] = pppppppuStack_1d0;
              puStack_2c8[10] = uStack_1b8;
              puStack_2c8[9] = pppppppuStack_1c0;
              *puStack_2c8 = pppppppuVar19;
              puStack_2c8[1] = pppppppuVar28;
              puStack_2c8[2] = pppppppuVar27;
              puStack_2c8[3] = pppppppuVar20;
              puStack_2c8[4] = pppppppuVar13;
              puStack_2c8[5] = pppppppuVar16;
              puStack_2c8[6] = pppppppuVar18;
              goto LAB_1035cf670;
            }
            pppppppuStack_200 = pppppppuVar28;
            pppppppuStack_1f8 = pppppppuVar27;
            pppppppuStack_1f0 = pppppppuVar20;
            pppppppuStack_1e8 = pppppppuVar13;
            pppppppuStack_1e0 = pppppppuVar16;
            pppppppuStack_1d8 = pppppppuVar18;
            if (plStack_208 != plStack_218) goto LAB_1035cfad0;
            goto LAB_1035cf654;
          }
          if (iVar7 == 1) {
            if (pppppppuStack_2b8 != (undefined8 *******)0x8000000000000000) {
              func_0x000108922524(&pppppppuStack_d0,&UNK_108d6c2df,0xe);
              pppppppuStack_1c8 = pppppppuStack_90;
              pppppppuStack_1d0 = pppppppuStack_98;
              uStack_1b8 = uStack_80;
              pppppppuStack_1c0 = pppppppuStack_88;
              pppppppuVar27 = pppppppuStack_c0;
              pppppppuVar16 = pppppppuStack_a8;
              pppppppuVar18 = pppppppuStack_a0;
              pppppppuVar13 = pppppppuStack_b0;
              pppppppuVar19 = pppppppuStack_d0;
              pppppppuVar20 = pppppppuStack_b8;
              pppppppuVar23 = pppppppuStack_2c0;
              pppppppuVar28 = pppppppuStack_c8;
              goto LAB_1035cfa18;
            }
            pppppppuStack_288 = (undefined8 *******)0x8000000000000000;
            if (pppppppuVar19 != (undefined8 *******)0x8000000000000000) {
              func_0x00010368d45c(&pppppppuStack_180,&pppppppuStack_270);
              pppppppuVar9 = pppppppuStack_140;
              if (pppppppuStack_180 == (undefined8 *******)0x2) {
                if (pppppppuVar19 != (undefined8 *******)0x0) {
                  _free(pppppppuVar13);
                }
              }
              else {
                pppppppuStack_98 = pppppppuStack_148;
                pppppppuStack_a0 = pppppppuStack_150;
                pppppppuStack_88 = pppppppuStack_138;
                pppppppuStack_90 = pppppppuStack_140;
                pppppppuStack_b8 = pppppppuStack_168;
                pppppppuStack_c0 = pppppppuStack_170;
                pppppppuStack_a8 = pppppppuStack_158;
                pppppppuStack_b0 = pppppppuStack_160;
                uStack_80 = uStack_130;
                pppppppuStack_c8 = pppppppuStack_178;
                pppppppuStack_d0 = pppppppuStack_180;
                if (pppppppuStack_140 == pppppppuStack_150) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                            (&pppppppuStack_a0);
                }
                pppppppuVar27 = pppppppuStack_98;
                if (pppppppuVar9 != (undefined8 *******)0x0) {
                  _memmove(pppppppuStack_98 + 3,pppppppuStack_98,(long)pppppppuVar9 * 0x18);
                }
                *pppppppuVar27 = pppppppuVar19;
                pppppppuVar27[1] = pppppppuVar13;
                pppppppuVar27[2] = pppppppuVar19;
                pppppppuStack_140 = (undefined8 *******)((long)pppppppuVar9 + 1);
                pppppppuStack_158 = pppppppuStack_a8;
                pppppppuStack_160 = pppppppuStack_b0;
                pppppppuStack_148 = pppppppuStack_98;
                pppppppuStack_150 = pppppppuStack_a0;
                uStack_130 = uStack_80;
                pppppppuStack_178 = pppppppuStack_c8;
                pppppppuStack_180 = pppppppuStack_d0;
                pppppppuStack_168 = pppppppuStack_b8;
                pppppppuStack_170 = pppppppuStack_c0;
                pppppppuStack_138 = pppppppuStack_88;
                pppppppuVar13 = pppppppuStack_b0;
                pppppppuVar19 = pppppppuStack_d0;
                pppppppuStack_90 = pppppppuStack_140;
                if (pppppppuStack_d0 != (undefined8 *******)0x2) goto LAB_1035cf978;
              }
              pppppppuStack_198 = pppppppuStack_178;
              pppppppuStack_190 = pppppppuStack_170;
              pppppppuStack_2e0 = pppppppuStack_170;
              pppppppuStack_188 = pppppppuStack_168;
              pppppppuVar13 = pppppppuStack_178;
              pppppppuVar9 = pppppppuStack_168;
              goto LAB_1035cf1ac;
            }
            pppppppuVar13 = (undefined8 *******)_malloc(0x10);
            if (pppppppuVar13 == (undefined8 *******)0x0) {
              pppppppuStack_2b8 = (undefined8 *******)0x8000000000000000;
              goto LAB_1035cfbd8;
            }
            pppppppuVar13[1] = (undefined8 ******)0x676e697373696d20;
            *pppppppuVar13 = (undefined8 ******)0x73692065756c6176;
            pppppppuStack_168 = (undefined8 *******)0x10;
            pppppppuStack_150 = (undefined8 *******)0x0;
            pppppppuStack_158 = (undefined8 *******)0x10;
            pppppppuStack_148 = (undefined8 *******)0x8;
            pppppppuStack_140 = (undefined8 *******)0x0;
            pppppppuStack_138 = (undefined8 *******)0x0;
            pppppppuVar19 = (undefined8 *******)0x0;
LAB_1035cf978:
            pppppppuStack_1c8 = pppppppuStack_140;
            pppppppuStack_1d0 = pppppppuStack_148;
            uStack_1b8 = uStack_130;
            pppppppuStack_1c0 = pppppppuStack_138;
            pppppppuVar27 = pppppppuStack_170;
            pppppppuVar16 = pppppppuStack_158;
            pppppppuVar18 = pppppppuStack_150;
            pppppppuVar20 = pppppppuStack_168;
            pppppppuVar23 = pppppppuStack_2c0;
            pppppppuVar26 = pppppppuStack_2d0;
            pppppppuVar28 = pppppppuStack_178;
            pppppppuStack_160 = pppppppuVar13;
            goto LAB_1035cfa60;
          }
          func_0x000103607dc0(&pppppppuStack_d0,&pppppppuStack_288);
          pppppppuVar13 = pppppppuStack_2b8;
          plVar22 = plStack_218;
          plVar24 = plStack_208;
          if (pppppppuStack_d0 != (undefined8 *******)0x2) goto LAB_1035cf9e4;
LAB_1035cf1ac:
          plVar12 = plVar22;
          plVar22 = plVar12;
          plVar21 = plVar12;
        } while (plVar12 != plVar24);
      }
      bVar6 = pppppppuStack_2c0 != (undefined8 *******)0x8000000000000000;
      pppppppuStack_1f0 = (undefined8 *******)0x0;
      if (bVar6) {
        pppppppuStack_1f0 = pppppppuStack_2d0;
      }
      pppppppuStack_1f8 = (undefined8 *******)0x8;
      if (bVar6) {
        pppppppuStack_1f8 = pppppppuStack_2d8;
      }
      pppppppuStack_200 = (undefined8 *******)0x0;
      if (bVar6) {
        pppppppuStack_200 = pppppppuStack_2c0;
      }
      bVar6 = pppppppuVar13 != (undefined8 *******)0x8000000000000000;
      pppppppuStack_1e0 = (undefined8 *******)0x8;
      if (bVar6) {
        pppppppuStack_1e0 = pppppppuStack_2e0;
      }
      pppppppuStack_1e8 = (undefined8 *******)0x0;
      if (bVar6) {
        pppppppuStack_1e8 = pppppppuVar13;
      }
      pppppppuStack_1d8 = (undefined8 *******)0x0;
      if (bVar6) {
        pppppppuStack_1d8 = pppppppuVar9;
      }
      if (plVar12 == plVar22) {
LAB_1035cf654:
        puStack_2c8[2] = pppppppuStack_1f8;
        puStack_2c8[1] = pppppppuStack_200;
        puStack_2c8[4] = pppppppuStack_1e8;
        puStack_2c8[3] = pppppppuStack_1f0;
        puStack_2c8[6] = pppppppuStack_1d8;
        puStack_2c8[5] = pppppppuStack_1e0;
        *puStack_2c8 = 2;
      }
      else {
LAB_1035cfad0:
        puVar3 = puStack_2c8;
        func_0x0001089223ec(&pppppppuStack_d0,uStack_2e8,&UNK_10b2b6878,&UNK_10b29b520);
        puVar3[5] = pppppppuStack_a8;
        puVar3[4] = pppppppuStack_b0;
        puVar3[7] = pppppppuStack_98;
        puVar3[6] = pppppppuStack_a0;
        puVar3[9] = pppppppuStack_88;
        puVar3[8] = pppppppuStack_90;
        puVar3[10] = uStack_80;
        puVar3[1] = pppppppuStack_c8;
        *puVar3 = pppppppuStack_d0;
        puVar3[3] = pppppppuStack_b8;
        puVar3[2] = pppppppuStack_c0;
        func_0x00010339be18(&pppppppuStack_200);
      }
LAB_1035cf670:
      func_0x00010338a7ec(&pppppppuStack_288);
      return;
    }
    pppppppuStack_1f8 = (undefined8 *******)param_2[2];
    pppppppuStack_200 = (undefined8 *******)param_2[1];
    pppppppuStack_1f0 = (undefined8 *******)param_2[3];
    pppppppuStack_d0 = (undefined8 *******)0x0;
    pppppppuStack_c8 = (undefined8 *******)0x1;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    pppppppuStack_278 = (undefined8 *******)0x60000020;
    pppppppuStack_288 = &pppppppuStack_d0;
    pppppppuStack_280 = (undefined8 *******)&UNK_10b29a448;
    iVar7 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&pppppppuStack_200,&pppppppuStack_288);
    if (iVar7 != 0) {
      func_0x000108a07a3c(&UNK_108d8639e,0x37,&pppppppuStack_180,&UNK_10b2c0eb8,&UNK_10b2c0b18);
LAB_1035cfbe4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1035cfbe8);
      (*pcVar4)();
    }
    pppppppuStack_178 = pppppppuStack_c8;
    pppppppuStack_180 = pppppppuStack_d0;
    pppppppuStack_170 = pppppppuStack_c0;
    pppppppuVar9 = &pppppppuStack_180;
    unaff_x30 = 0x1035cf938;
SUB_10892c8e4:
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(ulong *)(puVar5 + -0x18) = uVar14;
    *(undefined1 **)(puVar5 + -0x10) = puVar29;
    *(undefined8 *)(puVar5 + -8) = unaff_x30;
    ppppppuVar1 = pppppppuVar9[1];
    ppppppuVar8 = pppppppuVar9[2];
    *(undefined8 *******)(puVar5 + -0x48) = ppppppuVar1;
    *(undefined8 *******)(puVar5 + -0x40) = ppppppuVar8;
    puVar5[-0x50] = 5;
    func_0x000108921f70(param_1,puVar5 + -0x50,puVar5 + -0x31,&UNK_10b29cab0);
    if (*pppppppuVar9 != (undefined8 ******)0x0) {
      _free(ppppppuVar1);
    }
    return;
  }
  pppppppuVar9 = (undefined8 *******)param_2[1];
  ppppppuVar1 = (undefined8 ******)param_2[2];
  uVar11 = param_2[3];
  ppppppuVar15 = ppppppuVar1 + uVar11 * 10;
  ppppppuVar8 = ppppppuVar1;
  pppppppuStack_1e8 = (undefined8 *******)ppppppuVar15;
  pppppppuStack_200 = (undefined8 *******)ppppppuVar1;
  pppppppuStack_1f0 = pppppppuVar9;
  if (uVar11 == 0) {
LAB_1035cf11c:
    pppppppuStack_1c8 = (undefined8 *******)0x8;
    pppppppuStack_1c0 = (undefined8 *******)0x0;
    pppppppuStack_1d0 = (undefined8 *******)0x0;
    ppppppuVar2 = ppppppuVar8;
    pppppppuVar19 = pppppppuStack_1c8;
    pppppppuVar13 = pppppppuStack_1c0;
    pppppppuVar27 = pppppppuStack_1d0;
    puVar25 = param_1;
    puVar3 = puStack_2c8;
    pppppppuStack_1f8 = (undefined8 *******)ppppppuVar8;
    pppppppuVar16 = pppppppuStack_d0;
joined_r0x0001035cf76c:
    puStack_2c8 = puVar25;
    puVar25 = puStack_2c8;
    pppppppuStack_2b8 = pppppppuVar9;
    pppppppuStack_1d0 = pppppppuVar27;
    pppppppuStack_1c8 = pppppppuVar19;
    pppppppuStack_1c0 = pppppppuVar13;
    if (ppppppuVar2 == ppppppuVar15) {
      pppppppuVar9 = &pppppppuStack_180;
      ppppppuVar8 = ppppppuVar15;
      pppppppuVar18 = (undefined8 *******)0x8000000000000000;
      puStack_2c8 = puVar3;
      pppppppuStack_d0 = pppppppuVar16;
    }
    else {
      ppppppuVar8 = ppppppuVar2 + 10;
      pppppppuStack_d0 = (undefined8 *******)*ppppppuVar2;
      pppppppuStack_1f8 = (undefined8 *******)ppppppuVar8;
      if (pppppppuStack_d0 == (undefined8 *******)0x8000000000000006) {
        pppppppuVar9 = &pppppppuStack_180;
        pppppppuVar18 = (undefined8 *******)0x8000000000000000;
        puStack_2c8 = puVar3;
        pppppppuStack_d0 = pppppppuVar16;
      }
      else {
        pppppppuStack_c0 = (undefined8 *******)ppppppuVar2[2];
        pppppppuStack_c8 = (undefined8 *******)ppppppuVar2[1];
        pppppppuStack_a0 = (undefined8 *******)ppppppuVar2[6];
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar2[5];
        pppppppuStack_90 = (undefined8 *******)ppppppuVar2[8];
        pppppppuStack_98 = (undefined8 *******)ppppppuVar2[7];
        pppppppuStack_88 = (undefined8 *******)ppppppuVar2[9];
        pppppppuStack_b0 = (undefined8 *******)ppppppuVar2[4];
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar2[3];
        func_0x00010368d45c(&pppppppuStack_288,&pppppppuStack_d0);
        pppppppuStack_2c0 = pppppppuStack_270;
        pppppppuVar9 = pppppppuStack_270;
        unaff_x24 = pppppppuStack_278;
        pppppppuVar18 = pppppppuStack_280;
        puVar25 = puStack_2c8;
        if (pppppppuStack_288 != (undefined8 *******)0x2) {
          pppppppuStack_2d8 = pppppppuStack_260;
          pppppppuStack_2d0 = pppppppuStack_268;
          pppppppuStack_2e0 = pppppppuStack_258;
          lStack_2a8 = lStack_248;
          lStack_2b0 = lStack_250;
          lStack_298 = lStack_238;
          lStack_2a0 = lStack_240;
          if (pppppppuVar13 != (undefined8 *******)0x0) {
            pppppppuVar9 = pppppppuVar19 + 1;
            do {
              if (pppppppuVar9[-1] != (undefined8 ******)0x0) {
                _free(*pppppppuVar9);
              }
              pppppppuVar9 = pppppppuVar9 + 4;
              pppppppuVar13 = (undefined8 *******)((long)pppppppuVar13 + -1);
            } while (pppppppuVar13 != (undefined8 *******)0x0);
          }
          pppppppuStack_270 = pppppppuStack_2c0;
          pppppppuStack_268 = pppppppuStack_2d0;
          pppppppuStack_260 = pppppppuStack_2d8;
          pppppppuStack_258 = pppppppuStack_2e0;
          pppppppuVar9 = pppppppuStack_2b8;
          if (pppppppuVar27 != (undefined8 *******)0x0) {
            _free(pppppppuVar19);
            pppppppuStack_270 = pppppppuStack_2c0;
            pppppppuStack_268 = pppppppuStack_2d0;
            pppppppuStack_260 = pppppppuStack_2d8;
            pppppppuStack_258 = pppppppuStack_2e0;
            pppppppuVar9 = pppppppuStack_2b8;
          }
          goto LAB_1035cf6f0;
        }
      }
    }
    bVar6 = pppppppuVar18 != (undefined8 *******)0x8000000000000000;
    pppppppuStack_168 = (undefined8 *******)0x0;
    if (bVar6) {
      pppppppuStack_168 = pppppppuVar18;
    }
    pppppppuStack_160 = (undefined8 *******)0x8;
    if (bVar6) {
      pppppppuStack_160 = unaff_x24;
    }
    pppppppuStack_158 = (undefined8 *******)0x0;
    if (bVar6) {
      pppppppuStack_158 = pppppppuVar9;
    }
    pppppppuStack_180 = pppppppuVar27;
    pppppppuStack_178 = pppppppuVar19;
    pppppppuStack_170 = pppppppuVar13;
    if ((long)ppppppuVar15 - (long)ppppppuVar8 == 0) {
      puVar25[2] = pppppppuVar19;
      puVar25[1] = pppppppuVar27;
      puVar25[4] = pppppppuStack_168;
      puVar25[3] = pppppppuVar13;
      puVar25[6] = pppppppuStack_158;
      puVar25[5] = pppppppuStack_160;
      *puVar25 = 2;
    }
    else {
      func_0x0001089223ec(&pppppppuStack_288,uVar11,&UNK_10b2b6868,&UNK_10b29b520);
      puVar25[5] = pppppppuStack_260;
      puVar25[4] = pppppppuStack_268;
      puVar25[7] = lStack_250;
      puVar25[6] = pppppppuStack_258;
      puVar25[9] = lStack_240;
      puVar25[8] = lStack_248;
      puVar25[10] = lStack_238;
      puVar25[1] = pppppppuStack_280;
      *puVar25 = pppppppuStack_288;
      puVar25[3] = pppppppuStack_270;
      puVar25[2] = pppppppuStack_278;
      func_0x00010339be18(&pppppppuStack_180);
    }
    lVar17 = ((ulong)((long)ppppppuVar15 - (long)ppppppuVar8) >> 4) * -0x3333333333333333 + 1;
    while (lVar17 = lVar17 + -1, pppppppuVar9 = pppppppuStack_2b8, lVar17 != 0) {
      FUN_10337b6e4(ppppppuVar8);
      ppppppuVar8 = ppppppuVar8 + 10;
    }
  }
  else {
    ppppppuVar8 = ppppppuVar1 + 10;
    if ((undefined8 *******)*ppppppuVar1 == (undefined8 *******)0x8000000000000006)
    goto LAB_1035cf11c;
    pppppppuStack_b0 = (undefined8 *******)ppppppuVar1[4];
    pppppppuStack_b8 = (undefined8 *******)ppppppuVar1[3];
    pppppppuStack_a0 = (undefined8 *******)ppppppuVar1[6];
    pppppppuStack_a8 = (undefined8 *******)ppppppuVar1[5];
    pppppppuStack_90 = (undefined8 *******)ppppppuVar1[8];
    pppppppuStack_98 = (undefined8 *******)ppppppuVar1[7];
    pppppppuStack_88 = (undefined8 *******)ppppppuVar1[9];
    pppppppuStack_c0 = (undefined8 *******)ppppppuVar1[2];
    pppppppuStack_c8 = (undefined8 *******)ppppppuVar1[1];
    puStack_2c8 = param_1;
    pppppppuStack_1f8 = (undefined8 *******)ppppppuVar8;
    pppppppuStack_d0 = (undefined8 *******)*ppppppuVar1;
    func_0x00010367ea74(&pppppppuStack_288,&pppppppuStack_d0);
    if (pppppppuStack_288 == (undefined8 *******)0x2) {
      ppppppuVar2 = ppppppuVar8;
      pppppppuVar19 = pppppppuStack_278;
      pppppppuVar13 = pppppppuStack_270;
      pppppppuVar27 = pppppppuStack_280;
      puVar25 = puStack_2c8;
      puVar3 = puStack_2c8;
      unaff_x24 = pppppppuStack_278;
      pppppppuVar16 = pppppppuStack_d0;
      if (pppppppuStack_280 == (undefined8 *******)0x8000000000000000) {
        pppppppuVar13 = (undefined8 *******)0x0;
        pppppppuVar27 = (undefined8 *******)0x0;
        pppppppuVar19 = (undefined8 *******)0x8;
      }
      goto joined_r0x0001035cf76c;
    }
    lStack_2a8 = lStack_248;
    lStack_2b0 = lStack_250;
    lStack_298 = lStack_238;
    lStack_2a0 = lStack_240;
LAB_1035cf6f0:
    puStack_2c8[8] = lStack_2a8;
    puStack_2c8[7] = lStack_2b0;
    *puStack_2c8 = pppppppuStack_288;
    puStack_2c8[1] = pppppppuStack_280;
    puStack_2c8[2] = pppppppuStack_278;
    puStack_2c8[3] = pppppppuStack_270;
    puStack_2c8[4] = pppppppuStack_268;
    puStack_2c8[5] = pppppppuStack_260;
    puStack_2c8[6] = pppppppuStack_258;
    lVar17 = ((ulong)((long)ppppppuVar15 - (long)ppppppuVar8) >> 4) * -0x3333333333333333 + 1;
    puStack_2c8[10] = lStack_298;
    puStack_2c8[9] = lStack_2a0;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_10337b6e4(ppppppuVar8);
      ppppppuVar8 = ppppppuVar8 + 10;
    }
  }
  if (pppppppuVar9 == (undefined8 *******)0x0) {
    return;
  }
  _free(ppppppuVar1);
  return;
}

