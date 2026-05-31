
void FUN_100ae8910(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x656d616e) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 5) {
      if ((int)*param_2 == 0x6c746974 && *(char *)((long)param_2 + 4) == 'e') {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6e6f6369 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x65707954656d696d) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x6c706d6554697275 && *(long *)((long)param_2 + 3) == 0x6574616c706d6554) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

