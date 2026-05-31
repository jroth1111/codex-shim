
void FUN_100b1d218(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x6573 && *(char *)((long)param_2 + 2) == 't') {
        *(undefined1 *)(param_1 + 1) = 3;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x65686e69 && *(int *)((long)param_2 + 3) == 0x74697265) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return;
      }
      if ((int)*param_2 == 0x6c637865 && *(int *)((long)param_2 + 3) == 0x6564756c) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x5f6564756c636e69 && (int)param_2[1] == 0x796c6e6f) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x17) {
    if ((*param_2 == 0x645f65726f6e6769 && param_2[1] == 0x655f746c75616665) &&
        *(long *)((long)param_2 + 0xf) == 0x736564756c637865) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 0x18) &&
          ((*param_2 == 0x656d697265707865 && param_2[1] == 0x6573755f6c61746e) &&
           param_2[2] == 0x656c69666f72705f)) {
    *(undefined1 *)(param_1 + 1) = 5;
    *param_1 = 2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 6;
  *param_1 = 2;
  return;
}

