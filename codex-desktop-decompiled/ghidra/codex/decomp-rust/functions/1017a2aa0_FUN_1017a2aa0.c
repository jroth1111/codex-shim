
void FUN_1017a2aa0(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong in_xzr;
  
  plVar5 = (long *)*param_1;
  LOAcquire();
  lVar2 = plVar5[0x39];
  plVar5[0x39] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = plVar5[0x11];
    plVar5[0x11] = lVar2 + 1;
    lVar2 = func_0x0001017af770(plVar5 + 0x10,lVar2);
    *(ulong *)(lVar2 + 0x710) = *(ulong *)(lVar2 + 0x710) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(plVar5 + 0x22);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = plVar5[0x20];
      plVar5[0x20] = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(plVar5[0x21]);
      }
    }
  }
  lVar2 = *plVar5;
  *plVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    lVar2 = *param_1;
    func_0x0001017a2f7c(lVar2 + 0x80);
    if (lVar2 != -1) {
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(lVar2 + 8) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar2);
        return;
      }
    }
    return;
  }
  return;
}

