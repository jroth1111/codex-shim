
void FUN_100cfa7a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  switch((char)param_1[0x56]) {
  case '\0':
    lVar5 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
    }
    lVar5 = *(long *)param_1[4];
    *(long *)param_1[4] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 5);
    lVar5 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 5);
    }
    lVar5 = *(long *)param_1[6];
    *(long *)param_1[6] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E();
    }
    lVar1 = param_1[1];
    lVar5 = param_1[2] + 1;
    lVar3 = lVar1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e02a24(lVar3);
      lVar3 = lVar3 + 0xc0;
    }
    goto code_r0x000100cfabdc;
  default:
    goto LAB_100cfac20;
  case '\x03':
    FUN_100e61d94(param_1 + 0x57);
    goto code_r0x000100cfab34;
  case '\x04':
    if ((((char)param_1[0x67] == '\x03') && ((char)param_1[0x66] == '\x03')) &&
       (((char)param_1[0x65] == '\x03' && ((char)param_1[0x5c] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x5d);
      if (param_1[0x5e] != 0) {
        (**(code **)(param_1[0x5e] + 0x18))(param_1[0x5f]);
      }
    }
    goto code_r0x000100cfab14;
  case '\x05':
    if ((char)param_1[0x5c] == '\0') {
      lVar5 = *(long *)param_1[0x5a];
      *(long *)param_1[0x5a] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE(param_1 + 0x5a);
      }
      lVar5 = *(long *)param_1[0x5b];
      *(long *)param_1[0x5b] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(param_1 + 0x5b);
      }
    }
    goto code_r0x000100cfaafc;
  case '\x06':
    if (((((char)param_1[0x67] == '\x03') && ((char)param_1[0x66] == '\x03')) &&
        ((char)param_1[0x65] == '\x03')) && ((char)param_1[0x5c] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x5d);
      if (param_1[0x5e] != 0) {
        (**(code **)(param_1[0x5e] + 0x18))(param_1[0x5f]);
      }
    }
    goto code_r0x000100cfaab4;
  case '\a':
    FUN_100c9d908(param_1 + 0x57);
    goto code_r0x000100cfa9ac;
  case '\b':
    FUN_100d4294c(param_1 + 0x57);
    lVar5 = param_1[0x40];
    if (lVar5 == -0x7fffffffffffffe0) goto code_r0x000100cfa9ac;
code_r0x000100cfaa64:
    if (lVar5 != -0x7ffffffffffffff3) {
      FUN_100df5738(param_1 + 0x40);
    }
    *(undefined1 *)((long)param_1 + 0x2b2) = 0;
    *(undefined1 *)((long)param_1 + 0x2b2) = 0;
    goto code_r0x000100cfaaa8;
  case '\t':
    FUN_100d35c78(param_1 + 0x62);
    _free(param_1[0x61]);
    *(undefined1 *)((long)param_1 + 0x2b4) = 0;
    if (param_1[0x5a] < -0x7ffffffffffffffe || param_1[0x5a] == 0) {
      lVar5 = param_1[0x5d];
    }
    else {
      _free(param_1[0x5b]);
      lVar5 = param_1[0x5d];
    }
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x50) == -0x8000000000000000 || *(long *)(lVar5 + 0x50) == 0) {
        if (*(long *)(lVar5 + 0x68) == -0x8000000000000000 || *(long *)(lVar5 + 0x68) == 0)
        goto code_r0x000100cfaa0c;
code_r0x000100cfac64:
        _free(*(undefined8 *)(lVar5 + 0x70));
        if (-0x7fffffffffffffff < *(long *)(lVar5 + 0x80) && *(long *)(lVar5 + 0x80) != 0)
        goto code_r0x000100cfac84;
      }
      else {
        _free(*(undefined8 *)(lVar5 + 0x58));
        if (*(long *)(lVar5 + 0x68) != -0x8000000000000000 && *(long *)(lVar5 + 0x68) != 0)
        goto code_r0x000100cfac64;
code_r0x000100cfaa0c:
        if (-0x7fffffffffffffff < *(long *)(lVar5 + 0x80) && *(long *)(lVar5 + 0x80) != 0) {
code_r0x000100cfac84:
          _free(*(undefined8 *)(lVar5 + 0x88));
        }
      }
      _free(lVar5);
    }
    if ((param_1[0x57] != -0x8000000000000000) && (param_1[0x57] != 0)) {
      _free(param_1[0x58]);
    }
    *(undefined1 *)((long)param_1 + 0x2b5) = 0;
    lVar5 = param_1[0x40];
    if (lVar5 != -0x7fffffffffffffe0) goto code_r0x000100cfaa64;
code_r0x000100cfa9ac:
    *(undefined1 *)((long)param_1 + 0x2b2) = 0;
    goto code_r0x000100cfaaa8;
  case '\n':
    FUN_100d1ddbc(param_1 + 0x57);
    break;
  case '\v':
    FUN_100d7ca28(param_1 + 0x57);
    break;
  case '\f':
    FUN_100de8a5c(param_1 + 0x57);
  }
  if ((*(byte *)((long)param_1 + 0x2b1) & 1) != 0) {
    FUN_100df5738(param_1 + 0x2d);
  }
code_r0x000100cfaaa8:
  *(undefined1 *)((long)param_1 + 0x2b1) = 0;
  FUN_100df93d8(param_1 + 0x1a);
code_r0x000100cfaab4:
  lVar5 = param_1[0x17];
  if (lVar5 != -0x8000000000000000) {
    lVar3 = param_1[0x18];
    lVar1 = param_1[0x19] + 1;
    lVar2 = lVar3;
    while (lVar1 = lVar1 + -1, lVar1 != 0) {
      FUN_100e02a24(lVar2);
      lVar2 = lVar2 + 0xc0;
    }
    if (lVar5 != 0) {
      _free(lVar3);
    }
  }
  FUN_100e753c0(param_1 + 0x14);
code_r0x000100cfaafc:
  FUN_100e1c748(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    _free(param_1[0xd]);
  }
code_r0x000100cfab14:
  lVar5 = *(long *)param_1[0xb];
  *(long *)param_1[0xb] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE();
  }
code_r0x000100cfab34:
  lVar5 = *(long *)param_1[3];
  *(long *)param_1[3] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
  }
  lVar5 = *(long *)param_1[4];
  *(long *)param_1[4] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 5);
  lVar5 = *(long *)param_1[5];
  *(long *)param_1[5] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 5);
  }
  lVar5 = *(long *)param_1[6];
  *(long *)param_1[6] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E();
  }
  if ((*(byte *)((long)param_1 + 0x2b3) & 1) != 0) {
    lVar1 = param_1[1];
    lVar5 = param_1[2] + 1;
    lVar3 = lVar1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100e02a24(lVar3);
      lVar3 = lVar3 + 0xc0;
    }
code_r0x000100cfabdc:
    if (*param_1 != 0) {
      _free(lVar1);
    }
  }
  plVar4 = (long *)param_1[7];
  lVar5 = *plVar4;
  *plVar4 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    lVar5 = param_1[7];
    if (*(long *)(lVar5 + 0x10) != 0) {
      _free(*(undefined8 *)(lVar5 + 0x18));
    }
    FUN_103349628(lVar5 + 0x28);
    if (lVar5 != -1) {
      lVar1 = *(long *)(lVar5 + 8);
      *(long *)(lVar5 + 8) = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar5);
        return;
      }
    }
    return;
  }
LAB_100cfac20:
  return;
}

