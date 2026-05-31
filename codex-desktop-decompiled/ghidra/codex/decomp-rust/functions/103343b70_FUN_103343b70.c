
void FUN_103343b70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)param_1[1];
    if (param_1[3] - (long)puVar4 != 0) {
      lVar3 = 1 - ((ulong)(param_1[3] - (long)puVar4) >> 4);
      do {
        lVar1 = *(long *)*puVar4;
        *(long *)*puVar4 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar4);
        }
        puVar4 = puVar4 + 2;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1);
    }
    if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

