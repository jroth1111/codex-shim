
void FUN_101c915a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s_remotePluginId_____108adef00,&stack0x00000008);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar2 = in_stack_00000058;
  lVar1 = in_stack_00000050;
  in_stack_00000080 = (undefined8 *)0x1;
  puVar8 = (undefined8 *)_malloc(0x20);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0x7461647055657261;
    *puVar8 = 0x68536e6967756c50;
    puVar8[3] = 0x7974696c69626172;
    puVar8[2] = 0x65766f6373694465;
    *(undefined8 *)(unaff_x29 + -0x70) = 0x20;
    *(undefined8 **)(unaff_x29 + -0x68) = puVar8;
    *(undefined8 *)(unaff_x29 + -0x60) = 0x20;
    in_stack_00000008 = &stack0x00000080;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_discoverability_____108adef17,&stack0x00000008);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar4 = in_stack_00000058;
    lVar3 = in_stack_00000050;
    in_stack_00000050 = 1;
    in_stack_00000058 = 0;
    func_0x00010215b5e0(unaff_x29 + -0x70);
    in_stack_00000008 = &stack0x00000050;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000068,s_shareTargets_____108adef2f,&stack0x00000008);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar6 = in_stack_00000070;
    lVar5 = in_stack_00000068;
    in_stack_00000008 = (undefined8 *)lVar1;
    FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000008,3,&UNK_108cf9cc0,1);
    in_stack_00000058 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000050 = *(long *)(unaff_x29 + -0x70);
    in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x60);
    in_stack_00000080 = &stack0x00000050;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s_____108ab6fcb,&stack0x00000080);
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000058);
    }
    if (lVar1 != 0) {
      _free(uVar2);
    }
    if (lVar3 != 0) {
      _free(uVar4);
    }
    if (lVar5 != 0) {
      _free(uVar6);
    }
    lVar1 = *(long *)(unaff_x29 + -0x70);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,0x20);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c91794);
  (*pcVar7)();
}
