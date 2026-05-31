
/* WARNING: Removing unreachable block (ram,0x00010077acd0) */

undefined1  [16] FUN_10077a0b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined1 auVar2 [16];
  undefined8 *in_stack_00000080;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000e0,s__failed_to_initialize_state_runt_108ac740c,unaff_x29 + -0xe0);
  uVar1 = thunk_FUN_108856624(&stack0x000000e0);
  (**(code **)*in_stack_00000080)();
  if (*(long *)(unaff_x20 + 0xd0) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0xd8));
  }
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0xc0));
  }
  if (*(long *)(unaff_x20 + 0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0xa8));
  }
  *unaff_x28 = 1;
  FUN_100c97e6c();
  *(undefined1 *)(unaff_x27 + 0x3d0) = 1;
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}

