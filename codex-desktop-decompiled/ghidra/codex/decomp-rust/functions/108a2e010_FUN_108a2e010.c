
void FUN_108a2e010(ulong *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *extraout_x8;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar3 = *param_1 * 2;
    uVar2 = param_3 + param_2;
    if (param_3 + param_2 <= uVar3) {
      uVar2 = uVar3;
    }
    if (uVar2 < 9) {
      uVar2 = 8;
    }
    func_0x000108a2dec8(aiStack_38,*param_1,param_1[1],uVar2,1,1);
    if (aiStack_38[0] != 1) {
      *param_1 = uVar2;
      param_1[1] = uStack_30;
      return;
    }
  }
  func_0x0001087c9084(uStack_30,uStack_28);
  lStack_a0 = 0;
  lStack_98 = 1;
  lStack_90 = 0;
  lStack_88 = 0;
  puStack_80 = (undefined8 *)0x8;
  lStack_78 = 0;
  func_0x000108a2de60(&lStack_88);
  puVar6 = puStack_80;
  puStack_80[1] = 3;
  *puStack_80 = 0;
  puStack_80[2] = 0x24;
  *(undefined2 *)(puStack_80 + 3) = 0;
  lStack_78 = 1;
  FUN_108a2e010(&lStack_a0,0,3);
  *(undefined2 *)(lStack_98 + lStack_90) = 0x6d78;
  *(undefined1 *)((undefined2 *)(lStack_98 + lStack_90) + 1) = 0x6c;
  lStack_90 = lStack_90 + 3;
  if ((ulong)(lStack_a0 - lStack_90) < 0x24) {
    FUN_108a2e010(&lStack_a0,lStack_90,0x24);
  }
  lVar5 = lStack_98;
  puVar1 = (undefined8 *)(lStack_98 + lStack_90);
  puVar1[1] = 0x726f2e33772e7777;
  *puVar1 = 0x772f2f3a70747468;
  puVar1[3] = 0x73656d616e2f3839;
  puVar1[2] = 0x39312f4c4d582f67;
  *(undefined4 *)(puVar1 + 4) = 0x65636170;
  lVar4 = lStack_90 + 0x24;
  lStack_90 = lVar4;
  if (lStack_88 == 1) {
    func_0x000108a2de60(&lStack_88);
    puVar6 = puStack_80;
  }
  puVar6[4] = lVar4;
  puVar6[6] = 0x1d;
  puVar6[5] = 5;
  *(undefined2 *)(puVar6 + 7) = 0;
  lStack_78 = 2;
  if ((ulong)(lStack_a0 - lVar4) < 5) {
    FUN_108a2e010(&lStack_a0,lVar4,5);
    lVar4 = lStack_90;
    lVar5 = lStack_98;
  }
  *(undefined1 *)((undefined4 *)(lVar5 + lVar4) + 1) = 0x73;
  *(undefined4 *)(lVar5 + lVar4) = 0x6e6c6d78;
  lStack_90 = lVar4 + 5;
  if ((ulong)(lStack_a0 - lStack_90) < 0x1d) {
    FUN_108a2e010(&lStack_a0,lStack_90,0x1d);
    lVar5 = lStack_98;
  }
  puVar6 = (undefined8 *)(lVar5 + lStack_90);
  *(undefined8 *)((long)puVar6 + 0x15) = 0x2f736e6c6d782f30;
  *(undefined8 *)((long)puVar6 + 0xd) = 0x3030322f67726f2e;
  puVar6[1] = 0x726f2e33772e7777;
  *puVar6 = 0x772f2f3a70747468;
  extraout_x8[2] = lStack_90 + 0x1d;
  extraout_x8[1] = lStack_98;
  *extraout_x8 = lStack_a0;
  extraout_x8[4] = (long)puStack_80;
  extraout_x8[3] = lStack_88;
  extraout_x8[5] = lStack_78;
  *(undefined2 *)(extraout_x8 + 6) = 0;
  return;
}

