
void FUN_103301d68(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[1];
  if (param_1[3] - (long)puVar3 != 0) {
    lVar2 = 1 - ((ulong)(param_1[3] - (long)puVar3) >> 4);
    do {
      lVar1 = *(long *)*puVar3;
      *(long *)*puVar3 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar3);
      }
      puVar3 = puVar3 + 2;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1);
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

