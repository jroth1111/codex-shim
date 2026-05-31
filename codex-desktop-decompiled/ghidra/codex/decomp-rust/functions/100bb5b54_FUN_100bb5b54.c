
void FUN_100bb5b54(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xb) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x73676174) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x73616572 && *(short *)((long)param_2 + 4) == 0x6e6f) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 8) && (*param_2 == 0x6449646165726874)) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x4c6564756c636e69 && *(long *)((long)param_2 + 3) == 0x73676f4c6564756c) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x676f4c6172747865 && *(long *)((long)param_2 + 5) == 0x73656c6946676f4c) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xe) &&
          (*param_2 == 0x6966697373616c63 && *(long *)((long)param_2 + 6) == 0x6e6f697461636966)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

