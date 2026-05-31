
undefined8 FUN_1002c9cac(undefined8 param_1)

{
  long unaff_x29;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x40) = s__idle_interval_evicting_expired_f_108ab8d27;
  *(undefined1 **)(unaff_x29 + -0x38) = &stack0x00000008;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x40;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b1f3630;
  lStack0000000000000078 = unaff_x29 + -0x50;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  return 0;
}

