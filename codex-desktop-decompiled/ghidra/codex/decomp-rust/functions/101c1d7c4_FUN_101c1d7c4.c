
void FUN_101c1d7c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 unaff_x19;
  undefined4 unaff_w22;
  undefined2 unaff_w23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  long lVar9;
  undefined8 uVar10;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_000000b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x90,s_threadId_____108adeb3a,&stack0x00000038);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0x90);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x88);
  in_stack_000000b0 = (undefined8 *)0x1;
  puVar8 = (undefined4 *)_malloc(6);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar8 = unaff_w22;
    *(undefined2 *)(puVar8 + 1) = unaff_w23;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000038 = &stack0x000000b0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x90,s_turnId_____108adeb4b,&stack0x00000038);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0x90);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x88);
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26c560,1);
    *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000038;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x26;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
    if (in_stack_00000038 != (undefined8 *)0x0) {
      _free(unaff_x19);
    }
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0xb0) = 1;
    puVar8 = (undefined4 *)_malloc(6);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar8 = unaff_w22;
      *(undefined2 *)(puVar8 + 1) = unaff_w23;
      in_stack_00000038 = (undefined8 *)0x6;
      in_stack_000000b0 = &stack0x00000038;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b0);
      if (in_stack_00000038 != (undefined8 *)0x0) {
        _free(puVar8);
      }
      in_stack_00000038 = (undefined8 *)(unaff_x29 + -0x90);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000b0,s_cursor_____108adf206,&stack0x00000038);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      puVar5 = in_stack_000000b0;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26c570,1);
      *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000038;
      *(undefined8 *)(unaff_x29 + -0x88) = unaff_x26;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
      if (in_stack_00000038 != (undefined8 *)0x0) {
        _free(unaff_x26);
      }
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined **)(unaff_x29 + -0xb8) = &UNK_108cfa0c4;
      *(undefined8 *)(unaff_x29 + -0xb0) = 1;
      puVar8 = (undefined4 *)_malloc(6);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0x626d756e;
        *(undefined2 *)(puVar8 + 1) = 0x7265;
        in_stack_00000038 = (undefined8 *)0x6;
        in_stack_000000b0 = &stack0x00000038;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b0);
        if (in_stack_00000038 != (undefined8 *)0x0) {
          _free(puVar8);
        }
        in_stack_00000038 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000000b0,s_limit_____108adf216,&stack0x00000038);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        puVar6 = in_stack_000000b0;
        __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000038,&UNK_10b26c580,1);
        *(undefined8 ***)(unaff_x29 + -0x90) = &stack0x00000038;
        *(undefined8 *)(unaff_x29 + -0x88) = unaff_x26;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
        if (in_stack_00000038 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_000000b0 = (undefined8 *)&UNK_108cfa0c4;
        func_0x000102161758(unaff_x29 + -0x78);
        in_stack_00000038 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xa8,s_sortDirection_____108adf225,&stack0x00000038);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0xa0);
        lVar9 = *(long *)(unaff_x29 + -0xa8);
        in_stack_00000038 = (undefined8 *)lVar1;
        FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000038,5,&UNK_108cf9cc0,1);
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_000000b0 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x000000b0);
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        if (lVar1 != 0) {
          _free(uVar3);
        }
        if (lVar2 != 0) {
          _free(uVar4);
        }
        if (puVar5 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        if (puVar6 != (undefined8 *)0x0) {
          _free(unaff_x26);
        }
        if (lVar9 != 0) {
          _free(uVar10);
        }
        lVar1 = *(long *)(unaff_x29 + -0x78);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
        func_0x000102167960(unaff_x25,uVar3,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                            &UNK_108cf9cc0,1);
        if (lVar1 != 0) {
          _free(uVar3);
        }
        return;
      }
      func_0x0001087c9084(1,6);
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c1dc98);
  (*pcVar7)();
}

