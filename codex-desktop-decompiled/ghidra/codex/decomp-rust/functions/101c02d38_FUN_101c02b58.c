
void FUN_101c02b58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  undefined2 unaff_w23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000020;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s___null_108ae5e02,unaff_x29 + -0xb0);
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000058);
  }
  in_stack_00000050 = unaff_x29 + -0x80;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s_reason_____108adf4b7,&stack0x00000050);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  lVar1 = *(long *)(unaff_x29 + -0xb0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar10 = (undefined4 *)_malloc(6);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar10 = unaff_w22;
    *(undefined2 *)(puVar10 + 1) = unaff_w23;
    in_stack_00000050 = 6;
    *(long **)(unaff_x29 + -0xb0) = &stack0x00000050;
    *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x27;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,unaff_x29 + -0xb0);
    if (in_stack_00000050 != 0) {
      _free(puVar10);
    }
    in_stack_00000050 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xb0,s_threadId_____108adeb3a,&stack0x00000050);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    lVar2 = *(long *)(unaff_x29 + -0xb0);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar10 = (undefined4 *)_malloc(7);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0x6c6f6f62;
      *(undefined4 *)((long)puVar10 + 3) = 0x6e61656c;
      *(undefined8 *)(unaff_x29 + -0x70) = 7;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
      *(undefined8 *)(unaff_x29 + -0x60) = 7;
      in_stack_00000050 = unaff_x29 + -0x80;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xb0,s_includeLogs_____108adf4c6,&stack0x00000050);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      lVar3 = *(long *)(unaff_x29 + -0xb0);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x29 + -0x80) = unaff_x21;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      func_0x000102161a68(unaff_x29 + -0x70);
      in_stack_00000050 = unaff_x29 + -0x80;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xb0,s_extraLogFiles_____108adf4da,&stack0x00000050);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      lVar4 = *(long *)(unaff_x29 + -0xb0);
      uVar8 = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x29 + -0x80) = unaff_x21;
      *(undefined8 *)(unaff_x29 + -0x78) = 1;
      FUN_102397494(&stack0x00000050);
      *(long **)(unaff_x29 + -0xb0) = &stack0x00000050;
      *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x27;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s___null_108ae5e02,unaff_x29 + -0xb0);
      if (in_stack_00000050 != 0) {
        _free(unaff_x25);
      }
      in_stack_00000050 = unaff_x29 + -0x80;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x98,s_tags_____108adf4f0,&stack0x00000050);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      in_stack_00000050 = in_stack_00000048;
      uVar12 = *(undefined8 *)(unaff_x29 + -0x90);
      lVar11 = *(long *)(unaff_x29 + -0x98);
      FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000050,6,&UNK_108cf9cc0,1);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xb0;
      *(undefined8 *)(unaff_x29 + -0x78) = unaff_x27;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
      if (*(long *)(unaff_x29 + -0xb0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xa8));
      }
      if (in_stack_00000048 != 0) {
        _free(in_stack_00000020);
      }
      if (lVar1 != 0) {
        _free(uVar5);
      }
      if (lVar2 != 0) {
        _free(uVar6);
      }
      if (lVar3 != 0) {
        _free(uVar7);
      }
      if (lVar4 != 0) {
        _free(uVar8);
      }
      if (lVar11 != 0) {
        _free(uVar12);
      }
      lVar1 = *(long *)(unaff_x29 + -0x70);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
      func_0x000102167960(unaff_x26,uVar5,*(undefined8 *)(unaff_x29 + -0x60),&UNK_108cf9cc1,7,
                          &UNK_108cf9cc0,1);
      if (lVar1 != 0) {
        _free(uVar5);
      }
      return;
    }
    func_0x0001087c9084(1,7);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x101c02f18);
  (*pcVar9)();
}

