
void FUN_100bdecf8(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xe) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x74706564 && *(char *)((long)param_2 + 4) == 'h') {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 10) {
      if (*param_2 == 0x61705f746e656761 && (short)param_2[1] == 0x6874) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
      if ((*param_2 == 0x6f725f746e656761 && (short)param_2[1] == 0x656c) ||
         (*param_2 == 0x79745f746e656761 && (short)param_2[1] == 0x6570)) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x696e5f746e656761 && *(long *)((long)param_2 + 6) == 0x656d616e6b63696e) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x10) && (*param_2 == 0x745f746e65726170 && param_2[1] == 0x64695f6461657268)
          ) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

