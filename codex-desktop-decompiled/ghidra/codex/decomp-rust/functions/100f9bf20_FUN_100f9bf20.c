
undefined1  [16] FUN_100f9bf20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x22;
  undefined1 *unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar9 [16];
  long in_stack_000000d0;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  undefined1 *in_stack_00000100;
  byte bVar10;
  undefined8 *in_stack_00005f88;
  undefined8 in_stack_00005f90;
  undefined8 in_stack_00005f98;
  undefined8 in_stack_00005fa0;
  undefined8 in_stack_00005fa8;
  undefined8 in_stack_00005fb0;
  undefined8 in_stack_00005fb8;
  undefined8 in_stack_00005fc0;
  undefined8 in_stack_00005fc8;
  undefined8 in_stack_00005fd0;
  undefined8 in_stack_00005fd8;
  undefined8 in_stack_00005fe0;
  undefined8 in_stack_00005fe8;
  undefined8 in_stack_00005ff0;
  undefined8 in_stack_00005ff8;
  undefined8 in_stack_00006000;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00005f80);
  if (lRam000000010b63d138 != 0) {
    FUN_108a828bc();
  }
  *unaff_x28 = 0x10b63d0f8;
  puVar5 = &stack0x00010910;
  lVar2 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hab2834ef537a6af2E
                    (&stack0x00005f80);
  if (lVar2 == 0) {
    *(undefined2 *)(in_stack_000000d0 + 0x168) = 2;
    func_0x000100b92898(&stack0x00005f80,in_stack_000000f8 + 0x818,in_stack_000000f0);
    if (puVar5 != (undefined1 *)0x8000000000000001) {
      *(undefined8 *)(unaff_x27 + 0xd8) = in_stack_00005fd8;
      *(undefined8 *)(unaff_x27 + 0xd0) = in_stack_00005fd0;
      *(undefined8 *)(unaff_x27 + 0xe8) = in_stack_00005fe8;
      *(undefined8 *)(unaff_x27 + 0xe0) = in_stack_00005fe0;
      *(undefined8 *)(unaff_x27 + 0xf8) = in_stack_00005ff8;
      *(undefined8 *)(unaff_x27 + 0xf0) = in_stack_00005ff0;
      *(undefined8 *)(unaff_x27 + 0x100) = in_stack_00006000;
      *(undefined8 *)(unaff_x27 + 0x98) = in_stack_00005f98;
      *(undefined8 *)(unaff_x27 + 0x90) = in_stack_00005f90;
      *(undefined8 *)(unaff_x27 + 0xa8) = in_stack_00005fa8;
      *(undefined8 *)(unaff_x27 + 0xa0) = in_stack_00005fa0;
      *(undefined8 *)(unaff_x27 + 0xb8) = in_stack_00005fb8;
      *(undefined8 *)(unaff_x27 + 0xb0) = in_stack_00005fb0;
      *(undefined8 *)(unaff_x27 + 200) = in_stack_00005fc8;
      *(undefined8 *)(unaff_x27 + 0xc0) = in_stack_00005fc0;
      if (*(char *)(in_stack_000000d0 + 0x169) == '\x03') {
        FUN_100e58c40(in_stack_000000f8 + 0x938);
        FUN_100df5354(in_stack_000000f8 + 0x818);
      }
      if (puVar5 == (undefined1 *)0x8000000000000000) goto LAB_100fa83f0;
      if ((*(byte *)(in_stack_000000f8 + 0x812) & 1) == 0) {
        bVar10 = (byte)((ulong)*(undefined8 *)(unaff_x27 + 0x100) >> 8);
        if (bVar10 < 3) {
LAB_100fa21d0:
          *unaff_x28 = (long)&stack0x00000901;
          unaff_x28[1] = (long)&DAT_1011c55d0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00005f80,s__Remote_control_stop_completed_w_108ad4739,&stack0x00010910)
          ;
        }
        else if (bVar10 == 3) {
          uVar3 = 0x17;
          in_stack_00005f88 = (undefined8 *)_malloc(0x17);
          if (in_stack_00005f88 == (undefined8 *)0x0) {
LAB_100facf54:
            func_0x0001087c9084(1,uVar3);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
            (*pcVar1)();
          }
          in_stack_00005f88[1] = 0x73206c6f72746e6f;
          *in_stack_00005f88 = 0x632065746f6d6552;
          *(undefined8 *)((long)in_stack_00005f88 + 0xf) = 0x2e646570706f7473;
          puVar5 = (undefined1 *)0x17;
        }
        else {
          if (bVar10 != 4) goto LAB_100fa21d0;
          uVar3 = 0x1e;
          in_stack_00005f88 = (undefined8 *)_malloc(0x1e);
          if (in_stack_00005f88 == (undefined8 *)0x0) goto LAB_100facf54;
          in_stack_00005f88[1] = 0x69206c6f72746e6f;
          *in_stack_00005f88 = 0x632065746f6d6552;
          *(undefined8 *)((long)in_stack_00005f88 + 0x16) = 0x2e676e696e6e7572;
          *(undefined8 *)((long)in_stack_00005f88 + 0xe) = 0x20746f6e20736920;
          puVar5 = (undefined1 *)0x1e;
        }
        *unaff_x28 = (long)&stack0x00005f80;
        unaff_x28[1] = (long)&DAT_10112965c;
        func_0x00010602ab90(s__108ac265a,&stack0x00010910);
        if (puVar5 != (undefined1 *)0x0) {
LAB_100fa44ac:
          _free(in_stack_00005f88);
        }
      }
      else {
        uVar3 = 0x80;
        lVar2 = _malloc(0x80);
        if (lVar2 == 0) goto LAB_100facf54;
        in_stack_00000100 = &stack0x00005f80;
        lVar8 = func_0x000100b90024(&stack0x00000880,&stack0x00000100);
        if (lVar8 != 0) {
          _free(lVar2);
          in_stack_00005f88 = (undefined8 *)FUN_108858844(lVar8);
          FUN_100e0e848(&stack0x00000880);
          goto LAB_100fa83f0;
        }
        *unaff_x28 = 0x80;
        unaff_x28[1] = lVar2;
        unaff_x28[2] = 0;
        func_0x00010602ab90(s__108ac265a,&stack0x00005f80);
        if (*unaff_x28 != 0) {
          in_stack_00005f88 = (undefined8 *)unaff_x28[1];
          goto LAB_100fa44ac;
        }
      }
      FUN_100e0e848(&stack0x00000880);
      if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
        lVar8 = *(long *)(in_stack_000000f8 + 0x800);
        lVar2 = *(long *)(in_stack_000000f8 + 0x808);
        if (lVar2 != 0) {
          puVar7 = (undefined8 *)(lVar8 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
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
      in_stack_00005f88 = (undefined8 *)0x0;
      goto LAB_100fa8aa0;
    }
    *unaff_x25 = 5;
    bVar4 = true;
  }
  else {
    in_stack_00005f88 = (undefined8 *)FUN_108854978(lVar2,&UNK_108cc6b7f,0x2f);
LAB_100fa83f0:
    if ((*(byte *)(in_stack_000000f8 + 0x815) & 1) != 0) {
      lVar8 = *(long *)(in_stack_000000f8 + 0x800);
      lVar2 = *(long *)(in_stack_000000f8 + 0x808);
      if (lVar2 != 0) {
        puVar7 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
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
    bVar4 = false;
    *unaff_x25 = 1;
    unaff_x22 = in_stack_00005f88;
  }
  if (bVar4) {
    *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 0x16;
    uVar3 = 1;
    goto LAB_100fb1a40;
  }
  FUN_100e47c98();
  if (unaff_x22 == (undefined8 *)0x0) {
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
      lVar2 = *(long *)(in_stack_000000f8 + 0x98);
      lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)(lVar2 + 8);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
        _free(lVar2);
      }
    }
    *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
    if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
        *(long *)(in_stack_000000f8 + 0x48) == 0) {
      lVar2 = *(long *)(in_stack_000000f8 + 0x60);
    }
    else {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
      lVar2 = *(long *)(in_stack_000000f8 + 0x60);
    }
    if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
      _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
    }
    unaff_x22 = (undefined8 *)0x0;
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
  lVar2 = *(long *)(in_stack_000000f8 + 0x228);
  if (lVar2 == -0x7fffffffffffffe9) goto LAB_100fabefc;
  if ((*(byte *)(in_stack_000000f8 + 0x6f5) & 1) == 0) goto LAB_100fabef4;
  switch(lVar2 + 0x8000000000000001U & lVar2 >> 0x3f) {
  case 0:
    if ((*(byte *)(in_stack_000000f8 + 0x711) & 1) != 0) {
      func_0x000100ddff3c(in_stack_000000f8 + 0x228);
    }
    break;
  case 1:
    bVar10 = *(byte *)(in_stack_000000f8 + 0x712);
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
    bVar10 = *(byte *)(in_stack_000000f8 + 0x717);
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
    bVar10 = *(byte *)(in_stack_000000f8 + 0x71a);
joined_r0x000100fabcfc:
    if ((bVar10 & 1) != 0) {
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
    bVar10 = *(byte *)(in_stack_000000f8 + 0x726);
joined_r0x000100fabebc:
    if ((bVar10 & 1) != 0) {
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
    lVar2 = *(long *)(in_stack_000000f8 + 0x98);
    lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar8 != 0) {
      puVar7 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(long *)(in_stack_000000f8 + 0x90) != 0) {
      _free(lVar2);
    }
  }
  *(undefined1 *)(in_stack_000000f8 + 0x6f7) = 0;
  if (*(long *)(in_stack_000000f8 + 0x48) == -0x8000000000000000 ||
      *(long *)(in_stack_000000f8 + 0x48) == 0) {
    lVar2 = *(long *)(in_stack_000000f8 + 0x60);
  }
  else {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x50));
    lVar2 = *(long *)(in_stack_000000f8 + 0x60);
  }
  if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x68));
  }
  uVar6 = *(ulong *)(in_stack_000000f8 + 0x78);
joined_r0x000100fac014:
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  uVar3 = 0;
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
LAB_100fb1a40:
  auVar9._8_8_ = unaff_x22;
  auVar9._0_8_ = uVar3;
  return auVar9;
}

