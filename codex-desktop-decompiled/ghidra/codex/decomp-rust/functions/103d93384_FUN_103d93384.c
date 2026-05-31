
void FUN_103d93384(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    uVar5 = plVar3[6];
    do {
      uVar4 = uVar5;
      if (((uint)uVar4 >> 2 & 1) != 0) goto LAB_103d933bc;
      uVar5 = plVar3[6];
    } while (uVar5 != uVar4);
    plVar3[6] = uVar4 | 2;
LAB_103d933bc:
    if ((uVar4 & 5) == 1) {
      (**(code **)(plVar3[4] + 0x10))(plVar3[5]);
      plVar3 = (long *)*param_1;
      if (plVar3 == (long *)0x0) {
        return;
      }
    }
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *param_1;
      uVar5 = *(ulong *)(lVar1 + 0x30);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*(long *)(lVar1 + 0x20) + 0x18))(*(undefined8 *)(lVar1 + 0x28));
      }
      if (((uint)uVar5 >> 3 & 1) != 0) {
        (**(code **)(*(long *)(lVar1 + 0x10) + 0x18))(*(undefined8 *)(lVar1 + 0x18));
      }
      if ((*(ulong *)(lVar1 + 0x38) & 0xfffffffffffffffe) != 0x8000000000000006) {
        FUN_105c9e95c();
      }
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar1);
          return;
        }
      }
      return;
    }
  }
  return;
}

