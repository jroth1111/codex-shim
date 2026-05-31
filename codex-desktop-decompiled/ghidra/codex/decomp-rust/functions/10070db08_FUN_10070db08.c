
void FUN_10070db08(undefined8 param_1)

{
  uint uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  char in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 *in_stack_00000420;
  
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000003f0;
  *(undefined **)(unaff_x29 + -0x68) = &UNK_10b208fd0;
  lStack00000000000000d0 = unaff_x29 + -0x70;
  uStack00000000000000c8 = 1;
  uStack00000000000000d8 = 1;
  uStack00000000000000e0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar5 = (ulong)*(ushort *)(unaff_x20 + 0x14);
  *(undefined2 *)(unaff_x20 + 0x14) = 0x1f;
  if (uVar5 != 0x1f) {
    uVar2 = *(ushort *)((long)unaff_x20 + 0xa6);
    uVar1 = *(uint *)((long)unaff_x20 + 0xa2);
    uVar4 = unaff_x20[0x15];
    uVar8 = unaff_x20[0x17];
    uVar6 = unaff_x20[0x16];
    uVar11 = unaff_x20[0x19];
    uVar10 = unaff_x20[0x18];
    uVar9 = unaff_x20[0x1b];
    uVar7 = unaff_x20[0x1a];
    if (in_stack_00000410 == '\0') {
      if ((code *)*in_stack_00000420 != (code *)0x0) {
        (*(code *)*in_stack_00000420)(in_stack_00000418);
      }
      if (in_stack_00000420[1] != 0) {
        _free(in_stack_00000418);
      }
    }
    FUN_100df2508();
    *unaff_x20 = 3;
    unaff_x20[1] = (ulong)uVar1 << 0x10 | (ulong)uVar2 << 0x30 | uVar5;
    unaff_x20[2] = uVar4;
    unaff_x20[4] = uVar8;
    unaff_x20[3] = uVar6;
    unaff_x20[6] = uVar11;
    unaff_x20[5] = uVar10;
    unaff_x20[8] = uVar9;
    unaff_x20[7] = uVar7;
    unaff_x20[9] = 0;
    unaff_x20[0xb] = in_stack_00000028;
    unaff_x20[10] = in_stack_00000020;
    unaff_x20[0xd] = in_stack_00000038;
    unaff_x20[0xc] = in_stack_00000030;
    unaff_x20[0xe] = uVar5;
    FUN_10070cd54();
    return;
  }
  FUN_107c05cac(&UNK_108cad561,0x1a,&UNK_10b221ef8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10070dff0);
  (*pcVar3)();
}

