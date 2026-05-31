
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
__ZN14rama_http_core7headers24content_length_parse_all17h8d4553852469ef00E(undefined8 param_1)

{
  ushort *puVar1;
  ulong uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong uVar16;
  ulong extraout_x1_03;
  long *plVar17;
  uint *puVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  ulong unaff_x20;
  ulong unaff_x21;
  long *plVar25;
  long unaff_x22;
  long *plVar26;
  ulong unaff_x24;
  undefined8 *puVar27;
  char cVar28;
  long lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long *plStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long *plStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined1 ***pppuStack_240;
  undefined8 uStack_238;
  undefined4 uStack_228;
  undefined1 uStack_224;
  undefined8 uStack_220;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  ushort uStack_208;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  ushort uStack_1c8;
  byte bStack_1c6;
  undefined4 uStack_1c5;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  uint *puStack_130;
  int aiStack_128 [2];
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  uint auStack_d8 [2];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  byte *pbStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  
  lStack_b8 = 0x18;
  uStack_c0 = 0;
  lStack_a8 = 0;
  pbStack_b0 = (byte *)0x0;
  FUN_105ab25ac(auStack_d8,param_1,&uStack_c0);
  uVar15 = unaff_x20;
  if ((auStack_d8[0] & 1) == 0) {
LAB_105aa6610:
    unaff_x22 = 0;
    unaff_x20 = uVar15;
LAB_105aa6614:
    auVar31._8_8_ = unaff_x20;
    auVar31._0_8_ = unaff_x22;
    return auVar31;
  }
  uVar15 = *(ulong *)(uStack_c8 + 0x28);
  if (uStack_d0 < uVar15) {
    puVar18 = (uint *)(*(long *)(uStack_c8 + 0x20) + uStack_d0 * 0x68);
    cVar28 = (*puVar18 & 1) != 0;
    if ((bool)cVar28) {
      unaff_x24 = *(ulong *)(puVar18 + 4);
    }
    unaff_x22 = 0;
    bVar8 = false;
    do {
      if (bVar8) {
        uVar15 = *(ulong *)(uStack_c8 + 0x40);
        if (uVar15 <= unaff_x21) goto LAB_105aa6678;
        lVar19 = *(long *)(uStack_c8 + 0x38) + unaff_x21 * 0x48;
        if ((cVar28 == '\x01') && (unaff_x21 == unaff_x24)) {
          cVar28 = '\x02';
          unaff_x21 = unaff_x24;
        }
        else if (*(int *)(lVar19 + 0x10) == 1) {
          unaff_x21 = *(ulong *)(lVar19 + 0x18);
          lVar29 = 1;
          pbVar11 = *(byte **)(lVar19 + 0x28);
          lVar19 = *(long *)(lVar19 + 0x30);
          pbStack_b0 = pbVar11;
          lStack_b8 = lVar19;
          goto joined_r0x000105aa64c8;
        }
        lVar29 = 2;
        pbVar11 = *(byte **)(lVar19 + 0x28);
        lVar19 = *(long *)(lVar19 + 0x30);
        pbStack_b0 = pbVar11;
        lStack_b8 = lVar19;
      }
      else {
        uVar15 = *(ulong *)(uStack_c8 + 0x28);
        if (uVar15 <= uStack_d0) goto LAB_105aa6668;
        piVar20 = (int *)(*(long *)(uStack_c8 + 0x20) + uStack_d0 * 0x68);
        if (cVar28 == '\0') {
          cVar28 = '\x02';
          lVar29 = 2;
          pbVar11 = *(byte **)(piVar20 + 8);
          lVar19 = *(long *)(piVar20 + 10);
          pbStack_b0 = pbVar11;
          lStack_b8 = lVar19;
        }
        else {
          if (*piVar20 != 1) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b1564d,0x28,&UNK_10b407cc0);
            uVar15 = extraout_x1;
            goto LAB_105aa6658;
          }
          unaff_x21 = *(ulong *)(piVar20 + 2);
          lVar29 = 1;
          pbVar11 = *(byte **)(piVar20 + 8);
          lVar19 = *(long *)(piVar20 + 10);
          pbStack_b0 = pbVar11;
          lStack_b8 = lVar19;
        }
      }
joined_r0x000105aa64c8:
      for (; uVar15 = unaff_x20, lVar19 != 0; lVar19 = lVar19 + -1) {
        if ((*pbVar11 != 9) && (0x5e < *pbVar11 - 0x20)) goto LAB_105aa6610;
        pbVar11 = pbVar11 + 1;
      }
      uStack_c0 = 0;
      uStack_a0 = 0;
      uStack_90 = 0x2c0000002c;
      uStack_88 = 1;
      uStack_80 = 1;
      lStack_a8 = lStack_b8;
      lStack_98 = lStack_b8;
      lVar19 = FUN_105ab005c(&uStack_c0);
      if (lVar19 != 0) {
        bVar8 = unaff_x22 == 0;
        do {
          auVar30 = FUN_105aafe18();
          if (auVar30._8_8_ == 0) goto LAB_105aa6610;
          unaff_x20 = 0;
          while( true ) {
            pbVar11 = auVar30._0_8_;
            if (auVar30._8_8_ == 0) break;
            uVar24 = *pbVar11 - 0x30;
            if (9 < uVar24) goto LAB_105aa6610;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = unaff_x20;
            uVar21 = unaff_x20 * 10;
            uVar13 = (ulong)(byte)uVar24;
            unaff_x20 = uVar21 + uVar13;
            if ((SUB168(auVar4 * ZEXT816(10),8) != 0) ||
               (auVar30._8_8_ = auVar30._8_8_ + -1, auVar30._0_8_ = pbVar11 + 1,
               CARRY8(uVar21,uVar13))) goto LAB_105aa6610;
          }
          if ((!bVar8) && (bVar8 = uVar15 != unaff_x20, unaff_x20 = uVar15, bVar8))
          goto LAB_105aa6610;
          lVar19 = FUN_105ab005c(&uStack_c0);
          bVar8 = false;
          uVar15 = unaff_x20;
        } while (lVar19 != 0);
        unaff_x22 = 1;
      }
      bVar8 = true;
    } while (lVar29 != 2);
    goto LAB_105aa6614;
  }
LAB_105aa6658:
  func_0x000108a07bdc(uStack_d0,uVar15,&UNK_10b4063c8);
  uVar15 = extraout_x1_00;
LAB_105aa6668:
  func_0x000108a07bdc(uStack_d0,uVar15,&UNK_10b407ca8);
  uVar15 = extraout_x1_01;
LAB_105aa6678:
  uVar12 = func_0x000108a07bdc(unaff_x21,uVar15,&UNK_10b407cd8);
  uStack_e8 = 0x105aa6688;
  uStack_108 = 0x45;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_105ab25ac(aiStack_128,uVar12,&uStack_110);
  uVar15 = extraout_x1_02;
  if (aiStack_128[0] != 1) {
LAB_105aa6710:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    return auVar5 << 0x40;
  }
  uVar15 = *(ulong *)(lStack_118 + 0x28);
  if (uStack_120 < uVar15) {
    puStack_130 = (uint *)(*(long *)(lStack_118 + 0x20) + uStack_120 * 0x68);
    bVar8 = (*puStack_130 & 1) != 0;
    if (bVar8) {
      puStack_130 = *(uint **)(puStack_130 + 4);
    }
    uStack_110 = (ulong)bVar8;
    if (uStack_110 == 2) goto LAB_105aa6710;
    if (uStack_110 != 0) {
      auVar32._8_8_ = *(uint **)(lStack_118 + 0x40);
      auVar32._0_8_ = puStack_130;
      if (puStack_130 < *(uint **)(lStack_118 + 0x40)) {
        lVar19 = *(long *)(lStack_118 + 0x38) + (long)puStack_130 * 0x48 + 0x20;
        goto LAB_105aa6778;
      }
      goto LAB_105aa6798;
    }
    auVar33._8_8_ = *(ulong *)(lStack_118 + 0x28);
    auVar33._0_8_ = uStack_120;
    if (uStack_120 < *(ulong *)(lStack_118 + 0x28)) {
      lVar19 = *(long *)(lStack_118 + 0x20) + uStack_120 * 0x68 + 0x18;
LAB_105aa6778:
      auVar30 = FUN_105aa5f58(*(undefined8 *)(lVar19 + 8),*(undefined8 *)(lVar19 + 0x10));
      return auVar30;
    }
  }
  else {
    auVar32 = func_0x000108a07bdc(uStack_120,uVar15,&UNK_10b4063c8);
LAB_105aa6798:
    auVar33 = func_0x000108a07bdc(auVar32._0_8_,auVar32._8_8_,&UNK_10b3fa280);
  }
  auVar30 = func_0x000108a07bdc(auVar33._0_8_,auVar33._8_8_,&UNK_10b3fa268);
  uVar15 = auVar30._8_8_;
  uStack_168 = uStack_c8;
  uStack_148 = uStack_d0;
  uStack_138 = 0x105aa67b0;
  uStack_1b8 = 0x18;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_170 = unaff_x24;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = unaff_x20;
  ppuStack_140 = &puStack_f0;
  uVar13 = FUN_105ab0e80(&plStack_1f8,auVar30._0_8_,&uStack_1c0);
  if (bStack_1c6 == 3) {
    func_0x000108a07a3c(&UNK_109b11fdd,0x17,&uStack_1c0,&UNK_10b406248,&UNK_10b403468);
    uVar21 = uStack_c8;
LAB_105aa697c:
    func_0x000108a07a3c(&UNK_109b11fdd,0x17,&uStack_1c0,&UNK_10b406248,&UNK_10b406070);
    uVar16 = extraout_x1_03;
  }
  else {
    uStack_220 = uStack_1e0;
    uStack_20e = uStack_1ce;
    uStack_208 = uStack_1c8;
    uStack_210 = uStack_1d0;
    uStack_228 = uStack_1c5;
    uStack_224 = uStack_1c1;
    if (bStack_1c6 == 2) {
      uVar16 = plStack_1f8[5];
      if (uStack_1e8 < uVar16) goto LAB_105aa6940;
      func_0x000108a07bdc(uStack_1e8,uVar16,&UNK_10b406398);
    }
    uStack_1e0 = uStack_220;
    uStack_1ce = uStack_20e;
    uStack_1c8 = uStack_208;
    uStack_1d0 = uStack_210;
    uStack_1c5 = uStack_228;
    uStack_1c1 = uStack_224;
    func_0x00010579d8c4(&uStack_1c0,uVar15);
    uStack_190 = uStack_1f0;
    uStack_188 = uStack_1e8;
    uStack_180 = uStack_220;
    uVar15 = (ulong)uStack_1c8;
    uVar21 = CONCAT62(uStack_1ce,uStack_1d0);
    unaff_x20 = plStack_1f8[5];
    uVar13 = FUN_105ab1cb0(plStack_1f8,uVar15,&uStack_190,&uStack_1c0);
    if ((uVar13 & 1) != 0) goto LAB_105aa697c;
    uVar16 = 0;
    lVar19 = plStack_1f8[9];
    uVar2 = plStack_1f8[10];
    uVar24 = (uint)unaff_x20 & 0xffff;
    while( true ) {
      uVar6 = (ushort)uVar24;
      uVar23 = uVar21;
      if ((uVar2 <= uVar21) && (uVar23 = 0, uVar2 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar19 + uVar23 * 4);
      uVar24 = (uint)*puVar1;
      uVar3 = (ushort)uVar15;
      if (uVar24 == 0xffff) break;
      uVar16 = uVar16 + 1;
      uVar15 = (ulong)puVar1[1];
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      uVar21 = uVar23 + 1;
    }
    *puVar1 = uVar6;
    puVar1[1] = uVar3;
    if (((bStack_1c6 & 1) != 0 || 0x7f < uVar16) && (*plStack_1f8 == 0)) {
      *plStack_1f8 = 1;
    }
    uVar16 = plStack_1f8[5];
    if (unaff_x20 < uVar16) {
LAB_105aa6940:
      auVar34._8_8_ = uVar16;
      auVar34._0_8_ = uVar13;
      return auVar34;
    }
  }
  uVar12 = func_0x000108a07bdc(unaff_x20,uVar16,&UNK_10b4066b0);
  if (uVar21 != 0) {
    (**(code **)(uVar21 + 0x20))(auStack_1d8,unaff_x20,uStack_1e0);
  }
  __Unwind_Resume(uVar12);
  auVar30 = func_0x000108a07bc4();
  plVar17 = auVar30._8_8_;
  puVar14 = auVar30._0_8_;
  uStack_238 = 0x105aa69dc;
  plVar26 = (long *)*plVar17;
  if (plVar26 == (long *)0x0) {
LAB_105aa6be0:
    *puVar14 = 0;
    return auVar30;
  }
  plVar25 = (long *)plVar26[3];
  plVar22 = (long *)plVar25[5];
  pppuStack_240 = &ppuStack_140;
  uStack_260 = (ulong)bStack_1c6;
  uStack_248 = uVar12;
  uStack_250 = unaff_x20;
  uStack_258 = uVar15;
  uStack_268 = uVar21;
  uStack_270 = unaff_x24;
  while (plVar22 == (long *)0x0) {
    if ((long *)plVar26[2] == plVar25) {
      if (*(long *)(*plVar17 + 0x38) != 0) {
        *puVar14 = 2;
        return auVar30;
      }
      plVar26 = (long *)*plVar17;
      if (plVar26 != (long *)0x0) {
        lVar19 = *plVar26;
        *plVar26 = lVar19 + -1;
        LORelease();
        if (lVar19 == 1) {
          DataMemoryBarrier(2,1);
          auVar30 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf2cf2be4db604c1E(plVar17);
        }
      }
      *plVar17 = 0;
      goto LAB_105aa6be0;
    }
    auVar30 = _sched_yield();
    plVar25 = (long *)plVar26[3];
    plVar22 = (long *)plVar25[5];
  }
  plVar26[3] = (long)plVar22;
  if (*plVar25 == 0) {
    if (*plVar22 == 0) goto LAB_105aa6c14;
    lStack_298 = plVar22[2];
    plStack_2a0 = (long *)plVar22[1];
    lStack_288 = plVar22[4];
    lStack_290 = plVar22[3];
    *plVar22 = 0;
    if (*plVar25 == 0) {
LAB_105aa6a70:
      auVar35 = _free(plVar25);
      lVar19 = *plVar17;
      plStack_2c0 = plStack_2a0;
      lStack_2b8 = lStack_298;
      lStack_2b0 = lStack_290;
      lStack_2a8 = lStack_288;
    }
    else {
      if (plVar25[1] != 0) {
        (**(code **)(plVar25[1] + 0x20))(plVar25 + 4,plVar25[2],plVar25[3]);
        goto LAB_105aa6a70;
      }
      plVar26 = (long *)plVar25[2];
      lVar19 = *plVar26;
      if (lVar19 != 0) {
        puVar27 = (undefined8 *)plVar26[1];
        pcVar7 = (code *)*puVar27;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(lVar19);
        }
        if (puVar27[1] != 0) {
          _free(lVar19);
        }
      }
      _free(plVar26);
      auVar35 = _free(plVar25);
      lVar19 = *plVar17;
      plStack_2c0 = plStack_2a0;
      lStack_2b8 = lStack_298;
      lStack_2b0 = lStack_290;
      lStack_2a8 = lStack_288;
    }
    if (lVar19 == 0) goto LAB_105aa6b30;
    plStack_2a0 = plStack_2c0;
    lStack_298 = lStack_2b8;
    lStack_290 = lStack_2b0;
    lStack_288 = lStack_2a8;
    auVar30 = FUN_105aa721c(lVar19 + 0x20);
    plVar25 = auVar30._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = auVar30._8_8_;
    auVar35 = auVar35 << 0x40;
    if (plVar25 != (long *)0x0) {
      plVar26 = plVar25 + 2;
      plStack_278 = plVar25;
      if (plVar25[2] == 0) goto LAB_105aa6c2c;
      goto LAB_105aa6aa8;
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b155be,0x29,&UNK_10b406100);
LAB_105aa6c14:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b155e7,0x29,&UNK_10b406118);
LAB_105aa6c2c:
    FUN_108a324b0(plVar26);
LAB_105aa6aa8:
    iVar10 = _pthread_mutex_lock();
    if (iVar10 != 0) {
      FUN_108a81ad4();
LAB_105aa6c7c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x105aa6c80);
      (*pcVar7)();
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      bVar9 = 0;
      cVar28 = (char)plVar25[3];
    }
    else {
      bVar9 = func_0x000108a82c0c();
      bVar9 = bVar9 ^ 1;
      cVar28 = (char)plVar25[3];
    }
    if (cVar28 != '\0') {
      uVar15 = (ulong)lStack_298 >> 8;
      lStack_298 = CONCAT71((int7)uVar15,bVar9);
      plStack_2a0 = plVar26;
      func_0x000108a07a3c(&UNK_109b15719,0x2b,&plStack_2a0,&UNK_10b4062e8,&UNK_10b406088);
      goto LAB_105aa6c7c;
    }
    *(undefined1 *)(plVar25 + 6) = 0;
    lVar19 = plVar25[4];
    plVar25[4] = 0;
    if (lVar19 != 0) {
      (**(code **)(lVar19 + 8))(plVar25[5]);
    }
    if ((((bVar9 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar15 = func_0x000108a82c0c(), (uVar15 & 1) == 0)) {
      *(undefined1 *)(plVar25 + 3) = 1;
    }
    auVar35 = _pthread_mutex_unlock(plVar25[2]);
    lVar19 = *plVar25;
    *plVar25 = lVar19 + -1;
    LORelease();
    if (lVar19 == 1) {
      DataMemoryBarrier(2,1);
      auVar35 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf85ab81e955e259dE(&plStack_278);
    }
    lVar19 = *plVar17;
    if (lVar19 == 0) goto LAB_105aa6b30;
  }
  LOAcquire();
  *(long *)(lVar19 + 0x38) = *(long *)(lVar19 + 0x38) + -1;
  LORelease();
LAB_105aa6b30:
  puVar14[2] = lStack_2b8;
  puVar14[1] = plStack_2c0;
  puVar14[4] = lStack_2a8;
  puVar14[3] = lStack_2b0;
  *puVar14 = 1;
  return auVar35;
}

