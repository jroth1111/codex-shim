
void FUN_100d85f1c(long *param_1)

{
  long lVar1;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long alStack_38 [2];
  long lStack_28;
  
  if (*param_1 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lStack_40 = 0;
    }
    else {
      lStack_68 = param_1[2];
      lStack_40 = param_1[3];
      uStack_78 = 0;
      uStack_58 = 0;
      lStack_70 = lVar1;
      lStack_50 = lVar1;
      lStack_48 = lStack_68;
    }
    uStack_80 = (ulong)(lVar1 != 0);
    uStack_60 = uStack_80;
    FUN_100f3a554(alStack_38,&uStack_80);
    while (alStack_38[0] != 0) {
      lVar1 = alStack_38[0] + lStack_28 * 0x18;
      if (*(long *)(lVar1 + 8) != 0) {
        _free(*(undefined8 *)(lVar1 + 0x10));
      }
      FUN_100f3a554(alStack_38,&uStack_80);
    }
  }
  return;
}

