
void FUN_101c8b278(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 unaff_x20;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s__108ac0bb6,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x60) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x58));
  }
  in_stack_00000028 = in_stack_00000058;
  in_stack_00000020 = in_stack_00000050;
  in_stack_00000030 = in_stack_00000060;
  in_stack_00000040 = &UNK_108cfa0c4;
  in_stack_00000048 = 1;
  puVar4 = (undefined4 *)_malloc(6);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x69727473;
    *(undefined2 *)(puVar4 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    *(undefined4 **)(unaff_x29 + -0x58) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x50) = 6;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x60;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s___null_108ae5e02,unaff_x29 + -0x30);
    if (*(long *)(unaff_x29 + -0x60) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x58));
    }
    *(long **)(unaff_x29 + -0x60) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
    *(undefined ***)(unaff_x29 + -0x50) = &stack0x00000040;
    *(undefined **)(unaff_x29 + -0x48) = &DAT_102024cac;
    *(long **)(unaff_x29 + -0x40) = &stack0x00000050;
    *(undefined8 *)(unaff_x29 + -0x38) = unaff_x20;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000008,s_value_____108ae2347,unaff_x29 + -0x60);
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000058);
    }
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000028);
    }
    in_stack_00000058 = in_stack_00000010;
    in_stack_00000050 = in_stack_00000008;
    in_stack_00000060 = in_stack_00000018;
    FUN_1021676b8(unaff_x29 + -0x60,&stack0x00000050,1,&UNK_108cf9cc0,1);
    in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0x58);
    in_stack_00000020 = *(long *)(unaff_x29 + -0x60);
    in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x50);
    *(long **)(unaff_x29 + -0x30) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x60,s_____108ab6fcb,unaff_x29 + -0x30);
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000028);
    }
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000058);
    }
    lVar1 = *(long *)(unaff_x29 + -0x60);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x58);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c8b440);
  (*pcVar3)();
}
