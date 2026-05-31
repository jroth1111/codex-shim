
void FUN_10167d3f0(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 *in_stack_00006858;
  
  FUN_100f3f484(&stack0x00003e30,s__Failed_to_save_status_line_sett_108adac55,&stack0x000068c0);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00006858)();
  *(undefined2 *)(unaff_x27 + 0xae2) = 0;
  FUN_100e1ad68(unaff_x27 + 0xb18);
  if (((*(byte *)(unaff_x27 + 0xada) & 1) != 0) && (*(long *)(unaff_x27 + 0xb00) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xb08));
  }
  *(undefined1 *)(unaff_x27 + 0xada) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

