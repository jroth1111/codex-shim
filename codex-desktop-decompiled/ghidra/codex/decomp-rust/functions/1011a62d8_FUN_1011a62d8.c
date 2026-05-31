
void FUN_1011a62d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000002d8;
  undefined8 in_stack_000002e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000004f8,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x000000f0);
  uVar1 = FUN_10072a880(&stack0x000004f8);
  FUN_100e3ab90(unaff_x29 + -0xd0);
  if (in_stack_000002d8 != 0) {
    _free(in_stack_000002e0);
  }
  if (unaff_x26 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x26 = unaff_x26 + -1;
    } while (unaff_x26 != 0);
  }
  if (unaff_x27 != 0) {
    _free();
  }
  *unaff_x19 = unaff_x23;
  unaff_x19[1] = uVar1;
  FUN_100e3ab90(&stack0x000000b0);
  if (in_stack_00000098 != 0) {
    _free(in_stack_000000a0);
  }
  return;
}

