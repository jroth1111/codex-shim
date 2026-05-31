
void FUN_101c1b758(void)

{
  long lVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 unaff_w19;
  undefined2 unaff_w24;
  undefined8 unaff_x27;
  long unaff_x29;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x000000b0);
  if (in_stack_00000038 != 0) {
    _free(in_stack_00000040);
  }
  in_stack_00000038 = unaff_x29 + -0x80;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000b0,s_samplesPerChannel_____108ae1833,&stack0x00000038);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  lVar1 = (long)in_stack_000000b0;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = unaff_w19;
    *(undefined2 *)(puVar3 + 1) = unaff_w24;
    in_stack_00000038 = 6;
    in_stack_000000b0 = &stack0x00000038;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s___null_108ae5e02,&stack0x000000b0);
    if (in_stack_00000038 != 0) {
      _free(puVar3);
    }
    in_stack_00000038 = unaff_x29 + -0x80;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x98,s_itemId_____108ae0673,&stack0x00000038);
    if (*(long *)(unaff_x29 + -0x70) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x68));
    }
    in_stack_00000038 = in_stack_00000020;
    uVar5 = *(undefined8 *)(unaff_x29 + -0x90);
    lVar4 = *(long *)(unaff_x29 + -0x98);
    FUN_1021676b8(unaff_x29 + -0x70,&stack0x00000038,5,&UNK_108cf9cc0,1);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_000000b0 = *(undefined8 **)(unaff_x29 + -0x70);
    *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x000000b0;
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x27;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x70,s_____108ab6fcb,unaff_x29 + -0x80);
    if (in_stack_000000b0 != (undefined8 *)0x0) {
      _free(uVar6);
    }
    if (in_stack_00000020 != 0) {
      _free(in_stack_00000018);
    }
    if (in_stack_00000030 != 0) {
      _free(in_stack_00000010);
    }
    if (in_stack_00000028 != 0) {
      _free(in_stack_00000008);
    }
    if (lVar1 != 0) {
      _free(in_stack_000000b8);
    }
    if (lVar4 != 0) {
      _free(uVar5);
    }
    lVar1 = *(long *)(unaff_x29 + -0x70);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x68);
    func_0x000102167960();
    if (lVar1 != 0) {
      _free(uVar5);
    }
    return;
  }
  func_0x0001087c9084(1,6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c1b9cc);
  (*pcVar2)();
}

