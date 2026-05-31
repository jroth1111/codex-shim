
/* WARNING: Removing unreachable block (ram,0x000100511190) */

undefined1  [16] FUN_100511208(void)

{
  long unaff_x20;
  long unaff_x23;
  undefined1 *unaff_x24;
  long unaff_x29;
  long in_stack_000013d0;
  undefined8 in_stack_000013d8;
  undefined8 in_stack_000013e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000013d0,s__failed_to_initialize_state_runt_108ac7478,unaff_x29 + -0x50);
  __ZN13codex_rollout8state_db20emit_startup_warning17h18a2d5def1217d2cE
            (in_stack_000013d8,in_stack_000013e0);
  if (in_stack_000013d0 != 0) {
    _free(in_stack_000013d8);
  }
  (**(code **)**(undefined8 **)(unaff_x29 + -0x58))();
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x48));
  }
  *unaff_x24 = 1;
  FUN_100ccf6e0();
  *(undefined1 *)(unaff_x23 + 0x458) = 1;
  return ZEXT816(0);
}

