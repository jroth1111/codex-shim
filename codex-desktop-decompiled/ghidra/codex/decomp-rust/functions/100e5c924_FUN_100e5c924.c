
void FUN_100e5c924(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x56] == '\0') {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if ((param_1[3] & 0x7fffffffffffffffU) != 0) {
      lVar1 = 0x20;
LAB_100e5c9a4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar1));
      return;
    }
  }
  else if ((char)param_1[0x56] == '\x03') {
    FUN_100d0ad80(param_1 + 0x40);
    *(undefined1 *)((long)param_1 + 0x2b1) = 0;
    FUN_100e0fd70(param_1 + 0xf);
    if (param_1[0xc] != 0) {
      _free(param_1[0xd]);
    }
    if (param_1[6] != 0) {
      lVar1 = 0x38;
      goto LAB_100e5c9a4;
    }
  }
  return;
}

