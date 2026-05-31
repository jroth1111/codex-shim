
/* WARNING: Possible PIC construction at 0x000100da546c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100da5470) */

void FUN_100da5410(ulong *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong uVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_40;
  ulong *puStack_38;
  ulong *puStack_30;
  ulong *puStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = param_1;
  if ((char)param_1[0x18] != '\0') {
    if ((char)param_1[0x18] != '\x03') {
      return;
    }
    uStack_40 = param_1[8];
    puStack_38 = param_1 + 0xf;
    puStack_30 = param_1 + 9;
    puStack_28 = param_1 + 10;
    FUN_1060fb5d4(&uStack_40);
    if (param_1[0xc] != 0) {
      (**(code **)(param_1[0xc] + 0x18))(param_1[0xd]);
    }
    unaff_x30 = 0x100da5470;
    register0x00000008 = (BADSPACEBASE *)&uStack_40;
    puVar3 = param_1 + 0x10;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = *puVar3;
  if (uVar5 != 2) {
    uVar4 = puVar3[1];
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar4 + (*(long *)(puVar3[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(puVar3[2] + 0x60))(uVar4,puVar3 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar4 = puVar3[4], uVar4 != 0)) {
    uVar2 = *(undefined8 *)(uVar4 + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(uVar4 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x38) = &DAT_100c7b3a0;
    FUN_1011d7d74(puVar3,&UNK_108cd3ef5,0x15,s__>___108ab67cd,
                  (undefined1 *)((long)register0x00000008 + -0x40));
  }
  if (uVar5 != 2) {
    uVar5 = puVar3[1];
    if ((int)*puVar3 == 1) {
      uVar5 = uVar5 + (*(long *)(puVar3[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(puVar3[2] + 0x68))(uVar5,puVar3 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = puVar3[4], uVar5 != 0)) {
    uVar2 = *(undefined8 *)(uVar5 + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(uVar5 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x38) = &DAT_100c7b3a0;
    FUN_1011d7d74(puVar3,&UNK_108cd3ef5,0x15,s_<____108ab67c5,
                  (undefined1 *)((long)register0x00000008 + -0x40));
  }
  FUN_100dddd8c(puVar3);
  return;
}

