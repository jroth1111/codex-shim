
void FUN_1011aea70(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long *plStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar1 = *param_2;
  lVar8 = param_2[1];
  lVar10 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_10117645c(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar1 != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar8);
        return;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar11 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar11;
      if (lVar11 == lStack_70) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar6 = plStack_68;
      if (lVar11 != 0) {
        _memmove(plStack_68 + 3,plStack_68,lVar11 * 0x18);
      }
      *plVar6 = lVar1;
      plVar6[1] = lVar8;
      plVar6[2] = lVar10;
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      param_1[9] = lStack_58;
      param_1[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar4;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_a0);
  auVar12 = __Unwind_Resume(uVar5);
  plVar9 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar1 = *plVar9;
  lVar8 = plVar9[1];
  lVar10 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_10060da0c(plVar6,plVar9 + 3);
    if (*plVar6 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_108 = (long *)plVar6[7];
      lStack_110 = plVar6[6];
      lStack_f8 = plVar6[9];
      lVar11 = plVar6[8];
      lStack_128 = plVar6[3];
      lStack_130 = plVar6[2];
      lStack_118 = plVar6[5];
      lStack_120 = plVar6[4];
      lStack_f0 = plVar6[10];
      lStack_138 = plVar6[1];
      lStack_140 = *plVar6;
      lStack_100 = lVar11;
      if (lVar11 == lStack_110) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_110);
      }
      plVar9 = plStack_108;
      if (lVar11 != 0) {
        _memmove(plStack_108 + 3,plStack_108,lVar11 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = lVar8;
      plVar9[2] = lVar10;
      plVar6[5] = lStack_118;
      plVar6[4] = lStack_120;
      plVar6[7] = (long)plStack_108;
      plVar6[6] = lStack_110;
      plVar6[10] = lStack_f0;
      plVar6[1] = lStack_138;
      *plVar6 = lStack_140;
      plVar6[3] = lStack_128;
      plVar6[2] = lStack_130;
      plVar6[9] = lStack_f8;
      plVar6[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *plVar6 = 0;
    plVar6[3] = 0x10;
    plVar6[4] = (long)puVar4;
    plVar6[6] = 0;
    plVar6[5] = 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_140);
  auVar12 = __Unwind_Resume(uVar5);
  plVar9 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar1 = *plVar9;
  lVar8 = plVar9[1];
  lVar10 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_100616c64(plVar6,plVar9 + 3);
    if (*plVar6 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_1a8 = (long *)plVar6[7];
      lStack_1b0 = plVar6[6];
      lStack_198 = plVar6[9];
      lVar11 = plVar6[8];
      lStack_1c8 = plVar6[3];
      lStack_1d0 = plVar6[2];
      lStack_1b8 = plVar6[5];
      lStack_1c0 = plVar6[4];
      lStack_190 = plVar6[10];
      lStack_1d8 = plVar6[1];
      lStack_1e0 = *plVar6;
      lStack_1a0 = lVar11;
      if (lVar11 == lStack_1b0) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_1b0);
      }
      plVar9 = plStack_1a8;
      if (lVar11 != 0) {
        _memmove(plStack_1a8 + 3,plStack_1a8,lVar11 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = lVar8;
      plVar9[2] = lVar10;
      plVar6[5] = lStack_1b8;
      plVar6[4] = lStack_1c0;
      plVar6[7] = (long)plStack_1a8;
      plVar6[6] = lStack_1b0;
      plVar6[10] = lStack_190;
      plVar6[1] = lStack_1d8;
      *plVar6 = lStack_1e0;
      plVar6[3] = lStack_1c8;
      plVar6[2] = lStack_1d0;
      plVar6[9] = lStack_198;
      plVar6[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *plVar6 = 0;
    plVar6[3] = 0x10;
    plVar6[4] = (long)puVar4;
    plVar6[6] = 0;
    plVar6[5] = 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_1e0);
  auVar12 = __Unwind_Resume(uVar5);
  plVar9 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar1 = *plVar9;
  lVar8 = plVar9[1];
  lVar10 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_101168af8(plVar6,plVar9 + 3);
    if (*plVar6 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_248 = (long *)plVar6[7];
      lStack_250 = plVar6[6];
      lStack_238 = plVar6[9];
      lVar11 = plVar6[8];
      lStack_268 = plVar6[3];
      lStack_270 = plVar6[2];
      lStack_258 = plVar6[5];
      lStack_260 = plVar6[4];
      lStack_230 = plVar6[10];
      lStack_278 = plVar6[1];
      lStack_280 = *plVar6;
      lStack_240 = lVar11;
      if (lVar11 == lStack_250) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_250);
      }
      plVar9 = plStack_248;
      if (lVar11 != 0) {
        _memmove(plStack_248 + 3,plStack_248,lVar11 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = lVar8;
      plVar9[2] = lVar10;
      plVar6[5] = lStack_258;
      plVar6[4] = lStack_260;
      plVar6[7] = (long)plStack_248;
      plVar6[6] = lStack_250;
      plVar6[10] = lStack_230;
      plVar6[1] = lStack_278;
      *plVar6 = lStack_280;
      plVar6[3] = lStack_268;
      plVar6[2] = lStack_270;
      plVar6[9] = lStack_238;
      plVar6[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *plVar6 = 0;
    plVar6[3] = 0x10;
    plVar6[4] = (long)puVar4;
    plVar6[6] = 0;
    plVar6[5] = 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_280);
  auVar12 = __Unwind_Resume(uVar5);
  plVar9 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar1 = *plVar9;
  lVar8 = plVar9[1];
  lVar10 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_10115701c(plVar6,plVar9 + 3);
    if (*plVar6 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_2e8 = (long *)plVar6[7];
      lStack_2f0 = plVar6[6];
      lStack_2d8 = plVar6[9];
      lVar11 = plVar6[8];
      lStack_308 = plVar6[3];
      lStack_310 = plVar6[2];
      lStack_2f8 = plVar6[5];
      lStack_300 = plVar6[4];
      lStack_2d0 = plVar6[10];
      lStack_318 = plVar6[1];
      lStack_320 = *plVar6;
      lStack_2e0 = lVar11;
      if (lVar11 == lStack_2f0) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_2f0);
      }
      plVar9 = plStack_2e8;
      if (lVar11 != 0) {
        _memmove(plStack_2e8 + 3,plStack_2e8,lVar11 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = lVar8;
      plVar9[2] = lVar10;
      plVar6[5] = lStack_2f8;
      plVar6[4] = lStack_300;
      plVar6[7] = (long)plStack_2e8;
      plVar6[6] = lStack_2f0;
      plVar6[10] = lStack_2d0;
      plVar6[1] = lStack_318;
      *plVar6 = lStack_320;
      plVar6[3] = lStack_308;
      plVar6[2] = lStack_310;
      plVar6[9] = lStack_2d8;
      plVar6[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *plVar6 = 0;
    plVar6[3] = 0x10;
    plVar6[4] = (long)puVar4;
    plVar6[6] = 0;
    plVar6[5] = 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_320);
  auVar12 = __Unwind_Resume(uVar5);
  plVar9 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar1 = *plVar9;
  lVar8 = plVar9[1];
  lVar10 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_10116a9e0(plVar6,plVar9 + 3);
    if (*plVar6 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_388 = (long *)plVar6[7];
      lStack_390 = plVar6[6];
      lStack_378 = plVar6[9];
      lVar11 = plVar6[8];
      lStack_3a8 = plVar6[3];
      lStack_3b0 = plVar6[2];
      lStack_398 = plVar6[5];
      lStack_3a0 = plVar6[4];
      lStack_370 = plVar6[10];
      lStack_3b8 = plVar6[1];
      lStack_3c0 = *plVar6;
      lStack_380 = lVar11;
      if (lVar11 == lStack_390) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_390);
      }
      plVar9 = plStack_388;
      if (lVar11 != 0) {
        _memmove(plStack_388 + 3,plStack_388,lVar11 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = lVar8;
      plVar9[2] = lVar10;
      plVar6[5] = lStack_398;
      plVar6[4] = lStack_3a0;
      plVar6[7] = (long)plStack_388;
      plVar6[6] = lStack_390;
      plVar6[10] = lStack_370;
      plVar6[1] = lStack_3b8;
      *plVar6 = lStack_3c0;
      plVar6[3] = lStack_3a8;
      plVar6[2] = lStack_3b0;
      plVar6[9] = lStack_378;
      plVar6[8] = lVar11 + 1;
    }
    return;
  }
  puVar4 = (undefined8 *)_malloc(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x676e697373696d20;
    *puVar4 = 0x73692065756c6176;
    *plVar6 = 0;
    plVar6[3] = 0x10;
    plVar6[4] = (long)puVar4;
    plVar6[6] = 0;
    plVar6[5] = 0x10;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[7] = 8;
    return;
  }
  uVar5 = func_0x0001087c9084(1,0x10);
  _free(lVar8);
  FUN_100de3b58(&lStack_3c0);
  pbVar7 = (byte *)__Unwind_Resume(uVar5);
  bVar2 = *pbVar7;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      pbVar7[1] = 0;
LAB_1011af408:
      extraout_x8[5] = 0;
      extraout_x8[6] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = 8;
      extraout_x8[7] = 8;
      extraout_x8[8] = 0;
      extraout_x8[9] = 2;
      extraout_x8[10] = 0;
      *(undefined2 *)(extraout_x8 + 0xb) = 0;
      extraout_x8[0xc] = 0;
      *(undefined2 *)(extraout_x8 + 0xd) = 200;
      *(undefined1 *)((long)extraout_x8 + 0x6a) = 2;
      extraout_x8[0xe] = 1;
      extraout_x8[0xf] = &UNK_10b204c28;
      pbVar7[0] = 1;
      pbVar7[1] = 1;
      return;
    }
    func_0x000108a07af4(&UNK_10b249f58);
  }
  else if (bVar2 == 3) {
    if ((pbVar7[1] & 1) == 0) goto LAB_1011af408;
    goto LAB_1011af474;
  }
  func_0x000108a07b10(&UNK_10b249f58);
LAB_1011af474:
  func_0x000108a07af4(&UNK_10b233050);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011af484);
  (*pcVar3)();
}

