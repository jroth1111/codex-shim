
void FUN_101c8d384(void)

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
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined2 unaff_w21;
  undefined4 unaff_w25;
  undefined8 unaff_x28;
  long unaff_x29;
  long lVar13;
  undefined8 uVar14;
  long in_stack_00000060;

  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xa0,s_threadId_____108adeb3a,&stack0x00000060);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xa0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  puVar12 = (undefined4 *)_malloc(6);
  if (puVar12 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
  }
  else {
    *puVar12 = unaff_w25;
    *(undefined2 *)(puVar12 + 1) = unaff_w21;
    *(undefined8 *)(unaff_x29 + -0x78) = 6;
    *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
    *(undefined8 *)(unaff_x29 + -0x68) = 6;
    in_stack_00000060 = unaff_x29 + -0xd0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xa0,s_turnId_____108adeb4b,&stack0x00000060);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0xa0);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xd0) = 1;
    *(undefined8 *)(unaff_x29 + -200) = 0;
    puVar12 = (undefined4 *)_malloc(6);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar12 = unaff_w25;
      *(undefined2 *)(puVar12 + 1) = unaff_w21;
      *(undefined8 *)(unaff_x29 + -0x78) = 6;
      *(undefined4 **)(unaff_x29 + -0x70) = puVar12;
      *(undefined8 *)(unaff_x29 + -0x68) = 6;
      in_stack_00000060 = unaff_x29 + -0xd0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xa0,s_itemId_____108ae0673,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      lVar3 = *(long *)(unaff_x29 + -0xa0);
      uVar8 = *(undefined8 *)(unaff_x29 + -0x98);
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b270128,1);
      *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
      if (in_stack_00000060 != 0) {
        _free(unaff_x20);
      }
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(undefined8 *)(unaff_x29 + -200) = 0;
      in_stack_00000060 = unaff_x29 + -0xa0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s_startedAtMs___number__108adec1e,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0xa0) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x98));
      }
      lVar4 = *(long *)(unaff_x29 + -0x78);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
      __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b270138,1);
      *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
      if (in_stack_00000060 != 0) {
        _free(unaff_x19);
      }
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      puVar12 = (undefined4 *)_malloc(6);
      if (puVar12 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
      }
      else {
        *puVar12 = unaff_w25;
        *(undefined2 *)(puVar12 + 1) = unaff_w21;
        in_stack_00000060 = 6;
        *(long **)(unaff_x29 + -0xd0) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -200) = unaff_x19;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xd0);
        if (in_stack_00000060 != 0) {
          _free(puVar12);
        }
        in_stack_00000060 = unaff_x29 + -0xa0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xd0,s_reason_____108ae267b,&stack0x00000060);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        if (*(long *)(unaff_x29 + -0xa0) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x98));
        }
        lVar5 = *(long *)(unaff_x29 + -0xd0);
        uVar10 = *(undefined8 *)(unaff_x29 + -200);
        __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000060,&UNK_10b270148,2);
        *(long **)(unaff_x29 + -0xa0) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xa0);
        if (in_stack_00000060 != 0) {
          _free(unaff_x19);
        }
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined **)(unaff_x29 + -0x88) = &UNK_108cfa0c4;
        *(undefined8 *)(unaff_x29 + -0x80) = 1;
        puVar12 = (undefined4 *)_malloc(6);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = unaff_w25;
          *(undefined2 *)(puVar12 + 1) = unaff_w21;
          in_stack_00000060 = 6;
          *(long **)(unaff_x29 + -0xd0) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -200) = unaff_x19;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xd0);
          if (in_stack_00000060 != 0) {
            _free(puVar12);
          }
          in_stack_00000060 = unaff_x29 + -0xa0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xb8,s_grantRoot_____108ae268b,&stack0x00000060);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          if (*(long *)(unaff_x29 + -0xa0) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x98));
          }
          uVar14 = *(undefined8 *)(unaff_x29 + -0xb0);
          lVar13 = *(long *)(unaff_x29 + -0xb8);
          in_stack_00000060 = lVar1;
          FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000060,6,&UNK_108cf9cc0,1);
          *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x70);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x68);
          *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xa0;
          *(undefined8 *)(unaff_x29 + -200) = unaff_x19;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s_____108ab6fcb,unaff_x29 + -0xd0);
          if (*(long *)(unaff_x29 + -0xa0) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x98));
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
          func_0x000102167960(unaff_x28,uVar6,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                              &UNK_108cf9cc0,1);
          if (lVar1 != 0) {
            _free(uVar6);
          }
          return;
        }
        func_0x0001087c9084(1,6);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x101c8d8e4);
  (*pcVar11)();
}
