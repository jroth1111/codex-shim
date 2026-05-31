
void FUN_101c00698(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 unaff_w21;
  undefined2 unaff_w22;
  undefined8 unaff_x24;
  undefined8 unaff_x26;
  undefined8 *puVar8;
  long unaff_x29;
  long lVar9;
  undefined8 uVar10;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_000000b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s_threadId_____108adeb3a,&stack0x00000038);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xa0);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26bb00,1);
  *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
  *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
  puVar8 = (undefined8 *)(unaff_x29 + -0xa0);
  if (in_stack_00000038 != 0) {
    _free(in_stack_00000040);
  }
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
  *puVar8 = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = unaff_w21;
    *(undefined2 *)(puVar6 + 1) = unaff_w22;
    in_stack_00000038 = 6;
    in_stack_000000b0 = &stack0x00000038;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b0);
    if (in_stack_00000038 != 0) {
      _free(puVar6);
    }
    in_stack_00000038 = unaff_x29 + -0xa0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000b0,s_cursor_____108adf206,&stack0x00000038);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
    puVar3 = in_stack_000000b0;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26bb10,1);
    *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
    if (in_stack_00000038 != 0) {
      _free(unaff_x26);
    }
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
    *puVar8 = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    puVar6 = (undefined4 *)_malloc(6);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar6 = 0x626d756e;
      *(undefined2 *)(puVar6 + 1) = 0x7265;
      in_stack_00000038 = 6;
      in_stack_000000b0 = &stack0x00000038;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b0);
      if (in_stack_00000038 != 0) {
        _free(puVar6);
      }
      in_stack_00000038 = unaff_x29 + -0xa0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000b0,s_limit_____108adf216,&stack0x00000038);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0xa0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x98));
      }
      puVar4 = in_stack_000000b0;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26bb20,1);
      *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
      if (in_stack_00000038 != 0) {
        _free(unaff_x26);
      }
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
      *puVar8 = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      func_0x000102161758(unaff_x29 + -0x78);
      in_stack_00000038 = unaff_x29 + -0xa0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000b0,s_sortDirection_____108adf225,&stack0x00000038);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0xa0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x98));
      }
      puVar8 = in_stack_000000b0;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26bb30,1);
      *(long **)(unaff_x29 + -0xa0) = &stack0x00000038;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
      if (in_stack_00000038 != 0) {
        _free(unaff_x26);
      }
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      puVar7 = (undefined8 *)_malloc(0xd);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x6d6574496e727554;
        *(undefined8 *)((long)puVar7 + 5) = 0x77656956736d6574;
        in_stack_00000038 = 0xd;
        in_stack_000000b0 = &stack0x00000038;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b0);
        if (in_stack_00000038 != 0) {
          _free(puVar7);
        }
        in_stack_00000038 = unaff_x29 + -0xa0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xb8,s_itemsView_____108adf23c,&stack0x00000038);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0xa0) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x98));
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0xb0);
        lVar9 = *(long *)(unaff_x29 + -0xb8);
        in_stack_00000038 = lVar1;
        FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000038,5,&UNK_108cf9cc0,1);
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_000000b0 = (undefined8 *)(unaff_x29 + -0xa0);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x000000b0);
        if (*(long *)(unaff_x29 + -0xa0) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x98));
        }
        if (lVar1 != 0) {
          _free(uVar2);
        }
        if (puVar3 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        if (puVar4 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        if (puVar8 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        if (lVar9 != 0) {
          _free(uVar10);
        }
        lVar1 = *(long *)(unaff_x29 + -0x78);
        uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
        func_0x000102167960(unaff_x24,uVar2,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                            &UNK_108cf9cc0,1);
        if (lVar1 != 0) {
          _free(uVar2);
        }
        return;
      }
      func_0x0001087c9084(1,0xd);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c00c18);
  (*pcVar5)();
}

