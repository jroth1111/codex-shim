
void FUN_100f2cf1c(long *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)param_2[1]) {
    param_1[1] = 2;
    *param_1 = 2;
    return;
  }
  *param_2 = (long)(pcVar2 + 0x20);
  param_2[2] = param_2[2] + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x10' || cVar1 == '\x12') {
    lStack_70 = 0;
  }
  else {
    if (cVar1 == '\x11') {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    func_0x00010145e600(&lStack_78,pcVar2);
    if (lStack_78 != 2) {
      param_1[5] = lStack_50;
      param_1[4] = lStack_58;
      param_1[7] = lStack_40;
      param_1[6] = lStack_48;
      param_1[9] = lStack_30;
      param_1[8] = lStack_38;
      param_1[10] = lStack_28;
      param_1[1] = lStack_70;
      *param_1 = lStack_78;
      param_1[3] = lStack_60;
      param_1[2] = lStack_68;
      return;
    }
  }
  param_1[2] = lStack_68;
  param_1[1] = lStack_70;
  param_1[4] = lStack_58;
  param_1[3] = lStack_60;
  *param_1 = 2;
  return;
}

