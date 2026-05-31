
void FUN_100cb39f0(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  bVar1 = *(byte *)(param_1 + 0x2898);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      FUN_100de93d0(param_1);
      lVar2 = **(long **)(param_1 + 0x25e8);
      **(long **)(param_1 + 0x25e8) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x25e8);
      }
      lVar2 = **(long **)(param_1 + 0x25f0);
      **(long **)(param_1 + 0x25f0) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x25f0);
      }
      lVar2 = **(long **)(param_1 + 0x2600);
      **(long **)(param_1 + 0x2600) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1 + 0x2600);
      }
      lVar2 = **(long **)(param_1 + 0x2608);
      **(long **)(param_1 + 0x2608) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x2608);
      }
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 0x2610);
      lVar2 = **(long **)(param_1 + 0x2610);
      **(long **)(param_1 + 0x2610) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x2610);
      }
      FUN_100e0fca4(param_1 + 0x2588);
      if (*(long *)(param_1 + 0x2548) == -0x7ffffffffffffffc) {
        return;
      }
      uVar9 = *(ulong *)(param_1 + 0x2548);
      uVar5 = uVar9 ^ 0x8000000000000000;
      if (-1 < (long)uVar9) {
        uVar5 = 2;
      }
      if (uVar5 < 2) {
        return;
      }
      if (uVar5 == 2) {
        lVar8 = *(long *)(param_1 + 0x2550);
        lVar2 = *(long *)(param_1 + 0x2558) + 1;
        lVar3 = lVar8;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          FUN_100e068b8(lVar3);
          lVar3 = lVar3 + 0x1e0;
        }
        if (uVar9 != 0) {
          _free(lVar8);
        }
        if ((*(ulong *)(param_1 + 0x2560) & 0x7fffffffffffffff) == 0) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x2568);
      }
      else {
        lVar8 = *(long *)(param_1 + 0x2558);
        lVar2 = *(long *)(param_1 + 0x2560) + 1;
        lVar3 = lVar8;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          FUN_100e068b8(lVar3);
          lVar3 = lVar3 + 0x1e0;
        }
        if (*(long *)(param_1 + 0x2550) == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar8);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28a8);
    puVar6 = *(undefined8 **)(param_1 + 0x28b0);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar7);
    }
    if (puVar6[1] != 0) {
      _free(uVar7);
    }
  }
  else {
    if (bVar1 == 4) {
      if ((((*(char *)(param_1 + 0x2928) == '\x03') && (*(char *)(param_1 + 0x2920) == '\x03')) &&
          (*(char *)(param_1 + 0x2918) == '\x03')) && (*(char *)(param_1 + 0x28d0) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x28d8);
        if (*(long *)(param_1 + 0x28e0) != 0) {
          (**(code **)(*(long *)(param_1 + 0x28e0) + 0x18))(*(undefined8 *)(param_1 + 0x28e8));
        }
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      if (((*(char *)(param_1 + 0x2928) == '\x03') && (*(char *)(param_1 + 0x2920) == '\x03')) &&
         ((*(char *)(param_1 + 0x2918) == '\x03' && (*(char *)(param_1 + 0x28d0) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x28d8);
        if (*(long *)(param_1 + 0x28e0) != 0) {
          (**(code **)(*(long *)(param_1 + 0x28e0) + 0x18))(*(undefined8 *)(param_1 + 0x28e8));
        }
      }
      FUN_100e20dec(param_1 + 0x2700);
    }
    *(undefined1 *)(param_1 + 0x2899) = 0;
    func_0x000100dea470(param_1 + 0x26c0);
    *(undefined1 *)(param_1 + 0x289a) = 0;
  }
  func_0x000100e60154(param_1 + 0x26b0);
  *(undefined1 *)(param_1 + 0x289b) = 0;
  FUN_100e584f0(param_1 + 0x26a8);
  *(undefined1 *)(param_1 + 0x289c) = 0;
  FUN_100e4ebb0(param_1 + 0x2698);
  *(undefined1 *)(param_1 + 0x289d) = 0;
  FUN_100e4a908(param_1 + 0x2690);
  *(undefined2 *)(param_1 + 0x289e) = 0;
  FUN_100e0fca4(param_1 + 0x2630);
  *(undefined1 *)(param_1 + 0x28a0) = 0;
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x2628);
  lVar2 = **(long **)(param_1 + 0x2628);
  **(long **)(param_1 + 0x2628) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x2628);
  }
  lVar2 = **(long **)(param_1 + 0x2620);
  **(long **)(param_1 + 0x2620) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x2620);
  }
  lVar2 = **(long **)(param_1 + 0x2618);
  **(long **)(param_1 + 0x2618) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1 + 0x2618);
  }
  *(undefined2 *)(param_1 + 0x28a1) = 0;
  *(undefined1 *)(param_1 + 0x28a3) = 0;
  return;
}

