
void FUN_100e7b998(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  FUN_100d34830(param_1 + 0x20);
  if (*param_1 == 0x16) {
    return;
  }
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar3 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x10);
      goto LAB_100e078f8;
    }
LAB_100e078c0:
    lVar4 = *(long *)(param_1 + 0x10);
    lVar2 = lVar4;
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
      FUN_100e077ec(lVar2);
      FUN_100e077ec(lVar2 + 0x20);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2 || uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar3 < 0x13) {
      if (uVar3 == 0x11) {
        lVar4 = *(long *)(param_1 + 8);
        FUN_100e077ec(lVar4);
        goto LAB_100e078f8;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar3 == 0x13) {
      lVar4 = *(long *)(param_1 + 8);
      FUN_100e077ec(lVar4);
      goto LAB_100e078f8;
    }
    if (uVar3 != 0x14) goto LAB_100e078c0;
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18) + 1;
    lVar2 = lVar4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e077ec(lVar2);
      lVar2 = lVar2 + 0x20;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
LAB_100e078f8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar4);
  return;
}

