
undefined8 FUN_1009c7e80(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 *unaff_x21;
  ulong uVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000158;
  long in_stack_00000160;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000a280,s_3Failed_to_load_Codex_configurat_108acd0d0,&stack0x00007bc0);
  uVar1 = *unaff_x25;
  unaff_x21[2] = unaff_x25[1];
  unaff_x21[1] = uVar1;
  uVar1 = unaff_x25[2];
  *unaff_x21 = 0;
  unaff_x21[3] = uVar1;
  unaff_x21[4] = 0x8000000000000000;
  unaff_x21[0x1d] = 0x8000000000000001;
  *(undefined1 *)(in_stack_00000158 + 0x704) = 1;
  *(undefined1 *)(unaff_x24 + 0x15) = 1;
  unaff_x24[3] = 0x8000000000000000;
  unaff_x24[2] = 1;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x48);
  uVar7 = unaff_x24[1];
  uVar6 = *unaff_x24;
  uVar1 = unaff_x24[2];
  *(undefined8 *)(unaff_x19 + 0x2728) = unaff_x24[3];
  *(undefined8 *)(unaff_x19 + 0x2720) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x2718) = uVar7;
  *(undefined8 *)(unaff_x19 + 10000) = uVar6;
  uVar1 = unaff_x24[0xc];
  uVar7 = unaff_x24[0xf];
  uVar6 = unaff_x24[0xe];
  *(undefined8 *)(unaff_x19 + 0x2778) = unaff_x24[0xd];
  *(undefined8 *)(unaff_x19 + 0x2770) = uVar1;
  uVar1 = unaff_x24[0x14];
  *(undefined8 *)(unaff_x19 + 0x27b8) = unaff_x24[0x15];
  *(undefined8 *)(unaff_x19 + 0x27b0) = uVar1;
  uVar1 = unaff_x24[4];
  uVar9 = unaff_x24[7];
  uVar8 = unaff_x24[6];
  *(undefined8 *)(unaff_x19 + 0x2738) = unaff_x24[5];
  *(undefined8 *)(unaff_x19 + 0x2730) = uVar1;
  uVar11 = unaff_x24[9];
  uVar10 = unaff_x24[8];
  uVar1 = unaff_x24[10];
  *(undefined8 *)(unaff_x19 + 0x2768) = unaff_x24[0xb];
  *(undefined8 *)(unaff_x19 + 0x2760) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x2758) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x2750) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x2748) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x2740) = uVar8;
  uVar9 = unaff_x24[0x11];
  uVar8 = unaff_x24[0x10];
  uVar1 = unaff_x24[0x12];
  *(undefined8 *)(unaff_x19 + 0x27a8) = unaff_x24[0x13];
  *(undefined8 *)(unaff_x19 + 0x27a0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x2798) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x2790) = uVar8;
  *(undefined1 *)(in_stack_00000158 + 0x701) = 0;
  *(undefined1 *)(in_stack_00000158 + 0x704) = 0;
  *(undefined8 *)(unaff_x19 + 0x2788) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x2780) = uVar6;
  *(long *)(unaff_x19 + 0x27c0) = lVar2 + 0x10;
  *(undefined8 *)(unaff_x19 + 0x27d0) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x27c8) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined1 *)(in_stack_00000158 + 0x8b0) = 0;
  func_0x0001009b7030(in_stack_00000160 + 10000);
  FUN_100d5ee48(in_stack_00000160 + 10000);
  *(undefined1 *)(in_stack_00000158 + 0x704) = 0;
  uVar5 = *(ulong *)(in_stack_00000160 + 0x2708);
  if ((uVar5 & 3) == 1) {
    uVar1 = *(undefined8 *)(uVar5 - 1);
    puVar4 = *(undefined8 **)(uVar5 + 7);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar1);
    }
    if (puVar4[1] != 0) {
      _free(uVar1);
    }
    _free((undefined8 *)(uVar5 - 1));
  }
  *(undefined1 *)(in_stack_00000158 + 0x701) = 0;
  *(undefined1 *)(in_stack_00000158 + 0x700) = 1;
  return 0;
}

