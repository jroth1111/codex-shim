
void FUN_100b1fde8(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 6) {
      if ((int)*param_2 == 0x67616d69 && *(short *)((long)param_2 + 4) == 0x7365) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x7373656d && *(int *)((long)param_2 + 3) == 0x65676173)) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x6d695f6c61636f6c && (int)param_2[1] == 0x73656761) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x65645f6567616d69 && *(long *)((long)param_2 + 5) == 0x736c69617465645f) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x656c655f74786574 && *(long *)((long)param_2 + 5) == 0x73746e656d656c65) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x13) &&
          ((*param_2 == 0x6d695f6c61636f6c && param_2[1] == 0x617465645f656761) &&
           *(long *)((long)param_2 + 0xb) == 0x736c69617465645f)) {
    param_1[1] = 4;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

