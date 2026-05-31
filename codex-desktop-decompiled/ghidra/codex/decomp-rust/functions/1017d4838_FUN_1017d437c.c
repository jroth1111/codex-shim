
void FUN_1017d437c(ulong *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  code *pcVar56;
  char cVar57;
  uint uVar58;
  long lVar59;
  undefined8 uVar60;
  ulong uVar61;
  byte *pbVar62;
  undefined *puVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  char *pcVar67;
  long lVar68;
  undefined8 *puVar69;
  byte *pbVar70;
  ulong *puVar71;
  char *pcVar72;
  ulong *puVar73;
  ulong uVar74;
  undefined1 uVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined1 auVar90 [16];
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong *puStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  if (param_3 == 0) {
    puVar63 = (undefined *)0x0;
    uVar61 = param_2;
  }
  else {
    auVar90 = FUN_1017a9efc(param_3,param_4);
    puVar63 = auVar90._0_8_;
    uVar61 = auVar90._8_8_;
  }
  uVar64 = 5;
  if (puVar63 != (undefined *)0x0 && uVar61 != 0) {
    uVar64 = uVar61;
  }
  lVar59 = _malloc(uVar64);
  if (lVar59 == 0) {
    func_0x0001087c9084(1,uVar64);
LAB_1017d4a2c:
    uVar60 = 1;
  }
  else {
    puVar1 = &UNK_108ce68e3;
    if (puVar63 != (undefined *)0x0 && uVar61 != 0) {
      puVar1 = puVar63;
    }
    _memcpy(lVar59,puVar1,uVar64);
    if (uVar64 < 8) {
      uVar65 = 0;
LAB_1017d44e0:
      lVar68 = uVar64 - uVar65;
      pbVar62 = (byte *)(lVar59 + uVar65);
      do {
        bVar76 = 0x20;
        if (0x19 < *pbVar62 - 0x41) {
          bVar76 = 0;
        }
        *pbVar62 = bVar76 | *pbVar62;
        lVar68 = lVar68 + -1;
        pbVar62 = pbVar62 + 1;
      } while (lVar68 != 0);
    }
    else if (uVar64 < 0x40) {
      uVar61 = 0;
LAB_1017d449c:
      uVar65 = uVar64 & 0xfffffffffffffff8;
      lVar68 = uVar61 - uVar65;
      puVar69 = (undefined8 *)(lVar59 + uVar61);
      do {
        uVar60 = *puVar69;
        bVar76 = (byte)((ulong)uVar60 >> 8);
        bVar77 = (byte)((ulong)uVar60 >> 0x10);
        bVar78 = (byte)((ulong)uVar60 >> 0x18);
        bVar79 = (byte)((ulong)uVar60 >> 0x20);
        bVar80 = (byte)((ulong)uVar60 >> 0x28);
        bVar81 = (byte)((ulong)uVar60 >> 0x30);
        bVar82 = (byte)((ulong)uVar60 >> 0x38);
        uVar61 = CONCAT17(-((byte)(bVar82 + 0xbf) < 0x1a),
                          CONCAT16(-((byte)(bVar81 + 0xbf) < 0x1a),
                                   CONCAT15(-((byte)(bVar80 + 0xbf) < 0x1a),
                                            CONCAT14(-((byte)(bVar79 + 0xbf) < 0x1a),
                                                     CONCAT13(-((byte)(bVar78 + 0xbf) < 0x1a),
                                                              CONCAT12(-((byte)(bVar77 + 0xbf) <
                                                                        0x1a),CONCAT11(-((byte)(
                                                  bVar76 + 0xbf) < 0x1a),
                                                  -((byte)((byte)uVar60 + 0xbf) < 0x1a)))))))) &
                 0x2020202020202020;
        *puVar69 = CONCAT17((byte)(uVar61 >> 0x38) | bVar82,
                            CONCAT16((byte)(uVar61 >> 0x30) | bVar81,
                                     CONCAT15((byte)(uVar61 >> 0x28) | bVar80,
                                              CONCAT14((byte)(uVar61 >> 0x20) | bVar79,
                                                       CONCAT13((byte)(uVar61 >> 0x18) | bVar78,
                                                                CONCAT12((byte)(uVar61 >> 0x10) |
                                                                         bVar77,CONCAT11((byte)(
                                                  uVar61 >> 8) | bVar76,(byte)uVar61 | (byte)uVar60)
                                                  ))))));
        lVar68 = lVar68 + 8;
        puVar69 = puVar69 + 1;
      } while (lVar68 != 0);
      if (uVar64 != uVar65) goto LAB_1017d44e0;
    }
    else {
      uVar65 = uVar64 & 0xffffffffffffffc0;
      pbVar62 = (byte *)(lVar59 + 0x20);
      uVar61 = uVar65;
      do {
        uVar2 = *(undefined8 *)(pbVar62 + 0x18);
        bVar83 = (byte)((ulong)uVar2 >> 8);
        bVar84 = (byte)((ulong)uVar2 >> 0x10);
        bVar85 = (byte)((ulong)uVar2 >> 0x18);
        bVar86 = (byte)((ulong)uVar2 >> 0x20);
        bVar87 = (byte)((ulong)uVar2 >> 0x28);
        bVar88 = (byte)((ulong)uVar2 >> 0x30);
        bVar89 = (byte)((ulong)uVar2 >> 0x38);
        uVar60 = *(undefined8 *)(pbVar62 + 0x10);
        bVar76 = (byte)((ulong)uVar60 >> 8);
        bVar77 = (byte)((ulong)uVar60 >> 0x10);
        bVar78 = (byte)((ulong)uVar60 >> 0x18);
        bVar79 = (byte)((ulong)uVar60 >> 0x20);
        bVar80 = (byte)((ulong)uVar60 >> 0x28);
        bVar81 = (byte)((ulong)uVar60 >> 0x30);
        bVar82 = (byte)((ulong)uVar60 >> 0x38);
        pbVar62[-0x18] = -((byte)(pbVar62[-0x18] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x18];
        pbVar62[-0x17] = -((byte)(pbVar62[-0x17] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x17];
        pbVar62[-0x16] = -((byte)(pbVar62[-0x16] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x16];
        pbVar62[-0x15] = -((byte)(pbVar62[-0x15] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x15];
        pbVar62[-0x14] = -((byte)(pbVar62[-0x14] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x14];
        pbVar62[-0x13] = -((byte)(pbVar62[-0x13] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x13];
        pbVar62[-0x12] = -((byte)(pbVar62[-0x12] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x12];
        pbVar62[-0x11] = -((byte)(pbVar62[-0x11] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x11];
        pbVar62[-0x20] = -((byte)(pbVar62[-0x20] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x20];
        pbVar62[-0x1f] = -((byte)(pbVar62[-0x1f] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1f];
        pbVar62[-0x1e] = -((byte)(pbVar62[-0x1e] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1e];
        pbVar62[-0x1d] = -((byte)(pbVar62[-0x1d] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1d];
        pbVar62[-0x1c] = -((byte)(pbVar62[-0x1c] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1c];
        pbVar62[-0x1b] = -((byte)(pbVar62[-0x1b] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1b];
        pbVar62[-0x1a] = -((byte)(pbVar62[-0x1a] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x1a];
        pbVar62[-0x19] = -((byte)(pbVar62[-0x19] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x19];
        pbVar62[-8] = -((byte)(pbVar62[-8] + 0xbf) < 0x1a) & 0x20U | pbVar62[-8];
        pbVar62[-7] = -((byte)(pbVar62[-7] + 0xbf) < 0x1a) & 0x20U | pbVar62[-7];
        pbVar62[-6] = -((byte)(pbVar62[-6] + 0xbf) < 0x1a) & 0x20U | pbVar62[-6];
        pbVar62[-5] = -((byte)(pbVar62[-5] + 0xbf) < 0x1a) & 0x20U | pbVar62[-5];
        pbVar62[-4] = -((byte)(pbVar62[-4] + 0xbf) < 0x1a) & 0x20U | pbVar62[-4];
        pbVar62[-3] = -((byte)(pbVar62[-3] + 0xbf) < 0x1a) & 0x20U | pbVar62[-3];
        pbVar62[-2] = -((byte)(pbVar62[-2] + 0xbf) < 0x1a) & 0x20U | pbVar62[-2];
        pbVar62[-1] = -((byte)(pbVar62[-1] + 0xbf) < 0x1a) & 0x20U | pbVar62[-1];
        pbVar62[-0x10] = -((byte)(pbVar62[-0x10] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0x10];
        pbVar62[-0xf] = -((byte)(pbVar62[-0xf] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0xf];
        pbVar62[-0xe] = -((byte)(pbVar62[-0xe] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0xe];
        pbVar62[-0xd] = -((byte)(pbVar62[-0xd] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0xd];
        pbVar62[-0xc] = -((byte)(pbVar62[-0xc] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0xc];
        pbVar62[-0xb] = -((byte)(pbVar62[-0xb] + 0xbf) < 0x1a) & 0x20U | pbVar62[-0xb];
        pbVar62[-10] = -((byte)(pbVar62[-10] + 0xbf) < 0x1a) & 0x20U | pbVar62[-10];
        pbVar62[-9] = -((byte)(pbVar62[-9] + 0xbf) < 0x1a) & 0x20U | pbVar62[-9];
        pbVar62[8] = -((byte)(pbVar62[8] + 0xbf) < 0x1a) & 0x20U | pbVar62[8];
        pbVar62[9] = -((byte)(pbVar62[9] + 0xbf) < 0x1a) & 0x20U | pbVar62[9];
        pbVar62[10] = -((byte)(pbVar62[10] + 0xbf) < 0x1a) & 0x20U | pbVar62[10];
        pbVar62[0xb] = -((byte)(pbVar62[0xb] + 0xbf) < 0x1a) & 0x20U | pbVar62[0xb];
        pbVar62[0xc] = -((byte)(pbVar62[0xc] + 0xbf) < 0x1a) & 0x20U | pbVar62[0xc];
        pbVar62[0xd] = -((byte)(pbVar62[0xd] + 0xbf) < 0x1a) & 0x20U | pbVar62[0xd];
        pbVar62[0xe] = -((byte)(pbVar62[0xe] + 0xbf) < 0x1a) & 0x20U | pbVar62[0xe];
        pbVar62[0xf] = -((byte)(pbVar62[0xf] + 0xbf) < 0x1a) & 0x20U | pbVar62[0xf];
        *pbVar62 = -((byte)(*pbVar62 + 0xbf) < 0x1a) & 0x20U | *pbVar62;
        pbVar62[1] = -((byte)(pbVar62[1] + 0xbf) < 0x1a) & 0x20U | pbVar62[1];
        pbVar62[2] = -((byte)(pbVar62[2] + 0xbf) < 0x1a) & 0x20U | pbVar62[2];
        pbVar62[3] = -((byte)(pbVar62[3] + 0xbf) < 0x1a) & 0x20U | pbVar62[3];
        pbVar62[4] = -((byte)(pbVar62[4] + 0xbf) < 0x1a) & 0x20U | pbVar62[4];
        pbVar62[5] = -((byte)(pbVar62[5] + 0xbf) < 0x1a) & 0x20U | pbVar62[5];
        pbVar62[6] = -((byte)(pbVar62[6] + 0xbf) < 0x1a) & 0x20U | pbVar62[6];
        pbVar62[7] = -((byte)(pbVar62[7] + 0xbf) < 0x1a) & 0x20U | pbVar62[7];
        pbVar62[0x18] = -((byte)((byte)uVar2 + 0xbf) < 0x1a) & 0x20U | (byte)uVar2;
        pbVar62[0x19] = -((byte)(bVar83 + 0xbf) < 0x1a) & 0x20U | bVar83;
        pbVar62[0x1a] = -((byte)(bVar84 + 0xbf) < 0x1a) & 0x20U | bVar84;
        pbVar62[0x1b] = -((byte)(bVar85 + 0xbf) < 0x1a) & 0x20U | bVar85;
        pbVar62[0x1c] = -((byte)(bVar86 + 0xbf) < 0x1a) & 0x20U | bVar86;
        pbVar62[0x1d] = -((byte)(bVar87 + 0xbf) < 0x1a) & 0x20U | bVar87;
        pbVar62[0x1e] = -((byte)(bVar88 + 0xbf) < 0x1a) & 0x20U | bVar88;
        pbVar62[0x1f] = -((byte)(bVar89 + 0xbf) < 0x1a) & 0x20U | bVar89;
        pbVar62[0x10] = -((byte)((byte)uVar60 + 0xbf) < 0x1a) & 0x20U | (byte)uVar60;
        pbVar62[0x11] = -((byte)(bVar76 + 0xbf) < 0x1a) & 0x20U | bVar76;
        pbVar62[0x12] = -((byte)(bVar77 + 0xbf) < 0x1a) & 0x20U | bVar77;
        pbVar62[0x13] = -((byte)(bVar78 + 0xbf) < 0x1a) & 0x20U | bVar78;
        pbVar62[0x14] = -((byte)(bVar79 + 0xbf) < 0x1a) & 0x20U | bVar79;
        pbVar62[0x15] = -((byte)(bVar80 + 0xbf) < 0x1a) & 0x20U | bVar80;
        pbVar62[0x16] = -((byte)(bVar81 + 0xbf) < 0x1a) & 0x20U | bVar81;
        pbVar62[0x17] = -((byte)(bVar82 + 0xbf) < 0x1a) & 0x20U | bVar82;
        uVar61 = uVar61 - 0x40;
        pbVar62 = pbVar62 + 0x40;
      } while (uVar61 != 0);
      if (uVar64 != uVar65) {
        uVar61 = uVar65;
        if ((uVar64 & 0x38) == 0) goto LAB_1017d44e0;
        goto LAB_1017d449c;
      }
    }
    if (-1 < (long)uVar64) {
      uVar61 = _malloc(uVar64);
      if (uVar61 == 0) goto LAB_1017d4a2c;
      if (uVar64 < 8) {
        uVar66 = 0;
LAB_1017d45e8:
        lVar68 = uVar64 - uVar66;
        pcVar67 = (char *)(lVar59 + uVar66);
        pcVar72 = (char *)(uVar61 + uVar66);
        do {
          cVar57 = '-';
          if (*pcVar67 != '_') {
            cVar57 = *pcVar67;
          }
          *pcVar72 = cVar57;
          lVar68 = lVar68 + -1;
          pcVar67 = pcVar67 + 1;
          pcVar72 = pcVar72 + 1;
        } while (lVar68 != 0);
      }
      else if (uVar64 < 0x40) {
        uVar65 = 0;
LAB_1017d45ac:
        uVar66 = uVar64 & 0x7ffffffffffffff8;
        lVar68 = uVar65 - uVar66;
        puVar71 = (ulong *)(uVar61 + uVar65);
        puVar73 = (ulong *)(lVar59 + uVar65);
        do {
          uVar65 = *puVar73;
          *puVar71 = uVar65 ^ (uVar65 ^ 0x2d2d2d2d2d2d2d2d) &
                              CONCAT17(-((char)(uVar65 >> 0x38) == '_'),
                                       CONCAT16(-((char)(uVar65 >> 0x30) == '_'),
                                                CONCAT15(-((char)(uVar65 >> 0x28) == '_'),
                                                         CONCAT14(-((char)(uVar65 >> 0x20) == '_'),
                                                                  CONCAT13(-((char)(uVar65 >> 0x18)
                                                                            == '_'),CONCAT12(-((char
                                                  )(uVar65 >> 0x10) == '_'),
                                                  CONCAT11(-((char)(uVar65 >> 8) == '_'),
                                                           -((char)uVar65 == '_'))))))));
          lVar68 = lVar68 + 8;
          puVar71 = puVar71 + 1;
          puVar73 = puVar73 + 1;
        } while (lVar68 != 0);
        if (uVar64 != uVar66) goto LAB_1017d45e8;
      }
      else {
        uVar66 = uVar64 & 0x7fffffffffffffc0;
        pbVar62 = (byte *)(lVar59 + 0x20);
        pbVar70 = (byte *)(uVar61 + 0x20);
        uVar65 = uVar66;
        do {
          bVar76 = pbVar62[-0x20];
          bVar77 = pbVar62[-0x1f];
          bVar78 = pbVar62[-0x1e];
          bVar79 = pbVar62[-0x1d];
          bVar80 = pbVar62[-0x1c];
          bVar81 = pbVar62[-0x1b];
          bVar82 = pbVar62[-0x1a];
          bVar83 = pbVar62[-0x19];
          bVar84 = pbVar62[-0x18];
          bVar85 = pbVar62[-0x17];
          bVar86 = pbVar62[-0x16];
          bVar87 = pbVar62[-0x15];
          bVar88 = pbVar62[-0x14];
          bVar89 = pbVar62[-0x13];
          bVar3 = pbVar62[-0x12];
          bVar4 = pbVar62[-0x11];
          bVar5 = pbVar62[-0x10];
          bVar6 = pbVar62[-0xf];
          bVar7 = pbVar62[-0xe];
          bVar8 = pbVar62[-0xd];
          bVar9 = pbVar62[-0xc];
          bVar10 = pbVar62[-0xb];
          bVar11 = pbVar62[-10];
          bVar12 = pbVar62[-9];
          bVar13 = pbVar62[-8];
          bVar14 = pbVar62[-7];
          bVar15 = pbVar62[-6];
          bVar16 = pbVar62[-5];
          bVar17 = pbVar62[-4];
          bVar18 = pbVar62[-3];
          bVar19 = pbVar62[-2];
          bVar20 = pbVar62[-1];
          bVar21 = *pbVar62;
          bVar22 = pbVar62[1];
          bVar23 = pbVar62[2];
          bVar24 = pbVar62[3];
          bVar25 = pbVar62[4];
          bVar26 = pbVar62[5];
          bVar27 = pbVar62[6];
          bVar28 = pbVar62[7];
          bVar29 = pbVar62[8];
          bVar30 = pbVar62[9];
          bVar31 = pbVar62[10];
          bVar32 = pbVar62[0xb];
          bVar33 = pbVar62[0xc];
          bVar34 = pbVar62[0xd];
          bVar35 = pbVar62[0xe];
          bVar36 = pbVar62[0xf];
          bVar37 = pbVar62[0x10];
          bVar38 = pbVar62[0x11];
          bVar39 = pbVar62[0x12];
          bVar40 = pbVar62[0x13];
          bVar41 = pbVar62[0x14];
          bVar42 = pbVar62[0x15];
          bVar43 = pbVar62[0x16];
          bVar44 = pbVar62[0x17];
          bVar45 = pbVar62[0x18];
          bVar46 = pbVar62[0x19];
          bVar47 = pbVar62[0x1a];
          bVar48 = pbVar62[0x1b];
          bVar49 = pbVar62[0x1c];
          bVar50 = pbVar62[0x1d];
          bVar51 = pbVar62[0x1e];
          bVar52 = pbVar62[0x1f];
          pbVar70[-0x18] = bVar84 ^ (bVar84 ^ 0x2d) & -(bVar84 == 0x5f);
          pbVar70[-0x17] = bVar85 ^ (bVar85 ^ 0x2d) & -(bVar85 == 0x5f);
          pbVar70[-0x16] = bVar86 ^ (bVar86 ^ 0x2d) & -(bVar86 == 0x5f);
          pbVar70[-0x15] = bVar87 ^ (bVar87 ^ 0x2d) & -(bVar87 == 0x5f);
          pbVar70[-0x14] = bVar88 ^ (bVar88 ^ 0x2d) & -(bVar88 == 0x5f);
          pbVar70[-0x13] = bVar89 ^ (bVar89 ^ 0x2d) & -(bVar89 == 0x5f);
          pbVar70[-0x12] = bVar3 ^ (bVar3 ^ 0x2d) & -(bVar3 == 0x5f);
          pbVar70[-0x11] = bVar4 ^ (bVar4 ^ 0x2d) & -(bVar4 == 0x5f);
          pbVar70[-0x20] = bVar76 ^ (bVar76 ^ 0x2d) & -(bVar76 == 0x5f);
          pbVar70[-0x1f] = bVar77 ^ (bVar77 ^ 0x2d) & -(bVar77 == 0x5f);
          pbVar70[-0x1e] = bVar78 ^ (bVar78 ^ 0x2d) & -(bVar78 == 0x5f);
          pbVar70[-0x1d] = bVar79 ^ (bVar79 ^ 0x2d) & -(bVar79 == 0x5f);
          pbVar70[-0x1c] = bVar80 ^ (bVar80 ^ 0x2d) & -(bVar80 == 0x5f);
          pbVar70[-0x1b] = bVar81 ^ (bVar81 ^ 0x2d) & -(bVar81 == 0x5f);
          pbVar70[-0x1a] = bVar82 ^ (bVar82 ^ 0x2d) & -(bVar82 == 0x5f);
          pbVar70[-0x19] = bVar83 ^ (bVar83 ^ 0x2d) & -(bVar83 == 0x5f);
          pbVar70[-8] = bVar13 ^ (bVar13 ^ 0x2d) & -(bVar13 == 0x5f);
          pbVar70[-7] = bVar14 ^ (bVar14 ^ 0x2d) & -(bVar14 == 0x5f);
          pbVar70[-6] = bVar15 ^ (bVar15 ^ 0x2d) & -(bVar15 == 0x5f);
          pbVar70[-5] = bVar16 ^ (bVar16 ^ 0x2d) & -(bVar16 == 0x5f);
          pbVar70[-4] = bVar17 ^ (bVar17 ^ 0x2d) & -(bVar17 == 0x5f);
          pbVar70[-3] = bVar18 ^ (bVar18 ^ 0x2d) & -(bVar18 == 0x5f);
          pbVar70[-2] = bVar19 ^ (bVar19 ^ 0x2d) & -(bVar19 == 0x5f);
          pbVar70[-1] = bVar20 ^ (bVar20 ^ 0x2d) & -(bVar20 == 0x5f);
          pbVar70[-0x10] = bVar5 ^ (bVar5 ^ 0x2d) & -(bVar5 == 0x5f);
          pbVar70[-0xf] = bVar6 ^ (bVar6 ^ 0x2d) & -(bVar6 == 0x5f);
          pbVar70[-0xe] = bVar7 ^ (bVar7 ^ 0x2d) & -(bVar7 == 0x5f);
          pbVar70[-0xd] = bVar8 ^ (bVar8 ^ 0x2d) & -(bVar8 == 0x5f);
          pbVar70[-0xc] = bVar9 ^ (bVar9 ^ 0x2d) & -(bVar9 == 0x5f);
          pbVar70[-0xb] = bVar10 ^ (bVar10 ^ 0x2d) & -(bVar10 == 0x5f);
          pbVar70[-10] = bVar11 ^ (bVar11 ^ 0x2d) & -(bVar11 == 0x5f);
          pbVar70[-9] = bVar12 ^ (bVar12 ^ 0x2d) & -(bVar12 == 0x5f);
          pbVar70[8] = bVar29 ^ (bVar29 ^ 0x2d) & -(bVar29 == 0x5f);
          pbVar70[9] = bVar30 ^ (bVar30 ^ 0x2d) & -(bVar30 == 0x5f);
          pbVar70[10] = bVar31 ^ (bVar31 ^ 0x2d) & -(bVar31 == 0x5f);
          pbVar70[0xb] = bVar32 ^ (bVar32 ^ 0x2d) & -(bVar32 == 0x5f);
          pbVar70[0xc] = bVar33 ^ (bVar33 ^ 0x2d) & -(bVar33 == 0x5f);
          pbVar70[0xd] = bVar34 ^ (bVar34 ^ 0x2d) & -(bVar34 == 0x5f);
          pbVar70[0xe] = bVar35 ^ (bVar35 ^ 0x2d) & -(bVar35 == 0x5f);
          pbVar70[0xf] = bVar36 ^ (bVar36 ^ 0x2d) & -(bVar36 == 0x5f);
          *pbVar70 = bVar21 ^ (bVar21 ^ 0x2d) & -(bVar21 == 0x5f);
          pbVar70[1] = bVar22 ^ (bVar22 ^ 0x2d) & -(bVar22 == 0x5f);
          pbVar70[2] = bVar23 ^ (bVar23 ^ 0x2d) & -(bVar23 == 0x5f);
          pbVar70[3] = bVar24 ^ (bVar24 ^ 0x2d) & -(bVar24 == 0x5f);
          pbVar70[4] = bVar25 ^ (bVar25 ^ 0x2d) & -(bVar25 == 0x5f);
          pbVar70[5] = bVar26 ^ (bVar26 ^ 0x2d) & -(bVar26 == 0x5f);
          pbVar70[6] = bVar27 ^ (bVar27 ^ 0x2d) & -(bVar27 == 0x5f);
          pbVar70[7] = bVar28 ^ (bVar28 ^ 0x2d) & -(bVar28 == 0x5f);
          pbVar70[0x18] = bVar45 ^ (bVar45 ^ 0x2d) & -(bVar45 == 0x5f);
          pbVar70[0x19] = bVar46 ^ (bVar46 ^ 0x2d) & -(bVar46 == 0x5f);
          pbVar70[0x1a] = bVar47 ^ (bVar47 ^ 0x2d) & -(bVar47 == 0x5f);
          pbVar70[0x1b] = bVar48 ^ (bVar48 ^ 0x2d) & -(bVar48 == 0x5f);
          pbVar70[0x1c] = bVar49 ^ (bVar49 ^ 0x2d) & -(bVar49 == 0x5f);
          pbVar70[0x1d] = bVar50 ^ (bVar50 ^ 0x2d) & -(bVar50 == 0x5f);
          pbVar70[0x1e] = bVar51 ^ (bVar51 ^ 0x2d) & -(bVar51 == 0x5f);
          pbVar70[0x1f] = bVar52 ^ (bVar52 ^ 0x2d) & -(bVar52 == 0x5f);
          pbVar70[0x10] = bVar37 ^ (bVar37 ^ 0x2d) & -(bVar37 == 0x5f);
          pbVar70[0x11] = bVar38 ^ (bVar38 ^ 0x2d) & -(bVar38 == 0x5f);
          pbVar70[0x12] = bVar39 ^ (bVar39 ^ 0x2d) & -(bVar39 == 0x5f);
          pbVar70[0x13] = bVar40 ^ (bVar40 ^ 0x2d) & -(bVar40 == 0x5f);
          pbVar70[0x14] = bVar41 ^ (bVar41 ^ 0x2d) & -(bVar41 == 0x5f);
          pbVar70[0x15] = bVar42 ^ (bVar42 ^ 0x2d) & -(bVar42 == 0x5f);
          pbVar70[0x16] = bVar43 ^ (bVar43 ^ 0x2d) & -(bVar43 == 0x5f);
          pbVar70[0x17] = bVar44 ^ (bVar44 ^ 0x2d) & -(bVar44 == 0x5f);
          uVar65 = uVar65 - 0x40;
          pbVar62 = pbVar62 + 0x40;
          pbVar70 = pbVar70 + 0x40;
        } while (uVar65 != 0);
        if (uVar64 != uVar66) {
          uVar65 = uVar66;
          if ((uVar64 & 0x38) == 0) goto LAB_1017d45e8;
          goto LAB_1017d45ac;
        }
      }
      uStack_188 = uVar64;
      uStack_180 = uVar61;
      uStack_178 = uVar64;
      _free(lVar59);
      puStack_108 = &uStack_188;
      puStack_100 = &DAT_1017b4db0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s_x__108adcc01,&puStack_108);
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_160 = uStack_d0;
      puStack_100 = &DAT_1017b4db0;
      puStack_108 = &uStack_170;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__primary_used_percent_108adcc06,&puStack_108);
      uVar54 = uStack_d0;
      uVar66 = uStack_d8;
      uVar61 = uStack_e0;
      puStack_100 = &DAT_1017b4db0;
      puStack_108 = &uStack_170;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__primary_window_minutes_108adcc1e,&puStack_108);
      uVar55 = uStack_d0;
      uVar74 = uStack_d8;
      uVar64 = uStack_e0;
      puStack_108 = &uStack_170;
      puStack_100 = &DAT_1017b4db0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__primary_reset_at_108adcc38,&puStack_108);
      uVar53 = uStack_d8;
      uVar65 = uStack_e0;
      FUN_1017d423c(&uStack_158,param_2,uVar66,uVar54,uVar74,uVar55,uStack_d8,uStack_d0);
      if (uVar65 != 0) {
        _free(uVar53);
      }
      if (uVar64 != 0) {
        _free(uVar74);
      }
      if (uVar61 != 0) {
        _free(uVar66);
      }
      puStack_100 = &DAT_1017b4db0;
      puStack_108 = &uStack_170;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__secondary_used_percent_108adcc4c,&puStack_108);
      uVar74 = uStack_d0;
      uVar65 = uStack_d8;
      uVar61 = uStack_e0;
      puStack_100 = &DAT_1017b4db0;
      puStack_108 = &uStack_170;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__secondary_window_minutes_108adcc66,&puStack_108);
      uVar53 = uStack_d0;
      uVar66 = uStack_d8;
      uVar64 = uStack_e0;
      puStack_108 = &uStack_170;
      puStack_100 = &DAT_1017b4db0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__secondary_reset_at_108adcc82,&puStack_108);
      FUN_1017d423c(&uStack_130,param_2,uVar65,uVar74,uVar66,uVar53,uStack_d8,uStack_d0);
      if (uStack_e0 != 0) {
        _free(uStack_d8);
      }
      if (uVar64 != 0) {
        _free(uVar66);
      }
      puVar63 = &DAT_1017b4db0;
      if (uVar61 != 0) {
        _free(uVar65);
      }
      uStack_d8 = uStack_180;
      uStack_e0 = uStack_188;
      uStack_d0 = uStack_178;
      FUN_1017d2840(&puStack_108,&uStack_e0);
      cVar57 = FUN_1017d269c(param_2,&UNK_108ce68e8,0x1b);
      if (cVar57 == '\x02') {
LAB_1017d482c:
        uVar75 = (undefined1)uVar66;
        uVar61 = 0x8000000000000001;
      }
      else {
        uVar58 = FUN_1017d269c(param_2,&UNK_108ce6903,0x19);
        uVar75 = (undefined1)uVar58;
        uVar66 = (ulong)(uVar58 & 0xff);
        if ((uVar58 & 0xff) == 2) goto LAB_1017d482c;
        lVar59 = FUN_1017abd24(param_2,&UNK_108ce691c,0x17);
        if (lVar59 == 0) {
LAB_1017d4a18:
          uVar61 = 0x8000000000000000;
        }
        else {
          pbVar62 = *(byte **)(lVar59 + 8);
          for (lVar59 = *(long *)(lVar59 + 0x10); lVar59 != 0; lVar59 = lVar59 + -1) {
            if ((*pbVar62 != 9) && (0x5e < *pbVar62 - 0x20)) goto LAB_1017d4a18;
            pbVar62 = pbVar62 + 1;
          }
          auVar90 = FUN_1017a9efc();
          uVar61 = auVar90._8_8_;
          if (uVar61 == 0) goto LAB_1017d4a18;
          uVar64 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar61,1);
          if (uVar64 == 0) {
            func_0x0001087c9084(1,uVar61);
            goto LAB_1017d4a50;
          }
          _memcpy(uVar64,auVar90._0_8_,uVar61);
        }
      }
      puStack_f0 = &uStack_170;
      puStack_e8 = &DAT_1017b4db0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_e0,s__limit_name_108adcc98,&puStack_f0);
      uVar66 = uStack_d8;
      uVar65 = uStack_e0;
      lVar59 = FUN_1017abd24(param_2,uStack_d8,uStack_d0);
      if (lVar59 != 0) {
        pbVar62 = *(byte **)(lVar59 + 8);
        for (lVar59 = *(long *)(lVar59 + 0x10); lVar59 != 0; lVar59 = lVar59 + -1) {
          if ((*pbVar62 != 9) && (0x5e < *pbVar62 - 0x20)) goto LAB_1017d48d8;
          pbVar62 = pbVar62 + 1;
        }
        auVar90 = FUN_1017a9efc();
        uVar74 = auVar90._8_8_;
        if (uVar74 != 0) {
          puVar63 = (undefined *)_malloc(uVar74);
          if (puVar63 != (undefined *)0x0) {
            _memcpy(puVar63,auVar90._0_8_,uVar74);
            goto LAB_1017d48dc;
          }
          func_0x0001087c9084(1,uVar74);
          goto LAB_1017d4a50;
        }
      }
LAB_1017d48d8:
      uVar74 = 0x8000000000000000;
LAB_1017d48dc:
      puStack_88 = puStack_100;
      puStack_90 = puStack_108;
      uStack_80 = uStack_f8;
      uStack_b0 = uStack_128;
      uStack_b8 = uStack_130;
      uStack_d8 = uStack_150;
      uStack_e0 = uStack_158;
      uStack_c8 = uStack_140;
      uStack_d0 = uStack_148;
      uStack_a0 = uStack_118;
      uStack_a8 = uStack_120;
      uStack_c0 = uStack_138;
      uStack_98 = uStack_110;
      param_1[1] = uStack_150;
      *param_1 = uStack_158;
      param_1[3] = uStack_140;
      param_1[2] = uStack_148;
      param_1[9] = uStack_110;
      param_1[8] = uStack_118;
      param_1[0xb] = (ulong)puStack_100;
      param_1[10] = (ulong)puStack_108;
      param_1[5] = uStack_130;
      param_1[4] = uStack_138;
      param_1[7] = uStack_120;
      param_1[6] = uStack_128;
      param_1[0xc] = uStack_f8;
      param_1[0xd] = uVar74;
      param_1[0xe] = (ulong)puVar63;
      param_1[0xf] = uVar74;
      param_1[0x10] = uVar61;
      param_1[0x11] = uVar64;
      param_1[0x12] = uVar61;
      *(char *)(param_1 + 0x13) = cVar57;
      *(undefined1 *)((long)param_1 + 0x99) = uVar75;
      *(undefined2 *)(param_1 + 0x14) = 0xc05;
      if (uVar65 != 0) {
        _free(uVar66);
      }
      if (uStack_170 != 0) {
        _free(uStack_168);
      }
      return;
    }
    uVar60 = 0;
  }
  func_0x0001087c9084(uVar60,uVar64);
LAB_1017d4a50:
                    /* WARNING: Does not return */
  pcVar56 = (code *)SoftwareBreakpoint(1,0x1017d4a54);
  (*pcVar56)();
}

