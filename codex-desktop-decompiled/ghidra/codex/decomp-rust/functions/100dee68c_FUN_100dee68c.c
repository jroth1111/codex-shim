
void FUN_100dee68c(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x3f);
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      lVar2 = *param_1;
      goto joined_r0x000100dee824;
    }
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return;
      }
      func_0x000100df0898(param_1 + 0x40);
      goto LAB_100dee7f4;
    }
    if ((((char)param_1[0x50] == '\x03') && ((char)param_1[0x4f] == '\x03')) &&
       (((char)param_1[0x4e] == '\x03' && ((char)param_1[0x45] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x46);
      if (param_1[0x47] != 0) {
        (**(code **)(param_1[0x47] + 0x18))(param_1[0x48]);
      }
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_100cfcde4(param_1 + 0x40);
      lVar2 = param_1[0x32];
    }
    else {
      if (bVar1 == 6) {
        if (((((char)param_1[0x50] == '\x03') && ((char)param_1[0x4f] == '\x03')) &&
            ((char)param_1[0x4e] == '\x03')) && ((char)param_1[0x45] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x46);
          if (param_1[0x47] != 0) {
            (**(code **)(param_1[0x47] + 0x18))(param_1[0x48]);
          }
        }
      }
      else {
        if (bVar1 != 7) {
          return;
        }
        func_0x000100df0898(param_1 + 0x40);
      }
      *(undefined1 *)((long)param_1 + 0x1f9) = 0;
      lVar2 = param_1[0x32];
    }
    if (lVar2 == -0x7ffffffffffffffa) {
      if (param_1[0x33] != 0) {
        _free(param_1[0x34]);
      }
    }
    else {
      FUN_100ded628(param_1 + 0x32);
    }
LAB_100dee7f4:
    *(undefined1 *)((long)param_1 + 0x1fa) = 0;
    lVar2 = *(long *)param_1[0x22];
    *(long *)param_1[0x22] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E(param_1 + 0x22);
    }
  }
  param_1 = param_1 + 0x16;
  lVar2 = *param_1;
joined_r0x000100dee824:
  if (lVar2 != -0x7fffffffffffffff) {
    if (lVar2 != -0x8000000000000000) {
      lVar2 = param_1[4];
      if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
        _free(param_1[3] + lVar2 * -8 + -8);
      }
      func_0x000100cd7284(param_1);
    }
    if ((param_1[9] != -0x8000000000000000) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[10]);
      return;
    }
  }
  return;
}

