
void FUN_101c148b4(void)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 uVar1;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s_PluginShareCheckoutParams_ts_108ae0ee4,&stack0x00000030);
  *(undefined8 *)(unaff_x29 + -0x28) = in_stack_00000020;
  *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000018;
  *(undefined8 *)(unaff_x29 + -0x20) = in_stack_00000028;
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x30);
  unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0x28);
  *unaff_x19 = uVar1;
  unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0x20);
  return;
}

