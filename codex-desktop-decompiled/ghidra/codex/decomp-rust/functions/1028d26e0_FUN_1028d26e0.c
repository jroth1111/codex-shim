
void FUN_1028d26e0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  cVar3 = *(char *)(param_1 + 0xe2);
  if (cVar3 == '\0') {
    plVar8 = (long *)(param_1 + 0xd0);
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      LOAcquire();
      uVar4 = *(ulong *)(lVar9 + 0x30);
      *(ulong *)(lVar9 + 0x30) = uVar4 | 4;
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(*(undefined8 *)(lVar9 + 0x18));
      }
      if (((uint)uVar4 >> 1 & 1) != 0) {
        *(undefined1 *)(lVar9 + 0x38) = 0;
      }
      plVar7 = (long *)*plVar8;
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        *plVar7 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(plVar8);
        }
      }
    }
    func_0x0001028d6fbc(param_1 + 0xb0);
    lVar9 = **(long **)(param_1 + 0xc0);
    **(long **)(param_1 + 0xc0) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001028da19c();
    }
    goto LAB_1028d2870;
  }
  if (cVar3 == '\x03') {
    lVar9 = *(long *)(param_1 + 0x100);
    if (lVar9 != 0) {
      FUN_1028d3248(lVar9);
      goto LAB_1028d2754;
    }
  }
  else {
    if (cVar3 != '\x04') {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    puVar2 = *(undefined8 **)(param_1 + 0x1b8);
    pcVar6 = (code *)*puVar2;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar1);
    }
    if (puVar2[1] != 0) {
      _free(uVar1);
    }
    *(undefined2 *)(param_1 + 0xe0) = 0;
    if (*(long *)(param_1 + 0xe8) != 0) {
      lVar9 = *(long *)(param_1 + 0xf0);
LAB_1028d2754:
      _free(lVar9);
    }
  }
  plVar8 = (long *)(param_1 + 0xd0);
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    LOAcquire();
    uVar4 = *(ulong *)(lVar9 + 0x30);
    *(ulong *)(lVar9 + 0x30) = uVar4 | 4;
    if ((uVar4 & 10) == 8) {
      (**(code **)(*(long *)(lVar9 + 0x10) + 0x10))(*(undefined8 *)(lVar9 + 0x18));
    }
    if (((uint)uVar4 >> 1 & 1) != 0) {
      *(undefined1 *)(lVar9 + 0x38) = 0;
    }
    plVar7 = (long *)*plVar8;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      *plVar7 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc920a624365fa6d7E(plVar8);
      }
    }
  }
  func_0x0001028d6fbc(param_1 + 0xb0);
  lVar9 = **(long **)(param_1 + 0xc0);
  **(long **)(param_1 + 0xc0) = lVar9 + -1;
  LORelease();
  if (lVar9 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001028da19c();
  }
LAB_1028d2870:
  plVar8 = *(long **)(param_1 + 0xd8);
  lVar9 = *plVar8;
  *plVar8 = lVar9 + -1;
  LORelease();
  if (lVar9 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar9 = *(long *)(param_1 + 0xd8);
  FUN_1028d4e44(lVar9 + 0x10);
  if (lVar9 != -1) {
    lVar5 = *(long *)(lVar9 + 8);
    *(long *)(lVar9 + 8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar9);
      return;
    }
  }
  return;
}

