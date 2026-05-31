
undefined1  [16] FUN_1008603cc(void)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  ulong in_stack_00000b90;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar2 = in_stack_00000480;
    puVar2[1] = in_stack_00000488;
    puVar2[2] = in_stack_00000490;
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar3 + 2) = 0x28;
      if ((in_stack_00000b90 & 3) == 1) {
        uVar5 = *(undefined8 *)(in_stack_00000b90 - 1);
        puVar2 = *(undefined8 **)(in_stack_00000b90 + 7);
        pcVar4 = (code *)*puVar2;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar2[1] != 0) {
          _free(uVar5);
        }
        _free((undefined8 *)(in_stack_00000b90 - 1));
      }
      *(undefined1 *)(unaff_x19 + 0x20) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar3 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100861778);
  (*pcVar4)();
}

