
void FUN_100e74494(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  bVar2 = *(byte *)((long)param_1 + 0x15c);
  if (bVar2 < 6) {
    if (3 < bVar2) {
      if (bVar2 == 4) {
        func_0x000100e82718(param_1 + 0x2d);
      }
      else {
        if (bVar2 != 5) {
          return;
        }
        FUN_100caaa14(param_1 + 0x2d);
        *(undefined1 *)((long)param_1 + 0x164) = 0;
      }
      goto LAB_100e74678;
    }
    if (bVar2 == 0) {
      lVar3 = *(long *)param_1[3];
      *(long *)param_1[3] = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
      }
      lVar3 = *(long *)param_1[4];
      *(long *)param_1[4] = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
      }
      lVar5 = param_1[1];
      lVar3 = lVar5;
      for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
        FUN_100e06c08(lVar3);
        lVar3 = lVar3 + 0x38;
      }
      if (*param_1 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (bVar2 != 3) {
      return;
    }
    if (((*(char *)((long)param_1 + 0x214) == '\x03') && ((char)param_1[0x3f] == '\x03')) &&
       (((char)param_1[0x3e] == '\x03' &&
        (((char)param_1[0x3d] == '\x03' && ((char)param_1[0x34] == '\x04')))))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x35);
      if (param_1[0x36] != 0) {
        (**(code **)(param_1[0x36] + 0x18))(param_1[0x37]);
      }
    }
  }
  else {
    if (bVar2 < 8) {
      if (bVar2 != 6) {
        if (bVar2 != 7) {
          return;
        }
        FUN_100e85ebc(param_1 + 0x30);
        goto LAB_100e7461c;
      }
      FUN_100e85574(param_1 + 0x2d);
    }
    else {
      if (bVar2 == 8) {
        FUN_100caaa14(param_1 + 0x2d);
      }
      else {
        if (bVar2 != 9) {
          return;
        }
        FUN_100caaa14(param_1 + 0x2d);
      }
LAB_100e7461c:
      if ((((*(byte *)((long)param_1 + 0x161) & 1) != 0) && (param_1[0x2d] != -0x8000000000000000))
         && (param_1[0x2d] != 0)) {
        _free(param_1[0x2e]);
      }
      *(undefined1 *)((long)param_1 + 0x161) = 0;
      if (param_1[0x18] == -0x7fffffffffffffe0) {
        if (param_1[0x19] != 0) {
          _free(param_1[0x1a]);
        }
      }
      else {
        FUN_100df5738();
      }
    }
    *(undefined1 *)((long)param_1 + 0x163) = 0;
LAB_100e74678:
    if ((*(byte *)((long)param_1 + 0x162) & 1) != 0) {
      if (param_1[10] != 0) {
        _free(param_1[0xb]);
      }
      if (param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x162) = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    lVar5 = param_1[8];
    lVar3 = lVar5;
    for (lVar1 = param_1[9]; lVar1 != 0; lVar1 = lVar1 + -1) {
      FUN_100e06c08(lVar3);
      lVar3 = lVar3 + 0x38;
    }
    if (param_1[7] != 0) {
      _free(lVar5);
    }
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar3 = *(long *)param_1[6];
  *(long *)param_1[6] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  plVar4 = (long *)param_1[5];
  lVar3 = *plVar4;
  *plVar4 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar5 = param_1[5];
  FUN_103399ec0(lVar5 + 0x10);
  if (lVar5 != -1) {
    lVar3 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  return;
}

