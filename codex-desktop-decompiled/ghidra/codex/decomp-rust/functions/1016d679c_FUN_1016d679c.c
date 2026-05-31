
void FUN_1016d679c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x26;
  long unaff_x29;
  long lVar2;
  undefined8 *in_stack_00002b10;
  
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00002bd0;
  *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
  FUN_1016d71b4(&stack0x00002740);
  (**(code **)*in_stack_00002b10)();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  lVar2 = *(long *)(unaff_x19 + 200);
  *(undefined8 *)(unaff_x19 + 200) = 0x8000000000000000;
  if (lVar2 != -0x8000000000000000) {
    FUN_10536b7c4(uVar1,&stack0x00002740);
    uVar1 = *(undefined8 *)(unaff_x19 + 0xa0);
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000029a0,s__Failed_to_switch_into_side_conv_108adba7a,&stack0x00002740);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
            (uVar1,&stack0x00002bd0);
  (**(code **)**(undefined8 **)(unaff_x19 + 0x4f0))();
  *(undefined2 *)(unaff_x19 + 0x4f9) = 0;
  if (*(long *)(unaff_x19 + 200) != -0x8000000000000000) {
    func_0x000100e2b66c();
  }
  *unaff_x26 = 0x8000000000000001;
  *(undefined1 *)(unaff_x19 + 0x4f8) = 1;
  return;
}

