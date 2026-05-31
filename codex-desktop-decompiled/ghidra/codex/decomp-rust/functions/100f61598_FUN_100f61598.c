
void FUN_100f61598(void)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 uVar1;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x98,s_exited_with_status_108ad4b4a,&stack0x000000b0);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x19[1] = uVar1;
  unaff_x19[3] = *(undefined8 *)(unaff_x29 + -0x88);
  *unaff_x19 = 1;
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  return;
}

