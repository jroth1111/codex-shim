
void FUN_100cea490(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x7e8);
  if (bVar1 < 4) {
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      FUN_100e57980(param_1 + 0x810);
      goto LAB_100cea648;
    }
    FUN_100e2d09c(param_1);
    FUN_100e0f9a4(param_1 + 0x538);
    lVar2 = **(long **)(param_1 + 0x5d8);
    **(long **)(param_1 + 0x5d8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x5d8);
    }
    lVar2 = **(long **)(param_1 + 0x5e0);
    **(long **)(param_1 + 0x5e0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h987b3be6d4c62721E(param_1 + 0x5e0);
    }
    lVar2 = *(ulong *)(param_1 + 0x578) + 0x7ffffffffffffffa;
    if (*(ulong *)(param_1 + 0x578) < 0x8000000000000006) {
      lVar2 = 6;
    }
    if (lVar2 == 6) {
      FUN_100e0fca4(param_1 + 0x578);
      lVar2 = **(long **)(param_1 + 0x5f0);
      **(long **)(param_1 + 0x5f0) = lVar2 + -1;
      LORelease();
    }
    else {
      if ((lVar2 == 4) && (*(long *)(param_1 + 0x580) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x588));
      }
      lVar2 = **(long **)(param_1 + 0x5f0);
      **(long **)(param_1 + 0x5f0) = lVar2 + -1;
      LORelease();
    }
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x5f0);
    }
    lVar2 = **(long **)(param_1 + 0x5f8);
    **(long **)(param_1 + 0x5f8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb0e3e68687fe03b1E(param_1 + 0x5f8);
    }
    lVar2 = **(long **)(param_1 + 0x600);
    **(long **)(param_1 + 0x600) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(param_1 + 0x600);
    }
    lVar2 = **(long **)(param_1 + 0x608);
    **(long **)(param_1 + 0x608) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(param_1 + 0x608);
    }
    lVar2 = **(long **)(param_1 + 0x610);
    **(long **)(param_1 + 0x610) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd315346bf5060e82E(param_1 + 0x610);
    }
    FUN_100e24ed4(param_1 + 0x500);
    lVar2 = **(long **)(param_1 + 0x618);
    **(long **)(param_1 + 0x618) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7f267950a2ac0cb8E(param_1 + 0x618);
    }
    if (*(long *)(param_1 + 0x4c8) != 0) {
      FUN_100e205b4(param_1 + 0x4d0);
    }
    if (*(long *)(param_1 + 0x620) != -1) {
      plVar3 = (long *)(*(long *)(param_1 + 0x620) + 8);
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        _free();
      }
    }
    lVar2 = **(long **)(param_1 + 0x628);
    **(long **)(param_1 + 0x628) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0ebc710aaa72b233E(param_1 + 0x628);
    }
    lVar2 = **(long **)(param_1 + 0x640);
    **(long **)(param_1 + 0x640) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2112afe0ccd6f767E(param_1 + 0x640);
    }
    lVar2 = **(long **)(param_1 + 0x648);
    **(long **)(param_1 + 0x648) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x648);
    }
    plVar3 = *(long **)(param_1 + 0x668);
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x668);
      }
    }
    if (*(long *)(param_1 + 0x4e8) != 0) {
      _free(*(undefined8 *)(param_1 + 0x4f0));
    }
    FUN_100e4a908(param_1 + 0x658);
    lVar4 = *(long *)(param_1 + 0x660);
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x168);
    *(long *)(lVar4 + 0x168) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      *(ulong *)(lVar4 + 0x158) = *(ulong *)(lVar4 + 0x158) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar4 + 0x10);
    }
  }
  else {
    if (bVar1 == 4) {
      FUN_100d49328(param_1 + 0x810);
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      FUN_100cc924c(param_1 + 0x818);
      (**(code **)**(undefined8 **)(param_1 + 0x810))();
    }
    FUN_100e36550(param_1 + 0x7a8);
    lVar4 = *(long *)(param_1 + 0x798);
    lVar2 = *(long *)(param_1 + 0x7a0);
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0x20);
      do {
        if (puVar6[-4] != 0) {
          _free(puVar6[-3]);
        }
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 6;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (*(long *)(param_1 + 0x790) != 0) {
      _free(lVar4);
    }
    FUN_100cf8d14(param_1 + 0x760);
    FUN_100cf0734(param_1 + 0x730);
    if (*(long *)(param_1 + 0x698) != -0x7ffffffffffffffd) {
      FUN_100e0609c(param_1 + 0x698);
    }
    plVar3 = *(long **)(param_1 + 0x690);
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(param_1 + 0x690);
      }
    }
    *(undefined1 *)(param_1 + 0x805) = 0;
LAB_100cea648:
    *(undefined2 *)(param_1 + 0x80a) = 0;
    *(undefined4 *)(param_1 + 0x806) = 0;
    FUN_100e2d09c(param_1);
    if ((*(byte *)(param_1 + 0x7fb) & 1) != 0) {
      FUN_100e0f9a4(param_1 + 0x538);
    }
    lVar2 = **(long **)(param_1 + 0x5d8);
    **(long **)(param_1 + 0x5d8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x5d8);
    }
    lVar2 = **(long **)(param_1 + 0x5e0);
    **(long **)(param_1 + 0x5e0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h987b3be6d4c62721E(param_1 + 0x5e0);
    }
    lVar2 = **(long **)(param_1 + 0x5f0);
    **(long **)(param_1 + 0x5f0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x5f0);
    }
    lVar2 = **(long **)(param_1 + 0x5f8);
    **(long **)(param_1 + 0x5f8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb0e3e68687fe03b1E(param_1 + 0x5f8);
    }
    if ((*(byte *)(param_1 + 0x7fd) & 1) != 0) {
      lVar2 = **(long **)(param_1 + 0x600);
      **(long **)(param_1 + 0x600) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(param_1 + 0x600);
      }
    }
    lVar2 = **(long **)(param_1 + 0x608);
    **(long **)(param_1 + 0x608) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(param_1 + 0x608);
    }
    if ((*(byte *)(param_1 + 0x800) & 1) != 0) {
      lVar2 = **(long **)(param_1 + 0x610);
      **(long **)(param_1 + 0x610) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd315346bf5060e82E(param_1 + 0x610);
      }
    }
    FUN_100e24ed4(param_1 + 0x500);
    if ((*(byte *)(param_1 + 0x804) & 1) != 0) {
      lVar2 = **(long **)(param_1 + 0x618);
      **(long **)(param_1 + 0x618) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7f267950a2ac0cb8E(param_1 + 0x618);
      }
    }
    if (((*(byte *)(param_1 + 0x803) & 1) != 0) && (*(long *)(param_1 + 0x4c8) != 0)) {
      FUN_100e205b4(param_1 + 0x4d0);
    }
    if ((*(byte *)(param_1 + 0x802) & 1) != 0) {
      if (*(long *)(param_1 + 0x620) != -1) {
        plVar3 = (long *)(*(long *)(param_1 + 0x620) + 8);
        lVar2 = *plVar3;
        *plVar3 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          _free();
        }
      }
      lVar2 = **(long **)(param_1 + 0x628);
      **(long **)(param_1 + 0x628) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0ebc710aaa72b233E(param_1 + 0x628);
      }
    }
    if ((*(byte *)(param_1 + 0x801) & 1) != 0) {
      lVar2 = **(long **)(param_1 + 0x640);
      **(long **)(param_1 + 0x640) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2112afe0ccd6f767E(param_1 + 0x640);
      }
    }
    lVar2 = **(long **)(param_1 + 0x648);
    **(long **)(param_1 + 0x648) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x648);
    }
    if (((*(byte *)(param_1 + 0x7ff) & 1) != 0) &&
       (plVar3 = *(long **)(param_1 + 0x668), plVar3 != (long *)0x0)) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x668);
      }
    }
    if (((*(byte *)(param_1 + 0x7fe) & 1) != 0) && (*(long *)(param_1 + 0x4e8) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x4f0));
    }
    FUN_100e4a908(param_1 + 0x658);
    if (*(char *)(param_1 + 0x7fc) != '\x01') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x660);
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x168);
    *(long *)(lVar4 + 0x168) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      *(ulong *)(lVar4 + 0x158) = *(ulong *)(lVar4 + 0x158) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar4 + 0x10);
    }
  }
  plVar3 = *(long **)(param_1 + 0x660);
  lVar2 = *plVar3;
  *plVar3 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0x660);
  if (*(long *)(lVar2 + 0x138) == 3) {
    uVar5 = *(ulong *)(lVar2 + 0x140) & 0x7fffffffffffffff;
  }
  else {
    if (*(long *)(lVar2 + 0x138) != 4) goto LAB_1034c6a80;
    uVar5 = *(ulong *)(lVar2 + 0x140);
  }
  if (uVar5 != 0) {
    _free(*(undefined8 *)(lVar2 + 0x148));
  }
LAB_1034c6a80:
  if (lVar2 != -1) {
    lVar4 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

