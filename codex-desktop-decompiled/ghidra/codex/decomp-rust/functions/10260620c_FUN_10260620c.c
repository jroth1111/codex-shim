
void FUN_10260620c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  byte bStack_30;
  undefined1 uStack_2f;
  undefined8 uStack_28;
  
  plVar2 = *(long **)(param_2 + 8);
  if (plVar2 == *(long **)(param_2 + 0x18)) {
LAB_102606248:
    uStack_2f = 7;
  }
  else {
    lStack_78 = *plVar2;
    *(long **)(param_2 + 8) = plVar2 + 9;
    if (lStack_78 == -0x7ffffffffffffffb) goto LAB_102606248;
    lStack_68 = plVar2[2];
    lStack_70 = plVar2[1];
    lStack_58 = plVar2[4];
    lStack_60 = plVar2[3];
    lStack_48 = plVar2[6];
    lStack_50 = plVar2[5];
    lStack_38 = plVar2[8];
    lStack_40 = plVar2[7];
    if (lStack_78 == -0x8000000000000000) {
      FUN_1025f6ad8(&lStack_78);
      uStack_2f = 6;
    }
    else {
      func_0x000102599b30(&bStack_30,&lStack_78);
      if ((bStack_30 & 1) != 0) {
        *(undefined8 *)(param_1 + 8) = uStack_28;
        uVar1 = 1;
        goto LAB_1026062c8;
      }
    }
  }
  uVar1 = 0;
  param_1[1] = uStack_2f;
LAB_1026062c8:
  *param_1 = uVar1;
  return;
}

