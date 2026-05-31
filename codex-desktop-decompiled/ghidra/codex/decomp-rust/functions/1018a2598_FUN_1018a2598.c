
void FUN_1018a2598(void)

{
  undefined8 *unaff_x20;
  long unaff_x29;
  undefined8 uVar1;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_failed_to_install_plugin__108addf46,unaff_x29 + -0x50);
  unaff_x20[0xc] = 0xffffffffffff80a5;
  uVar1 = *(undefined8 *)(unaff_x29 + -0x80);
  unaff_x20[1] = *(undefined8 *)(unaff_x29 + -0x78);
  *unaff_x20 = uVar1;
  unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x70);
  unaff_x20[3] = 0x8000000000000005;
  if (in_stack_00000058 != 0) {
    if ((code *)*in_stack_00000060 != (code *)0x0) {
      (*(code *)*in_stack_00000060)(in_stack_00000058);
    }
    if (in_stack_00000060[1] != 0) {
      _free(in_stack_00000058);
    }
  }
  return;
}

