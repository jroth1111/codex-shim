
void FUN_101c8fa4c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  long unaff_x29;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000050,s_query_____108ae29c2);
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x50));
  }
  uVar2 = in_stack_00000058;
  lVar1 = in_stack_00000050;
  FUN_1021676b8(unaff_x29 + -0x58);
  in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x50);
  in_stack_00000030 = *(long *)(unaff_x29 + -0x58);
  in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x48);
  in_stack_00000068 = &stack0x00000030;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s_____108ab6fcb,&stack0x00000068);
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x21 != 0) {
    _free();
  }
  if (lVar1 != 0) {
    _free(uVar2);
  }
  lVar1 = *(long *)(unaff_x29 + -0x58);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x50);
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(uVar2);
  }
  return;
}
