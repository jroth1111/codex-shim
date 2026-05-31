
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100dea470(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  
  FUN_100e584f0();
  FUN_100e4ebb0(param_1 + 8);
  plVar12 = *(long **)(param_1 + 0x18);
  lVar5 = plVar12[0x2c];
  plVar12[0x2c] = lVar5 + -1;
  if (lVar5 == 1) {
    plVar10 = plVar12 + 0x23;
    if ((char)*plVar10 == '\0') {
      *(char *)plVar10 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar10,extraout_x1,1000000000);
    }
    plStack_58 = plVar12 + 0x22;
    lStack_48 = *plStack_58;
    plStack_50 = plVar10;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_58);
  }
  lVar5 = *plVar12;
  *plVar12 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001034c6a4c((undefined8 *)(param_1 + 0x18));
  }
  lVar5 = **(long **)(param_1 + 0x28);
  **(long **)(param_1 + 0x28) = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
  }
  plVar12 = (long *)(param_1 + 0x30);
  plVar10 = (long *)*plVar12;
  uVar9 = *(ulong *)(param_1 + 0x38);
  if (uVar9 == 0xffffffffffffffff || plVar10 == (long *)0x0) goto LAB_100d97adc;
  lVar5 = plVar10[2];
  if (*(long *)(lVar5 + 0x18) == 0) {
    FUN_108854158(lVar5 + 0x18);
  }
  iVar7 = _pthread_mutex_lock();
  if (iVar7 != 0) {
    FUN_108a81ad4();
    goto LAB_100d97b98;
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      uVar8 = 0;
      lVar6 = *(long *)(lVar5 + 0x28);
joined_r0x000100d97b64:
      if (lVar6 != -0x8000000000000000) {
        if ((*(ulong *)(lVar5 + 0x38) <= uVar9) ||
           (puVar11 = (uint *)(*(long *)(lVar5 + 0x30) + uVar9 * 0x18), (*puVar11 & 1) == 0)) {
          func_0x000108a079f0(&UNK_108cc5715,0xb,&UNK_10b24ea10);
LAB_100d97b98:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100d97b9c);
          (*pcVar4)();
        }
        lVar6 = *(long *)(puVar11 + 2);
        uVar2 = *(undefined8 *)(puVar11 + 4);
        lVar1 = *(long *)(lVar5 + 0x40);
        uVar3 = *(undefined8 *)(lVar5 + 0x48);
        puVar11[0] = 0;
        puVar11[1] = 0;
        *(undefined8 *)(puVar11 + 2) = uVar3;
        *(long *)(lVar5 + 0x40) = lVar1 + -1;
        *(ulong *)(lVar5 + 0x48) = uVar9;
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))(uVar2);
        }
      }
      if (((uVar8 & 1) != 0) ||
         ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0)) goto LAB_100d97ad0;
      uVar9 = func_0x000108a82c0c();
    }
    else {
LAB_100d97a58:
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) goto LAB_100d97ad0;
      uVar9 = func_0x000108a82c0c();
    }
    if ((uVar9 & 1) == 0) {
      *(undefined1 *)(lVar5 + 0x20) = 1;
    }
  }
  else {
    uVar8 = func_0x000108a82c0c();
    if (*(char *)(lVar5 + 0x20) == '\0') {
      uVar8 = uVar8 ^ 1;
      lVar6 = *(long *)(lVar5 + 0x28);
      goto joined_r0x000100d97b64;
    }
    if (uVar8 != 0) goto LAB_100d97a58;
  }
LAB_100d97ad0:
  _pthread_mutex_unlock(*(undefined8 *)(lVar5 + 0x18));
  plVar10 = (long *)*plVar12;
LAB_100d97adc:
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    *plVar10 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      lVar5 = *plVar12;
      FUN_1033478f4(lVar5 + 0x10);
      if (lVar5 != -1) {
        lVar6 = *(long *)(lVar5 + 8);
        *(long *)(lVar5 + 8) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar5);
          return;
        }
      }
      return;
    }
  }
  return;
}

