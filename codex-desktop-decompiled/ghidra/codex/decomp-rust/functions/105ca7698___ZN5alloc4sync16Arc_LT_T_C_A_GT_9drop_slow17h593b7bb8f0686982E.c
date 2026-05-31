
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h593b7bb8f0686982E(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = **(long **)(lVar2 + 0x418);
  **(long **)(lVar2 + 0x418) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(lVar2 + 0x418);
  }
  FUN_105ca275c(lVar2 + 0x68);
  if (*(long *)(lVar2 + 0x140) != -0x8000000000000000) {
    FUN_105ca1514(lVar2 + 0x140);
  }
  lVar1 = **(long **)(lVar2 + 0x420);
  **(long **)(lVar2 + 0x420) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(lVar2 + 0x420);
  }
  lVar1 = **(long **)(lVar2 + 0x430);
  **(long **)(lVar2 + 0x430) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(lVar2 + 0x430);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    _free(*(undefined8 *)(lVar2 + 0x18));
  }
  if (lVar2 != -1) {
    lVar1 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

