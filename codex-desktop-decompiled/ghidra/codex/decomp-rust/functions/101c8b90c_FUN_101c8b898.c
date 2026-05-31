
void FUN_101c8b898(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 unaff_x23;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000060;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000090;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000090);
  if (in_stack_00000018 != (undefined8 *)0x0) {
    _free(in_stack_00000020);
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_00000090 = *(undefined8 **)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar4 = (undefined4 *)_malloc(6);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar4 = 0x69727473;
    *(undefined2 *)(puVar4 + 1) = 0x676e;
    in_stack_00000018 = (undefined8 *)0x6;
    in_stack_00000060 = &stack0x00000018;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000060);
    if (in_stack_00000018 != (undefined8 *)0x0) {
      _free(puVar4);
    }
    in_stack_00000018 = &stack0x00000090;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000060,s_nextCursor_____108ae01e6,&stack0x00000018);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    if (in_stack_00000090 != (undefined8 *)0x0) {
      _free(uVar5);
    }
    puVar2 = in_stack_00000060;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b270060,2);
    in_stack_00000090 = &stack0x00000018;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000090);
    if (in_stack_00000018 != (undefined8 *)0x0) {
      _free(unaff_x23);
    }
    uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000090 = *(undefined8 **)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar4 = (undefined4 *)_malloc(6);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x69727473;
      *(undefined2 *)(puVar4 + 1) = 0x676e;
      in_stack_00000018 = (undefined8 *)0x6;
      in_stack_00000060 = &stack0x00000018;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000060);
      if (in_stack_00000018 != (undefined8 *)0x0) {
        _free(puVar4);
      }
      in_stack_00000018 = &stack0x00000090;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000078,s_backwardsCursor_____108ae01fa,&stack0x00000018);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      if (in_stack_00000090 != (undefined8 *)0x0) {
        _free(uVar5);
      }
      uVar5 = in_stack_00000080;
      lVar1 = in_stack_00000078;
      in_stack_00000018 = (undefined8 *)in_stack_00000010;
      FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000018,3,&UNK_108cf9cc0,1);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000090 = *(undefined8 **)(unaff_x29 + -0x70);
      in_stack_00000060 = &stack0x00000090;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s_____108ab6fcb,&stack0x00000060);
      if (in_stack_00000090 != (undefined8 *)0x0) {
        _free(uVar6);
      }
      if (in_stack_00000010 != 0) {
        _free(in_stack_00000008);
      }
      if (puVar2 != (undefined8 *)0x0) {
        _free(unaff_x23);
      }
      if (lVar1 != 0) {
        _free(uVar5);
      }
      lVar1 = *(long *)(unaff_x29 + -0x70);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar5);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c8bb8c);
  (*pcVar3)();
}
