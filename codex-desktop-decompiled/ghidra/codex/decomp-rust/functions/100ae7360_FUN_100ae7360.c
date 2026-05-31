
void FUN_100ae7360(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x79646f62) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 5) && ((int)*param_2 == 0x6c746974 && *(char *)((long)param_2 + 4) == 'e'))
    {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x797469726f697270) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x636f6c5f65646f63 && *(long *)((long)param_2 + 5) == 0x6e6f697461636f6c) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x10) && (*param_2 == 0x6e656469666e6f63 && param_2[1] == 0x65726f63735f6563)
          ) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

