
void FUN_108871994(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_f8 [17];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  lVar4 = param_2[2];
  lVar3 = param_2[4];
  if (lVar3 != 0 && lVar3 * 9 != -0x11) {
    _free(param_2[3] + lVar3 * -8 + -8);
  }
  lStack_58 = lVar2 + lVar4 * 0x90;
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  auStack_f8[0] = 0x8000000000000001;
  lStack_70 = lVar2;
  lStack_68 = lVar2;
  uStack_60 = uVar1;
  func_0x00010882eae0(param_1,auStack_f8);
  return;
}

