
/* WARNING: Possible PIC construction at 0x000100e1f9a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e1f9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e17890: Changing call to branch */

void FUN_100e1f934(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 != 0) {
    FUN_100d755b4(param_1 + 1);
  }
  if (param_1[4] != 0) {
    FUN_100d755b4(param_1 + 5);
  }
  plVar3 = param_1 + 8;
  if (*plVar3 == -0x8000000000000000) {
    plVar3 = param_1 + 0x11;
    if (*plVar3 == -0x8000000000000000) {
      plVar3 = param_1 + 0x1a;
      if (*plVar3 == -0x7fffffffffffffff) {
        return;
      }
      puVar1 = &stack0xfffffffffffffff0;
      if (param_1[0x2c] != -0x7ffffffffffffffe) {
        FUN_100e2bb8c();
      }
      if (*plVar3 == -0x8000000000000000) {
        plVar3 = param_1 + 0x23;
        if (*plVar3 == -0x8000000000000000) {
          return;
        }
        lVar4 = param_1[0x27];
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(param_1[0x26] + lVar4 * -8 + -8);
        }
      }
      else {
        lVar4 = param_1[0x1e];
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(param_1[0x1d] + lVar4 * -8 + -8);
        }
        unaff_x30 = 0x100e17894;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = plVar3;
        unaff_x21 = 0x8000000000000000;
        unaff_x29 = puVar1;
      }
    }
    else {
      lVar4 = param_1[0x15];
      if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
        _free(param_1[0x14] + lVar4 * -8 + -8);
      }
      unaff_x30 = 0x100e1f9ec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = plVar3;
      unaff_x21 = 0x8000000000000000;
      unaff_x29 = puVar1;
    }
  }
  else {
    lVar4 = param_1[0xc];
    if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
      _free(param_1[0xb] + lVar4 * -8 + -8);
    }
    unaff_x30 = 0x100e1f9ac;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
    unaff_x21 = 0x8000000000000000;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = (long *)plVar3[1];
  lVar4 = plVar3[2] + 1;
  plVar5 = plVar2;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    if (*plVar5 != 0) {
      _free(plVar5[1]);
    }
    FUN_100de6690(plVar5 + 3);
    plVar5 = plVar5 + 0xd;
  }
  if (*plVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

