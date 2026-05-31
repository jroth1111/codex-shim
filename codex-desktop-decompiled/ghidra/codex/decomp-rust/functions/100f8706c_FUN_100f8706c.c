
void FUN_100f8706c(void)

{
  long unaff_x29;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000050;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s___108ac02d4,&stack0x00000050);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  in_stack_00000050 = &stack0x00000028;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s__108ac137a,&stack0x00000050);
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  return;
}

