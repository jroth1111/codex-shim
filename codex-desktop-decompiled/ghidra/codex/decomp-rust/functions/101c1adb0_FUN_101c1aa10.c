
void FUN_101c1aa10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long unaff_x29;
  long lVar13;
  undefined8 uVar14;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000068);
  }
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0xb8) = 1;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  puVar12 = (undefined4 *)_malloc(6);
  if (puVar12 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar12 = 0x69727473;
    *(undefined2 *)(puVar12 + 1) = 0x676e;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000060 = unaff_x29 + -0x90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xd0,s_processHandle_____108ae00e8,&stack0x00000060);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0x90) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x88));
    }
    lVar1 = *(long *)(unaff_x29 + -0xd0);
    uVar6 = *(undefined8 *)(unaff_x29 + -200);
    __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b26c180,1);
    *(long **)(unaff_x29 + -0x90) = &stack0x00000060;
    *(undefined8 *)(unaff_x29 + -0x88) = unaff_x27;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
    if (in_stack_00000060 != 0) {
      _free(unaff_x27);
    }
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0xb8) = 1;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    puVar12 = (undefined4 *)_malloc(6);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar12 = 0x626d756e;
      *(undefined2 *)(puVar12 + 1) = 0x7265;
      *(undefined8 *)(unaff_x29 + -0x78) = 6;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      in_stack_00000060 = unaff_x29 + -0x90;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xd0,s_exitCode_____108ae0c02,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      if (*(long *)(unaff_x29 + -0x90) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x88));
      }
      lVar2 = *(long *)(unaff_x29 + -0xd0);
      uVar7 = *(undefined8 *)(unaff_x29 + -200);
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b26c310,3);
      *(long **)(unaff_x29 + -0x90) = &stack0x00000060;
      *(undefined8 *)(unaff_x29 + -0x88) = unaff_x27;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
      if (in_stack_00000060 != 0) {
        _free(unaff_x27);
      }
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0;
      puVar12 = (undefined4 *)_malloc(6);
      if (puVar12 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
      }
      else {
        *puVar12 = 0x69727473;
        *(undefined2 *)(puVar12 + 1) = 0x676e;
        *(undefined8 *)(unaff_x29 + -0x78) = 6;
        *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
        *(undefined8 *)(unaff_x29 + -0x68) = 6;
        in_stack_00000060 = unaff_x29 + -0x90;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xd0,s_stdout_____108ae0c14,&stack0x00000060);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0x90) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x88));
        }
        lVar3 = *(long *)(unaff_x29 + -0xd0);
        uVar8 = *(undefined8 *)(unaff_x29 + -200);
        __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b26c340,4);
        *(long **)(unaff_x29 + -0x90) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -0x88) = unaff_x27;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
        if (in_stack_00000060 != 0) {
          _free(unaff_x27);
        }
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined8 *)(unaff_x29 + -0xb8) = 1;
        *(undefined8 *)(unaff_x29 + -0xb0) = 0;
        puVar12 = (undefined4 *)_malloc(7);
        if (puVar12 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,7);
        }
        else {
          *puVar12 = 0x6c6f6f62;
          *(undefined4 *)((long)puVar12 + 3) = 0x6e61656c;
          *(undefined8 *)(unaff_x29 + -0x78) = 7;
          *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
          *(undefined8 *)(unaff_x29 + -0x68) = 7;
          in_stack_00000060 = unaff_x29 + -0x90;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xd0,s_stdoutCapReached_____108ae174b,&stack0x00000060);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          if (*(long *)(unaff_x29 + -0x90) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x88));
          }
          lVar4 = *(long *)(unaff_x29 + -0xd0);
          uVar9 = *(undefined8 *)(unaff_x29 + -200);
          __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b26c380,3);
          *(long **)(unaff_x29 + -0x90) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0x88) = unaff_x27;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
          if (in_stack_00000060 != 0) {
            _free(unaff_x27);
          }
          *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
          *(undefined8 *)(unaff_x29 + -0xb8) = 1;
          *(undefined8 *)(unaff_x29 + -0xb0) = 0;
          puVar12 = (undefined4 *)_malloc(6);
          if (puVar12 == (undefined4 *)0x0) {
            func_0x0001087c9084(1,6);
          }
          else {
            *puVar12 = 0x69727473;
            *(undefined2 *)(puVar12 + 1) = 0x676e;
            *(undefined8 *)(unaff_x29 + -0x78) = 6;
            *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
            *(undefined8 *)(unaff_x29 + -0x68) = 6;
            in_stack_00000060 = unaff_x29 + -0x90;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0xd0,s_stderr_____108ae0c24,&stack0x00000060);
            if (*(long *)(unaff_x29 + -0x78) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x70));
            }
            if (*(long *)(unaff_x29 + -0x90) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x88));
            }
            lVar5 = *(long *)(unaff_x29 + -0xd0);
            uVar10 = *(undefined8 *)(unaff_x29 + -200);
            __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b26c3b0,4);
            *(long **)(unaff_x29 + -0x90) = &stack0x00000060;
            *(undefined8 *)(unaff_x29 + -0x88) = unaff_x27;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0x90);
            if (in_stack_00000060 != 0) {
              _free(unaff_x27);
            }
            *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
            *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
            *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
            *(undefined8 *)(unaff_x29 + -0xd0) = 1;
            *(undefined8 *)(unaff_x29 + -200) = 0;
            puVar12 = (undefined4 *)_malloc(7);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = 0x6c6f6f62;
              *(undefined4 *)((long)puVar12 + 3) = 0x6e61656c;
              *(undefined8 *)(unaff_x29 + -0x78) = 7;
              *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
              *(undefined8 *)(unaff_x29 + -0x68) = 7;
              in_stack_00000060 = unaff_x29 + -0x90;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xa8,s_stderrCapReached_____108ae1765,&stack0x00000060);
              if (*(long *)(unaff_x29 + -0x78) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x70));
              }
              if (*(long *)(unaff_x29 + -0x90) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x88));
              }
              uVar14 = *(undefined8 *)(unaff_x29 + -0xa0);
              lVar13 = *(long *)(unaff_x29 + -0xa8);
              in_stack_00000060 = lVar1;
              FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,6,&UNK_108cf9cc0,1);
              *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x70);
              *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x78);
              *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
              *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x90;
              *(undefined8 *)(unaff_x29 + -200) = unaff_x27;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0xd0);
              if (*(long *)(unaff_x29 + -0x90) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x88));
              }
              if (lVar1 != 0) {
                _free(uVar6);
              }
              if (lVar2 != 0) {
                _free(uVar7);
              }
              if (lVar3 != 0) {
                _free(uVar8);
              }
              if (lVar4 != 0) {
                _free(uVar9);
              }
              if (lVar5 != 0) {
                _free(uVar10);
              }
              if (lVar13 != 0) {
                _free(uVar14);
              }
              lVar1 = *(long *)(unaff_x29 + -0x78);
              uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
              func_0x000102167960(unaff_x25,uVar6,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,
                                  7,&UNK_108cf9cc0,1);
              if (lVar1 != 0) {
                _free(uVar6);
              }
              return;
            }
            func_0x0001087c9084(1,7);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x101c1b0e4);
  (*pcVar11)();
}

