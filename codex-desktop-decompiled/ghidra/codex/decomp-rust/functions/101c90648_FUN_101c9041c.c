
void FUN_101c9041c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b8,s_execpolicy_amendment_____108ae2b1a,&stack0x00000028);
  if (*(long *)(unaff_x29 + -0x80) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x78));
  }
  *(undefined8 *)(unaff_x29 + -0x78) = in_stack_000000c0;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000b8;
  *(undefined8 *)(unaff_x29 + -0x70) = in_stack_000000c8;
  FUN_1021676b8(&stack0x00000028,unaff_x29 + -0x80,1,&UNK_108cf9cc0,1);
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000030;
  *(long *)(unaff_x29 + -0xc0) = in_stack_00000028;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000038;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xc0;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000028,s_____108ab6fcb,unaff_x29 + -0x90);
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xb8));
  }
  if (*(long *)(unaff_x29 + -0x80) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x78));
  }
  lVar1 = in_stack_00000028;
  func_0x000102167960(&stack0x00000028,in_stack_00000030,in_stack_00000038,&UNK_108cf9cc1,7,
                      &UNK_108cf9cc0,1);
  *(long **)(unaff_x29 + -0xc0) = &stack0x00000028;
  *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x24;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_____acceptWithExecpolicyAmendmen_108ae2b37,unaff_x29 + -0xc0);
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  if (lVar1 != 0) {
    _free(in_stack_00000030);
  }
  lVar1 = *(long *)(unaff_x29 + -0x80);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  puVar6 = (undefined8 *)_malloc(0x16);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x16);
  }
  else {
    puVar6[1] = 0x656d417963696c6f;
    *puVar6 = 0x506b726f7774654e;
    *(undefined8 *)((long)puVar6 + 0xe) = 0x746e656d646e656d;
    *(undefined8 *)(unaff_x29 + -0x80) = 0x16;
    *(undefined8 **)(unaff_x29 + -0x78) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x70) = 0x16;
    in_stack_00000028 = unaff_x29 + -0xc0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xa8,s_network_policy_amendment_____108ae2b60,&stack0x00000028);
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x78));
    }
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x98);
    FUN_1021676b8(&stack0x00000028,unaff_x29 + -0x80,1,&UNK_108cf9cc0,1);
    *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x23;
    *(long *)(unaff_x29 + -0xc0) = in_stack_00000028;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x80;
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xc0;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000028,s_____108ab6fcb,unaff_x29 + -0x90);
    if (*(long *)(unaff_x29 + -0xc0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb8));
    }
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x78));
    }
    lVar2 = in_stack_00000028;
    func_0x000102167960(&stack0x00000028,unaff_x23,unaff_x29 + -0x80,&UNK_108cf9cc1,7,&UNK_108cf9cc0
                        ,1);
    *(long **)(unaff_x29 + -0xc0) = &stack0x00000028;
    *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x24;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x80,s_____applyNetworkPolicyAmendment__108ae2b81,unaff_x29 + -0xc0);
    if (in_stack_00000028 != 0) {
      _free(unaff_x23);
    }
    if (lVar2 != 0) {
      _free(unaff_x23);
    }
    lVar2 = *(long *)(unaff_x29 + -0x80);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x78);
    puVar6 = (undefined8 *)_malloc(9);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,9);
    }
    else {
      *(undefined1 *)(puVar6 + 1) = 0x22;
      *puVar6 = 0x656e696c63656422;
      puVar7 = (undefined8 *)_malloc(8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x226c65636e616322;
        in_stack_00000028 = 8;
        FUN_1021676b8(unaff_x29 + -0x80,&stack0x00000028,6,&UNK_108cf9ded,3);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x80);
        unaff_x26[1] = *(undefined8 *)(unaff_x29 + -0x78);
        *unaff_x26 = uVar8;
        unaff_x26[2] = *(undefined8 *)(unaff_x29 + -0x70);
        _free(in_stack_00000018);
        _free(in_stack_00000010);
        if (lVar1 != 0) {
          _free(uVar3);
        }
        if (lVar2 != 0) {
          _free(uVar4);
        }
        _free(puVar6);
        _free(puVar7);
        return;
      }
      func_0x0001087c9084(1,8);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c90808);
  (*pcVar5)();
}
