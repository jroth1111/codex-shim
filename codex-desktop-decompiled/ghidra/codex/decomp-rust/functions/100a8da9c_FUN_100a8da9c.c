
void FUN_100a8da9c(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 < 4) {
      if (param_3 == 2) {
        if ((short)*param_2 == 0x6f67) {
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 3) {
        if ((short)*param_2 == 0x7270 && *(char *)((long)param_2 + 2) == 'o') {
          param_1[1] = 3;
          *param_1 = 0;
          return;
        }
        if ((short)*param_2 == 0x6465 && *(char *)((long)param_2 + 2) == 'u') {
          param_1[1] = 10;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 4) {
      if ((int)*param_2 == 0x65657266) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73756c70) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6d616574) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x6c6f7270 && *(int *)((long)param_2 + 3) == 0x6574696c)) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0x1a) {
    if (param_3 == 8) {
      if (*param_2 == 0x7373656e69737562) {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 10) && (*param_2 == 0x6972707265746e65 && (short)param_2[1] == 0x6573)) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x1a) {
    if (((*param_2 == 0x6972707265746e65 && param_2[1] == 0x755f7062635f6573) &&
        param_2[2] == 0x7361625f65676173) && (short)param_2[3] == 0x6465) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x1f) &&
          (((*param_2 == 0x7265735f666c6573 && param_2[1] == 0x6e697375625f6576) &&
           param_2[2] == 0x676173755f737365) &&
           *(long *)((long)param_2 + 0x17) == 0x64657361625f6567)) {
    param_1[1] = 6;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xb;
  *param_1 = 0;
  return;
}

