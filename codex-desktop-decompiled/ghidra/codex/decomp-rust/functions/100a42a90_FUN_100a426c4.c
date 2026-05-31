
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100a426c4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *****pppppcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined1 uVar19;
  long *plVar20;
  code *pcVar21;
  long lVar22;
  ulong uVar23;
  char *unaff_x21;
  long *plVar24;
  long unaff_x23;
  long lVar25;
  long unaff_x27;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  char ***pppcStack_2d0;
  char ****ppppcStack_2c8;
  undefined8 **ppuStack_2c0;
  char ***pppcStack_2b0;
  char ****ppppcStack_2a8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  char ***pppcStack_240;
  char ****ppppcStack_238;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  char *pcStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  char ***pppcStack_170;
  char ****ppppcStack_168;
  undefined8 **ppuStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  char *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  byte abStack_a8 [8];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char ****ppppcStack_78;
  undefined *puStack_70;
  
  bVar7 = *(byte *)((long)param_1 + 0xaa);
  if (bVar7 < 4) {
    if (bVar7 < 2) {
      if (bVar7 == 0) {
        *(undefined2 *)(param_1 + 0x15) = 0;
        param_1[0xe] = param_1[0x14];
        plVar20 = *(long **)(*(long *)param_1[0x14] + 0x40);
        lVar25 = *plVar20;
        *plVar20 = lVar25 + 1;
        if (lVar25 < 0) goto LAB_100a431d8;
        param_1[0x12] = (long)plVar20;
        param_1[0x16] = (long)(plVar20 + 2);
        *(undefined1 *)(param_1 + 0x24) = 0;
LAB_100a42754:
        lVar25 = FUN_100fd3e50(param_1 + 0x16,param_2);
        if (lVar25 != 0) {
          param_1[0x13] = lVar25;
          if ((((char)param_1[0x24] == '\x03') && ((char)param_1[0x23] == '\x03')) &&
             ((char)param_1[0x1a] == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x1b);
            if (param_1[0x1c] != 0) {
              (**(code **)(param_1[0x1c] + 0x18))(param_1[0x1d]);
            }
          }
          param_1[0x16] = param_1[0x13] + 0x28;
          *(undefined1 *)(param_1 + 0x1a) = 0;
          goto LAB_100a427b8;
        }
        uVar19 = 3;
        goto LAB_100a42c94;
      }
      func_0x000108a07af4(&UNK_10b22afa0);
    }
    else if (bVar7 == 3) goto LAB_100a42754;
    func_0x000108a07b10(&UNK_10b22afa0);
LAB_100a431bc:
    func_0x0001087c9084(1,unaff_x23);
    goto LAB_100a431d8;
  }
  if (bVar7 == 4) {
LAB_100a427b8:
    FUN_100f01594(&pppcStack_170,param_1 + 0x16,param_2);
    lVar10 = lStack_f0;
    pcVar15 = pcStack_f8;
    uVar16 = uStack_100;
    lVar9 = lStack_108;
    lVar8 = lStack_110;
    lVar22 = lStack_118;
    lVar17 = lStack_120;
    lVar6 = lStack_128;
    lVar25 = lStack_130;
    pcVar11 = pcStack_158;
    if (pcStack_158 == (code *)0x4) {
      uVar19 = 4;
      goto LAB_100a42c94;
    }
    ppuStack_2c0 = ppuStack_160;
    lStack_2e8 = lStack_148;
    lStack_2f0 = lStack_150;
    lStack_2d8 = lStack_138;
    lStack_2e0 = lStack_140;
    ppppcStack_2c8 = ppppcStack_168;
    pppcStack_2d0 = pppcStack_170;
    uVar18 = extraout_x1;
    if ((char)param_1[0x1a] == '\x03') {
      lVar12 = param_1[0x18];
      puVar5 = (undefined8 *)param_1[0x19];
      pcVar21 = (code *)*puVar5;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(lVar12);
        uVar18 = extraout_x1_00;
      }
      if (puVar5[1] != 0) {
        _free(lVar12);
        uVar18 = extraout_x1_01;
      }
    }
    unaff_x21 = (char *)param_1[0x13];
    if (*unaff_x21 == '\0') {
      *unaff_x21 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (unaff_x21,uVar18,1000000000);
    }
    FUN_1060fa678(unaff_x21,1,unaff_x21);
    lVar12 = *(long *)param_1[0x12];
    *(long *)param_1[0x12] = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
    }
    if (pcVar11 != (code *)0x3) {
      param_1[0x10] = (long)ppppcStack_2c8;
      param_1[0xf] = (long)pppcStack_2d0;
      param_1[2] = lStack_2e8;
      param_1[1] = lStack_2f0;
      param_1[4] = lStack_2d8;
      param_1[3] = lStack_2e0;
      param_1[8] = lVar22;
      param_1[7] = lVar17;
      param_1[10] = lVar9;
      param_1[9] = lVar8;
      param_1[0xc] = (long)pcVar15;
      param_1[0xb] = uVar16;
      *(undefined2 *)(param_1 + 0x15) = 0x101;
      param_1[0x11] = (long)ppuStack_2c0;
      *param_1 = (long)pcVar11;
      param_1[0xd] = lVar10;
      param_1[6] = lVar6;
      param_1[5] = lVar25;
      if (pcVar11 == (code *)0x2) {
        param_1[0x16] = *(long *)param_1[0xe] + 0x48;
        *(undefined1 *)(param_1 + 0x24) = 0;
        goto LAB_100a42908;
      }
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
      param_1[0x2e] = param_1[9];
      param_1[0x2d] = param_1[8];
      param_1[0x30] = param_1[0xb];
      param_1[0x2f] = param_1[10];
      param_1[0x32] = param_1[0xd];
      param_1[0x31] = param_1[0xc];
      param_1[0x26] = param_1[1];
      param_1[0x25] = *param_1;
      param_1[0x28] = param_1[3];
      param_1[0x27] = param_1[2];
      param_1[0x2a] = param_1[5];
      param_1[0x29] = param_1[4];
      param_1[0x2c] = param_1[7];
      param_1[0x2b] = param_1[6];
      param_1[0x16] = *(long *)param_1[0xe] + 0x48;
      *(undefined1 *)(param_1 + 0x24) = 0;
      goto LAB_100a42b10;
    }
    unaff_x27 = FUN_108858c70(&lStack_2f0);
  }
  else {
    if (bVar7 == 5) {
LAB_100a42b10:
      pcVar15 = (char *)FUN_100fd3e50(param_1 + 0x16,param_2);
      if (pcVar15 == (char *)0x0) {
        uVar19 = 5;
LAB_100a42c94:
        *(undefined1 *)((long)param_1 + 0xaa) = uVar19;
        uVar18 = 1;
        goto LAB_100a430d0;
      }
      if ((((char)param_1[0x24] == '\x03') && ((char)param_1[0x23] == '\x03')) &&
         ((char)param_1[0x1a] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x1b);
        if (param_1[0x1c] != 0) {
          (**(code **)(param_1[0x1c] + 0x18))(param_1[0x1d]);
        }
      }
      plVar20 = param_1 + 0x25;
      FUN_1014a8cc0(&pppcStack_170,plVar20);
      lStack_268 = lStack_128;
      lStack_270 = lStack_130;
      lStack_258 = lStack_118;
      lStack_260 = lStack_120;
      lStack_248 = lStack_108;
      lStack_250 = lStack_110;
      ppppcStack_2a8 = ppppcStack_168;
      pppcStack_2b0 = pppcStack_170;
      pcStack_298 = pcStack_158;
      ppuStack_2a0 = ppuStack_160;
      lStack_288 = lStack_148;
      lStack_290 = lStack_150;
      lStack_278 = lStack_138;
      lStack_280 = lStack_140;
      plVar24 = (long *)(pcVar15 + 0x28);
      if ((*plVar24 == 2) ||
         (uVar16 = __ZN92__LT_codex_rmcp_client__oauth__WrappedOAuthTokenResponse_u20_as_u20_core__cmp__PartialEq_GT_2eq17h593bd4de228404d7E
                             (plVar24,&pppcStack_2b0), (uVar16 & 1) == 0)) {
        if ((int)*plVar20 != 1) goto LAB_100a42ca0;
        uVar16 = param_1[0x26];
        auVar28 = func_0x000106032954(0);
        ppppcStack_78 = auVar28._0_8_;
        puStack_70 = (undefined *)CONCAT44(puStack_70._4_4_,auVar28._8_4_);
        pppcStack_240 = (char ***)0x0;
        ppppcStack_238 = (char ****)((ulong)ppppcStack_238 & 0xffffffff00000000);
        func_0x000106032878(&pppcStack_170,&ppppcStack_78,&pppcStack_240);
        pppppcVar2 = (char *****)0x0;
        if ((int)pppcStack_170 == 0) {
          pppppcVar2 = (char *****)ppppcStack_168;
        }
        puVar1 = (undefined *)((long)pppppcVar2 + uVar16);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = puVar1;
        lVar25 = SUB168(auVar26 * ZEXT816(1000),8);
        uVar23 = (long)puVar1 * 1000;
        uVar3 = 0;
        if ((int)pppcStack_170 == 0) {
          uVar3 = ((ulong)ppuStack_160 & 0xffffffff) / 1000000;
        }
        unaff_x21 = (char *)(uVar23 + uVar3);
        if (CARRY8(uVar23,uVar3)) {
          lVar25 = lVar25 + 1;
        }
        if (lVar25 != 0) {
          unaff_x21 = (char *)0xffffffffffffffff;
        }
        uVar16 = (ulong)!CARRY8((ulong)pppppcVar2,uVar16);
        uVar18 = *(undefined8 *)(*(long *)param_1[0xe] + 0x18);
        unaff_x23 = *(long *)(*(long *)param_1[0xe] + 0x20);
        if (unaff_x23 != 0) goto LAB_100a42cb8;
LAB_100a42c88:
        lVar25 = 1;
      }
      else {
        if (*plVar24 == 2) {
LAB_100a42ca0:
          uVar16 = 0;
          uVar18 = *(undefined8 *)(*(long *)param_1[0xe] + 0x18);
          unaff_x23 = *(long *)(*(long *)param_1[0xe] + 0x20);
        }
        else {
          uVar16 = *(ulong *)(pcVar15 + 0x98);
          unaff_x21 = *(char **)(pcVar15 + 0xa0);
          uVar18 = *(undefined8 *)(*(long *)param_1[0xe] + 0x18);
          unaff_x23 = *(long *)(*(long *)param_1[0xe] + 0x20);
        }
        if (unaff_x23 == 0) goto LAB_100a42c88;
LAB_100a42cb8:
        lVar25 = _malloc(unaff_x23);
        if (lVar25 == 0) goto LAB_100a431bc;
      }
      _memcpy(lVar25,uVar18,unaff_x23);
      uVar18 = *(undefined8 *)(*(long *)param_1[0xe] + 0x30);
      lVar6 = *(long *)(*(long *)param_1[0xe] + 0x38);
      if (lVar6 == 0) {
        lVar17 = 1;
      }
      else {
        lVar17 = _malloc(lVar6);
        if (lVar17 == 0) {
          func_0x0001087c9084(1,lVar6);
LAB_100a431d8:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100a431dc);
          (*pcVar11)();
        }
      }
      _memcpy(lVar17,uVar18,lVar6);
      *(undefined1 *)(param_1 + 0x15) = 0;
      lStack_188 = param_1[0x10];
      lStack_190 = param_1[0xf];
      lStack_180 = param_1[0x11];
      lStack_1f8 = lStack_268;
      lStack_200 = lStack_270;
      lStack_1e8 = lStack_258;
      lStack_1f0 = lStack_260;
      lStack_1d8 = lStack_248;
      lStack_1e0 = lStack_250;
      ppppcStack_238 = ppppcStack_2a8;
      pppcStack_240 = pppcStack_2b0;
      pcStack_228 = pcStack_298;
      ppuStack_230 = ppuStack_2a0;
      lStack_218 = lStack_288;
      lStack_220 = lStack_290;
      lStack_208 = lStack_278;
      lStack_210 = lStack_280;
      uStack_1d0 = uVar16;
      pcStack_1c8 = unaff_x21;
      lStack_1c0 = unaff_x23;
      lStack_1b8 = lVar25;
      lStack_1b0 = unaff_x23;
      lStack_1a8 = lVar6;
      lStack_1a0 = lVar17;
      lStack_198 = lVar6;
      if (((*plVar24 == 2) || (*(long *)(pcVar15 + 0xb8) != unaff_x23)) ||
         ((iVar14 = _memcmp(*(undefined8 *)(pcVar15 + 0xb0),lVar25,unaff_x23), iVar14 != 0 ||
          ((((*(long *)(pcVar15 + 0xd0) != lVar6 ||
             (iVar14 = _memcmp(*(undefined8 *)(pcVar15 + 200),lVar17,lVar6), lVar22 = lStack_188,
             iVar14 != 0)) || (*(long *)(pcVar15 + 0xe8) != lStack_180)) ||
           ((iVar14 = _memcmp(*(undefined8 *)(pcVar15 + 0xe0),lStack_188), iVar14 != 0 ||
            (iVar14 = __ZN92__LT_codex_rmcp_client__oauth__WrappedOAuthTokenResponse_u20_as_u20_core__cmp__PartialEq_GT_2eq17h593bd4de228404d7E
                                (plVar24,&pppcStack_240), iVar14 == 0)))))))) {
LAB_100a42df0:
        lVar22 = *(long *)param_1[0xe];
        auVar26 = __ZN17codex_rmcp_client5oauth17save_oauth_tokens17h1caaf87a051e8e32E
                            (*(undefined8 *)(lVar22 + 0x18),*(undefined8 *)(lVar22 + 0x20),
                             &pppcStack_240,*(undefined1 *)(lVar22 + 0x138));
        uVar18 = auVar26._8_8_;
        unaff_x27 = auVar26._0_8_;
        if (unaff_x27 != 0) {
          if (unaff_x23 != 0) {
            _free(lVar25);
          }
          if (lVar6 != 0) {
            _free(lVar17);
          }
          if (lStack_190 != 0) {
            _free(lStack_188);
          }
          FUN_100d0f028(&pppcStack_240);
          if (*pcVar15 == '\0') {
            *pcVar15 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar15,extraout_x1_05,1000000000);
          }
          FUN_1060fa678(pcVar15,1,pcVar15);
          FUN_100d0f028(plVar20);
          *(undefined2 *)(param_1 + 0x15) = 0;
          goto LAB_100a430c4;
        }
        lStack_c8 = lStack_198;
        lStack_d0 = lStack_1a0;
        lStack_b8 = lStack_188;
        lStack_c0 = lStack_190;
        lStack_b0 = lStack_180;
        lStack_108 = lStack_1d8;
        lStack_110 = lStack_1e0;
        pcStack_f8 = pcStack_1c8;
        uStack_100 = uStack_1d0;
        lStack_e8 = lStack_1b8;
        lStack_f0 = lStack_1c0;
        lStack_d8 = lStack_1a8;
        lStack_e0 = lStack_1b0;
        lStack_148 = lStack_218;
        lStack_150 = lStack_220;
        lStack_138 = lStack_208;
        lStack_140 = lStack_210;
        lStack_128 = lStack_1f8;
        lStack_130 = lStack_200;
        lStack_118 = lStack_1e8;
        lStack_120 = lStack_1f0;
        ppppcStack_168 = ppppcStack_238;
        pppcStack_170 = pppcStack_240;
        pcStack_158 = pcStack_228;
        ppuStack_160 = ppuStack_230;
        if (*plVar24 != 2) {
          if (*(long *)(pcVar15 + 0xa8) != 0) {
            _free(*(undefined8 *)(pcVar15 + 0xb0));
          }
          if (*(long *)(pcVar15 + 0xc0) != 0) {
            _free(*(undefined8 *)(pcVar15 + 200));
          }
          if (*(long *)(pcVar15 + 0xd8) != 0) {
            _free(*(undefined8 *)(pcVar15 + 0xe0));
          }
          FUN_100d0f028(plVar24);
          uVar18 = extraout_x1_06;
        }
        *(long *)(pcVar15 + 0xc0) = lStack_d8;
        *(long *)(pcVar15 + 0xb8) = lStack_e0;
        *(long *)(pcVar15 + 0xd0) = lStack_c8;
        *(long *)(pcVar15 + 200) = lStack_d0;
        *(long *)(pcVar15 + 0xe0) = lStack_b8;
        *(long *)(pcVar15 + 0xd8) = lStack_c0;
        *(long *)(pcVar15 + 0x80) = lStack_118;
        *(long *)(pcVar15 + 0x78) = lStack_120;
        *(long *)(pcVar15 + 0x90) = lStack_108;
        *(long *)(pcVar15 + 0x88) = lStack_110;
        *(char **)(pcVar15 + 0xa0) = pcStack_f8;
        *(ulong *)(pcVar15 + 0x98) = uStack_100;
        *(long *)(pcVar15 + 0xb0) = lStack_e8;
        *(long *)(pcVar15 + 0xa8) = lStack_f0;
        *(code **)(pcVar15 + 0x40) = pcStack_158;
        *(undefined8 ***)(pcVar15 + 0x38) = ppuStack_160;
        *(long *)(pcVar15 + 0x50) = lStack_148;
        *(long *)(pcVar15 + 0x48) = lStack_150;
        *(long *)(pcVar15 + 0x60) = lStack_138;
        *(long *)(pcVar15 + 0x58) = lStack_140;
        *(long *)(pcVar15 + 0x70) = lStack_128;
        *(long *)(pcVar15 + 0x68) = lStack_130;
        *(long *)(pcVar15 + 0xe8) = lStack_b0;
        *(char *****)(pcVar15 + 0x30) = ppppcStack_168;
        *plVar24 = (long)pppcStack_170;
        cVar13 = *pcVar15;
        if (cVar13 == '\0') {
          *pcVar15 = '\x01';
        }
      }
      else {
        if (*(int *)(pcVar15 + 0x98) == 1) {
          if (((int)uVar16 == 0) || (*(char **)(pcVar15 + 0xa0) != unaff_x21)) goto LAB_100a42df0;
        }
        else if ((uVar16 & 1) != 0) goto LAB_100a42df0;
        if (unaff_x23 != 0) {
          _free(lVar25);
        }
        if (lVar6 != 0) {
          _free(lVar17);
        }
        if (lStack_190 != 0) {
          _free(lVar22);
        }
        FUN_100d0f028(&pppcStack_240);
        cVar13 = *pcVar15;
        uVar18 = extraout_x1_08;
        if (cVar13 == '\0') {
          *pcVar15 = '\x01';
        }
      }
      if (cVar13 != '\0') {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar15,uVar18,1000000000);
      }
      FUN_1060fa678(pcVar15,1,pcVar15);
      FUN_100d0f028(plVar20);
    }
    else {
LAB_100a42908:
      auVar26 = FUN_100fd3e50(param_1 + 0x16,param_2);
      uVar18 = auVar26._8_8_;
      pcVar15 = auVar26._0_8_;
      if (pcVar15 == (char *)0x0) {
        uVar19 = 6;
        goto LAB_100a42c94;
      }
      if ((((char)param_1[0x24] == '\x03') && ((char)param_1[0x23] == '\x03')) &&
         ((char)param_1[0x1a] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x1b);
        uVar18 = extraout_x1_02;
        if (param_1[0x1c] != 0) {
          (**(code **)(param_1[0x1c] + 0x18))(param_1[0x1d]);
          uVar18 = extraout_x1_03;
        }
      }
      lStack_d8 = *(long *)(pcVar15 + 0xc0);
      lStack_e0 = *(long *)(pcVar15 + 0xb8);
      lStack_c8 = *(long *)(pcVar15 + 0xd0);
      lStack_d0 = *(long *)(pcVar15 + 200);
      lStack_b8 = *(long *)(pcVar15 + 0xe0);
      lStack_c0 = *(long *)(pcVar15 + 0xd8);
      lStack_b0 = *(long *)(pcVar15 + 0xe8);
      lStack_118 = *(long *)(pcVar15 + 0x80);
      lStack_120 = *(long *)(pcVar15 + 0x78);
      lStack_108 = *(long *)(pcVar15 + 0x90);
      lStack_110 = *(long *)(pcVar15 + 0x88);
      pcStack_f8 = *(char **)(pcVar15 + 0xa0);
      uStack_100 = *(ulong *)(pcVar15 + 0x98);
      lStack_e8 = *(long *)(pcVar15 + 0xb0);
      lStack_f0 = *(long *)(pcVar15 + 0xa8);
      pcStack_158 = *(code **)(pcVar15 + 0x40);
      ppuStack_160 = *(undefined8 ***)(pcVar15 + 0x38);
      lStack_148 = *(long *)(pcVar15 + 0x50);
      lStack_150 = *(long *)(pcVar15 + 0x48);
      lStack_138 = *(long *)(pcVar15 + 0x60);
      lStack_140 = *(long *)(pcVar15 + 0x58);
      lStack_128 = *(long *)(pcVar15 + 0x70);
      lStack_130 = *(long *)(pcVar15 + 0x68);
      ppppcStack_168 = *(char *****)(pcVar15 + 0x30);
      pppcStack_170 = *(char ****)(pcVar15 + 0x28);
      pcVar15[0x28] = '\x02';
      pcVar15[0x29] = '\0';
      pcVar15[0x2a] = '\0';
      pcVar15[0x2b] = '\0';
      pcVar15[0x2c] = '\0';
      pcVar15[0x2d] = '\0';
      pcVar15[0x2e] = '\0';
      pcVar15[0x2f] = '\0';
      if ((char ****)pppcStack_170 != (char ****)0x2) {
        if (lStack_f0 != 0) {
          _free(lStack_e8);
        }
        if (lStack_d8 != 0) {
          _free(lStack_d0);
        }
        if (lStack_c0 != 0) {
          _free(lStack_b8);
        }
        FUN_100d0f028(&pppcStack_170);
        lVar25 = *(long *)param_1[0xe];
        __ZN17codex_rmcp_client5oauth19delete_oauth_tokens17h16d8bc8888449f7dE
                  (abStack_a8,*(undefined8 *)(lVar25 + 0x18),*(undefined8 *)(lVar25 + 0x20),
                   *(undefined8 *)(lVar25 + 0x30),*(undefined8 *)(lVar25 + 0x38),
                   *(undefined1 *)(lVar25 + 0x138));
        uVar18 = extraout_x1_04;
        if ((abStack_a8[0] & 1) != 0) {
          puStack_98 = puStack_a0;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bRam000000010b62f878 - 1 < 2 ||
               ((bRam000000010b62f878 != 0 &&
                (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                    ), cVar13 != '\0')))) &&
              (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                  ), (uVar16 & 1) != 0)))) {
            pcStack_228 = (code *)(
                                  ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                  + 0x30);
            pppcStack_170 = (char ***)(*(long *)param_1[0xe] + 0x10);
            ppppcStack_168 = (char ****)&DAT_10112965c;
            ppuStack_160 = &puStack_98;
            pcStack_158 = 
            __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            ppppcStack_2a8 = &pppcStack_170;
            pppcStack_2b0 = (char ***)s__failed_to_remove_OAuth_tokens_f_108acea0b;
            ppppcStack_78 = &pppcStack_2b0;
            puStack_70 = &UNK_10b208fd0;
            ppppcStack_238 = (char ****)&ppppcStack_78;
            pppcStack_240 = (char ***)0x1;
            ppuStack_230 = (undefined8 **)0x1;
            FUN_100a433fc(&pppcStack_240);
          }
          else {
            lVar25 = 
            ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_88 = *(undefined8 *)
                           (
                           ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                           + 0x20);
              uStack_80 = *(undefined8 *)
                           (
                           ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                           + 0x28);
              uStack_90 = 2;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar14 = (**(code **)(puVar1 + 0x18))(puVar4,&uStack_90);
              if (iVar14 != 0) {
                pcStack_228 = (code *)(
                                      ___ZN17codex_rmcp_client5oauth14OAuthPersistor17persist_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6172396596cb2a5bE
                                      + 0x30);
                pppcStack_170 = (char ***)(*(long *)param_1[0xe] + 0x10);
                ppppcStack_168 = (char ****)&DAT_10112965c;
                ppuStack_160 = &puStack_98;
                pcStack_158 = 
                __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                ppppcStack_2a8 = &pppcStack_170;
                pppcStack_2b0 = (char ***)s__failed_to_remove_OAuth_tokens_f_108acea0b;
                ppppcStack_78 = &pppcStack_2b0;
                puStack_70 = &UNK_10b208fd0;
                ppppcStack_238 = (char ****)&ppppcStack_78;
                pppcStack_240 = (char ***)0x1;
                ppuStack_230 = (undefined8 **)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar25,puVar4,puVar1,&uStack_90,&pppcStack_240);
              }
            }
          }
          (**(code **)*puStack_98)();
          uVar18 = extraout_x1_07;
        }
      }
      if (*pcVar15 == '\0') {
        *pcVar15 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar15,uVar18,1000000000);
      }
      FUN_1060fa678(pcVar15,1,pcVar15);
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
    if (((*(byte *)(param_1 + 0x15) & 1) != 0) && (param_1[0xf] != 0)) {
      _free(param_1[0x10]);
    }
    unaff_x27 = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
LAB_100a430c4:
  uVar18 = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 1;
LAB_100a430d0:
  auVar27._8_8_ = unaff_x27;
  auVar27._0_8_ = uVar18;
  return auVar27;
}

