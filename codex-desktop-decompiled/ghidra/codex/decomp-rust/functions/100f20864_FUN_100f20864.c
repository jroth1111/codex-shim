
void FUN_100f20864(long *param_1,char *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong uStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  char cStack_1b0;
  undefined1 uStack_1af;
  undefined8 uStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  ulong uStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cStack_80 = *param_2;
  *param_2 = '\x16';
  if (cStack_80 != '\x16') {
    uStack_77 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_7f = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_78 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    uStack_6f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8);
    if (cStack_80 != '\x10') {
      if (cStack_80 == '\x11') {
        plVar2 = (long *)CONCAT71(uStack_77,uStack_78);
        lStack_58 = plVar2[1];
        lStack_60 = *plVar2;
        lStack_48 = plVar2[3];
        lStack_50 = plVar2[2];
        FUN_100618834(&lStack_38,&lStack_60);
        if (lStack_38 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_30;
        }
        else {
          param_1[1] = lStack_30;
          *param_1 = lStack_38;
          param_1[2] = lStack_28;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar2);
        return;
      }
      if (cStack_80 != '\x12') {
        FUN_100618834(&lStack_60,&cStack_80);
        if (lStack_60 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_58;
          return;
        }
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[2] = lStack_50;
        return;
      }
    }
    *param_1 = -0x8000000000000000;
    FUN_100e077ec(&cStack_80);
    return;
  }
  uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free();
  auVar8 = __Unwind_Resume(uVar3);
  puVar5 = auVar8._8_8_;
  puVar4 = auVar8._0_8_;
  uStack_190 = *puVar5;
  *puVar5 = 0x8000000000000005;
  if (uStack_190 == 0x8000000000000005) {
    uVar3 = FUN_1088561c0(&UNK_108cde170,0x10);
    *(undefined8 *)(puVar4 + 4) = uVar3;
    goto LAB_100f20b60;
  }
  uVar7 = puVar5[2];
  puStack_1a0 = (ulong *)puVar5[1];
  uStack_1d8 = puVar5[4];
  uStack_1e0 = puVar5[3];
  uStack_1c8 = puVar5[6];
  uStack_1d0 = puVar5[5];
  uStack_1b8 = puVar5[8];
  uStack_1c0 = puVar5[7];
  uStack_1f8 = uStack_190;
  puStack_1f0 = puStack_1a0;
  uStack_1e8 = uVar7;
  if (uStack_190 == 0x8000000000000000) {
    *puVar4 = 0x400;
    FUN_100de6690(&uStack_1f8);
    return;
  }
  uVar6 = uStack_190 ^ 0x8000000000000000;
  if (-1 < (long)uStack_190) {
    uVar6 = 5;
  }
  if (uVar6 == 3) {
    uStack_128 = puVar5[2];
    uStack_130 = puVar5[1];
    uStack_120 = puVar5[3];
    uStack_118 = 0x8000000000000005;
    FUN_100b25394(&cStack_1b0,&uStack_130);
  }
  else if (uVar6 == 5) {
    if ((uStack_1d8 != 0) && (uStack_1d8 * 9 != -0x11)) {
      _free(uStack_1e0 + uStack_1d8 * -8 + -8);
    }
    puStack_188 = puStack_1a0 + uVar7 * 0xd;
    puStack_198 = puStack_1a0;
    if (uVar7 != 0) {
      puStack_198 = puStack_1a0 + 0xd;
      uVar6 = *puStack_1a0;
      if (uVar6 != 0x8000000000000000) {
        uVar1 = puStack_1a0[1];
        uStack_120 = puStack_1a0[2];
        uStack_168 = puStack_1a0[6];
        uStack_170 = puStack_1a0[5];
        uStack_158 = puStack_1a0[8];
        uStack_160 = puStack_1a0[7];
        uStack_148 = puStack_1a0[10];
        uStack_150 = puStack_1a0[9];
        uStack_140 = puStack_1a0[0xb];
        uStack_178 = puStack_1a0[4];
        uStack_180 = puStack_1a0[3];
        if (uVar7 == 1) {
LAB_100f20ad0:
          uStack_100 = puStack_1a0[6];
          uStack_108 = puStack_1a0[5];
          uStack_f0 = puStack_1a0[8];
          uStack_f8 = puStack_1a0[7];
          uStack_e0 = puStack_1a0[10];
          uStack_e8 = puStack_1a0[9];
          uStack_d8 = puStack_1a0[0xb];
          uStack_110 = puStack_1a0[4];
          uStack_118 = puStack_1a0[3];
          uStack_130 = uVar6;
          uStack_128 = uVar1;
          FUN_100b25394(&cStack_1b0,&uStack_130);
        }
        else {
          puStack_198 = puStack_1a0 + 0x1a;
          uStack_130 = puStack_1a0[0xd];
          if (uStack_130 == 0x8000000000000000) goto LAB_100f20ad0;
          uStack_120 = puStack_1a0[0xf];
          uStack_128 = puStack_1a0[0xe];
          uStack_110 = puStack_1a0[0x11];
          uStack_118 = puStack_1a0[0x10];
          uStack_100 = puStack_1a0[0x13];
          uStack_108 = puStack_1a0[0x12];
          uStack_f0 = puStack_1a0[0x15];
          uStack_f8 = puStack_1a0[0x14];
          uStack_e0 = puStack_1a0[0x17];
          uStack_e8 = puStack_1a0[0x16];
          uStack_d8 = puStack_1a0[0x18];
          if (uStack_130 != 0) {
            _free(uStack_128);
          }
          FUN_100de6690(&uStack_118);
          uStack_130 = CONCAT71(uStack_130._1_7_,0xb);
          uStack_1a8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_130,&UNK_10b20a580,&UNK_10b20a590);
          cStack_1b0 = '\x01';
          FUN_100de6690(&uStack_180);
          if (uVar6 != 0) {
            _free(uVar1);
          }
        }
        FUN_100de8910(&puStack_1a0);
        goto joined_r0x000100f20ca8;
      }
    }
    uStack_130 = CONCAT71(uStack_130._1_7_,0xb);
    uStack_1a8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_130,&UNK_10b20a580,&UNK_10b20a590);
    cStack_1b0 = '\x01';
    FUN_100de8910(&puStack_1a0);
  }
  else {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_130,&uStack_1f8);
    uStack_1a8 = func_0x000108a4a50c(&uStack_130,&UNK_10b20a5b0,&UNK_10b20a590);
    cStack_1b0 = '\x01';
    FUN_100de6690(&uStack_1f8);
  }
joined_r0x000100f20ca8:
  if (cStack_1b0 != '\x01') {
    *(undefined1 *)((long)puVar4 + 1) = uStack_1af;
    *(undefined1 *)puVar4 = 0;
    return;
  }
  *(undefined8 *)(puVar4 + 4) = uStack_1a8;
LAB_100f20b60:
  *(undefined1 *)puVar4 = 1;
  return;
}

