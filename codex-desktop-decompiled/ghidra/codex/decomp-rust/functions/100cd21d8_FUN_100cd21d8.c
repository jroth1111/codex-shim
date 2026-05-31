
void FUN_100cd21d8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar1 = **(long **)(param_1 + 0x18);
    **(long **)(param_1 + 0x18) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE();
    }
    plVar3 = *(long **)(param_1 + 0x20);
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar1 + 0x38) != -0x8000000000000000 && *(long *)(lVar1 + 0x38) != 0) {
        _free(*(undefined8 *)(lVar1 + 0x40));
      }
      FUN_1032b964c(lVar1 + 0x50);
      FUN_1032b964c(lVar1 + 0x80);
      FUN_1032b0000(lVar1 + 0xb0);
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
  return;
}

