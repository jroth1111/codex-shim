
void FUN_100d02b68(long *param_1)

{
  long *plVar1;
  
  if ((char)param_1[0x17] == '\0') {
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  else if ((char)param_1[0x17] == '\x03') {
    if (*(char *)((long)param_1 + 0xb1) == '\x03') {
      if ((char)param_1[0x15] == '\x03') {
        plVar1 = (long *)param_1[0x14];
        if (*plVar1 == 0xcc) {
          *plVar1 = 0x84;
        }
        else {
          (**(code **)(plVar1[2] + 0x20))();
        }
      }
      else if ((char)param_1[0x15] == '\0') {
        if (param_1[0xd] != 0) {
          _free(param_1[0xe]);
        }
        if (param_1[0x10] == 0) {
          if (param_1[0x11] != 0) {
            _free(param_1[0x12]);
          }
        }
        else {
          (**(code **)(param_1[0x10] + 0x20))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
        }
      }
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    else if (*(char *)((long)param_1 + 0xb1) == '\0') {
      if (param_1[7] == 0) {
        if (param_1[8] != 0) {
          _free(param_1[9]);
        }
      }
      else {
        (**(code **)(param_1[7] + 0x20))(param_1 + 10,param_1[8],param_1[9]);
      }
    }
    *(undefined1 *)((long)param_1 + 0xb9) = 0;
  }
  return;
}

