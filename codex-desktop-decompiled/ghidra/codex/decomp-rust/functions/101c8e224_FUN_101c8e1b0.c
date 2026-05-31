
void FUN_101c8e1b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 uVar6;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000030,s_network_____108ae275d);
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x50));
  }
  lVar1 = in_stack_00000030;
  puVar5 = (undefined8 *)_malloc(0x1f);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x7953656c69466c61;
    *puVar5 = 0x6e6f697469646441;
    *(undefined8 *)((long)puVar5 + 0x17) = 0x736e6f697373696d;
    *(undefined8 *)((long)puVar5 + 0xf) = 0x7265506d65747379;
    *(undefined8 *)(unaff_x29 + -0x58) = 0x1f;
    *(undefined8 **)(unaff_x29 + -0x50) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x48) = 0x1f;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_fileSystem_____108ae276d);
    if (*(long *)(unaff_x29 + -0x58) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x50));
    }
    uVar2 = in_stack_00000058;
    lVar3 = in_stack_00000050;
    FUN_1021676b8(unaff_x29 + -0x58);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
    in_stack_00000030 = *(long *)(unaff_x29 + -0x58);
    in_stack_00000068 = &stack0x00000030;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x58,s_____108ab6fcb,&stack0x00000068);
    if (in_stack_00000030 != 0) {
      _free(uVar6);
    }
    if (lVar1 != 0) {
      _free(in_stack_00000038);
    }
    if (lVar3 != 0) {
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
  func_0x0001087c9084(1,0x1f);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101c8e344);
  (*pcVar4)();
}
