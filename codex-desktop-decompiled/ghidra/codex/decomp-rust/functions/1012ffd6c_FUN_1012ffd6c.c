
undefined8 FUN_1012ffd6c(byte *param_1)

{
  long lVar1;
  long *plVar2;
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
        goto LAB_1012ffed8;
      }
    }
    else {
      if (bVar3 != 4) {
        if (bVar3 != 0xc) {
LAB_1012fff24:
          uVar4 = FUN_108855b04(param_1,auStack_48,&UNK_10b20d500);
          return uVar4;
        }
        lVar1 = *(long *)(param_1 + 8);
        plVar2 = *(long **)(param_1 + 0x10);
        if ((*(long *)(param_1 + 0x18) == 0xc) &&
           (*plVar2 == 0x5f7972616d6d7573 && (int)plVar2[1] == 0x74786574)) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1087e4494(plVar2,*(long *)(param_1 + 0x18),&UNK_10b22ea08,1);
        }
joined_r0x0001012ffe5c:
        if (lVar1 == 0) {
          return uVar4;
        }
        _free(plVar2);
        return uVar4;
      }
      if (*(ulong *)(param_1 + 8) != 0) {
        auStack_48[0] = 1;
        uStack_40 = *(ulong *)(param_1 + 8);
        uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                          (auStack_48,&UNK_10b22b418,&UNK_10b20a590);
        goto LAB_1012ffed8;
      }
    }
  }
  else {
    if (bVar3 != 0xd) {
      if (bVar3 == 0xe) {
        lVar1 = *(long *)(param_1 + 8);
        plVar2 = *(long **)(param_1 + 0x10);
        uVar4 = func_0x000100b3e2c8(plVar2,*(undefined8 *)(param_1 + 0x18));
        goto joined_r0x0001012ffe5c;
      }
      if (bVar3 != 0xf) goto LAB_1012fff24;
      uVar4 = func_0x000100b3e2c8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      goto LAB_1012ffed8;
    }
    plVar2 = *(long **)(param_1 + 8);
    if ((*(long *)(param_1 + 0x10) != 0xc) ||
       (*plVar2 != 0x5f7972616d6d7573 || (int)plVar2[1] != 0x74786574)) {
      uVar4 = FUN_1087e4494(plVar2,*(long *)(param_1 + 0x10),&UNK_10b22ea08,1);
      goto LAB_1012ffed8;
    }
  }
  uVar4 = 0;
LAB_1012ffed8:
  FUN_100e077ec(param_1);
  return uVar4;
}

