
void FUN_100bdf8b4(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0xf) {
    if (param_3 == 0xd) {
      if (*param_2 == 0x656c626174697277 && *(long *)((long)param_2 + 5) == 0x73746f6f52656c62) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x416b726f7774656e && *(long *)((long)param_2 + 5) == 0x7373656363416b72) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xe) &&
            (*param_2 == 0x796c6e4f64616572 && *(long *)((long)param_2 + 6) == 0x737365636341796c))
    {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xf) {
    if (*param_2 == 0x536564756c637865 && *(long *)((long)param_2 + 7) == 0x706d546873616c53) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x13) &&
          ((*param_2 == 0x546564756c637865 && param_2[1] == 0x766e45726964706d) &&
           *(long *)((long)param_2 + 0xb) == 0x726156766e457269)) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

