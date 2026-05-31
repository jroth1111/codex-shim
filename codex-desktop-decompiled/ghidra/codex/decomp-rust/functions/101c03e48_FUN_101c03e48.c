
void FUN_101c03e48(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000050);
  if (in_stack_00000008 != (undefined8 *)0x0) {
    _free(in_stack_00000010);
  }
  in_stack_00000008 = &stack0x00000080;
  in_stack_00000018 = unaff_x29 + -0x70;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000068,s_timeoutSecs_____108adf6a1,&stack0x00000008);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar2 = in_stack_00000070;
  lVar1 = in_stack_00000068;
  FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000008,3,&UNK_108cf9cc0,1);
  in_stack_00000058 = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_00000050 = *(long *)(unaff_x29 + -0x70);
  in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000080 = &stack0x00000050;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s_____108ab6fcb,&stack0x00000080);
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000058);
  }
  if (unaff_x22 != 0) {
    _free();
  }
  if (unaff_x23 != 0) {
    _free();
  }
  if (lVar1 != 0) {
    _free(uVar2);
  }
  lVar1 = *(long *)(unaff_x29 + -0x70);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(uVar2);
  }
  return;
}

