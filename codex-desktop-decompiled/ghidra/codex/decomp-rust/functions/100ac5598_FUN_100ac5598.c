
void FUN_100ac5598(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 == 2) {
      if ((short)*param_2 == 0x6469) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x74617473 && *(short *)((long)param_2 + 4) == 0x7375)) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((int)*param_2 == 0x6c6c6163 && *(int *)((long)param_2 + 3) == 0x64695f6c) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x6f69747563657865 && (char)param_2[1] == 'n') {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x746e656d75677261 && (char)param_2[1] == 's') {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

