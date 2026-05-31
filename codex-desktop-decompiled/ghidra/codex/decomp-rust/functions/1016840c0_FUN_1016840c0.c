
void FUN_1016840c0(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_00006750;
  
  FUN_100f3f484(&stack0x00000140,s_Failed_to_update_app_config_for___108adac2e,&stack0x00003e30);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00006750)();
  *(undefined1 *)(unaff_x27 + 0xae4) = 0;
  if (*(long *)(unaff_x27 + 0xaa8) != 0) {
    _free(*(undefined8 *)(unaff_x27 + 0xab0));
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

