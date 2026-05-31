
void FUN_100af7564(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x25;
  long unaff_x28;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uStack0000000000000024;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 uStack0000000000000190;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  ushort in_stack_00000290;
  undefined2 in_stack_00000296;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined2 in_stack_000002b0;
  undefined1 in_stack_000002b2;
  undefined1 in_stack_000002b7;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000003e0;
  undefined8 *in_stack_000003e8;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  
  *(undefined8 *)(unaff_x25 + 0x68) = in_stack_00000098;
  *(undefined8 *)(unaff_x25 + 0x60) = in_stack_00000090;
  uStack0000000000000190 = in_stack_000000a0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  __ZN19codex_network_proxy9responses13text_response17hb12ec00a07c01d4aE
            (&stack0x00000240,400,&UNK_108cb8420,0x11);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x28 + 0x20);
  uStack0000000000000024 = (uint)in_stack_00000290;
  *(undefined4 *)(unaff_x29 + -0x78) = *(undefined4 *)(unaff_x28 + 0x52);
  *(undefined2 *)(unaff_x29 + -0x74) = in_stack_00000296;
  *(undefined1 *)(unaff_x29 + -0x7c) = in_stack_000002b7;
  *(undefined4 *)(unaff_x29 + -0x80) = *(undefined4 *)(unaff_x28 + 0x73);
  uVar9 = *(undefined8 *)(unaff_x28 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x28 + 0x78);
  if ((code *)*in_stack_000003e8 != (code *)0x0) {
    (*(code *)*in_stack_000003e8)(in_stack_000003e0);
  }
  if (in_stack_000003e8[1] != 0) {
    _free(in_stack_000003e0);
  }
  *(undefined1 *)(unaff_x19 + 0x325) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x220);
  **(long **)(unaff_x19 + 0x220) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
  }
  FUN_100df6754(unaff_x19 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x210);
  puVar5 = *(undefined8 **)(unaff_x19 + 0x218);
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar4);
  }
  if (puVar5[1] != 0) {
    _free(uVar4);
  }
  *(undefined1 *)(unaff_x19 + 0x326) = 0;
  plVar3 = *(long **)(unaff_x19 + 0x110);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
    }
  }
  unaff_x20[6] = uVar8;
  unaff_x20[5] = uVar6;
  unaff_x20[0x11] = uVar9;
  unaff_x20[0x10] = uVar7;
  unaff_x20[0x1a] = in_stack_00000478;
  unaff_x20[0x19] = in_stack_00000470;
  unaff_x20[0x18] = in_stack_00000468;
  unaff_x20[0x17] = in_stack_00000460;
  unaff_x20[0x16] = in_stack_00000458;
  unaff_x20[0x15] = in_stack_00000450;
  unaff_x20[0x14] = in_stack_00000448;
  unaff_x20[0x13] = in_stack_00000440;
  unaff_x20[0x20] = in_stack_000004a8;
  unaff_x20[0x1f] = in_stack_000004a0;
  unaff_x20[0x1e] = in_stack_00000498;
  unaff_x20[0x1d] = in_stack_00000490;
  unaff_x20[0x1c] = in_stack_00000488;
  unaff_x20[0x1b] = in_stack_00000480;
  unaff_x20[0x26] = in_stack_000004d8;
  unaff_x20[0x25] = in_stack_000004d0;
  unaff_x20[0x28] = in_stack_000004e8;
  unaff_x20[0x27] = in_stack_000004e0;
  unaff_x20[0x22] = in_stack_000004b8;
  unaff_x20[0x21] = in_stack_000004b0;
  unaff_x20[0x24] = in_stack_000004c8;
  unaff_x20[0x23] = in_stack_000004c0;
  unaff_x20[0x2e] = in_stack_00000518;
  unaff_x20[0x2d] = in_stack_00000510;
  unaff_x20[0x30] = in_stack_00000528;
  unaff_x20[0x2f] = in_stack_00000520;
  *unaff_x20 = 3;
  unaff_x20[1] = 1;
  unaff_x20[2] = &stack0x000003f8;
  unaff_x20[3] = 1;
  unaff_x20[4] = param_1;
  unaff_x20[7] = in_stack_00000270;
  unaff_x20[8] = in_stack_00000278;
  unaff_x20[9] = in_stack_00000280;
  unaff_x20[10] = in_stack_00000288;
  *(short *)(unaff_x20 + 0xb) = (short)uStack0000000000000024;
  *(undefined4 *)((long)unaff_x20 + 0x5a) = *(undefined4 *)(unaff_x29 + -0x78);
  *(undefined2 *)((long)unaff_x20 + 0x5e) = *(undefined2 *)(unaff_x29 + -0x74);
  unaff_x20[0xc] = in_stack_00000298;
  unaff_x20[0xd] = in_stack_000002a0;
  unaff_x20[0xe] = in_stack_000002a8;
  *(undefined2 *)(unaff_x20 + 0xf) = in_stack_000002b0;
  *(undefined1 *)((long)unaff_x20 + 0x7a) = in_stack_000002b2;
  *(undefined1 *)((long)unaff_x20 + 0x7f) = *(undefined1 *)(unaff_x29 + -0x7c);
  *(undefined4 *)((long)unaff_x20 + 0x7b) = *(undefined4 *)(unaff_x29 + -0x80);
  unaff_x20[0x12] = in_stack_000002c8;
  unaff_x20[0x31] = in_stack_00000530;
  unaff_x20[0x2a] = in_stack_000004f8;
  unaff_x20[0x29] = in_stack_000004f0;
  unaff_x20[0x2c] = in_stack_00000508;
  unaff_x20[0x2b] = in_stack_00000500;
  *(undefined1 *)(unaff_x19 + 800) = 1;
  return;
}

