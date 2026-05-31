
void FUN_100f209a0(undefined2 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_178;
  ulong *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  char cStack_130;
  undefined1 uStack_12f;
  undefined8 uStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uStack_110 = *param_2;
  *param_2 = 0x8000000000000005;
  if (uStack_110 == 0x8000000000000005) {
    uVar2 = FUN_1088561c0(&UNK_108cde170,0x10);
    *(undefined8 *)(param_1 + 4) = uVar2;
    goto LAB_100f20b60;
  }
  uVar4 = param_2[2];
  puStack_120 = (ulong *)param_2[1];
  uStack_158 = param_2[4];
  uStack_160 = param_2[3];
  uStack_148 = param_2[6];
  uStack_150 = param_2[5];
  uStack_138 = param_2[8];
  uStack_140 = param_2[7];
  uStack_178 = uStack_110;
  puStack_170 = puStack_120;
  uStack_168 = uVar4;
  if (uStack_110 == 0x8000000000000000) {
    *param_1 = 0x400;
    FUN_100de6690(&uStack_178);
    return;
  }
  uVar3 = uStack_110 ^ 0x8000000000000000;
  if (-1 < (long)uStack_110) {
    uVar3 = 5;
  }
  if (uVar3 == 3) {
    uStack_a8 = param_2[2];
    uStack_b0 = param_2[1];
    uStack_a0 = param_2[3];
    uStack_98 = 0x8000000000000005;
    func_0x000100b25394(&cStack_130,&uStack_b0);
  }
  else if (uVar3 == 5) {
    if ((uStack_158 != 0) && (uStack_158 * 9 != -0x11)) {
      _free(uStack_160 + uStack_158 * -8 + -8);
    }
    puStack_108 = puStack_120 + uVar4 * 0xd;
    puStack_118 = puStack_120;
    if (uVar4 != 0) {
      puStack_118 = puStack_120 + 0xd;
      uVar3 = *puStack_120;
      if (uVar3 != 0x8000000000000000) {
        uVar1 = puStack_120[1];
        uStack_a0 = puStack_120[2];
        uStack_e8 = puStack_120[6];
        uStack_f0 = puStack_120[5];
        uStack_d8 = puStack_120[8];
        uStack_e0 = puStack_120[7];
        uStack_c8 = puStack_120[10];
        uStack_d0 = puStack_120[9];
        uStack_c0 = puStack_120[0xb];
        uStack_f8 = puStack_120[4];
        uStack_100 = puStack_120[3];
        if (uVar4 == 1) {
LAB_100f20ad0:
          uStack_80 = puStack_120[6];
          uStack_88 = puStack_120[5];
          uStack_70 = puStack_120[8];
          uStack_78 = puStack_120[7];
          uStack_60 = puStack_120[10];
          uStack_68 = puStack_120[9];
          uStack_58 = puStack_120[0xb];
          uStack_90 = puStack_120[4];
          uStack_98 = puStack_120[3];
          uStack_b0 = uVar3;
          uStack_a8 = uVar1;
          func_0x000100b25394(&cStack_130,&uStack_b0);
        }
        else {
          puStack_118 = puStack_120 + 0x1a;
          uStack_b0 = puStack_120[0xd];
          if (uStack_b0 == 0x8000000000000000) goto LAB_100f20ad0;
          uStack_a0 = puStack_120[0xf];
          uStack_a8 = puStack_120[0xe];
          uStack_90 = puStack_120[0x11];
          uStack_98 = puStack_120[0x10];
          uStack_80 = puStack_120[0x13];
          uStack_88 = puStack_120[0x12];
          uStack_70 = puStack_120[0x15];
          uStack_78 = puStack_120[0x14];
          uStack_60 = puStack_120[0x17];
          uStack_68 = puStack_120[0x16];
          uStack_58 = puStack_120[0x18];
          if (uStack_b0 != 0) {
            _free(uStack_a8);
          }
          FUN_100de6690(&uStack_98);
          uStack_b0 = CONCAT71(uStack_b0._1_7_,0xb);
          uStack_128 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_b0,&UNK_10b20a580,&UNK_10b20a590);
          cStack_130 = '\x01';
          FUN_100de6690(&uStack_100);
          if (uVar3 != 0) {
            _free(uVar1);
          }
        }
        FUN_100de8910(&puStack_120);
        goto joined_r0x000100f20ca8;
      }
    }
    uStack_b0 = CONCAT71(uStack_b0._1_7_,0xb);
    uStack_128 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_b0,&UNK_10b20a580,&UNK_10b20a590);
    cStack_130 = '\x01';
    FUN_100de8910(&puStack_120);
  }
  else {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_b0,&uStack_178);
    uStack_128 = func_0x000108a4a50c(&uStack_b0,&UNK_10b20a5b0,&UNK_10b20a590);
    cStack_130 = '\x01';
    FUN_100de6690(&uStack_178);
  }
joined_r0x000100f20ca8:
  if (cStack_130 != '\x01') {
    *(undefined1 *)((long)param_1 + 1) = uStack_12f;
    *(undefined1 *)param_1 = 0;
    return;
  }
  *(undefined8 *)(param_1 + 4) = uStack_128;
LAB_100f20b60:
  *(undefined1 *)param_1 = 1;
  return;
}

