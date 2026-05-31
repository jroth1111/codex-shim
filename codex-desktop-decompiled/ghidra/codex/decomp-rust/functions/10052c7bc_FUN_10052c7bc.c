
undefined8 FUN_10052c7bc(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x27;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined1 *puStack0000000000000110;
  undefined *puStack0000000000000118;
  char *pcStack0000000000000150;
  undefined1 *puStack0000000000000158;
  ulong in_stack_000004b0;
  
  puStack0000000000000158 = &stack0x00000300;
  pcStack0000000000000150 = s__failed_to_load_MCP_servers_whil_108ac06bb;
  puStack0000000000000110 = (undefined1 *)&stack0x00000150;
  puStack0000000000000118 = &UNK_10b208fd0;
  unaff_x20[1] = in_stack_00000100;
  *unaff_x20 = in_stack_000000f8;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_000004b0 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_000004b0 - 1);
    puVar4 = *(undefined8 **)(in_stack_000004b0 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar4[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_000004b0 - 1));
  }
  if ((*(byte *)(unaff_x27 + 0x5c2) & 1) != 0) {
    FUN_100cf8c18(unaff_x27 + 0xa0);
  }
  *(undefined1 *)(unaff_x27 + 0x5c2) = 0;
  FUN_100cf8c18(unaff_x27 + 0x70);
  if (*(long *)(unaff_x27 + 0x378) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0x380));
  }
  plVar3 = *(long **)(unaff_x27 + 0x60);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h889d73266575641eE();
    }
  }
  *(undefined1 *)(unaff_x27 + 0x5c4) = 0;
  *(undefined1 *)(unaff_x27 + 0x5c6) = 1;
  return 0;
}

