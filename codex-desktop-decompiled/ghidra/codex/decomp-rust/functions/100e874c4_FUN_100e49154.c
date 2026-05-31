
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e49154(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  uint *puVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_1 + 0x829) != '\0') {
    if (*(char *)(param_1 + 0x829) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x821) != '\0') {
      if (*(char *)(param_1 + 0x821) == '\x03') {
        if (*(char *)(param_1 + 0x818) == '\x03') {
          uVar13 = *(undefined8 *)(param_1 + 0x810);
          FUN_100e7de2c(uVar13);
          _free(uVar13);
        }
        else if (*(char *)(param_1 + 0x818) == '\0') {
          FUN_100df9554(param_1 + 0x538);
        }
        *(undefined1 *)(param_1 + 0x826) = 0;
        *(undefined4 *)(param_1 + 0x822) = 0;
      }
      return;
    }
    FUN_100e76384(param_1 + 0x290);
    FUN_100dff6cc(param_1 + 0x2a8);
    FUN_100e01cdc(param_1 + 0x460);
    FUN_100dd8a98(param_1 + 0x528);
    if (*(long *)(param_1 + 0x510) == -0x8000000000000000) {
      return;
    }
    if (*(long *)(param_1 + 0x510) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x518);
    goto code_r0x000108aa97c4;
  }
  FUN_100e76384(param_1);
  FUN_100dff6cc(param_1 + 0x18);
  FUN_100e01cdc(param_1 + 0x1d0);
  plVar1 = (long *)(param_1 + 0x280);
  plVar9 = (long *)*plVar1;
  uVar7 = *(ulong *)(param_1 + 0x288);
  if (uVar7 != 0xffffffffffffffff && plVar9 != (long *)0x0) {
    lVar8 = plVar9[2];
    if (*(long *)(lVar8 + 0x18) == 0) {
      FUN_108854158(lVar8 + 0x18);
    }
    iVar5 = _pthread_mutex_lock();
    if (iVar5 != 0) {
      FUN_108a81ad4();
      goto LAB_100dd8c38;
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      if (*(char *)(lVar8 + 0x20) == '\0') {
        uVar6 = 0;
        lVar10 = *(long *)(lVar8 + 0x28);
joined_r0x000100dd8c04:
        if (lVar10 != -0x8000000000000000) {
          if ((*(ulong *)(lVar8 + 0x38) <= uVar7) ||
             (puVar12 = (uint *)(*(long *)(lVar8 + 0x30) + uVar7 * 0x18), (*puVar12 & 1) == 0)) {
            func_0x000108a079f0(&UNK_108cc5715,0xb,&UNK_10b24ea10);
LAB_100dd8c38:
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100dd8c3c);
            (*pcVar11)();
          }
          lVar10 = *(long *)(puVar12 + 2);
          uVar13 = *(undefined8 *)(puVar12 + 4);
          lVar2 = *(long *)(lVar8 + 0x40);
          uVar3 = *(undefined8 *)(lVar8 + 0x48);
          puVar12[0] = 0;
          puVar12[1] = 0;
          *(undefined8 *)(puVar12 + 2) = uVar3;
          *(long *)(lVar8 + 0x40) = lVar2 + -1;
          *(ulong *)(lVar8 + 0x48) = uVar7;
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))(uVar13);
          }
        }
        if (((uVar6 & 1) != 0) ||
           ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0)) goto LAB_100dd8b70;
        uVar7 = func_0x000108a82c0c();
      }
      else {
LAB_100dd8af8:
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) goto LAB_100dd8b70;
        uVar7 = func_0x000108a82c0c();
      }
      if ((uVar7 & 1) == 0) {
        *(undefined1 *)(lVar8 + 0x20) = 1;
      }
    }
    else {
      uVar6 = func_0x000108a82c0c();
      if (*(char *)(lVar8 + 0x20) == '\0') {
        uVar6 = uVar6 ^ 1;
        lVar10 = *(long *)(lVar8 + 0x28);
        goto joined_r0x000100dd8c04;
      }
      if (uVar6 != 0) goto LAB_100dd8af8;
    }
LAB_100dd8b70:
    _pthread_mutex_unlock(*(undefined8 *)(lVar8 + 0x18));
    plVar9 = (long *)*plVar1;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar9;
  *plVar9 = lVar8 + -1;
  LORelease();
  if (lVar8 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar8 = *plVar1;
  lVar10 = *(long *)(lVar8 + 0x18);
  if (lVar10 != 2) {
    if (lVar10 == 3) {
      if (*(long *)(lVar8 + 0x20) != 0) {
        uVar13 = *(undefined8 *)(lVar8 + 0x28);
LAB_1034c7388:
        _free(uVar13);
      }
    }
    else if (lVar10 == 4) {
      uVar13 = *(undefined8 *)(lVar8 + 0x20);
      puVar4 = *(undefined8 **)(lVar8 + 0x28);
      pcVar11 = (code *)*puVar4;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar13);
      }
      if (puVar4[1] != 0) goto LAB_1034c7388;
    }
    else {
      FUN_1033c5aa8();
    }
  }
  lVar10 = **(long **)(lVar8 + 0x10);
  **(long **)(lVar8 + 0x10) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000102a3fd08(lVar8 + 0x10);
  }
  if (lVar8 != -1) {
    lVar10 = *(long *)(lVar8 + 8);
    *(long *)(lVar8 + 8) = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar8);
      return;
    }
  }
  return;
}

