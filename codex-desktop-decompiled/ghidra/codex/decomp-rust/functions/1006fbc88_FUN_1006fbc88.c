
void FUN_1006fbc88(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar3;
  char *pcStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined8 uStack0000000000000078;
  long lStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  
  puStack0000000000000060 = &stack0x00000100;
  pcStack0000000000000058 = s__south_socket__fatal_I_O_write_e_108ac4865;
  *(undefined8 *)(unaff_x29 + -0xf8) = in_x9;
  *(char ***)(unaff_x29 + -0xc0) = &stack0x00000058;
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xf8;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec70;
  lStack0000000000000080 = unaff_x29 + -0xc0;
  uStack0000000000000078 = 1;
  uStack0000000000000088 = 2;
  uStack0000000000000090 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined **)(unaff_x29 + -0xc0) = &UNK_108caa7b6;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0x22;
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xd0);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x25 + 0xc0);
    puVar2[1] = *(undefined8 *)(unaff_x25 + 200);
    *puVar2 = uVar3;
    puVar2[2] = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x20[1] = puVar2;
    unaff_x20[2] = &UNK_10b2372e8;
    *unaff_x20 = 0;
    *(undefined1 *)(unaff_x19 + 0x78) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fbf94);
  (*pcVar1)();
}

