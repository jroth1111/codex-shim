
void FUN_1004221a8(void)

{
  undefined8 uVar1;
  undefined1 *unaff_x19;
  long unaff_x22;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x00000070);
  uVar1 = FUN_10072a880(&stack0x00000040);
  FUN_100e3ab90(unaff_x22 + 0x18);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  *unaff_x19 = 1;
  return;
}

