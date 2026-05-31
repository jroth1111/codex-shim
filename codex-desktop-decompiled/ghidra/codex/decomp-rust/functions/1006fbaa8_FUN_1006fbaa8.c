
void FUN_1006fbaa8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000100;
  undefined1 *puStack0000000000000108;
  undefined8 in_stack_00000158;
  
  puStack0000000000000108 = &stack0x00000078;
  pcStack0000000000000100 = s__south_socket__fatal_unknown_wri_108ac488d;
  puStack0000000000000058 = (undefined1 *)&stack0x00000100;
  puStack0000000000000060 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xb8) = &stack0x00000058;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = in_stack_00000158;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000158;
  puVar2 = (undefined8 *)_malloc(8);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
  else {
    *puVar2 = uVar3;
    *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caa7d8;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0x26;
    *(undefined8 **)(unaff_x29 + -0xb0) = puVar2;
    *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b212e38;
    puVar2 = (undefined8 *)_malloc(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(unaff_x25 + 0xc0);
      uVar5 = *(undefined8 *)(unaff_x25 + 0xd8);
      uVar4 = *(undefined8 *)(unaff_x25 + 0xd0);
      puVar2[1] = *(undefined8 *)(unaff_x25 + 200);
      *puVar2 = uVar3;
      puVar2[3] = uVar5;
      puVar2[2] = uVar4;
      unaff_x20[1] = puVar2;
      unaff_x20[2] = &UNK_10b21f338;
      *unaff_x20 = 0;
      *(undefined1 *)(unaff_x19 + 0x78) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fbf94);
  (*pcVar1)();
}

