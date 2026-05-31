
undefined1  [16] FUN_10034b0d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long unaff_x21;
  long unaff_x29;
  undefined1 auVar5 [16];
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long lStack0000000000000110;
  long lStack0000000000000118;
  long lStack0000000000000120;
  undefined8 uStack0000000000000128;
  char *pcStack0000000000000130;
  undefined8 uStack0000000000000158;
  char *pcStack0000000000000160;
  long lStack0000000000000168;
  
  lStack0000000000000168 = unaff_x29 + -0xb0;
  pcStack0000000000000160 = s_websocket_start_send_error__108ac570a;
  lStack0000000000000110 = 0;
  uStack0000000000000128 = 0;
  lStack0000000000000120 = 0x11;
  pcStack0000000000000130 =
       "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/lib.rs";
  *(undefined8 *)(unaff_x21 + 0xa0) = 4;
  *(undefined8 *)(unaff_x21 + 0x98) = 0x58;
  uStack0000000000000158 = 0x16900000001;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  lStack0000000000000118 = param_1;
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000110);
  lStack0000000000000118 = in_stack_00000070;
  lStack0000000000000110 = in_stack_00000068;
  lStack0000000000000120 = in_stack_00000078;
  if (in_stack_00000060 == 0x15) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)_malloc(0x20);
    if (plVar4 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10034ba88);
      (*pcVar3)();
    }
    plVar4[1] = in_stack_00000068;
    *plVar4 = in_stack_00000060;
    plVar4[3] = in_stack_00000078;
    plVar4[2] = in_stack_00000070;
  }
  auVar5._8_8_ = &UNK_10b202d18;
  auVar5._0_8_ = plVar4;
  return auVar5;
}

