
void FUN_100eea7a0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  undefined8 *param_4,long param_5,long *param_6)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  long *plVar11;
  undefined *puVar12;
  long *extraout_x9;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long *aplStack_11f8 [95];
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  long lStack_ef0;
  undefined1 auStack_ee8 [104];
  long lStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e00;
  undefined8 uStack_df0;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  long lStack_d60;
  long lStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined1 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined8 uStack_bd0;
  undefined1 uStack_bc8;
  long *plStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined *puStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  long *plStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_778 [840];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_80;
  
  uVar18 = param_3._8_8_;
  uVar17 = param_3._0_8_;
  uVar8 = param_2._8_8_;
  puVar16 = param_2._0_8_;
  plStack_b00 = (long *)0x0;
  bVar1 = *(byte *)(param_5 + 0xe88);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      func_0x000108a07af4(&UNK_10b236c08);
LAB_100eeace8:
      uVar8 = func_0x000108a07b10(&UNK_10b236c08);
      *(undefined1 *)(param_5 + 0xe8d) = 0;
      if ((*(byte *)(param_5 + 0xe8e) & 1) != 0) {
        func_0x000100deab40(param_5 + 0x3a0);
      }
      *(undefined1 *)(param_5 + 0xe8e) = 0;
      *(undefined1 *)(param_5 + 0xe88) = 2;
      __Unwind_Resume(uVar8);
      func_0x000108a07bc4();
      auVar19 = func_0x000108a07bc4();
      puVar13 = auVar19._0_8_;
      lVar4 = _malloc(0x6a20);
      if (lVar4 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6a20);
      }
      else {
        *(undefined8 *)(lVar4 + 0x6a18) = 0;
        *(undefined8 *)(lVar4 + 0x6a10) = 0;
        *(undefined8 *)(lVar4 + 0x6a08) = 0;
        *(undefined8 *)(lVar4 + 0x6a00) = 0;
        uStack_d38 = 0;
        uStack_d40 = 0;
        uStack_d28 = 0;
        uStack_d30 = 0;
        uStack_ef8 = 1;
        uStack_f00 = 1;
        uStack_e78 = 0;
        uStack_e00 = 0;
        uStack_df0 = 0;
        uStack_d78 = 0;
        uStack_d80 = 0;
        uStack_d68 = 0;
        uStack_d70 = 0;
        uStack_d50 = 0;
        uStack_d48 = 0;
        uStack_d18 = 0x400;
        uStack_d20 = 0x800;
        uStack_d08 = 0;
        uStack_d10 = 1;
        aplStack_11f8[0] = (long *)0x0;
        lStack_e80 = lVar4;
        lStack_d60 = lVar4;
        lStack_d58 = lVar4;
        iVar5 = _posix_memalign(aplStack_11f8,0x80,0x200);
        plVar7 = aplStack_11f8[0];
        if ((iVar5 == 0) && (aplStack_11f8[0] != (long *)0x0)) {
          _memcpy(aplStack_11f8[0],&uStack_f00,0x200);
          lVar4 = *plVar7;
          *plVar7 = lVar4 + 1;
          if (-1 < lVar4) {
            puVar9 = (undefined8 *)_malloc(0x18);
            if (puVar9 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            }
            else {
              puVar9[1] = 1;
              *puVar9 = 1;
              puVar9[2] = 0;
              lVar4 = *param_6;
              bVar3 = lVar4 != 2;
              if (bVar3) {
                _memcpy(aplStack_11f8,param_6 + 1,0x2f8);
                uStack_bd0 = 1;
              }
              else {
                uStack_bd0 = 2;
              }
              uStack_ef8 = 1;
              uStack_f00 = 1;
              lStack_ef0 = lVar4;
              _memcpy(auStack_ee8,aplStack_11f8,0x2f8);
              uStack_be8 = 0;
              uStack_bf0 = 0;
              uStack_be0 = 0;
              uStack_bd8 = bVar3;
              uStack_bc8 = bVar3;
              lVar4 = _malloc(0x340);
              if (lVar4 != 0) {
                _memcpy(lVar4,&uStack_f00,0x340);
                *puVar13 = plVar7;
                puVar13[1] = auVar19._8_8_;
                puVar13[2] = &UNK_10b236d58;
                puVar13[3] = puVar9;
                puVar13[4] = &UNK_10b236c20;
                puVar13[5] = lVar4;
                puVar13[6] = plVar7;
                return;
              }
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x340);
            }
          }
        }
        else {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
        }
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100eeb064);
      (*pcVar2)();
    }
    *(undefined4 *)(param_5 + 0xe89) = 0;
    lVar14 = *(long *)(param_5 + 0x390);
    *(long *)(param_5 + 0x398) = lVar14;
    *(undefined1 *)(param_5 + 0xe8e) = 1;
    lVar4 = param_5 + 0x3a0;
    _memcpy(lVar4,param_5,0x338);
    *(undefined1 *)(param_5 + 0xe8d) = 1;
    plVar7 = (long *)(param_5 + 0x6d8);
    *(undefined8 *)(param_5 + 0x700) = *(undefined8 *)(param_5 + 0x360);
    *(undefined8 *)(param_5 + 0x6f8) = *(undefined8 *)(param_5 + 0x358);
    *(undefined8 *)(param_5 + 0x710) = *(undefined8 *)(param_5 + 0x370);
    *(undefined8 *)(param_5 + 0x708) = *(undefined8 *)(param_5 + 0x368);
    *(undefined8 *)(param_5 + 0x720) = *(undefined8 *)(param_5 + 0x380);
    *(undefined8 *)(param_5 + 0x718) = *(undefined8 *)(param_5 + 0x378);
    *(undefined8 *)(param_5 + 0x728) = *(undefined8 *)(param_5 + 0x388);
    uVar8 = *(undefined8 *)(param_5 + 0x350);
    puVar16 = *(undefined **)(param_5 + 0x348);
    *(undefined8 *)(param_5 + 0x6e0) = *(undefined8 *)(param_5 + 0x340);
    *plVar7 = *(long *)(param_5 + 0x338);
    *(undefined8 *)(param_5 + 0x6f0) = uVar8;
    *(undefined **)(param_5 + 0x6e8) = puVar16;
    (**(code **)(*(long *)(lVar14 + 0x10) + 0x18))
              (param_5 + 0x730,
               *(long *)(lVar14 + 8) +
               (*(long *)(*(long *)(lVar14 + 0x10) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    *(undefined1 *)(param_5 + 0xe8c) = 1;
    lVar14 = *(long *)(*(long *)(param_5 + 0x398) + 0x20);
    (**(code **)(lVar14 + 0x18))
              ((undefined8 *)(param_5 + 0x740),
               *(long *)(*(long *)(param_5 + 0x398) + 0x18) +
               (*(long *)(lVar14 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    *(undefined1 *)(param_5 + 0xe8b) = 1;
    lVar14 = *(ulong *)(param_5 + 0x3a0) - 2;
    if (*(ulong *)(param_5 + 0x3a0) < 2) {
      lVar14 = 1;
    }
    uVar6 = func_0x000105ca32cc(lVar4 + *(long *)(&UNK_108cda810 + lVar14 * 8));
    plVar11 = *(long **)(param_5 + 0x740);
    if ((plVar11 != (long *)0x0) && (lVar14 = *plVar11, *plVar11 = lVar14 + 1, lVar14 < 0))
    goto LAB_100eeacd8;
    uStack_3a8 = *(undefined8 *)(param_5 + 0x748);
    plStack_3b0 = plVar11;
    func_0x000105ca2f08(uVar6,&plStack_3b0);
    if (*plVar7 != -0x8000000000000000) {
      uStack_390 = 0;
      puStack_398 = &UNK_108c56c70;
      uStack_380 = 0;
      uStack_388 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3a8 = 8;
      uStack_3a0 = 0;
      FUN_1011a27dc(&plStack_3b0,plVar7);
      uStack_aa8 = uStack_3a0;
      uStack_ab0 = uStack_3a8;
      uStack_a98 = uStack_390;
      puStack_aa0 = puStack_398;
      uStack_a88 = uStack_380;
      uStack_a90 = uStack_388;
      puVar16 = puStack_398;
      uVar8 = uStack_390;
      if (plStack_3b0 != (long *)0x8000000000000000) {
        plStack_b00 = plStack_3b0;
        uStack_af0 = uStack_3a0;
        uStack_af8 = uStack_3a8;
        uStack_ae0 = uStack_390;
        puStack_ae8 = puStack_398;
        uStack_ad0 = uStack_380;
        uStack_ad8 = uStack_388;
        uStack_ac0 = *(undefined8 *)(param_5 + 0x718);
        uStack_ac8 = *(undefined8 *)(param_5 + 0x710);
        lVar14 = *(ulong *)(param_5 + 0x3a0) - 2;
        if (*(ulong *)(param_5 + 0x3a0) < 2) {
          lVar14 = 1;
        }
        uVar6 = func_0x000105ca32cc(lVar4 + *(long *)(&UNK_108cda810 + lVar14 * 8));
        func_0x000105ca3144(uVar6,&plStack_b00);
      }
    }
    uStack_3a8 = 1;
    plStack_3b0 = (long *)0x1;
    uStack_3a0 = 0x12;
    uStack_80 = 0;
    plVar7 = (long *)_malloc(0x338);
    if (plVar7 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x338);
      goto LAB_100eeacd8;
    }
    _memcpy(plVar7,&plStack_3b0,0x338);
    lVar14 = *plVar7;
    *plVar7 = lVar14 + 1;
    if (lVar14 < 0) goto LAB_100eeacd8;
    *(undefined2 *)(param_5 + 0xe89) = 0x101;
    *(long **)(param_5 + 0x750) = plVar7;
    uVar6 = *(undefined8 *)(param_5 + 0x398);
    *(undefined1 *)(param_5 + 0xe8e) = 0;
    plStack_ab8 = plVar7;
    _memcpy(&plStack_3b0,lVar4,0x338);
    plVar11 = *(long **)(param_5 + 0x730);
    if ((plVar11 != (long *)0x0) && (lVar4 = *plVar11, *plVar11 = lVar4 + 1, lVar4 < 0))
    goto LAB_100eeacd8;
    uVar15 = *(undefined8 *)(param_5 + 0x738);
    *(undefined1 *)(param_5 + 0xe8a) = 0;
    _memcpy(&uStack_ab0,&plStack_3b0,0x338);
    _memcpy(param_5 + 0x758,&uStack_ab0,0x338);
    *(long **)(param_5 + 0xa90) = plVar11;
    *(undefined8 *)(param_5 + 0xa98) = uVar15;
    *(long **)(param_5 + 0xaa0) = plVar7;
    *(undefined8 *)(param_5 + 0xaa8) = uVar6;
    *(undefined1 *)(param_5 + 0xe80) = 0;
  }
  else if (bVar1 != 3) goto LAB_100eeace8;
  func_0x000100fcd1ac(&plStack_3b0,param_5 + 0x758,param_6);
  plVar7 = plStack_3b0;
  if (plStack_3b0 == (long *)0x16) {
    *param_4 = 0x8000000000000002;
    uVar10 = 3;
  }
  else {
    _memcpy(auStack_778,&uStack_3a8,0x348);
    FUN_100d76e48(param_5 + 0x758);
    if (plVar7 == (long *)0x15) {
      *(undefined2 *)(param_5 + 0xe8c) = 0;
      uStack_428 = *(undefined8 *)(param_5 + 0x738);
      uStack_430 = *(undefined8 *)(param_5 + 0x730);
      *(undefined1 *)(param_5 + 0xe89) = 0;
      puVar12 = *(undefined **)(param_5 + 0x750);
      *(undefined1 *)(param_5 + 0xe8b) = 0;
      uStack_aa8 = *(undefined8 *)(param_5 + 0x748);
      uStack_ab0 = *(undefined8 *)(param_5 + 0x740);
      uVar15 = *(undefined8 *)(param_5 + 0x6e0);
      uVar6 = *(undefined8 *)(param_5 + 0x6d8);
      uStack_3d8 = *(undefined8 *)(param_5 + 0x710);
      uStack_3e0 = *(undefined8 *)(param_5 + 0x708);
      uStack_3c8 = *(undefined8 *)(param_5 + 0x720);
      uStack_3d0 = *(undefined8 *)(param_5 + 0x718);
      uStack_3c0 = *(undefined8 *)(param_5 + 0x728);
      uStack_3f8 = *(undefined8 *)(param_5 + 0x6f0);
      plStack_400 = *(long **)(param_5 + 0x6e8);
      puStack_3e8 = *(undefined **)(param_5 + 0x700);
      uStack_3f0 = *(undefined8 *)(param_5 + 0x6f8);
      puVar13 = *(undefined8 **)(param_5 + 0x398);
      plVar11 = (long *)*puVar13;
      plVar11[0x3e] = plVar11[0x3e] + 1;
      lVar4 = *plVar11;
      *plVar11 = lVar4 + 1;
      plStack_3b0 = plStack_400;
      uStack_3a8 = uStack_3f8;
      uStack_3a0 = uStack_3f0;
      puStack_398 = puStack_3e8;
      uStack_390 = uStack_3e0;
      uStack_388 = uStack_3d8;
      uStack_380 = uStack_3d0;
      uStack_378 = uStack_3c8;
      uStack_370 = uStack_3c0;
      if (lVar4 < 0) {
LAB_100eeacd8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100eeacdc);
        (*pcVar2)();
      }
      plVar7 = (long *)puVar13[1];
      lVar4 = *plVar7;
      *plVar7 = lVar4 + 1;
      if (lVar4 < 0) goto LAB_100eeacd8;
      uVar8 = puVar13[3];
      puVar16 = (undefined *)puVar13[2];
      lVar4 = *(long *)puVar13[3];
      *(long *)puVar13[3] = lVar4 + 1;
      if (lVar4 < 0) goto LAB_100eeacd8;
      uVar18 = puVar13[5];
      uVar17 = puVar13[4];
      lVar4 = *(long *)puVar13[5];
      *(long *)puVar13[5] = lVar4 + 1;
      if (lVar4 < 0) goto LAB_100eeacd8;
      *(undefined2 *)(param_5 + 0xe89) = 0;
      *(undefined4 *)(param_5 + 0xe8b) = 0;
      uStack_420 = uStack_ab0;
      uStack_418 = uStack_aa8;
      uStack_410 = uStack_430;
      uStack_408 = uStack_428;
    }
    else {
      plStack_3b0 = plVar7;
      _memcpy(&uStack_3a8,auStack_778,0x348);
      FUN_100e7194c(&plStack_3b0);
      FUN_100d2f3dc(param_5 + 0x750);
      *(undefined2 *)(param_5 + 0xe89) = 0;
      plVar11 = *(long **)(param_5 + 0x740);
      plVar7 = extraout_x10;
      if (plVar11 != (long *)0x0) {
        lVar4 = *plVar11;
        *plVar11 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_5 + 0x740);
          plVar7 = extraout_x10_00;
        }
      }
      *(undefined1 *)(param_5 + 0xe8b) = 0;
      plVar11 = *(long **)(param_5 + 0x730);
      if (plVar11 != (long *)0x0) {
        lVar4 = *plVar11;
        *plVar11 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_5 + 0x730);
          plVar7 = extraout_x10_01;
        }
      }
      *(undefined1 *)(param_5 + 0xe8c) = 0;
      plVar11 = (long *)0x8000000000000000;
      if (*(long *)(param_5 + 0x6d8) != -0x8000000000000000) {
        lVar4 = *(long *)(param_5 + 0x6f8);
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(*(long *)(param_5 + 0x6f0) + lVar4 * -8 + -8);
        }
        func_0x000100cd7284(param_5 + 0x6d8);
        plVar11 = extraout_x9;
        plVar7 = extraout_x10_02;
      }
      *(undefined2 *)(param_5 + 0xe8d) = 0;
      puVar12 = &UNK_108cdc000;
      uVar15 = 0x8000000000000002;
      uVar6 = 0x8000000000000001;
    }
    param_4[5] = puStack_3e8;
    param_4[4] = uStack_3f0;
    param_4[7] = uStack_3d8;
    param_4[6] = uStack_3e0;
    param_4[9] = uStack_3c8;
    param_4[8] = uStack_3d0;
    param_4[1] = uVar15;
    *param_4 = uVar6;
    param_4[3] = uStack_3f8;
    param_4[2] = plStack_400;
    param_4[10] = uStack_3c0;
    param_4[0xb] = plVar11;
    param_4[0xc] = plVar7;
    param_4[0xe] = uVar8;
    param_4[0xd] = puVar16;
    param_4[0x10] = uVar18;
    param_4[0xf] = uVar17;
    param_4[0x11] = puVar12;
    uVar10 = 1;
    param_4[0x13] = uStack_408;
    param_4[0x12] = uStack_410;
    param_4[0x15] = uStack_418;
    param_4[0x14] = uStack_420;
  }
  *(undefined1 *)(param_5 + 0xe88) = uVar10;
  return;
}

