
void FUN_100caad84(long *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)((long)param_1 + 0x41);
  if (cVar1 == '\0') {
    if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
      if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) {
LAB_100caae54:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(param_1[4]);
        return;
      }
    }
    else {
      _free(param_1[1]);
      if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) goto LAB_100caae54;
    }
  }
  else {
    if (cVar1 == '\x03') {
      func_0x000100d2db44(param_1 + 0x40);
      if (param_1[0x23] == -0x8000000000000000 || param_1[0x23] == 0) {
        lVar2 = param_1[0x26];
      }
      else {
        _free(param_1[0x24]);
        lVar2 = param_1[0x26];
      }
      if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
        _free(param_1[0x27]);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (((char)param_1[0x14] == '\x03') && ((char)param_1[0x13] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xb);
        if (param_1[0xc] != 0) {
          (**(code **)(param_1[0xc] + 0x18))(param_1[0xd]);
        }
      }
    }
    *(undefined2 *)((long)param_1 + 0x43) = 0;
  }
  return;
}

