
undefined8 FUN_10052c344(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x27;
  undefined1 *puStack0000000000000150;
  undefined *puStack0000000000000158;
  ulong in_stack_000004b0;
  
  puStack0000000000000150 = &stack0x00000300;
  puStack0000000000000158 = &UNK_10b208fd0;
  FUN_10052ed70(&stack0x00002100);
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

