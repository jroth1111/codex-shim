
void FUN_1018a6908(undefined8 param_1)

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
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 *puStack00000000000000b8;
  undefined *puStack00000000000000c0;
  undefined1 *puStack00000000000000e0;
  undefined *puStack00000000000000e8;
  undefined8 uStack0000000000000140;
  undefined1 *puStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  long in_stack_00000200;
  undefined8 in_stack_00000208;
  long in_stack_00000218;
  
  puStack00000000000000b8 = &stack0x00000318;
  puStack00000000000000c0 = &UNK_10b25d1e8;
  puStack0000000000000148 = (undefined1 *)&stack0x000000b8;
  uStack0000000000000140 = 1;
  uStack0000000000000150 = 1;
  lVar5 = *(long *)(unaff_x21 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x21 + 0x68);
  lVar6 = *(long *)(unaff_x21 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x21 + 0x58);
  uVar1 = 1;
  if (lVar6 == 0) {
    uVar1 = 2;
  }
  uVar3 = *(undefined4 *)(unaff_x21 + 8);
  uVar4 = *(undefined4 *)(unaff_x21 + 0xc);
  puStack00000000000000e0 = &stack0x000002c0;
  puStack00000000000000e8 = &DAT_1061c2098;
  uVar2 = 1;
  if (lVar5 == 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000000a8;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000a0;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000b0;
  *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
  *(undefined1 ***)(unaff_x29 + -0x68) = &stack0x000000e0;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar1;
  *(long *)(unaff_x29 + -0xb8) = lVar6;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
  *(long *)(unaff_x29 + -0xa0) = lVar5;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar7;
  *(undefined4 *)(unaff_x29 + -0x78) = uVar3;
  *(undefined4 *)(unaff_x29 + -0x74) = uVar4;
  uStack0000000000000158 = param_1;
  (**(code **)(unaff_x19 + 0x20))();
  *unaff_x25 = 0x8000000000000000;
  *(undefined1 *)(unaff_x25 + 4) = 3;
  *(undefined2 *)(unaff_x25 + 5) = 0;
  if (in_stack_00000218 != -0x7ffffffffffffffb) {
    func_0x00010194dc28(&stack0x00000218);
  }
  if (in_stack_00000200 != 0) {
    _free(in_stack_00000208);
  }
  if (*unaff_x28 != -0x8000000000000000) {
    FUN_10196b754();
  }
  return;
}

