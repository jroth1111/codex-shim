
void FUN_101c0ae4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 *in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x00000048);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    _free(in_stack_00000008);
  }
  in_stack_00000000 = &stack0x00000060;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000048,s_path_____108adf80c);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  if (in_stack_00000060 != (undefined1 *)0x0) {
    _free(in_stack_00000068);
  }
  uVar2 = in_stack_00000050;
  puVar3 = (undefined1 *)in_stack_00000048;
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&UNK_10b26bfc0,1);
  in_stack_00000060 = (undefined1 *)register0x00000008;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,&stack0x00000060);
  if (in_stack_00000000 != (undefined8 *)0x0) {
    _free(unaff_x23);
  }
  in_stack_00000068 = unaff_x24[1];
  in_stack_00000060 = (undefined1 *)*unaff_x24;
  puVar8 = (undefined4 *)_malloc(6);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar8 = 0x69727473;
    *(undefined2 *)(puVar8 + 1) = 0x676e;
    in_stack_00000000 = (undefined8 *)0x6;
    in_stack_00000048 = (undefined8 *)register0x00000008;
    in_stack_00000050 = unaff_x23;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x00000048);
    if (in_stack_00000000 != (undefined8 *)0x0) {
      _free(puVar8);
    }
    in_stack_00000000 = &stack0x00000060;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&stack0x00000048,s_name_____108ae0088);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (in_stack_00000060 != (undefined1 *)0x0) {
      _free(in_stack_00000068);
    }
    uVar5 = in_stack_00000050;
    puVar4 = (undefined1 *)in_stack_00000048;
    in_stack_00000060 = (undefined1 *)0x1;
    in_stack_00000068 = 0;
    puVar8 = (undefined4 *)_malloc(7);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0x6c6f6f62;
      *(undefined4 *)((long)puVar8 + 3) = 0x6e61656c;
      *(undefined8 *)(unaff_x29 + -0x78) = 7;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
      *(undefined8 *)(unaff_x29 + -0x68) = 7;
      in_stack_00000000 = &stack0x00000060;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000090,s_enabled_____108ae0096);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      uVar6 = in_stack_00000098;
      lVar1 = in_stack_00000090;
      in_stack_00000000 = (undefined8 *)puVar3;
      FUN_1021676b8(unaff_x29 + -0x78);
      in_stack_00000068 = unaff_x24[1];
      in_stack_00000060 = (undefined1 *)*unaff_x24;
      in_stack_00000048 = &stack0x00000060;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000048);
      if (in_stack_00000060 != (undefined1 *)0x0) {
        _free(in_stack_00000068);
      }
      if (puVar3 != (undefined1 *)0x0) {
        _free(uVar2);
      }
      if (puVar4 != (undefined1 *)0x0) {
        _free(uVar5);
      }
      if (lVar1 != 0) {
        _free(uVar6);
      }
      lVar1 = *(long *)(unaff_x29 + -0x78);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar2);
      }
      return;
    }
    func_0x0001087c9084(1,7);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c0b164);
  (*pcVar7)();
}

