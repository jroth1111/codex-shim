
void FUN_101685424(void)

{
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 *in_stack_00006710;
  
  FUN_100f3f484(&stack0x00003e30,s__Failed_to_save_default_service_t_108adaa46,&stack0x00006610);
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE();
  (**(code **)*in_stack_00006710)();
  *(undefined1 *)(unaff_x27 + 0xae8) = 0;
  if (((*(long *)(unaff_x27 + 0xa70) != -0x8000000000000000) &&
      ((*(byte *)(unaff_x27 + 0xad7) & 1) != 0)) && (*(long *)(unaff_x27 + 0xa70) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xa78));
  }
  *(undefined1 *)(unaff_x27 + 0xad7) = 0;
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = unaff_x22;
  unaff_x20[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

