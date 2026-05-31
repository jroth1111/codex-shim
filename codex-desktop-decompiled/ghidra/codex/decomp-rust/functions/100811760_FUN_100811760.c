
void FUN_100811760(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000080;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s__failed_to_create_pushed_stream_f_108ac8475;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b208fd0;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  lVar2 = *(long *)(unaff_x24 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x24 + 0x68);
  lVar3 = *(long *)(unaff_x24 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x24 + 0x58);
  uStack0000000000000080 = 1;
  if (lVar3 == 0) {
    uStack0000000000000080 = 2;
  }
  uStack00000000000000c8 = *(undefined4 *)(unaff_x24 + 8);
  uStack00000000000000cc = *(undefined4 *)(unaff_x24 + 0xc);
  *(undefined8 **)(unaff_x22 + 0x60) = &stack0x00000020;
  *(undefined1 *)(unaff_x29 + -0x58) = 1;
  *(long *)(unaff_x22 + 0x70) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x22 + 0x78) = &DAT_1061c2098;
  uVar1 = 1;
  if (lVar2 == 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(char **)(unaff_x22 + 0x50) = s__108b39f4f;
  *(long *)(unaff_x22 + 0x58) = unaff_x29 + -0x50;
  *(long *)(unaff_x22 + 8) = lVar3;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  *(long *)(unaff_x22 + 0x20) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  uStack0000000000000038 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  *(undefined **)(unaff_x19 + 4) = &UNK_10b209220;
  *(undefined8 *)(unaff_x19 + 8) = 1;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined4 *)(unaff_x19 + 2) = in_stack_00000000._4_4_;
  *unaff_x19 = 0x101;
  return;
}

