
void FUN_10603de38(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    plVar2 = (long *)param_1[1];
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = param_1[1];
      if (*(undefined1 **)(lVar1 + 0x18) != (undefined1 *)0x0) {
        lVar3 = *(long *)(lVar1 + 0x20);
        **(undefined1 **)(lVar1 + 0x18) = 0;
        if (lVar3 != 0) {
          _free();
        }
      }
      _dispatch_release(*(undefined8 *)(lVar1 + 0x28));
      if (lVar1 != -1) {
        lVar3 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
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

