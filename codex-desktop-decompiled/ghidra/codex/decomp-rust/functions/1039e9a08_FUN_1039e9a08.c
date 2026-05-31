
void FUN_1039e9a08(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = param_3[2];
  if (*param_3 == lVar3) {
    FUN_1089576c4(param_3,lVar3,1,1,1);
    lVar3 = param_3[2];
    *(undefined1 *)(param_3[1] + lVar3) = 0x5b;
    lVar3 = lVar3 + 1;
    param_3[2] = lVar3;
  }
  else {
    *(undefined1 *)(param_3[1] + lVar3) = 0x5b;
    lVar3 = lVar3 + 1;
    param_3[2] = lVar3;
  }
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (*param_3 == lVar3) {
      FUN_1089576c4(param_3,lVar3,1,1,1);
      lVar3 = param_3[2];
    }
    *(undefined1 *)(param_3[1] + lVar3) = 0x22;
    param_3[2] = lVar3 + 1;
    func_0x0001039ea404(param_3,uVar1,uVar2);
    lVar3 = param_3[2];
    if (*param_3 == lVar3) {
      FUN_1089576c4(param_3,lVar3,1,1,1);
      lVar3 = param_3[2];
      *(undefined1 *)(param_3[1] + lVar3) = 0x22;
      lVar3 = lVar3 + 1;
      param_3[2] = lVar3;
    }
    else {
      *(undefined1 *)(param_3[1] + lVar3) = 0x22;
      lVar3 = lVar3 + 1;
      param_3[2] = lVar3;
    }
    if (param_2 != 1) {
      puVar4 = (undefined8 *)(param_1 + 0x28);
      lVar5 = param_2 * 0x18 + -0x18;
      do {
        uVar1 = puVar4[-1];
        uVar2 = *puVar4;
        if (*param_3 == lVar3) {
          FUN_1089576c4(param_3,lVar3,1,1,1);
          lVar3 = param_3[2];
        }
        *(undefined1 *)(param_3[1] + lVar3) = 0x2c;
        lVar3 = lVar3 + 1;
        param_3[2] = lVar3;
        if (*param_3 == lVar3) {
          FUN_1089576c4(param_3,lVar3,1,1,1);
          lVar3 = param_3[2];
        }
        *(undefined1 *)(param_3[1] + lVar3) = 0x22;
        param_3[2] = lVar3 + 1;
        func_0x0001039ea404(param_3,uVar1,uVar2);
        lVar3 = param_3[2];
        if (*param_3 == lVar3) {
          FUN_1089576c4(param_3,lVar3,1,1,1);
          lVar3 = param_3[2];
        }
        puVar4 = puVar4 + 3;
        *(undefined1 *)(param_3[1] + lVar3) = 0x22;
        lVar3 = lVar3 + 1;
        param_3[2] = lVar3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  if (*param_3 == lVar3) {
    FUN_1089576c4(param_3,lVar3,1,1,1);
    lVar3 = param_3[2];
  }
  *(undefined1 *)(param_3[1] + lVar3) = 0x5d;
  param_3[2] = lVar3 + 1;
  return;
}

