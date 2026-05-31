
void FUN_103d3571c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 *puStack_68;
  
  plVar7 = (long *)*param_3;
  lVar9 = param_3[3];
  lVar10 = lVar9 + 1;
  param_3[3] = lVar10;
  *(undefined1 *)(param_3 + 4) = 0;
  lVar5 = plVar7[2];
  if (*plVar7 == lVar5) {
    FUN_10897c4d0(plVar7,lVar5,1,1,1);
    lVar5 = plVar7[2];
    *(undefined1 *)(plVar7[1] + lVar5) = 0x5b;
    lVar5 = lVar5 + 1;
    plVar7[2] = lVar5;
  }
  else {
    *(undefined1 *)(plVar7[1] + lVar5) = 0x5b;
    lVar5 = lVar5 + 1;
    plVar7[2] = lVar5;
  }
  if (param_2 == 0) {
    param_3[3] = lVar9;
    if (*plVar7 == lVar5) {
      FUN_10897c4d0(plVar7,lVar5,1,1,1);
      lVar5 = plVar7[2];
    }
    uStack_6f = 0;
    *(undefined1 *)(plVar7[1] + lVar5) = 0x5d;
    plVar7[2] = lVar5 + 1;
  }
  else {
    if (lVar10 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      if (*plVar7 == lVar5) {
        FUN_10897c4d0(plVar7,lVar5,1,1,1);
        lVar5 = plVar7[2];
      }
      *(undefined1 *)(plVar7[1] + lVar5) = 10;
      plVar7[2] = lVar5 + 1;
      func_0x000103d1d504(plVar7,uVar1,uVar2);
      *(undefined1 *)(param_3 + 4) = 1;
      if (param_2 != 1) {
        puVar8 = (undefined8 *)(param_1 + 0x28);
        lVar10 = param_2 * 0x18 + -0x18;
        do {
          uVar1 = puVar8[-1];
          uVar2 = *puVar8;
          lVar5 = plVar7[2];
          if ((ulong)(*plVar7 - lVar5) < 2) {
            FUN_10897c4d0(plVar7,lVar5,2,1,1);
            lVar5 = plVar7[2];
          }
          puVar8 = puVar8 + 3;
          *(undefined2 *)(plVar7[1] + lVar5) = 0xa2c;
          plVar7[2] = lVar5 + 2;
          func_0x000103d1d504(plVar7,uVar1,uVar2);
          *(undefined1 *)(param_3 + 4) = 1;
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != 0);
      }
    }
    else {
      lVar5 = param_1 + param_2 * 0x18;
      uVar1 = param_3[1];
      uVar3 = param_3[2];
      bVar6 = true;
      do {
        uVar2 = *(undefined8 *)(param_1 + 8);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        if (bVar6) {
          lVar9 = plVar7[2];
          if (*plVar7 == lVar9) {
            FUN_10897c4d0(plVar7,lVar9,1,1,1);
            lVar9 = plVar7[2];
          }
          *(undefined1 *)(plVar7[1] + lVar9) = 10;
          lVar9 = lVar9 + 1;
        }
        else {
          lVar9 = plVar7[2];
          if ((ulong)(*plVar7 - lVar9) < 2) {
            FUN_10897c4d0(plVar7,lVar9,2,1,1);
            lVar9 = plVar7[2];
          }
          *(undefined2 *)(plVar7[1] + lVar9) = 0xa2c;
          lVar9 = lVar9 + 2;
        }
        param_1 = param_1 + 0x18;
        plVar7[2] = lVar9;
        lVar11 = lVar10;
        do {
          if ((ulong)(*plVar7 - lVar9) < uVar3) {
            FUN_10897c4d0(plVar7,lVar9,uVar3,1,1);
            lVar9 = plVar7[2];
          }
          _memcpy(plVar7[1] + lVar9,uVar1,uVar3);
          lVar9 = lVar9 + uVar3;
          plVar7[2] = lVar9;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        func_0x000103d1d504(plVar7,uVar2,uVar4);
        bVar6 = false;
        *(undefined1 *)(param_3 + 4) = 1;
      } while (param_1 != lVar5);
    }
    uStack_6f = 2;
  }
  uStack_70 = 0;
  puStack_68 = param_3;
  FUN_103ea83a4(&uStack_70);
  return;
}

