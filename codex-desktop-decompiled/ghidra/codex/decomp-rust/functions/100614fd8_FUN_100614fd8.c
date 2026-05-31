
undefined1  [16] FUN_100614fd8(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  ulong uStack_38;
  undefined1 uStack_21;
  
  bVar1 = *param_1;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uVar3 = 0;
        uVar2 = (ulong)param_1[1];
      }
      else {
        if (bVar1 != 2) {
LAB_1006150c0:
          uVar2 = thunk_FUN_108855b04(param_1,&uStack_21,&UNK_10b2199d0);
          uVar3 = 1;
          goto LAB_1006150a8;
        }
        uVar3 = 0;
        uVar2 = (ulong)*(ushort *)(param_1 + 2);
      }
    }
    else if (bVar1 == 3) {
      uVar3 = 0;
      uVar2 = (ulong)*(uint *)(param_1 + 4);
    }
    else {
      if (bVar1 != 4) goto LAB_1006150c0;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((long)uVar2 < 0) {
        auStack_40[0] = 1;
        uStack_38 = uVar2;
        uVar2 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_40,&uStack_21,&UNK_10b2199d0);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 == 5) {
      uVar3 = 0;
      uVar2 = (ulong)(char)param_1[1];
    }
    else {
      if (bVar1 != 6) goto LAB_1006150c0;
      uVar3 = 0;
      uVar2 = (ulong)*(short *)(param_1 + 2);
    }
  }
  else if (bVar1 == 7) {
    uVar3 = 0;
    uVar2 = (ulong)*(int *)(param_1 + 4);
  }
  else {
    if (bVar1 != 8) goto LAB_1006150c0;
    uVar3 = 0;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  FUN_100e077ec(param_1);
LAB_1006150a8:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}

