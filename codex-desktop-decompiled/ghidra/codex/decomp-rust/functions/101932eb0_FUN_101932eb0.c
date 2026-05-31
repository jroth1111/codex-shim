
void FUN_101932eb0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)((long)param_1 + 0x5a);
  if (bVar1 < 5) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x1b) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x1a) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x19) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x18) != '\x03') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x10);
      if (param_1[0x11] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010193304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
      return;
    }
    if (bVar1 != 4) {
      return;
    }
    if ((((*(char *)(param_1 + 0x21) == '\x03') && (*(char *)(param_1 + 0x20) == '\x03')) &&
        (*(char *)(param_1 + 0x1f) == '\x03')) && (*(char *)(param_1 + 0x1e) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x16);
      if (param_1[0x17] != 0) {
        (**(code **)(param_1[0x17] + 0x18))(param_1[0x18]);
      }
    }
  }
  else {
    if (bVar1 == 5) {
      if (((*(char *)(param_1 + 0x20) == '\x03') && (*(char *)(param_1 + 0x1f) == '\x03')) &&
         ((*(char *)(param_1 + 0x1e) == '\x03' &&
          ((*(char *)(param_1 + 0x1d) == '\x03' && (*(char *)(param_1 + 0x14) == '\x04')))))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x15);
        if (param_1[0x16] != 0) {
          (**(code **)(param_1[0x16] + 0x18))(param_1[0x17]);
        }
      }
    }
    else if (bVar1 == 6) {
      func_0x00010192f6bc(param_1 + 0xc);
    }
    else {
      if (bVar1 != 7) {
        return;
      }
      func_0x00010196ae78(param_1 + 0xc);
    }
    *(undefined1 *)((long)param_1 + 0x59) = 0;
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      lVar2 = *(long *)param_1[8];
      *(long *)param_1[8] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
    }
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*param_1);
  return;
}

