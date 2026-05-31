
void FUN_101c041bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 unaff_x20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 unaff_w27;
  long unaff_x29;
  long lVar10;
  undefined8 uVar11;
  undefined8 *in_stack_00000030;
  undefined *in_stack_00000038;
  long in_stack_00000040;
  undefined *in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s_Array<_>_108ae5df7,&stack0x00000090);
  if (in_stack_00000030 != (undefined8 *)0x0) {
    _free(in_stack_00000038);
  }
  in_stack_00000030 = (undefined8 *)(unaff_x29 + -0x80);
  in_stack_00000038 = &DAT_102024cac;
  in_stack_00000040 = unaff_x29 + -0x70;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000090,s_content_____108adf6fc,&stack0x00000030);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar11 = in_stack_000000a0;
  uVar1 = in_stack_00000098;
  puVar2 = in_stack_00000090;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar8 = (undefined8 *)_malloc(9);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,9);
  }
  else {
    *puVar8 = unaff_x26;
    *(undefined1 *)(puVar8 + 1) = unaff_w27;
    *(undefined8 *)(unaff_x29 + -0x70) = 9;
    *(undefined8 **)(unaff_x29 + -0x68) = puVar8;
    *(undefined8 *)(unaff_x29 + -0x60) = 9;
    in_stack_00000030 = (undefined8 *)(unaff_x29 + -0x80);
    in_stack_00000038 = &DAT_102024cac;
    in_stack_00000040 = unaff_x29 + -0x70;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000090,s_structuredContent_____108adf70c,&stack0x00000030);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar5 = in_stack_00000098;
    puVar3 = in_stack_00000090;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    puVar9 = (undefined4 *)_malloc(7);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,7);
    }
    else {
      *puVar9 = 0x6c6f6f62;
      *(undefined4 *)((long)puVar9 + 3) = 0x6e61656c;
      *(undefined8 *)(unaff_x29 + -0x70) = 7;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar9;
      *(undefined8 *)(unaff_x29 + -0x60) = 7;
      in_stack_00000030 = (undefined8 *)(unaff_x29 + -0x80);
      in_stack_00000038 = &DAT_102024cac;
      in_stack_00000040 = unaff_x29 + -0x70;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000090,s_isError_____108adf726,&stack0x00000030);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      uVar6 = in_stack_00000098;
      puVar4 = in_stack_00000090;
      in_stack_00000090 = &UNK_108cfa0c4;
      in_stack_00000098 = 1;
      puVar8 = (undefined8 *)_malloc(9);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = unaff_x26;
        *(undefined1 *)(puVar8 + 1) = unaff_w27;
        *(undefined8 *)(unaff_x29 + -0x70) = 9;
        *(undefined8 **)(unaff_x29 + -0x68) = puVar8;
        *(undefined8 *)(unaff_x29 + -0x60) = 9;
        in_stack_00000030 = &stack0x00000090;
        in_stack_00000038 = &DAT_102024cac;
        in_stack_00000040 = unaff_x29 + -0x70;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x98,s__meta_____108adf736,&stack0x00000030);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        in_stack_00000030 = (undefined8 *)puVar2;
        in_stack_00000038 = (undefined *)uVar1;
        in_stack_00000040 = uVar11;
        uVar11 = *(undefined8 *)(unaff_x29 + -0x90);
        lVar10 = *(long *)(unaff_x29 + -0x98);
        FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000030,4,&UNK_108cf9cc0,1);
        in_stack_00000098 = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000090 = *(undefined **)(unaff_x29 + -0x70);
        in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0x60);
        *(undefined ***)(unaff_x29 + -0x80) = &stack0x00000090;
        *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
        if (in_stack_00000090 != (undefined *)0x0) {
          _free(in_stack_00000098);
        }
        if (puVar2 != (undefined *)0x0) {
          _free(uVar1);
        }
        if (puVar3 != (undefined *)0x0) {
          _free(uVar5);
        }
        if (puVar4 != (undefined *)0x0) {
          _free(uVar6);
        }
        if (lVar10 != 0) {
          _free(uVar11);
        }
        lVar10 = *(long *)(unaff_x29 + -0x70);
        uVar1 = *(undefined8 *)(unaff_x29 + -0x68);
        func_0x000102167960(unaff_x20,uVar1,*(undefined8 *)(unaff_x29 + -0x60),&UNK_108cf9cc1,7,
                            &UNK_108cf9cc0,1);
        if (lVar10 != 0) {
          _free(uVar1);
        }
        return;
      }
      func_0x0001087c9084(1,9);
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c044bc);
  (*pcVar7)();
}

