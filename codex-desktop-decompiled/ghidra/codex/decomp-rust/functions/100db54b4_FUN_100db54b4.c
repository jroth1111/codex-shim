
void FUN_100db54b4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000108a0b760(&UNK_108ca1e1c,0x1f);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100db5530);
    (*pcVar2)();
  }
  FUN_100d94828();
  if (*(long *)(param_1 + 0x10) != -1) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    lVar3 = *plVar1;
    *plVar1 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

