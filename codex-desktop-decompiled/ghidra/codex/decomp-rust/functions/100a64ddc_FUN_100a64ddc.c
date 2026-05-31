
void FUN_100a64ddc(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xe) {
    if (param_3 == 8) {
      if (*param_2 == 0x726574726f707865) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 10) {
      if (*param_2 == 0x6174736563617274 && (short)param_2[1] == 0x6574) {
        *(undefined1 *)(param_1 + 1) = 6;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 0xb) &&
            (*param_2 == 0x6d6e6f7269766e65 && *(long *)((long)param_2 + 3) == 0x746e656d6e6f7269))
    {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x78655f6563617274 && *(long *)((long)param_2 + 6) == 0x726574726f707865) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x10) {
    if (*param_2 == 0x5f7363697274656d && param_2[1] == 0x726574726f707865) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0xf) {
    if (*param_2 == 0x726573755f676f6c && *(long *)((long)param_2 + 7) == 0x74706d6f72705f72) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x7474615f6e617073 && *(long *)((long)param_2 + 7) == 0x7365747562697274) {
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 7;
  *param_1 = 2;
  return;
}

