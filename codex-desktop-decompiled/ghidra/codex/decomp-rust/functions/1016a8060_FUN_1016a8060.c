
/* WARNING: Removing unreachable block (ram,0x0001016a8390) */

undefined8 FUN_1016a8060(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  long *plVar11;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 in_stack_00000000;
  long in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a88;
  undefined8 in_stack_00000a90;
  undefined8 in_stack_00000a98;
  undefined8 in_stack_00000aa0;
  undefined7 in_stack_00000aa9;
  undefined7 in_stack_00000ac1;
  undefined4 in_stack_00000ac8;
  long in_stack_00001388;
  undefined8 in_stack_000013b8;
  undefined8 in_stack_00001498;
  undefined8 in_stack_000014a0;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s__108acc73f,param_3);
    *(long *)(unaff_x29 + -0xf8) = in_stack_00000078;
    *(undefined8 *)(unaff_x29 + -0x100) = in_stack_00000070;
    *(long *)(unaff_x29 + -0xf0) = in_stack_00000080;
    *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000a60;
    *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000a58;
    *(undefined8 *)(unaff_x29 + -0xe0) = 0x8000000000000000;
    *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_000014a0;
    *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00001498;
    FUN_100cdd63c(&stack0x00000a20);
    lVar7 = extraout_x1;
    if (*(long *)(unaff_x29 + -0x90) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0x88));
      lVar7 = extraout_x1_00;
    }
    if (*(long *)(unaff_x29 + -0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xa0));
      lVar7 = extraout_x1_01;
    }
    unaff_x20[-0xf] = in_stack_00000060;
    unaff_x20[-0xe] = in_stack_00000058;
    unaff_x20[-0xd] = in_stack_00000060;
    unaff_x20[-0xc] = 2;
    unaff_x20[-0xb] = unaff_x25;
    unaff_x20[-10] = 2;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
    unaff_x20[-8] = *(undefined8 *)(unaff_x29 + -0xb8);
    unaff_x20[-9] = uVar12;
    unaff_x20[-7] = uVar9;
    unaff_x20[-6] = unaff_x26;
    unaff_x20[-5] = unaff_x27;
    unaff_x20[-4] = unaff_x26;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar9 = *(undefined8 *)(unaff_x29 + -0xe0);
    unaff_x20[-1] = *(undefined8 *)(unaff_x29 + -0xd0);
    unaff_x20[-2] = uVar12;
    unaff_x20[-3] = uVar9;
    uVar12 = *(undefined8 *)(unaff_x29 + -0xf8);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x100);
    unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0xf0);
    unaff_x20[1] = uVar12;
    *unaff_x20 = uVar9;
    unaff_x20[5] = in_stack_00000a90;
    unaff_x20[4] = in_stack_00000a88;
    unaff_x20[3] = 0x8000000000000000;
    unaff_x20[7] = in_stack_00000aa0;
    unaff_x20[6] = in_stack_00000a98;
    unaff_x20[8] = CONCAT71(in_stack_00000aa9,2);
    unaff_x20[9] = 0;
    *(undefined4 *)(unaff_x20 + 0xc) = in_stack_00000ac8;
    unaff_x20[0xb] = CONCAT71(in_stack_00000ac1,0x1b);
    unaff_x20[10] = in_stack_000013b8;
    *(undefined1 *)((long)unaff_x20 + 100) = in_stack_00000048._4_1_;
    *(undefined4 *)((long)unaff_x20 + 0x65) = 0x10000;
    in_stack_00000050 = in_stack_00000050 + 1;
    plVar1 = unaff_x21 + 3;
    unaff_x20 = unaff_x20 + 0x1d;
    if (in_stack_00000028 == in_stack_00000050) {
      if (in_stack_00001388 != 0) {
        _free(in_stack_00000000);
      }
      uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
      puVar5 = (undefined8 *)_malloc(9);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar5 + 1) = 0x73;
        *puVar5 = 0x746e656761627553;
        __ZN9codex_tui3app16agent_navigation20AgentNavigationState15picker_subtitle17h83e197fc9e0d3cbcE
                  (&stack0x000009f0);
        __ZN9codex_tui11bottom_pane12popup_consts24standard_popup_hint_line17he433a102d0f5721dE
                  (&stack0x000009f0);
        in_stack_000000e8 = 9;
        in_stack_00000108 = 0x8000000000000000;
        in_stack_00000128 = CONCAT71(in_stack_00000aa9,2);
        in_stack_000000a0 = 0;
        in_stack_00000098 = 8;
        in_stack_00000090 = 0;
        in_stack_000000b8 = in_stack_00000028;
        in_stack_000000d0 = 0;
        in_stack_000000d8 = 9;
        in_stack_000000c8 = 8;
        in_stack_000000c0 = 0;
        in_stack_00000168 = 0x8000000000000000;
        in_stack_00000180 = 0x8000000000000000;
        in_stack_00000198 = 1;
        in_stack_00000070 = 0;
        in_stack_00000080 = in_stack_00000040;
        in_stack_00000088 = in_stack_00000038;
        in_stack_000001a0 = &UNK_10b36b5e8;
        in_stack_000001a8 = 1;
        in_stack_000001b0 = &UNK_10b36b5e8;
        in_stack_000001b8 = 0;
        in_stack_000001c8 = 0;
        in_stack_000001d8 = 0;
        in_stack_000001e8 = 0;
        in_stack_000000e0 = puVar5;
        in_stack_000000f0 = 0;
        in_stack_000000f8 = unaff_x22;
        in_stack_00000100 = 0;
        in_stack_00000130 = 0;
        in_stack_00000138 = 0;
        in_stack_00000140 = unaff_x22;
        in_stack_00000148 = 0;
        in_stack_00000150 = 0;
        in_stack_00000158 = 8;
        in_stack_00000160 = 0;
        __ZN9codex_tui10chatwidget11interaction51__LT_impl_u20_codex_tui__chatwidget__ChatWidget_GT_19show_selection_view17hb8bbdc6098a34dc8E
                  (uVar9,&stack0x00000070);
        lVar7 = 1;
        lVar6 = 8;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_100e46760(lVar6);
          lVar6 = lVar6 + 0xe8;
        }
        *(undefined1 *)(unaff_x19 + 0xa00) = 0;
        *(undefined1 *)(unaff_x19 + 0xa01) = 1;
        return 0;
      }
      func_0x0001087c9084(1,9);
      goto LAB_1016a8438;
    }
    lVar6 = *plVar1;
    lVar2 = unaff_x21[4];
    if ((*(char *)(in_stack_00000068 + 0xe1d) == '\x01') &&
       (*in_stack_00000030 == lVar6 && in_stack_00000030[1] == lVar2)) {
      in_stack_00000040 = 1;
      in_stack_00000038 = in_stack_00000050;
    }
    if (*(char *)(in_stack_00000068 + 0xe2e) == '\x01') {
      plVar11 = (long *)unaff_x21[5];
      if (*plVar11 != -0x8000000000000000) goto LAB_1016a7e64;
LAB_1016a7e90:
      lVar4 = 0;
      if (plVar11[3] == -0x8000000000000000) goto LAB_1016a7ea0;
LAB_1016a7e74:
      lVar8 = plVar11[4];
    }
    else {
      plVar11 = (long *)unaff_x21[5];
      if (*plVar11 == -0x8000000000000000) goto LAB_1016a7e90;
LAB_1016a7e64:
      lVar4 = plVar11[1];
      lVar7 = plVar11[2];
      if (plVar11[3] != -0x8000000000000000) goto LAB_1016a7e74;
LAB_1016a7ea0:
      lVar8 = 0;
    }
    __ZN9codex_tui12multi_agents29format_agent_picker_item_name17h4ddd0ba5bf3f65eeE
              (unaff_x29 + -0xa8,lVar4,lVar7,lVar8);
    in_stack_00000070 = 0;
    in_stack_00000078 = 1;
    in_stack_00000080 = 0;
    FUN_10624142c(&stack0x000009f0,plVar1,0);
    FUN_108855060(&stack0x00000070,0,0x24,1,1);
    puVar5 = (undefined8 *)(in_stack_00000078 + in_stack_00000080);
    puVar5[1] = unaff_x22;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 4) = 8;
    *(long *)(unaff_x29 + -0x80) = in_stack_00000080 + 0x24;
    *(long *)(unaff_x29 + -0x88) = in_stack_00000078;
    *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000070;
    uVar9 = *(undefined8 *)(unaff_x29 + -0xa0);
    in_stack_00000060 = *(long *)(unaff_x29 + -0x98);
    if (in_stack_00000060 == 0) {
      in_stack_00000058 = 1;
    }
    else {
      in_stack_00000058 = _malloc();
      if (in_stack_00000058 == 0) {
        func_0x0001087c9084(1,in_stack_00000060);
        goto LAB_1016a8438;
      }
    }
    _memcpy(in_stack_00000058,uVar9,in_stack_00000060);
    lVar7 = plVar11[6];
    unaff_x25 = (undefined8 *)_malloc(0x50);
    if (unaff_x25 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x50);
      goto LAB_1016a8438;
    }
    uVar10 = 0x13;
    if ((char)lVar7 == '\0') {
      uVar10 = 3;
    }
    *unaff_x25 = 0x8000000000000000;
    unaff_x25[1] = &UNK_108ee0bac;
    unaff_x25[2] = 3;
    *(undefined4 *)(unaff_x25 + 3) = uVar10;
    *(undefined1 *)((long)unaff_x25 + 0x1c) = 0x13;
    *(undefined1 *)(unaff_x25 + 4) = 0x13;
    *(undefined4 *)((long)unaff_x25 + 0x24) = 0;
    unaff_x25[5] = 0x8000000000000000;
    unaff_x25[6] = &UNK_108ee0aa7;
    unaff_x25[7] = 1;
    *(undefined1 *)(unaff_x25 + 8) = 0x13;
    *(undefined1 *)((long)unaff_x25 + 0x44) = 0x13;
    *(undefined1 *)(unaff_x25 + 9) = 0x13;
    *(undefined4 *)((long)unaff_x25 + 0x4c) = 0;
    unaff_x27 = 1;
    uVar9 = *(undefined8 *)(unaff_x29 + -0x88);
    unaff_x26 = *(long *)(unaff_x29 + -0x80);
    if ((unaff_x26 != 0) && (unaff_x27 = _malloc(unaff_x26), unaff_x27 == 0)) {
      func_0x0001087c9084(1,unaff_x26);
      goto LAB_1016a8438;
    }
    _memcpy(unaff_x27,uVar9,unaff_x26);
    if (*(char *)(in_stack_00000068 + 0xe1d) == '\x01') {
      in_stack_00000048._4_1_ = *in_stack_00000030 == lVar6 && in_stack_00000030[1] == lVar2;
    }
    else {
      in_stack_00000048._4_1_ = false;
    }
    puVar5 = (undefined8 *)_malloc(0x10);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x10);
      goto LAB_1016a8438;
    }
    plVar11 = (long *)_malloc(0x10);
    if (plVar11 == (long *)0x0) {
      func_0x0001087c906c(1,0x10);
LAB_1016a8438:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016a843c);
      (*pcVar3)();
    }
    *plVar11 = lVar6;
    plVar11[1] = lVar2;
    *puVar5 = plVar11;
    puVar5[1] = &UNK_10b251cc8;
    *(undefined8 *)(unaff_x29 + -0x78) = 1;
    *(undefined8 **)(unaff_x29 + -0x70) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x68) = 1;
    param_1 = &stack0x00000070;
    param_3 = &stack0x000009f0;
    unaff_x21 = plVar1;
    unaff_x22 = 1;
  } while( true );
}

