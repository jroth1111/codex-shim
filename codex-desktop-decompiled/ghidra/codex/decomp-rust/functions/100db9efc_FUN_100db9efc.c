
void FUN_100db9efc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_100e36f18(param_1 + 0x20);
  if (*(int *)(param_1 + 0x48) == 1) {
    FUN_100d6bd08(param_1 + 0x50);
  }
  else if ((*(int *)(param_1 + 0x48) == 0) &&
          ((*(ulong *)(param_1 + 0x50) & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar4 = *(long **)(param_1 + 0x90);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = *(long *)(param_1 + 0x90);
      puVar1 = *(undefined8 **)(param_1 + 0x98);
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

