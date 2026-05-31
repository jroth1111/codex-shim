
void FUN_103da3d14(long param_1)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_xzr;
  
  cVar2 = *(char *)(param_1 + 0x148);
  if (cVar2 == '\0') {
    func_0x000103dbe850(param_1);
    lVar3 = **(long **)(param_1 + 0x80);
    **(long **)(param_1 + 0x80) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
    }
    lVar3 = **(long **)(param_1 + 0xb8);
    **(long **)(param_1 + 0xb8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar3 = **(long **)(param_1 + 200);
    **(long **)(param_1 + 200) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    if ((*(long *)(param_1 + 0x88) != -0x8000000000000000) && (*(long *)(param_1 + 0x88) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x90));
    }
    lVar3 = **(long **)(param_1 + 0xd8);
    **(long **)(param_1 + 0xd8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    if ((*(long *)(param_1 + 0xa0) != -0x8000000000000000) && (*(long *)(param_1 + 0xa0) != 0)) {
      _free(*(undefined8 *)(param_1 + 0xa8));
    }
    lVar3 = **(long **)(param_1 + 0xe8);
    **(long **)(param_1 + 0xe8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
    }
    plVar5 = (long *)(param_1 + 0xf8);
    lVar6 = *plVar5;
    LOAcquire();
    lVar3 = *(long *)(lVar6 + 0x1f0);
    *(long *)(lVar6 + 0x1f0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      LOAcquire();
      lVar3 = *(long *)(lVar6 + 0x88);
      *(long *)(lVar6 + 0x88) = lVar3 + 1;
      lVar3 = func_0x000103e3366c(lVar6 + 0x80,lVar3);
      *(ulong *)(lVar3 + 0x6210) = *(ulong *)(lVar3 + 0x6210) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar6 + 0x110);
      LOAcquire();
      uVar4 = *puVar1;
      *puVar1 = uVar4 | 2;
      LORelease();
      if (uVar4 == 0) {
        lVar3 = *(long *)(lVar6 + 0x100);
        *(undefined8 *)(lVar6 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar6 + 0x108));
        }
      }
    }
    lVar3 = *(long *)*plVar5;
    *(long *)*plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar5);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x100);
  }
  else {
    if (cVar2 == '\x03') {
      func_0x000103da39a8(param_1 + 0x150);
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      func_0x000103dae9fc(param_1 + 0x150);
    }
    *(undefined1 *)(param_1 + 0x149) = 0;
    func_0x000103dbe850(param_1);
    lVar3 = **(long **)(param_1 + 0x80);
    **(long **)(param_1 + 0x80) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
    }
    lVar3 = **(long **)(param_1 + 0xb8);
    **(long **)(param_1 + 0xb8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar3 = **(long **)(param_1 + 200);
    **(long **)(param_1 + 200) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    if ((*(long *)(param_1 + 0x88) != -0x8000000000000000) && (*(long *)(param_1 + 0x88) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x90));
    }
    if ((*(byte *)(param_1 + 0x14d) & 1) != 0) {
      lVar3 = **(long **)(param_1 + 0xd8);
      **(long **)(param_1 + 0xd8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if ((((*(byte *)(param_1 + 0x14c) & 1) != 0) &&
        (*(long *)(param_1 + 0xa0) != -0x8000000000000000)) && (*(long *)(param_1 + 0xa0) != 0)) {
      _free(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((*(byte *)(param_1 + 0x14b) & 1) != 0) {
      lVar3 = **(long **)(param_1 + 0xe8);
      **(long **)(param_1 + 0xe8) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
      }
    }
    if ((*(byte *)(param_1 + 0x14a) & 1) != 0) {
      plVar5 = (long *)(param_1 + 0xf8);
      lVar6 = *plVar5;
      LOAcquire();
      lVar3 = *(long *)(lVar6 + 0x1f0);
      *(long *)(lVar6 + 0x1f0) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        LOAcquire();
        lVar3 = *(long *)(lVar6 + 0x88);
        *(long *)(lVar6 + 0x88) = lVar3 + 1;
        lVar3 = func_0x000103e3366c(lVar6 + 0x80,lVar3);
        *(ulong *)(lVar3 + 0x6210) = *(ulong *)(lVar3 + 0x6210) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar6 + 0x110);
        LOAcquire();
        uVar4 = *puVar1;
        *puVar1 = uVar4 | 2;
        LORelease();
        if (uVar4 == 0) {
          lVar3 = *(long *)(lVar6 + 0x100);
          *(undefined8 *)(lVar6 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar6 + 0x108));
          }
        }
      }
      lVar3 = *(long *)*plVar5;
      *(long *)*plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar5);
      }
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x100);
  }
  plVar5 = *(long **)(param_1 + 0x100);
  lVar3 = *plVar5;
  *plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar3 = *(long *)(param_1 + 0x100);
  FUN_10611d000(lVar3 + 0x30);
  if (lVar3 != -1) {
    lVar6 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

