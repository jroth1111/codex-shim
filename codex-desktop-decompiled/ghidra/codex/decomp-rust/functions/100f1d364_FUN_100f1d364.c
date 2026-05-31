
void FUN_100f1d364(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined2 *puVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  ulong uStack_2b8;
  ulong *puStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  char cStack_270;
  undefined1 uStack_26f;
  undefined8 uStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong uStack_250;
  ulong *puStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
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
  lVar6 = param_2[1];
  lVar11 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    func_0x0001013ac0d4(param_1,param_2 + 3);
    if (*param_1 == 2) {
      if (lVar1 != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar6);
        return;
      }
    }
    else {
      plStack_68 = (long *)param_1[7];
      lStack_70 = param_1[6];
      lStack_58 = param_1[9];
      lVar14 = param_1[8];
      lStack_88 = param_1[3];
      lStack_90 = param_1[2];
      lStack_78 = param_1[5];
      lStack_80 = param_1[4];
      lStack_50 = param_1[10];
      lStack_98 = param_1[1];
      lStack_a0 = *param_1;
      lStack_60 = lVar14;
      if (lVar14 == lStack_70) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
      }
      plVar4 = plStack_68;
      if (lVar14 != 0) {
        _memmove(plStack_68 + 3,plStack_68,lVar14 * 0x18);
      }
      *plVar4 = lVar1;
      plVar4[1] = lVar6;
      plVar4[2] = lVar11;
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
      param_1[8] = lVar14 + 1;
    }
    return;
  }
  puVar2 = (undefined8 *)_malloc(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0x676e697373696d20;
    *puVar2 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar2;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(lVar6);
  FUN_100de3b58(&lStack_a0);
  auVar15 = __Unwind_Resume(uVar3);
  plVar7 = auVar15._8_8_;
  plVar4 = auVar15._0_8_;
  lVar1 = *plVar7;
  lVar6 = plVar7[1];
  lVar11 = plVar7[2];
  *plVar7 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    func_0x0001012d88f0(plVar4,plVar7 + 3);
    if (*plVar4 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_108 = (long *)plVar4[7];
      lStack_110 = plVar4[6];
      lStack_f8 = plVar4[9];
      lVar14 = plVar4[8];
      lStack_128 = plVar4[3];
      lStack_130 = plVar4[2];
      lStack_118 = plVar4[5];
      lStack_120 = plVar4[4];
      lStack_f0 = plVar4[10];
      lStack_138 = plVar4[1];
      lStack_140 = *plVar4;
      lStack_100 = lVar14;
      if (lVar14 == lStack_110) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_110);
      }
      plVar7 = plStack_108;
      if (lVar14 != 0) {
        _memmove(plStack_108 + 3,plStack_108,lVar14 * 0x18);
      }
      *plVar7 = lVar1;
      plVar7[1] = lVar6;
      plVar7[2] = lVar11;
      plVar4[5] = lStack_118;
      plVar4[4] = lStack_120;
      plVar4[7] = (long)plStack_108;
      plVar4[6] = lStack_110;
      plVar4[10] = lStack_f0;
      plVar4[1] = lStack_138;
      *plVar4 = lStack_140;
      plVar4[3] = lStack_128;
      plVar4[2] = lStack_130;
      plVar4[9] = lStack_f8;
      plVar4[8] = lVar14 + 1;
    }
    return;
  }
  puVar2 = (undefined8 *)_malloc(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0x676e697373696d20;
    *puVar2 = 0x73692065756c6176;
    *plVar4 = 0;
    plVar4[3] = 0x10;
    plVar4[4] = (long)puVar2;
    plVar4[6] = 0;
    plVar4[5] = 0x10;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(lVar6);
  FUN_100de3b58(&lStack_140);
  auVar15 = __Unwind_Resume(uVar3);
  puVar8 = auVar15._8_8_;
  puVar5 = auVar15._0_8_;
  uVar10 = *puVar8;
  *puVar8 = 0x8000000000000005;
  if (uVar10 == 0x8000000000000005) {
    uVar3 = FUN_1088561c0(&UNK_108cde170,0x10);
    *(undefined8 *)(puVar5 + 4) = uVar3;
    goto LAB_100f1d844;
  }
  uVar13 = puVar8[2];
  puVar12 = (ulong *)puVar8[1];
  uStack_298 = puVar8[4];
  uStack_2a0 = puVar8[3];
  uStack_288 = puVar8[6];
  uStack_290 = puVar8[5];
  uStack_278 = puVar8[8];
  uStack_280 = puVar8[7];
  uStack_2b8 = uVar10;
  puStack_2b0 = puVar12;
  uStack_2a8 = uVar13;
  if (uVar10 == 0x8000000000000000) {
    *puVar5 = 0x300;
    FUN_100de6690(&uStack_2b8);
    return;
  }
  uVar9 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar9 = 5;
  }
  if (uVar9 == 3) {
    uStack_1e8 = puVar8[2];
    uStack_1f0 = puVar8[1];
    uStack_1e0 = puVar8[3];
    uStack_1d8 = 0x8000000000000005;
    FUN_100b1da80(&cStack_270,&uStack_1f0);
  }
  else if (uVar9 == 5) {
    if ((uStack_298 != 0) && (uStack_298 * 9 != -0x11)) {
      _free(uStack_2a0 + uStack_298 * -8 + -8);
    }
    puStack_248 = puVar12 + uVar13 * 0xd;
    puStack_258 = puVar12;
    puStack_260 = puVar12;
    uStack_250 = uVar10;
    if (uVar13 != 0) {
      puStack_258 = puVar12 + 0xd;
      uVar10 = *puVar12;
      if (uVar10 != 0x8000000000000000) {
        uVar9 = puVar12[1];
        uStack_1e0 = puVar12[2];
        uStack_228 = puVar12[6];
        uStack_230 = puVar12[5];
        uStack_218 = puVar12[8];
        uStack_220 = puVar12[7];
        uStack_208 = puVar12[10];
        uStack_210 = puVar12[9];
        uStack_200 = puVar12[0xb];
        uStack_238 = puVar12[4];
        uStack_240 = puVar12[3];
        if (uVar13 == 1) {
LAB_100f1d7b4:
          uStack_1c0 = puVar12[6];
          uStack_1c8 = puVar12[5];
          uStack_1b0 = puVar12[8];
          uStack_1b8 = puVar12[7];
          uStack_1a0 = puVar12[10];
          uStack_1a8 = puVar12[9];
          uStack_198 = puVar12[0xb];
          uStack_1d0 = puVar12[4];
          uStack_1d8 = puVar12[3];
          uStack_1f0 = uVar10;
          uStack_1e8 = uVar9;
          FUN_100b1da80(&cStack_270,&uStack_1f0);
        }
        else {
          puStack_258 = puVar12 + 0x1a;
          uStack_1f0 = puVar12[0xd];
          if (uStack_1f0 == 0x8000000000000000) goto LAB_100f1d7b4;
          uStack_1e0 = puVar12[0xf];
          uStack_1e8 = puVar12[0xe];
          uStack_1d0 = puVar12[0x11];
          uStack_1d8 = puVar12[0x10];
          uStack_1c0 = puVar12[0x13];
          uStack_1c8 = puVar12[0x12];
          uStack_1b0 = puVar12[0x15];
          uStack_1b8 = puVar12[0x14];
          uStack_1a0 = puVar12[0x17];
          uStack_1a8 = puVar12[0x16];
          uStack_198 = puVar12[0x18];
          if (uStack_1f0 != 0) {
            _free(uStack_1e8);
          }
          FUN_100de6690(&uStack_1d8);
          uStack_1f0 = CONCAT71(uStack_1f0._1_7_,0xb);
          uStack_268 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_1f0,&UNK_10b20a580,&UNK_10b20a590);
          cStack_270 = '\x01';
          FUN_100de6690(&uStack_240);
          if (uVar10 != 0) {
            _free(uVar9);
          }
        }
        FUN_100de8910(&puStack_260);
        goto joined_r0x000100f1d8a4;
      }
    }
    uStack_1f0 = CONCAT71(uStack_1f0._1_7_,0xb);
    uStack_268 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_1f0,&UNK_10b20a580,&UNK_10b20a590);
    cStack_270 = '\x01';
    FUN_100de8910(&puStack_260);
  }
  else {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_1f0,&uStack_2b8);
    uStack_268 = func_0x000108a4a50c(&uStack_1f0,&UNK_10b20a5b0,&UNK_10b20a590);
    cStack_270 = '\x01';
    FUN_100de6690(&uStack_2b8);
  }
joined_r0x000100f1d8a4:
  if (cStack_270 != '\x01') {
    *(undefined1 *)((long)puVar5 + 1) = uStack_26f;
    *(undefined1 *)puVar5 = 0;
    return;
  }
  *(undefined8 *)(puVar5 + 4) = uStack_268;
LAB_100f1d844:
  *(undefined1 *)puVar5 = 1;
  return;
}

