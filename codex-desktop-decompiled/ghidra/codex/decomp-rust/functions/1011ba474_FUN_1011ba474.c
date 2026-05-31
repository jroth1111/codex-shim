
/* WARNING: Removing unreachable block (ram,0x0001011ba670) */

void FUN_1011ba474(void)

{
  undefined8 uVar1;
  undefined1 *unaff_x19;
  long unaff_x21;
  long unaff_x29;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s_the_subcommand_____wasn_t_recogn_108abf349,unaff_x29 + -0xe0);
  uVar1 = FUN_10072a880(unaff_x29 + -0x78);
  FUN_100e3ab90(unaff_x21 + 0x10);
  if (in_stack_000000c8 != 0) {
    _free(in_stack_000000d0);
  }
  FUN_100e3ab90(&stack0x00000070);
  if (in_stack_00000058 != 0) {
    _free(in_stack_00000060);
  }
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  *unaff_x19 = 5;
  return;
}

