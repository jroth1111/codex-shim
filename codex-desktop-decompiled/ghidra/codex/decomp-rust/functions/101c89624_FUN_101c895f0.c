
void FUN_101c895f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x48,s_Array<_>_108ae5df7,&stack0x00000030);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000050,s_enum_____108ae20b6);
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x40));
  }
  uVar2 = in_stack_00000058;
  lVar1 = in_stack_00000050;
  FUN_1021676b8(unaff_x29 + -0x48);
  in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x40);
  in_stack_00000030 = *(long *)(unaff_x29 + -0x48);
  in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x38);
  *(long **)(unaff_x29 + -0x58) = &stack0x00000030;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x22;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x48,s_____108ab6fcb,unaff_x29 + -0x58);
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x21 != 0) {
    _free();
  }
  if (lVar1 != 0) {
    _free(uVar2);
  }
  lVar1 = *(long *)(unaff_x29 + -0x48);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(uVar2);
  }
  return;
}
