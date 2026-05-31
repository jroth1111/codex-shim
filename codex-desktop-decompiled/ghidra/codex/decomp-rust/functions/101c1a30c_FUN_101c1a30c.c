
void FUN_101c1a30c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x23;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x68,s_Array<_>_108ae5df7,&stack0x00000050);
  if (in_stack_00000008 != (undefined8 *)0x0) {
    _free(in_stack_00000010);
  }
  in_stack_00000008 = (undefined8 *)(unaff_x29 + -0x78);
  in_stack_00000010 = (undefined8 *)&DAT_102024cac;
  in_stack_00000018 = unaff_x29 + -0x68;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000050,s_selectedMarketplaces_____108ae1678,&stack0x00000008);
  if (*(long *)(unaff_x29 + -0x68) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x60));
  }
  puVar3 = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  puVar5 = (undefined8 *)_malloc(0xf);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xf);
  }
  else {
    *puVar5 = 0x6574756c6f736241;
    *(undefined8 *)((long)puVar5 + 7) = 0x6675426874615065;
    in_stack_00000008 = (undefined8 *)0xf;
    in_stack_00000018 = 0xf;
    in_stack_00000050 = &stack0x00000008;
    in_stack_00000010 = puVar5;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x68,s_Array<_>_108ae5df7,&stack0x00000050);
    if (in_stack_00000008 != (undefined8 *)0x0) {
      _free(in_stack_00000010);
    }
    in_stack_00000008 = (undefined8 *)(unaff_x29 + -0x78);
    in_stack_00000010 = (undefined8 *)&DAT_102024cac;
    in_stack_00000018 = unaff_x29 + -0x68;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000050,s_upgradedRoots_____108ae1695,&stack0x00000008);
    if (*(long *)(unaff_x29 + -0x68) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x60));
    }
    puVar5 = in_stack_00000050;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    puVar6 = (undefined8 *)_malloc(0x1b);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0x6172677055656361;
      *puVar6 = 0x6c7074656b72614d;
      *(undefined8 *)((long)puVar6 + 0x13) = 0x6f666e49726f7272;
      *(undefined8 *)((long)puVar6 + 0xb) = 0x4565646172677055;
      in_stack_00000008 = (undefined8 *)0x1b;
      in_stack_00000018 = 0x1b;
      in_stack_00000050 = &stack0x00000008;
      in_stack_00000010 = puVar6;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x68,s_Array<_>_108ae5df7,&stack0x00000050);
      if (in_stack_00000008 != (undefined8 *)0x0) {
        _free(in_stack_00000010);
      }
      in_stack_00000008 = (undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000010 = (undefined8 *)&DAT_102024cac;
      in_stack_00000018 = unaff_x29 + -0x68;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000070,s_errors_____108ae16ab,&stack0x00000008);
      if (*(long *)(unaff_x29 + -0x68) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x60));
      }
      uVar2 = in_stack_00000078;
      lVar1 = in_stack_00000070;
      in_stack_00000008 = puVar3;
      in_stack_00000010 = (undefined8 *)in_stack_00000058;
      in_stack_00000018 = in_stack_00000060;
      FUN_1021676b8(unaff_x29 + -0x68,&stack0x00000008,3,&UNK_108cf9cc0,1);
      uVar7 = *(undefined8 *)(unaff_x29 + -0x60);
      in_stack_00000050 = *(undefined8 **)(unaff_x29 + -0x68);
      *(undefined8 ***)(unaff_x29 + -0x78) = &stack0x00000050;
      *(undefined8 *)(unaff_x29 + -0x70) = unaff_x23;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x68,s_____108ab6fcb,unaff_x29 + -0x78);
      if (in_stack_00000050 != (undefined8 *)0x0) {
        _free(uVar7);
      }
      if (puVar3 != (undefined8 *)0x0) {
        _free(in_stack_00000058);
      }
      if (puVar5 != (undefined8 *)0x0) {
        _free(unaff_x23);
      }
      if (lVar1 != 0) {
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
    func_0x0001087c9084(1,0x1b);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101c1a5cc);
  (*pcVar4)();
}

