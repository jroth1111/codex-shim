
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10089511c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long in_stack_000003a8;
  undefined8 in_stack_000003b0;
  long in_stack_00000640;
  undefined8 in_stack_00000648;
  long in_stack_00000658;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000005d0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar3 = *(undefined8 *)(*unaff_x20 + 0x20);
    uVar4 = *(undefined8 *)(*unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x88) = 2;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar4;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x88);
    if (iVar5 != 0) {
      *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000005d0;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000470);
    }
  }
  if (in_stack_00000640 == -0x8000000000000000) {
    FUN_100de6690((ulong)&stack0x00000640 | 8);
  }
  else {
    if (in_stack_00000658 != unaff_x25 + -6) {
      FUN_100de6690(&stack0x00000658);
    }
    if (in_stack_00000640 != 0) {
      _free(in_stack_00000648);
    }
  }
  func_0x000100e45ab8();
  if ((in_stack_000003a8 != -0x8000000000000000) && (in_stack_000003a8 != 0)) {
    _free(in_stack_000003b0);
  }
  if ((*(byte *)(unaff_x19 + 0x169) & 1) != 0) {
    FUN_100de6690(unaff_x19 + 0x88);
  }
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  if ((*(long *)(unaff_x19 + 0x70) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
  return unaff_x23 == unaff_x24;
}

