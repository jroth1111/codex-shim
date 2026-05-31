
/* WARNING: Possible PIC construction at 0x00010196aee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101938048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010196aee8) */
/* WARNING: Removing unreachable block (ram,0x00010193804c) */

void FUN_10196ae78(ulong *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar9;
  undefined1 *puVar3;
  
  if ((char)param_1[0x1b4] == '\0') {
    lVar7 = *(long *)param_1[0x12];
    *(long *)param_1[0x12] = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    uVar9 = 0x10196aee8;
    puVar1 = &stack0xffffffffffffffe0;
    puVar6 = param_1;
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar5 = puVar6;
      puVar3 = puVar1;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(ulong *)(puVar3 + -0x38) = unaff_x23;
      *(ulong **)(puVar3 + -0x30) = unaff_x22;
      *(ulong **)(puVar3 + -0x28) = unaff_x21;
      *(ulong **)(puVar3 + -0x20) = unaff_x20;
      *(ulong **)(puVar3 + -0x18) = param_1;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(undefined8 *)(puVar3 + -8) = uVar9;
      uVar4 = *puVar5 ^ 0x8000000000000000;
      if (-1 < (long)*puVar5) {
        uVar4 = 5;
      }
      if (uVar4 < 3) {
        return;
      }
      if (uVar4 == 3) {
        if (puVar5[1] == 0) {
          return;
        }
        param_1 = (ulong *)puVar5[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar4 == 4) {
        param_1 = (ulong *)puVar5[2];
        lVar7 = puVar5[3] + 1;
        puVar6 = param_1;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          func_0x00010194dc28(puVar6);
          puVar6 = puVar6 + 9;
        }
        if (puVar5[1] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      uVar4 = puVar5[4];
      if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
        _free(puVar5[3] + uVar4 * -8 + -8);
      }
      unaff_x24 = *(undefined8 *)(puVar3 + -0x40);
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
      *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
      *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
      *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      param_1 = (ulong *)puVar5[1];
      unaff_x23 = puVar5[2];
      if (unaff_x23 == 0) break;
      if (*param_1 != 0) {
        _free(param_1[1]);
      }
      unaff_x22 = param_1 + 0xd;
      uVar9 = 0x10193804c;
      puVar1 = puVar3 + -0x40;
      puVar6 = param_1 + 3;
      unaff_x20 = puVar5;
      unaff_x21 = param_1;
      puVar2 = puVar3;
    }
    if (*puVar5 == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  if ((char)param_1[0x1b4] != '\x03') {
    return;
  }
  if ((char)param_1[0x1b3] == '\0') {
    lVar7 = 0xc0;
LAB_10196aefc:
    FUN_10194f584((long)param_1 + lVar7);
  }
  else if ((char)param_1[0x1b3] == '\x03') {
    if ((char)param_1[0x1b2] == '\x03') {
      FUN_10196bf2c(param_1 + 0x94);
    }
    else if ((char)param_1[0x1b2] == '\0') {
      lVar7 = 0x2b0;
      goto LAB_10196aefc;
    }
  }
  plVar8 = (long *)param_1[0x17];
  *(undefined1 *)((long)param_1 + 0xda1) = 0;
  lVar7 = *plVar8;
  *plVar8 = lVar7 + -1;
  LORelease();
  if (lVar7 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  param_1 = (ulong *)param_1[0x17];
  FUN_103399de0(param_1 + 2);
  if (param_1 != (ulong *)0xffffffffffffffff) {
    uVar4 = param_1[1];
    param_1[1] = uVar4 - 1;
    LORelease();
    if (uVar4 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1);
      return;
    }
  }
  return;
}

