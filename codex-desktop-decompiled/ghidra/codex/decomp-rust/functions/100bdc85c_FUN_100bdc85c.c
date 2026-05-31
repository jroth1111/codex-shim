
void FUN_100bdc85c(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long in_stack_00000008;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s_path_is_not_absolute__108ad1c4e,&stack0x00000048);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x00000020);
  *unaff_x22 = 0x8000000000000000;
  unaff_x22[1] = uVar1;
  if (in_stack_00000008 != 0) {
    _free();
  }
  if (*unaff_x20 != 0) {
    _free();
  }
  return;
}

