
void FUN_10336fdc8(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (-1 < (char)*param_2) {
      if (plVar1[-0xc] != 0) {
        _free(plVar1[-0xb]);
      }
      func_0x000103382b94(plVar1 + -9);
    }
    param_2 = (long *)((long)param_2 + 1);
    plVar1 = plVar1 + -0xc;
  }
  return;
}

