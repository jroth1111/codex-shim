
undefined1  [16] FUN_10612a75c(ulong param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x22;
  long lVar16;
  byte bVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_1a0;
  ulong uStack_198;
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
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  ulong *puVar4;
  
  uVar14 = *(ulong *)(param_1 + 0x10);
  uVar15 = 0;
  if (uVar14 != 0) {
    if (uVar14 != 1) {
      uStack_98 = *(ulong *)(param_1 + 0x40);
      uStack_a0 = *(ulong *)(param_1 + 0x38);
      uStack_c0 = uStack_a0 ^ 0x736f6d6570736575;
      uStack_b8 = uStack_a0 ^ 0x6c7967656e657261;
      uStack_b0 = uStack_98 ^ 0x646f72616e646f6d;
      uStack_a8 = uStack_98 ^ 0x7465646279746573;
      uStack_88 = 0;
      uStack_80 = 0;
      lStack_90 = 0;
      FUN_106127cfc(&uStack_c0,param_2,param_3);
      uStack_71 = 0xff;
      FUN_106127cfc(&uStack_c0,&uStack_71,1);
      lVar16 = 0;
      uVar13 = uStack_88 | lStack_90 << 0x38;
      uVar12 = uVar13 ^ uStack_a8;
      uVar15 = uStack_b0 + uStack_c0;
      uVar10 = uVar15 ^ (uStack_b0 >> 0x33 | uStack_b0 << 0xd);
      uVar6 = uVar12 + uStack_b8 + uVar10;
      uVar12 = uVar12 + uStack_b8 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
      uVar11 = uVar6 ^ (uVar10 >> 0x2f | uVar10 << 0x11);
      uVar15 = uVar12 + (uVar15 >> 0x20 | uVar15 << 0x20);
      uVar10 = uVar15 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
      uVar15 = (uVar15 ^ uVar13) + uVar11;
      uVar11 = uVar15 ^ (uVar11 >> 0x33 | uVar11 << 0xd);
      uVar6 = uVar10 + ((uVar6 >> 0x20 | uVar6 << 0x20) ^ 0xff);
      uVar12 = uVar11 + uVar6;
      uVar6 = uVar6 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
      uVar11 = uVar12 ^ (uVar11 >> 0x2f | uVar11 << 0x11);
      uVar15 = uVar6 + (uVar15 >> 0x20 | uVar15 << 0x20);
      uVar10 = uVar11 + uVar15;
      uVar15 = uVar15 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
      uVar11 = uVar10 ^ (uVar11 >> 0x33 | uVar11 << 0xd);
      uVar6 = uVar15 + (uVar12 >> 0x20 | uVar12 << 0x20);
      uVar12 = uVar11 + uVar6;
      uVar6 = uVar6 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
      uVar11 = uVar12 ^ (uVar11 >> 0x2f | uVar11 << 0x11);
      uVar15 = uVar6 + (uVar10 >> 0x20 | uVar10 << 0x20);
      uVar10 = uVar15 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
      uVar11 = uVar11 + uVar15 ^ (uVar11 >> 0x33 | uVar11 << 0xd);
      uVar15 = uVar10 + (uVar12 >> 0x20 | uVar12 << 0x20);
      uVar6 = uVar11 + uVar15;
      uVar15 = uVar15 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
      uVar6 = (uVar15 >> 0x2b | uVar15 << 0x15) ^ (uVar11 >> 0x2f | uVar11 << 0x11) ^
              (uVar6 >> 0x20 | uVar6 << 0x20) ^ uVar6;
      lStack_c8 = *(long *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x18);
      uVar12 = *(ulong *)(param_1 + 0x20);
      bVar9 = (byte)(uVar6 >> 0x39);
      uVar6 = uVar6 & uVar12;
      uVar18 = *(undefined8 *)(lVar1 + uVar6);
      uVar15 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar18 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar18 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar18 >> 8) == bVar9),-((byte)uVar18 == bVar9))))
                                                  )))) & 0x8080808080808080;
      unaff_x22 = param_1;
      do {
        for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
          uVar10 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          unaff_x22 = *(ulong *)(lVar1 + -8 +
                                (uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) &
                                uVar12) * -8);
          if (uVar14 <= unaff_x22) {
            puVar8 = (undefined8 *)&UNK_10b4cf790;
            auVar20 = func_0x000108a07bdc(unaff_x22,uVar14);
            uStack_118 = auVar20._8_8_;
            puVar4 = auVar20._0_8_;
            uStack_d8 = 0x10612aa04;
            uVar12 = puVar4[2];
            uVar15 = *puVar4;
            puVar5 = puVar4;
            lStack_110 = lVar16;
            uStack_108 = uVar6;
            uStack_100 = unaff_x22;
            uStack_f8 = param_2;
            lStack_f0 = param_3;
            uStack_e8 = uVar14;
            puStack_e0 = &stack0xfffffffffffffff0;
            if (uVar12 == uVar15) {
              uVar14 = puVar4[5] + puVar4[6];
              uVar15 = uVar14;
              if (0xe38e38e38e38e2 < uVar14) {
                uVar15 = 0xe38e38e38e38e3;
              }
              if ((uVar15 - uVar12 < 2 || uVar14 < uVar12) ||
                 (puVar5 = (ulong *)func_0x000108a8c238(&uStack_1a0,uVar12,puVar4[1],uVar15,8,0x90),
                 (int)uStack_1a0 == 1)) {
                auVar20 = func_0x000108a8c238(&uStack_1a0,uVar12,puVar4[1],uVar12 + 1,8,0x90);
                if ((int)uStack_1a0 == 1) {
                  func_0x0001087c9084(uStack_198,uStack_190);
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10612abc4);
                  (*pcVar2)();
                }
                uVar18 = puVar8[1];
                uStack_1a0 = *puVar8;
                uStack_188 = puVar8[3];
                uStack_190 = puVar8[2];
                uStack_150 = param_4[5];
                uStack_158 = param_4[4];
                uStack_140 = param_4[7];
                uStack_148 = param_4[6];
                uStack_130 = param_4[9];
                uStack_138 = param_4[8];
                uStack_120 = param_4[0xb];
                uStack_128 = param_4[10];
                uStack_170 = param_4[1];
                uStack_178 = *param_4;
                uStack_160 = param_4[3];
                uStack_168 = param_4[2];
                *puVar4 = uVar12 + 1;
                puVar4[1] = uStack_198;
                uStack_180 = puVar8[4];
                uStack_198 = uVar18;
                goto LAB_10612aa78;
              }
              *puVar4 = uVar15;
              puVar4[1] = uStack_198;
            }
            auVar20._8_8_ = uStack_118;
            auVar20._0_8_ = puVar5;
            uStack_198 = puVar8[1];
            uStack_1a0 = *puVar8;
            uStack_188 = puVar8[3];
            uStack_190 = puVar8[2];
            uStack_150 = param_4[5];
            uStack_158 = param_4[4];
            uStack_140 = param_4[7];
            uStack_148 = param_4[6];
            uStack_130 = param_4[9];
            uStack_138 = param_4[8];
            uStack_120 = param_4[0xb];
            uStack_128 = param_4[10];
            uStack_170 = param_4[1];
            uStack_178 = *param_4;
            uStack_160 = param_4[3];
            uStack_168 = param_4[2];
            uStack_180 = puVar8[4];
            if (uVar12 == uVar15) {
              auVar20 = func_0x000108a8c1d0(puVar4);
            }
LAB_10612aa78:
            puVar8 = (undefined8 *)(puVar4[1] + uVar12 * 0x90);
            puVar8[0xd] = uStack_138;
            puVar8[0xc] = uStack_140;
            puVar8[0xf] = uStack_128;
            puVar8[0xe] = uStack_130;
            puVar8[0x11] = uStack_118;
            puVar8[0x10] = uStack_120;
            puVar8[5] = uStack_178;
            puVar8[4] = uStack_180;
            puVar8[7] = uStack_168;
            puVar8[6] = uStack_170;
            puVar8[9] = uStack_158;
            puVar8[8] = uStack_160;
            puVar8[0xb] = uStack_148;
            puVar8[10] = uStack_150;
            puVar8[1] = uStack_198;
            *puVar8 = uStack_1a0;
            puVar8[3] = uStack_188;
            puVar8[2] = uStack_190;
            puVar4[2] = uVar12 + 1;
            return auVar20;
          }
          lVar7 = lStack_c8 + unaff_x22 * 0x70;
          if ((param_3 == *(long *)(lVar7 + 0x10)) &&
             (iVar3 = _memcmp(param_2,*(undefined8 *)(lVar7 + 8),param_3), iVar3 == 0)) {
            uVar15 = 1;
            goto LAB_10612a9c4;
          }
        }
        bVar17 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar18
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar18 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == -1),
                                                           -((char)uVar18 == -1)))))))),1);
        if ((bVar17 & 1) != 0) goto LAB_10612a9c0;
        lVar16 = lVar16 + 8;
        uVar6 = uVar6 + lVar16 & uVar12;
        uVar18 = *(undefined8 *)(lVar1 + uVar6);
        uVar15 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar9),
                          CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar9),
                                   CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar9),
                                            CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar9),
                                                     CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                               bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar9),
                                                           -((byte)uVar18 == bVar9)))))))) &
                 0x8080808080808080;
      } while( true );
    }
    if (param_3 == *(long *)(*(long *)(param_1 + 8) + 0x10)) {
      iVar3 = _memcmp(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_3);
      unaff_x22 = 0;
      uVar15 = (ulong)(iVar3 == 0);
    }
    else {
      unaff_x22 = 0;
      uVar15 = 0;
    }
  }
LAB_10612a9c4:
  auVar19._8_8_ = unaff_x22;
  auVar19._0_8_ = uVar15;
  return auVar19;
LAB_10612a9c0:
  uVar15 = 0;
  goto LAB_10612a9c4;
}

