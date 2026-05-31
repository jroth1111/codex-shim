
void FUN_101c1532c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 unaff_x22;
  long unaff_x29;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000030,s_threadId_____108adeb3a)
  ;
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x40));
  }
  uVar2 = in_stack_00000038;
  lVar1 = in_stack_00000030;
  in_stack_00000030 = 1;
  in_stack_00000038 = 0;
  puVar6 = (undefined8 *)_malloc(0x10);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0x65646f4d79726f6d;
    *puVar6 = 0x654d646165726854;
    *(undefined8 *)(unaff_x29 + -0x48) = 0x10;
    *(undefined8 **)(unaff_x29 + -0x40) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x38) = 0x10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000050,s_mode_____108ae10c4);
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x40));
    }
    uVar4 = in_stack_00000058;
    lVar3 = in_stack_00000050;
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
    if (lVar1 != 0) {
      _free(uVar2);
    }
    if (lVar3 != 0) {
      _free(uVar4);
    }
    lVar1 = *(long *)(unaff_x29 + -0x48);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,0x10);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c154b4);
  (*pcVar5)();
}

