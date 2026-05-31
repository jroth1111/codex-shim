
void FUN_100614584(uint *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  undefined1 uStack_21;
  
  bVar1 = *param_2;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uVar4 = (ulong)param_2[1];
      }
      else {
        if (bVar1 != 2) {
LAB_100614708:
          uVar3 = thunk_FUN_108855b04(param_2,&uStack_21,&UNK_10b219d50);
          *(undefined8 *)(param_1 + 2) = uVar3;
          *param_1 = 1;
          return;
        }
        uVar4 = (ulong)*(ushort *)(param_2 + 2);
      }
    }
    else if (bVar1 == 3) {
      uVar4 = (ulong)*(uint *)(param_2 + 4);
      if ((int)*(uint *)(param_2 + 4) < 0) {
        auStack_40[0] = 1;
        uStack_38 = uVar4;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_40,&uStack_21,&UNK_10b219d50);
LAB_100614694:
        *(undefined8 *)(param_1 + 2) = uVar3;
        *param_1 = 1;
        goto LAB_1006146b0;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_100614708;
      uVar4 = *(ulong *)(param_2 + 8);
      if (uVar4 >> 0x1f != 0) {
        auStack_40[0] = 1;
        uStack_38 = uVar4;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_40,&uStack_21,&UNK_10b219d50);
        goto LAB_100614694;
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 == 5) {
      uVar4 = (ulong)(char)param_2[1];
    }
    else {
      if (bVar1 != 6) goto LAB_100614708;
      uVar4 = (ulong)*(short *)(param_2 + 2);
    }
  }
  else {
    if (bVar1 != 7) {
      if (bVar1 != 8) goto LAB_100614708;
      uVar4 = *(ulong *)(param_2 + 8);
      bVar2 = uVar4 != (long)(int)(uint)uVar4;
      if (bVar2) {
        auStack_40[0] = 2;
        uStack_38 = uVar4;
        uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_40,&uStack_21,&UNK_10b219d50);
        *(undefined8 *)(param_1 + 2) = uVar3;
      }
      else {
        param_1[1] = (uint)uVar4;
      }
      *param_1 = (uint)bVar2;
      goto LAB_1006146b0;
    }
    uVar4 = (ulong)*(uint *)(param_2 + 4);
  }
  *param_1 = 0;
  param_1[1] = (uint)uVar4;
LAB_1006146b0:
  FUN_100e077ec(param_2);
  return;
}

