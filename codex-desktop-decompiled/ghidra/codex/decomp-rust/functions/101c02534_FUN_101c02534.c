
void FUN_101c02534(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined2 unaff_w20;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined4 unaff_w24;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_000000b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xc0);
  if (in_stack_00000040 != (undefined8 *)0x0) {
    _free(in_stack_00000048);
  }
  uVar4 = *unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x23[1];
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar4;
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cfa0c4;
  *(undefined8 *)(unaff_x29 + -0x98) = 1;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar3 = unaff_w24;
    *(undefined2 *)(puVar3 + 1) = unaff_w20;
    in_stack_00000040 = (undefined8 *)0x6;
    in_stack_000000b8 = &stack0x00000040;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000b8);
    if (in_stack_00000040 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    in_stack_00000040 = (undefined8 *)(unaff_x29 + -0xc0);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000b8,s_filePath_____108adf3a8,&stack0x00000040);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0xc0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xb8));
    }
    puVar1 = in_stack_000000b8;
    in_stack_000000b8 = (undefined8 *)&UNK_108cfa0c4;
    puVar3 = (undefined4 *)_malloc(6);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = unaff_w24;
      *(undefined2 *)(puVar3 + 1) = unaff_w20;
      in_stack_00000040 = (undefined8 *)0x6;
      *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000040;
      *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x28;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
      if (in_stack_00000040 != (undefined8 *)0x0) {
        _free(puVar3);
      }
      in_stack_00000040 = &stack0x000000b8;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x90,s_expectedVersion_____108adf3ba,&stack0x00000040);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      in_stack_00000040 = (undefined8 *)in_stack_00000020;
      uVar4 = *(undefined8 *)(unaff_x29 + -0x88);
      lVar5 = *(long *)(unaff_x29 + -0x90);
      FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000040,5,&UNK_108cf9cc0,1);
      *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_000000b8 = (undefined8 *)(unaff_x29 + -0xc0);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x000000b8);
      if (*(long *)(unaff_x29 + -0xc0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xb8));
      }
      if (in_stack_00000020 != 0) {
        _free(in_stack_00000018);
      }
      if (in_stack_00000038 != 0) {
        _free(in_stack_00000010);
      }
      if (in_stack_00000030 != 0) {
        _free(in_stack_00000028);
      }
      if (puVar1 != (undefined8 *)0x0) {
        _free(unaff_x28);
      }
      if (lVar5 != 0) {
        _free(uVar4);
      }
      lVar5 = *(long *)(unaff_x29 + -0x78);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000102167960(unaff_x22,uVar4,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                          &UNK_108cf9cc0,1);
      if (lVar5 != 0) {
        _free(uVar4);
      }
      return;
    }
    func_0x0001087c9084(1,6);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c02838);
  (*pcVar2)();
}

