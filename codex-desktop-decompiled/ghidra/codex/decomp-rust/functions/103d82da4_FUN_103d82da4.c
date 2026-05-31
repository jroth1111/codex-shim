
undefined8 FUN_103d82da4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  plVar6 = (long *)*param_1;
  uVar4 = *param_2;
  lVar1 = param_2[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4,&UNK_108dc61ab,10);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_2 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&UNK_108f5892f,2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uStack_59 = 1;
      puStack_68 = &uStack_59;
      uStack_48 = param_2[2];
      puStack_58 = &uStack_78;
      puStack_50 = &UNK_10b392408;
      uStack_78 = uVar4;
      lStack_70 = lVar1;
      iVar2 = (**(code **)(plVar6[1] + 0x18))
                        (*plVar6 + (*(long *)(plVar6[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         &puStack_58);
      if ((iVar2 == 0) &&
         (uVar3 = (**(code **)(puStack_50 + 0x18))(puStack_58,&UNK_108f5892c,2), (uVar3 & 1) == 0))
      goto LAB_103d82edc;
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&UNK_108f5892e,1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = (**(code **)(plVar6[1] + 0x18))
                        (*plVar6 + (*(long *)(plVar6[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         param_2);
      if ((uVar3 & 1) == 0) {
        uVar4 = *param_2;
        pcVar5 = *(code **)(param_2[1] + 0x18);
LAB_103d82edc:
        uVar4 = (*pcVar5)(uVar4,&UNK_108f58934,1);
        return uVar4;
      }
    }
  }
  return 1;
}

