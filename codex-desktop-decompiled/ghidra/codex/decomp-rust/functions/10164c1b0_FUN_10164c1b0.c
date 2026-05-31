
/* WARNING: Removing unreachable block (ram,0x00010164c61c) */

undefined8 FUN_10164c1b0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x23;
  long unaff_x27;
  undefined8 uVar10;
  long unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
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
  ulong in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 *in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001f0;
  long in_stack_00000210;
  undefined *in_stack_00000218;
  undefined7 in_stack_000002b9;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  
  while( true ) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s__>_108ad9fcf,param_3);
    puVar3 = (undefined8 *)_malloc(0x10);
    if (puVar3 == (undefined8 *)0x0) goto LAB_10164c83c;
    uVar9 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar10 = *(undefined8 *)(unaff_x29 + -0x68);
    puVar4 = (undefined8 *)_malloc(0x18);
    if (puVar4 == (undefined8 *)0x0) {
      *(long **)(unaff_x29 + -0xd8) = in_stack_00000018;
      func_0x0001087c906c(8,0x18);
      goto LAB_10164c938;
    }
    *puVar4 = uVar9;
    puVar4[1] = uVar1;
    puVar4[2] = uVar10;
    *puVar3 = puVar4;
    puVar3[1] = &UNK_10b250430;
    *(undefined8 *)(unaff_x27 + 0x10) = 0;
    *(undefined8 *)(unaff_x27 + 0x18) = 0;
    in_stack_00000088 = *(undefined8 *)(unaff_x27 + 0x20);
    in_stack_00000080 = *(undefined8 *)(unaff_x27 + 0x18);
    in_stack_00000090 = *(undefined8 *)(unaff_x27 + 0x28);
    in_stack_00000118 = *(undefined8 *)(unaff_x27 + 0xb0);
    in_stack_00000110 = *(undefined8 *)(unaff_x27 + 0xa8);
    in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0xb8);
    in_stack_00000138 = *(undefined8 *)(unaff_x27 + 0xd0);
    in_stack_000000b8 = *(undefined8 *)(unaff_x27 + 0x50);
    in_stack_000000b0 = *(undefined8 *)(unaff_x27 + 0x48);
    in_stack_000000c0 = *(undefined8 *)(unaff_x27 + 0x58);
    in_stack_000000d0 = *(undefined8 *)(unaff_x27 + 0x68);
    in_stack_000000c8 = *(undefined8 *)(unaff_x27 + 0x60);
    in_stack_000000d8 = *(undefined8 **)(unaff_x27 + 0x70);
    in_stack_00000098 = 1;
    in_stack_000000a8 = 1;
    in_stack_00000140 = CONCAT44(0x1000000,*(undefined4 *)(unaff_x27 + 0xd8));
    in_stack_00000148 = in_stack_00000148 & 0xffffffffffffff00;
    in_stack_000000e0 = in_stack_00000048;
    in_stack_000000e8 = in_stack_00000040;
    in_stack_00000128 = 0;
    in_stack_00000100 = *(undefined8 *)(unaff_x27 + 0x98);
    in_stack_000000f8 = *(undefined8 *)(unaff_x27 + 0x90);
    in_stack_00000108 = *(undefined8 *)(unaff_x27 + 0xa0);
    lVar6 = *(long *)(unaff_x29 + -0x80);
    in_stack_00000068 = in_stack_000003a0;
    in_stack_00000070 = in_stack_000003a8;
    in_stack_00000078 = in_stack_000003b0;
    in_stack_000000a0 = puVar3;
    in_stack_000000f0 = unaff_x23;
    if (lVar6 == *(long *)(unaff_x29 + -0x90)) {
      func_0x0001089ecef8(unaff_x29 + -0x90);
    }
    puVar3 = (undefined8 *)(*(long *)(unaff_x29 + -0x88) + lVar6 * 0xe8);
    puVar3[0x17] = in_stack_00000120;
    puVar3[0x16] = in_stack_00000118;
    puVar3[0x19] = in_stack_00000130;
    puVar3[0x18] = in_stack_00000128;
    puVar3[0x1b] = in_stack_00000140;
    puVar3[0x1a] = in_stack_00000138;
    puVar3[0x1c] = in_stack_00000148;
    puVar3[0xf] = in_stack_000000e0;
    puVar3[0xe] = in_stack_000000d8;
    puVar3[0x11] = in_stack_000000f0;
    puVar3[0x10] = in_stack_000000e8;
    puVar3[0x13] = in_stack_00000100;
    puVar3[0x12] = in_stack_000000f8;
    puVar3[0x15] = in_stack_00000110;
    puVar3[0x14] = in_stack_00000108;
    puVar3[7] = in_stack_000000a0;
    puVar3[6] = in_stack_00000098;
    puVar3[9] = in_stack_000000b0;
    puVar3[8] = in_stack_000000a8;
    puVar3[0xb] = in_stack_000000c0;
    puVar3[10] = in_stack_000000b8;
    puVar3[0xd] = in_stack_000000d0;
    puVar3[0xc] = in_stack_000000c8;
    puVar3[1] = in_stack_00000070;
    *puVar3 = in_stack_00000068;
    puVar3[3] = in_stack_00000080;
    puVar3[2] = in_stack_00000078;
    puVar3[5] = in_stack_00000090;
    puVar3[4] = in_stack_00000088;
    *(long *)(unaff_x29 + -0x80) = lVar6 + 1;
    FUN_100cdd63c(unaff_x27 + 0x30);
    in_stack_00000018 = unaff_x20 + 6;
    if (unaff_x20 + 3 == in_stack_00000030) goto LAB_10164c3f8;
    in_stack_00000048 = unaff_x20[3];
    if (in_stack_00000048 == -0x8000000000000000) break;
    in_stack_00000040 = unaff_x20[4];
    unaff_x23 = unaff_x20[5];
    if (unaff_x23 == 0) {
      lVar6 = 1;
    }
    else {
      lVar6 = _malloc(unaff_x23);
      if (lVar6 == 0) {
        func_0x0001087c9084(1,unaff_x23);
        goto LAB_10164c938;
      }
    }
    _memcpy(lVar6,in_stack_00000040,unaff_x23);
    *(long *)(unaff_x29 + -0x78) = unaff_x23;
    *(long *)(unaff_x29 + -0x70) = lVar6;
    *(long *)(unaff_x29 + -0x68) = unaff_x23;
    in_stack_00000210 = unaff_x29 + -0x78;
    in_stack_00000218 = &DAT_10112965c;
    param_1 = &stack0x000003a0;
    param_3 = &stack0x00000200;
    unaff_x20 = unaff_x20 + 3;
  }
  *(long **)(unaff_x29 + -0xd8) = in_stack_00000018;
  if ((long)in_stack_00000030 - (long)in_stack_00000018 != 0) {
    uVar7 = (ulong)((long)in_stack_00000030 - (long)in_stack_00000018) / 0x18;
    plVar8 = unaff_x20 + 7;
    do {
      if (plVar8[-1] != 0) {
        _free(*plVar8);
      }
      plVar8 = plVar8 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
LAB_10164c3f8:
  if (in_stack_00000010 != 0) {
    _free(in_stack_00000008);
  }
  uVar9 = *(undefined8 *)(in_stack_00000038 + 0x20);
  puVar3 = (undefined8 *)_malloc(0x14);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x14);
  }
  else {
    *(undefined4 *)(puVar3 + 2) = 0x68636e61;
    puVar3[1] = 0x7262206573616220;
    *puVar3 = 0x61207463656c6553;
    __ZN9codex_tui11bottom_pane12popup_consts24standard_popup_hint_line17he433a102d0f5721dE
              (&stack0x00000200);
    *(undefined8 *)(unaff_x29 + -0xd8) = 1;
    *(undefined8 *)(unaff_x29 + -0xe0) = 0;
    *(undefined **)(unaff_x29 + -200) = in_stack_00000218;
    *(long *)(unaff_x29 + -0xd0) = in_stack_00000210;
    *(undefined8 *)(unaff_x29 + -0xb8) = 0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 8;
    puVar4 = (undefined8 *)_malloc(0x17);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0x6220686372616573;
      *puVar4 = 0x206f742065707954;
      in_stack_000000e8 = 0x8000000000000000;
      in_stack_00000100 = 0x8000000000000000;
      in_stack_00000120 = CONCAT71(in_stack_000002b9,2);
      in_stack_00000128 = 0;
      in_stack_00000148 = *(undefined8 *)(unaff_x29 + -200);
      in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0xd0);
      in_stack_00000158 = *(undefined8 *)(unaff_x29 + -0xb8);
      in_stack_00000150 = *(undefined8 *)(unaff_x29 + -0xc0);
      in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0xd8);
      in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0xe0);
      *(undefined8 *)((long)puVar4 + 0xf) = 0x736568636e617262;
      in_stack_000000e0 = 0x14;
      in_stack_00000098 = 0;
      in_stack_00000090 = 8;
      in_stack_00000088 = 0;
      in_stack_000000b0 = *(undefined8 *)(unaff_x29 + -0x80);
      in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_000000a0 = *(undefined8 **)(unaff_x29 + -0x90);
      in_stack_000000c8 = 0;
      in_stack_000000d0 = 0x14;
      in_stack_000000c0 = 8;
      in_stack_000000b8 = 0;
      in_stack_000000f8 = 0x8000000000000000;
      in_stack_00000160 = 0x8000000000000000;
      in_stack_00000178 = 0x17;
      in_stack_00000188 = 0x17;
      in_stack_00000190 = 1;
      in_stack_00000068 = 0;
      in_stack_00000078 = 0;
      in_stack_00000198 = &UNK_10b36b5e8;
      in_stack_000001a0 = 1;
      in_stack_000001a8 = &UNK_10b36b5e8;
      in_stack_000001b0 = 0;
      in_stack_000001f0 = 0;
      in_stack_000001c0 = 0;
      in_stack_000001d0 = 0;
      in_stack_000001e0 = 0;
      in_stack_000000d8 = puVar3;
      in_stack_00000180 = puVar4;
      __ZN9codex_tui11bottom_pane10BottomPane19show_selection_view17h0090d0eaa43fb00cE
                (uVar9,&stack0x00000068);
      lVar6 = 1;
      lVar5 = 8;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        FUN_100e46760(lVar5);
        lVar5 = lVar5 + 0xe8;
      }
      if (*(long *)(unaff_x29 + -0xa8) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0xa0));
      }
      *(undefined1 *)(in_stack_00000038 + 0x48) = 0;
      *(undefined1 *)(in_stack_00000038 + 0x49) = 1;
      return 0;
    }
    func_0x0001087c9084(1,0x17);
  }
LAB_10164c938:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10164c93c);
  (*pcVar2)();
LAB_10164c83c:
  *(long **)(unaff_x29 + -0xd8) = in_stack_00000018;
  func_0x0001087c906c(8,0x10);
  goto LAB_10164c938;
}

