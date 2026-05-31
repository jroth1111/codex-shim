
void FUN_10260544c(long *param_1,long param_2)

{
  long *plVar1;
  long lStack_88;
  long lStack_80;
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
  
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != *(long **)(param_2 + 0x18)) {
    lStack_88 = *plVar1;
    *(long **)(param_2 + 8) = plVar1 + 9;
    if (lStack_88 != -0x7ffffffffffffffb) {
      lStack_78 = plVar1[2];
      lStack_80 = plVar1[1];
      lStack_68 = plVar1[4];
      lStack_70 = plVar1[3];
      lStack_58 = plVar1[6];
      lStack_60 = plVar1[5];
      lStack_48 = plVar1[8];
      lStack_50 = plVar1[7];
      func_0x00010261b7f8(&lStack_40,&lStack_88);
      if (lStack_40 == -0x7ffffffffffffffd) {
        *param_1 = -0x7ffffffffffffffc;
        param_1[1] = lStack_38;
        return;
      }
      param_1[1] = lStack_38;
      *param_1 = lStack_40;
      param_1[3] = lStack_28;
      param_1[2] = lStack_30;
      return;
    }
  }
  *param_1 = -0x7ffffffffffffffd;
  return;
}

