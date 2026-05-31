
void FUN_103db0658(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar2 = **(long **)(param_1 + 0x20);
  **(long **)(param_1 + 0x20) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
  }
  FUN_103dac1cc(param_1 + 0x30);
  if (*(long *)(param_1 + 0xa00) != 0) {
    (**(code **)(*(long *)(param_1 + 0xa00) + 0x18))(*(undefined8 *)(param_1 + 0xa08));
  }
  plVar4 = *(long **)(param_1 + 0xa10);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = *(long *)(param_1 + 0xa10);
      puVar1 = *(undefined8 **)(param_1 + 0xa18);
      uVar5 = puVar1[2];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lVar2 + (uVar5 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (lVar2 != -1) {
        lVar3 = *(long *)(lVar2 + 8);
        *(long *)(lVar2 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar5 < 9) {
            uVar5 = 8;
          }
          if ((uVar5 + puVar1[1] + 0xf & -uVar5) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar2);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

