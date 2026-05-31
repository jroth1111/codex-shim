
void FUN_10140d1b0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  undefined1 uStack_21;
  
  bVar2 = *param_2;
  if (bVar2 < 5) {
    if (bVar2 < 3) {
      if (bVar2 == 1) {
        uStack_38 = (ulong)param_2[1];
      }
      else {
        if (bVar2 != 2) {
LAB_10140d2a4:
          uVar3 = FUN_108855c40(param_2,&uStack_21,&UNK_10b21bcb0);
          goto LAB_10140d2e8;
        }
        uStack_38 = (ulong)*(ushort *)(param_2 + 2);
      }
    }
    else if (bVar2 == 3) {
      uStack_38 = (ulong)*(uint *)(param_2 + 4);
    }
    else {
      if (bVar2 != 4) goto LAB_10140d2a4;
      uStack_38 = *(ulong *)(param_2 + 8);
      if (uStack_38 >> 0x20 != 0) {
        auStack_40[0] = 1;
        goto LAB_10140d2d0;
      }
    }
  }
  else if (bVar2 < 7) {
    if (bVar2 == 5) {
      uStack_38 = (ulong)(char)param_2[1];
    }
    else {
      if (bVar2 != 6) goto LAB_10140d2a4;
      uStack_38 = (ulong)*(short *)(param_2 + 2);
    }
    if ((long)uStack_38 < 0) {
LAB_10140d2c8:
      auStack_40[0] = 2;
LAB_10140d2d0:
      uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_40,&uStack_21,&UNK_10b21bcb0);
LAB_10140d2e8:
      *(undefined8 *)(param_1 + 2) = uVar3;
      uVar4 = 1;
      goto LAB_10140d290;
    }
  }
  else if (bVar2 == 7) {
    uVar1 = *(uint *)(param_2 + 4);
    uStack_38 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uStack_38 = (ulong)(int)uVar1;
      goto LAB_10140d2c8;
    }
  }
  else {
    if (bVar2 != 8) goto LAB_10140d2a4;
    uStack_38 = *(ulong *)(param_2 + 8);
    if (uStack_38 >> 0x20 != 0) goto LAB_10140d2c8;
  }
  uVar4 = 0;
  param_1[1] = 1;
  param_1[2] = (int)uStack_38;
LAB_10140d290:
  *param_1 = uVar4;
  return;
}

