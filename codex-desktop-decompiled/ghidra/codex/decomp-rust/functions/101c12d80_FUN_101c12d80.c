
void FUN_101c12d80(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 unaff_w20;
  undefined2 unaff_w22;
  undefined8 unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s_summary_____108ae0c75,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  if (*(long *)(unaff_x29 + -0x90) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x88));
  }
  puVar2 = in_stack_00000080;
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000020,&UNK_10b26c210,1);
  *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000020;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
  if (in_stack_00000020 != (undefined8 *)0x0) {
    _free(in_stack_00000028);
  }
  uVar8 = *(undefined8 *)(unaff_x28 + 0x30);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x28 + 0x38);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = unaff_w20;
    *(undefined2 *)(puVar6 + 1) = unaff_w22;
    in_stack_00000020 = (undefined8 *)0x6;
    in_stack_00000080 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x00000080);
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(puVar6);
    }
    in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x90);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_details_____108ae0c86,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0x90) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x88));
    }
    puVar3 = in_stack_00000080;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000020,&UNK_10b26c220,1);
    *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(unaff_x24);
    }
    uVar8 = *(undefined8 *)(unaff_x28 + 0x30);
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x28 + 0x38);
    *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
    puVar6 = (undefined4 *)_malloc(6);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar6 = unaff_w20;
      *(undefined2 *)(puVar6 + 1) = unaff_w22;
      *(undefined8 *)(unaff_x29 + -0x78) = 6;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x90);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s_path_____108adf80c,&stack0x00000020);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      puVar4 = in_stack_00000080;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000020,&UNK_10b26c230,1);
      *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000020;
      *(undefined8 *)(unaff_x29 + -0x88) = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
      if (in_stack_00000020 != (undefined8 *)0x0) {
        _free(unaff_x24);
      }
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000000e0;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000d8;
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000080 = (undefined8 *)&UNK_108cfa0c4;
      puVar7 = (undefined8 *)_malloc(9);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar7 + 1) = 0x65;
        *puVar7 = 0x676e615274786554;
        *(undefined8 *)(unaff_x29 + -0x78) = 9;
        *(undefined8 **)(unaff_x29 + -0x70) = puVar7;
        *(undefined8 *)(unaff_x29 + -0x68) = 9;
        in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000000a8,s_range_____108ae0c97,&stack0x00000020);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        uVar8 = in_stack_000000b0;
        lVar1 = in_stack_000000a8;
        in_stack_00000020 = puVar2;
        FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000020,4,&UNK_108cf9cc0,1);
        *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000000e0;
        *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000d8;
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000080 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000080);
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        if (puVar2 != (undefined8 *)0x0) {
          _free(in_stack_00000088);
        }
        if (puVar3 != (undefined8 *)0x0) {
          _free(unaff_x24);
        }
        if (puVar4 != (undefined8 *)0x0) {
          _free(unaff_x24);
        }
        if (lVar1 != 0) {
          _free(uVar8);
        }
        lVar1 = *(long *)(unaff_x29 + -0x78);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x70);
        func_0x000102167960();
        if (lVar1 != 0) {
          _free(uVar8);
        }
        return;
      }
      func_0x0001087c9084(1,9);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c131cc);
  (*pcVar5)();
}

