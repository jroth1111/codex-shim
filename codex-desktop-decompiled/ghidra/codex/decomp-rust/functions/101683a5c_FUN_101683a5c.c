
void FUN_101683a5c(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_000068c0;
  
  FUN_100f3f484(&stack0x00000140,s_Failed_to_save_realtime___108adaa84,&stack0x00003e30);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_000068c0)();
  if ((((*(byte *)(unaff_x27 + 0xad8) & 1) != 0) &&
      (*(long *)(unaff_x27 + 0xb00) != -0x8000000000000000)) && (*(long *)(unaff_x27 + 0xb00) != 0))
  {
    _free(*(undefined8 *)(unaff_x27 + 0xb08));
  }
  *(undefined1 *)(unaff_x27 + 0xad8) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

