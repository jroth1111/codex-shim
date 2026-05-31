
void FUN_100bad890(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 6) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x6c6f6f74) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 5) && ((int)*param_2 == 0x74656d5f && *(char *)((long)param_2 + 4) == 'a'))
    {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if ((int)*param_2 == 0x76726573 && *(short *)((long)param_2 + 4) == 0x7265) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x746e656d75677261 && (char)param_2[1] == 's') {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 8) && (*param_2 == 0x6449646165726874)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

