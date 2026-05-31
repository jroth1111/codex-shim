
void FUN_101c1bf6c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 unaff_x22;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000020,s_threadId_____108adeb3a,&stack0x00000048);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  lVar1 = (long)in_stack_00000020;
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000048,&UNK_10b26c430,3);
  in_stack_00000020 = &stack0x00000048;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s__108ac0bb6,&stack0x00000020);
  if (in_stack_00000048 != (undefined8 *)0x0) {
    _free(in_stack_00000050);
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
  in_stack_00000020 = *(undefined8 **)(unaff_x29 + -0x68);
  puVar4 = (undefined8 *)_malloc(0x21);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar4 + 4) = 0x73;
    puVar4[1] = 0x6947617461646174;
    *puVar4 = 0x654d646165726854;
    puVar4[3] = 0x6d61726150657461;
    puVar4[2] = 0x6470556f666e4974;
    in_stack_00000048 = (undefined8 *)0x21;
    *(undefined8 ***)(unaff_x29 + -0x50) = &stack0x00000048;
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x22;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s___null_108ae5e02,unaff_x29 + -0x50);
    if (in_stack_00000048 != (undefined8 *)0x0) {
      _free(puVar4);
    }
    in_stack_00000048 = &stack0x00000020;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000008,s_gitInfo_____108ae196b,&stack0x00000048);
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(uVar5);
    }
    uVar5 = in_stack_00000010;
    lVar2 = in_stack_00000008;
    in_stack_00000048 = (undefined8 *)lVar1;
    FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000048,2,&UNK_108cf9cc0,1);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
    in_stack_00000020 = *(undefined8 **)(unaff_x29 + -0x68);
    *(undefined8 ***)(unaff_x29 + -0x50) = &stack0x00000020;
    *(undefined8 *)(unaff_x29 + -0x48) = unaff_x22;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s_____108ab6fcb,unaff_x29 + -0x50);
    if (in_stack_00000020 != (undefined8 *)0x0) {
      _free(uVar6);
    }
    if (lVar1 != 0) {
      _free(in_stack_00000028);
    }
    if (lVar2 != 0) {
      _free(uVar5);
    }
    lVar1 = *(long *)(unaff_x29 + -0x68);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x60);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar5);
    }
    return;
  }
  func_0x0001087c9084(1,0x21);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c1c19c);
  (*pcVar3)();
}

