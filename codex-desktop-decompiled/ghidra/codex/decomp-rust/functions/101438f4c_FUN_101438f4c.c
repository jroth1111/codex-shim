
void FUN_101438f4c(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  undefined1 uStack_21;
  
  bVar1 = *param_2;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uStack_38 = (ulong)param_2[1];
      }
      else {
        if (bVar1 != 2) {
LAB_10143904c:
          uStack_38 = FUN_108855c40(param_2,&uStack_21,&UNK_10b21bd50);
          uVar2 = 2;
          goto LAB_101439008;
        }
        uStack_38 = (ulong)*(ushort *)(param_2 + 2);
      }
    }
    else if (bVar1 == 3) {
      uStack_38 = (ulong)*(uint *)(param_2 + 4);
    }
    else {
      if (bVar1 != 4) goto LAB_10143904c;
      uStack_38 = *(ulong *)(param_2 + 8);
    }
LAB_101439004:
    uVar2 = 1;
  }
  else {
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        uStack_38 = (ulong)(char)param_2[1];
      }
      else {
        if (bVar1 != 6) goto LAB_10143904c;
        uStack_38 = (ulong)*(short *)(param_2 + 2);
      }
joined_r0x000101438fd8:
      if (-1 < (long)uStack_38) goto LAB_101439004;
    }
    else {
      if (bVar1 != 7) {
        if (bVar1 != 8) goto LAB_10143904c;
        uStack_38 = *(ulong *)(param_2 + 8);
        goto joined_r0x000101438fd8;
      }
      uStack_38 = (ulong)*(int *)(param_2 + 4);
      if (-1 < *(int *)(param_2 + 4)) goto LAB_101439004;
    }
    uVar2 = 2;
    auStack_40[0] = 2;
    uStack_38 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_40,&uStack_21,&UNK_10b21bd50);
  }
LAB_101439008:
  *param_1 = uVar2;
  param_1[1] = uStack_38;
  return;
}

