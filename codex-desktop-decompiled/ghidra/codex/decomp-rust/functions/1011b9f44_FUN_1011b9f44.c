
void FUN_1011b9f44(void)

{
  undefined8 uVar1;
  undefined1 *unaff_x19;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b0,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x000000f0);
  uVar1 = FUN_10072a880(&stack0x000000b0);
  FUN_100e3ab90(&stack0x00000070);
  if (in_stack_00000058 != 0) {
    _free(in_stack_00000060);
  }
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  *unaff_x19 = 5;
  return;
}

