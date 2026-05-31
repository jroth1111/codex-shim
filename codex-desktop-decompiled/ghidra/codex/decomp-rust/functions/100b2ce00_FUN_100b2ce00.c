
void FUN_100b2ce00(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 10) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x6c6f6f74 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 6;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6b736174 && *(char *)((long)param_2 + 4) == 's') {
        param_1[1] = 7;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x67676f6c && *(int *)((long)param_2 + 3) == 0x676e6967) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x6d6f7270 && *(int *)((long)param_2 + 3) == 0x7374706d) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 9) && (*param_2 == 0x656372756f736572 && (char)param_2[1] == 's')) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 10) {
    if (*param_2 == 0x6f69736e65747865 && (short)param_2[1] == 0x736e) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x6974656c706d6f63 && *(long *)((long)param_2 + 3) == 0x736e6f6974656c70) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xc) && (*param_2 == 0x656d697265707865 && (int)param_2[1] == 0x6c61746e)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 8;
  *param_1 = 0;
  return;
}

