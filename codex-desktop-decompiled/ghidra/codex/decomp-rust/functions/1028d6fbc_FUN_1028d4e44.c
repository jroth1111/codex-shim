
void FUN_1028d4e44(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_1028d256c(param_1 + 0x40);
  FUN_1028d2eb0(param_1 + 0x98);
  FUN_1028d6988(param_1);
  plVar1 = (long *)(param_1 + 8);
  LOAcquire();
  lVar2 = *(long *)(*plVar1 + 0x2a8);
  *(long *)(*plVar1 + 0x2a8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    lVar2 = *plVar1;
    if (*(long *)(lVar2 + 0x80) == 0) {
      LOAcquire();
      uVar3 = *(ulong *)(lVar2 + 0x138);
      *(ulong *)(lVar2 + 0x138) = uVar3 | 4;
      LORelease();
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_1028d705c;
    }
    else {
      if (*(long *)(lVar2 + 0x80) == 1) {
        LOAcquire();
        uVar3 = *(ulong *)(lVar2 + 0x180);
        *(ulong *)(lVar2 + 0x180) = uVar3 | *(ulong *)(lVar2 + 0x208);
        LORelease();
        uVar3 = *(ulong *)(lVar2 + 0x208) & uVar3;
      }
      else {
        LOAcquire();
        uVar3 = *(ulong *)(lVar2 + 0x180);
        *(ulong *)(lVar2 + 0x180) = uVar3 | 1;
        LORelease();
        uVar3 = uVar3 & 1;
      }
      if (uVar3 != 0) goto LAB_1028d705c;
    }
    FUN_1088fba38(lVar2 + 0x280);
    FUN_1088fba38(lVar2 + 0x288);
    FUN_1088fba38(lVar2 + 0x290);
    FUN_1088fba38(lVar2 + 0x298);
  }
LAB_1028d705c:
  lVar2 = *(long *)*plVar1;
  *(long *)*plVar1 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001028da250(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_1028d3248(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

