
void FUN_101c1674c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 unaff_x22;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined1 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x48,s___null_108ae5e02,&stack0x00000030);
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  in_stack_00000000 = unaff_x29 + -0x58;
  in_stack_00000008 = (undefined8 *)&DAT_102024cac;
  in_stack_00000010 = unaff_x29 + -0x48;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000030,s_matcher_____108ae12c1);
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x40));
  }
  uVar2 = in_stack_00000038;
  lVar1 = (long)in_stack_00000030;
  *(undefined8 *)(unaff_x29 + -0x58) = 1;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  puVar6 = (undefined8 *)_malloc(0x15);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0x61486b6f6f486465;
    *puVar6 = 0x72756769666e6f43;
    *(undefined8 *)((long)puVar6 + 0xd) = 0x72656c646e61486b;
    in_stack_00000000 = 0x15;
    in_stack_00000010 = 0x15;
    in_stack_00000008 = puVar6;
    in_stack_00000030 = (undefined1 *)register0x00000008;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x48,s_Array<_>_108ae5df7,&stack0x00000030);
    if (in_stack_00000000 != 0) {
      _free(in_stack_00000008);
    }
    in_stack_00000000 = unaff_x29 + -0x58;
    in_stack_00000008 = (undefined8 *)&DAT_102024cac;
    in_stack_00000010 = unaff_x29 + -0x48;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000050,s_hooks_____108ae12d1);
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x40));
    }
    uVar4 = in_stack_00000058;
    lVar3 = in_stack_00000050;
    in_stack_00000000 = lVar1;
    in_stack_00000008 = (undefined8 *)uVar2;
    in_stack_00000010 = in_stack_00000040;
    FUN_1021676b8(unaff_x29 + -0x48);
    in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x40);
    in_stack_00000030 = *(undefined1 **)(unaff_x29 + -0x48);
    *(undefined1 ***)(unaff_x29 + -0x58) = &stack0x00000030;
    *(undefined8 *)(unaff_x29 + -0x50) = unaff_x22;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x48,s_____108ab6fcb,unaff_x29 + -0x58);
    if (in_stack_00000030 != (undefined1 *)0x0) {
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
  func_0x0001087c9084(1,0x15);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c16944);
  (*pcVar5)();
}

