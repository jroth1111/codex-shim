
void FUN_100ae813c(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 6) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x6c63 && *(char *)((long)param_2 + 2) == 'i') {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if ((short)*param_2 == 0x636d && *(char *)((long)param_2 + 2) == 'p') {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 4) && ((int)*param_2 == 0x63657865)) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 6) {
    if ((int)*param_2 == 0x6f637376 && *(short *)((long)param_2 + 4) == 0x6564) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x74737563 && *(short *)((long)param_2 + 4) == 0x6d6f) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x6c616e7265746e69) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x746e656761627573) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

