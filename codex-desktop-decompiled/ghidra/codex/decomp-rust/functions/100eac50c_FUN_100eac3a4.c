
bool FUN_100eac3a4(char *param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  plVar5 = &lStack_60;
  if (*param_1 != '\x14') {
    if (*param_1 == '\x15') {
      lStack_60 = *(long *)(param_1 + 0x10);
      lStack_58 = lStack_60 + *(long *)(param_1 + 0x18) * 0x40;
      lStack_50 = 0;
      uStack_48 = 0;
      FUN_100f23ae4(&uStack_30,&lStack_60);
      puVar3 = puStack_28;
      if (((ulong)uStack_30 & 1) == 0) {
        bVar2 = false;
LAB_100eac45c:
        do {
          lVar6 = lStack_50;
          if (uStack_30._1_1_ == '\x02') {
            if (bVar2) {
              if (lStack_58 - lStack_60 == 0) goto LAB_100eac4b0;
              uStack_30 = (undefined **)uStack_48;
              lVar6 = uStack_48 + ((ulong)(lStack_58 - lStack_60) >> 6);
              puVar3 = &UNK_10b23a190;
              plVar5 = &uStack_30;
              goto LAB_100eac4cc;
            }
            pcVar4 = s_missing_field_____108ac28f7;
LAB_100eac514:
            uStack_30 = &puStack_40;
            puStack_28 = &DAT_100c7b3a0;
            uStack_38 = 6;
            puStack_40 = &UNK_108cb495d;
            puVar3 = (undefined *)FUN_108856088(pcVar4,&uStack_30);
            break;
          }
          if (((ulong)uStack_30 & 0x100) != 0) {
            lStack_50 = 0;
            if (lVar6 == 0) {
LAB_100eac520:
              lStack_50 = 0;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_100eac538:
              pcVar4 = s_duplicate_field_____108ac2973;
              goto LAB_100eac514;
            }
            FUN_100f23ae4(&uStack_30,&lStack_60);
            puVar3 = puStack_28;
            if (((ulong)uStack_30 & 1) != 0) break;
            goto LAB_100eac45c;
          }
          if (bVar2) goto LAB_100eac538;
          lStack_50 = 0;
          if (lVar6 == 0) goto LAB_100eac520;
          puVar3 = (undefined *)FUN_1013d1cb4();
          if (puVar3 != (undefined *)0x0) break;
          bVar2 = true;
          FUN_100f23ae4(&uStack_30,&lStack_60);
          puVar3 = puStack_28;
        } while (((ulong)uStack_30 & 1) == 0);
      }
    }
    else {
      puVar3 = (undefined *)FUN_108855c40(param_1,&lStack_60,&UNK_10b213ac8);
    }
    goto LAB_100eac4d4;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    plVar5 = (long *)&UNK_10b22e858;
    puVar3 = &UNK_10b20a590;
    lVar6 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_1013d1cb4(*(undefined8 *)(param_1 + 0x10));
    if (puVar3 != (undefined *)0x0) goto LAB_100eac4d4;
    uVar1 = lVar6 - 1;
    if (uVar1 == 0) {
LAB_100eac4b0:
      puVar3 = (undefined *)0;
      goto LAB_100eac4d4;
    }
    lStack_60 = 1;
    puVar3 = &UNK_10b23a1b0;
    lVar6 = (uVar1 & 0x7ffffffffffffff) + 1;
  }
LAB_100eac4cc:
  puVar3 = (undefined *)FUN_1087e422c(lVar6,plVar5,puVar3);
LAB_100eac4d4:
  return puVar3 != (undefined *)0x0;
}

