
void FUN_100f49a08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s__cannot_create_a_repair_backup_n_108ad461d,&stack0x000001c0);
  uVar3 = in_stack_00000090;
  uVar2 = in_stack_00000088;
  uVar1 = in_stack_00000080;
  puVar5 = (undefined8 *)_malloc(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    plVar6 = (long *)_malloc(0x18);
    if (plVar6 != (long *)0x0) {
      *plVar6 = (long)puVar5;
      plVar6[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar6 + 2) = 0x28;
      *unaff_x28 = 0x8000000000000000;
      unaff_x28[1] = (long)plVar6 + 1;
      unaff_x28[2] = puVar5;
      *(undefined1 *)(unaff_x19 + 0x86) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100f49b60);
  (*pcVar4)();
}

