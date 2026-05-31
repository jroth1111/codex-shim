
void FUN_100b44eb4(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 7) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x7763 && *(char *)((long)param_2 + 2) == 'd') {
        *(undefined1 *)(param_1 + 1) = 4;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 4) && ((int)*param_2 == 0x73677261)) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x13) {
    if ((*param_2 == 0x5f68736572666572 && param_2[1] == 0x6c61767265746e69) &&
        *(long *)((long)param_2 + 0xb) == 0x736d5f6c61767265) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 10) {
    if (*param_2 == 0x5f74756f656d6974 && (short)param_2[1] == 0x736d) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 7) &&
          ((int)*param_2 == 0x6d6d6f63 && *(int *)((long)param_2 + 3) == 0x646e616d)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  return;
}

