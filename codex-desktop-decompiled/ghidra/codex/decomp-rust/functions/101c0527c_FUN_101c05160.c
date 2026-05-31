
void FUN_101c05160(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 unaff_x21;
  long *plVar4;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000030);
  plVar4 = (long *)(unaff_x29 + -0x68);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000030 = (undefined8 *)*plVar4;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar3 = 0x69727473;
    *(undefined2 *)(puVar3 + 1) = 0x676e;
    in_stack_00000058 = (undefined8 *)0x6;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x68,s___null_108ae5e02);
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    in_stack_00000058 = &stack0x00000030;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s_cursor_____108adf206,&stack0x00000058)
    ;
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    if (in_stack_00000030 != (undefined8 *)0x0) {
      _free(uVar5);
    }
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b26bbd0,1);
    in_stack_00000030 = &stack0x00000058;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000030);
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(unaff_x21);
    }
    uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
    in_stack_00000030 = (undefined8 *)*plVar4;
    puVar3 = (undefined4 *)_malloc(6);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0x626d756e;
      *(undefined2 *)(puVar3 + 1) = 0x7265;
      in_stack_00000058 = (undefined8 *)0x6;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x68,s___null_108ae5e02);
      if (in_stack_00000058 != (undefined8 *)0x0) {
        _free(puVar3);
      }
      in_stack_00000058 = &stack0x00000030;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000018,s_limit_____108adf216,&stack0x00000058);
      if (*(long *)(unaff_x29 + -0x68) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x60));
      }
      if (in_stack_00000030 != (undefined8 *)0x0) {
        _free(uVar5);
      }
      uVar5 = in_stack_00000020;
      lVar1 = in_stack_00000018;
      in_stack_00000058 = &stack0x00000058;
      FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000058,2,&UNK_108cf9cc0,1);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
      in_stack_00000030 = (undefined8 *)*plVar4;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x68,s_____108ab6fcb);
      if (in_stack_00000030 != (undefined8 *)0x0) {
        _free(uVar6);
      }
      if (&stack0x00000058 != (undefined8 **)0x0) {
        _free(unaff_x21);
      }
      if (lVar1 != 0) {
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
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c05464);
  (*pcVar2)();
}

