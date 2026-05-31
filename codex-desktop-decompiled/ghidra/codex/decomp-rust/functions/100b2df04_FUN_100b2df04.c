
void FUN_100b2df04(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 10) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x7763 && *(char *)((long)param_2 + 2) == 'd') {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x72756f73 && *(short *)((long)param_2 + 4) == 0x6563) {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x6c6c6163 && *(int *)((long)param_2 + 3) == 0x64695f6c) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6e727574 && *(int *)((long)param_2 + 3) == 0x64695f6e) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6d6d6f63 && *(int *)((long)param_2 + 3) == 0x646e616d) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 10) {
    if (*param_2 == 0x5f737365636f7270 && (short)param_2[1] == 0x6469) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x635f646573726170 && (short)param_2[1] == 0x646d) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x5f64657472617473 && *(long *)((long)param_2 + 5) == 0x736d5f74615f6465) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x11) &&
          ((*param_2 == 0x7463617265746e69 && param_2[1] == 0x75706e695f6e6f69) &&
           (char)param_2[2] == 't')) {
    param_1[1] = 8;
    *param_1 = 0;
    return;
  }
  param_1[1] = 9;
  *param_1 = 0;
  return;
}

