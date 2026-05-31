
undefined1  [16] FUN_100b8e4c0(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s__failed_to_write_websocket_messa_108ad106d,&stack0x00000050);
  uVar4 = in_stack_00000048;
  uVar3 = in_stack_00000040;
  uVar2 = in_stack_00000038;
  puVar6 = (undefined8 *)_malloc(0x18);
  if (puVar6 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    plVar7 = (long *)_malloc(0x18);
    if (plVar7 != (long *)0x0) {
      *plVar7 = (long)puVar6;
      plVar7[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar7 + 2) = 0x28;
      FUN_100de8b24(&stack0x00000018);
      *(undefined1 *)(unaff_x19 + 0x1b9) = 0;
      FUN_100e3d46c(unaff_x19 + 0xc0);
      *(undefined1 *)(unaff_x19 + 0x1b8) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar7 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8e5b0);
  (*pcVar5)();
}

