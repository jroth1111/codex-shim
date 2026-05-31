
undefined8 FUN_100eb4760(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined ***pppuStack_30;
  undefined *puStack_28;
  
  if (*param_1 == '\x14') {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = FUN_1087e422c(*(long *)(param_1 + 0x18),&stack0xffffffffffffffe0,&UNK_10b23a1b0);
    }
    return uVar3;
  }
  if (*param_1 != '\x15') {
    uVar3 = FUN_108855c40(param_1,&stack0xffffffffffffffef,&UNK_10b214128);
    return uVar3;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  pbVar2 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar2;
  if (bVar1 < 0xd) {
    if (bVar1 == 1) {
      puStack_38 = (undefined *)(ulong)pbVar2[1];
    }
    else {
      if (bVar1 != 4) {
        if (bVar1 != 0xc) {
LAB_1087e3900:
          uVar3 = FUN_108855c40(pbVar2,&stack0xffffffffffffffef,&UNK_10b214d48);
          return uVar3;
        }
        puStack_28 = *(undefined **)(pbVar2 + 0x10);
        goto LAB_1087e38d0;
      }
      puStack_38 = *(undefined **)(pbVar2 + 8);
    }
    ppuStack_40 = (undefined **)CONCAT71(ppuStack_40._1_7_,1);
    uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&ppuStack_40,&UNK_10b229c58,&UNK_10b20a590);
  }
  else {
    if (bVar1 != 0xd) {
      if (bVar1 == 0xe) {
        uVar3 = *(undefined8 *)(pbVar2 + 0x10);
        uVar4 = *(undefined8 *)(pbVar2 + 0x18);
      }
      else {
        if (bVar1 != 0xf) goto LAB_1087e3900;
        uVar3 = *(undefined8 *)(pbVar2 + 8);
        uVar4 = *(undefined8 *)(pbVar2 + 0x10);
      }
      func_0x000107c03c60(&uStack_58,uVar3,uVar4);
      ppuStack_40 = ppuStack_50;
      puStack_38 = (undefined *)uStack_48;
      pppuStack_30 = &ppuStack_40;
      puStack_28 = &DAT_100c7b3a0;
      uVar3 = FUN_108856088(s_unknown_field______there_are_no_f_108ac292b,&pppuStack_30);
      if ((uStack_58 & 0x7fffffffffffffff) != 0) {
        _free(ppuStack_50);
      }
      return uVar3;
    }
    puStack_28 = *(undefined **)(pbVar2 + 8);
LAB_1087e38d0:
    ppuStack_40 = &puStack_28;
    puStack_38 = &DAT_100c7b3a0;
    uVar3 = FUN_108856088(s_unknown_field______there_are_no_f_108ac292b,&ppuStack_40);
  }
  return uVar3;
}

