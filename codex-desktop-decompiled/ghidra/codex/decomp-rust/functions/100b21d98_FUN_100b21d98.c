
void FUN_100b21d98(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 9) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x6d697270 && *(int *)((long)param_2 + 3) == 0x7972616d) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x64657263 && *(int *)((long)param_2 + 3) == 0x73746964) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x64695f74696d696c)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x7261646e6f636573 && (char)param_2[1] == 'y') {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x7079745f6e616c70 && (char)param_2[1] == 'e') {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 10) {
    if (*param_2 == 0x616e5f74696d696c && (short)param_2[1] == 0x656d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x17) &&
          ((*param_2 == 0x6d696c5f65746172 && param_2[1] == 0x68636165725f7469) &&
           *(long *)((long)param_2 + 0xf) == 0x657079745f646568)) {
    param_1[1] = 6;
    *param_1 = 0;
    return;
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

