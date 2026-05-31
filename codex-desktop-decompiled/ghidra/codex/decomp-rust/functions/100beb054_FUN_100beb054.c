
undefined1  [16] FUN_100beb054(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s__enrollment_account_id_does_not_m_108ad221a,unaff_x29 + -0x90);
  uVar4 = in_stack_00000068;
  uVar3 = in_stack_00000060;
  uVar2 = in_stack_00000058;
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
      *(undefined1 *)(unaff_x19 + 0x68) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar7 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100bebc30);
  (*pcVar5)();
}

