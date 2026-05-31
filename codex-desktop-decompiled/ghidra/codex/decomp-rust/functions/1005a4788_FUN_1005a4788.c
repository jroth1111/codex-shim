
undefined8 FUN_1005a4788(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  undefined *puStack0000000000000050;
  char *pcStack0000000000000058;
  long lStack0000000000000060;
  long lStack0000000000000068;
  undefined *puStack0000000000000070;
  undefined8 uStack0000000000000080;
  long lStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  long lStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  char *pcStack00000000000000d0;
  undefined1 *puStack00000000000000d8;
  
  lStack0000000000000060 = unaff_x29 + -0x60;
  pcStack0000000000000058 = s__No_pending_approval_found_for_c_108ac17f5;
  puStack0000000000000048 = (undefined1 *)&stack0x00000058;
  puStack0000000000000050 = &UNK_10b208fd0;
  puStack0000000000000030 = (undefined1 *)&stack0x00000048;
  uStack0000000000000028 = 1;
  uStack0000000000000038 = 1;
  lStack00000000000000a0 = *(long *)(unaff_x22 + 0x60);
  uStack00000000000000a8 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack0000000000000088 = *(long *)(unaff_x22 + 0x50);
  uStack0000000000000090 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack0000000000000080 = 1;
  if (lStack0000000000000088 == 0) {
    uStack0000000000000080 = 2;
  }
  uStack00000000000000c8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000cc = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000028;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  lStack0000000000000068 = unaff_x29 + -0x50;
  puStack0000000000000070 = &DAT_1061c2098;
  uStack0000000000000098 = 1;
  if (lStack00000000000000a0 == 0) {
    uStack0000000000000098 = 2;
  }
  uStack00000000000000b8 = in_stack_00000018;
  uStack00000000000000b0 = in_stack_00000010;
  uStack00000000000000c0 = in_stack_00000020;
  puStack00000000000000d8 = (undefined1 *)&stack0x00000068;
  pcStack00000000000000d0 = s__108b39f4f;
  uStack0000000000000040 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if ((*(byte *)(unaff_x19 + 0x71) & 1) == 0) goto LAB_1005a4aac;
  uVar1 = *(ulong *)(unaff_x19 + 0x48);
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 3;
  }
  if (uVar2 == 3) {
    if (uVar1 == 0) goto LAB_1005a4aac;
    lVar3 = *(long *)(unaff_x19 + 0x50);
  }
  else {
    if (uVar2 != 1) goto LAB_1005a4aac;
    lVar3 = *(long *)(unaff_x19 + 0x58);
    lVar4 = *(long *)(unaff_x19 + 0x60);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_1005a4aac;
  }
  _free(lVar3);
LAB_1005a4aac:
  *(undefined1 *)(unaff_x19 + 0x71) = 0;
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  return 0;
}

