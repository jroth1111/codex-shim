
void FUN_100aeb9e4(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 10) {
    if (param_3 < 6) {
      if (param_3 == 2) {
        if ((short)*param_2 == 0x6469) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if ((param_3 == 5) &&
              ((int)*param_2 == 0x706f6373 && *(char *)((long)param_2 + 4) == 'e')) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x72756f73 && *(short *)((long)param_2 + 4) == 0x6563) {
        param_1[1] = 6;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x74617473 && *(short *)((long)param_2 + 4) == 0x7375) {
        param_1[1] = 8;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x72746e65 && *(int *)((long)param_2 + 3) == 0x73656972)) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xc) {
    if (param_3 == 10) {
      if (*param_2 == 0x616e5f746e657665 && (short)param_2[1] == 0x656d) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x5f64657472617473 && (short)param_2[1] == 0x7461) {
        param_1[1] = 10;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0xb) {
      if (*param_2 == 0x705f656372756f73 && *(long *)((long)param_2 + 3) == 0x687461705f656372) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x6e6f697461727564 && *(long *)((long)param_2 + 3) == 0x736d5f6e6f697461) {
        param_1[1] = 0xc;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x5f72656c646e6168 && (int)param_2[1] == 0x65707974) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6574656c706d6f63 && (int)param_2[1] == 0x74615f64) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x5f79616c70736964 && *(long *)((long)param_2 + 5) == 0x726564726f5f7961) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x6f69747563657865 && *(long *)((long)param_2 + 6) == 0x65646f6d5f6e6f69) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6d5f737574617473 && *(long *)((long)param_2 + 6) == 0x6567617373656d5f) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xe;
  *param_1 = 0;
  return;
}

