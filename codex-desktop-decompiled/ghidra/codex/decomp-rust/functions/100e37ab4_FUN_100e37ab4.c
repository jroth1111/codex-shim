
void FUN_100e37ab4(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  lVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar2 = 1;
  }
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      uVar1 = param_1[1];
      FUN_100e44d5c(uVar1);
      goto code_r0x000108aa97c4;
    }
    if (lVar2 == 1) {
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      if (param_1[5] == 0) {
        return;
      }
      uVar1 = param_1[6];
      goto code_r0x000108aa97c4;
    }
  }
  else {
    if (lVar2 == 2) {
      return;
    }
    if (lVar2 == 3) {
      plVar3 = (long *)param_1[1];
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      uVar1 = param_1[1];
      if (*(long *)(uVar1 + 0x10) != 0) {
        _free(*(undefined8 *)(uVar1 + 0x18));
      }
      if (*(long *)(uVar1 + 0x28) != 0) {
        _free(*(undefined8 *)(uVar1 + 0x30));
      }
      lVar2 = **(long **)(uVar1 + 0x40);
      **(long **)(uVar1 + 0x40) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E();
      }
      lVar2 = **(long **)(uVar1 + 0x48);
      **(long **)(uVar1 + 0x48) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E();
      }
      lVar2 = **(long **)(uVar1 + 0x50);
      **(long **)(uVar1 + 0x50) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E();
      }
      lVar2 = **(long **)(uVar1 + 0x58);
      **(long **)(uVar1 + 0x58) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1ceab3c3de7d1b22E();
      }
      if (uVar1 != 0xffffffffffffffff) {
        lVar2 = *(long *)(uVar1 + 8);
        *(long *)(uVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
    plVar3 = (long *)param_1[4];
  }
  else {
    _free(param_1[2]);
    plVar3 = (long *)param_1[4];
  }
  if (plVar3 != (long *)0x0) {
    uVar1 = plVar3[6];
    do {
      uVar4 = uVar1;
      if (((uint)uVar4 >> 2 & 1) != 0) goto LAB_100e37bb0;
      uVar1 = plVar3[6];
    } while (uVar1 != uVar4);
    plVar3[6] = uVar4 | 2;
LAB_100e37bb0:
    if ((uVar4 & 5) == 1) {
      (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
    }
    lVar2 = *plVar3;
    *plVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      uVar1 = param_1[4];
      uVar4 = *(ulong *)(uVar1 + 0x30);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*(long *)(uVar1 + 0x20) + 0x18))(*(undefined8 *)(uVar1 + 0x28));
      }
      if (((uint)uVar4 >> 3 & 1) != 0) {
        (**(code **)(*(long *)(uVar1 + 0x10) + 0x18))(*(undefined8 *)(uVar1 + 0x18));
      }
      if (uVar1 != 0xffffffffffffffff) {
        lVar2 = *(long *)(uVar1 + 8);
        *(long *)(uVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(uVar1);
          return;
        }
      }
      return;
    }
  }
  return;
}

