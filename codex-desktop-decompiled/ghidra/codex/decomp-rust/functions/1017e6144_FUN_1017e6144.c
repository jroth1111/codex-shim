
void FUN_1017e6144(undefined8 param_1)

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
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  long lStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  
  *(char **)(unaff_x29 + -0xc0) = s_received_event_without_type_fiel_108adceae;
  *(undefined1 **)(unaff_x29 + -0xb8) = &stack0x00000070;
  *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
  lStack00000000000000f8 = unaff_x29 + -0xd0;
  uStack00000000000000f0 = 1;
  uStack0000000000000100 = 1;
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
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x000000f0;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
  uVar2 = 1;
  if (lVar5 == 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000e0;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000d8;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000e8;
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
  uStack0000000000000108 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  *(undefined8 *)(unaff_x19 + 0x48) = 0x8000000000000000;
  FUN_1017a4698(&stack0x00000020);
  return;
}

