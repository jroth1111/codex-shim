
void FUN_100563bbc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x25;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_is_empty__108ac1244,&stack0x00000040);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15);
  if (unaff_x25 != 0) {
    _free();
  }
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = unaff_x22;
  *(undefined1 *)(unaff_x19 + 0x50) = 1;
  return;
}

