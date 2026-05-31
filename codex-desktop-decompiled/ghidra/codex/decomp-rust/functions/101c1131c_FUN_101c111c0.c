
void FUN_101c111c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 *puVar7;
  long unaff_x29;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
  puVar7 = (undefined8 *)(unaff_x29 + -0x90);
  if (in_stack_00000018 != (undefined *)0x0) {
    _free(in_stack_00000020);
  }
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
  *puVar7 = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = 0x69727473;
    *(undefined2 *)(puVar6 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000018 = (undefined *)(unaff_x29 + -0x90);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000060,s_processHandle_____108ae00e8,&stack0x00000018);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0x90) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x88));
    }
    puVar3 = (undefined *)in_stack_00000060;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b26c0d0,1);
    *(undefined ***)(unaff_x29 + -0x90) = &stack0x00000018;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
    if (in_stack_00000018 != (undefined *)0x0) {
      _free(unaff_x23);
    }
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
    *puVar7 = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
    puVar6 = (undefined4 *)_malloc(6);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar6 = 0x69727473;
      *(undefined2 *)(puVar6 + 1) = 0x676e;
      in_stack_00000018 = (undefined *)0x6;
      in_stack_00000060 = &stack0x00000018;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x00000060);
      if (in_stack_00000018 != (undefined *)0x0) {
        _free(puVar6);
      }
      in_stack_00000018 = (undefined *)(unaff_x29 + -0x90);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000060,s_deltaBase64_____108ae09ee,&stack0x00000018);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      puVar4 = in_stack_00000060;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b26c0e0,1);
      *(undefined ***)(unaff_x29 + -0x90) = &stack0x00000018;
      *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
      if (in_stack_00000018 != (undefined *)0x0) {
        _free(unaff_x23);
      }
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
      *puVar7 = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000060 = (undefined8 *)&UNK_108cfa0c4;
      puVar6 = (undefined4 *)_malloc(7);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0x6c6f6f62;
        *(undefined4 *)((long)puVar6 + 3) = 0x6e61656c;
        *(undefined8 *)(unaff_x29 + -0x78) = 7;
        *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
        *(undefined8 *)(unaff_x29 + -0x68) = 7;
        in_stack_00000018 = (undefined *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000088,s_closeStdin_____108ae0a03,&stack0x00000018);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        uVar2 = in_stack_00000090;
        lVar1 = in_stack_00000088;
        in_stack_00000018 = puVar3;
        FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000018,3,&UNK_108cf9cc0,1);
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
        *puVar7 = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000060 = (undefined8 *)(unaff_x29 + -0x90);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000060);
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        if (puVar3 != (undefined *)0x0) {
          _free(in_stack_00000068);
        }
        if (puVar4 != (undefined8 *)0x0) {
          _free(unaff_x23);
        }
        if (lVar1 != 0) {
          _free(uVar2);
        }
        lVar1 = *(long *)(unaff_x29 + -0x78);
        uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
        func_0x000102167960(unaff_x22,uVar2,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c11594);
  (*pcVar5)();
}

