
void FUN_100f2d434(long *param_1,long param_2)

{
  long *plVar1;
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
    lStack_80 = *plVar1;
    *(long **)(param_2 + 8) = plVar1 + 9;
    if (lStack_80 != -0x7ffffffffffffffb) {
      lStack_70 = plVar1[2];
      lStack_78 = plVar1[1];
      lStack_60 = plVar1[4];
      lStack_68 = plVar1[3];
      lStack_50 = plVar1[6];
      lStack_58 = plVar1[5];
      lStack_40 = plVar1[8];
      lStack_48 = plVar1[7];
      FUN_1006739a0(&lStack_38,&lStack_80);
      if (lStack_38 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lStack_30;
      }
      else {
        param_1[1] = lStack_30;
        *param_1 = lStack_38;
        param_1[2] = lStack_28;
      }
      return;
    }
  }
  *param_1 = -0x8000000000000000;
  return;
}

