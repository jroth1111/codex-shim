
void FUN_100b42834(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xb) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x656d616e) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 9) && (*param_2 == 0x63617073656d616e && (char)param_2[1] == 'e')) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x7470697263736564 && *(long *)((long)param_2 + 3) == 0x6e6f697470697263) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6863537475706e69 && *(long *)((long)param_2 + 3) == 0x616d656863537475) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x616f4c7265666564 && (int)param_2[1] == 0x676e6964) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xf) &&
          (*param_2 == 0x6f5465736f707865 && *(long *)((long)param_2 + 7) == 0x747865746e6f436f)) {
    param_1[1] = 5;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

