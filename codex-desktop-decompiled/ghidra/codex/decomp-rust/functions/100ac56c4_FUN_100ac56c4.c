
void FUN_100ac56c4(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 == 2) {
      if ((short)*param_2 == 0x6469) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && ((int)*param_2 == 0x656d616e)) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((int)*param_2 == 0x6c6c6163 && *(int *)((long)param_2 + 3) == 0x64695f6c) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x63617073656d616e && (char)param_2[1] == 'e') {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x746e656d75677261 && (char)param_2[1] == 's') {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

