
void FUN_101c1278c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined8 *unaff_x20;
  undefined8 unaff_x23;
  long unaff_x29;
  undefined8 uVar6;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000060,s_exitCode_____108ae0c02,&stack0x00000018);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  if (*(long *)(unaff_x29 + -0x90) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x88));
  }
  lVar1 = in_stack_00000060;
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b26c190,3);
  *(long **)(unaff_x29 + -0x90) = &stack0x00000018;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
  if (in_stack_00000018 != 0) {
    _free(in_stack_00000020);
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -0x78);
  unaff_x20[1] = *(undefined8 *)(unaff_x29 + -0x70);
  *unaff_x20 = uVar6;
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  puVar5 = (undefined4 *)_malloc(6);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar5 = 0x69727473;
    *(undefined2 *)(puVar5 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000018 = unaff_x29 + -0x90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000060,s_stdout_____108ae0c14,&stack0x00000018);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0x90) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x88));
    }
    lVar2 = in_stack_00000060;
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b26c1c0,3);
    *(long **)(unaff_x29 + -0x90) = &stack0x00000018;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
    if (in_stack_00000018 != 0) {
      _free(unaff_x23);
    }
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_00000060 = 1;
    puVar5 = (undefined4 *)_malloc(6);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0x69727473;
      *(undefined2 *)(puVar5 + 1) = 0x676e;
      *(undefined8 *)(unaff_x29 + -0x78) = 6;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar5;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      in_stack_00000018 = unaff_x29 + -0x90;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000088,s_stderr_____108ae0c24,&stack0x00000018);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      uVar6 = in_stack_00000090;
      lVar3 = in_stack_00000088;
      in_stack_00000018 = lVar1;
      FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000018,3,&UNK_108cf9cc0,1);
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000060 = unaff_x29 + -0x90;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      if (lVar1 != 0) {
        _free(in_stack_00000068);
      }
      if (lVar2 != 0) {
        _free(in_stack_00000068);
      }
      if (lVar3 != 0) {
        _free(uVar6);
      }
      lVar1 = *(long *)(unaff_x29 + -0x78);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar6);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101c12a98);
  (*pcVar4)();
}

