
void FUN_100d1b1f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x03') {
    if ((((*(char *)(param_1 + 0xe0) == '\x03') && (*(char *)(param_1 + 0xd8) == '\x03')) &&
        (*(char *)(param_1 + 0xd0) == '\x03')) && (*(char *)(param_1 + 0x88) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x90);
      if (*(long *)(param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d1b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x98) + 0x18))(*(undefined8 *)(param_1 + 0xa0));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\x04') {
    if (((*(char *)(param_1 + 200) == '\x03') && (*(char *)(param_1 + 0xc0) == '\x03')) &&
       ((*(char *)(param_1 + 0xb8) == '\x03' && (*(char *)(param_1 + 0x70) == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x78);
      if (*(long *)(param_1 + 0x80) != 0) {
        (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
      }
    }
    plVar3 = *(long **)(param_1 + 0x38);
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x38);
      FUN_103391b2c(lVar1 + 0x38);
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

