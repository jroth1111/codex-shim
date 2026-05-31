
void FUN_100f2806c(long *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  long lStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
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
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 2;
    return;
  }
  *param_2 = (long)(pcVar2 + 0x20);
  param_2[2] = param_2[2] + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x10' || cVar1 == '\x12') {
    uStack_70 = 2;
  }
  else {
    if (cVar1 == '\x11') {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    func_0x0001014619c8(&lStack_78,pcVar2);
    if (lStack_78 != 2) {
      param_1[5] = lStack_50;
      param_1[4] = lStack_58;
      param_1[7] = lStack_40;
      param_1[6] = lStack_48;
      param_1[9] = lStack_30;
      param_1[8] = lStack_38;
      param_1[10] = lStack_28;
      param_1[1] = CONCAT71(uStack_6f,uStack_70);
      *param_1 = lStack_78;
      param_1[3] = lStack_60;
      param_1[2] = lStack_68;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = uStack_70;
  *param_1 = 2;
  return;
}

