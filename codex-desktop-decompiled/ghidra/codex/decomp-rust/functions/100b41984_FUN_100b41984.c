
void FUN_100b41984(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x65707974) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 5) && ((int)*param_2 == 0x6c746974 && *(char *)((long)param_2 + 4) == 'e'))
    {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if ((int)*param_2 == 0x696e696d && *(int *)((long)param_2 + 3) == 0x6d756d69) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x6978616d && *(int *)((long)param_2 + 3) == 0x6d756d69) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xb) &&
          (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263)) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

