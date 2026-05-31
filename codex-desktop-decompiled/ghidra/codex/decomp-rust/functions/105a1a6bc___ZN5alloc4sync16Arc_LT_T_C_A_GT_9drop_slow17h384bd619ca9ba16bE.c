
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h384bd619ca9ba16bE(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = *param_1;
  uVar4 = *(ulong *)(lVar3 + 0x10);
  if ((uVar4 & 3) == 1) {
    uVar6 = *(undefined8 *)(uVar4 - 1);
    puVar5 = *(undefined8 **)(uVar4 + 7);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar6);
    }
    if (puVar5[1] != 0) {
      _free(uVar6);
    }
    _free((undefined8 *)(uVar4 - 1));
  }
  if (lVar3 != -1) {
    lVar1 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

