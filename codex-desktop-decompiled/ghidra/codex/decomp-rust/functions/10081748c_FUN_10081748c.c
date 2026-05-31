
void FUN_10081748c(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  
  *(char **)(unaff_x29 + -0x50) = s__maybe_notify__read_from_io_erro_108ac8b13;
  *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x40;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
  lStack0000000000000058 = unaff_x29 + -0x60;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  FUN_100817670(&stack0x00000050);
  __ZN14rama_http_core5proto2h14conn5State5close17h37e265bec3f1ce41E(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x29 + -0x50) = in_stack_00000030;
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 2) = 6;
    *(long **)(unaff_x29 + -0x40) = plVar2;
    uStack0000000000000050 = in_stack_00000030;
    puVar3 = (undefined8 *)_malloc(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = in_stack_00000030;
      *plVar2 = (long)puVar3;
      plVar2[1] = (long)&UNK_10b212e38;
      FUN_100e25264(*(undefined8 *)(unaff_x19 + 400));
      *(long **)(unaff_x19 + 400) = plVar2;
      *(undefined1 *)(unaff_x19 + 0x1bc) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10081761c);
  (*pcVar1)();
}

