
/* WARNING: Removing unreachable block (ram,0x000100f9fe4c) */
/* WARNING: Removing unreachable block (ram,0x000100f9fe78) */
/* WARNING: Removing unreachable block (ram,0x000100f9fecc) */
/* WARNING: Removing unreachable block (ram,0x000100f9ff0c) */

undefined1  [16] FUN_100fa632c(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined1 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  undefined1 *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000890;
  undefined7 in_stack_00005f80;
  undefined1 in_stack_00005f87;
  undefined7 in_stack_00005f88;
  undefined1 in_stack_00005f8f;
  ulong in_stack_0000dfc0;
  undefined8 in_stack_0000dfc8;
  uint in_stack_0000dff0;
  long in_stack_0000dff8;
  long in_stack_0000e000;
  long in_stack_0000e010;
  undefined8 in_stack_0000e170;
  undefined8 in_stack_0000e178;
  undefined8 in_stack_0000e180;
  undefined8 in_stack_0000e1a0;
  undefined8 in_stack_0000e1a8;
  undefined8 in_stack_0000e1b0;
  undefined8 in_stack_00010910;
  long in_stack_00010918;
  undefined8 in_stack_00010920;
  undefined8 in_stack_00010928;
  undefined8 in_stack_00010930;
  undefined8 in_stack_00010938;
  undefined8 in_stack_00010940;
  undefined8 in_stack_00010948;
  undefined8 in_stack_00010950;
  long in_stack_00012ee0;
  undefined8 in_stack_00012ee8;
  long in_stack_00012ef8;
  undefined8 in_stack_00012f00;
  long in_stack_00012f10;
  undefined8 in_stack_00012f18;
  long in_stack_00012f28;
  undefined8 in_stack_00012f30;
  long in_stack_00012f70;
  undefined8 in_stack_00012f78;
  undefined8 in_stack_00012f80;
  long in_stack_00012f88;
  long in_stack_00012f90;
  long in_stack_00012f98;
  long *in_stack_00012fb8;
  
  func_0x00010602ab90(s_<_initialize_response:_108ad2c7c,&stack0x00005f80);
  if ((*in_stack_00012fb8 != -0x8000000000000000) && (lVar8 = in_stack_00012fb8[2], lVar8 != 0)) {
    lVar13 = in_stack_00012fb8[1];
    lVar11 = lVar8 * 0x98;
    lVar5 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar11,8);
    if (lVar5 == 0) {
      func_0x0001087c9084(8,lVar11);
      goto LAB_100fb1ca4;
    }
    lVar14 = 0;
    lVar15 = 0;
    do {
      if (lVar8 * 0x98 == lVar14) break;
      uVar10 = 0x8000000000000000;
      if (*(long *)(lVar13 + lVar14 + 0x30) != -0x8000000000000000) {
        func_0x000100025ae8(&stack0x00010910);
        unaff_x20 = in_stack_00010920;
        uVar10 = in_stack_00010910;
        lVar11 = in_stack_00010918;
      }
      func_0x000100025ae8(&stack0x0000e170,lVar13 + lVar14);
      func_0x000100025ae8(&stack0x0000e1a0,lVar13 + lVar14 + 0x18);
      FUN_10112c3fc(&stack0x00010910,lVar13 + lVar14 + 0x48);
      uVar1 = *(undefined1 *)(lVar13 + lVar14 + 0x90);
      puVar9 = (undefined8 *)(lVar5 + lVar14);
      puVar9[1] = in_stack_0000e178;
      *puVar9 = in_stack_0000e170;
      puVar9[3] = in_stack_0000e1a0;
      puVar9[2] = in_stack_0000e180;
      puVar9[5] = in_stack_0000e1b0;
      puVar9[4] = in_stack_0000e1a8;
      puVar9[0xc] = in_stack_00010928;
      puVar9[0xb] = in_stack_00010920;
      puVar9[0xe] = in_stack_00010938;
      puVar9[0xd] = in_stack_00010930;
      puVar9[0x10] = in_stack_00010948;
      puVar9[0xf] = in_stack_00010940;
      lVar15 = lVar15 + 1;
      puVar9[6] = uVar10;
      puVar9[7] = lVar11;
      puVar9[8] = unaff_x20;
      puVar9[0x11] = in_stack_00010950;
      puVar9[10] = in_stack_00010918;
      puVar9[9] = in_stack_00010910;
      lVar14 = lVar14 + 0x98;
      *(undefined1 *)(puVar9 + 0x12) = uVar1;
    } while (lVar8 != lVar15);
  }
  func_0x0001025c6e48(&stack0x00005f80,&stack0x0000e210,&stack0x0000e3d0);
  uVar12 = CONCAT17(in_stack_00005f8f,in_stack_00005f88);
  if (CONCAT17(in_stack_00005f87,in_stack_00005f80) == -0x8000000000000000) {
    if (in_stack_00012ee0 != 0) {
      _free(in_stack_00012ee8);
    }
    if (in_stack_00012ef8 != 0) {
      _free(in_stack_00012f00);
    }
    if (in_stack_00012f10 != 0) {
      _free(in_stack_00012f18);
    }
    if (in_stack_00012f28 != 0) {
      _free(in_stack_00012f30);
    }
    if ((in_stack_00012f88 != -0x7ffffffffffffffd) && (-0x7ffffffffffffffe < in_stack_00012f88)) {
      if (in_stack_00012f98 != 0) {
        puVar9 = (undefined8 *)(in_stack_00012f90 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 3;
          in_stack_00012f98 = in_stack_00012f98 + -1;
        } while (in_stack_00012f98 != 0);
      }
      if (in_stack_00012f88 != 0) {
        _free(in_stack_00012f90);
      }
    }
joined_r0x000100fa992c:
    if (in_stack_00012f70 != 0) {
      _free(in_stack_00012f78);
    }
  }
  else {
    _memcpy(&stack0x00000890,&stack0x00005f90,0x2d0);
    func_0x00010602ab90(s_<_thread_start_response:_108ad2c98,&stack0x00005f80);
    func_0x000100025ae8(&stack0x00010910,&stack0x00000880);
    puVar6 = (undefined1 *)_malloc(0x38);
    if (puVar6 == (undefined1 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
LAB_100fb1ca4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
      (*pcVar4)();
    }
    *puVar6 = 0;
    *(ulong *)(puVar6 + 9) = CONCAT17((char)in_stack_00012f78,(int7)((ulong)in_stack_00012f70 >> 8))
    ;
    *(ulong *)(puVar6 + 1) = CONCAT17((char)in_stack_00012f70,(int7)&stack0x00000880);
    *(undefined8 *)(puVar6 + 0x18) = in_stack_00012f80;
    *(undefined8 *)(puVar6 + 0x10) = in_stack_00012f78;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 8;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    __ZN28codex_app_server_test_client11CodexClient10turn_start17hc4b8450eddf892a1E
              (&stack0x00010910,&stack0x0000e210,&stack0x00005f80);
    func_0x00010602ab90(s_<_turn_start_response:_108ad2cb6,&stack0x00005f80);
    uVar12 = __ZN28codex_app_server_test_client11CodexClient11stream_turn17h25187ced602f3211E
                       (&stack0x0000e210,uVar12,in_stack_00000890,in_stack_00010948,
                        in_stack_00010950);
    if (uVar12 != 0) {
      FUN_100e4623c(&stack0x0000e3d0);
      FUN_100e61180(&stack0x00000880);
      if (in_stack_00012ee0 != 0) {
        _free(in_stack_00012ee8);
      }
      if (in_stack_00012ef8 != 0) {
        _free(in_stack_00012f00);
      }
      in_stack_00012f78 = in_stack_00012f30;
      in_stack_00012f70 = in_stack_00012f28;
      if (in_stack_00012f10 != 0) {
        _free(in_stack_00012f18);
      }
      goto joined_r0x000100fa992c;
    }
    FUN_100e4623c(&stack0x0000e3d0);
    FUN_100e61180(&stack0x00000880);
    if (in_stack_00012ee0 != 0) {
      _free(in_stack_00012ee8);
    }
    if (in_stack_00012ef8 != 0) {
      _free(in_stack_00012f00);
    }
    if (in_stack_00012f10 != 0) {
      _free(in_stack_00012f18);
    }
    if (in_stack_00012f28 != 0) {
      _free(in_stack_00012f30);
    }
    uVar12 = 0;
  }
  FUN_100e11b3c(&stack0x0000e210);
  if (in_stack_000000f0 != 2) {
    if ((in_stack_0000dff0 & 1) != 0) {
      in_stack_0000dff8 =
           in_stack_0000dff8 + (*(long *)(in_stack_0000e000 + 0x10) - 1U & 0xfffffffffffffff0) +
           0x10;
    }
    (**(code **)(in_stack_0000e000 + 0x68))(in_stack_0000dff8,&stack0x0000e008);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (in_stack_0000e010 != 0)) {
    FUN_1011d7d74(&stack0x0000dff0,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00005f80);
  }
  __ZN28codex_app_server_test_client19print_trace_summary17h7df14c76e86b1b91E(&stack0x0000dfc0);
  if ((in_stack_0000dfc0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_0000dfc8);
  }
  FUN_100dddd8c(&stack0x0000dff0);
  if (in_stack_00000100 != -0x7fffffffffffffff) {
    FUN_100dfc5b8(&stack0x00000100);
  }
  *(undefined1 *)(in_stack_000000f8 + 0xd01) = 0;
  *in_stack_000000c8 = 1;
  FUN_100d9f3b4(in_stack_000000b8);
  *in_stack_000000d0 = 1;
  FUN_100cc0184(in_stack_000000c0);
  *(undefined1 *)(in_stack_000000f8 + 0xd12) = 0;
  *(undefined1 *)(in_stack_000000f8 + 0xd11) = 1;
  if (*(long *)(in_stack_000000f8 + 0x7f0) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x7f8));
  }
  *(undefined1 *)(in_stack_000000f8 + 0xd19) = 0;
  *in_stack_000000d8 = 1;
  FUN_100e7a3b4(in_stack_000000b0);
  if (*(long *)(in_stack_000000f8 + 0x790) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x798));
  }
  *(undefined1 *)(in_stack_000000f8 + 0xd21) = 0;
  *in_stack_000000e0 = 1;
  FUN_100e54a10(in_stack_000000e8);
  if (uVar12 == 0) {
    *(undefined1 *)(in_stack_000000f8 + 0x6fe) = 0;
    if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
    }
    if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
       (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
    }
    *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
    if (*(long *)(in_stack_000000f8 + 0x228) != -0x7fffffffffffffe9) {
      *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
    if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x108);
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
    *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
    FUN_100c973ec(in_stack_000000f8 + 0xa8);
    if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
      lVar8 = *(long *)(in_stack_000000f8 + 0x98);
      lVar11 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar11 != 0) {
        puVar9 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar8);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar8 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar8 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    uVar12 = 0;
    uVar7 = *(ulong *)(in_stack_000000f8 + 0x78);
    goto joined_r0x000100fb1c88;
  }
  if ((*(char *)(in_stack_000000f8 + 0x6fe) == '\x01') && (in_stack_00000088 != 0)) {
    _free(in_stack_00000080);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6fe) = 0;
  if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
  }
  if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
  lVar8 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar8 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar8 + 0x8000000000000001U & lVar8 >> 0x3f) {
  case 0:
    if ((*(byte *)(in_stack_000000f8 + 0x711) & 1) != 0) {
      func_0x000100ddff3c(in_stack_000000f8 + 0x228);
    }
    break;
  case 1:
    bVar2 = *(byte *)(in_stack_000000f8 + 0x712);
    goto joined_r0x000100fabebc;
  case 2:
    if ((*(byte *)(in_stack_000000f8 + 0x71d) & 1) != 0) {
      func_0x000100ddcd80(in_stack_000000f8 + 0x230);
    }
    break;
  case 3:
    if ((*(byte *)(in_stack_000000f8 + 0x71e) & 1) != 0) {
      func_0x000100ddfecc(in_stack_000000f8 + 0x230);
    }
    break;
  case 4:
    if ((*(byte *)(in_stack_000000f8 + 0x713) & 1) != 0) {
      func_0x000100de394c(in_stack_000000f8 + 0x230);
    }
    break;
  case 5:
    if ((*(byte *)(in_stack_000000f8 + 0x714) & 1) != 0) {
      func_0x000100deea20(in_stack_000000f8 + 0x230);
    }
    break;
  case 7:
    if ((*(byte *)(in_stack_000000f8 + 0x715) & 1) != 0) {
      func_0x000100de4fb8(in_stack_000000f8 + 0x230);
    }
    break;
  case 9:
    if ((*(byte *)(in_stack_000000f8 + 0x716) & 1) != 0) {
      func_0x000100de8f9c(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xd:
    if ((*(byte *)(in_stack_000000f8 + 0x720) & 1) != 0) {
      func_0x000100ddb3d0(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xe:
    if ((*(byte *)(in_stack_000000f8 + 0x721) & 1) != 0) {
      func_0x000100de3864(in_stack_000000f8 + 0x230);
    }
    break;
  case 0xf:
    if ((*(byte *)(in_stack_000000f8 + 0x722) & 1) != 0) {
      func_0x000100e436d4(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x10:
    if ((*(byte *)(in_stack_000000f8 + 0x723) & 1) != 0) {
      FUN_100e15ef8(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x11:
    if ((((*(byte *)(in_stack_000000f8 + 0x719) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x718) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar2 = *(byte *)(in_stack_000000f8 + 0x717);
    goto joined_r0x000100fabcfc;
  case 0x12:
    if ((((*(byte *)(in_stack_000000f8 + 0x71c) & 1) != 0) &&
        (*(long *)(in_stack_000000f8 + 0x350) != -0x8000000000000000)) &&
       (*(long *)(in_stack_000000f8 + 0x350) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x358));
    }
    if ((*(byte *)(in_stack_000000f8 + 0x71b) & 1) != 0) {
      FUN_100df3274(in_stack_000000f8 + 0x368);
    }
    bVar2 = *(byte *)(in_stack_000000f8 + 0x71a);
joined_r0x000100fabcfc:
    if ((bVar2 & 1) != 0) {
      FUN_100ddd750(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x13:
    if ((*(byte *)(in_stack_000000f8 + 0x71f) & 1) != 0) {
      func_0x000100decaec(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x14:
    if ((*(byte *)(in_stack_000000f8 + 0x724) & 1) != 0) {
      func_0x000100df5e34(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x15:
    if (((*(byte *)(in_stack_000000f8 + 0x725) & 1) != 0) &&
       (*(long *)(in_stack_000000f8 + 0x230) != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x238));
    }
    break;
  case 0x16:
    bVar2 = *(byte *)(in_stack_000000f8 + 0x726);
joined_r0x000100fabebc:
    if ((bVar2 & 1) != 0) {
      func_0x000100de60ac(in_stack_000000f8 + 0x230);
    }
    break;
  case 0x17:
    if ((*(byte *)(in_stack_000000f8 + 0x727) & 1) != 0) {
      func_0x000100de7bc8(in_stack_000000f8 + 0x230);
    }
  }
LAB_100fabef4:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
LAB_100fabefc:
  *(undefined1 *)(in_stack_000000f8 + 0x6f5) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x720) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x719) = 0;
  *(undefined8 *)(in_stack_000000f8 + 0x711) = 0;
  if ((*(byte *)(in_stack_000000f8 + 0x6f6) & 1) != 0) {
    FUN_100ddd750(in_stack_000000f8 + 0x108);
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
  if ((((*(byte *)(in_stack_000000f8 + 0x729) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xd8) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xd8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xe0));
  }
  if ((((*(byte *)(in_stack_000000f8 + 0x728) & 1) != 0) &&
      (*(long *)(in_stack_000000f8 + 0xf0) != -0x8000000000000000)) &&
     (*(long *)(in_stack_000000f8 + 0xf0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0xf8));
  }
  *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
  FUN_100c973ec(in_stack_000000f8 + 0xa8);
  if ((*(byte *)(in_stack_000000f8 + 0x6f7) & 1) != 0) {
    lVar8 = *(long *)(in_stack_000000f8 + 0x98);
    lVar11 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar11 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar8);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar8 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar8 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar7 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fb1c88:
  if ((uVar7 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar12;
  return auVar3 << 0x40;
}

