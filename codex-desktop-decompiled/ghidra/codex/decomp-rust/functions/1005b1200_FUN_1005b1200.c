
undefined8 FUN_1005b1200(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar2;
  long unaff_x23;
  undefined8 *puVar3;
  long unaff_x29;
  ulong in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  char *pcStack0000000000000048;
  long lStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined *puStack0000000000000080;
  undefined8 uStack0000000000000090;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *pcStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  
  lStack0000000000000050 = unaff_x29 + -0x60;
  pcStack0000000000000048 = s__failed_to_materialize_thread_pe_108ac19b3;
  puStack0000000000000038 = (undefined1 *)&stack0x00000048;
  puStack0000000000000040 = &UNK_10b208fd0;
  puStack0000000000000060 = (undefined1 *)&stack0x00000038;
  uStack0000000000000058 = 1;
  uStack0000000000000068 = 1;
  lStack00000000000000b0 = *(long *)(unaff_x23 + 0x60);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000098 = *(long *)(unaff_x23 + 0x50);
  uStack00000000000000a0 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack0000000000000090 = 1;
  if (lStack0000000000000098 == 0) {
    uStack0000000000000090 = 2;
  }
  uStack00000000000000d8 = *(undefined4 *)(unaff_x23 + 8);
  uStack00000000000000dc = *(undefined4 *)(unaff_x23 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000058;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  lStack0000000000000078 = unaff_x29 + -0x50;
  puStack0000000000000080 = &DAT_1061c2098;
  uStack00000000000000a8 = 1;
  if (lStack00000000000000b0 == 0) {
    uStack00000000000000a8 = 2;
  }
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000020;
  uStack00000000000000d0 = in_stack_00000030;
  puStack00000000000000e8 = (undefined1 *)&stack0x00000078;
  pcStack00000000000000e0 = s__108b39f4f;
  uStack0000000000000070 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if ((in_stack_00000008 & 3) == 1) {
    uVar2 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar3 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      _free(uVar2);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x7e0) = 1;
  return 0;
}

