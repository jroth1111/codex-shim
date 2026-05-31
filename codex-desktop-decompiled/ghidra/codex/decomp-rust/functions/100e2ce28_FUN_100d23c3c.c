
void FUN_100d23c3c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x600) != '\0') {
    if (*(char *)(param_1 + 0x600) == '\x03') {
      FUN_100cfa320(param_1 + 0x4e8);
      *(undefined1 *)(param_1 + 0x609) = 0;
      *(undefined8 *)(param_1 + 0x601) = 0;
      lVar1 = **(long **)(param_1 + 0x448);
      **(long **)(param_1 + 0x448) = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(param_1 + 0x448);
      }
      *(undefined2 *)(param_1 + 0x60a) = 0;
    }
    return;
  }
  if ((*(ulong *)(param_1 + 0x78) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  FUN_100e44f40(param_1 + 0x98);
  lVar1 = **(long **)(param_1 + 0x260);
  **(long **)(param_1 + 0x260) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(param_1 + 0x260);
  }
  if ((*(ulong *)(param_1 + 0x28) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_100dddd8c(param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != -0x7fffffffffffffff) {
    if (lVar1 == -0x8000000000000000 || lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x60);
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x50));
      lVar1 = *(long *)(param_1 + 0x60);
    }
    if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x68));
      return;
    }
  }
  return;
}

