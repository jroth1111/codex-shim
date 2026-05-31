
undefined8 * FUN_100f1cda0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  long lStack_178;
  undefined1 uStack_161;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  char cStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
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
  puVar4 = (undefined8 *)param_2[1];
  lVar7 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    puVar2 = (undefined8 *)FUN_1014a7bb4(&lStack_a0,param_2 + 3);
    if (lStack_a0 == 2) {
      param_1[2] = lStack_90;
      param_1[1] = lStack_98;
      param_1[3] = lStack_88;
      *param_1 = 2;
    }
    else {
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[9] = lStack_58;
      param_1[8] = lStack_60;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      if (*param_1 != 2) {
        plStack_68 = (long *)param_1[7];
        lStack_70 = param_1[6];
        lStack_58 = param_1[9];
        lVar8 = param_1[8];
        lStack_88 = param_1[3];
        lStack_90 = param_1[2];
        lStack_78 = param_1[5];
        lStack_80 = param_1[4];
        lStack_50 = param_1[10];
        lStack_98 = param_1[1];
        lStack_a0 = *param_1;
        lStack_60 = lVar8;
        if (lVar8 == lStack_70) {
          puVar2 = (undefined8 *)
                   __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
        }
        plVar5 = plStack_68;
        if (lVar8 != 0) {
          puVar2 = (undefined8 *)_memmove(plStack_68 + 3,plStack_68,lVar8 * 0x18);
        }
        *plVar5 = lVar1;
        plVar5[1] = (long)puVar4;
        plVar5[2] = lVar7;
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
        param_1[8] = lVar8 + 1;
        return puVar2;
      }
    }
    if (lVar1 == 0) {
      return puVar2;
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(puVar4);
    return puVar4;
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
    return puVar2;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(puVar4);
  FUN_100de3b58(&lStack_a0);
  auVar9 = __Unwind_Resume(uVar3);
  pcVar6 = auVar9._8_8_;
  plVar5 = auVar9._0_8_;
  uStack_a8 = 0x100f1cf78;
  cStack_140 = *pcVar6;
  *pcVar6 = '\x16';
  puStack_c0 = puVar4;
  uStack_b8 = uVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (cStack_140 == '\x16') {
    uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    _free(puVar4);
    plVar5 = (long *)__Unwind_Resume(uVar3);
    uStack_148 = 0x100f1d0b4;
    lStack_1c8 = *plVar5;
    *plVar5 = -0x7ffffffffffffffb;
    puStack_160 = puVar4;
    uStack_158 = uVar3;
    ppuStack_150 = &puStack_b0;
    if (lStack_1c8 == -0x7ffffffffffffffb) {
      FUN_1088561c0(&UNK_108cde170,0x10);
    }
    else {
      lStack_1b8 = plVar5[2];
      lStack_1c0 = plVar5[1];
      lStack_1a8 = plVar5[4];
      lStack_1b0 = plVar5[3];
      lStack_198 = plVar5[6];
      lStack_1a0 = plVar5[5];
      lStack_188 = plVar5[8];
      lStack_190 = plVar5[7];
      if (lStack_1c8 != -0x7ffffffffffffffe) {
        FUN_108832ea0(&lStack_1c8,&uStack_161,&UNK_10b2199d0);
        FUN_100de6690(&lStack_1c8);
        return (undefined8 *)0x1;
      }
      lStack_178 = lStack_1b8;
      if (lStack_1c0 == 0) {
        if (-1 < lStack_1b8) {
          return (undefined8 *)0x0;
        }
        auStack_180[0] = 1;
        __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                  (auStack_180,&uStack_161,&UNK_10b2199d0);
      }
      else {
        if (lStack_1c0 == 1) {
          return (undefined8 *)0x0;
        }
        auStack_180[0] = 3;
        func_0x000108a4a50c(auStack_180,&uStack_161,&UNK_10b2199d0);
      }
    }
    return (undefined8 *)0x1;
  }
  uStack_137 = (undefined7)*(undefined8 *)(pcVar6 + 9);
  uStack_13f = (undefined7)*(undefined8 *)(pcVar6 + 1);
  uStack_138 = (undefined1)((ulong)*(undefined8 *)(pcVar6 + 1) >> 0x38);
  uStack_128 = *(undefined8 *)(pcVar6 + 0x18);
  uStack_130 = (undefined1)*(undefined8 *)(pcVar6 + 0x10);
  uStack_12f = (undefined7)((ulong)*(undefined8 *)(pcVar6 + 0x10) >> 8);
  if (cStack_140 != '\x10') {
    if (cStack_140 == '\x11') {
      puVar4 = (undefined8 *)CONCAT71(uStack_137,uStack_138);
      uStack_118 = puVar4[1];
      uStack_120 = *puVar4;
      uStack_108 = puVar4[3];
      uStack_110 = puVar4[2];
      FUN_10078ee98(&lStack_100,&uStack_120);
      if (lStack_100 == -0x8000000000000000) {
        *plVar5 = -0x7fffffffffffffff;
        plVar5[1] = lStack_f8;
      }
      else {
        plVar5[1] = lStack_f8;
        *plVar5 = lStack_100;
        plVar5[3] = lStack_e8;
        plVar5[2] = lStack_f0;
        plVar5[5] = lStack_d8;
        plVar5[4] = lStack_e0;
        plVar5[7] = lStack_c8;
        plVar5[6] = lStack_d0;
      }
      goto code_r0x000108aa97c4;
    }
    if (cStack_140 != '\x12') {
      puVar4 = (undefined8 *)FUN_10078ee98(&lStack_100,&cStack_140);
      if (lStack_100 != -0x8000000000000000) {
        plVar5[1] = lStack_f8;
        *plVar5 = lStack_100;
        plVar5[3] = lStack_e8;
        plVar5[2] = lStack_f0;
        plVar5[5] = lStack_d8;
        plVar5[4] = lStack_e0;
        plVar5[7] = lStack_c8;
        plVar5[6] = lStack_d0;
        return puVar4;
      }
      *plVar5 = -0x7fffffffffffffff;
      plVar5[1] = lStack_f8;
      return puVar4;
    }
  }
  *plVar5 = -0x8000000000000000;
  puVar4 = (undefined8 *)FUN_100e077ec(&cStack_140);
  return puVar4;
}

