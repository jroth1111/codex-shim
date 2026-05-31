
void FUN_1039cd3e4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _free(*(undefined8 *)(param_1 + 0x20));
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  lVar1 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

