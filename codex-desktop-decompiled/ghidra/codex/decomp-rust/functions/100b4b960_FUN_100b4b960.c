
void FUN_100b4b960(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x646e696b) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x6d6d7573 && *(int *)((long)param_2 + 3) == 0x7972616d) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 9) && (*param_2 == 0x6574736575716572 && (char)param_2[1] == 'r')) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x15) {
    if (param_3 == 0xc) {
      if (*param_2 == 0x6c61635f6c6f6f74 && (int)param_2[1] == 0x64695f6c) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x12) &&
            ((*param_2 == 0x697461636f766e69 && param_2[1] == 0x6f6c7961705f6e6f) &&
             (short)param_2[2] == 0x6461)) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x15) {
    if ((*param_2 == 0x69765f6c65646f6d && param_2[1] == 0x61635f656c626973) &&
        *(long *)((long)param_2 + 0xd) == 0x64695f6c6c61635f) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x19) &&
          (((*param_2 == 0x646f6d5f65646f63 && param_2[1] == 0x6d69746e75725f65) &&
           param_2[2] == 0x695f6c6f6f745f65) && (char)param_2[3] == 'd')) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

