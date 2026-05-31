
void FUN_100bb6f9c(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 8) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x696d696c && *(char *)((long)param_2 + 4) == 't') {
        param_1[1] = 3;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 6) {
      if ((int)*param_2 == 0x6e727574 && *(short *)((long)param_2 + 4) == 0x6449) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x73727563 && *(short *)((long)param_2 + 4) == 0x726f) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x6572694474726f73 && *(long *)((long)param_2 + 5) == 0x6e6f697463657269) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 8) && (*param_2 == 0x6449646165726874)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

