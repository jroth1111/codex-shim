
undefined8 FUN_10025d144(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s____aws4_request_108ab8634,&stack0x00000038);
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x40));
  }
  in_stack_00000038 = unaff_x20 + 0x40;
  uVar1 = __ZN4core3fmt5write17h64810b21425781ecE
                    (*unaff_x19,unaff_x19[1],s__108ab8629,&stack0x00000038);
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  return uVar1;
}

