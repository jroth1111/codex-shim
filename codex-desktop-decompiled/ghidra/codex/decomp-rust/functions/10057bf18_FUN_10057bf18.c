
undefined8 FUN_10057bf18(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long *in_stack_00000350;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (*in_stack_00000350 == 1) {
    FUN_100de21d4(in_stack_00000350 + 1);
  }
  else if ((*in_stack_00000350 == 0) && (in_stack_00000350[2] != 0)) {
    _free(in_stack_00000350[1]);
  }
  _free(in_stack_00000350);
  FUN_100cf8c18(&stack0x000000c0);
  *(undefined1 *)(unaff_x19 + 0xc2) = 0;
  if ((*(byte *)(unaff_x19 + 0xc0) & 1) != 0) {
    FUN_100de6690(&stack0x00000070);
  }
  *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  plVar2 = *(long **)(unaff_x19 + 0x140);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h889d73266575641eE(unaff_x19 + 0x140);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xc1) = 0;
  *(undefined1 *)(unaff_x19 + 0xc3) = 1;
  return 0;
}

