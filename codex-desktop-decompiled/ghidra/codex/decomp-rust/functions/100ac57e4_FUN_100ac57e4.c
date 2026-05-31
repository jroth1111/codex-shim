
void FUN_100ac57e4(undefined1 *param_1,int *param_2,long param_3)

{
  if (param_3 < 5) {
    if (param_3 == 2) {
      if ((short)*param_2 == 0x6469) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && (*param_2 == 0x656d616e)) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 5) {
    if (*param_2 == 0x75706e69 && (char)param_2[1] == 't') {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*param_2 == 0x74617473 && (short)param_2[1] == 0x7375) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 7) && (*param_2 == 0x6c6c6163 && *(int *)((long)param_2 + 3) == 0x64695f6c))
  {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

