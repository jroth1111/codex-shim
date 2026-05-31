
void FUN_1039fac2c(byte *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xd) {
    if (bVar1 < 0xc) {
      return;
    }
    if (uVar3 == 0xc) {
LAB_1039fac80:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x10);
      goto LAB_1039fad38;
    }
LAB_1039fad00:
    lVar4 = *(long *)(param_1 + 0x10);
    lVar2 = lVar4;
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
      FUN_1039fac2c(lVar2);
      FUN_1039fac2c(lVar2 + 0x20);
      lVar2 = lVar2 + 0x40;
    }
  }
  else {
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2 || uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_1039fac80;
      goto LAB_1039fad00;
    }
    if (uVar3 < 0x13) {
      if (uVar3 == 0x11) {
        lVar4 = *(long *)(param_1 + 8);
        FUN_1039fac2c(lVar4);
        goto LAB_1039fad38;
      }
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_1039fad00;
    }
    if (uVar3 == 0x13) {
      lVar4 = *(long *)(param_1 + 8);
      FUN_1039fac2c(lVar4);
      goto LAB_1039fad38;
    }
    if (uVar3 != 0x14) goto LAB_1039fad00;
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 0x18) + 1;
    lVar2 = lVar4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_1039fac2c(lVar2);
      lVar2 = lVar2 + 0x20;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
LAB_1039fad38:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar4);
  return;
}

