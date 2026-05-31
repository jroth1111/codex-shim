
undefined1  [16] FUN_1007383c8(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000001c8;
  undefined8 *in_stack_000001d0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s__config_persistence_task_panicke_108ac5a9d,&stack0x00000040);
  uVar4 = in_stack_00000090;
  uVar3 = in_stack_00000088;
  uVar2 = in_stack_00000080;
  puVar8 = (undefined8 *)_malloc(0x18);
  if (puVar8 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar8 = uVar2;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    plVar9 = (long *)_malloc(0x18);
    puVar6 = in_stack_000001d0;
    lVar5 = in_stack_000001c8;
    if (plVar9 != (long *)0x0) {
      *plVar9 = (long)puVar8;
      plVar9[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar9 + 2) = 0x28;
      if (in_stack_000001c8 != 0) {
        if ((code *)*in_stack_000001d0 != (code *)0x0) {
          (*(code *)*in_stack_000001d0)(in_stack_000001c8);
        }
        if (puVar6[1] != 0) {
          _free(lVar5);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x31) = 0;
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar9 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100738530);
  (*pcVar7)();
}

