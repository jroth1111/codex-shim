
/* WARNING: Possible PIC construction at 0x000103db6a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db50b4: Changing call to branch */

void FUN_103db6a18(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 != 0) {
    func_0x000103d9a0b0(param_1 + 1);
  }
  if (param_1[4] != 0) {
    func_0x000103d9a0b0(param_1 + 5);
  }
  plVar3 = param_1 + 8;
  if (*plVar3 == -0x8000000000000000) {
    if (param_1[0x11] != -0x8000000000000000) {
      func_0x000103dc1800();
    }
    plVar3 = param_1 + 0x1a;
    if (*plVar3 == -0x7fffffffffffffff) {
      return;
    }
    puVar1 = &stack0xfffffffffffffff0;
    if (param_1[0x2c] != -0x7ffffffffffffffe) {
      func_0x000103db9570();
    }
    if (*plVar3 == -0x8000000000000000) {
      plVar3 = param_1 + 0x23;
      if (*plVar3 == -0x8000000000000000) {
        return;
      }
    }
    else {
      unaff_x30 = &LAB_103db50b8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = plVar3;
      unaff_x20 = 0x8000000000000000;
      unaff_x29 = puVar1;
    }
  }
  else {
    unaff_x30 = (undefined1 *)0x103db6a60;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x20 = 0x8000000000000000;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined1 **)((long)register0x00000008 + -8) = unaff_x30;
  lVar5 = plVar3[4];
  if (lVar5 != 0 && lVar5 * 9 != -0x11) {
    _free(plVar3[3] + lVar5 * -8 + -8);
  }
  lVar2 = plVar3[1];
  lVar5 = plVar3[2] + 1;
  lVar4 = lVar2;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    func_0x000103dc0794(lVar4);
    lVar4 = lVar4 + 0x68;
  }
  if (*plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

