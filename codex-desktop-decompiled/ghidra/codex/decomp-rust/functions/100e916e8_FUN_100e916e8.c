
void FUN_100e916e8(void)

{
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar1;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000038;
  
  do {
    puVar1 = unaff_x24 + 2;
    uStack0000000000000038 = *unaff_x24;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000020,s________108ac942d,&stack0x00000040);
    unaff_x21[1] = in_stack_00000028;
    *unaff_x21 = in_stack_00000020;
    unaff_x21[2] = in_stack_00000030;
    unaff_x26 = unaff_x26 + 1;
    unaff_x21 = unaff_x21 + 3;
    unaff_x24 = puVar1;
  } while (puVar1 != unaff_x25);
  if (unaff_x23 != 0) {
    _free();
  }
  unaff_x20[1] = in_stack_00000010;
  *unaff_x20 = in_stack_00000008;
  unaff_x20[2] = unaff_x26;
  return;
}

