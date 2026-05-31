
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_101498120(long param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  ulong uStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 == 0) {
    return (ulong *)0x0;
  }
  if (uVar13 == 1) {
    if (param_3 == *(undefined8 **)(*(long *)(param_1 + 8) + 0x10)) {
      iVar2 = _memcmp(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_3);
      return (ulong *)(ulong)(iVar2 == 0);
    }
    return (ulong *)0x0;
  }
  puVar12 = param_3;
  uVar3 = FUN_100e8e738(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_2);
  lVar18 = 0;
  lStack_78 = *(long *)(param_1 + 8);
  lVar20 = *(long *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  bVar10 = (byte)(uVar3 >> 0x39);
  uVar22 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10)))))));
  lVar19 = lVar20 + -8;
  uVar3 = uVar3 & uVar4;
  uVar23 = *(undefined8 *)(lVar20 + uVar3);
  uVar15 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)uVar23 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)uVar23 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  uVar23 >> 8) == bVar10),-((byte)uVar23 == bVar10))
                                                  )))))) & 0x8080808080808080;
  while( true ) {
    while (uVar15 == 0) {
      bVar21 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar23 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar23 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar23 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) == -1),
                                                           -((char)uVar23 == -1)))))))),1);
      if ((bVar21 & 1) != 0) {
        return (ulong *)0x0;
      }
      lVar18 = lVar18 + 8;
      uVar3 = uVar3 + lVar18 & uVar4;
      uVar23 = *(undefined8 *)(lVar20 + uVar3);
      uVar15 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar10),
                        CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar10),
                                 CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar10),
                                          CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar10),
                                                   CONCAT13(-((byte)((ulong)uVar23 >> 0x18) ==
                                                             bVar10),CONCAT12(-((byte)((ulong)uVar23
                                                                                      >> 0x10) ==
                                                                               bVar10),CONCAT11(-((
                                                  byte)((ulong)uVar23 >> 8) == bVar10),
                                                  -((byte)uVar23 == bVar10)))))))) &
               0x8080808080808080;
    }
    uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = *(ulong *)(lVar19 + (uVar3 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                                 uVar4) * -8);
    if (uVar13 <= uVar16) break;
    lVar11 = lStack_78 + uVar16 * 0xa8;
    if ((param_3 == *(undefined8 **)(lVar11 + 0x10)) &&
       (iVar2 = _memcmp(param_2,*(undefined8 *)(lVar11 + 8),param_3), iVar2 == 0)) {
      return (ulong *)0x1;
    }
    uVar15 = uVar15 - 1 & uVar15;
  }
  puVar8 = (undefined8 *)&UNK_10b24da78;
  auVar24 = func_0x000108a07bdc(uVar16,uVar13);
  uVar7 = auVar24._8_8_;
  lVar11 = auVar24._0_8_;
  uStack_88 = 0x1014982c8;
  uVar14 = *(ulong *)(lVar11 + 0x10);
  if (uVar14 == 0) {
    return (ulong *)0x0;
  }
  uStack_f0 = uVar23;
  uStack_e8 = uVar22;
  uStack_e0 = uVar3;
  lStack_d8 = lVar19;
  lStack_d0 = lVar20;
  uStack_c8 = uVar4;
  lStack_c0 = lVar18;
  uStack_b8 = uVar15;
  uStack_b0 = uVar16;
  uStack_a8 = param_2;
  puStack_a0 = param_3;
  uStack_98 = uVar13;
  puStack_90 = &stack0xfffffffffffffff0;
  if (uVar14 == 1) {
    lVar17 = *(long *)(lVar11 + 8);
    if (puVar8 != *(undefined8 **)(lVar17 + 0x10)) {
      return (ulong *)0x0;
    }
    iVar2 = _memcmp(uVar7,*(undefined8 *)(lVar17 + 8),puVar8);
    if (iVar2 != 0) {
      return (ulong *)0x0;
    }
    uVar3 = 0;
    lVar19 = lVar18;
LAB_10149842c:
    if (uVar3 < uVar14) {
      return (ulong *)(lVar17 + uVar3 * 0x68 + 0x18);
    }
    func_0x000108a07bdc(uVar3,uVar14,&UNK_10b24da60);
    lStack_140 = lVar19;
  }
  else {
    puVar12 = puVar8;
    uVar4 = FUN_100e8e738(*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x40),uVar7);
    lVar20 = 0;
    lVar17 = *(long *)(lVar11 + 8);
    lStack_f8 = *(long *)(lVar11 + 0x18);
    uVar15 = *(ulong *)(lVar11 + 0x20);
    bVar10 = (byte)(uVar4 >> 0x39);
    lVar19 = lStack_f8 + -8;
    uVar4 = uVar4 & uVar15;
    uVar23 = *(undefined8 *)(lStack_f8 + uVar4);
    uVar13 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)uVar23 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)uVar23 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)uVar23
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)uVar23 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
    lStack_140 = lVar18;
    while( true ) {
      while (uVar13 == 0) {
        bVar21 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar23 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar23
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar23 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) == -1),
                                                           -((char)uVar23 == -1)))))))),1);
        if ((bVar21 & 1) != 0) {
          return (ulong *)0x0;
        }
        lVar20 = lVar20 + 8;
        uVar4 = uVar4 + lVar20 & uVar15;
        uVar23 = *(undefined8 *)(lStack_f8 + uVar4);
        uVar13 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar10),
                          CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar10),
                                   CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar10),
                                            CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar10),
                                                     CONCAT13(-((byte)((ulong)uVar23 >> 0x18) ==
                                                               bVar10),CONCAT12(-((byte)((ulong)
                                                  uVar23 >> 0x10) == bVar10),
                                                  CONCAT11(-((byte)((ulong)uVar23 >> 8) == bVar10),
                                                           -((byte)uVar23 == bVar10)))))))) &
                 0x8080808080808080;
      }
      uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = *(ulong *)(lVar19 + (uVar4 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                                  uVar15) * -8);
      if (uVar14 <= uVar3) break;
      lVar18 = lVar17 + uVar3 * 0x68;
      if (puVar8 == *(undefined8 **)(lVar18 + 0x10)) {
        iVar2 = _memcmp(uVar7,*(undefined8 *)(lVar18 + 8),puVar8);
        if (iVar2 == 0) goto LAB_10149842c;
      }
      uVar13 = uVar13 - 1 & uVar13;
      lStack_140 = lVar19;
    }
  }
  puVar9 = (undefined8 *)&UNK_10b24da78;
  auVar24 = func_0x000108a07bdc(uVar3,uVar14);
  uStack_148 = auVar24._8_8_;
  puVar5 = auVar24._0_8_;
  uStack_108 = 0x10149848c;
  uVar15 = puVar5[2];
  uVar13 = *puVar5;
  puVar6 = puVar5;
  lStack_138 = lVar17;
  uStack_130 = uVar3;
  uStack_128 = uVar7;
  puStack_120 = puVar8;
  uStack_118 = uVar14;
  ppuStack_110 = &puStack_90;
  if (uVar15 == uVar13) {
    uVar4 = puVar5[5] + puVar5[6];
    uVar13 = uVar4;
    if (0x124924924924923 < uVar4) {
      uVar13 = 0x124924924924924;
    }
    if ((uVar13 - uVar15 < 2 || uVar4 < uVar15) ||
       (puVar6 = (ulong *)FUN_108854f18(&uStack_1b0,uVar15,puVar5[1],uVar13,8,0x70),
       (int)uStack_1b0 == 1)) {
      puVar6 = (ulong *)FUN_108854f18(&uStack_1b0,uVar15,puVar5[1],uVar15 + 1,8,0x70);
      if ((int)uStack_1b0 == 1) {
        func_0x0001087c9084(uStack_1a8,uStack_1a0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10149863c);
        (*pcVar1)();
      }
      uVar23 = puVar9[1];
      uStack_1b0 = *puVar9;
      uStack_190 = puVar12[1];
      uStack_198 = *puVar12;
      uStack_180 = puVar12[3];
      uStack_188 = puVar12[2];
      uStack_170 = puVar12[5];
      uStack_178 = puVar12[4];
      uStack_160 = puVar12[7];
      uStack_168 = puVar12[6];
      uStack_150 = puVar12[9];
      uStack_158 = puVar12[8];
      *puVar5 = uVar15 + 1;
      puVar5[1] = uStack_1a8;
      uStack_1a0 = puVar9[2];
      uStack_1a8 = uVar23;
      goto LAB_1014984fc;
    }
    *puVar5 = uVar13;
    puVar5[1] = uStack_1a8;
  }
  uStack_1a8 = puVar9[1];
  uStack_1b0 = *puVar9;
  uStack_190 = puVar12[1];
  uStack_198 = *puVar12;
  uStack_180 = puVar12[3];
  uStack_188 = puVar12[2];
  uStack_170 = puVar12[5];
  uStack_178 = puVar12[4];
  uStack_160 = puVar12[7];
  uStack_168 = puVar12[6];
  uStack_150 = puVar12[9];
  uStack_158 = puVar12[8];
  uStack_1a0 = puVar9[2];
  if (uVar15 == uVar13) {
    puVar6 = (ulong *)func_0x000108a8c168(puVar5);
  }
LAB_1014984fc:
  puVar12 = (undefined8 *)(puVar5[1] + uVar15 * 0x70);
  puVar12[9] = uStack_168;
  puVar12[8] = uStack_170;
  puVar12[0xb] = uStack_158;
  puVar12[10] = uStack_160;
  puVar12[0xd] = uStack_148;
  puVar12[0xc] = uStack_150;
  puVar12[1] = uStack_1a8;
  *puVar12 = uStack_1b0;
  puVar12[3] = uStack_198;
  puVar12[2] = uStack_1a0;
  puVar12[5] = uStack_188;
  puVar12[4] = uStack_190;
  puVar12[7] = uStack_178;
  puVar12[6] = uStack_180;
  puVar5[2] = uVar15 + 1;
  return puVar6;
}

