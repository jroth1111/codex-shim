
/* WARNING: Possible PIC construction at 0x0001020352e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102031ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102037268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102031ca8) */
/* WARNING: Removing unreachable block (ram,0x0001020352ec) */
/* WARNING: Removing unreachable block (ram,0x00010203726c) */
/* WARNING: Removing unreachable block (ram,0x000102037284) */

void FUN_1020371f4(ulong *param_1)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xfffffffffffffff0;
  if (*param_1 != 0x8000000000000000) {
    uVar3 = param_1[4];
    if (uVar3 != 0 && uVar3 * 9 != -0x11) {
      _free(param_1[3] + uVar3 * -8 + -8);
    }
    uVar6 = 0x10203726c;
    puVar4 = param_1;
    goto SUB_102031c74;
  }
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = param_1 + 1;
  if (param_1[1] == 0x8000000000000005) {
    return;
  }
  while( true ) {
    param_1 = puVar4;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(ulong **)(puVar1 + -0x30) = unaff_x22;
    *(ulong **)(puVar1 + -0x28) = unaff_x21;
    *(ulong **)(puVar1 + -0x20) = unaff_x20;
    *(ulong **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    uVar3 = *param_1 ^ 0x8000000000000000;
    if (-1 < (long)*param_1) {
      uVar3 = 5;
    }
    if (uVar3 < 3) {
      return;
    }
    if (uVar3 == 3) break;
    if (uVar3 == 4) {
      puVar2 = (ulong *)param_1[2];
      unaff_x23 = param_1[3];
      if (unaff_x23 == 0) {
        if (param_1[1] == 0) {
          return;
        }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puVar2);
        return;
      }
      unaff_x22 = puVar2 + 9;
      unaff_x30 = 0x1020352ec;
      puVar1 = puVar1 + -0x40;
      puVar4 = puVar2;
      unaff_x19 = param_1;
      unaff_x20 = puVar2;
    }
    else {
      uVar3 = param_1[4];
      if ((uVar3 != 0) && (uVar3 * 9 != -0x11)) {
        _free(param_1[3] + uVar3 * -8 + -8);
      }
      puVar5 = *(undefined1 **)(puVar1 + -0x10);
      uVar6 = *(undefined8 *)(puVar1 + -8);
      unaff_x20 = *(ulong **)(puVar1 + -0x20);
      unaff_x22 = *(ulong **)(puVar1 + -0x30);
      unaff_x21 = *(ulong **)(puVar1 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar1 + -0x40);
      unaff_x23 = *(ulong *)(puVar1 + -0x38);
      puVar4 = *(ulong **)(puVar1 + -0x18);
SUB_102031c74:
      *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
      *(ulong *)(puVar1 + -0x38) = unaff_x23;
      *(ulong **)(puVar1 + -0x30) = unaff_x22;
      *(ulong **)(puVar1 + -0x28) = unaff_x21;
      *(ulong **)(puVar1 + -0x20) = unaff_x20;
      *(ulong **)(puVar1 + -0x18) = puVar4;
      *(undefined1 **)(puVar1 + -0x10) = puVar5;
      *(undefined8 *)(puVar1 + -8) = uVar6;
      unaff_x29 = puVar1 + -0x10;
      puVar2 = (ulong *)param_1[1];
      unaff_x23 = param_1[2];
      if (unaff_x23 == 0) {
        if (*param_1 == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      if (*puVar2 != 0) {
        _free(puVar2[1]);
      }
      unaff_x22 = puVar2 + 0xd;
      unaff_x30 = 0x102031ca8;
      puVar1 = puVar1 + -0x40;
      puVar4 = puVar2 + 3;
      unaff_x19 = puVar2;
      unaff_x20 = param_1;
      unaff_x21 = puVar2;
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  puVar2 = (ulong *)param_1[2];
  goto code_r0x000108aa97c4;
}

