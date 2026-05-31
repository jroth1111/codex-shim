
void FUN_100b2f984(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x10) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x656c7572 && *(char *)((long)param_2 + 4) == 's') {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 0xe) &&
            (*param_2 == 0x70615f6c6c696b73 && *(long *)((long)param_2 + 6) == 0x6c61766f72707061))
    {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x13) {
    if ((*param_2 == 0x5f74736575716572 && param_2[1] == 0x697373696d726570) &&
        *(long *)((long)param_2 + 0xb) == 0x736e6f697373696d) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x10) {
    if (*param_2 == 0x5f786f62646e6173 && param_2[1] == 0x6c61766f72707061) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x63696c655f70636d && param_2[1] == 0x736e6f6974617469) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  return;
}

