
void FUN_10173e1f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined *puStack0000000000000068;
  long lStack0000000000000070;
  undefined *puStack0000000000000078;
  long lStack0000000000000080;
  undefined *puStack0000000000000088;
  long lStack0000000000000090;
  undefined *puStack0000000000000098;
  long lStack00000000000000a0;
  undefined *puStack00000000000000a8;
  undefined1 *puStack00000000000000b0;
  undefined *puStack00000000000000b8;
  undefined1 *puStack00000000000000c0;
  undefined *puStack00000000000000c8;
  char *pcStack00000000000000d0;
  undefined1 *puStack00000000000000d8;
  
  puStack00000000000000d8 = &stack0x000000e0;
  pcStack00000000000000d0 = s_dropping___analytics_event__miss_108adc76a;
  *(long *)(unaff_x29 + -0xd0) = unaff_x19 + 0x10;
  *(long *)(unaff_x29 + -200) = unaff_x19 + 0x20;
  *(long *)(unaff_x29 + -0xc0) = unaff_x19 + 0x30;
  *(long *)(unaff_x29 + -0xb8) = unaff_x19 + 0x40;
  puStack0000000000000060 = (undefined1 *)&stack0x000000d0;
  puStack0000000000000068 = &UNK_10b256738;
  lStack0000000000000070 = unaff_x29 + -0xd0;
  puStack0000000000000078 = &UNK_10b257158;
  lStack0000000000000080 = unaff_x29 + -200;
  puStack0000000000000088 = &UNK_10b257178;
  lStack0000000000000090 = unaff_x29 + -0xc0;
  puStack0000000000000098 = &UNK_10b257178;
  lStack00000000000000a0 = unaff_x29 + -0xb8;
  puStack00000000000000a8 = &UNK_10b257178;
  puStack00000000000000b0 = &stack0x00000008;
  puStack00000000000000b8 = &UNK_10b256fa8;
  puStack00000000000000c0 = &stack0x00000018;
  puStack00000000000000c8 = &UNK_10b257198;
  puStack0000000000000048 = (undefined1 *)&stack0x00000060;
  uStack0000000000000040 = 1;
  uStack0000000000000050 = 7;
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = 1;
  if (lVar6 == 0) {
    uVar1 = 2;
  }
  uVar3 = *(undefined4 *)(unaff_x22 + 8);
  uVar4 = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000040;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
  uVar2 = 1;
  if (lVar5 == 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000028;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000038;
  *(char **)(unaff_x29 + -0x60) = s__108b39f4f;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x40;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
  *(long *)(unaff_x29 + -0xa8) = lVar6;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar2;
  *(long *)(unaff_x29 + -0x90) = lVar5;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
  *(undefined4 *)(unaff_x29 + -0x68) = uVar3;
  *(undefined4 *)(unaff_x29 + -100) = uVar4;
  uStack0000000000000058 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  return;
}

