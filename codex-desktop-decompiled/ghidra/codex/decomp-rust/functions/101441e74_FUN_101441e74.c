
undefined1  [16] FUN_101441e74(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined1 auVar5 [16];
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  char in_stack_00000150;
  
  in_stack_00000048 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if (1 < (unaff_x25 + unaff_x20) - 0xbU) {
    FUN_100de6690(&stack0x000000f0);
  }
  if (1 < (unaff_x25 + unaff_x28) - 0xbU) {
    FUN_100de6690(&stack0x00000268);
  }
  if (unaff_x26 != -0x8000000000000000) {
    in_stack_00000018 = in_stack_00000018 + 1;
    lVar2 = in_stack_00000038;
    while (in_stack_00000018 = in_stack_00000018 + -1, in_stack_00000018 != 0) {
      FUN_100de6690(lVar2);
      lVar2 = lVar2 + 0x48;
    }
    if (unaff_x26 != 0) {
      _free(in_stack_00000038);
    }
  }
  FUN_100d34830(&stack0x00000170);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    uVar3 = 1;
    plVar4 = in_stack_00000048;
  }
  else {
    plVar4 = (long *)_malloc(0xa8);
    if (plVar4 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101441ff0);
      (*pcVar1)();
    }
    uVar3 = 0;
    plVar4[0x14] = in_stack_000000e0;
    plVar4[0x11] = in_stack_000000c8;
    plVar4[0x10] = in_stack_000000c0;
    plVar4[0x13] = in_stack_000000d8;
    plVar4[0x12] = in_stack_000000d0;
    plVar4[9] = in_stack_00000088;
    plVar4[8] = in_stack_00000080;
    plVar4[0xb] = in_stack_00000098;
    plVar4[10] = in_stack_00000090;
    plVar4[0xd] = in_stack_000000a8;
    plVar4[0xc] = in_stack_000000a0;
    plVar4[0xf] = in_stack_000000b8;
    plVar4[0xe] = in_stack_000000b0;
    plVar4[1] = (long)in_stack_00000048;
    *plVar4 = in_stack_00000040;
    plVar4[3] = in_stack_00000058;
    plVar4[2] = in_stack_00000050;
    plVar4[5] = in_stack_00000068;
    plVar4[4] = in_stack_00000060;
    plVar4[7] = in_stack_00000078;
    plVar4[6] = in_stack_00000070;
  }
  auVar5._8_8_ = plVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}

