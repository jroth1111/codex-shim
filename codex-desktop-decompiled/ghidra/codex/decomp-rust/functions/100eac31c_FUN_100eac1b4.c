
bool FUN_100eac1b4(char *param_1)

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
LAB_100eac26c:
        do {
          lVar6 = lStack_50;
          if (uStack_30._1_1_ == '\x02') {
            if (bVar2) {
              if (lStack_58 - lStack_60 == 0) goto LAB_100eac2c0;
              uStack_30 = (undefined **)uStack_48;
              lVar6 = uStack_48 + ((ulong)(lStack_58 - lStack_60) >> 6);
              puVar3 = &UNK_10b23a190;
              plVar5 = &uStack_30;
              goto LAB_100eac2dc;
            }
            pcVar4 = s_missing_field_____108ac28f7;
LAB_100eac324:
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
LAB_100eac330:
              lStack_50 = 0;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_100eac348:
              pcVar4 = s_duplicate_field_____108ac2973;
              goto LAB_100eac324;
            }
            FUN_100f23ae4(&uStack_30,&lStack_60);
            puVar3 = puStack_28;
            if (((ulong)uStack_30 & 1) != 0) break;
            goto LAB_100eac26c;
          }
          if (bVar2) goto LAB_100eac348;
          lStack_50 = 0;
          if (lVar6 == 0) goto LAB_100eac330;
          puVar3 = (undefined *)FUN_10124ded4();
          if (puVar3 != (undefined *)0x0) break;
          bVar2 = true;
          FUN_100f23ae4(&uStack_30,&lStack_60);
          puVar3 = puStack_28;
        } while (((ulong)uStack_30 & 1) == 0);
      }
    }
    else {
      puVar3 = (undefined *)FUN_108855c40(param_1,&lStack_60,&UNK_10b213b28);
    }
    goto LAB_100eac2e4;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    plVar5 = (long *)&UNK_10b22e858;
    puVar3 = &UNK_10b20a590;
    lVar6 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_10124ded4(*(undefined8 *)(param_1 + 0x10));
    if (puVar3 != (undefined *)0x0) goto LAB_100eac2e4;
    uVar1 = lVar6 - 1;
    if (uVar1 == 0) {
LAB_100eac2c0:
      puVar3 = (undefined *)0;
      goto LAB_100eac2e4;
    }
    lStack_60 = 1;
    puVar3 = &UNK_10b23a1b0;
    lVar6 = (uVar1 & 0x7ffffffffffffff) + 1;
  }
LAB_100eac2dc:
  puVar3 = (undefined *)FUN_1087e422c(lVar6,plVar5,puVar3);
LAB_100eac2e4:
  return puVar3 != (undefined *)0x0;
}

