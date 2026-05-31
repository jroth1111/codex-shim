
void FUN_1011a6490(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  long unaff_x24;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x29;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_00000560;
  undefined8 in_stack_00000568;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x100,s_the_subcommand_____wasn_t_recogn_108abf349,&stack0x000000f0);
  uVar1 = FUN_10072a880(unaff_x29 + -0x100);
  FUN_100e3ab90(&stack0x00000580);
  if (in_stack_00000560 != 0) {
    _free(in_stack_00000568);
  }
  if (unaff_x27 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x27 = unaff_x27 + -1;
    } while (unaff_x27 != 0);
  }
  if (unaff_x24 != 0) {
    _free();
  }
  *unaff_x19 = unaff_x26;
  unaff_x19[1] = uVar1;
  FUN_100e3ab90(&stack0x000000b0);
  if (in_stack_00000098 != 0) {
    _free(in_stack_000000a0);
  }
  return;
}

