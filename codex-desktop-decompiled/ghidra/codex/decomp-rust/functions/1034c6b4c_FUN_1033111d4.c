
void FUN_1033111d4(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0xf2);
  if (bVar1 < 6) {
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 0x168) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x160) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x118) != '\x04') {
        return;
      }
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x120);
      if (*(long *)(param_1 + 0x128) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001033112ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x128) + 0x18))(*(undefined8 *)(param_1 + 0x130));
      return;
    }
    if (bVar1 == 4) {
      FUN_10330c564(param_1 + 0x1a0);
      FUN_1033e92a4(param_1 + 0x180);
      goto LAB_103311338;
    }
    if (bVar1 != 5) {
      return;
    }
    if (*(char *)(param_1 + 0x13a) != '\x03') goto LAB_103311338;
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    puVar5 = *(undefined8 **)(param_1 + 0x110);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar6);
    }
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 == 7) {
        if ((((*(char *)(param_1 + 0x180) == '\x03') && (*(char *)(param_1 + 0x178) == '\x03')) &&
            (*(char *)(param_1 + 0x170) == '\x03')) && (*(char *)(param_1 + 0x128) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x130);
          if (*(long *)(param_1 + 0x138) != 0) {
            (**(code **)(*(long *)(param_1 + 0x138) + 0x18))(*(undefined8 *)(param_1 + 0x140));
          }
        }
      }
      else {
        if (bVar1 != 8) {
          return;
        }
        if (*(char *)(param_1 + 0x58a0) == '\x03') {
          FUN_103331fe8(param_1 + 0x110);
        }
      }
      goto LAB_103311338;
    }
    uVar6 = *(undefined8 *)(param_1 + 0xf8);
    puVar5 = *(undefined8 **)(param_1 + 0x100);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar6);
    }
  }
  if (puVar5[1] != 0) {
    _free(uVar6);
  }
LAB_103311338:
  plVar4 = *(long **)(param_1 + 0xe0);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
  }
  *(undefined1 *)(param_1 + 0xf1) = 0;
  FUN_1032c7dbc(param_1 + 0x60);
  plVar4 = *(long **)(param_1 + 0xa8);
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(param_1 + 0xa8);
  FUN_103391b2c(lVar2 + 0x38);
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

