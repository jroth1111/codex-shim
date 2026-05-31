
void FUN_100baa718(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x6b6f6f68 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x67756c70 && *(int *)((long)param_2 + 3) == 0x736e6967)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x736e6f6973736573) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x73646e616d6d6f63) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x746e656761627573 && (char)param_2[1] == 's') {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 10) && (*param_2 == 0x657672655370636d && (short)param_2[1] == 0x7372)) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

