
void FUN_101c20524(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 unaff_w21;
  undefined2 unaff_w22;
  undefined8 unaff_x24;
  undefined8 unaff_x28;
  long unaff_x29;
  long lVar13;
  undefined8 uVar14;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s_threadId_____108adeb3a,&stack0x00000048);
  if (*(long *)(unaff_x29 + -0x78) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x70));
  }
  lVar1 = *(long *)(unaff_x29 + -0xb0);
  uVar5 = *(undefined8 *)(unaff_x29 + -0xa8);
  __ZN5ts_rs11format_docs17hb661cfc57512c688E(&stack0x00000048,&UNK_10b26c590,2);
  *(undefined8 ***)(unaff_x29 + -0xb0) = &stack0x00000048;
  *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x28;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x78,s__108ac0bb6,unaff_x29 + -0xb0);
  if (in_stack_00000048 != (undefined8 *)0x0) {
    _free(in_stack_00000050);
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  puVar11 = (undefined8 *)_malloc(0x16);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x16);
  }
  else {
    puVar11[1] = 0x6f4d74757074754f;
    *puVar11 = 0x656d69746c616552;
    *(undefined8 *)((long)puVar11 + 0xe) = 0x7974696c61646f4d;
    *(undefined8 *)(unaff_x29 + -0x78) = 0x16;
    *(undefined8 **)(unaff_x29 + -0x70) = puVar11;
    *(undefined8 *)(unaff_x29 + -0x68) = 0x16;
    in_stack_00000048 = (undefined8 *)(unaff_x29 + -0xb0);
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000d8,s_outputModality_____108ae1ed1,&stack0x00000048);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    if (*(long *)(unaff_x29 + -0xb0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xa8));
    }
    puVar9 = in_stack_000000d8;
    in_stack_000000d8 = &UNK_108cfa0c4;
    func_0x0001021615a8(unaff_x29 + -0x78);
    in_stack_00000048 = &stack0x000000d8;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xb0,s_prompt_____108ae1ee9,&stack0x00000048);
    if (*(long *)(unaff_x29 + -0x78) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x70));
    }
    lVar2 = *(long *)(unaff_x29 + -0xb0);
    uVar6 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_000000d8 = &UNK_108cfa0c4;
    puVar12 = (undefined4 *)_malloc(6);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
    }
    else {
      *puVar12 = unaff_w21;
      *(undefined2 *)(puVar12 + 1) = unaff_w22;
      in_stack_00000048 = (undefined8 *)0x6;
      *(undefined8 ***)(unaff_x29 + -0xb0) = &stack0x00000048;
      *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x28;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xb0);
      if (in_stack_00000048 != (undefined8 *)0x0) {
        _free(puVar12);
      }
      in_stack_00000048 = &stack0x000000d8;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0xb0,s_realtimeSessionId_____108ae1ef8,&stack0x00000048);
      if (*(long *)(unaff_x29 + -0x78) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x70));
      }
      lVar3 = *(long *)(unaff_x29 + -0xb0);
      uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
      in_stack_000000d8 = &UNK_108cfa0c4;
      puVar11 = (undefined8 *)_malloc(0x1c);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x1c);
      }
      else {
        puVar11[1] = 0x7453656d69746c61;
        *puVar11 = 0x6552646165726854;
        *(undefined8 *)((long)puVar11 + 0x14) = 0x74726f70736e6172;
        *(undefined8 *)((long)puVar11 + 0xc) = 0x547472617453656d;
        in_stack_00000048 = (undefined8 *)0x1c;
        *(undefined8 ***)(unaff_x29 + -0xb0) = &stack0x00000048;
        *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x28;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xb0);
        if (in_stack_00000048 != (undefined8 *)0x0) {
          _free(puVar11);
        }
        in_stack_00000048 = &stack0x000000d8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xb0,s_transport_____108ae1f12,&stack0x00000048);
        if (*(long *)(unaff_x29 + -0x78) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x70));
        }
        lVar4 = *(long *)(unaff_x29 + -0xb0);
        uVar8 = *(undefined8 *)(unaff_x29 + -0xa8);
        in_stack_000000d8 = &UNK_108cfa0c4;
        puVar11 = (undefined8 *)_malloc(0xd);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = 0x656d69746c616552;
          *(undefined8 *)((long)puVar11 + 5) = 0x6563696f56656d69;
          in_stack_00000048 = (undefined8 *)0xd;
          *(undefined8 ***)(unaff_x29 + -0xb0) = &stack0x00000048;
          *(undefined8 *)(unaff_x29 + -0xa8) = unaff_x28;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s___null_108ae5e02,unaff_x29 + -0xb0);
          if (in_stack_00000048 != (undefined8 *)0x0) {
            _free(puVar11);
          }
          in_stack_00000048 = &stack0x000000d8;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x90,s_voice_____108ae1f24,&stack0x00000048);
          if (*(long *)(unaff_x29 + -0x78) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x70));
          }
          uVar14 = *(undefined8 *)(unaff_x29 + -0x88);
          lVar13 = *(long *)(unaff_x29 + -0x90);
          in_stack_00000048 = (undefined8 *)lVar1;
          FUN_1021676b8(unaff_x29 + -0x78,&stack0x00000048,6,&UNK_108cf9cc0,1);
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x70);
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x78);
          *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x68);
          in_stack_000000d8 = (undefined *)(unaff_x29 + -0xb0);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x78,s_____108ab6fcb,&stack0x000000d8);
          if (*(long *)(unaff_x29 + -0xb0) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0xa8));
          }
          if (lVar1 != 0) {
            _free(uVar5);
          }
          if (puVar9 != (undefined *)0x0) {
            _free(in_stack_000000e0);
          }
          if (lVar2 != 0) {
            _free(uVar6);
          }
          if (lVar3 != 0) {
            _free(uVar7);
          }
          if (lVar4 != 0) {
            _free(uVar8);
          }
          if (lVar13 != 0) {
            _free(uVar14);
          }
          lVar1 = *(long *)(unaff_x29 + -0x78);
          uVar5 = *(undefined8 *)(unaff_x29 + -0x70);
          func_0x000102167960(unaff_x24,uVar5,*(undefined8 *)(unaff_x29 + -0x68),&UNK_108cf9cc1,7,
                              &UNK_108cf9cc0,1);
          if (lVar1 != 0) {
            _free(uVar5);
          }
          return;
        }
        func_0x0001087c9084(1,0xd);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x101c20a0c);
  (*pcVar10)();
}

