
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a32850(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar16;
  long lVar17;
  uint uVar15;
  ulong uVar18;
  uint uVar19;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong uVar20;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  undefined1 uVar21;
  int iVar22;
  undefined *puVar23;
  byte bVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 *unaff_x24;
  long *plVar27;
  byte *pbVar28;
  long lVar29;
  ulong unaff_x27;
  int iVar30;
  undefined8 *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined8 *puStack_450;
  undefined4 uStack_43c;
  undefined8 *puStack_438;
  long lStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  long lStack_31c;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined8 *puStack_2a9;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  long lStack_26c;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined8 *puStack_1f9;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  long lStack_14c;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  long lStack_10c;
  long *plStack_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 *puStack_90;
  undefined1 aauStack_80 [2] [16];
  
  puVar31 = &uStack_2a0;
  bVar24 = *(byte *)(param_2 + 0xc);
  if (bVar24 < 3) {
    if (bVar24 != 0) {
      if (bVar24 == 1) {
        func_0x000108a07af4(&UNK_10b22acc0);
      }
      func_0x000108a07b10();
LAB_100a32b78:
      func_0x000108a07af4(&UNK_10b22adc0);
      goto LAB_100a33c1c;
    }
    *(undefined1 *)((long)param_2 + 0x61) = 1;
    param_2[8] = param_2[3];
    param_2[9] = param_2[4];
    uVar26 = *param_2;
    iVar30 = *(int *)(param_2 + 1);
    param_2[0xb] = param_2[6];
    param_2[10] = param_2[5];
    plVar27 = (long *)param_2[6];
    uVar16 = param_2[7];
    if (iVar30 != 1000000000) {
      param_2[0xd] = uVar26;
      *(int *)(param_2 + 0xe) = iVar30;
      lVar17 = *plVar27;
      *plVar27 = lVar17 + 1;
      if (-1 < lVar17) {
        uVar18 = plVar27[0x28] & 0xfffffffffffffffe;
        lVar17 = plVar27[0x29];
        plVar27[0x29] = lVar17 + 1;
        bStack_f8 = (byte)uVar18;
        uStack_f7 = (undefined7)(uVar18 >> 8);
        *(undefined1 *)((long)param_2 + 0x61) = 0;
        plStack_100 = plVar27;
        uVar16 = func_0x000100a2b7d8(lVar17,uVar16);
        param_2[0xf] = uVar26;
        *(int *)(param_2 + 0x10) = iVar30;
        param_2[0x11] = plVar27;
        param_2[0x12] = uVar18;
        puVar23 = &UNK_10b22ac28;
        param_2[0x13] = uVar16;
        param_2[0x14] = &UNK_10b22ac28;
        *(undefined1 *)(param_2 + 0x3c) = 0;
LAB_100a32aa4:
        param_2[0x19] = uVar16;
        param_2[0x15] = plVar27;
        param_2[0x16] = uVar18;
        param_2[0x17] = uVar26;
        *(int *)(param_2 + 0x18) = iVar30;
        param_2[0x1a] = puVar23;
        param_2[0x1b] = param_2 + 0x19;
        goto LAB_100a32bdc;
      }
      goto LAB_100a33c1c;
    }
    *(undefined1 *)((long)param_2 + 0x61) = 0;
    uVar16 = func_0x000100a2b7d8(uVar16);
    puVar23 = &UNK_10b22ac28;
    param_2[0xd] = uVar16;
    param_2[0xe] = &UNK_10b22ac28;
LAB_100a32930:
    (**(code **)(puVar23 + 0x18))(&plStack_100,uVar16,param_3);
    uStack_320 = uStack_9c;
    uStack_324 = uStack_a0;
    uStack_328 = uStack_a4;
    uStack_43c = uStack_d0;
    plVar27 = plStack_100;
    if (plStack_100 == (long *)0x8000000000000001) {
      *param_1 = -0x7fffffffffffffff;
      uVar21 = 4;
      goto LAB_100a33a78;
    }
    unaff_x27 = CONCAT71(uStack_f7,bStack_f8);
    puStack_428 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
    puVar31 = (undefined8 *)CONCAT71(uStack_e7,uStack_e8);
    puStack_450 = (undefined8 *)CONCAT71(uStack_df,uStack_e0);
    lStack_430 = CONCAT71(uStack_d7,uStack_d8);
    uStack_348 = CONCAT44(uStack_c0,uStack_c4);
    uStack_350 = CONCAT44(uStack_c8,uStack_cc);
    uStack_338 = CONCAT44(uStack_b0,uStack_b4);
    uStack_340 = CONCAT44(uStack_b8,uStack_bc);
    uStack_330 = CONCAT44(uStack_a8,uStack_ac);
    lStack_31c = CONCAT71(uStack_97,uStack_98);
    uVar16 = param_2[0xd];
    puVar4 = (undefined8 *)param_2[0xe];
    pcVar12 = (code *)*puVar4;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar16);
    }
    if (puVar4[1] != 0) {
      _free(uVar16);
    }
    param_3 = puStack_90;
LAB_100a329d4:
    func_0x000100e39060(param_2 + 10);
  }
  else {
    if (bVar24 != 3) {
      uVar16 = param_2[0xd];
      puVar23 = (undefined *)param_2[0xe];
      goto LAB_100a32930;
    }
    bVar24 = *(byte *)(param_2 + 0x3c);
    if (bVar24 < 4) {
      if (1 < bVar24) {
        if (bVar24 == 3) {
          pbVar28 = (byte *)param_2[0x3d];
          puVar31 = (undefined8 *)param_2[0x3e];
          goto LAB_100a32c7c;
        }
        func_0x000108a07b10(&UNK_10b22adc0);
        goto LAB_100a33c1c;
      }
      if (bVar24 == 0) {
        uVar26 = param_2[0xf];
        iVar30 = *(int *)(param_2 + 0x10);
        plVar27 = (long *)param_2[0x11];
        uVar18 = param_2[0x12];
        uVar16 = param_2[0x13];
        puVar23 = (undefined *)param_2[0x14];
        goto LAB_100a32aa4;
      }
      goto LAB_100a32b78;
    }
    if (bVar24 != 4) {
      if (bVar24 == 5) {
        pbVar28 = (byte *)param_2[0x5b];
        plVar27 = (long *)param_2[0x5c];
LAB_100a32d38:
        lVar17 = (*
                 ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                 )();
        if (*(char *)(lVar17 + 0x48) != '\x01') {
          if (*(char *)(lVar17 + 0x48) == '\x02') {
            FUN_107c05e20(&UNK_10b4cce20);
            goto LAB_100a33c1c;
          }
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar17,&DAT_100c35d48);
          *(undefined1 *)(lVar17 + 0x48) = 1;
        }
        if (*(char *)(lVar17 + 0x44) == '\x01' && *(char *)(lVar17 + 0x45) == '\0') {
          FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
          goto LAB_100a33754;
        }
        if ((*(uint *)(lVar17 + 0x38) & 1) == 0) {
          uVar14 = FUN_1060fcce0();
          uVar18 = extraout_x1_07;
        }
        else {
          uVar14 = *(uint *)(lVar17 + 0x3c);
          uVar18 = (ulong)*(uint *)(lVar17 + 0x40);
        }
        uVar14 = uVar14 ^ uVar14 << 0x11;
        uVar19 = (uint)uVar18;
        uVar15 = (uint)(uVar18 >> 0x10) & 0xffff ^ uVar14 >> 7 ^ uVar19 ^ uVar14;
        uVar14 = uVar15 + uVar19;
        unaff_x27 = (ulong)uVar14;
        puVar31 = (undefined8 *)(unaff_x27 * 3 >> 0x20);
        *(undefined4 *)(lVar17 + 0x38) = 1;
        *(uint *)(lVar17 + 0x3c) = uVar19;
        *(uint *)(lVar17 + 0x40) = uVar15;
        iVar30 = (int)(unaff_x27 * 3 >> 0x20);
        if (iVar30 == 2) {
          bVar13 = false;
          if ((*pbVar28 >> 2 & 1) != 0) {
LAB_100a333a4:
            iVar22 = 1;
            if (0xaaaaaaaa < uVar14) {
              iVar22 = -2;
            }
            if (iVar22 + iVar30 == 0) {
              if ((*pbVar28 & 1) == 0) {
                (**(code **)((*(undefined8 **)plVar27[0xe])[1] + 0x18))
                          (&plStack_100,**(undefined8 **)plVar27[0xe],param_3);
                if (plStack_100 != (long *)0x8000000000000001) goto LAB_100a334e0;
                bVar13 = true;
              }
            }
            else if (iVar22 + iVar30 == 1) {
              if ((*pbVar28 >> 1 & 1) == 0) {
                uVar18 = func_0x000106114748(plVar27,param_3);
                bVar13 = true;
                if ((uVar18 & 1) == 0) goto LAB_100a333ec;
              }
            }
            else if ((*pbVar28 >> 2 & 1) == 0) {
              uVar15 = FUN_100fd4ba0(plVar27 + 0xf,param_3);
              uVar15 = uVar15 & 0xff;
              plVar25 = (long *)0x8000000000000002;
              bVar24 = 4;
              bVar13 = true;
              if (uVar15 != 2) goto LAB_100a33564;
            }
            iVar22 = 2;
            if (0x55555555 < uVar14) {
              iVar22 = -1;
            }
            if (iVar22 + iVar30 == 0) {
              if ((*pbVar28 & 1) != 0) goto LAB_100a33574;
              (**(code **)((*(undefined8 **)plVar27[0xe])[1] + 0x18))
                        (&plStack_100,**(undefined8 **)plVar27[0xe],param_3);
              if (plStack_100 != (long *)0x8000000000000001) goto LAB_100a334e0;
            }
            else if (iVar22 + iVar30 == 1) {
              if ((*pbVar28 >> 1 & 1) == 0) {
                uVar18 = func_0x000106114748(plVar27,param_3);
                plVar25 = (long *)0x8000000000000001;
                bVar24 = 2;
                uVar15 = (uint)puStack_428;
                if ((uVar18 & 1) == 0) goto LAB_100a33564;
              }
              else {
LAB_100a33574:
                plVar25 = (long *)0x8000000000000003;
                uVar15 = (uint)puStack_428;
                if (!bVar13) goto LAB_100a33580;
              }
            }
            else {
              if ((*pbVar28 >> 2 & 1) != 0) goto LAB_100a33574;
              uVar15 = FUN_100fd4ba0(plVar27 + 0xf,param_3);
              uVar15 = uVar15 & 0xff;
              plVar25 = (long *)0x8000000000000002;
              bVar24 = 4;
              if (uVar15 != 2) goto LAB_100a33564;
            }
LAB_100a33754:
            uVar21 = 5;
            goto LAB_100a33908;
          }
          uVar15 = FUN_100fd4ba0(plVar27 + 0xf,param_3);
          uVar15 = uVar15 & 0xff;
          plVar25 = (long *)0x8000000000000002;
          bVar24 = 4;
          bVar13 = true;
          if (uVar15 == 2) goto LAB_100a333a4;
LAB_100a33564:
          *pbVar28 = *pbVar28 | bVar24;
        }
        else {
          if (iVar30 == 1) {
            bVar13 = false;
            if ((*pbVar28 >> 1 & 1) != 0) goto LAB_100a333a4;
            uVar18 = func_0x000106114748(plVar27,param_3);
            bVar13 = true;
            if ((uVar18 & 1) != 0) goto LAB_100a333a4;
LAB_100a333ec:
            bVar24 = 2;
            plVar25 = (long *)0x8000000000000001;
            uVar15 = (uint)puStack_428;
            goto LAB_100a33564;
          }
          bVar13 = false;
          if ((*pbVar28 & 1) != 0) goto LAB_100a333a4;
          (**(code **)((*(undefined8 **)plVar27[0xe])[1] + 0x18))
                    (&plStack_100,**(undefined8 **)plVar27[0xe],param_3);
          if (plStack_100 == (long *)0x8000000000000001) {
            bVar13 = true;
            goto LAB_100a333a4;
          }
LAB_100a334e0:
          uVar15 = (uint)bStack_f8;
          uStack_228 = CONCAT17((undefined1)uStack_b8,CONCAT43(uStack_bc,uStack_c0._1_3_));
          uStack_230 = CONCAT17((undefined1)uStack_c0,CONCAT43(uStack_c4,uStack_c8._1_3_));
          uStack_218 = CONCAT17((undefined1)uStack_a8,CONCAT43(uStack_ac,uStack_b0._1_3_));
          uStack_220 = CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
          uStack_208 = CONCAT43(uStack_9c,uStack_a0._1_3_);
          uStack_210 = CONCAT17((undefined1)uStack_a0,CONCAT43(uStack_a4,uStack_a8._1_3_));
          puStack_1f9 = puStack_90;
          uStack_201 = uStack_98;
          uStack_200 = uStack_97;
          uStack_258 = CONCAT17(uStack_e8,CONCAT43(uStack_f0._4_4_,uStack_f0._1_3_));
          uStack_260 = CONCAT17((undefined1)uStack_f0,uStack_f7);
          uStack_248 = CONCAT17(uStack_d8,uStack_df);
          uStack_250 = CONCAT17(uStack_e0,uStack_e7);
          uStack_238 = CONCAT17((undefined1)uStack_c8,CONCAT43(uStack_cc,uStack_d0._1_3_));
          uStack_240 = CONCAT17((undefined1)uStack_d0,uStack_d7);
          *pbVar28 = *pbVar28 | 1;
          plVar25 = plStack_100;
          if (plStack_100 == (long *)0x8000000000000004) goto LAB_100a33754;
        }
LAB_100a33580:
        param_2[0x2d] = plVar25;
        puStack_428 = (undefined8 *)CONCAT44(puStack_428._4_4_,uVar15);
        *(char *)(param_2 + 0x2e) = (char)uVar15;
        param_2[0x3b] = puStack_1f9;
        param_2[0x3a] = CONCAT71(uStack_200,uStack_201);
        *(undefined8 *)((long)param_2 + 0x1b9) = uStack_218;
        *(undefined8 *)((long)param_2 + 0x1b1) = uStack_220;
        *(ulong *)((long)param_2 + 0x1c9) = CONCAT17(uStack_201,uStack_208);
        *(undefined8 *)((long)param_2 + 0x1c1) = uStack_210;
        *(undefined8 *)((long)param_2 + 0x179) = uStack_258;
        *(undefined8 *)((long)param_2 + 0x171) = uStack_260;
        *(undefined8 *)((long)param_2 + 0x189) = uStack_248;
        *(undefined8 *)((long)param_2 + 0x181) = uStack_250;
        *(undefined8 *)((long)param_2 + 0x199) = uStack_238;
        *(undefined8 *)((long)param_2 + 0x191) = uStack_240;
        *(undefined8 *)((long)param_2 + 0x1a9) = uStack_228;
        *(undefined8 *)((long)param_2 + 0x1a1) = uStack_230;
        func_0x000100ddb920(param_2 + 0x3d);
        plVar27 = (long *)param_2[0x2d];
        plVar25 = plVar27;
        if (plVar27 < (long *)0x8000000000000001) {
          plVar25 = (long *)0x0;
        }
        uVar18 = (ulong)plVar25 & 0x7fffffffffffffff;
        if (uVar18 == 2) {
          *(byte *)(param_2 + 0x3d) = *(byte *)(param_2 + 0x2e);
          if ((*(byte *)(param_2 + 0x2e) & 1) != 0) {
            unaff_x27 = param_2[0x17];
            iVar30 = *(int *)(param_2 + 0x18);
            unaff_x24 = (undefined8 *)param_2[0x1b];
            auVar34 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
            lVar29 = auVar34._0_8_ + unaff_x27;
            if ((long)unaff_x27 < 0 == SCARRY8(auVar34._0_8_,unaff_x27)) {
              puVar31 = (undefined8 *)0x3b9aca00;
              uVar14 = auVar34._8_4_ + iVar30;
              unaff_x27 = (ulong)uVar14;
              if ((999999999 < uVar14) &&
                 ((bVar13 = SCARRY8(lVar29,1), lVar29 = lVar29 + 1, bVar13 ||
                  (unaff_x27 = (ulong)(uVar14 + 0xc4653600), uVar14 + 0xc4653600 == 1000000000))))
              goto LAB_100a33804;
              auVar33 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E
                                  (&UNK_10b22ae20);
              aauStack_80[0]._0_8_ = auVar33._0_8_;
              lVar3 = 0x140;
              if ((aauStack_80[0]._0_8_ & 1) == 0) {
                lVar3 = 0x200;
              }
              if (*(int *)(auVar33._8_8_ + lVar3 + 0xd8) == 1000000000) {
                aauStack_80[0] = auVar33;
                func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b22ae20);
                goto LAB_100a33c1c;
              }
              bStack_f8 = auVar33[8];
              uStack_f7 = auVar33._9_7_;
              uStack_f0._0_4_ = 0;
              uStack_f0._4_4_ = 0;
              uStack_a8 = (undefined4)lVar29;
              uStack_a4 = (undefined4)((ulong)lVar29 >> 0x20);
              uStack_a0 = (undefined4)unaff_x27;
              uStack_98 = 0;
            }
            else {
LAB_100a33804:
              __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(&plStack_100,0);
              auVar33._8_8_ = aauStack_80[0]._8_8_;
              auVar33._0_8_ = plStack_100;
            }
            plStack_100 = auVar33._0_8_;
            uStack_1a8 = CONCAT44(uStack_b4,uStack_b8);
            uStack_1b0 = CONCAT44(uStack_bc,uStack_c0);
            uStack_198 = CONCAT44(uStack_a4,uStack_a8);
            uStack_1a0 = CONCAT44(uStack_ac,uStack_b0);
            uStack_188 = CONCAT71(uStack_97,uStack_98);
            uStack_190 = CONCAT44(uStack_9c,uStack_a0);
            uStack_1e8 = CONCAT71(uStack_f7,bStack_f8);
            uStack_1d8 = CONCAT71(uStack_e7,uStack_e8);
            puStack_1e0 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
            uStack_1c8 = CONCAT71(uStack_d7,uStack_d8);
            uStack_1d0 = CONCAT71(uStack_df,uStack_e0);
            uStack_1b8 = CONCAT44(uStack_c4,uStack_c8);
            uStack_1c0 = CONCAT44(uStack_cc,uStack_d0);
            param_2[0x47] = uStack_1a8;
            param_2[0x46] = uStack_1b0;
            param_2[0x49] = uStack_198;
            param_2[0x48] = uStack_1a0;
            param_2[0x4b] = uStack_188;
            param_2[0x4a] = uStack_190;
            param_2[0x3f] = uStack_1e8;
            param_2[0x3e] = plStack_100;
            param_2[0x41] = uStack_1d8;
            param_2[0x40] = puStack_1e0;
            param_2[0x43] = uStack_1c8;
            param_2[0x42] = uStack_1d0;
            param_2[0x45] = uStack_1b8;
            param_2[0x44] = uStack_1c0;
            param_2[0x4c] = unaff_x24;
            bVar24 = *(byte *)(lVar17 + 0x48);
            plStack_1f0 = plStack_100;
            goto joined_r0x000100a3389c;
          }
          lVar17 = param_2[0x15];
          puVar1 = (ulong *)(lVar17 + 0x130);
          uVar18 = *(ulong *)(lVar17 + 0x130);
          if (((uVar18 < 0xfffffffffffffff0) && (((uint)uVar18 >> 3 & 1) == 0)) &&
             (*puVar1 == uVar18)) {
            *puVar1 = uVar18 + 0x10;
          }
          else {
            __ZN11parking_lot10raw_rwlock9RawRwLock16lock_shared_slow17hef9e14ac2d6d1f59E(puVar1,0);
          }
          param_2[0x16] = *(ulong *)(lVar17 + 0x140) & 0xfffffffffffffffe;
          uVar18 = *(ulong *)(lVar17 + 0x130);
          *(ulong *)(lVar17 + 0x130) = uVar18 - 0x10;
          LORelease();
          bVar13 = (uVar18 & 0xfffffffffffffff2) == 0x12;
          if ((*(byte *)(lVar17 + 0x138) & 1) == 0) {
            if (bVar13) {
              __ZN11parking_lot10raw_rwlock9RawRwLock18unlock_shared_slow17hacce5df7e87da699E
                        (puVar1);
            }
          }
          else {
            if (bVar13) {
              __ZN11parking_lot10raw_rwlock9RawRwLock18unlock_shared_slow17hacce5df7e87da699E
                        (puVar1);
            }
            uVar18 = param_2[0x17];
            uVar14 = *(uint *)(param_2 + 0x18);
            auVar34 = func_0x000106032954(8);
            aauStack_80[0]._0_8_ = auVar34._0_8_;
            plStack_1f0 = (long *)param_2[0x2b];
            aauStack_80[0]._8_4_ = auVar34._8_4_;
            uStack_1e8 = CONCAT44(uStack_1e8._4_4_,*(undefined4 *)(param_2 + 0x2c));
            func_0x000106032878(&plStack_100,aauStack_80,&plStack_1f0);
            uVar15 = 0;
            if ((int)plStack_100 == 0) {
              uVar15 = (uint)uStack_f0;
            }
            uVar20 = 0;
            if ((int)plStack_100 == 0) {
              uVar20 = CONCAT71(uStack_f7,bStack_f8);
            }
            lVar17 = uVar18 - uVar20;
            if (uVar18 < uVar20) {
              uVar19 = 1000000000;
            }
            else {
              if (uVar14 < uVar15) {
                uVar19 = 1000000000;
                if (lVar17 == 0) goto LAB_100a33714;
                lVar17 = lVar17 + -1;
                uVar14 = uVar14 + 1000000000;
              }
              uVar19 = uVar14 - uVar15;
              if (999999999 < uVar19) {
                if (lVar17 == -1) {
                  func_0x000108a079f0(&UNK_108cc4024,0x19,&UNK_10b234dc0);
                  goto LAB_100a33c1c;
                }
                lVar17 = lVar17 + 1;
                uVar19 = uVar19 + 0xc4653600;
              }
            }
LAB_100a33714:
            uVar14 = 0;
            if (uVar19 != 1000000000) {
              uVar14 = uVar19;
            }
            lVar29 = 0;
            if (uVar19 != 1000000000) {
              lVar29 = lVar17;
            }
            param_2[0x17] = lVar29;
            *(uint *)(param_2 + 0x18) = uVar14;
            uStack_f0 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
            if ((lVar29 == 0) &&
               (uVar20 = extraout_x1_09,
               uStack_f0 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0), uVar14 == 0))
            goto LAB_100a33740;
          }
LAB_100a32bdc:
          while( true ) {
            plVar25 = param_2 + 0x15;
            lVar17 = *plVar25;
            puVar1 = (ulong *)(lVar17 + 0x130);
            uVar18 = *(ulong *)(lVar17 + 0x130);
            if ((uVar18 < 0xfffffffffffffff0 && (uVar18 & 8) == 0) && (*puVar1 == uVar18)) {
              *puVar1 = uVar18 + 0x10;
            }
            else {
              __ZN11parking_lot10raw_rwlock9RawRwLock16lock_shared_slow17hef9e14ac2d6d1f59E
                        (puVar1,0);
            }
            param_2[0x16] = *(ulong *)(lVar17 + 0x140) & 0xfffffffffffffffe;
            uVar18 = *(ulong *)(lVar17 + 0x130);
            *(ulong *)(lVar17 + 0x130) = uVar18 - 0x10;
            LORelease();
            bVar13 = (uVar18 & 0xfffffffffffffff2) == 0x12;
            if ((*(byte *)(lVar17 + 0x138) & 1) == 0) break;
            if (bVar13) {
              __ZN11parking_lot10raw_rwlock9RawRwLock18unlock_shared_slow17hacce5df7e87da699E
                        (puVar1);
            }
            pbVar28 = (byte *)((long)param_2 + 0x1e1);
            *(undefined1 *)((long)param_2 + 0x1e1) = 0;
            puVar31 = param_2 + 0x3f;
            param_2[0x3f] = param_2 + 0x1b;
            param_2[0x40] = plVar25;
            *(undefined1 *)(param_2 + 0x4e) = 0;
            param_2[0x3d] = pbVar28;
            param_2[0x3e] = puVar31;
LAB_100a32c7c:
            lVar17 = (*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
            if (*(char *)(lVar17 + 0x48) != '\x01') {
              if (*(char *)(lVar17 + 0x48) == '\x02') {
                FUN_107c05e20(&UNK_10b4cce20);
                goto LAB_100a33c1c;
              }
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar17,&DAT_100c35d48);
              *(undefined1 *)(lVar17 + 0x48) = 1;
            }
            if (*(char *)(lVar17 + 0x44) == '\x01' && *(char *)(lVar17 + 0x45) == '\0') {
              FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
LAB_100a33038:
              uVar21 = 3;
              goto LAB_100a33908;
            }
            if ((*(uint *)(lVar17 + 0x38) & 1) == 0) {
              uVar14 = FUN_1060fcce0();
              uVar20 = extraout_x1;
            }
            else {
              uVar14 = *(uint *)(lVar17 + 0x3c);
              uVar20 = (ulong)*(uint *)(lVar17 + 0x40);
            }
            uVar14 = uVar14 ^ uVar14 << 0x11;
            uVar15 = (uint)uVar20;
            uVar14 = (uint)(uVar20 >> 0x10) & 0xffff ^ uVar14 >> 7 ^ uVar15 ^ uVar14;
            *(undefined4 *)(lVar17 + 0x38) = 1;
            *(uint *)(lVar17 + 0x3c) = uVar15;
            *(uint *)(lVar17 + 0x40) = uVar14;
            bVar24 = *pbVar28;
            if ((int)(uVar14 + uVar15) < 0) {
              bVar5 = bVar24 & 2;
              if ((bVar24 >> 1 & 1) == 0) {
                uVar14 = FUN_100fd4ba0(puVar31 + 1,param_3);
                uVar14 = uVar14 & 0xff;
                uVar20 = extraout_x1_00;
                if (uVar14 == 2) {
                  bVar24 = *pbVar28;
                  goto LAB_100a32e04;
                }
LAB_100a32e90:
                *pbVar28 = *pbVar28 | 2;
                plVar27 = (long *)0x8000000000000001;
              }
              else {
LAB_100a32e04:
                if ((bVar24 & 1) == 0) {
                  (**(code **)((*(undefined8 **)*puVar31)[1] + 0x18))
                            (&plStack_100,**(undefined8 **)*puVar31,param_3);
                  uVar20 = extraout_x1_01;
                  if (plStack_100 != (long *)0x8000000000000001) goto LAB_100a32ebc;
                  goto LAB_100a33038;
                }
LAB_100a32ea8:
                plVar27 = (long *)0x8000000000000002;
                uVar14 = (uint)lStack_430;
                if (bVar5 == 0) goto LAB_100a33038;
              }
            }
            else {
              bVar5 = bVar24 & 1;
              if ((bVar24 & 1) != 0) {
LAB_100a32e74:
                if ((bVar24 >> 1 & 1) != 0) goto LAB_100a32ea8;
                uVar14 = FUN_100fd4ba0(puVar31 + 1,param_3);
                uVar14 = uVar14 & 0xff;
                uVar20 = extraout_x1_03;
                if (uVar14 != 2) goto LAB_100a32e90;
                goto LAB_100a33038;
              }
              (**(code **)((*(undefined8 **)*puVar31)[1] + 0x18))
                        (&plStack_100,**(undefined8 **)*puVar31,param_3);
              uVar20 = extraout_x1_02;
              if (plStack_100 == (long *)0x8000000000000001) {
                bVar24 = *pbVar28;
                goto LAB_100a32e74;
              }
LAB_100a32ebc:
              uStack_2d8 = CONCAT17((undefined1)uStack_b8,CONCAT43(uStack_bc,uStack_c0._1_3_));
              uStack_2e0 = CONCAT17((undefined1)uStack_c0,CONCAT43(uStack_c4,uStack_c8._1_3_));
              uStack_2c8 = CONCAT17((undefined1)uStack_a8,CONCAT43(uStack_ac,uStack_b0._1_3_));
              uStack_2d0 = CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
              uStack_2b8 = CONCAT43(uStack_9c,uStack_a0._1_3_);
              uStack_2c0 = CONCAT17((undefined1)uStack_a0,CONCAT43(uStack_a4,uStack_a8._1_3_));
              puStack_2a9 = puStack_90;
              uStack_2b1 = uStack_98;
              uStack_2b0 = uStack_97;
              uStack_308 = CONCAT17(uStack_e8,(int7)((ulong)uStack_f0 >> 8));
              uStack_310 = CONCAT17((undefined1)uStack_f0,uStack_f7);
              uStack_2f8 = CONCAT17(uStack_d8,uStack_df);
              uStack_300 = CONCAT17(uStack_e0,uStack_e7);
              uStack_2e8 = CONCAT17((undefined1)uStack_c8,CONCAT43(uStack_cc,uStack_d0._1_3_));
              uStack_2f0 = CONCAT17((undefined1)uStack_d0,uStack_d7);
              *pbVar28 = *pbVar28 | 1;
              plVar27 = plStack_100;
              uVar14 = (uint)bStack_f8;
              if (plStack_100 == (long *)0x8000000000000003) goto LAB_100a33038;
            }
            param_2[0x1c] = plVar27;
            *(char *)(param_2 + 0x1d) = (char)uVar14;
            *(undefined8 *)((long)param_2 + 0xf1) = uStack_308;
            *(undefined8 *)((long)param_2 + 0xe9) = uStack_310;
            *(undefined8 *)((long)param_2 + 0x101) = uStack_2f8;
            *(undefined8 *)((long)param_2 + 0xf9) = uStack_300;
            *(undefined8 *)((long)param_2 + 0x131) = uStack_2c8;
            *(undefined8 *)((long)param_2 + 0x129) = uStack_2d0;
            *(ulong *)((long)param_2 + 0x141) = CONCAT17(uStack_2b1,uStack_2b8);
            *(undefined8 *)((long)param_2 + 0x139) = uStack_2c0;
            param_2[0x2a] = puStack_2a9;
            param_2[0x29] = CONCAT71(uStack_2b0,uStack_2b1);
            *(undefined8 *)((long)param_2 + 0x111) = uStack_2e8;
            *(undefined8 *)((long)param_2 + 0x109) = uStack_2f0;
            *(undefined8 *)((long)param_2 + 0x121) = uStack_2d8;
            *(undefined8 *)((long)param_2 + 0x119) = uStack_2e0;
            if ((*(char *)(param_2 + 0x4e) == '\x03') &&
               (*(char *)((long)param_2 + 0x229) == '\x04')) {
              plStack_100 = (long *)param_2[0x46];
              uStack_f0 = param_2 + 0x47;
              bStack_f8 = (byte)(param_2 + 0x4d);
              uStack_f7 = (undefined7)((ulong)(param_2 + 0x4d) >> 8);
              uStack_e8 = SUB81(param_2 + 0x48,0);
              uStack_e7 = (undefined7)((ulong)(param_2 + 0x48) >> 8);
              FUN_1060fb5d4(&plStack_100);
              uVar20 = extraout_x1_04;
              if (param_2[0x4a] != 0) {
                (**(code **)(param_2[0x4a] + 0x18))(param_2[0x4b]);
                uVar20 = extraout_x1_05;
              }
              *(undefined1 *)(param_2 + 0x45) = 0;
              plVar27 = (long *)param_2[0x1c];
            }
            plVar25 = plVar27;
            if (plVar27 < (long *)0x8000000000000001) {
              plVar25 = (long *)0x0;
            }
            if (((ulong)plVar25 & 0x7fffffffffffffff) != 1) {
              if (((ulong)plVar25 & 0x7fffffffffffffff) != 0) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca2bde,0x6b,&UNK_10b22ae08);
                goto LAB_100a33c1c;
              }
              unaff_x27 = param_2[0x1d];
              puStack_428 = (undefined8 *)param_2[0x1e];
              puVar31 = (undefined8 *)param_2[0x1f];
              uStack_43c = *(undefined4 *)(param_2 + 0x22);
              lStack_10c = param_2[0x29];
              uStack_110 = (undefined4)((ulong)param_2[0x28] >> 0x20);
              uStack_138 = *(undefined8 *)((long)param_2 + 0x11c);
              uStack_140 = *(undefined8 *)((long)param_2 + 0x114);
              uStack_128 = *(undefined8 *)((long)param_2 + 300);
              uStack_130 = *(undefined8 *)((long)param_2 + 0x124);
              uStack_120 = *(undefined8 *)((long)param_2 + 0x134);
              uStack_118 = (undefined4)*(undefined8 *)((long)param_2 + 0x13c);
              uStack_114 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x13c) >> 0x20);
              param_3 = (undefined8 *)param_2[0x2a];
              uVar16 = param_2[0x19];
              puVar4 = (undefined8 *)param_2[0x1a];
              pcVar12 = (code *)*puVar4;
              puStack_450 = (undefined8 *)param_2[0x20];
              lStack_430 = param_2[0x21];
              goto joined_r0x000100a33088;
            }
            *(byte *)(param_2 + 0x3d) = *(byte *)(param_2 + 0x1d);
            if ((*(byte *)(param_2 + 0x1d) & 1) != 0) {
              unaff_x27 = param_2[0x17];
              iVar30 = *(int *)(param_2 + 0x18);
              unaff_x24 = (undefined8 *)param_2[0x1b];
              auVar34 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
              lVar29 = auVar34._0_8_ + unaff_x27;
              if ((long)unaff_x27 < 0 == SCARRY8(auVar34._0_8_,unaff_x27)) {
                uVar14 = auVar34._8_4_ + iVar30;
                unaff_x27 = (ulong)uVar14;
                if ((999999999 < uVar14) &&
                   ((bVar13 = SCARRY8(lVar29,1), lVar29 = lVar29 + 1, bVar13 ||
                    (unaff_x27 = (ulong)(uVar14 + 0xc4653600), uVar14 + 0xc4653600 == 1000000000))))
                goto LAB_100a330ec;
                auVar32 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E
                                    (&UNK_10b22adf0);
                aauStack_80[0]._0_8_ = auVar32._0_8_;
                lVar3 = 0x140;
                if ((aauStack_80[0]._0_8_ & 1) == 0) {
                  lVar3 = 0x200;
                }
                if (*(int *)(auVar32._8_8_ + lVar3 + 0xd8) == 1000000000) {
                  aauStack_80[0] = auVar32;
                  func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b22adf0);
                  goto LAB_100a33c1c;
                }
                bStack_f8 = auVar32[8];
                uStack_f7 = auVar32._9_7_;
                uStack_f0 = (undefined8 *)0x0;
                uStack_a8 = (undefined4)lVar29;
                uStack_a4 = (undefined4)((ulong)lVar29 >> 0x20);
                uStack_a0 = (undefined4)unaff_x27;
                uStack_98 = 0;
              }
              else {
LAB_100a330ec:
                __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(&plStack_100,0);
                auVar32._8_8_ = aauStack_80[0]._8_8_;
                auVar32._0_8_ = plStack_100;
              }
              plStack_100 = auVar32._0_8_;
              uStack_1a8 = CONCAT44(uStack_b4,uStack_b8);
              uStack_1b0 = CONCAT44(uStack_bc,uStack_c0);
              uStack_198 = CONCAT44(uStack_a4,uStack_a8);
              uStack_1a0 = CONCAT44(uStack_ac,uStack_b0);
              uStack_188 = CONCAT71(uStack_97,uStack_98);
              uStack_190 = CONCAT44(uStack_9c,uStack_a0);
              uStack_1e8 = CONCAT71(uStack_f7,bStack_f8);
              uStack_1d8 = CONCAT71(uStack_e7,uStack_e8);
              uStack_1c8 = CONCAT71(uStack_d7,uStack_d8);
              uStack_1d0 = CONCAT71(uStack_df,uStack_e0);
              uStack_1b8 = CONCAT44(uStack_c4,uStack_c8);
              uStack_1c0 = CONCAT44(uStack_cc,uStack_d0);
              param_2[0x47] = uStack_1a8;
              param_2[0x46] = uStack_1b0;
              param_2[0x49] = uStack_198;
              param_2[0x48] = uStack_1a0;
              param_2[0x4b] = uStack_188;
              param_2[0x4a] = uStack_190;
              param_2[0x3f] = uStack_1e8;
              param_2[0x3e] = plStack_100;
              param_2[0x41] = uStack_1d8;
              param_2[0x40] = uStack_f0;
              param_2[0x43] = uStack_1c8;
              param_2[0x42] = uStack_1d0;
              param_2[0x45] = uStack_1b8;
              param_2[0x44] = uStack_1c0;
              param_2[0x4c] = unaff_x24;
              bVar24 = *(byte *)(lVar17 + 0x48);
              plStack_1f0 = plStack_100;
              puStack_1e0 = uStack_f0;
              goto joined_r0x000100a33188;
            }
            lVar17 = param_2[0x15];
            puVar1 = (ulong *)(lVar17 + 0x130);
            uVar18 = *(ulong *)(lVar17 + 0x130);
            if (((uVar18 < 0xfffffffffffffff0) && (((uint)uVar18 >> 3 & 1) == 0)) &&
               (*puVar1 == uVar18)) {
              *puVar1 = uVar18 + 0x10;
            }
            else {
              __ZN11parking_lot10raw_rwlock9RawRwLock16lock_shared_slow17hef9e14ac2d6d1f59E
                        (puVar1,0);
            }
            lStack_430 = CONCAT44(lStack_430._4_4_,uVar14);
            param_2[0x16] = *(ulong *)(lVar17 + 0x140) & 0xfffffffffffffffe;
            uVar18 = *(ulong *)(lVar17 + 0x130);
            *(ulong *)(lVar17 + 0x130) = uVar18 - 0x10;
            LORelease();
            if ((uVar18 & 0xfffffffffffffff2) == 0x12) {
              __ZN11parking_lot10raw_rwlock9RawRwLock18unlock_shared_slow17hacce5df7e87da699E
                        (puVar1);
            }
          }
          if (bVar13) {
            __ZN11parking_lot10raw_rwlock9RawRwLock18unlock_shared_slow17hacce5df7e87da699E(puVar1);
          }
          auVar34 = func_0x000106032954(8);
          *(undefined1 (*) [12])(param_2 + 0x2b) = auVar34;
          *(undefined1 *)((long)param_2 + 0x1e2) = 0;
          __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                    (&plStack_1f0,param_2[0x17],*(undefined4 *)(param_2 + 0x18),&UNK_10b22add8);
          pbVar28 = (byte *)((long)param_2 + 0x1e2);
          uStack_b8 = (undefined4)uStack_1a8;
          uStack_b4 = (undefined4)((ulong)uStack_1a8 >> 0x20);
          uStack_c0 = (undefined4)uStack_1b0;
          uStack_bc = (undefined4)((ulong)uStack_1b0 >> 0x20);
          uStack_a8 = (undefined4)uStack_198;
          uStack_a4 = (undefined4)((ulong)uStack_198 >> 0x20);
          uStack_b0 = (undefined4)uStack_1a0;
          uStack_ac = (undefined4)((ulong)uStack_1a0 >> 0x20);
          uStack_98 = (undefined1)uStack_188;
          uStack_97 = (undefined7)((ulong)uStack_188 >> 8);
          uStack_a0 = (undefined4)uStack_190;
          uStack_9c = (undefined4)((ulong)uStack_190 >> 0x20);
          bStack_f8 = (byte)uStack_1e8;
          uStack_f7 = (undefined7)((ulong)uStack_1e8 >> 8);
          plStack_100 = plStack_1f0;
          uStack_e8 = (undefined1)uStack_1d8;
          uStack_e7 = (undefined7)((ulong)uStack_1d8 >> 8);
          uStack_f0._0_4_ = (uint)puStack_1e0;
          uStack_f0._4_4_ = (undefined4)((ulong)puStack_1e0 >> 0x20);
          uStack_d8 = (undefined1)uStack_1c8;
          uStack_d7 = (undefined7)((ulong)uStack_1c8 >> 8);
          uStack_e0 = (undefined1)uStack_1d0;
          uStack_df = (undefined7)((ulong)uStack_1d0 >> 8);
          uStack_c8 = (undefined4)uStack_1b8;
          uStack_c4 = (undefined4)((ulong)uStack_1b8 >> 0x20);
          uStack_d0 = (undefined4)uStack_1c0;
          uStack_cc = (undefined4)((ulong)uStack_1c0 >> 0x20);
          plVar27 = param_2 + 0x3d;
          param_2[0x4b] = param_2 + 0x1b;
          param_2[0x46] = uStack_1a8;
          param_2[0x45] = uStack_1b0;
          param_2[0x48] = uStack_198;
          param_2[0x47] = uStack_1a0;
          param_2[0x4a] = uStack_188;
          param_2[0x49] = uStack_190;
          param_2[0x3e] = uStack_1e8;
          *plVar27 = (long)plStack_1f0;
          param_2[0x40] = uStack_1d8;
          param_2[0x3f] = puStack_1e0;
          param_2[0x42] = uStack_1c8;
          param_2[0x41] = uStack_1d0;
          param_2[0x44] = uStack_1b8;
          param_2[0x43] = uStack_1c0;
          param_2[0x4c] = plVar25;
          *(undefined1 *)(param_2 + 0x5a) = 0;
          param_2[0x5b] = pbVar28;
          param_2[0x5c] = plVar27;
          goto LAB_100a32d38;
        }
        uVar20 = extraout_x1_08;
        if (uVar18 == 0) {
          unaff_x27 = param_2[0x2e];
          puStack_428 = (undefined8 *)param_2[0x2f];
          uStack_43c = *(undefined4 *)(param_2 + 0x33);
          uStack_138 = *(undefined8 *)((long)param_2 + 0x1a4);
          uStack_140 = *(undefined8 *)((long)param_2 + 0x19c);
          uStack_128 = *(undefined8 *)((long)param_2 + 0x1b4);
          uStack_130 = *(undefined8 *)((long)param_2 + 0x1ac);
          uStack_120 = *(undefined8 *)((long)param_2 + 0x1bc);
          uStack_118 = (undefined4)*(undefined8 *)((long)param_2 + 0x1c4);
          lStack_10c = param_2[0x3a];
          uStack_114 = (undefined4)param_2[0x39];
          uStack_110 = (undefined4)((ulong)param_2[0x39] >> 0x20);
          param_3 = (undefined8 *)param_2[0x3b];
          uVar16 = param_2[0x19];
          puVar4 = (undefined8 *)param_2[0x1a];
          pcVar12 = (code *)*puVar4;
          puVar31 = (undefined8 *)param_2[0x30];
          puStack_450 = (undefined8 *)param_2[0x31];
          lStack_430 = param_2[0x32];
          goto joined_r0x000100a33088;
        }
        if (uVar18 != 1) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b22ae38);
          goto LAB_100a33c1c;
        }
LAB_100a33740:
        plVar27 = (long *)0x8000000000000001;
        goto LAB_100a33970;
      }
      lVar17 = (*
               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
               )();
      auVar33._8_8_ = aauStack_80[0]._8_8_;
      auVar33._0_8_ = plStack_100;
      bVar24 = *(byte *)(lVar17 + 0x48);
joined_r0x000100a3389c:
      if (bVar24 == 1) {
LAB_100a338a0:
        bVar24 = *(char *)(lVar17 + 0x45) != '\0' | (*(byte *)(lVar17 + 0x44) ^ 0xff) & 1;
      }
      else {
        aauStack_80[0]._8_8_ = auVar33._8_8_;
        plStack_100 = auVar33._0_8_;
        if (bVar24 != 2) {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar17,&DAT_100c35d48);
          auVar33._8_8_ = aauStack_80[0]._8_8_;
          auVar33._0_8_ = plStack_100;
          *(undefined1 *)(lVar17 + 0x48) = 1;
          goto LAB_100a338a0;
        }
      }
      aauStack_80[0]._8_8_ = auVar33._8_8_;
      plStack_100 = auVar33._0_8_;
      (**(code **)(((undefined8 *)param_2[0x4c])[1] + 0x18))
                (&plStack_100,*(undefined8 *)param_2[0x4c],param_3);
      plVar27 = plStack_100;
      if (plStack_100 != (long *)0x8000000000000001) {
        unaff_x27 = CONCAT71(uStack_f7,bStack_f8);
        puStack_428 = (undefined8 *)CONCAT44(uStack_f0._4_4_,(uint)uStack_f0);
        puVar31 = (undefined8 *)CONCAT71(uStack_e7,uStack_e8);
        unaff_x24 = (undefined8 *)CONCAT71(uStack_df,uStack_e0);
        lVar17 = CONCAT71(uStack_d7,uStack_d8);
        uStack_43c = uStack_d0;
        uStack_178 = CONCAT44(uStack_c0,uStack_c4);
        uStack_180 = CONCAT44(uStack_c8,uStack_cc);
        uStack_168 = CONCAT44(uStack_b0,uStack_b4);
        uStack_170 = CONCAT44(uStack_b8,uStack_bc);
        uStack_160 = CONCAT44(uStack_a8,uStack_ac);
        uStack_158 = uStack_a4;
        lStack_14c = CONCAT71(uStack_97,uStack_98);
        uStack_154 = uStack_a0;
        uStack_150 = uStack_9c;
        param_3 = puStack_90;
LAB_100a3395c:
        FUN_100de8a5c(param_2 + 0x3e);
        uVar20 = extraout_x1_10;
        if (plVar27 == (long *)0x8000000000000001) goto LAB_100a33970;
        uVar16 = param_2[0x19];
        puVar4 = (undefined8 *)param_2[0x1a];
        pcVar12 = (code *)*puVar4;
        puStack_450 = unaff_x24;
        lStack_430 = lVar17;
        lStack_10c = lStack_14c;
        uStack_140 = uStack_180;
        uStack_138 = uStack_178;
        uStack_120 = uStack_160;
        uStack_130 = uStack_170;
        uStack_128 = uStack_168;
        uStack_118 = uStack_158;
        uStack_114 = uStack_154;
        uStack_110 = uStack_150;
        goto joined_r0x000100a33088;
      }
      uVar18 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                         (bVar24 == 2 | bVar24 & 1,param_2 + 0x3e,param_3);
      if ((uVar18 & 1) == 0) goto LAB_100a3395c;
      uVar21 = 6;
LAB_100a33908:
      puStack_420 = param_2 + 0x3c;
      *(undefined1 *)puStack_420 = uVar21;
LAB_100a33a6c:
      *param_1 = -0x7fffffffffffffff;
      uVar21 = 3;
      goto LAB_100a33a78;
    }
    lVar17 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    auVar32._8_8_ = aauStack_80[0]._8_8_;
    auVar32._0_8_ = plStack_100;
    bVar24 = *(byte *)(lVar17 + 0x48);
joined_r0x000100a33188:
    if (bVar24 == 1) {
LAB_100a3318c:
      bVar24 = *(char *)(lVar17 + 0x45) != '\0' | (*(byte *)(lVar17 + 0x44) ^ 0xff) & 1;
    }
    else {
      aauStack_80[0]._8_8_ = auVar32._8_8_;
      plStack_100 = auVar32._0_8_;
      if (bVar24 != 2) {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar17,&DAT_100c35d48);
        auVar32._8_8_ = aauStack_80[0]._8_8_;
        auVar32._0_8_ = plStack_100;
        *(undefined1 *)(lVar17 + 0x48) = 1;
        goto LAB_100a3318c;
      }
    }
    aauStack_80[0]._8_8_ = auVar32._8_8_;
    plStack_100 = auVar32._0_8_;
    puVar31 = &uStack_2a0;
    (**(code **)(((undefined8 *)param_2[0x4c])[1] + 0x18))
              (&plStack_100,*(undefined8 *)param_2[0x4c],param_3);
    plVar27 = plStack_100;
    if (plStack_100 == (long *)0x8000000000000001) {
      uVar18 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                         (bVar24 == 2 | bVar24 & 1,param_2 + 0x3e,param_3);
      if ((uVar18 & 1) != 0) {
        uVar21 = 4;
        goto LAB_100a33908;
      }
    }
    else {
      unaff_x27 = CONCAT71(uStack_f7,bStack_f8);
      puStack_428 = uStack_f0;
      unaff_x24 = (undefined8 *)CONCAT71(uStack_e7,uStack_e8);
      puStack_450 = (undefined8 *)CONCAT71(uStack_df,uStack_e0);
      lStack_430 = CONCAT71(uStack_d7,uStack_d8);
      uStack_43c = uStack_d0;
      uStack_298 = CONCAT44(uStack_c0,uStack_c4);
      uStack_2a0 = CONCAT44(uStack_c8,uStack_cc);
      uStack_288 = CONCAT44(uStack_b0,uStack_b4);
      uStack_290 = CONCAT44(uStack_b8,uStack_bc);
      uStack_280 = CONCAT44(uStack_a8,uStack_ac);
      uStack_278 = uStack_a4;
      lStack_26c = CONCAT71(uStack_97,uStack_98);
      uStack_274 = uStack_a0;
      uStack_270 = uStack_9c;
      param_3 = puStack_90;
    }
    FUN_100de8a5c(param_2 + 0x3e);
    uVar20 = extraout_x1_06;
    if (plVar27 == (long *)0x8000000000000001) {
LAB_100a33970:
      uVar16 = param_2[0x19];
      puVar4 = (undefined8 *)param_2[0x1a];
      pcVar12 = (code *)*puVar4;
    }
    else {
      uVar16 = param_2[0x19];
      puVar4 = (undefined8 *)param_2[0x1a];
      pcVar12 = (code *)*puVar4;
      puVar31 = unaff_x24;
      lStack_10c = lStack_26c;
      uStack_140 = uStack_2a0;
      uStack_138 = uStack_298;
      uStack_120 = uStack_280;
      uStack_130 = uStack_290;
      uStack_128 = uStack_288;
      uStack_118 = uStack_278;
      uStack_114 = uStack_274;
      uStack_110 = uStack_270;
    }
joined_r0x000100a33088:
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar16);
      uVar20 = extraout_x1_11;
    }
    puStack_420 = param_2 + 0x3c;
    puStack_438 = param_2 + 0xf;
    if (puVar4[1] != 0) {
      _free(uVar16);
      uVar20 = extraout_x1_12;
    }
    plVar25 = (long *)param_2[0x15];
    lVar17 = plVar25[0x29];
    plVar25[0x29] = lVar17 + -1;
    if (lVar17 == 1) {
      plVar2 = plVar25 + 0x23;
      if ((char)*plVar2 == '\0') {
        *(char *)plVar2 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar2,uVar20,1000000000)
        ;
      }
      plStack_100 = plVar25 + 0x22;
      bStack_f8 = (byte)plVar2;
      uStack_f7 = (undefined7)((ulong)plVar2 >> 8);
      uStack_f0._0_4_ = (uint)*plStack_100;
      uStack_f0._4_4_ = (undefined4)((ulong)*plStack_100 >> 0x20);
      __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_100);
    }
    lVar17 = *plVar25;
    *plVar25 = lVar17 + -1;
    LORelease();
    if (lVar17 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE(param_2 + 0x15);
    }
    lVar17 = lStack_10c;
    uVar11 = uStack_110;
    uVar10 = uStack_114;
    uVar9 = uStack_118;
    uVar8 = uStack_120;
    uVar7 = uStack_128;
    uVar6 = uStack_130;
    uVar26 = uStack_138;
    uVar16 = uStack_140;
    *(undefined1 *)puStack_420 = 1;
    if (plVar27 == (long *)0x8000000000000002) goto LAB_100a33a6c;
    func_0x000100ddf394(puStack_438);
    if (plVar27 != (long *)0x8000000000000001) {
      uStack_348 = uVar26;
      uStack_350 = uVar16;
      uStack_338 = uVar7;
      uStack_340 = uVar6;
      uStack_330 = uVar8;
      uStack_328 = uVar9;
      lStack_31c = lVar17;
      uStack_324 = uVar10;
      uStack_320 = uVar11;
      goto LAB_100a329d4;
    }
    uVar16 = param_2[8];
    param_3 = (undefined8 *)param_2[9];
    if (param_3 == (undefined8 *)0x0) {
      puVar31 = (undefined8 *)0x1;
    }
    else {
      puVar31 = (undefined8 *)_malloc(param_3);
      if (puVar31 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,param_3);
LAB_100a33c1c:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100a33c20);
        (*pcVar12)();
      }
    }
    _memcpy(puVar31,uVar16,param_3);
    lStack_430 = param_2[0xd];
    uStack_43c = *(undefined4 *)(param_2 + 0xe);
    func_0x000100e39060(param_2 + 10);
    unaff_x27 = 0x8000000000000006;
    plVar27 = (long *)0x8000000000000000;
    puStack_450 = param_3;
    puStack_428 = param_3;
  }
  *(undefined8 *)((long)param_1 + 0x3c) = uStack_348;
  *(undefined8 *)((long)param_1 + 0x34) = uStack_350;
  *(undefined1 *)((long)param_2 + 0x61) = 0;
  *param_1 = (long)plVar27;
  param_1[1] = unaff_x27;
  param_1[2] = (long)puStack_428;
  param_1[3] = (long)puVar31;
  param_1[4] = (long)puStack_450;
  param_1[5] = lStack_430;
  *(undefined4 *)(param_1 + 6) = uStack_43c;
  *(undefined8 *)((long)param_1 + 0x4c) = uStack_338;
  *(undefined8 *)((long)param_1 + 0x44) = uStack_340;
  *(ulong *)((long)param_1 + 0x5c) = CONCAT44(uStack_324,uStack_328);
  *(undefined8 *)((long)param_1 + 0x54) = uStack_330;
  param_1[0xd] = lStack_31c;
  param_1[0xc] = CONCAT44(uStack_320,uStack_324);
  uVar21 = 1;
  param_1[0xe] = (long)param_3;
LAB_100a33a78:
  *(undefined1 *)(param_2 + 0xc) = uVar21;
  return;
}

