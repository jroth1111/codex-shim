
undefined8 FUN_10124f3dc(byte *param_1)

{
  long lVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  ulong uStack_40;
  
  bVar3 = *param_1;
  if (bVar3 < 0xd) {
    if (bVar3 == 1) {
      if ((ulong)param_1[1] != 0) {
        auStack_48[0] = 1;
        uStack_40 = (ulong)param_1[1];
        uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b22b418,&UNK_10b20a590);
        goto LAB_10124f518;
      }
    }
    else {
      if (bVar3 != 4) {
        if (bVar3 != 0xc) {
LAB_10124f564:
          uVar4 = FUN_108855b04(param_1,auStack_48,&UNK_10b20ec20);
          return uVar4;
        }
        lVar1 = *(long *)(param_1 + 8);
        piVar2 = *(int **)(param_1 + 0x10);
        if ((*(long *)(param_1 + 0x18) == 4) && (*piVar2 == 0x74786554)) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1087e4494(piVar2,*(long *)(param_1 + 0x18),&UNK_10b22d760,1);
        }
joined_r0x00010124f4b4:
        if (lVar1 == 0) {
          return uVar4;
        }
        _free(piVar2);
        return uVar4;
      }
      if (*(ulong *)(param_1 + 8) != 0) {
        auStack_48[0] = 1;
        uStack_40 = *(ulong *)(param_1 + 8);
        uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b22b418,&UNK_10b20a590);
        goto LAB_10124f518;
      }
    }
  }
  else {
    if (bVar3 != 0xd) {
      if (bVar3 == 0xe) {
        lVar1 = *(long *)(param_1 + 8);
        piVar2 = *(int **)(param_1 + 0x10);
        uVar4 = FUN_100ae3af0(piVar2,*(undefined8 *)(param_1 + 0x18));
        goto joined_r0x00010124f4b4;
      }
      if (bVar3 != 0xf) goto LAB_10124f564;
      uVar4 = FUN_100ae3af0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      goto LAB_10124f518;
    }
    if ((*(long *)(param_1 + 0x10) != 4) || (**(int **)(param_1 + 8) != 0x74786554)) {
      uVar4 = FUN_1087e4494(*(int **)(param_1 + 8),*(long *)(param_1 + 0x10),&UNK_10b22d760,1);
      goto LAB_10124f518;
    }
  }
  uVar4 = 0;
LAB_10124f518:
  FUN_100e077ec(param_1);
  return uVar4;
}

