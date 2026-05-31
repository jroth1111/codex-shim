
void FUN_100bb2908(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xb) {
    if (param_3 < 7) {
      if (param_3 == 3) {
        if ((short)*param_2 == 0x7763 && *(char *)((long)param_2 + 2) == 'd') {
          param_1[1] = 2;
          *param_1 = 0;
          return;
        }
        if ((short)*param_2 == 0x7474 && *(char *)((long)param_2 + 2) == 'y') {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
        if ((short)*param_2 == 0x6e65 && *(char *)((long)param_2 + 2) == 'v') {
          param_1[1] = 8;
          *param_1 = 0;
          return;
        }
      }
      else if ((param_3 == 4) && ((int)*param_2 == 0x657a6973)) {
        param_1[1] = 9;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x6d6d6f63 && *(int *)((long)param_2 + 3) == 0x646e616d) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 9) && (*param_2 == 0x4d74756f656d6974 && (char)param_2[1] == 's')) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xe) {
    if (param_3 == 0xb) {
      if (*param_2 == 0x74536d6165727473 && *(long *)((long)param_2 + 3) == 0x6e696474536d6165) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xd) &&
            (*param_2 == 0x48737365636f7270 && *(long *)((long)param_2 + 5) == 0x656c646e61487373))
    {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x794274757074756f && *(long *)((long)param_2 + 6) == 0x7061437365747942) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x12) &&
          ((*param_2 == 0x74536d6165727473 && param_2[1] == 0x6564745374756f64) &&
           (short)param_2[2] == 0x7272)) {
    param_1[1] = 5;
    *param_1 = 0;
    return;
  }
  param_1[1] = 10;
  *param_1 = 0;
  return;
}

