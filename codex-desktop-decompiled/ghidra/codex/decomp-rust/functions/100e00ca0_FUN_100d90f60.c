
/* WARNING: Possible PIC construction at 0x000100d90f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d90f88) */

void FUN_100d90f60(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar4;
  undefined8 unaff_x22;
  short *psVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    FUN_100deb62c(param_1);
    func_0x000100e3c8d4(param_1 + 0x20);
    lVar3 = param_1 + 0x38;
  }
  else {
    if (*(char *)(param_1 + 0x2b8) != '\x03') {
      return;
    }
    lVar3 = param_1 + 0x180;
    unaff_x30 = 0x100d90f88;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (((*(int *)(lVar3 + 0x58) != 2) && (*(short *)(lVar3 + 0x98) != 2)) &&
     (8 < *(ulong *)(lVar3 + 0xc0))) {
    _free(*(undefined8 *)(lVar3 + 0xa8));
  }
  if ((*(long *)(lVar3 + 0x10) != 0) && (5 < *(ulong *)(lVar3 + 0x28))) {
    _free(*(undefined8 *)(lVar3 + 0x18));
  }
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != -0x8000000000000000) {
    lVar2 = *(long *)(lVar3 + 0x40);
    lVar3 = *(long *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      psVar5 = (short *)(lVar2 + 0x40);
      do {
        if (((*(uint *)(psVar5 + -0x20) < 2) && (*psVar5 != 2)) && (8 < *(ulong *)(psVar5 + 0x14)))
        {
          _free(*(undefined8 *)(psVar5 + 8));
        }
        psVar5 = psVar5 + 0x40;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

