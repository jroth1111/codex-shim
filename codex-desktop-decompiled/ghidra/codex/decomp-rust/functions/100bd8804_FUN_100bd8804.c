
void FUN_100bd8804(undefined1 *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
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
  ulong uStack_50;
  ulong uStack_48;
  
  uVar7 = *param_2;
  uVar5 = uVar7 ^ 0x8000000000000000;
  if (-1 < (long)uVar7) {
    uVar5 = 5;
  }
  if (uVar5 == 3) {
    uStack_98 = param_2[2];
    uStack_a0 = param_2[1];
    uStack_90 = param_2[3];
    uStack_88 = 0x8000000000000005;
    func_0x000100ba4254(param_1,&uStack_a0);
    return;
  }
  if (uVar5 != 5) {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_a0,param_2);
    uVar2 = func_0x000108a4a50c(&uStack_a0,&UNK_10b20a5b0,&UNK_10b20a590);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *param_1 = 1;
    uVar5 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar5 = 5;
    }
    if (uVar5 < 3) {
      return;
    }
    if (uVar5 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar4 = (long *)param_2[2];
    }
    else if (uVar5 == 4) {
      plVar4 = (long *)param_2[2];
      lVar8 = param_2[3] + 1;
      plVar3 = plVar4;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        FUN_100de6690(plVar3);
        plVar3 = plVar3 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar5 = param_2[4];
      if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
        _free(param_2[3] + uVar5 * -8 + -8);
      }
      plVar4 = (long *)param_2[1];
      lVar8 = param_2[2] + 1;
      plVar3 = plVar4;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        if (*plVar3 != 0) {
          _free(plVar3[1]);
        }
        FUN_100de6690(plVar3 + 3);
        plVar3 = plVar3 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar4);
    return;
  }
  puVar1 = (ulong *)param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[4];
  if ((uVar6 != 0) && (uVar6 * 9 != -0x11)) {
    _free(param_2[3] + uVar6 * -8 + -8);
  }
  puStack_f8 = puVar1 + uVar5 * 0xd;
  puStack_108 = puVar1;
  puStack_110 = puVar1;
  uStack_100 = uVar7;
  if (uVar5 != 0) {
    puStack_108 = puVar1 + 0xd;
    uVar7 = *puVar1;
    if (uVar7 != 0x8000000000000000) {
      uVar6 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_d8 = puVar1[6];
      uStack_e0 = puVar1[5];
      uStack_c8 = puVar1[8];
      uStack_d0 = puVar1[7];
      uStack_b8 = puVar1[10];
      uStack_c0 = puVar1[9];
      uStack_b0 = puVar1[0xb];
      uStack_e8 = puVar1[4];
      uStack_f0 = puVar1[3];
      if (uVar5 != 1) {
        puStack_108 = puVar1 + 0x1a;
        uStack_a0 = puVar1[0xd];
        if (uStack_a0 != 0x8000000000000000) {
          uStack_90 = puVar1[0xf];
          uStack_98 = puVar1[0xe];
          uStack_80 = puVar1[0x11];
          uStack_88 = puVar1[0x10];
          uStack_70 = puVar1[0x13];
          uStack_78 = puVar1[0x12];
          uStack_60 = puVar1[0x15];
          uStack_68 = puVar1[0x14];
          uStack_50 = puVar1[0x17];
          uStack_58 = puVar1[0x16];
          uStack_48 = puVar1[0x18];
          if (uStack_a0 != 0) {
            _free(uStack_98);
          }
          FUN_100de6690(&uStack_88);
          uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
          uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                            (&uStack_a0,&UNK_10b20a580,&UNK_10b20a590);
          *(undefined8 *)(param_1 + 8) = uVar2;
          *param_1 = 1;
          FUN_100de6690(&uStack_f0);
          if (uVar7 != 0) {
            _free(uVar6);
          }
          goto LAB_100bd8a04;
        }
      }
      uStack_70 = puVar1[6];
      uStack_78 = puVar1[5];
      uStack_60 = puVar1[8];
      uStack_68 = puVar1[7];
      uStack_50 = puVar1[10];
      uStack_58 = puVar1[9];
      uStack_48 = puVar1[0xb];
      uStack_80 = puVar1[4];
      uStack_88 = puVar1[3];
      uStack_a0 = uVar7;
      uStack_98 = uVar6;
      func_0x000100ba4254(param_1,&uStack_a0);
      goto LAB_100bd8a04;
    }
  }
  uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
  uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                    (&uStack_a0,&UNK_10b20a580,&UNK_10b20a590);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = 1;
LAB_100bd8a04:
  FUN_100de8910(&puStack_110);
  return;
}

