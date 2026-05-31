
void FUN_100bdd764(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 9) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x63696f76 && *(char *)((long)param_2 + 4) == 'e') {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x6d6f7270 && *(short *)((long)param_2 + 4) == 0x7470) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x6449646165726874)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x726f70736e617274 && (char)param_2[1] == 't') {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x6f4d74757074756f && *(long *)((long)param_2 + 6) == 0x7974696c61646f4d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x11) &&
          ((*param_2 == 0x656d69746c616572 && param_2[1] == 0x496e6f6973736553) &&
           (char)param_2[2] == 'd')) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

