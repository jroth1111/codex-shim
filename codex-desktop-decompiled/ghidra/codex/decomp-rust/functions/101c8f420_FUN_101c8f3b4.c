
void FUN_101c8f3b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 unaff_w23;
  undefined2 unaff_w24;
  long unaff_x29;
  undefined *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000030,s_threadId_____108adeb3a)
  ;
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x50));
  }
  uVar2 = in_stack_00000038;
  lVar1 = (long)in_stack_00000030;
  in_stack_00000030 = &UNK_108cfa0c4;
  in_stack_00000038 = 1;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = unaff_w23;
    *(undefined2 *)(puVar6 + 1) = unaff_w24;
    *(undefined8 *)(unaff_x29 + -0x58) = 6;
    *(undefined4 **)(unaff_x29 + -0x50) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x48) = 6;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_threadName_____108ae2952);
    if (*(long *)(unaff_x29 + -0x58) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x50));
    }
    uVar4 = in_stack_00000058;
    lVar3 = in_stack_00000050;
    FUN_1021676b8(unaff_x29 + -0x58);
    in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x50);
    in_stack_00000030 = *(undefined **)(unaff_x29 + -0x58);
    in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x48);
    in_stack_00000068 = &stack0x00000030;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x58,s_____108ab6fcb,&stack0x00000068);
    if (in_stack_00000030 != (undefined *)0x0) {
      _free(in_stack_00000038);
    }
    if (lVar1 != 0) {
      _free(uVar2);
    }
    if (lVar3 != 0) {
      _free(uVar4);
    }
    lVar1 = *(long *)(unaff_x29 + -0x58);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x50);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c8f540);
  (*pcVar5)();
}
