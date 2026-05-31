
void FUN_101c03270(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x23;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000080);
  if (in_stack_00000008 != (undefined8 *)0x0) {
    _free(in_stack_00000010);
  }
  uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_00000080 = *(undefined8 **)(unaff_x29 + -0x70);
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar5 = (undefined4 *)_malloc(6);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar5 = 0x69727473;
    *(undefined2 *)(puVar5 + 1) = 0x676e;
    in_stack_00000008 = (undefined8 *)0x6;
    in_stack_00000050 = &stack0x00000008;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000050);
    if (in_stack_00000008 != (undefined8 *)0x0) {
      _free(puVar5);
    }
    in_stack_00000008 = &stack0x00000080;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_cursor_____108adf206,&stack0x00000008);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    if (in_stack_00000080 != (undefined8 *)0x0) {
      _free(uVar7);
    }
    puVar2 = in_stack_00000050;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000008,&UNK_10b26bb80,1);
    in_stack_00000080 = &stack0x00000008;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000080);
    if (in_stack_00000008 != (undefined8 *)0x0) {
      _free(unaff_x23);
    }
    uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000080 = *(undefined8 **)(unaff_x29 + -0x70);
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    puVar5 = (undefined4 *)_malloc(6);
    if (puVar5 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar5 = 0x626d756e;
      *(undefined2 *)(puVar5 + 1) = 0x7265;
      in_stack_00000008 = (undefined8 *)0x6;
      in_stack_00000050 = &stack0x00000008;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000050);
      if (in_stack_00000008 != (undefined8 *)0x0) {
        _free(puVar5);
      }
      in_stack_00000008 = &stack0x00000080;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000050,s_limit_____108adf216,&stack0x00000008);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      if (in_stack_00000080 != (undefined8 *)0x0) {
        _free(uVar7);
      }
      puVar3 = in_stack_00000050;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000008,&UNK_10b26bb90,2);
      in_stack_00000080 = &stack0x00000008;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000080);
      if (in_stack_00000008 != (undefined8 *)0x0) {
        _free(unaff_x23);
      }
      uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000080 = *(undefined8 **)(unaff_x29 + -0x70);
      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      puVar6 = (undefined8 *)_malloc(0x15);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0x4473757461745372;
        *puVar6 = 0x657672655370634d;
        *(undefined8 *)((long)puVar6 + 0xd) = 0x6c69617465447375;
        in_stack_00000008 = (undefined8 *)0x15;
        in_stack_00000050 = &stack0x00000008;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000050);
        if (in_stack_00000008 != (undefined8 *)0x0) {
          _free(puVar6);
        }
        in_stack_00000008 = &stack0x00000080;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000068,s_detail_____108adf584,&stack0x00000008);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        if (in_stack_00000080 != (undefined8 *)0x0) {
          _free(uVar7);
        }
        uVar7 = in_stack_00000070;
        lVar1 = in_stack_00000068;
        in_stack_00000008 = puVar2;
        FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000008,3,&UNK_108cf9cc0,1);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000080 = *(undefined8 **)(unaff_x29 + -0x70);
        in_stack_00000050 = &stack0x00000080;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s_____108ab6fcb,&stack0x00000050);
        if (in_stack_00000080 != (undefined8 *)0x0) {
          _free(uVar8);
        }
        if (puVar2 != (undefined8 *)0x0) {
          _free(unaff_x23);
        }
        if (puVar3 != (undefined8 *)0x0) {
          _free(unaff_x23);
        }
        if (lVar1 != 0) {
          _free(uVar7);
        }
        lVar1 = *(long *)(unaff_x29 + -0x70);
        uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
        func_0x000102167960();
        if (lVar1 != 0) {
          _free(uVar7);
        }
        return;
      }
      func_0x0001087c9084(1,0x15);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101c036a0);
  (*pcVar4)();
}

