
void FUN_1016721c4(undefined8 param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar1;
  undefined8 uStack0000000000000030;
  long lStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  *(char **)(unaff_x29 + -0x80) = s_7Failed_to_parse_fork_parent_thr_108ada4d9;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000b30;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
  lStack0000000000000038 = unaff_x29 + -0x50;
  uStack0000000000000030 = 1;
  uStack0000000000000040 = 1;
  uStack0000000000000048 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *unaff_x20 = 0x8000000000000000;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[1] = uVar1;
  *(undefined1 *)(unaff_x19 + 0x938) = 1;
  return;
}

