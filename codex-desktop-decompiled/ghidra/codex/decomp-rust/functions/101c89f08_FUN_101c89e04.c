
void FUN_101c89e04(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 unaff_w21;
  undefined2 unaff_w23;
  undefined8 unaff_x24;
  long unaff_x29;
  undefined8 uVar8;
  long in_stack_00000008;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s_threadId_____108adeb3a,&stack0x00000008);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  lVar1 = (long)in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = unaff_w21;
    *(undefined2 *)(puVar6 + 1) = unaff_w23;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    *(undefined4 **)(unaff_x29 + -0x60) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x58) = 6;
    in_stack_00000008 = unaff_x29 + -0x78;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_turnId_____108adeb4b,&stack0x00000008);
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    lVar3 = (long)in_stack_00000050;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    puVar7 = (undefined8 *)_malloc(0x11);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar7 + 2) = 0x6e;
      puVar7[1] = 0x6f69746163696669;
      *puVar7 = 0x7265566c65646f4d;
      in_stack_00000008 = 0x11;
      in_stack_00000050 = &stack0x00000008;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x68,s_Array<_>_108ae5df7,&stack0x00000050);
      if (in_stack_00000008 != 0) {
        _free(puVar7);
      }
      in_stack_00000008 = unaff_x29 + -0x78;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000070,s_verifications_____108ae2167,&stack0x00000008);
      if (*(long *)(unaff_x29 + -0x68) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x60));
      }
      uVar2 = in_stack_00000078;
      lVar4 = in_stack_00000070;
      in_stack_00000008 = lVar1;
      FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000008,3,&UNK_108cf9cc0,1);
      uVar8 = *(undefined8 *)(unaff_x29 + -0x60);
      in_stack_00000050 = *(undefined8 **)(unaff_x29 + -0x68);
      *(undefined8 ***)(unaff_x29 + -0x78) = &stack0x00000050;
      *(undefined8 *)(unaff_x29 + -0x70) = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x68,s_____108ab6fcb,unaff_x29 + -0x78);
      if (in_stack_00000050 != (undefined8 *)0x0) {
        _free(uVar8);
      }
      if (lVar1 != 0) {
        _free(in_stack_00000058);
      }
      if (lVar3 != 0) {
        _free(in_stack_00000058);
      }
      if (lVar4 != 0) {
        _free(uVar2);
      }
      lVar1 = *(long *)(unaff_x29 + -0x68);
      uVar2 = *(undefined8 *)(unaff_x29 + -0x60);
      func_0x000102167960();
      if (lVar1 != 0) {
        _free(uVar2);
      }
      return;
    }
    func_0x0001087c9084(1,0x11);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101c8a04c);
  (*pcVar5)();
}
