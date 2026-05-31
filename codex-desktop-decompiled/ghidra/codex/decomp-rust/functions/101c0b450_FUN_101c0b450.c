
void FUN_101c0b450(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *unaff_x23;
  long unaff_x29;
  long lVar4;
  long lVar5;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (s_processHandle_____108ae00e8,&stack0x00000058);
  if (*(long *)(unaff_x29 + -0x58) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x50));
  }
  if (in_stack_00000040 != (undefined8 *)0x0) {
    _free(in_stack_00000048);
  }
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b26bfe0,1);
  in_stack_00000040 = &stack0x00000058;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x58,s__108ac0bb6,&stack0x00000040);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  lVar4 = unaff_x23[1];
  in_stack_00000040 = (undefined8 *)*unaff_x23;
  puVar3 = (undefined8 *)_malloc(0x13);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar3 + 0xf) = 0x657a6953;
    puVar3[1] = 0x536c616e696d7265;
    *puVar3 = 0x54737365636f7250;
    *(undefined8 *)(unaff_x29 + -0x58) = 0x13;
    *(undefined8 **)(unaff_x29 + -0x50) = puVar3;
    *(undefined8 *)(unaff_x29 + -0x48) = 0x13;
    in_stack_00000058 = &stack0x00000040;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000028,s_size_____108adf9f9,&stack0x00000058);
    if (*(long *)(unaff_x29 + -0x58) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x50));
    }
    if (in_stack_00000040 != (undefined8 *)0x0) {
      _free(lVar4);
    }
    uVar1 = in_stack_00000030;
    lVar4 = in_stack_00000028;
    in_stack_00000058 = (undefined8 *)in_stack_00000000;
    FUN_1021676b8(unaff_x29 + -0x58,&stack0x00000058,2,&UNK_108cf9cc0,1);
    lVar5 = unaff_x23[1];
    in_stack_00000040 = (undefined8 *)*unaff_x23;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x58,s_____108ab6fcb);
    if (in_stack_00000040 != (undefined8 *)0x0) {
      _free(lVar5);
    }
    if (in_stack_00000000 != 0) {
      _free(in_stack_00000008);
    }
    if (lVar4 != 0) {
      _free(uVar1);
    }
    lVar4 = *(long *)(unaff_x29 + -0x58);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x50);
    func_0x000102167960();
    if (lVar4 != 0) {
      _free(uVar1);
    }
    return;
  }
  func_0x0001087c9084(1,0x13);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c0b664);
  (*pcVar2)();
}

