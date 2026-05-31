
/* WARNING: Possible PIC construction at 0x0001013afb5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013afb60) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1013af190(long *param_1,ulong *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 *puVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  byte bVar5;
  uint7 uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *******extraout_x10;
  uint uVar17;
  undefined8 *in_x14;
  undefined8 *extraout_x14;
  undefined8 *in_x15;
  undefined8 *extraout_x15;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  undefined8 *******pppppppuVar23;
  uint uVar24;
  undefined8 *******pppppppuVar25;
  undefined8 *******unaff_x26;
  undefined8 *******pppppppuVar26;
  undefined8 *puVar27;
  undefined8 *******unaff_x27;
  long lVar28;
  undefined1 *unaff_x29;
  undefined1 *puVar29;
  undefined8 unaff_x30;
  undefined1 auStack_3c0 [80];
  long lStack_370;
  ulong uStack_368;
  ulong uStack_360;
  undefined8 *puStack_358;
  undefined8 *******pppppppuStack_350;
  undefined8 *******pppppppuStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 *******pppppppuStack_318;
  undefined8 *******pppppppuStack_310;
  ulong uStack_308;
  long lStack_300;
  undefined8 *******pppppppuStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *******pppppppuStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  byte bStack_2b0;
  uint7 uStack_2af;
  byte bStack_2a8;
  uint7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  byte bStack_288;
  uint7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long *plStack_250;
  long *plStack_248;
  ulong uStack_240;
  long *plStack_238;
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined8 *******pppppppuStack_220;
  undefined8 *puStack_218;
  undefined8 *******pppppppuStack_210;
  undefined8 *******pppppppuStack_208;
  undefined8 *puStack_200;
  undefined8 *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [32];
  undefined8 *puStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 *puStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 *******pppppppuStack_178;
  undefined8 *puStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *puStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *puStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *******pppppppuStack_d0;
  byte bStack_c8;
  uint7 uStack_c7;
  byte bStack_c0;
  uint7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  byte bStack_a0;
  uint7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  
  puVar29 = &stack0xfffffffffffffff0;
  plVar8 = &lStack_370;
  uVar18 = *param_2;
  uVar13 = uVar18 ^ 0x8000000000000000;
  if (-1 < (long)uVar18) {
    uVar13 = 6;
  }
  if ((long)uVar13 < 4) {
    if ((long)uVar13 < 2) {
      if (uVar13 == 0) {
        pppppppuVar21 = (undefined8 *******)(param_2 + 1);
        plVar8 = (long *)register0x00000008;
        uVar18 = unaff_x20;
        puVar29 = unaff_x29;
        goto SUB_108817404;
      }
      bStack_2b0 = (byte)param_2[1];
      uStack_2af = (uint7)(param_2[1] >> 8);
      uVar12 = 2;
    }
    else {
      if (uVar13 != 2) {
        pppppppuStack_2b8 =
             (undefined8 *******)((ulong)CONCAT61(pppppppuStack_2b8._2_6_,(char)param_2[1]) << 8);
        goto LAB_1013af364;
      }
      bStack_2b0 = (byte)param_2[1];
      uStack_2af = (uint7)(param_2[1] >> 8);
      uVar12 = 3;
    }
    pppppppuStack_2b8 = (undefined8 *******)CONCAT71(pppppppuStack_2b8._1_7_,uVar12);
LAB_1013af364:
    FUN_1087e3db0(param_1,&pppppppuStack_2b8,&pppppppuStack_180,&UNK_10b219b30);
    return;
  }
  if (uVar13 != 5) {
    if (uVar13 == 6) {
      uVar20 = param_2[6];
      plVar8 = (long *)param_2[1];
      uVar13 = param_2[2];
      uVar15 = param_2[4];
      if ((uVar15 != 0) && (uVar15 * 9 != -0x11)) {
        _free(param_2[3] + uVar15 * -8 + -8);
        in_x14 = extraout_x14;
        in_x15 = extraout_x15;
      }
      plVar16 = plVar8 + uVar13 * 0xe;
      pppppppuStack_2b8 = (undefined8 *******)0x8000000000000000;
      puStack_1a0 = (undefined8 *)0x0;
      lStack_300 = 0;
      uStack_368 = uVar20;
      plStack_250 = plVar8;
      uStack_240 = uVar18;
      plStack_238 = plVar16;
      if (uVar13 == 0) {
        pppppppuVar21 = (undefined8 *******)0x0;
        pppppppuStack_220 = (undefined8 *******)0x0;
        pppppppuVar26 = (undefined8 *******)0x0;
        pppppppuVar23 = (undefined8 *******)0x0;
        unaff_x27 = (undefined8 *******)0x0;
        uVar12 = 2;
        plStack_248 = plVar8;
      }
      else {
        lVar28 = *plVar8;
        plStack_248 = plVar8 + 0xe;
        if (lVar28 != -0x8000000000000000) {
          uStack_360 = 0;
          lStack_370 = 0;
          pppppppuStack_310 = (undefined8 *******)0x0;
          uStack_308 = 0;
          puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,3);
          pppppppuStack_318 = (undefined8 *******)0x2;
LAB_1013af568:
          plVar16 = (long *)plVar8[1];
          pppppppuVar21 = (undefined8 *******)plVar8[2];
          lStack_108 = plVar8[6];
          lStack_110 = plVar8[5];
          lStack_f8 = plVar8[8];
          lStack_100 = plVar8[7];
          lStack_e8 = plVar8[10];
          lStack_f0 = plVar8[9];
          lStack_d8 = plVar8[0xc];
          lStack_e0 = plVar8[0xb];
          lStack_118 = plVar8[4];
          lStack_120 = plVar8[3];
          if (pppppppuVar21 == (undefined8 *******)0x0) {
            lVar10 = 1;
          }
          else {
            lVar10 = _malloc(pppppppuVar21);
            if (lVar10 == 0) {
              func_0x0001087c9084(1,pppppppuVar21);
              goto LAB_1013b052c;
            }
          }
          _memcpy(lVar10,plVar16,pppppppuVar21);
          if (pppppppuStack_2b8 != (undefined8 *******)0x8000000000000000) {
            if (pppppppuStack_2b8 != (undefined8 *******)0x0) {
              _free(CONCAT71(uStack_2af,bStack_2b0));
            }
            FUN_100ddb5bc(&uStack_2a0);
          }
          bStack_2b0 = (byte)lVar10;
          uStack_2af = (uint7)((ulong)lVar10 >> 8);
          bStack_2a8 = (byte)pppppppuVar21;
          uStack_2a7 = (uint7)((ulong)pppppppuVar21 >> 8);
          bStack_288 = (byte)lStack_108;
          uStack_287 = (uint7)((ulong)lStack_108 >> 8);
          uStack_290 = (undefined1)lStack_110;
          uStack_28f = (undefined7)((ulong)lStack_110 >> 8);
          uStack_278 = (undefined1)lStack_f8;
          uStack_277 = (undefined7)((ulong)lStack_f8 >> 8);
          uStack_280 = (undefined1)lStack_100;
          uStack_27f = (undefined7)((ulong)lStack_100 >> 8);
          lStack_268 = lStack_e8;
          uStack_270 = (undefined1)lStack_f0;
          uStack_26f = (undefined7)((ulong)lStack_f0 >> 8);
          lStack_258 = lStack_d8;
          lStack_260 = lStack_e0;
          uStack_298 = (undefined1)lStack_118;
          uStack_297 = (undefined7)((ulong)lStack_118 >> 8);
          uStack_2a0 = (undefined1)lStack_120;
          uStack_29f = (undefined7)((ulong)lStack_120 >> 8);
          if ((long)pppppppuVar21 < 0x15) {
            if (pppppppuVar21 == (undefined8 *******)0x4) {
              if ((int)*plVar16 == 0x656d6f68) {
                uVar24 = 0;
                uVar17 = 0;
              }
              else {
LAB_1013af70c:
                uVar24 = 4;
                uVar17 = 4;
              }
            }
            else {
              if ((pppppppuVar21 != (undefined8 *******)0x8) || (*plVar16 != 0x737463656a6f7270))
              goto LAB_1013af70c;
              uVar24 = 2;
              uVar17 = 2;
            }
          }
          else if (pppppppuVar21 == (undefined8 *******)0x15) {
            if ((*plVar16 != 0x73616c5f656d6f68 || plVar16[1] != 0x74706d6f72705f74) ||
                *(long *)((long)plVar16 + 0xd) != 0x74615f646574706d) goto LAB_1013af70c;
            uVar24 = 1;
            uVar17 = 1;
          }
          else {
            if ((pppppppuVar21 != (undefined8 *******)0x18) ||
               ((*plVar16 != 0x5f7463656a6f7270 || plVar16[1] != 0x6f72705f7473616c) ||
                plVar16[2] != 0x74615f646574706d)) goto LAB_1013af70c;
            uVar24 = 3;
            uVar17 = 3;
          }
          pppppppuStack_2b8 = pppppppuVar21;
          if (lVar28 != 0) {
            _free(plVar16);
            uVar17 = uVar24;
          }
          if (uVar17 < 2) {
            if (uVar17 != 0) {
              if (pppppppuStack_318 != (undefined8 *******)0x2) {
                puStack_2f0 = puStack_358;
                puStack_190 = puStack_338;
                lStack_300 = lStack_370;
                pppppppuStack_2f8 = pppppppuStack_350;
                puStack_1a0 = (undefined8 *)uStack_360;
                pppppppuStack_198 = pppppppuStack_348;
                pppppppuStack_2e8 = unaff_x27;
                pppppppuStack_188 = unaff_x26;
                FUN_1087e4364(&pppppppuStack_d0,&UNK_108cac367,0x15);
LAB_1013b0448:
                pppppppuVar26 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
                puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
                goto LAB_1013afc20;
              }
              func_0x000100f21ad4(&pppppppuStack_d0,&pppppppuStack_2b8);
              if (pppppppuStack_d0 == (undefined8 *******)0x2) {
                pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
                puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
                goto LAB_1013af9b0;
              }
              puStack_190 = puStack_338;
              puStack_1a0 = (undefined8 *)uStack_360;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuVar26 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
              puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
              pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
              puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
              pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
              pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
              pppppppuStack_328 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
              puStack_330 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
              uVar12 = (undefined1)uStack_88;
              auStack_1c0._0_3_ = (undefined3)((uint)uStack_88 >> 8);
              auStack_1c0._3_4_ = uStack_84;
              uStack_360 = (ulong)uStack_c7;
              pppppppuStack_188 = unaff_x26;
LAB_1013afdec:
              lStack_370 = lStack_80;
              pppppppuVar19 = pppppppuStack_d0;
              goto LAB_1013afe98;
            }
            if (((uint)puStack_330 & 0xff) != 3) {
              puStack_2f0 = puStack_358;
              puStack_190 = puStack_338;
              lStack_300 = lStack_370;
              pppppppuStack_2f8 = pppppppuStack_350;
              puStack_1a0 = (undefined8 *)uStack_360;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuStack_2e8 = unaff_x27;
              pppppppuStack_188 = unaff_x26;
              FUN_1087e4364(&pppppppuStack_d0,&UNK_108c64638,4);
              goto LAB_1013b0448;
            }
            FUN_100f21638(&pppppppuStack_d0,&pppppppuStack_2b8);
            if (pppppppuStack_d0 != (undefined8 *******)0x2) {
              puStack_190 = puStack_338;
              puStack_1a0 = (undefined8 *)uStack_360;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuVar26 = (undefined8 *******)(ulong)bStack_c8;
              uStack_360 = (ulong)uStack_c7;
              puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
              pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
              puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
              pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
              pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
              pppppppuStack_328 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
              puStack_330 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
              uVar12 = (undefined1)uStack_88;
              auStack_1c0._0_3_ = (undefined3)((uint)uStack_88 >> 8);
              auStack_1c0._3_4_ = uStack_84;
              pppppppuStack_188 = unaff_x26;
              goto LAB_1013afdec;
            }
            puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,(uint)bStack_c8);
LAB_1013af9b0:
            plVar16 = plStack_238;
            pppppppuVar21 = unaff_x26;
            if (plStack_248 != plStack_238) goto code_r0x0001013af9c4;
            goto LAB_1013af2a4;
          }
          if (uVar17 == 2) {
            if (uStack_308 != 0) {
              puStack_2f0 = puStack_358;
              puStack_190 = puStack_338;
              lStack_300 = lStack_370;
              pppppppuStack_2f8 = pppppppuStack_350;
              uStack_308 = 1;
              puStack_1a0 = (undefined8 *)uStack_360;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuStack_2e8 = unaff_x27;
              pppppppuStack_188 = unaff_x26;
              FUN_1087e4364(&pppppppuStack_d0,&UNK_108c981d0,8);
              pppppppuVar26 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
              uStack_360 = (ulong)uStack_c7;
              puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
              pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
              puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
              pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
              pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
              pppppppuStack_328 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
              puStack_330 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
              uVar12 = (undefined1)uStack_88;
              auStack_1c0._0_3_ = (undefined3)((uint)uStack_88 >> 8);
              auStack_1c0._3_4_ = uStack_84;
              uStack_308 = 1;
              goto LAB_1013afdec;
            }
            pppppppuStack_2b8 = (undefined8 *******)0x8000000000000000;
            if (pppppppuVar21 != (undefined8 *******)0x8000000000000000) {
              func_0x0001013d639c(&pppppppuStack_180,&uStack_2a0);
              pppppppuVar23 = pppppppuStack_140;
              if (pppppppuStack_180 == (undefined8 *******)0x2) {
                if (pppppppuVar21 != (undefined8 *******)0x0) {
                  _free(lVar10);
                }
              }
              else {
                uStack_98 = SUB81(puStack_148,0);
                uStack_97 = (undefined7)((ulong)puStack_148 >> 8);
                bStack_a0 = (byte)pppppppuStack_150;
                uStack_9f = (uint7)((ulong)pppppppuStack_150 >> 8);
                uStack_88 = (undefined4)uStack_138;
                uStack_84 = (undefined4)((ulong)uStack_138 >> 0x20);
                uStack_90 = SUB81(pppppppuStack_140,0);
                uStack_8f = (undefined7)((ulong)pppppppuStack_140 >> 8);
                uStack_b8 = SUB81(pppppppuStack_168,0);
                uStack_b7 = (undefined7)((ulong)pppppppuStack_168 >> 8);
                bStack_c0 = (byte)puStack_170;
                uStack_bf = (uint7)((ulong)puStack_170 >> 8);
                uStack_a8 = SUB81(pppppppuStack_158,0);
                uStack_a7 = (undefined7)((ulong)pppppppuStack_158 >> 8);
                uStack_b0 = SUB81(puStack_160,0);
                uStack_af = (undefined7)((ulong)puStack_160 >> 8);
                lStack_80 = lStack_130;
                bStack_c8 = (byte)pppppppuStack_178;
                uStack_c7 = (uint7)((ulong)pppppppuStack_178 >> 8);
                pppppppuStack_d0 = pppppppuStack_180;
                if (pppppppuStack_140 == pppppppuStack_150) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&bStack_a0);
                }
                plVar8 = (long *)CONCAT71(uStack_97,uStack_98);
                if (pppppppuVar23 != (undefined8 *******)0x0) {
                  _memmove(plVar8 + 3,plVar8,(long)pppppppuVar23 * 0x18);
                }
                *plVar8 = (long)pppppppuVar21;
                plVar8[1] = lVar10;
                plVar8[2] = (long)pppppppuVar21;
                pppppppuStack_140 = (undefined8 *******)((long)pppppppuVar23 + 1);
                uStack_90 = SUB81(pppppppuStack_140,0);
                uStack_8f = (undefined7)((ulong)pppppppuStack_140 >> 8);
                pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
                puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
                puStack_148 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
                pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
                lStack_130 = lStack_80;
                pppppppuStack_178 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
                pppppppuStack_168 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
                puStack_170 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
                pppppppuStack_180 = pppppppuStack_d0;
                uStack_138 = CONCAT44(uStack_84,uStack_88);
                puStack_160 = puVar11;
                pppppppuStack_158 = pppppppuVar21;
                pppppppuStack_150 = pppppppuVar23;
                if (pppppppuStack_d0 != (undefined8 *******)0x2) {
                  puStack_190 = puStack_338;
                  pppppppuStack_198 = pppppppuStack_348;
                  uVar12 = (undefined1)uStack_88;
                  pppppppuVar19 = pppppppuStack_d0;
                  puStack_330 = puStack_148;
                  pppppppuStack_318 = pppppppuStack_168;
                  pppppppuStack_188 = unaff_x26;
                  goto LAB_1013afe5c;
                }
              }
              pppppppuStack_348 = pppppppuStack_178;
              puStack_338 = puStack_170;
              uStack_360 = 1;
              uStack_308 = 1;
              unaff_x26 = pppppppuStack_168;
              goto LAB_1013af9b0;
            }
            puStack_2f0 = puStack_358;
            pppppppuStack_2f8 = pppppppuStack_350;
            puStack_190 = puStack_338;
            pppppppuStack_198 = pppppppuStack_348;
            pppppppuStack_2e8 = unaff_x27;
            pppppppuStack_188 = unaff_x26;
            puVar11 = (undefined8 *)_malloc(0x10);
            if (puVar11 == (undefined8 *)0x0) {
              uStack_308 = 0;
              lStack_300 = lStack_370;
              puStack_1a0 = (undefined8 *)uStack_360;
              func_0x0001087c9084(1,0x10);
              goto LAB_1013b052c;
            }
            uVar12 = 0;
            pppppppuVar23 = (undefined8 *******)0x0;
            pppppppuVar19 = (undefined8 *******)0x0;
            puVar11[1] = 0x676e697373696d20;
            *puVar11 = 0x73692065756c6176;
            pppppppuStack_140 = (undefined8 *******)0x0;
            uStack_138 = 0;
            puStack_330 = (undefined8 *)0x8;
            pppppppuVar21 = (undefined8 *******)0x10;
            pppppppuStack_318 = (undefined8 *******)0x10;
LAB_1013afe5c:
            uStack_308 = 0;
            puStack_1a0 = (undefined8 *)uStack_360;
            puStack_340 = puStack_170;
            auStack_1c0._0_7_ = (undefined7)((ulong)uStack_138 >> 8);
            lStack_370 = lStack_130;
            uStack_360 = (ulong)pppppppuStack_178 >> 8;
            pppppppuVar26 = pppppppuStack_178;
            pppppppuStack_328 = pppppppuStack_140;
LAB_1013afe98:
            pppppppuVar25 = pppppppuStack_348;
            if (pppppppuStack_310 == (undefined8 *******)0x0) goto LAB_1013b0244;
            if (pppppppuStack_350 == (undefined8 *******)0x0) goto LAB_1013b01fc;
LAB_1013afeb0:
            bStack_c8 = 0;
            uStack_c7 = 0;
            bStack_c0 = (byte)pppppppuStack_350;
            uStack_bf = (uint7)((ulong)pppppppuStack_350 >> 8);
            uStack_b8 = SUB81(puStack_358,0);
            uStack_b7 = (undefined7)((ulong)puStack_358 >> 8);
            pppppppuStack_d0 = (undefined8 *******)0x1;
            uStack_a8 = 0;
            uStack_a7 = 0;
            bStack_a0 = bStack_c0;
            uStack_9f = uStack_bf;
            uStack_98 = uStack_b8;
            uStack_97 = uStack_b7;
          }
          else {
            if (uVar17 != 3) {
              FUN_1011aef20(&pppppppuStack_d0,&pppppppuStack_2b8);
              if (pppppppuStack_d0 == (undefined8 *******)0x2) goto LAB_1013af9b0;
              puStack_190 = puStack_338;
              puStack_1a0 = (undefined8 *)uStack_360;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuVar26 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
              puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
              pppppppuStack_188 = unaff_x26;
LAB_1013afc20:
              uStack_360 = (ulong)uStack_c7;
              pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
              puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
              pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
              pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
              pppppppuStack_328 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
              puStack_330 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
              uVar12 = (undefined1)uStack_88;
              auStack_1c0._0_3_ = (undefined3)((uint)uStack_88 >> 8);
              auStack_1c0._3_4_ = uStack_84;
              goto LAB_1013afdec;
            }
            if (pppppppuStack_310 == (undefined8 *******)0x0) {
              pppppppuStack_2b8 = (undefined8 *******)0x8000000000000000;
              if (pppppppuVar21 != (undefined8 *******)0x8000000000000000) {
                func_0x0001012ddd84(&pppppppuStack_180,&uStack_2a0);
                pppppppuVar23 = pppppppuStack_140;
                if (pppppppuStack_180 == (undefined8 *******)0x2) {
                  if (pppppppuVar21 != (undefined8 *******)0x0) {
                    _free(lVar10);
                  }
                }
                else {
                  uStack_98 = SUB81(puStack_148,0);
                  uStack_97 = (undefined7)((ulong)puStack_148 >> 8);
                  bStack_a0 = (byte)pppppppuStack_150;
                  uStack_9f = (uint7)((ulong)pppppppuStack_150 >> 8);
                  uStack_88 = (undefined4)uStack_138;
                  uStack_84 = (undefined4)((ulong)uStack_138 >> 0x20);
                  uStack_90 = SUB81(pppppppuStack_140,0);
                  uStack_8f = (undefined7)((ulong)pppppppuStack_140 >> 8);
                  uStack_b8 = SUB81(pppppppuStack_168,0);
                  uStack_b7 = (undefined7)((ulong)pppppppuStack_168 >> 8);
                  bStack_c0 = (byte)puStack_170;
                  uStack_bf = (uint7)((ulong)puStack_170 >> 8);
                  uStack_a8 = SUB81(pppppppuStack_158,0);
                  uStack_a7 = (undefined7)((ulong)pppppppuStack_158 >> 8);
                  uStack_b0 = SUB81(puStack_160,0);
                  uStack_af = (undefined7)((ulong)puStack_160 >> 8);
                  lStack_80 = lStack_130;
                  bStack_c8 = (byte)pppppppuStack_178;
                  uStack_c7 = (uint7)((ulong)pppppppuStack_178 >> 8);
                  pppppppuStack_d0 = pppppppuStack_180;
                  if (pppppppuStack_140 == pppppppuStack_150) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&bStack_a0)
                    ;
                  }
                  plVar8 = (long *)CONCAT71(uStack_97,uStack_98);
                  if (pppppppuVar23 != (undefined8 *******)0x0) {
                    _memmove(plVar8 + 3,plVar8,(long)pppppppuVar23 * 0x18);
                  }
                  *plVar8 = (long)pppppppuVar21;
                  plVar8[1] = lVar10;
                  plVar8[2] = (long)pppppppuVar21;
                  pppppppuStack_140 = (undefined8 *******)((long)pppppppuVar23 + 1);
                  uStack_90 = SUB81(pppppppuStack_140,0);
                  uStack_8f = (undefined7)((ulong)pppppppuStack_140 >> 8);
                  pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
                  puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
                  puStack_148 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
                  pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
                  lStack_130 = lStack_80;
                  pppppppuStack_178 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
                  pppppppuStack_168 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
                  puStack_170 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
                  pppppppuStack_180 = pppppppuStack_d0;
                  uStack_138 = CONCAT44(uStack_84,uStack_88);
                  puStack_160 = puVar11;
                  pppppppuStack_158 = pppppppuVar21;
                  pppppppuStack_150 = pppppppuVar23;
                  if (pppppppuStack_d0 != (undefined8 *******)0x2) {
                    uVar12 = (undefined1)uStack_88;
                    pppppppuVar19 = pppppppuStack_d0;
                    puStack_330 = puStack_148;
                    pppppppuStack_318 = pppppppuStack_168;
                    goto LAB_1013afef4;
                  }
                }
                puStack_358 = puStack_170;
                pppppppuStack_350 = pppppppuStack_178;
                lStack_370 = 1;
                pppppppuStack_310 = (undefined8 *******)0x1;
                unaff_x27 = pppppppuStack_168;
                goto LAB_1013af9b0;
              }
              puStack_2f0 = puStack_358;
              pppppppuStack_2f8 = pppppppuStack_350;
              puStack_190 = puStack_338;
              pppppppuStack_198 = pppppppuStack_348;
              pppppppuStack_2e8 = unaff_x27;
              pppppppuStack_188 = unaff_x26;
              puVar11 = (undefined8 *)_malloc(0x10);
              if (puVar11 == (undefined8 *)0x0) {
                lStack_300 = lStack_370;
                puStack_1a0 = (undefined8 *)uStack_360;
                pppppppuStack_310 = (undefined8 *******)0x0;
                func_0x0001087c9084(1,0x10);
                goto LAB_1013b052c;
              }
              uVar12 = 0;
              pppppppuVar23 = (undefined8 *******)0x0;
              pppppppuVar19 = (undefined8 *******)0x0;
              puVar11[1] = 0x676e697373696d20;
              *puVar11 = 0x73692065756c6176;
              pppppppuStack_140 = (undefined8 *******)0x0;
              uStack_138 = 0;
              puStack_330 = (undefined8 *)0x8;
              pppppppuVar21 = (undefined8 *******)0x10;
              pppppppuStack_318 = (undefined8 *******)0x10;
LAB_1013afef4:
              puStack_340 = puStack_170;
              auStack_1c0._0_7_ = (undefined7)((ulong)uStack_138 >> 8);
              lStack_370 = lStack_130;
              uStack_360 = (ulong)pppppppuStack_178 >> 8;
              pppppppuVar25 = pppppppuStack_348;
              pppppppuVar26 = pppppppuStack_178;
              pppppppuStack_328 = pppppppuStack_140;
              goto LAB_1013b0244;
            }
            puStack_2f0 = puStack_358;
            puStack_190 = puStack_338;
            lStack_300 = lStack_370;
            pppppppuStack_2f8 = pppppppuStack_350;
            pppppppuStack_310 = (undefined8 *******)0x1;
            puStack_1a0 = (undefined8 *)uStack_360;
            pppppppuStack_198 = pppppppuStack_348;
            pppppppuStack_2e8 = unaff_x27;
            pppppppuStack_188 = unaff_x26;
            FUN_1087e4364(&pppppppuStack_d0,&UNK_108cac37c,0x18);
            pppppppuVar26 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
            uStack_360 = (ulong)uStack_c7;
            puStack_340 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
            pppppppuStack_318 = (undefined8 *******)CONCAT71(uStack_b7,uStack_b8);
            puVar11 = (undefined8 *)CONCAT71(uStack_af,uStack_b0);
            pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_a7,uStack_a8);
            pppppppuVar23 = (undefined8 *******)CONCAT71(uStack_9f,bStack_a0);
            pppppppuStack_328 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
            puStack_330 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
            uVar12 = (undefined1)uStack_88;
            auStack_1c0._0_3_ = (undefined3)((uint)uStack_88 >> 8);
            auStack_1c0._3_4_ = uStack_84;
            lStack_370 = lStack_80;
            pppppppuVar19 = pppppppuStack_d0;
            if (pppppppuStack_350 != (undefined8 *******)0x0) goto LAB_1013afeb0;
LAB_1013b01fc:
            unaff_x27 = (undefined8 *******)0x0;
            pppppppuStack_d0 = pppppppuStack_350;
          }
          pppppppuVar25 = pppppppuStack_348;
          uStack_b0 = SUB81(pppppppuStack_d0,0);
          uStack_af = (undefined7)((ulong)pppppppuStack_d0 >> 8);
          uStack_90 = SUB81(unaff_x27,0);
          uStack_8f = (undefined7)((ulong)unaff_x27 >> 8);
          pppppppuStack_310 = unaff_x26;
          while (FUN_100f3c2e4(&pppppppuStack_180,&pppppppuStack_d0), unaff_x26 = pppppppuStack_310,
                pppppppuStack_180 != (undefined8 *******)0x0) {
            if (pppppppuStack_180[(long)puStack_170 * 3 + 1] != (undefined8 ******)0x0) {
              _free(pppppppuStack_180[(long)puStack_170 * 3 + 2]);
            }
          }
LAB_1013b0244:
          if (uStack_308 != 0) {
            if (pppppppuVar25 == (undefined8 *******)0x0) {
              unaff_x26 = (undefined8 *******)0x0;
            }
            else {
              bStack_c8 = 0;
              uStack_c7 = 0;
              bStack_c0 = (byte)pppppppuVar25;
              uStack_bf = (uint7)((ulong)pppppppuVar25 >> 8);
              uStack_b8 = SUB81(puStack_338,0);
              uStack_b7 = (undefined7)((ulong)puStack_338 >> 8);
              uStack_a8 = 0;
              uStack_a7 = 0;
              bStack_a0 = bStack_c0;
              uStack_9f = uStack_bf;
              uStack_98 = uStack_b8;
              uStack_97 = uStack_b7;
            }
            uStack_b0 = pppppppuVar25 != (undefined8 *******)0x0;
            pppppppuStack_d0 = (undefined8 *******)(ulong)(byte)uStack_b0;
            uStack_af = 0;
            uStack_90 = SUB81(unaff_x26,0);
            uStack_8f = (undefined7)((ulong)unaff_x26 >> 8);
            while( true ) {
              FUN_100f3a554(&pppppppuStack_180,&pppppppuStack_d0);
              if (pppppppuStack_180 == (undefined8 *******)0x0) break;
              if (pppppppuStack_180[(long)puStack_170 * 3 + 1] != (undefined8 ******)0x0) {
                _free(pppppppuStack_180[(long)puStack_170 * 3 + 2]);
              }
            }
          }
          if (pppppppuVar19 != (undefined8 *******)0x2) {
            uStack_1e0._0_7_ = (undefined7)auStack_1c0._0_8_;
            uVar14 = uStack_1e0;
            uStack_1e0._0_4_ = (int)auStack_1c0._0_8_;
            *(int *)((long)param_1 + 0x49) = (int)uStack_1e0;
            uStack_1e0._3_4_ = SUB84(auStack_1c0._0_8_,3);
            *(undefined4 *)((long)param_1 + 0x4c) = uStack_1e0._3_4_;
            *param_1 = (long)pppppppuVar19;
            param_1[1] = (ulong)pppppppuVar26 & 0xff | uStack_360 << 8;
            param_1[2] = (long)puStack_340;
            param_1[3] = (long)pppppppuStack_318;
            param_1[4] = (long)puVar11;
            param_1[5] = (long)pppppppuVar21;
            param_1[6] = (long)pppppppuVar23;
            param_1[8] = (long)pppppppuStack_328;
            param_1[7] = (long)puStack_330;
            *(undefined1 *)(param_1 + 9) = uVar12;
            param_1[10] = lStack_370;
            uStack_1e0 = uVar14;
            goto LAB_1013af4d4;
          }
          uStack_230 = uStack_360 << 8;
          plVar16 = plStack_248;
          pppppppuStack_1f8 = pppppppuStack_328;
          puStack_200 = puStack_330;
          puStack_228 = puStack_340;
          pppppppuStack_220 = pppppppuStack_318;
          goto LAB_1013af464;
        }
        pppppppuStack_310 = (undefined8 *******)0x0;
        uStack_308 = 0;
        puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,3);
        pppppppuStack_318 = (undefined8 *******)0x2;
LAB_1013af29c:
        plVar16 = plVar8 + 0xe;
        pppppppuVar21 = unaff_x26;
LAB_1013af2a4:
        uVar17 = (uint)puStack_330;
        uVar12 = 2;
        if ((uVar17 & 0xff) != 3) {
          uVar12 = puStack_330._0_1_;
        }
        pppppppuStack_220 = pppppppuStack_348;
        if ((uStack_308 & 1) == 0) {
          pppppppuStack_220 = (undefined8 *******)0x0;
          pppppppuVar21 = (undefined8 *******)0x0;
        }
        pppppppuVar23 = pppppppuStack_350;
        if (((ulong)pppppppuStack_310 & 1) == 0) {
          pppppppuVar23 = (undefined8 *******)0x0;
          unaff_x27 = (undefined8 *******)0x0;
        }
        uVar17 = 0;
        if (pppppppuStack_318 != (undefined8 *******)0x2) {
          uVar17 = (uint)pppppppuStack_318;
        }
        pppppppuVar26 = (undefined8 *******)(ulong)uVar17;
        in_x14 = puStack_358;
        in_x15 = puStack_340;
      }
      uStack_230 = 0;
      pppppppuStack_1f8 = unaff_x27;
      puStack_200 = in_x14;
      puStack_228 = in_x15;
      puVar11 = puStack_338;
LAB_1013af464:
      uStack_230 = uStack_230 | (ulong)pppppppuVar26 & 0xff;
      uStack_1e0._0_7_ = (undefined7)auStack_1c0._0_8_;
      uVar14 = uStack_1e0;
      uStack_1e0._0_4_ = (int)auStack_1c0._0_8_;
      uStack_1f0 = CONCAT44(auStack_1c0._3_4_,(int)uStack_1e0 << 8);
      uStack_1f0 = CONCAT71(uStack_1f0._1_7_,uVar12);
      puStack_218 = puVar11;
      pppppppuStack_210 = pppppppuVar21;
      pppppppuStack_208 = pppppppuVar23;
      uStack_1e0 = uVar14;
      if (plStack_238 == plVar16) {
        param_1[4] = (long)puVar11;
        param_1[3] = (long)pppppppuStack_220;
        param_1[6] = (long)pppppppuVar23;
        param_1[5] = (long)pppppppuVar21;
        param_1[8] = (long)pppppppuStack_1f8;
        param_1[7] = (long)puStack_200;
        param_1[9] = uStack_1f0;
        param_1[2] = (long)puStack_228;
        param_1[1] = uStack_230;
        *param_1 = 2;
      }
      else {
        FUN_1087e427c(&pppppppuStack_d0,uStack_368,&UNK_10b21cb90,&UNK_10b20a590);
        param_1[5] = CONCAT71(uStack_a7,uStack_a8);
        param_1[4] = CONCAT71(uStack_af,uStack_b0);
        param_1[7] = CONCAT71(uStack_97,uStack_98);
        param_1[6] = CONCAT71(uStack_9f,bStack_a0);
        param_1[9] = CONCAT44(uStack_84,uStack_88);
        param_1[8] = CONCAT71(uStack_8f,uStack_90);
        param_1[10] = lStack_80;
        param_1[1] = CONCAT71(uStack_c7,bStack_c8);
        *param_1 = (long)pppppppuStack_d0;
        param_1[3] = CONCAT71(uStack_b7,uStack_b8);
        param_1[2] = CONCAT71(uStack_bf,bStack_c0);
        func_0x000100e30374(&uStack_230);
      }
LAB_1013af4d4:
      FUN_100deffc0(&pppppppuStack_2b8);
      return;
    }
    puStack_228 = (undefined8 *)param_2[2];
    uStack_230 = param_2[1];
    pppppppuStack_220 = (undefined8 *******)param_2[3];
    pppppppuStack_d0 = (undefined8 *******)0x0;
    bStack_c8 = 1;
    uStack_c7 = 0;
    bStack_c0 = 0;
    uStack_bf = 0;
    bStack_2a8 = 0x20;
    uStack_2a7 = 0x600000;
    pppppppuStack_2b8 = &pppppppuStack_d0;
    bStack_2b0 = 0x90;
    uStack_2af = 0x10b2092;
    iVar9 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&uStack_230,&pppppppuStack_2b8);
    if (iVar9 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&pppppppuStack_180,&UNK_10b235000,&UNK_10b2346c0);
LAB_1013b052c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1013b0530);
      (*pcVar7)();
    }
    pppppppuStack_178 = (undefined8 *******)CONCAT71(uStack_c7,bStack_c8);
    pppppppuStack_180 = pppppppuStack_d0;
    puStack_170 = (undefined8 *)CONCAT71(uStack_bf,bStack_c0);
    pppppppuVar21 = &pppppppuStack_180;
    unaff_x30 = 0x1013afb60;
    unaff_x19 = param_1;
SUB_108817404:
    *(undefined8 *)((long)plVar8 + -0x30) = unaff_x22;
    *(undefined8 *)((long)plVar8 + -0x28) = unaff_x21;
    *(ulong *)((long)plVar8 + -0x20) = uVar18;
    *(long **)((long)plVar8 + -0x18) = unaff_x19;
    *(undefined1 **)((long)plVar8 + -0x10) = puVar29;
    *(undefined8 *)((long)plVar8 + -8) = unaff_x30;
    ppppppuVar1 = pppppppuVar21[1];
    ppppppuVar3 = pppppppuVar21[2];
    *(undefined8 *******)((long)plVar8 + -0x48) = ppppppuVar1;
    *(undefined8 *******)((long)plVar8 + -0x40) = ppppppuVar3;
    *(undefined1 *)((long)plVar8 + -0x50) = 5;
    FUN_1087e3db0(param_1,(undefined1 *)((long)plVar8 + -0x50),(undefined1 *)((long)plVar8 + -0x31),
                  &UNK_10b219b30);
    if (*pppppppuVar21 != (undefined8 ******)0x0) {
      _free(ppppppuVar1);
    }
    return;
  }
  uVar13 = param_2[1];
  puVar2 = (undefined8 *)param_2[2];
  uVar18 = param_2[3];
  puVar22 = puVar2 + uVar18 * 10;
  puVar11 = puVar2;
  puVar27 = puVar22;
  puStack_1a0 = puVar2;
  pppppppuStack_198 = (undefined8 *******)puVar2;
  puStack_190 = (undefined8 *)uVar13;
  pppppppuStack_188 = (undefined8 *******)puVar22;
  if (uVar18 == 0) {
LAB_1013af388:
    FUN_1087e427c(&pppppppuStack_d0,0,&UNK_10b22df98,&UNK_10b20a590);
LAB_1013af3a4:
    pppppppuVar21 = pppppppuStack_d0;
    if (pppppppuStack_d0 != (undefined8 *******)0x2) {
LAB_1013afa20:
      pppppppuStack_1f8 = (undefined8 *******)CONCAT71(uStack_8f,uStack_90);
      puStack_200 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
      uStack_230 = CONCAT71(uStack_c7,bStack_c8);
      lVar28 = ((ulong)((long)puVar22 - (long)puVar11) >> 4) * -0x3333333333333333 + 1;
      uStack_1f0 = CONCAT44(uStack_84,uStack_88);
      param_1[4] = CONCAT71(uStack_af,uStack_b0);
      param_1[3] = CONCAT71(uStack_b7,uStack_b8);
      param_1[6] = CONCAT71(uStack_9f,bStack_a0);
      param_1[5] = CONCAT71(uStack_a7,uStack_a8);
      param_1[8] = (long)pppppppuStack_1f8;
      param_1[7] = (long)puStack_200;
      param_1[2] = CONCAT71(uStack_bf,bStack_c0);
      param_1[1] = uStack_230;
      *param_1 = (long)pppppppuVar21;
      param_1[9] = uStack_1f0;
      param_1[10] = lStack_80;
      while (lVar28 = lVar28 + -1, lVar28 != 0) {
        FUN_100ddb5bc(puVar11);
        puVar11 = puVar11 + 10;
      }
      goto LAB_1013afa90;
    }
  }
  else {
    puVar11 = puVar2 + 10;
    puVar27 = puVar11;
    pppppppuStack_198 = (undefined8 *******)puVar11;
    if ((undefined8 *******)*puVar2 == (undefined8 *******)0x8000000000000006) goto LAB_1013af388;
    puStack_160 = (undefined8 *)puVar2[4];
    pppppppuStack_168 = (undefined8 *******)puVar2[3];
    pppppppuStack_150 = (undefined8 *******)puVar2[6];
    pppppppuStack_158 = (undefined8 *******)puVar2[5];
    pppppppuStack_140 = (undefined8 *******)puVar2[8];
    puStack_148 = (undefined8 *)puVar2[7];
    uStack_138 = puVar2[9];
    puStack_170 = (undefined8 *)puVar2[2];
    pppppppuStack_178 = (undefined8 *******)puVar2[1];
    pppppppuStack_180 = (undefined8 *******)*puVar2;
    FUN_100616c64(&pppppppuStack_2b8,&pppppppuStack_180);
    bVar4 = bStack_2b0;
    if (pppppppuStack_2b8 != (undefined8 *******)0x2) {
      uStack_af = uStack_297;
      uStack_a8 = uStack_290;
      uStack_b7 = uStack_29f;
      uStack_b0 = uStack_298;
      uStack_9f = uStack_287;
      uStack_98 = uStack_280;
      uStack_a7 = uStack_28f;
      bStack_a0 = bStack_288;
      uStack_8f = uStack_277;
      uStack_97 = uStack_27f;
      uStack_90 = uStack_278;
      lStack_80 = lStack_268;
      uStack_88 = (undefined4)CONCAT71(uStack_26f,uStack_270);
      uStack_84 = (undefined4)((uint7)uStack_26f >> 0x18);
      uStack_bf = uStack_2a7;
      uStack_b8 = uStack_2a0;
      uStack_c7 = uStack_2af;
      bStack_c0 = bStack_2a8;
      bStack_c8 = bStack_2b0;
      pppppppuVar21 = pppppppuStack_2b8;
      goto LAB_1013afa20;
    }
    if (bStack_2b0 == 3) goto LAB_1013af388;
    puVar27 = puVar22;
    if (uVar18 == 1) {
LAB_1013afadc:
      FUN_1087e427c(&pppppppuStack_d0,1,&UNK_10b22df98,&UNK_10b20a590);
      goto LAB_1013af3a4;
    }
    puVar11 = puVar2 + 0x14;
    puVar27 = puVar11;
    pppppppuStack_198 = (undefined8 *******)puVar11;
    if ((undefined8 *******)puVar2[10] == (undefined8 *******)0x8000000000000006)
    goto LAB_1013afadc;
    puStack_160 = (undefined8 *)puVar2[0xe];
    pppppppuStack_168 = (undefined8 *******)puVar2[0xd];
    pppppppuStack_150 = (undefined8 *******)puVar2[0x10];
    pppppppuStack_158 = (undefined8 *******)puVar2[0xf];
    pppppppuStack_140 = (undefined8 *******)puVar2[0x12];
    puStack_148 = (undefined8 *)puVar2[0x11];
    uStack_138 = puVar2[0x13];
    puStack_170 = (undefined8 *)puVar2[0xc];
    pppppppuStack_178 = (undefined8 *******)puVar2[0xb];
    pppppppuStack_180 = (undefined8 *******)puVar2[10];
    FUN_100615128(&pppppppuStack_2b8,&pppppppuStack_180);
    uVar6 = uStack_2af;
    bVar5 = bStack_2b0;
    if (pppppppuStack_2b8 != (undefined8 *******)0x2) {
      uStack_b0 = uStack_298;
      uStack_af = uStack_297;
      uStack_b8 = uStack_2a0;
      uStack_b7 = uStack_29f;
      bStack_a0 = bStack_288;
      uStack_9f = uStack_287;
      uStack_a8 = uStack_290;
      uStack_a7 = uStack_28f;
      uStack_90 = uStack_278;
      uStack_8f = uStack_277;
      uStack_98 = uStack_280;
      uStack_97 = uStack_27f;
      lStack_80 = lStack_268;
      uStack_88 = (undefined4)CONCAT71(uStack_26f,uStack_270);
      uStack_84 = (undefined4)((uint7)uStack_26f >> 0x18);
      bStack_c8 = bStack_2b0;
      uStack_c7 = uStack_2af;
      bStack_c0 = bStack_2a8;
      uStack_bf = uStack_2a7;
      pppppppuVar21 = pppppppuStack_2b8;
      goto LAB_1013afa20;
    }
    pppppppuVar21 = &pppppppuStack_180;
    if (uVar18 != 2) {
      puVar11 = puVar2 + 0x1e;
      pppppppuStack_198 = (undefined8 *******)puVar11;
      if ((undefined8 *******)puVar2[0x14] == (undefined8 *******)0x8000000000000006)
      goto LAB_1013afbc8;
      puStack_160 = (undefined8 *)puVar2[0x18];
      pppppppuStack_168 = (undefined8 *******)puVar2[0x17];
      pppppppuStack_150 = (undefined8 *******)puVar2[0x1a];
      pppppppuStack_158 = (undefined8 *******)puVar2[0x19];
      pppppppuStack_140 = (undefined8 *******)puVar2[0x1c];
      puStack_148 = (undefined8 *)puVar2[0x1b];
      uStack_138 = puVar2[0x1d];
      puStack_170 = (undefined8 *)puVar2[0x16];
      pppppppuStack_178 = (undefined8 *******)puVar2[0x15];
      pppppppuStack_180 = (undefined8 *******)puVar2[0x14];
      func_0x0001013d639c(&pppppppuStack_2b8,&pppppppuStack_180);
      if (pppppppuStack_2b8 == (undefined8 *******)0x2) {
        uStack_1d8 = CONCAT71(uStack_2a7,bStack_2a8);
        uStack_1e0 = CONCAT71(uStack_2af,bStack_2b0);
        uStack_1d0 = CONCAT71(uStack_29f,uStack_2a0);
        puVar27 = puVar11;
        pppppppuVar21 = extraout_x10;
        pppppppuVar23 = pppppppuStack_180;
        goto joined_r0x0001013afffc;
      }
      bStack_a0 = bStack_288;
      uStack_9f = uStack_287;
      uStack_a8 = uStack_290;
      uStack_a7 = uStack_28f;
      uStack_90 = uStack_278;
      uStack_8f = uStack_277;
      uStack_98 = uStack_280;
      uStack_97 = uStack_27f;
      lStack_80 = lStack_268;
      uStack_88 = (undefined4)CONCAT71(uStack_26f,uStack_270);
      uStack_84 = (undefined4)((uint7)uStack_26f >> 0x18);
      uStack_b0 = uStack_298;
      uStack_af = uStack_297;
      uStack_b8 = uStack_2a0;
      uStack_b7 = uStack_29f;
      bStack_c0 = bStack_2a8;
      uStack_bf = uStack_2a7;
      bStack_c8 = bStack_2b0;
      uStack_c7 = uStack_2af;
      puVar27 = puVar11;
      pppppppuStack_d0 = pppppppuStack_2b8;
      goto LAB_1013af3a4;
    }
LAB_1013afbc8:
    uStack_1e0 = 0;
    uStack_1d0 = 0;
    puVar27 = puVar11;
    pppppppuVar23 = pppppppuStack_180;
joined_r0x0001013afffc:
    if (puVar27 == puVar22) {
      bStack_a0 = 0;
      uStack_9f = 0;
      uStack_90 = 0;
      uStack_8f = 0;
      puVar11 = puVar22;
      pppppppuStack_180 = pppppppuVar23;
    }
    else {
      puVar11 = puVar27 + 10;
      pppppppuStack_180 = (undefined8 *******)*puVar27;
      pppppppuStack_198 = (undefined8 *******)puVar11;
      if (pppppppuStack_180 == (undefined8 *******)0x8000000000000006) {
        bStack_a0 = 0;
        uStack_9f = 0;
        uStack_90 = 0;
        uStack_8f = 0;
        pppppppuStack_180 = pppppppuVar23;
      }
      else {
        puStack_170 = (undefined8 *)puVar27[2];
        pppppppuStack_178 = (undefined8 *******)puVar27[1];
        pppppppuStack_150 = (undefined8 *******)puVar27[6];
        pppppppuStack_158 = (undefined8 *******)puVar27[5];
        pppppppuStack_140 = (undefined8 *******)puVar27[8];
        puStack_148 = (undefined8 *)puVar27[7];
        uStack_138 = puVar27[9];
        puStack_160 = (undefined8 *)puVar27[4];
        pppppppuStack_168 = (undefined8 *******)puVar27[3];
        func_0x0001012ddd84(&pppppppuStack_2b8,&pppppppuStack_180);
        uStack_b8 = uStack_2a0;
        uStack_b7 = uStack_29f;
        if (pppppppuStack_2b8 != (undefined8 *******)0x2) {
          bStack_a0 = bStack_288;
          uStack_9f = uStack_287;
          uStack_a8 = uStack_290;
          uStack_a7 = uStack_28f;
          uStack_90 = uStack_278;
          uStack_8f = uStack_277;
          uStack_98 = uStack_280;
          uStack_97 = uStack_27f;
          lStack_80 = lStack_268;
          uStack_88 = (undefined4)CONCAT71(uStack_26f,uStack_270);
          uStack_84 = (undefined4)((uint7)uStack_26f >> 0x18);
          pppppppuStack_d0 = pppppppuStack_2b8;
          bStack_c8 = bStack_2b0;
          uStack_c7 = uStack_2af;
          bStack_c0 = bStack_2a8;
          uStack_bf = uStack_2a7;
          uStack_b0 = uStack_298;
          uStack_af = uStack_297;
          if (uStack_1e0 == 0) {
            uVar14 = 0;
          }
          else {
            bStack_2b0 = 0;
            uStack_2af = 0;
            bStack_2a8 = (byte)uStack_1e0;
            uStack_2a7 = (uint7)((ulong)uStack_1e0 >> 8);
            uStack_2a0 = (undefined1)uStack_1d8;
            uStack_29f = (undefined7)((ulong)uStack_1d8 >> 8);
            uStack_290 = 0;
            uStack_28f = 0;
            uVar14 = uStack_1d0;
            bStack_288 = bStack_2a8;
            uStack_287 = uStack_2a7;
            uStack_280 = uStack_2a0;
            uStack_27f = uStack_29f;
          }
          uStack_298 = uStack_1e0 != 0;
          pppppppuStack_2b8 = (undefined8 *******)(ulong)(byte)uStack_298;
          uStack_297 = 0;
          uStack_278 = (undefined1)uVar14;
          uStack_277 = (undefined7)((ulong)uVar14 >> 8);
          while (FUN_100f3a554(&pppppppuStack_180,&pppppppuStack_2b8), puVar27 = puVar11,
                pppppppuStack_180 != (undefined8 *******)0x0) {
            if (pppppppuStack_180[(long)puStack_170 * 3 + 1] != (undefined8 ******)0x0) {
              _free(pppppppuStack_180[(long)puStack_170 * 3 + 2]);
            }
          }
          goto LAB_1013af3a4;
        }
        pppppppuVar21 = (undefined8 *******)CONCAT71(uStack_2a7,bStack_2a8);
        bStack_a0 = bStack_2b0;
        uStack_9f = uStack_2af;
        uStack_90 = uStack_2a0;
        uStack_8f = uStack_29f;
      }
    }
    uStack_b0 = (undefined1)uStack_1d8;
    uStack_af = (undefined7)((ulong)uStack_1d8 >> 8);
    uStack_b8 = (undefined1)uStack_1e0;
    uStack_b7 = (undefined7)((ulong)uStack_1e0 >> 8);
    bStack_c8 = 1;
    uStack_c7 = 0;
    bStack_c0 = bVar5;
    uStack_bf = uVar6;
    uStack_a8 = (undefined1)uStack_1d0;
    uStack_a7 = (undefined7)((ulong)uStack_1d0 >> 8);
    uStack_98 = SUB81(pppppppuVar21,0);
    uStack_97 = (undefined7)((ulong)pppppppuVar21 >> 8);
    uStack_88 = CONCAT31(uStack_88._1_3_,bVar4);
    puVar27 = puVar11;
  }
  lStack_2c8 = CONCAT71(uStack_8f,uStack_90);
  lStack_2d0 = CONCAT71(uStack_97,uStack_98);
  lStack_2c0 = CONCAT44(uStack_84,uStack_88);
  lStack_300 = CONCAT71(uStack_c7,bStack_c8);
  lStack_2d8 = CONCAT71(uStack_9f,bStack_a0);
  lStack_2e0 = CONCAT71(uStack_a7,uStack_a8);
  pppppppuStack_2e8 = (undefined8 *******)CONCAT71(uStack_af,uStack_b0);
  puStack_2f0 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
  pppppppuStack_1f8 = (undefined8 *******)lStack_2c8;
  puStack_200 = (undefined8 *)lStack_2d0;
  uStack_1f0 = lStack_2c0;
  if (puVar22 == puVar27) {
    param_1[4] = (long)pppppppuStack_2e8;
    param_1[3] = (long)puStack_2f0;
    param_1[6] = lStack_2d8;
    param_1[5] = lStack_2e0;
    param_1[8] = lStack_2c8;
    param_1[7] = lStack_2d0;
    param_1[9] = lStack_2c0;
    param_1[2] = CONCAT71(uStack_bf,bStack_c0);
    param_1[1] = lStack_300;
    *param_1 = 2;
  }
  else {
    FUN_1087e427c(&pppppppuStack_2b8,uVar18,&UNK_10b21cb80,&UNK_10b20a590);
    param_1[5] = CONCAT71(uStack_28f,uStack_290);
    param_1[4] = CONCAT71(uStack_297,uStack_298);
    param_1[7] = CONCAT71(uStack_27f,uStack_280);
    param_1[6] = CONCAT71(uStack_287,bStack_288);
    param_1[9] = CONCAT71(uStack_26f,uStack_270);
    param_1[8] = CONCAT71(uStack_277,uStack_278);
    param_1[10] = lStack_268;
    param_1[1] = CONCAT71(uStack_2af,bStack_2b0);
    *param_1 = (long)pppppppuStack_2b8;
    param_1[3] = CONCAT71(uStack_29f,uStack_2a0);
    param_1[2] = CONCAT71(uStack_2a7,bStack_2a8);
    func_0x000100e30374(&lStack_300);
  }
  lVar28 = ((ulong)((long)puVar22 - (long)puVar11) >> 4) * -0x3333333333333333 + 1;
  while (lVar28 = lVar28 + -1, lVar28 != 0) {
    FUN_100ddb5bc(puVar11);
    puVar11 = puVar11 + 10;
  }
LAB_1013afa90:
  if (uVar13 == 0) {
    return;
  }
  _free(puVar2);
  return;
code_r0x0001013af9c4:
  plVar16 = plStack_248 + 0xe;
  lVar28 = *plStack_248;
  plVar8 = plStack_248;
  plStack_248 = plVar16;
  if (lVar28 == -0x8000000000000000) goto LAB_1013af29c;
  goto LAB_1013af568;
}

