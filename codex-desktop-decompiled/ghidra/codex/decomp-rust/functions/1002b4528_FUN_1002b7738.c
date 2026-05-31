
void FUN_1002b7738(long *param_1)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long alStack_2f8 [44];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar2 = (long *)param_1[0x25];
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h8637da121dc559e8E(param_1 + 0x25);
    }
  }
  FUN_1002c3ad8(param_1 + 0x19);
  FUN_1002c4608(param_1 + 0x1c);
  lVar1 = *(long *)param_1[0x1d];
  *(long *)param_1[0x1d] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260();
  }
  FUN_1002b3690(param_1 + 0x1f);
  FUN_1002b80e0(param_1 + 0x23);
  if (*param_1 == 2) {
    return;
  }
  __ZN86__LT_h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0d2bf830884bd95eE
            (param_1 + 0x12);
  lVar1 = *(long *)param_1[0x12];
  *(long *)param_1[0x12] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h180a943b0a7e6fc1E(param_1 + 0x12);
  }
  FUN_1002b4278(param_1 + 0x15);
  func_0x0001002c06a4(param_1 + 3);
  lVar1 = *param_1;
  lVar4 = param_1[2];
  puVar3 = (uint *)(param_1 + 1);
  puVar3[0] = 0;
  puVar3[1] = 0;
  lStack_38 = lVar4;
  if ((int)lVar1 == 1) {
    if ((*puVar3 & 1) != 0) {
      uStack_190 = __ZN5hyper6client8dispatch13dispatch_gone17h8f6b3e04fa8f575eE();
      uStack_198 = 3;
      FUN_1002d3cfc(alStack_2f8,lVar4,&uStack_198);
      if (alStack_2f8[0] != 4) {
        FUN_1002b5e30(alStack_2f8);
      }
    }
  }
  else if ((*puVar3 & 1) != 0) {
    uStack_40 = __ZN5hyper6client8dispatch13dispatch_gone17h8f6b3e04fa8f575eE();
    uStack_198 = 3;
    func_0x0001002d3b3c(alStack_2f8,lVar4,&uStack_198);
    FUN_1002baf4c(alStack_2f8);
  }
  return;
}

