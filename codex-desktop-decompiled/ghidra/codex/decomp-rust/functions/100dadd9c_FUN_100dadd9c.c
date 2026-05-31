
void FUN_100dadd9c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong in_xzr;
  
  FUN_100d88cd8();
  plVar4 = (long *)(param_1 + 8);
  lVar5 = *plVar4;
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcb4b8(lVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x6a10) = *(ulong *)(lVar2 + 0x6a10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*plVar4;
  *(long *)*plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(plVar4);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    if (*plVar4 == 0xcc) {
      *plVar4 = 0x84;
    }
    else {
      (**(code **)(plVar4[2] + 0x20))();
    }
  }
  FUN_100e3bcd4(param_1 + 0x20);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_10611d000(lVar2 + 0x30);
  if (lVar2 != -1) {
    lVar5 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

