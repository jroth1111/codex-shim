
void FUN_1017767e0(undefined8 param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x23;
  long unaff_x24;
  long *plVar4;
  ulong unaff_x25;
  long unaff_x26;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined1 *puStack0000000000000090;
  undefined *puStack0000000000000098;
  char *pcStack00000000000000a0;
  undefined8 *puStack00000000000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000d8;
  long lStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  long lStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined4 uStack0000000000000120;
  undefined4 uStack0000000000000124;
  char *pcStack0000000000000128;
  long lStack0000000000000130;
  
  puStack00000000000000a8 = &stack0x000000b0;
  pcStack00000000000000a0 = s__ansi_escape_line__expected_a_si_108adc811;
  puStack0000000000000090 = (undefined1 *)&stack0x000000a0;
  puStack0000000000000098 = &UNK_10b258760;
  puStack0000000000000078 = (undefined1 *)&stack0x00000090;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  lStack00000000000000f8 = *(long *)(unaff_x24 + 0x60);
  uStack0000000000000100 = *(undefined8 *)(unaff_x24 + 0x68);
  lStack00000000000000e0 = *(long *)(unaff_x24 + 0x50);
  uStack00000000000000e8 = *(undefined8 *)(unaff_x24 + 0x58);
  uStack00000000000000d8 = 1;
  if (lStack00000000000000e0 == 0) {
    uStack00000000000000d8 = 2;
  }
  uStack0000000000000120 = *(undefined4 *)(unaff_x24 + 8);
  uStack0000000000000124 = *(undefined4 *)(unaff_x24 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x78) = &stack0x00000070;
  *(undefined1 *)(unaff_x29 + -0x70) = 1;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
  uStack00000000000000f0 = 1;
  if (lStack00000000000000f8 == 0) {
    uStack00000000000000f0 = 2;
  }
  uStack0000000000000110 = in_stack_00000060;
  uStack0000000000000108 = in_stack_00000058;
  uStack0000000000000118 = in_stack_00000068;
  lStack0000000000000130 = unaff_x29 + -0x68;
  pcStack0000000000000128 = s__108b39f4f;
  uStack0000000000000088 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  in_stack_000000b8 = *(undefined8 *)(unaff_x21 + 0x20);
  in_stack_000000b0 = *(undefined8 *)(unaff_x21 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x21 + 0x28);
  FUN_101776d20(&stack0x000000d8,*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)(unaff_x21 + 0x10));
  unaff_x20[4] = in_stack_000000b8;
  unaff_x20[3] = in_stack_000000b0;
  *(undefined1 *)(unaff_x20 + 5) = uVar2;
  unaff_x20[1] = lStack00000000000000e0;
  *unaff_x20 = uStack00000000000000d8;
  unaff_x20[2] = uStack00000000000000e8;
  lVar3 = 0;
  do {
    plVar4 = (long *)(unaff_x21 + lVar3 * 0x30);
    lVar1 = plVar4[1];
    lVar5 = plVar4[2];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      do {
        if ((puVar6[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*plVar4 != 0) {
      _free(lVar1);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != unaff_x26);
  if (in_stack_00000010 != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  return;
}

