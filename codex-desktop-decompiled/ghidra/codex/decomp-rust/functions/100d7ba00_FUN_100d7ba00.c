
void FUN_100d7ba00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = 0;
    lVar3 = 1 - *(long *)(param_1 + 0x28);
    do {
      if (*(long *)(lVar1 + lVar2) != 2) {
        FUN_100d07cd4(lVar1 + lVar2 + 0x10);
      }
      lVar2 = lVar2 + 0x170;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

