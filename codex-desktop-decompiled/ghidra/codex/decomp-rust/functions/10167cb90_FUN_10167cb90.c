
void FUN_10167cb90(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_00006870;
  
  FUN_100f3f484(&stack0x00000140,s_2Failed_to_save_model_migration_p_108adabd0,&stack0x00006750);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00006870)();
  if (*(long *)(unaff_x27 + 0xb10) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xb18));
  }
  if (*(long *)(unaff_x27 + 0xaf8) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xb00));
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

