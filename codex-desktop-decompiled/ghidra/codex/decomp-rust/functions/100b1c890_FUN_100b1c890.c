
void FUN_100b1c890(undefined8 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xc) {
    if (param_3 == 4) {
      if ((int)*param_2 == 0x706f7453) {
        *(undefined1 *)(param_1 + 1) = 9;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 10) {
      if (*param_2 == 0x556c6f6f54657250 && (short)param_2[1] == 0x6573) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x61706d6f43657250 && (short)param_2[1] == 0x7463) {
        *(undefined1 *)(param_1 + 1) = 3;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 0xb) {
      if (*param_2 == 0x6c6f6f5474736f50 && *(long *)((long)param_2 + 3) == 0x6573556c6f6f5474) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x706d6f4374736f50 && *(long *)((long)param_2 + 3) == 0x746361706d6f4374) {
        *(undefined1 *)(param_1 + 1) = 4;
        *param_1 = 2;
        return;
      }
    }
  }
  else if (param_3 < 0x10) {
    if (param_3 == 0xc) {
      if (*param_2 == 0x536e6f6973736553 && (int)param_2[1] == 0x74726174) {
        *(undefined1 *)(param_1 + 1) = 5;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x746e656761627553 && (int)param_2[1] == 0x706f7453) {
        *(undefined1 *)(param_1 + 1) = 8;
        *param_1 = 2;
        return;
      }
    }
    else if ((param_3 == 0xd) &&
            (*param_2 == 0x746e656761627553 && *(long *)((long)param_2 + 5) == 0x7472617453746e65))
    {
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 0x10) {
    if (*param_2 == 0x6d6f725072657355 && param_2[1] == 0x74696d6275537470) {
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
  }
  else if ((param_3 == 0x11) &&
          ((*param_2 == 0x697373696d726550 && param_2[1] == 0x7365757165526e6f) &&
           (char)param_2[2] == 't')) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 10;
  *param_1 = 2;
  return;
}

