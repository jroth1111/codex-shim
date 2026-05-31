
undefined1  [16] FUN_100fbc904(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_30 [8];
  ulong uStack_28;
  undefined1 uStack_11;
  
  bVar1 = *param_1;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uVar2 = 0;
        uStack_28 = (ulong)param_1[1];
        goto LAB_100fbc9d0;
      }
      if (bVar1 == 2) {
        uVar2 = 0;
        uStack_28 = (ulong)*(ushort *)(param_1 + 2);
        goto LAB_100fbc9d0;
      }
      goto LAB_100fbc9dc;
    }
    if (bVar1 == 3) {
      uVar2 = 0;
      uStack_28 = (ulong)*(uint *)(param_1 + 4);
      goto LAB_100fbc9d0;
    }
    if (bVar1 != 4) goto LAB_100fbc9dc;
    uStack_28 = *(ulong *)(param_1 + 8);
    if (-1 < (long)uStack_28) {
      uVar2 = 0;
      goto LAB_100fbc9d0;
    }
    auStack_30[0] = 1;
    uStack_28 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_30,&uStack_11,&UNK_10b2199d0);
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        uVar2 = 0;
        uStack_28 = (ulong)(char)param_1[1];
        goto LAB_100fbc9d0;
      }
      if (bVar1 == 6) {
        uVar2 = 0;
        uStack_28 = (ulong)*(short *)(param_1 + 2);
        goto LAB_100fbc9d0;
      }
    }
    else {
      if (bVar1 == 7) {
        uVar2 = 0;
        uStack_28 = (ulong)*(int *)(param_1 + 4);
        goto LAB_100fbc9d0;
      }
      if (bVar1 == 8) {
        uVar2 = 0;
        uStack_28 = *(ulong *)(param_1 + 8);
        goto LAB_100fbc9d0;
      }
    }
LAB_100fbc9dc:
    uStack_28 = FUN_108855c40(param_1,&uStack_11,&UNK_10b2199d0);
  }
  uVar2 = 1;
LAB_100fbc9d0:
  auVar3._8_8_ = uStack_28;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

