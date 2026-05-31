
void FUN_100d60c44(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1912) == '\0') {
    lVar1 = **(long **)(param_1 + 0x1900);
    **(long **)(param_1 + 0x1900) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(param_1 + 0x1900);
    }
    lVar1 = **(long **)(param_1 + 0x1908);
    **(long **)(param_1 + 0x1908) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x1908);
      FUN_101958f10(lVar1 + 0x38);
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar1);
          return;
        }
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1912) == '\x03') {
    FUN_100d1147c(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x1910) = 0;
  }
  return;
}

