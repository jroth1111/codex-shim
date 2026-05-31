
void FUN_101655b5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000e0,s_rollout_at_is_empty_108ac6abd,&stack0x00000410);
  uVar3 = in_stack_000000f0;
  uVar2 = in_stack_000000e8;
  uVar1 = in_stack_000000e0;
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
      if ((((*(byte *)(unaff_x19 + 0x21) & 1) != 0) &&
          (*(long *)(unaff_x19 + 0x30) != -0x8000000000000000)) &&
         (*(long *)(unaff_x19 + 0x30) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x38));
      }
      if ((((*(byte *)(unaff_x19 + 0x20) & 1) != 0) &&
          (*(long *)(unaff_x19 + 0x48) != -0x8000000000000000)) &&
         (*(long *)(unaff_x19 + 0x48) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x50));
      }
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
      FUN_100cf9334(unaff_x19 + 0x90);
      *(undefined1 *)(unaff_x19 + 0x22) = 0;
      *in_stack_00000068 = 0x8000000000000001;
      in_stack_00000068[1] = (long)plVar6 + 1;
      in_stack_00000068[3] = in_stack_00000298;
      in_stack_00000068[2] = in_stack_00000290;
      in_stack_00000068[5] = in_stack_000002a8;
      in_stack_00000068[4] = in_stack_000002a0;
      in_stack_00000068[7] = in_stack_000002b8;
      in_stack_00000068[6] = in_stack_000002b0;
      in_stack_00000068[8] = in_stack_000002c0;
      *(undefined1 *)(unaff_x19 + 0x23) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101657134);
  (*pcVar4)();
}

