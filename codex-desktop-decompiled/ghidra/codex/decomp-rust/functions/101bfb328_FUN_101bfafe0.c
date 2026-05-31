
void FUN_101bfafe0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 unaff_w21;
  undefined8 *unaff_x25;
  undefined4 unaff_w26;
  long unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s_loginId_____108ade8e7,&stack0x00000080);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xa0);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x98);
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000080,&UNK_10b26ba70,1);
  *(long **)(unaff_x29 + -0xa0) = &stack0x00000080;
  *(undefined8 *)(unaff_x29 + -0x98) = unaff_x28;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
  if (in_stack_00000080 != 0) {
    _free(in_stack_00000088);
  }
  uVar9 = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x27 + 0x98) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x27 + 0x90) = uVar9;
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  puVar6 = (undefined4 *)_malloc(6);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar6 = unaff_w26;
    *(undefined2 *)(puVar6 + 1) = unaff_w21;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000080 = unaff_x29 + -0xa0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000068,s_authUrl_____108ade8f7,&stack0x00000080);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
    uVar9 = in_stack_00000070;
    lVar2 = in_stack_00000068;
    in_stack_00000080 = 0x12;
    FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000080,3,&UNK_108cf9cc0,1);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x27 + 0x98) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x27 + 0x90) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
    *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa0;
    *(undefined8 *)(unaff_x29 + -200) = unaff_x28;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0xd0);
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x98));
    }
    _free();
    if (lVar1 != 0) {
      _free(uVar4);
    }
    if (lVar2 != 0) {
      _free(uVar9);
    }
    lVar1 = *(long *)(unaff_x29 + -0x78);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
    func_0x000102167960(&stack0x00000050,uVar4,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                        &UNK_108cf9cc0,1);
    puVar7 = (undefined8 *)_malloc(0x1c);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x1c);
    }
    else {
      puVar7[1] = 0x7470677461686322;
      *puVar7 = 0x203a226570797422;
      *(undefined8 *)((long)puVar7 + 0x14) = 0x2c2265646f436563;
      *(undefined8 *)((long)puVar7 + 0xc) = 0x6976654474706774;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(undefined8 *)(unaff_x29 + -200) = 0;
      puVar6 = (undefined4 *)_malloc(6);
      if (puVar6 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
      }
      else {
        *puVar6 = unaff_w26;
        *(undefined2 *)(puVar6 + 1) = unaff_w21;
        *(undefined8 *)(unaff_x29 + -0x78) = 6;
        *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
        *(undefined8 *)(unaff_x29 + -0x68) = 6;
        in_stack_00000080 = unaff_x29 + -0xd0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xa0,s_loginId_____108ade8e7,&stack0x00000080);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        lVar2 = *(long *)(unaff_x29 + -0xa0);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x98);
        __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000080,&UNK_10b26ba80,1);
        *(long **)(unaff_x29 + -0xa0) = &stack0x00000080;
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x28;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
        if (in_stack_00000080 != 0) {
          _free(&DAT_102024cac);
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x27 + 0x98) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x27 + 0x90) = uVar10;
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0x88) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        puVar6 = (undefined4 *)_malloc(6);
        if (puVar6 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
        }
        else {
          *puVar6 = unaff_w26;
          *(undefined2 *)(puVar6 + 1) = unaff_w21;
          *(undefined8 *)(unaff_x29 + -0x78) = 6;
          *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
          *(undefined8 *)(unaff_x29 + -0x68) = 6;
          in_stack_00000080 = unaff_x29 + -0xa0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xd0,s_verificationUrl_____108ade908,&stack0x00000080);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          if (*(long *)(unaff_x29 + -0xa0) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x98));
          }
          lVar3 = *(long *)(unaff_x29 + -0xd0);
          uVar10 = *(undefined8 *)(unaff_x29 + -200);
          __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000080,&UNK_10b26ba90,1);
          *(long **)(unaff_x29 + -0xa0) = &stack0x00000080;
          *(undefined8 *)(unaff_x29 + -0x98) = unaff_x28;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
          if (in_stack_00000080 != 0) {
            _free(unaff_x28);
          }
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(undefined8 *)(unaff_x29 + -200) = 0;
          puVar6 = (undefined4 *)_malloc(6);
          if (puVar6 == (undefined4 *)0x0) {
            func_0x0001087c9084(1,6);
          }
          else {
            *puVar6 = unaff_w26;
            *(undefined2 *)(puVar6 + 1) = unaff_w21;
            *(undefined8 *)(unaff_x29 + -0x78) = 6;
            *(undefined4 **)(unaff_x29 + -0x70) = puVar6;
            *(undefined8 *)(unaff_x29 + -0x68) = 6;
            in_stack_00000080 = unaff_x29 + -0xa0;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xb8,s_userCode_____108ade921,&stack0x00000080);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            if (*(long *)(unaff_x29 + -0xa0) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x98));
            }
            in_stack_00000080 = 0x1c;
            uVar13 = *(undefined8 *)(unaff_x29 + -0xb0);
            lVar11 = *(long *)(unaff_x29 + -0xb8);
            FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000080,4,&UNK_108cf9cc0,1);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
            *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa0;
            *(undefined8 *)(unaff_x29 + -200) = unaff_x28;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0xd0);
            if (*(long *)(unaff_x29 + -0xa0) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x98));
            }
            _free(puVar7);
            if (lVar2 != 0) {
              _free(uVar9);
            }
            if (lVar3 != 0) {
              _free(uVar10);
            }
            if (lVar11 != 0) {
              _free(uVar13);
            }
            lVar2 = *(long *)(unaff_x29 + -0x78);
            uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
            func_0x000102167960(unaff_x29 + -0xd0,uVar9,*(undefined8 *)(unaff_x29 + -0x68),
                                &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
            puVar8 = (undefined8 *)_malloc(0x1c);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[1] = 0x7470677461686322;
              *puVar8 = 0x203a226570797422;
              *(undefined8 *)((long)puVar8 + 0x14) = 0x2c22736e656b6f54;
              *(undefined8 *)((long)puVar8 + 0xc) = 0x6874754174706774;
              *(undefined8 *)(unaff_x29 + -0x78) = 0x1c;
              *(undefined8 **)(unaff_x29 + -0x70) = puVar8;
              *(undefined8 *)(unaff_x29 + -0x68) = 0x1c;
              FUN_1021676b8(&stack0x00000080,unaff_x29 + -0x78,1,&UNK_108cf9cc0,1);
              *(undefined8 *)(unaff_x29 + -0x90) = 0x1c;
              *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa0;
              *(undefined8 *)(unaff_x29 + -0x80) = unaff_x28;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00000080,s_____108ab6fcb,unaff_x29 + -0x88);
              if (*(long *)(unaff_x29 + -0xa0) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x98));
              }
              _free(puVar8);
              lVar11 = in_stack_00000080;
              func_0x000102167960(unaff_x29 + -0x78,puVar7,0x1c,&UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
              uVar10 = in_stack_00000058;
              lVar3 = in_stack_00000050;
              in_stack_00000080 = in_stack_00000038;
              uVar14 = *(undefined8 *)(unaff_x29 + -0x70);
              lVar12 = *(long *)(unaff_x29 + -0x78);
              FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000080,4,&UNK_108cf9ded,3);
              uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
              unaff_x25[1] = *(undefined8 *)(unaff_x29 + -0x70);
              *unaff_x25 = uVar13;
              unaff_x25[2] = *(undefined8 *)(unaff_x29 + -0x68);
              if (in_stack_00000080 != 0) {
                _free(in_stack_00000040);
              }
              if (lVar3 != 0) {
                _free(uVar10);
              }
              if (in_stack_000000e0 != 0) {
                _free(in_stack_000000e8);
              }
              if (lVar12 != 0) {
                _free(uVar14);
              }
              if (lVar11 != 0) {
                _free(puVar7);
              }
              if (lVar2 != 0) {
                _free(uVar9);
              }
              if (lVar1 != 0) {
                _free(uVar4);
              }
              if (in_stack_00000028 != 0) {
                _free(in_stack_00000020);
              }
              return;
            }
            func_0x0001087c9084(1,0x1c);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101bfb71c);
  (*pcVar5)();
}

