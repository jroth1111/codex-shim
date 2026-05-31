
void FUN_100b22690(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x6e727574 && *(int *)((long)param_2 + 3) == 0x64695f6e) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xb) &&
            (*param_2 == 0x6e6f697461727564 && *(long *)((long)param_2 + 3) == 0x736d5f6e6f697461))
    {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x6574656c706d6f63 && (int)param_2[1] == 0x74615f64) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x12) {
    if ((*param_2 == 0x6567615f7473616c && param_2[1] == 0x617373656d5f746e) &&
        (short)param_2[2] == 0x6567) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x16) &&
          ((*param_2 == 0x5f6f745f656d6974 && param_2[1] == 0x6f745f7473726966) &&
           *(long *)((long)param_2 + 0xe) == 0x736d5f6e656b6f74)) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

