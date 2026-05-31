
void FUN_101c19248(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s____key_in_______108ae6002,unaff_x29 + -0x40);
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000068);
  }
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000048);
  }
  *(undefined1 **)(unaff_x29 + -0x40) = &stack0x00000018;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_102024cac;
  *(undefined8 ***)(unaff_x29 + -0x30) = &stack0x00000028;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s_answers_____108ae05c3,unaff_x29 + -0x40)
  ;
  if (in_stack_00000028 != (undefined8 *)0x0) {
    _free(in_stack_00000030);
  }
  in_stack_00000068 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000000;
  in_stack_00000070 = in_stack_00000010;
  FUN_1021676b8(unaff_x29 + -0x40,&stack0x00000060,1,&UNK_108cf9cc0,1);
  in_stack_00000048 = *(undefined8 *)(unaff_x29 + -0x38);
  in_stack_00000040 = *(long *)(unaff_x29 + -0x40);
  in_stack_00000050 = *(undefined8 *)(unaff_x29 + -0x30);
  in_stack_00000028 = &stack0x00000040;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x40,s_____108ab6fcb,&stack0x00000028);
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000048);
  }
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000068);
  }
  lVar1 = *(long *)(unaff_x29 + -0x40);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x38);
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(uVar2);
  }
  return;
}

