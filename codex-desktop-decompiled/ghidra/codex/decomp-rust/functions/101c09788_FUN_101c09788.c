
void FUN_101c09788(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined2 unaff_w21;
  undefined4 unaff_w23;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s_threadId_____108adeb3a,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar2 = in_stack_00000088;
  lVar1 = in_stack_00000080;
  in_stack_00000080 = 1;
  in_stack_00000088 = 0;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = unaff_w23;
    *(undefined2 *)(puVar6 + 1) = unaff_w21;
    *(undefined8 *)(unaff_x29 + -0x70) = 6;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    in_stack_00000020 = &stack0x00000080;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000098,s_turnId_____108adeb4b,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar4 = in_stack_000000a0;
    lVar3 = in_stack_00000098;
    in_stack_00000020 = (undefined8 *)in_stack_00000018;
    FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000020,4,&UNK_108cf9cc0,1);
    in_stack_00000088 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000080 = *(long *)(unaff_x29 + -0x70);
    in_stack_00000090 = *(undefined8 *)(unaff_x29 + -0x60);
    *(long **)(unaff_x29 + -0x80) = &stack0x00000080;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000088);
    }
    if (in_stack_00000018 != 0) {
      _free(in_stack_00000010);
    }
    if (in_stack_00000008 != 0) {
      _free(in_stack_00000000);
    }
    if (lVar1 != 0) {
      _free(uVar2);
    }
    if (lVar3 != 0) {
      _free(uVar4);
    }
    lVar1 = *(long *)(unaff_x29 + -0x70);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c09960);
  (*pcVar5)();
}

