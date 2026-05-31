
void FUN_100f254d8(long *param_1,long param_2)

{
  long *plVar1;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
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
    lStack_c8 = *plVar1;
    *(long **)(param_2 + 8) = plVar1 + 10;
    if (lStack_c8 != -0x7ffffffffffffffa) {
      lStack_a8 = plVar1[4];
      lStack_b0 = plVar1[3];
      lStack_98 = plVar1[6];
      lStack_a0 = plVar1[5];
      lStack_88 = plVar1[8];
      lStack_90 = plVar1[7];
      lStack_80 = plVar1[9];
      lStack_b8 = plVar1[2];
      lStack_c0 = plVar1[1];
      func_0x0001012d2c90(&lStack_78,&lStack_c8);
      if (lStack_78 == 2) {
        param_1[2] = lStack_68;
        param_1[1] = lStack_70;
        param_1[4] = lStack_58;
        param_1[3] = lStack_60;
        *param_1 = 2;
      }
      else {
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
      }
      return;
    }
  }
  param_1[1] = 2;
  *param_1 = 2;
  return;
}

