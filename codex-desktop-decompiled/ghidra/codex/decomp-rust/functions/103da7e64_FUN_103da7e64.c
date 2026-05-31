
void FUN_103da7e64(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar1 = **(long **)(param_1 + 0x20);
  **(long **)(param_1 + 0x20) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if (*(ulong *)(param_1 + 0x38) == 3) {
      lVar1 = *(long *)(param_1 + 0x48);
      if (lVar1 == 0) goto LAB_103da7f10;
      puVar4 = *(undefined8 **)(param_1 + 0x50);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar1);
      }
    }
    else {
      if ((*(ulong *)(param_1 + 0x38) < 2) || (lVar1 = *(long *)(param_1 + 0x48), lVar1 == 0))
      goto LAB_103da7f10;
      puVar4 = *(undefined8 **)(param_1 + 0x50);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar1);
      }
    }
    if (puVar4[1] != 0) {
      _free(lVar1);
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    func_0x000103da23f0(param_1 + 0x38);
  }
LAB_103da7f10:
  if (*(long *)(param_1 + 0x3a8) != 0) {
    (**(code **)(*(long *)(param_1 + 0x3a8) + 0x18))(*(undefined8 *)(param_1 + 0x3b0));
  }
  plVar3 = *(long **)(param_1 + 0x3b8);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x3b8);
      puVar4 = *(undefined8 **)(param_1 + 0x3c0);
      uVar5 = puVar4[2];
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar1 + (uVar5 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar5 < 9) {
            uVar5 = 8;
          }
          if ((uVar5 + puVar4[1] + 0xf & -uVar5) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar1);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

