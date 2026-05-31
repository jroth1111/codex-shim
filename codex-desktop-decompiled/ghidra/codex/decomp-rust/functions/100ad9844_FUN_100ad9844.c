
void FUN_100ad9844(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x13) {
    if (param_3 == 0xc) {
      if (*param_2 == 0x6f745f7475706e69 && (int)param_2[1] == 0x736e656b) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x6f745f6c61746f74 && (int)param_2[1] == 0x736e656b) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xd) &&
            (*param_2 == 0x745f74757074756f && *(long *)((long)param_2 + 5) == 0x736e656b6f745f74))
    {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0x13) {
    if ((*param_2 == 0x695f646568636163 && param_2[1] == 0x6b6f745f7475706e) &&
        *(long *)((long)param_2 + 0xb) == 0x736e656b6f745f74) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x17) &&
          ((*param_2 == 0x6e696e6f73616572 && param_2[1] == 0x74757074756f5f67) &&
           *(long *)((long)param_2 + 0xf) == 0x736e656b6f745f74)) {
    param_1[1] = 3;
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}

