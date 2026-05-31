
long * FUN_105aa721c(long *param_1)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined8 *puStack_1c8;
  ulong uStack_1b8;
  byte bStack_1a8;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *puStack_140;
  byte bStack_138;
  undefined8 uStack_137;
  uint7 uStack_12f;
  byte bStack_128;
  uint7 uStack_127;
  undefined8 *puStack_120;
  byte bStack_118;
  uint7 uStack_117;
  byte bStack_110;
  uint7 uStack_10f;
  byte bStack_108;
  uint7 uStack_107;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  uint7 uStack_c8;
  byte bStack_c1;
  uint7 uStack_c0;
  long *plStack_38;
  
  plVar25 = (long *)param_1[1];
  lVar10 = *plVar25;
  while (lVar10 == 0) {
    if ((long *)*param_1 == plVar25) {
      return (long *)0x0;
    }
    _sched_yield();
    plVar25 = (long *)param_1[1];
    lVar10 = *plVar25;
  }
  param_1[1] = lVar10;
  if (plVar25[1] == 0) {
    plVar26 = *(long **)(lVar10 + 8);
    param_1 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar15 = (long *)plVar25[1];
      plStack_38 = plVar26;
      if (plVar15 != (long *)0x0) {
        lVar10 = *plVar15;
        *plVar15 = lVar10 + -1;
        LORelease();
        if (lVar10 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf85ab81e955e259dE();
        }
      }
      _free(plVar25);
      return plVar26;
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b155be,0x29,&UNK_10b406100);
  }
  puVar14 = (ulong *)&UNK_10b406118;
  uVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b155e7,0x29);
  _free(plVar25);
  lVar10 = *param_1;
  *param_1 = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf85ab81e955e259dE(&plStack_38);
  }
  __Unwind_Resume(uVar12);
  auVar30 = func_0x000108a07bc4();
  puVar13 = auVar30._8_8_;
  plVar25 = auVar30._0_8_;
  pbVar28 = (byte *)puVar13[1];
  puVar27 = (undefined8 *)*puVar13;
  uStack_198 = puVar13[3];
  uVar29 = puVar13[2];
  uStack_188 = puVar13[5];
  uStack_190 = puVar13[4];
  uStack_178 = puVar13[7];
  uStack_180 = puVar13[6];
  uStack_168 = puVar14[1];
  puStack_170 = (undefined8 *)*puVar14;
  uStack_158 = puVar14[3];
  uStack_160 = puVar14[2];
  uStack_150 = puVar14[4];
  iVar11 = FUN_105ab193c();
  if (iVar11 != 0) {
    (*(code *)puStack_170[4])(&uStack_158,uStack_168,uStack_160);
LAB_105aa78f8:
    func_0x000108a07a3c(&UNK_109b11fdd,0x17,&puStack_120,&UNK_10b406248,&UNK_10b406148);
LAB_105aa7930:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x105aa7934);
    (*pcVar8)();
  }
  lVar10 = *plVar25;
  bStack_1a8 = (byte)pbVar28;
  uVar23 = (uint)pbVar28;
  puStack_1c8 = puVar27;
  if (lVar10 == 2) {
    uStack_f8 = plVar25[2];
    uStack_100 = plVar25[1];
    puStack_120 = (undefined8 *)(uStack_100 ^ 0x736f6d6570736575);
    bStack_118 = (byte)uStack_100 ^ 0x61;
    uStack_117 = (uint7)(uStack_100 >> 8) ^ 0x6c7967656e6572;
    bStack_110 = (byte)uStack_f8 ^ 0x6d;
    uStack_107 = (uint7)(uStack_f8 >> 8);
    uStack_10f = uStack_107 ^ 0x646f72616e646f;
    bStack_108 = (byte)uStack_f8 ^ 0x73;
    uStack_107 = uStack_107 ^ 0x74656462797465;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    bVar9 = puVar27 == (undefined8 *)0x0;
    puStack_140 = (undefined8 *)(ulong)!bVar9;
    FUN_105ab67d0(&puStack_120,&puStack_140,8);
    if (puVar27 == (undefined8 *)0x0) {
      puVar24 = (undefined8 *)((ulong)pbVar28 & 0xff);
      puStack_140 = puVar24;
      FUN_105ab67d0(&puStack_120,&puStack_140,8);
    }
    else {
      FUN_105ab67d0(&puStack_120,pbVar28,uVar29);
      puVar24 = (undefined8 *)(ulong)(uVar23 & 0xff);
    }
    uVar22 = uStack_e8 | uStack_f0 << 0x38;
    uVar21 = uVar22 ^ CONCAT71(uStack_107,bStack_108);
    uVar16 = CONCAT71(uStack_10f,bStack_110) + (long)puStack_120;
    uVar20 = uVar16 ^ ((ulong)(uStack_10f >> 0x2b) | CONCAT71(uStack_10f,bStack_110) << 0xd);
    uVar19 = uVar21 + CONCAT71(uStack_117,bStack_118);
    uVar17 = uVar19 + uVar20;
    uVar19 = uVar19 ^ (uVar21 >> 0x30 | uVar21 << 0x10);
    uVar21 = uVar17 ^ (uVar20 >> 0x2f | uVar20 << 0x11);
    uVar16 = uVar19 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar20 = uVar16 ^ (uVar19 >> 0x2b | uVar19 << 0x15);
    uVar16 = (uVar16 ^ uVar22) + uVar21;
    uVar21 = uVar16 ^ (uVar21 >> 0x33 | uVar21 << 0xd);
    uVar19 = uVar20 + ((uVar17 >> 0x20 | uVar17 << 0x20) ^ 0xff);
    uVar17 = uVar21 + uVar19;
    uVar19 = uVar19 ^ (uVar20 >> 0x30 | uVar20 << 0x10);
    uVar21 = uVar17 ^ (uVar21 >> 0x2f | uVar21 << 0x11);
    uVar16 = uVar19 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar20 = uVar21 + uVar16;
    uVar16 = uVar16 ^ (uVar19 >> 0x2b | uVar19 << 0x15);
    uVar21 = uVar20 ^ (uVar21 >> 0x33 | uVar21 << 0xd);
    uVar19 = uVar16 + (uVar17 >> 0x20 | uVar17 << 0x20);
    uVar17 = uVar21 + uVar19;
    uVar19 = uVar19 ^ (uVar16 >> 0x30 | uVar16 << 0x10);
    uVar21 = uVar17 ^ (uVar21 >> 0x2f | uVar21 << 0x11);
    uVar16 = uVar19 + (uVar20 >> 0x20 | uVar20 << 0x20);
    uVar20 = uVar16 ^ (uVar19 >> 0x2b | uVar19 << 0x15);
    uVar21 = uVar21 + uVar16 ^ (uVar21 >> 0x33 | uVar21 << 0xd);
    uVar19 = uVar20 + (uVar17 >> 0x20 | uVar17 << 0x20);
    uVar16 = uVar21 + uVar19;
    uVar16 = (uVar19 ^ uVar20 << 0x10) >> 0x2b ^ uVar21 >> 0x2f ^ uVar16 >> 0x20 ^ uVar16;
  }
  else {
    uVar16 = ((ulong)(puVar27 != (undefined8 *)0x0) ^ 0x2325) * 0x4a21;
    if (puVar27 == (undefined8 *)0x0) {
      puStack_1c8 = (undefined8 *)0x0;
      puVar24 = (undefined8 *)((ulong)pbVar28 & 0xff);
      uVar16 = ((ulong)puVar24 ^ 0xa2d39c5) * 0x4a21;
      bVar9 = true;
    }
    else {
      puVar24 = (undefined8 *)(ulong)(uVar23 & 0xff);
      pbVar7 = pbVar28;
      for (uVar19 = uVar29; uVar19 != 0; uVar19 = uVar19 - 1) {
        uVar16 = (uVar16 ^ *pbVar7) * 0x1b3;
        pbVar7 = pbVar7 + 1;
      }
      bVar9 = false;
    }
  }
  uVar19 = 0;
  uVar16 = uVar16 & 0x7fff;
  uVar5 = *(ushort *)(plVar25 + 0xb);
  uVar17 = uVar16 & uVar5;
  lVar3 = plVar25[9];
  uVar20 = plVar25[10];
  lVar4 = plVar25[4];
  uStack_1b8 = plVar25[5];
  do {
    if ((uVar20 <= uVar17) && (uVar17 = 0, uVar20 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar1 = (ushort *)(lVar3 + uVar17 * 4);
    uVar21 = (ulong)*puVar1;
    if (uVar21 == 0xffff) {
      bStack_138 = bStack_1a8;
      if (puStack_1c8 != (undefined8 *)0x0) {
        (*(code *)*puStack_1c8)(&puStack_120,&uStack_198,pbVar28,uVar29);
        uStack_d0 = CONCAT17(bStack_110,uStack_117);
        uStack_c8 = uStack_10f;
        bStack_c1 = bStack_108;
        uStack_c0 = uStack_107;
        puStack_1c8 = puStack_120;
        bStack_138 = bStack_118;
      }
      uStack_12f = uStack_c8;
      uStack_137 = uStack_d0;
      bStack_128 = bStack_c1;
      uStack_127 = uStack_c0;
      bStack_118 = (byte)uStack_168;
      uStack_117 = (uint7)(uStack_168 >> 8);
      puStack_120 = puStack_170;
      bStack_108 = (byte)uStack_158;
      uStack_107 = (uint7)(uStack_158 >> 8);
      bStack_110 = (byte)uStack_160;
      uStack_10f = (uint7)(uStack_160 >> 8);
      uStack_100 = uStack_150;
      puStack_140 = puStack_1c8;
      uVar19 = FUN_105ab1cb0(plVar25,uVar16,&puStack_140,&puStack_120);
      if ((uVar19 & 1) != 0) goto LAB_105aa78f8;
      if ((ulong)plVar25[10] <= uVar17) {
        func_0x000108a07bdc(uVar17,plVar25[10],&UNK_10b4063f8);
        goto LAB_105aa7930;
      }
      puVar2 = (undefined2 *)(plVar25[9] + uVar17 * 4);
      *puVar2 = (short)uStack_1b8;
      puVar2[1] = (short)uVar16;
      goto LAB_105aa778c;
    }
    uVar6 = puVar1[1];
    if (((ulong)((int)uVar17 - (uint)(uVar6 & uVar5)) & (ulong)uVar5) < uVar19) {
      bStack_138 = bStack_1a8;
      if (puStack_1c8 != (undefined8 *)0x0) {
        (*(code *)*puStack_1c8)(&puStack_120,&uStack_198,pbVar28,uVar29);
        uStack_d0 = CONCAT17(bStack_110,uStack_117);
        uStack_c8 = uStack_10f;
        bStack_c1 = bStack_108;
        uStack_c0 = uStack_107;
        uStack_1b8 = plVar25[5];
        puStack_1c8 = puStack_120;
        bStack_138 = bStack_118;
      }
      uStack_12f = uStack_c8;
      uStack_137 = uStack_d0;
      bStack_128 = bStack_c1;
      uStack_127 = uStack_c0;
      bStack_118 = (byte)uStack_168;
      uStack_117 = (uint7)(uStack_168 >> 8);
      puStack_120 = puStack_170;
      bStack_108 = (byte)uStack_158;
      uStack_107 = (uint7)(uStack_158 >> 8);
      bStack_110 = (byte)uStack_160;
      uStack_10f = (uint7)(uStack_160 >> 8);
      uStack_100 = uStack_150;
      puStack_140 = puStack_1c8;
      uVar20 = FUN_105ab1cb0(plVar25,uVar16,&puStack_140,&puStack_120);
      if ((uVar20 & 1) == 0) {
        uVar20 = 0;
        lVar3 = plVar25[9];
        uVar21 = plVar25[10];
        uVar23 = (uint)uStack_1b8 & 0xffff;
        while( true ) {
          uVar5 = (ushort)uVar16;
          uVar6 = (ushort)uVar23;
          if ((uVar21 <= uVar17) && (uVar17 = 0, uVar21 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar1 = (ushort *)(lVar3 + uVar17 * 4);
          uVar23 = (uint)*puVar1;
          if (uVar23 == 0xffff) break;
          uVar20 = uVar20 + 1;
          uVar16 = (ulong)puVar1[1];
          *puVar1 = uVar6;
          puVar1[1] = uVar5;
          uVar17 = uVar17 + 1;
        }
        *puVar1 = uVar6;
        puVar1[1] = uVar5;
        if ((0x7f < uVar20 || lVar10 != 2 && 0x1ff < uVar19) && (*plVar25 == 0)) {
          *plVar25 = 1;
        }
        goto LAB_105aa778c;
      }
      goto LAB_105aa78f8;
    }
    if ((uint)uVar6 == (uint)uVar16) {
      if (uStack_1b8 <= uVar21) {
        func_0x000108a07bdc(uVar21,uStack_1b8,&UNK_10b4063e0);
        goto LAB_105aa7930;
      }
      lVar18 = lVar4 + uVar21 * 0x68;
      if (bVar9 != (*(long *)(lVar18 + 0x40) != 0)) {
        if (*(long *)(lVar18 + 0x40) == 0) {
          if ((uint)*(byte *)(lVar18 + 0x48) == (uint)puVar24) {
LAB_105aa7644:
            bStack_118 = (byte)uStack_168;
            uStack_117 = (uint7)(uStack_168 >> 8);
            puStack_120 = puStack_170;
            bStack_108 = (byte)uStack_158;
            uStack_107 = (uint7)(uStack_158 >> 8);
            bStack_110 = (byte)uStack_160;
            uStack_10f = (uint7)(uStack_160 >> 8);
            uStack_100 = uStack_150;
            FUN_105ab0af8(uVar21,lVar4 + uVar21 * 0x68,plVar25 + 6,&puStack_120);
LAB_105aa778c:
            plVar26 = plVar25 + 0xc;
            uStack_117 = (uint7)((ulong)pbVar28 >> 8);
            bStack_108 = (byte)uStack_198;
            uStack_107 = (uint7)(uStack_198 >> 8);
            bStack_110 = (byte)uVar29;
            uStack_10f = (uint7)(uVar29 >> 8);
            uStack_f8 = uStack_188;
            uStack_100 = uStack_190;
            uStack_e8 = uStack_178;
            uStack_f0 = uStack_180;
            lVar10 = plVar25[0xe];
            puStack_120 = puVar27;
            bStack_118 = bStack_1a8;
            if (lVar10 == *plVar26) {
              plVar26 = (long *)func_0x000108a337e0();
            }
            puVar14 = (ulong *)(plVar25[0xd] + lVar10 * 0x40);
            puVar14[5] = uStack_f8;
            puVar14[4] = uStack_100;
            puVar14[7] = uStack_e8;
            puVar14[6] = uStack_f0;
            puVar14[1] = CONCAT71(uStack_117,bStack_118);
            *puVar14 = (ulong)puStack_120;
            puVar14[3] = CONCAT71(uStack_107,bStack_108);
            puVar14[2] = CONCAT71(uStack_10f,bStack_110);
            plVar25[0xe] = lVar10 + 1;
            return plVar26;
          }
        }
        else if ((*(ulong *)(lVar18 + 0x50) == uVar29) &&
                (iVar11 = _memcmp(*(undefined8 *)(lVar18 + 0x48),pbVar28,uVar29),
                puVar24 = (undefined8 *)(ulong)(uVar23 & 0xff), iVar11 == 0)) goto LAB_105aa7644;
      }
    }
    uVar19 = uVar19 + 1;
    uVar17 = uVar17 + 1;
  } while( true );
}

