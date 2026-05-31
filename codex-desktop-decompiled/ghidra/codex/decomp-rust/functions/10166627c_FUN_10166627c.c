
void FUN_10166627c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  long lStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  long lStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  char *pcStack00000000000000c0;
  long lStack00000000000000c8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s_panic__108ada489;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b208fd0;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  lStack0000000000000090 = *(long *)(unaff_x23 + 0x60);
  uStack0000000000000098 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000078 = *(long *)(unaff_x23 + 0x50);
  uStack0000000000000080 = *(undefined8 *)(unaff_x23 + 0x58);
  lStack0000000000000070 = unaff_x22;
  if (lStack0000000000000078 == 0) {
    lStack0000000000000070 = unaff_x22 + 1;
  }
  uStack00000000000000b8 = *(undefined4 *)(unaff_x23 + 8);
  uStack00000000000000bc = *(undefined4 *)(unaff_x23 + 0xc);
  *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000020;
  *(char *)(unaff_x29 + -0x58) = (char)unaff_x22;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
  if (lStack0000000000000090 == 0) {
    unaff_x22 = unaff_x22 + 1;
  }
  uStack00000000000000a8 = in_stack_00000010;
  uStack00000000000000a0 = in_stack_00000008;
  uStack00000000000000b0 = in_stack_00000018;
  lStack00000000000000c8 = unaff_x29 + -0x50;
  pcStack00000000000000c0 = s__108b39f4f;
  uStack0000000000000038 = param_1;
  lStack0000000000000088 = unaff_x22;
  (**(code **)(unaff_x21 + 0x20))();
  (**(code **)(unaff_x19[1] + 0x28))(*unaff_x19,in_stack_00000000);
  return;
}

