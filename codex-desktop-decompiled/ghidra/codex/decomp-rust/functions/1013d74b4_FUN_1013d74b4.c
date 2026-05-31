
void FUN_1013d74b4(undefined2 *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar1 = *param_2;
  if (bVar1 != 0x10) {
    if (bVar1 == 0x11) {
      puVar7 = *(undefined8 **)(param_2 + 8);
      uStack_48 = puVar7[1];
      uStack_50 = *puVar7;
      if (((char)uStack_50 == '\x12') || (((char)uStack_50 == '\x15' && (puVar7[3] == 0)))) {
        FUN_100e077ec(&uStack_50);
        uVar4 = 0;
        *(undefined1 *)((long)param_1 + 1) = 1;
      }
      else {
        uVar3 = FUN_108855b04(&uStack_50,&stack0xffffffffffffffdf,&UNK_10b20a5c0);
        *(undefined8 *)(param_1 + 4) = uVar3;
        uVar4 = 1;
      }
      *(undefined1 *)param_1 = uVar4;
      _free(puVar7);
      return;
    }
    if (bVar1 != 0x12) {
      if ((bVar1 == 0x15) && (*(long *)(param_2 + 0x18) == 0)) {
        FUN_100e077ec(param_2);
        uVar4 = 0;
        *(undefined1 *)((long)param_1 + 1) = 1;
      }
      else {
        uVar3 = FUN_108855b04(param_2,&stack0xffffffffffffffdf,&UNK_10b20a5c0);
        *(undefined8 *)(param_1 + 4) = uVar3;
        uVar4 = 1;
      }
      *(undefined1 *)param_1 = uVar4;
      return;
    }
  }
  *param_1 = 0;
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar5 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      lVar6 = *(long *)(param_2 + 0x10);
      goto LAB_100e078f8;
    }
LAB_100e078c0:
    lVar6 = *(long *)(param_2 + 0x10);
    lVar2 = lVar6;
    for (lVar8 = *(long *)(param_2 + 0x18); lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_100e077ec(lVar2);
      FUN_100e077ec(lVar2 + 0x20);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar5 - 0xf < 2 || uVar5 == 0xd) {
        return;
      }
      if (uVar5 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar5 < 0x13) {
      if (uVar5 == 0x11) {
        lVar6 = *(long *)(param_2 + 8);
        FUN_100e077ec(lVar6);
        goto LAB_100e078f8;
      }
      if (uVar5 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar5 == 0x13) {
      lVar6 = *(long *)(param_2 + 8);
      FUN_100e077ec(lVar6);
      goto LAB_100e078f8;
    }
    if (uVar5 != 0x14) goto LAB_100e078c0;
    lVar6 = *(long *)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) + 1;
    lVar2 = lVar6;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100e077ec(lVar2);
      lVar2 = lVar2 + 0x20;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
LAB_100e078f8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar6);
  return;
}

