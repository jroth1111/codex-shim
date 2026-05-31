
void FUN_101c8e57c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  long *unaff_x23;
  undefined4 unaff_w26;
  undefined2 unaff_w27;
  long unaff_x29;
  long lVar4;
  long lVar5;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s_id_____108ae21c6,&stack0x00000058);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  if (in_stack_00000030 != (undefined8 *)0x0) {
    _free(in_stack_00000038);
  }
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000058,&UNK_10b270178,1);
  in_stack_00000030 = &stack0x00000058;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,&stack0x00000030);
  if (in_stack_00000058 != (undefined8 *)0x0) {
    _free(in_stack_00000060);
  }
  lVar4 = unaff_x23[1];
  in_stack_00000030 = (undefined8 *)*unaff_x23;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = unaff_w26;
    *(undefined2 *)(puVar3 + 1) = unaff_w27;
    in_stack_00000058 = (undefined8 *)0x6;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x78,s___null_108ae5e02);
    if (in_stack_00000058 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    in_stack_00000058 = &stack0x00000030;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000018,s_description_____108ae27c5,&stack0x00000058);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (in_stack_00000030 != (undefined8 *)0x0) {
      _free(lVar4);
    }
    uVar1 = in_stack_00000020;
    lVar4 = in_stack_00000018;
    in_stack_00000058 = (undefined8 *)in_stack_00000000;
    FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000058,2,&UNK_108cf9cc0,1);
    lVar5 = unaff_x23[1];
    in_stack_00000030 = (undefined8 *)*unaff_x23;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x78,s_____108ab6fcb);
    if (in_stack_00000030 != (undefined8 *)0x0) {
      _free(lVar5);
    }
    if (in_stack_00000000 != 0) {
      _free(in_stack_00000008);
    }
    if (lVar4 != 0) {
      _free(uVar1);
    }
    lVar4 = *(long *)(unaff_x29 + -0x78);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x70);
    func_0x000102167960();
    if (lVar4 != 0) {
      _free(uVar1);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c8e7ac);
  (*pcVar2)();
}
