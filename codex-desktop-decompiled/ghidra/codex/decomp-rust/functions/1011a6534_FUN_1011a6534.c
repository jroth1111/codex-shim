
void FUN_1011a6534(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000003f0,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x00000510);
  uVar1 = FUN_10072a880(&stack0x000003f0);
  FUN_100e3ab90(&stack0x00000388);
  if (in_stack_000000f0 != 0) {
    _free(in_stack_000000f8);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100e21d54(&stack0x00000300);
  *unaff_x19 = 0x8000000000000017;
  unaff_x19[1] = uVar1;
  FUN_100e3ab90(&stack0x000000b0);
  if (in_stack_00000098 != 0) {
    _free(in_stack_000000a0);
  }
  return;
}

