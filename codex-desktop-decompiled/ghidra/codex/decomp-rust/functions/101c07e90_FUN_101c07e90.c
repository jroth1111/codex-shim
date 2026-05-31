
void FUN_101c07e90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_stack_00000018;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined8 in_stack_00000098;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000090,s_item_____108adec11,&stack0x00000018);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  lVar1 = (long)in_stack_00000090;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = 0x69727473;
    *(undefined2 *)(puVar6 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x70) = 6;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    in_stack_00000018 = (undefined8 *)(unaff_x29 + -0x80);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000090,s_threadId_____108adeb3a,&stack0x00000018);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    lVar3 = (long)in_stack_00000090;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar6 = (undefined4 *)_malloc(6);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x69727473;
      *(undefined2 *)(puVar6 + 1) = 0x676e;
      *(undefined8 *)(unaff_x29 + -0x70) = 6;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar6;
      *(undefined8 *)(unaff_x29 + -0x60) = 6;
      in_stack_00000018 = (undefined8 *)(unaff_x29 + -0x80);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000090,s_turnId_____108adeb4b,&stack0x00000018);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      lVar4 = (long)in_stack_00000090;
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000018,&UNK_10b26bfa0,1);
      in_stack_00000090 = &stack0x00000018;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s__108ac0bb6,&stack0x00000090);
      if (in_stack_00000018 != (undefined8 *)0x0) {
        _free(unaff_x26);
      }
      uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000090 = *(undefined8 **)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0x70) = 1;
      *(undefined8 *)(unaff_x29 + -0x68) = 0;
      in_stack_00000018 = &stack0x00000090;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000078,s_completedAtMs___number__108adfbf2,&stack0x00000018);
      if (in_stack_00000090 != (undefined8 *)0x0) {
        _free(uVar7);
      }
      uVar7 = in_stack_00000080;
      lVar2 = in_stack_00000078;
      in_stack_00000018 = (undefined8 *)lVar1;
      FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000018,4,&UNK_108cf9cc0,1);
      uVar8 = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000090 = *(undefined8 **)(unaff_x29 + -0x70);
      *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x00000090;
      *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
      if (in_stack_00000090 != (undefined8 *)0x0) {
        _free(uVar8);
      }
      if (lVar1 != 0) {
        _free(in_stack_00000098);
      }
      if (lVar3 != 0) {
        _free(in_stack_00000098);
      }
      if (lVar4 != 0) {
        _free(in_stack_00000098);
      }
      if (lVar2 != 0) {
        _free(uVar7);
      }
      lVar1 = *(long *)(unaff_x29 + -0x70);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar7);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c08168);
  (*pcVar5)();
}

