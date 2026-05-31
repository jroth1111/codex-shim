
void thunk_FUN_1087fd9d4(undefined1 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = func_0x000108a4a50c(&stack0xffffffffffffffc8,param_2,&UNK_10b21ab70);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 4;
  bVar1 = *param_3;
  uVar4 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar4 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_3 + 8) == 0) {
        return;
      }
      lVar5 = *(long *)(param_3 + 0x10);
      goto LAB_100e078f8;
    }
LAB_100e078c0:
    lVar5 = *(long *)(param_3 + 0x10);
    lVar2 = lVar5;
    for (lVar6 = *(long *)(param_3 + 0x18); lVar6 != 0; lVar6 = lVar6 + -1) {
      FUN_100e077ec(lVar2);
      FUN_100e077ec(lVar2 + 0x20);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar4 - 0xf < 2 || uVar4 == 0xd) {
        return;
      }
      if (uVar4 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar4 < 0x13) {
      if (uVar4 == 0x11) {
        lVar5 = *(long *)(param_3 + 8);
        FUN_100e077ec(lVar5);
        goto LAB_100e078f8;
      }
      if (uVar4 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar4 == 0x13) {
      lVar5 = *(long *)(param_3 + 8);
      FUN_100e077ec(lVar5);
      goto LAB_100e078f8;
    }
    if (uVar4 != 0x14) goto LAB_100e078c0;
    lVar5 = *(long *)(param_3 + 0x10);
    lVar6 = *(long *)(param_3 + 0x18) + 1;
    lVar2 = lVar5;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_100e077ec(lVar2);
      lVar2 = lVar2 + 0x20;
    }
  }
  if (*(long *)(param_3 + 8) == 0) {
    return;
  }
LAB_100e078f8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar5);
  return;
}

