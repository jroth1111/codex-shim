
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1035bae04(undefined8 *param_1,ulong *param_2)

{
  long ******pppppplVar1;
  undefined8 *puVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  int iVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  long ******pppppplVar18;
  long *******ppppppplVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long *******ppppppplStack_3f8;
  long *******ppppppplStack_3f0;
  long *******ppppppplStack_3e8;
  long *******ppppppplStack_3e0;
  long *******ppppppplStack_3d8;
  long *******ppppppplStack_3d0;
  long *******ppppppplStack_3c8;
  long *******ppppppplStack_3c0;
  long *******ppppppplStack_3b8;
  long *******ppppppplStack_3b0;
  long *******ppppppplStack_3a8;
  long *******ppppppplStack_3a0;
  long *******ppppppplStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  ulong uStack_380;
  undefined8 *puStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  undefined1 auStack_290 [16];
  long *******ppppppplStack_280;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  undefined1 auStack_1f8 [16];
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long lStack_160;
  long lStack_150;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  undefined1 auStack_81 [17];
  
  uVar17 = *param_2;
  uVar12 = uVar17 ^ 0x8000000000000000;
  if (-1 < (long)uVar17) {
    uVar12 = 6;
  }
  if ((long)uVar12 < 3) {
    if (uVar12 != 0) {
      if (uVar12 == 1) {
        uVar12 = param_2[1];
        param_1[2] = uVar12 >> 0x3f;
        param_1[3] = uVar12;
        param_1[1] = 0x8000000000000002;
        *param_1 = 2;
        return;
      }
      uVar12 = param_2[1];
      if ((uVar12 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
        ppppppplStack_1d0 = (long *******)0x8000000000000000;
        func_0x000103382b94(&ppppppplStack_1d0);
        uVar22 = 2;
        uVar21 = 0x8000000000000002;
      }
      else {
        uVar22 = 3;
        uVar21 = 0x8000000000000000;
      }
      param_1[2] = uVar22;
      param_1[1] = uVar21;
      param_1[3] = uVar12;
      *param_1 = 2;
      return;
    }
    ppppppplStack_3f0 = (long *******)param_2[2];
    ppppppplStack_3f8 = (long *******)param_2[1];
    ppppppplStack_3e8 = (long *******)param_2[3];
LAB_1035bb080:
    param_1[4] = ppppppplStack_3e8;
    param_1[1] = 0x8000000000000003;
    *param_1 = 2;
    param_1[3] = ppppppplStack_3f0;
    param_1[2] = ppppppplStack_3f8;
    return;
  }
  if ((long)uVar12 < 5) {
    if (uVar12 == 3) {
      *(char *)(param_1 + 2) = (char)param_2[1];
      param_1[1] = 0x8000000000000001;
      *param_1 = 2;
      return;
    }
    ppppppplStack_d8 = (long *******)param_2[2];
    ppppppplStack_e0 = (long *******)param_2[1];
    ppppppplStack_d0 = (long *******)param_2[3];
    ppppppplStack_3f8 = (long *******)0x0;
    ppppppplStack_3f0 = (long *******)0x1;
    ppppppplStack_3e8 = (long *******)0x0;
    ppppppplStack_1c0 = (long *******)0x60000020;
    ppppppplStack_1d0 = (long *******)&ppppppplStack_3f8;
    ppppppplStack_1c8 = (long *******)&UNK_10b29a448;
    iVar8 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&ppppppplStack_e0,&ppppppplStack_1d0);
    if (iVar8 != 0) {
      func_0x000108a07a3c(&UNK_108d8639e,0x37,auStack_81,&UNK_10b2c0eb8,&UNK_10b2c0b18);
      goto LAB_1035bbd6c;
    }
    goto LAB_1035bb080;
  }
  if (uVar12 == 5) {
    uVar12 = param_2[1];
    pppppplVar3 = (long ******)param_2[2];
    uVar17 = param_2[3];
    pppppplVar1 = pppppplVar3 + uVar17 * 10;
    ppppppplStack_230 = (long *******)0x0;
    ppppppplStack_228 = (long *******)0x8;
    ppppppplStack_220 = (long *******)0x0;
    ppppppplStack_2d0 = (long *******)pppppplVar3;
    ppppppplStack_2c8 = (long *******)pppppplVar3;
    ppppppplStack_2c0 = (long *******)uVar12;
    ppppppplStack_2b8 = (long *******)pppppplVar1;
    if (uVar17 != 0) {
      uVar20 = uVar17 * 0x50 - 0x50;
      pppppplVar5 = pppppplVar3;
      do {
        pppppplVar18 = pppppplVar5 + 10;
        ppppppplStack_2c8 = (long *******)pppppplVar18;
        if ((long ******)*pppppplVar5 == (long ******)0x8000000000000006) break;
        ppppppplStack_3d8 = (long *******)pppppplVar5[4];
        ppppppplStack_3e0 = (long *******)pppppplVar5[3];
        ppppppplStack_3c8 = (long *******)pppppplVar5[6];
        ppppppplStack_3d0 = (long *******)pppppplVar5[5];
        ppppppplStack_3b8 = (long *******)pppppplVar5[8];
        ppppppplStack_3c0 = (long *******)pppppplVar5[7];
        ppppppplStack_3b0 = (long *******)pppppplVar5[9];
        ppppppplStack_3e8 = (long *******)pppppplVar5[2];
        ppppppplStack_3f0 = (long *******)pppppplVar5[1];
        ppppppplStack_3f8 = (long *******)*pppppplVar5;
        FUN_1035bae04(&ppppppplStack_1d0,&ppppppplStack_3f8);
        ppppppplVar10 = ppppppplStack_220;
        ppppppplVar19 = ppppppplStack_228;
        if (ppppppplStack_1d0 != (long *******)0x2) {
          ppppppplStack_268 = ppppppplStack_1b8;
          ppppppplStack_270 = ppppppplStack_1c0;
          ppppppplStack_258 = ppppppplStack_1a8;
          ppppppplStack_260 = ppppppplStack_1b0;
          ppppppplStack_248 = ppppppplStack_198;
          ppppppplStack_250 = ppppppplStack_1a0;
          ppppppplStack_238 = ppppppplStack_188;
          ppppppplStack_240 = ppppppplStack_190;
          puVar15 = (undefined *)((long)ppppppplStack_220 + 1);
          ppppppplVar10 = ppppppplStack_228;
          while (puVar15 = puVar15 + -1, puVar15 != (undefined *)0x0) {
            func_0x000103382b94(ppppppplVar10);
            ppppppplVar10 = ppppppplVar10 + 9;
          }
          if (ppppppplStack_230 != (long *******)0x0) {
            _free(ppppppplVar19);
          }
          param_1[3] = ppppppplStack_268;
          param_1[2] = ppppppplStack_270;
          param_1[4] = ppppppplStack_260;
          *param_1 = ppppppplStack_1d0;
          param_1[1] = ppppppplStack_1c8;
          param_1[6] = ppppppplStack_250;
          param_1[5] = ppppppplStack_258;
          param_1[8] = ppppppplStack_240;
          param_1[7] = ppppppplStack_248;
          param_1[9] = ppppppplStack_238;
          param_1[10] = ppppppplStack_180;
          lVar16 = uVar20 / 0x50 + 1;
          while (lVar16 = lVar16 + -1, lVar16 != 0) {
            FUN_10337b6e4(pppppplVar18);
            pppppplVar18 = pppppplVar18 + 10;
          }
          if (uVar12 == 0) {
            return;
          }
          goto LAB_1035bb2d4;
        }
        ppppppplStack_268 = ppppppplStack_1b8;
        ppppppplStack_270 = ppppppplStack_1c0;
        ppppppplStack_258 = ppppppplStack_1a8;
        ppppppplStack_260 = ppppppplStack_1b0;
        ppppppplStack_248 = ppppppplStack_198;
        ppppppplStack_250 = ppppppplStack_1a0;
        ppppppplStack_238 = ppppppplStack_188;
        ppppppplStack_240 = ppppppplStack_190;
        if (ppppppplStack_1c8 == (long *******)0x8000000000000005) break;
        ppppppplStack_e0 = ppppppplStack_1c8;
        ppppppplStack_d0 = ppppppplStack_1b8;
        ppppppplStack_d8 = ppppppplStack_1c0;
        ppppppplStack_c0 = ppppppplStack_1a8;
        ppppppplStack_c8 = ppppppplStack_1b0;
        ppppppplStack_b0 = ppppppplStack_198;
        ppppppplStack_b8 = ppppppplStack_1a0;
        ppppppplStack_a0 = ppppppplStack_188;
        ppppppplStack_a8 = ppppppplStack_190;
        if (ppppppplStack_220 == ppppppplStack_230) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&ppppppplStack_230);
        }
        ppppppplVar19 = ppppppplStack_228 + (long)ppppppplVar10 * 9;
        ppppppplVar19[1] = (long ******)ppppppplStack_d8;
        *ppppppplVar19 = (long ******)ppppppplStack_e0;
        ppppppplVar19[3] = (long ******)ppppppplStack_c8;
        ppppppplVar19[2] = (long ******)ppppppplStack_d0;
        ppppppplVar19[5] = (long ******)ppppppplStack_b8;
        ppppppplVar19[4] = (long ******)ppppppplStack_c0;
        ppppppplVar19[7] = (long ******)ppppppplStack_a8;
        ppppppplVar19[6] = (long ******)ppppppplStack_b0;
        ppppppplVar19[8] = (long ******)ppppppplStack_a0;
        ppppppplStack_220 = (long *******)((long)ppppppplVar10 + 1);
        uVar20 = uVar20 - 0x50;
        pppppplVar5 = pppppplVar18;
        ppppppplStack_2c8 = (long *******)pppppplVar1;
      } while (uVar20 != 0xffffffffffffffb0);
    }
    ppppppplVar19 = ppppppplStack_2c8;
    ppppppplStack_130 = ppppppplStack_228;
    ppppppplStack_138 = ppppppplStack_230;
    ppppppplStack_128 = ppppppplStack_220;
    ppppppplStack_140 = (long *******)0x8000000000000004;
    uVar20 = (long)pppppplVar1 - (long)ppppppplStack_2c8;
    if (uVar20 == 0) {
      param_1[4] = ppppppplStack_220;
      param_1[3] = ppppppplStack_228;
      param_1[6] = ppppppplStack_118;
      param_1[5] = ppppppplStack_120;
      param_1[8] = ppppppplStack_108;
      param_1[7] = ppppppplStack_110;
      param_1[9] = ppppppplStack_100;
      param_1[2] = ppppppplStack_230;
      param_1[1] = 0x8000000000000004;
      *param_1 = 2;
    }
    else {
      FUN_1089223ec(&ppppppplStack_1d0,uVar17,&UNK_10b2b6868,&UNK_10b29b520);
      param_1[5] = ppppppplStack_1a8;
      param_1[4] = ppppppplStack_1b0;
      param_1[7] = ppppppplStack_198;
      param_1[6] = ppppppplStack_1a0;
      param_1[9] = ppppppplStack_188;
      param_1[8] = ppppppplStack_190;
      param_1[10] = ppppppplStack_180;
      param_1[1] = ppppppplStack_1c8;
      *param_1 = ppppppplStack_1d0;
      param_1[3] = ppppppplStack_1b8;
      param_1[2] = ppppppplStack_1c0;
      func_0x000103382b94(&ppppppplStack_140);
    }
    lVar16 = (uVar20 >> 4) * -0x3333333333333333 + 1;
    while (lVar16 = lVar16 + -1, lVar16 != 0) {
      FUN_10337b6e4(ppppppplVar19);
      ppppppplVar19 = ppppppplVar19 + 10;
    }
    if (uVar12 == 0) {
      return;
    }
LAB_1035bb2d4:
    _free(pppppplVar3);
    return;
  }
  uVar20 = param_2[6];
  puVar2 = (undefined8 *)param_2[1];
  uVar12 = param_2[2];
  uVar14 = param_2[4];
  if ((uVar14 != 0) && (uVar14 * 9 != -0x11)) {
    _free(param_2[3] + uVar14 * -8 + -8);
  }
  puStack_378 = puVar2 + uVar12 * 0xe;
  ppppppplStack_3f8 = (long *******)0x8000000000000000;
  puStack_390 = puVar2;
  puStack_388 = puVar2;
  uStack_380 = uVar17;
  if (uVar12 == 0) {
LAB_1035bb38c:
    pauVar11 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar11[1][0] == '\x01') {
      auVar23 = *pauVar11;
    }
    else {
      auVar23 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar11 + 8) = auVar23._8_8_;
      pauVar11[1][0] = 1;
    }
    auVar6._8_8_ = auStack_1f8._8_8_;
    auVar6._0_8_ = auStack_1f8._0_8_;
    *(long *)*pauVar11 = auVar23._0_8_ + 1;
    ppppppplStack_2c8 = (long *******)0x0;
    ppppppplStack_2c0 = (long *******)0x8;
    ppppppplStack_2a8 = (long *******)0x0;
    ppppppplStack_2b0 = (long *******)&UNK_108d52778;
    ppppppplStack_298 = (long *******)0x0;
    ppppppplStack_2a0 = (long *******)0x0;
    ppppppplStack_2b8 = (long *******)0x0;
    auStack_1f8 = auVar23;
LAB_1035bb3d8:
    plVar13 = (long *)((ulong)&ppppppplStack_2d0 | 8);
  }
  else {
    puStack_388 = puVar2 + 0xe;
    ppppppplVar19 = (long *******)*puVar2;
    if (ppppppplVar19 == (long *******)0x8000000000000000) goto LAB_1035bb38c;
    ppppppplVar10 = (long *******)puVar2[1];
    ppppppplVar4 = (long *******)puVar2[2];
    ppppppplStack_1b8 = (long *******)puVar2[6];
    ppppppplStack_1c0 = (long *******)puVar2[5];
    ppppppplStack_1a8 = (long *******)puVar2[8];
    ppppppplStack_1b0 = (long *******)puVar2[7];
    ppppppplStack_198 = (long *******)puVar2[10];
    ppppppplStack_1a0 = (long *******)puVar2[9];
    ppppppplStack_188 = (long *******)puVar2[0xc];
    ppppppplStack_190 = (long *******)puVar2[0xb];
    ppppppplStack_1c8 = (long *******)puVar2[4];
    ppppppplStack_1d0 = (long *******)puVar2[3];
    if (ppppppplVar4 == (long *******)0x0) {
      ppppppplVar9 = (long *******)0x1;
    }
    else {
      ppppppplVar9 = (long *******)_malloc(ppppppplVar4);
      if (ppppppplVar9 == (long *******)0x0) {
        func_0x0001087c9084(1,ppppppplVar4);
        goto LAB_1035bbd6c;
      }
    }
    _memcpy(ppppppplVar9,ppppppplVar10,ppppppplVar4);
    ppppppplStack_3c8 = ppppppplStack_1b8;
    ppppppplStack_3d0 = ppppppplStack_1c0;
    ppppppplStack_3b8 = ppppppplStack_1a8;
    ppppppplStack_3c0 = ppppppplStack_1b0;
    ppppppplStack_3a8 = ppppppplStack_198;
    ppppppplStack_3b0 = ppppppplStack_1a0;
    ppppppplStack_398 = ppppppplStack_188;
    ppppppplStack_3a0 = ppppppplStack_190;
    ppppppplStack_3d8 = ppppppplStack_1c8;
    ppppppplStack_3e0 = ppppppplStack_1d0;
    ppppppplStack_3f8 = ppppppplVar4;
    ppppppplStack_3f0 = ppppppplVar9;
    ppppppplStack_3e8 = ppppppplVar4;
    if ((ppppppplVar4 == (long *******)0x1e) &&
       (((*ppppppplVar10 == (long ******)0x6a5f656472657324 &&
         ppppppplVar10[1] == (long ******)0x6972703a3a6e6f73) &&
        ppppppplVar10[2] == (long ******)0x61523a3a65746176) &&
        *(long *)((long)ppppppplVar10 + 0x16) == 0x65756c6156776152)) {
      if (ppppppplVar19 != (long *******)0x0) {
        _free(ppppppplVar10);
      }
      ppppppplVar10 = ppppppplStack_3b0;
      ppppppplVar19 = ppppppplStack_3c8;
      ppppppplStack_3f8 = (long *******)0x8000000000000000;
      uVar12 = (ulong)ppppppplStack_3e0 ^ 0x8000000000000000;
      if (-1 < (long)ppppppplStack_3e0) {
        uVar12 = 6;
      }
      if ((long)uVar12 < 3) {
        if (uVar12 != 0) {
          if (uVar12 == 1) {
            ppppppplStack_1c8 = ppppppplStack_3d8;
            ppppppplStack_1d0 = (long *******)CONCAT71(ppppppplStack_1d0._1_7_,2);
            FUN_108921f70(&ppppppplStack_140,&ppppppplStack_1d0,auStack_81,&UNK_10b29b5f0);
          }
          else {
            ppppppplStack_1c8 = ppppppplStack_3d8;
            ppppppplStack_1d0 = (long *******)CONCAT71(ppppppplStack_1d0._1_7_,3);
            FUN_108921f70(&ppppppplStack_140,&ppppppplStack_1d0,auStack_81,&UNK_10b29b5f0);
          }
          goto LAB_1035bb9e0;
        }
        ppppppplStack_138 = ppppppplStack_3d0;
        if (ppppppplStack_3c8 < ppppppplStack_3d8) {
          if (ppppppplStack_3c8 == (long *******)0x0) {
            _free(ppppppplStack_3d0);
            ppppppplStack_138 = (long *******)0x1;
          }
          else {
            ppppppplStack_138 =
                 (long *******)
                 __RNvCshXwFllX56pT_7___rustc14___rust_realloc
                           (ppppppplStack_3d0,ppppppplStack_3d8,1,ppppppplStack_3c8);
            if (ppppppplStack_138 == (long *******)0x0) {
              func_0x0001087c9084(1,ppppppplVar19);
              goto LAB_1035bbd6c;
            }
          }
        }
        ppppppplStack_130 = ppppppplVar19;
LAB_1035bbaac:
        _free(ppppppplVar9);
      }
      else {
        if ((long)uVar12 < 5) {
          if (uVar12 != 3) {
            ppppppplStack_228 = ppppppplStack_3d0;
            ppppppplStack_230 = ppppppplStack_3d8;
            ppppppplStack_220 = ppppppplStack_3c8;
            ppppppplStack_e0 = (long *******)0x0;
            ppppppplStack_d8 = (long *******)0x1;
            ppppppplStack_d0 = (long *******)0x0;
            ppppppplStack_1c0 = (long *******)0x60000020;
            ppppppplStack_1d0 = (long *******)&ppppppplStack_e0;
            ppppppplStack_1c8 = (long *******)&UNK_10b29a448;
            iVar8 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                              (&ppppppplStack_230,&ppppppplStack_1d0);
            ppppppplVar19 = ppppppplStack_d0;
            if (iVar8 != 0) {
              func_0x000108a07a3c(&UNK_108d8639e,0x37,auStack_81,&UNK_10b2c0eb8,&UNK_10b2c0b18);
LAB_1035bbd6c:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1035bbd70);
              (*pcVar7)();
            }
            ppppppplStack_138 = ppppppplStack_d8;
            if (ppppppplStack_d0 < ppppppplStack_e0) {
              if (ppppppplStack_d0 == (long *******)0x0) {
                _free(ppppppplStack_d8);
                ppppppplStack_138 = (long *******)0x1;
              }
              else {
                ppppppplStack_138 =
                     (long *******)
                     __RNvCshXwFllX56pT_7___rustc14___rust_realloc
                               (ppppppplStack_d8,ppppppplStack_e0,1,ppppppplStack_d0);
                if (ppppppplStack_138 == (long *******)0x0) {
                  func_0x0001087c9084(1,ppppppplVar19);
                  goto LAB_1035bbd6c;
                }
              }
            }
            ppppppplStack_130 = ppppppplVar19;
            goto LAB_1035bbaac;
          }
          ppppppplStack_1d0 =
               (long *******)((ulong)CONCAT61(ppppppplStack_1d0._2_6_,(char)ppppppplStack_3d8) << 8)
          ;
          FUN_108921f70(&ppppppplStack_140,&ppppppplStack_1d0,auStack_81,&UNK_10b29b5f0);
        }
        else if (uVar12 == 5) {
          ppppppplStack_c8 = ppppppplStack_3d0 + (long)ppppppplStack_3c8 * 10;
          ppppppplStack_e0 = ppppppplStack_3d0;
          ppppppplStack_d8 = ppppppplStack_3d0;
          ppppppplStack_d0 = ppppppplStack_3d8;
          ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,10);
          FUN_108921f70(&ppppppplStack_1d0,&ppppppplStack_230,auStack_81,&UNK_10b29b5f0);
          ppppppplVar4 = ppppppplStack_1c0;
          ppppppplVar10 = ppppppplStack_1c8;
          if (ppppppplStack_1d0 == (long *******)0x2) {
            if (ppppppplVar19 == (long *******)0x0) {
              ppppppplStack_130 = ppppppplStack_1c0;
              ppppppplStack_138 = ppppppplStack_1c8;
              ppppppplStack_140 = (long *******)0x2;
            }
            else {
              FUN_1089223ec(&ppppppplStack_1d0,ppppppplVar19,&UNK_10b2b6868,&UNK_10b29b520);
              ppppppplStack_118 = ppppppplStack_1a8;
              ppppppplStack_120 = ppppppplStack_1b0;
              ppppppplStack_108 = ppppppplStack_198;
              ppppppplStack_110 = ppppppplStack_1a0;
              ppppppplStack_f8 = ppppppplStack_188;
              ppppppplStack_100 = ppppppplStack_190;
              ppppppplStack_f0 = ppppppplStack_180;
              ppppppplStack_138 = ppppppplStack_1c8;
              ppppppplStack_140 = ppppppplStack_1d0;
              ppppppplStack_128 = ppppppplStack_1b8;
              ppppppplStack_130 = ppppppplStack_1c0;
              if (ppppppplVar4 != (long *******)0x0) {
                _free(ppppppplVar10);
              }
            }
            func_0x00010338a8fc(&ppppppplStack_e0);
          }
          else {
            ppppppplStack_120 = ppppppplStack_1b0;
            ppppppplStack_128 = ppppppplStack_1b8;
            ppppppplStack_110 = ppppppplStack_1a0;
            ppppppplStack_118 = ppppppplStack_1a8;
            ppppppplStack_100 = ppppppplStack_190;
            ppppppplStack_108 = ppppppplStack_198;
            ppppppplStack_f0 = ppppppplStack_180;
            ppppppplStack_f8 = ppppppplStack_188;
            ppppppplStack_140 = ppppppplStack_1d0;
            ppppppplStack_138 = ppppppplStack_1c8;
            ppppppplStack_130 = ppppppplStack_1c0;
            func_0x00010338a8fc(&ppppppplStack_e0);
          }
        }
        else {
          __ZN4toml5value15MapDeserializer3new17h7e57c7567833b3ecE
                    (&ppppppplStack_1d0,&ppppppplStack_3e0);
          ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,0xb);
          FUN_108921f70(&ppppppplStack_e0,&ppppppplStack_230,auStack_81,&UNK_10b29b5f0);
          ppppppplVar4 = ppppppplStack_d0;
          ppppppplVar19 = ppppppplStack_d8;
          if (ppppppplStack_e0 == (long *******)0x2) {
            if (lStack_150 == lStack_160) {
              ppppppplStack_130 = ppppppplStack_d0;
              ppppppplStack_138 = ppppppplStack_d8;
              ppppppplStack_140 = (long *******)0x2;
            }
            else {
              FUN_1089223ec(&ppppppplStack_e0,ppppppplVar10,&UNK_10b2b6878,&UNK_10b29b520);
              ppppppplStack_118 = ppppppplStack_b8;
              ppppppplStack_120 = ppppppplStack_c0;
              ppppppplStack_108 = ppppppplStack_a8;
              ppppppplStack_110 = ppppppplStack_b0;
              ppppppplStack_f8 = ppppppplStack_98;
              ppppppplStack_100 = ppppppplStack_a0;
              ppppppplStack_f0 = ppppppplStack_90;
              ppppppplStack_138 = ppppppplStack_d8;
              ppppppplStack_140 = ppppppplStack_e0;
              ppppppplStack_128 = ppppppplStack_c8;
              ppppppplStack_130 = ppppppplStack_d0;
              if (ppppppplVar4 != (long *******)0x0) {
                _free(ppppppplVar19);
              }
            }
            FUN_10338a7ec(&ppppppplStack_1d0);
          }
          else {
            ppppppplStack_120 = ppppppplStack_c0;
            ppppppplStack_128 = ppppppplStack_c8;
            ppppppplStack_110 = ppppppplStack_b0;
            ppppppplStack_118 = ppppppplStack_b8;
            ppppppplStack_100 = ppppppplStack_a0;
            ppppppplStack_108 = ppppppplStack_a8;
            ppppppplStack_f0 = ppppppplStack_90;
            ppppppplStack_f8 = ppppppplStack_98;
            ppppppplStack_140 = ppppppplStack_e0;
            ppppppplStack_138 = ppppppplStack_d8;
            ppppppplStack_130 = ppppppplStack_d0;
            FUN_10338a7ec(&ppppppplStack_1d0);
          }
        }
LAB_1035bb9e0:
        if (ppppppplStack_140 == (long *******)0x2) goto LAB_1035bbaac;
        ppppppplStack_1a8 = ppppppplStack_118;
        ppppppplStack_1b0 = ppppppplStack_120;
        ppppppplStack_198 = ppppppplStack_108;
        ppppppplStack_1a0 = ppppppplStack_110;
        ppppppplStack_188 = ppppppplStack_f8;
        ppppppplStack_190 = ppppppplStack_100;
        ppppppplStack_180 = ppppppplStack_f0;
        ppppppplStack_1c8 = ppppppplStack_138;
        ppppppplStack_1d0 = ppppppplStack_140;
        ppppppplStack_1b8 = ppppppplStack_128;
        ppppppplStack_1c0 = ppppppplStack_130;
        ppppppplStack_e0 = (long *******)0x1e;
        ppppppplStack_d0 = (long *******)0x1e;
        ppppppplStack_d8 = ppppppplVar9;
        __ZN4toml2de5error5Error7add_key17hd4f680e6ed20f6f8E(&ppppppplStack_1d0,&ppppppplStack_e0);
        auVar6._8_8_ = auStack_1f8._8_8_;
        auVar6._0_8_ = auStack_1f8._0_8_;
        ppppppplStack_118 = ppppppplStack_1a8;
        ppppppplStack_120 = ppppppplStack_1b0;
        ppppppplStack_108 = ppppppplStack_198;
        ppppppplStack_110 = ppppppplStack_1a0;
        ppppppplStack_f8 = ppppppplStack_188;
        ppppppplStack_100 = ppppppplStack_190;
        ppppppplStack_f0 = ppppppplStack_180;
        ppppppplStack_138 = ppppppplStack_1c8;
        ppppppplStack_140 = ppppppplStack_1d0;
        ppppppplStack_128 = ppppppplStack_1b8;
        ppppppplStack_130 = ppppppplStack_1c0;
        if (ppppppplStack_1d0 != (long *******)0x2) {
          ppppppplStack_2a8 = ppppppplStack_1a8;
          ppppppplStack_2b0 = ppppppplStack_1b0;
          ppppppplStack_298 = ppppppplStack_198;
          ppppppplStack_2a0 = ppppppplStack_1a0;
          auStack_290._8_8_ = ppppppplStack_188;
          auStack_290._0_8_ = ppppppplStack_190;
          ppppppplStack_280 = ppppppplStack_180;
          ppppppplStack_2c8 = ppppppplStack_1c8;
          ppppppplStack_2d0 = ppppppplStack_1d0;
          ppppppplStack_2b8 = ppppppplStack_1b8;
          ppppppplStack_2c0 = ppppppplStack_1c0;
          goto LAB_1035bbb5c;
        }
      }
      ppppppplVar10 = ppppppplStack_130;
      ppppppplVar19 = ppppppplStack_138;
      ppppppplStack_1d0 = ppppppplStack_138;
      ppppppplStack_1c8 = ppppppplStack_130;
      ppppppplStack_1b8 = (long *******)0x0;
      ppppppplStack_1c0 = (long *******)0x0;
      ppppppplStack_1b0 = ppppppplStack_138;
      ppppppplStack_1a8 = ppppppplStack_130;
      func_0x000102f69ba4(&ppppppplStack_e0,&ppppppplStack_1d0);
      if (ppppppplStack_e0 == (long *******)0x8000000000000005) {
        func_0x0001035967a0(&ppppppplStack_1d0,ppppppplStack_d8);
        ppppppplStack_2a8 = ppppppplStack_1a8;
        ppppppplStack_2b0 = ppppppplStack_1b0;
        ppppppplStack_298 = ppppppplStack_198;
        ppppppplStack_2a0 = ppppppplStack_1a0;
        auStack_290._8_8_ = ppppppplStack_188;
        auStack_290._0_8_ = ppppppplStack_190;
        ppppppplStack_280 = ppppppplStack_180;
        ppppppplStack_2c8 = ppppppplStack_1c8;
        ppppppplStack_2d0 = ppppppplStack_1d0;
        ppppppplStack_2b8 = ppppppplStack_1b8;
        ppppppplStack_2c0 = ppppppplStack_1c0;
      }
      else {
        ppppppplStack_2b0 = ppppppplStack_c8;
        ppppppplStack_2b8 = ppppppplStack_d0;
        ppppppplStack_2a0 = ppppppplStack_b8;
        ppppppplStack_2a8 = ppppppplStack_c0;
        auStack_290._0_8_ = ppppppplStack_a8;
        ppppppplStack_298 = ppppppplStack_b0;
        ppppppplStack_2c0 = ppppppplStack_d8;
        ppppppplStack_2c8 = ppppppplStack_e0;
        auStack_290._8_8_ = ppppppplStack_a0;
        ppppppplStack_2d0 = (long *******)0x2;
      }
      auVar6._8_8_ = auStack_1f8._8_8_;
      auVar6._0_8_ = auStack_1f8._0_8_;
      if (ppppppplVar10 != (long *******)0x0) {
        _free(ppppppplVar19);
        auVar6._8_8_ = auStack_1f8._8_8_;
        auVar6._0_8_ = auStack_1f8._0_8_;
      }
    }
    else {
      if (ppppppplVar19 == (long *******)0x8000000000000001) goto LAB_1035bb38c;
      pauVar11 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar11[1][0] == '\x01') {
        auStack_1f8 = *pauVar11;
      }
      else {
        auStack_1f8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar11 + 8) = auStack_1f8._8_8_;
        pauVar11[1][0] = 1;
      }
      ppppppplStack_210 = (long *******)0x0;
      ppppppplStack_218 = (long *******)&UNK_108d52778;
      *(long *)*pauVar11 = auStack_1f8._0_8_ + 1;
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_228 = (long *******)0x8;
      ppppppplStack_200 = (long *******)0x0;
      ppppppplStack_208 = (long *******)0x0;
      ppppppplStack_220 = (long *******)0x0;
      ppppppplStack_140 = ppppppplVar19;
      ppppppplStack_138 = ppppppplVar10;
      ppppppplStack_130 = ppppppplVar4;
      func_0x0001036080e0(&ppppppplStack_2d0,&ppppppplStack_3f8);
      if (ppppppplStack_2d0 == (long *******)0x2) {
        FUN_1037ccccc(&ppppppplStack_1d0,&ppppppplStack_230,&ppppppplStack_140,&ppppppplStack_2c8);
        ppppppplStack_d8 = ppppppplStack_1c0;
        ppppppplStack_e0 = ppppppplStack_1c8;
        ppppppplStack_c8 = ppppppplStack_1b0;
        ppppppplStack_d0 = ppppppplStack_1b8;
        ppppppplStack_b8 = ppppppplStack_1a0;
        ppppppplStack_c0 = ppppppplStack_1a8;
        ppppppplStack_a8 = ppppppplStack_190;
        ppppppplStack_b0 = ppppppplStack_198;
        ppppppplStack_a0 = ppppppplStack_188;
        if (ppppppplStack_1c8 != (long *******)0x8000000000000005) {
          func_0x000103382b94(&ppppppplStack_e0);
        }
        while( true ) {
          func_0x0001036078c4(&ppppppplStack_140,&ppppppplStack_3f8);
          ppppppplVar4 = ppppppplStack_128;
          ppppppplVar10 = ppppppplStack_130;
          ppppppplVar19 = ppppppplStack_138;
          if (ppppppplStack_140 != (long *******)0x2) break;
          if (ppppppplStack_138 == (long *******)0x8000000000000000) {
            ppppppplStack_2c0 = ppppppplStack_228;
            ppppppplStack_2c8 = ppppppplStack_230;
            ppppppplStack_2b0 = ppppppplStack_218;
            ppppppplStack_2b8 = ppppppplStack_220;
            ppppppplStack_2a0 = ppppppplStack_208;
            ppppppplStack_2a8 = ppppppplStack_210;
            ppppppplStack_298 = ppppppplStack_200;
            auVar6 = auStack_1f8;
            goto LAB_1035bb3d8;
          }
          func_0x0001036080e0(&ppppppplStack_e0,&ppppppplStack_3f8);
          if (ppppppplStack_e0 != (long *******)0x2) {
            ppppppplStack_1a0 = ppppppplStack_b8;
            ppppppplStack_1a8 = ppppppplStack_c0;
            ppppppplStack_190 = ppppppplStack_a8;
            ppppppplStack_198 = ppppppplStack_b0;
            ppppppplStack_180 = ppppppplStack_98;
            ppppppplStack_188 = ppppppplStack_a0;
            ppppppplStack_178 = ppppppplStack_90;
            ppppppplStack_1c0 = ppppppplStack_d8;
            ppppppplStack_1c8 = ppppppplStack_e0;
            ppppppplStack_1b0 = ppppppplStack_c8;
            ppppppplStack_1b8 = ppppppplStack_d0;
            if (ppppppplVar19 != (long *******)0x0) {
              _free(ppppppplVar10);
            }
            goto LAB_1035bb7e4;
          }
          ppppppplStack_1a0 = ppppppplStack_c0;
          ppppppplStack_1a8 = ppppppplStack_c8;
          ppppppplStack_190 = ppppppplStack_b0;
          ppppppplStack_198 = ppppppplStack_b8;
          ppppppplStack_180 = ppppppplStack_a0;
          ppppppplStack_188 = ppppppplStack_a8;
          ppppppplStack_178 = ppppppplStack_98;
          ppppppplStack_1b0 = ppppppplStack_d0;
          ppppppplStack_1b8 = ppppppplStack_d8;
          ppppppplStack_1d0 = ppppppplVar19;
          ppppppplStack_1c8 = ppppppplVar10;
          ppppppplStack_1c0 = ppppppplVar4;
          if (ppppppplVar19 == (long *******)0x8000000000000001) goto LAB_1035bb7e4;
          ppppppplStack_1e8 = ppppppplVar19;
          ppppppplStack_1d8 = ppppppplVar4;
          ppppppplStack_1e0 = ppppppplVar10;
          FUN_1037ccccc(&ppppppplStack_e0,&ppppppplStack_230,&ppppppplStack_1e8,&ppppppplStack_1b8);
          ppppppplStack_138 = ppppppplStack_d0;
          ppppppplStack_140 = ppppppplStack_d8;
          ppppppplStack_128 = ppppppplStack_c0;
          ppppppplStack_130 = ppppppplStack_c8;
          ppppppplStack_118 = ppppppplStack_b0;
          ppppppplStack_120 = ppppppplStack_b8;
          ppppppplStack_108 = ppppppplStack_a0;
          ppppppplStack_110 = ppppppplStack_a8;
          ppppppplStack_100 = ppppppplStack_98;
          if (ppppppplStack_d8 != (long *******)0x8000000000000005) {
            func_0x000103382b94(&ppppppplStack_140);
          }
        }
        ppppppplStack_1a0 = ppppppplStack_118;
        ppppppplStack_1a8 = ppppppplStack_120;
        ppppppplStack_190 = ppppppplStack_108;
        ppppppplStack_198 = ppppppplStack_110;
        ppppppplStack_180 = ppppppplStack_f8;
        ppppppplStack_188 = ppppppplStack_100;
        ppppppplStack_178 = ppppppplStack_f0;
        ppppppplStack_1c0 = ppppppplStack_138;
        ppppppplStack_1c8 = ppppppplStack_140;
        ppppppplStack_1b0 = ppppppplStack_128;
        ppppppplStack_1b8 = ppppppplStack_130;
LAB_1035bb7e4:
        ppppppplStack_2a8 = ppppppplStack_1a0;
        ppppppplStack_2b0 = ppppppplStack_1a8;
        ppppppplStack_298 = ppppppplStack_190;
        ppppppplStack_2a0 = ppppppplStack_198;
        auStack_290._8_8_ = ppppppplStack_180;
        auStack_290._0_8_ = ppppppplStack_188;
        ppppppplStack_280 = ppppppplStack_178;
        ppppppplStack_2c8 = ppppppplStack_1c0;
        ppppppplStack_2d0 = ppppppplStack_1c8;
        ppppppplStack_2b8 = ppppppplStack_1b0;
        ppppppplStack_2c0 = ppppppplStack_1b8;
        func_0x0001033f1e28(&ppppppplStack_230);
        auVar6 = auStack_1f8;
      }
      else {
        if (ppppppplVar19 != (long *******)0x0) {
          _free(ppppppplVar10);
        }
        func_0x0001033f1e28(&ppppppplStack_230);
        auVar6 = auStack_1f8;
      }
    }
LAB_1035bbb5c:
    auStack_1f8._8_8_ = auStack_290._8_8_;
    auStack_1f8._0_8_ = auStack_290._0_8_;
    plVar13 = (long *)((ulong)&ppppppplStack_2d0 | 8);
    if (ppppppplStack_2d0 != (long *******)0x2) {
      lStack_2f8 = plVar13[5];
      lStack_300 = plVar13[4];
      lStack_2e8 = plVar13[7];
      lStack_2f0 = plVar13[6];
      lStack_2e0 = plVar13[8];
      lStack_318 = plVar13[1];
      lStack_320 = *plVar13;
      lStack_308 = plVar13[3];
      lStack_310 = plVar13[2];
      param_1[4] = lStack_308;
      param_1[3] = lStack_310;
      param_1[6] = lStack_2f8;
      param_1[5] = lStack_300;
      param_1[8] = lStack_2e8;
      param_1[7] = lStack_2f0;
      param_1[2] = lStack_318;
      param_1[1] = lStack_320;
      *param_1 = ppppppplStack_2d0;
      param_1[9] = lStack_2e0;
      param_1[10] = ppppppplStack_280;
      auStack_290 = auStack_1f8;
      goto LAB_1035bb438;
    }
  }
  lStack_348 = plVar13[5];
  lStack_350 = plVar13[4];
  lStack_338 = plVar13[7];
  lStack_340 = plVar13[6];
  lStack_330 = plVar13[8];
  lStack_368 = plVar13[1];
  lStack_370 = *plVar13;
  lStack_358 = plVar13[3];
  lStack_360 = plVar13[2];
  lStack_2f0 = lStack_340;
  lStack_2e8 = lStack_338;
  lStack_2e0 = lStack_330;
  auStack_290 = auStack_1f8;
  if (puStack_378 == puStack_388) {
    param_1[4] = lStack_358;
    param_1[3] = lStack_360;
    param_1[6] = lStack_348;
    param_1[5] = lStack_350;
    param_1[8] = lStack_338;
    param_1[7] = lStack_340;
    param_1[9] = lStack_330;
    param_1[2] = lStack_368;
    param_1[1] = lStack_370;
    *param_1 = 2;
  }
  else {
    auStack_1f8 = auVar6;
    FUN_1089223ec(&ppppppplStack_1d0,uVar20,&UNK_10b2b6878,&UNK_10b29b520);
    param_1[5] = ppppppplStack_1a8;
    param_1[4] = ppppppplStack_1b0;
    param_1[7] = ppppppplStack_198;
    param_1[6] = ppppppplStack_1a0;
    param_1[9] = ppppppplStack_188;
    param_1[8] = ppppppplStack_190;
    param_1[10] = ppppppplStack_180;
    param_1[1] = ppppppplStack_1c8;
    *param_1 = ppppppplStack_1d0;
    param_1[3] = ppppppplStack_1b8;
    param_1[2] = ppppppplStack_1c0;
    func_0x000103382b94(&lStack_370);
    auStack_290 = auStack_290;
    auVar6 = auStack_1f8;
  }
LAB_1035bb438:
  auStack_1f8 = auVar6;
  FUN_10338a7ec(&ppppppplStack_3f8);
  return;
}

