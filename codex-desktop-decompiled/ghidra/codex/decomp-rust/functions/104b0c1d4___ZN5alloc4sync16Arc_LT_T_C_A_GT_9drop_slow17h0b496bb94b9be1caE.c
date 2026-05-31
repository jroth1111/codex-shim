
void __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b496bb94b9be1caE(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  puVar2 = *(undefined8 **)(lVar5 + 0x18);
  pcVar4 = (code *)*puVar2;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar1);
  }
  if (puVar2[1] != 0) {
    _free(uVar1);
  }
  if (lVar5 != -1) {
    lVar3 = *(long *)(lVar5 + 8);
    *(long *)(lVar5 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
  }
  return;
}

