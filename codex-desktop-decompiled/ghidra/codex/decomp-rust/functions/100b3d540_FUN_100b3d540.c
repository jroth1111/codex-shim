
void FUN_100b3d540(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 10) {
    if (param_3 < 7) {
      if (param_3 == 2) {
        if ((short)*param_2 == 0x6469) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
      }
      else if (param_3 == 6) {
        if ((int)*param_2 == 0x74617473 && *(short *)((long)param_2 + 4) == 0x7375) {
          param_1[1] = 5;
          *param_1 = 0;
          return;
        }
        if ((int)*param_2 == 0x69746361 && *(short *)((long)param_2 + 4) == 0x6e6f) {
          param_1[1] = 10;
          *param_1 = 0;
          return;
        }
      }
    }
    else if (param_3 == 7) {
      if ((int)*param_2 == 0x6e727574 && *(int *)((long)param_2 + 3) == 0x64695f6e) {
        param_1[1] = 2;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 9) && (*param_2 == 0x6c616e6f69746172 && (char)param_2[1] == 'e')) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 < 0xe) {
    if (param_3 == 10) {
      if (*param_2 == 0x76656c5f6b736972 && (short)param_2[1] == 0x6c65) {
        param_1[1] = 6;
        *param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 0xd) &&
            (*param_2 == 0x5f64657472617473 && *(long *)((long)param_2 + 5) == 0x736d5f74615f6465))
    {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xe) {
    if (*param_2 == 0x695f746567726174 && *(long *)((long)param_2 + 6) == 0x64695f6d6574695f) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 0xf) {
    if (*param_2 == 0x6574656c706d6f63 && *(long *)((long)param_2 + 7) == 0x736d5f74615f6465) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x6e6f697369636564 && *(long *)((long)param_2 + 7) == 0x656372756f735f6e) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x12) &&
          ((*param_2 == 0x7475615f72657375 && param_2[1] == 0x6974617a69726f68) &&
           (short)param_2[2] == 0x6e6f)) {
    param_1[1] = 7;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0xb;
  *param_1 = 0;
  return;
}

