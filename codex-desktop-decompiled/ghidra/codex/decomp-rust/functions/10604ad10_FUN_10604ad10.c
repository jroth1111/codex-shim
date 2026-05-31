
/* WARNING: Possible PIC construction at 0x00010604bd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010604ba7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010604bd70) */

void FUN_10604ad10(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  int iVar24;
  ulong *unaff_x19;
  ulong *puVar25;
  long *unaff_x20;
  ulong *puVar26;
  ulong *unaff_x21;
  ulong *puVar27;
  ulong *unaff_x22;
  ulong *unaff_x23;
  long lVar28;
  ulong *puVar29;
  ulong *unaff_x25;
  ulong *puVar30;
  ulong *unaff_x26;
  ulong *puVar31;
  ulong *puVar32;
  ulong *unaff_x27;
  ulong *unaff_x28;
  ulong *puVar33;
  undefined1 **ppuVar34;
  undefined8 uVar35;
  ulong uVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_1f0 [8];
  ulong *puStack_1e8;
  ulong *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong *puStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  long lStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  long *plStack_130;
  ulong *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  long lStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar28 = param_1[5];
  uVar16 = (ulong)*(ushort *)(lVar28 + 0x21a);
  if ((long)param_2 + uVar16 < 0xc) {
    unaff_x26 = (ulong *)param_1[3];
    unaff_x25 = (ulong *)(ulong)*(ushort *)((long)unaff_x26 + 0x21a);
    unaff_x28 = (ulong *)((long)unaff_x25 - (long)param_2);
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (unaff_x25 < param_2) goto LAB_10604af48;
    *(short *)((long)unaff_x26 + 0x21a) = (short)unaff_x28;
    *(short *)(lVar28 + 0x21a) = (short)((long)param_2 + uVar16);
    unaff_x21 = (ulong *)(lVar28 + 8);
    unaff_x27 = (ulong *)((long)param_2 * 0x18);
    unaff_x23 = (ulong *)(uVar16 * 0x18);
    uStack_f8 = uVar16;
    _memmove(unaff_x21 + (long)param_2 * 3,unaff_x21,unaff_x23);
    unaff_x22 = (ulong *)(lVar28 + 0x110);
    _memmove(unaff_x22 + (long)param_2 * 3,unaff_x22,unaff_x23);
    lVar15 = (long)unaff_x28 + 1;
    lVar14 = (long)unaff_x25 - lVar15;
    if (lVar14 != (long)param_2 + -1) goto LAB_10604af60;
    unaff_x25 = unaff_x26 + 1;
    unaff_x27 = (ulong *)(lVar15 * 0x18);
    unaff_x23 = (ulong *)(lVar14 * 0x18);
    lStack_108 = lVar15;
    puStack_100 = param_2;
    _memcpy(unaff_x21,unaff_x25 + lVar15 * 3,unaff_x23);
    unaff_x19 = unaff_x26 + 0x22;
    _memcpy(unaff_x22,unaff_x19 + lVar15 * 3,unaff_x23);
    uVar16 = uStack_f8;
    puVar26 = puStack_100;
    puVar29 = unaff_x25 + (long)unaff_x28 * 3;
    puVar30 = unaff_x19 + (long)unaff_x28 * 3;
    uStack_e8 = puVar30[1];
    uStack_f0 = *puVar30;
    uStack_e0 = puVar30[2];
    lVar15 = *param_1 + param_1[2] * 0x18;
    uStack_c8 = *(ulong *)(lVar15 + 0x10);
    uStack_d0 = *(ulong *)(lVar15 + 8);
    uStack_c0 = *(ulong *)(lVar15 + 0x18);
    uVar17 = puVar29[1];
    uVar23 = *puVar29;
    *(ulong *)(lVar15 + 0x18) = puVar29[2];
    *(ulong *)(lVar15 + 0x10) = uVar17;
    *(ulong *)(lVar15 + 8) = uVar23;
    uStack_b0 = *(ulong *)(lVar15 + 0x118);
    uStack_b8 = *(ulong *)(lVar15 + 0x110);
    uStack_a8 = *(ulong *)(lVar15 + 0x120);
    *(ulong *)(lVar15 + 0x120) = uStack_e0;
    *(ulong *)(lVar15 + 0x118) = uStack_e8;
    *(ulong *)(lVar15 + 0x110) = uStack_f0;
    puVar29 = unaff_x21 + lVar14 * 3;
    puVar29[1] = uStack_c8;
    *puVar29 = uStack_d0;
    puVar29[2] = uStack_c0;
    puVar29 = unaff_x22 + lVar14 * 3;
    puVar29[1] = uStack_b0;
    *puVar29 = uStack_b8;
    puVar29[2] = uStack_a8;
    uStack_a0 = uStack_d0;
    uStack_98 = uStack_c8;
    uStack_90 = uStack_c0;
    uStack_80 = uStack_b8;
    uStack_78 = uStack_b0;
    uStack_70 = uStack_a8;
    if (param_1[4] == 0) {
      if (param_1[6] == 0) {
        return;
      }
    }
    else if (param_1[6] != 0) {
      lVar15 = lVar28 + 0x220;
      lVar14 = (long)puStack_100 * 8;
      _memmove(lVar15 + lVar14,lVar15,uStack_f8 * 8 + 8);
      _memcpy(lVar15,unaff_x26 + lStack_108 + 0x44,lVar14);
      lVar15 = 0;
      do {
        plVar19 = *(long **)(lVar28 + lVar15 * 8 + 0x220);
        *(short *)(plVar19 + 0x43) = (short)lVar15;
        lVar15 = lVar15 + 1;
        *plVar19 = lVar28;
      } while ((long)puVar26 + uVar16 + 1 != lVar15);
      return;
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a0b,0x33,&UNK_10b4ae8a8);
LAB_10604af48:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a3e,0x27,&UNK_10b4ae8c0);
LAB_10604af60:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
  }
  auVar5._8_8_ = unaff_x19;
  auVar5._0_8_ = unaff_x20;
  auVar42 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28,&UNK_10b4ae8d8);
  puVar26 = auVar42._8_8_;
  plVar19 = auVar42._0_8_;
  uStack_118 = 0x10604af90;
  ppuVar34 = &puStack_120;
  puVar29 = (ulong *)plVar19[5];
  puVar30 = (ulong *)(ulong)*(ushort *)((long)puVar29 + 0x21a);
  puStack_170 = unaff_x28;
  puStack_168 = unaff_x27;
  puStack_160 = unaff_x26;
  puStack_158 = unaff_x25;
  lStack_150 = lVar28;
  puStack_148 = unaff_x23;
  puStack_140 = unaff_x22;
  puStack_138 = unaff_x21;
  plStack_130 = unaff_x20;
  puStack_128 = unaff_x19;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((ulong)((long)puVar26 + (long)puVar30) < 0xc) {
    puVar31 = (ulong *)plVar19[3];
    puVar27 = (ulong *)(ulong)*(ushort *)((long)puVar31 + 0x21a);
    puVar33 = (ulong *)((long)puVar27 - (long)puVar26);
    puVar32 = puVar31;
    auVar5 = auVar42;
    if (puVar27 < puVar26) goto LAB_10604b17c;
    *(short *)((long)puVar31 + 0x21a) = (short)puVar33;
    *(short *)((long)puVar29 + 0x21a) = (short)((long)puVar26 + (long)puVar30);
    puVar22 = puVar29 + 1;
    lStack_1d8 = (long)puVar30 << 3;
    _memmove(puVar22 + (long)puVar26,puVar22);
    unaff_x22 = puVar29 + 0xc;
    _memmove(unaff_x22 + (long)puVar26 * 5,unaff_x22,(long)puVar30 * 0x28);
    unaff_x27 = (ulong *)((long)puVar33 + 1);
    puVar27 = (ulong *)((long)puVar27 - (long)unaff_x27);
    unaff_x23 = puVar22;
    if (puVar27 == (ulong *)((long)puVar26 - 1U)) {
      puVar25 = puVar31 + 1;
      puStack_1e0 = puVar30;
      _memcpy(puVar22,puVar25 + (long)unaff_x27,(long)puVar27 * 8);
      puVar32 = puVar31 + 0xc;
      unaff_x23 = (ulong *)((long)puVar27 * 0x28);
      puStack_1e8 = puVar31;
      _memcpy(unaff_x22,puVar32 + ((ulong)unaff_x27 & 0xffffffff) * 5,unaff_x23);
      puVar30 = puVar32 + ((ulong)puVar33 & 0xffffffff) * 5;
      uStack_1c8 = puVar30[1];
      uStack_1d0 = *puVar30;
      uStack_1b8 = puVar30[3];
      uStack_1c0 = puVar30[2];
      uStack_1b0 = puVar30[4];
      lVar28 = *plVar19 + plVar19[2] * 8;
      lVar15 = *plVar19 + plVar19[2] * 0x28;
      uVar16 = *(ulong *)(lVar28 + 8);
      *(ulong *)(lVar28 + 8) = puVar25[(long)puVar33];
      uStack_198 = *(ulong *)(lVar15 + 0x68);
      uStack_1a0 = *(ulong *)(lVar15 + 0x60);
      uStack_188 = *(ulong *)(lVar15 + 0x78);
      uStack_190 = *(ulong *)(lVar15 + 0x70);
      uStack_180 = *(ulong *)(lVar15 + 0x80);
      *(ulong *)(lVar15 + 0x68) = uStack_1c8;
      *(ulong *)(lVar15 + 0x60) = uStack_1d0;
      *(ulong *)(lVar15 + 0x78) = uStack_1b8;
      *(ulong *)(lVar15 + 0x70) = uStack_1c0;
      *(ulong *)(lVar15 + 0x80) = uStack_1b0;
      puVar29[(long)puVar26] = uVar16;
      puVar30 = unaff_x22 + (long)puVar27 * 5;
      puVar30[4] = uStack_180;
      puVar30[1] = uStack_198;
      *puVar30 = uStack_1a0;
      puVar30[3] = uStack_188;
      puVar30[2] = uStack_190;
      puVar30 = puVar25;
      if (plVar19[4] == 0) {
        if (plVar19[6] == 0) {
          return;
        }
      }
      else if (plVar19[6] != 0) {
        puVar30 = puVar29 + 0x44;
        _memmove(puVar30 + (long)puVar26,puVar30,lStack_1d8 + 8);
        _memcpy(puVar30,puStack_1e8 + (long)puVar33 + 0x45,(long)puVar26 * 8);
        lVar28 = 0;
        do {
          puVar20 = (undefined8 *)puVar29[lVar28 + 0x44];
          *(short *)(puVar20 + 0x43) = (short)lVar28;
          lVar28 = lVar28 + 1;
          *puVar20 = puVar29;
        } while ((long)puVar26 + (long)puStack_1e0 + 1 != lVar28);
        return;
      }
      goto LAB_10604b1ac;
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a0b,0x33,&UNK_10b4ae8a8);
    puVar27 = unaff_x21;
    puVar32 = unaff_x26;
    puVar33 = unaff_x28;
LAB_10604b17c:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a3e,0x27,&UNK_10b4ae8c0);
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
LAB_10604b1ac:
  uVar35 = 0x10604b1c4;
  auVar42 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28,&UNK_10b4ae8d8);
  puVar11 = auStack_1f0;
SUB_10604b1c4:
  do {
    uVar16 = auVar42._8_8_;
    plVar19 = auVar42._0_8_;
    *(ulong **)(puVar11 + -0x60) = puVar33;
    *(ulong **)(puVar11 + -0x58) = unaff_x27;
    *(ulong **)(puVar11 + -0x50) = puVar32;
    *(ulong **)(puVar11 + -0x48) = puVar30;
    *(ulong **)(puVar11 + -0x40) = puVar29;
    *(ulong **)(puVar11 + -0x38) = unaff_x23;
    *(ulong **)(puVar11 + -0x30) = unaff_x22;
    *(ulong **)(puVar11 + -0x28) = puVar27;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar5;
    *(undefined1 ***)(puVar11 + -0x10) = ppuVar34;
    *(undefined8 *)(puVar11 + -8) = uVar35;
    puVar30 = (ulong *)plVar19[3];
    uVar23 = (ulong)*(ushort *)((long)puVar30 + 0x21a);
    if (uVar16 + uVar23 < 0xc) {
      puVar29 = (ulong *)plVar19[5];
      puVar26 = (ulong *)(*(ushort *)((long)puVar29 + 0x21a) - uVar16);
      auVar7._8_8_ = puVar26;
      auVar7._0_8_ = plVar19;
      auVar6._8_8_ = puVar26;
      auVar6._0_8_ = plVar19;
      auVar5._8_8_ = puVar26;
      auVar5._0_8_ = plVar19;
      if (*(ushort *)((long)puVar29 + 0x21a) < uVar16) goto LAB_10604b45c;
      *(short *)((long)puVar30 + 0x21a) = (short)(uVar16 + uVar23);
      *(short *)((long)puVar29 + 0x21a) = (short)puVar26;
      unaff_x22 = puVar29 + 1;
      *(ulong *)(puVar11 + -0x100) = uVar16;
      puVar33 = (ulong *)(uVar16 * 0x18);
      puVar22 = puVar33 + -3;
      puVar20 = (undefined8 *)((long)unaff_x22 + (long)puVar22);
      puVar31 = puVar29 + 0x22;
      puVar1 = (undefined8 *)((long)puVar31 + (long)puVar22);
      uVar35 = *puVar1;
      *(undefined8 *)(puVar11 + -0xe8) = puVar1[1];
      *(undefined8 *)(puVar11 + -0xf0) = uVar35;
      *(undefined8 *)(puVar11 + -0xe0) = puVar1[2];
      lVar28 = *plVar19 + plVar19[2] * 0x18;
      uVar35 = *(undefined8 *)(lVar28 + 8);
      *(undefined8 *)(puVar11 + -200) = *(undefined8 *)(lVar28 + 0x10);
      *(undefined8 *)(puVar11 + -0xd0) = uVar35;
      uVar21 = *(ulong *)(lVar28 + 0x18);
      *(ulong *)(puVar11 + -0xc0) = uVar21;
      uVar37 = puVar20[1];
      uVar35 = *puVar20;
      *(undefined8 *)(lVar28 + 0x18) = puVar20[2];
      *(undefined8 *)(lVar28 + 0x10) = uVar37;
      *(undefined8 *)(lVar28 + 8) = uVar35;
      uVar35 = *(undefined8 *)(lVar28 + 0x110);
      *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(lVar28 + 0x118);
      *(undefined8 *)(puVar11 + -0xb8) = uVar35;
      *(undefined8 *)(puVar11 + -0xa8) = *(undefined8 *)(lVar28 + 0x120);
      *(undefined8 *)(lVar28 + 0x120) = *(undefined8 *)(puVar11 + -0xe0);
      uVar35 = *(undefined8 *)(puVar11 + -0xf0);
      *(undefined8 *)(lVar28 + 0x118) = *(undefined8 *)(puVar11 + -0xe8);
      *(undefined8 *)(lVar28 + 0x110) = uVar35;
      uVar36 = *(ulong *)(puVar11 + -0xd0);
      *(ulong *)(puVar11 + -0x98) = *(ulong *)(puVar11 + -200);
      *(ulong *)(puVar11 + -0xa0) = uVar36;
      *(ulong *)(puVar11 + -0x90) = uVar21;
      uVar39 = *(ulong *)(puVar11 + -0xb0);
      uVar38 = *(ulong *)(puVar11 + -0xb8);
      *(ulong *)(puVar11 + -0x78) = uVar39;
      *(ulong *)(puVar11 + -0x80) = uVar38;
      uVar17 = *(ulong *)(puVar11 + -0xa8);
      *(ulong *)(puVar11 + -0x70) = uVar17;
      *(ulong *)(puVar11 + -0xf8) = uVar23;
      puVar32 = puVar30 + uVar23 * 3 + 1;
      puVar32[1] = *(ulong *)(puVar11 + -200);
      *puVar32 = uVar36;
      puVar32[2] = uVar21;
      puVar32 = puVar30 + 0x22;
      puVar27 = puVar32 + uVar23 * 3;
      puVar27[1] = uVar39;
      *puVar27 = uVar38;
      puVar27[2] = uVar17;
      _memcpy(puVar30 + uVar23 * 3 + 4,unaff_x22,puVar22);
      _memcpy(puVar32 + uVar23 * 3 + 3,puVar31,puVar22);
      unaff_x23 = (ulong *)((long)puVar26 * 0x18);
      _memmove(unaff_x22,unaff_x22 + uVar16 * 3,unaff_x23);
      _memmove(puVar31,puVar31 + uVar16 * 3,unaff_x23);
      unaff_x27 = puVar26;
      if (plVar19[4] == 0) {
        auVar5 = auVar7;
        if (plVar19[6] == 0) {
          return;
        }
      }
      else {
        auVar5 = auVar6;
        if (plVar19[6] != 0) {
          lVar28 = *(long *)(puVar11 + -0x100);
          lVar15 = *(long *)(puVar11 + -0xf8);
          puVar32 = puVar29 + 0x44;
          _memcpy(puVar30 + lVar15 + 0x45,puVar32,lVar28 * 8);
          _memmove(puVar32,puVar32 + lVar28,(long)puVar26 * 8 + 8);
          puVar20 = (undefined8 *)puVar30[lVar15 + 0x45];
          *puVar20 = puVar30;
          *(short *)(puVar20 + 0x43) = (short)lVar15 + 1;
          if (lVar28 != 1) {
            lVar15 = *(long *)(puVar11 + -0xf8);
            puVar20 = (undefined8 *)puVar30[lVar15 + 0x46];
            *puVar20 = puVar30;
            *(short *)(puVar20 + 0x43) = (short)lVar15 + 2;
            if (lVar28 != 2) {
              lVar15 = *(long *)(puVar11 + -0xf8);
              puVar20 = (undefined8 *)puVar30[lVar15 + 0x47];
              *puVar20 = puVar30;
              *(short *)(puVar20 + 0x43) = (short)lVar15 + 3;
              if (lVar28 != 3) {
                lVar15 = *(long *)(puVar11 + -0xf8);
                puVar20 = (undefined8 *)puVar30[lVar15 + 0x48];
                *puVar20 = puVar30;
                *(short *)(puVar20 + 0x43) = (short)lVar15 + 4;
                if (lVar28 != 4) {
                  lVar28 = *(long *)(puVar11 + -0xf8);
                  puVar20 = (undefined8 *)puVar30[lVar28 + 0x49];
                  *puVar20 = puVar30;
                  *(short *)(puVar20 + 0x43) = (short)lVar28 + 5;
                }
              }
            }
          }
          lVar28 = 0;
          do {
            puVar20 = (undefined8 *)puVar29[lVar28 + 0x44];
            *(short *)(puVar20 + 0x43) = (short)lVar28;
            lVar28 = lVar28 + 1;
            *puVar20 = puVar29;
          } while ((long)puVar26 + 1U != lVar28);
          return;
        }
      }
    }
    else {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a65,0x32,&UNK_10b4ae8f0);
LAB_10604b45c:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a97,0x28,&UNK_10b4ae908);
      puVar31 = puVar27;
    }
    auVar42 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28,&UNK_10b4ae920);
    uVar16 = auVar42._8_8_;
    plVar19 = auVar42._0_8_;
    *(ulong **)(puVar11 + -0x160) = puVar33;
    *(ulong **)(puVar11 + -0x158) = unaff_x27;
    *(ulong **)(puVar11 + -0x150) = puVar32;
    *(ulong **)(puVar11 + -0x148) = puVar30;
    *(ulong **)(puVar11 + -0x140) = puVar29;
    *(ulong **)(puVar11 + -0x138) = unaff_x23;
    *(ulong **)(puVar11 + -0x130) = unaff_x22;
    *(ulong **)(puVar11 + -0x128) = puVar31;
    *(undefined1 (*) [16])(puVar11 + -0x120) = auVar5;
    *(undefined1 **)(puVar11 + -0x110) = puVar11 + -0x10;
    *(undefined8 *)(puVar11 + -0x108) = 0x10604b48c;
    lVar28 = plVar19[3];
    uVar23 = (ulong)*(ushort *)(lVar28 + 0x21a);
    if (uVar16 + uVar23 < 0xc) {
      puVar30 = (ulong *)plVar19[5];
      lVar15 = *(ushort *)((long)puVar30 + 0x21a) - uVar16;
      auVar9._8_8_ = lVar15;
      auVar9._0_8_ = plVar19;
      auVar8._8_8_ = lVar15;
      auVar8._0_8_ = plVar19;
      auVar5._8_8_ = lVar15;
      auVar5._0_8_ = plVar19;
      if (*(ushort *)((long)puVar30 + 0x21a) < uVar16) goto LAB_10604b6c8;
      *(short *)(lVar28 + 0x21a) = (short)(uVar16 + uVar23);
      puVar31 = (ulong *)(uVar16 * 8);
      uVar17 = puVar30[uVar16];
      *(short *)((long)puVar30 + 0x21a) = (short)lVar15;
      unaff_x22 = puVar30 + 0xc;
      *(ulong *)(puVar11 + -0x1d8) = uVar16;
      *(ulong *)(puVar11 + -0x1c8) = uVar16 * 0x28;
      puVar29 = unaff_x22 + uVar16 * 5 + -5;
      uVar21 = *puVar29;
      uVar38 = puVar29[3];
      uVar36 = puVar29[2];
      *(ulong *)(puVar11 + -0x1b8) = puVar29[1];
      *(ulong *)(puVar11 + -0x1c0) = uVar21;
      *(ulong *)(puVar11 + -0x1a8) = uVar38;
      *(ulong *)(puVar11 + -0x1b0) = uVar36;
      *(ulong *)(puVar11 + -0x1a0) = puVar29[4];
      lVar14 = *plVar19 + plVar19[2] * 8;
      lVar18 = *plVar19 + plVar19[2] * 0x28;
      uVar35 = *(undefined8 *)(lVar14 + 8);
      *(ulong *)(lVar14 + 8) = uVar17;
      uVar36 = *(ulong *)(lVar18 + 0x68);
      uVar21 = *(ulong *)(lVar18 + 0x60);
      uVar39 = *(ulong *)(lVar18 + 0x78);
      uVar38 = *(ulong *)(lVar18 + 0x70);
      *(ulong *)(puVar11 + -0x188) = uVar36;
      *(ulong *)(puVar11 + -400) = uVar21;
      *(ulong *)(puVar11 + -0x178) = uVar39;
      *(ulong *)(puVar11 + -0x180) = uVar38;
      uVar17 = *(ulong *)(lVar18 + 0x80);
      *(ulong *)(puVar11 + -0x170) = uVar17;
      uVar37 = *(undefined8 *)(puVar11 + -0x1c0);
      uVar41 = *(undefined8 *)(puVar11 + -0x1a8);
      uVar40 = *(undefined8 *)(puVar11 + -0x1b0);
      *(undefined8 *)(lVar18 + 0x68) = *(undefined8 *)(puVar11 + -0x1b8);
      *(undefined8 *)(lVar18 + 0x60) = uVar37;
      *(undefined8 *)(lVar18 + 0x78) = uVar41;
      *(undefined8 *)(lVar18 + 0x70) = uVar40;
      *(undefined8 *)(lVar18 + 0x80) = *(undefined8 *)(puVar11 + -0x1a0);
      *(undefined8 *)(lVar28 + 8 + uVar23 * 8) = uVar35;
      puVar33 = (ulong *)(lVar28 + uVar23 * 0x28);
      puVar33[0x10] = uVar17;
      puVar33[0xd] = uVar36;
      puVar33[0xc] = uVar21;
      puVar33[0xf] = uVar39;
      puVar33[0xe] = uVar38;
      puVar29 = puVar30 + 1;
      *(ulong *)(puVar11 + -0x1d0) = uVar23;
      unaff_x27 = (ulong *)(uVar23 + 1);
      _memcpy(lVar28 + 8 + (long)unaff_x27 * 8,puVar29,puVar31 + -1);
      _memcpy(puVar33 + 0x11,unaff_x22,uVar16 * 0x28 + -0x28);
      unaff_x23 = (ulong *)(lVar15 * 8);
      _memmove(puVar29,puVar29 + uVar16,unaff_x23);
      _memmove(unaff_x22,(long)unaff_x22 + *(long *)(puVar11 + -0x1c8),lVar15 * 0x28);
      if (plVar19[4] == 0) {
        auVar5 = auVar9;
        if (plVar19[6] == 0) {
          return;
        }
      }
      else {
        auVar5 = auVar8;
        if (plVar19[6] != 0) {
          puVar29 = puVar30 + 0x44;
          lVar14 = lVar28 + 0x220;
          plVar19 = (long *)(lVar14 + (long)unaff_x27 * 8);
          _memcpy(plVar19,puVar29,puVar31);
          _memmove(puVar29,puVar29 + uVar16,unaff_x23 + 1);
          plVar19 = (long *)*plVar19;
          *plVar19 = lVar28;
          *(short *)(plVar19 + 0x43) = (short)unaff_x27;
          lVar18 = *(long *)(puVar11 + -0x1d8);
          lVar2 = *(long *)(puVar11 + -0x1d0);
          if (lVar18 != 1) {
            plVar19 = *(long **)(lVar14 + (lVar2 + 2) * 8);
            *plVar19 = lVar28;
            *(short *)(plVar19 + 0x43) = (short)(lVar2 + 2);
            if (lVar18 != 2) {
              plVar19 = *(long **)(lVar14 + (lVar2 + 3) * 8);
              *plVar19 = lVar28;
              *(short *)(plVar19 + 0x43) = (short)(lVar2 + 3);
              if (lVar18 != 3) {
                plVar19 = *(long **)(lVar14 + (lVar2 + 4) * 8);
                *plVar19 = lVar28;
                *(short *)(plVar19 + 0x43) = (short)(lVar2 + 4);
                if (lVar18 != 4) {
                  plVar19 = *(long **)(lVar14 + (lVar2 + 5) * 8);
                  *plVar19 = lVar28;
                  *(short *)(plVar19 + 0x43) = (short)(lVar2 + 5);
                }
              }
            }
          }
          lVar28 = 0;
          do {
            puVar20 = (undefined8 *)puVar30[lVar28 + 0x44];
            *(short *)(puVar20 + 0x43) = (short)lVar28;
            lVar28 = lVar28 + 1;
            *puVar20 = puVar30;
          } while (lVar15 + 1 != lVar28);
          return;
        }
      }
    }
    else {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a65,0x32,&UNK_10b4ae8f0);
LAB_10604b6c8:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a97,0x28,&UNK_10b4ae908);
    }
    puVar13 = &UNK_10b4ae920;
    auVar42 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28);
    puVar27 = auVar42._8_8_;
    *(ulong **)(puVar11 + -0x240) = puVar33;
    *(ulong **)(puVar11 + -0x238) = unaff_x27;
    *(long *)(puVar11 + -0x230) = lVar28;
    *(ulong **)(puVar11 + -0x228) = puVar30;
    *(ulong **)(puVar11 + -0x220) = puVar29;
    *(ulong **)(puVar11 + -0x218) = unaff_x23;
    *(ulong **)(puVar11 + -0x210) = unaff_x22;
    *(ulong **)(puVar11 + -0x208) = puVar31;
    *(undefined1 (*) [16])(puVar11 + -0x200) = auVar5;
    *(undefined1 **)(puVar11 + -0x1f0) = puVar11 + -0x110;
    *(undefined8 *)(puVar11 + -0x1e8) = 0x10604b6f8;
    ppuVar34 = (undefined1 **)(puVar11 + -0x1f0);
    *(undefined **)(puVar11 + -0x3f0) = puVar13;
    *(long *)(puVar11 + -0x3c0) = auVar42._0_8_;
    puVar32 = (ulong *)*puVar27;
    puVar29 = (ulong *)puVar27[2];
    unaff_x22 = puVar32 + (long)puVar29 * 3 + 1;
    uVar16 = *unaff_x22;
    *(ulong *)(puVar11 + -0x398) = puVar32[(long)puVar29 * 3 + 2];
    *(ulong *)(puVar11 + -0x3a0) = uVar16;
    uVar3 = *(ushort *)((long)puVar32 + 0x21a);
    puVar26 = (ulong *)CONCAT62(0,uVar3);
    uVar17 = puVar32[(long)puVar29 * 3 + 3];
    auVar5._8_8_ = uVar17;
    auVar5._0_8_ = puVar26;
    unaff_x23 = (ulong *)(((long)puVar26 + ~(ulong)puVar29) * 0x18);
    _memmove(unaff_x22,puVar32 + (long)puVar29 * 3 + 4,unaff_x23);
    uVar16 = puVar32[(long)puVar29 * 3 + 0x22];
    *(ulong *)(puVar11 + -0x368) = puVar32[(long)puVar29 * 3 + 0x23];
    *(ulong *)(puVar11 + -0x370) = uVar16;
    *(ulong *)(puVar11 + -0x360) = puVar32[(long)puVar29 * 3 + 0x24];
    _memmove(puVar32 + (long)puVar29 * 3 + 0x22,puVar32 + (long)puVar29 * 3 + 0x25,unaff_x23);
    uVar4 = uVar3 - 1;
    uVar16 = (ulong)uVar4;
    *(short *)((long)puVar32 + 0x21a) = (short)uVar4;
    uVar23 = puVar27[1];
    *(undefined8 *)(puVar11 + -0x380) = *(undefined8 *)(puVar11 + -0x398);
    *(undefined8 *)(puVar11 + -0x388) = *(undefined8 *)(puVar11 + -0x3a0);
    *(ulong *)(puVar11 + -0x378) = uVar17;
    if ((4 < (uVar4 & 0xffff)) || (unaff_x27 = (ulong *)*puVar32, unaff_x27 == (ulong *)0x0)) {
      puVar20 = *(undefined8 **)(puVar11 + -0x3c0);
      goto LAB_10604baa0;
    }
    *(ulong **)(puVar11 + -0x3e0) = puVar29;
    puVar33 = (ulong *)(uVar23 + 1);
    uVar17 = puVar32[0x43];
    uVar21 = (ulong)(ushort)uVar17;
    *(ulong *)(puVar11 + -0x3f8) = uVar23;
    if ((ushort)uVar17 != 0) {
      uVar17 = uVar21 - 1;
      puVar27 = (ulong *)unaff_x27[uVar21 + 0x43];
      *(ulong **)(puVar11 + -0x358) = unaff_x27;
      *(ulong **)(puVar11 + -0x350) = puVar33;
      *(ulong *)(puVar11 + -0x348) = uVar17;
      *(ulong **)(puVar11 + -0x340) = puVar27;
      *(ulong *)(puVar11 + -0x338) = uVar23;
      *(ulong **)(puVar11 + -0x330) = puVar32;
      *(ulong *)(puVar11 + -0x328) = uVar23;
      puVar31 = (ulong *)(ulong)*(ushort *)((long)puVar27 + 0x21a);
      if ((ulong)((long)puVar26 + (long)puVar31) < 0xc) {
        uVar23 = uVar16;
        puVar22 = puVar32;
        puVar29 = puVar27;
        if ((uVar16 & 0xffff) < *(ulong *)(puVar11 + -0x3e0)) goto LAB_10604ba40;
        goto LAB_10604b80c;
      }
      FUN_10604ad10(puVar11 + -0x358,1);
      *(long *)(puVar11 + -0x3e0) = *(long *)(puVar11 + -0x3e0) + 1;
LAB_10604ba80:
      puVar22 = (ulong *)*puVar32;
      if ((puVar22 != (ulong *)0x0) && (uVar3 = *(ushort *)((long)puVar22 + 0x21a), uVar3 < 5)) {
        *(ulong **)(puVar11 + -1000) = puVar32;
        do {
          auVar5._8_8_ = puVar31;
          auVar5._0_8_ = puVar26;
          puVar31 = (ulong *)(ulong)uVar3;
          puVar27 = (ulong *)*puVar22;
          if (puVar27 == (ulong *)0x0) {
            if (uVar3 == 0) {
              **(undefined1 **)(puVar11 + -0x3f0) = 1;
            }
            break;
          }
          lVar28 = (long)puVar33 + 1;
          uVar3 = (ushort)puVar22[0x43];
          *(long *)(puVar11 + -0x3a0) = lVar28;
          if (uVar3 == 0) {
            uVar3 = *(ushort *)((long)puVar27 + 0x21a);
            if (uVar3 == 0) goto LAB_10604bd90;
            uVar23 = puVar27[0x45];
            *(ulong **)(puVar11 + -0x2b0) = puVar27;
            *(long *)(puVar11 + -0x2a8) = lVar28;
            *(undefined8 *)(puVar11 + -0x2a0) = 0;
            *(ulong **)(puVar11 + -0x298) = puVar22;
            *(ulong **)(puVar11 + -0x290) = puVar33;
            *(ulong *)(puVar11 + -0x288) = uVar23;
            *(ulong **)(puVar11 + -0x280) = puVar33;
            puVar33 = (ulong *)((long)puVar31 + 1);
            unaff_x23 = (ulong *)(ulong)*(ushort *)(uVar23 + 0x21a);
            uVar16 = (long)puVar33 + (long)unaff_x23;
            if (0xb < uVar16) goto LAB_10604bd60;
            uVar17 = 0;
            *(ulong *)(puVar11 + -0x3a8) = uVar23;
            puVar25 = puVar31;
            puVar26 = puVar22;
          }
          else {
            uVar17 = (ulong)uVar3 - 1;
            puVar26 = (ulong *)puVar27[(ulong)uVar3 + 0x43];
            *(ulong **)(puVar11 + -0x2e8) = puVar27;
            *(long *)(puVar11 + -0x2e0) = lVar28;
            *(ulong *)(puVar11 + -0x2d8) = uVar17;
            *(ulong **)(puVar11 + -0x2d0) = puVar26;
            *(ulong **)(puVar11 + -0x2c8) = puVar33;
            *(ulong **)(puVar11 + -0x2c0) = puVar22;
            *(ulong **)(puVar11 + -0x2b8) = puVar33;
            puVar25 = (ulong *)(ulong)*(ushort *)((long)puVar26 + 0x21a);
            if (0xb < (long)puVar31 + (long)puVar25 + 1U) {
              FUN_10604ad10(puVar11 + -0x2e8,5 - (long)puVar31);
              break;
            }
            uVar3 = *(ushort *)((long)puVar27 + 0x21a);
            puVar33 = (ulong *)((long)puVar25 + 1);
            uVar16 = (long)puVar33 + (long)puVar31;
            *(ulong **)(puVar11 + -0x3a8) = puVar22;
            unaff_x23 = puVar31;
          }
          puVar30 = (ulong *)(ulong)uVar3;
          *(ulong *)(puVar11 + -0x3c8) = uVar16;
          *(short *)((long)puVar26 + 0x21a) = (short)uVar16;
          unaff_x27 = puVar27 + (long)(int)uVar17 * 3;
          uVar16 = unaff_x27[1];
          *(ulong *)(puVar11 + -0x268) = unaff_x27[2];
          *(ulong *)(puVar11 + -0x270) = uVar16;
          *(ulong *)(puVar11 + -0x260) = unaff_x27[3];
          *(ulong *)(puVar11 + -0x3b8) = uVar17;
          *(ulong *)(puVar11 + -0x3b0) = ~uVar17 + (long)puVar30;
          lVar28 = (~uVar17 + (long)puVar30) * 0x18;
          _memmove(unaff_x27 + 1,unaff_x27 + 4,lVar28);
          *(ulong **)(puVar11 + -0x3d8) = unaff_x23;
          *(ulong **)(puVar11 + -0x3d0) = puVar25;
          puVar29 = (ulong *)((long)puVar25 * 0x18);
          puVar32 = puVar26 + 1 + (long)puVar25 * 3;
          uVar16 = *(ulong *)(puVar11 + -0x260);
          uVar23 = *(ulong *)(puVar11 + -0x270);
          puVar32[1] = *(ulong *)(puVar11 + -0x268);
          *puVar32 = uVar23;
          puVar32[2] = uVar16;
          puVar31 = *(ulong **)(puVar11 + -0x3a8);
          _memcpy(puVar26 + 1 + (long)puVar33 * 3,puVar31 + 1,(long)unaff_x23 * 0x18);
          uVar16 = unaff_x27[0x22];
          *(ulong *)(puVar11 + -0x268) = unaff_x27[0x23];
          *(ulong *)(puVar11 + -0x270) = uVar16;
          *(ulong *)(puVar11 + -0x260) = unaff_x27[0x24];
          _memmove(unaff_x27 + 0x22,unaff_x27 + 0x25,lVar28);
          puVar32 = puVar26 + 0x22 + (long)puVar25 * 3;
          uVar16 = *(ulong *)(puVar11 + -0x260);
          uVar23 = *(ulong *)(puVar11 + -0x270);
          puVar32[1] = *(ulong *)(puVar11 + -0x268);
          *puVar32 = uVar23;
          puVar32[2] = uVar16;
          _memcpy(puVar26 + 0x22 + (long)puVar33 * 3,puVar31 + 0x22,(long)unaff_x23 * 0x18);
          lVar28 = *(long *)(puVar11 + -0x3b8);
          puVar32 = (ulong *)(lVar28 + 1);
          _memmove(puVar27 + lVar28 + 0x45,puVar27 + lVar28 + 0x46,*(long *)(puVar11 + -0x3b0) << 3)
          ;
          if (puVar32 < puVar30) {
            do {
              puVar22 = (ulong *)puVar27[(long)puVar32 + 0x44];
              *(short *)(puVar22 + 0x43) = (short)puVar32;
              puVar32 = (ulong *)((long)puVar32 + 1);
              *puVar22 = (ulong)puVar27;
            } while (puVar30 != puVar32);
          }
          *(short *)((long)puVar27 + 0x21a) = *(short *)((long)puVar27 + 0x21a) + -1;
          unaff_x22 = *(ulong **)(puVar11 + -0x3a0);
          puVar32 = *(ulong **)(puVar11 + -1000);
          if ((ulong *)0x1 < unaff_x22) {
            lVar28 = *(long *)(puVar11 + -0x3c8);
            if (*(long *)(puVar11 + -0x3d8) + 1 != lVar28 - *(long *)(puVar11 + -0x3d0))
            goto LAB_10604bd74;
            _memcpy(puVar26 + (long)puVar33 + 0x44,puVar31 + 0x44,
                    (*(long *)(puVar11 + -0x3d8) + 1) * 8);
            do {
              puVar22 = (ulong *)puVar26[(long)puVar33 + 0x44];
              *(short *)(puVar22 + 0x43) = (short)puVar33;
              puVar33 = (ulong *)((long)puVar33 + 1);
              *puVar22 = (ulong)puVar26;
            } while ((ulong *)(lVar28 + 1) != puVar33);
          }
          _free(puVar31);
          uVar3 = *(ushort *)((long)puVar27 + 0x21a);
          puVar22 = puVar27;
          puVar33 = unaff_x22;
          if (4 < uVar3) break;
        } while( true );
      }
      puVar20 = *(undefined8 **)(puVar11 + -0x3c0);
      puVar29 = *(ulong **)(puVar11 + -0x3e0);
      uVar23 = *(ulong *)(puVar11 + -0x3f8);
LAB_10604baa0:
      uVar35 = *(undefined8 *)(puVar11 + -0x388);
      uVar40 = *(undefined8 *)(puVar11 + -0x370);
      uVar37 = *(undefined8 *)(puVar11 + -0x378);
      puVar20[1] = *(undefined8 *)(puVar11 + -0x380);
      *puVar20 = uVar35;
      puVar20[3] = uVar40;
      puVar20[2] = uVar37;
      uVar35 = *(undefined8 *)(puVar11 + -0x368);
      puVar20[5] = *(undefined8 *)(puVar11 + -0x360);
      puVar20[4] = uVar35;
      puVar20[6] = puVar32;
      puVar20[7] = uVar23;
      puVar20[8] = puVar29;
      return;
    }
    if (*(short *)((long)unaff_x27 + 0x21a) == 0) {
LAB_10604bd90:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6985,0x7b,&UNK_10b4ae830);
LAB_10604bdc4:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10604bdc8);
      (*pcVar10)();
    }
    puVar22 = (ulong *)unaff_x27[0x45];
    *(ulong **)(puVar11 + -800) = unaff_x27;
    *(ulong **)(puVar11 + -0x318) = puVar33;
    *(undefined8 *)(puVar11 + -0x310) = 0;
    *(ulong **)(puVar11 + -0x308) = puVar32;
    *(undefined8 *)(puVar11 + -0x300) = *(undefined8 *)(puVar11 + -0x3f8);
    *(ulong **)(puVar11 + -0x2f8) = puVar22;
    *(undefined8 *)(puVar11 + -0x2f0) = *(undefined8 *)(puVar11 + -0x3f8);
    uVar23 = (ulong)*(ushort *)((long)puVar22 + 0x21a);
    if (uVar23 + (long)puVar26 < 0xc) {
      uVar17 = 0;
      puVar31 = (ulong *)(uVar16 & 0xffff);
      puVar29 = puVar32;
      if (puVar31 < *(ulong **)(puVar11 + -0x3e0)) {
LAB_10604ba40:
        puVar13 = &UNK_10b4ae938;
        uVar35 = 0x8e;
        puVar12 = &UNK_109bd6abf;
      }
      else {
LAB_10604b80c:
        *(ulong *)(puVar11 + -0x3a8) = uVar21;
        *(ulong **)(puVar11 + -0x3a0) = puVar22;
        uVar23 = uVar23 & 0xffff;
        lVar28 = (long)puVar31 + 1;
        uVar16 = lVar28 + uVar23;
        if (uVar16 < 0xc) {
          puVar26 = (ulong *)(ulong)*(ushort *)((long)unaff_x27 + 0x21a);
          *(ulong *)(puVar11 + -1000) = uVar16;
          *(short *)((long)puVar29 + 0x21a) = (short)uVar16;
          iVar24 = (int)uVar17;
          uVar16 = unaff_x27[(long)iVar24 * 3 + 1];
          *(ulong *)(puVar11 + -0x2a8) = unaff_x27[(long)iVar24 * 3 + 2];
          *(ulong *)(puVar11 + -0x2b0) = uVar16;
          *(ulong *)(puVar11 + -0x2a0) = unaff_x27[(long)iVar24 * 3 + 3];
          *(ulong *)(puVar11 + -0x3b8) = ~uVar17 + (long)puVar26;
          puVar30 = (ulong *)((~uVar17 + (long)puVar26) * 0x18);
          *(ulong *)(puVar11 + -0x3c8) = uVar17;
          _memmove(unaff_x27 + (long)iVar24 * 3 + 1,unaff_x27 + (long)iVar24 * 3 + 4,puVar30);
          *(ulong *)(puVar11 + -0x3d8) = uVar23;
          *(ulong **)(puVar11 + -0x3d0) = puVar31;
          puVar32 = puVar29 + (long)puVar31 * 3 + 1;
          uVar16 = *(ulong *)(puVar11 + -0x2b0);
          puVar32[1] = *(ulong *)(puVar11 + -0x2a8);
          *puVar32 = uVar16;
          puVar32[2] = *(ulong *)(puVar11 + -0x2a0);
          *(long *)(puVar11 + -0x3b0) = lVar28;
          lVar15 = *(long *)(puVar11 + -0x3a0);
          _memcpy(puVar29 + lVar28 * 3 + 1,lVar15 + 8,uVar23 * 0x18);
          uVar16 = unaff_x27[(long)iVar24 * 3 + 0x22];
          *(ulong *)(puVar11 + -0x2a8) = unaff_x27[(long)iVar24 * 3 + 0x23];
          *(ulong *)(puVar11 + -0x2b0) = uVar16;
          *(ulong *)(puVar11 + -0x2a0) = unaff_x27[(long)iVar24 * 3 + 0x24];
          _memmove(unaff_x27 + (long)iVar24 * 3 + 0x22,unaff_x27 + (long)iVar24 * 3 + 0x25,puVar30);
          puVar32 = puVar29 + (long)puVar31 * 3 + 0x22;
          uVar16 = *(ulong *)(puVar11 + -0x2b0);
          puVar32[1] = *(ulong *)(puVar11 + -0x2a8);
          *puVar32 = uVar16;
          puVar32[2] = *(ulong *)(puVar11 + -0x2a0);
          _memcpy(puVar29 + lVar28 * 3 + 0x22,lVar15 + 0x110,uVar23 * 0x18);
          lVar28 = *(long *)(puVar11 + -0x3c8);
          puVar31 = (ulong *)(lVar28 + 1);
          _memmove(unaff_x27 + lVar28 + 0x45,unaff_x27 + lVar28 + 0x46,
                   *(long *)(puVar11 + -0x3b8) << 3);
          if (puVar31 < puVar26) {
            do {
              puVar32 = (ulong *)unaff_x27[(long)puVar31 + 0x44];
              *(short *)(puVar32 + 0x43) = (short)puVar31;
              puVar31 = (ulong *)((long)puVar31 + 1);
              *puVar32 = (ulong)unaff_x27;
            } while (puVar26 != puVar31);
          }
          *(short *)((long)unaff_x27 + 0x21a) = *(short *)((long)unaff_x27 + 0x21a) + -1;
          unaff_x22 = *(ulong **)(puVar11 + -0x3b0);
          if ((ulong *)0x1 < puVar33) {
            puVar26 = *(ulong **)(puVar11 + -0x3d0);
            lVar28 = *(long *)(puVar11 + -0x3d8) + 1;
            if (lVar28 != *(long *)(puVar11 + -1000) - (long)puVar26) {
LAB_10604bd74:
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
              goto LAB_10604bdc4;
            }
            _memcpy(puVar29 + (long)unaff_x22 + 0x44,lVar15 + 0x220,lVar28 * 8);
            lVar14 = (long)puVar26 + 0x45;
            do {
              puVar20 = (undefined8 *)puVar29[lVar14];
              *puVar20 = puVar29;
              *(short *)(puVar20 + 0x43) = (short)lVar14 + -0x44;
              lVar14 = lVar14 + 1;
              lVar28 = lVar28 + -1;
              puVar31 = (ulong *)0x0;
            } while (lVar28 != 0);
          }
          _free(lVar15);
          puVar32 = (ulong *)0x0;
          if ((int)*(undefined8 *)(puVar11 + -0x3a8) != 0) {
            puVar32 = unaff_x22;
          }
          *(long *)(puVar11 + -0x3e0) = (long)puVar32 + *(long *)(puVar11 + -0x3e0);
          puVar32 = puVar29;
          goto LAB_10604ba80;
        }
        puVar13 = &UNK_10b4ae950;
        uVar35 = 0x2a;
        puVar12 = &UNK_109bd6b4d;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar12,uVar35,puVar13);
      goto LAB_10604bdc4;
    }
    auVar42._8_8_ = 1;
    auVar42._0_8_ = puVar11 + -800;
    uVar35 = 0x10604ba80;
    puVar11 = puVar11 + -0x400;
  } while( true );
LAB_10604bd60:
  auVar42._8_8_ = 5 - (long)puVar31;
  auVar42._0_8_ = puVar11 + -0x2b0;
  uVar35 = 0x10604bd70;
  puVar11 = puVar11 + -0x400;
  goto SUB_10604b1c4;
}

