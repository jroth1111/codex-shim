
void FUN_101c0568c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 unaff_x20;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000040;
  undefined4 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s__108ac0bb6,&stack0x00000020);
  if (in_stack_00000060 != (undefined8 *)0x0) {
    _free(in_stack_00000068);
  }
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = (undefined8 *)in_stack_00000040;
  in_stack_00000030 = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x30) = 1;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar3 + 1) = 0x6461;
    *puVar3 = 0x65726854;
    in_stack_00000040 = 6;
    in_stack_00000050 = 6;
    in_stack_00000060 = &stack0x00000020;
    in_stack_00000048 = puVar3;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000008,s_thread_____108adf8be,&stack0x00000060);
    if (in_stack_00000040 != 0) {
      _free(in_stack_00000048);
    }
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(in_stack_00000028);
    }
    in_stack_00000048 = (undefined4 *)in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    FUN_1021676b8(&stack0x00000060,&stack0x00000040,1,&UNK_108cf9cc0,1);
    in_stack_00000020 = in_stack_00000060;
    *(undefined8 ***)(unaff_x29 + -0x30) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    in_stack_00000028 = unaff_x20;
    in_stack_00000030 = unaff_x29 + -0x30;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000060,s_____108ab6fcb,unaff_x29 + -0x30);
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(in_stack_00000028);
    }
    if (in_stack_00000040 != 0) {
      _free(in_stack_00000048);
    }
    puVar1 = in_stack_00000060;
    func_0x000102167960();
    if (puVar1 != (undefined8 *)0x0) {
      _free(unaff_x20);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c0581c);
  (*pcVar2)();
}

