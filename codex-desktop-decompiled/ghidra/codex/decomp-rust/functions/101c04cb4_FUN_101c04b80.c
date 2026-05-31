
void FUN_101c04b80(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x24;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_000000a0;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,&stack0x000000a0);
  if (in_stack_00000018 != (undefined8 *)0x0) {
    _free(in_stack_00000020);
  }
  uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
  in_stack_000000a0 = *(undefined8 **)(unaff_x29 + -0x78);
  puVar3 = (undefined8 *)_malloc(0xf);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xf);
  }
  else {
    *puVar3 = 0x6574756c6f736241;
    *(undefined8 *)((long)puVar3 + 7) = 0x6675426874615065;
    in_stack_00000018 = (undefined8 *)0xf;
    in_stack_00000078 = &stack0x00000018;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x00000078);
    if (in_stack_00000018 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    in_stack_00000018 = &stack0x000000a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000078,s_path_____108adf80c,&stack0x00000018);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (in_stack_000000a0 != (undefined8 *)0x0) {
      _free(uVar6);
    }
    puVar3 = in_stack_00000078;
    in_stack_00000078 = (undefined8 *)0x1;
    puVar4 = (undefined8 *)_malloc(0x14);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x14);
    }
    else {
      *(undefined4 *)(puVar4 + 2) = 0x65636166;
      puVar4[1] = 0x7265746e49656361;
      *puVar4 = 0x6c7074656b72614d;
      in_stack_00000018 = (undefined8 *)0x14;
      in_stack_000000a0 = &stack0x00000018;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,&stack0x000000a0);
      if (in_stack_00000018 != (undefined8 *)0x0) {
        _free(puVar4);
      }
      in_stack_00000018 = &stack0x00000078;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000000a0,s_interface_____108adf81a,&stack0x00000018);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      puVar4 = in_stack_000000a0;
      in_stack_00000078 = (undefined8 *)0x1;
      puVar5 = (undefined8 *)_malloc(0xd);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0x75536e6967756c50;
        *(undefined8 *)((long)puVar5 + 5) = 0x7972616d6d75536e;
        in_stack_00000018 = (undefined8 *)0xd;
        in_stack_000000a0 = &stack0x00000018;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_Array<_>_108ae5df7,&stack0x000000a0);
        if (in_stack_00000018 != (undefined8 *)0x0) {
          _free(puVar5);
        }
        in_stack_00000018 = &stack0x00000078;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x90,s_plugins_____108adf82c,&stack0x00000018);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        in_stack_00000018 = (undefined8 *)in_stack_00000010;
        FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000018,4,&UNK_108cf9cc0,1);
        uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
        in_stack_000000a0 = *(undefined8 **)(unaff_x29 + -0x78);
        in_stack_00000078 = &stack0x000000a0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000078);
        if (in_stack_000000a0 != (undefined8 *)0x0) {
          _free(uVar6);
        }
        if (in_stack_00000010 != 0) {
          _free(in_stack_00000008);
        }
        if (puVar3 != (undefined8 *)0x0) {
          _free(unaff_x24);
        }
        if (puVar4 != (undefined8 *)0x0) {
          _free(unaff_x24);
        }
        if (in_stack_000000c0 != 0) {
          _free(in_stack_000000c8);
        }
        lVar1 = *(long *)(unaff_x29 + -0x78);
        uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
        func_0x000102167960();
        if (lVar1 != 0) {
          _free(uVar6);
        }
        return;
      }
      func_0x0001087c9084(1,0xd);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c04f00);
  (*pcVar2)();
}

