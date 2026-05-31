
void FUN_10167fc18(void)

{
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000078;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  
  FUN_10168a4b4(&stack0x00003e30);
  if ((unaff_x20 & 1) != 0) {
    __ZN9codex_tui10chatwidget15status_controls51__LT_impl_u20_codex_tui__chatwidget__ChatWidget_GT_32finish_status_rate_limit_refresh17h989b699b7ddc4da1E
              (*in_stack_00000058);
  }
  if (in_stack_00000140 != 0) {
    _free(in_stack_00000148);
  }
  *in_stack_00000050 = 0x8000000000000001;
  in_stack_00000050[1] = unaff_x22;
  in_stack_00000050[2] = unaff_x20;
  *(undefined1 *)(in_stack_00000078 + 0xac8) = 1;
  return;
}

