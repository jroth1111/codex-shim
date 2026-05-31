
void FUN_100d548c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x2c90) == '\0') {
    FUN_100def764(param_1);
    FUN_100def764(param_1 + 0x60);
    plVar4 = *(long **)(param_1 + 200);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      *plVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001017ae870();
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2c90) != '\x03') {
      return;
    }
    FUN_100cbfaac(param_1 + 0x140);
    *(undefined2 *)(param_1 + 0x2c93) = 0;
    plVar4 = *(long **)(param_1 + 200);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      *plVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001017ae870();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0xd0);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      lVar2 = *(long *)(param_1 + 0xd0);
      puVar1 = *(undefined8 **)(param_1 + 0xd8);
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

