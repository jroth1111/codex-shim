
void FUN_10897c4d0(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_a0 [31];
  undefined1 uStack_81;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar7 = *param_1 * 2;
    uVar1 = param_3 + param_2;
    if (param_3 + param_2 <= uVar7) {
      uVar1 = uVar7;
    }
    uVar7 = 8;
    if (param_5 != 1) {
      uVar7 = 4;
    }
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    func_0x00010897c388(aiStack_38,*param_1,param_1[1],uVar1,param_4);
    if (aiStack_38[0] != 1) {
      *param_1 = uVar1;
      param_1[1] = uStack_30;
      return;
    }
  }
  auVar9 = func_0x0001087c9084(uStack_30,uStack_28);
  plVar6 = auVar9._8_8_;
  lVar2 = *plVar6;
  lVar3 = plVar6[1];
  lVar8 = plVar6[2];
  auStack_a0[0] = 10;
  uVar4 = func_0x000108a4a50c(auStack_a0,&uStack_81,&UNK_10b2f90a8);
  *auVar9._0_8_ = 4;
  auVar9._0_8_[1] = uVar4;
  lVar8 = lVar8 + 1;
  lVar5 = lVar3;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    func_0x000103db23f4(lVar5);
    lVar5 = lVar5 + 0x20;
  }
  if (lVar2 != 0) {
    _free(lVar3);
  }
  return;
}

