
void FUN_101c10000(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 unaff_w19;
  undefined2 unaff_w23;
  undefined8 unaff_x26;
  long unaff_x29;
  long lVar12;
  undefined8 uVar13;
  undefined8 *in_stack_00000028;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000a0,s_threadId_____108adeb3a,&stack0x00000028);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar2 = in_stack_000000a8;
  lVar1 = in_stack_000000a0;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar10 = (undefined4 *)_malloc(6);
  if (puVar10 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar10 = unaff_w19;
    *(undefined2 *)(puVar10 + 1) = unaff_w23;
    *(undefined8 *)(unaff_x29 + -0x70) = 6;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    in_stack_00000028 = (undefined8 *)(unaff_x29 + -0x80);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000a0,s_turnId_____108adeb4b,&stack0x00000028);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar6 = in_stack_000000a8;
    lVar3 = in_stack_000000a0;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar10 = (undefined4 *)_malloc(6);
    if (puVar10 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar10 = unaff_w19;
      *(undefined2 *)(puVar10 + 1) = unaff_w23;
      *(undefined8 *)(unaff_x29 + -0x70) = 6;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
      *(undefined8 *)(unaff_x29 + -0x60) = 6;
      in_stack_00000028 = (undefined8 *)(unaff_x29 + -0x80);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000a0,s_fromModel_____108ae0820,&stack0x00000028);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      uVar7 = in_stack_000000a8;
      lVar4 = in_stack_000000a0;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      puVar10 = (undefined4 *)_malloc(6);
      if (puVar10 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
      }
      else {
        *puVar10 = unaff_w19;
        *(undefined2 *)(puVar10 + 1) = unaff_w23;
        *(undefined8 *)(unaff_x29 + -0x70) = 6;
        *(undefined4 **)(unaff_x29 + -0x68) = puVar10;
        *(undefined8 *)(unaff_x29 + -0x60) = 6;
        in_stack_00000028 = (undefined8 *)(unaff_x29 + -0x80);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000000a0,s_toModel_____108ae0832,&stack0x00000028);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        uVar8 = in_stack_000000a8;
        lVar5 = in_stack_000000a0;
        in_stack_000000a0 = 1;
        in_stack_000000a8 = 0;
        puVar11 = (undefined8 *)_malloc(0x12);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined2 *)(puVar11 + 2) = 0x6e6f;
          puVar11[1] = 0x736165526574756f;
          *puVar11 = 0x7265526c65646f4d;
          *(undefined8 *)(unaff_x29 + -0x70) = 0x12;
          *(undefined8 **)(unaff_x29 + -0x68) = puVar11;
          *(undefined8 *)(unaff_x29 + -0x60) = 0x12;
          in_stack_00000028 = &stack0x000000a0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x98,s_reason_____108adf4b7,&stack0x00000028);
          if (*(long *)(unaff_x29 + -0x70) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x68));
          }
          in_stack_00000028 = (undefined8 *)lVar1;
          uVar13 = *(undefined8 *)(unaff_x29 + -0x90);
          lVar12 = *(long *)(unaff_x29 + -0x98);
          FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000028,5,&UNK_108cf9cc0,1);
          in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x68);
          in_stack_000000a0 = *(long *)(unaff_x29 + -0x70);
          in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x60);
          *(long **)(unaff_x29 + -0x80) = &stack0x000000a0;
          *(undefined8 *)(unaff_x29 + -0x78) = unaff_x26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
          if (in_stack_000000a0 != 0) {
            _free(in_stack_000000a8);
          }
          if (lVar1 != 0) {
            _free(uVar2);
          }
          if (lVar3 != 0) {
            _free(uVar6);
          }
          if (lVar4 != 0) {
            _free(uVar7);
          }
          if (lVar5 != 0) {
            _free(uVar8);
          }
          if (lVar12 != 0) {
            _free(uVar13);
          }
          lVar1 = *(long *)(unaff_x29 + -0x70);
          uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
          func_0x000102167960();
          if (lVar1 != 0) {
            _free(uVar2);
          }
          return;
        }
        func_0x0001087c9084(1,0x12);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x101c10350);
  (*pcVar9)();
}

