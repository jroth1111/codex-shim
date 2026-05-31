
/* WARNING: Possible PIC construction at 0x000103db959c: Changing call to branch */

void FUN_103db9570(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 < -0x7ffffffffffffffe) {
    if (-0x7fffffffffffffff < param_1[9]) {
      func_0x000103dc1800();
    }
    param_1 = param_1 + 0x12;
    if (*param_1 < -0x7ffffffffffffffe) {
      return;
    }
  }
  else {
    unaff_x30 = 0x103db95a0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x21 = 0x8000000000000002;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar4 = param_1[4];
  if (lVar4 != 0 && lVar4 * 9 != -0x11) {
    _free(param_1[3] + lVar4 * -8 + -8);
  }
  lVar2 = param_1[1];
  lVar4 = param_1[2] + 1;
  lVar3 = lVar2;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    func_0x000103dc0794(lVar3);
    lVar3 = lVar3 + 0x68;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

