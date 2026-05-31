
void FUN_100a0d1c8(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar1;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s_Viewing_attempt_of_108acdcff,&stack0x00000030);
  plVar1 = (long *)*unaff_x19;
  if (*plVar1 != 0) {
    _free(plVar1[1]);
  }
  plVar1[1] = in_stack_00000020;
  *plVar1 = in_stack_00000018;
  plVar1[2] = in_stack_00000028;
  *(undefined2 *)(unaff_x20 + 0x8c) = 0;
  *(undefined1 *)unaff_x19[2] = 1;
  return;
}

