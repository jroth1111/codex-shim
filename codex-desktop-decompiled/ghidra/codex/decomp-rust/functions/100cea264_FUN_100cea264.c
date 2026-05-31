
void FUN_100cea264(long *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (char)param_1[7];
  if (cVar1 == '\0') {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if ((((char)param_1[0x19] == '\x03') && ((char)param_1[0x18] == '\x03')) &&
         ((char)param_1[0xf] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x10);
        if (param_1[0x11] != 0) {
          (**(code **)(param_1[0x11] + 0x18))(param_1[0x12]);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (param_1[8] == -0x8000000000000000 || param_1[8] == 0) {
        lVar2 = param_1[0xc];
      }
      else {
        _free(param_1[9]);
        lVar2 = param_1[0xc];
      }
      if (lVar2 != 0) {
        FUN_100d07adc(lVar2);
        _free(lVar2);
      }
      FUN_100e2c954(param_1 + 6);
    }
    if (((*(byte *)((long)param_1 + 0x39) & 1) != 0) && (param_1[8] != 0)) {
      _free(param_1[9]);
    }
    *(undefined1 *)((long)param_1 + 0x39) = 0;
  }
  return;
}

