
void FUN_101c134c0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s_Array<_>_108ae5df7,unaff_x29 + -0x30);
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  lVar2 = in_stack_00000040;
  lVar1 = in_stack_00000038;
  in_stack_00000008 = 6;
  FUN_1021676b8(&stack0x00000038,&stack0x00000008,2,&UNK_108cf9ded,3);
  unaff_x20[1] = in_stack_00000040;
  *unaff_x20 = in_stack_00000038;
  unaff_x20[2] = in_stack_00000048;
  _free();
  if (lVar1 != 0) {
    _free(lVar2);
  }
  return;
}

