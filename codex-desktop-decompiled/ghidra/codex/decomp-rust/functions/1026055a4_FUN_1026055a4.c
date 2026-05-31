
void FUN_1026055a4(long *param_1,long param_2)

{
  long *plVar1;
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
    lStack_98 = *plVar1;
    *(long **)(param_2 + 8) = plVar1 + 9;
    if (lStack_98 != -0x7ffffffffffffffb) {
      lStack_88 = plVar1[2];
      lStack_90 = plVar1[1];
      lStack_78 = plVar1[4];
      lStack_80 = plVar1[3];
      lStack_68 = plVar1[6];
      lStack_70 = plVar1[5];
      lStack_58 = plVar1[8];
      lStack_60 = plVar1[7];
      func_0x000102627240(&lStack_50,&lStack_98);
      if (lStack_50 == -0x7fffffffffffffff) {
        *param_1 = -0x7ffffffffffffffe;
        param_1[1] = lStack_48;
        return;
      }
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = lStack_38;
      param_1[2] = lStack_40;
      param_1[5] = lStack_28;
      param_1[4] = lStack_30;
      return;
    }
  }
  *param_1 = -0x7fffffffffffffff;
  return;
}

