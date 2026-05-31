
/* WARNING: Removing unreachable block (ram,0x000100f9fe4c) */
/* WARNING: Removing unreachable block (ram,0x000100f9fe78) */
/* WARNING: Removing unreachable block (ram,0x000100f9fecc) */
/* WARNING: Removing unreachable block (ram,0x000100f9ff0c) */

undefined1  [16] FUN_100fa96f0(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
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
  undefined8 in_stack_00000888;
  undefined8 in_stack_00000890;
  undefined7 in_stack_00005f80;
  ulong in_stack_0000dfc0;
  undefined8 in_stack_0000dfc8;
  uint in_stack_0000dff0;
  long in_stack_0000dff8;
  long in_stack_0000e000;
  long in_stack_0000e010;
  long in_stack_00010910;
  ulong in_stack_00010918;
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
  undefined8 in_stack_00012f70;
  undefined8 in_stack_00012f78;
  undefined8 in_stack_00012f80;
  
  func_0x00010602ab90(s_<_thread_start_response:_108ad2c98,&stack0x00005f80);
  func_0x000100025ae8(&stack0x00010910,&stack0x00000880);
  puVar4 = (undefined1 *)_malloc(0x38);
  if (puVar4 == (undefined1 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
    (*pcVar3)();
  }
  *puVar4 = 0;
  *(ulong *)(puVar4 + 9) = CONCAT17((char)in_stack_00012f78,(int7)((ulong)in_stack_00012f70 >> 8));
  *(ulong *)(puVar4 + 1) = CONCAT17((char)in_stack_00012f70,in_stack_00005f80);
  *(undefined8 *)(puVar4 + 0x18) = in_stack_00012f80;
  *(undefined8 *)(puVar4 + 0x10) = in_stack_00012f78;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 8;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  __ZN28codex_app_server_test_client11CodexClient10turn_start17hc4b8450eddf892a1E
            (&stack0x00010910,&stack0x0000e210,&stack0x00005f80);
  if (in_stack_00010910 == 2) {
LAB_100fa98f0:
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
  }
  else {
    func_0x00010602ab90(s_<_turn_start_response:_108ad2cb6,&stack0x00005f80);
    in_stack_00010918 =
         __ZN28codex_app_server_test_client11CodexClient11stream_turn17h25187ced602f3211E
                   (&stack0x0000e210,in_stack_00000888,in_stack_00000890,in_stack_00010948,
                    in_stack_00010950);
    if (in_stack_00010918 != 0) {
      FUN_100e4623c(&stack0x0000e3d0);
      goto LAB_100fa98f0;
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
    in_stack_00010918 = 0;
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
  if (in_stack_00010918 == 0) {
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
      lVar5 = *(long *)(in_stack_000000f8 + 0x98);
      lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)(lVar5 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar5);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar5 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar5 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    in_stack_00010918 = 0;
    uVar6 = *(ulong *)(in_stack_000000f8 + 0x78);
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
  lVar5 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar5 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar5 + 0x8000000000000001U & lVar5 >> 0x3f) {
  case 0:
    if ((*(byte *)(in_stack_000000f8 + 0x711) & 1) != 0) {
      func_0x000100ddff3c(in_stack_000000f8 + 0x228);
    }
    break;
  case 1:
    bVar1 = *(byte *)(in_stack_000000f8 + 0x712);
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
    bVar1 = *(byte *)(in_stack_000000f8 + 0x717);
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
    bVar1 = *(byte *)(in_stack_000000f8 + 0x71a);
joined_r0x000100fabcfc:
    if ((bVar1 & 1) != 0) {
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
    bVar1 = *(byte *)(in_stack_000000f8 + 0x726);
joined_r0x000100fabebc:
    if ((bVar1 & 1) != 0) {
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
    lVar5 = *(long *)(in_stack_000000f8 + 0x98);
    lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar8 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar5);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar5 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar5 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar6 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fb1c88:
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_stack_00010918;
  return auVar2 << 0x40;
}

