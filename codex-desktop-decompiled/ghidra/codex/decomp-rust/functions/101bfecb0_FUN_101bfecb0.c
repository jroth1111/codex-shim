
void FUN_101bfecb0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 unaff_x24;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined8 uVar8;
  long in_stack_00000020;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000080,s_pluginPath_____108adeeed,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  lVar1 = (long)in_stack_00000080;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  puVar7 = (undefined4 *)_malloc(6);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x69727473;
    *(undefined2 *)(puVar7 + 1) = 0x676e;
    in_stack_00000020 = 6;
    in_stack_00000080 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000080);
    if (in_stack_00000020 != 0) {
      _free(puVar7);
    }
    in_stack_00000020 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_remotePluginId_____108adef00,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    puVar3 = in_stack_00000080;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    FUN_102161444(unaff_x29 + -0x70);
    in_stack_00000020 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_discoverability_____108adef17,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    puVar4 = in_stack_00000080;
    *(undefined **)(unaff_x29 + -0x80) = &UNK_108cfa0c4;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    func_0x00010215b5e0(&stack0x00000020);
    in_stack_00000080 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000080);
    if (in_stack_00000020 != 0) {
      _free(unaff_x26);
    }
    in_stack_00000020 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000098,s_shareTargets_____108adef2f,&stack0x00000020);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    uVar2 = in_stack_000000a0;
    lVar5 = in_stack_00000098;
    in_stack_00000020 = lVar1;
    FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000020,4,&UNK_108cf9cc0,1);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000080 = *(undefined8 **)(unaff_x29 + -0x70);
    *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x00000080;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x24;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
    if (in_stack_00000080 != (undefined8 *)0x0) {
      _free(uVar8);
    }
    if (lVar1 != 0) {
      _free(in_stack_00000088);
    }
    if (puVar3 != (undefined8 *)0x0) {
      _free(unaff_x24);
    }
    if (puVar4 != (undefined8 *)0x0) {
      _free(unaff_x24);
    }
    if (lVar5 != 0) {
      _free(uVar2);
    }
    lVar1 = *(long *)(unaff_x29 + -0x70);
    uVar2 = *(undefined8 *)(unaff_x29 + -0x68);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar2);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101bfef78);
  (*pcVar6)();
}

