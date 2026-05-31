
void __ZN6whoami2os6target63__LT_impl_u20_whoami__os__Target_u20_for_u20_whoami__os__Os_GT_8realname17hf5bf8f565708db3cE
               (long *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  byte bVar21;
  char cVar25;
  ushort uVar22;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  byte bVar30;
  char cVar31;
  byte bVar32;
  char cVar33;
  byte bVar34;
  char cVar35;
  byte bVar36;
  char cVar37;
  byte bVar38;
  byte bVar39;
  char cVar44;
  ushort uVar40;
  byte bVar45;
  char cVar46;
  byte bVar47;
  char cVar48;
  byte bVar49;
  char cVar50;
  byte bVar51;
  char cVar52;
  byte bVar53;
  char cVar54;
  byte bVar55;
  undefined8 uVar43;
  char cVar56;
  byte bVar57;
  byte bVar58;
  char cVar63;
  byte bVar64;
  char cVar65;
  byte bVar66;
  char cVar67;
  byte bVar68;
  char cVar69;
  byte bVar70;
  char cVar71;
  byte bVar72;
  char cVar73;
  byte bVar74;
  undefined8 uVar62;
  char cVar75;
  byte bVar76;
  byte bVar77;
  char cVar82;
  byte bVar83;
  char cVar84;
  byte bVar85;
  char cVar86;
  byte bVar87;
  char cVar88;
  byte bVar89;
  char cVar90;
  byte bVar91;
  char cVar92;
  byte bVar93;
  undefined8 uVar81;
  char cVar94;
  byte bVar95;
  undefined1 auVar96 [16];
  undefined8 auStack_8138 [11];
  undefined8 uStack_80e0;
  undefined8 uStack_70e0;
  undefined8 uStack_60e0;
  undefined8 uStack_50e0;
  char *apcStack_4138 [10];
  long lStack_40e8;
  undefined1 auStack_4098 [88];
  undefined8 uStack_4040;
  undefined8 uStack_3040;
  undefined8 uStack_2040;
  undefined8 uStack_1040;
  undefined1 auStack_98 [40];
  char *pcStack_70;
  long lStack_48;
  undefined4 uVar23;
  undefined6 uVar24;
  undefined4 uVar41;
  undefined6 uVar42;
  ushort uVar59;
  undefined4 uVar60;
  undefined6 uVar61;
  ushort uVar78;
  undefined4 uVar79;
  undefined6 uVar80;
  
  uStack_1040 = 0;
  uStack_2040 = 0;
  uStack_3040 = 0;
  uStack_4040 = 0;
  uVar5 = _geteuid();
  iVar4 = _getpwuid_r(uVar5,auStack_98,auStack_4098,0x4000,&lStack_48);
  if (iVar4 == 0) {
    if ((lStack_48 == 0) || (pcStack_70 == (char *)0x0)) {
      puVar10 = &UNK_109d2b386;
      uVar5 = 0xb;
    }
    else {
      lVar16 = 0;
      if (*pcStack_70 != ',' && *pcStack_70 != '\0') {
        do {
          lVar16 = lVar16 + 1;
        } while (pcStack_70[lVar16] != ',' && pcStack_70[lVar16] != '\0');
      }
      if (lVar16 != 0) {
        lVar8 = _malloc(lVar16);
        if (lVar8 != 0) {
          _memcpy(lVar8,pcStack_70,lVar16);
          *param_1 = lVar16;
          param_1[1] = lVar8;
          param_1[2] = lVar16;
          return;
        }
        func_0x0001087c9084(1,lVar16);
        uStack_50e0 = 0;
        uStack_60e0 = 0;
        uStack_70e0 = 0;
        uStack_80e0 = 0;
        uVar5 = _geteuid();
        puVar11 = auStack_8138;
        iVar4 = _getpwuid_r(uVar5,apcStack_4138,puVar11,0x4000,&lStack_40e8);
        if (iVar4 == 0) {
          if ((lStack_40e8 == 0) || (apcStack_4138[0] == (char *)0x0)) {
            puVar10 = &UNK_109d2b386;
            uVar5 = 0xb;
          }
          else {
            if (*apcStack_4138[0] != '\0') {
              lVar8 = _strlen(apcStack_4138[0] + 1);
              lVar16 = lVar8 + 1;
              if (lVar8 != -1) {
                lVar8 = _malloc(lVar16);
                if (lVar8 != 0) {
                  _memcpy(lVar8,apcStack_4138[0],lVar16);
                  *extraout_x8 = lVar16;
                  extraout_x8[1] = lVar8;
                  extraout_x8[2] = lVar16;
                  return;
                }
                auVar96 = func_0x0001087c9084(1,lVar16);
                uVar7 = auVar96._8_8_;
                pcVar9 = auVar96._0_8_;
                uVar17 = puVar11[1];
                if ((uVar17 == 0) || (uVar15 = puVar11[3], uVar15 == 0)) {
                  extraout_x8_00[1] = 0;
                  extraout_x8_00[2] = 0;
LAB_106260bd4:
                  uVar5 = 1;
                }
                else {
                  pcVar1 = pcVar9 + uVar7;
                  if (pcVar9 < pcVar1) {
                    pcVar12 = (char *)*puVar11;
                    pcVar14 = (char *)puVar11[2];
                    cVar2 = *pcVar12;
                    cVar3 = *pcVar14;
                    pcVar19 = pcVar9;
                    do {
                      if ((ulong)((long)pcVar1 - (long)pcVar19) < 0x10) {
                        while (*pcVar19 != cVar2 && *pcVar19 != cVar3) {
                          pcVar19 = pcVar19 + 1;
                          if (pcVar19 == pcVar1) goto LAB_106260de0;
                        }
LAB_106260d30:
                        uVar20 = (long)pcVar19 - (long)pcVar9;
                      }
                      else {
                        uVar43 = *(undefined8 *)(pcVar19 + 8);
                        uVar5 = *(undefined8 *)pcVar19;
                        cVar25 = (char)((ulong)uVar5 >> 8);
                        cVar27 = (char)((ulong)uVar5 >> 0x10);
                        cVar29 = (char)((ulong)uVar5 >> 0x18);
                        cVar31 = (char)((ulong)uVar5 >> 0x20);
                        cVar33 = (char)((ulong)uVar5 >> 0x28);
                        cVar35 = (char)((ulong)uVar5 >> 0x30);
                        cVar37 = (char)((ulong)uVar5 >> 0x38);
                        cVar44 = (char)((ulong)uVar43 >> 8);
                        cVar46 = (char)((ulong)uVar43 >> 0x10);
                        cVar48 = (char)((ulong)uVar43 >> 0x18);
                        cVar50 = (char)((ulong)uVar43 >> 0x20);
                        cVar52 = (char)((ulong)uVar43 >> 0x28);
                        cVar54 = (char)((ulong)uVar43 >> 0x30);
                        cVar56 = (char)((ulong)uVar43 >> 0x38);
                        uVar22 = CONCAT11(-(cVar2 == cVar25) | -(cVar3 == cVar25),
                                          -(cVar2 == (char)uVar5) | -(cVar3 == (char)uVar5));
                        uVar23 = CONCAT13(-(cVar2 == cVar29) | -(cVar3 == cVar29),
                                          CONCAT12(-(cVar2 == cVar27) | -(cVar3 == cVar27),uVar22));
                        uVar24 = CONCAT15(-(cVar2 == cVar33) | -(cVar3 == cVar33),
                                          CONCAT14(-(cVar2 == cVar31) | -(cVar3 == cVar31),uVar23));
                        uVar40 = CONCAT11(-(cVar2 == cVar44) | -(cVar3 == cVar44),
                                          -(cVar2 == (char)uVar43) | -(cVar3 == (char)uVar43));
                        uVar41 = CONCAT13(-(cVar2 == cVar48) | -(cVar3 == cVar48),
                                          CONCAT12(-(cVar2 == cVar46) | -(cVar3 == cVar46),uVar40));
                        uVar42 = CONCAT15(-(cVar2 == cVar52) | -(cVar3 == cVar52),
                                          CONCAT14(-(cVar2 == cVar50) | -(cVar3 == cVar50),uVar41));
                        uVar20 = CONCAT17((char)(ushort)(CONCAT17(-(cVar2 == cVar56) |
                                                                  -(cVar3 == cVar56),
                                                                  CONCAT16(-(cVar2 == cVar54) |
                                                                           -(cVar3 == cVar54),uVar42
                                                                          )) >> 0x34),
                                          CONCAT16((char)(ushort)((uint6)uVar42 >> 0x24),
                                                   CONCAT15((char)(ushort)((uint)uVar41 >> 0x14),
                                                            CONCAT14((char)(uVar40 >> 4),
                                                                     CONCAT13((char)(ushort)(
                                                  CONCAT17(-(cVar2 == cVar37) | -(cVar3 == cVar37),
                                                           CONCAT16(-(cVar2 == cVar35) |
                                                                    -(cVar3 == cVar35),uVar24)) >>
                                                  0x34),CONCAT12((char)(ushort)((uint6)uVar24 >>
                                                                               0x24),
                                                                 CONCAT11((char)(ushort)((uint)
                                                  uVar23 >> 0x14),(char)(uVar22 >> 4)))))))) &
                                 0x8888888888888888;
                        if (uVar20 == 0) {
                          pcVar13 = (char *)(((ulong)pcVar19 & 0xfffffffffffffff0) + 0x10);
                          if (0x1f < (ulong)((long)pcVar1 - (long)pcVar19)) {
                            for (; pcVar13 <= pcVar1 + -0x20; pcVar13 = pcVar13 + 0x20) {
                              uVar43 = *(undefined8 *)(pcVar13 + 8);
                              uVar5 = *(undefined8 *)pcVar13;
                              uVar81 = *(undefined8 *)(pcVar13 + 0x18);
                              uVar62 = *(undefined8 *)(pcVar13 + 0x10);
                              cVar25 = (char)((ulong)uVar5 >> 8);
                              cVar27 = (char)((ulong)uVar5 >> 0x10);
                              cVar29 = (char)((ulong)uVar5 >> 0x18);
                              cVar31 = (char)((ulong)uVar5 >> 0x20);
                              cVar33 = (char)((ulong)uVar5 >> 0x28);
                              cVar35 = (char)((ulong)uVar5 >> 0x30);
                              cVar37 = (char)((ulong)uVar5 >> 0x38);
                              cVar44 = (char)((ulong)uVar43 >> 8);
                              cVar46 = (char)((ulong)uVar43 >> 0x10);
                              cVar48 = (char)((ulong)uVar43 >> 0x18);
                              cVar50 = (char)((ulong)uVar43 >> 0x20);
                              cVar52 = (char)((ulong)uVar43 >> 0x28);
                              cVar54 = (char)((ulong)uVar43 >> 0x30);
                              cVar56 = (char)((ulong)uVar43 >> 0x38);
                              cVar63 = (char)((ulong)uVar62 >> 8);
                              cVar65 = (char)((ulong)uVar62 >> 0x10);
                              cVar67 = (char)((ulong)uVar62 >> 0x18);
                              cVar69 = (char)((ulong)uVar62 >> 0x20);
                              cVar71 = (char)((ulong)uVar62 >> 0x28);
                              cVar73 = (char)((ulong)uVar62 >> 0x30);
                              cVar75 = (char)((ulong)uVar62 >> 0x38);
                              cVar82 = (char)((ulong)uVar81 >> 8);
                              cVar84 = (char)((ulong)uVar81 >> 0x10);
                              cVar86 = (char)((ulong)uVar81 >> 0x18);
                              cVar88 = (char)((ulong)uVar81 >> 0x20);
                              cVar90 = (char)((ulong)uVar81 >> 0x28);
                              cVar92 = (char)((ulong)uVar81 >> 0x30);
                              cVar94 = (char)((ulong)uVar81 >> 0x38);
                              bVar58 = -(cVar3 == (char)uVar5) | -(cVar2 == (char)uVar5);
                              bVar64 = -(cVar3 == cVar25) | -(cVar2 == cVar25);
                              uVar59 = CONCAT11(bVar64,bVar58);
                              bVar66 = -(cVar3 == cVar27) | -(cVar2 == cVar27);
                              bVar68 = -(cVar3 == cVar29) | -(cVar2 == cVar29);
                              uVar60 = CONCAT13(bVar68,CONCAT12(bVar66,uVar59));
                              bVar70 = -(cVar3 == cVar31) | -(cVar2 == cVar31);
                              bVar72 = -(cVar3 == cVar33) | -(cVar2 == cVar33);
                              uVar61 = CONCAT15(bVar72,CONCAT14(bVar70,uVar60));
                              bVar74 = -(cVar3 == cVar35) | -(cVar2 == cVar35);
                              bVar76 = -(cVar3 == cVar37) | -(cVar2 == cVar37);
                              bVar77 = -(cVar3 == (char)uVar43) | -(cVar2 == (char)uVar43);
                              bVar83 = -(cVar3 == cVar44) | -(cVar2 == cVar44);
                              uVar78 = CONCAT11(bVar83,bVar77);
                              bVar85 = -(cVar3 == cVar46) | -(cVar2 == cVar46);
                              bVar87 = -(cVar3 == cVar48) | -(cVar2 == cVar48);
                              uVar79 = CONCAT13(bVar87,CONCAT12(bVar85,uVar78));
                              bVar89 = -(cVar3 == cVar50) | -(cVar2 == cVar50);
                              bVar91 = -(cVar3 == cVar52) | -(cVar2 == cVar52);
                              uVar80 = CONCAT15(bVar91,CONCAT14(bVar89,uVar79));
                              bVar93 = -(cVar3 == cVar54) | -(cVar2 == cVar54);
                              bVar95 = -(cVar3 == cVar56) | -(cVar2 == cVar56);
                              bVar21 = -(cVar3 == (char)uVar62) | -(cVar2 == (char)uVar62);
                              bVar26 = -(cVar3 == cVar63) | -(cVar2 == cVar63);
                              uVar22 = CONCAT11(bVar26,bVar21);
                              bVar28 = -(cVar3 == cVar65) | -(cVar2 == cVar65);
                              bVar30 = -(cVar3 == cVar67) | -(cVar2 == cVar67);
                              uVar23 = CONCAT13(bVar30,CONCAT12(bVar28,uVar22));
                              bVar32 = -(cVar3 == cVar69) | -(cVar2 == cVar69);
                              bVar34 = -(cVar3 == cVar71) | -(cVar2 == cVar71);
                              uVar24 = CONCAT15(bVar34,CONCAT14(bVar32,uVar23));
                              bVar36 = -(cVar3 == cVar73) | -(cVar2 == cVar73);
                              bVar38 = -(cVar3 == cVar75) | -(cVar2 == cVar75);
                              bVar39 = -(cVar3 == (char)uVar81) | -(cVar2 == (char)uVar81);
                              bVar45 = -(cVar3 == cVar82) | -(cVar2 == cVar82);
                              uVar40 = CONCAT11(bVar45,bVar39);
                              bVar47 = -(cVar3 == cVar84) | -(cVar2 == cVar84);
                              bVar49 = -(cVar3 == cVar86) | -(cVar2 == cVar86);
                              uVar41 = CONCAT13(bVar49,CONCAT12(bVar47,uVar40));
                              bVar51 = -(cVar3 == cVar88) | -(cVar2 == cVar88);
                              bVar53 = -(cVar3 == cVar90) | -(cVar2 == cVar90);
                              uVar42 = CONCAT15(bVar53,CONCAT14(bVar51,uVar41));
                              bVar55 = -(cVar3 == cVar92) | -(cVar2 == cVar92);
                              bVar57 = -(cVar3 == cVar94) | -(cVar2 == cVar94);
                              auVar96[0] = bVar21 | bVar58;
                              auVar96[1] = bVar26 | bVar64;
                              auVar96[2] = bVar28 | bVar66;
                              auVar96[3] = bVar30 | bVar68;
                              auVar96[4] = bVar32 | bVar70;
                              auVar96[5] = bVar34 | bVar72;
                              auVar96[6] = bVar36 | bVar74;
                              auVar96[7] = bVar38 | bVar76;
                              auVar96[8] = bVar39 | bVar77;
                              auVar96[9] = bVar45 | bVar83;
                              auVar96[10] = bVar47 | bVar85;
                              auVar96[0xb] = bVar49 | bVar87;
                              auVar96[0xc] = bVar51 | bVar89;
                              auVar96[0xd] = bVar53 | bVar91;
                              auVar96[0xe] = bVar55 | bVar93;
                              auVar96[0xf] = bVar57 | bVar95;
                              auVar96 = NEON_umaxp(auVar96,auVar96,1);
                              if (auVar96._0_8_ != 0) {
                                uVar20 = CONCAT17((char)(ushort)(CONCAT17(bVar95,CONCAT16(bVar93,
                                                  uVar80)) >> 0x34),
                                                  CONCAT16((char)(ushort)((uint6)uVar80 >> 0x24),
                                                           CONCAT15((char)(ushort)((uint)uVar79 >>
                                                                                  0x14),
                                                                    CONCAT14((char)(uVar78 >> 4),
                                                                             CONCAT13((char)(ushort)
                                                  (CONCAT17(bVar76,CONCAT16(bVar74,uVar61)) >> 0x34)
                                                  ,CONCAT12((char)(ushort)((uint6)uVar61 >> 0x24),
                                                            CONCAT11((char)(ushort)((uint)uVar60 >>
                                                                                   0x14),
                                                                     (char)(uVar59 >> 4)))))))) &
                                         0x8888888888888888;
                                if (uVar20 != 0) goto LAB_106260d24;
                                uVar20 = (CONCAT17((char)(ushort)(CONCAT17(bVar57,CONCAT16(bVar55,
                                                  uVar42)) >> 0x34),
                                                  CONCAT16((char)(ushort)((uint6)uVar42 >> 0x24),
                                                           CONCAT15((char)(ushort)((uint)uVar41 >>
                                                                                  0x14),
                                                                    CONCAT14((char)(uVar40 >> 4),
                                                                             CONCAT13((char)(ushort)
                                                  (CONCAT17(bVar38,CONCAT16(bVar36,uVar24)) >> 0x34)
                                                  ,CONCAT12((char)(ushort)((uint6)uVar24 >> 0x24),
                                                            CONCAT11((char)(ushort)((uint)uVar23 >>
                                                                                   0x14),
                                                                     (char)(uVar22 >> 4)))))))) &
                                         0x8888888888888888) >> 3;
                                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                         (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                         (uVar20 & 0xff00ff00ff00ff) << 8;
                                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                         (uVar20 & 0xffff0000ffff) << 0x10;
                                pcVar19 = pcVar13 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20)
                                                    >> 2) + 0x10;
                                uVar20 = (long)pcVar19 - (long)pcVar9;
                                goto joined_r0x000106260c54;
                              }
                            }
                          }
                          for (; pcVar13 <= pcVar1 + -0x10; pcVar13 = pcVar13 + 0x10) {
                            uVar43 = *(undefined8 *)(pcVar13 + 8);
                            uVar5 = *(undefined8 *)pcVar13;
                            cVar25 = (char)((ulong)uVar5 >> 8);
                            cVar27 = (char)((ulong)uVar5 >> 0x10);
                            cVar29 = (char)((ulong)uVar5 >> 0x18);
                            cVar31 = (char)((ulong)uVar5 >> 0x20);
                            cVar33 = (char)((ulong)uVar5 >> 0x28);
                            cVar35 = (char)((ulong)uVar5 >> 0x30);
                            cVar37 = (char)((ulong)uVar5 >> 0x38);
                            cVar44 = (char)((ulong)uVar43 >> 8);
                            cVar46 = (char)((ulong)uVar43 >> 0x10);
                            cVar48 = (char)((ulong)uVar43 >> 0x18);
                            cVar50 = (char)((ulong)uVar43 >> 0x20);
                            cVar52 = (char)((ulong)uVar43 >> 0x28);
                            cVar54 = (char)((ulong)uVar43 >> 0x30);
                            cVar56 = (char)((ulong)uVar43 >> 0x38);
                            uVar22 = CONCAT11(-(cVar3 == cVar25) | -(cVar2 == cVar25),
                                              -(cVar3 == (char)uVar5) | -(cVar2 == (char)uVar5));
                            uVar23 = CONCAT13(-(cVar3 == cVar29) | -(cVar2 == cVar29),
                                              CONCAT12(-(cVar3 == cVar27) | -(cVar2 == cVar27),
                                                       uVar22));
                            uVar24 = CONCAT15(-(cVar3 == cVar33) | -(cVar2 == cVar33),
                                              CONCAT14(-(cVar3 == cVar31) | -(cVar2 == cVar31),
                                                       uVar23));
                            uVar40 = CONCAT11(-(cVar3 == cVar44) | -(cVar2 == cVar44),
                                              -(cVar3 == (char)uVar43) | -(cVar2 == (char)uVar43));
                            uVar41 = CONCAT13(-(cVar3 == cVar48) | -(cVar2 == cVar48),
                                              CONCAT12(-(cVar3 == cVar46) | -(cVar2 == cVar46),
                                                       uVar40));
                            uVar42 = CONCAT15(-(cVar3 == cVar52) | -(cVar2 == cVar52),
                                              CONCAT14(-(cVar3 == cVar50) | -(cVar2 == cVar50),
                                                       uVar41));
                            uVar20 = CONCAT17((char)(ushort)(CONCAT17(-(cVar3 == cVar56) |
                                                                      -(cVar2 == cVar56),
                                                                      CONCAT16(-(cVar3 == cVar54) |
                                                                               -(cVar2 == cVar54),
                                                                               uVar42)) >> 0x34),
                                              CONCAT16((char)(ushort)((uint6)uVar42 >> 0x24),
                                                       CONCAT15((char)(ushort)((uint)uVar41 >> 0x14)
                                                                ,CONCAT14((char)(uVar40 >> 4),
                                                                          CONCAT13((char)(ushort)(
                                                  CONCAT17(-(cVar3 == cVar37) | -(cVar2 == cVar37),
                                                           CONCAT16(-(cVar3 == cVar35) |
                                                                    -(cVar2 == cVar35),uVar24)) >>
                                                  0x34),CONCAT12((char)(ushort)((uint6)uVar24 >>
                                                                               0x24),
                                                                 CONCAT11((char)(ushort)((uint)
                                                  uVar23 >> 0x14),(char)(uVar22 >> 4)))))))) &
                                     0x8888888888888888;
                            if (uVar20 != 0) goto LAB_106260d24;
                          }
                          if (pcVar13 < pcVar1) {
                            pcVar13 = pcVar1 + -0x10;
                            uVar43 = *(undefined8 *)(pcVar1 + -8);
                            uVar5 = *(undefined8 *)pcVar13;
                            cVar25 = (char)((ulong)uVar5 >> 8);
                            cVar27 = (char)((ulong)uVar5 >> 0x10);
                            cVar29 = (char)((ulong)uVar5 >> 0x18);
                            cVar31 = (char)((ulong)uVar5 >> 0x20);
                            cVar33 = (char)((ulong)uVar5 >> 0x28);
                            cVar35 = (char)((ulong)uVar5 >> 0x30);
                            cVar37 = (char)((ulong)uVar5 >> 0x38);
                            cVar44 = (char)((ulong)uVar43 >> 8);
                            cVar46 = (char)((ulong)uVar43 >> 0x10);
                            cVar48 = (char)((ulong)uVar43 >> 0x18);
                            cVar50 = (char)((ulong)uVar43 >> 0x20);
                            cVar52 = (char)((ulong)uVar43 >> 0x28);
                            cVar54 = (char)((ulong)uVar43 >> 0x30);
                            cVar56 = (char)((ulong)uVar43 >> 0x38);
                            uVar22 = CONCAT11(-(cVar3 == cVar25) | -(cVar2 == cVar25),
                                              -(cVar3 == (char)uVar5) | -(cVar2 == (char)uVar5));
                            uVar23 = CONCAT13(-(cVar3 == cVar29) | -(cVar2 == cVar29),
                                              CONCAT12(-(cVar3 == cVar27) | -(cVar2 == cVar27),
                                                       uVar22));
                            uVar24 = CONCAT15(-(cVar3 == cVar33) | -(cVar2 == cVar33),
                                              CONCAT14(-(cVar3 == cVar31) | -(cVar2 == cVar31),
                                                       uVar23));
                            uVar40 = CONCAT11(-(cVar3 == cVar44) | -(cVar2 == cVar44),
                                              -(cVar3 == (char)uVar43) | -(cVar2 == (char)uVar43));
                            uVar41 = CONCAT13(-(cVar3 == cVar48) | -(cVar2 == cVar48),
                                              CONCAT12(-(cVar3 == cVar46) | -(cVar2 == cVar46),
                                                       uVar40));
                            uVar42 = CONCAT15(-(cVar3 == cVar52) | -(cVar2 == cVar52),
                                              CONCAT14(-(cVar3 == cVar50) | -(cVar2 == cVar50),
                                                       uVar41));
                            uVar20 = CONCAT17((char)(ushort)(CONCAT17(-(cVar3 == cVar56) |
                                                                      -(cVar2 == cVar56),
                                                                      CONCAT16(-(cVar3 == cVar54) |
                                                                               -(cVar2 == cVar54),
                                                                               uVar42)) >> 0x34),
                                              CONCAT16((char)(ushort)((uint6)uVar42 >> 0x24),
                                                       CONCAT15((char)(ushort)((uint)uVar41 >> 0x14)
                                                                ,CONCAT14((char)(uVar40 >> 4),
                                                                          CONCAT13((char)(ushort)(
                                                  CONCAT17(-(cVar3 == cVar37) | -(cVar2 == cVar37),
                                                           CONCAT16(-(cVar3 == cVar35) |
                                                                    -(cVar2 == cVar35),uVar24)) >>
                                                  0x34),CONCAT12((char)(ushort)((uint6)uVar24 >>
                                                                               0x24),
                                                                 CONCAT11((char)(ushort)((uint)
                                                  uVar23 >> 0x14),(char)(uVar22 >> 4)))))))) &
                                     0x8888888888888888;
                            if (uVar20 != 0) {
LAB_106260d24:
                              uVar20 = (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                       (uVar20 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
                              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                       (uVar20 & 0xff00ff00ff00ff) << 8;
                              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                       (uVar20 & 0xffff0000ffff) << 0x10;
                              pcVar19 = pcVar13 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20)
                                                  >> 2);
                              goto LAB_106260d30;
                            }
                          }
                          goto LAB_106260de0;
                        }
                        uVar20 = uVar20 >> 3;
                        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar20 & 0xff00ff00ff00ff) << 8;
                        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar20 & 0xffff0000ffff) << 0x10;
                        pcVar19 = pcVar19 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 2);
                        uVar20 = (long)pcVar19 - (long)pcVar9;
                      }
joined_r0x000106260c54:
                      if (uVar7 < uVar20) {
                        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                  (uVar20,uVar7,uVar7,&UNK_10b4dd2d0);
                        goto LAB_106260de0;
                      }
                      if (((uVar17 <= uVar7 - uVar20) &&
                          (iVar4 = _memcmp(pcVar12,pcVar9 + uVar20,uVar17), uVar18 = uVar17,
                          iVar4 == 0)) ||
                         ((uVar15 <= uVar7 - uVar20 &&
                          (iVar4 = _memcmp(pcVar14,pcVar9 + uVar20,uVar15), uVar18 = uVar15,
                          iVar4 == 0)))) {
                        extraout_x8_00[1] = uVar20;
                        extraout_x8_00[2] = uVar18 + uVar20;
                        goto LAB_106260bd4;
                      }
                      uVar5 = 0;
                      pcVar19 = pcVar19 + 1;
                    } while (pcVar19 < pcVar1);
                  }
                  else {
LAB_106260de0:
                    uVar5 = 0;
                  }
                }
                *extraout_x8_00 = uVar5;
                return;
              }
            }
            puVar10 = &UNK_109d2b391;
            uVar5 = 0xc;
          }
          uVar7 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0,puVar10,uVar5);
        }
        else {
          puVar6 = (uint *)___error();
          uVar7 = (ulong)*puVar6 << 0x20 | 2;
        }
        *extraout_x8 = -0x8000000000000000;
        extraout_x8[1] = uVar7;
        return;
      }
      puVar10 = &UNK_109d2b391;
      uVar5 = 0xc;
    }
    uVar7 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0,puVar10,uVar5);
  }
  else {
    puVar6 = (uint *)___error();
    uVar7 = (ulong)*puVar6 << 0x20 | 2;
  }
  *param_1 = -0x8000000000000000;
  param_1[1] = uVar7;
  return;
}

