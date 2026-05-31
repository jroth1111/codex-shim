
undefined8 FUN_100a2c284(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  char *pcStack0000000000000078;
  undefined1 *puStack0000000000000080;
  undefined8 uStack0000000000000090;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  
  puStack0000000000000080 = &stack0x00000010;
  pcStack0000000000000078 = s_failed_to_persist_OAuth_tokens__108ace6f7;
  *(char ***)(unaff_x29 + -0x40) = &stack0x00000078;
  *(undefined **)(unaff_x29 + -0x38) = &UNK_10b208fd0;
  lStack0000000000000098 = unaff_x29 + -0x40;
  uStack0000000000000090 = 1;
  uStack00000000000000a0 = 1;
  uStack00000000000000a8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000008)();
  lVar1 = **(long **)(unaff_x19 + 0x18);
  **(long **)(unaff_x19 + 0x18) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103e32944();
  }
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  return 0;
}

