
void FUN_1039f5648(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  long *plStack_680;
  long *plStack_678;
  long *plStack_670;
  long *plStack_630;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long *plStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  ulong *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  ulong uStack_1e8;
  long *plStack_1e0;
  ulong uStack_128;
  long *plStack_120;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar12 = (long *)*param_2;
  plVar13 = (long *)param_2[1];
  lVar6 = param_2[2];
  lVar15 = lVar6 * 0x50;
  plVar14 = plVar13 + lVar6 * 10;
  plStack_110 = (long *)0x0;
  plStack_108 = (long *)0x8;
  plStack_100 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  plStack_b8 = (long *)0x8;
  plStack_b0 = (long *)0x0;
  plVar5 = plVar13;
  plStack_630 = plVar13;
  plStack_620 = plVar12;
  plStack_618 = plVar14;
  if (lVar6 != 0) {
    plVar16 = plVar13 + 10;
    do {
      while( true ) {
        plVar7 = plStack_b0;
        plVar8 = plStack_100;
        lStack_398 = plVar16[-7];
        puStack_3a0 = (ulong *)plVar16[-8];
        lStack_388 = plVar16[-5];
        lStack_390 = plVar16[-6];
        lStack_378 = plVar16[-3];
        lStack_380 = plVar16[-4];
        lStack_368 = plVar16[-1];
        lStack_370 = plVar16[-2];
        uStack_3a8 = plVar16[-9];
        lStack_3b0 = plVar16[-10];
        plVar5 = plVar14;
        if ((lStack_390 != -0x8000000000000000) || (lStack_398 != 0)) break;
        if (plStack_b0 == plStack_c0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc4733dac7ca45b98E(&plStack_c0);
        }
        plVar8 = plStack_b8 + (long)plVar7 * 10;
        plVar8[1] = uStack_3a8;
        *plVar8 = lStack_3b0;
        plVar8[3] = lStack_398;
        plVar8[2] = (long)puStack_3a0;
        plVar8[5] = lStack_388;
        plVar8[4] = lStack_390;
        plVar8[7] = lStack_378;
        plVar8[6] = lStack_380;
        plVar8[9] = lStack_368;
        plVar8[8] = lStack_370;
        plStack_b0 = (long *)((long)plVar7 + 1);
        plVar16 = plVar16 + 10;
        lVar15 = lVar15 + -0x50;
        if (lVar15 == 0) goto LAB_1039f57b8;
      }
      if (plStack_100 == plStack_110) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hc4733dac7ca45b98E(&plStack_110);
      }
      plVar7 = plStack_108 + (long)plVar8 * 10;
      plVar7[1] = uStack_3a8;
      *plVar7 = lStack_3b0;
      plVar7[3] = lStack_398;
      plVar7[2] = (long)puStack_3a0;
      plVar7[5] = lStack_388;
      plVar7[4] = lStack_390;
      plVar7[7] = lStack_378;
      plVar7[6] = lStack_380;
      plVar7[9] = lStack_368;
      plVar7[8] = lStack_370;
      plStack_100 = (long *)((long)plVar8 + 1);
      plVar16 = plVar16 + 10;
      lVar15 = lVar15 + -0x50;
    } while (lVar15 != 0);
  }
LAB_1039f57b8:
  func_0x0001039fd37c(plVar5,((ulong)((long)plVar14 - (long)plVar5) >> 4) * -0x3333333333333333);
  if (plVar12 != (long *)0x0) {
    _free(plVar13);
  }
  plVar7 = plStack_c0;
  plVar8 = plStack_100;
  plVar16 = plStack_108;
  plVar5 = plStack_110;
  plVar19 = plStack_b8 + (long)plStack_b0 * 10;
  plVar22 = plStack_108 + (long)plStack_100 * 10;
  lStack_3b0 = 0;
  plStack_1e0 = (long *)0x5;
  uStack_1e8 = 0;
  plStack_450 = plStack_b8;
  plStack_448 = plStack_b8;
  plStack_440 = plStack_c0;
  plStack_430 = plStack_108;
  plVar11 = plStack_b8;
  plVar12 = plStack_108;
  plVar14 = plStack_b8;
  plStack_438 = plVar19;
  plStack_428 = plVar22;
  plVar13 = plStack_b8;
  if (plStack_b8 != (long *)0x0) goto joined_r0x0001039f5888;
LAB_1039f5a10:
  plStack_3e8 = (long *)0x6;
LAB_1039f5a18:
  if (plVar12 != plVar22) {
    while( true ) {
      plVar13 = plVar12 + 10;
      __ZN18tracing_subscriber6filter3env9directive9Directive9to_static17h0d58dd0f0ee5bec7E
                (&plStack_420,plVar12);
      if (plStack_420 != (long *)0x6) break;
      plVar12 = plVar13;
      if (plVar13 == plVar22) goto LAB_1039f5c58;
    }
    plVar12 = plVar12 + 10;
    plStack_430 = plVar12;
    do {
      uVar18 = uStack_1e8;
      if (plStack_420 <= plStack_1e0) {
        plStack_1e0 = plStack_420;
      }
      puVar10 = &uStack_3a8;
      uVar17 = uStack_1e8;
      if (8 < uStack_1e8) {
        puVar10 = puStack_3a0;
        uVar17 = uStack_3a8;
      }
      uVar21 = 0;
      if (uVar17 == 0) {
LAB_1039f5afc:
        plStack_628 = plStack_418;
        plStack_630 = plStack_420;
        plStack_618 = plStack_408;
        plStack_620 = plStack_410;
        uStack_608 = uStack_3f8;
        uStack_610 = uStack_400;
        uStack_600 = uStack_3f0;
        puVar9 = puStack_3a0;
        puVar10 = &uStack_3a8;
        if (uVar18 < 9) {
          uVar18 = 8;
          puVar9 = &uStack_3a8;
          puVar10 = &uStack_1e8;
        }
        uVar17 = *puVar10;
        if (uVar17 == uVar18) {
          func_0x00010895d494(&lStack_3b0);
          lVar15 = uStack_3a8 - uVar21;
          puVar10 = &uStack_3a8;
          uVar17 = uStack_3a8;
          puVar9 = puStack_3a0;
        }
        else {
          lVar15 = uVar17 - uVar21;
        }
        if (uVar21 > uVar17) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108da0108,0x14,&UNK_10b2def08);
          goto LAB_1039f6004;
        }
        puVar9 = puVar9 + uVar21 * 7;
        if (uVar21 <= uVar17 && lVar15 != 0) {
          _memmove(puVar9 + 7,puVar9,lVar15 * 0x38);
        }
        *puVar10 = uVar17 + 1;
        puVar9[6] = uStack_600;
        puVar9[3] = (ulong)plStack_618;
        puVar9[2] = (ulong)plStack_620;
        puVar9[5] = uStack_608;
        puVar9[4] = uStack_610;
        puVar9[1] = (ulong)plStack_628;
        *puVar9 = (ulong)plStack_630;
      }
      else {
        if (uVar17 == 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          do {
            uVar1 = (uVar17 >> 1) + uVar21;
            cVar4 = __ZN89__LT_tracing_subscriber__filter__directive__StaticDirective_u20_as_u20_core__cmp__Ord_GT_3cmp17hc8b088303488fb70E
                              (puVar10 + uVar1 * 7,&plStack_420);
            if (cVar4 != '\x01') {
              uVar21 = uVar1;
            }
            uVar17 = uVar17 - (uVar17 >> 1);
          } while (1 < uVar17);
        }
        cVar4 = __ZN89__LT_tracing_subscriber__filter__directive__StaticDirective_u20_as_u20_core__cmp__Ord_GT_3cmp17hc8b088303488fb70E
                          (puVar10 + uVar21 * 7,&plStack_420);
        if (cVar4 != '\0') {
          if (cVar4 == -1) {
            uVar21 = uVar21 + 1;
          }
          goto LAB_1039f5afc;
        }
        puVar10 = &uStack_3a8;
        if (8 < uVar18) {
          puVar10 = puStack_3a0;
          uVar18 = uStack_3a8;
        }
        if (uVar18 <= uVar21) {
          func_0x000108a07bdc(uVar21,uVar18,&UNK_10b2de870);
          goto LAB_1039f6004;
        }
        puVar10 = puVar10 + uVar21 * 7;
        if (puVar10[4] == 0x8000000000000000 || puVar10[4] == 0) {
          uVar18 = puVar10[2];
          uVar17 = puVar10[3];
        }
        else {
          _free(puVar10[5]);
          uVar18 = puVar10[2];
          uVar17 = puVar10[3];
        }
        if (uVar17 != 0) {
          puVar20 = (undefined8 *)(uVar18 + 8);
          do {
            if (puVar20[-1] != 0) {
              _free(*puVar20);
            }
            puVar20 = puVar20 + 3;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (puVar10[1] != 0) {
          _free(uVar18);
        }
        puVar10[1] = (ulong)plStack_418;
        *puVar10 = (ulong)plStack_420;
        puVar10[3] = (ulong)plStack_408;
        puVar10[2] = (ulong)plStack_410;
        puVar10[5] = uStack_3f8;
        puVar10[4] = uStack_400;
        puVar10[6] = uStack_3f0;
      }
      plVar13 = plStack_448;
      if (plVar11 == (long *)0x0) goto LAB_1039f5a10;
joined_r0x0001039f5888:
      do {
        if (plVar14 == plVar19) {
          plStack_448 = plVar13;
          if (plVar7 != (long *)0x0) {
            _free(plVar11);
          }
          plVar11 = (long *)0x0;
          plStack_450 = (long *)0x0;
          plStack_3e8 = (long *)0x6;
          plVar14 = plVar19;
          goto LAB_1039f59b4;
        }
        plStack_b8 = (long *)plVar14[1];
        plStack_c0 = (long *)*plVar14;
        plStack_a8 = (long *)plVar14[3];
        plStack_b0 = (long *)plVar14[2];
        uStack_98 = plVar14[5];
        uStack_a0 = plVar14[4];
        uStack_88 = plVar14[7];
        uStack_90 = plVar14[6];
        uStack_78 = plVar14[9];
        uStack_80 = plVar14[8];
        plStack_628 = (long *)plVar14[1];
        plStack_630 = (long *)*plVar14;
        plStack_618 = (long *)plVar14[3];
        plStack_620 = (long *)plVar14[2];
        uStack_608 = plVar14[5];
        uStack_610 = plVar14[4];
        lStack_5f8 = plVar14[7];
        uStack_600 = plVar14[6];
        lStack_5e8 = plVar14[9];
        lStack_5f0 = plVar14[8];
        plVar14 = plVar14 + 10;
        __ZN18tracing_subscriber6filter3env9directive9Directive9to_static17h0d58dd0f0ee5bec7E
                  (&plStack_110,&plStack_630);
        if ((uStack_610 != 0x8000000000000000) && (uStack_610 != 0)) {
          _free(uStack_608);
        }
        plVar13 = plStack_620;
        if (plStack_618 != (long *)0x0) {
          lVar15 = 0;
          lVar6 = 1 - (long)plStack_618;
          do {
            if (*(long *)((long)plVar13 + lVar15) != 0) {
              _free(*(undefined8 *)((long)plVar13 + lVar15 + 8));
            }
            if (*(char *)((long)plVar13 + lVar15 + 0x18) != '\a') {
              func_0x0001039fbf1c();
            }
            lVar15 = lVar15 + 0x30;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 1);
        }
        if (plStack_628 != (long *)0x0) {
          _free(plVar13);
        }
        if ((lStack_5f8 != -0x8000000000000000) && (lStack_5f8 != 0)) {
          _free(lStack_5f0);
        }
        plVar13 = plVar19;
      } while (plStack_110 == (long *)0x6);
      plStack_678 = plStack_100;
      plStack_670 = plStack_108;
      uStack_688 = uStack_f0;
      plStack_680 = plStack_f8;
      uStack_698 = uStack_e0;
      uStack_690 = uStack_e8;
      plStack_3e8 = plStack_110;
      plStack_448 = plVar14;
LAB_1039f59b4:
      plStack_3e0 = plStack_670;
      plStack_3d8 = plStack_678;
      plStack_3d0 = plStack_680;
      uStack_3c8 = uStack_688;
      uStack_3c0 = uStack_690;
      uStack_3b8 = uStack_698;
      if (plStack_3e8 == (long *)0x6) goto LAB_1039f5a18;
      plStack_418 = plStack_670;
      plStack_408 = plStack_680;
      plStack_410 = plStack_678;
      uStack_3f8 = uStack_690;
      uStack_400 = uStack_688;
      uStack_3f0 = uStack_698;
      plStack_420 = plStack_3e8;
      if (plStack_3e8 == (long *)0x6) goto LAB_1039f5c64;
    } while( true );
  }
LAB_1039f5c58:
  plStack_420 = (long *)0x6;
  plStack_430 = plVar22;
LAB_1039f5c64:
  if ((plVar11 != (long *)0x0) &&
     (func_0x0001039fd37c(plVar14,((ulong)((long)plVar19 - (long)plVar14) >> 4) *
                                  -0x3333333333333333), plVar7 != (long *)0x0)) {
    _free(plVar11);
  }
  _memcpy(&plStack_630,&lStack_3b0,0x1d8);
  lStack_3b0 = 0;
  plStack_120 = (long *)0x5;
  uStack_128 = 0;
  plVar12 = plVar16 + (long)plVar8 * 10;
  plStack_3e8 = plVar16;
  plStack_3d8 = plVar5;
  plVar14 = plVar16;
  plStack_3d0 = plVar12;
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar16;
    do {
      while( true ) {
        uVar18 = uStack_128;
        plVar7 = plVar13 + 10;
        plVar8 = (long *)*plVar13;
        plVar14 = plVar7;
        plStack_3e0 = plVar7;
        if (plVar8 == (long *)0x6) goto LAB_1039f5f6c;
        plStack_110 = plVar8;
        plStack_100 = (long *)plVar13[2];
        plStack_108 = (long *)plVar13[1];
        uStack_f0 = plVar13[4];
        plStack_f8 = (long *)plVar13[3];
        uStack_c8 = plVar13[9];
        uStack_d0 = plVar13[8];
        uStack_d8 = plVar13[7];
        uStack_e0 = plVar13[6];
        uStack_e8 = plVar13[5];
        plVar14 = plVar12;
        plVar13 = plVar7;
        if (plVar8 < plStack_120) break;
        if (uStack_128 < 9) goto LAB_1039f5d7c;
LAB_1039f5d9c:
        uVar17 = 0;
        uVar21 = uStack_3a8;
        puVar10 = puStack_3a0;
        if (uStack_3a8 != 0) goto LAB_1039f5da8;
LAB_1039f5e10:
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        plStack_b8 = plStack_108;
        plStack_c0 = plStack_110;
        plStack_a8 = plStack_f8;
        plStack_b0 = plStack_100;
        puVar9 = puStack_3a0;
        puVar10 = &uStack_3a8;
        if (uVar18 < 9) {
          uVar18 = 8;
          puVar9 = &uStack_3a8;
          puVar10 = &uStack_128;
        }
        uVar21 = *puVar10;
        if (uVar21 == uVar18) {
          func_0x00010895d6f8(&lStack_3b0);
          lVar15 = uStack_3a8 - uVar17;
          puVar10 = &uStack_3a8;
          uVar21 = uStack_3a8;
          puVar9 = puStack_3a0;
        }
        else {
          lVar15 = uVar21 - uVar17;
        }
        if (uVar17 > uVar21) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108da0108,0x14,&UNK_10b2def08);
          goto LAB_1039f6004;
        }
        puVar9 = puVar9 + uVar17 * 10;
        if (uVar17 <= uVar21 && lVar15 != 0) {
          _memmove(puVar9 + 10,puVar9,lVar15 * 0x50);
        }
        *puVar10 = uVar21 + 1;
        plVar8 = plStack_c0;
        puVar9[1] = (ulong)plStack_b8;
        *puVar9 = (ulong)plVar8;
        uVar2 = uStack_78;
        uVar1 = uStack_80;
        uVar21 = uStack_90;
        uVar17 = uStack_98;
        uVar18 = uStack_a0;
        plVar11 = plStack_a8;
        plVar8 = plStack_b0;
        puVar9[7] = uStack_88;
        puVar9[6] = uVar21;
        puVar9[9] = uVar2;
        puVar9[8] = uVar1;
        puVar9[3] = (ulong)plVar11;
        puVar9[2] = (ulong)plVar8;
        puVar9[5] = uVar17;
        puVar9[4] = uVar18;
        if (plVar7 == plVar12) goto LAB_1039f5f6c;
      }
      plStack_120 = plVar8;
      if (8 < uStack_128) goto LAB_1039f5d9c;
LAB_1039f5d7c:
      uVar21 = uStack_128;
      puVar10 = &uStack_3a8;
      if (uStack_128 == 0) {
        uVar17 = 0;
        goto LAB_1039f5e10;
      }
LAB_1039f5da8:
      if (uVar21 == 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          uVar1 = (uVar21 >> 1) + uVar17;
          cVar4 = __ZN88__LT_tracing_subscriber__filter__env__directive__Directive_u20_as_u20_core__cmp__Ord_GT_3cmp17h18f9e76b1aacda50E
                            (puVar10 + uVar1 * 10,&plStack_110);
          if (cVar4 != '\x01') {
            uVar17 = uVar1;
          }
          uVar21 = uVar21 - (uVar21 >> 1);
        } while (1 < uVar21);
      }
      cVar4 = __ZN88__LT_tracing_subscriber__filter__env__directive__Directive_u20_as_u20_core__cmp__Ord_GT_3cmp17h18f9e76b1aacda50E
                        (puVar10 + uVar17 * 10,&plStack_110);
      if (cVar4 != '\0') {
        if (cVar4 == -1) {
          uVar17 = uVar17 + 1;
        }
        goto LAB_1039f5e10;
      }
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      plStack_b8 = plStack_108;
      plStack_c0 = plStack_110;
      plStack_a8 = plStack_f8;
      plStack_b0 = plStack_100;
      puVar10 = &uStack_3a8;
      if (8 < uVar18) {
        puVar10 = puStack_3a0;
        uVar18 = uStack_3a8;
      }
      if (uVar18 <= uVar17) {
        func_0x000108a07bdc(uVar17,uVar18,&UNK_10b2de870);
LAB_1039f6004:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1039f6008);
        (*pcVar3)();
      }
      puVar10 = puVar10 + uVar17 * 10;
      if (puVar10[4] != 0x8000000000000000 && puVar10[4] != 0) {
        _free(puVar10[5]);
      }
      func_0x0001039fd918(puVar10 + 1);
      if (puVar10[7] != 0x8000000000000000 && puVar10[7] != 0) {
        _free(puVar10[8]);
      }
      plVar8 = plStack_b0;
      puVar10[3] = (ulong)plStack_a8;
      puVar10[2] = (ulong)plVar8;
      uVar18 = uStack_a0;
      puVar10[5] = uStack_98;
      puVar10[4] = uVar18;
      uVar18 = uStack_90;
      puVar10[7] = uStack_88;
      puVar10[6] = uVar18;
      uVar18 = uStack_80;
      puVar10[9] = uStack_78;
      puVar10[8] = uVar18;
      plVar8 = plStack_c0;
      puVar10[1] = (ulong)plStack_b8;
      *puVar10 = (ulong)plVar8;
    } while (plVar7 != plVar12);
  }
LAB_1039f5f6c:
  func_0x0001039fd37c(plVar14,((ulong)((long)plVar12 - (long)plVar14) >> 4) * -0x3333333333333333);
  if (plVar5 != (long *)0x0) {
    _free(plVar16);
  }
  _memcpy(param_1,&lStack_3b0,0x298);
  _memcpy(param_1 + 0x298,&plStack_630,0x1d8);
  return;
}

