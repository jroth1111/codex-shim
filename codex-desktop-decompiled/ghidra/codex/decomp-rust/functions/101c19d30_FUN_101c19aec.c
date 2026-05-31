
void FUN_101c19aec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 unaff_w19;
  undefined4 unaff_w22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_000000b0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long in_stack_00000128;
  long in_stack_00000130;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
  if (in_stack_00000020 != (undefined8 *)0x0) {
    _free(in_stack_00000028);
  }
  in_stack_00000020 = &stack0x000000b0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000c8,s_subpath_____108ae1617,&stack0x00000020);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  uVar3 = in_stack_000000d0;
  lVar1 = in_stack_000000c8;
  in_stack_00000020 = (undefined8 *)0x18;
  FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000020,2,&UNK_108cf9cc0,1);
  *(long *)(unaff_x29 + -0xb8) = in_stack_00000130;
  *(long *)(unaff_x29 + -0xc0) = in_stack_00000128;
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_000000b0 = unaff_x29 + -0xc0;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x000000b0);
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xb8));
  }
  _free();
  if (lVar1 != 0) {
    _free(uVar3);
  }
  lVar1 = *(long *)(unaff_x29 + -0x78);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x70);
  func_0x000102167960(&stack0x000000b0,uVar3,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                      &UNK_108cf9cc0,1);
  puVar8 = (undefined8 *)_malloc(0x14);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x14);
  }
  else {
    *(undefined4 *)(puVar8 + 2) = 0x7d202272;
    puVar8[1] = 0x6964706d7422203a;
    *puVar8 = 0x22646e696b22207b;
    puVar9 = (undefined8 *)_malloc(0x17);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x17);
    }
    else {
      puVar9[1] = 0x6873616c7322203a;
      *puVar9 = 0x22646e696b22207b;
      *(undefined8 *)((long)puVar9 + 0xf) = 0x7d2022706d745f68;
      puVar10 = (undefined8 *)_malloc(0x12);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x12);
      }
      else {
        *(undefined2 *)(puVar10 + 2) = 0x2c22;
        puVar10[1] = 0x6e776f6e6b6e7522;
        *puVar10 = 0x203a22646e696b22;
        *(undefined8 *)(unaff_x29 + -0x88) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        puVar11 = (undefined4 *)_malloc(6);
        if (puVar11 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
        }
        else {
          *puVar11 = unaff_w22;
          *(undefined2 *)(puVar11 + 1) = unaff_w19;
          *(undefined8 *)(unaff_x29 + -0x78) = 6;
          *(undefined4 **)(unaff_x29 + -0x70) = puVar11;
          *(undefined8 *)(unaff_x29 + -0x68) = 6;
          in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x88);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xc0,s_path_____108ae1627,&stack0x00000020);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          lVar2 = *(long *)(unaff_x29 + -0xc0);
          uVar4 = *(undefined8 *)(unaff_x29 + -0xb8);
          *(undefined8 *)(unaff_x29 + -0x88) = 1;
          *(undefined8 *)(unaff_x29 + -0x80) = 0;
          puVar11 = (undefined4 *)_malloc(6);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = unaff_w22;
            *(undefined2 *)(puVar11 + 1) = unaff_w19;
            in_stack_00000020 = (undefined8 *)0x6;
            *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000020;
            *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x27;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
            if (in_stack_00000020 != (undefined8 *)0x0) {
              _free(puVar11);
            }
            in_stack_00000020 = (undefined8 *)(unaff_x29 + -0x88);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xa0,s_subpath_____108ae1617,&stack0x00000020);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            in_stack_00000020 = (undefined8 *)0x12;
            uVar13 = *(undefined8 *)(unaff_x29 + -0x98);
            lVar12 = *(long *)(unaff_x29 + -0xa0);
            FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000020,3,&UNK_108cf9cc0,1);
            *(long *)(unaff_x29 + -0xb8) = in_stack_00000130;
            *(long *)(unaff_x29 + -0xc0) = in_stack_00000128;
            *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
            *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xc0;
            *(undefined8 *)(unaff_x29 + -0x80) = unaff_x27;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0x88);
            if (*(long *)(unaff_x29 + -0xc0) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0xb8));
            }
            _free(puVar10);
            if (lVar2 != 0) {
              _free(uVar4);
            }
            if (lVar12 != 0) {
              _free(uVar13);
            }
            lVar2 = *(long *)(unaff_x29 + -0x78);
            uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
            func_0x000102167960(unaff_x29 + -0x78,uVar4,*(undefined8 *)(unaff_x29 + -0x68),
                                &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
            lVar6 = in_stack_00000130;
            lVar5 = in_stack_00000128;
            lVar12 = in_stack_000000b0;
            in_stack_00000020 = (undefined8 *)0x12;
            FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000020,6,&UNK_108cf9ded,3);
            unaff_x28[1] = in_stack_00000130;
            *unaff_x28 = in_stack_00000128;
            unaff_x28[2] = *(long *)(unaff_x29 + -0x68);
            _free(unaff_x26);
            _free(in_stack_00000018);
            if (lVar12 != 0) {
              _free(unaff_x27);
            }
            _free(puVar8);
            _free(puVar9);
            if (lVar5 != 0) {
              _free(lVar6);
            }
            if (lVar2 != 0) {
              _free(uVar4);
            }
            if (lVar1 != 0) {
              _free(uVar3);
            }
            return;
          }
          func_0x0001087c9084(1,6);
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c19ffc);
  (*pcVar7)();
}

