
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103385e7c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  uint *puVar11;
  long *plVar12;
  long *plStack_58;
  
  FUN_1033d2278();
  FUN_1033cc8e0(param_1 + 8);
  plVar12 = *(long **)(param_1 + 0x18);
  lVar6 = plVar12[0x2c];
  plVar12[0x2c] = lVar6 + -1;
  if (lVar6 == 1) {
    plVar1 = plVar12 + 0x23;
    if ((char)*plVar1 == '\0') {
      *(char *)plVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar1,extraout_x1,1000000000);
    }
    plStack_58 = plVar12 + 0x22;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_58);
  }
  lVar6 = *plVar12;
  *plVar12 = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001034c6a4c((undefined8 *)(param_1 + 0x18));
  }
  lVar6 = **(long **)(param_1 + 0x28);
  **(long **)(param_1 + 0x28) = lVar6 + -1;
  LORelease();
  if (lVar6 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
  }
  plVar12 = *(long **)(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x38);
  if (uVar10 == 0xffffffffffffffff || plVar12 == (long *)0x0) {
    if (plVar12 == (long *)0x0) {
      return;
    }
    lVar6 = *plVar12;
    *plVar12 = lVar6 + -1;
    LORelease();
    goto joined_r0x0001033483bc;
  }
  lVar6 = plVar12[2];
  if (*(long *)(lVar6 + 0x18) == 0) {
    FUN_10893b764(lVar6 + 0x18);
  }
  iVar8 = _pthread_mutex_lock();
  if (iVar8 != 0) {
    FUN_108a81ad4();
    goto LAB_10334844c;
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      uVar9 = 0;
      lVar7 = *(long *)(lVar6 + 0x28);
joined_r0x000103348418:
      if (lVar7 != -0x8000000000000000) {
        if ((*(ulong *)(lVar6 + 0x38) <= uVar10) ||
           (puVar11 = (uint *)(*(long *)(lVar6 + 0x30) + uVar10 * 0x18), (*puVar11 & 1) == 0)) {
          func_0x000108a079f0(&UNK_108d87a85,0xb,&UNK_10b2d1d48);
LAB_10334844c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103348450);
          (*pcVar5)();
        }
        lVar7 = *(long *)(puVar11 + 2);
        uVar3 = *(undefined8 *)(puVar11 + 4);
        lVar2 = *(long *)(lVar6 + 0x40);
        uVar4 = *(undefined8 *)(lVar6 + 0x48);
        puVar11[0] = 0;
        puVar11[1] = 0;
        *(undefined8 *)(puVar11 + 2) = uVar4;
        *(long *)(lVar6 + 0x40) = lVar2 + -1;
        *(ulong *)(lVar6 + 0x48) = uVar10;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(uVar3);
        }
      }
      if (((uVar9 & 1) != 0) ||
         ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0)) goto LAB_1033483a8;
      uVar10 = func_0x000108a82c0c();
    }
    else {
LAB_103348330:
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) goto LAB_1033483a8;
      uVar10 = func_0x000108a82c0c();
    }
    if ((uVar10 & 1) == 0) {
      *(undefined1 *)(lVar6 + 0x20) = 1;
    }
  }
  else {
    uVar9 = func_0x000108a82c0c();
    if (*(char *)(lVar6 + 0x20) == '\0') {
      uVar9 = uVar9 ^ 1;
      lVar7 = *(long *)(lVar6 + 0x28);
      goto joined_r0x000103348418;
    }
    if (uVar9 != 0) goto LAB_103348330;
  }
LAB_1033483a8:
  _pthread_mutex_unlock(*(undefined8 *)(lVar6 + 0x18));
  lVar6 = *plVar12;
  *plVar12 = lVar6 + -1;
  LORelease();
joined_r0x0001033483bc:
  if (lVar6 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar6 = *(long *)(param_1 + 0x30);
  FUN_1033478f4(lVar6 + 0x10);
  if (lVar6 != -1) {
    lVar7 = *(long *)(lVar6 + 8);
    *(long *)(lVar6 + 8) = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar6);
      return;
    }
  }
  return;
}

