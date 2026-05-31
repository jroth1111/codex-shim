
void FUN_101c0e54c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 unaff_w22;
  undefined8 unaff_x25;
  undefined2 unaff_w26;
  long unaff_x29;
  undefined8 uVar9;
  long in_stack_00000010;
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
  lVar1 = (long)in_stack_00000070;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar7 = (undefined4 *)_malloc(6);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar7 = unaff_w22;
    *(undefined2 *)(puVar7 + 1) = unaff_w26;
    *(undefined8 *)(unaff_x29 + -0x70) = 6;
    *(undefined4 **)(unaff_x29 + -0x68) = puVar7;
    *(undefined8 *)(unaff_x29 + -0x60) = 6;
    in_stack_00000010 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000070,s_turnId_____108adeb4b,&stack0x00000010);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    lVar3 = (long)in_stack_00000070;
    *(undefined8 *)(unaff_x29 + -0x80) = 1;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar7 = unaff_w22;
      *(undefined2 *)(puVar7 + 1) = unaff_w26;
      *(undefined8 *)(unaff_x29 + -0x70) = 6;
      *(undefined4 **)(unaff_x29 + -0x68) = puVar7;
      *(undefined8 *)(unaff_x29 + -0x60) = 6;
      in_stack_00000010 = unaff_x29 + -0x80;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000070,s_itemId_____108ae0673,&stack0x00000010);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      lVar4 = (long)in_stack_00000070;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      puVar8 = (undefined8 *)_malloc(0x1c);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = 0x4972657355747365;
        *puVar8 = 0x757165526c6f6f54;
        *(undefined8 *)((long)puVar8 + 0x14) = 0x6e6f697473657551;
        *(undefined8 *)((long)puVar8 + 0xc) = 0x7475706e49726573;
        in_stack_00000010 = 0x1c;
        in_stack_00000070 = &stack0x00000010;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x70,s_Array<_>_108ae5df7,&stack0x00000070);
        if (in_stack_00000010 != 0) {
          _free(puVar8);
        }
        in_stack_00000010 = unaff_x29 + -0x80;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000088,s_questions_____108ae0682,&stack0x00000010);
        if (*(long *)(unaff_x29 + -0x70) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x68));
        }
        uVar2 = in_stack_00000090;
        lVar5 = in_stack_00000088;
        in_stack_00000010 = lVar1;
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
        if (lVar1 != 0) {
          _free(in_stack_00000078);
        }
        if (lVar3 != 0) {
          _free(in_stack_00000078);
        }
        if (lVar4 != 0) {
          _free(in_stack_00000078);
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
      func_0x0001087c9084(1,0x1c);
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c0e82c);
  (*pcVar6)();
}

