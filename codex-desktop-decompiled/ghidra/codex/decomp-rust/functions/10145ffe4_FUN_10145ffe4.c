
undefined1  [16] FUN_10145ffe4(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_50 [8];
  ulong uStack_48;
  undefined1 uStack_31;
  
  bVar1 = *param_1;
  if (bVar1 < 5) {
    if (2 < bVar1) {
      if (bVar1 == 3) {
        uVar2 = (ulong)*(uint *)(param_1 + 4);
        if (*(uint *)(param_1 + 4) != 0) goto LAB_1014601bc;
        auStack_50[0] = 1;
        uStack_48 = uVar2;
        uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_50,&uStack_31,&UNK_10b22d1d0);
      }
      else {
        if (bVar1 != 4) goto LAB_1014601e0;
        uVar2 = *(ulong *)(param_1 + 8);
        if (uVar2 != 0) goto LAB_1014601bc;
        uStack_48 = 0;
        auStack_50[0] = 1;
        uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_50,&uStack_31,&UNK_10b22d1d0);
      }
      goto LAB_101460220;
    }
    if (bVar1 != 1) {
      if (bVar1 != 2) {
LAB_1014601e0:
        uVar2 = FUN_108855b04(param_1,&uStack_31,&UNK_10b22d1d0);
        uVar3 = 1;
        goto LAB_1014601c4;
      }
      uVar2 = (ulong)*(ushort *)(param_1 + 2);
      if (uVar2 != 0) goto LAB_1014601bc;
      uStack_48 = 0;
      auStack_50[0] = 1;
      uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b22d1d0);
      goto LAB_101460220;
    }
    uVar2 = (ulong)param_1[1];
    if (uVar2 == 0) {
      uStack_48 = 0;
      auStack_50[0] = 1;
      uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b22d1d0);
      goto LAB_101460220;
    }
LAB_1014601bc:
    uVar3 = 0;
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        uVar2 = (ulong)(char)param_1[1];
        if (0 < (long)uVar2) goto LAB_1014601bc;
        auStack_50[0] = 2;
        uStack_48 = uVar2;
        uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_50,&uStack_31,&UNK_10b22d1d0);
      }
      else {
        if (bVar1 != 6) goto LAB_1014601e0;
        uVar2 = (ulong)*(short *)(param_1 + 2);
        if (0 < (long)uVar2) goto LAB_1014601bc;
        auStack_50[0] = 2;
        uStack_48 = uVar2;
        uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_50,&uStack_31,&UNK_10b22d1d0);
      }
    }
    else if (bVar1 == 7) {
      uVar2 = (ulong)*(int *)(param_1 + 4);
      if (0 < *(int *)(param_1 + 4)) goto LAB_1014601bc;
      auStack_50[0] = 2;
      uStack_48 = uVar2;
      uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b22d1d0);
    }
    else {
      if (bVar1 != 8) goto LAB_1014601e0;
      uVar2 = *(ulong *)(param_1 + 8);
      if (0 < (long)uVar2) goto LAB_1014601bc;
      auStack_50[0] = 2;
      uStack_48 = uVar2;
      uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&uStack_31,&UNK_10b22d1d0);
    }
LAB_101460220:
    uVar3 = 1;
  }
  FUN_100e077ec(param_1);
LAB_1014601c4:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

