
/* WARNING: Removing unreachable block (ram,0x000100fa2bf4) */

undefined1  [16] FUN_100fa2a34(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x25;
  long unaff_x27;
  undefined1 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000100,s_Git_apply_failed__applied____ski_108ac68d5,&stack0x00005f80);
  uVar3 = FUN_108856624(&stack0x00012f70);
  FUN_100e09284(&stack0x00010910);
  if (unaff_x27 != 0) {
    _free();
  }
  if (unaff_x25 != 0) {
    _free();
  }
  *(undefined1 *)(in_stack_000000e0 + 0x145) = 1;
  lVar7 = *(long *)(in_stack_000000f8 + 0x2da8);
  lVar6 = *(long *)(in_stack_000000f8 + 0x2db0);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar7 + 8);
    do {
      if ((puVar5[-1] & 0x7fffffffffffffff) != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(long *)(in_stack_000000f8 + 0x2da0) != 0) {
    _free(lVar7);
  }
  *(undefined1 *)(in_stack_000000e0 + 0x14e) = 0;
  *(undefined1 *)(in_stack_000000e0 + 0x14d) = 1;
  FUN_100c96cc0();
  *(undefined1 *)(in_stack_000000e0 + 0xb8) = 0;
  FUN_100de93d0(in_stack_000000f8 + 0x808);
  *(undefined1 *)(in_stack_000000e0 + 0xb7) = 0;
  lVar7 = *(long *)(in_stack_000000f8 + 0x7e0);
  lVar6 = *(long *)(in_stack_000000f8 + 0x7e8);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(lVar7 + 8);
    do {
      if (puVar5[-1] != 0) {
        _free(*puVar5);
      }
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(long *)(in_stack_000000f8 + 0x7d8) != 0) {
    _free(lVar7);
  }
  *(undefined1 *)(in_stack_000000e0 + 0xb6) = 0;
  *in_stack_000000d8 = 1;
  FUN_100e822b4(in_stack_000000e8);
  if (uVar3 == 0) {
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
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
      lVar6 = *(long *)(in_stack_000000f8 + 0x98);
      lVar7 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)(lVar6 + 8);
        do {
          if (puVar5[-1] != 0) {
            _free(*puVar5);
          }
          puVar5 = puVar5 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar6);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar6 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar6 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    uVar3 = 0;
    uVar4 = *(ulong *)(in_stack_000000f8 + 0x78);
    goto joined_r0x000100fb1c88;
  }
  if ((*(byte *)(in_stack_000000f8 + 0x6fb) & 1) == 0) {
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
  }
  else {
    FUN_100e15ef8(in_stack_000000f8 + 0x748);
    *(undefined1 *)(in_stack_000000f8 + 0x6fb) = 0;
  }
  if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
  }
  if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x3b0));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
  lVar6 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar6 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar6 + 0x8000000000000001U & lVar6 >> 0x3f) {
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
    lVar6 = *(long *)(in_stack_000000f8 + 0x98);
    lVar7 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar6);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar6 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar6 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar4 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fb1c88:
  if ((uVar4 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}

