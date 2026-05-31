
void FUN_101c11ee0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 unaff_w25;
  undefined2 unaff_w26;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s_threadId_____108adeb3a,&stack0x00000038);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  lVar1 = (long)in_stack_00000020;
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26c140,4);
  in_stack_00000020 = &stack0x00000038;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000020);
  if (in_stack_00000038 != (undefined8 *)0x0) {
    _free(in_stack_00000040);
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000020 = *(undefined8 **)(unaff_x29 + -0x68);
  in_stack_00000068 = (undefined8 *)0x1;
  puVar4 = (undefined4 *)_malloc(6);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = unaff_w25;
    *(undefined2 *)(puVar4 + 1) = unaff_w26;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    *(undefined4 **)(unaff_x29 + -0x60) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x58) = 6;
    in_stack_00000038 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000008,s_command_____108adf90a,&stack0x00000038);
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(uVar5);
    }
    uVar5 = in_stack_00000010;
    lVar2 = in_stack_00000008;
    in_stack_00000038 = (undefined8 *)lVar1;
    FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000038,2,&UNK_108cf9cc0,1);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
    in_stack_00000020 = *(undefined8 **)(unaff_x29 + -0x68);
    in_stack_00000068 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s_____108ab6fcb,&stack0x00000068);
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(uVar6);
    }
    if (lVar1 != 0) {
      _free(in_stack_00000028);
    }
    if (lVar2 != 0) {
      _free(uVar5);
    }
    lVar1 = *(long *)(unaff_x29 + -0x68);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar5);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c120d0);
  (*pcVar3)();
}

