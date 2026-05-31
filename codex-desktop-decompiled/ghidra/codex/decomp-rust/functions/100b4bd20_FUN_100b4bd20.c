
void FUN_100b4bd20(undefined1 *param_1,long *param_2,long param_3)

{
  if (param_3 < 0x10) {
    if (param_3 == 7) {
      if ((int)*param_2 == 0x65676465 && *(int *)((long)param_2 + 3) == 0x64695f65) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
      if ((int)*param_2 == 0x7373656d && *(int *)((long)param_2 + 3) == 0x65676173) {
        param_1[1] = 4;
        *param_1 = 0;
        return;
      }
    }
    else if (param_3 == 0xf) {
      if (*param_2 == 0x68745f646c696863 && *(long *)((long)param_2 + 7) == 0x64695f6461657268) {
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      if (*param_2 == 0x5f64656972726163 && *(long *)((long)param_2 + 7) == 0x64616f6c7961705f) {
        param_1[1] = 5;
        *param_1 = 0;
        return;
      }
    }
  }
  else if (param_3 == 0x10) {
    if (*param_2 == 0x745f746e65726170 && param_2[1] == 0x64695f6461657268) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0x13) &&
          ((*param_2 == 0x6f635f646c696863 && param_2[1] == 0x6e7275745f786564) &&
           *(long *)((long)param_2 + 0xb) == 0x64695f6e7275745f)) {
    param_1[1] = 2;
    *param_1 = 0;
    return;
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}

