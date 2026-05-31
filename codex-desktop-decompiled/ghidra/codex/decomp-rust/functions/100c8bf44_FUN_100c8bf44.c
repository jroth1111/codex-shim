
void FUN_100c8bf44(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s__Overlapping_method_route__Handl_108ad3547,unaff_x29 + -0x50);
  unaff_x21[2] = in_stack_00000060;
  unaff_x21[1] = in_stack_00000058;
  unaff_x21[3] = in_stack_00000068;
  *unaff_x21 = 1;
  pcVar1 = (code *)*in_stack_00000020;
  if (unaff_x22 == 1) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(in_stack_00000018);
    }
  }
  else if (pcVar1 != (code *)0x0) {
    (*pcVar1)(in_stack_00000018);
  }
  if (in_stack_00000020[1] != 0) {
    _free(in_stack_00000018);
  }
  if (unaff_x20 != 0) {
    if (unaff_x20 == 1) {
      if ((code *)*in_stack_00000038 != (code *)0x0) {
        (*(code *)*in_stack_00000038)(in_stack_00000030);
      }
    }
    else if ((code *)*in_stack_00000038 != (code *)0x0) {
      (*(code *)*in_stack_00000038)(in_stack_00000030);
    }
    if (in_stack_00000038[1] != 0) {
      _free(in_stack_00000030);
    }
  }
  return;
}

