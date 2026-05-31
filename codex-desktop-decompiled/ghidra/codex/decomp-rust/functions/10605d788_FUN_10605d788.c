
void FUN_10605d788(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  DataMemoryBarrier(2,1);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x18) != (undefined1 *)0x0) {
    lVar1 = *(long *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x18) = 0;
    if (lVar1 != 0) {
      _free();
    }
  }
  _dispatch_release(*(undefined8 *)(lVar2 + 0x28));
  if (lVar2 != -1) {
    lVar1 = *(long *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

