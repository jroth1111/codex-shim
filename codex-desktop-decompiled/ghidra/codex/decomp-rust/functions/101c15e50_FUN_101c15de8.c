
void FUN_101c15de8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 unaff_w22;
  undefined8 unaff_x25;
  undefined2 unaff_w28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000070,s_threadId_____108adeb3a,&stack0x00000010);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  puVar3 = in_stack_00000070;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar7 = (undefined4 *)_malloc(6);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar7 = unaff_w22;
    *(undefined2 *)(puVar7 + 1) = unaff_w28;
    *(undefined8 *)(unaff_x29 + -0x70) = 6;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar7;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    in_stack_00000010 = (undefined8 *)(unaff_x29 + -0x80);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000070,s_turnId_____108adeb4b,&stack0x00000010);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    puVar4 = in_stack_00000070;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar7 = unaff_w22;
      *(undefined2 *)(puVar7 + 1) = unaff_w28;
      in_stack_00000010 = (undefined8 *)0x6;
      in_stack_00000070 = &stack0x00000010;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x00000070);
      if (in_stack_00000010 != (undefined8 *)0x0) {
        _free(puVar7);
      }
      in_stack_00000010 = (undefined8 *)(unaff_x29 + -0x80);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000070,s_explanation_____108ae120f,&stack0x00000010);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      puVar5 = in_stack_00000070;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      puVar8 = (undefined8 *)_malloc(0xc);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = 0x70657453;
        *puVar8 = 0x6e616c506e727554;
        in_stack_00000010 = (undefined8 *)0xc;
        in_stack_00000070 = &stack0x00000010;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s_Array<_>_108ae5df7,&stack0x00000070);
        if (in_stack_00000010 != (undefined8 *)0x0) {
          _free(puVar8);
        }
        in_stack_00000010 = (undefined8 *)(unaff_x29 + -0x80);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000088,s_plan_____108ae1223,&stack0x00000010);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        uVar2 = in_stack_00000090;
        lVar1 = in_stack_00000088;
        in_stack_00000010 = puVar3;
        FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000010,4,&UNK_108cf9cc0,1);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x68);
        in_stack_00000070 = *(undefined8 **)(unaff_x29 + -0x70);
        *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x00000070;
        *(undefined8 *)(unaff_x29 + -0x78) = unaff_x25;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
        if (in_stack_00000070 != (undefined8 *)0x0) {
          _free(uVar9);
        }
        if (puVar3 != (undefined8 *)0x0) {
          _free(in_stack_00000078);
        }
        if (puVar4 != (undefined8 *)0x0) {
          _free(in_stack_00000078);
        }
        if (puVar5 != (undefined8 *)0x0) {
          _free(unaff_x25);
        }
        if (lVar1 != 0) {
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
      func_0x0001087c9084(1,0xc);
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c160f8);
  (*pcVar6)();
}

