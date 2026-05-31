
void FUN_103d9de74(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar1 = **(long **)(param_1 + 0x158);
  **(long **)(param_1 + 0x158) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(param_1 + 0x158);
  }
  if (*(long *)(param_1 + 0x130) != -0x8000000000000000 && *(long *)(param_1 + 0x130) != 0) {
    _free(*(undefined8 *)(param_1 + 0x138));
  }
  func_0x000103d99fb4(param_1);
  uVar3 = *(ulong *)(param_1 + 0xb8);
  lVar1 = 2;
  if (1 < uVar3) {
    lVar1 = uVar3 - 2;
  }
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    puVar5 = *(undefined8 **)(param_1 + 200);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
  }
  else {
    if (lVar1 != 1) {
      if (lVar1 != 2) {
        return;
      }
      __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
                ();
      if (*(ulong *)(param_1 + 0xb8) == 0) {
        plVar2 = *(long **)(param_1 + 0xc0);
        lVar1 = *plVar2;
        *plVar2 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
        }
      }
      else {
        plVar2 = *(long **)(param_1 + 0xc0);
        lVar1 = *plVar2;
        *plVar2 = lVar1 + -1;
        LORelease();
        if (lVar1 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
        }
      }
      if ((*(long *)(param_1 + 200) != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000103dabeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0xf0) + 0x18))(*(undefined8 *)(param_1 + 0xf8));
        return;
      }
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    puVar5 = *(undefined8 **)(param_1 + 200);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
  }
  if (puVar5[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar4);
  return;
}

