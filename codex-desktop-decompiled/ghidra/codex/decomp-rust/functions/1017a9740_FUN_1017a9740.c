
/* WARNING: Possible PIC construction at 0x0001017a6b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017a6b08) */
/* WARNING: Removing unreachable block (ram,0x0001017a6b38) */
/* WARNING: Removing unreachable block (ram,0x0001017a6b18) */

void FUN_1017a9740(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  byte *unaff_x22;
  long lVar4;
  long unaff_x23;
  byte *unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  FUN_1017a1d58(param_1 + 0x20);
  if (*param_1 == 0x16) {
    return;
  }
SUB_1017a6a48:
  do {
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    bVar1 = *param_1;
    uVar3 = (uint)bVar1;
    unaff_x20 = param_1;
    if (bVar1 < 0xd) {
      if (bVar1 < 0xc) {
        return;
      }
      if (uVar3 == 0xc) {
LAB_1017a6a9c:
        if (*(long *)(param_1 + 8) == 0) {
          return;
        }
        unaff_x19 = *(byte **)(param_1 + 0x10);
        goto LAB_1017a6b54;
      }
LAB_1017a6b1c:
      unaff_x19 = *(byte **)(param_1 + 0x10);
      unaff_x21 = *(long *)(param_1 + 0x18);
      if (unaff_x21 != 0) {
        unaff_x30 = 0x1017a6b38;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        param_1 = unaff_x19;
        unaff_x22 = unaff_x19;
        unaff_x23 = unaff_x21;
        unaff_x24 = unaff_x19;
        goto SUB_1017a6a48;
      }
      goto LAB_1017a6b4c;
    }
    if (bVar1 < 0x11) {
      if (uVar3 - 0xf < 2 || uVar3 == 0xd) {
        return;
      }
      if (uVar3 == 0xe) goto LAB_1017a6a9c;
      goto LAB_1017a6b1c;
    }
    if (0x12 < uVar3) {
      if (uVar3 == 0x13) {
        unaff_x19 = *(byte **)(param_1 + 8);
        unaff_x30 = 0x1017a6b18;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        param_1 = unaff_x19;
        goto SUB_1017a6a48;
      }
      if (uVar3 != 0x14) goto LAB_1017a6b1c;
      unaff_x19 = *(byte **)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x18) + 1;
      pbVar2 = unaff_x19;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        func_0x0001017a6a48(pbVar2);
        pbVar2 = pbVar2 + 0x20;
      }
LAB_1017a6b4c:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
LAB_1017a6b54:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(unaff_x19);
      return;
    }
    if (uVar3 != 0x11) {
      if (uVar3 == 0x12) {
        return;
      }
      goto LAB_1017a6b1c;
    }
    unaff_x19 = *(byte **)(param_1 + 8);
    unaff_x30 = 0x1017a6b08;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = unaff_x19;
  } while( true );
}

