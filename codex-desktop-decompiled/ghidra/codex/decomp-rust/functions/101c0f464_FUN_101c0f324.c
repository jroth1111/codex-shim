
void FUN_101c0f324(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_x20;
  undefined1 unaff_w21;
  undefined8 unaff_x22;
  long *plVar11;
  undefined8 unaff_x26;
  long unaff_x29;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long in_stack_00000030;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
  if (in_stack_00000060 != (undefined8 *)0x0) {
    _free(in_stack_00000068);
  }
  in_stack_00000060 = &stack0x00000030;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xc0,s__meta_____108adf736,&stack0x00000060);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xc0);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xb8);
  in_stack_00000030 = 1;
  puVar8 = (undefined4 *)_malloc(6);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar8 = 0x69727473;
    *(undefined2 *)(puVar8 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000060 = &stack0x00000030;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xc0,s_message_____108ae0753,&stack0x00000060);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0xc0);
    uVar5 = *(undefined8 *)(unaff_x29 + -0xb8);
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    puVar9 = (undefined8 *)_malloc(0x14);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x14);
    }
    else {
      *(undefined4 *)(puVar9 + 2) = 0x616d6568;
      puVar9[1] = 0x63536e6f69746174;
      *puVar9 = 0x6963696c4570634d;
      *(undefined8 *)(unaff_x29 + -0x78) = 0x14;
      *(undefined8 **)(unaff_x29 + -0x70) = puVar9;
      *(undefined8 *)(unaff_x29 + -0x68) = 0x14;
      in_stack_00000060 = (undefined8 *)(unaff_x29 + -0xc0);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000048,s_requestedSchema_____108ae0763,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      uVar15 = in_stack_00000050;
      lVar13 = in_stack_00000048;
      in_stack_00000060 = (undefined8 *)0xf;
      FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,4,&UNK_108cf9cc0,1);
      *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
      in_stack_00000030 = unaff_x29 + -0xc0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x00000030);
      if (*(long *)(unaff_x29 + -0xc0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xb8));
      }
      _free();
      if (lVar1 != 0) {
        _free(uVar4);
      }
      if (lVar2 != 0) {
        _free(uVar5);
      }
      if (lVar13 != 0) {
        _free(uVar15);
      }
      lVar1 = *(long *)(unaff_x29 + -0x78);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
      func_0x000102167960(&stack0x00000030,uVar4,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7
                          ,&UNK_108cf9cc0,1);
      puVar9 = (undefined8 *)_malloc(0xe);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0xe);
      }
      else {
        *puVar9 = 0x203a2265646f6d22;
        *(undefined8 *)((long)puVar9 + 6) = 0x2c226c727522203a;
        *(undefined8 *)(unaff_x29 + -0x88) = 1;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        puVar10 = (undefined8 *)_malloc(9);
        if (puVar10 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,9);
        }
        else {
          *puVar10 = unaff_x20;
          *(undefined1 *)(puVar10 + 1) = unaff_w21;
          in_stack_00000060 = (undefined8 *)0x9;
          *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xc0);
          if (in_stack_00000060 != (undefined8 *)0x0) {
            _free(puVar10);
          }
          in_stack_00000060 = (undefined8 *)(unaff_x29 + -0x88);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xc0,s__meta_____108adf736,&stack0x00000060);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          lVar2 = *(long *)(unaff_x29 + -0xc0);
          uVar5 = *(undefined8 *)(unaff_x29 + -0xb8);
          *(undefined8 *)(unaff_x29 + -0x88) = 1;
          *(undefined8 *)(unaff_x29 + -0x80) = 0;
          puVar8 = (undefined4 *)_malloc(6);
          if (puVar8 == (undefined4 *)0x0) {
            func_0x0001087c9084(1,6);
          }
          else {
            *puVar8 = 0x69727473;
            *(undefined2 *)(puVar8 + 1) = 0x676e;
            *(undefined8 *)(unaff_x29 + -0x78) = 6;
            *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
            *(undefined8 *)(unaff_x29 + -0x68) = 6;
            in_stack_00000060 = (undefined8 *)(unaff_x29 + -0x88);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xc0,s_message_____108ae0753,&stack0x00000060);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            lVar13 = *(long *)(unaff_x29 + -0xc0);
            uVar15 = *(undefined8 *)(unaff_x29 + -0xb8);
            *(undefined8 *)(unaff_x29 + -0x88) = 1;
            *(undefined8 *)(unaff_x29 + -0x80) = 0;
            puVar8 = (undefined4 *)_malloc(6);
            if (puVar8 == (undefined4 *)0x0) {
              func_0x0001087c9084(1,6);
            }
            else {
              *puVar8 = 0x69727473;
              *(undefined2 *)(puVar8 + 1) = 0x676e;
              *(undefined8 *)(unaff_x29 + -0x78) = 6;
              *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
              *(undefined8 *)(unaff_x29 + -0x68) = 6;
              in_stack_00000060 = (undefined8 *)(unaff_x29 + -0x88);
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xc0,s_url_____108ae077b,&stack0x00000060);
              if (*(long *)(unaff_x29 + -0x78) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x70));
              }
              lVar3 = *(long *)(unaff_x29 + -0xc0);
              uVar6 = *(undefined8 *)(unaff_x29 + -0xb8);
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(undefined8 *)(unaff_x29 + -0xb8) = 0;
              puVar8 = (undefined4 *)_malloc(6);
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = 0x69727473;
                *(undefined2 *)(puVar8 + 1) = 0x676e;
                *(undefined8 *)(unaff_x29 + -0x78) = 6;
                *(undefined4 **)(unaff_x29 + -0x70) = puVar8;
                *(undefined8 *)(unaff_x29 + -0x68) = 6;
                in_stack_00000060 = (undefined8 *)(unaff_x29 + -0xc0);
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (unaff_x29 + -0xa0,s_elicitationId_____108ae0787,&stack0x00000060);
                if (*(long *)(unaff_x29 + -0x78) != 0) {
                  _free(*(undefined8 *)(unaff_x29 + -0x70));
                }
                in_stack_00000060 = (undefined8 *)0xe;
                uVar14 = *(undefined8 *)(unaff_x29 + -0x98);
                lVar12 = *(long *)(unaff_x29 + -0xa0);
                FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,5,&UNK_108cf9cc0,1);
                plVar11 = (long *)(unaff_x29 + -0x78);
                *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x70);
                *(long *)(unaff_x29 + -0xc0) = *plVar11;
                *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
                *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xc0;
                *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0x88);
                if (*(long *)(unaff_x29 + -0xc0) != 0) {
                  _free(*(undefined8 *)(unaff_x29 + -0xb8));
                }
                _free(puVar9);
                if (lVar2 != 0) {
                  _free(uVar5);
                }
                if (lVar13 != 0) {
                  _free(uVar15);
                }
                if (lVar3 != 0) {
                  _free(uVar6);
                }
                if (lVar12 != 0) {
                  _free(uVar14);
                }
                lVar2 = *(long *)(unaff_x29 + -0x78);
                uVar5 = *(undefined8 *)(unaff_x29 + -0x70);
                func_0x000102167960(unaff_x29 + -0x78,uVar5,*(undefined8 *)(unaff_x29 + -0x68),
                                    &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
                in_stack_00000060 = (undefined8 *)in_stack_00000030;
                uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
                lVar13 = *plVar11;
                FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,2,&UNK_108cf9ded,3);
                *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x70);
                *(long *)(unaff_x29 + -0xc0) = *plVar11;
                *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
                *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xc0;
                *(undefined8 *)(unaff_x29 + -0x70) = unaff_x26;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (unaff_x22,s_____108abe98a,unaff_x29 + -0x78);
                if (*(long *)(unaff_x29 + -0xc0) != 0) {
                  _free(*(undefined8 *)(unaff_x29 + -0xb8));
                }
                if (in_stack_00000060 != (undefined8 *)0x0) {
                  _free(unaff_x26);
                }
                if (lVar13 != 0) {
                  _free(uVar15);
                }
                if (lVar2 != 0) {
                  _free(uVar5);
                }
                if (lVar1 != 0) {
                  _free(uVar4);
                }
                return;
              }
              func_0x0001087c9084(1,6);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c0f9cc);
  (*pcVar7)();
}

