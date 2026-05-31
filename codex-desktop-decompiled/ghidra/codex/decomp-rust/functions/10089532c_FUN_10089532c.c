
bool FUN_10089532c(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  puStack0000000000000008 = &stack0x00000470;
  uStack0000000000000000 = 1;
  uStack0000000000000010 = 1;
  uStack0000000000000018 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((*(byte *)(unaff_x19 + 0x169) & 1) != 0) {
    FUN_100de6690(unaff_x19 + 0x88);
  }
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  if ((*(long *)(unaff_x19 + 0x70) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
  return unaff_x23 == unaff_x24;
}

