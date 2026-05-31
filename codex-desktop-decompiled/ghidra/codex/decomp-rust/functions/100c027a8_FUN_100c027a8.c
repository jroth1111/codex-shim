
undefined8 FUN_100c027a8(void)

{
  code *pcVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *puStack0000000000000020;
  undefined1 uStack0000000000000028;
  undefined1 *puStack00000000000000d0;
  undefined *puStack00000000000000d8;
  undefined8 uStack0000000000000180;
  long lStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  long lStack00000000000001a0;
  undefined8 uStack00000000000001a8;
  undefined8 uStack00000000000001c0;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  char *pcStack00000000000001d0;
  undefined1 *puStack00000000000001d8;
  long *in_stack_000003e0;
  
  lStack00000000000001a0 = *(long *)(unaff_x23 + 0x60);
  uStack00000000000001a8 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000188 = *(long *)(unaff_x23 + 0x50);
  uStack0000000000000190 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack0000000000000180 = 1;
  if (lStack0000000000000188 == 0) {
    uStack0000000000000180 = 2;
  }
  uStack00000000000001c8 = *(undefined4 *)(unaff_x23 + 8);
  uStack00000000000001cc = *(undefined4 *)(unaff_x23 + 0xc);
  puStack0000000000000020 = &stack0x00000420;
  uStack0000000000000028 = 1;
  puStack00000000000000d0 = (undefined1 *)&stack0x00000020;
  puStack00000000000000d8 = &DAT_1061c2098;
  uStack0000000000000198 = 1;
  if (lStack00000000000001a0 == 0) {
    uStack0000000000000198 = 2;
  }
  *(undefined8 *)(unaff_x22 + 0x198) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 400) = in_stack_00000008;
  uStack00000000000001c0 = in_stack_00000018;
  puStack00000000000001d8 = (undefined1 *)&stack0x000000d0;
  pcStack00000000000001d0 = s__108b39f4f;
  (**(code **)(unaff_x21 + 0x20))();
  if (*in_stack_000003e0 == 1) {
    uVar3 = in_stack_000003e0[1];
    if ((uVar3 & 3) != 1) goto LAB_100c02704;
    puVar2 = (undefined8 *)(uVar3 - 1);
    uVar4 = *puVar2;
    puVar5 = *(undefined8 **)(uVar3 + 7);
    pcVar1 = (code *)*puVar5;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
  }
  else {
    if ((*in_stack_000003e0 != 0) || (in_stack_000003e0[2] == 0)) goto LAB_100c02704;
    puVar2 = (undefined8 *)in_stack_000003e0[1];
  }
  _free(puVar2);
LAB_100c02704:
  _free(in_stack_000003e0);
  *(undefined1 *)(unaff_x19 + 0x440) = 1;
  return 1;
}

