
void FUN_100b25c6c(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x10) {
    if (param_3 == 6) {
      if ((int)*param_2 == 0x74617473 && *(short *)((long)param_2 + 4) == 0x7375) {
        param_1[1] = 6;
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
    }
    else if ((param_3 == 0xf) &&
            (*param_2 == 0x6574656c706d6f63 && *(long *)((long)param_2 + 7) == 0x736d5f74615f6465))
    {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x13) {
    if (param_3 == 0x10) {
      if (*param_2 == 0x745f7265646e6573 && param_2[1] == 0x64695f6461657268) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0x12) &&
            ((*param_2 == 0x7265766965636572 && param_2[1] == 0x5f6461657268745f) &&
             (short)param_2[2] == 0x6469)) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x13) {
    if ((*param_2 == 0x7265766965636572 && param_2[1] == 0x725f746e6567615f) &&
        *(long *)((long)param_2 + 0xb) == 0x656c6f725f746e65) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x17) &&
          ((*param_2 == 0x7265766965636572 && param_2[1] == 0x6e5f746e6567615f) &&
           *(long *)((long)param_2 + 0xf) == 0x656d616e6b63696e)) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

