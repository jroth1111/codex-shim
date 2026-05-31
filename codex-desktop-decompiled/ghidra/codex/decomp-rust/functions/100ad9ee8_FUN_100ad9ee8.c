
void FUN_100ad9ee8(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xd) {
    if (param_3 == 5) {
      if ((int)*param_2 == 0x6c6f6f74 && *(char *)((long)param_2 + 4) == 's') {
        *(undefined1 *)(param_1 + 1) = 4;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x62616e65 && *(int *)((long)param_2 + 3) == 0x64656c62)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x5f64656c62616e65 && *(long *)((long)param_2 + 5) == 0x736c6f6f745f6465) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x64656c6261736964 && *(long *)((long)param_2 + 6) == 0x736c6f6f745f6465) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 0x1b) &&
          (((*param_2 == 0x5f746c7561666564 && param_2[1] == 0x70615f736c6f6f74) &&
           param_2[2] == 0x6d5f6c61766f7270) &&
           *(long *)((long)param_2 + 0x13) == 0x65646f6d5f6c6176)) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  return;
}

