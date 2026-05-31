
void FUN_101c90acc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *unaff_x20;
  long *plVar8;
  undefined8 unaff_x24;
  undefined4 unaff_w25;
  undefined2 unaff_w26;
  long unaff_x29;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s_text_____108ae2bfd,&stack0x00000050);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  uVar3 = in_stack_00000020;
  lVar1 = in_stack_00000018;
  in_stack_00000050 = (undefined8 *)0x14;
  FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000050,2,&UNK_108cf9cc0,1);
  plVar8 = (long *)(unaff_x29 + -0x68);
  in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000030 = *plVar8;
  in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x58);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(unaff_x29 + -0x68,s_____108ab6fcb);
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  _free();
  if (lVar1 != 0) {
    _free(uVar3);
  }
  lVar1 = *(long *)(unaff_x29 + -0x68);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
  func_0x000102167960();
  puVar6 = (undefined8 *)_malloc(0x15);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x15);
  }
  else {
    puVar6[1] = 0x6d497475706e6922;
    *puVar6 = 0x203a226570797422;
    *(undefined8 *)((long)puVar6 + 0xd) = 0x2c226567616d4974;
    in_stack_00000030 = 1;
    in_stack_00000038 = 0;
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = unaff_w25;
      *(undefined2 *)(puVar7 + 1) = unaff_w26;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      *(undefined4 **)(unaff_x29 + -0x60) = puVar7;
      *(undefined8 *)(unaff_x29 + -0x58) = 6;
      in_stack_00000050 = &stack0x00000030;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s_imageUrl_____108ae2c0a,&stack0x00000050);
      if (*(long *)(unaff_x29 + -0x68) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x60));
      }
      uVar4 = in_stack_00000088;
      lVar2 = in_stack_00000080;
      in_stack_00000050 = (undefined8 *)0x15;
      FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000050,2,&UNK_108cf9cc0,1);
      in_stack_00000038 = *(undefined8 *)(unaff_x29 + -0x60);
      in_stack_00000030 = *plVar8;
      in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x58);
      *(long **)(unaff_x29 + -0x78) = &stack0x00000030;
      *(undefined8 *)(unaff_x29 + -0x70) = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x68,s_____108ab6fcb,unaff_x29 + -0x78);
      if (in_stack_00000030 != 0) {
        _free(in_stack_00000038);
      }
      _free(puVar6);
      if (lVar2 != 0) {
        _free(uVar4);
      }
      lVar2 = *(long *)(unaff_x29 + -0x68);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x60);
      func_0x000102167960(unaff_x29 + -0x68,uVar4,*(undefined8 *)(unaff_x29 + -0x58),&UNK_108cf9cc1,
                          7,&UNK_108cf9cc0,1);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x60);
      lVar9 = *plVar8;
      in_stack_00000050 = &stack0x00000030;
      FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000050,2,&UNK_108cf9ded,3);
      lVar10 = *plVar8;
      unaff_x20[1] = *(long *)(unaff_x29 + -0x60);
      *unaff_x20 = lVar10;
      unaff_x20[2] = *(long *)(unaff_x29 + -0x58);
      if (in_stack_00000050 != (undefined8 *)0x0) {
        _free(unaff_x24);
      }
      if (lVar9 != 0) {
        _free(uVar11);
      }
      if (lVar2 != 0) {
        _free(uVar4);
      }
      if (lVar1 != 0) {
        _free(uVar3);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c90dc8);
  (*pcVar5)();
}
