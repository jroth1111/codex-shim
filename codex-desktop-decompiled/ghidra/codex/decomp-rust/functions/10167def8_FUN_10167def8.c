
void FUN_10167def8(void)

{
  undefined8 unaff_x20;
  undefined8 uVar1;
  undefined8 unaff_x22;
  long unaff_x27;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000140;
  undefined1 *in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 *in_stack_000068c0;
  
  FUN_10168b4d8(&stack0x00003e30);
  uVar1 = *(undefined8 *)(unaff_x27 + 1000);
  FUN_100f3f484(&stack0x00003e30,s_Logout_failed__108ada8c4,&stack0x00006610);
  in_stack_00000140 = 1;
  in_stack_00000150 = 1;
  in_stack_00000148 = &stack0x00006750;
  __ZN9codex_tui10chatwidget10ChatWidget17add_error_message17hc02ae70319960b9eE
            (uVar1,&stack0x00000140);
  (**(code **)*in_stack_000068c0)();
  *in_stack_00000050 = 0x8000000000000001;
  in_stack_00000050[1] = unaff_x22;
  in_stack_00000050[2] = unaff_x20;
  *(undefined1 *)(unaff_x27 + 0xac8) = 1;
  return;
}

