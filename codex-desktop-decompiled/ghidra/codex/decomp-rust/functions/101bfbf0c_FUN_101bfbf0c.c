
void FUN_101bfbf0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  undefined2 unaff_w22;
  undefined4 unaff_w25;
  undefined8 unaff_x26;
  long unaff_x29;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s_command_____108ade9ae,&stack0x00000060);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xa0);
  uVar4 = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xb8) = 1;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  puVar7 = (undefined4 *)_malloc(6);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar7 = unaff_w25;
    *(undefined2 *)(puVar7 + 1) = unaff_w22;
    in_stack_00000060 = 6;
    *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xa0);
    if (in_stack_00000060 != 0) {
      _free(puVar7);
    }
    in_stack_00000060 = unaff_x29 + -0xb8;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xa0,s_commandWindows_____108ade9be,&stack0x00000060);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0xa0);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xb8) = 1;
    *(undefined8 *)(unaff_x29 + -0xb0) = 0;
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar7 = 0x69676962;
      *(undefined2 *)(puVar7 + 1) = 0x746e;
      in_stack_00000060 = 6;
      *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xa0);
      if (in_stack_00000060 != 0) {
        _free(puVar7);
      }
      in_stack_00000060 = unaff_x29 + -0xb8;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xa0,s_timeoutSec_____108ade9d5,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      lVar3 = *(long *)(unaff_x29 + -0xa0);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(undefined8 *)(unaff_x29 + -0xb0) = 0;
      puVar7 = (undefined4 *)_malloc(7);
      if (puVar7 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,7);
      }
      else {
        *puVar7 = 0x6c6f6f62;
        *(undefined4 *)((long)puVar7 + 3) = 0x6e61656c;
        *(undefined8 *)(unaff_x29 + -0x78) = 7;
        *(undefined4 **)(unaff_x29 + -0x70) = puVar7;
        *(undefined8 *)(unaff_x29 + -0x68) = 7;
        in_stack_00000060 = unaff_x29 + -0xb8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xa0,s_async_____108ade9e8,&stack0x00000060);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        lVar9 = *(long *)(unaff_x29 + -0xa0);
        uVar12 = *(undefined8 *)(unaff_x29 + -0x98);
        *(undefined8 *)(unaff_x29 + -0xb8) = 1;
        *(undefined8 *)(unaff_x29 + -0xb0) = 0;
        puVar7 = (undefined4 *)_malloc(6);
        if (puVar7 == (undefined4 *)0x0) {
          func_0x0001087c9084(1,6);
        }
        else {
          *puVar7 = unaff_w25;
          *(undefined2 *)(puVar7 + 1) = unaff_w22;
          in_stack_00000060 = 6;
          *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0x98) = unaff_x26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xa0);
          if (in_stack_00000060 != 0) {
            _free(puVar7);
          }
          in_stack_00000060 = unaff_x29 + -0xb8;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xd0,s_statusMessage_____108ade9f6,&stack0x00000060);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          in_stack_00000060 = 0x12;
          FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,6,&UNK_108cf9cc0,1);
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
          *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
          *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0xb8);
          if (*(long *)(unaff_x29 + -0xa0) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x98));
          }
          _free(in_stack_00000040);
          if (lVar1 != 0) {
            _free(uVar4);
          }
          if (lVar2 != 0) {
            _free(uVar5);
          }
          if (lVar3 != 0) {
            _free(uVar11);
          }
          if (lVar9 != 0) {
            _free(uVar12);
          }
          if (in_stack_000000f0 != 0) {
            _free(in_stack_000000f8);
          }
          lVar1 = *(long *)(unaff_x29 + -0x78);
          uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
          func_0x000102167960(&stack0x00000048,uVar4,*(undefined8 *)(unaff_x29 + -0x68),
                              &UNK_108cf9cc1,7,&UNK_108cf9cc0,1);
          puVar8 = (undefined8 *)_malloc(0x11);
          if (puVar8 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x11);
          }
          else {
            *(undefined1 *)(puVar8 + 2) = 0x2c;
            puVar8[1] = 0x2274706d6f727022;
            *puVar8 = 0x203a226570797422;
            *(undefined8 *)(unaff_x29 + -0x78) = 0x11;
            *(undefined8 **)(unaff_x29 + -0x70) = puVar8;
            *(undefined8 *)(unaff_x29 + -0x68) = 0x11;
            FUN_1021676b8(&stack0x00000060,unaff_x29 + -0x78,1,&UNK_108cf9cc0,1);
            *(undefined8 *)(unaff_x29 + -0x90) = 0x12;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
            *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x26;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000060,s_____108ab6fcb,unaff_x29 + -0xb8);
            if (*(long *)(unaff_x29 + -0xa0) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x98));
            }
            _free(puVar8);
            lVar2 = in_stack_00000060;
            func_0x000102167960(unaff_x29 + -0xb8,in_stack_00000040,0x12,&UNK_108cf9cc1,7,
                                &UNK_108cf9cc0,1);
            puVar8 = (undefined8 *)_malloc(0x10);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[1] = 0x2c22746e65676122;
              *puVar8 = 0x203a226570797422;
              *(undefined8 *)(unaff_x29 + -0x78) = 0x10;
              *(undefined8 **)(unaff_x29 + -0x70) = puVar8;
              *(undefined8 *)(unaff_x29 + -0x68) = 0x10;
              FUN_1021676b8(&stack0x00000060,unaff_x29 + -0x78,1,&UNK_108cf9cc0,1);
              *(undefined8 *)(unaff_x29 + -0x90) = 0x12;
              *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xa0;
              *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00000060,s_____108ab6fcb,unaff_x29 + -0x88);
              if (*(long *)(unaff_x29 + -0xa0) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x98));
              }
              _free(puVar8);
              lVar3 = in_stack_00000060;
              func_0x000102167960(unaff_x29 + -0x78,in_stack_00000040,0x12,&UNK_108cf9cc1,7,
                                  &UNK_108cf9cc0,1);
              uVar5 = in_stack_00000050;
              in_stack_00000060 = in_stack_00000048;
              uVar12 = *(undefined8 *)(unaff_x29 + -0xb0);
              lVar9 = *(long *)(unaff_x29 + -0xb8);
              uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
              lVar10 = *(long *)(unaff_x29 + -0x78);
              FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,3,&UNK_108cf9ded,3);
              uVar11 = *(undefined8 *)(unaff_x29 + -0x78);
              unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0x70);
              *unaff_x19 = uVar11;
              unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0x68);
              if (in_stack_00000060 != 0) {
                _free(uVar5);
              }
              if (lVar9 != 0) {
                _free(uVar12);
              }
              if (lVar10 != 0) {
                _free(uVar13);
              }
              if (lVar3 != 0) {
                _free(in_stack_00000040);
              }
              if (lVar2 != 0) {
                _free(in_stack_00000040);
              }
              if (lVar1 != 0) {
                _free(uVar4);
              }
              return;
            }
            func_0x0001087c9084(1,0x10);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101bfc560);
  (*pcVar6)();
}

