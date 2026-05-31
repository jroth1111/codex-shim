
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007161c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x28;
  long unaff_x29;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *in_stack_00000008;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  short in_stack_00000290;
  ulong in_stack_00000298;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_000003a8;
  long in_stack_000003b0;
  
  *(char **)(unaff_x29 + -0x80) = s_8failed_to_receive_local_addr_of_108ac7519;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000330);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar9 = *unaff_x23;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000458);
    if (iVar5 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar9,puVar2,puVar1,&stack0x00000458,&stack0x00000330);
    }
  }
  if ((in_stack_00000290 == 2) && ((in_stack_00000298 & 3) == 1)) {
    uVar9 = *(undefined8 *)(in_stack_00000298 - 1);
    puVar10 = *(undefined8 **)(in_stack_00000298 + 7);
    pcVar7 = (code *)*puVar10;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar10[1] != 0) {
      _free(uVar9);
    }
    _free((undefined8 *)(in_stack_00000298 - 1));
  }
  FUN_1016e91f0(&stack0x00000250,&stack0x00000550);
  lVar8 = *(long *)(unaff_x19 + 0x178);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x28 + 0x58) = uVar9;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar14;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar12;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x28 + 0x78) = uVar9;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x28 + 0x38) = uVar9;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar14;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar12;
  *(undefined2 *)(unaff_x19 + 0x182) = 0;
  bVar3 = *(byte *)(unaff_x19 + 0x310);
  if (((bVar3 != 0x20) && (5 < bVar3 - 0x1a)) && (0x18 < bVar3)) {
    lVar4 = **(long **)(unaff_x19 + 0x318);
    **(long **)(unaff_x19 + 0x318) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x318);
    }
  }
  if ((*(byte *)(unaff_x19 + 0x328) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x328))) {
    lVar4 = **(long **)(unaff_x19 + 0x330);
    **(long **)(unaff_x19 + 0x330) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x330);
    }
  }
  *(undefined2 *)(unaff_x19 + 0x181) = 0;
  lVar11 = *(long *)(unaff_x28 + 0xf0);
  lVar4 = *(long *)(unaff_x28 + 0xe8);
  lVar15 = *(long *)(unaff_x28 + 0x100);
  lVar13 = *(long *)(unaff_x28 + 0xf8);
  *in_stack_00000008 = 1;
  if (in_stack_00000230 == 3) {
    uVar6 = 3;
    *unaff_x20 = 3;
  }
  else {
    FUN_100d92020();
    unaff_x20[0xc] = lVar11;
    unaff_x20[0xb] = lVar4;
    unaff_x20[0xe] = lVar15;
    unaff_x20[0xd] = lVar13;
    unaff_x20[0x10] = in_stack_000003b0;
    unaff_x20[0xf] = in_stack_000003a8;
    unaff_x20[4] = in_stack_00000250;
    unaff_x20[3] = in_stack_00000248;
    unaff_x20[6] = in_stack_00000260;
    unaff_x20[5] = in_stack_00000258;
    unaff_x20[8] = in_stack_00000370;
    unaff_x20[7] = in_stack_00000368;
    *(undefined1 *)(unaff_x19 + 0xb9) = 0;
    *unaff_x20 = in_stack_00000230;
    unaff_x20[1] = in_stack_00000238;
    unaff_x20[2] = in_stack_00000240;
    unaff_x20[0x11] = lVar8;
    uVar6 = 1;
    unaff_x20[10] = in_stack_00000380;
    unaff_x20[9] = in_stack_00000378;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar6;
  return;
}

