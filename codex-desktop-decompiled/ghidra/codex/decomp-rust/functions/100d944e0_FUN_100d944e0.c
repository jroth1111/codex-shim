
void FUN_100d944e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100d75b24(param_1 + 0xe);
  __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
            ();
  if (*param_1 == 0) {
    plVar2 = (long *)param_1[1];
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
    }
  }
  else {
    plVar2 = (long *)param_1[1];
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
    }
  }
  if ((param_1[2] != 0) && (param_1[7] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100de8ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[7] + 0x18))(param_1[8]);
    return;
  }
  return;
}

