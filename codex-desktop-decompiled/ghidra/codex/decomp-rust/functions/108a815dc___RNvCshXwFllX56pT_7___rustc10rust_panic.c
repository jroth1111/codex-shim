
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] __RNvCshXwFllX56pT_7___rustc10rust_panic(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long extraout_x1;
  long extraout_x1_00;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_1d8;
  ulong *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 ******ppppppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined1 uStack_171;
  undefined1 *****pppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_151;
  undefined1 ****ppppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined1 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 *puStack_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  uStack_34 = __RNvCshXwFllX56pT_7___rustc18___rust_start_panic();
  puStack_28 = &uStack_34;
  puStack_20 = &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
  ;
  uStack_30 = FUN_10602995c(&uStack_11,s_5fatal_runtime_error__failed_to_i_108b3429e,&puStack_28);
  FUN_10603f834(&uStack_30);
  auVar19 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  pcStack_48 = __RNvCshXwFllX56pT_7___rustc26___rust_alloc_error_handler;
  puStack_50 = &stack0xfffffffffffffff0;
  __ZN3std5alloc8rust_oom17h57ea79c83371d333E(auVar19._8_8_,auVar19._0_8_);
  uStack_58 = 0x108a8163c;
  puVar9 = (undefined *)0x7b;
  puStack_60 = (undefined1 *)&puStack_50;
  uStack_70 = FUN_10602995c(&uStack_61,&UNK_109bd5732);
  FUN_10603f834(&uStack_70);
  auVar19 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  uVar7 = auVar19._8_8_;
  puVar2 = auVar19._0_8_;
  uStack_78 = 0x108a8166c;
  puVar17 = (undefined *)*puVar2;
  puVar13 = (undefined *)puVar2[2];
  ppuStack_80 = &puStack_60;
  if ((puVar9 <= puVar17 + -(long)puVar13) || (puVar13 == (undefined *)0x0)) {
LAB_108a81794:
    if (puVar9 < puVar17) {
      _memcpy(puVar13 + puVar2[1],uVar7,puVar9);
      uVar4 = 0;
      puVar2[2] = puVar13 + (long)puVar9;
      puVar10 = puVar9;
    }
    else {
      puVar13 = puVar9;
      if ((undefined *)0x7ffffffe < puVar9) {
        puVar13 = (undefined *)0x7fffffff;
      }
      puVar17 = (undefined *)_write(1,uVar7,puVar13);
      puVar13 = puVar17;
      if (puVar17 == (undefined *)0xffffffffffffffff) {
        puVar5 = (uint *)___error();
        puVar13 = (undefined *)((ulong)*puVar5 << 0x20 | 2);
      }
      puVar10 = puVar13;
      if (((ulong)puVar13 & 0xffffffff00000003) == 0x900000002) {
        puVar10 = puVar9;
      }
      if (puVar17 != (undefined *)0xffffffffffffffff) {
        puVar10 = puVar13;
      }
      uVar11 = 0;
      if (((ulong)puVar13 & 0xffffffff00000003) != 0x900000002) {
        uVar11 = (uint)(puVar17 == (undefined *)0xffffffffffffffff);
      }
      uVar4 = (ulong)uVar11;
      *(undefined1 *)(puVar2 + 3) = 0;
    }
LAB_108a81828:
    auVar19._8_8_ = puVar10;
    auVar19._0_8_ = uVar4;
    return auVar19;
  }
  puVar14 = (undefined *)0x0;
  lVar15 = puVar2[1];
  uStack_d8 = uVar7;
  do {
    while( true ) {
      puVar16 = puVar13 + -(long)puVar14;
      puVar3 = puVar16;
      if ((undefined *)0x7ffffffe < puVar16) {
        puVar3 = (undefined *)0x7fffffff;
      }
      puVar3 = (undefined *)_write(1,puVar14 + lVar15,puVar3);
      if (puVar3 == (undefined *)0xffffffffffffffff) break;
      *(undefined1 *)(puVar2 + 3) = 0;
LAB_108a81728:
      puVar10 = &UNK_10b4ad9c0;
      if (puVar3 == (undefined *)0x0) {
LAB_108a81760:
        uVar7 = uStack_d8;
        if (puVar14 != (undefined *)0x0) {
          _memmove(lVar15,puVar14 + lVar15,puVar16);
          puVar2[2] = puVar16;
          puVar13 = puVar16;
          uVar7 = uStack_d8;
        }
        uStack_d8 = uVar7;
        if (puVar10 == (undefined *)0x0) goto LAB_108a81794;
        uVar4 = 1;
        goto LAB_108a81828;
      }
      puVar14 = puVar3 + (long)puVar14;
      if (puVar13 <= puVar14) goto LAB_108a81738;
    }
    puVar5 = (uint *)___error();
    uVar11 = *puVar5;
    puVar10 = (undefined *)((ulong)uVar11 << 0x20 | 2);
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar3 = puVar16;
    if (uVar11 == 9) goto LAB_108a81728;
    if (uVar11 != 4) goto LAB_108a81760;
  } while (puVar14 < puVar13);
LAB_108a81738:
  if (puVar14 <= puVar13) {
    puVar2[2] = 0;
    puVar13 = (undefined *)0x0;
    uVar7 = uStack_d8;
    goto LAB_108a81794;
  }
  puVar10 = puVar13;
  auVar19 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (0,puVar14,puVar13,&UNK_10b4ae9b0);
  lVar12 = auVar19._8_8_;
  puVar6 = auVar19._0_8_;
  uStack_140 = 0x7fffffff;
  puStack_118 = &UNK_10b4ad9c0;
  uStack_108 = 2;
  uStack_e8 = 0x108a81864;
  puVar18 = (undefined *)*puVar6;
  puVar3 = (undefined *)puVar6[2];
  lVar8 = lVar12;
  puStack_138 = puVar17;
  puStack_130 = puVar16;
  lStack_128 = lVar15;
  puStack_120 = puVar14;
  puStack_110 = puVar13;
  puStack_100 = puVar9;
  puStack_f8 = puVar2;
  pppuStack_f0 = &ppuStack_80;
  if ((puVar18 + -(long)puVar3 < puVar10) && (puVar3 != (undefined *)0x0)) {
    puVar14 = (undefined *)0x0;
    lVar15 = puVar6[1];
    do {
      while( true ) {
        puVar9 = puVar3 + -(long)puVar14;
        puVar13 = puVar9;
        if ((undefined *)0x7ffffffe < puVar9) {
          puVar13 = (undefined *)0x7fffffff;
        }
        auVar20 = _write(1,puVar14 + lVar15,puVar13);
        if (auVar20._0_8_ == -1) break;
        *(undefined1 *)(puVar6 + 3) = 0;
LAB_108a8191c:
        lVar8 = auVar20._8_8_;
        puVar13 = &UNK_10b4ad9c0;
        if (auVar20._0_8_ == 0) {
LAB_108a81944:
          if (puVar14 == (undefined *)0x0) goto LAB_108a81960;
          _memmove(lVar15,puVar14 + lVar15,puVar9);
          lVar8 = extraout_x1;
          puVar3 = puVar9;
          goto LAB_108a81958;
        }
        puVar14 = puVar14 + auVar20._0_8_;
        if (puVar3 <= puVar14) goto LAB_108a8192c;
      }
      auVar19 = ___error();
      lVar8 = auVar19._8_8_;
      auVar20._8_8_ = lVar8;
      auVar20._0_8_ = puVar9;
      uVar11 = *auVar19._0_8_;
      puVar13 = (undefined *)((ulong)uVar11 << 0x20 | 2);
      *(undefined1 *)(puVar6 + 3) = 0;
      if (uVar11 == 9) goto LAB_108a8191c;
      if (uVar11 != 4) goto LAB_108a81944;
    } while (puVar14 < puVar3);
LAB_108a8192c:
    if (puVar3 < puVar14) {
LAB_108a81a50:
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,puVar14,puVar3,&UNK_10b4ae9b0);
      uStack_148 = 0x108a81a68;
      ppppuStack_150 = &pppuStack_f0;
      uStack_160 = FUN_10602995c(&uStack_151,&UNK_109bd5d34,0x7b);
      FUN_10603f834(&uStack_160);
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      uStack_168 = 0x108a81a98;
      pppppuStack_170 = &ppppuStack_150;
      uStack_180 = FUN_10602995c(&uStack_171,&UNK_109bd5d71,0x85);
      FUN_10603f834(&uStack_180);
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      pcStack_188 = FUN_108a81ac8;
      ppppppuStack_190 = &pppppuStack_170;
      lVar15 = _abort();
      pcStack_198 = FUN_108a81ad4;
      uStack_1d8 = lVar15 << 0x20 | 2;
      puStack_1d0 = &uStack_1d8;
      puStack_1c8 = &
                    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      puStack_1c0 = puVar3;
      lStack_1b8 = lVar12;
      puStack_1b0 = puVar10;
      puStack_1a8 = puVar6;
      puStack_1a0 = (undefined1 *)&ppppppuStack_190;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_failed_to_lock_mutex__108b34871,&puStack_1d0,&UNK_10b4add08);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108a81b20);
      (*pcVar1)();
    }
    puVar13 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
LAB_108a81958:
    puVar6[2] = puVar3;
LAB_108a81960:
    if (puVar13 != (undefined *)0x0) goto LAB_108a81a10;
  }
  if (puVar10 < puVar18) {
    _memcpy(puVar3 + puVar6[1],lVar12,puVar10);
    puVar13 = (undefined *)0x0;
    puVar6[2] = puVar3 + (long)puVar10;
    lVar8 = extraout_x1_00;
  }
  else {
    *(undefined1 *)(puVar6 + 3) = 1;
    if (puVar10 != (undefined *)0x0) {
      puVar3 = &UNK_10b4ad878;
      do {
        while( true ) {
          puVar13 = puVar10;
          if ((undefined *)0x7ffffffe < puVar10) {
            puVar13 = (undefined *)0x7fffffff;
          }
          auVar19 = _write(1,lVar12,puVar13);
          lVar8 = auVar19._8_8_;
          puVar13 = auVar19._0_8_;
          if (puVar13 == (undefined *)0xffffffffffffffff) break;
          if (puVar13 == (undefined *)0x0) goto LAB_108a819f8;
          puVar9 = puVar10 + -(long)puVar13;
          if (puVar10 < puVar13) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (puVar13,puVar10,puVar10,&UNK_10b4ad890);
            goto LAB_108a81a50;
          }
          lVar12 = lVar12 + (long)puVar13;
          puVar10 = puVar9;
          if (puVar9 == (undefined *)0x0) goto LAB_108a819f4;
        }
        auVar19 = ___error();
        lVar8 = auVar19._8_8_;
        if (*auVar19._0_8_ != 4) {
          puVar3 = (undefined *)((long)*auVar19._0_8_ << 0x20 | 2);
          goto LAB_108a819f8;
        }
      } while (puVar10 != (undefined *)0x0);
    }
LAB_108a819f4:
    puVar3 = (undefined *)0x0;
LAB_108a819f8:
    puVar13 = (undefined *)0x0;
    if (((ulong)puVar3 & 0xffffffff00000003) != 0x900000002) {
      puVar13 = puVar3;
    }
    *(undefined1 *)(puVar6 + 3) = 0;
  }
LAB_108a81a10:
  auVar21._8_8_ = lVar8;
  auVar21._0_8_ = puVar13;
  return auVar21;
}

