
void FUN_101c919b0(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x29;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x48,s__108ac0bb6,&stack0x00000020);
  if (in_stack_00000038 != (undefined8 *)0x0) {
    _free(in_stack_00000040);
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0x40);
  in_stack_00000020 = *(long *)(unaff_x29 + -0x48);
  in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x38);
  *(undefined8 *)(unaff_x29 + -0x58) = 1;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  puVar4 = (undefined4 *)_malloc(6);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x69727473;
    *(undefined2 *)(puVar4 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x48) = 6;
    *(undefined4 **)(unaff_x29 + -0x40) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x38) = 6;
    in_stack_00000038 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000008,s_sdp_____108ae2d43,&stack0x00000038);
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x40));
    }
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000028);
    }
    uVar2 = in_stack_00000010;
    lVar1 = in_stack_00000008;
    in_stack_00000038 = (undefined8 *)0x11;
    FUN_1021676b8(unaff_x29 + -0x48,&stack0x00000038,2,&UNK_108cf9cc0,1);
    in_stack_00000028 = *(undefined8 *)(unaff_x29 + -0x40);
    in_stack_00000020 = *(long *)(unaff_x29 + -0x48);
    in_stack_00000030 = *(undefined8 *)(unaff_x29 + -0x38);
    *(long **)(unaff_x29 + -0x58) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x50) = unaff_x22;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x48,s_____108ab6fcb,unaff_x29 + -0x58);
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000028);
    }
    _free();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    lVar1 = *(long *)(unaff_x29 + -0x48);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
    func_0x000102167960(unaff_x29 + -0x48,uVar2,*(undefined8 *)(unaff_x29 + -0x38),&UNK_108cf9cc1,7,
                        &UNK_108cf9cc0,1);
    in_stack_00000038 = (undefined8 *)0x17;
    uVar7 = *(undefined8 *)(unaff_x29 + -0x40);
    lVar5 = *(long *)(unaff_x29 + -0x48);
    FUN_1021676b8(unaff_x29 + -0x48,&stack0x00000038,2,&UNK_108cf9ded,3);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x48);
    unaff_x20[1] = *(undefined8 *)(unaff_x29 + -0x40);
    *unaff_x20 = uVar6;
    unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x38);
    _free();
    if (lVar5 != 0) {
      _free(uVar7);
    }
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c91bd8);
  (*pcVar3)();
}
