
/* WARNING: Possible PIC construction at 0x000103382c00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103382c04) */

void FUN_10339d6d0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar3;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  FUN_1032aa3b0(param_1[10],(param_1[0xc] - param_1[10] >> 3) * 0x4ec4ec4ec4ec4ec5);
  if (param_1[0xb] != 0) {
    _free(param_1[9]);
  }
  if (*param_1 == 0x8000000000000005) {
    return;
  }
  while( true ) {
    puVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar3 = *puVar1;
    uVar2 = uVar3 ^ 0x8000000000000000;
    if (-1 < (long)uVar3) {
      uVar2 = 5;
    }
    if (uVar2 < 3) {
      return;
    }
    if (uVar2 == 3) {
      if (puVar1[1] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar1[2];
      goto LAB_103382c60;
    }
    if (uVar2 != 4) break;
    unaff_x20 = (ulong *)puVar1[2];
    unaff_x23 = puVar1[3];
    if (unaff_x23 == 0) {
      uVar3 = puVar1[1];
joined_r0x000103382c50:
      if (uVar3 == 0) {
        return;
      }
LAB_103382c60:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(unaff_x20);
      return;
    }
    unaff_x22 = unaff_x20 + 9;
    unaff_x30 = 0x103382c04;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    param_1 = unaff_x20;
    unaff_x19 = puVar1;
  }
  uVar2 = puVar1[4];
  if ((uVar2 != 0) && (uVar2 * 9 != -0x11)) {
    _free(puVar1[3] + uVar2 * -8 + -8);
  }
  unaff_x20 = (ulong *)puVar1[1];
  FUN_1032aa3b0(unaff_x20,puVar1[2]);
  goto joined_r0x000103382c50;
}

