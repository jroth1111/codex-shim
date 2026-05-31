
void FUN_100e02180(long *param_1)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  lVar4 = *(long *)param_1[9];
  *(long *)param_1[9] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar4 = *(long *)param_1[10];
  *(long *)param_1[10] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0xc);
  lVar4 = *(long *)param_1[0xc];
  *(long *)param_1[0xc] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0xc);
  }
  puVar6 = (ulong *)param_1[0xd];
  uVar8 = *puVar6;
  do {
    if ((uVar8 & 0x22) != 0) {
      bVar2 = false;
      goto LAB_100e0228c;
    }
    if ((uVar8 & 1) == 0) {
      if (((uint)uVar8 >> 2 & 1) == 0) {
        if ((long)uVar8 < 0) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e0234c);
          (*pcVar3)();
        }
        uVar9 = uVar8 + 100;
        bVar2 = true;
      }
      else {
        bVar2 = false;
        uVar9 = uVar8 | 0x20;
      }
    }
    else {
      bVar2 = false;
      uVar9 = uVar8 | 0x24;
    }
    bVar1 = *puVar6 != uVar8;
    uVar8 = *puVar6;
  } while (bVar1);
  *puVar6 = uVar9;
LAB_100e0228c:
  if (bVar2) {
    (**(code **)(puVar6[2] + 8))();
  }
  plVar7 = (long *)param_1[0xd];
  if (*plVar7 == 0xcc) {
    *plVar7 = 0x84;
  }
  else {
    (**(code **)(plVar7[2] + 0x20))();
  }
  lVar4 = *(long *)param_1[0xe];
  *(long *)param_1[0xe] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  lVar4 = *(long *)param_1[0xf];
  *(long *)param_1[0xf] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E();
  }
  if (*param_1 == -0x8000000000000000) {
    return;
  }
  __ZN75__LT_codex_otel__metrics__timer__Timer_u20_as_u20_core__ops__drop__Drop_GT_4drop17haeb6d7ad7698da23E
            ();
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  lVar4 = param_1[4];
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    puVar10 = (undefined8 *)(lVar4 + 0x20);
    do {
      if (puVar10[-4] != 0) {
        _free(puVar10[-3]);
      }
      if (puVar10[-1] != 0) {
        _free(*puVar10);
      }
      puVar10 = puVar10 + 6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[3] != 0) {
    _free(lVar4);
  }
  plVar7 = (long *)param_1[8];
  lVar4 = *plVar7;
  *plVar7 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    lVar4 = param_1[8];
    FUN_1048c99e8(lVar4 + 0x10);
    if (lVar4 != -1) {
      lVar5 = *(long *)(lVar4 + 8);
      *(long *)(lVar4 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar4);
        return;
      }
    }
    return;
  }
  return;
}

