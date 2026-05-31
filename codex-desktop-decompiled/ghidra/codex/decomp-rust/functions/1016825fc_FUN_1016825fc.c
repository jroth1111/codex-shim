
void FUN_1016825fc(void)

{
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_000068c0;
  
  FUN_100f3f484(&stack0x00003e30,s__Failed_to_save_approvals_review_108adaaa3,&stack0x00006610);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000068c0)();
  if (*(long *)(unaff_x27 + 0xaf8) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xb00));
  }
  *in_stack_00000050 = 0x8000000000000001;
  in_stack_00000050[1] = unaff_x22;
  in_stack_00000050[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

