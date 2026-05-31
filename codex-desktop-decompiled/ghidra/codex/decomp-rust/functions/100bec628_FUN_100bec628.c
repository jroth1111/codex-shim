
uint FUN_100bec628(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  undefined8 uVar2;
  long unaff_x23;
  undefined8 *puVar3;
  long unaff_x29;
  ulong in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  char *pcStack0000000000000060;
  long lStack0000000000000068;
  long lStack0000000000000088;
  undefined *puStack0000000000000090;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  long lStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  char *pcStack00000000000000f0;
  undefined1 *puStack00000000000000f8;
  
  lStack0000000000000068 = unaff_x29 + -0x60;
  pcStack0000000000000060 = s_3remote_control_websocket_writer_108ad2460;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b208fd0;
  puStack0000000000000038 = (undefined1 *)&stack0x00000050;
  uStack0000000000000030 = 1;
  uStack0000000000000040 = 1;
  lStack00000000000000c0 = *(long *)(unaff_x23 + 0x60);
  uStack00000000000000c8 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack00000000000000a8 = *(long *)(unaff_x23 + 0x50);
  uStack00000000000000b0 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack00000000000000a0 = 1;
  if (lStack00000000000000a8 == 0) {
    uStack00000000000000a0 = 2;
  }
  uStack00000000000000e8 = *(undefined4 *)(unaff_x23 + 8);
  uStack00000000000000ec = *(undefined4 *)(unaff_x23 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000030;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  lStack0000000000000088 = unaff_x29 + -0x50;
  puStack0000000000000090 = &DAT_1061c2098;
  uStack00000000000000b8 = 1;
  if (lStack00000000000000c0 == 0) {
    uStack00000000000000b8 = 2;
  }
  uStack00000000000000d8 = in_stack_00000020;
  uStack00000000000000d0 = in_stack_00000018;
  uStack00000000000000e0 = in_stack_00000028;
  puStack00000000000000f8 = (undefined1 *)&stack0x00000088;
  pcStack00000000000000f0 = s__108b39f4f;
  uStack0000000000000048 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  if ((in_stack_00000000 & 3) == 1) {
    uVar2 = *(undefined8 *)(in_stack_00000000 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000000 + 7);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      _free(uVar2);
    }
    _free((undefined8 *)(in_stack_00000000 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x410) = 1;
  return unaff_w20 & 1;
}

