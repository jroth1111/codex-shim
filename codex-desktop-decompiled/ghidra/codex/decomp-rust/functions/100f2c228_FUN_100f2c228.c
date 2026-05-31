
void FUN_100f2c228(undefined2 *param_1,long param_2)

{
  bool bVar1;
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
  if (plVar2 != *(long **)(param_2 + 0x18)) {
    lStack_78 = *plVar2;
    *(long **)(param_2 + 8) = plVar2 + 9;
    if (lStack_78 != -0x7ffffffffffffffb) {
      lStack_68 = plVar2[2];
      lStack_70 = plVar2[1];
      lStack_58 = plVar2[4];
      lStack_60 = plVar2[3];
      lStack_48 = plVar2[6];
      lStack_50 = plVar2[5];
      lStack_38 = plVar2[8];
      lStack_40 = plVar2[7];
      FUN_1012a85d0(&bStack_30,&lStack_78);
      bVar1 = (bStack_30 & 1) == 0;
      if (bVar1) {
        *(undefined1 *)((long)param_1 + 1) = uStack_2f;
      }
      else {
        *(undefined8 *)(param_1 + 4) = uStack_28;
      }
      *(bool *)param_1 = !bVar1;
      return;
    }
  }
  *param_1 = 0x400;
  return;
}

