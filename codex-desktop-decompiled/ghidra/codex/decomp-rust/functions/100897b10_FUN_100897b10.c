
undefined8 FUN_100897b10(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0xf0) = s_failed_to_send_to_client__108ac9f7c;
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000208;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xf0;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x98) = 1;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x78;
  *(undefined8 *)(unaff_x29 + -0x88) = 1;
  *(undefined8 *)(unaff_x29 + -0x80) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100e349f0(&stack0x000006b8);
  *(undefined1 *)(unaff_x19 + 0x319) = 0;
  *(undefined1 *)(unaff_x19 + 0x318) = 1;
  return 0;
}

