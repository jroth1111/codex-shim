
long * FUN_105dc4968(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  uint3 uVar6;
  uint6 uVar7;
  uint6 uVar8;
  uint3 uVar9;
  uint6 uVar10;
  code *pcVar11;
  bool bVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  char *extraout_x1;
  long lVar15;
  char *extraout_x8;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  long *plVar27;
  byte bVar28;
  ushort uVar29;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined8 uVar32;
  byte bVar39;
  byte bVar40;
  ushort uVar41;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined8 uVar44;
  undefined8 uVar45;
  byte bVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  undefined1 uVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  ushort uVar106;
  long lVar109;
  undefined1 auVar111 [12];
  long lVar116;
  undefined1 auVar115 [16];
  long lVar117;
  long lVar118;
  long lVar119;
  undefined1 auVar120 [12];
  long lVar124;
  undefined1 auVar123 [16];
  long lVar125;
  char cVar127;
  char cVar128;
  undefined8 uVar126;
  ushort uVar129;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  undefined8 uVar153;
  undefined8 uVar154;
  undefined1 auVar155 [16];
  undefined4 uVar30;
  undefined6 uVar31;
  undefined4 uVar42;
  undefined6 uVar43;
  undefined4 uVar107;
  undefined6 uVar108;
  undefined1 auVar110 [12];
  undefined1 auVar112 [14];
  undefined1 auVar113 [14];
  undefined1 auVar114 [16];
  undefined1 auVar121 [14];
  undefined1 auVar122 [16];
  undefined4 uVar130;
  undefined6 uVar131;
  
  uVar23 = param_1[1];
  uVar26 = param_1[2];
  if (uVar26 == uVar23) {
    return param_1;
  }
  if (uVar26 < uVar23) {
    bVar28 = *(byte *)(*param_1 + uVar26);
    if (bVar28 == 0x22) {
      return param_1;
    }
    if ((bVar28 == 0x5c || bVar28 < 0x1f) || bVar28 == 0x1f) {
      return param_1;
    }
    lVar20 = uVar26 + 1;
    lVar22 = -(uVar23 - lVar20 & 0x7ffffffffffffff8);
    lVar15 = 7 - uVar26;
    puVar13 = (ulong *)(*param_1 + lVar20);
    while (lVar22 != 0) {
      uVar26 = *puVar13;
      lVar22 = lVar22 + 8;
      lVar15 = lVar15 + -8;
      uVar26 = ((uVar26 ^ 0x2222222222222222) + 0xfefefefefefefeff | uVar26 + 0xdfdfdfdfdfdfdfe0 |
               (uVar26 ^ 0x5c5c5c5c5c5c5c5c) + 0xfefefefefefefeff) & (uVar26 ^ 0xffffffffffffffff) &
               0x8080808080808080;
      puVar13 = puVar13 + 1;
      if (uVar26 != 0) {
        uVar26 = uVar26 >> 7;
        uVar23 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        param_1[2] = ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) - lVar15;
        return param_1;
      }
    }
    param_1[2] = (uVar23 - lVar20 & 0xfffffffffffffff8) + lVar20;
    uVar23 = param_1[2];
    if ((ulong)param_1[1] <= uVar23) {
      return param_1;
    }
    do {
      bVar28 = *(byte *)(*param_1 + uVar23);
      if (bVar28 == 0x22) {
        return param_1;
      }
      if (bVar28 == 0x5c) {
        return param_1;
      }
      if (bVar28 < 0x20) {
        return param_1;
      }
      uVar23 = uVar23 + 1;
      param_1[2] = uVar23;
    } while (param_1[1] != uVar23);
    return param_1;
  }
  pcVar17 = &UNK_10b46a1c8;
  auVar155 = func_0x000108a07bdc(uVar26);
  pcVar16 = auVar155._8_8_;
  pcVar25 = auVar155._0_8_;
  if (pcVar16 < pcVar17) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,pcVar17,pcVar16,&UNK_10b46a258);
    pcVar17 = extraout_x1;
    pcVar16 = extraout_x8;
LAB_105dc5364:
    puVar13 = (ulong *)__ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                 (0,pcVar17,pcVar16,&UNK_10b46a240);
    if (*puVar13 == 1) {
      plVar27 = (long *)puVar13[1];
      _free(puVar13);
      return plVar27;
    }
    if ((1L << (*puVar13 & 0x3f) & 0x1ffffc1U) == 0) {
      uVar75 = 0x25;
    }
    else {
      uVar75 = 0x15;
    }
    plVar27 = (long *)_malloc(8);
    if (plVar27 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
    else {
      *plVar27 = (long)puVar13;
      puVar14 = (undefined8 *)_malloc(0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = plVar27;
        puVar14[1] = &UNK_10b46a458;
        *(undefined1 *)(puVar14 + 2) = uVar75;
        return (long *)((long)puVar14 + 1);
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x105dc6654);
    (*pcVar11)();
  }
  if (pcVar17 == (char *)0x0) {
LAB_105dc4cb0:
    lVar20 = 0;
    goto LAB_105dc4cb4;
  }
  pcVar18 = pcVar25 + (long)pcVar17;
  if (pcVar17 < (char *)0x10) {
    do {
      if (pcVar18 <= pcVar25) goto LAB_105dc4cb0;
      pcVar18 = pcVar18 + -1;
    } while (*pcVar18 != '\n');
  }
  else {
    uVar44 = *(undefined8 *)(pcVar18 + -8);
    uVar126 = *(undefined8 *)(pcVar18 + -0x10);
    uVar29 = CONCAT11(-((char)((ulong)uVar126 >> 8) == '\n'),-((char)uVar126 == '\n'));
    uVar30 = CONCAT13(-((char)((ulong)uVar126 >> 0x18) == '\n'),
                      CONCAT12(-((char)((ulong)uVar126 >> 0x10) == '\n'),uVar29));
    uVar31 = CONCAT15(-((char)((ulong)uVar126 >> 0x28) == '\n'),
                      CONCAT14(-((char)((ulong)uVar126 >> 0x20) == '\n'),uVar30));
    uVar41 = CONCAT11(-((char)((ulong)uVar44 >> 8) == '\n'),-((char)uVar44 == '\n'));
    uVar42 = CONCAT13(-((char)((ulong)uVar44 >> 0x18) == '\n'),
                      CONCAT12(-((char)((ulong)uVar44 >> 0x10) == '\n'),uVar41));
    uVar43 = CONCAT15(-((char)((ulong)uVar44 >> 0x28) == '\n'),
                      CONCAT14(-((char)((ulong)uVar44 >> 0x20) == '\n'),uVar42));
    uVar23 = CONCAT17((char)(ushort)(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == '\n'),
                                              CONCAT16(-((char)((ulong)uVar44 >> 0x30) == '\n'),
                                                       uVar43)) >> 0x34),
                      CONCAT16((char)(ushort)((uint6)uVar43 >> 0x24),
                               CONCAT15((char)(ushort)((uint)uVar42 >> 0x14),
                                        CONCAT14((char)(uVar41 >> 4),
                                                 CONCAT13((char)(ushort)(CONCAT17(-((char)((ulong)
                                                  uVar126 >> 0x38) == '\n'),
                                                  CONCAT16(-((char)((ulong)uVar126 >> 0x30) == '\n')
                                                           ,uVar31)) >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar31 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar30 >>
                                                                                  0x14),
                                                                    (char)(uVar29 >> 4)))))))) &
             0x8888888888888888;
    if (uVar23 == 0) {
      uVar23 = (long)pcVar17 - ((ulong)pcVar18 & 0xf);
      if (((char *)0x3f < pcVar17) && (uVar26 = uVar23, 0x3f < uVar23)) {
        do {
          uVar45 = *(undefined8 *)(pcVar25 + (uVar26 - 0x38));
          uVar32 = *(undefined8 *)(pcVar25 + (uVar26 - 0x40));
          uVar44 = *(undefined8 *)(pcVar25 + (uVar26 - 0x28));
          uVar126 = *(undefined8 *)(pcVar25 + (uVar26 - 0x30));
          uVar154 = *(undefined8 *)(pcVar25 + (uVar26 - 0x18));
          uVar153 = *(undefined8 *)(pcVar25 + (uVar26 - 0x20));
          bVar28 = -((char)uVar32 == '\n');
          bVar33 = -((char)((ulong)uVar32 >> 8) == '\n');
          uVar29 = CONCAT11(bVar33,bVar28);
          bVar34 = -((char)((ulong)uVar32 >> 0x10) == '\n');
          bVar35 = -((char)((ulong)uVar32 >> 0x18) == '\n');
          uVar30 = CONCAT13(bVar35,CONCAT12(bVar34,uVar29));
          bVar36 = -((char)((ulong)uVar32 >> 0x20) == '\n');
          bVar37 = -((char)((ulong)uVar32 >> 0x28) == '\n');
          uVar31 = CONCAT15(bVar37,CONCAT14(bVar36,uVar30));
          bVar38 = -((char)((ulong)uVar32 >> 0x30) == '\n');
          bVar39 = -((char)((ulong)uVar32 >> 0x38) == '\n');
          bVar40 = -((char)uVar45 == '\n');
          bVar46 = -((char)((ulong)uVar45 >> 8) == '\n');
          uVar41 = CONCAT11(bVar46,bVar40);
          bVar47 = -((char)((ulong)uVar45 >> 0x10) == '\n');
          bVar48 = -((char)((ulong)uVar45 >> 0x18) == '\n');
          uVar42 = CONCAT13(bVar48,CONCAT12(bVar47,uVar41));
          bVar49 = -((char)((ulong)uVar45 >> 0x20) == '\n');
          bVar50 = -((char)((ulong)uVar45 >> 0x28) == '\n');
          uVar43 = CONCAT15(bVar50,CONCAT14(bVar49,uVar42));
          bVar51 = -((char)((ulong)uVar45 >> 0x30) == '\n');
          bVar52 = -((char)((ulong)uVar45 >> 0x38) == '\n');
          bVar58 = -((char)uVar126 == '\n');
          bVar59 = -((char)((ulong)uVar126 >> 8) == '\n');
          bVar60 = -((char)((ulong)uVar126 >> 0x10) == '\n');
          bVar61 = -((char)((ulong)uVar126 >> 0x18) == '\n');
          bVar62 = -((char)((ulong)uVar126 >> 0x20) == '\n');
          bVar63 = -((char)((ulong)uVar126 >> 0x28) == '\n');
          bVar64 = -((char)((ulong)uVar126 >> 0x30) == '\n');
          bVar65 = -((char)((ulong)uVar126 >> 0x38) == '\n');
          bVar66 = -((char)uVar44 == '\n');
          bVar67 = -((char)((ulong)uVar44 >> 8) == '\n');
          bVar68 = -((char)((ulong)uVar44 >> 0x10) == '\n');
          bVar69 = -((char)((ulong)uVar44 >> 0x18) == '\n');
          bVar70 = -((char)((ulong)uVar44 >> 0x20) == '\n');
          bVar71 = -((char)((ulong)uVar44 >> 0x28) == '\n');
          bVar72 = -((char)((ulong)uVar44 >> 0x30) == '\n');
          bVar73 = -((char)((ulong)uVar44 >> 0x38) == '\n');
          bVar74 = -((char)uVar153 == '\n');
          bVar76 = -((char)((ulong)uVar153 >> 8) == '\n');
          bVar78 = -((char)((ulong)uVar153 >> 0x10) == '\n');
          bVar80 = -((char)((ulong)uVar153 >> 0x18) == '\n');
          bVar82 = -((char)((ulong)uVar153 >> 0x20) == '\n');
          bVar84 = -((char)((ulong)uVar153 >> 0x28) == '\n');
          bVar86 = -((char)((ulong)uVar153 >> 0x30) == '\n');
          bVar88 = -((char)((ulong)uVar153 >> 0x38) == '\n');
          bVar90 = -((char)uVar154 == '\n');
          bVar92 = -((char)((ulong)uVar154 >> 8) == '\n');
          bVar94 = -((char)((ulong)uVar154 >> 0x10) == '\n');
          bVar96 = -((char)((ulong)uVar154 >> 0x18) == '\n');
          bVar98 = -((char)((ulong)uVar154 >> 0x20) == '\n');
          bVar100 = -((char)((ulong)uVar154 >> 0x28) == '\n');
          bVar102 = -((char)((ulong)uVar154 >> 0x30) == '\n');
          bVar104 = -((char)((ulong)uVar154 >> 0x38) == '\n');
          uVar106 = CONCAT11(-(pcVar25[uVar26 - 0xf] == '\n'),-(pcVar25[uVar26 - 0x10] == '\n'));
          uVar107 = CONCAT13(-(pcVar25[uVar26 - 0xd] == '\n'),
                             CONCAT12(-(pcVar25[uVar26 - 0xe] == '\n'),uVar106));
          uVar108 = CONCAT15(-(pcVar25[uVar26 - 0xb] == '\n'),
                             CONCAT14(-(pcVar25[uVar26 - 0xc] == '\n'),uVar107));
          uVar126 = CONCAT17(-(pcVar25[uVar26 - 9] == '\n'),
                             CONCAT16(-(pcVar25[uVar26 - 10] == '\n'),uVar108));
          auVar110._0_10_ =
               CONCAT19(-(pcVar25[uVar26 - 7] == '\n'),
                        CONCAT18(-(pcVar25[uVar26 - 8] == '\n'),uVar126));
          auVar110[10] = -(pcVar25[uVar26 - 6] == '\n');
          auVar110[0xb] = -(pcVar25[uVar26 - 5] == '\n');
          auVar112[0xc] = -(pcVar25[uVar26 - 4] == '\n');
          auVar112._0_12_ = auVar110;
          auVar112[0xd] = -(pcVar25[uVar26 - 3] == '\n');
          auVar155[0xe] = -(pcVar25[uVar26 - 2] == '\n');
          auVar155._0_14_ = auVar112;
          auVar155[0xf] = -(pcVar25[uVar26 - 1] == '\n');
          auVar123[0] = bVar58 | bVar28 | bVar74 | -(pcVar25[uVar26 - 0x10] == '\n');
          auVar123[1] = bVar59 | bVar33 | bVar76 | -(pcVar25[uVar26 - 0xf] == '\n');
          auVar123[2] = bVar60 | bVar34 | bVar78 | -(pcVar25[uVar26 - 0xe] == '\n');
          auVar123[3] = bVar61 | bVar35 | bVar80 | -(pcVar25[uVar26 - 0xd] == '\n');
          auVar123[4] = bVar62 | bVar36 | bVar82 | -(pcVar25[uVar26 - 0xc] == '\n');
          auVar123[5] = bVar63 | bVar37 | bVar84 | -(pcVar25[uVar26 - 0xb] == '\n');
          auVar123[6] = bVar64 | bVar38 | bVar86 | -(pcVar25[uVar26 - 10] == '\n');
          auVar123[7] = bVar65 | bVar39 | bVar88 | -(pcVar25[uVar26 - 9] == '\n');
          auVar123[8] = bVar66 | bVar40 | bVar90 | -(pcVar25[uVar26 - 8] == '\n');
          auVar123[9] = bVar67 | bVar46 | bVar92 | -(pcVar25[uVar26 - 7] == '\n');
          auVar123[10] = bVar68 | bVar47 | bVar94 | auVar110[10];
          auVar123[0xb] = bVar69 | bVar48 | bVar96 | auVar110[0xb];
          auVar123[0xc] = bVar70 | bVar49 | bVar98 | auVar112[0xc];
          auVar123[0xd] = bVar71 | bVar50 | bVar100 | auVar112[0xd];
          auVar123[0xe] = bVar72 | bVar51 | bVar102 | auVar155[0xe];
          auVar123[0xf] = bVar73 | bVar52 | bVar104 | auVar155[0xf];
          auVar123 = NEON_umaxp(auVar123,auVar123,1);
          if (auVar123._0_8_ != 0) {
            uVar23 = CONCAT17((char)(auVar155._14_2_ >> 4),
                              CONCAT16((char)(auVar112._12_2_ >> 4),
                                       CONCAT15((char)(auVar110._10_2_ >> 4),
                                                CONCAT14((char)(ushort)((unkuint10)auVar110._0_10_
                                                                       >> 0x44),
                                                         CONCAT13((char)(ushort)((ulong)uVar126 >>
                                                                                0x34),
                                                                  CONCAT12((char)(ushort)((uint6)
                                                  uVar108 >> 0x24),
                                                  CONCAT11((char)(ushort)((uint)uVar107 >> 0x14),
                                                           (char)(uVar106 >> 4)))))))) &
                     0x8888888888888888;
            if (uVar23 == 0) {
              uVar23 = CONCAT17((char)(CONCAT11(bVar104,bVar102) >> 4),
                                CONCAT16((char)(CONCAT11(bVar100,bVar98) >> 4),
                                         CONCAT15((char)(CONCAT11(bVar96,bVar94) >> 4),
                                                  CONCAT14((char)(CONCAT11(bVar92,bVar90) >> 4),
                                                           CONCAT13((char)(CONCAT11(bVar88,bVar86)
                                                                          >> 4),
                                                                    CONCAT12((char)(CONCAT11(bVar84,
                                                  bVar82) >> 4),
                                                  CONCAT11((char)(CONCAT11(bVar80,bVar78) >> 4),
                                                           (char)(CONCAT11(bVar76,bVar74) >> 4))))))
                                        )) & 0x8888888888888888;
              if (uVar23 == 0) {
                uVar23 = CONCAT17((char)(CONCAT11(bVar73,bVar72) >> 4),
                                  CONCAT16((char)(CONCAT11(bVar71,bVar70) >> 4),
                                           CONCAT15((char)(CONCAT11(bVar69,bVar68) >> 4),
                                                    CONCAT14((char)(CONCAT11(bVar67,bVar66) >> 4),
                                                             CONCAT13((char)(CONCAT11(bVar65,bVar64)
                                                                            >> 4),
                                                                      CONCAT12((char)(CONCAT11(
                                                  bVar63,bVar62) >> 4),
                                                  CONCAT11((char)(CONCAT11(bVar61,bVar60) >> 4),
                                                           (char)(CONCAT11(bVar59,bVar58) >> 4))))))
                                          )) & 0x8888888888888888;
                if (uVar23 == 0) {
                  pcVar18 = pcVar25 + (uVar26 - ((ulong)LZCOUNT(CONCAT17((char)(ushort)(CONCAT17(
                                                  bVar52,CONCAT16(bVar51,uVar43)) >> 0x34),
                                                  CONCAT16((char)(ushort)((uint6)uVar43 >> 0x24),
                                                           CONCAT15((char)(ushort)((uint)uVar42 >>
                                                                                  0x14),
                                                                    CONCAT14((char)(uVar41 >> 4),
                                                                             CONCAT13((char)(ushort)
                                                  (CONCAT17(bVar39,CONCAT16(bVar38,uVar31)) >> 0x34)
                                                  ,CONCAT12((char)(ushort)((uint6)uVar31 >> 0x24),
                                                            CONCAT11((char)(ushort)((uint)uVar30 >>
                                                                                   0x14),
                                                                     (char)(uVar29 >> 4)))))))) &
                                                  0x8888888888888888) >> 2)) + -0x31;
                }
                else {
                  pcVar18 = pcVar25 + ((ulong)LZCOUNT(uVar23) >> 2 ^ 0xf) + uVar26 + -0x30;
                }
              }
              else {
                pcVar18 = pcVar25 + ((ulong)LZCOUNT(uVar23) >> 2 ^ 0xf) + uVar26 + -0x20;
              }
            }
            else {
              pcVar18 = pcVar25 + ((ulong)LZCOUNT(uVar23) >> 2 ^ 0xf) + uVar26 + -0x10;
            }
            goto LAB_105dc4ab0;
          }
          uVar23 = uVar26 - 0x40;
          bVar12 = 0x7f < uVar26;
          uVar26 = uVar23;
        } while (bVar12);
      }
      do {
        if ((long)uVar23 < 0x10) {
          if ((long)uVar23 < 1) goto LAB_105dc4cb0;
          uVar44 = *(undefined8 *)(pcVar25 + 8);
          uVar126 = *(undefined8 *)pcVar25;
          uVar29 = CONCAT11(-((char)((ulong)uVar126 >> 8) == '\n'),-((char)uVar126 == '\n'));
          uVar30 = CONCAT13(-((char)((ulong)uVar126 >> 0x18) == '\n'),
                            CONCAT12(-((char)((ulong)uVar126 >> 0x10) == '\n'),uVar29));
          uVar31 = CONCAT15(-((char)((ulong)uVar126 >> 0x28) == '\n'),
                            CONCAT14(-((char)((ulong)uVar126 >> 0x20) == '\n'),uVar30));
          uVar41 = CONCAT11(-((char)((ulong)uVar44 >> 8) == '\n'),-((char)uVar44 == '\n'));
          uVar42 = CONCAT13(-((char)((ulong)uVar44 >> 0x18) == '\n'),
                            CONCAT12(-((char)((ulong)uVar44 >> 0x10) == '\n'),uVar41));
          uVar43 = CONCAT15(-((char)((ulong)uVar44 >> 0x28) == '\n'),
                            CONCAT14(-((char)((ulong)uVar44 >> 0x20) == '\n'),uVar42));
          uVar23 = CONCAT17((char)(ushort)(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == '\n'),
                                                    CONCAT16(-((char)((ulong)uVar44 >> 0x30) == '\n'
                                                              ),uVar43)) >> 0x34),
                            CONCAT16((char)(ushort)((uint6)uVar43 >> 0x24),
                                     CONCAT15((char)(ushort)((uint)uVar42 >> 0x14),
                                              CONCAT14((char)(uVar41 >> 4),
                                                       CONCAT13((char)(ushort)(CONCAT17(-((char)((
                                                  ulong)uVar126 >> 0x38) == '\n'),
                                                  CONCAT16(-((char)((ulong)uVar126 >> 0x30) == '\n')
                                                           ,uVar31)) >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar31 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar30 >>
                                                                                  0x14),
                                                                    (char)(uVar29 >> 4)))))))) &
                   0x8888888888888888;
          if (uVar23 == 0) goto LAB_105dc4cb0;
          pcVar18 = pcVar25 + (0xf - ((ulong)LZCOUNT(uVar23) >> 2));
          goto LAB_105dc4ab0;
        }
        uVar24 = uVar23 - 0x10;
        uVar44 = *(undefined8 *)(pcVar25 + (uVar23 - 8));
        uVar126 = *(undefined8 *)(pcVar25 + (uVar23 - 0x10));
        uVar29 = CONCAT11(-((char)((ulong)uVar126 >> 8) == '\n'),-((char)uVar126 == '\n'));
        uVar30 = CONCAT13(-((char)((ulong)uVar126 >> 0x18) == '\n'),
                          CONCAT12(-((char)((ulong)uVar126 >> 0x10) == '\n'),uVar29));
        uVar31 = CONCAT15(-((char)((ulong)uVar126 >> 0x28) == '\n'),
                          CONCAT14(-((char)((ulong)uVar126 >> 0x20) == '\n'),uVar30));
        uVar41 = CONCAT11(-((char)((ulong)uVar44 >> 8) == '\n'),-((char)uVar44 == '\n'));
        uVar42 = CONCAT13(-((char)((ulong)uVar44 >> 0x18) == '\n'),
                          CONCAT12(-((char)((ulong)uVar44 >> 0x10) == '\n'),uVar41));
        uVar43 = CONCAT15(-((char)((ulong)uVar44 >> 0x28) == '\n'),
                          CONCAT14(-((char)((ulong)uVar44 >> 0x20) == '\n'),uVar42));
        uVar26 = CONCAT17((char)(ushort)(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == '\n'),
                                                  CONCAT16(-((char)((ulong)uVar44 >> 0x30) == '\n'),
                                                           uVar43)) >> 0x34),
                          CONCAT16((char)(ushort)((uint6)uVar43 >> 0x24),
                                   CONCAT15((char)(ushort)((uint)uVar42 >> 0x14),
                                            CONCAT14((char)(uVar41 >> 4),
                                                     CONCAT13((char)(ushort)(CONCAT17(-((char)((
                                                  ulong)uVar126 >> 0x38) == '\n'),
                                                  CONCAT16(-((char)((ulong)uVar126 >> 0x30) == '\n')
                                                           ,uVar31)) >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar31 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar30 >>
                                                                                  0x14),
                                                                    (char)(uVar29 >> 4)))))))) &
                 0x8888888888888888;
        uVar23 = uVar24;
      } while (uVar26 == 0);
      pcVar18 = pcVar25 + ((ulong)LZCOUNT(uVar26) >> 2 ^ 0xf) + uVar24;
    }
    else {
      pcVar18 = pcVar18 + -0x10 + ((ulong)LZCOUNT(uVar23) >> 2 ^ 0xf);
    }
  }
LAB_105dc4ab0:
  pcVar21 = pcVar18 + -(long)pcVar25;
  pcVar17 = pcVar21 + 1;
  if (pcVar16 <= pcVar21) goto LAB_105dc5364;
  pcVar16 = pcVar25 + (long)pcVar17;
  if (pcVar16 <= pcVar25) goto LAB_105dc4cb0;
  if (pcVar21 < (char *)0xf) {
    if (pcVar21 < (char *)0x7) {
      lVar20 = 0;
      pcVar18 = pcVar25;
    }
    else {
      pcVar19 = (char *)((ulong)pcVar17 & 0x18);
      pcVar18 = pcVar25 + (long)pcVar19;
      lVar20 = 0;
      lVar22 = 0;
      uVar75 = 0;
      uVar77 = 0;
      uVar79 = 0;
      uVar81 = 0;
      uVar83 = 0;
      uVar85 = 0;
      uVar87 = 0;
      uVar89 = 0;
      uVar91 = 0;
      uVar93 = 0;
      uVar95 = 0;
      uVar97 = 0;
      uVar99 = 0;
      uVar101 = 0;
      uVar103 = 0;
      uVar105 = 0;
      lVar15 = 0;
      lVar116 = 0;
      lVar118 = 0;
      lVar124 = 0;
      pcVar21 = pcVar19;
      do {
        uVar126 = *(undefined8 *)pcVar25;
        cVar127 = -((char)((ulong)uVar126 >> 8) == '\n');
        cVar128 = -((char)((ulong)uVar126 >> 0x28) == '\n');
        uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar126 == '\n'))) & 0xff00ff;
        uVar7 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
        uVar8 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)uVar126
                                                                                     >> 0x20) ==
                                                                              '\n'))) &
                0xffff0000ffff;
        lVar118 = lVar118 + (ulong)(-((char)((ulong)uVar126 >> 0x30) == '\n') & 1);
        lVar124 = lVar124 + (ulong)(-((char)((ulong)uVar126 >> 0x38) == '\n') & 1);
        lVar15 = lVar15 + (ulong)((byte)uVar8 & 1);
        lVar116 = lVar116 + (ulong)((byte)(uVar8 >> 0x20) & 1);
        lVar109 = CONCAT17(uVar89,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar83,CONCAT13(uVar81,
                                                  CONCAT12(uVar79,CONCAT11(uVar77,uVar75))))))) +
                  (ulong)(-((char)((ulong)uVar126 >> 0x10) == '\n') & 1);
        uVar75 = (undefined1)lVar109;
        uVar77 = (undefined1)((ulong)lVar109 >> 8);
        uVar79 = (undefined1)((ulong)lVar109 >> 0x10);
        uVar81 = (undefined1)((ulong)lVar109 >> 0x18);
        uVar83 = (undefined1)((ulong)lVar109 >> 0x20);
        uVar85 = (undefined1)((ulong)lVar109 >> 0x28);
        uVar87 = (undefined1)((ulong)lVar109 >> 0x30);
        uVar89 = (undefined1)((ulong)lVar109 >> 0x38);
        lVar117 = CONCAT17(uVar105,CONCAT16(uVar103,CONCAT15(uVar101,CONCAT14(uVar99,CONCAT13(uVar97
                                                  ,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))))))) +
                  (ulong)(-((char)((ulong)uVar126 >> 0x18) == '\n') & 1);
        uVar91 = (undefined1)lVar117;
        uVar93 = (undefined1)((ulong)lVar117 >> 8);
        uVar95 = (undefined1)((ulong)lVar117 >> 0x10);
        uVar97 = (undefined1)((ulong)lVar117 >> 0x18);
        uVar99 = (undefined1)((ulong)lVar117 >> 0x20);
        uVar101 = (undefined1)((ulong)lVar117 >> 0x28);
        uVar103 = (undefined1)((ulong)lVar117 >> 0x30);
        uVar105 = (undefined1)((ulong)lVar117 >> 0x38);
        lVar20 = lVar20 + (ulong)((byte)uVar7 & 1);
        lVar22 = lVar22 + (ulong)((byte)(uVar7 >> 0x20) & 1);
        pcVar21 = pcVar21 + -8;
        pcVar25 = pcVar25 + 8;
      } while (pcVar21 != (char *)0x0);
      lVar20 = lVar20 + lVar15 + lVar109 + lVar118 + lVar22 + lVar116 + lVar117 + lVar124;
      if (pcVar17 == pcVar19) goto LAB_105dc4cb4;
    }
    do {
      pcVar17 = pcVar18 + 1;
      if (*pcVar18 == '\n') {
        lVar20 = lVar20 + 1;
      }
      pcVar18 = pcVar17;
    } while (pcVar17 != pcVar16);
    goto LAB_105dc4cb4;
  }
  pcVar17 = (char *)(((ulong)pcVar25 & 0xfffffffffffffff0) + 0x10);
  pcVar19 = pcVar17;
  if (pcVar17 <= pcVar25 + 1) {
    pcVar19 = pcVar25 + 1;
  }
  uVar23 = (long)pcVar19 - (long)pcVar25;
  if (uVar23 < 8) {
    lVar22 = 0;
    pcVar19 = pcVar25;
LAB_105dc4f70:
    do {
      pcVar25 = pcVar19 + 1;
      if (*pcVar19 == '\n') {
        lVar22 = lVar22 + 1;
      }
      pcVar19 = pcVar25;
    } while (pcVar25 < pcVar17);
  }
  else if (uVar23 < 0x20) {
    uVar24 = 0;
    lVar22 = 0;
LAB_105dc4ea4:
    uVar26 = uVar23 & 0xfffffffffffffff8;
    pcVar19 = pcVar25 + uVar26;
    lVar15 = 0;
    lVar116 = 0;
    lVar118 = 0;
    lVar20 = uVar24 - uVar26;
    lVar124 = 0;
    lVar109 = 0;
    lVar117 = 0;
    lVar119 = 0;
    pcVar25 = pcVar25 + uVar24;
    do {
      uVar126 = *(undefined8 *)pcVar25;
      cVar127 = -((char)((ulong)uVar126 >> 8) == '\n');
      cVar128 = -((char)((ulong)uVar126 >> 0x28) == '\n');
      uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar126 == '\n'))) & 0xff00ff;
      uVar7 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
      uVar8 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)uVar126
                                                                                   >> 0x20) == '\n')
                                                    )) & 0xffff0000ffff;
      lVar117 = lVar117 + (ulong)(-((char)((ulong)uVar126 >> 0x30) == '\n') & 1);
      lVar119 = lVar119 + (ulong)(-((char)((ulong)uVar126 >> 0x38) == '\n') & 1);
      lVar124 = lVar124 + (ulong)((byte)uVar8 & 1);
      lVar109 = lVar109 + (ulong)((byte)(uVar8 >> 0x20) & 1);
      lVar15 = lVar15 + (ulong)(-((char)((ulong)uVar126 >> 0x10) == '\n') & 1);
      lVar116 = lVar116 + (ulong)(-((char)((ulong)uVar126 >> 0x18) == '\n') & 1);
      lVar22 = lVar22 + (ulong)((byte)uVar7 & 1);
      lVar118 = lVar118 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar20 = lVar20 + 8;
      pcVar25 = pcVar25 + 8;
    } while (lVar20 != 0);
    lVar22 = lVar22 + lVar124 + lVar15 + lVar117 + lVar118 + lVar109 + lVar116 + lVar119;
    if (uVar23 != uVar26) goto LAB_105dc4f70;
  }
  else {
    lVar20 = 0;
    lVar22 = 0;
    uVar24 = uVar23 & 0xffffffffffffffe0;
    uVar75 = 0;
    uVar77 = 0;
    uVar79 = 0;
    uVar81 = 0;
    uVar83 = 0;
    uVar85 = 0;
    uVar87 = 0;
    uVar89 = 0;
    uVar91 = 0;
    uVar93 = 0;
    uVar95 = 0;
    uVar97 = 0;
    uVar99 = 0;
    uVar101 = 0;
    uVar103 = 0;
    uVar105 = 0;
    pcVar19 = pcVar25 + 0x10;
    lVar15 = 0;
    lVar116 = 0;
    lVar134 = 0;
    lVar135 = 0;
    lVar118 = 0;
    lVar124 = 0;
    lVar119 = 0;
    lVar125 = 0;
    lVar109 = 0;
    lVar117 = 0;
    lVar138 = 0;
    lVar139 = 0;
    lVar132 = 0;
    lVar133 = 0;
    lVar142 = 0;
    lVar143 = 0;
    lVar140 = 0;
    lVar141 = 0;
    lVar148 = 0;
    lVar149 = 0;
    lVar136 = 0;
    lVar137 = 0;
    lVar146 = 0;
    lVar147 = 0;
    lVar144 = 0;
    lVar145 = 0;
    lVar150 = 0;
    lVar151 = 0;
    uVar26 = uVar24;
    do {
      uVar154 = *(undefined8 *)(pcVar19 + -8);
      uVar153 = *(undefined8 *)(pcVar19 + -0x10);
      uVar44 = *(undefined8 *)(pcVar19 + 8);
      uVar126 = *(undefined8 *)pcVar19;
      cVar127 = -((char)((ulong)uVar153 >> 8) == '\n');
      cVar128 = -((char)((ulong)uVar153 >> 0x28) == '\n');
      cVar53 = -((char)((ulong)uVar154 >> 8) == '\n');
      cVar54 = -((char)((ulong)uVar154 >> 0x28) == '\n');
      uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar153 == '\n'))) & 0xff00ff;
      uVar9 = CONCAT12(cVar53,CONCAT11(cVar53,-((char)uVar154 == '\n'))) & 0xff00ff;
      uVar7 = (uint6)CONCAT14(cVar54,(uint)CONCAT12(cVar54,(ushort)(byte)-((char)((ulong)uVar154 >>
                                                                                 0x20) == '\n'))) &
              0xffff0000ffff;
      lVar138 = lVar138 + (ulong)(-((char)((ulong)uVar154 >> 0x30) == '\n') & 1);
      lVar139 = lVar139 + (ulong)(-((char)((ulong)uVar154 >> 0x38) == '\n') & 1);
      uVar8 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)uVar153
                                                                                   >> 0x20) == '\n')
                                                    )) & 0xffff0000ffff;
      uVar10 = (uint6)CONCAT14((char)(uVar9 >> 0x10),(uint)uVar9) & 0xffff0000ffff;
      lVar109 = lVar109 + (ulong)((byte)uVar7 & 1);
      lVar117 = lVar117 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar119 = lVar119 + (ulong)(-((char)((ulong)uVar154 >> 0x10) == '\n') & 1);
      lVar125 = lVar125 + (ulong)(-((char)((ulong)uVar154 >> 0x18) == '\n') & 1);
      lVar134 = lVar134 + (ulong)(-((char)((ulong)uVar153 >> 0x30) == '\n') & 1);
      lVar135 = lVar135 + (ulong)(-((char)((ulong)uVar153 >> 0x38) == '\n') & 1);
      uVar7 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
      lVar118 = lVar118 + (ulong)((byte)uVar10 & 1);
      lVar124 = lVar124 + (ulong)((byte)(uVar10 >> 0x20) & 1);
      cVar127 = -((char)((ulong)uVar126 >> 8) == '\n');
      cVar128 = -((char)((ulong)uVar126 >> 0x28) == '\n');
      cVar53 = -((char)((ulong)uVar44 >> 8) == '\n');
      cVar54 = -((char)((ulong)uVar44 >> 0x28) == '\n');
      lVar15 = lVar15 + (ulong)((byte)uVar8 & 1);
      lVar116 = lVar116 + (ulong)((byte)(uVar8 >> 0x20) & 1);
      uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar126 == '\n'))) & 0xff00ff;
      uVar9 = CONCAT12(cVar53,CONCAT11(cVar53,-((char)uVar44 == '\n'))) & 0xff00ff;
      lVar152 = CONCAT17(uVar89,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar83,CONCAT13(uVar81,
                                                  CONCAT12(uVar79,CONCAT11(uVar77,uVar75))))))) +
                (ulong)(-((char)((ulong)uVar153 >> 0x10) == '\n') & 1);
      uVar75 = (undefined1)lVar152;
      uVar77 = (undefined1)((ulong)lVar152 >> 8);
      uVar79 = (undefined1)((ulong)lVar152 >> 0x10);
      uVar81 = (undefined1)((ulong)lVar152 >> 0x18);
      uVar83 = (undefined1)((ulong)lVar152 >> 0x20);
      uVar85 = (undefined1)((ulong)lVar152 >> 0x28);
      uVar87 = (undefined1)((ulong)lVar152 >> 0x30);
      uVar89 = (undefined1)((ulong)lVar152 >> 0x38);
      lVar4 = CONCAT17(uVar105,CONCAT16(uVar103,CONCAT15(uVar101,CONCAT14(uVar99,CONCAT13(uVar97,
                                                  CONCAT12(uVar95,CONCAT11(uVar93,uVar91))))))) +
              (ulong)(-((char)((ulong)uVar153 >> 0x18) == '\n') & 1);
      uVar91 = (undefined1)lVar4;
      uVar93 = (undefined1)((ulong)lVar4 >> 8);
      uVar95 = (undefined1)((ulong)lVar4 >> 0x10);
      uVar97 = (undefined1)((ulong)lVar4 >> 0x18);
      uVar99 = (undefined1)((ulong)lVar4 >> 0x20);
      uVar101 = (undefined1)((ulong)lVar4 >> 0x28);
      uVar103 = (undefined1)((ulong)lVar4 >> 0x30);
      uVar105 = (undefined1)((ulong)lVar4 >> 0x38);
      uVar8 = (uint6)CONCAT14(cVar54,(uint)CONCAT12(cVar54,(ushort)(byte)-((char)((ulong)uVar44 >>
                                                                                 0x20) == '\n'))) &
              0xffff0000ffff;
      lVar20 = lVar20 + (ulong)((byte)uVar7 & 1);
      lVar22 = lVar22 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar150 = lVar150 + (ulong)(-((char)((ulong)uVar44 >> 0x30) == '\n') & 1);
      lVar151 = lVar151 + (ulong)(-((char)((ulong)uVar44 >> 0x38) == '\n') & 1);
      uVar7 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)uVar126
                                                                                   >> 0x20) == '\n')
                                                    )) & 0xffff0000ffff;
      uVar10 = (uint6)CONCAT14((char)(uVar9 >> 0x10),(uint)uVar9) & 0xffff0000ffff;
      lVar144 = lVar144 + (ulong)((byte)uVar8 & 1);
      lVar145 = lVar145 + (ulong)((byte)(uVar8 >> 0x20) & 1);
      lVar146 = lVar146 + (ulong)(-((char)((ulong)uVar44 >> 0x10) == '\n') & 1);
      lVar147 = lVar147 + (ulong)(-((char)((ulong)uVar44 >> 0x18) == '\n') & 1);
      lVar148 = lVar148 + (ulong)(-((char)((ulong)uVar126 >> 0x30) == '\n') & 1);
      lVar149 = lVar149 + (ulong)(-((char)((ulong)uVar126 >> 0x38) == '\n') & 1);
      lVar136 = lVar136 + (ulong)((byte)uVar10 & 1);
      lVar137 = lVar137 + (ulong)((byte)(uVar10 >> 0x20) & 1);
      uVar8 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
      lVar140 = lVar140 + (ulong)((byte)uVar7 & 1);
      lVar141 = lVar141 + (ulong)((byte)(uVar7 >> 0x20) & 1);
      lVar142 = lVar142 + (ulong)(-((char)((ulong)uVar126 >> 0x10) == '\n') & 1);
      lVar143 = lVar143 + (ulong)(-((char)((ulong)uVar126 >> 0x18) == '\n') & 1);
      lVar132 = lVar132 + (ulong)((byte)uVar8 & 1);
      lVar133 = lVar133 + (ulong)((byte)(uVar8 >> 0x20) & 1);
      pcVar19 = pcVar19 + 0x20;
      uVar26 = uVar26 - 0x20;
    } while (uVar26 != 0);
    lVar22 = lVar132 + lVar20 + lVar136 + lVar118 + lVar140 + lVar15 + lVar144 + lVar109 +
             lVar142 + lVar152 + lVar146 + lVar119 + lVar148 + lVar134 + lVar150 + lVar138 +
             lVar133 + lVar22 + lVar137 + lVar124 + lVar141 + lVar116 + lVar145 + lVar117 +
             lVar143 + lVar4 + lVar147 + lVar125 + lVar149 + lVar135 + lVar151 + lVar139;
    if (uVar23 != uVar24) {
      if ((uVar23 & 0x18) == 0) {
        pcVar19 = pcVar25 + uVar24;
        goto LAB_105dc4f70;
      }
      goto LAB_105dc4ea4;
    }
  }
  if ((char *)0x3e < pcVar21) {
    for (; pcVar17 <= pcVar16 + -0x40; pcVar17 = pcVar17 + 0x40) {
      uVar44 = *(undefined8 *)(pcVar17 + 8);
      uVar126 = *(undefined8 *)pcVar17;
      uVar45 = *(undefined8 *)(pcVar17 + 0x38);
      uVar32 = *(undefined8 *)(pcVar17 + 0x30);
      uVar29 = CONCAT11(-(pcVar17[0x11] == '\n'),-(pcVar17[0x10] == '\n'));
      uVar30 = CONCAT13(-(pcVar17[0x13] == '\n'),CONCAT12(-(pcVar17[0x12] == '\n'),uVar29));
      uVar31 = CONCAT15(-(pcVar17[0x15] == '\n'),CONCAT14(-(pcVar17[0x14] == '\n'),uVar30));
      uVar153 = CONCAT17(-(pcVar17[0x17] == '\n'),CONCAT16(-(pcVar17[0x16] == '\n'),uVar31));
      auVar111._0_10_ =
           CONCAT19(-(pcVar17[0x19] == '\n'),CONCAT18(-(pcVar17[0x18] == '\n'),uVar153));
      auVar111[10] = -(pcVar17[0x1a] == '\n');
      auVar111[0xb] = -(pcVar17[0x1b] == '\n');
      auVar113[0xc] = -(pcVar17[0x1c] == '\n');
      auVar113._0_12_ = auVar111;
      auVar113[0xd] = -(pcVar17[0x1d] == '\n');
      auVar114[0xe] = -(pcVar17[0x1e] == '\n');
      auVar114._0_14_ = auVar113;
      auVar114[0xf] = -(pcVar17[0x1f] == '\n');
      uVar41 = CONCAT11(-(pcVar17[0x21] == '\n'),-(pcVar17[0x20] == '\n'));
      uVar42 = CONCAT13(-(pcVar17[0x23] == '\n'),CONCAT12(-(pcVar17[0x22] == '\n'),uVar41));
      uVar43 = CONCAT15(-(pcVar17[0x25] == '\n'),CONCAT14(-(pcVar17[0x24] == '\n'),uVar42));
      uVar154 = CONCAT17(-(pcVar17[0x27] == '\n'),CONCAT16(-(pcVar17[0x26] == '\n'),uVar43));
      auVar120._0_10_ =
           CONCAT19(-(pcVar17[0x29] == '\n'),CONCAT18(-(pcVar17[0x28] == '\n'),uVar154));
      auVar120[10] = -(pcVar17[0x2a] == '\n');
      auVar120[0xb] = -(pcVar17[0x2b] == '\n');
      auVar121[0xc] = -(pcVar17[0x2c] == '\n');
      auVar121._0_12_ = auVar120;
      auVar121[0xd] = -(pcVar17[0x2d] == '\n');
      auVar122[0xe] = -(pcVar17[0x2e] == '\n');
      auVar122._0_14_ = auVar121;
      auVar122[0xf] = -(pcVar17[0x2f] == '\n');
      uVar106 = CONCAT11(-((char)((ulong)uVar32 >> 8) == '\n'),-((char)uVar32 == '\n'));
      uVar107 = CONCAT13(-((char)((ulong)uVar32 >> 0x18) == '\n'),
                         CONCAT12(-((char)((ulong)uVar32 >> 0x10) == '\n'),uVar106));
      uVar108 = CONCAT15(-((char)((ulong)uVar32 >> 0x28) == '\n'),
                         CONCAT14(-((char)((ulong)uVar32 >> 0x20) == '\n'),uVar107));
      uVar129 = CONCAT11(-((char)((ulong)uVar45 >> 8) == '\n'),-((char)uVar45 == '\n'));
      uVar130 = CONCAT13(-((char)((ulong)uVar45 >> 0x18) == '\n'),
                         CONCAT12(-((char)((ulong)uVar45 >> 0x10) == '\n'),uVar129));
      uVar131 = CONCAT15(-((char)((ulong)uVar45 >> 0x28) == '\n'),
                         CONCAT14(-((char)((ulong)uVar45 >> 0x20) == '\n'),uVar130));
      uVar23 = CONCAT17((char)(auVar122._14_2_ >> 4),
                        CONCAT16((char)(auVar121._12_2_ >> 4),
                                 CONCAT15((char)(auVar120._10_2_ >> 4),
                                          CONCAT14((char)(ushort)((unkuint10)auVar120._0_10_ >> 0x44
                                                                 ),
                                                   CONCAT13((char)(ushort)((ulong)uVar154 >> 0x34),
                                                            CONCAT12((char)(ushort)((uint6)uVar43 >>
                                                                                   0x24),
                                                                     CONCAT11((char)(ushort)((uint)
                                                  uVar42 >> 0x14),(char)(uVar41 >> 4)))))))) &
               0x8888888888888888;
      auVar115[0] = POPCOUNT((char)uVar23);
      auVar115[1] = POPCOUNT((char)(uVar23 >> 8));
      auVar115[2] = POPCOUNT((char)(uVar23 >> 0x10));
      auVar115[3] = POPCOUNT((char)(uVar23 >> 0x18));
      auVar115[4] = POPCOUNT((char)(uVar23 >> 0x20));
      auVar115[5] = POPCOUNT((char)(uVar23 >> 0x28));
      auVar115[6] = POPCOUNT((char)(uVar23 >> 0x30));
      auVar115[7] = POPCOUNT((char)(uVar23 >> 0x38));
      auVar115[8] = POPCOUNT((byte)(uVar106 >> 4) & 0x88);
      auVar115[9] = POPCOUNT((byte)(ushort)((uint)uVar107 >> 0x14) & 0x88);
      auVar115[10] = POPCOUNT((byte)(ushort)((uint6)uVar108 >> 0x24) & 0x88);
      auVar115[0xb] =
           POPCOUNT((byte)(ushort)(CONCAT17(-((char)((ulong)uVar32 >> 0x38) == '\n'),
                                            CONCAT16(-((char)((ulong)uVar32 >> 0x30) == '\n'),
                                                     uVar108)) >> 0x34) & 0x88);
      auVar115[0xc] = POPCOUNT((byte)(uVar129 >> 4) & 0x88);
      auVar115[0xd] = POPCOUNT((byte)(ushort)((uint)uVar130 >> 0x14) & 0x88);
      auVar115[0xe] = POPCOUNT((byte)(ushort)((uint6)uVar131 >> 0x24) & 0x88);
      auVar115[0xf] =
           POPCOUNT((byte)(ushort)(CONCAT17(-((char)((ulong)uVar45 >> 0x38) == '\n'),
                                            CONCAT16(-((char)((ulong)uVar45 >> 0x30) == '\n'),
                                                     uVar131)) >> 0x34) & 0x88);
      auVar1[8] = 1;
      auVar1._0_8_ = 0x101010101010101;
      auVar1[9] = 1;
      auVar1[10] = 1;
      auVar1[0xb] = 1;
      auVar1[0xc] = 1;
      auVar1[0xd] = 1;
      auVar1[0xe] = 1;
      auVar1[0xf] = 1;
      auVar123 = NEON_udot(auVar1,auVar115,1);
      auVar2[8] = 1;
      auVar2._0_8_ = 0x101010101010101;
      auVar2[9] = 1;
      auVar2[10] = 1;
      auVar2[0xb] = 1;
      auVar2[0xc] = 1;
      auVar2[0xd] = 1;
      auVar2[0xe] = 1;
      auVar2[0xf] = 1;
      auVar3[1] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar126 >> 0x18) == '\n'),
                                           -((char)((ulong)uVar126 >> 0x10) == '\n')) >> 4) & 0x88);
      auVar3[0] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar126 >> 8) == '\n'),
                                           -((char)uVar126 == '\n')) >> 4) & 0x88);
      auVar3[2] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar126 >> 0x28) == '\n'),
                                           -((char)((ulong)uVar126 >> 0x20) == '\n')) >> 4) & 0x88);
      auVar3[3] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar126 >> 0x38) == '\n'),
                                           -((char)((ulong)uVar126 >> 0x30) == '\n')) >> 4) & 0x88);
      auVar3[4] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar44 >> 8) == '\n'),
                                           -((char)uVar44 == '\n')) >> 4) & 0x88);
      auVar3[5] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar44 >> 0x18) == '\n'),
                                           -((char)((ulong)uVar44 >> 0x10) == '\n')) >> 4) & 0x88);
      auVar3[6] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar44 >> 0x28) == '\n'),
                                           -((char)((ulong)uVar44 >> 0x20) == '\n')) >> 4) & 0x88);
      auVar3[7] = POPCOUNT((byte)(CONCAT11(-((char)((ulong)uVar44 >> 0x38) == '\n'),
                                           -((char)((ulong)uVar44 >> 0x30) == '\n')) >> 4) & 0x88);
      auVar3[8] = POPCOUNT((byte)(uVar29 >> 4) & 0x88);
      auVar3[9] = POPCOUNT((byte)(ushort)((uint)uVar30 >> 0x14) & 0x88);
      auVar3[10] = POPCOUNT((byte)(ushort)((uint6)uVar31 >> 0x24) & 0x88);
      auVar3[0xb] = POPCOUNT((byte)(ushort)((ulong)uVar153 >> 0x34) & 0x88);
      auVar3[0xc] = POPCOUNT((byte)(ushort)((unkuint10)auVar111._0_10_ >> 0x44) & 0x88);
      auVar3[0xd] = POPCOUNT((byte)(auVar111._10_2_ >> 4) & 0x88);
      auVar3[0xe] = POPCOUNT((byte)(auVar113._12_2_ >> 4) & 0x88);
      auVar3[0xf] = POPCOUNT((byte)(auVar114._14_2_ >> 4) & 0x88);
      auVar155 = NEON_udot(auVar2,auVar3,1);
      lVar22 = (ulong)auVar155._0_4_ + (ulong)auVar155._4_4_ +
               (ulong)auVar123._0_4_ + (ulong)auVar123._4_4_ +
               (ulong)auVar155._8_4_ + (ulong)auVar155._12_4_ +
               (ulong)auVar123._8_4_ + (ulong)auVar123._12_4_ + lVar22;
    }
  }
  for (; pcVar17 <= pcVar16 + -0x10; pcVar17 = pcVar17 + 0x10) {
    uVar44 = *(undefined8 *)(pcVar17 + 8);
    uVar126 = *(undefined8 *)pcVar17;
    uVar29 = CONCAT11(-((char)((ulong)uVar126 >> 8) == '\n'),-((char)uVar126 == '\n'));
    uVar30 = CONCAT13(-((char)((ulong)uVar126 >> 0x18) == '\n'),
                      CONCAT12(-((char)((ulong)uVar126 >> 0x10) == '\n'),uVar29));
    uVar31 = CONCAT15(-((char)((ulong)uVar126 >> 0x28) == '\n'),
                      CONCAT14(-((char)((ulong)uVar126 >> 0x20) == '\n'),uVar30));
    uVar41 = CONCAT11(-((char)((ulong)uVar44 >> 8) == '\n'),-((char)uVar44 == '\n'));
    uVar42 = CONCAT13(-((char)((ulong)uVar44 >> 0x18) == '\n'),
                      CONCAT12(-((char)((ulong)uVar44 >> 0x10) == '\n'),uVar41));
    uVar43 = CONCAT15(-((char)((ulong)uVar44 >> 0x28) == '\n'),
                      CONCAT14(-((char)((ulong)uVar44 >> 0x20) == '\n'),uVar42));
    uVar23 = CONCAT17((char)(ushort)(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == '\n'),
                                              CONCAT16(-((char)((ulong)uVar44 >> 0x30) == '\n'),
                                                       uVar43)) >> 0x34),
                      CONCAT16((char)(ushort)((uint6)uVar43 >> 0x24),
                               CONCAT15((char)(ushort)((uint)uVar42 >> 0x14),
                                        CONCAT14((char)(uVar41 >> 4),
                                                 CONCAT13((char)(ushort)(CONCAT17(-((char)((ulong)
                                                  uVar126 >> 0x38) == '\n'),
                                                  CONCAT16(-((char)((ulong)uVar126 >> 0x30) == '\n')
                                                           ,uVar31)) >> 0x34),
                                                  CONCAT12((char)(ushort)((uint6)uVar31 >> 0x24),
                                                           CONCAT11((char)(ushort)((uint)uVar30 >>
                                                                                  0x14),
                                                                    (char)(uVar29 >> 4)))))))) &
             0x8888888888888888;
    cVar127 = POPCOUNT((char)(uVar23 >> 8));
    cVar128 = POPCOUNT((char)(uVar23 >> 0x10));
    cVar53 = POPCOUNT((char)(uVar23 >> 0x18));
    cVar54 = POPCOUNT((char)(uVar23 >> 0x20));
    cVar55 = POPCOUNT((char)(uVar23 >> 0x28));
    cVar56 = POPCOUNT((char)(uVar23 >> 0x30));
    cVar57 = POPCOUNT((char)(uVar23 >> 0x38));
    lVar22 = CONCAT71((int7)(CONCAT17(cVar57,CONCAT16(cVar56,CONCAT15(cVar55,CONCAT14(cVar54,
                                                  CONCAT13(cVar53,CONCAT12(cVar128,CONCAT11(cVar127,
                                                  POPCOUNT((char)uVar23)))))))) >> 8),
                      POPCOUNT((char)uVar23) + cVar127 + cVar128 + cVar53 + cVar54 + cVar55 + cVar56
                      + cVar57) + lVar22;
  }
  if (pcVar17 < pcVar16) {
    pcVar18 = pcVar18 + (1 - (long)pcVar17);
    if (pcVar18 < (char *)0x8) {
      lVar20 = 0;
      pcVar25 = pcVar17;
    }
    else {
      if (pcVar18 < (char *)0x20) {
        pcVar19 = (char *)0x0;
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        lVar15 = 0;
        pcVar19 = (char *)((ulong)pcVar18 & 0xffffffffffffffe0);
        uVar75 = 0;
        uVar77 = 0;
        uVar79 = 0;
        uVar81 = 0;
        uVar83 = 0;
        uVar85 = 0;
        uVar87 = 0;
        uVar89 = 0;
        uVar91 = 0;
        uVar93 = 0;
        uVar95 = 0;
        uVar97 = 0;
        uVar99 = 0;
        uVar101 = 0;
        uVar103 = 0;
        uVar105 = 0;
        pcVar25 = pcVar17 + 0x10;
        lVar116 = 0;
        lVar118 = 0;
        lVar135 = 0;
        lVar136 = 0;
        lVar124 = 0;
        lVar109 = 0;
        lVar125 = 0;
        lVar132 = 0;
        lVar117 = 0;
        lVar119 = 0;
        lVar139 = 0;
        lVar140 = 0;
        lVar133 = 0;
        lVar134 = 0;
        lVar143 = 0;
        lVar144 = 0;
        lVar141 = 0;
        lVar142 = 0;
        lVar149 = 0;
        lVar150 = 0;
        lVar137 = 0;
        lVar138 = 0;
        lVar147 = 0;
        lVar148 = 0;
        lVar145 = 0;
        lVar146 = 0;
        lVar151 = 0;
        lVar152 = 0;
        pcVar21 = pcVar19;
        do {
          uVar154 = *(undefined8 *)(pcVar25 + -8);
          uVar153 = *(undefined8 *)(pcVar25 + -0x10);
          uVar44 = *(undefined8 *)(pcVar25 + 8);
          uVar126 = *(undefined8 *)pcVar25;
          cVar127 = -((char)((ulong)uVar153 >> 8) == '\n');
          cVar128 = -((char)((ulong)uVar153 >> 0x28) == '\n');
          cVar53 = -((char)((ulong)uVar154 >> 8) == '\n');
          cVar54 = -((char)((ulong)uVar154 >> 0x28) == '\n');
          uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar153 == '\n'))) & 0xff00ff;
          uVar9 = CONCAT12(cVar53,CONCAT11(cVar53,-((char)uVar154 == '\n'))) & 0xff00ff;
          uVar7 = (uint6)CONCAT14(cVar54,(uint)CONCAT12(cVar54,(ushort)(byte)-((char)((ulong)uVar154
                                                                                     >> 0x20) ==
                                                                              '\n'))) &
                  0xffff0000ffff;
          lVar139 = lVar139 + (ulong)(-((char)((ulong)uVar154 >> 0x30) == '\n') & 1);
          lVar140 = lVar140 + (ulong)(-((char)((ulong)uVar154 >> 0x38) == '\n') & 1);
          uVar8 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)
                                                  uVar153 >> 0x20) == '\n'))) & 0xffff0000ffff;
          uVar10 = (uint6)CONCAT14((char)(uVar9 >> 0x10),(uint)uVar9) & 0xffff0000ffff;
          lVar117 = lVar117 + (ulong)((byte)uVar7 & 1);
          lVar119 = lVar119 + (ulong)((byte)(uVar7 >> 0x20) & 1);
          lVar125 = lVar125 + (ulong)(-((char)((ulong)uVar154 >> 0x10) == '\n') & 1);
          lVar132 = lVar132 + (ulong)(-((char)((ulong)uVar154 >> 0x18) == '\n') & 1);
          lVar135 = lVar135 + (ulong)(-((char)((ulong)uVar153 >> 0x30) == '\n') & 1);
          lVar136 = lVar136 + (ulong)(-((char)((ulong)uVar153 >> 0x38) == '\n') & 1);
          uVar7 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
          lVar124 = lVar124 + (ulong)((byte)uVar10 & 1);
          lVar109 = lVar109 + (ulong)((byte)(uVar10 >> 0x20) & 1);
          cVar127 = -((char)((ulong)uVar126 >> 8) == '\n');
          cVar128 = -((char)((ulong)uVar126 >> 0x28) == '\n');
          cVar53 = -((char)((ulong)uVar44 >> 8) == '\n');
          cVar54 = -((char)((ulong)uVar44 >> 0x28) == '\n');
          lVar116 = lVar116 + (ulong)((byte)uVar8 & 1);
          lVar118 = lVar118 + (ulong)((byte)(uVar8 >> 0x20) & 1);
          uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar126 == '\n'))) & 0xff00ff;
          uVar9 = CONCAT12(cVar53,CONCAT11(cVar53,-((char)uVar44 == '\n'))) & 0xff00ff;
          lVar4 = CONCAT17(uVar89,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar83,CONCAT13(uVar81,
                                                  CONCAT12(uVar79,CONCAT11(uVar77,uVar75))))))) +
                  (ulong)(-((char)((ulong)uVar153 >> 0x10) == '\n') & 1);
          uVar75 = (undefined1)lVar4;
          uVar77 = (undefined1)((ulong)lVar4 >> 8);
          uVar79 = (undefined1)((ulong)lVar4 >> 0x10);
          uVar81 = (undefined1)((ulong)lVar4 >> 0x18);
          uVar83 = (undefined1)((ulong)lVar4 >> 0x20);
          uVar85 = (undefined1)((ulong)lVar4 >> 0x28);
          uVar87 = (undefined1)((ulong)lVar4 >> 0x30);
          uVar89 = (undefined1)((ulong)lVar4 >> 0x38);
          lVar5 = CONCAT17(uVar105,CONCAT16(uVar103,CONCAT15(uVar101,CONCAT14(uVar99,CONCAT13(uVar97
                                                  ,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))))))) +
                  (ulong)(-((char)((ulong)uVar153 >> 0x18) == '\n') & 1);
          uVar91 = (undefined1)lVar5;
          uVar93 = (undefined1)((ulong)lVar5 >> 8);
          uVar95 = (undefined1)((ulong)lVar5 >> 0x10);
          uVar97 = (undefined1)((ulong)lVar5 >> 0x18);
          uVar99 = (undefined1)((ulong)lVar5 >> 0x20);
          uVar101 = (undefined1)((ulong)lVar5 >> 0x28);
          uVar103 = (undefined1)((ulong)lVar5 >> 0x30);
          uVar105 = (undefined1)((ulong)lVar5 >> 0x38);
          uVar8 = (uint6)CONCAT14(cVar54,(uint)CONCAT12(cVar54,(ushort)(byte)-((char)((ulong)uVar44
                                                                                     >> 0x20) ==
                                                                              '\n'))) &
                  0xffff0000ffff;
          lVar20 = lVar20 + (ulong)((byte)uVar7 & 1);
          lVar15 = lVar15 + (ulong)((byte)(uVar7 >> 0x20) & 1);
          lVar151 = lVar151 + (ulong)(-((char)((ulong)uVar44 >> 0x30) == '\n') & 1);
          lVar152 = lVar152 + (ulong)(-((char)((ulong)uVar44 >> 0x38) == '\n') & 1);
          uVar7 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)
                                                  uVar126 >> 0x20) == '\n'))) & 0xffff0000ffff;
          uVar10 = (uint6)CONCAT14((char)(uVar9 >> 0x10),(uint)uVar9) & 0xffff0000ffff;
          lVar145 = lVar145 + (ulong)((byte)uVar8 & 1);
          lVar146 = lVar146 + (ulong)((byte)(uVar8 >> 0x20) & 1);
          lVar147 = lVar147 + (ulong)(-((char)((ulong)uVar44 >> 0x10) == '\n') & 1);
          lVar148 = lVar148 + (ulong)(-((char)((ulong)uVar44 >> 0x18) == '\n') & 1);
          lVar149 = lVar149 + (ulong)(-((char)((ulong)uVar126 >> 0x30) == '\n') & 1);
          lVar150 = lVar150 + (ulong)(-((char)((ulong)uVar126 >> 0x38) == '\n') & 1);
          lVar137 = lVar137 + (ulong)((byte)uVar10 & 1);
          lVar138 = lVar138 + (ulong)((byte)(uVar10 >> 0x20) & 1);
          uVar8 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
          lVar141 = lVar141 + (ulong)((byte)uVar7 & 1);
          lVar142 = lVar142 + (ulong)((byte)(uVar7 >> 0x20) & 1);
          lVar143 = lVar143 + (ulong)(-((char)((ulong)uVar126 >> 0x10) == '\n') & 1);
          lVar144 = lVar144 + (ulong)(-((char)((ulong)uVar126 >> 0x18) == '\n') & 1);
          lVar133 = lVar133 + (ulong)((byte)uVar8 & 1);
          lVar134 = lVar134 + (ulong)((byte)(uVar8 >> 0x20) & 1);
          pcVar25 = pcVar25 + 0x20;
          pcVar21 = pcVar21 + -0x20;
        } while (pcVar21 != (char *)0x0);
        lVar20 = lVar133 + lVar20 + lVar137 + lVar124 + lVar141 + lVar116 + lVar145 + lVar117 +
                 lVar143 + lVar4 + lVar147 + lVar125 + lVar149 + lVar135 + lVar151 + lVar139 +
                 lVar134 + lVar15 + lVar138 + lVar109 + lVar142 + lVar118 + lVar146 + lVar119 +
                 lVar144 + lVar5 + lVar148 + lVar132 + lVar150 + lVar136 + lVar152 + lVar140;
        if (pcVar18 == pcVar19) goto LAB_105dc5320;
        if (((ulong)pcVar18 & 0x18) == 0) {
          pcVar25 = pcVar17 + (long)pcVar19;
          goto LAB_105dc530c;
        }
      }
      pcVar21 = (char *)((ulong)pcVar18 & 0xfffffffffffffff8);
      pcVar25 = pcVar17 + (long)pcVar21;
      lVar116 = 0;
      lVar118 = 0;
      lVar124 = 0;
      lVar15 = (long)pcVar19 - (long)pcVar21;
      lVar109 = 0;
      lVar117 = 0;
      lVar119 = 0;
      lVar125 = 0;
      pcVar17 = pcVar17 + (long)pcVar19;
      do {
        uVar126 = *(undefined8 *)pcVar17;
        cVar127 = -((char)((ulong)uVar126 >> 8) == '\n');
        cVar128 = -((char)((ulong)uVar126 >> 0x28) == '\n');
        uVar6 = CONCAT12(cVar127,CONCAT11(cVar127,-((char)uVar126 == '\n'))) & 0xff00ff;
        uVar7 = (uint6)CONCAT14((char)(uVar6 >> 0x10),(uint)uVar6) & 0xffff0000ffff;
        uVar8 = (uint6)CONCAT14(cVar128,(uint)CONCAT12(cVar128,(ushort)(byte)-((char)((ulong)uVar126
                                                                                     >> 0x20) ==
                                                                              '\n'))) &
                0xffff0000ffff;
        lVar119 = lVar119 + (ulong)(-((char)((ulong)uVar126 >> 0x30) == '\n') & 1);
        lVar125 = lVar125 + (ulong)(-((char)((ulong)uVar126 >> 0x38) == '\n') & 1);
        lVar109 = lVar109 + (ulong)((byte)uVar8 & 1);
        lVar117 = lVar117 + (ulong)((byte)(uVar8 >> 0x20) & 1);
        lVar116 = lVar116 + (ulong)(-((char)((ulong)uVar126 >> 0x10) == '\n') & 1);
        lVar118 = lVar118 + (ulong)(-((char)((ulong)uVar126 >> 0x18) == '\n') & 1);
        lVar20 = lVar20 + (ulong)((byte)uVar7 & 1);
        lVar124 = lVar124 + (ulong)((byte)(uVar7 >> 0x20) & 1);
        lVar15 = lVar15 + 8;
        pcVar17 = pcVar17 + 8;
      } while (lVar15 != 0);
      lVar20 = lVar20 + lVar109 + lVar116 + lVar119 + lVar124 + lVar117 + lVar118 + lVar125;
      if (pcVar18 == pcVar21) goto LAB_105dc5320;
    }
LAB_105dc530c:
    do {
      pcVar17 = pcVar25 + 1;
      if (*pcVar25 == '\n') {
        lVar20 = lVar20 + 1;
      }
      pcVar25 = pcVar17;
    } while (pcVar17 != pcVar16);
  }
  else {
    lVar20 = 0;
  }
LAB_105dc5320:
  lVar20 = lVar20 + lVar22;
LAB_105dc4cb4:
  return (long *)(lVar20 + 1);
}

