
/* WARNING: Possible PIC construction at 0x0001039d35bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039d35c0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1039d2b20(long *param_1,ulong *param_2)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_x9;
  long *in_x10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  ulong in_x11;
  ulong extraout_x11;
  long lVar12;
  ulong unaff_x19;
  ulong uVar13;
  long *plVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_x22;
  long lVar18;
  undefined1 uVar19;
  char cVar20;
  uint uVar21;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  undefined1 auStack_310 [88];
  long lStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  ulong uStack_290;
  uint uStack_284;
  undefined *puStack_280;
  long lStack_278;
  long *plStack_268;
  ulong uStack_260;
  long *plStack_258;
  long *plStack_250;
  ulong uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined *puStack_230;
  long *plStack_228;
  ulong uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined6 uStack_216;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  undefined *puStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  byte bStack_178;
  undefined5 uStack_177;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  uint uVar22;
  
  puVar23 = &stack0xfffffffffffffff0;
  puVar4 = auStack_310 + 0x50;
  uVar13 = *param_2;
  uVar10 = uVar13 ^ 0x8000000000000000;
  if (-1 < (long)uVar13) {
    uVar10 = 6;
  }
  if ((long)uVar10 < 4) {
    if ((long)uVar10 < 2) {
      if (uVar10 == 0) {
        param_2 = param_2 + 1;
        puVar4 = (undefined1 *)register0x00000008;
        uVar13 = unaff_x19;
        puVar23 = unaff_x29;
        goto SUB_1089536e8;
      }
      puStack_230 = (undefined *)param_2[1];
      uVar19 = 2;
    }
    else {
      if (uVar10 != 2) {
        plStack_238 = (long *)((ulong)CONCAT61(plStack_238._2_6_,(char)param_2[1]) << 8);
        goto LAB_1039d319c;
      }
      puStack_230 = (undefined *)param_2[1];
      uVar19 = 3;
    }
    plStack_238 = (long *)CONCAT71(plStack_238._1_7_,uVar19);
LAB_1039d319c:
    FUN_1089531f0(param_1,&plStack_238,&uStack_180,&UNK_10b2dcac8);
    return;
  }
  plStack_268 = param_1;
  if (uVar10 != 5) {
    if (uVar10 == 6) {
      uStack_2b0 = param_2[6];
      plVar17 = (long *)param_2[1];
      uVar10 = param_2[2];
      uVar11 = param_2[4];
      if ((uVar11 != 0) && (uVar11 * 9 != -0x11)) {
        _free(param_2[3] + uVar11 * -8 + -8);
        in_x10 = extraout_x10;
        in_x11 = extraout_x11;
      }
      plVar8 = plVar17 + uVar10 * 0xe;
      plStack_238 = (long *)0x8000000000000000;
      plStack_258 = (long *)0x8000000000000000;
      plStack_1d0 = plVar17;
      uStack_1c0 = uVar13;
      plStack_1b8 = plVar8;
      if (uVar10 == 0) {
        uStack_198 = (undefined8 *)0x202;
        puVar7 = (undefined *)0x8000000000000000;
        plVar16 = plVar8;
        plStack_1c8 = plVar17;
      }
      else {
        uStack_260 = 3;
        puStack_280 = (undefined *)0x8000000000000000;
        uStack_284 = 3;
        plVar14 = plVar8;
        do {
          plVar8 = plVar14;
          plVar16 = plVar17 + 0xe;
          lVar15 = *plVar17;
          plStack_1c8 = plVar16;
          if (lVar15 == -0x8000000000000000) break;
          plVar14 = (long *)plVar17[1];
          plVar1 = (long *)plVar17[2];
          lStack_108 = plVar17[6];
          lStack_110 = plVar17[5];
          lStack_f8 = plVar17[8];
          lStack_100 = plVar17[7];
          lStack_e8 = plVar17[10];
          lStack_f0 = plVar17[9];
          lStack_d8 = plVar17[0xc];
          lStack_e0 = plVar17[0xb];
          lStack_118 = plVar17[4];
          uStack_120 = plVar17[3];
          if (plVar1 == (long *)0x0) {
            puVar7 = (undefined *)0x1;
          }
          else {
            puVar7 = (undefined *)_malloc(plVar1);
            if (puVar7 == (undefined *)0x0) {
              func_0x0001087c9084(1,plVar1);
              goto LAB_1039d39c8;
            }
          }
          _memcpy(puVar7,plVar14,plVar1);
          if (plStack_238 != (long *)0x8000000000000000) {
            if (plStack_238 != (long *)0x0) {
              _free(puStack_230);
            }
            FUN_1039cd1e8(&uStack_220);
          }
          uStack_208 = (undefined2)lStack_108;
          uStack_206 = (undefined6)((ulong)lStack_108 >> 0x10);
          uStack_210 = (undefined2)lStack_110;
          uStack_20e = (undefined6)((ulong)lStack_110 >> 0x10);
          uStack_1f8 = (undefined2)lStack_f8;
          uStack_1f6 = (undefined6)((ulong)lStack_f8 >> 0x10);
          uStack_200 = (undefined2)lStack_100;
          uStack_1fe = (undefined6)((ulong)lStack_100 >> 0x10);
          uStack_1e8 = (undefined2)lStack_e8;
          uStack_1e6 = (undefined6)((ulong)lStack_e8 >> 0x10);
          uStack_1f0 = (undefined2)lStack_f0;
          uStack_1ee = (undefined6)((ulong)lStack_f0 >> 0x10);
          lStack_1d8 = lStack_d8;
          lStack_1e0 = lStack_e0;
          uStack_218 = (undefined1)lStack_118;
          uStack_217 = (undefined1)((ulong)lStack_118 >> 8);
          uStack_216 = (undefined6)((ulong)lStack_118 >> 0x10);
          uStack_220 = uStack_120;
          if (plVar1 == (long *)0x6) {
            if ((int)*plVar14 != 0x666e6f63 || *(short *)((long)plVar14 + 4) != 0x6769)
            goto LAB_1039d2e40;
            uVar22 = 2;
            uVar21 = 2;
          }
          else if (plVar1 == (long *)0x14) {
            if ((*plVar14 != 0x5f6564756c636e69 || plVar14[1] != 0x7463757274736e69) ||
                (int)plVar14[2] != 0x736e6f69) goto LAB_1039d2e40;
            uVar22 = 1;
            uVar21 = 1;
          }
          else if ((plVar1 == (long *)0x7) &&
                  ((int)*plVar14 == 0x646e7562 && *(int *)((long)plVar14 + 3) == 0x64656c64)) {
            uVar22 = 0;
            uVar21 = 0;
          }
          else {
LAB_1039d2e40:
            uVar22 = 3;
            uVar21 = 3;
          }
          plStack_238 = plVar1;
          puStack_230 = puVar7;
          plStack_228 = plVar1;
          if (lVar15 != 0) {
            _free(plVar14);
            uVar21 = uVar22;
          }
          plVar14 = plVar8;
          if (1 < uVar21) {
            if (uVar21 != 2) {
              FUN_1039d42d4(&lStack_d0,&plStack_238);
              plVar14 = plStack_1b8;
              plVar16 = plStack_1c8;
              if (lStack_d0 == 2) goto LAB_1039d2cd4;
              goto LAB_1039d35e8;
            }
            if (puStack_280 == (undefined *)0x8000000000000000) {
              plStack_238 = (long *)0x8000000000000000;
              if (plVar1 != (long *)0x8000000000000000) {
                FUN_1039d5ebc(&uStack_180,&uStack_220);
                lVar15 = lStack_140;
                if (CONCAT26(uStack_180._6_2_,CONCAT24(uStack_180._4_2_,(undefined4)uStack_180)) ==
                    2) {
                  if (plVar1 != (long *)0x0) {
                    _free(puVar7);
                  }
                }
                else {
                  lStack_a0 = CONCAT26(uStack_14a,uStack_150);
                  plStack_98 = plStack_148;
                  lStack_88 = lStack_138;
                  lStack_90 = lStack_140;
                  uStack_b8 = CONCAT26(uStack_162,uStack_168);
                  plStack_c0 = (long *)CONCAT26(uStack_16a,uStack_170);
                  puStack_a8 = (undefined *)CONCAT26(uStack_152,uStack_158);
                  puStack_b0 = (undefined8 *)CONCAT26(uStack_15a,uStack_160);
                  lStack_80 = lStack_130;
                  uStack_c8 = CONCAT26(uStack_172,CONCAT51(uStack_177,bStack_178));
                  lStack_d0 = CONCAT26(uStack_180._6_2_,
                                       CONCAT24(uStack_180._4_2_,(undefined4)uStack_180));
                  if (lStack_140 == lStack_a0) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_a0)
                    ;
                  }
                  plVar17 = plStack_98;
                  if (lVar15 != 0) {
                    _memmove(plStack_98 + 3,plStack_98,lVar15 * 0x18);
                  }
                  *plVar17 = (long)plVar1;
                  plVar17[1] = (long)puVar7;
                  plVar17[2] = (long)plVar1;
                  lStack_140 = lVar15 + 1;
                  uStack_158 = SUB86(puStack_a8,0);
                  uStack_152 = (undefined2)((ulong)puStack_a8 >> 0x30);
                  uStack_160 = SUB86(puStack_b0,0);
                  uStack_15a = (undefined2)((ulong)puStack_b0 >> 0x30);
                  plStack_148 = plStack_98;
                  uStack_150 = (undefined6)lStack_a0;
                  uStack_14a = (undefined2)((ulong)lStack_a0 >> 0x30);
                  lStack_130 = lStack_80;
                  bStack_178 = (byte)uStack_c8;
                  uStack_177 = (undefined5)(uStack_c8 >> 8);
                  uStack_172 = (undefined2)(uStack_c8 >> 0x30);
                  uStack_180._0_4_ = (undefined4)lStack_d0;
                  uStack_180._4_2_ = (undefined2)((ulong)lStack_d0 >> 0x20);
                  uStack_180._6_2_ = (undefined2)((ulong)lStack_d0 >> 0x30);
                  uStack_168 = (undefined6)uStack_b8;
                  uStack_162 = (undefined2)(uStack_b8 >> 0x30);
                  uStack_170 = SUB86(plStack_c0,0);
                  uStack_16a = (undefined2)((ulong)plStack_c0 >> 0x30);
                  lStack_138 = lStack_88;
                  plVar17 = plStack_98;
                  puVar9 = puStack_b0;
                  lVar18 = lStack_d0;
                  uVar10 = uStack_b8;
                  puVar7 = puStack_a8;
                  lVar15 = lStack_a0;
                  lStack_90 = lStack_140;
                  if (lStack_d0 != 2) goto LAB_1039d36e0;
                }
                puStack_280 = (undefined *)CONCAT26(uStack_172,CONCAT51(uStack_177,bStack_178));
                plStack_298 = (long *)CONCAT26(uStack_16a,uStack_170);
                uStack_290 = CONCAT26(uStack_162,uStack_168);
                plStack_258 = (long *)puStack_280;
                plStack_250 = plStack_298;
                uStack_248 = uStack_290;
                goto LAB_1039d2cd4;
              }
              puVar9 = (undefined8 *)_malloc(0x10);
              if (puVar9 == (undefined8 *)0x0) {
                puStack_280 = (undefined *)0x8000000000000000;
                goto LAB_1039d39bc;
              }
              puVar9[1] = 0x676e697373696d20;
              *puVar9 = 0x73692065756c6176;
              lStack_140 = 0;
              lStack_138 = 0;
              plVar17 = (long *)0x8;
              lVar18 = 0;
              uVar10 = 0x10;
              puVar7 = (undefined *)0x10;
              lVar15 = 0;
LAB_1039d36e0:
              uVar13 = CONCAT26(uStack_172,CONCAT51(uStack_177,bStack_178));
              lStack_188 = lStack_138;
              lStack_190 = lStack_140;
              uVar11 = uVar13 >> 8;
              plVar8 = (long *)CONCAT26(uStack_16a,uStack_170);
              lVar12 = lStack_130;
              goto LAB_1039d38c4;
            }
            FUN_1089534a0(&lStack_d0,&UNK_108d9deff,6);
            uStack_2a8 = uStack_c8 >> 8;
            uStack_260 = uStack_c8;
            plStack_2a0 = plStack_c0;
            lStack_2b8 = lStack_80;
            lStack_190 = lStack_90;
            lStack_188 = lStack_88;
            lVar15 = lStack_a0;
            puVar7 = puStack_a8;
            uVar13 = uStack_290;
            puVar2 = puStack_280;
            lVar18 = lStack_d0;
            uVar10 = uStack_b8;
            puVar9 = puStack_b0;
            plVar17 = plStack_98;
joined_r0x0001039d3830:
            uStack_290 = uVar13;
            puStack_280 = puVar7;
            lStack_278 = lVar15;
            if (uVar13 != 0) {
              plVar8 = plStack_298 + 4;
              do {
                if ((plVar8[-4] & 0x7fffffffffffffffU) == 0) {
                  uVar11 = plVar8[-1];
                }
                else {
                  _free(plVar8[-3]);
                  uVar11 = plVar8[-1];
                  puVar7 = puStack_280;
                  lVar15 = lStack_278;
                }
                if ((uVar11 & 0x7fffffffffffffff) != 0) {
                  _free(*plVar8);
                  puVar7 = puStack_280;
                  lVar15 = lStack_278;
                }
                plVar8 = plVar8 + 7;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (puVar2 != (undefined *)0x0) {
              _free(plStack_298);
              puVar7 = puStack_280;
              lVar15 = lStack_278;
            }
LAB_1039d3844:
            uVar13 = uStack_260;
            uVar11 = uStack_2a8;
            plVar8 = plStack_2a0;
            lVar12 = lStack_2b8;
            if (lVar18 == 2) {
              puStack_1b0 = (undefined *)(uStack_260 & 0xff | uStack_2a8 << 8);
              plStack_1a8 = plStack_2a0;
              uStack_1a0 = uVar10;
              uStack_198 = puVar9;
              if (plStack_1b8 != plStack_1c8) goto LAB_1039d3870;
              goto LAB_1039d33f8;
            }
LAB_1039d38c4:
            plStack_268[9] = lStack_188;
            plStack_268[8] = lStack_190;
            *plStack_268 = lVar18;
            plStack_268[1] = uVar13 & 0xff | uVar11 << 8;
            plStack_268[2] = (long)plVar8;
            plStack_268[3] = uVar10;
            plStack_268[4] = (long)puVar9;
            plStack_268[6] = lVar15;
            plStack_268[5] = (long)puVar7;
            plStack_268[7] = (long)plVar17;
            plStack_268[10] = lVar12;
            goto LAB_1039d3410;
          }
          if (uVar21 != 0) {
            if ((uStack_284 & 0xff) != 3) {
              FUN_1089534a0(&lStack_d0,&UNK_108d9deeb,0x14);
              goto LAB_1039d35e8;
            }
            plStack_238 = (long *)0x8000000000000000;
            if (plVar1 != (long *)0x8000000000000000) {
              FUN_1039b8530(&lStack_d0,&uStack_220);
              lVar15 = lStack_90;
              if (lStack_d0 == 2) {
                uStack_284 = (uint)(byte)uStack_c8;
                if (plVar1 != (long *)0x0) {
                  _free(puVar7);
                }
              }
              else {
                bStack_178 = (byte)lStack_88;
                uStack_177 = (undefined5)((ulong)lStack_88 >> 8);
                uStack_172 = (undefined2)((ulong)lStack_88 >> 0x30);
                uStack_180._0_4_ = (undefined4)lStack_90;
                uStack_180._4_2_ = (undefined2)((ulong)lStack_90 >> 0x20);
                uStack_180._6_2_ = (undefined2)((ulong)lStack_90 >> 0x30);
                if (lStack_90 == lStack_a0) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_a0);
                }
                plVar17 = plStack_98;
                if (lVar15 != 0) {
                  _memmove(plStack_98 + 3,plStack_98,lVar15 * 0x18);
                }
                *plVar17 = (long)plVar1;
                plVar17[1] = (long)puVar7;
                plVar17[2] = (long)plVar1;
                lStack_90 = lVar15 + 1;
                uStack_284 = (uint)(byte)uStack_c8;
                uStack_2a8 = uStack_c8 >> 8;
                plStack_2a0 = plStack_c0;
                bStack_178 = (byte)lStack_88;
                uStack_177 = (undefined5)((ulong)lStack_88 >> 8);
                uStack_172 = (undefined2)((ulong)lStack_88 >> 0x30);
                uStack_180._0_4_ = (undefined4)lStack_90;
                uStack_180._4_2_ = (undefined2)((ulong)lStack_90 >> 0x20);
                uStack_180._6_2_ = (undefined2)((ulong)lStack_90 >> 0x30);
                lStack_2b8 = lStack_80;
                plVar17 = plStack_98;
                puVar9 = puStack_b0;
                lVar18 = lStack_d0;
                uVar10 = uStack_b8;
                puVar7 = puStack_a8;
                lVar15 = lStack_a0;
                if (lStack_d0 != 2) goto LAB_1039d3740;
              }
              goto LAB_1039d2cd4;
            }
            puVar9 = (undefined8 *)_malloc(0x10);
            if (puVar9 == (undefined8 *)0x0) goto LAB_1039d39bc;
            puVar9[1] = 0x676e697373696d20;
            *puVar9 = 0x73692065756c6176;
            uStack_180._0_4_ = 0;
            uStack_180._4_2_ = 0;
            uStack_180._6_2_ = 0;
            bStack_178 = 0;
            uStack_177 = 0;
            uStack_172 = 0;
            plVar17 = (long *)0x8;
            lVar18 = 0;
            uVar10 = 0x10;
            puVar7 = (undefined *)0x10;
            lVar15 = 0;
LAB_1039d3740:
            uStack_260 = (ulong)uStack_284;
            lStack_188 = CONCAT26(uStack_172,CONCAT51(uStack_177,bStack_178));
            lStack_190 = CONCAT26(uStack_180._6_2_,CONCAT24(uStack_180._4_2_,(undefined4)uStack_180)
                                 );
LAB_1039d3754:
            uVar13 = uStack_290;
            puVar2 = puStack_280;
            if (puStack_280 != (undefined *)0x8000000000000000) goto joined_r0x0001039d3830;
            goto LAB_1039d3844;
          }
          if (((uint)uStack_260 & 0xff) != 3) {
            FUN_1089534a0(&lStack_d0,&UNK_108d9dee4,7);
LAB_1039d35e8:
            uStack_2a8 = uStack_c8 >> 8;
            lStack_2b8 = lStack_80;
            uStack_260 = uStack_c8;
            plVar17 = plStack_98;
            puVar9 = puStack_b0;
            lVar18 = lStack_d0;
            uVar10 = uStack_b8;
            puVar7 = puStack_a8;
            lVar15 = lStack_a0;
            plStack_2a0 = plStack_c0;
            lStack_190 = lStack_90;
            lStack_188 = lStack_88;
            goto LAB_1039d3754;
          }
          plStack_238 = (long *)0x8000000000000000;
          if (plVar1 == (long *)0x8000000000000000) {
            puVar9 = (undefined8 *)_malloc(0x10);
            if (puVar9 != (undefined8 *)0x0) {
              puVar9[1] = 0x676e697373696d20;
              *puVar9 = 0x73692065756c6176;
              uStack_168 = 0x10;
              uStack_162 = 0;
              uStack_160 = SUB86(puVar9,0);
              uStack_15a = (undefined2)((ulong)puVar9 >> 0x30);
              uStack_150 = 0;
              uStack_14a = 0;
              uStack_158 = 0x10;
              uStack_152 = 0;
              plStack_148 = (long *)0x8;
              lStack_140 = 0;
              lStack_138 = 0;
              uStack_260 = (ulong)bStack_178;
              lVar18 = 0;
              uVar10 = 0x10;
              puVar7 = (undefined *)0x10;
              lVar15 = 0;
LAB_1039d3708:
              uStack_2a8 = (ulong)CONCAT25(uStack_172,uStack_177);
              lStack_188 = lStack_138;
              lStack_190 = lStack_140;
              plStack_2a0 = (long *)CONCAT26(uStack_16a,uStack_170);
              lStack_2b8 = lStack_130;
              plVar17 = plStack_148;
              goto LAB_1039d3754;
            }
LAB_1039d39bc:
            func_0x0001087c9084(1,0x10);
            goto LAB_1039d39c8;
          }
          func_0x0001039d5794(&uStack_180,&uStack_220);
          lVar15 = lStack_140;
          if (CONCAT26(uStack_180._6_2_,CONCAT24(uStack_180._4_2_,(undefined4)uStack_180)) == 2) {
            if (plVar1 != (long *)0x0) {
              _free(puVar7);
            }
            uStack_260 = (ulong)bStack_178;
          }
          else {
            lStack_a0 = CONCAT26(uStack_14a,uStack_150);
            plStack_98 = plStack_148;
            lStack_88 = lStack_138;
            lStack_90 = lStack_140;
            uStack_b8 = CONCAT26(uStack_162,uStack_168);
            plStack_c0 = (long *)CONCAT26(uStack_16a,uStack_170);
            puStack_a8 = (undefined *)CONCAT26(uStack_152,uStack_158);
            puStack_b0 = (undefined8 *)CONCAT26(uStack_15a,uStack_160);
            lStack_80 = lStack_130;
            uStack_c8 = CONCAT26(uStack_172,CONCAT51(uStack_177,bStack_178));
            lStack_d0 = CONCAT26(uStack_180._6_2_,CONCAT24(uStack_180._4_2_,(undefined4)uStack_180))
            ;
            if (lStack_140 == lStack_a0) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_a0);
            }
            plVar17 = plStack_98;
            if (lVar15 != 0) {
              _memmove(plStack_98 + 3,plStack_98,lVar15 * 0x18);
            }
            *plVar17 = (long)plVar1;
            plVar17[1] = (long)puVar7;
            plVar17[2] = (long)plVar1;
            lStack_140 = lVar15 + 1;
            plStack_148 = plStack_98;
            uStack_158 = SUB86(puStack_a8,0);
            uStack_152 = (undefined2)((ulong)puStack_a8 >> 0x30);
            uStack_160 = SUB86(puStack_b0,0);
            uStack_15a = (undefined2)((ulong)puStack_b0 >> 0x30);
            uStack_150 = (undefined6)lStack_a0;
            uStack_14a = (undefined2)((ulong)lStack_a0 >> 0x30);
            lStack_130 = lStack_80;
            bStack_178 = (byte)uStack_c8;
            uStack_177 = (undefined5)(uStack_c8 >> 8);
            uStack_172 = (undefined2)(uStack_c8 >> 0x30);
            uStack_180._0_4_ = (undefined4)lStack_d0;
            uStack_180._4_2_ = (undefined2)((ulong)lStack_d0 >> 0x20);
            uStack_180._6_2_ = (undefined2)((ulong)lStack_d0 >> 0x30);
            uStack_168 = (undefined6)uStack_b8;
            uStack_162 = (undefined2)(uStack_b8 >> 0x30);
            uStack_170 = SUB86(plStack_c0,0);
            uStack_16a = (undefined2)((ulong)plStack_c0 >> 0x30);
            lStack_138 = lStack_88;
            uStack_260 = uStack_c8 & 0xff;
            puVar9 = puStack_b0;
            lVar18 = lStack_d0;
            uVar10 = uStack_b8;
            puVar7 = puStack_a8;
            lVar15 = lStack_a0;
            lStack_90 = lStack_140;
            if (lStack_d0 != 2) goto LAB_1039d3708;
          }
LAB_1039d2cd4:
          plVar8 = plVar16;
          plVar17 = plVar8;
          plVar16 = plVar8;
        } while (plVar8 != plVar14);
        uVar21 = 2;
        if (((uint)uStack_260 & 0xff) != 3) {
          uVar21 = (uint)uStack_260;
        }
        uVar22 = 2;
        if ((uStack_284 & 0xff) != 3) {
          uVar22 = uStack_284;
        }
        uStack_198 = (undefined8 *)((ulong)uVar21 & 0xff | ((ulong)uVar22 & 0xff) << 8);
        puVar7 = puStack_280;
        in_x10 = plStack_298;
        in_x11 = uStack_290;
      }
      bVar5 = puVar7 != (undefined *)0x8000000000000000;
      puStack_1b0 = (undefined *)0x0;
      if (bVar5) {
        puStack_1b0 = puVar7;
      }
      plStack_1a8 = (long *)0x8;
      if (bVar5) {
        plStack_1a8 = in_x10;
      }
      uStack_1a0 = 0;
      if (bVar5) {
        uStack_1a0 = in_x11;
      }
      if (plVar8 == plVar16) {
LAB_1039d33f8:
        plStack_268[2] = (long)plStack_1a8;
        plStack_268[1] = (long)puStack_1b0;
        plStack_268[4] = (long)uStack_198;
        plStack_268[3] = uStack_1a0;
        *plStack_268 = 2;
      }
      else {
LAB_1039d3870:
        FUN_1089533b0(&lStack_d0,uStack_2b0,&UNK_10b2ddb88);
        plStack_268[5] = (long)puStack_a8;
        plStack_268[4] = (long)puStack_b0;
        plStack_268[7] = (long)plStack_98;
        plStack_268[6] = lStack_a0;
        plStack_268[9] = lStack_88;
        plStack_268[8] = lStack_90;
        plStack_268[10] = lStack_80;
        plStack_268[1] = uStack_c8;
        *plStack_268 = lStack_d0;
        plStack_268[3] = uStack_b8;
        plStack_268[2] = (long)plStack_c0;
        FUN_1039cdbdc(&puStack_1b0);
      }
LAB_1039d3410:
      FUN_1039cd67c(&plStack_238);
      return;
    }
    plStack_1a8 = (long *)param_2[2];
    puStack_1b0 = (undefined *)param_2[1];
    uStack_1a0 = param_2[3];
    lStack_d0 = 0;
    uStack_c8 = 1;
    plStack_c0 = (long *)0x0;
    plStack_228 = (long *)0x60000020;
    plStack_238 = &lStack_d0;
    puStack_230 = &UNK_10b2dda68;
    iVar6 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_1b0,&plStack_238);
    if (iVar6 != 0) {
      func_0x000108a07a3c(&UNK_108d9df53,0x37,&uStack_180,&UNK_10b2ddb28,&UNK_10b2dda98);
LAB_1039d39c8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1039d39cc);
      (*pcVar3)();
    }
    bStack_178 = (byte)uStack_c8;
    uStack_177 = (undefined5)(uStack_c8 >> 8);
    uStack_172 = (undefined2)(uStack_c8 >> 0x30);
    uStack_180._0_4_ = (undefined4)lStack_d0;
    uStack_180._4_2_ = (undefined2)((ulong)lStack_d0 >> 0x20);
    uStack_180._6_2_ = (undefined2)((ulong)lStack_d0 >> 0x30);
    uStack_170 = SUB86(plStack_c0,0);
    uStack_16a = (undefined2)((ulong)plStack_c0 >> 0x30);
    param_2 = &uStack_180;
    unaff_x30 = 0x1039d35c0;
    param_1 = plStack_268;
SUB_1089536e8:
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(ulong *)(puVar4 + -0x18) = uVar13;
    *(undefined1 **)(puVar4 + -0x10) = puVar23;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
    uVar10 = param_2[1];
    uVar13 = param_2[2];
    *(ulong *)(puVar4 + -0x48) = uVar10;
    *(ulong *)(puVar4 + -0x40) = uVar13;
    puVar4[-0x50] = 5;
    FUN_1089531f0(param_1,puVar4 + -0x50,puVar4 + -0x31,&UNK_10b2dcac8);
    if (*param_2 != 0) {
      _free(uVar10);
    }
    return;
  }
  uVar10 = param_2[1];
  plVar17 = (long *)param_2[2];
  uVar13 = param_2[3];
  plVar8 = plVar17 + uVar13 * 10;
  uStack_260 = uVar10;
  plStack_258 = plVar17;
  uStack_248 = uVar10;
  plStack_240 = plVar8;
  if (uVar13 == 0) {
    uVar19 = 2;
    plVar16 = plVar17;
    plStack_250 = plVar17;
LAB_1039d321c:
    plVar14 = plVar8;
    if (plVar16 == plVar8) {
LAB_1039d323c:
      cVar20 = '\x02';
      plVar16 = plVar14;
      if (plVar14 != plVar8) goto LAB_1039d324c;
LAB_1039d32d0:
      puVar7 = (undefined *)0x8000000000000000;
      plVar14 = plVar8;
    }
    else {
      plVar14 = plVar16 + 10;
      plStack_250 = plVar14;
      if (*plVar16 == -0x7ffffffffffffffa) goto LAB_1039d323c;
      puStack_b0 = (undefined8 *)plVar16[4];
      uStack_b8 = plVar16[3];
      lStack_a0 = plVar16[6];
      puStack_a8 = (undefined *)plVar16[5];
      lStack_90 = plVar16[8];
      plStack_98 = (long *)plVar16[7];
      lStack_88 = plVar16[9];
      plStack_c0 = (long *)plVar16[2];
      uStack_c8 = plVar16[1];
      lStack_d0 = *plVar16;
      FUN_1039b8530(&plStack_238,&lStack_d0);
      puVar7 = (undefined *)((ulong)puStack_230 & 0xff);
      if (plStack_238 != (long *)0x2) {
        uVar10 = (ulong)puStack_230 >> 8;
        bStack_178 = (byte)uStack_20e;
        uStack_177 = (undefined5)((uint6)uStack_20e >> 8);
        uStack_172 = uStack_208;
        uStack_180._0_4_ = (undefined4)uStack_216;
        uStack_180._4_2_ = (undefined2)((uint6)uStack_216 >> 0x20);
        uStack_180._6_2_ = uStack_210;
        uStack_168 = uStack_1fe;
        uStack_162 = uStack_1f8;
        uStack_170 = uStack_206;
        uStack_16a = uStack_200;
        uStack_158 = uStack_1ee;
        uStack_160 = uStack_1f6;
        uStack_15a = uStack_1f0;
        uStack_152 = uStack_1e8;
        uStack_150 = uStack_1e6;
        goto LAB_1039d34d0;
      }
      uVar10 = 2;
      cVar20 = '\x02';
      if ((char)puStack_230 != '\x03') {
        cVar20 = (char)puStack_230;
      }
      in_x10 = extraout_x10_01;
      plVar16 = plVar14;
      if (plVar14 == plVar8) goto LAB_1039d32d0;
LAB_1039d324c:
      plVar14 = plVar16 + 10;
      plStack_250 = plVar14;
      if (*plVar16 == -0x7ffffffffffffffa) {
        puVar7 = (undefined *)0x8000000000000000;
      }
      else {
        plStack_c0 = (long *)plVar16[2];
        uStack_c8 = plVar16[1];
        lStack_a0 = plVar16[6];
        puStack_a8 = (undefined *)plVar16[5];
        lStack_90 = plVar16[8];
        plStack_98 = (long *)plVar16[7];
        lStack_88 = plVar16[9];
        puStack_b0 = (undefined8 *)plVar16[4];
        uStack_b8 = plVar16[3];
        lStack_d0 = *plVar16;
        FUN_1039d5ebc(&plStack_238,&lStack_d0);
        uVar10 = uStack_220;
        in_x10 = plStack_228;
        puVar7 = puStack_230;
        if (plStack_238 != (long *)0x2) {
          bStack_178 = (byte)uStack_20e;
          uStack_177 = (undefined5)((uint6)uStack_20e >> 8);
          uStack_172 = uStack_208;
          uStack_180._0_4_ = (undefined4)uStack_216;
          uStack_180._4_2_ = (undefined2)((uint6)uStack_216 >> 0x20);
          uStack_180._6_2_ = uStack_210;
          uStack_168 = uStack_1fe;
          uStack_162 = uStack_1f8;
          uStack_170 = uStack_206;
          uStack_16a = uStack_200;
          uStack_158 = uStack_1ee;
          uStack_160 = uStack_1f6;
          uStack_15a = uStack_1f0;
          uStack_152 = uStack_1e8;
          uStack_150 = uStack_1e6;
          uVar10 = (ulong)puStack_230 >> 8;
          goto LAB_1039d34d0;
        }
      }
    }
    bVar5 = puVar7 != (undefined *)0x8000000000000000;
    puStack_1b0 = (undefined *)0x0;
    if (bVar5) {
      puStack_1b0 = puVar7;
    }
    plStack_1a8 = (long *)0x8;
    if (bVar5) {
      plStack_1a8 = in_x10;
    }
    uStack_1a0 = 0;
    if (bVar5) {
      uStack_1a0 = uVar10;
    }
    uStack_198._0_2_ = CONCAT11(cVar20,uVar19);
    if ((long)plVar8 - (long)plVar14 == 0) {
      plStack_268[2] = (long)plStack_1a8;
      plStack_268[1] = (long)puStack_1b0;
      plStack_268[4] = (long)uStack_198;
      plStack_268[3] = uStack_1a0;
      *plStack_268 = 2;
    }
    else {
      FUN_1089533b0(&plStack_238,uVar13,&UNK_10b2ddb78);
      plStack_268[5] = CONCAT62(uStack_20e,uStack_210);
      plStack_268[4] = CONCAT62(uStack_216,CONCAT11(uStack_217,uStack_218));
      plStack_268[7] = CONCAT62(uStack_1fe,uStack_200);
      plStack_268[6] = CONCAT62(uStack_206,uStack_208);
      plStack_268[9] = CONCAT62(uStack_1ee,uStack_1f0);
      plStack_268[8] = CONCAT62(uStack_1f6,uStack_1f8);
      plStack_268[10] = CONCAT62(uStack_1e6,uStack_1e8);
      plStack_268[1] = (long)puStack_230;
      *plStack_268 = (long)plStack_238;
      plStack_268[3] = uStack_220;
      plStack_268[2] = (long)plStack_228;
      FUN_1039cdbdc(&puStack_1b0);
    }
    uVar10 = uStack_260;
    FUN_1039cd5c0(plVar14,((ulong)((long)plVar8 - (long)plVar14) >> 4) * -0x3333333333333333);
  }
  else {
    plVar14 = plVar17 + 10;
    plVar16 = plVar14;
    plStack_250 = plVar14;
    if (*plVar17 == -0x7ffffffffffffffa) {
      uVar19 = 2;
      goto LAB_1039d321c;
    }
    puStack_b0 = (undefined8 *)plVar17[4];
    uStack_b8 = plVar17[3];
    lStack_a0 = plVar17[6];
    puStack_a8 = (undefined *)plVar17[5];
    lStack_90 = plVar17[8];
    plStack_98 = (long *)plVar17[7];
    lStack_88 = plVar17[9];
    plStack_c0 = (long *)plVar17[2];
    uStack_c8 = plVar17[1];
    lStack_d0 = *plVar17;
    func_0x0001039d5794(&plStack_238,&lStack_d0);
    puVar7 = (undefined *)((ulong)puStack_230 & 0xff);
    uVar10 = extraout_x9;
    in_x10 = extraout_x10_00;
    uVar19 = (char)puStack_230;
    if (plStack_238 == (long *)0x2) goto LAB_1039d321c;
    uVar10 = (ulong)puStack_230 >> 8;
    bStack_178 = (byte)uStack_20e;
    uStack_177 = (undefined5)((uint6)uStack_20e >> 8);
    uStack_172 = uStack_208;
    uStack_180._0_4_ = (undefined4)uStack_216;
    uStack_180._4_2_ = (undefined2)((uint6)uStack_216 >> 0x20);
    uStack_180._6_2_ = uStack_210;
    uStack_168 = uStack_1fe;
    uStack_162 = uStack_1f8;
    uStack_170 = uStack_206;
    uStack_16a = uStack_200;
    uStack_158 = uStack_1ee;
    uStack_160 = uStack_1f6;
    uStack_15a = uStack_1f0;
    uStack_152 = uStack_1e8;
    uStack_150 = uStack_1e6;
LAB_1039d34d0:
    *(undefined4 *)((long)plStack_268 + 0x22) = (undefined4)uStack_180;
    *(undefined2 *)((long)plStack_268 + 0x26) = uStack_180._4_2_;
    plStack_268[6] = CONCAT62(uStack_170,uStack_172);
    plStack_268[5] = CONCAT53(uStack_177,CONCAT12(bStack_178,uStack_180._6_2_));
    plStack_268[8] = CONCAT62(uStack_160,uStack_162);
    plStack_268[7] = CONCAT62(uStack_168,uStack_16a);
    plStack_268[10] = CONCAT62(uStack_150,uStack_152);
    plStack_268[9] = CONCAT62(uStack_158,uStack_15a);
    *plStack_268 = (long)plStack_238;
    plStack_268[1] = (ulong)puVar7 & 0xff | uVar10 << 8;
    plStack_268[2] = (long)plStack_228;
    plStack_268[3] = uStack_220;
    *(undefined1 *)(plStack_268 + 4) = uStack_218;
    *(undefined1 *)((long)plStack_268 + 0x21) = uStack_217;
    FUN_1039cd5c0(plVar14,((ulong)((long)plVar8 - (long)plVar14) >> 4) * -0x3333333333333333);
    uVar10 = uStack_260;
  }
  if (uVar10 == 0) {
    return;
  }
  _free(plVar17);
  return;
}

