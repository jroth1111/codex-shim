
void FUN_1039cd5c0(ulong *param_1,long param_2)

{
  ulong uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_1 ^ 0x8000000000000000;
    if (-1 < (long)*param_1) {
      uVar1 = 6;
    }
    if (3 < uVar1 - 1) {
      if (uVar1 == 0) {
        if (param_1[1] != 0) {
          _free(param_1[2]);
        }
      }
      else if (uVar1 == 5) {
        func_0x0001039cdae4(param_1 + 1);
      }
      else {
        func_0x0001039ce988(param_1);
      }
    }
    param_1 = param_1 + 10;
  }
  return;
}

