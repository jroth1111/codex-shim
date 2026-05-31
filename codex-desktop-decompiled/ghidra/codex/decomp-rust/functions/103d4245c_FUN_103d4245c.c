
void FUN_103d4245c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 *puStack_48;
  
  lVar4 = *(long *)(param_1 + 0x30);
  plVar2 = (long *)*param_2;
  lVar3 = param_2[3];
  param_2[3] = lVar3 + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_10897c4d0(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
    *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
    lVar1 = lVar1 + 1;
    plVar2[2] = lVar1;
  }
  else {
    *(undefined1 *)(plVar2[1] + lVar1) = 0x7b;
    lVar1 = lVar1 + 1;
    plVar2[2] = lVar1;
  }
  if (lVar4 == 0) {
    param_2[3] = lVar3;
    if (*plVar2 == lVar1) {
      FUN_10897c4d0(plVar2,lVar1,1,1,1);
      lVar1 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar1) = 0x7d;
    plVar2[2] = lVar1 + 1;
    uStack_4f = 0;
    lVar1 = *(long *)(param_1 + 0x10);
  }
  else {
    uStack_4f = 1;
    lVar1 = *(long *)(param_1 + 0x10);
  }
  uStack_50 = 0;
  puStack_48 = param_2;
  if (lVar1 != 0) {
    uStack_50 = 0;
    lVar3 = *(long *)(param_1 + 8);
    lVar1 = lVar3 + lVar1 * 0x68;
    do {
      func_0x000103d32524(&uStack_50,lVar3,lVar3 + 0x18);
      lVar3 = lVar3 + 0x68;
    } while (lVar3 != lVar1);
  }
  FUN_103ea823c(&uStack_50);
  return;
}

