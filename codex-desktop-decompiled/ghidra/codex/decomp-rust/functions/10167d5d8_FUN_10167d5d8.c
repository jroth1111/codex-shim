
void FUN_10167d5d8(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_00006710;
  
  FUN_100f3f484(&stack0x00000140,s__Failed_to_save_terminal_title_i_108adac7d,&stack0x00006750);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00006710)();
  *(undefined1 *)(unaff_x27 + 0xae1) = 0;
  FUN_100e1ad68(unaff_x27 + 0xb10);
  if (((*(byte *)(unaff_x27 + 0xadb) & 1) != 0) && (*(long *)(unaff_x27 + 0xaf8) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xb00));
  }
  *(undefined1 *)(unaff_x27 + 0xadb) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

