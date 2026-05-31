
undefined1  [16] FUN_100748164(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long unaff_x19;
  long in_stack_000008a0;
  undefined8 *in_stack_000008a8;
  
  FUN_100748984(&stack0x00000c00);
  uVar2 = FUN_100c35750(&UNK_108cac8b3,0x23);
  if (in_stack_000008a0 != 0) {
    if ((code *)*in_stack_000008a8 != (code *)0x0) {
      (*(code *)*in_stack_000008a8)(in_stack_000008a0);
    }
    if (in_stack_000008a8[1] != 0) {
      _free(in_stack_000008a0);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

