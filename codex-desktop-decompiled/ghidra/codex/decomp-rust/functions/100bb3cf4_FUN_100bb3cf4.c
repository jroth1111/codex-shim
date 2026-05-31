
void FUN_100bb3cf4(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x756c6176 && *(char *)((long)param_2 + 4) == 'e') {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x5079656b && *(int *)((long)param_2 + 3) == 0x68746150)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x68746150656c6966) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x727453656772656d && *(long *)((long)param_2 + 5) == 0x7967657461727453) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xf) &&
          (*param_2 == 0x6465746365707865 && *(long *)((long)param_2 + 7) == 0x6e6f697372655664)) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

