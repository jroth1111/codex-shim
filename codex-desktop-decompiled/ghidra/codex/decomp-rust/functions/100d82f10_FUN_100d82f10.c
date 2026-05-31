
void FUN_100d82f10(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  if (bVar1 < 4) {
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      func_0x000100c97c44(param_1 + 0x45);
      FUN_100de8a5c(param_1 + 0x37);
      lVar2 = *(long *)param_1[0x30];
      *(long *)param_1[0x30] = lVar2 + -1;
      LORelease();
      goto joined_r0x000100d83090;
    }
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    plVar4 = (long *)param_1[3];
    if (*plVar4 == 0xcc) {
      *plVar4 = 0x84;
    }
    else {
      (**(code **)(plVar4[2] + 0x20))();
    }
    lVar2 = *(long *)param_1[4];
    *(long *)param_1[4] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
    }
    lVar2 = *(long *)param_1[0x30];
    *(long *)param_1[0x30] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(param_1 + 0x30);
    }
    lVar2 = *(long *)param_1[0x31];
    *(long *)param_1[0x31] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(param_1 + 0x31);
    }
    FUN_100e23b84(param_1 + 6);
    lVar2 = *(long *)param_1[0x32];
    *(long *)param_1[0x32] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x32);
    }
  }
  else {
    if (bVar1 == 4) {
      FUN_100d7c54c(param_1 + 0x37);
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      if ((((char)param_1[0x45] == '\x03') && ((char)param_1[0x44] == '\x03')) &&
         ((char)param_1[0x3b] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x3c);
        if (param_1[0x3d] != 0) {
          (**(code **)(param_1[0x3d] + 0x18))(param_1[0x3e]);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x1b4) = 0;
    lVar2 = *(long *)param_1[0x30];
    *(long *)param_1[0x30] = lVar2 + -1;
    LORelease();
joined_r0x000100d83090:
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(param_1 + 0x30);
    }
    lVar2 = *(long *)param_1[0x31];
    *(long *)param_1[0x31] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(param_1 + 0x31);
    }
    if ((*(byte *)((long)param_1 + 0x1b3) & 1) != 0) {
      FUN_100e23b84(param_1 + 6);
    }
    if ((*(byte *)((long)param_1 + 0x1b2) & 1) != 0) {
      lVar2 = *(long *)param_1[0x32];
      *(long *)param_1[0x32] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x32);
      }
    }
    if ((*(byte *)((long)param_1 + 0x1b1) & 1) == 0) goto LAB_100d8310c;
  }
  if (param_1[0x2d] != 0) {
    _free(param_1[0x2e]);
  }
LAB_100d8310c:
  lVar2 = *(long *)param_1[0x33];
  *(long *)param_1[0x33] = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = param_1[0x33];
  FUN_1019382cc(lVar2 + 0x38);
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

