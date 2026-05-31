
void FUN_103376e24(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (-1 < (char)*param_2) {
      if (plVar1[-0x3e] != 0) {
        _free(plVar1[-0x3d]);
      }
      FUN_1033adb38(plVar1 + -0x3b);
    }
    param_2 = (long *)((long)param_2 + 1);
    plVar1 = plVar1 + -0x3e;
  }
  return;
}

