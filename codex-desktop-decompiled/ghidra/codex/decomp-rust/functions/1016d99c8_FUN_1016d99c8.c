
undefined8 FUN_1016d99c8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b0,s_Failed_to_open_editor__108adbbb3,&stack0x00000068);
  __ZN9codex_tui12history_cell7notices15new_error_event17ha9e773b9c7fdeb0bE
            (unaff_x29 + -0x88,&stack0x000001f0);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x29 + -0x88);
    puVar2[1] = *(undefined8 *)(unaff_x29 + -0x80);
    *puVar2 = uVar3;
    puVar2[2] = *(undefined8 *)(unaff_x29 + -0x78);
    func_0x00010533d4b0();
    func_0x00010550547c(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18));
    *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
    return 0;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016daa44);
  (*pcVar1)();
}

