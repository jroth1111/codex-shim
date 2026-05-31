
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_105af3ac4(lVar2 + 0x10);
  FUN_105af3814(lVar2 + 0x100);
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

