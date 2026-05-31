
void FUN_103366860(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if ((-1 < (char)*param_2) && (plVar1[-3] != 0)) {
      _free(plVar1[-2]);
    }
    param_2 = (long *)((long)param_2 + 1);
    plVar1 = plVar1 + -3;
  }
  return;
}

