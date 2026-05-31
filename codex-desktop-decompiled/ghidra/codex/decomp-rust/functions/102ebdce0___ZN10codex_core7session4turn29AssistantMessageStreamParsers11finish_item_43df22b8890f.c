
void __ZN10codex_core7session4turn29AssistantMessageStreamParsers11finish_item17h609d594b6dc942a8E
               (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar6 = FUN_1033f7644(param_2[4],param_2[5],param_3,param_4);
  lVar8 = 0;
  lVar3 = *param_2;
  uVar4 = param_2[1];
  bVar7 = (byte)(uVar6 >> 0x39);
  uVar6 = uVar6 & uVar4;
  uVar14 = *(undefined8 *)(lVar3 + uVar6);
  uVar13 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar7),
                    CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar7),
                             CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar7),
                                      CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar7),
                                               CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar7),
                                                        CONCAT12(-((byte)((ulong)uVar14 >> 0x10) ==
                                                                  bVar7),CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar7),-((byte)uVar14 == bVar7))))
                                              )))) & 0x8080808080808080;
  while( true ) {
    while (uVar13 == 0) {
      bVar11 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar14 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1)))))))),1);
      if ((bVar11 & 1) != 0) goto LAB_102ebded0;
      lVar8 = lVar8 + 8;
      uVar6 = uVar6 + lVar8 & uVar4;
      uVar14 = *(undefined8 *)(lVar3 + uVar6);
      uVar13 = CONCAT17(-((byte)((ulong)uVar14 >> 0x38) == bVar7),
                        CONCAT16(-((byte)((ulong)uVar14 >> 0x30) == bVar7),
                                 CONCAT15(-((byte)((ulong)uVar14 >> 0x28) == bVar7),
                                          CONCAT14(-((byte)((ulong)uVar14 >> 0x20) == bVar7),
                                                   CONCAT13(-((byte)((ulong)uVar14 >> 0x18) == bVar7
                                                             ),CONCAT12(-((byte)((ulong)uVar14 >>
                                                                                0x10) == bVar7),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar14 >> 8) == bVar7),-((byte)uVar14 == bVar7))))
                                                  )))) & 0x8080808080808080;
    }
    uVar10 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar4;
    lVar1 = lVar3 + uVar10 * -0xb0;
    if ((param_4 == *(long *)(lVar1 + -0xa0)) &&
       (iVar5 = _memcmp(param_3,*(undefined8 *)(lVar1 + -0xa8),param_4), iVar5 == 0)) break;
    uVar13 = uVar13 - 1 & uVar13;
  }
  lVar8 = ((long)(uVar10 * 0xb0) >> 4) * 0x2e8ba2e8ba2e8ba3;
  puVar2 = (undefined8 *)(lVar3 + (lVar8 - 8U & uVar4));
  uVar14 = *puVar2;
  uVar12 = *(undefined8 *)(lVar3 + lVar8);
  uVar13 = CONCAT17(-((char)((ulong)uVar12 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar12 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar12 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar12 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar12 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar12 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar12 >> 8) == -1),-((char)uVar12 == -1))))))));
  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar14 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar14 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar14 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar14 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar14 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar14 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar14 >> 8) == -1),
                                                           -((char)uVar14 == -1))))))))) >> 3) < 8)
  {
    param_2[2] = param_2[2] + 1;
    uVar9 = 0xff;
  }
  else {
    uVar9 = 0x80;
  }
  *(undefined1 *)(lVar3 + lVar8) = uVar9;
  *(undefined1 *)(puVar2 + 1) = uVar9;
  param_2[3] = param_2[3] + -1;
  if (*(long *)(lVar1 + -0xb0) != -0x8000000000000000) {
    lVar8 = *(long *)(lVar1 + -0x98);
    uStack_c8 = *(undefined8 *)(lVar1 + -0x48);
    uStack_d0 = *(undefined8 *)(lVar1 + -0x50);
    uStack_b8 = *(undefined8 *)(lVar1 + -0x38);
    lStack_c0 = *(long *)(lVar1 + -0x40);
    lStack_a8 = *(long *)(lVar1 + -0x28);
    uStack_b0 = *(undefined8 *)(lVar1 + -0x30);
    uStack_98 = *(undefined8 *)(lVar1 + -0x18);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x20);
    uStack_88 = *(undefined8 *)(lVar1 + -8);
    uStack_90 = *(undefined8 *)(lVar1 + -0x10);
    uStack_e8 = *(ulong *)(lVar1 + -0x68);
    uStack_f0 = *(undefined8 *)(lVar1 + -0x70);
    uStack_d8 = *(undefined8 *)(lVar1 + -0x58);
    uStack_e0 = *(undefined8 *)(lVar1 + -0x60);
    uStack_108 = *(undefined8 *)(lVar1 + -0x88);
    uStack_110 = *(undefined8 *)(lVar1 + -0x90);
    uStack_f8 = *(undefined8 *)(lVar1 + -0x78);
    lStack_100 = *(long *)(lVar1 + -0x80);
    if (*(long *)(lVar1 + -0xb0) != 0) {
      _free(*(undefined8 *)(lVar1 + -0xa8));
    }
    if (lVar8 != -0x8000000000000000) {
      uStack_148 = uStack_b8;
      lStack_150 = lStack_c0;
      lStack_138 = lStack_a8;
      uStack_140 = uStack_b0;
      uStack_128 = uStack_98;
      uStack_130 = uStack_a0;
      uStack_118 = uStack_88;
      uStack_120 = uStack_90;
      uStack_188 = uStack_f8;
      lStack_190 = lStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      uStack_198 = uStack_108;
      uStack_1a0 = uStack_110;
      lStack_1a8 = lVar8;
      __ZN25codex_utils_stream_parser14assistant_text25AssistantTextStreamParser6finish17hb72f6707274e80a0E
                (param_1,&lStack_1a8);
      if (lStack_1a8 != 0) {
        _free(uStack_1a0);
      }
      if (lStack_190 != 0) {
        _free(uStack_188);
      }
      if ((uStack_178 & 0x7fffffffffffffff) != 0) {
        _free(uStack_170);
      }
      if (lStack_150 != 0) {
        _free(uStack_148);
      }
      if (lStack_138 == 0) {
        return;
      }
      _free(uStack_130);
      return;
    }
  }
LAB_102ebded0:
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  return;
}

