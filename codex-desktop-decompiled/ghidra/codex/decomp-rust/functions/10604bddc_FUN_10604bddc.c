
void FUN_10604bddc(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uStack_1c0;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar24 = (long *)*param_2;
  uVar4 = *(ushort *)((long)plVar24 + 0x21a);
  uVar21 = (ulong)uVar4;
  uStack_1c0 = param_2[2];
  lVar11 = plVar24[uStack_1c0 + 1];
  _memmove(plVar24 + uStack_1c0 + 1,plVar24 + uStack_1c0 + 2,(uVar21 + ~uStack_1c0) * 8);
  lVar2 = plVar24[uStack_1c0 * 5 + 0xc];
  lVar3 = plVar24[uStack_1c0 * 5 + 0xd];
  lVar30 = plVar24[uStack_1c0 * 5 + 0xf];
  lVar29 = plVar24[uStack_1c0 * 5 + 0xe];
  lVar12 = plVar24[uStack_1c0 * 5 + 0x10];
  _memmove(plVar24 + uStack_1c0 * 5 + 0xc,plVar24 + uStack_1c0 * 5 + 0x11,
           (uVar21 + ~uStack_1c0) * 0x28);
  uVar5 = uVar4 - 1;
  uVar13 = (ulong)uVar5;
  *(short *)((long)plVar24 + 0x21a) = (short)uVar5;
  lVar18 = param_2[1];
  if ((4 < (uVar5 & 0xffff)) || (lVar19 = *plVar24, lVar19 == 0)) goto LAB_10604c134;
  uVar1 = lVar18 + 1;
  uVar4 = *(ushort *)(plVar24 + 0x43);
  if (uVar4 == 0) {
    plVar16 = plStack_b8;
    uVar14 = uStack_b0;
    if (*(short *)(lVar19 + 0x21a) == 0) {
LAB_10604c3cc:
      uStack_b0 = uVar14;
      plStack_b8 = plVar16;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd6985,0x7b,&UNK_10b4ae830);
      goto LAB_10604c400;
    }
    plStack_118 = *(long **)(lVar19 + 0x228);
    uStack_130 = 0;
    lStack_140 = lVar19;
    uStack_138 = uVar1;
    plStack_128 = plVar24;
    lStack_120 = lVar18;
    lStack_110 = lVar18;
    if (*(ushort *)((long)plStack_118 + 0x21a) + uVar21 < 0xc) {
      uVar26 = uVar13 & 0xffff;
      plVar7 = plVar24;
      plVar16 = plStack_118;
      uVar14 = (ulong)*(ushort *)((long)plStack_118 + 0x21a);
      uVar28 = 0;
      goto joined_r0x00010604c0c8;
    }
    func_0x00010604b48c(&lStack_140,1);
  }
  else {
    uStack_168 = (ulong)uVar4 - 1;
    plStack_160 = *(long **)(lVar19 + uStack_168 * 8 + 0x220);
    uVar26 = (ulong)*(ushort *)((long)plStack_160 + 0x21a);
    plVar7 = plStack_160;
    plVar16 = plVar24;
    uVar14 = uVar13;
    uVar28 = uStack_168;
    lStack_178 = lVar19;
    uStack_170 = uVar1;
    lStack_158 = lVar18;
    plStack_150 = plVar24;
    lStack_148 = lVar18;
    if (uVar21 + uVar26 < 0xc) {
joined_r0x00010604c0c8:
      plVar24 = plVar7;
      if ((uVar13 & 0xffff) < uStack_1c0) {
        puVar10 = &UNK_10b4ae938;
        uVar9 = 0x8e;
        puVar8 = &UNK_109bd6abf;
      }
      else {
        uVar14 = uVar14 & 0xffff;
        lVar23 = uVar26 + 1;
        uVar13 = lVar23 + uVar14;
        if (uVar13 < 0xc) {
          uVar22 = (ulong)*(ushort *)(lVar19 + 0x21a);
          *(short *)((long)plVar24 + 0x21a) = (short)uVar13;
          lVar15 = lVar19 + uVar28 * 8;
          plVar7 = (long *)(lVar15 + 8);
          lVar25 = *plVar7;
          _memmove(plVar7,lVar15 + 0x10);
          plVar24[uVar26 + 1] = lVar25;
          _memcpy(plVar24 + uVar26 + 2,plVar16 + 1,uVar14 << 3);
          lVar15 = lVar19 + (long)(int)uVar28 * 0x28;
          uStack_c8 = *(ulong *)(lVar15 + 0x68);
          lStack_d0 = *(long *)(lVar15 + 0x60);
          plStack_b8 = *(long **)(lVar15 + 0x78);
          lStack_c0 = *(long *)(lVar15 + 0x70);
          uStack_b0 = *(ulong *)(lVar15 + 0x80);
          _memmove(lVar15 + 0x60,lVar15 + 0x88,(~uVar28 + uVar22) * 0x28);
          plVar7 = plVar24 + uVar26 * 5 + 0xc;
          plVar7[1] = uStack_c8;
          *plVar7 = lStack_d0;
          plVar7[3] = (long)plStack_b8;
          plVar7[2] = lStack_c0;
          plVar7[4] = uStack_b0;
          _memcpy(plVar24 + lVar23 * 5 + 0xc,plVar16 + 0xc,uVar14 * 0x28);
          uVar21 = uVar28 + 1;
          lVar15 = lVar19 + uVar21 * 8;
          _memmove(lVar15 + 0x220,lVar15 + 0x228,(~uVar28 + uVar22) * 8);
          if (uVar21 < uVar22) {
            do {
              plVar7 = *(long **)(lVar19 + uVar21 * 8 + 0x220);
              *(short *)(plVar7 + 0x43) = (short)uVar21;
              uVar21 = uVar21 + 1;
              *plVar7 = lVar19;
            } while (uVar22 != uVar21);
          }
          *(short *)(lVar19 + 0x21a) = *(short *)(lVar19 + 0x21a) + -1;
          if (1 < uVar1) {
            lVar19 = uVar14 + 1;
            if (lVar19 != uVar13 - uVar26) {
LAB_10604c3b0:
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109bd69e3,0x28,&UNK_10b4ae860);
              goto LAB_10604c400;
            }
            _memcpy(plVar24 + uVar26 + 0x45,plVar16 + 0x44,lVar19 * 8);
            lVar15 = uVar26 + 0x45;
            do {
              plVar7 = (long *)plVar24[lVar15];
              *plVar7 = (long)plVar24;
              *(short *)(plVar7 + 0x43) = (short)lVar15 + -0x44;
              lVar15 = lVar15 + 1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          _free(plVar16);
          lVar19 = 0;
          if (uVar4 != 0) {
            lVar19 = lVar23;
          }
          uStack_1c0 = lVar19 + uStack_1c0;
          goto LAB_10604c10c;
        }
        puVar10 = &UNK_10b4ae950;
        uVar9 = 0x2a;
        puVar8 = &UNK_109bd6b4d;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar8,uVar9,puVar10);
LAB_10604c400:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10604c404);
      (*pcVar6)();
    }
    FUN_10604af90(&lStack_178,1);
    uStack_1c0 = uStack_1c0 + 1;
  }
LAB_10604c10c:
  plVar7 = (long *)*plVar24;
  if (plVar7 != (long *)0x0) {
    uVar4 = *(ushort *)((long)plVar7 + 0x21a);
    plVar16 = plStack_b8;
    uVar14 = uStack_b0;
    while (plStack_b8 = plVar7, uStack_b0 = uVar1, uVar4 < 5) {
      uVar13 = (ulong)uVar4;
      plVar7 = (long *)*plStack_b8;
      if (plVar7 == (long *)0x0) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar1 = uStack_b0 + 1;
      uVar4 = *(ushort *)(plStack_b8 + 0x43);
      if (uVar4 == 0) {
        uVar4 = *(ushort *)((long)plVar7 + 0x21a);
        if (uVar4 == 0) goto LAB_10604c3cc;
        plVar17 = (long *)plVar7[0x45];
        lStack_c0 = 0;
        lVar19 = uVar13 + 1;
        uVar14 = (ulong)*(ushort *)((long)plVar17 + 0x21a);
        uVar21 = lVar19 + uVar14;
        lStack_d0 = (long)plVar7;
        uStack_c8 = uVar1;
        plStack_a8 = plVar17;
        uStack_a0 = uStack_b0;
        if (0xb < uVar21) {
          func_0x00010604b48c(&lStack_d0,5 - uVar13);
          break;
        }
        uVar28 = 0;
        plVar20 = plStack_b8;
      }
      else {
        uVar28 = (ulong)uVar4 - 1;
        plStack_f0 = (long *)plVar7[(ulong)uVar4 + 0x43];
        uVar26 = (ulong)*(ushort *)((long)plStack_f0 + 0x21a);
        lStack_108 = (long)plVar7;
        uStack_100 = uVar1;
        uStack_f8 = uVar28;
        uStack_e8 = uStack_b0;
        plStack_e0 = plStack_b8;
        uStack_d8 = uStack_b0;
        uStack_b0 = uVar14;
        if (0xb < uVar13 + uVar26 + 1) {
          plStack_b8 = plVar16;
          FUN_10604af90(&lStack_108,5 - uVar13);
          break;
        }
        uVar4 = *(ushort *)((long)plVar7 + 0x21a);
        lVar19 = uVar26 + 1;
        uVar21 = lVar19 + uVar13;
        plVar20 = plStack_f0;
        uVar14 = uVar13;
        uVar13 = uVar26;
        plVar17 = plStack_b8;
        plStack_b8 = plVar16;
      }
      uVar22 = (ulong)uVar4;
      *(short *)((long)plVar20 + 0x21a) = (short)uVar21;
      lVar23 = plVar7[uVar28 + 1];
      _memmove(plVar7 + uVar28 + 1,plVar7 + uVar28 + 2);
      plVar20[uVar13 + 1] = lVar23;
      _memcpy(plVar20 + lVar19 + 1,plVar17 + 1,uVar14 << 3);
      iVar27 = (int)uVar28;
      lStack_88 = plVar7[(long)iVar27 * 5 + 0xd];
      lStack_90 = plVar7[(long)iVar27 * 5 + 0xc];
      lStack_78 = plVar7[(long)iVar27 * 5 + 0xf];
      lStack_80 = plVar7[(long)iVar27 * 5 + 0xe];
      lStack_70 = plVar7[(long)iVar27 * 5 + 0x10];
      _memmove(plVar7 + (long)iVar27 * 5 + 0xc,plVar7 + (long)iVar27 * 5 + 0x11,
               (~uVar28 + uVar22) * 0x28);
      plVar16 = plVar20 + uVar13 * 5 + 0xc;
      plVar16[1] = lStack_88;
      *plVar16 = lStack_90;
      plVar16[3] = lStack_78;
      plVar16[2] = lStack_80;
      plVar16[4] = lStack_70;
      _memcpy(plVar20 + lVar19 * 5 + 0xc,plVar17 + 0xc,uVar14 * 0x28);
      uVar26 = uVar28 + 1;
      _memmove(plVar7 + uVar28 + 0x45,plVar7 + uVar28 + 0x46,(~uVar28 + uVar22) * 8);
      if (uVar26 < uVar22) {
        do {
          plVar16 = (long *)plVar7[uVar26 + 0x44];
          *(short *)(plVar16 + 0x43) = (short)uVar26;
          uVar26 = uVar26 + 1;
          *plVar16 = (long)plVar7;
        } while (uVar22 != uVar26);
      }
      *(short *)((long)plVar7 + 0x21a) = *(short *)((long)plVar7 + 0x21a) + -1;
      if (1 < uVar1) {
        if (uVar14 + 1 != uVar21 - uVar13) goto LAB_10604c3b0;
        _memcpy(plVar20 + lVar19 + 0x44,plVar17 + 0x44,(uVar14 + 1) * 8);
        do {
          plVar16 = (long *)plVar20[lVar19 + 0x44];
          *(short *)(plVar16 + 0x43) = (short)lVar19;
          lVar19 = lVar19 + 1;
          *plVar16 = (long)plVar20;
        } while (uVar21 + 1 != lVar19);
      }
      _free(plVar17);
      uVar4 = *(ushort *)((long)plVar7 + 0x21a);
      plVar16 = plStack_b8;
      uVar14 = uStack_b0;
    }
  }
LAB_10604c134:
  *param_1 = lVar11;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  param_1[4] = lVar30;
  param_1[3] = lVar29;
  param_1[5] = lVar12;
  param_1[6] = (long)plVar24;
  param_1[7] = lVar18;
  param_1[8] = uStack_1c0;
  return;
}

