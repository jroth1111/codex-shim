
void FUN_101965e34(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  if (*param_1 == -0x8000000000000000) {
    return;
  }
  FUN_10195737c();
  lVar4 = param_1[0x1e];
  if (lVar4 == 0) {
    lStack_50 = 0;
  }
  else {
    lStack_78 = param_1[0x1f];
    lStack_50 = param_1[0x20];
    uStack_88 = 0;
    uStack_68 = 0;
    lStack_80 = lVar4;
    lStack_60 = lVar4;
    lStack_58 = lStack_78;
  }
  uStack_90 = (ulong)(lVar4 != 0);
  uStack_70 = uStack_90;
  FUN_101990448(alStack_48,&uStack_90);
  lVar4 = alStack_48[0];
  lVar2 = lStack_38;
  while (lVar4 != 0) {
    lVar3 = lVar4 + lVar2 * 0x18;
    alStack_48[0] = lVar4;
    lStack_38 = lVar2;
    if (*(long *)(lVar3 + 0x168) != 0) {
      _free(*(undefined8 *)(lVar3 + 0x170));
    }
    puVar1 = (ulong *)(lVar4 + lVar2 * 0x20);
    if ((*puVar1 & 0x7fffffffffffffff) != 0) {
      _free(puVar1[1]);
    }
    FUN_101990448(alStack_48,&uStack_90);
    lVar4 = alStack_48[0];
    lVar2 = lStack_38;
  }
  return;
}

