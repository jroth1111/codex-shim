
void FUN_100e82fa0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = (char)param_1[0x11];
  if (cVar1 == '\0') {
    lVar2 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
    }
    lVar2 = *(long *)param_1[4];
    *(long *)param_1[4] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
    lVar2 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E();
    }
    lVar2 = *(long *)param_1[6];
    *(long *)param_1[6] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E();
    }
    lVar3 = param_1[1];
    lVar2 = param_1[2] + 1;
    lVar4 = lVar3;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
      FUN_100e02a24(lVar4);
      lVar4 = lVar4 + 0xc0;
    }
    if (*param_1 != 0) {
      _free(lVar3);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 8);
    lVar2 = *(long *)param_1[8];
    *(long *)param_1[8] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = param_1[8];
      FUN_10611d000(lVar2 + 0x30);
      if (lVar2 != -1) {
        lVar3 = *(long *)(lVar2 + 8);
        *(long *)(lVar2 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar2);
          return;
        }
      }
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_100d735a0(param_1 + 0x13);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100cfa7a0(param_1 + 0x13);
    }
    *(undefined1 *)((long)param_1 + 0x8a) = 0;
    if ((*(byte *)((long)param_1 + 0x89) & 1) != 0) {
      FUN_100dddd8c(param_1 + 0xc);
    }
    *(undefined1 *)((long)param_1 + 0x89) = 0;
    *(undefined4 *)((long)param_1 + 0x8b) = 0;
    *(undefined2 *)((long)param_1 + 0x8f) = 0;
  }
  return;
}

