
void FUN_100dcb9a0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plStack_38;
  
  puVar3 = (undefined8 *)(param_1 + 8);
  plVar2 = (long *)*puVar3;
  *puVar3 = 0;
  if (plVar2 != (long *)0x0) {
    LOAcquire();
    lVar1 = plVar2[0xbf];
    *(char *)(plVar2 + 0xbf) = '\x01';
    LORelease();
    plStack_38 = plVar2;
    FUN_100d9429c(plVar2 + 3);
    plVar2[3] = 0;
    if ((char)lVar1 == '\0') {
      lVar1 = *plVar2;
      *plVar2 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f372c9ab5a49609E(&plStack_38);
      }
    }
    plVar2 = (long *)*puVar3;
    if (plVar2 != (long *)0x0) {
      lVar1 = *plVar2;
      *plVar2 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f372c9ab5a49609E(puVar3);
      }
    }
  }
  return;
}

