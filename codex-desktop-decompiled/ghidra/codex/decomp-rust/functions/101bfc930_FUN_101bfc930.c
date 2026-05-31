
void FUN_101bfc930(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s_writable_roots_____108adea4b,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar2 = in_stack_00000088;
  lVar1 = in_stack_00000080;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar10 = (undefined4 *)_malloc(7);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,7);
  }
  else {
    *puVar10 = 0x6c6f6f62;
    *(undefined4 *)((long)puVar10 + 3) = 0x6e61656c;
    *(undefined8 *)(unaff_x29 + -0x70) = 7;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
    *(undefined8 *)(unaff_x29 + -0x60) = 7;
    in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x80);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_network_access_____108adea62,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar5 = in_stack_00000088;
    lVar3 = in_stack_00000080;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar10 = (undefined4 *)_malloc(7);
    if (puVar10 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,7);
    }
    else {
      *puVar10 = 0x6c6f6f62;
      *(undefined4 *)((long)puVar10 + 3) = 0x6e61656c;
      *(undefined8 *)(unaff_x29 + -0x70) = 7;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
      *(undefined8 *)(unaff_x29 + -0x60) = 7;
      in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x80);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s_exclude_tmpdir_env_var_____108adea79,&stack0x00000020);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      uVar6 = in_stack_00000088;
      lVar4 = in_stack_00000080;
      in_stack_00000080 = 1;
      in_stack_00000088 = 0;
      puVar10 = (undefined4 *)_malloc(7);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0x6c6f6f62;
        *(undefined4 *)((long)puVar10 + 3) = 0x6e61656c;
        *(undefined8 *)(unaff_x29 + -0x70) = 7;
        *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
        *(undefined8 *)(unaff_x29 + -0x60) = 7;
        in_stack_00000020 = &stack0x00000080;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000098,s_exclude_slash_tmp_____108adea98,&stack0x00000020);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        uVar8 = in_stack_000000a0;
        lVar7 = in_stack_00000098;
        in_stack_00000020 = (undefined8 *)lVar1;
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
        if (lVar1 != 0) {
          _free(uVar2);
        }
        if (lVar3 != 0) {
          _free(uVar5);
        }
        if (lVar4 != 0) {
          _free(uVar6);
        }
        if (lVar7 != 0) {
          _free(uVar8);
        }
        lVar1 = *(long *)(unaff_x29 + -0x70);
        uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
        func_0x000102167960(unaff_x21,uVar2,*(undefined8 *)(unaff_x29 + -0x60),&UNK_108cf9cc1,7,
                            &UNK_108cf9cc0,1);
        if (lVar1 != 0) {
          _free(uVar2);
        }
        return;
      }
      func_0x0001087c9084(1,7);
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x101bfcbe8);
  (*pcVar9)();
}

