
undefined1  [16] FUN_100fa0bec(void)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long unaff_x24;
  long lVar8;
  long unaff_x27;
  undefined1 auVar9 [16];
  undefined8 in_stack_000000c8;
  undefined1 *in_stack_000000d8;
  undefined8 in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000880;
  undefined8 in_stack_00000888;
  undefined8 in_stack_00000890;
  undefined8 in_stack_00005f80;
  undefined8 in_stack_00005f88;
  undefined8 in_stack_00005f90;
  long in_stack_00010910;
  long in_stack_00010918;
  long in_stack_00010920;
  
  do {
    *(long *)(unaff_x27 + 0x120) = unaff_x21;
    cVar2 = __ZN14codex_features15feature_for_key17hafea768b9c45733fE();
    if (cVar2 == 'L') {
      lVar6 = FUN_108858fa8(s_Unknown_feature_flag__108ad43ae,&stack0x0000e3d0);
      goto LAB_100fa37b0;
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000880,s_features___true_108ad4389,&stack0x0000e3d0);
    if (in_stack_00010920 == in_stack_00010910) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00010910);
    }
    puVar4 = (undefined8 *)(in_stack_00010918 + in_stack_00010920 * 0x18);
    puVar4[1] = in_stack_00000888;
    *puVar4 = in_stack_00000880;
    puVar4[2] = in_stack_00000890;
    in_stack_00010920 = in_stack_00010920 + 1;
    unaff_x21 = unaff_x21 + 0x18;
  } while (unaff_x21 != unaff_x24);
  if (*(long *)(in_stack_000000f8 + 0xd0) != 0) {
    lVar6 = *(long *)(in_stack_000000f8 + 200);
    lVar8 = *(long *)(in_stack_000000f8 + 0xd0) * 0x18;
LAB_100fa0d14:
    in_stack_00000100 = lVar6;
    cVar2 = __ZN14codex_features15feature_for_key17hafea768b9c45733fE();
    if (cVar2 != 'L') goto code_r0x000100fa0d38;
    lVar6 = FUN_108858fa8(s_Unknown_feature_flag__108ad43ae,&stack0x0000e3d0);
LAB_100fa37b0:
    if (in_stack_00010920 != 0) {
      puVar4 = (undefined8 *)(in_stack_00010918 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        in_stack_00010920 = in_stack_00010920 + -1;
      } while (in_stack_00010920 != 0);
    }
    if (in_stack_00010910 != 0) goto LAB_100fabc2c;
    goto LAB_100fabc30;
  }
LAB_100fa0d90:
  lVar6 = in_stack_00010918;
  if (in_stack_00010910 != -0x8000000000000000) {
    *(undefined1 *)(in_stack_000000f8 + 0x743) = 1;
    *(undefined1 *)(in_stack_000000f8 + 0x743) = 0;
    FUN_1015048c0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(in_stack_000000f8 + 0x3b0) = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(in_stack_000000f8 + 0x3a8) = uVar3;
    *(undefined8 *)(in_stack_000000f8 + 0x3b8) = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined2 *)(in_stack_000000f8 + 0x728) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x3c8) = *(undefined8 *)(in_stack_000000f8 + 0xf8);
    *(undefined8 *)(in_stack_000000f8 + 0x3c0) = *(undefined8 *)(in_stack_000000f8 + 0xf0);
    *(undefined8 *)(in_stack_000000f8 + 0x3d0) = *(undefined8 *)(in_stack_000000f8 + 0x100);
    lVar8 = FUN_100f59450(*(undefined1 *)(in_stack_000000f8 + 0x218),unaff_x20 + 0x198);
    lVar6 = lVar8;
    if (lVar8 != 0) goto LAB_100fabbf8;
    if (*(long *)(unaff_x20 + 0x198) != -0x7fffffffffffffe9) {
      auVar9 = FUN_100f54700(in_stack_000000c8,*(long *)(unaff_x20 + 0x198),*in_stack_000000d8);
      lVar6 = auVar9._8_8_;
      if ((auVar9._0_8_ & 1) != 0) goto LAB_100fabbf8;
      lVar6 = *(long *)(unaff_x20 + 0x198);
      if (lVar6 != -0x7fffffffffffffe9) {
                    /* WARNING: Could not recover jumptable at 0x000100fa0ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar9 = (*(code *)(&UNK_100fa0ffc +
                           (ulong)*(ushort *)
                                   (&UNK_108c9ee52 +
                                   (lVar6 + 0x8000000000000001U & lVar6 >> 0x3f) * 2) * 4))
                           (in_stack_000000d8 + 0x4d5);
        return auVar9;
      }
    }
    FUN_101146714(&stack0x00005f80,*(undefined8 *)(in_stack_000000f8 + 0x98),
                  *(undefined8 *)(in_stack_000000f8 + 0xa0));
    __ZN15codex_utils_cli15config_override18CliConfigOverrides22prepend_root_overrides17h6ecafa415b7b9fd3E
              (in_stack_000000f8 + 0x1b8,&stack0x00005f80);
    *(undefined1 *)(in_stack_000000f8 + 0x6f6) = 0;
    _memcpy(&stack0x00010910,in_stack_000000c8,0x120);
    if (*(long *)(in_stack_000000f8 + 0x3a8) == -0x8000000000000000) {
      in_stack_00000100 = -0x8000000000000000;
    }
    else {
      func_0x000100025ae8(&stack0x00000100,(undefined8 *)(in_stack_000000f8 + 0x3a8));
    }
    if (*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) {
      func_0x000100025ae8(&stack0x0000e210,(long *)(in_stack_000000f8 + 0x3c0));
    }
    FUN_101177074(&stack0x0000e3d0,in_stack_000000f8 + 0x48);
    _memcpy(&stack0x00005f80,&stack0x00010910,0x120);
    _memcpy(&stack0x00000880,&stack0x00005f80,1000);
    _memcpy(in_stack_000000f8 + 0x750,&stack0x00000880,1000);
    *(undefined1 *)(in_stack_000000f8 + 0xb38) = 0;
    FUN_100f4eb24(&stack0x00005f80,in_stack_000000f8 + 0x750,in_stack_000000f0);
    if (in_stack_00010910 == -0x7ffffffffffffffe) {
      *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 3;
      uVar3 = 1;
      goto LAB_100fb1a40;
    }
    FUN_100e3d088(in_stack_000000f8 + 0x750);
    if (in_stack_00010910 == -0x7fffffffffffffff) {
      lVar6 = FUN_1088566c8(in_stack_00010918);
LAB_100fabbf8:
      if ((*(long *)(in_stack_000000f8 + 0x3c0) != -0x8000000000000000) &&
         (*(long *)(in_stack_000000f8 + 0x3c0) != 0)) {
        _free(*(undefined8 *)(in_stack_000000f8 + 0x3c8));
      }
      if ((*(long *)(in_stack_000000f8 + 0x3a8) != -0x8000000000000000) &&
         (*(long *)(in_stack_000000f8 + 0x3a8) != 0)) {
        in_stack_00010918 = *(long *)(in_stack_000000f8 + 0x3b0);
LAB_100fabc2c:
        _free(in_stack_00010918);
      }
      goto LAB_100fabc30;
    }
    lVar6 = FUN_100f46690(&stack0x000002a0);
    if (lVar6 != 0) goto LAB_100fabbf8;
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
      lVar8 = *(long *)(in_stack_000000f8 + 0xa0);
      if (lVar8 != 0) {
        puVar4 = (undefined8 *)(lVar6 + 8);
        do {
          if (puVar4[-1] != 0) {
            _free(*puVar4);
          }
          puVar4 = puVar4 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
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
    uVar5 = *(ulong *)(in_stack_000000f8 + 0x78);
    lVar8 = 0;
    goto joined_r0x000100fb1c88;
  }
LAB_100fabc30:
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
    lVar8 = *(long *)(in_stack_000000f8 + 0x98);
    lVar7 = *(long *)(in_stack_000000f8 + 0xa0);
    if (lVar7 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
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
  uVar5 = *(ulong *)(in_stack_000000f8 + 0x78);
  lVar8 = lVar6;
joined_r0x000100fb1c88:
  if ((uVar5 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(in_stack_000000f8 + 0x80));
  }
  uVar3 = 0;
  *(undefined1 *)(in_stack_000000f8 + 0x6f0) = 1;
LAB_100fb1a40:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar3;
  return auVar9;
code_r0x000100fa0d38:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005f80,s_features___false_108ad439b,&stack0x0000e3d0);
  if (in_stack_00010920 == in_stack_00010910) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00010910);
  }
  puVar4 = (undefined8 *)(in_stack_00010918 + in_stack_00010920 * 0x18);
  puVar4[1] = in_stack_00005f88;
  *puVar4 = in_stack_00005f80;
  puVar4[2] = in_stack_00005f90;
  in_stack_00010920 = in_stack_00010920 + 1;
  lVar6 = lVar6 + 0x18;
  lVar8 = lVar8 + -0x18;
  if (lVar8 == 0) goto LAB_100fa0d90;
  goto LAB_100fa0d14;
}

