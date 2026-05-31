
void FUN_101c8ca04(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x21;
  long *plVar5;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s__108ac0bb6,&stack0x00000040);
  plVar5 = (long *)(unaff_x29 + -0x58);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
  in_stack_00000040 = (undefined8 *)*plVar5;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar3 = 0x69727473;
    *(undefined2 *)(puVar3 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x58) = 6;
    *(undefined4 **)(unaff_x29 + -0x50) = puVar3;
    *(undefined8 *)(unaff_x29 + -0x48) = 6;
    in_stack_00000058 = &stack0x00000040;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (s_processId_____108adf91b,&stack0x00000058);
    if (*(long *)(unaff_x29 + -0x58) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x50));
    }
    if (in_stack_00000040 != (undefined8 *)0x0) {
      _free(uVar6);
    }
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b26bfe0,1);
    in_stack_00000040 = &stack0x00000058;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x58,s__108ac0bb6,&stack0x00000040);
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(unaff_x21);
    }
    uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
    in_stack_00000040 = (undefined8 *)*plVar5;
    puVar4 = (undefined8 *)_malloc(0x17);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0x696d726554636578;
      *puVar4 = 0x45646e616d6d6f43;
      *(undefined8 *)((long)puVar4 + 0xf) = 0x657a69536c616e69;
      *(undefined8 *)(unaff_x29 + -0x58) = 0x17;
      *(undefined8 **)(unaff_x29 + -0x50) = puVar4;
      *(undefined8 *)(unaff_x29 + -0x48) = 0x17;
      in_stack_00000058 = &stack0x00000040;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000028,s_size_____108adf9f9,&stack0x00000058);
      if (*(long *)(unaff_x29 + -0x58) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x50));
      }
      if (in_stack_00000040 != (undefined8 *)0x0) {
        _free(uVar6);
      }
      uVar6 = in_stack_00000030;
      lVar1 = in_stack_00000028;
      in_stack_00000058 = (undefined8 *)in_stack_00000000;
      FUN_1021676b8(unaff_x29 + -0x58,&stack0x00000058,2,&UNK_108cf9cc0,1);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x50);
      in_stack_00000040 = (undefined8 *)*plVar5;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x58,s_____108ab6fcb);
      if (in_stack_00000040 != (undefined8 *)0x0) {
        _free(uVar7);
      }
      if (in_stack_00000000 != 0) {
        _free(in_stack_00000008);
      }
      if (lVar1 != 0) {
        _free(uVar6);
      }
      lVar1 = *(long *)(unaff_x29 + -0x58);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar6);
      }
      return;
    }
    func_0x0001087c9084(1,0x17);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c8cca4);
  (*pcVar2)();
}
