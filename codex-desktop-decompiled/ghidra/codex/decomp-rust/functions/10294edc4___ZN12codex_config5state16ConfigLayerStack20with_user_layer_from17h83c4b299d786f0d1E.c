
void __ZN12codex_config5state16ConfigLayerStack20with_user_layer_from17h83c4b299d786f0d1E
               (ulong *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uStack_9f0;
  long *plStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d0;
  long *plStack_9c8;
  ulong uStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  long lStack_9a8;
  long lStack_9a0;
  long lStack_998;
  long lStack_990;
  long lStack_988;
  long lStack_980;
  long lStack_978;
  long lStack_970;
  long lStack_968;
  long lStack_960;
  long lStack_958;
  long lStack_950;
  long lStack_948;
  long lStack_940;
  long lStack_938;
  long lStack_930;
  long lStack_928;
  long lStack_920;
  long lStack_918;
  long lStack_910;
  long lStack_908;
  long lStack_900;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  long *plStack_388;
  long *plStack_380;
  ulong uStack_378;
  long *plStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *plStack_a0;
  ulong uStack_98;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  
  plVar12 = *(long **)(param_3 + 0x930);
  lVar6 = *(long *)(param_3 + 0x938);
  lVar7 = lVar6 * 0xe8;
  plVar5 = plVar12;
  do {
    plVar13 = plVar5;
    if (lVar7 == 0) goto LAB_10294ee30;
    lVar7 = lVar7 + -0xe8;
    plVar5 = plVar13 + 0x1d;
  } while (*plVar13 != 2);
  FUN_102ae0100(&plStack_388,plVar13);
  if (plStack_388 == (long *)0x7) {
LAB_10294ee30:
    uStack_9f0 = 0;
    plStack_9e8 = (long *)0x8;
    uStack_9e0 = 0;
  }
  else {
    plVar5 = (long *)_malloc(0x3a0);
    if (plVar5 == (long *)0x0) {
      func_0x0001087c9084(8,0x3a0);
      goto LAB_10294f578;
    }
    plVar5[0x19] = lStack_2c0;
    plVar5[0x18] = lStack_2c8;
    plVar5[0x1b] = lStack_2b0;
    plVar5[0x1a] = lStack_2b8;
    plVar5[0x1c] = lStack_2a8;
    plVar5[0x11] = lStack_300;
    plVar5[0x10] = lStack_308;
    plVar5[0x13] = lStack_2f0;
    plVar5[0x12] = lStack_2f8;
    plVar5[0x15] = lStack_2e0;
    plVar5[0x14] = lStack_2e8;
    plVar5[0x17] = lStack_2d0;
    plVar5[0x16] = lStack_2d8;
    plVar5[9] = lStack_340;
    plVar5[8] = lStack_348;
    plVar5[0xb] = lStack_330;
    plVar5[10] = lStack_338;
    plVar5[0xd] = lStack_320;
    plVar5[0xc] = lStack_328;
    plVar5[0xf] = lStack_310;
    plVar5[0xe] = lStack_318;
    plVar5[1] = (long)plStack_380;
    *plVar5 = (long)plStack_388;
    plVar5[3] = (long)plStack_370;
    plVar5[2] = uStack_378;
    plVar5[5] = lStack_360;
    plVar5[4] = lStack_368;
    plVar5[7] = lStack_350;
    plVar5[6] = lStack_358;
    uStack_88 = 4;
    uVar15 = 1;
    plVar13 = plVar13 + 0x1d;
    plStack_80 = plVar5;
    while (plVar14 = plVar13, uStack_78 = uVar15, plVar14 != plVar12 + lVar6 * 0x1d) {
      plVar13 = plVar14 + 0x1d;
      if (*plVar14 == 2) {
        FUN_102ae0100(&lStack_9b8,plVar14);
        if (lStack_9b8 == 7) break;
        if (uVar15 == uStack_88) {
          FUN_10891a26c(&uStack_88,uVar15,1,8,0xe8);
          plVar5 = plStack_80;
        }
        plVar8 = plVar5 + uVar15 * 0x1d;
        plVar8[3] = lStack_9a0;
        plVar8[2] = lStack_9a8;
        plVar8[5] = lStack_990;
        plVar8[4] = lStack_998;
        plVar8[1] = lStack_9b0;
        *plVar8 = lStack_9b8;
        plVar8[0xb] = lStack_960;
        plVar8[10] = lStack_968;
        plVar8[0xd] = lStack_950;
        plVar8[0xc] = lStack_958;
        plVar8[7] = lStack_980;
        plVar8[6] = lStack_988;
        plVar8[9] = lStack_970;
        plVar8[8] = lStack_978;
        plVar8[0x13] = lStack_920;
        plVar8[0x12] = lStack_928;
        plVar8[0x15] = lStack_910;
        plVar8[0x14] = lStack_918;
        plVar8[0xf] = lStack_940;
        plVar8[0xe] = lStack_948;
        plVar8[0x11] = lStack_930;
        plVar8[0x10] = lStack_938;
        plVar8[0x1c] = lStack_8d8;
        plVar8[0x19] = lStack_8f0;
        plVar8[0x18] = lStack_8f8;
        plVar8[0x1b] = lStack_8e0;
        plVar8[0x1a] = lStack_8e8;
        plVar8[0x17] = lStack_900;
        plVar8[0x16] = lStack_908;
        uVar15 = uVar15 + 1;
      }
    }
    plStack_9e8 = plStack_80;
    uStack_9f0 = uStack_88;
    uStack_9e0 = uStack_78;
  }
  plVar12 = *(long **)(param_2 + 0x930);
  lVar6 = *(long *)(param_2 + 0x938);
  lVar7 = lVar6 * 0xe8;
  plVar5 = plVar12;
  do {
    plVar13 = plVar5;
    if (lVar7 == 0) goto LAB_10294efd0;
    lVar7 = lVar7 + -0xe8;
    plVar5 = plVar13 + 0x1d;
  } while (*plVar13 == 2);
  FUN_102ae0100(&plStack_388,plVar13);
  if (plStack_388 == (long *)0x7) {
LAB_10294efd0:
    uStack_9d0 = 0;
    plStack_9c8 = (long *)0x8;
    uStack_9c0 = 0;
  }
  else {
    plVar5 = (long *)_malloc(0x3a0);
    if (plVar5 == (long *)0x0) {
      func_0x0001087c9084(8,0x3a0);
LAB_10294f578:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10294f57c);
      (*pcVar4)();
    }
    plVar5[0x19] = lStack_2c0;
    plVar5[0x18] = lStack_2c8;
    plVar5[0x1b] = lStack_2b0;
    plVar5[0x1a] = lStack_2b8;
    plVar5[0x1c] = lStack_2a8;
    plVar5[0x11] = lStack_300;
    plVar5[0x10] = lStack_308;
    plVar5[0x13] = lStack_2f0;
    plVar5[0x12] = lStack_2f8;
    plVar5[0x15] = lStack_2e0;
    plVar5[0x14] = lStack_2e8;
    plVar5[0x17] = lStack_2d0;
    plVar5[0x16] = lStack_2d8;
    plVar5[9] = lStack_340;
    plVar5[8] = lStack_348;
    plVar5[0xb] = lStack_330;
    plVar5[10] = lStack_338;
    plVar5[0xd] = lStack_320;
    plVar5[0xc] = lStack_328;
    plVar5[0xf] = lStack_310;
    plVar5[0xe] = lStack_318;
    plVar5[1] = (long)plStack_380;
    *plVar5 = (long)plStack_388;
    plVar5[3] = (long)plStack_370;
    plVar5[2] = uStack_378;
    plVar5[5] = lStack_360;
    plVar5[4] = lStack_368;
    plVar5[7] = lStack_350;
    plVar5[6] = lStack_358;
    uStack_88 = 4;
    uVar15 = 1;
    plVar13 = plVar13 + 0x1d;
    plStack_80 = plVar5;
    while (plVar14 = plVar13, uStack_78 = uVar15, plVar14 != plVar12 + lVar6 * 0x1d) {
      plVar13 = plVar14 + 0x1d;
      if (*plVar14 != 2) {
        FUN_102ae0100(&lStack_9b8,plVar14);
        if (lStack_9b8 == 7) break;
        if (uVar15 == uStack_88) {
          FUN_10891a26c(&uStack_88,uVar15,1,8,0xe8);
          plVar5 = plStack_80;
        }
        plVar8 = plVar5 + uVar15 * 0x1d;
        plVar8[3] = lStack_9a0;
        plVar8[2] = lStack_9a8;
        plVar8[5] = lStack_990;
        plVar8[4] = lStack_998;
        plVar8[1] = lStack_9b0;
        *plVar8 = lStack_9b8;
        plVar8[0xb] = lStack_960;
        plVar8[10] = lStack_968;
        plVar8[0xd] = lStack_950;
        plVar8[0xc] = lStack_958;
        plVar8[7] = lStack_980;
        plVar8[6] = lStack_988;
        plVar8[9] = lStack_970;
        plVar8[8] = lStack_978;
        plVar8[0x13] = lStack_920;
        plVar8[0x12] = lStack_928;
        plVar8[0x15] = lStack_910;
        plVar8[0x14] = lStack_918;
        plVar8[0xf] = lStack_940;
        plVar8[0xe] = lStack_948;
        plVar8[0x11] = lStack_930;
        plVar8[0x10] = lStack_938;
        plVar8[0x1c] = lStack_8d8;
        plVar8[0x19] = lStack_8f0;
        plVar8[0x18] = lStack_8f8;
        plVar8[0x1b] = lStack_8e0;
        plVar8[0x1a] = lStack_8e8;
        plVar8[0x17] = lStack_900;
        plVar8[0x16] = lStack_908;
        uVar15 = uVar15 + 1;
      }
    }
    plStack_9c8 = plStack_80;
    uStack_9d0 = uStack_88;
    uStack_9c0 = uStack_78;
  }
  plVar12 = plStack_9e8 + uStack_9e0 * 0x1d;
  plStack_388 = plStack_9e8;
  uStack_378 = uStack_9f0;
  plVar5 = plStack_9e8;
  plStack_380 = plStack_9e8;
  plStack_370 = plVar12;
  if (uStack_9e0 != 0) {
    do {
      uVar15 = uStack_9c0;
      plVar13 = plVar5 + 0x1d;
      lVar6 = *plVar5;
      plStack_380 = plVar13;
      if (lVar6 == 7) goto LAB_10294f428;
      lStack_9b0 = plVar5[1];
      lStack_9b8 = lVar6;
      if (uStack_9c0 != 0) {
        lVar7 = 0;
        lVar17 = uStack_9c0 * 0xe8;
        uVar9 = 0x14;
        if (lStack_9b0 != -0x8000000000000000) {
          uVar9 = 0x15;
        }
        do {
          lVar11 = *(long *)((long)plStack_9c8 + lVar7);
          if (lVar11 < 3) {
            uVar10 = 0;
            if (lVar11 != 0) {
              if (lVar11 == 1) {
                uVar10 = 10;
              }
              else {
                uVar10 = 0x14;
                if (*(long *)((long)plStack_9c8 + lVar7 + 8) != -0x8000000000000000) {
                  uVar10 = 0x15;
                }
              }
            }
          }
          else {
            uVar10 = 0x28;
            if (lVar11 != 5) {
              uVar10 = 0x32;
            }
            uVar1 = 0x19;
            if (lVar11 != 3) {
              uVar1 = 0x1e;
            }
            if (lVar11 < 5) {
              uVar10 = uVar1;
            }
          }
          if (lVar6 < 3) {
            if (lVar6 != 0) {
              uVar1 = 10;
              if (lVar6 != 1) {
                uVar1 = uVar9;
              }
              goto joined_r0x00010294f26c;
            }
            if (uVar10 != 0) goto LAB_10294f344;
          }
          else {
            uVar1 = 0x28;
            if (lVar6 != 5) {
              uVar1 = 0x32;
            }
            uVar2 = 0x19;
            if (lVar6 != 3) {
              uVar2 = 0x1e;
            }
            if (lVar6 < 5) {
              uVar1 = uVar2;
            }
joined_r0x00010294f26c:
            if (uVar1 < uVar10) {
LAB_10294f344:
              lStack_900 = plVar5[0x17];
              lStack_908 = plVar5[0x16];
              lStack_8f0 = plVar5[0x19];
              lStack_8f8 = plVar5[0x18];
              lStack_8e0 = plVar5[0x1b];
              lStack_8e8 = plVar5[0x1a];
              lStack_8d8 = plVar5[0x1c];
              lStack_940 = plVar5[0xf];
              lStack_948 = plVar5[0xe];
              lStack_930 = plVar5[0x11];
              lStack_938 = plVar5[0x10];
              lStack_920 = plVar5[0x13];
              lStack_928 = plVar5[0x12];
              lStack_910 = plVar5[0x15];
              lStack_918 = plVar5[0x14];
              lStack_980 = plVar5[7];
              lStack_988 = plVar5[6];
              lStack_970 = plVar5[9];
              lStack_978 = plVar5[8];
              lStack_960 = plVar5[0xb];
              lStack_968 = plVar5[10];
              lStack_950 = plVar5[0xd];
              lStack_958 = plVar5[0xc];
              lStack_9a0 = plVar5[3];
              lStack_9a8 = plVar5[2];
              lStack_990 = plVar5[5];
              lStack_998 = plVar5[4];
              if (uStack_9c0 == uStack_9d0) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hdcc850520a97caa4E(&uStack_9d0);
              }
              plVar5 = (long *)((long)plStack_9c8 + lVar7);
              _memmove(plVar5 + 0x1d,plVar5,lVar17 - lVar7);
              plVar5[0x19] = lStack_8f0;
              plVar5[0x18] = lStack_8f8;
              plVar5[0x1b] = lStack_8e0;
              plVar5[0x1a] = lStack_8e8;
              plVar5[0x11] = lStack_930;
              plVar5[0x10] = lStack_938;
              plVar5[0x13] = lStack_920;
              plVar5[0x12] = lStack_928;
              plVar5[0x15] = lStack_910;
              plVar5[0x14] = lStack_918;
              plVar5[0x17] = lStack_900;
              plVar5[0x16] = lStack_908;
              plVar5[9] = lStack_970;
              plVar5[8] = lStack_978;
              plVar5[0xb] = lStack_960;
              plVar5[10] = lStack_968;
              plVar5[0x1c] = lStack_8d8;
              plVar5[0xd] = lStack_950;
              plVar5[0xc] = lStack_958;
              plVar5[0xf] = lStack_940;
              plVar5[0xe] = lStack_948;
              plVar5[1] = lStack_9b0;
              *plVar5 = lStack_9b8;
              plVar5[3] = lStack_9a0;
              plVar5[2] = lStack_9a8;
              plVar5[5] = lStack_990;
              plVar5[4] = lStack_998;
              plVar5[7] = lStack_980;
              plVar5[6] = lStack_988;
              goto joined_r0x00010294f418;
            }
          }
          lVar7 = lVar7 + 0xe8;
        } while (lVar17 - lVar7 != 0);
      }
      lStack_900 = plVar5[0x17];
      lStack_908 = plVar5[0x16];
      lStack_8f0 = plVar5[0x19];
      lStack_8f8 = plVar5[0x18];
      lStack_8e0 = plVar5[0x1b];
      lStack_8e8 = plVar5[0x1a];
      lStack_8d8 = plVar5[0x1c];
      lStack_940 = plVar5[0xf];
      lStack_948 = plVar5[0xe];
      lStack_930 = plVar5[0x11];
      lStack_938 = plVar5[0x10];
      lStack_920 = plVar5[0x13];
      lStack_928 = plVar5[0x12];
      lStack_910 = plVar5[0x15];
      lStack_918 = plVar5[0x14];
      lStack_980 = plVar5[7];
      lStack_988 = plVar5[6];
      lStack_970 = plVar5[9];
      lStack_978 = plVar5[8];
      lStack_960 = plVar5[0xb];
      lStack_968 = plVar5[10];
      lStack_950 = plVar5[0xd];
      lStack_958 = plVar5[0xc];
      lStack_9a0 = plVar5[3];
      lStack_9a8 = plVar5[2];
      lStack_990 = plVar5[5];
      lStack_998 = plVar5[4];
      if (uStack_9c0 == uStack_9d0) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hdcc850520a97caa4E(&uStack_9d0);
      }
      plVar5 = plStack_9c8 + uVar15 * 0x1d;
      plVar5[0x19] = lStack_8f0;
      plVar5[0x18] = lStack_8f8;
      plVar5[0x1b] = lStack_8e0;
      plVar5[0x1a] = lStack_8e8;
      plVar5[0x11] = lStack_930;
      plVar5[0x10] = lStack_938;
      plVar5[0x13] = lStack_920;
      plVar5[0x12] = lStack_928;
      plVar5[0x15] = lStack_910;
      plVar5[0x14] = lStack_918;
      plVar5[0x17] = lStack_900;
      plVar5[0x16] = lStack_908;
      plVar5[9] = lStack_970;
      plVar5[8] = lStack_978;
      plVar5[0xb] = lStack_960;
      plVar5[10] = lStack_968;
      plVar5[0x1c] = lStack_8d8;
      plVar5[0xd] = lStack_950;
      plVar5[0xc] = lStack_958;
      plVar5[0xf] = lStack_940;
      plVar5[0xe] = lStack_948;
      plVar5[1] = lStack_9b0;
      *plVar5 = lStack_9b8;
      plVar5[3] = lStack_9a0;
      plVar5[2] = lStack_9a8;
      plVar5[5] = lStack_990;
      plVar5[4] = lStack_998;
      plVar5[7] = lStack_980;
      plVar5[6] = lStack_988;
joined_r0x00010294f418:
      uStack_9c0 = uVar15 + 1;
      plVar5 = plVar13;
    } while (plVar13 != plVar12);
    uStack_9c0 = uVar15 + 1;
    plStack_380 = plVar12;
  }
LAB_10294f428:
  lVar6 = ((ulong)((long)plVar12 - (long)plStack_380) >> 3) * 0x34f72c234f72c235 + 1;
  plVar5 = plStack_380;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
    FUN_102a184bc(plVar5);
    plVar5 = plVar5 + 0x1d;
  }
  if (uStack_9f0 != 0) {
    _free(plStack_9e8);
  }
  lVar6 = uStack_9c0 * 0xe8;
  uVar15 = uStack_9c0;
  do {
    lVar7 = lVar6;
    if (lVar7 == 0) break;
    uVar15 = uVar15 - 1;
    lVar6 = lVar7 + -0xe8;
  } while (*(long *)((long)plStack_9c8 + lVar7 + -0xe8) != 2);
  FUN_102c0d8cc(&lStack_9b8,param_2 + 0x2f8);
  FUN_102c17308(&plStack_388,param_2 + 0x10);
  uVar3 = *(undefined1 *)(param_2 + 0x958);
  uVar16 = 0x8000000000000000;
  if (*(long *)(param_2 + 0x940) != -0x8000000000000000) {
    FUN_102a4a72c(&uStack_88,*(undefined8 *)(param_2 + 0x948),*(undefined8 *)(param_2 + 0x950));
    uStack_98 = uStack_78;
    plStack_a0 = plStack_80;
    uVar16 = uStack_88;
  }
  param_1[0x127] = uStack_9c0;
  param_1[0x126] = (ulong)plStack_9c8;
  param_1[0x125] = uStack_9d0;
  *param_1 = (ulong)(lVar7 != 0);
  param_1[1] = uVar15;
  _memcpy(param_1 + 0x5f,&lStack_9b8,0x630);
  _memcpy(param_1 + 2,&plStack_388,0x2e8);
  *(undefined1 *)(param_1 + 299) = uVar3;
  param_1[0x128] = uVar16;
  param_1[0x12a] = uStack_98;
  param_1[0x129] = (ulong)plStack_a0;
  return;
}

