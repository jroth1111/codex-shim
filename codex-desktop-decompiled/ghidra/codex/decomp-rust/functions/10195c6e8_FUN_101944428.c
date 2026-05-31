
void FUN_101944428(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = (char)param_1[0x28];
  if (cVar1 == '\0') {
    lVar2 = *(long *)param_1[0x27];
    *(long *)param_1[0x27] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x27);
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (((((char)param_1[0x38] == '\x03') && ((char)param_1[0x37] == '\x03')) &&
          ((char)param_1[0x36] == '\x03')) && ((char)param_1[0x35] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x2d);
        if (param_1[0x2e] != 0) {
          (**(code **)(param_1[0x2e] + 0x18))(param_1[0x2f]);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      func_0x000101932eb0(param_1 + 0x29);
    }
    lVar2 = *(long *)param_1[0x27];
    *(long *)param_1[0x27] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x27);
    }
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  lVar2 = *(long *)param_1[0x22];
  *(long *)param_1[0x22] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he153cb8b038106d7E(param_1 + 0x22);
  }
  lVar2 = *(long *)param_1[0x23];
  *(long *)param_1[0x23] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb66a49dad164b2ebE(param_1 + 0x23);
  }
  func_0x000101952554(param_1 + 3);
  lVar2 = *(long *)param_1[0x24];
  *(long *)param_1[0x24] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9de3b7a9f2de2f4dE(param_1 + 0x24);
  }
  if ((param_1[0x19] != -0x8000000000000000) && (param_1[0x19] != 0)) {
    _free(param_1[0x1a]);
  }
  if ((param_1[0x1c] != -0x8000000000000000) && (param_1[0x1c] != 0)) {
    _free(param_1[0x1d]);
  }
  if ((param_1[0x1f] != -0x8000000000000000) && (param_1[0x1f] != 0)) {
    _free(param_1[0x20]);
  }
  lVar2 = *(long *)param_1[0x25];
  *(long *)param_1[0x25] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    lVar3 = param_1[0x25];
    lVar2 = **(long **)(lVar3 + 0x20);
    **(long **)(lVar3 + 0x20) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E();
    }
    if (lVar3 != -1) {
      lVar2 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar3);
        return;
      }
    }
    return;
  }
  return;
}

