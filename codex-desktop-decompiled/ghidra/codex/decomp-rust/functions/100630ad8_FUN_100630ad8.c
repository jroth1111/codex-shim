
void FUN_100630ad8(long *param_1,long param_2)

{
  long *plVar1;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
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
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != *(long **)(param_2 + 0x18)) {
    lStack_88 = *plVar1;
    *(long **)(param_2 + 8) = plVar1 + 0xc;
    if (lStack_88 != -0x7ffffffffffffffa) {
      lStack_68 = plVar1[4];
      lStack_70 = plVar1[3];
      lStack_58 = plVar1[6];
      lStack_60 = plVar1[5];
      lStack_48 = plVar1[8];
      lStack_50 = plVar1[7];
      lStack_40 = plVar1[9];
      lStack_78 = plVar1[2];
      lStack_80 = plVar1[1];
      lStack_30 = plVar1[0xb];
      lStack_38 = plVar1[10];
      uStack_28 = 0;
      func_0x000101394de4(&lStack_e0,&lStack_88);
      if (lStack_e0 == 2) {
        param_1[2] = lStack_d0;
        param_1[1] = lStack_d8;
        param_1[4] = lStack_c0;
        param_1[3] = lStack_c8;
        *param_1 = 2;
      }
      else {
        param_1[5] = lStack_b8;
        param_1[4] = lStack_c0;
        param_1[7] = lStack_a8;
        param_1[6] = lStack_b0;
        param_1[9] = lStack_98;
        param_1[8] = lStack_a0;
        param_1[10] = lStack_90;
        param_1[1] = lStack_d8;
        *param_1 = lStack_e0;
        param_1[3] = lStack_c8;
        param_1[2] = lStack_d0;
      }
      return;
    }
  }
  param_1[1] = 3;
  *param_1 = 2;
  return;
}

