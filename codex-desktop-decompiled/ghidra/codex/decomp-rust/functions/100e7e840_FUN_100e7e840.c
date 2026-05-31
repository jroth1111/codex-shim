
void FUN_100e7e840(long *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x34);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      if (param_1[3] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[4]);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    func_0x000100cea264(param_1 + 0x35);
  }
  else {
    if (bVar1 == 4) {
      if (((((char)param_1[0x45] == '\x03') && ((char)param_1[0x44] == '\x03')) &&
          ((char)param_1[0x43] == '\x03')) && ((char)param_1[0x3a] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x3b);
        if (param_1[0x3c] != 0) {
          (**(code **)(param_1[0x3c] + 0x18))(param_1[0x3d]);
        }
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      if (*(char *)((long)param_1 + 0xbe6) == '\x03') {
        FUN_100d28c3c(param_1 + 0x3c);
        *(undefined2 *)((long)param_1 + 0xbe7) = 0;
      }
      else if (*(char *)((long)param_1 + 0xbe6) == '\0') {
        if (param_1[0x35] != 0) {
          _free(param_1[0x36]);
        }
        if (param_1[0x38] != 0) {
          _free(param_1[0x39]);
        }
      }
    }
    FUN_100df5738(param_1 + 0x21);
  }
  *(undefined1 *)((long)param_1 + 0x1a2) = 0;
  if (((*(byte *)((long)param_1 + 0x1a1) & 1) != 0) && (param_1[8] != 0)) {
    _free(param_1[9]);
  }
  *(undefined1 *)((long)param_1 + 0x1a1) = 0;
  return;
}

