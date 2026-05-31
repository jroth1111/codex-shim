
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a42430(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *****pppppcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar20;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined1 uVar21;
  long lVar22;
  code *pcVar23;
  long *plVar24;
  code *pcVar25;
  long lVar26;
  ulong uVar27;
  char *unaff_x21;
  long *plVar28;
  long unaff_x23;
  undefined1 in_wzr;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  char ****ppppcStack_3d0;
  char *****pppppcStack_3c8;
  undefined8 **ppuStack_3c0;
  char ****ppppcStack_3b0;
  char *****pppppcStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  char ****ppppcStack_340;
  char *****pppppcStack_338;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  char *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  char ****ppppcStack_270;
  char *****pppppcStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  char *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  byte abStack_1a8 [8];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char ****ppppcStack_178;
  undefined *puStack_170;
  short sStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  
  bVar6 = *(byte *)(param_1 + 4);
  if (bVar6 < 2) {
    if (bVar6 != 0) {
      func_0x000108a07af4(&UNK_10b22af70);
LAB_100a42634:
      func_0x000108a07b10(&UNK_10b22af70);
      *(undefined1 *)(param_1 + 4) = 2;
      uVar15 = __Unwind_Resume();
      if (*(long *)(unaff_x23 + 8) != 0) {
        _free();
        *(undefined1 *)(param_1 + 4) = 2;
        uVar15 = __Unwind_Resume(uVar15);
        FUN_100c9623c(param_1[2],param_1[3]);
      }
      *(undefined1 *)(param_1 + 4) = 2;
      __Unwind_Resume(uVar15);
      auVar29 = func_0x000108a07bc4();
      uVar15 = auVar29._8_8_;
      plVar16 = auVar29._0_8_;
      bVar6 = *(byte *)((long)plVar16 + 0xaa);
      if (bVar6 < 4) {
        if (bVar6 < 2) {
          if (bVar6 == 0) {
            *(undefined2 *)(plVar16 + 0x15) = 0;
            plVar16[0xe] = plVar16[0x14];
            plVar24 = *(long **)(*(long *)plVar16[0x14] + 0x40);
            lVar22 = *plVar24;
            *plVar24 = lVar22 + 1;
            if (lVar22 < 0) goto LAB_100a431d8;
            plVar16[0x12] = (long)plVar24;
            plVar16[0x16] = (long)(plVar24 + 2);
            *(undefined1 *)(plVar16 + 0x24) = 0;
LAB_100a42754:
            lVar22 = FUN_100fd3e50(plVar16 + 0x16,uVar15);
            if (lVar22 == 0) {
              uVar21 = 3;
              goto LAB_100a42c94;
            }
            plVar16[0x13] = lVar22;
            if ((((char)plVar16[0x24] == '\x03') && ((char)plVar16[0x23] == '\x03')) &&
               ((char)plVar16[0x1a] == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (plVar16 + 0x1b);
              if (plVar16[0x1c] != 0) {
                (**(code **)(plVar16[0x1c] + 0x18))(plVar16[0x1d]);
              }
            }
            plVar16[0x16] = plVar16[0x13] + 0x28;
            *(undefined1 *)(plVar16 + 0x1a) = 0;
            goto LAB_100a427b8;
          }
          func_0x000108a07af4(&UNK_10b22afa0);
        }
        else if (bVar6 == 3) goto LAB_100a42754;
        func_0x000108a07b10(&UNK_10b22afa0);
LAB_100a431bc:
        func_0x0001087c9084(1,unaff_x23);
LAB_100a431d8:
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100a431dc);
        (*pcVar23)();
      }
      if (bVar6 == 4) {
LAB_100a427b8:
        FUN_100f01594(&ppppcStack_270,plVar16 + 0x16,uVar15);
        lVar9 = lStack_1f0;
        pcVar17 = pcStack_1f8;
        uVar18 = uStack_200;
        lVar8 = lStack_208;
        lVar7 = lStack_210;
        lVar26 = lStack_218;
        lVar19 = lStack_220;
        lVar5 = lStack_228;
        lVar22 = lStack_230;
        pcVar23 = pcStack_258;
        if (pcStack_258 == (code *)0x4) {
          uVar21 = 4;
          goto LAB_100a42c94;
        }
        ppuStack_3c0 = ppuStack_260;
        lStack_3e8 = lStack_248;
        lStack_3f0 = lStack_250;
        lStack_3d8 = lStack_238;
        lStack_3e0 = lStack_240;
        pppppcStack_3c8 = pppppcStack_268;
        ppppcStack_3d0 = ppppcStack_270;
        uVar20 = extraout_x1;
        if ((char)plVar16[0x1a] == '\x03') {
          lVar10 = plVar16[0x18];
          puVar13 = (undefined8 *)plVar16[0x19];
          pcVar25 = (code *)*puVar13;
          if (pcVar25 != (code *)0x0) {
            (*pcVar25)(lVar10);
            uVar20 = extraout_x1_00;
          }
          if (puVar13[1] != 0) {
            _free(lVar10);
            uVar20 = extraout_x1_01;
          }
        }
        unaff_x21 = (char *)plVar16[0x13];
        if (*unaff_x21 == '\0') {
          *unaff_x21 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (unaff_x21,uVar20,1000000000);
        }
        FUN_1060fa678(unaff_x21,1,unaff_x21);
        lVar10 = *(long *)plVar16[0x12];
        *(long *)plVar16[0x12] = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
        }
        if (pcVar23 == (code *)0x3) {
          FUN_108858c70(&lStack_3f0);
          goto LAB_100a430c4;
        }
        plVar16[0x10] = (long)pppppcStack_3c8;
        plVar16[0xf] = (long)ppppcStack_3d0;
        plVar16[2] = lStack_3e8;
        plVar16[1] = lStack_3f0;
        plVar16[4] = lStack_3d8;
        plVar16[3] = lStack_3e0;
        plVar16[8] = lVar26;
        plVar16[7] = lVar19;
        plVar16[10] = lVar8;
        plVar16[9] = lVar7;
        plVar16[0xc] = (long)pcVar17;
        plVar16[0xb] = uVar18;
        *(undefined2 *)(plVar16 + 0x15) = 0x101;
        plVar16[0x11] = (long)ppuStack_3c0;
        *plVar16 = (long)pcVar23;
        plVar16[0xd] = lVar9;
        plVar16[6] = lVar5;
        plVar16[5] = lVar22;
        if (pcVar23 == (code *)0x2) {
          plVar16[0x16] = *(long *)plVar16[0xe] + 0x48;
          *(undefined1 *)(plVar16 + 0x24) = 0;
          goto LAB_100a42908;
        }
        *(undefined1 *)((long)plVar16 + 0xa9) = 0;
        plVar16[0x2e] = plVar16[9];
        plVar16[0x2d] = plVar16[8];
        plVar16[0x30] = plVar16[0xb];
        plVar16[0x2f] = plVar16[10];
        plVar16[0x32] = plVar16[0xd];
        plVar16[0x31] = plVar16[0xc];
        plVar16[0x26] = plVar16[1];
        plVar16[0x25] = *plVar16;
        plVar16[0x28] = plVar16[3];
        plVar16[0x27] = plVar16[2];
        plVar16[0x2a] = plVar16[5];
        plVar16[0x29] = plVar16[4];
        plVar16[0x2c] = plVar16[7];
        plVar16[0x2b] = plVar16[6];
        plVar16[0x16] = *(long *)plVar16[0xe] + 0x48;
        *(undefined1 *)(plVar16 + 0x24) = 0;
LAB_100a42b10:
        pcVar17 = (char *)FUN_100fd3e50(plVar16 + 0x16,uVar15);
        if (pcVar17 == (char *)0x0) {
          uVar21 = 5;
LAB_100a42c94:
          *(undefined1 *)((long)plVar16 + 0xaa) = uVar21;
          return 1;
        }
        if ((((char)plVar16[0x24] == '\x03') && ((char)plVar16[0x23] == '\x03')) &&
           ((char)plVar16[0x1a] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar16 + 0x1b);
          if (plVar16[0x1c] != 0) {
            (**(code **)(plVar16[0x1c] + 0x18))(plVar16[0x1d]);
          }
        }
        plVar24 = plVar16 + 0x25;
        FUN_1014a8cc0(&ppppcStack_270,plVar24);
        lStack_368 = lStack_228;
        lStack_370 = lStack_230;
        lStack_358 = lStack_218;
        lStack_360 = lStack_220;
        lStack_348 = lStack_208;
        lStack_350 = lStack_210;
        pppppcStack_3a8 = pppppcStack_268;
        ppppcStack_3b0 = ppppcStack_270;
        pcStack_398 = pcStack_258;
        ppuStack_3a0 = ppuStack_260;
        lStack_388 = lStack_248;
        lStack_390 = lStack_250;
        lStack_378 = lStack_238;
        lStack_380 = lStack_240;
        plVar28 = (long *)(pcVar17 + 0x28);
        if ((*plVar28 == 2) ||
           (uVar18 = __ZN92__LT_codex_rmcp_client__oauth__WrappedOAuthTokenResponse_u20_as_u20_core__cmp__PartialEq_GT_2eq17h593bd4de228404d7E
                               (plVar28,&ppppcStack_3b0), (uVar18 & 1) == 0)) {
          if ((int)*plVar24 != 1) goto LAB_100a42ca0;
          uVar18 = plVar16[0x26];
          auVar30 = func_0x000106032954(0);
          ppppcStack_178 = auVar30._0_8_;
          puStack_170 = (undefined *)CONCAT44(puStack_170._4_4_,auVar30._8_4_);
          ppppcStack_340 = (char ****)0x0;
          pppppcStack_338 = (char *****)((ulong)pppppcStack_338 & 0xffffffff00000000);
          func_0x000106032878(&ppppcStack_270,&ppppcStack_178,&ppppcStack_340);
          pppppcVar2 = (char *****)0x0;
          if ((int)ppppcStack_270 == 0) {
            pppppcVar2 = pppppcStack_268;
          }
          puVar1 = (undefined *)((long)pppppcVar2 + uVar18);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = puVar1;
          lVar22 = SUB168(auVar29 * ZEXT816(1000),8);
          uVar27 = (long)puVar1 * 1000;
          uVar3 = 0;
          if ((int)ppppcStack_270 == 0) {
            uVar3 = ((ulong)ppuStack_260 & 0xffffffff) / 1000000;
          }
          unaff_x21 = (char *)(uVar27 + uVar3);
          if (CARRY8(uVar27,uVar3)) {
            lVar22 = lVar22 + 1;
          }
          if (lVar22 != 0) {
            unaff_x21 = (char *)0xffffffffffffffff;
          }
          uVar18 = (ulong)!CARRY8((ulong)pppppcVar2,uVar18);
          uVar15 = *(undefined8 *)(*(long *)plVar16[0xe] + 0x18);
          unaff_x23 = *(long *)(*(long *)plVar16[0xe] + 0x20);
          if (unaff_x23 == 0) goto LAB_100a42c88;
LAB_100a42cb8:
          lVar22 = _malloc(unaff_x23);
          if (lVar22 == 0) goto LAB_100a431bc;
        }
        else {
          if (*plVar28 == 2) {
LAB_100a42ca0:
            uVar18 = 0;
            uVar15 = *(undefined8 *)(*(long *)plVar16[0xe] + 0x18);
            unaff_x23 = *(long *)(*(long *)plVar16[0xe] + 0x20);
          }
          else {
            uVar18 = *(ulong *)(pcVar17 + 0x98);
            unaff_x21 = *(char **)(pcVar17 + 0xa0);
            uVar15 = *(undefined8 *)(*(long *)plVar16[0xe] + 0x18);
            unaff_x23 = *(long *)(*(long *)plVar16[0xe] + 0x20);
          }
          if (unaff_x23 != 0) goto LAB_100a42cb8;
LAB_100a42c88:
          lVar22 = 1;
        }
        _memcpy(lVar22,uVar15,unaff_x23);
        uVar15 = *(undefined8 *)(*(long *)plVar16[0xe] + 0x30);
        lVar5 = *(long *)(*(long *)plVar16[0xe] + 0x38);
        if (lVar5 == 0) {
          lVar19 = 1;
        }
        else {
          lVar19 = _malloc(lVar5);
          if (lVar19 == 0) {
            func_0x0001087c9084(1,lVar5);
            goto LAB_100a431d8;
          }
        }
        _memcpy(lVar19,uVar15,lVar5);
        *(undefined1 *)(plVar16 + 0x15) = 0;
        lStack_288 = plVar16[0x10];
        lStack_290 = plVar16[0xf];
        lStack_280 = plVar16[0x11];
        lStack_2f8 = lStack_368;
        lStack_300 = lStack_370;
        lStack_2e8 = lStack_358;
        lStack_2f0 = lStack_360;
        lStack_2d8 = lStack_348;
        lStack_2e0 = lStack_350;
        pppppcStack_338 = pppppcStack_3a8;
        ppppcStack_340 = ppppcStack_3b0;
        pcStack_328 = pcStack_398;
        ppuStack_330 = ppuStack_3a0;
        lStack_318 = lStack_388;
        lStack_320 = lStack_390;
        lStack_308 = lStack_378;
        lStack_310 = lStack_380;
        uStack_2d0 = uVar18;
        pcStack_2c8 = unaff_x21;
        lStack_2c0 = unaff_x23;
        lStack_2b8 = lVar22;
        lStack_2b0 = unaff_x23;
        lStack_2a8 = lVar5;
        lStack_2a0 = lVar19;
        lStack_298 = lVar5;
        if (((*plVar28 == 2) || (*(long *)(pcVar17 + 0xb8) != unaff_x23)) ||
           ((iVar12 = _memcmp(*(undefined8 *)(pcVar17 + 0xb0),lVar22,unaff_x23), iVar12 != 0 ||
            ((((*(long *)(pcVar17 + 0xd0) != lVar5 ||
               (iVar12 = _memcmp(*(undefined8 *)(pcVar17 + 200),lVar19,lVar5), lVar26 = lStack_288,
               iVar12 != 0)) || (*(long *)(pcVar17 + 0xe8) != lStack_280)) ||
             ((iVar12 = _memcmp(*(undefined8 *)(pcVar17 + 0xe0),lStack_288), iVar12 != 0 ||
              (iVar12 = __ZN92__LT_codex_rmcp_client__oauth__WrappedOAuthTokenResponse_u20_as_u20_core__cmp__PartialEq_GT_2eq17h593bd4de228404d7E
                                  (plVar28,&ppppcStack_340), iVar12 == 0)))))))) {
LAB_100a42df0:
          lVar26 = *(long *)plVar16[0xe];
          auVar29 = __ZN17codex_rmcp_client5oauth17save_oauth_tokens17h1caaf87a051e8e32E
                              (*(undefined8 *)(lVar26 + 0x18),*(undefined8 *)(lVar26 + 0x20),
                               &ppppcStack_340,*(undefined1 *)(lVar26 + 0x138));
          uVar15 = auVar29._8_8_;
          if (auVar29._0_8_ != 0) {
            if (unaff_x23 != 0) {
              _free(lVar22);
            }
            if (lVar5 != 0) {
              _free(lVar19);
            }
            if (lStack_290 != 0) {
              _free(lStack_288);
            }
            FUN_100d0f028(&ppppcStack_340);
            if (*pcVar17 == '\0') {
              *pcVar17 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar17,extraout_x1_05,1000000000);
            }
            FUN_1060fa678(pcVar17,1,pcVar17);
            FUN_100d0f028(plVar24);
            *(undefined2 *)(plVar16 + 0x15) = 0;
            goto LAB_100a430c4;
          }
          lStack_1c8 = lStack_298;
          lStack_1d0 = lStack_2a0;
          lStack_1b8 = lStack_288;
          lStack_1c0 = lStack_290;
          lStack_1b0 = lStack_280;
          lStack_208 = lStack_2d8;
          lStack_210 = lStack_2e0;
          pcStack_1f8 = pcStack_2c8;
          uStack_200 = uStack_2d0;
          lStack_1e8 = lStack_2b8;
          lStack_1f0 = lStack_2c0;
          lStack_1d8 = lStack_2a8;
          lStack_1e0 = lStack_2b0;
          lStack_248 = lStack_318;
          lStack_250 = lStack_320;
          lStack_238 = lStack_308;
          lStack_240 = lStack_310;
          lStack_228 = lStack_2f8;
          lStack_230 = lStack_300;
          lStack_218 = lStack_2e8;
          lStack_220 = lStack_2f0;
          pppppcStack_268 = pppppcStack_338;
          ppppcStack_270 = ppppcStack_340;
          pcStack_258 = pcStack_328;
          ppuStack_260 = ppuStack_330;
          if (*plVar28 != 2) {
            if (*(long *)(pcVar17 + 0xa8) != 0) {
              _free(*(undefined8 *)(pcVar17 + 0xb0));
            }
            if (*(long *)(pcVar17 + 0xc0) != 0) {
              _free(*(undefined8 *)(pcVar17 + 200));
            }
            if (*(long *)(pcVar17 + 0xd8) != 0) {
              _free(*(undefined8 *)(pcVar17 + 0xe0));
            }
            FUN_100d0f028(plVar28);
            uVar15 = extraout_x1_06;
          }
          *(long *)(pcVar17 + 0xc0) = lStack_1d8;
          *(long *)(pcVar17 + 0xb8) = lStack_1e0;
          *(long *)(pcVar17 + 0xd0) = lStack_1c8;
          *(long *)(pcVar17 + 200) = lStack_1d0;
          *(long *)(pcVar17 + 0xe0) = lStack_1b8;
          *(long *)(pcVar17 + 0xd8) = lStack_1c0;
          *(long *)(pcVar17 + 0x80) = lStack_218;
          *(long *)(pcVar17 + 0x78) = lStack_220;
          *(long *)(pcVar17 + 0x90) = lStack_208;
          *(long *)(pcVar17 + 0x88) = lStack_210;
          *(char **)(pcVar17 + 0xa0) = pcStack_1f8;
          *(ulong *)(pcVar17 + 0x98) = uStack_200;
          *(long *)(pcVar17 + 0xb0) = lStack_1e8;
          *(long *)(pcVar17 + 0xa8) = lStack_1f0;
          *(code **)(pcVar17 + 0x40) = pcStack_258;
          *(undefined8 ***)(pcVar17 + 0x38) = ppuStack_260;
          *(long *)(pcVar17 + 0x50) = lStack_248;
          *(long *)(pcVar17 + 0x48) = lStack_250;
          *(long *)(pcVar17 + 0x60) = lStack_238;
          *(long *)(pcVar17 + 0x58) = lStack_240;
          *(long *)(pcVar17 + 0x70) = lStack_228;
          *(long *)(pcVar17 + 0x68) = lStack_230;
          *(long *)(pcVar17 + 0xe8) = lStack_1b0;
          *(char ******)(pcVar17 + 0x30) = pppppcStack_268;
          *plVar28 = (long)ppppcStack_270;
          cVar11 = *pcVar17;
          if (cVar11 == '\0') {
            *pcVar17 = '\x01';
          }
        }
        else {
          if (*(int *)(pcVar17 + 0x98) == 1) {
            if (((int)uVar18 == 0) || (*(char **)(pcVar17 + 0xa0) != unaff_x21)) goto LAB_100a42df0;
          }
          else if ((uVar18 & 1) != 0) goto LAB_100a42df0;
          if (unaff_x23 != 0) {
            _free(lVar22);
          }
          if (lVar5 != 0) {
            _free(lVar19);
          }
          if (lStack_290 != 0) {
            _free(lVar26);
          }
          FUN_100d0f028(&ppppcStack_340);
          cVar11 = *pcVar17;
          uVar15 = extraout_x1_08;
          if (cVar11 == '\0') {
            *pcVar17 = '\x01';
          }
        }
        if (cVar11 != '\0') {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar17,uVar15,1000000000);
        }
        FUN_1060fa678(pcVar17,1,pcVar17);
        FUN_100d0f028(plVar24);
      }
      else {
        if (bVar6 == 5) goto LAB_100a42b10;
LAB_100a42908:
        auVar29 = FUN_100fd3e50(plVar16 + 0x16,uVar15);
        uVar15 = auVar29._8_8_;
        pcVar17 = auVar29._0_8_;
        if (pcVar17 == (char *)0x0) {
          uVar21 = 6;
          goto LAB_100a42c94;
        }
        if ((((char)plVar16[0x24] == '\x03') && ((char)plVar16[0x23] == '\x03')) &&
           ((char)plVar16[0x1a] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar16 + 0x1b);
          uVar15 = extraout_x1_02;
          if (plVar16[0x1c] != 0) {
            (**(code **)(plVar16[0x1c] + 0x18))(plVar16[0x1d]);
            uVar15 = extraout_x1_03;
          }
        }
        lStack_1d8 = *(long *)(pcVar17 + 0xc0);
        lStack_1e0 = *(long *)(pcVar17 + 0xb8);
        lStack_1c8 = *(long *)(pcVar17 + 0xd0);
        lStack_1d0 = *(long *)(pcVar17 + 200);
        lStack_1b8 = *(long *)(pcVar17 + 0xe0);
        lStack_1c0 = *(long *)(pcVar17 + 0xd8);
        lStack_1b0 = *(long *)(pcVar17 + 0xe8);
        lStack_218 = *(long *)(pcVar17 + 0x80);
        lStack_220 = *(long *)(pcVar17 + 0x78);
        lStack_208 = *(long *)(pcVar17 + 0x90);
        lStack_210 = *(long *)(pcVar17 + 0x88);
        pcStack_1f8 = *(char **)(pcVar17 + 0xa0);
        uStack_200 = *(ulong *)(pcVar17 + 0x98);
        lStack_1e8 = *(long *)(pcVar17 + 0xb0);
        lStack_1f0 = *(long *)(pcVar17 + 0xa8);
        pcStack_258 = *(code **)(pcVar17 + 0x40);
        ppuStack_260 = *(undefined8 ***)(pcVar17 + 0x38);
        lStack_248 = *(long *)(pcVar17 + 0x50);
        lStack_250 = *(long *)(pcVar17 + 0x48);
        lStack_238 = *(long *)(pcVar17 + 0x60);
        lStack_240 = *(long *)(pcVar17 + 0x58);
        lStack_228 = *(long *)(pcVar17 + 0x70);
        lStack_230 = *(long *)(pcVar17 + 0x68);
        pppppcStack_268 = *(char ******)(pcVar17 + 0x30);
        ppppcStack_270 = *(char *****)(pcVar17 + 0x28);
        pcVar17[0x28] = '\x02';
        pcVar17[0x29] = '\0';
        pcVar17[0x2a] = '\0';
        pcVar17[0x2b] = '\0';
        pcVar17[0x2c] = '\0';
        pcVar17[0x2d] = '\0';
        pcVar17[0x2e] = '\0';
        pcVar17[0x2f] = '\0';
        if (ppppcStack_270 != (char ****)0x2) {
          if (lStack_1f0 != 0) {
            _free(lStack_1e8);
          }
          if (lStack_1d8 != 0) {
            _free(lStack_1d0);
          }
          if (lStack_1c0 != 0) {
            _free(lStack_1b8);
          }
          FUN_100d0f028(&ppppcStack_270);
          lVar22 = *(long *)plVar16[0xe];
          __ZN17codex_rmcp_client5oauth19delete_oauth_tokens17h16d8bc8888449f7dE
                    (abStack_1a8,*(undefined8 *)(lVar22 + 0x18),*(undefined8 *)(lVar22 + 0x20),
                     *(undefined8 *)(lVar22 + 0x30),*(undefined8 *)(lVar22 + 0x38),
                     *(undefined1 *)(lVar22 + 0x138));
          uVar15 = extraout_x1_04;
          if ((abStack_1a8[0] & 1) != 0) {
            puStack_198 = puStack_1a0;
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
               (((bRam000000010b62f878 - 1 < 2 ||
                 ((bRam000000010b62f878 != 0 &&
                  (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                      ), cVar11 != '\0')))) &&
                (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                    ), (uVar18 & 1) != 0)))) {
              pcStack_328 = (code *)(
                                    ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                    + 0x30);
              ppppcStack_270 = (char ****)(*(long *)plVar16[0xe] + 0x10);
              pppppcStack_268 = (char *****)&DAT_10112965c;
              ppuStack_260 = &puStack_198;
              pcStack_258 = 
              __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              pppppcStack_3a8 = &ppppcStack_270;
              ppppcStack_3b0 = (char ****)s__failed_to_remove_OAuth_tokens_f_108acea0b;
              ppppcStack_178 = (char ****)&ppppcStack_3b0;
              puStack_170 = &UNK_10b208fd0;
              pppppcStack_338 = &ppppcStack_178;
              ppppcStack_340 = (char ****)0x1;
              ppuStack_330 = (undefined8 **)0x1;
              FUN_100a433fc(&ppppcStack_340);
            }
            else {
              lVar22 = 
              ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uStack_188 = *(undefined8 *)
                              (
                              ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                              + 0x20);
                uStack_180 = *(undefined8 *)
                              (
                              ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                              + 0x28);
                uStack_190 = 2;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar12 = (**(code **)(puVar1 + 0x18))(puVar4,&uStack_190);
                if (iVar12 != 0) {
                  pcStack_328 = (code *)(
                                        ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                        + 0x30);
                  ppppcStack_270 = (char ****)(*(long *)plVar16[0xe] + 0x10);
                  pppppcStack_268 = (char *****)&DAT_10112965c;
                  ppuStack_260 = &puStack_198;
                  pcStack_258 = 
                  __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                  ;
                  pppppcStack_3a8 = &ppppcStack_270;
                  ppppcStack_3b0 = (char ****)s__failed_to_remove_OAuth_tokens_f_108acea0b;
                  ppppcStack_178 = (char ****)&ppppcStack_3b0;
                  puStack_170 = &UNK_10b208fd0;
                  pppppcStack_338 = &ppppcStack_178;
                  ppppcStack_340 = (char ****)0x1;
                  ppuStack_330 = (undefined8 **)0x1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar22,puVar4,puVar1,&uStack_190,&ppppcStack_340);
                }
              }
            }
            (**(code **)*puStack_198)();
            uVar15 = extraout_x1_07;
          }
        }
        if (*pcVar17 == '\0') {
          *pcVar17 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar17,uVar15,1000000000);
        }
        FUN_1060fa678(pcVar17,1,pcVar17);
      }
      *(undefined1 *)((long)plVar16 + 0xa9) = 0;
      if (((*(byte *)(plVar16 + 0x15) & 1) != 0) && (plVar16[0xf] != 0)) {
        _free(plVar16[0x10]);
      }
      *(undefined1 *)(plVar16 + 0x15) = 0;
LAB_100a430c4:
      *(undefined1 *)((long)plVar16 + 0xaa) = 1;
      return 0;
    }
    param_1[1] = (long *)*param_1;
    pcVar17 = (char *)(*(long *)*param_1 + 0x38);
    LOAcquire();
    cVar11 = *pcVar17;
    *pcVar17 = '\x01';
    LORelease();
    if (cVar11 != '\0') goto LAB_100a425cc;
    lVar22 = *(long *)param_1[1];
    if (*(long *)(lVar22 + 0x28) == 0) {
      if (*(int *)(lVar22 + 0x30) == 1) {
        func_0x000104aa61d4(lVar22 + 0x34);
      }
      goto LAB_100a425cc;
    }
    auVar29 = (**(code **)(*(long *)(lVar22 + 0x30) + 0x40))
                        (*(long *)(lVar22 + 0x28) +
                         (*(long *)(*(long *)(lVar22 + 0x30) + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10);
    *(undefined1 (*) [16])(param_1 + 2) = auVar29;
  }
  else {
    if (bVar6 != 3) goto LAB_100a42634;
    auVar29 = *(undefined1 (*) [16])(param_1 + 2);
  }
  (**(code **)(auVar29._8_8_ + 0x18))(&sStack_80,auVar29._0_8_,param_2);
  if (sStack_80 == 0xf) {
    *(undefined1 *)(param_1 + 4) = 3;
    return 1;
  }
  uVar15 = param_1[2];
  puVar13 = (undefined8 *)param_1[3];
  pcVar23 = (code *)*puVar13;
  if (pcVar23 != (code *)0x0) {
    (*pcVar23)(uVar15);
  }
  if (puVar13[1] != 0) {
    _free(uVar15);
  }
  if (sStack_80 == 0xe) {
LAB_100a425cc:
    *(undefined1 *)(param_1 + 4) = 1;
    return 0;
  }
  *(undefined1 *)(*(long *)param_1[1] + 0x38) = in_wzr;
  puVar13 = (undefined8 *)_malloc(0x40);
  if (puVar13 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
  }
  else {
    puVar13[1] = CONCAT62(uStack_76,uStack_78);
    *puVar13 = CONCAT62(uStack_7e,sStack_80);
    puVar13[3] = CONCAT62(uStack_66,uStack_68);
    puVar13[2] = CONCAT62(uStack_6e,uStack_70);
    puVar13[5] = CONCAT62(uStack_56,uStack_58);
    puVar13[4] = CONCAT62(uStack_5e,uStack_60);
    puVar13[7] = uStack_48;
    puVar13[6] = CONCAT62(uStack_4e,uStack_50);
    puVar14 = (undefined8 *)_malloc(0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = puVar13;
      puVar14[1] = &UNK_10b238988;
      *(undefined1 *)(puVar14 + 2) = 0x28;
      goto LAB_100a425cc;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x100a42628);
  (*pcVar23)();
}

