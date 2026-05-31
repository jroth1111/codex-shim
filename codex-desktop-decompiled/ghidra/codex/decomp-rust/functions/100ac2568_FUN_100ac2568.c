
void FUN_100ac2568(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xb) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x6572 && *(char *)((long)param_2 + 2) == 'f') {
        *(undefined1 *)(param_1 + 1) = 4;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 6) &&
            ((int)*param_2 == 0x72756f73 && *(short *)((long)param_2 + 4) == 0x6563)) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xb) {
    if (*param_2 == 0x745f656372756f73 && *(long *)((long)param_2 + 3) == 0x657079745f656372) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xd) {
    if (*param_2 == 0x7665725f7473616c && *(long *)((long)param_2 + 5) == 0x6e6f697369766572) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xc) {
    if (*param_2 == 0x6470755f7473616c && (int)param_2[1] == 0x64657461) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x705f657372617073 && (int)param_2[1] == 0x73687461) {
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 6;
  *param_1 = 2;
  return;
}

