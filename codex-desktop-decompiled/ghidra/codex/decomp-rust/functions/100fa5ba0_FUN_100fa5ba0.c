
/* WARNING: Removing unreachable block (ram,0x000100fa267c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2790) */
/* WARNING: Removing unreachable block (ram,0x000100fa27b8) */
/* WARNING: Removing unreachable block (ram,0x000100fa27bc) */
/* WARNING: Removing unreachable block (ram,0x000100fa27cc) */
/* WARNING: Removing unreachable block (ram,0x000100fa2878) */
/* WARNING: Removing unreachable block (ram,0x000100fa281c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2844) */
/* WARNING: Removing unreachable block (ram,0x000100fa2854) */
/* WARNING: Removing unreachable block (ram,0x000100fa285c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2864) */
/* WARNING: Removing unreachable block (ram,0x000100fa286c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2890) */
/* WARNING: Removing unreachable block (ram,0x000100fa28b4) */
/* WARNING: Removing unreachable block (ram,0x000100fa28c4) */
/* WARNING: Removing unreachable block (ram,0x000100fa28cc) */
/* WARNING: Removing unreachable block (ram,0x000100fa289c) */
/* WARNING: Removing unreachable block (ram,0x000100fa28d8) */
/* WARNING: Removing unreachable block (ram,0x000100fa2908) */
/* WARNING: Removing unreachable block (ram,0x000100fa28e4) */
/* WARNING: Removing unreachable block (ram,0x000100fa28f8) */
/* WARNING: Removing unreachable block (ram,0x000100fa290c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2970) */
/* WARNING: Removing unreachable block (ram,0x000100fa29b4) */
/* WARNING: Removing unreachable block (ram,0x000100fa2c38) */
/* WARNING: Removing unreachable block (ram,0x000100fa2c58) */
/* WARNING: Removing unreachable block (ram,0x000100fa2c60) */
/* WARNING: Removing unreachable block (ram,0x000100fa2c68) */
/* WARNING: Removing unreachable block (ram,0x000100fa2964) */
/* WARNING: Removing unreachable block (ram,0x000100fa2a80) */
/* WARNING: Removing unreachable block (ram,0x000100fa2a84) */
/* WARNING: Removing unreachable block (ram,0x000100fa2a8c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2a90) */
/* WARNING: Removing unreachable block (ram,0x000100fa2a98) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ab4) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ac8) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ad4) */
/* WARNING: Removing unreachable block (ram,0x000100fa2abc) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ae0) */
/* WARNING: Removing unreachable block (ram,0x000100fa2aec) */
/* WARNING: Removing unreachable block (ram,0x000100fa2af4) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b18) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b2c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b38) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b20) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b44) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b50) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b58) */
/* WARNING: Removing unreachable block (ram,0x000100fa2778) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b5c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b64) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b68) */
/* WARNING: Removing unreachable block (ram,0x000100fa2b6c) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ba0) */
/* WARNING: Removing unreachable block (ram,0x000100fa2bb4) */
/* WARNING: Removing unreachable block (ram,0x000100fa2bbc) */
/* WARNING: Removing unreachable block (ram,0x000100fa2ba8) */
/* WARNING: Removing unreachable block (ram,0x000100fa2bf4) */

undefined1  [16] FUN_100fa5ba0(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined1 *in_stack_000000d0;
  undefined1 *in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f8;
  long in_stack_00010910;
  undefined8 in_stack_00010918;
  
  uVar4 = FUN_108858fa8(s_Request_failed_with_status___108ac696a,&stack0x00005f80);
  if (in_stack_00010910 != 0) {
    _free(in_stack_00010918);
  }
  *(undefined2 *)(in_stack_000000e0 + 0x2be) = 0;
  if (*(long *)(in_stack_000000f8 + 0x2eb8) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x2ec0));
  }
  lVar3 = **(long **)(in_stack_000000f8 + 0x2eb0);
  **(long **)(in_stack_000000f8 + 0x2eb0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(in_stack_000000f8 + 0x2eb0);
  }
  FUN_100e0609c(in_stack_000000f8 + 0x2e18);
  lVar3 = **(long **)(in_stack_000000f8 + 0x2e10);
  **(long **)(in_stack_000000f8 + 0x2e10) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(in_stack_000000f8 + 0x2e10);
  }
  if (*(long *)(in_stack_000000f8 + 0x2de0) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x2de8));
  }
  *in_stack_000000d0 = 1;
  FUN_100d643ac(in_stack_000000c0);
  *in_stack_000000b0 = 1;
  if (*(long *)(in_stack_000000f8 + 0x2d78) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x2d80));
  }
  *in_stack_000000b8 = 1;
  FUN_100e4f5f0();
  *(undefined1 *)(in_stack_000000e0 + 0xb8) = 0;
  FUN_100de93d0(in_stack_000000f8 + 0x808);
  if ((*(long *)(in_stack_000000f8 + 0x7f0) != -0x8000000000000000) &&
     (*(long *)(in_stack_000000f8 + 0x7f0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x7f8));
  }
  *(undefined1 *)(in_stack_000000e0 + 0xb7) = 0;
  if (((*(byte *)(in_stack_000000e0 + 0xb6) & 1) != 0) &&
     (*(long *)(in_stack_000000f8 + 0x7c0) != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x7c8));
  }
  lVar7 = *(long *)(in_stack_000000f8 + 0x7e0);
  lVar3 = *(long *)(in_stack_000000f8 + 0x7e8);
  if (lVar3 != 0) {
    puVar6 = (undefined8 *)(lVar7 + 8);
    do {
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(in_stack_000000f8 + 0x7d8) != 0) {
    _free(lVar7);
  }
  *(undefined1 *)(in_stack_000000e0 + 0xb6) = 0;
  *in_stack_000000d8 = 1;
  FUN_100e822b4(in_stack_000000e8);
  if (uVar4 == 0) {
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
      lVar3 = *(long *)(in_stack_000000f8 + 0x98);
      lVar7 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar3);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar3 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar3 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    uVar4 = 0;
    uVar5 = *(ulong *)(in_stack_000000f8 + 0x78);
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
  lVar3 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar3 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar3 + 0x8000000000000001U & lVar3 >> 0x3f) {
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
    lVar3 = *(long *)(in_stack_000000f8 + 0x98);
    lVar7 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar3);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar3 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar3 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar5 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fb1c88:
  if ((uVar5 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
}

