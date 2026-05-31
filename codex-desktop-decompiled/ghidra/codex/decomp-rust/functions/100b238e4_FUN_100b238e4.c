
void FUN_100b238e4(undefined1 *param_1,int *param_2,long param_3)

{
  if (param_3 == 6) {
    if (*param_2 == 0x6f647473 && (short)param_2[1] == 0x7475) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x65647473 && (short)param_2[1] == 0x7272) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x74617473 && (short)param_2[1] == 0x7375) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 7) {
    if (*param_2 == 0x6c6c6163 && *(int *)((long)param_2 + 3) == 0x64695f6c) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6e727574 && *(int *)((long)param_2 + 3) == 0x64695f6e) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x63637573 && *(int *)((long)param_2 + 3) == 0x73736563) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6e616863 && *(int *)((long)param_2 + 3) == 0x7365676e) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

