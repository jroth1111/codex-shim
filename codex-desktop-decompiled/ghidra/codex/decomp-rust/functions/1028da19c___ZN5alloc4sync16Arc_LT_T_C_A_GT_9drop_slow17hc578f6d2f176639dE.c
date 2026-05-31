
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc578f6d2f176639dE(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar4 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar1 + (uVar4 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (lVar1 != -1) {
    lVar3 = *(long *)(lVar1 + 8);
    *(long *)(lVar1 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      if (uVar4 < 9) {
        uVar4 = 8;
      }
      if ((uVar4 + puVar2[1] + 0xf & -uVar4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar1);
        return;
      }
    }
  }
  return;
}

