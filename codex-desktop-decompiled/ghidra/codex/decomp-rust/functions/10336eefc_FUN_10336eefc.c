
void FUN_10336eefc(long param_1,char *param_2)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_2 + -0x18);
    do {
      if (-1 < *param_2) {
        if (plVar1[-3] != 0) {
          _free(plVar1[-2]);
        }
        if (*plVar1 != 0) {
          _free(plVar1[1]);
        }
      }
      plVar1 = plVar1 + -6;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}

