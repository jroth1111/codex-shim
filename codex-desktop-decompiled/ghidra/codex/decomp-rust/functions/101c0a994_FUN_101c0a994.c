
void FUN_101c0a994(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  long unaff_x29;
  long in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined *in_stack_00000058;
  undefined8 *in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000030,s___null_108ae5e02);
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000058);
  }
  in_stack_00000050 = unaff_x29 + -0x30;
  in_stack_00000058 = &DAT_102024cac;
  in_stack_00000060 = &stack0x00000030;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s_contents_____108adfff1,&stack0x00000050);
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  in_stack_00000038 = in_stack_00000020;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000028;
  FUN_1021676b8(&stack0x00000050,&stack0x00000030,1,&UNK_108cf9cc0,1);
  in_stack_00000008 = in_stack_00000058;
  in_stack_00000000 = in_stack_00000050;
  in_stack_00000010 = in_stack_00000060;
  *(BADSPACEBASE **)(unaff_x29 + -0x30) = register0x00000008;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s_____108ab6fcb,unaff_x29 + -0x30);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  puVar2 = in_stack_00000058;
  lVar1 = in_stack_00000050;
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(puVar2);
  }
  return;
}

