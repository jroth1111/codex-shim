
void FUN_101bfe6a4(void)

{
  long lVar1;
  undefined8 unaff_x21;
  long *plVar2;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000040);
  plVar2 = (long *)(unaff_x29 + -0x68);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000040 = (undefined8 *)*plVar2;
  FUN_1021618b8(unaff_x29 + -0x68);
  in_stack_00000058 = &stack0x00000040;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s_cwds_____108adee3b,&stack0x00000058);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  if (in_stack_00000040 != (undefined8 *)0x0) {
    _free(uVar3);
  }
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b26bad0,2);
  in_stack_00000040 = &stack0x00000058;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000040);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(unaff_x21);
  }
  uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000040 = (undefined8 *)*plVar2;
  func_0x000102161a68(unaff_x29 + -0x68);
  in_stack_00000058 = &stack0x00000040;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_installSuggestionPluginNames_____108adee49,&stack0x00000058);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  if (in_stack_00000040 != (undefined8 *)0x0) {
    _free(uVar3);
  }
  uVar3 = in_stack_00000030;
  lVar1 = in_stack_00000028;
  in_stack_00000058 = (undefined8 *)in_stack_00000000;
  FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000058,2,&UNK_108cf9cc0,1);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000040 = (undefined8 *)*plVar2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x68,s_____108ab6fcb);
  if (in_stack_00000040 != (undefined8 *)0x0) {
    _free(uVar4);
  }
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  if (lVar1 != 0) {
    _free(uVar3);
  }
  lVar1 = *(long *)(unaff_x29 + -0x68);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
  func_0x000102167960();
  if (lVar1 != 0) {
    _free(uVar3);
  }
  return;
}

