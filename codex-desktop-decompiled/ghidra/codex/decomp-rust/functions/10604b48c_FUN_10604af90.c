
/* WARNING: Possible PIC construction at 0x00010604bd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010604ba7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010604bd70) */

void FUN_10604af90(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  ulong *unaff_x19;
  ulong *puVar18;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar19;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *unaff_x26;
  ulong *puVar23;
  ulong *unaff_x27;
  ulong *unaff_x28;
  undefined1 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_e0 [8];
  ulong *puStack_d8;
  ulong *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puVar24 = &stack0xfffffffffffffff0;
  puVar21 = (ulong *)param_1[5];
  puVar22 = (ulong *)(ulong)*(ushort *)((long)puVar21 + 0x21a);
  if ((ulong)((long)param_2 + (long)puVar22) < 0xc) {
    unaff_x26 = (ulong *)param_1[3];
    unaff_x21 = (ulong *)(ulong)*(ushort *)((long)unaff_x26 + 0x21a);
    unaff_x28 = (ulong *)((long)unaff_x21 - (long)param_2);
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (unaff_x21 < param_2) goto LAB_10604b17c;
    *(short *)((long)unaff_x26 + 0x21a) = (short)unaff_x28;
    *(short *)((long)puVar21 + 0x21a) = (short)((long)param_2 + (long)puVar22);
    unaff_x23 = puVar21 + 1;
    lStack_c8 = (long)puVar22 << 3;
    _memmove(unaff_x23 + (long)param_2,unaff_x23);
    unaff_x22 = puVar21 + 0xc;
    _memmove(unaff_x22 + (long)param_2 * 5,unaff_x22,(long)puVar22 * 0x28);
    unaff_x27 = (ulong *)((long)unaff_x28 + 1);
    unaff_x21 = (ulong *)((long)unaff_x21 - (long)unaff_x27);
    puVar23 = unaff_x26;
    if (unaff_x21 == (ulong *)((long)param_2 - 1U)) {
      puVar15 = unaff_x26 + 1;
      puStack_d0 = puVar22;
      _memcpy(unaff_x23,puVar15 + (long)unaff_x27,(long)unaff_x21 * 8);
      puVar23 = unaff_x26 + 0xc;
      unaff_x23 = (ulong *)((long)unaff_x21 * 0x28);
      puStack_d8 = unaff_x26;
      _memcpy(unaff_x22,puVar23 + ((ulong)unaff_x27 & 0xffffffff) * 5,unaff_x23);
      puVar22 = puVar23 + ((ulong)unaff_x28 & 0xffffffff) * 5;
      uStack_b8 = puVar22[1];
      uStack_c0 = *puVar22;
      uStack_a8 = puVar22[3];
      uStack_b0 = puVar22[2];
      uStack_a0 = puVar22[4];
      lVar10 = *param_1 + param_1[2] * 8;
      lVar9 = *param_1 + param_1[2] * 0x28;
      uVar12 = *(ulong *)(lVar10 + 8);
      *(ulong *)(lVar10 + 8) = puVar15[(long)unaff_x28];
      uStack_88 = *(ulong *)(lVar9 + 0x68);
      uStack_90 = *(ulong *)(lVar9 + 0x60);
      uStack_78 = *(ulong *)(lVar9 + 0x78);
      uStack_80 = *(ulong *)(lVar9 + 0x70);
      uStack_70 = *(ulong *)(lVar9 + 0x80);
      *(ulong *)(lVar9 + 0x68) = uStack_b8;
      *(ulong *)(lVar9 + 0x60) = uStack_c0;
      *(ulong *)(lVar9 + 0x78) = uStack_a8;
      *(ulong *)(lVar9 + 0x70) = uStack_b0;
      *(ulong *)(lVar9 + 0x80) = uStack_a0;
      puVar21[(long)param_2] = uVar12;
      puVar22 = unaff_x22 + (long)unaff_x21 * 5;
      puVar22[4] = uStack_70;
      puVar22[1] = uStack_88;
      *puVar22 = uStack_90;
      puVar22[3] = uStack_78;
      puVar22[2] = uStack_80;
      puVar22 = puVar15;
      if (param_1[4] == 0) {
        if (param_1[6] == 0) {
          return;
        }
      }
      else if (param_1[6] != 0) {
        puVar22 = puVar21 + 0x44;
        _memmove(puVar22 + (long)param_2,puVar22,lStack_c8 + 8);
        _memcpy(puVar22,puStack_d8 + (long)unaff_x28 + 0x45,(long)param_2 * 8);
        lVar10 = 0;
        do {
          puVar13 = (undefined8 *)puVar21[lVar10 + 0x44];
          *(short *)(puVar13 + 0x43) = (short)lVar10;
          lVar10 = lVar10 + 1;
          *puVar13 = puVar21;
        } while ((long)param_2 + (long)puStack_d0 + 1 != lVar10);
        return;
      }
      goto LAB_10604b1ac;
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a0b,0x33,&UNK_10b4ae8a8);
LAB_10604b17c:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a3e,0x27,&UNK_10b4ae8c0);
    puVar23 = unaff_x26;
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
LAB_10604b1ac:
  uVar25 = 0x10604b1c4;
  auVar33 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28,&UNK_10b4ae8d8);
  puVar5 = auStack_e0;
SUB_10604b1c4:
  do {
    uVar12 = auVar33._8_8_;
    puVar15 = auVar33._0_8_;
    *(ulong **)(puVar5 + -0x60) = unaff_x28;
    *(ulong **)(puVar5 + -0x58) = unaff_x27;
    *(ulong **)(puVar5 + -0x50) = puVar23;
    *(ulong **)(puVar5 + -0x48) = puVar22;
    *(ulong **)(puVar5 + -0x40) = puVar21;
    *(ulong **)(puVar5 + -0x38) = unaff_x23;
    *(ulong **)(puVar5 + -0x30) = unaff_x22;
    *(ulong **)(puVar5 + -0x28) = unaff_x21;
    *(ulong **)(puVar5 + -0x20) = unaff_x20;
    *(ulong **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = puVar24;
    *(undefined8 *)(puVar5 + -8) = uVar25;
    puVar22 = (ulong *)puVar15[3];
    uVar16 = (ulong)*(ushort *)((long)puVar22 + 0x21a);
    if (uVar12 + uVar16 < 0xc) {
      puVar21 = (ulong *)puVar15[5];
      unaff_x19 = (ulong *)(*(ushort *)((long)puVar21 + 0x21a) - uVar12);
      unaff_x20 = puVar15;
      if (*(ushort *)((long)puVar21 + 0x21a) < uVar12) goto LAB_10604b45c;
      *(short *)((long)puVar22 + 0x21a) = (short)(uVar12 + uVar16);
      *(short *)((long)puVar21 + 0x21a) = (short)unaff_x19;
      unaff_x22 = puVar21 + 1;
      *(ulong *)(puVar5 + -0x100) = uVar12;
      unaff_x28 = (ulong *)(uVar12 * 0x18);
      puVar20 = unaff_x28 + -3;
      puVar13 = (undefined8 *)((long)unaff_x22 + (long)puVar20);
      puVar19 = puVar21 + 0x22;
      puVar1 = (undefined8 *)((long)puVar19 + (long)puVar20);
      uVar25 = *puVar1;
      *(undefined8 *)(puVar5 + -0xe8) = puVar1[1];
      *(undefined8 *)(puVar5 + -0xf0) = uVar25;
      *(undefined8 *)(puVar5 + -0xe0) = puVar1[2];
      lVar10 = *puVar15 + puVar15[2] * 0x18;
      uVar25 = *(undefined8 *)(lVar10 + 8);
      *(undefined8 *)(puVar5 + -200) = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(puVar5 + -0xd0) = uVar25;
      uVar14 = *(ulong *)(lVar10 + 0x18);
      *(ulong *)(puVar5 + -0xc0) = uVar14;
      uVar27 = puVar13[1];
      uVar25 = *puVar13;
      *(undefined8 *)(lVar10 + 0x18) = puVar13[2];
      *(undefined8 *)(lVar10 + 0x10) = uVar27;
      *(undefined8 *)(lVar10 + 8) = uVar25;
      uVar25 = *(undefined8 *)(lVar10 + 0x110);
      *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(lVar10 + 0x118);
      *(undefined8 *)(puVar5 + -0xb8) = uVar25;
      *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(lVar10 + 0x120);
      *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)(puVar5 + -0xe0);
      uVar25 = *(undefined8 *)(puVar5 + -0xf0);
      *(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)(puVar5 + -0xe8);
      *(undefined8 *)(lVar10 + 0x110) = uVar25;
      uVar26 = *(ulong *)(puVar5 + -0xd0);
      *(ulong *)(puVar5 + -0x98) = *(ulong *)(puVar5 + -200);
      *(ulong *)(puVar5 + -0xa0) = uVar26;
      *(ulong *)(puVar5 + -0x90) = uVar14;
      uVar29 = *(ulong *)(puVar5 + -0xb0);
      uVar28 = *(ulong *)(puVar5 + -0xb8);
      *(ulong *)(puVar5 + -0x78) = uVar29;
      *(ulong *)(puVar5 + -0x80) = uVar28;
      uVar11 = *(ulong *)(puVar5 + -0xa8);
      *(ulong *)(puVar5 + -0x70) = uVar11;
      *(ulong *)(puVar5 + -0xf8) = uVar16;
      puVar23 = puVar22 + uVar16 * 3 + 1;
      puVar23[1] = *(ulong *)(puVar5 + -200);
      *puVar23 = uVar26;
      puVar23[2] = uVar14;
      puVar23 = puVar22 + 0x22;
      puVar18 = puVar23 + uVar16 * 3;
      puVar18[1] = uVar29;
      *puVar18 = uVar28;
      puVar18[2] = uVar11;
      _memcpy(puVar22 + uVar16 * 3 + 4,unaff_x22,puVar20);
      _memcpy(puVar23 + uVar16 * 3 + 3,puVar19,puVar20);
      unaff_x23 = (ulong *)((long)unaff_x19 * 0x18);
      _memmove(unaff_x22,unaff_x22 + uVar12 * 3,unaff_x23);
      _memmove(puVar19,puVar19 + uVar12 * 3,unaff_x23);
      unaff_x27 = unaff_x19;
      if (puVar15[4] == 0) {
        if (puVar15[6] == 0) {
          return;
        }
      }
      else if (puVar15[6] != 0) {
        lVar10 = *(long *)(puVar5 + -0x100);
        lVar9 = *(long *)(puVar5 + -0xf8);
        puVar23 = puVar21 + 0x44;
        _memcpy(puVar22 + lVar9 + 0x45,puVar23,lVar10 * 8);
        _memmove(puVar23,puVar23 + lVar10,(long)unaff_x19 * 8 + 8);
        puVar13 = (undefined8 *)puVar22[lVar9 + 0x45];
        *puVar13 = puVar22;
        *(short *)(puVar13 + 0x43) = (short)lVar9 + 1;
        if (lVar10 != 1) {
          lVar9 = *(long *)(puVar5 + -0xf8);
          puVar13 = (undefined8 *)puVar22[lVar9 + 0x46];
          *puVar13 = puVar22;
          *(short *)(puVar13 + 0x43) = (short)lVar9 + 2;
          if (lVar10 != 2) {
            lVar9 = *(long *)(puVar5 + -0xf8);
            puVar13 = (undefined8 *)puVar22[lVar9 + 0x47];
            *puVar13 = puVar22;
            *(short *)(puVar13 + 0x43) = (short)lVar9 + 3;
            if (lVar10 != 3) {
              lVar9 = *(long *)(puVar5 + -0xf8);
              puVar13 = (undefined8 *)puVar22[lVar9 + 0x48];
              *puVar13 = puVar22;
              *(short *)(puVar13 + 0x43) = (short)lVar9 + 4;
              if (lVar10 != 4) {
                lVar10 = *(long *)(puVar5 + -0xf8);
                puVar13 = (undefined8 *)puVar22[lVar10 + 0x49];
                *puVar13 = puVar22;
                *(short *)(puVar13 + 0x43) = (short)lVar10 + 5;
              }
            }
          }
        }
        lVar10 = 0;
        do {
          puVar13 = (undefined8 *)puVar21[lVar10 + 0x44];
          *(short *)(puVar13 + 0x43) = (short)lVar10;
          lVar10 = lVar10 + 1;
          *puVar13 = puVar21;
        } while ((long)unaff_x19 + 1U != lVar10);
        return;
      }
    }
    else {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a65,0x32,&UNK_10b4ae8f0);
LAB_10604b45c:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a97,0x28,&UNK_10b4ae908);
      puVar19 = unaff_x21;
    }
    auVar33 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28,&UNK_10b4ae920);
    uVar12 = auVar33._8_8_;
    puVar15 = auVar33._0_8_;
    *(ulong **)(puVar5 + -0x160) = unaff_x28;
    *(ulong **)(puVar5 + -0x158) = unaff_x27;
    *(ulong **)(puVar5 + -0x150) = puVar23;
    *(ulong **)(puVar5 + -0x148) = puVar22;
    *(ulong **)(puVar5 + -0x140) = puVar21;
    *(ulong **)(puVar5 + -0x138) = unaff_x23;
    *(ulong **)(puVar5 + -0x130) = unaff_x22;
    *(ulong **)(puVar5 + -0x128) = puVar19;
    *(ulong **)(puVar5 + -0x120) = unaff_x20;
    *(ulong **)(puVar5 + -0x118) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x110) = puVar5 + -0x10;
    *(undefined8 *)(puVar5 + -0x108) = 0x10604b48c;
    uVar11 = puVar15[3];
    uVar16 = (ulong)*(ushort *)(uVar11 + 0x21a);
    if (uVar12 + uVar16 < 0xc) {
      puVar22 = (ulong *)puVar15[5];
      unaff_x19 = (ulong *)(*(ushort *)((long)puVar22 + 0x21a) - uVar12);
      unaff_x20 = puVar15;
      if (*(ushort *)((long)puVar22 + 0x21a) < uVar12) goto LAB_10604b6c8;
      *(short *)(uVar11 + 0x21a) = (short)(uVar12 + uVar16);
      puVar19 = (ulong *)(uVar12 * 8);
      uVar14 = puVar22[uVar12];
      *(short *)((long)puVar22 + 0x21a) = (short)unaff_x19;
      unaff_x22 = puVar22 + 0xc;
      *(ulong *)(puVar5 + -0x1d8) = uVar12;
      *(ulong *)(puVar5 + -0x1c8) = uVar12 * 0x28;
      puVar21 = unaff_x22 + uVar12 * 5 + -5;
      uVar26 = *puVar21;
      uVar29 = puVar21[3];
      uVar28 = puVar21[2];
      *(ulong *)(puVar5 + -0x1b8) = puVar21[1];
      *(ulong *)(puVar5 + -0x1c0) = uVar26;
      *(ulong *)(puVar5 + -0x1a8) = uVar29;
      *(ulong *)(puVar5 + -0x1b0) = uVar28;
      *(ulong *)(puVar5 + -0x1a0) = puVar21[4];
      lVar10 = *puVar15 + puVar15[2] * 8;
      lVar9 = *puVar15 + puVar15[2] * 0x28;
      uVar25 = *(undefined8 *)(lVar10 + 8);
      *(ulong *)(lVar10 + 8) = uVar14;
      uVar28 = *(ulong *)(lVar9 + 0x68);
      uVar26 = *(ulong *)(lVar9 + 0x60);
      uVar30 = *(ulong *)(lVar9 + 0x78);
      uVar29 = *(ulong *)(lVar9 + 0x70);
      *(ulong *)(puVar5 + -0x188) = uVar28;
      *(ulong *)(puVar5 + -400) = uVar26;
      *(ulong *)(puVar5 + -0x178) = uVar30;
      *(ulong *)(puVar5 + -0x180) = uVar29;
      uVar14 = *(ulong *)(lVar9 + 0x80);
      *(ulong *)(puVar5 + -0x170) = uVar14;
      uVar27 = *(undefined8 *)(puVar5 + -0x1c0);
      uVar32 = *(undefined8 *)(puVar5 + -0x1a8);
      uVar31 = *(undefined8 *)(puVar5 + -0x1b0);
      *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(puVar5 + -0x1b8);
      *(undefined8 *)(lVar9 + 0x60) = uVar27;
      *(undefined8 *)(lVar9 + 0x78) = uVar32;
      *(undefined8 *)(lVar9 + 0x70) = uVar31;
      *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)(puVar5 + -0x1a0);
      *(undefined8 *)(uVar11 + 8 + uVar16 * 8) = uVar25;
      unaff_x28 = (ulong *)(uVar11 + uVar16 * 0x28);
      unaff_x28[0x10] = uVar14;
      unaff_x28[0xd] = uVar28;
      unaff_x28[0xc] = uVar26;
      unaff_x28[0xf] = uVar30;
      unaff_x28[0xe] = uVar29;
      puVar21 = puVar22 + 1;
      *(ulong *)(puVar5 + -0x1d0) = uVar16;
      unaff_x27 = (ulong *)(uVar16 + 1);
      _memcpy(uVar11 + 8 + (long)unaff_x27 * 8,puVar21,puVar19 + -1);
      _memcpy(unaff_x28 + 0x11,unaff_x22,uVar12 * 0x28 + -0x28);
      unaff_x23 = (ulong *)((long)unaff_x19 * 8);
      _memmove(puVar21,puVar21 + uVar12,unaff_x23);
      _memmove(unaff_x22,(long)unaff_x22 + *(long *)(puVar5 + -0x1c8),(long)unaff_x19 * 0x28);
      if (puVar15[4] == 0) {
        if (puVar15[6] == 0) {
          return;
        }
      }
      else if (puVar15[6] != 0) {
        puVar21 = puVar22 + 0x44;
        lVar10 = uVar11 + 0x220;
        puVar13 = (undefined8 *)(lVar10 + (long)unaff_x27 * 8);
        _memcpy(puVar13,puVar21,puVar19);
        _memmove(puVar21,puVar21 + uVar12,unaff_x23 + 1);
        puVar21 = (ulong *)*puVar13;
        *puVar21 = uVar11;
        *(short *)(puVar21 + 0x43) = (short)unaff_x27;
        lVar9 = *(long *)(puVar5 + -0x1d8);
        lVar8 = *(long *)(puVar5 + -0x1d0);
        if (lVar9 != 1) {
          puVar21 = *(ulong **)(lVar10 + (lVar8 + 2) * 8);
          *puVar21 = uVar11;
          *(short *)(puVar21 + 0x43) = (short)(lVar8 + 2);
          if (lVar9 != 2) {
            puVar21 = *(ulong **)(lVar10 + (lVar8 + 3) * 8);
            *puVar21 = uVar11;
            *(short *)(puVar21 + 0x43) = (short)(lVar8 + 3);
            if (lVar9 != 3) {
              puVar21 = *(ulong **)(lVar10 + (lVar8 + 4) * 8);
              *puVar21 = uVar11;
              *(short *)(puVar21 + 0x43) = (short)(lVar8 + 4);
              if (lVar9 != 4) {
                puVar21 = *(ulong **)(lVar10 + (lVar8 + 5) * 8);
                *puVar21 = uVar11;
                *(short *)(puVar21 + 0x43) = (short)(lVar8 + 5);
              }
            }
          }
        }
        lVar10 = 0;
        do {
          puVar13 = (undefined8 *)puVar22[lVar10 + 0x44];
          *(short *)(puVar13 + 0x43) = (short)lVar10;
          lVar10 = lVar10 + 1;
          *puVar13 = puVar22;
        } while ((long)unaff_x19 + 1U != lVar10);
        return;
      }
    }
    else {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a65,0x32,&UNK_10b4ae8f0);
LAB_10604b6c8:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd6a97,0x28,&UNK_10b4ae908);
    }
    puVar7 = &UNK_10b4ae920;
    auVar33 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd5961,0x28);
    unaff_x21 = auVar33._8_8_;
    *(ulong **)(puVar5 + -0x240) = unaff_x28;
    *(ulong **)(puVar5 + -0x238) = unaff_x27;
    *(ulong *)(puVar5 + -0x230) = uVar11;
    *(ulong **)(puVar5 + -0x228) = puVar22;
    *(ulong **)(puVar5 + -0x220) = puVar21;
    *(ulong **)(puVar5 + -0x218) = unaff_x23;
    *(ulong **)(puVar5 + -0x210) = unaff_x22;
    *(ulong **)(puVar5 + -0x208) = puVar19;
    *(ulong **)(puVar5 + -0x200) = unaff_x20;
    *(ulong **)(puVar5 + -0x1f8) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x1f0) = puVar5 + -0x110;
    *(undefined8 *)(puVar5 + -0x1e8) = 0x10604b6f8;
    puVar24 = puVar5 + -0x1f0;
    *(undefined **)(puVar5 + -0x3f0) = puVar7;
    *(long *)(puVar5 + -0x3c0) = auVar33._0_8_;
    puVar23 = (ulong *)*unaff_x21;
    puVar21 = (ulong *)unaff_x21[2];
    unaff_x22 = puVar23 + (long)puVar21 * 3 + 1;
    uVar12 = *unaff_x22;
    *(ulong *)(puVar5 + -0x398) = puVar23[(long)puVar21 * 3 + 2];
    *(ulong *)(puVar5 + -0x3a0) = uVar12;
    uVar2 = *(ushort *)((long)puVar23 + 0x21a);
    unaff_x20 = (ulong *)(ulong)uVar2;
    unaff_x19 = (ulong *)puVar23[(long)puVar21 * 3 + 3];
    unaff_x23 = (ulong *)(((long)unaff_x20 + ~(ulong)puVar21) * 0x18);
    _memmove(unaff_x22,puVar23 + (long)puVar21 * 3 + 4,unaff_x23);
    uVar12 = puVar23[(long)puVar21 * 3 + 0x22];
    *(ulong *)(puVar5 + -0x368) = puVar23[(long)puVar21 * 3 + 0x23];
    *(ulong *)(puVar5 + -0x370) = uVar12;
    *(ulong *)(puVar5 + -0x360) = puVar23[(long)puVar21 * 3 + 0x24];
    _memmove(puVar23 + (long)puVar21 * 3 + 0x22,puVar23 + (long)puVar21 * 3 + 0x25,unaff_x23);
    uVar3 = uVar2 - 1;
    uVar12 = (ulong)uVar3;
    *(short *)((long)puVar23 + 0x21a) = (short)uVar3;
    uVar16 = unaff_x21[1];
    *(undefined8 *)(puVar5 + -0x380) = *(undefined8 *)(puVar5 + -0x398);
    *(undefined8 *)(puVar5 + -0x388) = *(undefined8 *)(puVar5 + -0x3a0);
    *(ulong **)(puVar5 + -0x378) = unaff_x19;
    if ((4 < (uVar3 & 0xffff)) || (unaff_x27 = (ulong *)*puVar23, unaff_x27 == (ulong *)0x0)) {
      puVar13 = *(undefined8 **)(puVar5 + -0x3c0);
      goto LAB_10604baa0;
    }
    *(ulong **)(puVar5 + -0x3e0) = puVar21;
    unaff_x28 = (ulong *)(uVar16 + 1);
    uVar11 = puVar23[0x43];
    uVar14 = (ulong)(ushort)uVar11;
    *(ulong *)(puVar5 + -0x3f8) = uVar16;
    if ((ushort)uVar11 != 0) {
      uVar11 = uVar14 - 1;
      puVar15 = (ulong *)unaff_x27[uVar14 + 0x43];
      *(ulong **)(puVar5 + -0x358) = unaff_x27;
      *(ulong **)(puVar5 + -0x350) = unaff_x28;
      *(ulong *)(puVar5 + -0x348) = uVar11;
      *(ulong **)(puVar5 + -0x340) = puVar15;
      *(ulong *)(puVar5 + -0x338) = uVar16;
      *(ulong **)(puVar5 + -0x330) = puVar23;
      *(ulong *)(puVar5 + -0x328) = uVar16;
      unaff_x19 = (ulong *)(ulong)*(ushort *)((long)puVar15 + 0x21a);
      if ((ulong)((long)unaff_x20 + (long)unaff_x19) < 0xc) {
        uVar16 = uVar12;
        puVar19 = puVar23;
        puVar21 = puVar15;
        if ((uVar12 & 0xffff) < *(ulong *)(puVar5 + -0x3e0)) goto LAB_10604ba40;
        goto LAB_10604b80c;
      }
      FUN_10604ad10(puVar5 + -0x358,1);
      *(long *)(puVar5 + -0x3e0) = *(long *)(puVar5 + -0x3e0) + 1;
LAB_10604ba80:
      puVar15 = (ulong *)*puVar23;
      if ((puVar15 != (ulong *)0x0) && (uVar2 = *(ushort *)((long)puVar15 + 0x21a), uVar2 < 5)) {
        *(ulong **)(puVar5 + -1000) = puVar23;
        do {
          puVar19 = (ulong *)(ulong)uVar2;
          unaff_x21 = (ulong *)*puVar15;
          if (unaff_x21 == (ulong *)0x0) {
            if (uVar2 == 0) {
              **(undefined1 **)(puVar5 + -0x3f0) = 1;
            }
            break;
          }
          lVar10 = (long)unaff_x28 + 1;
          uVar2 = (ushort)puVar15[0x43];
          *(long *)(puVar5 + -0x3a0) = lVar10;
          if (uVar2 == 0) {
            uVar2 = *(ushort *)((long)unaff_x21 + 0x21a);
            if (uVar2 == 0) goto LAB_10604bd90;
            uVar16 = unaff_x21[0x45];
            *(ulong **)(puVar5 + -0x2b0) = unaff_x21;
            *(long *)(puVar5 + -0x2a8) = lVar10;
            *(undefined8 *)(puVar5 + -0x2a0) = 0;
            *(ulong **)(puVar5 + -0x298) = puVar15;
            *(ulong **)(puVar5 + -0x290) = unaff_x28;
            *(ulong *)(puVar5 + -0x288) = uVar16;
            *(ulong **)(puVar5 + -0x280) = unaff_x28;
            unaff_x28 = (ulong *)((long)puVar19 + 1);
            unaff_x23 = (ulong *)(ulong)*(ushort *)(uVar16 + 0x21a);
            uVar12 = (long)unaff_x28 + (long)unaff_x23;
            if (0xb < uVar12) goto LAB_10604bd60;
            uVar11 = 0;
            *(ulong *)(puVar5 + -0x3a8) = uVar16;
            puVar18 = puVar19;
            unaff_x20 = puVar15;
          }
          else {
            uVar11 = (ulong)uVar2 - 1;
            unaff_x20 = (ulong *)unaff_x21[(ulong)uVar2 + 0x43];
            *(ulong **)(puVar5 + -0x2e8) = unaff_x21;
            *(long *)(puVar5 + -0x2e0) = lVar10;
            *(ulong *)(puVar5 + -0x2d8) = uVar11;
            *(ulong **)(puVar5 + -0x2d0) = unaff_x20;
            *(ulong **)(puVar5 + -0x2c8) = unaff_x28;
            *(ulong **)(puVar5 + -0x2c0) = puVar15;
            *(ulong **)(puVar5 + -0x2b8) = unaff_x28;
            puVar18 = (ulong *)(ulong)*(ushort *)((long)unaff_x20 + 0x21a);
            if (0xb < (long)puVar19 + (long)puVar18 + 1U) {
              FUN_10604ad10(puVar5 + -0x2e8,5 - (long)puVar19);
              break;
            }
            uVar2 = *(ushort *)((long)unaff_x21 + 0x21a);
            unaff_x28 = (ulong *)((long)puVar18 + 1);
            uVar12 = (long)unaff_x28 + (long)puVar19;
            *(ulong **)(puVar5 + -0x3a8) = puVar15;
            unaff_x23 = puVar19;
          }
          puVar22 = (ulong *)(ulong)uVar2;
          *(ulong *)(puVar5 + -0x3c8) = uVar12;
          *(short *)((long)unaff_x20 + 0x21a) = (short)uVar12;
          unaff_x27 = unaff_x21 + (long)(int)uVar11 * 3;
          uVar12 = unaff_x27[1];
          *(ulong *)(puVar5 + -0x268) = unaff_x27[2];
          *(ulong *)(puVar5 + -0x270) = uVar12;
          *(ulong *)(puVar5 + -0x260) = unaff_x27[3];
          *(ulong *)(puVar5 + -0x3b8) = uVar11;
          *(ulong *)(puVar5 + -0x3b0) = ~uVar11 + (long)puVar22;
          lVar10 = (~uVar11 + (long)puVar22) * 0x18;
          _memmove(unaff_x27 + 1,unaff_x27 + 4,lVar10);
          *(ulong **)(puVar5 + -0x3d8) = unaff_x23;
          *(ulong **)(puVar5 + -0x3d0) = puVar18;
          puVar21 = (ulong *)((long)puVar18 * 0x18);
          puVar23 = unaff_x20 + 1 + (long)puVar18 * 3;
          uVar12 = *(ulong *)(puVar5 + -0x260);
          uVar16 = *(ulong *)(puVar5 + -0x270);
          puVar23[1] = *(ulong *)(puVar5 + -0x268);
          *puVar23 = uVar16;
          puVar23[2] = uVar12;
          unaff_x19 = *(ulong **)(puVar5 + -0x3a8);
          _memcpy(unaff_x20 + 1 + (long)unaff_x28 * 3,unaff_x19 + 1,(long)unaff_x23 * 0x18);
          uVar12 = unaff_x27[0x22];
          *(ulong *)(puVar5 + -0x268) = unaff_x27[0x23];
          *(ulong *)(puVar5 + -0x270) = uVar12;
          *(ulong *)(puVar5 + -0x260) = unaff_x27[0x24];
          _memmove(unaff_x27 + 0x22,unaff_x27 + 0x25,lVar10);
          puVar23 = unaff_x20 + 0x22 + (long)puVar18 * 3;
          uVar12 = *(ulong *)(puVar5 + -0x260);
          uVar16 = *(ulong *)(puVar5 + -0x270);
          puVar23[1] = *(ulong *)(puVar5 + -0x268);
          *puVar23 = uVar16;
          puVar23[2] = uVar12;
          _memcpy(unaff_x20 + 0x22 + (long)unaff_x28 * 3,unaff_x19 + 0x22,(long)unaff_x23 * 0x18);
          lVar10 = *(long *)(puVar5 + -0x3b8);
          puVar23 = (ulong *)(lVar10 + 1);
          _memmove(unaff_x21 + lVar10 + 0x45,unaff_x21 + lVar10 + 0x46,
                   *(long *)(puVar5 + -0x3b0) << 3);
          if (puVar23 < puVar22) {
            do {
              puVar15 = (ulong *)unaff_x21[(long)puVar23 + 0x44];
              *(short *)(puVar15 + 0x43) = (short)puVar23;
              puVar23 = (ulong *)((long)puVar23 + 1);
              *puVar15 = (ulong)unaff_x21;
            } while (puVar22 != puVar23);
          }
          *(short *)((long)unaff_x21 + 0x21a) = *(short *)((long)unaff_x21 + 0x21a) + -1;
          unaff_x22 = *(ulong **)(puVar5 + -0x3a0);
          puVar23 = *(ulong **)(puVar5 + -1000);
          if ((ulong *)0x1 < unaff_x22) {
            lVar10 = *(long *)(puVar5 + -0x3c8);
            if (*(long *)(puVar5 + -0x3d8) + 1 != lVar10 - *(long *)(puVar5 + -0x3d0))
            goto LAB_10604bd74;
            _memcpy(unaff_x20 + (long)unaff_x28 + 0x44,unaff_x19 + 0x44,
                    (*(long *)(puVar5 + -0x3d8) + 1) * 8);
            do {
              puVar15 = (ulong *)unaff_x20[(long)unaff_x28 + 0x44];
              *(short *)(puVar15 + 0x43) = (short)unaff_x28;
              unaff_x28 = (ulong *)((long)unaff_x28 + 1);
              *puVar15 = (ulong)unaff_x20;
            } while ((ulong *)(lVar10 + 1) != unaff_x28);
          }
          _free(unaff_x19);
          uVar2 = *(ushort *)((long)unaff_x21 + 0x21a);
          puVar15 = unaff_x21;
          unaff_x28 = unaff_x22;
          if (4 < uVar2) break;
        } while( true );
      }
      puVar13 = *(undefined8 **)(puVar5 + -0x3c0);
      puVar21 = *(ulong **)(puVar5 + -0x3e0);
      uVar16 = *(ulong *)(puVar5 + -0x3f8);
LAB_10604baa0:
      uVar25 = *(undefined8 *)(puVar5 + -0x388);
      uVar31 = *(undefined8 *)(puVar5 + -0x370);
      uVar27 = *(undefined8 *)(puVar5 + -0x378);
      puVar13[1] = *(undefined8 *)(puVar5 + -0x380);
      *puVar13 = uVar25;
      puVar13[3] = uVar31;
      puVar13[2] = uVar27;
      uVar25 = *(undefined8 *)(puVar5 + -0x368);
      puVar13[5] = *(undefined8 *)(puVar5 + -0x360);
      puVar13[4] = uVar25;
      puVar13[6] = puVar23;
      puVar13[7] = uVar16;
      puVar13[8] = puVar21;
      return;
    }
    if (*(short *)((long)unaff_x27 + 0x21a) == 0) {
LAB_10604bd90:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6985,0x7b,&UNK_10b4ae830);
LAB_10604bdc4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10604bdc8);
      (*pcVar4)();
    }
    puVar19 = (ulong *)unaff_x27[0x45];
    *(ulong **)(puVar5 + -800) = unaff_x27;
    *(ulong **)(puVar5 + -0x318) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x310) = 0;
    *(ulong **)(puVar5 + -0x308) = puVar23;
    *(undefined8 *)(puVar5 + -0x300) = *(undefined8 *)(puVar5 + -0x3f8);
    *(ulong **)(puVar5 + -0x2f8) = puVar19;
    *(undefined8 *)(puVar5 + -0x2f0) = *(undefined8 *)(puVar5 + -0x3f8);
    uVar16 = (ulong)*(ushort *)((long)puVar19 + 0x21a);
    if (uVar16 + (long)unaff_x20 < 0xc) {
      uVar11 = 0;
      unaff_x19 = (ulong *)(uVar12 & 0xffff);
      puVar21 = puVar23;
      if (unaff_x19 < *(ulong **)(puVar5 + -0x3e0)) {
LAB_10604ba40:
        puVar7 = &UNK_10b4ae938;
        uVar25 = 0x8e;
        puVar6 = &UNK_109bd6abf;
      }
      else {
LAB_10604b80c:
        *(ulong *)(puVar5 + -0x3a8) = uVar14;
        *(ulong **)(puVar5 + -0x3a0) = puVar19;
        uVar16 = uVar16 & 0xffff;
        lVar10 = (long)unaff_x19 + 1;
        uVar12 = lVar10 + uVar16;
        if (uVar12 < 0xc) {
          unaff_x20 = (ulong *)(ulong)*(ushort *)((long)unaff_x27 + 0x21a);
          *(ulong *)(puVar5 + -1000) = uVar12;
          *(short *)((long)puVar21 + 0x21a) = (short)uVar12;
          iVar17 = (int)uVar11;
          uVar12 = unaff_x27[(long)iVar17 * 3 + 1];
          *(ulong *)(puVar5 + -0x2a8) = unaff_x27[(long)iVar17 * 3 + 2];
          *(ulong *)(puVar5 + -0x2b0) = uVar12;
          *(ulong *)(puVar5 + -0x2a0) = unaff_x27[(long)iVar17 * 3 + 3];
          *(ulong *)(puVar5 + -0x3b8) = ~uVar11 + (long)unaff_x20;
          puVar22 = (ulong *)((~uVar11 + (long)unaff_x20) * 0x18);
          *(ulong *)(puVar5 + -0x3c8) = uVar11;
          _memmove(unaff_x27 + (long)iVar17 * 3 + 1,unaff_x27 + (long)iVar17 * 3 + 4,puVar22);
          *(ulong *)(puVar5 + -0x3d8) = uVar16;
          *(ulong **)(puVar5 + -0x3d0) = unaff_x19;
          puVar23 = puVar21 + (long)unaff_x19 * 3 + 1;
          uVar12 = *(ulong *)(puVar5 + -0x2b0);
          puVar23[1] = *(ulong *)(puVar5 + -0x2a8);
          *puVar23 = uVar12;
          puVar23[2] = *(ulong *)(puVar5 + -0x2a0);
          *(long *)(puVar5 + -0x3b0) = lVar10;
          lVar9 = *(long *)(puVar5 + -0x3a0);
          _memcpy(puVar21 + lVar10 * 3 + 1,lVar9 + 8,uVar16 * 0x18);
          uVar12 = unaff_x27[(long)iVar17 * 3 + 0x22];
          *(ulong *)(puVar5 + -0x2a8) = unaff_x27[(long)iVar17 * 3 + 0x23];
          *(ulong *)(puVar5 + -0x2b0) = uVar12;
          *(ulong *)(puVar5 + -0x2a0) = unaff_x27[(long)iVar17 * 3 + 0x24];
          _memmove(unaff_x27 + (long)iVar17 * 3 + 0x22,unaff_x27 + (long)iVar17 * 3 + 0x25,puVar22);
          puVar23 = puVar21 + (long)unaff_x19 * 3 + 0x22;
          uVar12 = *(ulong *)(puVar5 + -0x2b0);
          puVar23[1] = *(ulong *)(puVar5 + -0x2a8);
          *puVar23 = uVar12;
          puVar23[2] = *(ulong *)(puVar5 + -0x2a0);
          _memcpy(puVar21 + lVar10 * 3 + 0x22,lVar9 + 0x110,uVar16 * 0x18);
          lVar10 = *(long *)(puVar5 + -0x3c8);
          unaff_x19 = (ulong *)(lVar10 + 1);
          _memmove(unaff_x27 + lVar10 + 0x45,unaff_x27 + lVar10 + 0x46,
                   *(long *)(puVar5 + -0x3b8) << 3);
          if (unaff_x19 < unaff_x20) {
            do {
              puVar23 = (ulong *)unaff_x27[(long)unaff_x19 + 0x44];
              *(short *)(puVar23 + 0x43) = (short)unaff_x19;
              unaff_x19 = (ulong *)((long)unaff_x19 + 1);
              *puVar23 = (ulong)unaff_x27;
            } while (unaff_x20 != unaff_x19);
          }
          *(short *)((long)unaff_x27 + 0x21a) = *(short *)((long)unaff_x27 + 0x21a) + -1;
          unaff_x22 = *(ulong **)(puVar5 + -0x3b0);
          if ((ulong *)0x1 < unaff_x28) {
            unaff_x20 = *(ulong **)(puVar5 + -0x3d0);
            lVar10 = *(long *)(puVar5 + -0x3d8) + 1;
            if (lVar10 != *(long *)(puVar5 + -1000) - (long)unaff_x20) {
LAB_10604bd74:
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
              goto LAB_10604bdc4;
            }
            _memcpy(puVar21 + (long)unaff_x22 + 0x44,lVar9 + 0x220,lVar10 * 8);
            lVar8 = (long)unaff_x20 + 0x45;
            do {
              puVar13 = (undefined8 *)puVar21[lVar8];
              *puVar13 = puVar21;
              *(short *)(puVar13 + 0x43) = (short)lVar8 + -0x44;
              lVar8 = lVar8 + 1;
              lVar10 = lVar10 + -1;
              unaff_x19 = (ulong *)0x0;
            } while (lVar10 != 0);
          }
          _free(lVar9);
          puVar23 = (ulong *)0x0;
          if ((int)*(undefined8 *)(puVar5 + -0x3a8) != 0) {
            puVar23 = unaff_x22;
          }
          *(long *)(puVar5 + -0x3e0) = (long)puVar23 + *(long *)(puVar5 + -0x3e0);
          puVar23 = puVar21;
          goto LAB_10604ba80;
        }
        puVar7 = &UNK_10b4ae950;
        uVar25 = 0x2a;
        puVar6 = &UNK_109bd6b4d;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar6,uVar25,puVar7);
      goto LAB_10604bdc4;
    }
    auVar33._8_8_ = 1;
    auVar33._0_8_ = puVar5 + -800;
    uVar25 = 0x10604ba80;
    puVar5 = puVar5 + -0x400;
  } while( true );
LAB_10604bd60:
  auVar33._8_8_ = 5 - (long)puVar19;
  auVar33._0_8_ = puVar5 + -0x2b0;
  uVar25 = 0x10604bd70;
  puVar5 = puVar5 + -0x400;
  goto SUB_10604b1c4;
}

