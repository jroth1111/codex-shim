
undefined1  [16] FUN_100f9cf84(void)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x25;
  undefined8 *unaff_x28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00005f80);
  if (lRam000000010b63d138 != 0) {
    FUN_108a828bc();
  }
  *unaff_x28 = 0x10b63d0f8;
  lVar3 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                    (&stack0x00005f80);
  if (lVar3 == 0) {
    uVar1 = *(undefined1 *)(in_stack_000000f8 + 0x812);
    uVar11 = *(undefined8 *)(in_stack_000000f8 + 0x7b8);
    uVar10 = *(undefined8 *)(in_stack_000000f8 + 0x7b0);
    uVar4 = *(undefined8 *)(in_stack_000000f8 + 0x7c0);
    *(undefined8 *)(unaff_x23 + 0x30) = *(undefined8 *)(in_stack_000000f8 + 0x7c8);
    *(undefined8 *)(unaff_x23 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(in_stack_000000f8 + 2000);
    uVar13 = *(undefined8 *)(in_stack_000000f8 + 0x7e8);
    uVar12 = *(undefined8 *)(in_stack_000000f8 + 0x7e0);
    *(undefined8 *)(unaff_x23 + 0x40) = *(undefined8 *)(in_stack_000000f8 + 0x7d8);
    *(undefined8 *)(unaff_x23 + 0x38) = uVar4;
    *(undefined8 *)(unaff_x23 + 0x50) = uVar13;
    *(undefined8 *)(unaff_x23 + 0x48) = uVar12;
    *(undefined8 *)(unaff_x23 + 0x20) = uVar11;
    *(undefined8 *)(unaff_x23 + 0x18) = uVar10;
    *(undefined2 *)(in_stack_000000f8 + 0x815) = 0;
    _memcpy(&stack0x00000880,&stack0x00005f80,0x138);
    _memcpy(in_stack_000000f8 + 0x818,&stack0x00000880,0x138);
    *(undefined1 *)(in_stack_000000f8 + 0x950) = uVar1;
    *(undefined1 *)(in_stack_000000f8 + 0x951) = 0;
    auVar14 = func_0x000100f4b2cc(in_stack_000000f8 + 0x818,in_stack_000000f0);
    lVar3 = auVar14._8_8_;
    if ((auVar14._0_8_ & 1) == 0) {
      FUN_100cb0a2c(in_stack_000000f8 + 0x818);
      if (lVar3 != 0) goto LAB_100fa83f0;
      if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
        lVar9 = *(long *)(in_stack_000000f8 + 0x800);
        lVar3 = *(long *)(in_stack_000000f8 + 0x808);
        if (lVar3 != 0) {
          puVar7 = (undefined8 *)(lVar9 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        if (*(long *)(in_stack_000000f8 + 0x7f8) != 0) {
          _free(lVar9);
        }
      }
      *(undefined1 *)(in_stack_000000f8 + 0x815) = 0;
      if ((*(byte *)(in_stack_000000f8 + 0x816) & 1) != 0) {
        if ((*(long *)(in_stack_000000f8 + 0x7b0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7b0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7b8));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7c8) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7c8) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 2000));
        }
        if ((*(long *)(in_stack_000000f8 + 0x7e0) != -0x8000000000000000) &&
           (*(long *)(in_stack_000000f8 + 0x7e0) != 0)) {
          _free(*(undefined8 *)(in_stack_000000f8 + 0x7e8));
        }
      }
      lVar3 = 0;
      goto LAB_100fa8aa0;
    }
    *unaff_x25 = 3;
    bVar5 = true;
  }
  else {
    lVar3 = FUN_108854978(lVar3,&UNK_108cc6b7f,0x2f);
LAB_100fa83f0:
    if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
      lVar8 = *(long *)(in_stack_000000f8 + 0x800);
      lVar9 = *(long *)(in_stack_000000f8 + 0x808);
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x7f8) != 0) {
        _free(lVar8);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x815) = 0;
    if ((*(byte *)(in_stack_000000f8 + 0x816) & 1) != 0) {
      if ((*(long *)(in_stack_000000f8 + 0x7b0) != -0x8000000000000000) &&
         (*(long *)(in_stack_000000f8 + 0x7b0) != 0)) {
        _free(*(undefined8 *)(in_stack_000000f8 + 0x7b8));
      }
      if ((*(long *)(in_stack_000000f8 + 0x7c8) != -0x8000000000000000) &&
         (*(long *)(in_stack_000000f8 + 0x7c8) != 0)) {
        _free(*(undefined8 *)(in_stack_000000f8 + 2000));
      }
      if ((*(long *)(in_stack_000000f8 + 0x7e0) != -0x8000000000000000) &&
         (*(long *)(in_stack_000000f8 + 0x7e0) != 0)) {
        _free(*(undefined8 *)(in_stack_000000f8 + 0x7e8));
      }
    }
LAB_100fa8aa0:
    *(undefined1 *)(in_stack_000000f8 + 0x816) = 0;
    bVar5 = false;
    *unaff_x25 = 1;
    unaff_x22 = lVar3;
  }
  if (bVar5) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 0x16;
    uVar4 = 1;
    goto LAB_100fb1a40;
  }
  FUN_100e47c98();
  if (unaff_x22 == 0) {
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
      lVar9 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar9 != 0) {
        puVar7 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
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
    unaff_x22 = 0;
    uVar6 = *(ulong *)(in_stack_000000f8 + 0x78);
    goto joined_r0x000100fac014;
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
    lVar3 = *(long *)(in_stack_000000f8 + 0x98);
    lVar9 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar9 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
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
  uVar6 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fac014:
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  uVar4 = 0;
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
LAB_100fb1a40:
  auVar14._8_8_ = unaff_x22;
  auVar14._0_8_ = uVar4;
  return auVar14;
}

