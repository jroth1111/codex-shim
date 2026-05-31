
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100590830(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                    undefined1 param_4 [16],undefined8 *param_5,undefined8 param_6,code *param_7,
                    code *param_8,code *param_9,code *param_10,code *param_11,code *param_12)

{
  ulong *puVar1;
  undefined *puVar2;
  code cVar3;
  code cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint5 uVar9;
  undefined5 uVar10;
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  code *pcVar25;
  undefined4 *puVar26;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  byte bVar27;
  code cVar28;
  uint uVar29;
  int extraout_w8;
  code *pcVar30;
  code *pcVar31;
  char *pcVar32;
  byte *pbVar33;
  long lVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  ulong uVar38;
  code *pcVar39;
  undefined8 *puVar40;
  undefined1 uVar41;
  code *pcVar42;
  code *pcVar43;
  long *plVar44;
  long lVar45;
  char *pcVar46;
  code *extraout_x12;
  long *plVar47;
  code *pcVar48;
  undefined8 extraout_x13;
  undefined8 extraout_x13_00;
  long lVar49;
  undefined4 extraout_w14;
  undefined4 uVar50;
  undefined4 extraout_w15;
  undefined4 uVar51;
  undefined8 extraout_x16;
  undefined8 uVar52;
  char *extraout_x17;
  undefined8 *puVar53;
  uint uVar54;
  undefined1 *puVar56;
  long *plVar57;
  long *plVar58;
  uint uVar59;
  long lVar60;
  long lVar61;
  code *unaff_x22;
  undefined8 uVar62;
  ulong uVar63;
  code *pcVar64;
  undefined8 uVar65;
  code *unaff_x25;
  long lVar66;
  undefined8 *puVar67;
  code *unaff_x26;
  undefined8 uVar68;
  undefined1 uVar69;
  code *unaff_x28;
  undefined8 uVar70;
  long lVar71;
  undefined8 uVar72;
  byte bVar73;
  undefined8 uVar74;
  ulong extraout_d0;
  ulong extraout_var;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  long lVar80;
  undefined8 uVar81;
  long lVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  long lVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  long lVar88;
  undefined8 uVar89;
  long lVar90;
  undefined8 uVar91;
  long lVar92;
  undefined8 uVar93;
  long lVar94;
  long lVar95;
  undefined8 uVar96;
  long lVar97;
  undefined8 uVar98;
  long lVar99;
  undefined8 uVar100;
  long lVar101;
  undefined8 uVar102;
  long lVar103;
  undefined8 uVar104;
  long lVar105;
  undefined8 uVar106;
  long lVar107;
  undefined8 uVar108;
  long lVar109;
  undefined8 uVar110;
  long lVar111;
  long lVar112;
  undefined8 uVar113;
  long lVar114;
  undefined8 uVar115;
  long lVar116;
  undefined8 uVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  undefined1 auVar124 [16];
  undefined1 auStack_d120 [53248];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  uint uVar55;
  
  uVar68 = param_4._8_8_;
  uVar65 = param_4._0_8_;
  uVar86 = param_3._8_8_;
  uVar62 = param_3._0_8_;
  uVar70 = param_2._8_8_;
  uVar74 = param_2._0_8_;
  pcVar19 = (code *)(param_5 + 0x200);
  bVar27 = *(byte *)(param_5 + 0x392);
  if (bVar27 < 2) {
    if (bVar27 == 0) {
      uVar62 = param_5[1];
      uVar70 = *param_5;
      lVar61 = param_5[2];
      uVar74 = param_5[3];
      lVar60 = param_5[4];
      param_5[5] = lVar61;
      param_5[6] = uVar74;
      param_5[7] = lVar60;
      if (*(long *)(lVar61 + 0x68) != 0) {
        uVar18 = FUN_100e8e738(*(undefined8 *)(lVar61 + 0x70),*(undefined8 *)(lVar61 + 0x78),uVar74,
                               lVar60);
        lVar66 = 0;
        lVar45 = *(long *)(lVar61 + 0x50);
        uVar38 = *(ulong *)(lVar61 + 0x58);
        bVar27 = (byte)(uVar18 >> 0x39);
        uVar18 = uVar18 & uVar38;
        uVar86 = *(undefined8 *)(lVar45 + uVar18);
        uVar20 = CONCAT17(-((byte)((ulong)uVar86 >> 0x38) == bVar27),
                          CONCAT16(-((byte)((ulong)uVar86 >> 0x30) == bVar27),
                                   CONCAT15(-((byte)((ulong)uVar86 >> 0x28) == bVar27),
                                            CONCAT14(-((byte)((ulong)uVar86 >> 0x20) == bVar27),
                                                     CONCAT13(-((byte)((ulong)uVar86 >> 0x18) ==
                                                               bVar27),CONCAT12(-((byte)((ulong)
                                                  uVar86 >> 0x10) == bVar27),
                                                  CONCAT11(-((byte)((ulong)uVar86 >> 8) == bVar27),
                                                           -((byte)uVar86 == bVar27)))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
            uVar63 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            lVar23 = lVar45 + (uVar18 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3) &
                              uVar38) * -0x18;
            if ((lVar60 == *(long *)(lVar23 + -8)) &&
               (pcVar19 = (code *)_memcmp(uVar74,*(undefined8 *)(lVar23 + -0x10),lVar60),
               (int)pcVar19 == 0)) goto LAB_100590b74;
          }
          bVar73 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar86 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar86 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar86 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar86 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar86 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar86 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar86 >> 8) ==
                                                                     -1),-((char)uVar86 == -1)))))))
                                      ),1);
          if ((bVar73 & 1) != 0) break;
          lVar66 = lVar66 + 8;
          uVar18 = uVar18 + lVar66 & uVar38;
          uVar86 = *(undefined8 *)(lVar45 + uVar18);
          uVar20 = CONCAT17(-((byte)((ulong)uVar86 >> 0x38) == bVar27),
                            CONCAT16(-((byte)((ulong)uVar86 >> 0x30) == bVar27),
                                     CONCAT15(-((byte)((ulong)uVar86 >> 0x28) == bVar27),
                                              CONCAT14(-((byte)((ulong)uVar86 >> 0x20) == bVar27),
                                                       CONCAT13(-((byte)((ulong)uVar86 >> 0x18) ==
                                                                 bVar27),CONCAT12(-((byte)((ulong)
                                                  uVar86 >> 0x10) == bVar27),
                                                  CONCAT11(-((byte)((ulong)uVar86 >> 8) == bVar27),
                                                           -((byte)uVar86 == bVar27)))))))) &
                   0x8080808080808080;
        }
      }
      uVar18 = FUN_100e8e738(*(undefined8 *)(lVar61 + 0x40),*(undefined8 *)(lVar61 + 0x48),uVar74,
                             lVar60);
      lVar66 = 0;
      lVar45 = *(long *)(lVar61 + 0x20);
      uVar38 = *(ulong *)(lVar61 + 0x28);
      bVar27 = (byte)(uVar18 >> 0x39);
      uVar18 = uVar18 & uVar38;
      uVar86 = *(undefined8 *)(lVar45 + uVar18);
      uVar20 = CONCAT17(-((byte)((ulong)uVar86 >> 0x38) == bVar27),
                        CONCAT16(-((byte)((ulong)uVar86 >> 0x30) == bVar27),
                                 CONCAT15(-((byte)((ulong)uVar86 >> 0x28) == bVar27),
                                          CONCAT14(-((byte)((ulong)uVar86 >> 0x20) == bVar27),
                                                   CONCAT13(-((byte)((ulong)uVar86 >> 0x18) ==
                                                             bVar27),CONCAT12(-((byte)((ulong)uVar86
                                                                                      >> 0x10) ==
                                                                               bVar27),CONCAT11(-((
                                                  byte)((ulong)uVar86 >> 8) == bVar27),
                                                  -((byte)uVar86 == bVar27)))))))) &
               0x8080808080808080;
joined_r0x0001005909ac:
      while (uVar20 == 0) {
        bVar73 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar86 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar86 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar86 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar86 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar86
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar86 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar86 >> 8) == -1),
                                                           -((char)uVar86 == -1)))))))),1);
        if ((bVar73 & 1) != 0) goto LAB_100590b64;
        lVar66 = lVar66 + 8;
        uVar18 = uVar18 + lVar66 & uVar38;
        uVar86 = *(undefined8 *)(lVar45 + uVar18);
        uVar20 = CONCAT17(-((byte)((ulong)uVar86 >> 0x38) == bVar27),
                          CONCAT16(-((byte)((ulong)uVar86 >> 0x30) == bVar27),
                                   CONCAT15(-((byte)((ulong)uVar86 >> 0x28) == bVar27),
                                            CONCAT14(-((byte)((ulong)uVar86 >> 0x20) == bVar27),
                                                     CONCAT13(-((byte)((ulong)uVar86 >> 0x18) ==
                                                               bVar27),CONCAT12(-((byte)((ulong)
                                                  uVar86 >> 0x10) == bVar27),
                                                  CONCAT11(-((byte)((ulong)uVar86 >> 8) == bVar27),
                                                           -((byte)uVar86 == bVar27)))))))) &
                 0x8080808080808080;
      }
      uVar63 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
      uVar63 = uVar18 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3) & uVar38;
      lVar23 = lVar45 + uVar63 * -0x1b8;
      if (lVar60 == *(long *)(lVar23 + -0x1a8)) {
        iVar17 = _memcmp(uVar74,*(undefined8 *)(lVar23 + -0x1b0),lVar60);
        if (iVar17 == 0) {
          lVar60 = ((long)(uVar63 * 0x1b8) >> 3) * 0x6fb586fb586fb587;
          puVar67 = (undefined8 *)(lVar45 + (lVar60 - 8U & uVar38));
          uVar74 = *puVar67;
          uVar86 = *(undefined8 *)(lVar45 + lVar60);
          uVar20 = CONCAT17(-((char)((ulong)uVar86 >> 0x38) == -1),
                            CONCAT16(-((char)((ulong)uVar86 >> 0x30) == -1),
                                     CONCAT15(-((char)((ulong)uVar86 >> 0x28) == -1),
                                              CONCAT14(-((char)((ulong)uVar86 >> 0x20) == -1),
                                                       CONCAT13(-((char)((ulong)uVar86 >> 0x18) ==
                                                                 -1),CONCAT12(-((char)((ulong)uVar86
                                                                                      >> 0x10) == -1
                                                                               ),CONCAT11(-((char)((
                                                  ulong)uVar86 >> 8) == -1),-((char)uVar86 == -1))))
                                                  ))));
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          if (((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) +
              ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar74 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar74 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar74 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar74 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar74 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar74 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar74 >> 8) ==
                                                                     -1),-((char)uVar74 == -1)))))))
                                      )) >> 3) < 8) {
            *(long *)(lVar61 + 0x30) = *(long *)(lVar61 + 0x30) + 1;
            uVar41 = 0xff;
          }
          else {
            uVar41 = 0x80;
          }
          *(undefined1 *)(lVar45 + lVar60) = uVar41;
          *(undefined1 *)(puVar67 + 1) = uVar41;
          *(long *)(lVar61 + 0x38) = *(long *)(lVar61 + 0x38) + -1;
          lVar61 = *(long *)(lVar23 + -0x1b8);
          if (lVar61 != -0x8000000000000000) {
            uVar74 = *(undefined8 *)(lVar23 + -0x1b0);
            _memcpy(param_5 + 8,lVar23 + -0x1a0,0x1a0);
            if (lVar61 != 0) {
              _free(uVar74);
            }
            if (param_5[8] == -0x7ffffffffffffff5) goto LAB_100590b20;
            _memcpy(param_5 + 0x3c,param_5 + 8,0x1a0);
            param_5[0x71] = uVar62;
            param_5[0x70] = uVar70;
            param_5[0x72] = param_5 + 0x3c;
            *(undefined1 *)(param_5 + 0x391) = 0;
            goto LAB_100590958;
          }
LAB_100590b64:
          pcVar19 = (code *)0x0;
          param_5[8] = 0x800000000000000b;
LAB_100590b74:
          uVar41 = 1;
          goto LAB_100590b7c;
        }
      }
      uVar20 = uVar20 - 1 & uVar20;
      goto joined_r0x0001005909ac;
    }
    FUN_107c05cc0(&UNK_10b217f80);
  }
  else if (bVar27 == 3) {
LAB_100590958:
    uVar20 = func_0x0001005ad358(param_5 + 0x70,param_6);
    if ((uVar20 & 1) == 0) {
      if (*(char *)(param_5 + 0x391) == '\x03') {
        FUN_100d1ddbc(param_5 + 0x73);
      }
      lVar61 = param_5[5];
      uVar74 = param_5[6];
      lVar60 = param_5[7];
      if (lVar60 == 0) {
        lVar66 = 1;
      }
      else {
        lVar66 = _malloc(lVar60);
        if (lVar66 == 0) {
          FUN_107c03c64(1,lVar60);
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100590a84);
          (*pcVar19)();
        }
      }
      _memcpy(lVar66,uVar74,lVar60);
      lStack_88 = lVar60;
      lStack_80 = lVar66;
      lStack_78 = lVar60;
      FUN_1016e6d00(lVar61 + 0x50,&lStack_88);
      FUN_100df5b9c(param_5 + 0x3c);
LAB_100590b20:
      pcVar19 = (code *)0x0;
      uVar41 = 1;
    }
    else {
      pcVar19 = (code *)0x1;
      uVar41 = 3;
    }
LAB_100590b7c:
    *(undefined1 *)(param_5 + 0x392) = uVar41;
    return pcVar19;
  }
  pcVar21 = (code *)FUN_107c05cc4(&UNK_10b217f80);
  FUN_100df5b9c(param_5 + 0x3c);
  *(undefined1 *)(param_5 + 0x392) = 2;
  __Unwind_Resume(pcVar21);
  pcVar22 = (code *)FUN_107c05ccc();
  puVar56 = &stack0xfffffffffffffee0;
  do {
    puVar11 = puVar56;
    *(undefined8 *)(puVar11 + -0x1000) = 0;
    bVar12 = auStack_d120 <= puVar11 + -0x1000;
    bVar13 = SBORROW8((long)(puVar11 + -0x1000),(long)auStack_d120);
    bVar14 = (long)(puVar11 + (-0x1000 - (long)auStack_d120)) < 0;
    bVar15 = puVar11 + -0x1000 == auStack_d120;
    puVar56 = puVar11 + -0x1000;
  } while (!bVar15);
  *(code **)(puVar11 + -0x1050) = pcVar22;
  *(undefined8 **)(puVar11 + -0x1048) = extraout_x1;
  plVar57 = (long *)(puVar11 + -0xcc0);
  *(undefined8 **)(puVar11 + -0x1040) = extraout_x1 + 0x491;
  *(undefined1 **)(puVar11 + -0x1030) = (undefined1 *)((long)extraout_x1 + 0xab9);
  *(code **)(puVar11 + -0x1028) = param_7;
  cVar28 = *(code *)(extraout_x1 + 0x156);
  pcVar30 = (code *)(ulong)(byte)cVar28;
  pcVar64 = (code *)0x8000000000000020;
  pcVar39 = (code *)&UNK_108c9a8d0;
  pcVar43 = (code *)(ulong)*(ushort *)(&UNK_108c9a8d0 + (long)pcVar30 * 2);
  pcVar42 = (code *)(&UNK_100590cec + (long)pcVar43 * 4);
  puVar67 = extraout_x1;
  pcVar48 = extraout_x12;
  uVar72 = extraout_x13;
  uVar52 = extraout_x16;
  pcVar32 = extraout_x17;
  puVar53 = extraout_x1;
  pcVar31 = pcVar21;
  pcVar25 = pcVar19;
  uVar20 = extraout_d0;
  uVar38 = extraout_var;
  uVar50 = extraout_w14;
  uVar51 = extraout_w15;
  switch(cVar28) {
  default:
    **(undefined8 **)(puVar11 + -0x1030) = 0;
    uVar20 = extraout_x1[0x42];
    extraout_x1[0x47] = extraout_x1[0x43];
    extraout_x1[0x46] = uVar20;
    extraout_x1[0x48] = extraout_x1[0x44];
    extraout_x1[0x4b] = extraout_x1[0x41];
    extraout_x1[0x4a] = extraout_x1[0x40];
    extraout_x1[0x49] = extraout_x1[0x3f];
  case (code)0x5f:
    pcVar30 = (code *)*extraout_x1;
    extraout_x1[0x4c] = extraout_x1[0x45];
    pcVar21 = (code *)(extraout_x1 + 0x4d);
    if (pcVar30 == (code *)0x2) {
      __ZN10codex_core6client11ModelClient11new_session17hb5398cef18615091E(pcVar21,uVar20 + 0x400);
    }
    else {
code_r0x0001005911e4:
      extraout_x1[0x4d] = pcVar30;
      _memcpy(extraout_x1 + 0x4e,extraout_x1 + 1,0x1f0);
    }
    pcVar30 = (code *)(extraout_x1 + 0x46);
    extraout_x1[0x15c] = pcVar30;
    pcVar39 = (code *)(extraout_x1 + 0x47);
    extraout_x1[0x15d] = pcVar39;
    extraout_x1[0x15e] = pcVar21;
    unaff_x28 = (code *)((long)extraout_x1 + 0xafa);
    *(undefined1 *)((long)extraout_x1 + 0xafa) = 0;
    unaff_x26 = (code *)(extraout_x1 + 0x159);
code_r0x000100591218:
    extraout_x1[0x159] = pcVar30;
code_r0x00010059121c:
    extraout_x1[0x15a] = pcVar39;
    extraout_x1[0x15b] = pcVar21;
    extraout_x1[0x16a] = pcVar30;
    extraout_x1[0x16b] = pcVar39;
    extraout_x1[0x16c] = pcVar21;
code_r0x000100591230:
    *(undefined8 **)(puVar11 + -0x1070) = extraout_x1 + 0x160;
    *(undefined1 *)((long)extraout_x1 + 0xb69) = 0;
code_r0x000100591240:
    pcVar19 = (code *)((long)extraout_x1 + 0xb69);
    *(undefined1 *)(extraout_x1 + 0x16d) = 0;
    extraout_x1[0x164] = pcVar30;
    extraout_x1[0x165] = pcVar39;
    extraout_x1[0x166] = pcVar21;
    pcVar30 = (code *)(*(long *)pcVar30 + 0x10);
code_r0x000100591258:
    extraout_x1[0x16e] = pcVar30;
    unaff_x22 = (code *)(extraout_x1 + 0x17e);
code_r0x000100591264:
    *(undefined1 *)(extraout_x1 + 0x17e) = 0;
code_r0x000100591268:
    extraout_x1[0x16f] = pcVar30 + 0x790;
    *(undefined1 *)(extraout_x1 + 0x17d) = 0;
code_r0x000100591274:
    auVar124 = FUN_100fd3e50(extraout_x1 + 0x16f,*(undefined8 *)(puVar11 + -0x1028));
    puVar67 = auVar124._8_8_;
    unaff_x25 = auVar124._0_8_;
    if (unaff_x25 == (code *)0x0) {
      cVar28 = (code)0x3;
      *unaff_x22 = (code)0x3;
      pcVar22 = (code *)0x0;
code_r0x000100591cb0:
      *pcVar19 = cVar28;
      cVar28 = (code)0x3;
code_r0x000100591cb8:
      *unaff_x28 = cVar28;
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 3;
      goto LAB_100595774;
    }
    bVar15 = *(char *)(extraout_x1 + 0x17d) == '\x03';
    *(code **)(puVar11 + -0x1080) = unaff_x26;
code_r0x000100591294:
    *(code **)(puVar11 + -0x1060) = unaff_x28;
    *(code **)(puVar11 + -0x1058) = pcVar19;
    if (bVar15) {
code_r0x00010059129c:
      pcVar30 = (code *)(ulong)*(byte *)(extraout_x1 + 0x17c);
code_r0x0001005912a0:
      if ((int)pcVar30 == 3) {
code_r0x0001005912a8:
        if (*(char *)(extraout_x1 + 0x173) == '\x04') {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (extraout_x1 + 0x174);
          pcVar30 = (code *)extraout_x1[0x175];
          puVar67 = extraout_x1_00;
          if (pcVar30 != (code *)0x0) {
            pcVar22 = (code *)extraout_x1[0x176];
code_r0x0001005912c8:
            (**(code **)(pcVar30 + 0x18))(pcVar22);
            puVar67 = extraout_x1_01;
          }
        }
      }
    }
    pcVar21 = (code *)0x8000000000000000;
    if (*(long *)(unaff_x25 + 0x7c0) != -0x8000000000000000) {
      pcVar19 = *(code **)(unaff_x25 + 0x7c8);
      pcVar22 = *(code **)(unaff_x25 + 2000);
      pcVar21 = pcVar22;
      if (pcVar22 == (code *)0x0) {
        pcVar22 = (code *)0x1;
        unaff_x26 = pcVar22;
      }
      else {
code_r0x000100591338:
        pcVar22 = (code *)_malloc(pcVar22);
        unaff_x26 = pcVar22;
        if (pcVar22 == (code *)0x0) {
          FUN_107c03c64(1,pcVar21);
          break;
        }
      }
code_r0x000100591464:
      _memcpy(pcVar22,pcVar19,pcVar21);
      pcVar19 = (code *)(ulong)(byte)unaff_x25[0x7d8];
      puVar67 = extraout_x1_02;
    }
    if (*unaff_x25 == (code)0x0) {
      *unaff_x25 = (code)0x1;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (unaff_x25,puVar67,1000000000);
    }
    unaff_x28 = (code *)0x1;
code_r0x00010059148c:
    pcVar22 = (code *)FUN_1060fa678(unaff_x25,1,unaff_x25);
    *unaff_x22 = SUB81(unaff_x28,0);
    if (pcVar21 != (code *)0x8000000000000000) {
      pcVar30 = (code *)0x8000000000000001;
code_r0x0001005914b0:
      bVar15 = pcVar21 == pcVar30;
      unaff_x28 = *(code **)(puVar11 + -0x1060);
code_r0x0001005914b8:
      if (bVar15) {
        cVar28 = (code)0x3;
code_r0x0001005914c0:
        pcVar19 = *(code **)(puVar11 + -0x1058);
        goto code_r0x000100591cb0;
      }
      *(undefined1 *)(extraout_x1 + 0x16d) = 1;
      extraout_x1[0x160] = pcVar21;
      extraout_x1[0x161] = unaff_x26;
      extraout_x1[0x162] = pcVar21;
code_r0x000100591604:
      *(char *)(extraout_x1 + 0x163) = (char)pcVar19;
      pcVar30 = (code *)(*(long *)extraout_x1[0x165] + 0x10);
code_r0x000100591614:
      *(undefined1 *)(extraout_x1 + 0x16d) = 0;
      pcVar39 = (code *)(*(long *)extraout_x1[0x164] + 0x398);
      extraout_x1[0x16e] = pcVar21;
      extraout_x1[0x16f] = unaff_x26;
      extraout_x1[0x170] = pcVar21;
      extraout_x1[0x171] = pcVar30;
      extraout_x1[0x172] = pcVar39;
      pcVar21 = *(code **)(puVar11 + -0x1040);
      *(code **)(puVar11 + -0x1088) = pcVar21 + 0xe78;
      pcVar21[0xe78] = (code)0x0;
      unaff_x26 = *(code **)(puVar11 + -0x1080);
code_r0x000100591650:
      pcVar43 = (code *)(extraout_x1 + 0x16e);
      *(undefined4 *)(pcVar21 + 0xe79) = 0;
code_r0x000100591658:
      extraout_x1[0x173] = pcVar30;
      uVar74 = *(undefined8 *)pcVar43;
      extraout_x1[0x175] = *(undefined8 *)(pcVar43 + 8);
      extraout_x1[0x174] = uVar74;
      *(code **)(puVar11 + -0x1090) = pcVar43;
      extraout_x1[0x176] = *(undefined8 *)(pcVar43 + 0x10);
      extraout_x1[0x177] = pcVar39;
      FUN_101133118(extraout_x1 + 0x178,*(long *)(pcVar30 + 0x788) + 0x10);
      pcVar30 = pcVar21 + 0xe7b;
code_r0x000100591688:
      *(undefined2 *)pcVar30 = 0x101;
      uVar74 = extraout_x1[0x175];
      lVar61 = extraout_x1[0x176];
      if (lVar61 == 0) {
        lVar60 = 1;
      }
      else {
        lVar60 = _malloc(lVar61);
        if (lVar60 == 0) {
          *(code **)(puVar11 + -0x1060) = unaff_x28;
          *(code **)(puVar11 + -0x1080) = unaff_x26;
          FUN_107c03c64(1,lVar61);
          break;
        }
      }
      _memcpy(lVar60,uVar74,lVar61);
      if ((extraout_x1[0x54c] != -0x8000000000000000) && (extraout_x1[0x54c] != 0)) {
        _free(extraout_x1[0x54d]);
      }
      *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0xe7c) = 1;
      extraout_x1[0x54c] = lVar61;
      extraout_x1[0x54d] = lVar60;
      extraout_x1[0x54e] = lVar61;
      lVar61 = *(long *)extraout_x1[0x177];
      lVar60 = ((long *)extraout_x1[0x177])[1];
      uVar74 = extraout_x1[0x175];
      uVar70 = extraout_x1[0x176];
      __ZN10codex_core6config6Config24to_models_manager_config17hc032ee81d7650970E
                (extraout_x1 + 0x661,extraout_x1 + 0x178);
      auVar124 = (**(code **)(lVar60 + 0x68))
                           (lVar61 + (*(long *)(lVar60 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                            uVar74,uVar70,extraout_x1 + 0x661);
      *(undefined1 (*) [16])(extraout_x1 + 0x66e) = auVar124;
      pcVar19 = *(code **)(puVar11 + -0x1058);
code_r0x00010059193c:
      pcVar22 = (code *)(**(code **)(auVar124._8_8_ + 0x18))
                                  (puVar11 + 0x6d70,auVar124._0_8_,
                                   *(undefined8 *)(puVar11 + -0x1028));
      if (*(long *)(puVar11 + 0x6d70) == 2) {
        uVar41 = 3;
code_r0x000100591ca4:
        **(undefined1 **)(puVar11 + -0x1088) = uVar41;
      }
      else {
        *(code **)(puVar11 + -0x1058) = pcVar19;
        _memcpy(extraout_x1 + 0x621,puVar11 + 0x6d70,0x1f8);
        uVar74 = extraout_x1[0x66e];
        puVar67 = (undefined8 *)extraout_x1[0x66f];
        pcVar19 = (code *)*puVar67;
        if (pcVar19 != (code *)0x0) {
          (*pcVar19)(uVar74);
        }
        if (puVar67[1] != 0) {
          _free(uVar74);
        }
        if ((extraout_x1[0x667] != -0x8000000000000000) && (extraout_x1[0x667] != 0)) {
          _free(extraout_x1[0x668]);
        }
        lVar61 = extraout_x1[0x66a];
        if (lVar61 != -0x8000000000000000) {
          lVar45 = extraout_x1[0x66b];
          lVar60 = lVar45;
          for (lVar66 = extraout_x1[0x66c]; lVar66 != 0; lVar66 = lVar66 + -1) {
            FUN_100e0f5d0(lVar60);
            lVar60 = lVar60 + 0x1f8;
          }
          if (lVar61 != 0) {
            _free(lVar45);
          }
        }
        extraout_x1[0x678] = (ulong)*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe50);
        extraout_x1[0x679] = extraout_x1[0x65a];
        pcVar19 = (code *)extraout_x1[0x62f];
        if (pcVar19 == (code *)0x0) {
          pcVar22 = (code *)0x1;
        }
        else {
          pcVar21 = (code *)extraout_x1[0x62e];
          pcVar22 = (code *)_malloc(pcVar19);
          if (pcVar22 == (code *)0x0) {
            *(code **)(puVar11 + -0x1060) = unaff_x28;
            *(code **)(puVar11 + -0x1080) = unaff_x26;
            FUN_107c03c64(1,pcVar19);
            break;
          }
          if (((pcVar19 < (code *)0x8) ||
              (pcVar39 = pcVar21 + 0x18,
              pcVar39 + (long)(pcVar19 + -1) * 0x20 < pcVar39 || (ulong)(pcVar19 + -1) >> 0x3b != 0)
              ) || ((pcVar22 < pcVar21 + (long)pcVar19 * 0x20 + -7 &&
                    (pcVar39 < pcVar22 + (long)pcVar19)))) {
            pcVar30 = (code *)0x0;
          }
          else {
            if (pcVar19 < (code *)0x10) {
              pcVar30 = (code *)0x0;
            }
            else {
              pcVar39 = (code *)0x0;
code_r0x000100593e80:
              pcVar30 = (code *)((ulong)pcVar19 & 0xffffffffffffff0);
              pcVar42 = pcVar21 + 0x118;
              do {
                pcVar43 = pcVar42 + -0xe0;
                pcVar48 = pcVar42 + -0xc0;
code_r0x000100593e90:
                param_7 = pcVar42 + 0x40;
                param_8 = pcVar42 + 0x60;
                param_9 = pcVar42 + 0x80;
                param_10 = pcVar42 + 0xa0;
                param_11 = pcVar42 + 0xc0;
                param_12 = pcVar42 + 0xe0;
                uVar20 = CONCAT17(pcVar42[-0x20],
                                  CONCAT16(pcVar42[-0x40],
                                           CONCAT15(pcVar42[-0x60],
                                                    CONCAT14(pcVar42[-0x80],
                                                             CONCAT13(pcVar42[-0xa0],
                                                                      CONCAT12(*pcVar48,CONCAT11(*
                                                  pcVar43,pcVar42[-0x100])))))));
                uVar38 = (ulong)CONCAT11(pcVar42[0x20],*pcVar42);
code_r0x000100593ee8:
                *(ulong *)(pcVar22 + (long)pcVar39 + 8) =
                     CONCAT17(*param_12,
                              CONCAT16(*param_11,
                                       CONCAT15(*param_10,
                                                CONCAT14(*param_9,CONCAT13(*param_8,CONCAT12(*
                                                  param_7,(short)uVar38))))));
                *(ulong *)(pcVar22 + (long)pcVar39) = uVar20;
                pcVar39 = pcVar39 + 0x10;
                pcVar42 = pcVar42 + 0x200;
              } while (pcVar30 != pcVar39);
              if (pcVar19 == pcVar30) goto code_r0x000100591b48;
              if (((uint)pcVar19 >> 3 & 1) == 0) goto code_r0x000100591a70;
            }
            pcVar31 = (code *)((ulong)pcVar19 & 0xffffffffffffff8);
            pcVar39 = pcVar21 + (long)pcVar30 * 0x20 + 0x98;
            do {
              *(ulong *)(pcVar22 + (long)pcVar30) =
                   CONCAT17(pcVar39[0x60],
                            CONCAT16(pcVar39[0x40],
                                     CONCAT15(pcVar39[0x20],
                                              CONCAT14(*pcVar39,CONCAT13(pcVar39[-0x20],
                                                                         CONCAT12(pcVar39[-0x40],
                                                                                  CONCAT11(pcVar39[
                                                  -0x60],pcVar39[-0x80])))))));
              pcVar30 = pcVar30 + 8;
              pcVar39 = pcVar39 + 0x100;
            } while (pcVar31 != pcVar30);
            pcVar30 = pcVar31;
            if (pcVar19 == pcVar31) goto code_r0x000100591b48;
          }
code_r0x000100591a70:
          pcVar21 = pcVar21 + (long)pcVar30 * 0x20 + 0x18;
          do {
            pcVar22[(long)pcVar30] = *pcVar21;
            pcVar30 = pcVar30 + 1;
            pcVar21 = pcVar21 + 0x20;
          } while (pcVar19 != pcVar30);
        }
code_r0x000100591b48:
        extraout_x1[0x662] = pcVar19;
        extraout_x1[0x663] = pcVar22;
        extraout_x1[0x664] = pcVar19;
        lVar61 = extraout_x1[0x173];
        cVar28 = *(code *)(lVar61 + 0x7d6);
        pcVar21 = pcVar19;
        pcVar39 = pcVar22;
        if (cVar28 == (code)0x6) {
code_r0x000100591b64:
          pcVar21 = (code *)0x0;
          if (pcVar19 != (code *)0x0) {
            pcVar21 = pcVar19 + -1;
          }
          lVar60 = *(long *)(puVar11 + -0x1040);
          pcVar22 = pcVar22 + (long)((ulong)pcVar21 >> 1);
          if (pcVar19 <= (code *)((ulong)pcVar21 >> 1)) {
            pcVar22 = (code *)(lVar60 + 0xe71);
          }
          cVar28 = *pcVar22;
        }
        else {
          do {
            if (pcVar21 == (code *)0x0) goto code_r0x000100591b64;
            cVar3 = *pcVar39;
            pcVar21 = pcVar21 + -1;
            pcVar39 = pcVar39 + 1;
          } while (cVar3 != cVar28);
          lVar60 = *(long *)(puVar11 + -0x1040);
        }
        *(code *)(lVar60 + 0xe80) = cVar28;
        *(code *)(lVar60 + 0xc7b) = cVar28;
        uVar74 = extraout_x1[0x175];
        lVar60 = extraout_x1[0x176];
        if (lVar60 == 0) {
          lVar66 = 1;
        }
        else {
          lVar66 = _malloc(lVar60);
          if (lVar66 == 0) {
            *(code **)(puVar11 + -0x1060) = unaff_x28;
            *(code **)(puVar11 + -0x1080) = unaff_x26;
            FUN_107c03c64(1,lVar60);
            break;
          }
        }
        _memcpy(lVar66,uVar74,lVar60);
        *(long *)(puVar11 + 0xb730) = lVar60;
        *(long *)(puVar11 + 0xb738) = lVar66;
        *(long *)(puVar11 + 0xb740) = lVar60;
        lVar60 = *(long *)(puVar11 + -0x1040);
        uVar41 = *(undefined1 *)(lVar60 + 0xe80);
        *(undefined8 *)(puVar11 + 0x6d70) = 0x8000000000000001;
        __ZN14codex_protocol12config_types17CollaborationMode12with_updates17h167dd5bee2a215d3E
                  (extraout_x1 + 0x67c,lVar61 + 0x3a8,puVar11 + 0xb730,uVar41,puVar11 + 0x6d70);
        *(undefined1 *)(lVar60 + 0xe7a) = 1;
        FUN_1014ffaa8(extraout_x1 + 0x665,extraout_x1[0x173] + 0x5f8);
        *(undefined1 *)(lVar60 + 0xe79) = 1;
        lVar61 = ((long *)extraout_x1[0x177])[1];
        auVar124 = (**(code **)(lVar61 + 0x20))
                             (*(long *)extraout_x1[0x177] +
                              (*(long *)(lVar61 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,2);
        *(undefined1 (*) [16])(extraout_x1 + 0x67a) = auVar124;
        pcVar19 = *(code **)(puVar11 + -0x1058);
code_r0x000100591c7c:
        pcVar22 = (code *)(**(code **)(auVar124._8_8_ + 0x18))
                                    (puVar11 + 0x6d70,auVar124._0_8_,
                                     *(undefined8 *)(puVar11 + -0x1028));
        if (*(long *)(puVar11 + 0x6d70) == -0x8000000000000000) {
          uVar41 = 4;
          goto code_r0x000100591ca4;
        }
        *(code **)(puVar11 + -0x1060) = unaff_x28;
        *(code **)(puVar11 + -0x1058) = pcVar19;
        *(undefined8 *)(puVar11 + 0xb5d8) = *(undefined8 *)(puVar11 + 0x6d78);
        *(undefined8 *)(puVar11 + 0xb5d0) = *(undefined8 *)(puVar11 + 0x6d70);
        *(undefined8 *)(puVar11 + 0xb5e0) = *(undefined8 *)(puVar11 + 0x6d80);
        uVar74 = extraout_x1[0x67a];
        puVar67 = (undefined8 *)extraout_x1[0x67b];
        pcVar19 = (code *)*puVar67;
        *(code **)(puVar11 + -0x1080) = unaff_x26;
        if (pcVar19 != (code *)0x0) {
          (*pcVar19)(uVar74);
        }
        if (puVar67[1] != 0) {
          _free(uVar74);
        }
        uVar74 = *(undefined8 *)(extraout_x1[0x173] + 0x238);
        lVar61 = *(long *)(extraout_x1[0x173] + 0x240);
        if (lVar61 == 0) {
          lVar60 = 1;
        }
        else {
          lVar60 = _malloc(lVar61);
          if (lVar60 == 0) {
            FUN_107c03c64(1,lVar61);
            break;
          }
        }
        *(long *)(puVar11 + -0x10b0) = lVar60;
        _memcpy(lVar60,uVar74,lVar61);
        lVar66 = extraout_x1[0x173];
        lVar60 = *(long *)(lVar66 + 0x480);
        *(long *)(puVar11 + -0x10a0) = lVar61;
        if (lVar60 == -0x8000000000000000) {
          *(undefined8 *)(puVar11 + -0x10a8) = 0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(lVar66 + 0x488);
          lVar61 = *(long *)(lVar66 + 0x490);
          if (lVar61 == 0) {
            lVar60 = 1;
          }
          else {
            lVar60 = _malloc(lVar61);
            if (lVar60 == 0) {
              FUN_107c03c64(1,lVar61);
              break;
            }
          }
          *(long *)(puVar11 + -0x1188) = lVar60;
          *(long *)(puVar11 + -0x10a8) = lVar61;
          _memcpy(lVar60,uVar74,lVar61);
          lVar66 = extraout_x1[0x173];
        }
        *(uint *)(puVar11 + -0x10b4) = (uint)*(byte *)(lVar66 + 2000);
        *(undefined2 *)(*(long *)(puVar11 + -0x1040) + 0xe7b) = 0;
        _memcpy(puVar11 + 0x6d80,extraout_x1 + 0x178,0x2548);
        *(undefined8 *)(puVar11 + 0x6d78) = 1;
        *(undefined8 *)(puVar11 + 0x6d70) = 1;
        lVar61 = _malloc(0x2558);
        if (lVar61 == 0) {
          pcVar22 = (code *)0x8;
          puVar67 = (undefined8 *)0x2558;
code_r0x0001005940cc:
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(pcVar22,puVar67);
          break;
        }
        _memcpy(lVar61,puVar11 + 0x6d70,0x2558);
        *(long *)(puVar11 + 0xb5f0) = lVar61;
        plVar57 = *(long **)(lVar66 + 0x7c8);
        if ((plVar57 != (long *)0x0) && (lVar61 = *plVar57, *plVar57 = lVar61 + 1, lVar61 < 0))
        break;
        *(long **)(puVar11 + 0xb5f8) = plVar57;
        FUN_1011d1078(puVar11 + 0x6d70,extraout_x1 + 0x621);
        FUN_101506a80(puVar11 + 0xb730,extraout_x1[0x173] + 0x248);
        puVar67 = (undefined8 *)extraout_x1[0x175];
code_r0x000100592818:
        __ZN10codex_otel6events17session_telemetry16SessionTelemetry10with_model17h2a5217f9cf3b31a0E
                  (puVar11 + 0xb600,puVar11 + 0xb730,puVar67);
        uVar74 = *(undefined8 *)(extraout_x1[0x173] + 0x798);
        plVar57 = *(long **)(extraout_x1[0x173] + 0x790);
        lVar61 = *plVar57;
        *plVar57 = lVar61 + 1;
        if (lVar61 < 0) break;
        *(undefined8 *)(puVar11 + 0xb868) = uVar74;
        *(long **)(puVar11 + 0xb860) = plVar57;
        bVar27 = *(byte *)(*(long *)(puVar11 + -0x1040) + 0xe80);
        pcVar21 = (code *)(ulong)bVar27;
        uVar55 = (uint)bVar27;
        uVar54 = (uint)bVar27;
        lVar60 = extraout_x1[0x173];
        bVar27 = *(byte *)(lVar60 + 0x7d3);
        pcVar19 = (code *)(ulong)bVar27;
        uVar59 = (uint)bVar27;
        uVar29 = (uint)bVar27;
        uVar20 = *(ulong *)(lVar60 + 0x690);
        lVar61 = uVar20 + 0x7ffffffffffffffa;
        *(undefined8 *)(puVar11 + -0x1098) = 0x8000000000000005;
        if (uVar20 < 0x8000000000000006) {
          lVar61 = 6;
        }
        if (lVar61 < 4) {
          if (lVar61 < 2) {
            if (lVar61 == 0) {
              pcVar30 = (code *)0x8000000000000006;
              uVar29 = uVar59;
              uVar54 = uVar55;
            }
            else {
              pcVar30 = (code *)0x8000000000000007;
              uVar29 = uVar59;
              uVar54 = uVar55;
            }
          }
          else if (lVar61 == 2) {
            pcVar30 = (code *)0x8000000000000008;
            uVar29 = uVar59;
            uVar54 = uVar55;
          }
          else {
            pcVar30 = (code *)0x8000000000000020;
code_r0x0001005929f4:
            pcVar30 = pcVar30 + -0x17;
            uVar29 = (uint)pcVar19;
            uVar54 = (uint)pcVar21;
          }
code_r0x000100592a08:
          *(code **)(puVar11 + 0xb870) = pcVar30;
        }
        else {
          if (lVar61 < 6) {
            if (lVar61 == 4) {
              func_0x000100025ae8(puVar11 + 0xb878,lVar60 + 0x698);
              pcVar30 = (code *)0x800000000000000a;
              uVar29 = uVar59;
              uVar54 = uVar55;
            }
            else {
              pcVar30 = (code *)0x800000000000000b;
              uVar29 = uVar59;
              uVar54 = uVar55;
            }
            goto code_r0x000100592a08;
          }
          if (lVar61 != 6) {
            pcVar30 = (code *)0x800000000000000d;
            uVar29 = uVar59;
            uVar54 = uVar55;
            goto code_r0x000100592a08;
          }
          FUN_1011d1944(puVar11 + 0xb870,lVar60 + 0x690);
        }
        *(uint *)(puVar11 + -0x10bc) = uVar29;
        *(uint *)(puVar11 + -0x10b8) = uVar54;
        lVar61 = extraout_x1[0x173];
        *(uint *)(puVar11 + -0x10c0) = (uint)*(byte *)(lVar61 + 0x7d4);
        unaff_x22 = *(code **)(lVar61 + 0x388);
        if (unaff_x22 == (code *)0x0) {
          *(undefined8 *)(puVar11 + 0xb990) = 0;
          *(undefined8 *)(puVar11 + 0xb998) = 8;
        }
        else {
          pcVar19 = *(code **)(lVar61 + 0x380);
          pcVar21 = (code *)((long)unaff_x22 * 0x50);
code_r0x000100592a3c:
          puVar67 = (undefined8 *)_malloc(pcVar21);
          if (puVar67 == (undefined8 *)0x0) {
            FUN_107c03c64(8,pcVar21);
            break;
          }
          pcVar22 = (code *)0x0;
          *(code **)(puVar11 + 0xb990) = unaff_x22;
          *(undefined8 **)(puVar11 + 0xb998) = puVar67;
          do {
            if (pcVar21 == (code *)0x0) break;
            FUN_10140577c(puVar11 + 0xb730,pcVar19);
            pcVar22 = pcVar22 + 1;
            pcVar19 = pcVar19 + 0x50;
            uVar74 = *(undefined8 *)(puVar11 + 0xb750);
            uVar62 = *(undefined8 *)(puVar11 + 0xb768);
            uVar70 = *(undefined8 *)(puVar11 + 0xb760);
            puVar67[5] = *(undefined8 *)(puVar11 + 0xb758);
            puVar67[4] = uVar74;
            puVar67[7] = uVar62;
            puVar67[6] = uVar70;
            uVar74 = *(undefined8 *)(puVar11 + 0xb770);
            puVar67[9] = *(undefined8 *)(puVar11 + 0xb778);
            puVar67[8] = uVar74;
            uVar70 = *(undefined8 *)(puVar11 + 0xb748);
            uVar74 = *(undefined8 *)(puVar11 + 0xb740);
            uVar62 = *(undefined8 *)(puVar11 + 0xb730);
            puVar67[1] = *(undefined8 *)(puVar11 + 0xb738);
            *puVar67 = uVar62;
            puVar67[3] = uVar70;
            puVar67[2] = uVar74;
            pcVar21 = pcVar21 + -0x50;
            puVar67 = puVar67 + 10;
          } while (unaff_x22 != pcVar22);
          lVar61 = extraout_x1[0x173];
        }
        unaff_x28 = (code *)(puVar11 + 0xb938);
        *(undefined8 *)(puVar11 + 0xb8d8) = *(undefined8 *)(puVar11 + 0xb998);
        *(undefined8 *)(puVar11 + 0xb8d0) = *(undefined8 *)(puVar11 + 0xb990);
        *(code **)(puVar11 + 0xb8e0) = unaff_x22;
        pcVar21 = *(code **)(lVar61 + 0x398);
        pcVar19 = *(code **)(lVar61 + 0x3a0);
        if (pcVar19 == (code *)0x0) {
code_r0x000100592b0c:
          lVar61 = 1;
        }
        else {
          lVar61 = _malloc(pcVar19);
          if (lVar61 == 0) {
            FUN_107c03c64(1,pcVar19);
            break;
          }
        }
        _memcpy(lVar61,pcVar21,pcVar19);
        pcVar30 = (code *)extraout_x1[0x173];
        lVar60 = *(long *)(pcVar30 + 0x498);
        unaff_x25 = (code *)0x8000000000000000;
        *(code **)(puVar11 + -0x10c8) = pcVar19;
        *(long *)(puVar11 + -0x10f8) = lVar61;
        if (lVar60 == -0x8000000000000000) {
          *(undefined8 *)(puVar11 + -0x10d0) = 0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(pcVar30 + 0x4a0);
          lVar61 = *(long *)(pcVar30 + 0x4a8);
          if (lVar61 == 0) {
            lVar60 = 1;
          }
          else {
            lVar60 = _malloc(lVar61);
            if (lVar60 == 0) {
              FUN_107c03c64(1,lVar61);
              break;
            }
          }
          *(long *)(puVar11 + -0x1190) = lVar60;
          *(long *)(puVar11 + -0x10d0) = lVar61;
          _memcpy(lVar60,uVar74,lVar61);
          pcVar30 = (code *)extraout_x1[0x173];
        }
        if (*(long *)(pcVar30 + 0x4b0) != -0x8000000000000000) {
          puVar67 = *(undefined8 **)(pcVar30 + 0x4b8);
          unaff_x25 = *(code **)(pcVar30 + 0x4c0);
          if (unaff_x25 == (code *)0x0) {
            pcVar22 = (code *)0x1;
          }
          else {
            pcVar22 = (code *)_malloc(unaff_x25);
            if (pcVar22 == (code *)0x0) {
              FUN_107c03c64(1,unaff_x25);
              break;
            }
          }
          *(code **)(puVar11 + -0x1198) = pcVar22;
code_r0x000100592bd0:
          _memcpy(pcVar22,puVar67);
          pcVar30 = (code *)extraout_x1[0x173];
        }
        *(code **)(puVar11 + -0x10d8) = unaff_x25;
        unaff_x25 = (code *)0x8000000000000000;
        if (*(long *)(pcVar30 + 0x4c8) == -0x8000000000000000) {
          *(undefined8 *)(puVar11 + -0x10e0) = 0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(pcVar30 + 0x4d0);
          lVar61 = *(long *)(pcVar30 + 0x4d8);
          if (lVar61 == 0) {
            lVar60 = 1;
          }
          else {
            lVar60 = _malloc(lVar61);
            if (lVar60 == 0) {
              FUN_107c03c64(1,lVar61);
              break;
            }
          }
          *(long *)(puVar11 + -0x11a0) = lVar60;
          *(long *)(puVar11 + -0x10e0) = lVar61;
          _memcpy(lVar60,uVar74,lVar61);
code_r0x000100592c34:
          pcVar30 = (code *)extraout_x1[0x173];
        }
        if (*(code **)(pcVar30 + 0x4e0) != unaff_x25) {
          uVar74 = *(undefined8 *)(pcVar30 + 0x4e8);
          unaff_x25 = *(code **)(pcVar30 + 0x4f0);
          if (unaff_x25 == (code *)0x0) {
            lVar61 = 1;
          }
          else {
            lVar61 = _malloc(unaff_x25);
            if (lVar61 == 0) {
              FUN_107c03c64(1,unaff_x25);
              break;
            }
          }
          *(long *)(puVar11 + -0x11a8) = lVar61;
          _memcpy(lVar61,uVar74,unaff_x25);
          pcVar30 = (code *)extraout_x1[0x173];
        }
        *(code **)(puVar11 + -0x10e8) = unaff_x25;
        unaff_x25 = (code *)0x8000000000000000;
        if (*(long *)(pcVar30 + 0x4f8) == -0x8000000000000000) {
          *(undefined8 *)(puVar11 + -0x10f0) = 0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(pcVar30 + 0x500);
          lVar61 = *(long *)(pcVar30 + 0x508);
          if (lVar61 == 0) {
            lVar60 = 1;
          }
          else {
            lVar60 = _malloc(lVar61);
            if (lVar60 == 0) {
              FUN_107c03c64(1,lVar61);
              break;
            }
          }
          *(long *)(puVar11 + -0x11b0) = lVar60;
          *(long *)(puVar11 + -0x10f0) = lVar61;
          _memcpy(lVar60,uVar74,lVar61);
          pcVar30 = (code *)extraout_x1[0x173];
        }
        if (*(long *)(pcVar30 + 0x510) != -0x8000000000000000) {
          puVar67 = *(undefined8 **)(pcVar30 + 0x518);
          unaff_x25 = *(code **)(pcVar30 + 0x520);
          if (unaff_x25 == (code *)0x0) {
            pcVar22 = (code *)0x1;
          }
          else {
            pcVar22 = (code *)_malloc(unaff_x25);
            if (pcVar22 == (code *)0x0) {
              FUN_107c03c64(1,unaff_x25);
              break;
            }
          }
          *(code **)(puVar11 + -0x11b8) = pcVar22;
code_r0x000100592d30:
          _memcpy(pcVar22,puVar67);
          pcVar30 = (code *)extraout_x1[0x173];
        }
        *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0xe7a) = 0;
        uVar74 = extraout_x1[0x67c];
        uVar62 = extraout_x1[0x67f];
        uVar70 = extraout_x1[0x67e];
        *(undefined8 *)(puVar11 + 0xb8f8) = extraout_x1[0x67d];
        *(undefined8 *)(puVar11 + 0xb8f0) = uVar74;
        *(undefined8 *)(puVar11 + 0xb908) = uVar62;
        *(undefined8 *)(puVar11 + 0xb900) = uVar70;
        uVar74 = extraout_x1[0x680];
        uVar62 = extraout_x1[0x683];
        uVar70 = extraout_x1[0x682];
        *(undefined8 *)(puVar11 + 0xb918) = extraout_x1[0x681];
        *(undefined8 *)(puVar11 + 0xb910) = uVar74;
        *(undefined8 *)(puVar11 + 0xb928) = uVar62;
        *(undefined8 *)(puVar11 + 0xb920) = uVar70;
        cVar28 = pcVar30[0x7d5];
        uVar9 = *(uint5 *)(pcVar30 + 0x780);
        pcVar39 = *(code **)(pcVar30 + 0x760);
        lVar61 = *(long *)pcVar39;
        *(long *)pcVar39 = lVar61 + 1;
        if (lVar61 < 0) break;
        uVar72 = *(undefined8 *)(pcVar30 + 0x768);
        pcVar43 = *(code **)(pcVar30 + 0x770);
        *(uint *)(puVar11 + -0x1104) = (uint)(byte)cVar28;
        if (pcVar43 != (code *)0x0) {
          lVar61 = *(long *)pcVar43;
          *(long *)pcVar43 = lVar61 + 1;
          if (lVar61 < 0) break;
          pcVar30 = *(code **)(pcVar30 + 0x778);
        }
        pcVar42 = (code *)(ulong)uVar9;
code_r0x000100592da4:
        *(int *)(puVar11 + 0xb958) = (int)pcVar42;
        puVar11[0xb95c] = (char)((ulong)pcVar42 >> 0x20);
        *(code **)(puVar11 + 0xb938) = pcVar39;
        *(undefined8 *)(puVar11 + 0xb940) = uVar72;
        *(code **)(puVar11 + 0xb948) = pcVar43;
        *(code **)(puVar11 + 0xb950) = pcVar30;
        pcVar21 = (code *)extraout_x1[0x173];
        uVar38 = *(ulong *)(pcVar21 + 0x588);
        pcVar30 = (code *)0x8000000000000000;
        uVar20 = uVar38;
        if (uVar38 < 0x8000000000000001) {
          uVar20 = 0;
        }
        pcVar42 = (code *)(uVar20 & 0x7fffffffffffffff);
        *(code **)(puVar11 + -0x1100) = unaff_x25;
        if (pcVar42 == (code *)0x0) {
          pcVar31 = pcVar21;
          if (uVar38 == 0x8000000000000000) {
            pcVar39 = (code *)0x8000000000000000;
          }
          else {
            func_0x000101149e6c(puVar11 + 0xb730,*(undefined8 *)(pcVar21 + 0x590),
                                *(undefined8 *)(pcVar21 + 0x598));
            pcVar39 = *(code **)(pcVar21 + 0x5a0);
            pcVar30 = *(code **)(puVar11 + 0xb730);
            uVar72 = extraout_x13_00;
code_r0x000100592e4c:
            *(undefined8 *)(puVar11 + 0xb998) = *(undefined8 *)(puVar11 + 0xb740);
            *(undefined8 *)(puVar11 + 0xb990) = *(undefined8 *)(puVar11 + 0xb738);
            pcVar21 = (code *)extraout_x1[0x173];
          }
          cVar28 = pcVar31[0x5a8];
          *(code **)(puVar11 + 0xb960) = pcVar30;
          *(undefined8 *)(puVar11 + 0xb970) = *(undefined8 *)(puVar11 + 0xb998);
          *(undefined8 *)(puVar11 + 0xb968) = *(undefined8 *)(puVar11 + 0xb990);
          *(code **)(puVar11 + 0xb978) = pcVar39;
          unaff_x28 = (code *)(puVar11 + 0xb938);
          puVar11[0xb980] = cVar28;
        }
        else {
code_r0x000100592de8:
          if (pcVar42 == (code *)0x1) {
            *(undefined8 *)(unaff_x28 + 0x28) = 0x8000000000000001;
          }
          else {
            uVar74 = *(undefined8 *)(pcVar21 + 0x588);
            uVar62 = *(undefined8 *)(pcVar21 + 0x5a0);
            uVar70 = *(undefined8 *)(pcVar21 + 0x598);
            *(undefined8 *)(puVar11 + 0xb968) = *(undefined8 *)(pcVar21 + 0x590);
            *(undefined8 *)(puVar11 + 0xb960) = uVar74;
            *(undefined8 *)(puVar11 + 0xb978) = uVar62;
            *(undefined8 *)(puVar11 + 0xb970) = uVar70;
            *(undefined8 *)(unaff_x28 + 0x48) = *(undefined8 *)(pcVar21 + 0x5a8);
          }
        }
        if (*(short *)(pcVar21 + 0x6f0) == 2) {
          *(undefined2 *)(unaff_x28 + 0x58) = 2;
        }
        else {
          plVar57 = *(long **)(pcVar21 + 0x730);
          lVar61 = *plVar57;
          *plVar57 = lVar61 + 1;
          if (lVar61 < 0) break;
          cVar28 = pcVar21[0x758];
          plVar58 = *(long **)(pcVar21 + 0x738);
          lVar61 = *plVar58;
          *plVar58 = lVar61 + 1;
          if ((lVar61 < 0) ||
             ((plVar44 = *(long **)(pcVar21 + 0x740), plVar44 != (long *)0x0 &&
              (lVar61 = *plVar44, *plVar44 = lVar61 + 1, lVar61 < 0)))) break;
          plVar47 = *(long **)(pcVar21 + 0x748);
          if (plVar47 != (long *)0x0) {
            lVar61 = *plVar47;
            *plVar47 = lVar61 + 1;
            if (lVar61 < 0) break;
            uVar72 = *(undefined8 *)(pcVar21 + 0x750);
          }
          uVar62 = *(undefined8 *)(pcVar21 + 0x6f0);
          uVar70 = *(undefined8 *)(pcVar21 + 0x708);
          uVar74 = *(undefined8 *)(pcVar21 + 0x700);
          uVar65 = *(undefined8 *)(pcVar21 + 0x728);
          uVar86 = *(undefined8 *)(pcVar21 + 0x720);
          uVar52 = *(undefined8 *)(pcVar21 + 0x718);
          uVar68 = *(undefined8 *)(pcVar21 + 0x710);
          *(undefined8 *)(puVar11 + 0xb998) = *(undefined8 *)(pcVar21 + 0x6f8);
          *(undefined8 *)(puVar11 + 0xb990) = uVar62;
          *(undefined8 *)(puVar11 + 0xb9a8) = uVar70;
          *(undefined8 *)(puVar11 + 0xb9a0) = uVar74;
          *(undefined8 *)(puVar11 + 0xb9b8) = uVar52;
          *(undefined8 *)(puVar11 + 0xb9b0) = uVar68;
          *(undefined8 *)(puVar11 + 0xb9c8) = uVar65;
          *(undefined8 *)(puVar11 + 0xb9c0) = uVar86;
          *(long **)(puVar11 + 0xb9d0) = plVar57;
          *(long **)(puVar11 + 0xb9d8) = plVar58;
          *(long **)(puVar11 + 0xb9e0) = plVar44;
          *(long **)(puVar11 + 0xb9e8) = plVar47;
          *(undefined8 *)(puVar11 + 0xb9f0) = uVar72;
          puVar11[0xb9f8] = cVar28;
code_r0x000100592f34:
          pcVar21 = (code *)extraout_x1[0x173];
        }
        *(uint *)(puVar11 + -0x1108) = (uint)(byte)pcVar21[0x7d2];
        cVar28 = pcVar21[0x44a];
        cVar3 = pcVar21[0x448];
        func_0x000101149ab0(puVar11 + 0xba90,*(undefined8 *)(pcVar21 + 0x3f0),
                            *(undefined8 *)(pcVar21 + 0x3f8));
        FUN_1011ee9ec(puVar11 + 0xb730,pcVar21 + 0x418);
        *(undefined8 *)(puVar11 + 0xbac8) = *(undefined8 *)(puVar11 + 0xb738);
        *(undefined8 *)(puVar11 + 0xbac0) = *(undefined8 *)(puVar11 + 0xb730);
        *(undefined8 *)(puVar11 + 0xbad8) = *(undefined8 *)(puVar11 + 0xb748);
        *(undefined8 *)(puVar11 + 0xbad0) = *(undefined8 *)(puVar11 + 0xb740);
        *(undefined8 *)(puVar11 + 0xbae8) = *(undefined8 *)(puVar11 + 0xb758);
        *(undefined8 *)(puVar11 + 0xbae0) = *(undefined8 *)(puVar11 + 0xb750);
        func_0x000101149ab0(puVar11 + 0xb730,*(undefined8 *)(pcVar21 + 0x408),
                            *(undefined8 *)(pcVar21 + 0x410));
        cVar4 = pcVar21[0x449];
        puVar11[0xba62] = cVar28;
        puVar11[0xba60] = cVar3;
        *(undefined8 *)(puVar11 + 0xba10) = *(undefined8 *)(puVar11 + 0xbaa0);
        *(undefined8 *)(puVar11 + 0xba08) = *(undefined8 *)(puVar11 + 0xba98);
        *(undefined8 *)(puVar11 + 0xba00) = *(undefined8 *)(puVar11 + 0xba90);
        *(undefined8 *)(puVar11 + 0xba38) = *(undefined8 *)(puVar11 + 0xbac8);
        *(undefined8 *)(puVar11 + 0xba30) = *(undefined8 *)(puVar11 + 0xbac0);
        *(undefined8 *)(puVar11 + 0xba48) = *(undefined8 *)(puVar11 + 0xbad8);
        *(undefined8 *)(puVar11 + 0xba40) = *(undefined8 *)(puVar11 + 0xbad0);
        *(undefined8 *)(puVar11 + 0xba58) = *(undefined8 *)(puVar11 + 0xbae8);
        *(undefined8 *)(puVar11 + 0xba50) = *(undefined8 *)(puVar11 + 0xbae0);
        *(undefined8 *)(puVar11 + 0xba20) = *(undefined8 *)(puVar11 + 0xb738);
        *(undefined8 *)(puVar11 + 0xba18) = *(undefined8 *)(puVar11 + 0xb730);
        *(undefined8 *)(puVar11 + 0xba28) = *(undefined8 *)(puVar11 + 0xb740);
        puVar11[0xba61] = cVar4;
        *(undefined8 *)(puVar11 + 0xba78) = *(undefined8 *)(puVar11 + 0xb5d8);
        *(undefined8 *)(puVar11 + 0xba70) = *(undefined8 *)(puVar11 + 0xb5d0);
        *(undefined8 *)(puVar11 + 0xba80) = *(undefined8 *)(puVar11 + 0xb5e0);
        unaff_x22 = (code *)extraout_x1[0x173];
        if (*(long *)(unaff_x22 + 0x528) == -0x8000000000000000) {
          *(undefined8 *)(puVar11 + 0xba90) = 0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(unaff_x22 + 0x530);
          pcVar21 = *(code **)(unaff_x22 + 0x538);
          if (pcVar21 == (code *)0x0) {
            pcVar25 = (code *)0x1;
          }
          else {
            pcVar25 = (code *)_malloc(pcVar21);
            if (pcVar25 == (code *)0x0) {
              FUN_107c03c64(1,pcVar21);
              break;
            }
          }
          _memcpy(pcVar25,uVar74,pcVar21);
          puVar67 = *(undefined8 **)(unaff_x22 + 0x548);
          pcVar19 = *(code **)(unaff_x22 + 0x550);
          if (pcVar19 == (code *)0x0) {
            pcVar22 = (code *)0x1;
            unaff_x26 = pcVar22;
          }
          else {
            pcVar22 = (code *)_malloc(pcVar19);
            unaff_x26 = pcVar22;
            if (pcVar22 == (code *)0x0) {
              FUN_107c03c64(1,pcVar19);
              break;
            }
          }
code_r0x0001005930a8:
          _memcpy(pcVar22,puVar67);
          *(code **)(puVar11 + 0xba90) = pcVar21;
          *(code **)(puVar11 + 0xba98) = pcVar25;
          *(code **)(puVar11 + 0xbaa0) = pcVar21;
          *(code **)(puVar11 + 0xbaa8) = pcVar19;
          *(code **)(puVar11 + 0xbab0) = unaff_x26;
          *(code **)(puVar11 + 0xbab8) = pcVar19;
          unaff_x22 = (code *)extraout_x1[0x173];
        }
        unaff_x28 = (code *)(puVar11 + 0xb938);
        pcVar19 = (code *)(ulong)(byte)unaff_x22[0x7d1];
        *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0xe79) = 0;
        pcVar30 = (code *)(extraout_x1 + 0x665);
        uVar74 = extraout_x1[0x671];
        uVar62 = extraout_x1[0x674];
        uVar70 = extraout_x1[0x673];
        *(undefined8 *)(puVar11 + 47000) = extraout_x1[0x672];
        *(undefined8 *)(puVar11 + 0xb790) = uVar74;
        *(undefined8 *)(puVar11 + 0xb7a8) = uVar62;
        *(undefined8 *)(puVar11 + 0xb7a0) = uVar70;
        uVar74 = extraout_x1[0x675];
        *(undefined8 *)(puVar11 + 0xb7b8) = extraout_x1[0x676];
        *(undefined8 *)(puVar11 + 0xb7b0) = uVar74;
        pcVar39 = (code *)extraout_x1[0x677];
code_r0x0001005930f8:
        *(code **)(puVar11 + 0xb7c0) = pcVar39;
        uVar74 = *(undefined8 *)(pcVar30 + 0x20);
        uVar62 = *(undefined8 *)(pcVar30 + 0x38);
        uVar70 = *(undefined8 *)(pcVar30 + 0x30);
        *(undefined8 *)(puVar11 + 0xb758) = *(undefined8 *)(pcVar30 + 0x28);
        *(undefined8 *)(puVar11 + 0xb750) = uVar74;
        *(undefined8 *)(puVar11 + 0xb768) = uVar62;
        *(undefined8 *)(puVar11 + 0xb760) = uVar70;
        uVar74 = *(undefined8 *)(pcVar30 + 0x40);
        uVar62 = *(undefined8 *)(pcVar30 + 0x58);
        uVar70 = *(undefined8 *)(pcVar30 + 0x50);
        *(undefined8 *)(puVar11 + 0xb778) = *(undefined8 *)(pcVar30 + 0x48);
        *(undefined8 *)(puVar11 + 0xb770) = uVar74;
        *(undefined8 *)(puVar11 + 0xb788) = uVar62;
        *(undefined8 *)(puVar11 + 0xb780) = uVar70;
        uVar74 = *(undefined8 *)pcVar30;
        uVar62 = *(undefined8 *)(pcVar30 + 0x18);
        uVar70 = *(undefined8 *)(pcVar30 + 0x10);
        *(undefined8 *)(puVar11 + 0xb738) = *(undefined8 *)(pcVar30 + 8);
        *(undefined8 *)(puVar11 + 0xb730) = uVar74;
        *(undefined8 *)(puVar11 + 0xb748) = uVar62;
        *(undefined8 *)(puVar11 + 0xb740) = uVar70;
        uVar74 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar70 = *(undefined8 *)(unaff_x22 + 0x200);
        uVar62 = *(undefined8 *)(unaff_x22 + 0x208);
        *(undefined8 *)(puVar11 + -0x1120) = *(undefined8 *)(unaff_x22 + 0x210);
        *(undefined8 *)(puVar11 + -0x1118) = uVar70;
        *(uint *)(puVar11 + -0x1124) = (uint)(byte)unaff_x22[0x218];
        lVar61 = *(long *)(unaff_x22 + 0x5b0);
        *(undefined8 *)(puVar11 + -0x1110) = uVar74;
        if (lVar61 == *(long *)(puVar11 + -0x1098)) {
          *(long *)(unaff_x28 + 0x188) = *(long *)(puVar11 + -0x1098);
        }
        else {
          FUN_10112c3fc(puVar11 + 0xbac0,unaff_x22 + 0x5b0);
          unaff_x22 = (code *)extraout_x1[0x173];
        }
        *(undefined8 *)(puVar11 + -0x1130) = uVar62;
        pcVar30 = *(code **)(unaff_x22 + 0x558);
        pcVar25 = (code *)0x8000000000000000;
code_r0x00010059317c:
        if (pcVar30 == pcVar25) {
          unaff_x25 = (code *)0x8000000000000000;
        }
        else {
          uVar74 = *(undefined8 *)(unaff_x22 + 0x560);
          unaff_x25 = *(code **)(unaff_x22 + 0x568);
          if (unaff_x25 == (code *)0x0) {
            lVar61 = 1;
          }
          else {
            lVar61 = _malloc(unaff_x25);
            if (lVar61 == 0) {
              FUN_107c03c64(1,unaff_x25);
              break;
            }
          }
          *(long *)(puVar11 + -0x11c0) = lVar61;
          _memcpy(lVar61,uVar74,unaff_x25);
          unaff_x22 = (code *)extraout_x1[0x173];
        }
        if (*(code **)(unaff_x22 + 0x570) != pcVar25) {
          uVar74 = *(undefined8 *)(unaff_x22 + 0x578);
          pcVar25 = *(code **)(unaff_x22 + 0x580);
          if (pcVar25 == (code *)0x0) {
            lVar61 = 1;
          }
          else {
            lVar61 = _malloc(pcVar25);
            if (lVar61 == 0) {
              FUN_107c03c64(1,pcVar25);
              break;
            }
          }
          *(long *)(puVar11 + -0x11c8) = lVar61;
          _memcpy(lVar61,uVar74,pcVar25);
          unaff_x22 = (code *)extraout_x1[0x173];
        }
        uVar74 = extraout_x1[0x678];
        *(undefined8 *)(puVar11 + -0x1140) = extraout_x1[0x679];
        *(undefined8 *)(puVar11 + -0x1138) = uVar74;
        FUN_101146390(puVar11 + 0xbb08,*(undefined8 *)(unaff_x22 + 0x470),
                      *(undefined8 *)(unaff_x22 + 0x478));
        pcVar21 = *(code **)(extraout_x1[0x173] + 0x7a0);
        lVar61 = *(long *)pcVar21;
        *(long *)pcVar21 = lVar61 + 1;
        if (lVar61 < 0) break;
        unaff_x22 = *(code **)(extraout_x1[0x173] + 0x7a8);
        pcVar30 = *(code **)unaff_x22;
        *(code **)unaff_x22 = pcVar30 + 1;
code_r0x000100593260:
        if ((long)pcVar30 < 0) break;
        pcVar30 = (code *)extraout_x1[0x173];
        pcVar39 = *(code **)(pcVar30 + 0x7b0);
code_r0x00010059326c:
        plVar57 = *(long **)(pcVar30 + 0x7b8);
        lVar61 = *(long *)pcVar39;
        *(long *)pcVar39 = lVar61 + 1;
        if ((lVar61 < 0) || (lVar61 = *plVar57, *plVar57 = lVar61 + 1, lVar61 < 0)) break;
        *(code **)(puVar11 + -0x1148) = pcVar39;
        *(int *)(puVar11 + -0x1098) = (int)pcVar19;
        unaff_x26 = *(code **)(extraout_x1[0x173] + 0x7c0);
        lVar61 = *(long *)unaff_x26;
        *(long *)unaff_x26 = lVar61 + 1;
        if (lVar61 < 0) break;
        cVar16 = *(char *)(extraout_x1[0x173] + 0x7d7);
        *(uint *)(puVar11 + -0x1158) = (uint)(*(char *)(extraout_x1[0x173] + 0x7d8) != '\0');
        *(uint *)(puVar11 + -0x1154) = (uint)(cVar16 != '\0');
        *(undefined8 *)(puVar11 + -0x1168) = *(undefined8 *)(puVar11 + 0xb5f0);
        *(undefined8 *)(puVar11 + -0x1160) = *(undefined8 *)(puVar11 + 0xb5f8);
        pcVar19 = *(code **)(puVar11 + 0x6d70);
        _memcpy(puVar11 + 0x3160,puVar11 + 0x6d78,0x1f0);
        _memcpy(puVar11 + 0xbe80,puVar11 + 0xb600,0x130);
        *(undefined8 *)(puVar11 + -0x1178) = *(undefined8 *)(puVar11 + 0xb868);
        *(undefined8 *)(puVar11 + -0x1180) = *(undefined8 *)(puVar11 + 0xb860);
        *(undefined8 *)(puVar11 + 0xbbe8) = *(undefined8 *)(puVar11 + 0xb898);
        *(undefined8 *)(puVar11 + 0xbbe0) = *(undefined8 *)(puVar11 + 0xb890);
        *(undefined8 *)(puVar11 + 0xbbf8) = *(undefined8 *)(puVar11 + 0xb8a8);
        *(undefined8 *)(puVar11 + 0xbbf0) = *(undefined8 *)(puVar11 + 0xb8a0);
        *(undefined8 *)(puVar11 + 0xbc08) = *(undefined8 *)(puVar11 + 0xb8b8);
        *(undefined8 *)(puVar11 + 0xbc00) = *(undefined8 *)(puVar11 + 0xb8b0);
        *(undefined8 *)(puVar11 + 0xbc18) = *(undefined8 *)(puVar11 + 0xb8c8);
        *(undefined8 *)(puVar11 + 0xbc10) = *(undefined8 *)(puVar11 + 0xb8c0);
        *(undefined8 *)(puVar11 + 0xbbc8) = *(undefined8 *)(puVar11 + 0xb878);
        *(undefined8 *)(puVar11 + 0xbbc0) = *(undefined8 *)(puVar11 + 0xb870);
        *(undefined8 *)(puVar11 + 0xbbd8) = *(undefined8 *)(puVar11 + 0xb888);
        *(undefined8 *)(puVar11 + 0xbbd0) = *(undefined8 *)(puVar11 + 0xb880);
        *(undefined8 *)(puVar11 + 0xbe68) = *(undefined8 *)(puVar11 + 0xb8d8);
        *(undefined8 *)(puVar11 + 0xbe60) = *(undefined8 *)(puVar11 + 0xb8d0);
        *(undefined8 *)(puVar11 + 0xbe70) = *(undefined8 *)(puVar11 + 0xb8e0);
        *(undefined8 *)(puVar11 + 0xbe58) = *(undefined8 *)(puVar11 + 0xb928);
        *(undefined8 *)(puVar11 + 0xbe50) = *(undefined8 *)(puVar11 + 0xb920);
        *(undefined8 *)(puVar11 + 0xbe48) = *(undefined8 *)(puVar11 + 0xb918);
        *(undefined8 *)(puVar11 + 0xbe40) = *(undefined8 *)(puVar11 + 0xb910);
        *(undefined8 *)(puVar11 + 0xbe38) = *(undefined8 *)(puVar11 + 0xb908);
        *(undefined8 *)(puVar11 + 0xbe30) = *(undefined8 *)(puVar11 + 0xb900);
        *(undefined8 *)(puVar11 + 0xbe28) = *(undefined8 *)(puVar11 + 0xb8f8);
        *(undefined8 *)(puVar11 + 0xbe20) = *(undefined8 *)(puVar11 + 0xb8f0);
        *(undefined8 *)(puVar11 + 0xbb28) = *(undefined8 *)(puVar11 + 0xb940);
        *(undefined8 *)(puVar11 + 0xbb20) = *(undefined8 *)(puVar11 + 0xb938);
        *(undefined8 *)(puVar11 + 0xbb38) = *(undefined8 *)(puVar11 + 0xb950);
        *(undefined8 *)(puVar11 + 0xbb30) = *(undefined8 *)(puVar11 + 0xb948);
        *(undefined8 *)(puVar11 + 0xbb40) = *(undefined8 *)(puVar11 + 0xb958);
        *(undefined8 *)(puVar11 + 0xbd18) = *(undefined8 *)(puVar11 + 0xb968);
        *(undefined8 *)(puVar11 + 0xbd10) = *(undefined8 *)(puVar11 + 0xb960);
        *(undefined8 *)(puVar11 + 0xbd28) = *(undefined8 *)(puVar11 + 0xb978);
        *(undefined8 *)(puVar11 + 0xbd20) = *(undefined8 *)(puVar11 + 0xb970);
        *(undefined8 *)(puVar11 + 0xbd30) = *(undefined8 *)(puVar11 + 0xb980);
        *(undefined8 *)(puVar11 + 0xbb68) = *(undefined8 *)(puVar11 + 0xb9a8);
        *(undefined8 *)(puVar11 + 0xbb60) = *(undefined8 *)(puVar11 + 0xb9a0);
        *(undefined8 *)(puVar11 + 0xbb58) = *(undefined8 *)(puVar11 + 0xb998);
        *(undefined8 *)(puVar11 + 0xbb50) = *(undefined8 *)(puVar11 + 0xb990);
        *(undefined8 *)(puVar11 + 0xbbb8) = *(undefined8 *)(puVar11 + 0xb9f8);
        *(undefined8 *)(puVar11 + 0xbbb0) = *(undefined8 *)(puVar11 + 0xb9f0);
        *(undefined8 *)(puVar11 + 0xbba8) = *(undefined8 *)(puVar11 + 0xb9e8);
        *(undefined8 *)(puVar11 + 0xbba0) = *(undefined8 *)(puVar11 + 0xb9e0);
        *(undefined8 *)(puVar11 + 0xbb98) = *(undefined8 *)(puVar11 + 0xb9d8);
        *(undefined8 *)(puVar11 + 0xbb90) = *(undefined8 *)(puVar11 + 0xb9d0);
        *(undefined8 *)(puVar11 + 0xbb78) = *(undefined8 *)(puVar11 + 0xb9b8);
        *(undefined8 *)(puVar11 + 0xbb70) = *(undefined8 *)(puVar11 + 0xb9b0);
        *(undefined8 *)(puVar11 + 0xbb88) = *(undefined8 *)(puVar11 + 0xb9c8);
        *(undefined8 *)(puVar11 + 48000) = *(undefined8 *)(puVar11 + 0xb9c0);
        *(undefined8 *)(puVar11 + 0xbdc8) = *(undefined8 *)(puVar11 + 0xba18);
        *(undefined8 *)(puVar11 + 0xbdc0) = *(undefined8 *)(puVar11 + 0xba10);
        *(undefined8 *)(puVar11 + 0xbdb8) = *(undefined8 *)(puVar11 + 0xba08);
        *(undefined8 *)(puVar11 + 0xbdb0) = *(undefined8 *)(puVar11 + 0xba00);
        *(undefined8 *)(puVar11 + 0xbe10) = *(undefined8 *)(puVar11 + 0xba60);
        *(undefined8 *)(puVar11 + 0xbe08) = *(undefined8 *)(puVar11 + 0xba58);
        *(undefined8 *)(puVar11 + 0xbe00) = *(undefined8 *)(puVar11 + 0xba50);
        *(undefined8 *)(puVar11 + 0xbdf8) = *(undefined8 *)(puVar11 + 0xba48);
        *(undefined8 *)(puVar11 + 0xbdf0) = *(undefined8 *)(puVar11 + 0xba40);
        *(undefined8 *)(puVar11 + 0xbdd8) = *(undefined8 *)(puVar11 + 0xba28);
        *(undefined8 *)(puVar11 + 0xbdd0) = *(undefined8 *)(puVar11 + 0xba20);
        *(undefined8 *)(puVar11 + 0xbde8) = *(undefined8 *)(puVar11 + 0xba38);
        *(undefined8 *)(puVar11 + 0xbde0) = *(undefined8 *)(puVar11 + 0xba30);
        *(undefined8 *)(puVar11 + 0xbda0) = *(undefined8 *)(puVar11 + 0xba80);
        *(undefined8 *)(puVar11 + 0xbd98) = *(undefined8 *)(puVar11 + 0xba78);
        *(undefined8 *)(puVar11 + 0xbd90) = *(undefined8 *)(puVar11 + 0xba70);
        *(undefined8 *)(puVar11 + 0xbd68) = *(undefined8 *)(puVar11 + 0xbab8);
        *(undefined8 *)(puVar11 + 0xbd60) = *(undefined8 *)(puVar11 + 0xbab0);
        *(undefined8 *)(puVar11 + 0xbd58) = *(undefined8 *)(puVar11 + 0xbaa8);
        *(undefined8 *)(puVar11 + 0xbd50) = *(undefined8 *)(puVar11 + 0xbaa0);
        *(undefined8 *)(puVar11 + 0xbd48) = *(undefined8 *)(puVar11 + 0xba98);
        *(undefined8 *)(puVar11 + 0xbd40) = *(undefined8 *)(puVar11 + 0xba90);
        *(undefined8 *)(puVar11 + 0xbc38) = *(undefined8 *)(puVar11 + 0xb748);
        *(undefined8 *)(puVar11 + 0xbc30) = *(undefined8 *)(puVar11 + 0xb740);
        *(undefined8 *)(puVar11 + 0xbc28) = *(undefined8 *)(puVar11 + 0xb738);
        *(undefined8 *)(puVar11 + 0xbc20) = *(undefined8 *)(puVar11 + 0xb730);
        *(undefined8 *)(puVar11 + 0xbc78) = *(undefined8 *)(puVar11 + 0xb788);
        *(undefined8 *)(puVar11 + 0xbc70) = *(undefined8 *)(puVar11 + 0xb780);
        *(undefined8 *)(puVar11 + 0xbc68) = *(undefined8 *)(puVar11 + 0xb778);
        *(undefined8 *)(puVar11 + 0xbc60) = *(undefined8 *)(puVar11 + 0xb770);
        *(undefined8 *)(puVar11 + 0xbc58) = *(undefined8 *)(puVar11 + 0xb768);
        *(undefined8 *)(puVar11 + 0xbc50) = *(undefined8 *)(puVar11 + 0xb760);
        *(undefined8 *)(puVar11 + 0xbc48) = *(undefined8 *)(puVar11 + 0xb758);
        *(undefined8 *)(puVar11 + 0xbc40) = *(undefined8 *)(puVar11 + 0xb750);
        *(undefined8 *)(puVar11 + 0xbcb0) = *(undefined8 *)(puVar11 + 0xb7c0);
        *(undefined8 *)(puVar11 + 0xbca8) = *(undefined8 *)(puVar11 + 0xb7b8);
        *(undefined8 *)(puVar11 + 0xbca0) = *(undefined8 *)(puVar11 + 0xb7b0);
        *(undefined8 *)(puVar11 + 0xbc98) = *(undefined8 *)(puVar11 + 0xb7a8);
        *(undefined8 *)(puVar11 + 0xbc90) = *(undefined8 *)(puVar11 + 0xb7a0);
        *(undefined8 *)(puVar11 + 0xbc88) = *(undefined8 *)(puVar11 + 47000);
        *(undefined8 *)(puVar11 + 0xbc80) = *(undefined8 *)(puVar11 + 0xb790);
        *(undefined8 *)(puVar11 + 0xbce8) = *(undefined8 *)(puVar11 + 0xbae8);
        *(undefined8 *)(puVar11 + 0xbce0) = *(undefined8 *)(puVar11 + 0xbae0);
        *(undefined8 *)(puVar11 + 0xbcf8) = *(undefined8 *)(puVar11 + 0xbaf8);
        *(undefined8 *)(puVar11 + 0xbcf0) = *(undefined8 *)(puVar11 + 0xbaf0);
        *(undefined8 *)(puVar11 + 0xbd00) = *(undefined8 *)(puVar11 + 0xbb00);
        *(undefined8 *)(puVar11 + 0xbcd8) = *(undefined8 *)(puVar11 + 0xbad8);
        *(undefined8 *)(puVar11 + 0xbcd0) = *(undefined8 *)(puVar11 + 0xbad0);
        *(undefined8 *)(puVar11 + 0xbcc8) = *(undefined8 *)(puVar11 + 0xbac8);
        *(undefined8 *)(puVar11 + 0xbcc0) = *(undefined8 *)(puVar11 + 0xbac0);
        *(undefined8 *)(puVar11 + 0xbd78) = *(undefined8 *)(puVar11 + 0xbb10);
        *(undefined8 *)(puVar11 + 0xbd70) = *(undefined8 *)(puVar11 + 0xbb08);
        *(undefined8 *)(puVar11 + 0xbd80) = *(undefined8 *)(puVar11 + 0xbb18);
        *(undefined2 *)(*(long *)(puVar11 + -0x1040) + 0xe79) = 0;
        if (extraout_x1[0x662] != 0) {
          _free(extraout_x1[0x663]);
        }
        *(long **)(puVar11 + -0x1150) = plVar57;
        FUN_100e0f5d0(extraout_x1 + 0x621);
        *(undefined2 *)(*(long *)(puVar11 + -0x1040) + 0xe7b) = 0;
        if (extraout_x1[0x174] != 0) {
          _free(extraout_x1[0x175]);
        }
        _memcpy(puVar11 + 0xae30,puVar11 + 0x3160,0x1f0);
        pcVar22 = (code *)_memcpy(puVar11 + 0xad00,puVar11 + 0xbe80,0x130);
        *(undefined8 *)(puVar11 + 0xace8) = *(undefined8 *)(puVar11 + 0xbe68);
        *(undefined8 *)(puVar11 + 0xace0) = *(undefined8 *)(puVar11 + 0xbe60);
        unaff_x28 = (code *)(puVar11 + 0x6d70);
        *(undefined8 *)(puVar11 + 0xacf0) = *(undefined8 *)(puVar11 + 0xbe70);
        *(undefined8 *)(puVar11 + 0xaca8) = *(undefined8 *)(puVar11 + 0xbe28);
        *(undefined8 *)(puVar11 + 0xaca0) = *(undefined8 *)(puVar11 + 0xbe20);
        *(undefined8 *)(puVar11 + 0xacb8) = *(undefined8 *)(puVar11 + 0xbe38);
        *(undefined8 *)(puVar11 + 0xacb0) = *(undefined8 *)(puVar11 + 0xbe30);
        *(undefined8 *)(puVar11 + 0xacc8) = *(undefined8 *)(puVar11 + 0xbe48);
        *(undefined8 *)(puVar11 + 0xacc0) = *(undefined8 *)(puVar11 + 0xbe40);
        *(undefined8 *)(puVar11 + 0xacd8) = *(undefined8 *)(puVar11 + 0xbe58);
        *(undefined8 *)(puVar11 + 0xacd0) = *(undefined8 *)(puVar11 + 0xbe50);
        *(undefined8 *)(puVar11 + 0xac38) = *(undefined8 *)(puVar11 + 0xbdb8);
        *(undefined8 *)(puVar11 + 0xac30) = *(undefined8 *)(puVar11 + 0xbdb0);
        *(undefined8 *)(puVar11 + 0xac48) = *(undefined8 *)(puVar11 + 0xbdc8);
        *(undefined8 *)(puVar11 + 0xac40) = *(undefined8 *)(puVar11 + 0xbdc0);
        *(undefined8 *)(puVar11 + 0xac90) = *(undefined8 *)(puVar11 + 0xbe10);
        *(undefined8 *)(puVar11 + 0xac88) = *(undefined8 *)(puVar11 + 0xbe08);
        *(undefined8 *)(puVar11 + 0xac80) = *(undefined8 *)(puVar11 + 0xbe00);
        *(undefined8 *)(puVar11 + 0xac78) = *(undefined8 *)(puVar11 + 0xbdf8);
        *(undefined8 *)(puVar11 + 0xac70) = *(undefined8 *)(puVar11 + 0xbdf0);
        *(undefined8 *)(puVar11 + 0xac58) = *(undefined8 *)(puVar11 + 0xbdd8);
        *(undefined8 *)(puVar11 + 0xac50) = *(undefined8 *)(puVar11 + 0xbdd0);
        *(undefined8 *)(puVar11 + 0xac68) = *(undefined8 *)(puVar11 + 0xbde8);
        *(undefined8 *)(puVar11 + 0xac60) = *(undefined8 *)(puVar11 + 0xbde0);
        *(undefined8 *)(puVar11 + 0xac18) = *(undefined8 *)(puVar11 + 0xbd98);
        *(undefined8 *)(puVar11 + 0xac10) = *(undefined8 *)(puVar11 + 0xbd90);
        *(undefined8 *)(puVar11 + 0xac20) = *(undefined8 *)(puVar11 + 0xbda0);
        *(undefined8 *)(puVar11 + 0xabf8) = *(undefined8 *)(puVar11 + 0xbd78);
        *(undefined8 *)(puVar11 + 0xabf0) = *(undefined8 *)(puVar11 + 0xbd70);
        *(undefined8 *)(puVar11 + 0xac00) = *(undefined8 *)(puVar11 + 0xbd80);
        *(undefined8 *)(puVar11 + 0xabe8) = *(undefined8 *)(puVar11 + 0xbd68);
        *(undefined8 *)(puVar11 + 44000) = *(undefined8 *)(puVar11 + 0xbd60);
        *(undefined8 *)(puVar11 + 0xabd8) = *(undefined8 *)(puVar11 + 0xbd58);
        *(undefined8 *)(puVar11 + 0xabd0) = *(undefined8 *)(puVar11 + 0xbd50);
        *(undefined8 *)(puVar11 + 0xabc8) = *(undefined8 *)(puVar11 + 0xbd48);
        *(undefined8 *)(puVar11 + 0xabc0) = *(undefined8 *)(puVar11 + 0xbd40);
        *(undefined8 *)(puVar11 + 0xabb0) = *(undefined8 *)(puVar11 + 0xbd30);
        *(undefined8 *)(puVar11 + 0xaba8) = *(undefined8 *)(puVar11 + 0xbd28);
        *(undefined8 *)(puVar11 + 0xaba0) = *(undefined8 *)(puVar11 + 0xbd20);
        *(undefined8 *)(puVar11 + 0xab98) = *(undefined8 *)(puVar11 + 0xbd18);
        *(undefined8 *)(puVar11 + 0xab90) = *(undefined8 *)(puVar11 + 0xbd10);
        *(undefined8 *)(puVar11 + 0xab80) = *(undefined8 *)(puVar11 + 0xbd00);
        *(undefined8 *)(puVar11 + 0xab78) = *(undefined8 *)(puVar11 + 0xbcf8);
        *(undefined8 *)(puVar11 + 0xab70) = *(undefined8 *)(puVar11 + 0xbcf0);
        *(undefined8 *)(puVar11 + 0xab68) = *(undefined8 *)(puVar11 + 0xbce8);
        *(undefined8 *)(puVar11 + 0xab60) = *(undefined8 *)(puVar11 + 0xbce0);
        *(undefined8 *)(puVar11 + 0xab58) = *(undefined8 *)(puVar11 + 0xbcd8);
        *(undefined8 *)(puVar11 + 0xab50) = *(undefined8 *)(puVar11 + 0xbcd0);
        *(undefined8 *)(puVar11 + 0xab48) = *(undefined8 *)(puVar11 + 0xbcc8);
        *(undefined8 *)(puVar11 + 0xab40) = *(undefined8 *)(puVar11 + 0xbcc0);
        *(undefined8 *)(puVar11 + 0xaab8) = *(undefined8 *)(puVar11 + 0xbc38);
        *(undefined8 *)(puVar11 + 0xaab0) = *(undefined8 *)(puVar11 + 0xbc30);
        *(undefined8 *)(puVar11 + 0xaaa8) = *(undefined8 *)(puVar11 + 0xbc28);
        *(undefined8 *)(puVar11 + 0xaaa0) = *(undefined8 *)(puVar11 + 0xbc20);
        *(undefined8 *)(puVar11 + 0xaaf8) = *(undefined8 *)(puVar11 + 0xbc78);
        *(undefined8 *)(puVar11 + 0xaaf0) = *(undefined8 *)(puVar11 + 0xbc70);
        *(undefined8 *)(puVar11 + 0xaae8) = *(undefined8 *)(puVar11 + 0xbc68);
        *(undefined8 *)(puVar11 + 0xaae0) = *(undefined8 *)(puVar11 + 0xbc60);
        *(undefined8 *)(puVar11 + 0xaad8) = *(undefined8 *)(puVar11 + 0xbc58);
        *(undefined8 *)(puVar11 + 0xaad0) = *(undefined8 *)(puVar11 + 0xbc50);
        *(undefined8 *)(puVar11 + 0xaac8) = *(undefined8 *)(puVar11 + 0xbc48);
        *(undefined8 *)(puVar11 + 0xaac0) = *(undefined8 *)(puVar11 + 0xbc40);
        *(undefined8 *)(puVar11 + 0xab30) = *(undefined8 *)(puVar11 + 0xbcb0);
        *(undefined8 *)(puVar11 + 0xab28) = *(undefined8 *)(puVar11 + 0xbca8);
        *(undefined8 *)(puVar11 + 0xab20) = *(undefined8 *)(puVar11 + 0xbca0);
        *(undefined8 *)(puVar11 + 0xab18) = *(undefined8 *)(puVar11 + 0xbc98);
        *(undefined8 *)(puVar11 + 0xab10) = *(undefined8 *)(puVar11 + 0xbc90);
        *(undefined8 *)(puVar11 + 0xab08) = *(undefined8 *)(puVar11 + 0xbc88);
        *(undefined8 *)(puVar11 + 0xab00) = *(undefined8 *)(puVar11 + 0xbc80);
        *(undefined8 *)(puVar11 + 0xaa68) = *(undefined8 *)(puVar11 + 0xbbe8);
        *(undefined8 *)(puVar11 + 0xaa60) = *(undefined8 *)(puVar11 + 0xbbe0);
        *(undefined8 *)(puVar11 + 0xaa78) = *(undefined8 *)(puVar11 + 0xbbf8);
        *(undefined8 *)(puVar11 + 0xaa70) = *(undefined8 *)(puVar11 + 0xbbf0);
        *(undefined8 *)(puVar11 + 0xaa88) = *(undefined8 *)(puVar11 + 0xbc08);
        *(undefined8 *)(puVar11 + 0xaa80) = *(undefined8 *)(puVar11 + 0xbc00);
        *(undefined8 *)(puVar11 + 0xaa98) = *(undefined8 *)(puVar11 + 0xbc18);
        *(undefined8 *)(puVar11 + 0xaa90) = *(undefined8 *)(puVar11 + 0xbc10);
        *(undefined8 *)(puVar11 + 0xaa48) = *(undefined8 *)(puVar11 + 0xbbc8);
        *(undefined8 *)(puVar11 + 0xaa40) = *(undefined8 *)(puVar11 + 0xbbc0);
        *(undefined8 *)(puVar11 + 0xaa58) = *(undefined8 *)(puVar11 + 0xbbd8);
        *(undefined8 *)(puVar11 + 0xaa50) = *(undefined8 *)(puVar11 + 0xbbd0);
        *(undefined8 *)(puVar11 + 0xaa18) = *(undefined8 *)(puVar11 + 0xbb98);
        *(undefined8 *)(puVar11 + 0xaa10) = *(undefined8 *)(puVar11 + 0xbb90);
        *(undefined8 *)(puVar11 + 0xaa28) = *(undefined8 *)(puVar11 + 0xbba8);
        *(undefined8 *)(puVar11 + 0xaa20) = *(undefined8 *)(puVar11 + 0xbba0);
        *(undefined8 *)(puVar11 + 0xaa38) = *(undefined8 *)(puVar11 + 0xbbb8);
        *(undefined8 *)(puVar11 + 0xaa30) = *(undefined8 *)(puVar11 + 0xbbb0);
        *(undefined8 *)(puVar11 + 0xa9d8) = *(undefined8 *)(puVar11 + 0xbb58);
        *(undefined8 *)(puVar11 + 0xa9d0) = *(undefined8 *)(puVar11 + 0xbb50);
        *(undefined8 *)(puVar11 + 0xa9e8) = *(undefined8 *)(puVar11 + 0xbb68);
        *(undefined8 *)(puVar11 + 0xa9e0) = *(undefined8 *)(puVar11 + 0xbb60);
        *(undefined8 *)(puVar11 + 0xaa08) = *(undefined8 *)(puVar11 + 0xbb88);
        *(undefined8 *)(puVar11 + 0xaa00) = *(undefined8 *)(puVar11 + 48000);
        *(undefined8 *)(puVar11 + 0xa9f8) = *(undefined8 *)(puVar11 + 0xbb78);
        *(undefined8 *)(puVar11 + 0xa9f0) = *(undefined8 *)(puVar11 + 0xbb70);
        *(undefined8 *)(puVar11 + 0xa9a8) = *(undefined8 *)(puVar11 + 0xbb28);
        *(undefined8 *)(puVar11 + 0xa9a0) = *(undefined8 *)(puVar11 + 0xbb20);
        *(undefined8 *)(puVar11 + 0xa9b8) = *(undefined8 *)(puVar11 + 0xbb38);
        *(undefined8 *)(puVar11 + 0xa9b0) = *(undefined8 *)(puVar11 + 0xbb30);
        *(undefined8 *)(puVar11 + 0xa9c0) = *(undefined8 *)(puVar11 + 0xbb40);
        **(undefined1 **)(puVar11 + -0x1088) = 1;
        if (pcVar19 != (code *)0x2) {
          *(code **)(puVar11 + -0x11d0) = unaff_x22;
          *(code **)(puVar11 + -0x1088) = pcVar21;
          _memcpy(puVar11 + -0xa80,puVar11 + 0xae30,0x1f0);
          _memcpy(puVar11 + 0xb380,puVar11 + 0xad00,0x130);
          *(undefined8 *)(puVar11 + 0xb368) = *(undefined8 *)(puVar11 + 0xace8);
          *(undefined8 *)(puVar11 + 0xb360) = *(undefined8 *)(puVar11 + 0xace0);
          pcVar21 = (code *)(puVar11 + 0xae30);
          *(undefined8 *)(puVar11 + 0xb370) = *(undefined8 *)(puVar11 + 0xacf0);
          *(undefined8 *)(puVar11 + 0xb328) = *(undefined8 *)(puVar11 + 0xaca8);
          *(undefined8 *)(puVar11 + 0xb320) = *(undefined8 *)(puVar11 + 0xaca0);
          *(undefined8 *)(puVar11 + 0xb338) = *(undefined8 *)(puVar11 + 0xacb8);
          *(undefined8 *)(puVar11 + 0xb330) = *(undefined8 *)(puVar11 + 0xacb0);
          *(undefined8 *)(puVar11 + 0xb348) = *(undefined8 *)(puVar11 + 0xacc8);
          *(undefined8 *)(puVar11 + 0xb340) = *(undefined8 *)(puVar11 + 0xacc0);
          *(undefined8 *)(puVar11 + 0xb358) = *(undefined8 *)(puVar11 + 0xacd8);
          *(undefined8 *)(puVar11 + 0xb350) = *(undefined8 *)(puVar11 + 0xacd0);
          *(undefined8 *)(puVar11 + 0xb310) = *(undefined8 *)(puVar11 + 0xac90);
          *(undefined8 *)(puVar11 + 0xb308) = *(undefined8 *)(puVar11 + 0xac88);
          *(undefined8 *)(puVar11 + 0xb300) = *(undefined8 *)(puVar11 + 0xac80);
          *(undefined8 *)(puVar11 + 0xb2f8) = *(undefined8 *)(puVar11 + 0xac78);
          *(undefined8 *)(puVar11 + 0xb2f0) = *(undefined8 *)(puVar11 + 0xac70);
          *(undefined8 *)(puVar11 + 0xb2b8) = *(undefined8 *)(puVar11 + 0xac38);
          *(undefined8 *)(puVar11 + 0xb2b0) = *(undefined8 *)(puVar11 + 0xac30);
          *(undefined8 *)(puVar11 + 0xb2c8) = *(undefined8 *)(puVar11 + 0xac48);
          *(undefined8 *)(puVar11 + 0xb2c0) = *(undefined8 *)(puVar11 + 0xac40);
          *(undefined8 *)(puVar11 + 0xb2e8) = *(undefined8 *)(puVar11 + 0xac68);
          *(undefined8 *)(puVar11 + 0xb2e0) = *(undefined8 *)(puVar11 + 0xac60);
          *(undefined8 *)(puVar11 + 0xb2d8) = *(undefined8 *)(puVar11 + 0xac58);
          *(undefined8 *)(puVar11 + 0xb2d0) = *(undefined8 *)(puVar11 + 0xac50);
          *(undefined8 *)(puVar11 + 0xb2a0) = *(undefined8 *)(puVar11 + 0xac20);
          *(undefined8 *)(puVar11 + 0xb298) = *(undefined8 *)(puVar11 + 0xac18);
          *(undefined8 *)(puVar11 + 0xb290) = *(undefined8 *)(puVar11 + 0xac10);
          *(undefined8 *)(puVar11 + 0xb280) = *(undefined8 *)(puVar11 + 0xac00);
          *(undefined8 *)(puVar11 + 0xb278) = *(undefined8 *)(puVar11 + 0xabf8);
          *(undefined8 *)(puVar11 + 0xb270) = *(undefined8 *)(puVar11 + 0xabf0);
          *(undefined8 *)(puVar11 + 0xb268) = *(undefined8 *)(puVar11 + 0xabe8);
          *(undefined8 *)(puVar11 + 0xb260) = *(undefined8 *)(puVar11 + 44000);
          *(undefined8 *)(puVar11 + 0xb258) = *(undefined8 *)(puVar11 + 0xabd8);
          *(undefined8 *)(puVar11 + 0xb250) = *(undefined8 *)(puVar11 + 0xabd0);
          *(undefined8 *)(puVar11 + 0xb248) = *(undefined8 *)(puVar11 + 0xabc8);
          *(undefined8 *)(puVar11 + 0xb240) = *(undefined8 *)(puVar11 + 0xabc0);
          *(undefined8 *)(puVar11 + 0xb230) = *(undefined8 *)(puVar11 + 0xabb0);
          *(undefined8 *)(puVar11 + 0xb228) = *(undefined8 *)(puVar11 + 0xaba8);
          *(undefined8 *)(puVar11 + 0xb220) = *(undefined8 *)(puVar11 + 0xaba0);
          *(undefined8 *)(puVar11 + 0xb218) = *(undefined8 *)(puVar11 + 0xab98);
          *(undefined8 *)(puVar11 + 0xb210) = *(undefined8 *)(puVar11 + 0xab90);
          *(undefined8 *)(puVar11 + 0xb200) = *(undefined8 *)(puVar11 + 0xab80);
          *(undefined8 *)(puVar11 + 0xb1f8) = *(undefined8 *)(puVar11 + 0xab78);
          *(undefined8 *)(puVar11 + 0xb1f0) = *(undefined8 *)(puVar11 + 0xab70);
          *(undefined8 *)(puVar11 + 0xb1e8) = *(undefined8 *)(puVar11 + 0xab68);
          *(undefined8 *)(puVar11 + 0xb1e0) = *(undefined8 *)(puVar11 + 0xab60);
          *(undefined8 *)(puVar11 + 0xb1c8) = *(undefined8 *)(puVar11 + 0xab48);
          *(undefined8 *)(puVar11 + 0xb1c0) = *(undefined8 *)(puVar11 + 0xab40);
          *(undefined8 *)(puVar11 + 0xb1d8) = *(undefined8 *)(puVar11 + 0xab58);
          *(undefined8 *)(puVar11 + 0xb1d0) = *(undefined8 *)(puVar11 + 0xab50);
          *(undefined8 *)(puVar11 + 0xb138) = *(undefined8 *)(puVar11 + 0xaab8);
          *(undefined8 *)(puVar11 + 0xb130) = *(undefined8 *)(puVar11 + 0xaab0);
          *(undefined8 *)(puVar11 + 0xb128) = *(undefined8 *)(puVar11 + 0xaaa8);
          *(undefined8 *)(puVar11 + 0xb120) = *(undefined8 *)(puVar11 + 0xaaa0);
          *(undefined8 *)(puVar11 + 0xb178) = *(undefined8 *)(puVar11 + 0xaaf8);
          *(undefined8 *)(puVar11 + 0xb170) = *(undefined8 *)(puVar11 + 0xaaf0);
          *(undefined8 *)(puVar11 + 0xb168) = *(undefined8 *)(puVar11 + 0xaae8);
          *(undefined8 *)(puVar11 + 0xb160) = *(undefined8 *)(puVar11 + 0xaae0);
          *(undefined8 *)(puVar11 + 0xb158) = *(undefined8 *)(puVar11 + 0xaad8);
          *(undefined8 *)(puVar11 + 0xb150) = *(undefined8 *)(puVar11 + 0xaad0);
          *(undefined8 *)(puVar11 + 0xb148) = *(undefined8 *)(puVar11 + 0xaac8);
          *(undefined8 *)(puVar11 + 0xb140) = *(undefined8 *)(puVar11 + 0xaac0);
          *(undefined8 *)(puVar11 + 0xb1b0) = *(undefined8 *)(puVar11 + 0xab30);
          *(undefined8 *)(puVar11 + 0xb1a8) = *(undefined8 *)(puVar11 + 0xab28);
          *(undefined8 *)(puVar11 + 0xb1a0) = *(undefined8 *)(puVar11 + 0xab20);
          *(undefined8 *)(puVar11 + 0xb198) = *(undefined8 *)(puVar11 + 0xab18);
          *(undefined8 *)(puVar11 + 0xb190) = *(undefined8 *)(puVar11 + 0xab10);
          *(undefined8 *)(puVar11 + 0xb188) = *(undefined8 *)(puVar11 + 0xab08);
          *(undefined8 *)(puVar11 + 0xb180) = *(undefined8 *)(puVar11 + 0xab00);
          *(undefined8 *)(puVar11 + 0xb0e8) = *(undefined8 *)(puVar11 + 0xaa68);
          *(undefined8 *)(puVar11 + 0xb0e0) = *(undefined8 *)(puVar11 + 0xaa60);
          *(undefined8 *)(puVar11 + 0xb0f8) = *(undefined8 *)(puVar11 + 0xaa78);
          *(undefined8 *)(puVar11 + 0xb0f0) = *(undefined8 *)(puVar11 + 0xaa70);
          *(undefined8 *)(puVar11 + 0xb108) = *(undefined8 *)(puVar11 + 0xaa88);
          *(undefined8 *)(puVar11 + 0xb100) = *(undefined8 *)(puVar11 + 0xaa80);
          *(undefined8 *)(puVar11 + 0xb118) = *(undefined8 *)(puVar11 + 0xaa98);
          *(undefined8 *)(puVar11 + 0xb110) = *(undefined8 *)(puVar11 + 0xaa90);
          *(undefined8 *)(puVar11 + 0xb0c8) = *(undefined8 *)(puVar11 + 0xaa48);
          *(undefined8 *)(puVar11 + 0xb0c0) = *(undefined8 *)(puVar11 + 0xaa40);
          *(undefined8 *)(puVar11 + 0xb0d8) = *(undefined8 *)(puVar11 + 0xaa58);
          *(undefined8 *)(puVar11 + 0xb0d0) = *(undefined8 *)(puVar11 + 0xaa50);
          *(undefined8 *)(puVar11 + 0xb098) = *(undefined8 *)(puVar11 + 0xaa18);
          *(undefined8 *)(puVar11 + 0xb090) = *(undefined8 *)(puVar11 + 0xaa10);
          *(undefined8 *)(puVar11 + 0xb0a8) = *(undefined8 *)(puVar11 + 0xaa28);
          *(undefined8 *)(puVar11 + 0xb0a0) = *(undefined8 *)(puVar11 + 0xaa20);
          uVar38 = *(ulong *)(puVar11 + 0xaa38);
          uVar20 = *(ulong *)(puVar11 + 0xaa30);
code_r0x0001005938c8:
          *(ulong *)(puVar11 + 0xb0b8) = uVar38;
          *(ulong *)(puVar11 + 0xb0b0) = uVar20;
          uVar38 = *(ulong *)(puVar11 + 0xa9d8);
          uVar20 = *(ulong *)(puVar11 + 0xa9d0);
          uVar70 = *(undefined8 *)(puVar11 + 0xa9e8);
          uVar74 = *(undefined8 *)(puVar11 + 0xa9e0);
code_r0x0001005938d4:
          *(ulong *)(puVar11 + 0xb058) = uVar38;
          *(ulong *)(puVar11 + 0xb050) = uVar20;
          *(undefined8 *)(puVar11 + 0xb068) = uVar70;
          *(undefined8 *)(puVar11 + 0xb060) = uVar74;
          *(undefined8 *)(puVar11 + 0xb088) = *(undefined8 *)(puVar11 + 0xaa08);
          *(undefined8 *)(puVar11 + 0xb080) = *(undefined8 *)(puVar11 + 0xaa00);
          *(undefined8 *)(puVar11 + 0xb078) = *(undefined8 *)(puVar11 + 0xa9f8);
          *(undefined8 *)(puVar11 + 0xb070) = *(undefined8 *)(puVar11 + 0xa9f0);
          *(undefined8 *)(pcVar21 + 0x210) = *(undefined8 *)(unaff_x28 + 0x3c50);
          *(undefined8 *)(puVar11 + 0xb038) = *(undefined8 *)(puVar11 + 0xa9b8);
          *(undefined8 *)(puVar11 + 0xb030) = *(undefined8 *)(puVar11 + 0xa9b0);
          *(undefined8 *)(puVar11 + 0xb028) = *(undefined8 *)(puVar11 + 0xa9a8);
          *(undefined8 *)(puVar11 + 0xb020) = *(undefined8 *)(puVar11 + 0xa9a0);
          FUN_100cbccb8(*(undefined8 *)(puVar11 + -0x1090));
          *(undefined8 *)(puVar11 + 0x6d78) = 1;
          *(undefined8 *)(puVar11 + 0x6d70) = 1;
          *(code **)(puVar11 + 0x6d80) = pcVar19;
          _memcpy(puVar11 + 0x6d88,puVar11 + -0xa80,0x1f0);
          *(undefined8 *)(puVar11 + 0x6f78) = *(undefined8 *)(puVar11 + -0x1110);
          *(undefined8 *)(puVar11 + 0x6f80) = *(undefined8 *)(puVar11 + -0x1118);
          *(undefined8 *)(puVar11 + 0x6f88) = *(undefined8 *)(puVar11 + -0x1130);
          *(undefined8 *)(puVar11 + 0x6f90) = *(undefined8 *)(puVar11 + -0x1120);
          unaff_x28[0x228] = SUB41(*(undefined4 *)(puVar11 + -0x1124),0);
          uVar74 = *(undefined8 *)(puVar11 + -0x1140);
          *(undefined8 *)(unaff_x28 + 0x230) = *(undefined8 *)(puVar11 + -0x1138);
          *(undefined8 *)(unaff_x28 + 0x238) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x10a0);
          *(undefined8 *)(unaff_x28 + 0x240) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x248) = *(undefined8 *)(puVar11 + -0x10b0);
          *(undefined8 *)(unaff_x28 + 0x250) = uVar74;
          _memcpy(puVar11 + 0x6fc8,puVar11 + 0xb380,0x130);
          *(undefined8 *)(unaff_x28 + 0x3a8) = *(undefined8 *)(puVar11 + -0x10f8);
          uVar74 = *(undefined8 *)(puVar11 + -0x1190);
          *(undefined8 *)(unaff_x28 + 0x498) = *(undefined8 *)(puVar11 + -0x1188);
          *(undefined8 *)(unaff_x28 + 0x4b0) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x11a0);
          *(undefined8 *)(unaff_x28 + 0x4c8) = *(undefined8 *)(puVar11 + -0x1198);
          *(undefined8 *)(unaff_x28 + 0x4e0) = uVar74;
          *(undefined8 *)(puVar11 + 0x7100) = *(undefined8 *)(puVar11 + 0xb368);
          *(undefined8 *)(puVar11 + 0x70f8) = *(undefined8 *)(puVar11 + 0xb360);
          *(undefined8 *)(unaff_x28 + 0x398) = *(undefined8 *)(pcVar21 + 0x540);
          uVar74 = *(undefined8 *)(puVar11 + -0x10c8);
          *(undefined8 *)(unaff_x28 + 0x3a0) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x3b0) = uVar74;
          *(undefined8 *)(puVar11 + 0x7130) = *(undefined8 *)(puVar11 + 0xb328);
          *(undefined8 *)(puVar11 + 0x7128) = *(undefined8 *)(puVar11 + 0xb320);
          *(undefined8 *)(puVar11 + 0x7140) = *(undefined8 *)(puVar11 + 0xb338);
          *(undefined8 *)(puVar11 + 0x7138) = *(undefined8 *)(puVar11 + 0xb330);
          *(undefined8 *)(puVar11 + 0x7150) = *(undefined8 *)(puVar11 + 0xb348);
          *(undefined8 *)(puVar11 + 29000) = *(undefined8 *)(puVar11 + 0xb340);
          *(undefined8 *)(puVar11 + 0x7160) = *(undefined8 *)(puVar11 + 0xb358);
          *(undefined8 *)(puVar11 + 0x7158) = *(undefined8 *)(puVar11 + 0xb350);
          *(undefined8 *)(puVar11 + 0x7170) = *(undefined8 *)(puVar11 + 0xb2b8);
          *(undefined8 *)(puVar11 + 0x7168) = *(undefined8 *)(puVar11 + 0xb2b0);
          *(undefined8 *)(puVar11 + 0x7180) = *(undefined8 *)(puVar11 + 0xb2c8);
          *(undefined8 *)(puVar11 + 0x7178) = *(undefined8 *)(puVar11 + 0xb2c0);
          *(undefined8 *)(puVar11 + 0x71b0) = *(undefined8 *)(puVar11 + 0xb2f8);
          *(undefined8 *)(puVar11 + 0x71a8) = *(undefined8 *)(puVar11 + 0xb2f0);
          *(undefined8 *)(puVar11 + 0x71c0) = *(undefined8 *)(puVar11 + 0xb308);
          *(undefined8 *)(puVar11 + 0x71b8) = *(undefined8 *)(puVar11 + 0xb300);
          *(undefined8 *)(puVar11 + 0x7190) = *(undefined8 *)(puVar11 + 0xb2d8);
          *(undefined8 *)(puVar11 + 0x7188) = *(undefined8 *)(puVar11 + 0xb2d0);
          *(undefined8 *)(puVar11 + 0x71a0) = *(undefined8 *)(puVar11 + 0xb2e8);
          *(undefined8 *)(puVar11 + 0x7198) = *(undefined8 *)(puVar11 + 0xb2e0);
          *(undefined8 *)(unaff_x28 + 0x458) = *(undefined8 *)(pcVar21 + 0x4e0);
          uVar70 = *(undefined8 *)(puVar11 + 0xb298);
          uVar74 = *(undefined8 *)(puVar11 + 0xb290);
          *(undefined8 *)(unaff_x28 + 0x470) = *(undefined8 *)(pcVar21 + 0x470);
          *(undefined8 *)(puVar11 + 0x71d8) = uVar70;
          *(undefined8 *)(puVar11 + 0x71d0) = uVar74;
          *(undefined8 *)(puVar11 + 0x71f0) = *(undefined8 *)(puVar11 + 0xb278);
          *(undefined8 *)(puVar11 + 0x71e8) = *(undefined8 *)(puVar11 + 0xb270);
          *(undefined8 *)(unaff_x28 + 0x488) = *(undefined8 *)(pcVar21 + 0x450);
          uVar74 = *(undefined8 *)(puVar11 + -0x10a8);
          *(undefined8 *)(unaff_x28 + 0x490) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x4a0) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x10d8);
          uVar70 = *(undefined8 *)(puVar11 + -0x10d0);
          *(undefined8 *)(unaff_x28 + 0x4a8) = uVar70;
          *(undefined8 *)(unaff_x28 + 0x4b8) = uVar70;
          *(undefined8 *)(unaff_x28 + 0x4c0) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x4d0) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x10e8);
          uVar70 = *(undefined8 *)(puVar11 + -0x10e0);
          *(undefined8 *)(unaff_x28 + 0x4d8) = uVar70;
          *(undefined8 *)(unaff_x28 + 0x4e8) = uVar70;
          *(undefined8 *)(unaff_x28 + 0x4f0) = uVar74;
          uVar70 = *(undefined8 *)(puVar11 + -0x11b0);
          *(undefined8 *)(unaff_x28 + 0x4f8) = *(undefined8 *)(puVar11 + -0x11a8);
          *(undefined8 *)(unaff_x28 + 0x500) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x10f0);
          *(undefined8 *)(unaff_x28 + 0x508) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x510) = uVar70;
          *(undefined8 *)(unaff_x28 + 0x518) = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + -0x1100);
          *(undefined8 *)(unaff_x28 + 0x520) = uVar74;
          *(undefined8 *)(unaff_x28 + 0x528) = *(undefined8 *)(puVar11 + -0x11b8);
          *(undefined8 *)(unaff_x28 + 0x530) = uVar74;
          *(undefined8 *)(puVar11 + 0x72c0) = *(undefined8 *)(puVar11 + 0xb258);
          *(undefined8 *)(puVar11 + 0x72b8) = *(undefined8 *)(puVar11 + 0xb250);
          *(undefined8 *)(puVar11 + 0x72d0) = *(undefined8 *)(puVar11 + 0xb268);
          *(undefined8 *)(puVar11 + 0x72c8) = *(undefined8 *)(puVar11 + 0xb260);
          *(undefined8 *)(puVar11 + 0x72b0) = *(undefined8 *)(puVar11 + 0xb248);
          *(undefined8 *)(puVar11 + 0x72a8) = *(undefined8 *)(puVar11 + 0xb240);
          *(code **)(unaff_x28 + 0x568) = unaff_x25;
          uVar74 = *(undefined8 *)(puVar11 + -0x11c8);
          *(undefined8 *)(unaff_x28 + 0x570) = *(undefined8 *)(puVar11 + -0x11c0);
          *(code **)(unaff_x28 + 0x578) = unaff_x25;
          *(code **)(unaff_x28 + 0x580) = pcVar25;
          *(undefined8 *)(unaff_x28 + 0x588) = uVar74;
          *(code **)(unaff_x28 + 0x590) = pcVar25;
          *(undefined8 *)(puVar11 + 0x7310) = *(undefined8 *)(puVar11 + 0xb218);
          *(undefined8 *)(puVar11 + 0x7308) = *(undefined8 *)(puVar11 + 0xb210);
          *(undefined8 *)(puVar11 + 0x7320) = *(undefined8 *)(puVar11 + 0xb228);
          *(undefined8 *)(puVar11 + 0x7318) = *(undefined8 *)(puVar11 + 0xb220);
          *(undefined8 *)(unaff_x28 + 0x5b8) = *(undefined8 *)(pcVar21 + 0x400);
          uVar86 = *(undefined8 *)(puVar11 + 0xb1d8);
          uVar62 = *(undefined8 *)(puVar11 + 0xb1d0);
          *(undefined8 *)(puVar11 + 0x7338) = *(undefined8 *)(puVar11 + 0xb1c8);
          *(undefined8 *)(puVar11 + 0x7330) = *(undefined8 *)(puVar11 + 0xb1c0);
          uVar70 = *(undefined8 *)(puVar11 + 0xb1e8);
          uVar74 = *(undefined8 *)(puVar11 + 0xb1e0);
          uVar68 = *(undefined8 *)(puVar11 + 0xb1f8);
          uVar65 = *(undefined8 *)(puVar11 + 0xb1f0);
          *(undefined8 *)(unaff_x28 + 0x600) = *(undefined8 *)(pcVar21 + 0x3d0);
          *(undefined8 *)(puVar11 + 0x7368) = uVar68;
          *(undefined8 *)(puVar11 + 0x7360) = uVar65;
          *(undefined8 *)(puVar11 + 0x7358) = uVar70;
          *(undefined8 *)(puVar11 + 0x7350) = uVar74;
          *(undefined8 *)(puVar11 + 0x7348) = uVar86;
          *(undefined8 *)(puVar11 + 0x7340) = uVar62;
          *(undefined8 *)(puVar11 + 0x7380) = *(undefined8 *)(puVar11 + 0xb128);
          *(undefined8 *)(puVar11 + 0x7378) = *(undefined8 *)(puVar11 + 0xb120);
          *(undefined8 *)(puVar11 + 0x7390) = *(undefined8 *)(puVar11 + 0xb138);
          *(undefined8 *)(puVar11 + 0x7388) = *(undefined8 *)(puVar11 + 0xb130);
          *(undefined8 *)(puVar11 + 0x73c0) = *(undefined8 *)(puVar11 + 0xb168);
          *(undefined8 *)(puVar11 + 0x73b8) = *(undefined8 *)(puVar11 + 0xb160);
          *(undefined8 *)(puVar11 + 0x73d0) = *(undefined8 *)(puVar11 + 0xb178);
          *(undefined8 *)(puVar11 + 0x73c8) = *(undefined8 *)(puVar11 + 0xb170);
          *(undefined8 *)(puVar11 + 0x73a0) = *(undefined8 *)(puVar11 + 0xb148);
          *(undefined8 *)(puVar11 + 0x7398) = *(undefined8 *)(puVar11 + 0xb140);
          *(undefined8 *)(puVar11 + 0x73b0) = *(undefined8 *)(puVar11 + 0xb158);
          *(undefined8 *)(puVar11 + 0x73a8) = *(undefined8 *)(puVar11 + 0xb150);
          uVar74 = *(undefined8 *)(pcVar21 + 0x380);
          *(undefined8 *)(puVar11 + 0x73f0) = *(undefined8 *)(puVar11 + 0xb198);
          *(undefined8 *)(puVar11 + 0x73e8) = *(undefined8 *)(puVar11 + 0xb190);
          *(undefined8 *)(puVar11 + 0x7400) = *(undefined8 *)(puVar11 + 0xb1a8);
          *(undefined8 *)(puVar11 + 0x73f8) = *(undefined8 *)(puVar11 + 0xb1a0);
          *(undefined8 *)(puVar11 + 0x73e0) = *(undefined8 *)(puVar11 + 0xb188);
          *(undefined8 *)(puVar11 + 0x73d8) = *(undefined8 *)(puVar11 + 0xb180);
          *(undefined8 *)(unaff_x28 + 0x698) = uVar74;
          *(undefined8 *)(puVar11 + 0x7438) = *(undefined8 *)(puVar11 + 0xb0e8);
          *(undefined8 *)(puVar11 + 0x7430) = *(undefined8 *)(puVar11 + 0xb0e0);
          *(undefined8 *)(puVar11 + 0x7448) = *(undefined8 *)(puVar11 + 0xb0f8);
          *(undefined8 *)(puVar11 + 0x7440) = *(undefined8 *)(puVar11 + 0xb0f0);
          *(undefined8 *)(puVar11 + 0x7458) = *(undefined8 *)(puVar11 + 0xb108);
          *(undefined8 *)(puVar11 + 0x7450) = *(undefined8 *)(puVar11 + 0xb100);
          *(undefined8 *)(puVar11 + 0x7468) = *(undefined8 *)(puVar11 + 0xb118);
          *(undefined8 *)(puVar11 + 0x7460) = *(undefined8 *)(puVar11 + 0xb110);
          *(undefined8 *)(puVar11 + 0x7418) = *(undefined8 *)(puVar11 + 0xb0c8);
          *(undefined8 *)(puVar11 + 0x7410) = *(undefined8 *)(puVar11 + 0xb0c0);
          *(undefined8 *)(puVar11 + 0x7428) = *(undefined8 *)(puVar11 + 0xb0d8);
          *(undefined8 *)(puVar11 + 0x7420) = *(undefined8 *)(puVar11 + 0xb0d0);
          *(undefined8 *)(puVar11 + 0x74a8) = *(undefined8 *)(puVar11 + 0xb088);
          *(undefined8 *)(puVar11 + 0x74a0) = *(undefined8 *)(puVar11 + 0xb080);
          *(undefined8 *)(puVar11 + 0x74b8) = *(undefined8 *)(puVar11 + 0xb098);
          *(undefined8 *)(puVar11 + 0x74b0) = *(undefined8 *)(puVar11 + 0xb090);
          *(undefined8 *)(puVar11 + 0x74c8) = *(undefined8 *)(puVar11 + 0xb0a8);
          *(undefined8 *)(puVar11 + 0x74c0) = *(undefined8 *)(puVar11 + 0xb0a0);
          *(undefined8 *)(puVar11 + 0x74d8) = *(undefined8 *)(puVar11 + 0xb0b8);
          *(undefined8 *)(puVar11 + 0x74d0) = *(undefined8 *)(puVar11 + 0xb0b0);
          *(undefined8 *)(puVar11 + 0x7478) = *(undefined8 *)(puVar11 + 0xb058);
          *(undefined8 *)(puVar11 + 0x7470) = *(undefined8 *)(puVar11 + 0xb050);
          *(undefined8 *)(puVar11 + 0x7488) = *(undefined8 *)(puVar11 + 0xb068);
          *(undefined8 *)(puVar11 + 0x7480) = *(undefined8 *)(puVar11 + 0xb060);
          *(undefined8 *)(puVar11 + 0x7498) = *(undefined8 *)(puVar11 + 0xb078);
          *(undefined8 *)(puVar11 + 0x7490) = *(undefined8 *)(puVar11 + 0xb070);
          *(undefined8 *)(unaff_x28 + 0x790) = *(undefined8 *)(pcVar21 + 0x210);
          *(undefined8 *)(puVar11 + 0x74f8) = *(undefined8 *)(puVar11 + 0xb038);
          *(undefined8 *)(puVar11 + 0x74f0) = *(undefined8 *)(puVar11 + 0xb030);
          *(undefined8 *)(puVar11 + 0x74e8) = *(undefined8 *)(puVar11 + 0xb028);
          *(undefined8 *)(puVar11 + 0x74e0) = *(undefined8 *)(puVar11 + 0xb020);
          *(undefined8 *)(unaff_x28 + 0x798) = *(undefined8 *)(puVar11 + -0x1168);
          *(undefined8 *)(puVar11 + 0x7518) = *(undefined8 *)(puVar11 + -0x1178);
          *(undefined8 *)(puVar11 + 0x7510) = *(undefined8 *)(puVar11 + -0x1180);
          *(undefined8 *)(unaff_x28 + 0x7b0) = *(undefined8 *)(puVar11 + -0x1088);
          *(undefined8 *)(unaff_x28 + 0x7b8) = *(undefined8 *)(puVar11 + -0x11d0);
          uVar74 = *(undefined8 *)(puVar11 + -0x1150);
          *(undefined8 *)(unaff_x28 + 0x7c0) = *(undefined8 *)(puVar11 + -0x1148);
          *(undefined8 *)(unaff_x28 + 0x7c8) = uVar74;
          *(code **)(unaff_x28 + 2000) = unaff_x26;
          *(undefined8 *)(unaff_x28 + 0x7d8) = *(undefined8 *)(puVar11 + -0x1160);
          unaff_x28[0x7e0] = SUB41(*(undefined4 *)(puVar11 + -0x10b4),0);
          unaff_x28[0x7e1] = SUB41(*(undefined4 *)(puVar11 + -0x1098),0);
          unaff_x28[0x7e2] = SUB41(*(undefined4 *)(puVar11 + -0x1108),0);
          unaff_x28[0x7e3] = SUB41(*(undefined4 *)(puVar11 + -0x10bc),0);
          unaff_x28[0x7e4] = SUB41(*(undefined4 *)(puVar11 + -0x10c0),0);
          unaff_x28[0x7e5] = SUB41(*(undefined4 *)(puVar11 + -0x1104),0);
          unaff_x28[0x7e6] = SUB41(*(undefined4 *)(puVar11 + -0x10b8),0);
          uVar50 = *(undefined4 *)(puVar11 + -0x1158);
          unaff_x28[0x7e7] = SUB41(*(undefined4 *)(puVar11 + -0x1154),0);
          unaff_x28[0x7e8] = SUB41(uVar50,0);
          lVar61 = _malloc(0x7f0);
          if (lVar61 == 0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x7f0);
            break;
          }
          _memcpy(lVar61,puVar11 + 0x6d70,0x7f0);
          extraout_x1[0x167] = lVar61;
          lVar66 = *(long *)(lVar61 + 0x10);
          lVar60 = 8;
          if ((int)lVar66 == 0) {
            lVar60 = 0x18;
          }
          unaff_x26 = *(code **)(puVar11 + -0x1080);
          unaff_x28 = *(code **)(puVar11 + -0x1060);
          pcVar19 = *(code **)(puVar11 + -0x1058);
          if (*(long *)(lVar61 + 0x20) == 0 && lVar66 == 0) {
code_r0x000100593d60:
            pcVar21 = (code *)0x0;
code_r0x000100593f58:
            pcVar19 = (code *)0x8000000000000020;
code_r0x000100593fbc:
            lVar61 = *(long *)puVar53[0x167];
            *(long *)puVar53[0x167] = lVar61 + -1;
            LORelease();
            if (lVar61 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(puVar53 + 0x167);
            }
          }
          else {
            uVar18 = *(ulong *)(lVar61 + 0x1e8);
            uVar20 = *(ulong *)(lVar61 + 0x10 + lVar60);
            uVar38 = uVar20 * uVar18;
            if (SUB168(SEXT816((long)uVar20) * SEXT816((long)uVar18),8) != (long)uVar38 >> 0x3f) {
              uVar38 = (long)(uVar20 ^ uVar18) >> 0x3f ^ 0x7fffffffffffffff;
            }
            extraout_x1[0x168] = (long)uVar38 / 100;
            lVar60 = *(long *)extraout_x1[0x165];
            lVar66 = *(long *)(lVar60 + 0x10);
            lVar61 = 8;
            if ((int)lVar66 == 0) {
              lVar61 = 0x18;
            }
            if (*(long *)(lVar60 + 0x20) == 0 && lVar66 == 0) goto code_r0x000100593d60;
            uVar38 = *(ulong *)(lVar60 + 0x1e8);
            uVar18 = *(ulong *)(lVar60 + 0x10 + lVar61);
            uVar20 = uVar18 * uVar38;
            if (SUB168(SEXT816((long)uVar18) * SEXT816((long)uVar38),8) != (long)uVar20 >> 0x3f) {
              uVar20 = (long)(uVar18 ^ uVar38) >> 0x3f ^ 0x7fffffffffffffff;
            }
            extraout_x1[0x169] = (long)uVar20 / 100;
            extraout_x1[0x16e] = *(long *)extraout_x1[0x164] + 0x10;
            *(undefined1 *)(extraout_x1 + 0x17e) = 0;
code_r0x000100593d48:
            auVar124 = FUN_1005ab94c(extraout_x1 + 0x16e,*(undefined8 *)(puVar11 + -0x1028));
            pcVar22 = auVar124._0_8_;
            if (((ulong)pcVar22 & 1) != 0) {
              cVar28 = (code)0x5;
              goto code_r0x000100591cb0;
            }
            if ((((*(char *)(extraout_x1 + 0x17e) == '\x03') &&
                 (*(char *)(extraout_x1 + 0x17d) == '\x03')) &&
                (*(char *)(extraout_x1 + 0x17c) == '\x03')) &&
               (*(char *)(extraout_x1 + 0x173) == '\x04')) {
              *(code **)(puVar11 + -0x1060) = unaff_x28;
              *(code **)(puVar11 + -0x1058) = pcVar19;
              *(code **)(puVar11 + -0x1080) = unaff_x26;
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (extraout_x1 + 0x174);
              puVar53 = *(undefined8 **)(puVar11 + -0x1048);
              unaff_x26 = *(code **)(puVar11 + -0x1080);
              unaff_x28 = *(code **)(puVar11 + -0x1060);
              pcVar19 = *(code **)(puVar11 + -0x1058);
              if (puVar53[0x175] != 0) {
                (**(code **)(puVar53[0x175] + 0x18))(puVar53[0x176]);
              }
            }
            lVar61 = *(long *)puVar53[0x165];
            if (*(char *)(*(long *)(lVar61 + 0x798) + 0x252c) != '\x01') {
              uVar20 = *(ulong *)(lVar61 + 0x10);
              if (*(long *)(lVar61 + 0x20) == 0 && uVar20 == 0) {
                iVar17 = *(int *)(lVar61 + 0x30);
                lVar60 = *(long *)(lVar61 + 0x38);
              }
              else {
                lVar60 = 8;
                if ((uVar20 & 1) == 0) {
                  lVar60 = 0x18;
                }
                lVar66 = (*(long *)(lVar61 + 0x10 + lVar60) * 9) / 10;
                lVar60 = lVar66;
                if (*(long *)(lVar61 + 0x38) <= lVar66) {
                  lVar60 = *(long *)(lVar61 + 0x38);
                }
                if (*(int *)(lVar61 + 0x30) == 0) {
                  lVar60 = lVar66;
                }
                iVar17 = 1;
              }
              if ((iVar17 == 0) || (auVar124._8_8_ <= lVar60)) goto code_r0x000100593de8;
code_r0x000100593ffc:
              if (((*(long *)(puVar53[0x167] + 0x50) == *(long *)(lVar61 + 0x50)) &&
                  (iVar17 = _memcmp(*(undefined8 *)(puVar53[0x167] + 0x48),
                                    *(undefined8 *)(lVar61 + 0x48)), iVar17 == 0)) ||
                 ((long)puVar53[0x168] <= (long)puVar53[0x169])) goto code_r0x000100594058;
              puVar53[0x16e] = puVar53[0x164];
              puVar53[0x16f] = puVar53 + 0x167;
              puVar53[0x170] = puVar53[0x166];
              *(undefined4 *)(puVar53 + 0x171) = 0x1010200;
code_r0x000100591790:
              *(code **)(puVar11 + -0x1058) = pcVar19;
              pcVar22 = (code *)FUN_10057da14(puVar11 + 0x6d70,puVar53 + 0x16e,
                                              *(undefined8 *)(puVar11 + -0x1028));
              pcVar19 = *(code **)(puVar11 + 0x6d70);
              if (pcVar19 == (code *)0x8000000000000021) {
                cVar28 = (code)0x6;
                goto code_r0x0001005914c0;
              }
              pcVar21 = (code *)(ulong)(byte)puVar11[0x6d78];
              *(undefined8 *)(puVar11 + 0xb518) = *(undefined8 *)(puVar11 + 0x6de1);
              *(undefined8 *)(puVar11 + 0xb510) = *(undefined8 *)(puVar11 + 0x6dd9);
              *(undefined8 *)(puVar11 + 0xb528) = *(undefined8 *)(puVar11 + 0x6df1);
              *(undefined8 *)(puVar11 + 0xb520) = *(undefined8 *)(puVar11 + 0x6de9);
              *(undefined8 *)(puVar11 + 0xb537) = *(undefined8 *)(puVar11 + 0x6e00);
              *(undefined8 *)(puVar11 + 0xb52f) = *(undefined8 *)(puVar11 + 0x6df8);
              *(undefined8 *)(puVar11 + 0xb4d8) = *(undefined8 *)(puVar11 + 0x6da1);
              *(undefined8 *)(puVar11 + 0xb4d0) = *(undefined8 *)(puVar11 + 0x6d99);
              *(undefined8 *)(puVar11 + 0xb4e8) = *(undefined8 *)(puVar11 + 0x6db1);
              *(undefined8 *)(puVar11 + 0xb4e0) = *(undefined8 *)(puVar11 + 0x6da9);
              *(undefined8 *)(puVar11 + 0xb508) = *(undefined8 *)(puVar11 + 0x6dd1);
              *(undefined8 *)(puVar11 + 0xb500) = *(undefined8 *)(puVar11 + 0x6dc9);
              *(undefined8 *)(puVar11 + 0xb4f8) = *(undefined8 *)(puVar11 + 0x6dc1);
              *(undefined8 *)(puVar11 + 0xb4f0) = *(undefined8 *)(puVar11 + 0x6db9);
              *(undefined8 *)(puVar11 + 0xb4c8) = *(undefined8 *)(puVar11 + 0x6d91);
              *(undefined8 *)(puVar11 + 0xb4c0) = *(undefined8 *)(puVar11 + 0x6d89);
              *(undefined8 *)(puVar11 + 0xb4b8) = *(undefined8 *)(puVar11 + 0x6d81);
              *(undefined8 *)(puVar11 + 0xb4b0) = *(undefined8 *)(puVar11 + 0x6d79);
              cVar16 = *(char *)(puVar53 + 0x171);
              if (cVar16 == '\x05') {
                func_0x000100e8b4b8(puVar53 + 0x172);
              }
              else if (cVar16 == '\x04') {
                func_0x000100ccde68(puVar53 + 0x172);
              }
              else if (cVar16 == '\x03') {
code_r0x000100592738:
                func_0x000100cd84bc(puVar53 + 0x172);
              }
              if (pcVar19 == (code *)0x8000000000000020) {
                pcVar21 = (code *)0x1;
                goto code_r0x000100593f58;
              }
              *(undefined8 *)(puVar11 + 0xb5a8) = *(undefined8 *)(puVar11 + 0xb518);
              *(undefined8 *)(puVar11 + 0xb5a0) = *(undefined8 *)(puVar11 + 0xb510);
              *(undefined8 *)(puVar11 + 0xb5b8) = *(undefined8 *)(puVar11 + 0xb528);
              *(undefined8 *)(puVar11 + 0xb5b0) = *(undefined8 *)(puVar11 + 0xb520);
              *(undefined8 *)(puVar11 + 0xb5c7) = *(undefined8 *)(puVar11 + 0xb537);
              *(undefined8 *)(puVar11 + 0xb5bf) = *(undefined8 *)(puVar11 + 0xb52f);
              *(undefined8 *)(puVar11 + 0xb568) = *(undefined8 *)(puVar11 + 0xb4d8);
              *(undefined8 *)(puVar11 + 0xb560) = *(undefined8 *)(puVar11 + 0xb4d0);
              *(undefined8 *)(puVar11 + 0xb578) = *(undefined8 *)(puVar11 + 0xb4e8);
              *(undefined8 *)(puVar11 + 0xb570) = *(undefined8 *)(puVar11 + 0xb4e0);
              *(undefined8 *)(puVar11 + 0xb598) = *(undefined8 *)(puVar11 + 0xb508);
              *(undefined8 *)(puVar11 + 0xb590) = *(undefined8 *)(puVar11 + 0xb500);
              *(undefined8 *)(puVar11 + 0xb588) = *(undefined8 *)(puVar11 + 0xb4f8);
              *(undefined8 *)(puVar11 + 0xb580) = *(undefined8 *)(puVar11 + 0xb4f0);
              *(undefined8 *)(puVar11 + 0xb558) = *(undefined8 *)(puVar11 + 0xb4c8);
              *(undefined8 *)(puVar11 + 0xb550) = *(undefined8 *)(puVar11 + 0xb4c0);
              *(undefined8 *)(puVar11 + 0xb548) = *(undefined8 *)(puVar11 + 0xb4b8);
              *(undefined8 *)(puVar11 + 0xb540) = *(undefined8 *)(puVar11 + 0xb4b0);
              goto code_r0x000100593fbc;
            }
code_r0x000100593de8:
            if ((long)puVar53[0x169] <= auVar124._8_8_) goto code_r0x000100593ffc;
code_r0x000100594058:
            *(code **)(puVar11 + -0x1058) = pcVar19;
            lVar61 = *(long *)puVar53[0x167];
            *(long *)puVar53[0x167] = lVar61 + -1;
            LORelease();
            if (lVar61 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(puVar53 + 0x167);
              pcVar21 = (code *)0x0;
              pcVar19 = (code *)0x8000000000000020;
            }
            else {
              pcVar21 = (code *)0x0;
              pcVar19 = (code *)0x8000000000000020;
            }
          }
          *(undefined1 *)(puVar53 + 0x16d) = 0;
          goto code_r0x0001005914e4;
        }
        unaff_x28 = *(code **)(puVar11 + -0x1060);
        pcVar19 = *(code **)(puVar11 + -0x1058);
      }
      cVar28 = (code)0x4;
      goto code_r0x000100591cb0;
    }
    pcVar21 = (code *)0x0;
    pcVar19 = (code *)0x8000000000000020;
    unaff_x26 = *(code **)(puVar11 + -0x1080);
    unaff_x28 = *(code **)(puVar11 + -0x1060);
code_r0x0001005914e4:
    *(undefined8 *)(puVar11 + -0xc58) = *(undefined8 *)(puVar11 + 0xb5a8);
    *(undefined8 *)(puVar11 + -0xc60) = *(undefined8 *)(puVar11 + 0xb5a0);
    *(undefined8 *)(puVar11 + -0xc48) = *(undefined8 *)(puVar11 + 0xb5b8);
    *(undefined8 *)(puVar11 + -0xc50) = *(undefined8 *)(puVar11 + 0xb5b0);
    *(undefined8 *)(puVar11 + -0xc39) = *(undefined8 *)(puVar11 + 0xb5c7);
    *(undefined8 *)(puVar11 + -0xc41) = *(undefined8 *)(puVar11 + 0xb5bf);
    *(undefined8 *)(puVar11 + -0xc98) = *(undefined8 *)(puVar11 + 0xb568);
    *(undefined8 *)(puVar11 + -0xca0) = *(undefined8 *)(puVar11 + 0xb560);
    *(undefined8 *)(puVar11 + -0xc88) = *(undefined8 *)(puVar11 + 0xb578);
    *(undefined8 *)(puVar11 + -0xc90) = *(undefined8 *)(puVar11 + 0xb570);
    *(undefined8 *)(puVar11 + -0xc68) = *(undefined8 *)(puVar11 + 0xb598);
    *(undefined8 *)(puVar11 + -0xc70) = *(undefined8 *)(puVar11 + 0xb590);
    *(undefined8 *)(puVar11 + -0xc78) = *(undefined8 *)(puVar11 + 0xb588);
    *(undefined8 *)(puVar11 + -0xc80) = *(undefined8 *)(puVar11 + 0xb580);
    uVar38 = *(ulong *)(puVar11 + 0xb558);
    uVar20 = *(ulong *)(puVar11 + 0xb550);
    uVar70 = *(undefined8 *)(puVar11 + 0xb548);
    uVar74 = *(undefined8 *)(puVar11 + 0xb540);
code_r0x000100591524:
    *(ulong *)(puVar11 + -0xca8) = uVar38;
    *(ulong *)(puVar11 + -0xcb0) = uVar20;
    *(undefined8 *)(puVar11 + -0xcb8) = uVar70;
    *(undefined8 *)(puVar11 + -0xcc0) = uVar74;
    cVar28 = (code)0x1;
    pcVar39 = *(code **)(puVar11 + -0x1058);
code_r0x000100591534:
    *pcVar39 = cVar28;
    *(undefined8 *)(puVar11 + -0xbf8) = *(undefined8 *)(puVar11 + -0xc88);
    *(undefined8 *)(puVar11 + -0xc00) = *(undefined8 *)(puVar11 + -0xc90);
    *(undefined8 *)(puVar11 + -0xc08) = *(undefined8 *)(puVar11 + -0xc98);
    *(undefined8 *)(puVar11 + -0xc10) = *(undefined8 *)(puVar11 + -0xca0);
    *(undefined8 *)(puVar11 + -0xc28) = *(undefined8 *)(puVar11 + -0xcb8);
    *(undefined8 *)(puVar11 + -0xc30) = *(undefined8 *)(puVar11 + -0xcc0);
    *(undefined8 *)(puVar11 + -0xc18) = *(undefined8 *)(puVar11 + -0xca8);
    *(undefined8 *)(puVar11 + -0xc20) = *(undefined8 *)(puVar11 + -0xcb0);
    *(undefined8 *)(puVar11 + -0xba9) = *(undefined8 *)(puVar11 + -0xc39);
    *(undefined8 *)(puVar11 + -0xbb1) = *(undefined8 *)(puVar11 + -0xc41);
    *(undefined8 *)(puVar11 + -3000) = *(undefined8 *)(puVar11 + -0xc48);
    *(undefined8 *)(puVar11 + -0xbc0) = *(undefined8 *)(puVar11 + -0xc50);
    *(undefined8 *)(puVar11 + -0xbc8) = *(undefined8 *)(puVar11 + -0xc58);
    *(undefined8 *)(puVar11 + -0xbd0) = *(undefined8 *)(puVar11 + -0xc60);
    *(undefined8 *)(puVar11 + -0xbe8) = *(undefined8 *)(puVar11 + -0xc78);
    *(undefined8 *)(puVar11 + -0xbf0) = *(undefined8 *)(puVar11 + -0xc80);
    *(undefined8 *)(puVar11 + -0xbd8) = *(undefined8 *)(puVar11 + -0xc68);
    *(undefined8 *)(puVar11 + -0xbe0) = *(undefined8 *)(puVar11 + -0xc70);
    func_0x000100cd8f90(*(undefined8 *)(puVar11 + -0x1070));
    if (pcVar19 == (code *)0x8000000000000020) {
      *(char *)(puVar53 + 0x15f) = (char)pcVar21;
      *(char *)((long)puVar53 + 0xaf9) = (char)pcVar21;
      pcVar39 = (code *)(*(long *)puVar53[0x15a] + 0x10);
      puVar53[0x160] = *(long *)puVar53[0x159] + 0x10;
code_r0x0001005915c0:
      puVar53[0x161] = pcVar39;
      *(undefined1 *)(puVar53 + 0x165) = 0;
code_r0x0001005915c8:
      pcVar22 = (code *)FUN_10058ebf0(puVar11 + 0x6d70,puVar53 + 0x160,
                                      *(undefined8 *)(puVar11 + -0x1028));
      if (*(long *)(puVar11 + 0x6d70) != 2) {
        bVar27 = puVar11[0x6db9];
        func_0x000100ca1dc8(puVar53 + 0x160);
        if ((bVar27 & 1) == 0) {
          if (*(char *)(puVar53 + 0x15f) == '\x01') {
            uVar29 = (uint)*(byte *)((long)puVar53 + 0xaf9);
          }
          else {
            uVar29 = 0;
          }
        }
        else {
          puVar53[0x160] = puVar53[0x159];
          uVar74 = puVar53[0x15a];
          lVar61 = *(long *)(puVar11 + -0x1030);
          *(undefined8 *)(lVar61 + 0x57) = puVar53[0x15b];
          *(undefined8 *)(lVar61 + 0x4f) = uVar74;
          *(undefined4 *)(puVar53 + 0x163) = 0x1010100;
code_r0x000100591734:
          pcVar22 = (code *)FUN_10057da14(puVar11 + 0x6d70,puVar53 + 0x160,
                                          *(undefined8 *)(puVar11 + -0x1028));
          pcVar19 = *(code **)(puVar11 + 0x6d70);
          if (pcVar19 == (code *)0x8000000000000021) {
            cVar28 = (code)0x5;
            goto code_r0x000100591cb8;
          }
          pcVar21 = (code *)(ulong)(byte)puVar11[0x6d78];
          *(undefined8 *)(puVar11 + -0xb38) = *(undefined8 *)(puVar11 + 0x6de1);
          *(undefined8 *)(puVar11 + -0xb40) = *(undefined8 *)(puVar11 + 0x6dd9);
          *(undefined8 *)(puVar11 + -0xb28) = *(undefined8 *)(puVar11 + 0x6df1);
          *(undefined8 *)(puVar11 + -0xb30) = *(undefined8 *)(puVar11 + 0x6de9);
          *(undefined8 *)(puVar11 + -0xb19) = *(undefined8 *)(puVar11 + 0x6e00);
          *(undefined8 *)(puVar11 + -0xb21) = *(undefined8 *)(puVar11 + 0x6df8);
          *(undefined8 *)(puVar11 + -0xb78) = *(undefined8 *)(puVar11 + 0x6da1);
          *(undefined8 *)(puVar11 + -0xb80) = *(undefined8 *)(puVar11 + 0x6d99);
          *(undefined8 *)(puVar11 + -0xb68) = *(undefined8 *)(puVar11 + 0x6db1);
          *(undefined8 *)(puVar11 + -0xb70) = *(undefined8 *)(puVar11 + 0x6da9);
          *(undefined8 *)(puVar11 + -0xb48) = *(undefined8 *)(puVar11 + 0x6dd1);
          *(undefined8 *)(puVar11 + -0xb50) = *(undefined8 *)(puVar11 + 0x6dc9);
          *(undefined8 *)(puVar11 + -0xb58) = *(undefined8 *)(puVar11 + 0x6dc1);
          *(undefined8 *)(puVar11 + -0xb60) = *(undefined8 *)(puVar11 + 0x6db9);
          *(undefined8 *)(puVar11 + -0xb88) = *(undefined8 *)(puVar11 + 0x6d91);
          *(undefined8 *)(puVar11 + -0xb90) = *(undefined8 *)(puVar11 + 0x6d89);
          *(undefined8 *)(puVar11 + -0xb98) = *(undefined8 *)(puVar11 + 0x6d81);
          *(undefined8 *)(puVar11 + -0xba0) = *(undefined8 *)(puVar11 + 0x6d79);
          cVar16 = *(char *)(puVar53 + 0x163);
          if (cVar16 == '\x05') {
            func_0x000100e8b4b8(puVar53 + 0x164);
          }
          else if (cVar16 == '\x04') {
            func_0x000100ccde68(puVar53 + 0x164);
          }
          else {
            bVar15 = cVar16 == '\x03';
code_r0x000100591890:
            if (bVar15) {
              func_0x000100cd84bc(puVar53 + 0x164);
            }
          }
          if (pcVar19 != (code *)0x8000000000000020) {
            *(undefined8 *)(puVar11 + -0xaa8) = *(undefined8 *)(puVar11 + -0xb38);
            *(undefined8 *)(puVar11 + -0xab0) = *(undefined8 *)(puVar11 + -0xb40);
            *(undefined8 *)(puVar11 + -0xa98) = *(undefined8 *)(puVar11 + -0xb28);
            *(undefined8 *)(puVar11 + -0xaa0) = *(undefined8 *)(puVar11 + -0xb30);
            pcVar30 = (code *)(puVar11 + -0xb10);
            *(undefined8 *)(puVar11 + -0xa89) = *(undefined8 *)(puVar11 + -0xb19);
            *(undefined8 *)(puVar11 + -0xa91) = *(undefined8 *)(puVar11 + -0xb21);
            *(undefined8 *)(puVar11 + -0xae8) = *(undefined8 *)(puVar11 + -0xb78);
            *(undefined8 *)(puVar11 + -0xaf0) = *(undefined8 *)(puVar11 + -0xb80);
            *(undefined8 *)(puVar11 + -0xad8) = *(undefined8 *)(puVar11 + -0xb68);
            *(undefined8 *)(puVar11 + -0xae0) = *(undefined8 *)(puVar11 + -0xb70);
            *(undefined8 *)(puVar11 + -0xab8) = *(undefined8 *)(puVar11 + -0xb48);
            *(undefined8 *)(puVar11 + -0xac0) = *(undefined8 *)(puVar11 + -0xb50);
            *(undefined8 *)(puVar11 + -0xac8) = *(undefined8 *)(puVar11 + -0xb58);
            *(undefined8 *)(puVar11 + -0xad0) = *(undefined8 *)(puVar11 + -0xb60);
            uVar38 = *(ulong *)(puVar11 + -0xb88);
            uVar20 = *(ulong *)(puVar11 + -0xb90);
            uVar70 = *(undefined8 *)(puVar11 + -0xb98);
            uVar74 = *(undefined8 *)(puVar11 + -0xba0);
            goto code_r0x000100592284;
          }
          uVar29 = (uint)*(byte *)((long)puVar53 + 0xaf9) | (uint)pcVar21;
          *(char *)((long)puVar53 + 0xaf9) = (char)uVar29;
          *(undefined1 *)(puVar53 + 0x15f) = 1;
        }
        pcVar21 = (code *)(ulong)(uVar29 & 1);
        pcVar30 = (code *)(puVar11 + -0xb10);
        pcVar19 = pcVar64;
        goto code_r0x000100592290;
      }
      cVar28 = (code)0x4;
      goto code_r0x000100591cb8;
    }
    *(undefined8 *)(puVar11 + -0xaa8) = *(undefined8 *)(puVar11 + -0xbc8);
    *(undefined8 *)(puVar11 + -0xab0) = *(undefined8 *)(puVar11 + -0xbd0);
    *(undefined8 *)(puVar11 + -0xa98) = *(undefined8 *)(puVar11 + -3000);
    *(undefined8 *)(puVar11 + -0xaa0) = *(undefined8 *)(puVar11 + -0xbc0);
    pcVar30 = (code *)(puVar11 + -0xb10);
    *(undefined8 *)(puVar11 + -0xa89) = *(undefined8 *)(puVar11 + -0xba9);
    *(undefined8 *)(puVar11 + -0xa91) = *(undefined8 *)(puVar11 + -0xbb1);
    uVar38 = *(ulong *)(puVar11 + -0xc08);
    uVar20 = *(ulong *)(puVar11 + -0xc10);
    uVar70 = *(undefined8 *)(puVar11 + -0xbf8);
    uVar74 = *(undefined8 *)(puVar11 + -0xc00);
code_r0x0001005916d8:
    *(ulong *)(puVar11 + -0xae8) = uVar38;
    *(ulong *)(puVar11 + -0xaf0) = uVar20;
    *(undefined8 *)(puVar11 + -0xad8) = uVar70;
    *(undefined8 *)(puVar11 + -0xae0) = uVar74;
    *(undefined8 *)(puVar11 + -0xab8) = *(undefined8 *)(puVar11 + -0xbd8);
    *(undefined8 *)(puVar11 + -0xac0) = *(undefined8 *)(puVar11 + -0xbe0);
    *(undefined8 *)(puVar11 + -0xac8) = *(undefined8 *)(puVar11 + -0xbe8);
    *(undefined8 *)(puVar11 + -0xad0) = *(undefined8 *)(puVar11 + -0xbf0);
    uVar38 = *(ulong *)(puVar11 + -0xc18);
    uVar20 = *(ulong *)(puVar11 + -0xc20);
    uVar70 = *(undefined8 *)(puVar11 + -0xc28);
    uVar74 = *(undefined8 *)(puVar11 + -0xc30);
code_r0x0001005916f8:
code_r0x000100592284:
    *(ulong *)(puVar11 + -0xaf8) = uVar38;
    *(ulong *)(puVar11 + -0xb00) = uVar20;
    *(undefined8 *)(puVar11 + -0xb08) = uVar70;
    *(undefined8 *)(puVar11 + -0xb10) = uVar74;
code_r0x000100592290:
    uVar74 = *(undefined8 *)(pcVar30 + 0x7f);
    *(undefined8 *)(puVar11 + -0xf99) = *(undefined8 *)(pcVar30 + 0x87);
    *(undefined8 *)(puVar11 + -0xfa1) = uVar74;
    *(undefined8 *)(puVar11 + -0xfb8) = *(undefined8 *)(puVar11 + -0xaa8);
    *(undefined8 *)(puVar11 + -0xfc0) = *(undefined8 *)(puVar11 + -0xab0);
    *(undefined8 *)(puVar11 + -0xfa8) = *(undefined8 *)(puVar11 + -0xa98);
    *(undefined8 *)(puVar11 + -0xfb0) = *(undefined8 *)(puVar11 + -0xaa0);
    *(undefined8 *)(puVar11 + -0xff8) = *(undefined8 *)(puVar11 + -0xae8);
    *(undefined8 *)(puVar11 + -0x1000) = *(undefined8 *)(puVar11 + -0xaf0);
    *(undefined8 *)(puVar11 + -0xfe8) = *(undefined8 *)(puVar11 + -0xad8);
    *(undefined8 *)(puVar11 + -0xff0) = *(undefined8 *)(puVar11 + -0xae0);
    *(undefined8 *)(puVar11 + -0xfd8) = *(undefined8 *)(puVar11 + -0xac8);
    *(undefined8 *)(puVar11 + -0xfe0) = *(undefined8 *)(puVar11 + -0xad0);
    *(undefined8 *)(puVar11 + -0xfc8) = *(undefined8 *)(puVar11 + -0xab8);
    *(undefined8 *)(puVar11 + -0xfd0) = *(undefined8 *)(puVar11 + -0xac0);
    uVar38 = *(ulong *)(puVar11 + -0xaf8);
    uVar20 = *(ulong *)(puVar11 + -0xb00);
    *(undefined8 *)(puVar11 + -0x1018) = *(undefined8 *)(puVar11 + -0xb08);
    *(undefined8 *)(puVar11 + -0x1020) = *(undefined8 *)(puVar11 + -0xb10);
    *(ulong *)(puVar11 + -0x1008) = uVar38;
    *(ulong *)(puVar11 + -0x1010) = uVar20;
    pcVar30 = (code *)((long)puVar53 + 0x469);
    pcVar64 = pcVar19;
code_r0x0001005922d0:
    uVar70 = *(undefined8 *)(puVar11 + -0xfc8);
    uVar74 = *(undefined8 *)(puVar11 + -0xfd0);
    uVar62 = *(undefined8 *)(puVar11 + -0xfc0);
    uVar65 = *(undefined8 *)(puVar11 + -0xfa8);
    uVar86 = *(undefined8 *)(puVar11 + -0xfb0);
    *(undefined8 *)(pcVar30 + 0x68) = *(undefined8 *)(puVar11 + -0xfb8);
    *(undefined8 *)(pcVar30 + 0x60) = uVar62;
    *(undefined8 *)(pcVar30 + 0x78) = uVar65;
    *(undefined8 *)(pcVar30 + 0x70) = uVar86;
    uVar62 = *(undefined8 *)(puVar11 + -0xfa1);
    *(undefined8 *)(pcVar30 + 0x87) = *(undefined8 *)(puVar11 + -0xf99);
    *(undefined8 *)(pcVar30 + 0x7f) = uVar62;
    uVar86 = *(undefined8 *)(puVar11 + -0xfe8);
    uVar62 = *(undefined8 *)(puVar11 + -0xff0);
    uVar68 = *(undefined8 *)(puVar11 + -0xfd8);
    uVar65 = *(undefined8 *)(puVar11 + -0xfe0);
    uVar72 = *(undefined8 *)(puVar11 + -0x1000);
    uVar75 = *(undefined8 *)(puVar11 + -0x1018);
    uVar52 = *(undefined8 *)(puVar11 + -0x1020);
    *(undefined8 *)(pcVar30 + 0x28) = *(undefined8 *)(puVar11 + -0xff8);
    *(undefined8 *)(pcVar30 + 0x20) = uVar72;
    *(undefined8 *)(pcVar30 + 0x38) = uVar86;
    *(undefined8 *)(pcVar30 + 0x30) = uVar62;
    *(undefined8 *)(pcVar30 + 0x48) = uVar68;
    *(undefined8 *)(pcVar30 + 0x40) = uVar65;
    *(undefined8 *)(pcVar30 + 0x58) = uVar70;
    *(undefined8 *)(pcVar30 + 0x50) = uVar74;
    *(undefined1 *)((long)puVar53 + 0xafa) = 1;
    puVar53[0x8c] = pcVar64;
    *(char *)(puVar53 + 0x8d) = (char)pcVar21;
    *(undefined8 *)(pcVar30 + 8) = uVar75;
    *(undefined8 *)pcVar30 = uVar52;
    *(ulong *)(pcVar30 + 0x18) = uVar38;
    *(ulong *)(pcVar30 + 0x10) = uVar20;
    if (pcVar64 == (code *)0x8000000000000020) {
      if (((ulong)pcVar21 & 1) != 0) {
        __ZN10codex_core6client18ModelClientSession23reset_websocket_session17hefe018869918ed02E
                  (puVar53 + 0x4d);
      }
      puVar53[0x1bb] = puVar53[0x47] + 0x10;
      puVar53[0x1ba] = puVar53[0x46] + 0x10;
      *(undefined1 *)((long)puVar53 + 0xde1) = 0;
code_r0x000100592344:
      pcVar22 = (code *)func_0x0001005b51a8(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
      if ((int)pcVar22 != 0) {
        **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
        uVar41 = 5;
        goto LAB_100595774;
      }
      FUN_100d80a18(puVar53 + 0x159);
      pcVar30 = (code *)(puVar53 + 0x46);
      pcVar39 = (code *)(puVar53[0x47] + 0x10);
      pcVar42 = (code *)puVar53[0x4a];
code_r0x000100592380:
      puVar53[0x16f] = pcVar42;
      puVar53[0x170] = puVar53[0x4b];
      puVar53[0x18a] = pcVar30;
      puVar53[0x18b] = pcVar39;
      puVar53[0x18c] = puVar53 + 0x4c;
      *(undefined1 *)((long)puVar53 + 0xc6a) = 0;
code_r0x0001005923a0:
      *(undefined8 **)(puVar11 + -0x1058) = puVar53 + 0x159;
      pcVar22 = (code *)FUN_1005807c8(puVar11 + 0x6d70,puVar53 + 0x159,
                                      *(undefined8 *)(puVar11 + -0x1028));
      lVar61 = *(long *)(puVar11 + 0x6d70);
      if (lVar61 == -0x7fffffffffffffff) {
        **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
        uVar41 = 6;
        goto LAB_100595774;
      }
      *(undefined8 *)(puVar11 + -0xf58) = *(undefined8 *)(puVar11 + 0x6d80);
      *(undefined8 *)(puVar11 + -0xf60) = *(undefined8 *)(puVar11 + 0x6d78);
      *(undefined8 *)(puVar11 + -0xf48) = *(undefined8 *)(puVar11 + 0x6d90);
      *(undefined8 *)(puVar11 + -0xf50) = *(undefined8 *)(puVar11 + 0x6d88);
      *(undefined8 *)(puVar11 + -0xf38) = *(undefined8 *)(puVar11 + 0x6da0);
      *(undefined8 *)(puVar11 + -0xf40) = *(undefined8 *)(puVar11 + 0x6d98);
      *(undefined8 *)(puVar11 + -0xf28) = *(undefined8 *)(puVar11 + 0x6db0);
      *(undefined8 *)(puVar11 + -0xf30) = *(undefined8 *)(puVar11 + 0x6da8);
      FUN_100c9d288(*(undefined8 *)(puVar11 + -0x1058));
      if (lVar61 != -0x8000000000000000) {
        uVar74 = *(undefined8 *)(puVar11 + -0xf60);
        uVar62 = *(undefined8 *)(puVar11 + -0xf48);
        uVar70 = *(undefined8 *)(puVar11 + -0xf50);
        puVar53[0xa1] = *(undefined8 *)(puVar11 + -0xf58);
        puVar53[0xa0] = uVar74;
        puVar53[0xa3] = uVar62;
        puVar53[0xa2] = uVar70;
        uVar74 = *(undefined8 *)(puVar11 + -0xf40);
        uVar62 = *(undefined8 *)(puVar11 + -0xf28);
        uVar70 = *(undefined8 *)(puVar11 + -0xf30);
        puVar53[0xa5] = *(undefined8 *)(puVar11 + -0xf38);
        puVar53[0xa4] = uVar74;
        *(undefined1 *)((long)puVar53 + 0xabc) = 1;
        puVar53[0x9f] = lVar61;
        puVar53[0xa7] = uVar62;
        puVar53[0xa6] = uVar70;
        plVar57 = puVar53 + 0x46;
        puVar67 = puVar53 + 0x47;
        puVar53[0x173] = plVar57;
        puVar53[0x174] = puVar67;
        *(undefined1 **)(puVar11 + -0x1060) = (undefined1 *)((long)puVar53 + 0xbaa);
        *(undefined1 *)((long)puVar53 + 0xbaa) = 0;
code_r0x00010059244c:
        *(undefined2 *)(puVar53 + 0x175) = 0;
        puVar53[0x159] = plVar57;
        puVar53[0x15a] = puVar67;
        do {
          lVar61 = *plVar57 + 0x10;
          plVar57 = puVar53 + 0x176;
          puVar53[0x176] = lVar61;
          puVar67 = puVar53 + 0x186;
          *(undefined1 *)(puVar53 + 0x186) = 0;
code_r0x00010059579c:
          puVar53[0x177] = lVar61 + 0x790;
          *(undefined1 *)(puVar53 + 0x185) = 0;
code_r0x0001005957a8:
          auVar124 = FUN_100fd3e50(puVar53 + 0x177,*(undefined8 *)(puVar11 + -0x1028));
          uVar74 = auVar124._8_8_;
          pcVar32 = auVar124._0_8_;
          if (pcVar32 == (char *)0x0) {
            uVar41 = 3;
            *(undefined1 *)puVar67 = 3;
            pcVar22 = (code *)0x0;
code_r0x000100596ae0:
            **(undefined1 **)(puVar11 + -0x1060) = uVar41;
            **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
            uVar41 = 7;
            goto LAB_100595774;
          }
          if (((*(char *)(puVar53 + 0x185) == '\x03') && (*(char *)(puVar53 + 0x184) == '\x03')) &&
             (*(char *)(puVar53 + 0x17b) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (puVar53 + 0x17c);
            uVar74 = extraout_x1_03;
            if (puVar53[0x17d] != 0) {
              (**(code **)(puVar53[0x17d] + 0x18))(puVar53[0x17e]);
              uVar74 = extraout_x1_04;
            }
          }
          cVar16 = '\x04';
          if (*(long *)(pcVar32 + 0x7b8) != 0) {
            lVar61 = *(long *)(pcVar32 + 0x7b0);
            uVar20 = lVar61 + 1;
            uVar38 = 0;
            if (*(ulong *)(pcVar32 + 0x7a0) <= uVar20) {
              uVar38 = *(ulong *)(pcVar32 + 0x7a0);
            }
            *(ulong *)(pcVar32 + 0x7b0) = uVar20 - uVar38;
            *(long *)(pcVar32 + 0x7b8) = *(long *)(pcVar32 + 0x7b8) + -1;
            cVar16 = *(char *)(*(long *)(pcVar32 + 0x7a8) + lVar61);
          }
          if (*pcVar32 == '\0') {
            *pcVar32 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar32,uVar74,1000000000);
          }
          FUN_1060fa678(pcVar32,1,pcVar32);
          *(undefined1 *)puVar67 = 1;
          if (cVar16 == '\x04') {
            bVar14 = false;
            goto code_r0x0001005964a8;
          }
          plVar58 = (long *)puVar53[0x15a];
          lVar61 = *plVar58;
          if (*(ulong *)(lVar61 + 0x6a0) < 0x8000000000000006) {
            bVar14 = false;
            if ((cVar16 != '\0') || (0x8000000000000000 < *(ulong *)(lVar61 + 0x6a0)))
            goto code_r0x00010059649c;
            if (*(long *)(lVar61 + 0x6d0) == -0x8000000000000000) {
code_r0x0001005958ec:
              lVar66 = 7;
              puVar26 = (undefined4 *)_malloc(7);
              if (puVar26 == (undefined4 *)0x0) {
code_r0x000100596b84:
                FUN_107c03c64(1,lVar66);
                goto code_r0x000100596b90;
              }
              *(undefined4 *)((long)puVar26 + 3) = 0x746c7561;
              *puVar26 = 0x61666564;
              lVar60 = 7;
            }
            else {
              lVar66 = *(long *)(lVar61 + 0x6e0);
              puVar26 = (undefined4 *)0x1;
              lVar60 = 0;
              if (lVar66 != 0) {
                uVar74 = *(undefined8 *)(lVar61 + 0x6d8);
                puVar26 = (undefined4 *)_malloc(lVar66);
                if (puVar26 == (undefined4 *)0x0) goto code_r0x000100596b84;
                _memcpy(puVar26,uVar74,lVar66);
                lVar60 = lVar66;
                if (lVar66 == -0x8000000000000000) goto code_r0x0001005958ec;
              }
            }
            uVar74 = *(undefined8 *)(*plVar58 + 0x248);
            pcVar21 = *(code **)(*plVar58 + 0x250);
            lVar61 = 1;
            if ((pcVar21 != (code *)0x0) && (lVar61 = _malloc(pcVar21), lVar61 == 0))
            goto code_r0x000100596bac;
            _memcpy(lVar61,uVar74,pcVar21);
            uVar74 = *(undefined8 *)(*(long *)**(undefined8 **)(puVar11 + -0x1058) + 0x790);
            *(undefined8 *)(puVar11 + 0xae38) =
                 *(undefined8 *)(*(long *)**(undefined8 **)(puVar11 + -0x1058) + 0x798);
            *(undefined8 *)(puVar11 + 0xae30) = uVar74;
            *(undefined8 *)(puVar11 + 0x3160) = 0;
            *(undefined8 *)(puVar11 + 0x3168) = 1;
            *(undefined8 *)(puVar11 + 0x3170) = 0;
            FUN_10624142c(puVar11 + 0x6d70,puVar11 + 0xae30,0);
            thunk_FUN_108855060(puVar11 + 0x3160,0,0x24,1,1);
            lVar66 = *(long *)(puVar11 + 0x3170);
            puVar67 = (undefined8 *)(*(long *)(puVar11 + 0x3168) + lVar66);
            uVar74 = *(undefined8 *)(puVar11 + 0x6d70);
            puVar67[1] = *(undefined8 *)(puVar11 + 0x6d78);
            *puVar67 = uVar74;
            uVar74 = *(undefined8 *)(puVar11 + 0x6d80);
            puVar67[3] = *(undefined8 *)(puVar11 + 0x6d88);
            puVar67[2] = uVar74;
            *(undefined4 *)(puVar67 + 4) = *(undefined4 *)(puVar11 + 0x6d90);
            *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + 0x3168);
            *(undefined8 *)(puVar11 + -0xa80) = *(undefined8 *)(puVar11 + 0x3160);
            *(long *)(puVar11 + -0xa70) = lVar66 + 0x24;
            *(undefined1 *)(puVar53 + 0x175) = 1;
            puVar53[0x176] = pcVar21;
            plVar57[1] = lVar61;
            plVar57[2] = (long)pcVar21;
            uVar74 = *(undefined8 *)(puVar11 + -0xa80);
            puVar53[0x17a] = *(undefined8 *)(puVar11 + -0xa78);
            puVar53[0x179] = uVar74;
            puVar53[0x17b] = *(undefined8 *)(puVar11 + -0xa70);
            puVar53[0x17c] = lVar60;
            puVar53[0x17d] = puVar26;
            puVar53[0x17e] = lVar60;
            plVar58 = (long *)puVar53[0x15a];
          }
          else {
            *(undefined1 *)(puVar53 + 0x175) = 1;
            *(char *)(puVar53 + 0x177) = cVar16;
            puVar53[0x176] = 0x8000000000000000;
          }
          uVar74 = *(undefined8 *)(*(long *)puVar53[0x159] + 0x3d8);
          puVar53[0x183] = *(undefined8 *)(*(long *)puVar53[0x159] + 0x3e0);
          puVar53[0x182] = uVar74;
          uVar74 = *(undefined8 *)(*plVar58 + 0x3a8);
          lVar60 = *(long *)(*plVar58 + 0x3b0);
          lVar61 = 1;
          if ((lVar60 != 0) && (lVar61 = _malloc(lVar60), lVar61 == 0)) {
            FUN_107c03c64(1,lVar60);
            goto code_r0x0001005975c0;
          }
          _memcpy(lVar61,uVar74,lVar60);
          puVar53[0x17f] = lVar60;
          puVar53[0x180] = lVar61;
          puVar53[0x181] = lVar60;
          puVar53[0x184] = *(long *)puVar53[0x159] + 0x10;
          *(undefined1 *)(puVar53 + 0x186) = 0;
code_r0x000100595a94:
          pcVar22 = (code *)func_0x0001005a7878(puVar11 + 0x6d70,puVar53 + 0x184,
                                                *(undefined8 *)(puVar11 + -0x1028));
          lVar61 = *(long *)(puVar11 + 0x6d70);
          if (lVar61 == -0x7fffffffffffffff) {
            uVar41 = 4;
            goto code_r0x000100596ae0;
          }
          uVar70 = *(undefined8 *)(puVar11 + 0x6d78);
          uVar62 = *(undefined8 *)(puVar11 + 0x6d80);
          FUN_100d3e874(puVar53 + 0x184);
          uVar74 = *(undefined8 *)(*(long *)puVar53[0x15a] + 0x48);
          lVar60 = *(long *)(*(long *)puVar53[0x15a] + 0x50);
          lVar66 = 1;
          if ((lVar60 != 0) && (lVar66 = _malloc(lVar60), lVar66 == 0)) {
            FUN_107c03c64(1,lVar60);
            goto code_r0x0001005975c0;
          }
          _memcpy(lVar66,uVar74,lVar60);
          bVar27 = *(byte *)(*(long *)puVar53[0x15a] + 0x790);
          uVar74 = 7;
          if (5 < bVar27) {
            uVar74 = 0x11;
          }
          lVar45 = _malloc(uVar74);
          if (lVar45 == 0) {
            FUN_107c03c64(1,uVar74);
            goto code_r0x0001005975c0;
          }
          puVar2 = &UNK_108d524f0;
          if (5 < bVar27) {
            puVar2 = &UNK_108d537b8;
          }
          _memcpy(lVar45,puVar2,uVar74);
          *(undefined2 *)(puVar53 + 0x175) = 0x100;
          puVar67 = puVar53 + 0x15b;
          puVar53[0x171] = puVar53[0x183];
          puVar53[0x170] = puVar53[0x182];
          puVar53[0x15c] = puVar53[0x180];
          *puVar67 = puVar53[0x17f];
          puVar53[0x15d] = puVar53[0x181];
          puVar53[0x164] = lVar61;
          puVar53[0x165] = uVar70;
          puVar53[0x166] = uVar62;
          puVar53[0x15e] = lVar60;
          puVar53[0x15f] = lVar66;
          puVar53[0x160] = lVar60;
          puVar53[0x161] = uVar74;
          puVar53[0x162] = lVar45;
          puVar53[0x163] = uVar74;
          puVar53[0x16f] = puVar53[0x17e];
          puVar53[0x16c] = puVar53[0x17b];
          puVar53[0x16b] = puVar53[0x17a];
          puVar53[0x16e] = puVar53[0x17d];
          puVar53[0x16d] = puVar53[0x17c];
          puVar53[0x168] = puVar53[0x177];
          puVar53[0x167] = puVar53[0x176];
          puVar53[0x16a] = puVar53[0x179];
          puVar53[0x169] = puVar53[0x178];
          *(long *)(puVar11 + 0x6d70) = *(long *)puVar53[0x159] + 0x4f0;
          auVar124 = FUN_1037cc704(puVar11 + 0x6d70);
          plVar58 = auVar124._8_8_;
          plVar57 = auVar124._0_8_;
          pcVar64 = (code *)(puVar53 + 0x176);
          *(long **)(puVar11 + 0x6d70) = plVar57;
          *(undefined8 *)(puVar11 + 0x6d78) = 0;
          if (plVar58 != (long *)0x0) {
            lVar61 = *plVar57;
            *plVar57 = lVar61 + 1;
            if (lVar61 < 0) goto code_r0x0001005975c0;
            if ((long *)*plVar58 == plVar57 + 2) {
              *plVar58 = 3;
            }
            else {
              *(long **)(puVar11 + 0x3160) = plVar57;
              lVar61 = *plVar57;
              *plVar57 = lVar61 + -1;
              LORelease();
              if (lVar61 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar11 + 0x3160);
              }
            }
          }
          lVar61 = *(long *)(puVar11 + 0x6d70);
          puVar53[0x172] = lVar61;
          __ZN11codex_hooks8registry5Hooks21preview_session_start17h6aacb2e3e460f37cE
                    (puVar11 + 0xaaa0,lVar61 + 0x10,puVar67);
          unaff_x25 = (code *)puVar53[0x159];
          unaff_x26 = (code *)puVar53[0x15a];
          lVar66 = puVar53[0x172];
          *(undefined1 *)((long)puVar53 + 0xba9) = 0;
          uVar74 = puVar53[0x16b];
          uVar62 = puVar53[0x16e];
          uVar70 = puVar53[0x16d];
          *(undefined8 *)(puVar11 + 0x6df8) = puVar53[0x16c];
          *(undefined8 *)(puVar11 + 0x6df0) = uVar74;
          *(undefined8 *)(puVar11 + 0x6e08) = uVar62;
          *(undefined8 *)(puVar11 + 0x6e00) = uVar70;
          uVar74 = puVar53[0x16f];
          *(undefined8 *)(puVar11 + 0x6e18) = puVar53[0x170];
          *(undefined8 *)(puVar11 + 0x6e10) = uVar74;
          *(undefined8 *)(puVar11 + 0x6e20) = puVar53[0x171];
          uVar74 = puVar53[0x163];
          uVar62 = puVar53[0x166];
          uVar70 = puVar53[0x165];
          *(undefined8 *)(puVar11 + 0x6db8) = puVar53[0x164];
          *(undefined8 *)(puVar11 + 0x6db0) = uVar74;
          *(undefined8 *)(puVar11 + 0x6dc8) = uVar62;
          *(undefined8 *)(puVar11 + 0x6dc0) = uVar70;
          uVar74 = puVar53[0x167];
          uVar62 = puVar53[0x16a];
          uVar70 = puVar53[0x169];
          *(undefined8 *)(puVar11 + 0x6dd8) = puVar53[0x168];
          *(undefined8 *)(puVar11 + 0x6dd0) = uVar74;
          *(undefined8 *)(puVar11 + 0x6de8) = uVar62;
          *(undefined8 *)(puVar11 + 0x6de0) = uVar70;
          uVar74 = *puVar67;
          uVar62 = puVar53[0x15e];
          uVar70 = puVar53[0x15d];
          *(undefined8 *)(puVar11 + 0x6d78) = puVar53[0x15c];
          *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
          *(undefined8 *)(puVar11 + 0x6d88) = uVar62;
          *(undefined8 *)(puVar11 + 0x6d80) = uVar70;
          uVar74 = puVar53[0x15f];
          uVar62 = puVar53[0x162];
          uVar70 = puVar53[0x161];
          *(undefined8 *)(puVar11 + 0x6d98) = puVar53[0x160];
          *(undefined8 *)(puVar11 + 0x6d90) = uVar74;
          *(undefined8 *)(puVar11 + 0x6da8) = uVar62;
          *(undefined8 *)(puVar11 + 0x6da0) = uVar70;
          uVar74 = *(undefined8 *)(*(long *)unaff_x26 + 0x248);
          lVar61 = 1;
          lVar60 = *(long *)(*(long *)unaff_x26 + 0x250);
          if ((lVar60 != 0) && (lVar61 = _malloc(lVar60), lVar61 == 0)) {
            FUN_107c03c64(1,lVar60);
            goto code_r0x0001005975c0;
          }
          _memcpy(lVar61,uVar74,lVar60);
          *(undefined8 *)(puVar11 + -0x9f8) = *(undefined8 *)(puVar11 + 0x6df8);
          *(undefined8 *)(puVar11 + -0xa00) = *(undefined8 *)(puVar11 + 0x6df0);
          *(undefined8 *)(puVar11 + -0x9e8) = *(undefined8 *)(puVar11 + 0x6e08);
          *(undefined8 *)(puVar11 + -0x9f0) = *(undefined8 *)(puVar11 + 0x6e00);
          *(undefined8 *)(puVar11 + -0x9d8) = *(undefined8 *)(puVar11 + 0x6e18);
          *(undefined8 *)(puVar11 + -0x9e0) = *(undefined8 *)(puVar11 + 0x6e10);
          *(undefined8 *)(puVar11 + -0x9d0) = *(undefined8 *)(puVar11 + 0x6e20);
          *(undefined8 *)(puVar11 + -0xa38) = *(undefined8 *)(puVar11 + 0x6db8);
          *(undefined8 *)(puVar11 + -0xa40) = *(undefined8 *)(puVar11 + 0x6db0);
          *(undefined8 *)(puVar11 + -0xa28) = *(undefined8 *)(puVar11 + 0x6dc8);
          *(undefined8 *)(puVar11 + -0xa30) = *(undefined8 *)(puVar11 + 0x6dc0);
          *(undefined8 *)(puVar11 + -0xa18) = *(undefined8 *)(puVar11 + 0x6dd8);
          *(undefined8 *)(puVar11 + -0xa20) = *(undefined8 *)(puVar11 + 0x6dd0);
          *(undefined8 *)(puVar11 + -0xa08) = *(undefined8 *)(puVar11 + 0x6de8);
          *(undefined8 *)(puVar11 + -0xa10) = *(undefined8 *)(puVar11 + 0x6de0);
          *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + 0x6d78);
          *(undefined8 *)(puVar11 + -0xa80) = *(undefined8 *)(puVar11 + 0x6d70);
          *(undefined8 *)(puVar11 + -0xa68) = *(undefined8 *)(puVar11 + 0x6d88);
          *(undefined8 *)(puVar11 + -0xa70) = *(undefined8 *)(puVar11 + 0x6d80);
          *(undefined8 *)(puVar11 + -0xa58) = *(undefined8 *)(puVar11 + 0x6d98);
          *(undefined8 *)(puVar11 + -0xa60) = *(undefined8 *)(puVar11 + 0x6d90);
          *(undefined8 *)(puVar11 + -0xa48) = *(undefined8 *)(puVar11 + 0x6da8);
          *(undefined8 *)(puVar11 + -0xa50) = *(undefined8 *)(puVar11 + 0x6da0);
          uVar74 = *(undefined8 *)(puVar11 + 0xaaa0);
          puVar53[0x177] = *(undefined8 *)(puVar11 + 0xaaa8);
          *(undefined8 *)pcVar64 = uVar74;
          puVar53[0x178] = *(undefined8 *)(puVar11 + 0xaab0);
          puVar53[0x179] = unaff_x25;
          puVar53[0x17a] = unaff_x26;
          uVar74 = *(undefined8 *)(puVar11 + -0xa00);
          uVar62 = *(undefined8 *)(puVar11 + -0x9e8);
          uVar70 = *(undefined8 *)(puVar11 + -0x9f0);
          puVar53[0x18c] = *(undefined8 *)(puVar11 + -0x9f8);
          puVar53[0x18b] = uVar74;
          puVar53[0x18e] = uVar62;
          puVar53[0x18d] = uVar70;
          uVar74 = *(undefined8 *)(puVar11 + -0x9e0);
          puVar53[400] = *(undefined8 *)(puVar11 + -0x9d8);
          puVar53[399] = uVar74;
          puVar53[0x191] = *(undefined8 *)(puVar11 + -0x9d0);
          uVar74 = *(undefined8 *)(puVar11 + -0xa40);
          uVar62 = *(undefined8 *)(puVar11 + -0xa28);
          uVar70 = *(undefined8 *)(puVar11 + -0xa30);
          puVar53[0x184] = *(undefined8 *)(puVar11 + -0xa38);
          puVar53[0x183] = uVar74;
          puVar53[0x186] = uVar62;
          puVar53[0x185] = uVar70;
          uVar74 = *(undefined8 *)(puVar11 + -0xa20);
          uVar62 = *(undefined8 *)(puVar11 + -0xa08);
          uVar70 = *(undefined8 *)(puVar11 + -0xa10);
          puVar53[0x188] = *(undefined8 *)(puVar11 + -0xa18);
          puVar53[0x187] = uVar74;
          puVar53[0x18a] = uVar62;
          puVar53[0x189] = uVar70;
          uVar74 = *(undefined8 *)(puVar11 + -0xa80);
          uVar62 = *(undefined8 *)(puVar11 + -0xa68);
          uVar70 = *(undefined8 *)(puVar11 + -0xa70);
          puVar53[0x17c] = *(undefined8 *)(puVar11 + -0xa78);
          puVar53[0x17b] = uVar74;
          puVar53[0x17e] = uVar62;
          puVar53[0x17d] = uVar70;
          uVar74 = *(undefined8 *)(puVar11 + -0xa60);
          uVar62 = *(undefined8 *)(puVar11 + -0xa48);
          uVar70 = *(undefined8 *)(puVar11 + -0xa50);
          puVar53[0x180] = *(undefined8 *)(puVar11 + -0xa58);
          puVar53[0x17f] = uVar74;
          puVar53[0x182] = uVar62;
          puVar53[0x181] = uVar70;
          puVar53[0x192] = lVar60;
          puVar53[0x193] = lVar61;
          puVar53[0x194] = lVar60;
          puVar53[0x195] = lVar66 + 0x10;
          lVar61 = *(long *)(puVar11 + -0x1030);
          *(undefined1 *)(lVar61 + 0x5f7) = 0;
          pcVar19 = (code *)(lVar61 + 0x60f);
          *(undefined1 *)(lVar61 + 0x60f) = 0;
code_r0x000100595dcc:
          puVar53[0x217] = unaff_x25;
          puVar53[0x218] = unaff_x26;
          *(undefined1 *)(lVar61 + 0x610) = 1;
          _memcpy(puVar53 + 0x557,puVar53 + 0x17b,0x4e0);
          uVar74 = *(undefined8 *)pcVar64;
          puVar53[0x21b] = *(undefined8 *)(pcVar64 + 8);
          puVar53[0x21a] = uVar74;
          puVar53[0x21c] = *(undefined8 *)(pcVar64 + 0x10);
          puVar53[0x21d] = unaff_x25;
          puVar53[0x21e] = unaff_x26;
          *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0x628) = 0;
code_r0x000100595e10:
          pcVar22 = (code *)FUN_1004f65a0(puVar53 + 0x21a,*(undefined8 *)(puVar11 + -0x1028));
          if (((ulong)pcVar22 & 1) != 0) {
            cVar28 = (code)0x3;
code_r0x000100596ad8:
            *pcVar19 = cVar28;
code_r0x000100596adc:
            uVar41 = 5;
            goto code_r0x000100596ae0;
          }
          FUN_100c9749c(puVar53 + 0x21a);
          lVar61 = *(long *)(puVar11 + -0x1030);
          *(undefined1 *)(lVar61 + 0x610) = 0;
          _memcpy(puVar53 + 0x21a,puVar53 + 0x557,0x4e0);
code_r0x000100595e48:
          pcVar25 = (code *)(puVar53 + 0x21a);
          bVar27 = *(byte *)(lVar61 + 0xaef);
          if (bVar27 < 2) {
            if (bVar27 == 0) {
              lVar61 = puVar53[0x234];
              uVar74 = puVar53[0x22a];
              uVar62 = puVar53[0x22d];
              uVar70 = puVar53[0x22c];
              *(undefined8 *)(puVar11 + 0x6df8) = puVar53[0x22b];
              *(undefined8 *)(puVar11 + 0x6df0) = uVar74;
              *(undefined8 *)(puVar11 + 0x6e08) = uVar62;
              *(undefined8 *)(puVar11 + 0x6e00) = uVar70;
              uVar74 = puVar53[0x22e];
              *(undefined8 *)(puVar11 + 0x6e18) = puVar53[0x22f];
              *(undefined8 *)(puVar11 + 0x6e10) = uVar74;
              uVar74 = puVar53[0x230];
              uVar70 = puVar53[0x222];
              uVar86 = puVar53[0x225];
              uVar62 = puVar53[0x224];
              *(undefined8 *)(puVar11 + 0x6db8) = puVar53[0x223];
              *(undefined8 *)(puVar11 + 0x6db0) = uVar70;
              *(undefined8 *)(puVar11 + 0x6dc8) = uVar86;
              *(undefined8 *)(puVar11 + 0x6dc0) = uVar62;
              uVar70 = puVar53[0x226];
              uVar86 = puVar53[0x229];
              uVar62 = puVar53[0x228];
              *(undefined8 *)(puVar11 + 0x6dd8) = puVar53[0x227];
              *(undefined8 *)(puVar11 + 0x6dd0) = uVar70;
              *(undefined8 *)(puVar11 + 0x6de8) = uVar86;
              *(undefined8 *)(puVar11 + 0x6de0) = uVar62;
              uVar70 = *(undefined8 *)pcVar25;
              uVar86 = puVar53[0x21d];
              uVar62 = puVar53[0x21c];
              *(undefined8 *)(puVar11 + 0x6d78) = puVar53[0x21b];
              *(undefined8 *)(puVar11 + 0x6d70) = uVar70;
              *(undefined8 *)(puVar11 + 0x6d88) = uVar86;
              *(undefined8 *)(puVar11 + 0x6d80) = uVar62;
              uVar70 = puVar53[0x21e];
              uVar86 = puVar53[0x221];
              uVar62 = puVar53[0x220];
              *(undefined8 *)(puVar11 + 0x6d98) = puVar53[0x21f];
              *(undefined8 *)(puVar11 + 0x6d90) = uVar70;
              *(undefined8 *)(puVar11 + 0x6da8) = uVar86;
              *(undefined8 *)(puVar11 + 0x6da0) = uVar62;
              uVar70 = puVar53[0x231];
              *(undefined8 *)(puVar11 + 0x6e30) = puVar53[0x232];
              *(undefined8 *)(puVar11 + 0x6e28) = uVar70;
              uVar70 = puVar53[0x233];
              *(undefined8 *)(puVar11 + 0x6e20) = uVar74;
              *(undefined8 *)(puVar11 + 0x6e38) = uVar70;
              lVar61 = lVar61 + 0x18;
              *(undefined8 *)(puVar11 + 0x3208) = *(undefined8 *)(puVar11 + 0x6e18);
              *(undefined8 *)(puVar11 + 0x3200) = *(undefined8 *)(puVar11 + 0x6e10);
              *(undefined8 *)(puVar11 + 0x3218) = *(undefined8 *)(puVar11 + 0x6e28);
              *(undefined8 *)(puVar11 + 0x3210) = *(undefined8 *)(puVar11 + 0x6e20);
              *(undefined8 *)(puVar11 + 0x3228) = *(undefined8 *)(puVar11 + 0x6e38);
              *(undefined8 *)(puVar11 + 0x3220) = *(undefined8 *)(puVar11 + 0x6e30);
              *(undefined8 *)(puVar11 + 0x31c8) = *(undefined8 *)(puVar11 + 0x6dd8);
              *(undefined8 *)(puVar11 + 0x31c0) = *(undefined8 *)(puVar11 + 0x6dd0);
              *(undefined8 *)(puVar11 + 0x31d8) = *(undefined8 *)(puVar11 + 0x6de8);
              *(undefined8 *)(puVar11 + 0x31d0) = *(undefined8 *)(puVar11 + 0x6de0);
              *(undefined8 *)(puVar11 + 0x31f8) = *(undefined8 *)(puVar11 + 0x6e08);
              *(undefined8 *)(puVar11 + 0x31f0) = *(undefined8 *)(puVar11 + 0x6e00);
              *(undefined8 *)(puVar11 + 0x31e8) = *(undefined8 *)(puVar11 + 0x6df8);
              *(undefined8 *)(puVar11 + 0x31e0) = *(undefined8 *)(puVar11 + 0x6df0);
              *(undefined8 *)(puVar11 + 0x3188) = *(undefined8 *)(puVar11 + 0x6d98);
              *(undefined8 *)(puVar11 + 0x3180) = *(undefined8 *)(puVar11 + 0x6d90);
              *(undefined8 *)(puVar11 + 0x3198) = *(undefined8 *)(puVar11 + 0x6da8);
              *(undefined8 *)(puVar11 + 0x3190) = *(undefined8 *)(puVar11 + 0x6da0);
              *(undefined8 *)(puVar11 + 0x31b8) = *(undefined8 *)(puVar11 + 0x6dc8);
              *(undefined8 *)(puVar11 + 0x31b0) = *(undefined8 *)(puVar11 + 0x6dc0);
              *(undefined8 *)(puVar11 + 0x31a8) = *(undefined8 *)(puVar11 + 0x6db8);
              *(undefined8 *)(puVar11 + 0x31a0) = *(undefined8 *)(puVar11 + 0x6db0);
              *(undefined8 *)(puVar11 + 0x3178) = *(undefined8 *)(puVar11 + 0x6d88);
              *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + 0x6d80);
              *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + 0x6d78);
              *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + 0x6d70);
              uVar74 = *(undefined8 *)(puVar11 + 0x3200);
              uVar62 = *(undefined8 *)(puVar11 + 0x3218);
              uVar70 = *(undefined8 *)(puVar11 + 0x3210);
              puVar53[0x24a] = *(undefined8 *)(puVar11 + 0x3208);
              puVar53[0x249] = uVar74;
              puVar53[0x24c] = uVar62;
              puVar53[0x24b] = uVar70;
              uVar74 = *(undefined8 *)(puVar11 + 0x3220);
              puVar53[0x24e] = *(undefined8 *)(puVar11 + 0x3228);
              puVar53[0x24d] = uVar74;
              uVar74 = *(undefined8 *)(puVar11 + 0x31c0);
              uVar62 = *(undefined8 *)(puVar11 + 0x31d8);
              uVar70 = *(undefined8 *)(puVar11 + 0x31d0);
              puVar53[0x242] = *(undefined8 *)(puVar11 + 0x31c8);
              puVar53[0x241] = uVar74;
              puVar53[0x244] = uVar62;
              puVar53[0x243] = uVar70;
              uVar70 = *(undefined8 *)(puVar11 + 0x31f8);
              uVar74 = *(undefined8 *)(puVar11 + 0x31f0);
              uVar62 = *(undefined8 *)(puVar11 + 0x31e0);
              puVar53[0x246] = *(undefined8 *)(puVar11 + 0x31e8);
              puVar53[0x245] = uVar62;
              puVar53[0x248] = uVar70;
              puVar53[0x247] = uVar74;
              uVar74 = *(undefined8 *)(puVar11 + 0x3180);
              uVar62 = *(undefined8 *)(puVar11 + 0x3198);
              uVar70 = *(undefined8 *)(puVar11 + 0x3190);
              puVar53[0x23a] = *(undefined8 *)(puVar11 + 0x3188);
              puVar53[0x239] = uVar74;
              puVar53[0x23c] = uVar62;
              puVar53[0x23b] = uVar70;
              uVar70 = *(undefined8 *)(puVar11 + 0x31b8);
              uVar74 = *(undefined8 *)(puVar11 + 0x31b0);
              uVar62 = *(undefined8 *)(puVar11 + 0x31a0);
              puVar53[0x23e] = *(undefined8 *)(puVar11 + 0x31a8);
              puVar53[0x23d] = uVar62;
              puVar53[0x240] = uVar70;
              puVar53[0x23f] = uVar74;
              uVar70 = *(undefined8 *)(puVar11 + 0x3178);
              uVar74 = *(undefined8 *)(puVar11 + 0x3170);
              uVar62 = *(undefined8 *)(puVar11 + 0x3160);
              puVar53[0x236] = *(undefined8 *)(puVar11 + 0x3168);
              puVar53[0x235] = uVar62;
              puVar53[0x238] = uVar70;
              puVar53[0x237] = uVar74;
              puVar53[0x24f] = lVar61;
              lVar60 = *(long *)(puVar11 + -0x1030);
              unaff_x28 = (code *)(lVar60 + 0x82f);
              *(undefined1 *)(lVar60 + 0x82f) = 0;
code_r0x000100595fe4:
              uVar86 = puVar53[0x246];
              uVar62 = puVar53[0x245];
              uVar70 = puVar53[0x248];
              uVar74 = puVar53[0x247];
              uVar52 = puVar53[0x244];
              uVar72 = puVar53[0x243];
              uVar65 = puVar53[0x245];
              *(undefined8 *)(puVar11 + 0x6df8) = puVar53[0x246];
              *(undefined8 *)(puVar11 + 0x6df0) = uVar65;
              *(undefined8 *)(puVar11 + 0x6e08) = uVar70;
              *(undefined8 *)(puVar11 + 0x6e00) = uVar74;
              uVar68 = puVar53[0x248];
              uVar65 = puVar53[0x247];
              uVar74 = puVar53[0x249];
              *(undefined8 *)(puVar11 + 0x6e18) = puVar53[0x24a];
              *(undefined8 *)(puVar11 + 0x6e10) = uVar74;
              uVar76 = puVar53[0x23e];
              uVar75 = puVar53[0x23d];
              uVar70 = puVar53[0x240];
              uVar74 = puVar53[0x23f];
              uVar81 = puVar53[0x23c];
              uVar79 = puVar53[0x23b];
              uVar77 = puVar53[0x23d];
              *(undefined8 *)(puVar11 + 0x6db8) = puVar53[0x23e];
              *(undefined8 *)(puVar11 + 0x6db0) = uVar77;
              *(undefined8 *)(puVar11 + 0x6dc8) = uVar70;
              *(undefined8 *)(puVar11 + 0x6dc0) = uVar74;
              uVar78 = puVar53[0x240];
              uVar77 = puVar53[0x23f];
              uVar74 = puVar53[0x241];
              uVar89 = puVar53[0x242];
              uVar87 = puVar53[0x241];
              uVar83 = puVar53[0x244];
              uVar70 = puVar53[0x243];
              *(undefined8 *)(puVar11 + 0x6dd8) = puVar53[0x242];
              *(undefined8 *)(puVar11 + 0x6dd0) = uVar74;
              *(undefined8 *)(puVar11 + 0x6de8) = uVar83;
              *(undefined8 *)(puVar11 + 0x6de0) = uVar70;
              uVar74 = puVar53[0x235];
              uVar83 = puVar53[0x238];
              uVar70 = puVar53[0x237];
              *(undefined8 *)(puVar11 + 0x6d78) = puVar53[0x236];
              *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
              *(undefined8 *)(puVar11 + 0x6d88) = uVar83;
              *(undefined8 *)(puVar11 + 0x6d80) = uVar70;
              uVar74 = puVar53[0x239];
              uVar96 = puVar53[0x23c];
              uVar70 = puVar53[0x23b];
              uVar93 = puVar53[0x236];
              uVar91 = puVar53[0x235];
              uVar84 = puVar53[0x238];
              uVar83 = puVar53[0x237];
              uVar100 = puVar53[0x23a];
              uVar98 = puVar53[0x239];
              *(undefined8 *)(puVar11 + 0x6d98) = puVar53[0x23a];
              *(undefined8 *)(puVar11 + 0x6d90) = uVar74;
              *(undefined8 *)(puVar11 + 0x6da8) = uVar96;
              *(undefined8 *)(puVar11 + 0x6da0) = uVar70;
              puVar53[0x252] = puVar53[0x24b];
              puVar53[0x251] = puVar53[0x24a];
              puVar53[0x250] = lVar61;
              *(undefined1 *)(lVar60 + 0x831) = 1;
              *(undefined8 *)(puVar11 + 0x6e20) = puVar53[0x24b];
              *(undefined1 *)(lVar60 + 0x830) = 1;
              uVar74 = *(undefined8 *)(lVar61 + 8);
              uVar70 = *(undefined8 *)(lVar61 + 0x10);
              puVar53[0x26f] = uVar86;
              puVar53[0x26e] = uVar62;
              puVar53[0x271] = uVar68;
              puVar53[0x270] = uVar65;
              puVar53[0x273] = puVar53[0x24a];
              puVar53[0x272] = puVar53[0x249];
              puVar53[0x267] = uVar76;
              puVar53[0x266] = uVar75;
              puVar53[0x269] = uVar78;
              puVar53[0x268] = uVar77;
              puVar53[0x26b] = uVar89;
              puVar53[0x26a] = uVar87;
              puVar53[0x26d] = uVar52;
              puVar53[0x26c] = uVar72;
              puVar53[0x25f] = uVar93;
              puVar53[0x25e] = uVar91;
              puVar53[0x261] = uVar84;
              puVar53[0x260] = uVar83;
              puVar53[0x263] = uVar100;
              puVar53[0x262] = uVar98;
              uVar65 = puVar53[0x24c];
              uVar86 = puVar53[0x24d];
              uVar62 = puVar53[0x24e];
              *(undefined2 *)(lVar60 + 0x830) = 0;
              puVar53[0x274] = puVar53[0x24b];
              puVar53[0x265] = uVar81;
              puVar53[0x264] = uVar79;
              puVar53[0x275] = uVar65;
              puVar53[0x276] = uVar86;
              puVar53[0x277] = uVar62;
              puVar53[0x278] = uVar74;
              puVar53[0x279] = uVar70;
              puVar53[0x27a] = lVar61 + 0x30;
              *(undefined1 *)(lVar60 + 0xae7) = 0;
code_r0x0001005960cc:
              unaff_x25 = (code *)(puVar53 + 0x235);
              pcVar21 = (code *)(puVar53 + 0x25e);
              pcVar22 = (code *)FUN_1006cc774(puVar11 + 0xae30,pcVar21,
                                              **(undefined8 **)(puVar11 + -0x1028));
              if (*(long *)(puVar11 + 0xae30) != -0x8000000000000000) {
                pcVar30 = (code *)(puVar53 + 0x253);
                uVar74 = *(undefined8 *)(puVar11 + 0xae50);
                uVar62 = *(undefined8 *)(puVar11 + 0xae68);
                uVar70 = *(undefined8 *)(puVar11 + 0xae60);
                puVar53[600] = *(undefined8 *)(puVar11 + 0xae58);
                puVar53[599] = uVar74;
                puVar53[0x25a] = uVar62;
                puVar53[0x259] = uVar70;
code_r0x000100596114:
                uVar74 = *(undefined8 *)(puVar11 + 0xae70);
                *(undefined8 *)(pcVar30 + 0x48) = *(undefined8 *)(puVar11 + 0xae78);
                *(undefined8 *)(pcVar30 + 0x40) = uVar74;
                uVar38 = *(ulong *)(puVar11 + 0xae48);
                uVar20 = *(ulong *)(puVar11 + 0xae40);
code_r0x000100596120:
                uVar74 = *(undefined8 *)(puVar11 + 0xae30);
                *(undefined8 *)(pcVar30 + 8) = *(undefined8 *)(puVar11 + 0xae38);
                *(undefined8 *)pcVar30 = uVar74;
                *(ulong *)(pcVar30 + 0x18) = uVar38;
                *(ulong *)(pcVar30 + 0x10) = uVar20;
                FUN_100e66b8c(pcVar21);
                uVar74 = puVar53[0x250];
                uVar70 = puVar53[0x256];
                *(undefined8 *)(pcVar21 + 8) = puVar53[599];
                *(undefined8 *)pcVar21 = uVar70;
                *(undefined8 *)(pcVar21 + 0x10) = puVar53[600];
                puVar53[0x261] = uVar74;
                puVar53[0x263] = puVar53[0x252];
                puVar53[0x262] = puVar53[0x251];
                *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0xa3f) = 0;
                goto code_r0x00010059615c;
              }
              cVar28 = (code)0x3;
code_r0x000100596ac4:
              *unaff_x28 = cVar28;
code_r0x000100596ac8:
              *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0xaef) = 3;
              cVar28 = (code)0x4;
              goto code_r0x000100596ad8;
            }
            FUN_107c05cc0(&UNK_10b21e060);
            goto code_r0x0001005975c0;
          }
          if (bVar27 != 3) {
            FUN_107c05cc4(&UNK_10b21e060);
            goto code_r0x0001005975c0;
          }
          unaff_x28 = (code *)(*(long *)(puVar11 + -0x1030) + 0x82f);
          bVar27 = *(byte *)(*(long *)(puVar11 + -0x1030) + 0x82f);
          unaff_x25 = (code *)(puVar53 + 0x235);
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              lVar61 = puVar53[0x24f];
              lVar60 = *(long *)(puVar11 + -0x1030);
              goto code_r0x000100595fe4;
            }
            if (bVar27 != 1) {
              pcVar22 = (code *)&UNK_10b21d000;
              goto code_r0x000100596bc0;
            }
            FUN_107c05cc0(&UNK_10b21df58);
            goto code_r0x0001005975c0;
          }
          if (bVar27 == 3) goto code_r0x0001005960cc;
code_r0x00010059615c:
          pcVar22 = (code *)FUN_1006cc3f8(puVar11 + 0xb380,puVar53 + 0x25e,
                                          *(undefined8 *)(puVar11 + -0x1028));
          if (*(long *)(puVar11 + 0xb380) == -0x8000000000000000) {
            cVar28 = (code)0x4;
            goto code_r0x000100596ac4;
          }
          *(undefined8 *)(puVar11 + 0xb608) = *(undefined8 *)(puVar11 + 0xb388);
          *(undefined8 *)(puVar11 + 0xb600) = *(undefined8 *)(puVar11 + 0xb380);
          *(undefined8 *)(puVar11 + 0xb610) = *(undefined8 *)(puVar11 + 0xb390);
          if (*(char *)(*(long *)(puVar11 + -0x1030) + 0xa3f) == '\x03') {
            pcVar22 = (code *)FUN_100ccec20(puVar53 + 0x264);
          }
          else if (*(char *)(*(long *)(puVar11 + -0x1030) + 0xa3f) == '\0') {
            lVar60 = puVar53[0x25f];
            lVar61 = puVar53[0x260];
            if (lVar61 != 0) {
              puVar67 = (undefined8 *)(lVar60 + 8);
              do {
                if (puVar67[-1] != 0) {
                  pcVar22 = (code *)_free(*puVar67);
                }
                puVar67 = puVar67 + 3;
                lVar61 = lVar61 + -1;
              } while (lVar61 != 0);
            }
            if (puVar53[0x25e] != 0) {
              pcVar22 = (code *)_free(lVar60);
            }
          }
          uVar62 = *(undefined8 *)(puVar11 + 0xb608);
          uVar70 = *(undefined8 *)(puVar11 + 0xb600);
          puVar53[599] = uVar62;
          puVar53[0x256] = uVar70;
          uVar74 = *(undefined8 *)(puVar11 + 0xb610);
          puVar53[600] = uVar74;
          lVar60 = puVar53[0x253];
          *(undefined8 *)(puVar11 + 0xb750) = uVar74;
          uVar86 = puVar53[0x255];
          uVar74 = puVar53[0x254];
          *(undefined8 *)(puVar11 + 0xb748) = uVar62;
          *(undefined8 *)(puVar11 + 0xb740) = uVar70;
          *(undefined8 *)(puVar11 + 0xb738) = uVar86;
          *(undefined8 *)(puVar11 + 0xb730) = uVar74;
          uVar20 = puVar53[0x259];
          uVar74 = puVar53[0x25a];
          lVar61 = *(long *)(puVar11 + -0x1030);
          uVar41 = *(undefined1 *)(lVar61 + 0x827);
          *(undefined1 *)(lVar61 + 0x82f) = 1;
          *(undefined2 *)(lVar61 + 0x830) = 0;
          if (lVar60 == -0x8000000000000000) goto code_r0x000100596ac8;
          FUN_100cb98e0(unaff_x25);
          lVar61 = *(long *)(puVar11 + -0x1030);
          *(undefined1 *)(lVar61 + 0xaef) = 1;
          uVar86 = *(undefined8 *)(puVar11 + 0xb738);
          uVar62 = *(undefined8 *)(puVar11 + 0xb730);
          uVar65 = *(undefined8 *)(puVar11 + 0xb740);
          *(undefined8 *)(puVar11 + 0xbe88) = uVar86;
          *(undefined8 *)(puVar11 + 0xbe80) = uVar62;
          *(undefined8 *)(puVar11 + 0xbe98) = *(undefined8 *)(puVar11 + 0xb748);
          *(undefined8 *)(puVar11 + 0xbe90) = uVar65;
          uVar70 = *(undefined8 *)(puVar11 + 0xb750);
          *(undefined8 *)(puVar11 + 0xbea0) = uVar70;
          puVar53[0x21e] = *(undefined8 *)(puVar11 + 0xb748);
          puVar53[0x21d] = uVar65;
          puVar53[0x21f] = uVar70;
          puVar53[0x21a] = lVar60;
          puVar53[0x21c] = uVar86;
          puVar53[0x21b] = uVar62;
          *(undefined1 *)(lVar61 + 0x647) = uVar41;
          if ((uVar20 & 0x7fffffffffffffff) != 0) {
            _free(uVar74);
          }
          uVar74 = *(undefined8 *)pcVar25;
          puVar53[0x222] = *(undefined8 *)(pcVar25 + 8);
          puVar53[0x221] = uVar74;
          puVar53[0x223] = *(undefined8 *)(pcVar25 + 0x10);
          uVar74 = *(undefined8 *)(lVar61 + 0x5ff);
          puVar53[0x225] = *(undefined8 *)(lVar61 + 0x607);
          puVar53[0x224] = uVar74;
          *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0x728) = 0;
code_r0x0001005962f4:
          pcVar22 = (code *)FUN_1004f68e8(puVar53 + 0x221,*(undefined8 *)(puVar11 + -0x1028));
          if (((ulong)pcVar22 & 1) != 0) {
            cVar28 = (code)0x5;
            goto code_r0x000100596ad8;
          }
          pcVar22 = (code *)FUN_100ca19bc(puVar53 + 0x221);
          lVar61 = puVar53[0x21d];
          uVar74 = puVar53[0x21e];
          *(undefined8 *)(puVar11 + 0xbc28) = puVar53[0x21f];
          *(undefined8 *)(puVar11 + 0xbc20) = uVar74;
          *(undefined8 *)(puVar11 + 0xbc30) = puVar53[0x220];
          *(undefined2 *)(*(long *)(puVar11 + -0x1030) + 0x60f) = 1;
          if (lVar61 == -0x8000000000000000) goto code_r0x000100596adc;
          *(undefined8 *)(puVar11 + 0xad08) = *(undefined8 *)(puVar11 + 0xbc28);
          *(undefined8 *)(puVar11 + 0xad00) = *(undefined8 *)(puVar11 + 0xbc20);
          *(undefined8 *)(puVar11 + 0xad10) = *(undefined8 *)(puVar11 + 0xbc30);
          FUN_100da6ff8(pcVar64);
          uVar74 = puVar53[0x159];
          uVar70 = puVar53[0x15a];
          uVar65 = *(undefined8 *)(puVar11 + 0xad08);
          uVar86 = *(undefined8 *)(puVar11 + 0xad00);
          *(undefined8 *)(puVar11 + 0xb128) = uVar65;
          *(undefined8 *)(puVar11 + 0xb120) = uVar86;
          uVar62 = *(undefined8 *)(puVar11 + 0xad10);
          *(undefined8 *)(puVar11 + 0xb130) = uVar62;
          puVar53[0x176] = lVar61;
          puVar53[0x179] = uVar62;
          puVar53[0x178] = uVar65;
          puVar53[0x177] = uVar86;
          puVar53[0x17a] = uVar74;
          puVar53[0x17b] = uVar70;
          lVar61 = *(long *)(puVar11 + -0x1040);
          puVar56 = (undefined1 *)(lVar61 + 0x140);
          *(undefined1 *)(lVar61 + 0x140) = 0;
code_r0x0001005963ac:
          puVar53[0x17d] = puVar53[0x177];
          puVar53[0x17c] = puVar53[0x176];
          puVar53[0x17f] = puVar53[0x179];
          puVar53[0x17e] = puVar53[0x178];
          puVar53[0x181] = puVar53[0x177];
          puVar53[0x180] = puVar53[0x176];
          puVar53[0x182] = puVar53[0x178];
          puVar53[0x183] = uVar74;
          puVar53[0x184] = uVar70;
          *(undefined1 *)(lVar61 + 0x138) = 0;
code_r0x0001005963d0:
          pcVar22 = (code *)func_0x0001004f6c44(puVar53 + 0x180,*(undefined8 *)(puVar11 + -0x1028));
          if (((ulong)pcVar22 & 1) != 0) {
            *puVar56 = 3;
            uVar41 = 6;
            goto code_r0x000100596ae0;
          }
          FUN_100ca1af4(puVar53 + 0x180);
          bVar27 = *(byte *)(puVar53 + 0x17f);
          *puVar56 = 1;
          if ((bVar27 & 1) != 0) goto code_r0x000100596478;
          plVar57 = (long *)puVar53[0x172];
          lVar61 = *plVar57;
          *plVar57 = lVar61 + -1;
          LORelease();
          if (lVar61 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
          }
          *(undefined2 *)(puVar53 + 0x175) = 0;
          plVar57 = (long *)puVar53[0x159];
        } while( true );
      }
    }
    else {
      pcVar30 = (code *)(puVar53 + 0x8c);
      uVar74 = *(undefined8 *)pcVar30;
      uVar62 = puVar53[0x8f];
      uVar70 = puVar53[0x8e];
      *(undefined8 *)(unaff_x26 + 8) = puVar53[0x8d];
      *(undefined8 *)unaff_x26 = uVar74;
      *(undefined8 *)(unaff_x26 + 0x18) = uVar62;
      *(undefined8 *)(unaff_x26 + 0x10) = uVar70;
      uVar38 = puVar53[0x91];
      uVar20 = puVar53[0x90];
      uVar70 = puVar53[0x93];
      uVar74 = puVar53[0x92];
      uVar86 = puVar53[0x95];
      uVar62 = puVar53[0x94];
      uVar68 = puVar53[0x97];
      uVar65 = puVar53[0x96];
code_r0x000100592470:
      *(undefined8 *)(unaff_x26 + 0x48) = uVar86;
      *(undefined8 *)(unaff_x26 + 0x40) = uVar62;
      *(undefined8 *)(unaff_x26 + 0x58) = uVar68;
      *(undefined8 *)(unaff_x26 + 0x50) = uVar65;
      *(ulong *)(unaff_x26 + 0x28) = uVar38;
      *(ulong *)(unaff_x26 + 0x20) = uVar20;
      *(undefined8 *)(unaff_x26 + 0x38) = uVar70;
      *(undefined8 *)(unaff_x26 + 0x30) = uVar74;
      uVar70 = *(undefined8 *)(pcVar30 + 0x68);
      uVar74 = *(undefined8 *)(pcVar30 + 0x60);
      uVar86 = *(undefined8 *)(pcVar30 + 0x78);
      uVar62 = *(undefined8 *)(pcVar30 + 0x70);
      uVar68 = *(undefined8 *)(pcVar30 + 0x88);
      uVar65 = *(undefined8 *)(pcVar30 + 0x80);
      *(undefined8 *)(unaff_x26 + 0x90) = *(undefined8 *)(pcVar30 + 0x90);
      *(undefined8 *)(unaff_x26 + 0x78) = uVar86;
      *(undefined8 *)(unaff_x26 + 0x70) = uVar62;
      *(undefined8 *)(unaff_x26 + 0x88) = uVar68;
      *(undefined8 *)(unaff_x26 + 0x80) = uVar65;
      *(undefined8 *)(unaff_x26 + 0x68) = uVar70;
      *(undefined8 *)(unaff_x26 + 0x60) = uVar74;
      cVar16 = __ZN14codex_protocol5error8CodexErr23to_codex_protocol_error17h3ce3e31048761f00E
                         (unaff_x26);
      if (cVar16 == '\x01') {
        pcVar39 = (code *)0x8;
        *(long *)(puVar11 + 0x6d78) = puVar53[0x47] + 0x10;
code_r0x0001005924b4:
        *(code **)(puVar11 + 0x6d70) = pcVar39;
        auVar124 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                             (puVar53 + 0x46,puVar11 + 0x6d70);
        *(undefined1 (*) [16])(puVar53 + 0x16c) = auVar124;
code_r0x000100590e5c:
        auVar124 = (**(code **)(auVar124._8_8_ + 0x18))
                             (auVar124._0_8_,*(undefined8 *)(puVar11 + -0x1028));
        pcVar22 = auVar124._0_8_;
        if (((ulong)pcVar22 & 1) != 0) {
code_r0x000100590e6c:
          **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
          uVar41 = 4;
          goto LAB_100595774;
        }
        FUN_100c9623c(puVar53[0x16c],puVar53[0x16d]);
        if (auVar124._8_8_ == 0) goto LAB_1005924d4;
        *(long *)(puVar11 + 0xb730) = auVar124._8_8_;
        bVar12 = 2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
        bVar15 = ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 3;
code_r0x000100591140:
        if (bVar12 && !bVar15) {
code_r0x000100591fe4:
          lVar61 = 
          ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad78554fa519eecE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar74 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad78554fa519eecE
                      + 0x20);
            uVar70 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad78554fa519eecE
                      + 0x28);
            *(undefined8 *)(puVar11 + -0xf90) = 2;
            *(undefined8 *)(puVar11 + -0xf88) = uVar74;
            *(undefined8 *)(puVar11 + -0xf80) = uVar70;
            pcVar19 = pcRam000000010b634c20;
            if (pcRam000000010b66fd20 != (code *)0x2) {
              pcVar19 = (code *)&UNK_10b3c24c8;
            }
            pcVar21 = pcRam000000010b634c18;
            if (pcRam000000010b66fd20 != (code *)0x2) {
              pcVar21 = (code *)&UNK_109adfc03;
            }
            iVar17 = (**(code **)(pcVar19 + 0x18))(pcVar21,puVar11 + -0xf90);
            if (iVar17 != 0) {
              *(undefined1 **)(puVar11 + -0xa80) = puVar11 + 0xb730;
              *(code **)(puVar11 + -0xa78) =
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              *(char **)(puVar11 + 0xae30) = s__failed_to_usage_limit_active_go_108ac17b7;
              *(undefined1 **)(puVar11 + 0xae38) = puVar11 + -0xa80;
              *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + 0xae30;
              *(undefined **)(puVar11 + 0xbe88) = &UNK_10b208fd0;
              *(undefined8 *)(puVar11 + 0x6d70) = 1;
              *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xbe80;
              *(undefined8 *)(puVar11 + 0x6d80) = 1;
              *(long *)(puVar11 + 0x6d88) =
                   ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad78554fa519eecE
                   + 0x30;
              *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xf88);
              *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xf90);
              *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + -0xf80);
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar61,pcVar21,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
            }
          }
        }
        else {
          pcVar21 = (code *)0x10b62a000;
code_r0x000100591148:
          pcVar31 = pcVar21 + 0xb90;
          puVar67 = (undefined8 *)(ulong)(byte)pcVar21[0xba0];
          bVar12 = 1 < (byte)pcVar21[0xba0] - 1;
code_r0x000100591158:
          if (bVar12) {
            if ((int)puVar67 != 0) {
              cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad78554fa519eecE
                                 );
              puVar53 = *(undefined8 **)(puVar11 + -0x1048);
              if (cVar16 != '\0') goto code_r0x00010059115c;
            }
            goto code_r0x000100591fe4;
          }
code_r0x00010059115c:
          uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (*(undefined8 *)pcVar31);
          if ((uVar20 & 1) == 0) goto code_r0x000100591fe4;
          pcVar30 = *(code **)pcVar31;
code_r0x00010059116c:
          pcVar30 = pcVar30 + 0x30;
          pcVar39 = (code *)(puVar11 + 0xb730);
          pcVar42 = 
          __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
code_r0x000100591180:
          *(code **)(puVar11 + 0x3160) = pcVar39;
          *(code **)(puVar11 + 0x3168) = pcVar42;
          *(char **)(puVar11 + -0xa80) = s__failed_to_usage_limit_active_go_108ac17b7;
          *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x3160;
          *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
          *(undefined **)(puVar11 + 0xae38) = &UNK_10b208fd0;
          pcVar39 = (code *)0x1;
          *(undefined8 *)(puVar11 + 0x6d70) = 1;
          *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xae30;
code_r0x0001005911cc:
          *(code **)(puVar11 + 0x6d80) = pcVar39;
          *(code **)(puVar11 + 0x6d88) = pcVar30;
          FUN_10059e37c(puVar11 + 0x6d70);
        }
        (**(code **)**(undefined8 **)(puVar11 + 0xb730))();
      }
LAB_1005924d4:
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
        if (1 < bRam000000010b62ab28 - 1) {
          if (bRam000000010b62ab28 != 0) {
            cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
                               );
            puVar53 = *(undefined8 **)(puVar11 + -0x1048);
            if (cVar16 != '\0') goto LAB_100592500;
          }
          goto LAB_10059256c;
        }
LAB_100592500:
        uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
                           );
        if ((uVar20 & 1) == 0) goto LAB_10059256c;
        *(undefined **)(puVar11 + 0x3160) = &UNK_108ca64dc;
        *(undefined8 *)(puVar11 + 0x3168) = 0x45;
        *(undefined1 **)(puVar11 + -0xa80) = puVar11 + 0x3160;
        *(undefined **)(puVar11 + -0xa78) = &UNK_10b208fd0;
        *(undefined8 *)(puVar11 + 0x6d70) = 1;
        *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + -0xa80;
        *(undefined8 *)(puVar11 + 0x6d80) = 1;
        *(long *)(puVar11 + 0x6d88) =
             ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h16ec20dfd6d466fdE
             + 0x30;
        FUN_10059e23c(puVar11 + 0x6d70);
      }
      else {
LAB_10059256c:
        pcVar30 = (code *)0x10b66f000;
code_r0x000100592570:
        if (pcVar30[0xef8] == (code)0x0) {
LAB_100592588:
          pcVar30 = (code *)0x10b66f000;
code_r0x00010059258c:
          pcVar30 = pcVar30 + 0xd18;
code_r0x000100592590:
          pcVar30 = *(code **)pcVar30;
code_r0x000100592594:
          if (pcVar30 != (code *)0x0) {
code_r0x000100592598:
            pcVar64 = (code *)0x10b62a000;
code_r0x00010059259c:
            pcVar64 = pcVar64 + 0xb18;
code_r0x0001005925a0:
            pcVar21 = *(code **)pcVar64;
            uVar74 = *(undefined8 *)(pcVar21 + 0x20);
            uVar70 = *(undefined8 *)(pcVar21 + 0x28);
            *(undefined8 *)(puVar11 + -0xf78) = 1;
            *(undefined8 *)(puVar11 + -0xf70) = uVar74;
            *(undefined8 *)(puVar11 + -0xf68) = uVar70;
            pcVar30 = pcRam000000010b66fd20;
            pcVar39 = pcRam000000010b634c18;
code_r0x0001005925cc:
            pcVar43 = (code *)&UNK_10b3c24c8;
            bVar15 = pcVar30 == (code *)0x2;
            pcVar42 = pcRam000000010b634c20;
code_r0x0001005925e0:
            pcVar19 = pcVar42;
            if (!bVar15) {
              pcVar19 = pcVar43;
            }
            unaff_x22 = pcVar39;
            if (!bVar15) {
              unaff_x22 = (code *)&UNK_109adfc03;
            }
code_r0x0001005925f0:
            iVar17 = (**(code **)(pcVar19 + 0x18))(unaff_x22,puVar11 + -0xf78);
            if (iVar17 != 0) {
              lVar61 = *(long *)pcVar64;
              *(undefined **)(puVar11 + -0xa80) = &UNK_108ca64dc;
              *(undefined8 *)(puVar11 + -0xa78) = 0x45;
              *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
              *(undefined **)(puVar11 + 0xae38) = &UNK_10b208fd0;
              *(undefined8 *)(puVar11 + 0x6d70) = 1;
              *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xae30;
              *(undefined8 *)(puVar11 + 0x6d80) = 1;
              *(long *)(puVar11 + 0x6d88) = lVar61 + 0x30;
              *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xf70);
              *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xf78);
              *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + -0xf68);
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (pcVar21,unaff_x22,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
            }
          }
        }
      }
      FUN_100df5738(puVar53 + 0x159);
    }
    goto LAB_100597440;
  case (code)0x1:
    goto code_r0x00010059419c;
  case (code)0x2:
    FUN_107c05cc4(&UNK_10b217fc8);
code_r0x00010059419c:
    FUN_107c05cc0(&UNK_10b217fc8);
    iVar17 = extraout_w8;
code_r0x0001005941a8:
    if (iVar17 == 1) {
      FUN_107c05cc0(&UNK_10b217d30);
    }
    else {
      FUN_107c05cc4(&UNK_10b217d30);
    }
    break;
  case (code)0x3:
    unaff_x28 = (code *)((long)extraout_x1 + 0xafa);
  case (code)0x2c:
    pcVar30 = (code *)(ulong)*(byte *)((long)extraout_x1 + 0xafa);
    unaff_x26 = (code *)(extraout_x1 + 0x159);
code_r0x000100590e10:
    uVar29 = (uint)pcVar30;
    if (uVar29 < 3) {
      if (uVar29 != 0) {
        *(code **)(puVar11 + -0x1080) = unaff_x26;
        if (uVar29 == 1) {
          FUN_107c05cc0(&UNK_10b217dd8);
        }
        else {
          FUN_107c05cc4(&UNK_10b217dd8);
        }
        break;
      }
code_r0x000100590e1c:
      pcVar30 = (code *)extraout_x1[0x15c];
code_r0x000100590e20:
      pcVar39 = (code *)extraout_x1[0x15d];
code_r0x000100590e24:
      pcVar21 = (code *)extraout_x1[0x15e];
      goto code_r0x000100591218;
    }
    if (uVar29 == 3) {
      pcVar19 = (code *)((long)extraout_x1 + 0xb69);
      bVar27 = *(byte *)((long)extraout_x1 + 0xb69);
      *(undefined8 **)(puVar11 + -0x1070) = extraout_x1 + 0x160;
      if (bVar27 < 4) {
        if (bVar27 < 2) {
          if (bVar27 != 0) {
            *(code **)(puVar11 + -0x1060) = unaff_x28;
            *(code **)(puVar11 + -0x1080) = unaff_x26;
            FUN_107c05cc0(&UNK_10b217fb0);
            break;
          }
          pcVar30 = (code *)extraout_x1[0x16a];
          pcVar39 = (code *)extraout_x1[0x16b];
          pcVar21 = (code *)extraout_x1[0x16c];
          goto code_r0x000100591240;
        }
        if (bVar27 != 3) {
          *(code **)(puVar11 + -0x1060) = unaff_x28;
          *(code **)(puVar11 + -0x1080) = unaff_x26;
          FUN_107c05cc4(&UNK_10b217fb0);
          break;
        }
        unaff_x22 = (code *)(extraout_x1 + 0x17e);
        bVar27 = *(byte *)(extraout_x1 + 0x17e);
        if (bVar27 < 2) {
          if (bVar27 != 0) {
            *(code **)(puVar11 + -0x1060) = unaff_x28;
            *(code **)(puVar11 + -0x1058) = pcVar19;
            *(code **)(puVar11 + -0x1080) = unaff_x26;
            FUN_107c05cc0(&UNK_10b218318);
            break;
          }
          pcVar30 = (code *)extraout_x1[0x16e];
          goto code_r0x000100591268;
        }
        if (bVar27 != 3) {
          *(code **)(puVar11 + -0x1060) = unaff_x28;
          *(code **)(puVar11 + -0x1058) = pcVar19;
          *(code **)(puVar11 + -0x1080) = unaff_x26;
          pcVar22 = (code *)&UNK_10b218000;
code_r0x000100592924:
          FUN_107c05cc4(pcVar22 + 0x318);
          break;
        }
        goto code_r0x000100591274;
      }
      if (bVar27 == 4) {
        *(long *)(puVar11 + -0x1088) = *(long *)(puVar11 + -0x1040) + 0xe78;
        bVar27 = *(byte *)(*(long *)(puVar11 + -0x1040) + 0xe78);
        if (bVar27 < 3) {
          *(code **)(puVar11 + -0x1058) = pcVar19;
          if (bVar27 != 0) {
            *(undefined8 **)(puVar11 + -0x1090) = extraout_x1 + 0x16e;
            *(code **)(puVar11 + -0x1060) = unaff_x28;
            *(code **)(puVar11 + -0x1080) = unaff_x26;
            if (bVar27 == 1) {
              FUN_107c05cc0(&UNK_10b217b20);
            }
            else {
              FUN_107c05cc4(&UNK_10b217b20);
            }
            break;
          }
          pcVar30 = (code *)extraout_x1[0x171];
          pcVar39 = (code *)extraout_x1[0x172];
          pcVar21 = *(code **)(puVar11 + -0x1040);
          goto code_r0x000100591650;
        }
        *(undefined8 **)(puVar11 + -0x1090) = extraout_x1 + 0x16e;
        if (bVar27 == 3) {
          auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x66e);
          goto code_r0x00010059193c;
        }
        auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x67a);
        goto code_r0x000100591c7c;
      }
      if (bVar27 == 5) goto code_r0x000100593d48;
      goto code_r0x000100591790;
    }
    if (uVar29 == 4) goto code_r0x0001005915c8;
    goto code_r0x000100591734;
  case (code)0x4:
  case (code)0xd3:
    auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x16c);
    goto code_r0x000100590e5c;
  case (code)0x5:
    goto code_r0x000100592344;
  case (code)0x6:
    goto code_r0x0001005923a0;
  case (code)0x7:
  case (code)0xd4:
    pcVar42 = (code *)((long)extraout_x1 + 0xbaa);
  case (code)0xe7:
    bVar27 = *(byte *)((long)extraout_x1 + 0xbaa);
    pcVar30 = (code *)(ulong)bVar27;
    *(code **)(puVar11 + -0x1060) = pcVar42;
    *(undefined8 **)(puVar11 + -0x1058) = extraout_x1 + 0x159;
    if (3 < bVar27) {
      bVar15 = bVar27 == 4;
code_r0x000100590e9c:
      if (bVar15) goto code_r0x000100595a94;
      if ((int)pcVar30 == 5) {
code_r0x000100590ea8:
        pcVar19 = (code *)(*(long *)(puVar11 + -0x1030) + 0x60f);
        bVar27 = *(byte *)(*(long *)(puVar11 + -0x1030) + 0x60f);
        pcVar30 = (code *)(ulong)bVar27;
        pcVar64 = (code *)(extraout_x1 + 0x176);
        if (2 < bVar27) {
          bVar15 = bVar27 == 3;
code_r0x000100591ac4:
          if (bVar15) goto code_r0x000100595e10;
          lVar61 = *(long *)(puVar11 + -0x1030);
          if ((int)pcVar30 == 4) goto code_r0x000100595e48;
          goto code_r0x0001005962f4;
        }
        if (bVar27 == 0) {
          unaff_x25 = (code *)extraout_x1[0x179];
          unaff_x26 = (code *)extraout_x1[0x17a];
code_r0x000100590ecc:
          lVar61 = *(long *)(puVar11 + -0x1030);
          goto code_r0x000100595dcc;
        }
        if (bVar27 == 1) {
          FUN_107c05cc0(&UNK_10b215ad0);
        }
        else {
          FUN_107c05cc4(&UNK_10b215ad0);
        }
      }
      else {
        puVar56 = (undefined1 *)(*(long *)(puVar11 + -0x1040) + 0x140);
        bVar27 = *(byte *)(*(long *)(puVar11 + -0x1040) + 0x140);
        if (bVar27 < 2) {
          if (bVar27 == 0) {
            uVar74 = extraout_x1[0x17a];
            uVar70 = extraout_x1[0x17b];
            lVar61 = *(long *)(puVar11 + -0x1040);
            goto code_r0x0001005963ac;
          }
          FUN_107c05cc0(&UNK_10b2159b8);
        }
        else {
          if (bVar27 == 3) goto code_r0x0001005963d0;
          FUN_107c05cc4(&UNK_10b2159b8);
        }
      }
      break;
    }
    if (1 < bVar27) {
      if (bVar27 == 3) {
        puVar67 = extraout_x1 + 0x186;
        bVar27 = *(byte *)(extraout_x1 + 0x186);
        plVar57 = extraout_x1 + 0x176;
        if (bVar27 < 2) {
          if (bVar27 == 0) {
            lVar61 = *plVar57;
            goto code_r0x00010059579c;
          }
          FUN_107c05cc0(&UNK_10b218720);
        }
        else {
          if (bVar27 == 3) goto code_r0x0001005957a8;
          pcVar22 = (code *)&UNK_10b218000;
code_r0x000100591ab4:
          FUN_107c05cc4(pcVar22 + 0x720);
        }
      }
      else {
        FUN_107c05cc4(&UNK_10b215b40);
      }
      break;
    }
    if (bVar27 != 0) {
      FUN_107c05cc0(&UNK_10b215b40);
      break;
    }
    plVar57 = (long *)extraout_x1[0x173];
    puVar67 = (undefined8 *)extraout_x1[0x174];
    goto code_r0x00010059244c;
  case (code)0x8:
    goto code_r0x00010059651c;
  case (code)0x9:
    goto code_r0x0001005965a8;
  case (code)0xa:
    goto code_r0x000100596740;
  case (code)0xb:
    pcVar19 = (code *)((long)extraout_x1 + 0xba9);
  case (code)0x88:
    pcVar30 = (code *)(ulong)*(byte *)((long)extraout_x1 + 0xba9);
    unaff_x22 = (code *)(extraout_x1 + 0x159);
    uVar29 = (uint)*(byte *)((long)extraout_x1 + 0xba9);
    bVar13 = SBORROW4(uVar29,1);
    bVar14 = (int)(uVar29 - 1) < 0;
    bVar15 = uVar29 == 1;
code_r0x000100590df4:
    if (bVar15 || bVar14 != bVar13) {
      if ((int)pcVar30 != 0) {
        FUN_107c05cc0(&UNK_10b2184c8);
        break;
      }
code_r0x000100590dfc:
      pcVar21 = (code *)extraout_x1[0x174];
      goto code_r0x000100596868;
    }
    bVar15 = (int)pcVar30 == 3;
code_r0x000100591300:
    if (!bVar15) {
      FUN_107c05cc4(&UNK_10b2184c8);
      break;
    }
    goto code_r0x000100596890;
  case (code)0xc:
    goto code_r0x000100596a68;
  case (code)0xd:
    goto code_r0x000100597684;
  case (code)0xe:
  case (code)0xff:
    pcVar19 = (code *)((long)extraout_x1 + 0xb09);
    bVar27 = *(byte *)((long)extraout_x1 + 0xb09);
    pcVar30 = (code *)(ulong)bVar27;
    unaff_x22 = (code *)(extraout_x1 + 0x159);
    if (bVar27 < 3) goto code_r0x0001005913b4;
    bVar15 = bVar27 == 3;
  case (code)0xea:
    if (bVar15) goto code_r0x000100597714;
    goto code_r0x0001005977ac;
  case (code)0xf:
    goto code_r0x0001005982c8;
  case (code)0x10:
    goto code_r0x000100599188;
  case (code)0x11:
    goto code_r0x00010059a588;
  case (code)0x12:
    goto code_r0x00010059a608;
  case (code)0x13:
    goto code_r0x00010059a788;
  case (code)0x14:
    goto code_r0x000100599354;
  case (code)0x15:
    *(undefined8 **)(puVar11 + -0x1060) = extraout_x1 + 0x16a;
  case (code)0x59:
    pcVar30 = (code *)(ulong)*(byte *)(extraout_x1 + 0x16a);
code_r0x000100590d54:
    pcVar64 = (code *)(extraout_x1 + 0x159);
code_r0x000100590d58:
    if (2 < (uint)pcVar30) {
      if ((uint)pcVar30 == 3) goto code_r0x0001005997d0;
      goto code_r0x0001005996e0;
    }
code_r0x000100591374:
    iVar17 = (int)pcVar30;
    if (iVar17 == 0) {
      unaff_x22 = (code *)extraout_x1[0x15c];
      pcVar19 = (code *)extraout_x1[0x15d];
      unaff_x25 = (code *)extraout_x1[0x15e];
      pcVar43 = (code *)extraout_x1[0x15f];
      unaff_x28 = (code *)extraout_x1[0x160];
      plVar57 = (long *)extraout_x1[0x162];
      unaff_x26 = (code *)extraout_x1[0x163];
      pcVar25 = (code *)extraout_x1[0x161];
      goto code_r0x0001005994f0;
    }
    goto code_r0x0001005941a8;
  case (code)0x16:
    goto code_r0x000100599aa0;
  case (code)0x17:
    goto code_r0x000100599af8;
  case (code)0x18:
    pcVar64 = (code *)(extraout_x1 + 0x16b);
    pcVar30 = (code *)(ulong)*(byte *)(extraout_x1 + 0x16b);
    pcVar19 = (code *)(extraout_x1 + 0x159);
    uVar29 = (uint)*(byte *)(extraout_x1 + 0x16b);
    bVar13 = SBORROW4(uVar29,1);
    bVar14 = (int)(uVar29 - 1) < 0;
    bVar15 = uVar29 == 1;
  case (code)0x4a:
    if (bVar15 || bVar14 != bVar13) {
      if ((int)pcVar30 == 0) {
        pcVar30 = (code *)extraout_x1[0x159];
code_r0x000100590ddc:
        lVar61 = extraout_x1[0x15a];
        goto code_r0x000100599b64;
      }
      FUN_107c05cc0(&UNK_10b2184b0);
    }
    else {
      if ((int)pcVar30 == 3) goto code_r0x000100599b74;
      FUN_107c05cc4(&UNK_10b2184b0);
    }
    break;
  case (code)0x19:
    goto code_r0x00010059a2d4;
  case (code)0x1a:
  case (code)0xe3:
    auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x16c);
code_r0x000100590ee0:
    auVar124 = (**(code **)(auVar124._8_8_ + 0x18))
                         (auVar124._0_8_,*(undefined8 *)(puVar11 + -0x1028));
    pcVar21 = auVar124._8_8_;
    pcVar22 = auVar124._0_8_;
    if (((ulong)pcVar22 & 1) != 0) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0x1a;
      goto LAB_100595774;
    }
    pcVar22 = (code *)puVar53[0x16c];
    puVar67 = (undefined8 *)puVar53[0x16d];
    pcVar19 = (code *)*puVar67;
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(pcVar22);
    }
    if (puVar67[1] != 0) goto code_r0x000100590f84;
    goto code_r0x000100590f88;
  case (code)0x1b:
    *(undefined1 **)(puVar11 + -0x1088) = (undefined1 *)((long)extraout_x1 + 0xcb1);
  case (code)0x63:
    pcVar30 = (code *)(ulong)*(byte *)((long)extraout_x1 + 0xcb1);
    unaff_x25 = (code *)(extraout_x1 + 0x159);
code_r0x000100590f40:
    uVar29 = (uint)pcVar30;
    if (uVar29 < 5) {
      if (2 < uVar29) {
        if (uVar29 == 3) goto code_r0x00010059a9a8;
        auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x197);
        goto code_r0x00010059aa40;
      }
      if (uVar29 == 0) {
        plVar58 = (long *)extraout_x1[0x15c];
        plVar57 = (long *)extraout_x1[0x15d];
        uVar41 = *(undefined1 *)(extraout_x1 + 0x196);
        goto code_r0x00010059a420;
      }
      *(code **)(puVar11 + -0x1058) = unaff_x25;
      if (uVar29 == 1) {
        FUN_107c05cc0(&UNK_10b2159d0);
      }
      else {
        FUN_107c05cc4(&UNK_10b2159d0);
      }
    }
    else {
      if (uVar29 < 7) {
        if (uVar29 != 5) {
          *(code **)(puVar11 + -0x1058) = unaff_x25;
          goto code_r0x00010059b550;
        }
code_r0x000100590f58:
        goto code_r0x00010059a4a8;
      }
      bVar15 = uVar29 == 7;
code_r0x0001005913d8:
      if (!bVar15) goto code_r0x00010059bbe4;
      *(code **)(puVar11 + -0x1058) = unaff_x25;
      *(long *)(puVar11 + -0x1070) = *(long *)(puVar11 + -0x1030) + 0x76f;
      bVar27 = *(byte *)(*(long *)(puVar11 + -0x1030) + 0x76f);
      unaff_x25 = (code *)(extraout_x1 + 0x197);
      if (bVar27 < 2) {
        if (bVar27 == 0) {
          lVar61 = extraout_x1[0x1b5];
          goto code_r0x00010059b5e8;
        }
        FUN_107c05cc0(&UNK_10b21e0a8);
      }
      else if (bVar27 == 3) {
        pcVar19 = (code *)(extraout_x1 + 0x1e5);
        bVar27 = *(byte *)(extraout_x1 + 0x1e5);
        unaff_x26 = (code *)(extraout_x1 + 0x1b6);
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            pcVar30 = (code *)extraout_x1[0x1d4];
code_r0x000100592694:
            goto code_r0x00010059b658;
          }
          if (bVar27 == 1) {
            FUN_107c05cc0(&UNK_10b21dfa0);
          }
          else {
            FUN_107c05cc4(&UNK_10b21dfa0);
          }
        }
        else {
          if (bVar27 == 3) goto code_r0x00010059b748;
          pcVar30 = *(code **)(puVar11 + -0x1030);
          pcVar25 = pcVar30 + 0x6c7;
code_r0x0001005926a0:
          cVar28 = pcVar30[0x6c7];
          plVar57 = extraout_x1 + 0x1e6;
          if ((byte)cVar28 < 2) {
            if (cVar28 == (code)0x0) {
              pcVar30 = (code *)extraout_x1[0x1e9];
              pcVar42 = *(code **)(puVar11 + -0x1030);
code_r0x0001005926bc:
              goto code_r0x00010059b7e0;
            }
            FUN_107c05cc0(&UNK_10b21df88);
          }
          else if (cVar28 == (code)0x3) {
            pcVar21 = (code *)(*(long *)(puVar11 + -0x1030) + 0x6bf);
            bVar27 = *(byte *)(*(long *)(puVar11 + -0x1030) + 0x6bf);
            puVar67 = extraout_x1 + 0x1ec;
            if (bVar27 < 2) {
              if (bVar27 == 0) {
                pcVar30 = (code *)extraout_x1[0x1ef];
                pcVar42 = *(code **)(puVar11 + -0x1030);
                goto code_r0x00010059b80c;
              }
              FUN_107c05cc0(&UNK_10b21de80);
            }
            else {
              if (bVar27 == 3) goto code_r0x00010059b914;
              FUN_107c05cc4(&UNK_10b21de80);
            }
          }
          else {
            FUN_107c05cc4(&UNK_10b21df88);
          }
        }
      }
      else {
        FUN_107c05cc4(&UNK_10b21e0a8);
      }
    }
    break;
  case (code)0x1c:
    goto code_r0x00010059bdac;
  case (code)0x1d:
code_r0x00010059be84:
    pcVar22 = (code *)FUN_10059e898(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
    if ((int)pcVar22 != 0) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0x1d;
      goto LAB_100595774;
    }
    FUN_100d1ddbc(puVar53 + 0x159);
code_r0x00010059beb0:
    if ((*(byte *)(puVar53 + 0x142) & 1) == 0) {
      lVar61 = puVar53[0xfc];
      lVar60 = puVar53[0xfd];
      if (puVar53[0xc1] == -0x8000000000000000) {
        *(undefined8 *)(puVar11 + 0x6d70) = 0x8000000000000000;
      }
      else {
        func_0x000100025ae8(puVar11 + 0x6d70,puVar53 + 0xc1);
      }
      puVar67 = puVar53 + 0x46;
      puVar37 = puVar53 + 0x47;
      uVar70 = *(undefined8 *)(puVar11 + 0x6d70);
      *(undefined8 *)(puVar11 + 0xb388) = *(undefined8 *)(puVar11 + 0x6d78);
      *(undefined8 *)(puVar11 + 0xb380) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x6d80);
      *(undefined8 *)(puVar11 + 0xb390) = uVar74;
      unaff_x28 = (code *)(puVar53 + 0x159);
      puVar53[0x15a] = *(undefined8 *)(puVar11 + 0x6d78);
      *(undefined8 *)unaff_x28 = uVar70;
      puVar53[0x15b] = uVar74;
      puVar53[0x15c] = puVar53 + 0x46;
      puVar53[0x15d] = puVar53 + 0x47;
      puVar53[0x15e] = lVar61;
      puVar53[0x15f] = lVar60;
      *(undefined8 **)(puVar11 + -0x1058) = puVar53 + 0x166;
      *(undefined1 *)(puVar53 + 0x166) = 0;
      goto code_r0x00010059c1e4;
    }
    goto LAB_10059ceb4;
  case (code)0x1e:
  case (code)0x26:
  case (code)0x83:
    pcVar30 = (code *)(extraout_x1 + 0x166);
  case (code)0x54:
    *(code **)(puVar11 + -0x1058) = pcVar30;
    bVar27 = *(byte *)(extraout_x1 + 0x166);
    unaff_x28 = (code *)(extraout_x1 + 0x159);
    if (bVar27 < 3) {
      if (bVar27 != 0) {
        if (bVar27 == 1) {
          FUN_107c05cc0(&UNK_10b215ae8);
        }
        else {
          FUN_107c05cc4(&UNK_10b215ae8);
        }
        break;
      }
      puVar37 = (undefined8 *)extraout_x1[0x15d];
      puVar67 = (undefined8 *)extraout_x1[0x15c];
      lVar61 = extraout_x1[0x15e];
      lVar60 = extraout_x1[0x15f];
code_r0x00010059c1e4:
      *(undefined2 *)((long)puVar53 + 0xb32) = 0;
      puVar53[0x161] = puVar37;
      puVar53[0x160] = puVar67;
      *(undefined1 *)((long)puVar53 + 0xb34) = 1;
      *(undefined8 *)(puVar11 + -0x1040) = puVar53[0x159];
      *(undefined8 *)(puVar11 + -0x1070) = puVar53[0x15a];
      uVar74 = puVar53[0x15b];
      *(undefined1 *)((long)puVar53 + 0xb31) = 1;
      puVar53[0x162] = 0x8000000000000000;
      *(long *)(puVar11 + 0xae30) = lVar61;
      *(long *)(puVar11 + 0xae38) = lVar61 + lVar60 * 0xc0;
      FUN_1006c2014(puVar11 + 0x6d70,puVar11 + 0xae30);
      lVar61 = *(long *)(puVar11 + 0x6d70);
      if (lVar61 == -0x8000000000000000) {
        *(undefined8 *)(puVar11 + 0xa980) = 0;
        *(undefined8 *)(puVar11 + 0xa988) = 8;
        *(undefined8 *)(puVar11 + 0xa990) = 0;
      }
      else {
        lVar60 = *(long *)(puVar11 + 0x6d78);
        lVar66 = *(long *)(puVar11 + 0x6d80);
        *(undefined8 *)(puVar11 + -0x1078) = *(undefined8 *)(puVar11 + 0xae38);
        *(undefined8 *)(puVar11 + -0x1080) = *(undefined8 *)(puVar11 + 0xae30);
        plVar57 = (long *)_malloc(0x60);
        if (plVar57 == (long *)0x0) {
          FUN_107c03c64(8,0x60);
          break;
        }
        lVar45 = 0;
        *plVar57 = lVar61;
        plVar57[1] = lVar60;
        plVar57[2] = lVar66;
        *(undefined8 *)(puVar11 + 0x3160) = 4;
        *(long **)(puVar11 + 0x3168) = plVar57;
        lVar61 = 1;
        *(undefined8 *)(puVar11 + 0x3170) = 1;
        *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + -0x1078);
        *(undefined8 *)(puVar11 + -0xa80) = *(undefined8 *)(puVar11 + -0x1080);
        while( true ) {
          FUN_1006c2014(puVar11 + 0x6d70,puVar11 + -0xa80);
          lVar60 = *(long *)(puVar11 + 0x6d70);
          if (lVar60 == -0x8000000000000000) break;
          uVar70 = *(undefined8 *)(puVar11 + 0x6d78);
          uVar62 = *(undefined8 *)(puVar11 + 0x6d80);
          if (lVar61 == *(long *)(puVar11 + 0x3160)) {
            thunk_FUN_108855060(puVar11 + 0x3160,lVar61,1,8,0x18);
            plVar57 = *(long **)(puVar11 + 0x3168);
          }
          *(long *)((long)plVar57 + lVar45 + 0x18) = lVar60;
          *(undefined8 *)((long)plVar57 + lVar45 + 0x20) = uVar70;
          *(undefined8 *)((long)plVar57 + lVar45 + 0x28) = uVar62;
          lVar61 = lVar61 + 1;
          *(long *)(puVar11 + 0x3170) = lVar61;
          lVar45 = lVar45 + 0x18;
        }
        *(undefined8 *)(puVar11 + 0xa988) = *(undefined8 *)(puVar11 + 0x3168);
        *(undefined8 *)(puVar11 + 0xa980) = *(undefined8 *)(puVar11 + 0x3160);
        *(undefined8 *)(puVar11 + 0xa990) = *(undefined8 *)(puVar11 + 0x3170);
      }
      *(undefined1 *)((long)puVar53 + 0xb33) = 1;
      *(long *)(puVar11 + 0x6d70) = *(long *)puVar53[0x160] + 0x4f0;
      auVar124 = FUN_1037cc704(puVar11 + 0x6d70);
      plVar58 = auVar124._8_8_;
      plVar57 = auVar124._0_8_;
      *(long **)(puVar11 + 0x6d70) = plVar57;
      *(undefined8 *)(puVar11 + 0x6d78) = 0;
      if (plVar58 != (long *)0x0) {
        lVar61 = *plVar57;
        *plVar57 = lVar61 + 1;
        if (lVar61 < 0) break;
        if ((long *)*plVar58 == plVar57 + 2) {
          *plVar58 = 3;
        }
        else {
          *(long **)(puVar11 + 0x3160) = plVar57;
          lVar61 = *plVar57;
          *plVar57 = lVar61 + -1;
          LORelease();
          if (lVar61 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar11 + 0x3160);
          }
        }
      }
      lVar61 = *(long *)(puVar11 + 0x6d70);
      puVar53[0x165] = lVar61;
      uVar70 = *(undefined8 *)(*(long *)puVar53[0x160] + 0x3d8);
      *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(*(long *)puVar53[0x160] + 0x3e0);
      *(undefined8 *)(puVar11 + -0xa80) = uVar70;
      uVar70 = *(undefined8 *)(*(long *)puVar53[0x161] + 0x3a8);
      lVar60 = *(long *)(*(long *)puVar53[0x161] + 0x3b0);
      if (lVar60 == 0) {
        lVar66 = 1;
      }
      else {
        lVar66 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar60,1);
        if (lVar66 == 0) {
          FUN_107c03c64(1,lVar60);
          break;
        }
      }
      _memcpy(lVar66,uVar70,lVar60);
      if (*(long *)(*(long *)puVar53[0x161] + 0x4d8) == -0x8000000000000000) {
        *(undefined8 *)(puVar11 + 0x6d70) = 0x8000000000000000;
      }
      else {
        func_0x000100025ae8(puVar11 + 0x6d70,*(long *)puVar53[0x161] + 0x4d8);
      }
      __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(puVar11 + 0xae30);
      uVar70 = *(undefined8 *)(*(long *)puVar53[0x160] + 0x790);
      *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(*(long *)puVar53[0x160] + 0x798);
      *(undefined8 *)(puVar11 + 0x3160) = uVar70;
      uVar70 = *(undefined8 *)(*(long *)puVar53[0x161] + 0x248);
      lVar45 = *(long *)(*(long *)puVar53[0x161] + 0x250);
      *(code **)(puVar11 + -0x1060) = unaff_x28;
      if (lVar45 == 0) {
        lVar23 = 1;
      }
      else {
        lVar23 = _malloc(lVar45);
        if (lVar23 == 0) {
          FUN_107c03c64(1,lVar45);
          break;
        }
      }
      lVar61 = lVar61 + 0x10;
      _memcpy(lVar23,uVar70,lVar45);
      *(undefined2 *)((long)puVar53 + 0xb33) = 0;
      *(undefined8 *)(puVar11 + 0xb4b8) = *(undefined8 *)(puVar11 + 0x3168);
      *(undefined8 *)(puVar11 + 0xb4b0) = *(undefined8 *)(puVar11 + 0x3160);
      *(undefined8 *)(puVar11 + -0xb08) = *(undefined8 *)(puVar11 + -0xa78);
      *(undefined8 *)(puVar11 + -0xb10) = *(undefined8 *)(puVar11 + -0xa80);
      *(undefined8 *)(puVar11 + 0xb608) = *(undefined8 *)(puVar11 + 0x6d78);
      *(undefined8 *)(puVar11 + 0xb600) = *(undefined8 *)(puVar11 + 0x6d70);
      *(undefined8 *)(puVar11 + 0xb610) = *(undefined8 *)(puVar11 + 0x6d80);
      *(undefined8 *)(puVar11 + -0xba0) = *(undefined8 *)(puVar11 + 0xae30);
      *(undefined4 *)(puVar11 + -0xb98) = *(undefined4 *)(puVar11 + 0xae38);
      pcVar25 = (code *)(puVar53 + 0x167);
      puVar53[0x167] = lVar60;
      puVar53[0x168] = lVar66;
      puVar53[0x169] = lVar60;
      puVar53[0x16a] = lVar45;
      puVar53[0x16b] = lVar23;
      puVar53[0x16c] = lVar45;
      uVar70 = *(undefined8 *)(puVar11 + 0xa980);
      puVar53[0x16e] = *(undefined8 *)(puVar11 + 0xa988);
      puVar53[0x16d] = uVar70;
      puVar53[0x16f] = *(undefined8 *)(puVar11 + 0xa990);
      puVar53[0x170] = *(undefined8 *)(puVar11 + -0x1040);
      puVar53[0x171] = *(undefined8 *)(puVar11 + -0x1070);
      puVar53[0x172] = uVar74;
      uVar74 = *(undefined8 *)(puVar11 + 0xb4b0);
      puVar53[0x174] = *(undefined8 *)(puVar11 + 0xb4b8);
      puVar53[0x173] = uVar74;
      uVar70 = *(undefined8 *)(puVar11 + 0xb608);
      uVar74 = *(undefined8 *)(puVar11 + 0xb600);
      puVar53[0x177] = *(undefined8 *)(puVar11 + 0xb610);
      puVar53[0x176] = uVar70;
      puVar53[0x175] = uVar74;
      uVar74 = *(undefined8 *)(puVar11 + -0xb10);
      puVar53[0x179] = *(undefined8 *)(puVar11 + -0xb08);
      puVar53[0x178] = uVar74;
      uVar74 = *(undefined8 *)(puVar11 + -0xba0);
      *(undefined4 *)(puVar53 + 0x17b) = *(undefined4 *)(puVar11 + -0xb98);
      puVar53[0x17a] = uVar74;
      puVar53[0x17c] = lVar61;
      unaff_x28 = (code *)(puVar53 + 0x19f);
      *(undefined1 *)(puVar53 + 0x19f) = 0;
code_r0x00010059c56c:
      uVar62 = *(undefined8 *)(pcVar25 + 0x40);
      uVar70 = *(undefined8 *)(pcVar25 + 0x58);
      uVar74 = *(undefined8 *)(pcVar25 + 0x50);
      puVar53[0x186] = *(undefined8 *)(pcVar25 + 0x48);
      puVar53[0x185] = uVar62;
      puVar53[0x188] = uVar70;
      puVar53[0x187] = uVar74;
      puVar53[0x191] = *(undefined8 *)(pcVar25 + 0xa0);
      uVar62 = *(undefined8 *)(pcVar25 + 0x80);
      uVar70 = *(undefined8 *)(pcVar25 + 0x98);
      uVar74 = *(undefined8 *)(pcVar25 + 0x90);
      puVar53[0x18e] = *(undefined8 *)(pcVar25 + 0x88);
      puVar53[0x18d] = uVar62;
      puVar53[400] = uVar70;
      puVar53[399] = uVar74;
      uVar74 = *(undefined8 *)(pcVar25 + 0x60);
      uVar62 = *(undefined8 *)(pcVar25 + 0x78);
      uVar70 = *(undefined8 *)(pcVar25 + 0x70);
      puVar53[0x18a] = *(undefined8 *)(pcVar25 + 0x68);
      puVar53[0x189] = uVar74;
      puVar53[0x18c] = uVar62;
      puVar53[0x18b] = uVar70;
      uVar74 = *(undefined8 *)pcVar25;
      uVar62 = *(undefined8 *)(pcVar25 + 0x18);
      uVar70 = *(undefined8 *)(pcVar25 + 0x10);
      puVar53[0x17e] = *(undefined8 *)(pcVar25 + 8);
      puVar53[0x17d] = uVar74;
      puVar53[0x180] = uVar62;
      puVar53[0x17f] = uVar70;
      uVar62 = *(undefined8 *)(pcVar25 + 0x20);
      uVar70 = *(undefined8 *)(pcVar25 + 0x38);
      uVar74 = *(undefined8 *)(pcVar25 + 0x30);
      puVar53[0x182] = *(undefined8 *)(pcVar25 + 0x28);
      puVar53[0x181] = uVar62;
      puVar53[0x184] = uVar70;
      puVar53[0x183] = uVar74;
      uVar20 = *(ulong *)(lVar61 + 0x10);
      lVar60 = uVar20 * 0x30;
      if (0x2aaaaaaaaaaaaaa < uVar20) {
        uVar74 = 0;
code_r0x00010059c5c8:
        FUN_107c03c64(uVar74,lVar60);
        break;
      }
      lVar61 = *(long *)(lVar61 + 8);
      if (lVar60 == 0) {
        lVar66 = 8;
        uVar38 = 0;
      }
      else {
        uVar74 = 8;
        lVar66 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar60,8);
        uVar38 = uVar20;
        if (lVar66 == 0) goto code_r0x00010059c5c8;
      }
      pcVar21 = (code *)0x0;
      puVar53[0x192] = uVar38;
      puVar53[0x193] = lVar66;
      puVar53[0x194] = 0;
      lVar60 = lVar61 + uVar20 * 0x28;
      puVar53[0x195] = lVar61;
      puVar53[0x196] = lVar60;
      if (lVar61 != lVar60) {
        do {
          puVar53[0x195] = lVar61 + 0x28;
          puVar37 = puVar53 + 0x17d;
          unaff_x25 = (code *)(puVar53 + 0x197);
          puVar53[0x197] = lVar61;
          puVar53[0x198] = puVar37;
          puVar67 = puVar53 + 0x19e;
          *(undefined1 *)(puVar53 + 0x19e) = 0;
code_r0x000100597058:
          uVar74 = *(undefined8 *)(lVar61 + 8);
          lVar60 = *(long *)(lVar61 + 0x10);
          lVar66 = 1;
          if ((lVar60 != 0) && (lVar66 = _malloc(lVar60), lVar66 == 0)) {
            FUN_107c03c64(1,lVar60);
            goto code_r0x0001005975c0;
          }
          _memcpy(lVar66,uVar74,lVar60);
          puVar53[0x199] = lVar60;
          puVar53[0x19a] = lVar66;
          puVar53[0x19b] = lVar60;
          auVar124 = (**(code **)(*(long *)(lVar61 + 0x20) + 0x28))
                               (*(long *)(lVar61 + 0x18) +
                                (*(long *)(*(long *)(lVar61 + 0x20) + 0x10) - 1U &
                                0xfffffffffffffff0) + 0x10,puVar37);
          *(undefined1 (*) [16])(puVar53 + 0x19c) = auVar124;
code_r0x0001005970bc:
          pcVar22 = (code *)(**(code **)(auVar124._8_8_ + 0x18))
                                      (puVar11 + 0xae30,auVar124._0_8_,
                                       *(undefined8 *)(puVar11 + -0x1028));
          pcVar19 = *(code **)(puVar11 + 0xae30);
          if (pcVar19 == (code *)0x3) {
            *(undefined1 *)puVar67 = 3;
            *unaff_x28 = (code)0x3;
            goto code_r0x00010059c678;
          }
          *(undefined8 *)(puVar11 + 0xb738) = *(undefined8 *)(puVar11 + 0xae40);
          *(undefined8 *)(puVar11 + 0xb730) = *(undefined8 *)(puVar11 + 0xae38);
          pcVar22 = (code *)puVar53[0x19c];
          pcVar64 = (code *)puVar53[0x19d];
          pcVar30 = *(code **)pcVar64;
          pcVar21 = pcVar22;
          if (pcVar30 != (code *)0x0) {
code_r0x0001005970f8:
            (*pcVar30)(pcVar22);
          }
          if (*(long *)(pcVar64 + 8) != 0) {
            _free(pcVar21);
          }
          uVar70 = puVar53[0x19a];
          uVar74 = puVar53[0x199];
          uVar86 = *(undefined8 *)(puVar11 + 0xb738);
          uVar62 = *(undefined8 *)(puVar11 + 0xb730);
          *(undefined1 *)(puVar53 + 0x19e) = 1;
          *(undefined8 *)(puVar11 + -0xa60) = puVar53[0x19b];
          *(undefined8 *)(puVar11 + -0xa78) = uVar86;
          *(undefined8 *)(puVar11 + -0xa80) = uVar62;
          *(undefined8 *)(puVar11 + -0xa68) = uVar70;
          *(undefined8 *)(puVar11 + -0xa70) = uVar74;
          if (unaff_x25[0x38] == (code)0x3) {
code_r0x00010059713c:
            uVar74 = *(undefined8 *)(unaff_x25 + 0x28);
            puVar67 = *(undefined8 **)(unaff_x25 + 0x30);
            pcVar21 = (code *)*puVar67;
            if (pcVar21 != (code *)0x0) {
              (*pcVar21)(uVar74);
            }
            if (puVar67[1] != 0) {
              _free(uVar74);
            }
            if (*(long *)(unaff_x25 + 0x10) != 0) {
              _free(*(undefined8 *)(unaff_x25 + 0x18));
            }
          }
          *(undefined8 *)(puVar11 + 0x6d80) = *(undefined8 *)(puVar11 + -0xa78);
          *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(puVar11 + -0xa80);
          *(undefined8 *)(puVar11 + 0x6d90) = *(undefined8 *)(puVar11 + -0xa68);
          *(undefined8 *)(puVar11 + 0x6d88) = *(undefined8 *)(puVar11 + -0xa70);
          pcVar30 = *(code **)(puVar11 + -0xa60);
          *(code **)(puVar11 + 0x6d70) = pcVar19;
code_r0x000100597190:
          *(code **)(puVar11 + 0x6d98) = pcVar30;
          lVar61 = puVar53[0x194];
          if (lVar61 == puVar53[0x192]) {
            FUN_107c05b30(puVar53 + 0x192);
          }
          puVar67 = (undefined8 *)(puVar53[0x193] + lVar61 * 0x30);
          uVar74 = *(undefined8 *)(puVar11 + 0x6d70);
          puVar67[1] = *(undefined8 *)(puVar11 + 0x6d78);
          *puVar67 = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + 0x6d80);
          puVar67[3] = *(undefined8 *)(puVar11 + 0x6d88);
          puVar67[2] = uVar74;
          uVar74 = *(undefined8 *)(puVar11 + 0x6d90);
          puVar67[5] = *(undefined8 *)(puVar11 + 0x6d98);
          puVar67[4] = uVar74;
          pcVar21 = (code *)(lVar61 + 1);
          puVar53[0x194] = pcVar21;
          if (pcVar19 == (code *)0x2) break;
code_r0x0001005971e0:
          lVar61 = puVar53[0x195];
        } while (lVar61 != puVar53[0x196]);
      }
      lVar61 = puVar53[0x192];
      pcVar19 = (code *)puVar53[0x193];
      if (puVar53[0x17d] != 0) {
        _free(puVar53[0x17e]);
      }
      if ((puVar53[0x18b] != -0x8000000000000000) && (puVar53[0x18b] != 0)) {
        _free(puVar53[0x18c]);
      }
      pcVar22 = (code *)FUN_100df0fdc(puVar53 + 0x180);
      *(undefined1 *)(puVar53 + 0x19f) = 1;
      if (lVar61 != -0x8000000000000000) {
        FUN_100e625ac(pcVar25);
        *(code **)(puVar11 + -0xa80) = pcVar19;
        *(code **)(puVar11 + -0xa78) = pcVar19;
        unaff_x25 = pcVar19 + (long)pcVar21 * 0x30;
        *(long *)(puVar11 + -0xa70) = lVar61;
        *(code **)(puVar11 + -0xa68) = unaff_x25;
        if (pcVar21 != (code *)0x0) {
          *(undefined8 **)(puVar11 + -0x1080) = puVar53 + 0x162;
          unaff_x26 = pcVar19;
          do {
            unaff_x28 = unaff_x26 + 0x30;
            lVar61 = *(long *)unaff_x26;
            pcVar19 = unaff_x28;
            if (lVar61 == 3) break;
            uVar70 = *(undefined8 *)(unaff_x26 + 0x10);
            uVar74 = *(undefined8 *)(unaff_x26 + 8);
            uVar86 = *(undefined8 *)(unaff_x26 + 0x20);
            uVar62 = *(undefined8 *)(unaff_x26 + 0x18);
            *(undefined8 *)(puVar11 + 0xb740) = *(undefined8 *)(unaff_x26 + 0x28);
            *(undefined8 *)(puVar11 + 0xb738) = uVar86;
            *(undefined8 *)(puVar11 + 0xb730) = uVar62;
            if (lVar61 != 0) {
              bVar14 = lVar61 != 1;
              puVar2 = &UNK_108ca2bb7;
              if (bVar14) {
                puVar2 = &UNK_108ca2bc1;
              }
              uVar62 = 10;
              if (bVar14) {
                uVar62 = 0x12;
              }
              pcVar64 = (code *)(ulong)bVar14;
              *(undefined8 *)(puVar11 + 0xaaa8) = uVar70;
              *(undefined8 *)(puVar11 + 0xaaa0) = uVar74;
              *(undefined **)(puVar11 + 0xb120) = puVar2;
              unaff_x22 = (code *)(puVar11 + 0xae30);
              *(undefined8 *)(puVar11 + 0xb128) = uVar62;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                if (1 < bRam000000010b629a38 - 1) {
                  if (bRam000000010b629a38 != 0) {
                    cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                                       );
                    puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                    if (cVar16 != '\0') goto LAB_10059c760;
                  }
                  goto LAB_10059c920;
                }
LAB_10059c760:
                uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                                   );
                if ((uVar20 & 1) == 0) goto LAB_10059c920;
                pcVar30 = ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                          + 0x30;
                *(undefined1 **)(puVar11 + 0xad00) = puVar11 + 0xb120;
                *(undefined **)(puVar11 + 0xad08) = &DAT_100c7b3a0;
                pcVar42 = (code *)(puVar11 + 0xb938);
                *(char **)(puVar11 + 0xbc20) = s_after_agent_hook_failed__108abfd9d;
                *(undefined1 **)(puVar11 + 0xbc28) = puVar11 + 0xad00;
                pcVar39 = *(code **)puVar53[0x161];
                pcVar22 = 
                ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                ;
code_r0x00010059c7cc:
                *(code **)(pcVar42 + 0x218) = pcVar39 + 0x240;
                *(undefined1 **)(puVar11 + -0xcc0) = puVar11 + 0xb730;
                pcVar39 = (code *)(puVar11 + 0x9e30);
code_r0x00010059c7e4:
                *(code **)(puVar11 + -0xc30) = pcVar39 + 0xc70;
                *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xbc20;
                *(undefined **)(puVar11 + 0x6d78) = &UNK_10b208fd0;
                *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xbb50;
                *(undefined **)(puVar11 + 0x6d88) = &UNK_10b215b00;
                *(undefined1 **)(puVar11 + 0x6d90) = puVar11 + -0xcc0;
                *(undefined **)(puVar11 + 0x6d98) = &UNK_10b215b00;
                *(undefined1 **)(puVar11 + 0x6da0) = puVar11 + -0xc30;
                *(undefined **)(puVar11 + 0x6da8) = &UNK_10b215b20;
                *(undefined8 *)(puVar11 + 0x3160) = 1;
                *(undefined1 **)(puVar11 + 0x3168) = puVar11 + 0x6d70;
                *(undefined8 *)(puVar11 + 0x3170) = 4;
                *(code **)(puVar11 + 0x3178) = pcVar30;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (pcVar22,puVar11 + 0x3160);
                pcVar19 = 
                ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar74 = *(undefined8 *)
                            (
                            ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                            + 0x20);
                  uVar70 = *(undefined8 *)
                            (
                            ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                            + 0x28);
                  *(undefined8 *)(puVar11 + 0xae30) = 2;
                  *(undefined8 *)(puVar11 + 0xae38) = uVar74;
                  unaff_x22 = (code *)(puVar11 + 0xae30);
                  *(undefined8 *)(puVar11 + 0xae40) = uVar70;
                  pcVar21 = pcRam000000010b634c20;
                  if (pcRam000000010b66fd20 != (code *)0x2) {
                    pcVar21 = (code *)&UNK_10b3c24c8;
                  }
                  pcVar22 = pcRam000000010b634c18;
                  if (pcRam000000010b66fd20 != (code *)0x2) {
                    pcVar22 = (code *)&UNK_109adfc03;
                  }
                  iVar17 = (**(code **)(pcVar21 + 0x18))(pcVar22,puVar11 + 0xae30);
                  if (iVar17 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (pcVar19,pcVar22,pcVar21,puVar11 + 0xae30,puVar11 + 0x3160);
                  }
                }
              }
              else {
LAB_10059c920:
                pcVar19 = 
                ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar74 = *(undefined8 *)
                            (
                            ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                            + 0x20);
                  uVar70 = *(undefined8 *)
                            (
                            ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                            + 0x28);
                  *(undefined8 *)(puVar11 + 0xbe80) = 2;
                  *(undefined8 *)(puVar11 + 0xbe88) = uVar74;
                  *(undefined8 *)(puVar11 + 0xbe90) = uVar70;
                  pcVar21 = pcRam000000010b634c20;
                  if (pcRam000000010b66fd20 != (code *)0x2) {
                    pcVar21 = (code *)&UNK_10b3c24c8;
                  }
                  pcVar22 = pcRam000000010b634c18;
                  if (pcRam000000010b66fd20 != (code *)0x2) {
                    pcVar22 = (code *)&UNK_109adfc03;
                  }
                  iVar17 = (**(code **)(pcVar21 + 0x18))(pcVar22,puVar11 + 0xbe80);
                  if (iVar17 != 0) {
                    *(undefined1 **)(puVar11 + 0xad00) = puVar11 + 0xb120;
                    *(undefined **)(puVar11 + 0xad08) = &DAT_100c7b3a0;
                    *(char **)(puVar11 + 0xbc20) = s_after_agent_hook_failed__108abfd9d;
                    *(undefined1 **)(puVar11 + 0xbc28) = puVar11 + 0xad00;
                    *(long *)(puVar11 + 0xbb50) = *(long *)puVar53[0x161] + 0x240;
                    *(undefined1 **)(puVar11 + -0xcc0) = puVar11 + 0xb730;
                    *(undefined1 **)(puVar11 + -0xc30) = puVar11 + 0xaaa0;
                    *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xbc20;
                    *(undefined **)(puVar11 + 0x6d78) = &UNK_10b208fd0;
                    *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xbb50;
                    *(undefined **)(puVar11 + 0x6d88) = &UNK_10b215b00;
                    *(undefined1 **)(puVar11 + 0x6d90) = puVar11 + -0xcc0;
                    *(undefined **)(puVar11 + 0x6d98) = &UNK_10b215b00;
                    *(undefined1 **)(puVar11 + 0x6da0) = puVar11 + -0xc30;
                    *(undefined **)(puVar11 + 0x6da8) = &UNK_10b215b20;
                    *(undefined8 *)(puVar11 + 0x3160) = 1;
                    *(undefined1 **)(puVar11 + 0x3168) = puVar11 + 0x6d70;
                    *(undefined8 *)(puVar11 + 0x3170) = 4;
                    *(code **)(puVar11 + 0x3178) =
                         ___ZN10codex_core12hook_runtime27run_legacy_after_agent_hook28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h7d02066cbf32cd21E
                         + 0x30;
                    *(undefined8 *)(puVar11 + 0xae38) = *(undefined8 *)(puVar11 + 0xbe88);
                    *(undefined8 *)(puVar11 + 0xae30) = *(undefined8 *)(puVar11 + 0xbe80);
                    *(undefined8 *)(puVar11 + 0xae40) = *(undefined8 *)(puVar11 + 0xbe90);
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (pcVar19,pcVar22,pcVar21,puVar11 + 0xae30,puVar11 + 0x3160);
                  }
                }
              }
              if ((((ulong)pcVar64 & 1) != 0) &&
                 (**(long **)(puVar11 + -0x1080) == -0x8000000000000000)) {
                *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xb730;
                *(undefined **)(puVar11 + 0x6d78) = &DAT_10112965c;
                *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xaaa0;
                *(undefined8 *)(puVar11 + 0x6d88) = 0x10117aba8;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (puVar11 + 0x3160,s_after_agent_hook______failed_and_108abfdb9,
                           puVar11 + 0x6d70);
                *(undefined8 *)(puVar11 + 0xae38) = *(undefined8 *)(puVar11 + 0x3168);
                *(undefined8 *)(puVar11 + 0xae30) = *(undefined8 *)(puVar11 + 0x3160);
                *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(puVar11 + 0x3170);
                if ((**(long **)(puVar11 + -0x1080) != -0x8000000000000000) &&
                   (**(long **)(puVar11 + -0x1080) != 0)) {
                  _free(puVar53[0x163]);
                }
                *(undefined1 *)((long)puVar53 + 0xb31) = 1;
                uVar74 = *(undefined8 *)(puVar11 + 0xae30);
                puVar67 = *(undefined8 **)(puVar11 + -0x1080);
                puVar67[1] = *(undefined8 *)(puVar11 + 0xae38);
                *puVar67 = uVar74;
                puVar67[2] = *(undefined8 *)(unaff_x22 + 0x10);
              }
              puVar67 = *(undefined8 **)(puVar11 + 0xaaa8);
              pcVar19 = (code *)*puVar67;
              uVar74 = *(undefined8 *)(puVar11 + 0xaaa0);
              if (pcVar19 != (code *)0x0) {
                (*pcVar19)(uVar74);
              }
              if (puVar67[1] != 0) {
                _free(uVar74);
              }
            }
            if (*(long *)(puVar11 + 0xb730) != 0) {
              _free(*(undefined8 *)(puVar11 + 0xb738));
            }
            pcVar21 = unaff_x26 + 0x30;
            pcVar19 = unaff_x25;
            unaff_x26 = unaff_x28;
          } while (pcVar21 != unaff_x25);
        }
        *(code **)(puVar11 + -0xa78) = pcVar19;
        FUN_100e6cbec(puVar11 + -0xa80);
        unaff_x28 = *(code **)(puVar11 + -0x1060);
        if (puVar53[0x162] != -0x8000000000000000) {
          *(undefined1 *)((long)puVar53 + 0xb31) = 0;
          uVar74 = puVar53[0x162];
          *(undefined8 *)(puVar11 + 0x6d80) = puVar53[0x163];
          *(undefined8 *)(puVar11 + 0x6d78) = uVar74;
          *(undefined8 *)(puVar11 + 0x6d88) = puVar53[0x164];
          *(undefined1 *)((long)puVar53 + 0xb32) = 1;
          puVar11[0x6d90] = 0xf;
          *(undefined4 *)(puVar11 + 0x6d70) = 0;
          lVar61 = *(long *)puVar53[0x160];
          lVar60 = *(long *)puVar53[0x161];
          *(undefined1 *)((long)puVar53 + 0xb32) = 0;
          _memmove(pcVar25,puVar11 + 0x6d70,0x1d8);
          puVar53[0x1a2] = lVar61 + 0x10;
          puVar53[0x1a3] = lVar60 + 0x10;
          *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x627) = 0;
          goto code_r0x00010059cca8;
        }
        lVar61 = *(long *)puVar53[0x165];
        *(long *)puVar53[0x165] = lVar61 + -1;
        LORelease();
        if (lVar61 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar53 + 0x165);
        }
        bVar14 = false;
        goto LAB_10059cd04;
      }
code_r0x00010059c678:
      uVar41 = 3;
code_r0x00010059ccbc:
      puVar67 = *(undefined8 **)(puVar11 + -0x1050);
      **(undefined1 **)(puVar11 + -0x1058) = uVar41;
      *puVar67 = 0x8000000000000001;
      uVar41 = 0x1e;
      goto LAB_100595774;
    }
    if (bVar27 == 3) {
code_r0x000100590d94:
      *(code **)(puVar11 + -0x1060) = unaff_x28;
      unaff_x28 = (code *)(extraout_x1 + 0x19f);
      pcVar30 = (code *)(ulong)*(byte *)(extraout_x1 + 0x19f);
code_r0x000100590da0:
      pcVar25 = (code *)(extraout_x1 + 0x167);
      uVar29 = (uint)pcVar30;
      if (1 < uVar29) {
        if (uVar29 == 3) {
          puVar67 = extraout_x1 + 0x19e;
          bVar27 = *(byte *)(extraout_x1 + 0x19e);
          unaff_x25 = (code *)(extraout_x1 + 0x197);
          if (bVar27 < 2) {
            if (bVar27 == 0) {
              lVar61 = extraout_x1[0x197];
              puVar37 = (undefined8 *)extraout_x1[0x198];
              goto code_r0x000100597058;
            }
            FUN_107c05cc0(&UNK_10b21de98);
          }
          else {
            if (bVar27 == 3) {
              auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x19c);
              goto code_r0x0001005970bc;
            }
            FUN_107c05cc4(&UNK_10b21de98);
          }
        }
        else {
          pcVar22 = (code *)&UNK_10b21e000;
code_r0x0001005942f4:
          FUN_107c05cc4(pcVar22 + 0x90);
        }
        break;
      }
      if (uVar29 != 0) {
        FUN_107c05cc0(&UNK_10b21e090);
        break;
      }
      lVar61 = extraout_x1[0x17c];
      goto code_r0x00010059c56c;
    }
code_r0x00010059cca8:
    pcVar22 = (code *)FUN_10059e898(puVar53 + 0x167,*(undefined8 *)(puVar11 + -0x1028));
    if ((int)pcVar22 != 0) {
      uVar41 = 4;
      goto code_r0x00010059ccbc;
    }
    FUN_100d1ddbc(puVar53 + 0x167);
    *(undefined1 *)((long)puVar53 + 0xb32) = 0;
    lVar61 = *(long *)puVar53[0x165];
    *(long *)puVar53[0x165] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar53 + 0x165);
    }
    bVar14 = true;
LAB_10059cd04:
    *(undefined2 *)((long)puVar53 + 0xb33) = 0;
    *(undefined2 *)(puVar53 + 0x166) = 1;
    FUN_100ca5f44(unaff_x28);
    if (bVar14) {
      FUN_100e095b4(puVar53 + 0x136);
      bVar27 = *(byte *)((long)puVar53 + 0xabb);
      goto joined_r0x00010059cd2c;
    }
LAB_10059ceb4:
    FUN_100e095b4(puVar53 + 0x136);
    *(undefined1 *)((long)puVar53 + 0xabb) = 0;
    lVar61 = puVar53[0x101];
    goto joined_r0x00010059a97c;
  case (code)0x1f:
    goto code_r0x000100598a5c;
  case (code)0x20:
code_r0x000100598f54:
    pcVar22 = (code *)FUN_10059e898(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
    if ((int)pcVar22 != 0) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0x20;
      goto LAB_100595774;
    }
    FUN_100d1ddbc(puVar53 + 0x159);
    *(undefined1 *)((long)puVar53 + 0xabf) = 0;
    lVar61 = puVar53[0x101];
    goto joined_r0x00010059a97c;
  case (code)0x21:
    auVar124 = *(undefined1 (*) [16])(extraout_x1 + 0x159);
code_r0x000100590f0c:
    pcVar22 = auVar124._0_8_;
    pcVar30 = *(code **)(auVar124._8_8_ + 0x18);
  case (code)0xe9:
    puVar67 = *(undefined8 **)(puVar11 + -0x1028);
code_r0x000100590f14:
    auVar124 = (*pcVar30)(pcVar22,puVar67);
    pcVar22 = auVar124._0_8_;
    if (((ulong)pcVar22 & 1) != 0) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0x21;
      goto LAB_100595774;
    }
    FUN_100c9623c(puVar53[0x159],puVar53[0x15a]);
    if (auVar124._8_8_ != 0) {
      *(long *)(puVar11 + 0xb730) = auVar124._8_8_;
      pcVar30 = (code *)0x10b63d000;
code_r0x000100591068:
      if (*(ulong *)(pcVar30 + 0xab8) < 4) {
        if (1 < bRam000000010b62ab58 - 1) {
          if (bRam000000010b62ab58 != 0) {
            cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
                               );
            puVar53 = *(undefined8 **)(puVar11 + -0x1048);
            if (cVar16 != '\0') goto code_r0x000100591090;
          }
          goto code_r0x000100591e94;
        }
code_r0x000100591090:
        uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
                           );
        if ((uVar20 & 1) == 0) goto code_r0x000100591e94;
        pcVar30 = ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
                  + 0x30;
code_r0x0001005910a4:
        pcVar42 = 
        __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        *(undefined1 **)(puVar11 + 0x3160) = puVar11 + 0xb730;
code_r0x0001005910b8:
        *(code **)(puVar11 + 0x3168) = pcVar42;
        *(char **)(puVar11 + -0xa80) = s__failed_to_usage_limit_active_go_108ac17b7;
        *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x3160;
        *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
        *(undefined **)(puVar11 + 0xae38) = &UNK_10b208fd0;
code_r0x0001005910e8:
        pcVar39 = (code *)0x1;
        pcVar42 = (code *)(puVar11 + 0xae30);
        *(undefined8 *)(puVar11 + 0x6d70) = 1;
code_r0x0001005910f4:
        *(code **)(puVar11 + 0x6d78) = pcVar42;
        *(code **)(puVar11 + 0x6d80) = pcVar39;
        *(code **)(puVar11 + 0x6d88) = pcVar30;
        FUN_10059e4b8(puVar11 + 0x6d70);
      }
      else {
code_r0x000100591e94:
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcVar64 = (code *)&
                            __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
          ;
          uVar74 = *(undefined8 *)
                    (
                    ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
                    + 0x20);
          uVar70 = *(undefined8 *)
                    (
                    ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
                    + 0x28);
          *(undefined8 *)(puVar11 + -0xce8) = 2;
          *(undefined8 *)(puVar11 + -0xce0) = uVar74;
          *(undefined8 *)(puVar11 + -0xcd8) = uVar70;
          pcVar19 = pcRam000000010b634c20;
          if (pcRam000000010b66fd20 != (code *)0x2) {
            pcVar19 = (code *)&UNK_10b3c24c8;
          }
          unaff_x22 = pcRam000000010b634c18;
          if (pcRam000000010b66fd20 != (code *)0x2) {
            unaff_x22 = (code *)&UNK_109adfc03;
          }
          pcVar30 = *(code **)(pcVar19 + 0x18);
          puVar67 = (undefined8 *)(puVar11 + -0xce8);
          pcVar21 = 
          ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha6629a42c7132837E
          ;
code_r0x000100591f18:
          iVar17 = (*pcVar30)(unaff_x22,puVar67);
          if (iVar17 != 0) {
            pcVar30 = (code *)(*(long *)pcVar64 + 0x30);
            *(undefined1 **)(puVar11 + -0xa80) = puVar11 + 0xb730;
            *(code **)(puVar11 + -0xa78) =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            *(char **)(puVar11 + 0xae30) = s__failed_to_usage_limit_active_go_108ac17b7;
            *(undefined1 **)(puVar11 + 0xae38) = puVar11 + -0xa80;
            *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + 0xae30;
            *(undefined **)(puVar11 + 0xbe88) = &UNK_10b208fd0;
            pcVar39 = (code *)0x1;
code_r0x000100591f78:
            *(code **)(puVar11 + 0x6d70) = pcVar39;
            *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xbe80;
            *(code **)(puVar11 + 0x6d80) = pcVar39;
            *(code **)(puVar11 + 0x6d88) = pcVar30;
            *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xce0);
            *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xce8);
            *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + -0xcd8);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (pcVar21,unaff_x22,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
          }
        }
      }
      (**(code **)**(undefined8 **)(puVar11 + 0xb730))();
    }
LAB_100597330:
    *(undefined8 *)(puVar11 + -0xa80) = 0x8000000000000000;
    __ZN14codex_protocol5error8CodexErr14to_error_event17h359003e86a4af94dE
              (puVar11 + 0x3160,puVar53 + 0x143,puVar11 + -0xa80);
    *(undefined8 *)(puVar11 + 0x6d80) = *(undefined8 *)(puVar11 + 0x3168);
    *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(puVar11 + 0x3160);
    *(undefined8 *)(puVar11 + 0x6d90) = *(undefined8 *)(puVar11 + 0x3178);
    *(undefined8 *)(puVar11 + 0x6d88) = *(undefined8 *)(puVar11 + 0x3170);
    *(undefined4 *)(puVar11 + 0x6d70) = 0;
    *(undefined1 *)((long)puVar53 + 0xabe) = 0;
    pcVar22 = (code *)(puVar53 + 0x159);
    puVar67 = (undefined8 *)(puVar11 + 0x5e30);
code_r0x000100597374:
    _memcpy(pcVar22,puVar67 + 0x1e8,0x1d8);
    puVar53[0x195] = puVar53[0x47] + 0x10;
    puVar53[0x194] = puVar53[0x46] + 0x10;
    pcVar30 = *(code **)(puVar11 + -0x1030);
code_r0x000100597398:
    pcVar30[0x5b7] = (code)0x0;
code_r0x00010059739c:
    pcVar22 = (code *)FUN_10059e898(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
    if ((int)pcVar22 == 0) {
      FUN_100d1ddbc(puVar53 + 0x159);
      *(undefined1 *)((long)puVar53 + 0xabe) = 0;
      FUN_100df5738(puVar53 + 0x143);
LAB_10059a96c:
      lVar61 = puVar53[0x101];
joined_r0x00010059a97c:
      if ((lVar61 != -0x7fffffffffffffe0) && ((*(byte *)((long)puVar53 + 0xaba) & 1) != 0)) {
        FUN_100df5738(puVar53 + 0x101);
      }
      *(undefined1 *)((long)puVar53 + 0xaba) = 0;
      if ((puVar53[0xfe] != -0x8000000000000000) && (puVar53[0xfe] != 0)) {
        _free(puVar53[0xff]);
      }
      lVar66 = puVar53[0xfc];
      lVar61 = puVar53[0xfd] + 1;
      lVar60 = lVar66;
      while (lVar61 = lVar61 + -1, lVar61 != 0) {
        FUN_100e02a24(lVar60);
        lVar60 = lVar60 + 0xc0;
      }
      if (puVar53[0xfb] != 0) {
        _free(lVar66);
      }
LAB_10059cf3c:
      *(undefined1 *)(puVar53 + 0x158) = 0;
      uVar74 = puVar53[0xc1];
      uVar70 = puVar53[0xc2];
      *(undefined8 *)(puVar11 + -0xcc8) = puVar53[0xc3];
      *(undefined8 *)(puVar11 + -0xcd0) = uVar70;
      lVar61 = *(long *)puVar53[0xc4];
      *(long *)puVar53[0xc4] = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(puVar53 + 0xc4);
      }
      *(undefined1 *)(puVar53 + 0x158) = 0;
      lVar61 = puVar53[0xa3];
      if (lVar61 != 0) {
        lVar60 = puVar53[0xa5];
        if (lVar60 != 0) {
          plVar57 = (long *)puVar53[0xa2];
          plVar58 = plVar57 + 1;
          lVar66 = *plVar57;
          uVar20 = CONCAT17(-(-1 < lVar66),
                            CONCAT16(-(-1 < (char)((ulong)lVar66 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar66 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar66 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar66 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar66 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar66 >> 8)),
                                                           -(-1 < (char)lVar66)))))))) &
                   0x8080808080808080;
          do {
            while (uVar20 == 0) {
              lVar66 = *plVar58;
              plVar57 = plVar57 + -0x18;
              plVar58 = plVar58 + 1;
              uVar20 = CONCAT17(-(-1 < lVar66),
                                CONCAT16(-(-1 < (char)((ulong)lVar66 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar66 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar66 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar66 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar66 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar66 >> 8)),
                                                           -(-1 < (char)lVar66)))))))) &
                       0x8080808080808080;
            }
            uVar38 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
            iVar17 = (int)((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
            if (plVar57[(long)-iVar17 * 3 + -3] != 0) {
              _free(plVar57[(long)-iVar17 * 3 + -2]);
            }
            uVar20 = uVar20 - 1 & uVar20;
            lVar60 = lVar60 + -1;
          } while (lVar60 != 0);
        }
        if (lVar61 * 0x19 != -0x21) {
          _free(puVar53[0xa2] + lVar61 * -0x18 + -0x18);
        }
      }
      *(undefined1 *)((long)puVar53 + 0xabc) = 0;
      FUN_100e08e20(puVar53 + 0x4d);
      puVar67 = puVar53 + 0x4c;
      pcVar22 = (code *)__ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                                  (puVar67);
      lVar61 = *(long *)*puVar67;
      *(long *)*puVar67 = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar67);
      }
      lVar66 = puVar53[0x4a];
      lVar61 = lVar66;
      for (lVar60 = puVar53[0x4b]; lVar60 != 0; lVar60 = lVar60 + -1) {
        pcVar22 = (code *)FUN_100e06c08(lVar61);
        lVar61 = lVar61 + 0x38;
      }
      if (puVar53[0x49] != 0) {
        pcVar22 = (code *)_free(lVar66);
      }
      lVar61 = *(long *)puVar53[0x48];
      *(long *)puVar53[0x48] = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E
                                    (puVar53 + 0x48);
      }
      lVar61 = *(long *)puVar53[0x47];
      *(long *)puVar53[0x47] = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E
                                    (puVar53 + 0x47);
      }
      lVar61 = *(long *)puVar53[0x46];
      *(long *)puVar53[0x46] = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E
                                    (puVar53 + 0x46);
      }
LAB_10059d0dc:
      puVar67 = *(undefined8 **)(puVar11 + -0x1050);
      *puVar67 = uVar74;
      uVar74 = *(undefined8 *)(puVar11 + -0xcd0);
      puVar67[2] = *(undefined8 *)(puVar11 + -0xcc8);
      puVar67[1] = uVar74;
      uVar41 = 1;
    }
    else {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0x22;
    }
LAB_100595774:
    *(undefined1 *)(puVar53 + 0x156) = uVar41;
    return pcVar22;
  case (code)0x22:
    goto code_r0x00010059739c;
  case (code)0x24:
    goto code_r0x0001005938d4;
  case (code)0x25:
    goto code_r0x0001005938c8;
  case (code)0x27:
    goto code_r0x000100591890;
  case (code)0x28:
    goto code_r0x000100590ddc;
  case (code)0x29:
    goto code_r0x000100591e38;
  case (code)0x2a:
    goto code_r0x000100591f78;
  case (code)0x2b:
  case (code)0x61:
    goto code_r0x000100590dfc;
  case (code)0x2e:
    goto code_r0x000100592694;
  case (code)0x2f:
    goto code_r0x0001005926a0;
  case (code)0x30:
    goto code_r0x000100591264;
  case (code)0x31:
    goto code_r0x000100591230;
  case (code)0x32:
    goto code_r0x0001005910e8;
  case (code)0x33:
    goto code_r0x00010059129c;
  case (code)0x34:
    goto code_r0x0001005912a8;
  case (code)0x35:
    goto code_r0x000100591068;
  case (code)0x36:
    goto code_r0x0001005910f4;
  case (code)0x37:
    goto code_r0x00010059102c;
  case (code)0x39:
    goto code_r0x000100593e90;
  case (code)0x3a:
    goto code_r0x000100593e80;
  case (code)0x3b:
    goto code_r0x000100592738;
  case (code)0x3c:
    goto code_r0x000100592818;
  case (code)0x3d:
    goto code_r0x0001005929f4;
  case (code)0x3e:
    goto code_r0x000100592bd0;
  case (code)0x3f:
    goto code_r0x000100592d30;
  case (code)0x40:
    goto code_r0x000100592de8;
  case (code)0x41:
    goto code_r0x000100592e4c;
  case (code)0x42:
    goto code_r0x000100592f34;
  case (code)0x43:
    goto code_r0x0001005930a8;
  case (code)0x44:
    goto code_r0x0001005930f8;
  case (code)0x45:
    goto code_r0x00010059317c;
  case (code)0x47:
    goto code_r0x000100596120;
  case (code)0x48:
    goto code_r0x000100596114;
  case (code)0x49:
    goto code_r0x0001005910b8;
  case (code)0x4b:
  case (code)0xc7:
    goto code_r0x000100590fa0;
  case (code)0x4c:
    goto code_r0x000100590df4;
  case (code)0x4d:
    goto code_r0x000100590e24;
  case (code)0x4e:
    goto code_r0x000100593ee8;
  case (code)0x4f:
    goto code_r0x000100590fb4;
  case (code)0x50:
    goto code_r0x000100590da0;
  case (code)0x51:
    goto code_r0x000100590e1c;
  case (code)0x52:
    goto code_r0x000100590fe0;
  case (code)0x53:
  case (code)0x77:
    goto code_r0x000100590fcc;
  case (code)0x55:
    goto code_r0x000100590fd8;
  case (code)0x56:
    goto code_r0x000100590fe4;
  case (code)0x57:
    goto code_r0x000100590fc4;
  case (code)0x58:
    goto code_r0x000100590fec;
  case (code)0x5a:
    goto code_r0x000100590d94;
  case (code)0x5b:
    goto code_r0x000100590fd4;
  case (code)0x5d:
    goto code_r0x000100591ab4;
  case (code)0x5e:
    goto code_r0x000100591ac4;
  case (code)0x60:
  case (code)0x84:
    goto code_r0x000100590d58;
  case (code)0x62:
    goto code_r0x000100590e9c;
  case (code)0x64:
    goto code_r0x0001005914b0;
  case (code)0x65:
    goto code_r0x000100591524;
  case (code)0x66:
    goto code_r0x0001005915c0;
  case (code)0x67:
    goto code_r0x0001005910a4;
  case (code)0x68:
    goto code_r0x000100591140;
  case (code)0x69:
    goto code_r0x0001005911e4;
  case (code)0x6a:
    goto code_r0x00010059121c;
  case (code)0x6b:
    goto code_r0x000100591268;
  case (code)0x6d:
    goto code_r0x00010059dcd4;
  case (code)0x6e:
    lVar61 = *(long *)pcVar30;
    *(long *)pcVar30 = lVar61 + -1;
    LORelease();
    bVar15 = lVar61 == 1;
code_r0x00010059dcd4:
    if (bVar15) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E
                (*(long *)(puVar11 + -0x1048) + 0xb20);
    }
    lVar61 = *(long *)(puVar11 + -0x1048);
    *(undefined1 *)(lVar61 + 0xb57) = 0;
    if ((*(byte *)(lVar61 + 0xb58) & 1) != 0) {
      lVar61 = **(long **)(puVar11 + 0xb4b0);
      **(long **)(puVar11 + 0xb4b0) = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(puVar11 + 0xb4b0);
      }
    }
    lVar61 = *(long *)(puVar11 + -0x1048);
    *(undefined1 *)(lVar61 + 0xb58) = 0;
    *(undefined1 *)(lVar61 + 0xb50) = 2;
    FUN_100e82fa0(0x8000000000000020);
    puVar67 = *(undefined8 **)(puVar11 + -0x1048);
code_r0x00010059926c:
    *(undefined1 *)((long)puVar67 + 0xaba) = 0;
    if ((puVar67[0xfe] != -0x8000000000000000) && (puVar67[0xfe] != 0)) {
      _free(puVar67[0xff]);
    }
    FUN_100e47a48(puVar67 + 0xfb);
    lVar61 = *(long *)puVar67[0xc4];
    *(long *)puVar67[0xc4] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(puVar67 + 0xc4);
    }
    if ((((*(byte *)(puVar67 + 0x158) & 1) == 0) || (puVar67[0xc1] == -0x8000000000000000)) ||
       (puVar67[0xc1] == 0)) {
      *(undefined1 *)(puVar67 + 0x158) = 0;
    }
    else {
      _free(puVar67[0xc2]);
      *(undefined1 *)(puVar67 + 0x158) = 0;
    }
    goto code_r0x0001005989d4;
  case (code)0x6f:
    goto code_r0x000100591158;
  case (code)0x70:
    goto code_r0x000100591300;
  case (code)0x71:
    goto code_r0x000100596a50;
  case (code)0x72:
code_r0x000100596bac:
    FUN_107c03c64(1,pcVar21);
    break;
  case (code)0x73:
    goto code_r0x000100591338;
  case (code)0x74:
    goto code_r0x000100591040;
  case (code)0x75:
    goto code_r0x000100591180;
  case (code)0x76:
    goto code_r0x000100590e6c;
  case (code)0x78:
  case (code)0xc9:
    goto code_r0x0001005912c8;
  case (code)0x79:
    goto code_r0x000100591258;
  case (code)0x7a:
    goto code_r0x000100590e10;
  case (code)0x7b:
    goto code_r0x0001005912a0;
  case (code)0x7c:
    goto code_r0x00010059148c;
  case (code)0x7d:
    goto code_r0x0001005911cc;
  case (code)0x7e:
    goto code_r0x000100591604;
  case (code)0x7f:
    goto code_r0x000100591688;
  case (code)0x80:
    goto code_r0x000100590f8c;
  case (code)0x81:
    goto code_r0x000100591464;
  case (code)0x82:
    goto code_r0x000100590f14;
  case (code)0x85:
    goto code_r0x000100591534;
  case (code)0x86:
    goto code_r0x0001005916f8;
  case (code)0x87:
    goto code_r0x000100590f58;
  case (code)0x8a:
    goto code_r0x00010059e058;
  case (code)0x8b:
    goto code_r0x00010059e048;
  case (code)0x8c:
    goto code_r0x0001005973f4;
  case (code)0x8d:
    uVar74 = FUN_107c05ccc();
    *(undefined8 *)(puVar11 + -0x1028) = uVar74;
    goto code_r0x0001005989d4;
  case (code)0x8e:
    goto code_r0x000100597374;
  case (code)0x8f:
    *(code **)(puVar11 + -0x1028) = pcVar22;
    if (unaff_x26 != (code *)0x0) {
      _free(pcVar19);
    }
    goto code_r0x000100596fcc;
  case (code)0x90:
    goto code_r0x000100596d70;
  case (code)0x91:
    goto code_r0x0001005975a0;
  case (code)0x92:
    goto code_r0x0001005985cc;
  case (code)0x93:
    goto code_r0x000100597600;
  case (code)0x94:
    goto code_r0x000100597750;
  case (code)0x95:
    goto code_r0x00010059aa5c;
  case (code)0x96:
    goto code_r0x00010059aacc;
  case (code)0x97:
    goto code_r0x00010059ab58;
  case (code)0x98:
    goto code_r0x00010059aba4;
  case (code)0x99:
    goto code_r0x000100595434;
  case (code)0x9a:
    goto code_r0x00010059542c;
  case (code)0x9b:
    goto code_r0x0001005940cc;
  case (code)0x9c:
    goto code_r0x00010059c7cc;
  case (code)0x9d:
    goto code_r0x00010059c7e4;
  case (code)0x9f:
    goto code_r0x000100591f18;
  case (code)0xa0:
    goto code_r0x0001005969a0;
  case (code)0xa1:
    goto code_r0x000100598e00;
  case (code)0xa2:
    goto code_r0x000100599510;
  case (code)0xa3:
    goto code_r0x0001005995e4;
  case (code)0xa4:
    goto code_r0x000100599654;
  case (code)0xa5:
    goto code_r0x000100599750;
  case (code)0xa6:
    goto code_r0x0001005998d4;
  case (code)0xa7:
    goto code_r0x000100599920;
  case (code)0xa8:
    goto code_r0x0001005999ac;
  case (code)0xaa:
code_r0x000100596d38:
    FUN_100e759a8();
    goto code_r0x000100596d3c;
  case (code)0xab:
    goto code_r0x000100596904;
  case (code)0xac:
    (*pcVar30)();
    if ((*(byte *)(*(long *)(puVar11 + -0x1048) + 0xba8) & 1) != 0) goto code_r0x000100596d38;
code_r0x000100596d3c:
    *(undefined2 *)(*(long *)(puVar11 + -0x1048) + 0xba8) = 0x200;
    FUN_100d50bc0();
code_r0x000100596d50:
    puVar67 = *(undefined8 **)(puVar11 + -0x1048);
    goto code_r0x0001005989d4;
  case (code)0xad:
    goto code_r0x0001005965dc;
  case (code)0xae:
    goto code_r0x000100596fbc;
  case (code)0xaf:
    goto code_r0x00010059713c;
  case (code)0xb0:
    FUN_100e18c38();
    *(undefined1 *)((long)extraout_x1 + 0xabd) = 0;
    goto code_r0x0001005989d4;
  case (code)0xb1:
    FUN_100df7c14();
    *(code **)(puVar11 + -0x1028) = pcVar19;
    unaff_x28 = *(code **)(puVar11 + -0x1060);
    puVar67 = *(undefined8 **)(puVar11 + -0x1048);
    FUN_100e3c670(puVar67 + 0x192);
    if (puVar67[0x17d] != 0) {
      _free(puVar67[0x17e]);
    }
    if ((puVar67[0x18b] != -0x8000000000000000) && (puVar67[0x18b] != 0)) {
      _free(puVar67[0x18c]);
    }
    FUN_100df0fdc(puVar67 + 0x180);
    *(undefined1 *)(puVar67 + 0x19f) = 2;
    FUN_100e625ac(pcVar19);
    lVar61 = *(long *)puVar67[0x165];
    *(long *)puVar67[0x165] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(puVar67 + 0x165);
    }
    if ((*(byte *)((long)puVar67 + 0xb33) & 1) != 0) {
      FUN_100e1ad68(puVar11 + 0xa980);
    }
    *(undefined1 *)((long)puVar67 + 0xb33) = 0;
    if (((puVar67[0x162] != -0x8000000000000000) && ((*(byte *)((long)puVar67 + 0xb31) & 1) != 0))
       && (puVar67[0x162] != 0)) {
      _free(puVar67[0x163]);
    }
code_r0x00010059e048:
    *(undefined1 *)((long)puVar67 + 0xb31) = 0;
    bVar15 = *(char *)((long)puVar67 + 0xb34) == '\x01';
    pcVar30 = *(code **)(puVar11 + -0x1040);
code_r0x00010059e058:
    if (bVar15 && ((ulong)pcVar30 & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(puVar11 + -0x1070));
    }
    *(undefined1 *)((long)puVar67 + 0xb34) = 0;
    *(undefined1 *)(puVar67 + 0x166) = 2;
    FUN_100ca5f44(unaff_x28);
    FUN_100e095b4(puVar67 + 0x136);
    if ((((*(byte *)((long)puVar67 + 0xabb) & 1) == 0) || (puVar67[0x114] == -0x8000000000000000))
       || (puVar67[0x114] == 0)) {
      *(undefined1 *)((long)puVar67 + 0xabb) = 0;
      lVar61 = puVar67[0x101];
    }
    else {
      _free(puVar67[0x115]);
      *(undefined1 *)((long)puVar67 + 0xabb) = 0;
      lVar61 = puVar67[0x101];
    }
    if (lVar61 != -0x7fffffffffffffe0) {
code_r0x00010059e0b4:
      if (*(char *)((long)puVar67 + 0xaba) == '\x01') {
        FUN_100df5738(puVar67 + 0x101);
      }
    }
    goto code_r0x00010059926c;
  case (code)0xb2:
    goto code_r0x000100596780;
  case (code)0xb3:
    goto code_r0x0001005971e0;
  case (code)0xb4:
    goto code_r0x000100596570;
  case (code)0xb5:
    goto code_r0x00010059664c;
  case (code)0xb6:
    goto code_r0x0001005970f8;
  case (code)0xb7:
code_r0x0001005964f0:
    *(ulong *)(pcVar39 + 8) = uVar38;
    *(ulong *)pcVar39 = uVar20;
    puVar53[0xa8] = 0x8000000000000005;
    puVar53[0x170] = puVar53 + 0x46;
    puVar53[0x171] = puVar53 + 0x47;
    puVar53[0x172] = pcVar30;
    *(undefined1 *)((long)puVar53 + 0xb99) = 0;
code_r0x00010059651c:
    unaff_x22 = (code *)(puVar53 + 0x159);
    pcVar22 = (code *)FUN_1004f3b94(puVar11 + 0x6d70,unaff_x22,*(undefined8 *)(puVar11 + -0x1028));
    if (*(long *)(puVar11 + 0x6d70) == -0x8000000000000000) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 8;
      goto LAB_100595774;
    }
    *(undefined8 *)(puVar11 + -0xf18) = *(undefined8 *)(puVar11 + 0x6d78);
    *(undefined8 *)(puVar11 + -0xf20) = *(undefined8 *)(puVar11 + 0x6d70);
    *(undefined8 *)(puVar11 + -0xf10) = *(undefined8 *)(puVar11 + 0x6d80);
    pcVar30 = (code *)(puVar11 + 0x6d70);
code_r0x000100596570:
    cVar28 = pcVar30[0x18];
    FUN_100e82624(unaff_x22);
    if (((byte)cVar28 & 1) == 0) {
      uVar74 = puVar53[0xba];
      pcVar39 = (code *)(puVar11 + 0x6d70);
      *(undefined8 *)(puVar11 + 0x6e20) = puVar53[0xbb];
      *(undefined8 *)(puVar11 + 0x6e18) = uVar74;
      uVar74 = puVar53[0xbc];
      *(undefined8 *)(puVar11 + 0x6e30) = puVar53[0xbd];
      *(undefined8 *)(puVar11 + 0x6e28) = uVar74;
      uVar74 = puVar53[0xbe];
      *(undefined8 *)(puVar11 + 0x6e40) = puVar53[0xbf];
      *(undefined8 *)(puVar11 + 0x6e38) = uVar74;
      pcVar30 = (code *)puVar53[0xc0];
      uVar74 = puVar53[0xb2];
      *(undefined8 *)(puVar11 + 0x6de0) = puVar53[0xb3];
      *(undefined8 *)(puVar11 + 0x6dd8) = uVar74;
      uVar74 = puVar53[0xb4];
      *(undefined8 *)(puVar11 + 0x6df0) = puVar53[0xb5];
      *(undefined8 *)(puVar11 + 0x6de8) = uVar74;
      uVar74 = puVar53[0xb6];
      *(undefined8 *)(puVar11 + 0x6e00) = puVar53[0xb7];
      *(undefined8 *)(puVar11 + 0x6df8) = uVar74;
      uVar74 = puVar53[0xb8];
      *(undefined8 *)(puVar11 + 0x6e10) = puVar53[0xb9];
      *(undefined8 *)(puVar11 + 0x6e08) = uVar74;
      uVar74 = puVar53[0xaa];
      *(undefined8 *)(puVar11 + 0x6da0) = puVar53[0xab];
      *(undefined8 *)(puVar11 + 0x6d98) = uVar74;
      uVar74 = puVar53[0xac];
      *(undefined8 *)(puVar11 + 0x6db0) = puVar53[0xad];
      *(undefined8 *)(puVar11 + 0x6da8) = uVar74;
      uVar74 = puVar53[0xae];
      *(undefined8 *)(puVar11 + 0x6dc0) = puVar53[0xaf];
      *(undefined8 *)(puVar11 + 0x6db8) = uVar74;
      uVar74 = puVar53[0xb0];
      *(undefined8 *)(puVar11 + 0x6dd0) = puVar53[0xb1];
      *(undefined8 *)(puVar11 + 0x6dc8) = uVar74;
      uVar38 = puVar53[0xa9];
      uVar20 = puVar53[0xa8];
code_r0x00010059664c:
      *(ulong *)(pcVar39 + 0x20) = uVar38;
      *(ulong *)(pcVar39 + 0x18) = uVar20;
      *(code **)(puVar11 + 0x6e48) = pcVar30;
      *(undefined8 *)(puVar11 + 0x6d80) = *(undefined8 *)(puVar11 + -0xf10);
      *(undefined8 *)(puVar11 + 0x3208) = *(undefined8 *)(puVar11 + 0x6e18);
      *(undefined8 *)(puVar11 + 0x3200) = *(undefined8 *)(puVar11 + 0x6e10);
      *(undefined8 *)(puVar11 + 0x3218) = *(undefined8 *)(puVar11 + 0x6e28);
      *(undefined8 *)(puVar11 + 0x3210) = *(undefined8 *)(puVar11 + 0x6e20);
      *(undefined8 *)(puVar11 + 0x3228) = *(undefined8 *)(puVar11 + 0x6e38);
      *(undefined8 *)(puVar11 + 0x3220) = *(undefined8 *)(puVar11 + 0x6e30);
      *(undefined8 *)(puVar11 + 0x3238) = *(undefined8 *)(puVar11 + 0x6e48);
      *(undefined8 *)(puVar11 + 0x3230) = *(undefined8 *)(puVar11 + 0x6e40);
      uVar68 = *(undefined8 *)(puVar11 + 0x6dc8);
      uVar65 = *(undefined8 *)(puVar11 + 0x6dc0);
      *(undefined8 *)(puVar11 + 0x31c8) = *(undefined8 *)(puVar11 + 0x6dd8);
      *(undefined8 *)(puVar11 + 0x31c0) = *(undefined8 *)(puVar11 + 0x6dd0);
      *(undefined8 *)(puVar11 + 0x31d8) = *(undefined8 *)(puVar11 + 0x6de8);
      *(undefined8 *)(puVar11 + 0x31d0) = *(undefined8 *)(puVar11 + 0x6de0);
      *(undefined8 *)(puVar11 + 0x31e8) = *(undefined8 *)(puVar11 + 0x6df8);
      *(undefined8 *)(puVar11 + 0x31e0) = *(undefined8 *)(puVar11 + 0x6df0);
      *(undefined8 *)(puVar11 + 0x31f8) = *(undefined8 *)(puVar11 + 0x6e08);
      *(undefined8 *)(puVar11 + 0x31f0) = *(undefined8 *)(puVar11 + 0x6e00);
      uVar70 = *(undefined8 *)(puVar11 + 0x6db8);
      uVar74 = *(undefined8 *)(puVar11 + 0x6db0);
      uVar86 = *(undefined8 *)(puVar11 + 0x6d88);
      uVar62 = *(undefined8 *)(puVar11 + 0x6d80);
      *(undefined8 *)(puVar11 + 0x3188) = *(undefined8 *)(puVar11 + 0x6d98);
      *(undefined8 *)(puVar11 + 0x3180) = *(undefined8 *)(puVar11 + 0x6d90);
      *(undefined8 *)(puVar11 + 0x3198) = *(undefined8 *)(puVar11 + 0x6da8);
      *(undefined8 *)(puVar11 + 0x3190) = *(undefined8 *)(puVar11 + 0x6da0);
      *(undefined1 *)((long)puVar53 + 0xabd) = 0;
      *(undefined8 *)(puVar11 + 0x31a8) = uVar70;
      *(undefined8 *)(puVar11 + 0x31a0) = uVar74;
      *(undefined8 *)(puVar11 + 0x31b8) = uVar68;
      *(undefined8 *)(puVar11 + 0x31b0) = uVar65;
      *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(puVar11 + -0xf18);
      *(undefined8 *)(puVar11 + 0x6d70) = *(undefined8 *)(puVar11 + -0xf20);
      *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xf18);
      *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xf20);
      *(undefined8 *)(puVar11 + 0x3178) = uVar86;
      *(undefined8 *)(puVar11 + 0x3170) = uVar62;
      uVar74 = *(undefined8 *)(puVar11 + 0x3200);
      uVar62 = *(undefined8 *)(puVar11 + 0x3218);
      uVar70 = *(undefined8 *)(puVar11 + 0x3210);
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(puVar11 + 0x3208);
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar74;
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar62;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x3220);
      uVar62 = *(undefined8 *)(puVar11 + 0x3238);
      uVar70 = *(undefined8 *)(puVar11 + 0x3230);
      *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(puVar11 + 0x3228);
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar74;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar62;
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x31c0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31d8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31d0);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(puVar11 + 0x31c8);
      *(undefined8 *)(unaff_x22 + 0x60) = uVar74;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x31e0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31f8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31f0);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(puVar11 + 0x31e8);
      *(undefined8 *)(unaff_x22 + 0x80) = uVar74;
      *(undefined8 *)(unaff_x22 + 0x98) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x90) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x3180);
      uVar62 = *(undefined8 *)(puVar11 + 0x3198);
      uVar70 = *(undefined8 *)(puVar11 + 0x3190);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(puVar11 + 0x3188);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar74;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x31a0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31b8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31b0);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(puVar11 + 0x31a8);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar74;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x3160);
      uVar62 = *(undefined8 *)(puVar11 + 0x3178);
      uVar70 = *(undefined8 *)(puVar11 + 0x3170);
      *(undefined8 *)(unaff_x22 + 8) = *(undefined8 *)(puVar11 + 0x3168);
      *(undefined8 *)unaff_x22 = uVar74;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar70;
      puVar53[0x175] = puVar53 + 0x46;
      puVar53[0x176] = puVar53 + 0x47;
      *(undefined1 *)(puVar53 + 0x195) = 0;
code_r0x000100596740:
      pcVar22 = (code *)FUN_1004f35c0(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
      if ((int)pcVar22 != 0) {
        **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
        uVar41 = 10;
        goto LAB_100595774;
      }
      FUN_100e7e654(puVar53 + 0x159);
      *(undefined1 *)((long)puVar53 + 0xabd) = 0;
code_r0x000100596770:
      pcVar21 = (code *)puVar53[0x46];
      func_0x0001011ee774(puVar11 + -0xa80,puVar53 + 0xa2);
code_r0x000100596780:
      pcVar21 = pcVar21 + 0x10;
      *(undefined8 *)(puVar11 + 0x3208) = *(undefined8 *)(puVar11 + 0x6e18);
      *(undefined8 *)(puVar11 + 0x3200) = *(undefined8 *)(puVar11 + 0x6e10);
      *(undefined8 *)(puVar11 + 0x3218) = *(undefined8 *)(puVar11 + 0x6e28);
      *(undefined8 *)(puVar11 + 0x3210) = *(undefined8 *)(puVar11 + 0x6e20);
      *(undefined8 *)(puVar11 + 0x3228) = *(undefined8 *)(puVar11 + 0x6e38);
      *(undefined8 *)(puVar11 + 0x3220) = *(undefined8 *)(puVar11 + 0x6e30);
      *(undefined8 *)(puVar11 + 0x31c8) = *(undefined8 *)(puVar11 + 0x6dd8);
      *(undefined8 *)(puVar11 + 0x31c0) = *(undefined8 *)(puVar11 + 0x6dd0);
      *(undefined8 *)(puVar11 + 0x31d8) = *(undefined8 *)(puVar11 + 0x6de8);
      *(undefined8 *)(puVar11 + 0x31d0) = *(undefined8 *)(puVar11 + 0x6de0);
      *(undefined8 *)(puVar11 + 0x6da8) = *(undefined8 *)(puVar11 + -0xa78);
      *(undefined8 *)(puVar11 + 0x6da0) = *(undefined8 *)(puVar11 + -0xa80);
      *(undefined8 *)(puVar11 + 0x6db8) = *(undefined8 *)(puVar11 + -0xa68);
      *(undefined8 *)(puVar11 + 0x6db0) = *(undefined8 *)(puVar11 + -0xa70);
      *(undefined8 *)(puVar11 + 0x31e8) = *(undefined8 *)(puVar11 + 0x6df8);
      *(undefined8 *)(puVar11 + 0x31e0) = *(undefined8 *)(puVar11 + 0x6df0);
      *(undefined8 *)(puVar11 + 0x31f8) = *(undefined8 *)(puVar11 + 0x6e08);
      *(undefined8 *)(puVar11 + 0x31f0) = *(undefined8 *)(puVar11 + 0x6e00);
      *(undefined8 *)(puVar11 + 0x6dc8) = *(undefined8 *)(puVar11 + -0xa58);
      *(undefined8 *)(puVar11 + 0x6dc0) = *(undefined8 *)(puVar11 + -0xa60);
      uVar74 = *(undefined8 *)(puVar11 + 0x6e40);
      *(undefined8 *)(puVar11 + 0x3230) = uVar74;
      *(undefined8 *)(puVar11 + 0x3188) = *(undefined8 *)(puVar11 + 0x6d98);
      *(undefined8 *)(puVar11 + 0x3180) = *(undefined8 *)(puVar11 + 0x6d90);
      *(undefined8 *)(puVar11 + 0x3198) = *(undefined8 *)(puVar11 + -0xa78);
      *(undefined8 *)(puVar11 + 0x3190) = *(undefined8 *)(puVar11 + -0xa80);
      *(undefined8 *)(puVar11 + 0x31a8) = *(undefined8 *)(puVar11 + -0xa68);
      *(undefined8 *)(puVar11 + 0x31a0) = *(undefined8 *)(puVar11 + -0xa70);
      *(undefined8 *)(puVar11 + 0x31b8) = *(undefined8 *)(puVar11 + -0xa58);
      *(undefined8 *)(puVar11 + 0x31b0) = *(undefined8 *)(puVar11 + -0xa60);
      *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + 0x6d78);
      *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + 0x6d70);
      *(undefined8 *)(puVar11 + 0x3178) = *(undefined8 *)(puVar11 + 0x6d88);
      *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + 0x6d80);
      unaff_x22 = (code *)(puVar53 + 0x159);
      uVar70 = *(undefined8 *)(puVar11 + 0x3200);
      uVar86 = *(undefined8 *)(puVar11 + 0x3218);
      uVar62 = *(undefined8 *)(puVar11 + 0x3210);
      puVar53[0x16e] = *(undefined8 *)(puVar11 + 0x3208);
      puVar53[0x16d] = uVar70;
      puVar53[0x170] = uVar86;
      puVar53[0x16f] = uVar62;
      uVar70 = *(undefined8 *)(puVar11 + 0x3220);
      puVar53[0x172] = *(undefined8 *)(puVar11 + 0x3228);
      puVar53[0x171] = uVar70;
      puVar53[0x173] = uVar74;
      uVar74 = *(undefined8 *)(puVar11 + 0x31c0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31d8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31d0);
      puVar53[0x166] = *(undefined8 *)(puVar11 + 0x31c8);
      puVar53[0x165] = uVar74;
      puVar53[0x168] = uVar62;
      puVar53[0x167] = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x31e0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31f8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31f0);
      puVar53[0x16a] = *(undefined8 *)(puVar11 + 0x31e8);
      puVar53[0x169] = uVar74;
      puVar53[0x16c] = uVar62;
      puVar53[0x16b] = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x3180);
      uVar62 = *(undefined8 *)(puVar11 + 0x3198);
      uVar70 = *(undefined8 *)(puVar11 + 0x3190);
      puVar53[0x15e] = *(undefined8 *)(puVar11 + 0x3188);
      puVar53[0x15d] = uVar74;
      puVar53[0x160] = uVar62;
      puVar53[0x15f] = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x31a0);
      uVar62 = *(undefined8 *)(puVar11 + 0x31b8);
      uVar70 = *(undefined8 *)(puVar11 + 0x31b0);
      puVar53[0x162] = *(undefined8 *)(puVar11 + 0x31a8);
      puVar53[0x161] = uVar74;
      puVar53[0x164] = uVar62;
      puVar53[0x163] = uVar70;
      uVar74 = *(undefined8 *)(puVar11 + 0x3160);
      uVar62 = *(undefined8 *)(puVar11 + 0x3178);
      uVar70 = *(undefined8 *)(puVar11 + 0x3170);
      puVar53[0x15a] = *(undefined8 *)(puVar11 + 0x3168);
      *(undefined8 *)unaff_x22 = uVar74;
      puVar53[0x15c] = uVar62;
      puVar53[0x15b] = uVar70;
      puVar53[0x174] = pcVar21;
      pcVar19 = (code *)((long)puVar53 + 0xba9);
      *(undefined1 *)((long)puVar53 + 0xba9) = 0;
code_r0x000100596868:
      *(undefined1 *)(puVar53 + 0x175) = 1;
      uVar74 = puVar53[0x15f];
      uVar62 = puVar53[0x162];
      uVar70 = puVar53[0x161];
      *(undefined8 *)(unaff_x22 + 8) = puVar53[0x160];
      *(undefined8 *)unaff_x22 = uVar74;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar62;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar70;
      uVar74 = puVar53[0x163];
      *(undefined8 *)(unaff_x22 + 0x28) = puVar53[0x164];
      *(undefined8 *)(unaff_x22 + 0x20) = uVar74;
      puVar53[0x165] = pcVar21 + 0x790;
      *(undefined1 *)(puVar53 + 0x173) = 0;
code_r0x000100596890:
      pcVar22 = (code *)(puVar53 + 0x165);
      puVar67 = *(undefined8 **)(puVar11 + -0x1028);
code_r0x000100596898:
      pcVar21 = (code *)FUN_100fd3e50(pcVar22,puVar67);
      if (pcVar21 == (code *)0x0) {
        *pcVar19 = (code)0x3;
        pcVar22 = (code *)0x0;
      }
      else {
        if (((*(char *)(puVar53 + 0x173) == '\x03') && (*(char *)(puVar53 + 0x172) == '\x03')) &&
           (*(char *)(puVar53 + 0x169) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar53 + 0x16a);
          if (puVar53[0x16b] != 0) {
            (**(code **)(puVar53[0x16b] + 0x18))(puVar53[0x16c]);
          }
        }
        *(undefined1 *)(puVar53 + 0x175) = 0;
        uVar70 = *(undefined8 *)(unaff_x22 + 8);
        uVar74 = *(undefined8 *)unaff_x22;
        uVar86 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar62 = *(undefined8 *)(unaff_x22 + 0x10);
        uVar65 = *(undefined8 *)(unaff_x22 + 0x20);
        *(undefined8 *)(puVar11 + -0xa58) = *(undefined8 *)(unaff_x22 + 0x28);
        *(undefined8 *)(puVar11 + -0xa60) = uVar65;
        *(undefined8 *)(puVar11 + -0xa68) = uVar86;
        *(undefined8 *)(puVar11 + -0xa70) = uVar62;
        *(undefined8 *)(puVar11 + -0xa78) = uVar70;
        *(undefined8 *)(puVar11 + -0xa80) = uVar74;
        pcVar22 = pcVar21 + 0x860;
        puVar67 = (undefined8 *)(puVar11 + -0xa80);
code_r0x000100596904:
        FUN_100423fd0(pcVar22,puVar67);
        func_0x0001011ee774(puVar11 + 0x6d70,pcVar21 + 0x860);
        if (*pcVar21 == (code)0x0) {
          *pcVar21 = (code)0x1;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar21,extraout_x1_05,1000000000);
        }
        pcVar22 = (code *)FUN_1060fa678(pcVar21,1,pcVar21);
        *(undefined2 *)(puVar53 + 0x175) = 0x100;
        pcVar21 = *(code **)(puVar11 + 0x6d70);
        if (pcVar21 != (code *)0x0) {
          pcVar19 = *(code **)(puVar11 + 0x6d78);
          pcVar64 = *(code **)(puVar11 + 0x6d88);
          FUN_100d50bc0(unaff_x22);
          if (pcVar19 != (code *)0x0) {
            if (pcVar64 != (code *)0x0) {
              pcVar22 = pcVar21 + 8;
              lVar61 = *(long *)pcVar21;
              uVar20 = CONCAT17(-(-1 < lVar61),
                                CONCAT16(-(-1 < (char)((ulong)lVar61 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar61 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar61 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar61 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar61 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar61 >> 8)),
                                                           -(-1 < (char)lVar61)))))))) &
                       0x8080808080808080;
              unaff_x25 = (code *)0x18;
              unaff_x26 = pcVar21;
              do {
                for (; uVar20 == 0; uVar20 = uVar20 & 0x8080808080808080) {
                  pcVar25 = pcVar22 + 8;
                  lVar61 = *(long *)pcVar22;
                  uVar20 = CONCAT17(-(-1 < lVar61),
                                    CONCAT16(-(-1 < (char)((ulong)lVar61 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar61 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar61 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar61
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar61 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar61 >> 8)),
                                                           -(-1 < (char)lVar61))))))));
code_r0x0001005969a0:
                  pcVar22 = pcVar25;
                  unaff_x26 = unaff_x26 + -0xc0;
                }
                uVar38 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
                lVar61 = (long)-(int)((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3) *
                         (long)(int)unaff_x25;
                if (*(long *)(unaff_x26 + lVar61 + -0x18) != 0) {
                  _free(*(undefined8 *)(unaff_x26 + lVar61 + -0x10));
                }
                uVar20 = uVar20 - 1 & uVar20;
                pcVar64 = pcVar64 + -1;
              } while (pcVar64 != (code *)0x0);
            }
            if ((long)pcVar19 * 0x19 != -0x21) {
              _free(pcVar21 + (long)pcVar19 * -0x18 + -0x18);
            }
          }
          lVar61 = puVar53[0x46];
          uVar74 = *(undefined8 *)(puVar53[0x47] + 0x48);
          pcVar21 = *(code **)(puVar53[0x47] + 0x50);
          if (pcVar21 == (code *)0x0) {
            pcVar64 = (code *)0x1;
          }
          else {
            pcVar64 = (code *)_malloc(pcVar21);
            if (pcVar64 == (code *)0x0) {
              FUN_107c03c64(1,pcVar21);
              break;
            }
          }
          _memcpy(pcVar64,uVar74,pcVar21);
          pcVar30 = (code *)(lVar61 + 0x10);
          pcVar39 = (code *)puVar53[0x47];
code_r0x000100596a50:
          cVar28 = pcVar39[0x7e0];
          puVar53[0x159] = pcVar21;
          *(code **)(unaff_x22 + 8) = pcVar64;
          *(code **)(unaff_x22 + 0x10) = pcVar21;
          *(code *)(puVar53 + 0x15c) = cVar28;
          puVar53[0x15d] = pcVar30;
          *(undefined1 *)(puVar53 + 0x171) = 0;
code_r0x000100596a68:
          pcVar22 = (code *)func_0x0001005b0ca8(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
          if ((int)pcVar22 != 0) {
            **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
            uVar41 = 0xc;
            goto LAB_100595774;
          }
          FUN_100d533f8(puVar53 + 0x159);
          *(undefined1 *)((long)puVar53 + 0xabc) = 0;
          pcVar30 = (code *)puVar53[0xa0];
          pcVar19 = pcVar30 + puVar53[0xa1] * 0xc0;
          puVar53[0x159] = pcVar30;
          puVar53[0x15a] = pcVar30;
          puVar53[0x15b] = puVar53[0x9f];
          puVar53[0x15c] = pcVar19;
          while (pcVar39 = (code *)(puVar53 + 0x15d), pcVar30 != pcVar19) {
            puVar53[0x15a] = pcVar30 + 0xc0;
            uVar74 = *(undefined8 *)(pcVar30 + 0x20);
            uVar62 = *(undefined8 *)(pcVar30 + 0x38);
            uVar70 = *(undefined8 *)(pcVar30 + 0x30);
            uVar72 = *(undefined8 *)(pcVar30 + 8);
            uVar68 = *(undefined8 *)pcVar30;
            uVar65 = *(undefined8 *)(pcVar30 + 0x18);
            uVar86 = *(undefined8 *)(pcVar30 + 0x10);
            puVar53[0x162] = *(undefined8 *)(pcVar30 + 0x28);
            puVar53[0x161] = uVar74;
            puVar53[0x164] = uVar62;
            puVar53[0x163] = uVar70;
            puVar53[0x15e] = uVar72;
            *(undefined8 *)pcVar39 = uVar68;
            puVar53[0x160] = uVar65;
            puVar53[0x15f] = uVar86;
            uVar38 = *(ulong *)(pcVar30 + 0x68);
            uVar20 = *(ulong *)(pcVar30 + 0x60);
            uVar70 = *(undefined8 *)(pcVar30 + 0x78);
            uVar74 = *(undefined8 *)(pcVar30 + 0x70);
            uVar68 = *(undefined8 *)(pcVar30 + 0x48);
            uVar65 = *(undefined8 *)(pcVar30 + 0x40);
            uVar86 = *(undefined8 *)(pcVar30 + 0x58);
            uVar62 = *(undefined8 *)(pcVar30 + 0x50);
code_r0x000100597600:
            *(ulong *)(pcVar39 + 0x68) = uVar38;
            *(ulong *)(pcVar39 + 0x60) = uVar20;
            *(undefined8 *)(pcVar39 + 0x78) = uVar70;
            *(undefined8 *)(pcVar39 + 0x70) = uVar74;
            *(undefined8 *)(pcVar39 + 0x48) = uVar68;
            *(undefined8 *)(pcVar39 + 0x40) = uVar65;
            *(undefined8 *)(pcVar39 + 0x58) = uVar86;
            *(undefined8 *)(pcVar39 + 0x50) = uVar62;
            uVar74 = *(undefined8 *)(pcVar30 + 0xa0);
            uVar62 = *(undefined8 *)(pcVar30 + 0xb8);
            uVar70 = *(undefined8 *)(pcVar30 + 0xb0);
            uVar72 = *(undefined8 *)(pcVar30 + 0x88);
            uVar68 = *(undefined8 *)(pcVar30 + 0x80);
            uVar65 = *(undefined8 *)(pcVar30 + 0x98);
            uVar86 = *(undefined8 *)(pcVar30 + 0x90);
            *(undefined8 *)(pcVar39 + 0xa8) = *(undefined8 *)(pcVar30 + 0xa8);
            *(undefined8 *)(pcVar39 + 0xa0) = uVar74;
            *(undefined8 *)(pcVar39 + 0xb8) = uVar62;
            *(undefined8 *)(pcVar39 + 0xb0) = uVar70;
            *(undefined8 *)(pcVar39 + 0x88) = uVar72;
            *(undefined8 *)(pcVar39 + 0x80) = uVar68;
            *(undefined8 *)(pcVar39 + 0x98) = uVar65;
            *(undefined8 *)(pcVar39 + 0x90) = uVar86;
            if (puVar53[0x15d] == 0x11) goto code_r0x0001005976b8;
            uVar70 = *(undefined8 *)(pcVar30 + 8);
            uVar74 = *(undefined8 *)pcVar30;
            uVar86 = *(undefined8 *)(pcVar30 + 0x18);
            uVar62 = *(undefined8 *)(pcVar30 + 0x10);
            uVar68 = *(undefined8 *)(pcVar30 + 0x28);
            uVar65 = *(undefined8 *)(pcVar30 + 0x20);
            uVar52 = *(undefined8 *)(pcVar30 + 0x38);
            uVar72 = *(undefined8 *)(pcVar30 + 0x30);
            uVar76 = *(undefined8 *)(pcVar30 + 0x48);
            uVar75 = *(undefined8 *)(pcVar30 + 0x40);
            uVar78 = *(undefined8 *)(pcVar30 + 0x58);
            uVar77 = *(undefined8 *)(pcVar30 + 0x50);
            uVar81 = *(undefined8 *)(pcVar30 + 0x68);
            uVar79 = *(undefined8 *)(pcVar30 + 0x60);
            uVar84 = *(undefined8 *)(pcVar30 + 0x78);
            uVar83 = *(undefined8 *)(pcVar30 + 0x70);
            uVar89 = *(undefined8 *)(pcVar30 + 0x88);
            uVar87 = *(undefined8 *)(pcVar30 + 0x80);
            uVar93 = *(undefined8 *)(pcVar30 + 0x98);
            uVar91 = *(undefined8 *)(pcVar30 + 0x90);
            uVar96 = *(undefined8 *)(pcVar30 + 0xa0);
            uVar100 = *(undefined8 *)(pcVar30 + 0xb8);
            uVar98 = *(undefined8 *)(pcVar30 + 0xb0);
            puVar53[0x18a] = *(undefined8 *)(pcVar30 + 0xa8);
            puVar53[0x189] = uVar96;
            puVar53[0x18c] = uVar100;
            puVar53[0x18b] = uVar98;
            puVar53[0x186] = uVar89;
            puVar53[0x185] = uVar87;
            puVar53[0x188] = uVar93;
            puVar53[0x187] = uVar91;
            puVar53[0x182] = uVar81;
            puVar53[0x181] = uVar79;
            puVar53[0x184] = uVar84;
            puVar53[0x183] = uVar83;
            puVar53[0x17e] = uVar76;
            puVar53[0x17d] = uVar75;
            puVar53[0x180] = uVar78;
            puVar53[0x17f] = uVar77;
            puVar53[0x17a] = uVar68;
            puVar53[0x179] = uVar65;
            puVar53[0x17c] = uVar52;
            puVar53[0x17b] = uVar72;
            puVar53[0x176] = uVar70;
            puVar53[0x175] = uVar74;
            puVar53[0x178] = uVar86;
            puVar53[0x177] = uVar62;
            lVar61 = *(long *)(puVar11 + -0x1030);
            lVar60 = puVar53[0x46];
            *(long *)(lVar61 + 0x1b7) = puVar53[0x47] + 0x10;
            *(long *)(lVar61 + 0x1af) = lVar60 + 0x10;
            puVar53[399] = puVar53 + 0x175;
            puVar53[400] = 1;
            *(undefined1 *)(puVar53 + 0x195) = 0;
code_r0x000100597684:
            pcVar22 = (code *)FUN_1005af7fc(puVar53 + 0x18d,*(undefined8 *)(puVar11 + -0x1028));
            if ((int)pcVar22 != 0) {
              **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
              uVar41 = 0xd;
              goto LAB_100595774;
            }
            func_0x000100d50dec(puVar53 + 0x18d);
            FUN_100e02a24(puVar53 + 0x175);
            pcVar19 = (code *)puVar53[0x15c];
            pcVar30 = (code *)puVar53[0x15a];
          }
          *(undefined8 *)pcVar39 = 0x11;
code_r0x0001005976b8:
          unaff_x22 = (code *)(puVar53 + 0x159);
          FUN_100e7c594(unaff_x22);
          lVar61 = puVar53[0x46] + 0x10;
          lVar60 = puVar53[0x47] + 0x10;
          uVar74 = puVar53[0x4a];
          uVar70 = puVar53[0x4b];
          puVar53[0x15b] = uVar74;
          puVar53[0x15c] = uVar70;
          puVar53[0x15f] = lVar61;
          puVar53[0x160] = lVar60;
          pcVar19 = (code *)((long)puVar53 + 0xb09);
          *(undefined1 *)((long)puVar53 + 0xb09) = 0;
code_r0x0001005976f4:
          *(undefined1 *)(puVar53 + 0x161) = 0;
          puVar53[0x15d] = lVar61;
          puVar53[0x15e] = lVar60;
          puVar53[0x159] = uVar74;
          puVar53[0x15a] = uVar70;
          puVar53[0x162] = lVar61 + 0x790;
          *(undefined1 *)(puVar53 + 0x170) = 0;
code_r0x000100597714:
          pcVar21 = (code *)FUN_100fd3e50(puVar53 + 0x162,*(undefined8 *)(puVar11 + -0x1028));
          if (pcVar21 == (code *)0x0) {
            cVar28 = (code)0x3;
          }
          else {
            if (((*(char *)(puVar53 + 0x170) == '\x03') && (*(char *)(puVar53 + 0x16f) == '\x03'))
               && (*(char *)(puVar53 + 0x166) == '\x04')) {
              pcVar22 = (code *)(puVar53 + 0x167);
code_r0x000100597750:
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (pcVar22);
              if (puVar53[0x168] != 0) {
                (**(code **)(puVar53[0x168] + 0x18))(puVar53[0x169]);
              }
            }
            __ZN10codex_core7session7session20SessionConfiguration22thread_config_snapshot17he437ce6e3e89a28cE
                      (puVar53 + 0x162,pcVar21 + 0x28);
            *(undefined1 *)(puVar53 + 0x161) = 1;
            if (*pcVar21 == (code)0x0) {
              *pcVar21 = (code)0x1;
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar21,extraout_x1_06,1000000000);
            }
            FUN_1060fa678(pcVar21,1,pcVar21);
            puVar53[0x195] = puVar53[0x15d] + 0x790;
            *(undefined1 *)(puVar53 + 0x1a3) = 0;
code_r0x0001005977ac:
            auVar124 = FUN_100fd3e50(puVar53 + 0x195,*(undefined8 *)(puVar11 + -0x1028));
            uVar74 = auVar124._8_8_;
            pcVar32 = auVar124._0_8_;
            if (pcVar32 != (char *)0x0) {
              cVar16 = *(char *)(puVar53 + 0x1a3);
              *(code **)(puVar11 + -0x1058) = unaff_x22;
              if (((cVar16 == '\x03') && (*(char *)(puVar53 + 0x1a2) == '\x03')) &&
                 (*(char *)(puVar53 + 0x199) == '\x04')) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (puVar53 + 0x19a);
                uVar74 = extraout_x1_07;
                if (puVar53[0x19b] != 0) {
                  (**(code **)(puVar53[0x19b] + 0x18))(puVar53[0x19c]);
                  uVar74 = extraout_x1_08;
                }
              }
              bVar27 = pcVar32[0x891];
              pcVar32[0x891] = '\0';
              if (*pcVar32 == '\0') {
                *pcVar32 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar32,uVar74,1000000000);
              }
              FUN_1060fa678(pcVar32,1,pcVar32);
              uVar70 = puVar53[0x15d];
              uVar74 = *(undefined8 *)(puVar53[0x15e] + 0x238);
              lVar61 = *(long *)(puVar53[0x15e] + 0x240);
              if (lVar61 == 0) {
                lVar60 = 1;
              }
              else {
                lVar60 = _malloc(lVar61);
                if (lVar60 == 0) {
                  FUN_107c03c64(1,lVar61);
                  break;
                }
              }
              _memcpy(lVar60,uVar74,lVar61);
              lVar66 = puVar53[0x15d];
              *(undefined8 *)(puVar11 + -0xa80) = 0;
              *(undefined8 *)(puVar11 + -0xa78) = 1;
              *(undefined8 *)(puVar11 + -0xa70) = 0;
              FUN_10624142c(puVar11 + 0x3160,lVar66 + 0x780,0);
              thunk_FUN_108855060(puVar11 + -0xa80,0,0x24,1,1);
              lVar45 = *(long *)(puVar11 + -0xa70);
              lVar66 = *(long *)(puVar11 + -0xa78);
              puVar67 = (undefined8 *)(lVar66 + lVar45);
              uVar74 = *(undefined8 *)(puVar11 + 0x3160);
              puVar67[1] = *(undefined8 *)(puVar11 + 0x3168);
              *puVar67 = uVar74;
              uVar74 = *(undefined8 *)(puVar11 + 0x3170);
              puVar67[3] = *(undefined8 *)(puVar11 + 0x3178);
              puVar67[2] = uVar74;
              *(undefined4 *)(puVar67 + 4) = *(undefined4 *)(puVar11 + 0x3180);
              uVar20 = puVar53[0x15a];
              *(long *)(puVar11 + -0x1060) = lVar66;
              *(long *)(puVar11 + -0x1090) = lVar45;
              if (uVar20 == 0) {
                lVar66 = 0;
              }
              else {
                pcVar32 = (char *)puVar53[0x159];
                if (uVar20 < 8) {
                  uVar18 = 0;
                  lVar66 = 0;
                }
                else {
                  if (uVar20 < 0x20) {
                    lVar66 = 0;
                    uVar38 = 0;
                  }
                  else {
                    lVar66 = 0;
                    lVar45 = 0;
                    uVar18 = uVar20 & 0xffffffffffffffe0;
                    lVar34 = 0;
                    lVar35 = 0;
                    lVar49 = 0;
                    lVar80 = 0;
                    lVar95 = 0;
                    lVar97 = 0;
                    lVar23 = 0;
                    lVar71 = 0;
                    lVar88 = 0;
                    lVar90 = 0;
                    lVar82 = 0;
                    lVar85 = 0;
                    lVar103 = 0;
                    lVar105 = 0;
                    lVar92 = 0;
                    lVar94 = 0;
                    lVar111 = 0;
                    lVar112 = 0;
                    lVar107 = 0;
                    lVar109 = 0;
                    lVar120 = 0;
                    lVar121 = 0;
                    lVar99 = 0;
                    lVar101 = 0;
                    lVar118 = 0;
                    lVar119 = 0;
                    lVar114 = 0;
                    lVar116 = 0;
                    lVar122 = 0;
                    lVar123 = 0;
                    pcVar46 = pcVar32;
                    uVar38 = uVar18;
                    do {
                      lVar103 = lVar103 + (ulong)(-((byte)(pcVar46[0x310] - 1U) < 2) & 1);
                      lVar105 = lVar105 + (ulong)(-((byte)(pcVar46[0x348] - 1U) < 2) & 1);
                      lVar82 = lVar82 + (ulong)(-((byte)(pcVar46[0x2a0] - 1U) < 2) & 1);
                      lVar85 = lVar85 + (ulong)(-((byte)(pcVar46[0x2d8] - 1U) < 2) & 1);
                      lVar88 = lVar88 + (ulong)(-((byte)(pcVar46[0x230] - 1U) < 2) & 1);
                      lVar90 = lVar90 + (ulong)(-((byte)(pcVar46[0x268] - 1U) < 2) & 1);
                      lVar95 = lVar95 + (ulong)(-((byte)(pcVar46[0x150] - 1U) < 2) & 1);
                      lVar97 = lVar97 + (ulong)(-((byte)(pcVar46[0x188] - 1U) < 2) & 1);
                      lVar23 = lVar23 + (ulong)(-((byte)(pcVar46[0x1c0] - 1U) < 2) & 1);
                      lVar71 = lVar71 + (ulong)(-((byte)(pcVar46[0x1f8] - 1U) < 2) & 1);
                      lVar49 = lVar49 + (ulong)(-((byte)(pcVar46[0xe0] - 1U) < 2) & 1);
                      lVar80 = lVar80 + (ulong)(-((byte)(pcVar46[0x118] - 1U) < 2) & 1);
                      lVar34 = lVar34 + (ulong)(-((byte)(pcVar46[0x70] - 1U) < 2) & 1);
                      lVar35 = lVar35 + (ulong)(-((byte)(pcVar46[0xa8] - 1U) < 2) & 1);
                      lVar66 = lVar66 + (ulong)(-((byte)(*pcVar46 - 1U) < 2) & 1);
                      lVar45 = lVar45 + (ulong)(-((byte)(pcVar46[0x38] - 1U) < 2) & 1);
                      lVar122 = lVar122 + (ulong)(-((byte)(pcVar46[0x690] - 1U) < 2) & 1);
                      lVar123 = lVar123 + (ulong)(-((byte)(pcVar46[0x6c8] - 1U) < 2) & 1);
                      lVar114 = lVar114 + (ulong)(-((byte)(pcVar46[0x620] - 1U) < 2) & 1);
                      lVar116 = lVar116 + (ulong)(-((byte)(pcVar46[0x658] - 1U) < 2) & 1);
                      lVar118 = lVar118 + (ulong)(-((byte)(pcVar46[0x5b0] - 1U) < 2) & 1);
                      lVar119 = lVar119 + (ulong)(-((byte)(pcVar46[0x5e8] - 1U) < 2) & 1);
                      lVar120 = lVar120 + (ulong)(-((byte)(pcVar46[0x4d0] - 1U) < 2) & 1);
                      lVar121 = lVar121 + (ulong)(-((byte)(pcVar46[0x508] - 1U) < 2) & 1);
                      lVar99 = lVar99 + (ulong)(-((byte)(pcVar46[0x540] - 1U) < 2) & 1);
                      lVar101 = lVar101 + (ulong)(-((byte)(pcVar46[0x578] - 1U) < 2) & 1);
                      lVar107 = lVar107 + (ulong)(-((byte)(pcVar46[0x460] - 1U) < 2) & 1);
                      lVar109 = lVar109 + (ulong)(-((byte)(pcVar46[0x498] - 1U) < 2) & 1);
                      lVar111 = lVar111 + (ulong)(-((byte)(pcVar46[0x3f0] - 1U) < 2) & 1);
                      lVar112 = lVar112 + (ulong)(-((byte)(pcVar46[0x428] - 1U) < 2) & 1);
                      lVar92 = lVar92 + (ulong)(-((byte)(pcVar46[0x380] - 1U) < 2) & 1);
                      lVar94 = lVar94 + (ulong)(-((byte)(pcVar46[0x3b8] - 1U) < 2) & 1);
                      pcVar46 = pcVar46 + 0x700;
                      uVar38 = uVar38 - 0x20;
                    } while (uVar38 != 0);
                    lVar66 = lVar92 + lVar66 + lVar99 + lVar23 + lVar107 + lVar49 + lVar114 + lVar82
                             + lVar111 + lVar34 + lVar118 + lVar88 +
                               lVar120 + lVar95 + lVar122 + lVar103 +
                             lVar94 + lVar45 + lVar101 + lVar71 +
                             lVar109 + lVar80 + lVar116 + lVar85 +
                             lVar112 + lVar35 + lVar119 + lVar90 +
                             lVar121 + lVar97 + lVar123 + lVar105;
                    if (uVar20 == uVar18) goto code_r0x000100597d08;
                    uVar38 = uVar18;
                    if ((uVar20 & 0x18) == 0) goto code_r0x000100597ce4;
                  }
                  uVar18 = uVar20 & 0xfffffffffffffff8;
                  lVar23 = 0;
                  lVar71 = 0;
                  lVar34 = 0;
                  lVar45 = uVar38 - uVar18;
                  pcVar46 = pcVar32 + uVar38 * 0x38 + 0xe0;
                  lVar35 = 0;
                  lVar49 = 0;
                  lVar80 = 0;
                  lVar82 = 0;
                  do {
                    lVar80 = lVar80 + (ulong)(-((byte)(pcVar46[0x70] - 1U) < 2) & 1);
                    lVar82 = lVar82 + (ulong)(-((byte)(pcVar46[0xa8] - 1U) < 2) & 1);
                    lVar35 = lVar35 + (ulong)(-((byte)(*pcVar46 - 1U) < 2) & 1);
                    lVar49 = lVar49 + (ulong)(-((byte)(pcVar46[0x38] - 1U) < 2) & 1);
                    lVar71 = lVar71 + (ulong)(-((byte)(pcVar46[-0x70] - 1U) < 2) & 1);
                    lVar34 = lVar34 + (ulong)(-((byte)(pcVar46[-0x38] - 1U) < 2) & 1);
                    lVar66 = lVar66 + (ulong)(-((byte)(pcVar46[-0xe0] - 1U) < 2) & 1);
                    lVar23 = lVar23 + (ulong)(-((byte)(pcVar46[-0xa8] - 1U) < 2) & 1);
                    pcVar46 = pcVar46 + 0x1c0;
                    lVar45 = lVar45 + 8;
                  } while (lVar45 != 0);
                  lVar66 = lVar66 + lVar35 + lVar71 + lVar80 + lVar23 + lVar49 + lVar34 + lVar82;
                  if (uVar20 == uVar18) goto code_r0x000100597d08;
                }
code_r0x000100597ce4:
                lVar45 = uVar20 - uVar18;
                pbVar33 = (byte *)(pcVar32 + uVar18 * 0x38);
                do {
                  if (*pbVar33 - 1 < 2) {
                    lVar66 = lVar66 + 1;
                  }
                  lVar45 = lVar45 + -1;
                  pbVar33 = pbVar33 + 0x38;
                } while (lVar45 != 0);
              }
code_r0x000100597d08:
              *(undefined8 *)(puVar11 + -0x1070) = *(undefined8 *)(puVar11 + -0xa80);
              *(uint *)(puVar11 + -0x1098) = (uint)*(byte *)((long)puVar53 + 0xc99);
              *(undefined1 *)(puVar53 + 0x161) = 0;
              uVar74 = puVar53[0x18b];
              uVar86 = puVar53[0x18e];
              uVar62 = puVar53[0x18d];
              *(undefined8 *)(puVar11 + 0x3188) = puVar53[0x18c];
              *(undefined8 *)(puVar11 + 0x3180) = uVar74;
              *(undefined8 *)(puVar11 + 0x3198) = uVar86;
              *(undefined8 *)(puVar11 + 0x3190) = uVar62;
              uVar74 = puVar53[399];
              uVar86 = puVar53[0x192];
              uVar62 = puVar53[0x191];
              *(undefined8 *)(puVar11 + 0x31a8) = puVar53[400];
              *(undefined8 *)(puVar11 + 0x31a0) = uVar74;
              *(undefined8 *)(puVar11 + 0x31b8) = uVar86;
              *(undefined8 *)(puVar11 + 0x31b0) = uVar62;
              uVar74 = puVar53[0x187];
              uVar86 = puVar53[0x18a];
              uVar62 = puVar53[0x189];
              *(undefined8 *)(puVar11 + 0x3168) = puVar53[0x188];
              *(undefined8 *)(puVar11 + 0x3160) = uVar74;
              *(undefined8 *)(puVar11 + 0x3178) = uVar86;
              *(undefined8 *)(puVar11 + 0x3170) = uVar62;
              uVar74 = *(undefined8 *)(puVar53[0x15e] + 0x38);
              lVar45 = *(long *)(puVar53[0x15e] + 0x40);
              *(undefined8 *)(puVar11 + -0x10a8) = uVar70;
              if (lVar45 == 0) {
                lVar23 = 1;
              }
              else {
                lVar23 = _malloc(lVar45);
                if (lVar23 == 0) {
                  FUN_107c03c64(1,lVar45);
                  break;
                }
              }
              _memcpy(lVar23,uVar74,lVar45);
              uVar74 = *(undefined8 *)(*(long *)(puVar53[0x15e] + 0x788) + 0x1b98);
              lVar71 = *(long *)(*(long *)(puVar53[0x15e] + 0x788) + 0x1ba0);
              *(long *)(puVar11 + -0x1088) = lVar60;
              *(long *)(puVar11 + -0x1080) = lVar61;
              *(uint *)(puVar11 + -0x10a0) = (uint)bVar27;
              if (lVar71 == 0) {
                lVar61 = 1;
              }
              else {
                lVar61 = _malloc(lVar71);
                if (lVar61 == 0) {
                  FUN_107c03c64(1,lVar71);
                  break;
                }
              }
              _memcpy(lVar61,uVar74,lVar71);
              lVar60 = puVar53[0x15e];
              uVar38 = *(ulong *)(lVar60 + 0x588);
              uVar74 = 0x8000000000000000;
              uVar20 = uVar38;
              if (uVar38 < 0x8000000000000001) {
                uVar20 = 0;
              }
              lVar34 = lVar60;
              if ((uVar20 & 0x7fffffffffffffff) == 0) {
                if (uVar38 == 0x8000000000000000) {
                  uVar70 = 0x8000000000000000;
                }
                else {
                  FUN_1035ab934(puVar11 + 0xae30,*(undefined8 *)(lVar60 + 0x590),
                                *(undefined8 *)(lVar60 + 0x598));
                  uVar70 = *(undefined8 *)(lVar60 + 0x5a0);
                  uVar74 = *(undefined8 *)(puVar11 + 0xae30);
                  *(undefined8 *)(puVar11 + 0xbe88) = *(undefined8 *)(puVar11 + 0xae40);
                  *(undefined8 *)(puVar11 + 0xbe80) = *(undefined8 *)(puVar11 + 0xae38);
                  lVar34 = puVar53[0x15e];
                }
                uVar41 = *(undefined1 *)(lVar60 + 0x5a8);
                *(undefined8 *)(puVar11 + -0xa70) = *(undefined8 *)(puVar11 + 0xbe88);
                *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + 0xbe80);
                *(undefined8 *)(puVar11 + -0xa80) = uVar74;
                *(undefined8 *)(puVar11 + -0xa68) = uVar70;
                puVar11[-0xa60] = uVar41;
              }
              else if ((uVar20 & 0x7fffffffffffffff) == 1) {
                *(undefined8 *)(puVar11 + -0xa80) = 0x8000000000000001;
              }
              else {
                uVar74 = *(undefined8 *)(lVar60 + 0x588);
                uVar62 = *(undefined8 *)(lVar60 + 0x5a0);
                uVar70 = *(undefined8 *)(lVar60 + 0x598);
                *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(lVar60 + 0x590);
                *(undefined8 *)(puVar11 + -0xa80) = uVar74;
                *(undefined8 *)(puVar11 + -0xa68) = uVar62;
                *(undefined8 *)(puVar11 + -0xa70) = uVar70;
                *(undefined8 *)(puVar11 + -0xa60) = *(undefined8 *)(lVar60 + 0x5a8);
              }
              uVar74 = *(undefined8 *)(lVar34 + 0x398);
              puVar67 = *(undefined8 **)(lVar34 + 0x3a0);
              if (puVar67 == (undefined8 *)0x0) {
                lVar60 = 1;
              }
              else {
                lVar60 = _malloc(puVar67);
                if (lVar60 == 0) {
                  pcVar22 = (code *)0x1;
code_r0x0001005985cc:
                  FUN_107c03c64(pcVar22,puVar67);
                  break;
                }
              }
              lVar34 = *(long *)(puVar11 + -0x1090);
              _memcpy(lVar60,uVar74,puVar67);
              lVar35 = puVar53[0x15e];
              lVar49 = *(long *)(lVar35 + 0x788);
              if (*(long *)(lVar49 + 0x1ec8) == -0x8000000000000000) {
                uVar41 = 2;
              }
              else {
                plVar57 = *(long **)(lVar49 + 0x1ed0);
                uVar41 = 2;
                if (*(long *)(lVar49 + 0x1ed8) == 8) {
                  if (*plVar57 == 0x797469726f697270) {
                    uVar41 = 0;
                  }
                }
                else {
                  uVar41 = 2;
                  if (*(long *)(lVar49 + 0x1ed8) == 4) {
                    if ((int)*plVar57 == 0x74736166) {
                      uVar41 = 0;
                    }
                    else {
                      uVar41 = 1;
                      if ((int)*plVar57 != 0x78656c66) {
                        uVar41 = 2;
                      }
                    }
                  }
                }
              }
              uVar69 = *(undefined1 *)(lVar35 + 0x7d6);
              uVar5 = *(undefined1 *)(lVar35 + 0x7d3);
              uVar10 = *(undefined5 *)(lVar35 + 0x780);
              uVar8 = *(undefined1 *)(lVar49 + 0x252e);
              uVar20 = *(ulong *)(lVar35 + 0x588);
              if (uVar20 < 0x8000000000000001) {
                uVar20 = 0;
              }
              if ((uVar20 & 0x7fffffffffffffff) == 0) {
                lVar49 = 0x5a8;
code_r0x000100597f7c:
                bVar27 = *(byte *)(lVar35 + lVar49);
              }
              else {
                bVar27 = 1;
                if ((uVar20 & 0x7fffffffffffffff) != 1) {
                  lVar49 = 0x590;
                  goto code_r0x000100597f7c;
                }
              }
              *(undefined8 *)(puVar11 + 0x6e38) = *(undefined8 *)(puVar11 + 0x3188);
              *(undefined8 *)(puVar11 + 0x6e30) = *(undefined8 *)(puVar11 + 0x3180);
              *(undefined8 *)(puVar11 + 0x6e48) = *(undefined8 *)(puVar11 + 0x3198);
              *(undefined8 *)(puVar11 + 0x6e40) = *(undefined8 *)(puVar11 + 0x3190);
              *(undefined8 *)(puVar11 + 0x6e58) = *(undefined8 *)(puVar11 + 0x31a8);
              *(undefined8 *)(puVar11 + 0x6e50) = *(undefined8 *)(puVar11 + 0x31a0);
              *(undefined8 *)(puVar11 + 0x6e68) = *(undefined8 *)(puVar11 + 0x31b8);
              *(undefined8 *)(puVar11 + 0x6e60) = *(undefined8 *)(puVar11 + 0x31b0);
              *(undefined8 *)(puVar11 + 0x6e18) = *(undefined8 *)(puVar11 + 0x3168);
              *(undefined8 *)(puVar11 + 0x6e10) = *(undefined8 *)(puVar11 + 0x3160);
              *(undefined8 *)(puVar11 + 0x6e28) = *(undefined8 *)(puVar11 + 0x3178);
              *(undefined8 *)(puVar11 + 0x6e20) = *(undefined8 *)(puVar11 + 0x3170);
              *(undefined8 *)(puVar11 + 0x6df0) = *(undefined8 *)(puVar11 + -0xa78);
              *(undefined8 *)(puVar11 + 0x6de8) = *(undefined8 *)(puVar11 + -0xa80);
              uVar6 = *(undefined1 *)(lVar35 + 0x3e0);
              uVar7 = *(undefined1 *)(lVar35 + 0x7d5);
              *(undefined8 *)(puVar11 + 0x6d70) = *(undefined8 *)(puVar11 + -0x1080);
              *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(puVar11 + -0x1088);
              *(undefined8 *)(puVar11 + 0x6d80) = *(undefined8 *)(puVar11 + -0x1080);
              *(undefined8 *)(puVar11 + 0x6d88) = *(undefined8 *)(puVar11 + -0x1070);
              *(undefined8 *)(puVar11 + 0x6d90) = *(undefined8 *)(puVar11 + -0x1060);
              *(long *)(puVar11 + 0x6d98) = lVar34 + 0x24;
              *(long *)(puVar11 + 0x6e70) = lVar66;
              puVar11[0x6e7c] = 2;
              puVar11[0x6e78] = (char)*(undefined4 *)(puVar11 + -0x1098);
              *(long *)(puVar11 + 0x6da0) = lVar45;
              *(long *)(puVar11 + 0x6da8) = lVar23;
              *(long *)(puVar11 + 0x6db0) = lVar45;
              *(long *)(puVar11 + 0x6db8) = lVar71;
              *(long *)(puVar11 + 0x6dc0) = lVar61;
              *(long *)(puVar11 + 0x6dc8) = lVar71;
              *(undefined8 *)(puVar11 + 0x6e00) = *(undefined8 *)(puVar11 + -0xa68);
              *(undefined8 *)(puVar11 + 0x6df8) = *(undefined8 *)(puVar11 + -0xa70);
              *(undefined8 **)(puVar11 + 0x6dd0) = puVar67;
              *(long *)(puVar11 + 0x6dd8) = lVar60;
              *(undefined8 *)(puVar11 + 0x6e08) = *(undefined8 *)(puVar11 + -0xa60);
              *(undefined8 **)(puVar11 + 0x6de0) = puVar67;
              puVar11[0x6e81] = uVar69;
              puVar11[0x6e80] = uVar5;
              puVar11[0x6e7d] = uVar41;
              *(int *)(puVar11 + 0x6e82) = (int)uVar10;
              puVar11[0x6e86] = (char)((uint5)uVar10 >> 0x20);
              puVar11[0x6e79] = uVar8;
              puVar11[0x6e7a] = bVar27 & 1;
              puVar11[0x6e7e] = uVar6;
              puVar11[0x6e7f] = uVar7;
              puVar11[0x6e7b] = (char)*(undefined4 *)(puVar11 + -0x10a0);
              lVar61 = _malloc(0x118);
              if (lVar61 == 0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x118);
                break;
              }
              _memcpy(lVar61,puVar11 + 0x6d70,0x118);
              *(undefined8 *)(puVar11 + 0x3160) = 0x8000000000000003;
              *(long *)(puVar11 + 0x3168) = lVar61;
              FUN_101725e54(*(undefined8 *)(*(long *)(puVar11 + -0x10a8) + 0x4c8),puVar11 + 0x3160);
              if (puVar53[0x162] != 0) {
                _free(puVar53[0x163]);
              }
              if (puVar53[0x165] != 0) {
                _free(puVar53[0x166]);
              }
              if ((puVar53[0x179] != -0x8000000000000000) && (puVar53[0x179] != 0)) {
                _free(puVar53[0x17a]);
              }
              uVar20 = puVar53[0x182];
              bVar14 = uVar20 != 0x8000000000000000;
              if (uVar20 < 0x8000000000000001) {
                uVar20 = 0;
              }
              if ((bVar14) && ((uVar20 & 0x7fffffffffffffff) == 0)) {
                FUN_100e79780(puVar53 + 0x182);
              }
              if (puVar53[0x17c] != -0x8000000000000000) {
                if (puVar53[0x17c] != 0) {
                  _free(puVar53[0x17d]);
                }
                if ((puVar53[0x17f] != -0x8000000000000000) && (puVar53[0x17f] != 0)) {
                  _free(puVar53[0x180]);
                }
              }
              if (puVar53[0x168] != 0) {
                _free(puVar53[0x169]);
              }
              lVar60 = puVar53[0x16c];
              lVar61 = puVar53[0x16d];
              if (lVar61 != 0) {
                puVar67 = (undefined8 *)(lVar60 + 8);
                do {
                  if (puVar67[-1] != 0) {
                    _free(*puVar67);
                  }
                  puVar67 = puVar67 + 3;
                  lVar61 = lVar61 + -1;
                } while (lVar61 != 0);
              }
              if (puVar53[0x16b] != 0) {
                _free(lVar60);
              }
              lVar60 = puVar53[0x16f];
              lVar61 = puVar53[0x170];
              if (lVar61 != 0) {
                puVar67 = (undefined8 *)(lVar60 + 8);
                do {
                  if (puVar67[-1] != 0) {
                    _free(*puVar67);
                  }
                  puVar67 = puVar67 + 3;
                  lVar61 = lVar61 + -1;
                } while (lVar61 != 0);
              }
              if (puVar53[0x16e] != 0) {
                _free(lVar60);
              }
              plVar57 = *(long **)(puVar11 + -0x1058);
              if (puVar53[0x171] != 0) {
                _free(puVar53[0x172]);
              }
              if ((puVar53[0x174] != -0x8000000000000000) && (puVar53[0x174] != 0)) {
                _free(puVar53[0x175]);
              }
              *(undefined2 *)(puVar53 + 0x161) = 0x100;
              FUN_100cce4c8(plVar57);
              *(undefined1 *)(puVar53 + 0x158) = 1;
              puVar53[0xc1] = 0x8000000000000000;
              *(undefined1 *)((long)puVar53 + 0xab1) = 0;
              lVar61 = puVar53[0x47];
              lVar60 = *(long *)(lVar61 + 0x390);
              if (*(long *)(lVar61 + 0x398) == 0 || lVar60 == 0) {
                __ZN15codex_git_utils4info17get_git_repo_root17h189a919652668850E
                          (puVar11 + 0x6d70,*(undefined8 *)(lVar61 + 0x3a8),
                           *(undefined8 *)(lVar61 + 0x3b0));
                func_0x000100e9c86c(puVar11 + -0xf08,puVar11 + 0x6d70,puVar53[0x47]);
              }
              else {
                *plVar57 = lVar60;
                plVar57 = *(long **)(*(long *)(lVar60 + 0x48) + 0xf0);
                lVar61 = *(long *)(*(long *)(lVar60 + 0x48) + 0xf8);
                lVar60 = *plVar57;
                *plVar57 = lVar60 + 1;
                if (lVar60 < 0) break;
                puVar53[0x177] = plVar57;
                puVar53[0x178] = lVar61;
                puVar53[0x15a] =
                     (long)plVar57 + (*(long *)(lVar61 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
                puVar53[0x15b] = lVar61;
                puVar53[0x15c] = puVar53[0x159] + 0x18;
                *(undefined1 *)(puVar53 + 0x160) = 0;
code_r0x0001005982c8:
                pcVar22 = (code *)FUN_10085b404(puVar11 + 0x6d70,puVar53 + 0x15a,
                                                *(undefined8 *)(puVar11 + -0x1028));
                lVar61 = *(long *)(puVar11 + 0x6d70);
                if (lVar61 == -0x7fffffffffffffff) {
                  **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                  uVar41 = 0xf;
                  goto LAB_100595774;
                }
                lVar66 = *(long *)(puVar11 + 0x6d78);
                lVar60 = *(long *)(puVar11 + 0x6d80);
                if (*(char *)(puVar53 + 0x160) == '\x03') {
                  uVar74 = puVar53[0x161];
                  puVar67 = (undefined8 *)puVar53[0x162];
                  pcVar19 = (code *)*puVar67;
                  if (pcVar19 != (code *)0x0) {
                    (*pcVar19)(uVar74);
                  }
                  if (puVar67[1] != 0) goto code_r0x000100598350;
                }
                else if ((*(char *)(puVar53 + 0x160) == '\x04') &&
                        (FUN_100cab34c(puVar53 + 0x164), puVar53[0x161] != 0)) {
                  uVar74 = puVar53[0x162];
code_r0x000100598350:
                  _free(uVar74);
                }
                if (lVar61 == -0x8000000000000000) {
                  uVar74 = *(undefined8 *)(puVar53[0x159] + 0x20);
                  lVar61 = *(long *)(puVar53[0x159] + 0x28);
                  if (lVar61 == 0) {
                    lVar66 = 1;
                  }
                  else {
                    lVar66 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar61,1);
                    if (lVar66 == 0) {
                      FUN_107c03c64(1,lVar61);
                      break;
                    }
                  }
                  _memcpy(lVar66,uVar74,lVar61);
                  lVar60 = lVar61;
                }
                *(long *)(puVar11 + -0xf08) = lVar61;
                *(long *)(puVar11 + -0xf00) = lVar66;
                *(long *)(puVar11 + -0xef8) = lVar60;
                lVar61 = *(long *)puVar53[0x177];
                *(long *)puVar53[0x177] = lVar61 + -1;
                LORelease();
                if (lVar61 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(puVar53 + 0x177);
                }
              }
              pauVar24 = (undefined1 (*) [16])
                         (*
                         ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                         )();
              if (pauVar24[1][0] == '\x01') {
                auVar124 = *pauVar24;
              }
              else {
                auVar124 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar24 + 8) = auVar124._8_8_;
                pauVar24[1][0] = 1;
                puVar53 = *(undefined8 **)(puVar11 + -0x1048);
              }
              lVar61 = auVar124._0_8_;
              *(long *)*pauVar24 = lVar61 + 3;
              *(undefined8 *)(puVar11 + 0x3188) = 0;
              *(undefined8 *)(puVar11 + 0x3180) = 0;
              *(undefined8 *)(puVar11 + 0x3178) = 0;
              *(undefined **)(puVar11 + 0x3170) = &UNK_108d52778;
              *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xef8);
              *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xf00);
              *(undefined8 *)(puVar11 + 0x6db8) = *(undefined8 *)(puVar11 + -0xef8);
              *(undefined8 *)(puVar11 + 0x6db0) = *(undefined8 *)(puVar11 + -0xf00);
              *(undefined8 *)(puVar11 + 0x6dc8) = 0;
              *(undefined **)(puVar11 + 0x6dc0) = &UNK_108d52778;
              *(undefined8 *)(puVar11 + 0x6dd8) = 0;
              *(undefined8 *)(puVar11 + 0x6dd0) = 0;
              *(undefined8 *)(puVar11 + 0x6d80) = 0;
              *(undefined8 *)(puVar11 + 0x6d88) = 0;
              puVar11[0x6d98] = 0;
              *(undefined8 *)(puVar11 + 0x6d78) = 1;
              *(undefined8 *)(puVar11 + 0x6d70) = 1;
              *(undefined8 *)(puVar11 + 0x6d90) = 0;
              *(undefined8 *)(puVar11 + 0x6da0) = 2;
              *(undefined8 *)(puVar11 + 0x6da8) = *(undefined8 *)(puVar11 + -0xf08);
              *(undefined1 (*) [16])(puVar11 + 0x6de0) = auVar124;
              *(undefined8 *)(puVar11 + 0x6df8) = 0;
              *(undefined **)(puVar11 + 0x6df0) = &UNK_108d52778;
              *(undefined8 *)(puVar11 + 0x6e08) = 0;
              *(undefined8 *)(puVar11 + 0x6e00) = 0;
              *(long *)(puVar11 + 0x6e10) = lVar61 + 1;
              *(long *)(puVar11 + 0x6e18) = auVar124._8_8_;
              *(undefined8 *)(puVar11 + 0x6e38) = 0;
              *(undefined8 *)(puVar11 + 0x6e30) = 0;
              *(undefined8 *)(puVar11 + 0x6e28) = 0;
              *(undefined **)(puVar11 + 0x6e20) = &UNK_108d52778;
              *(long *)(puVar11 + 0x6e40) = lVar61 + 2;
              *(long *)(puVar11 + 0x6e48) = auVar124._8_8_;
              puVar11[0x6e50] = 1;
              puVar67 = (undefined8 *)_malloc(0xe8);
              if (puVar67 != (undefined8 *)0x0) {
                uVar74 = *(undefined8 *)(puVar11 + 0x6e30);
                uVar62 = *(undefined8 *)(puVar11 + 0x6e48);
                uVar70 = *(undefined8 *)(puVar11 + 0x6e40);
                puVar67[0x19] = *(undefined8 *)(puVar11 + 0x6e38);
                puVar67[0x18] = uVar74;
                puVar67[0x1b] = uVar62;
                puVar67[0x1a] = uVar70;
                puVar67[0x1c] = *(undefined8 *)(puVar11 + 0x6e50);
                uVar74 = *(undefined8 *)(puVar11 + 0x6df0);
                uVar62 = *(undefined8 *)(puVar11 + 0x6e08);
                uVar70 = *(undefined8 *)(puVar11 + 0x6e00);
                puVar67[0x11] = *(undefined8 *)(puVar11 + 0x6df8);
                puVar67[0x10] = uVar74;
                puVar67[0x13] = uVar62;
                puVar67[0x12] = uVar70;
                uVar70 = *(undefined8 *)(puVar11 + 0x6e28);
                uVar74 = *(undefined8 *)(puVar11 + 0x6e20);
                uVar62 = *(undefined8 *)(puVar11 + 0x6e10);
                puVar67[0x15] = *(undefined8 *)(puVar11 + 0x6e18);
                puVar67[0x14] = uVar62;
                puVar67[0x17] = uVar70;
                puVar67[0x16] = uVar74;
                uVar74 = *(undefined8 *)(puVar11 + 0x6db0);
                uVar62 = *(undefined8 *)(puVar11 + 0x6dc8);
                uVar70 = *(undefined8 *)(puVar11 + 0x6dc0);
                puVar67[9] = *(undefined8 *)(puVar11 + 0x6db8);
                puVar67[8] = uVar74;
                puVar67[0xb] = uVar62;
                puVar67[10] = uVar70;
                uVar70 = *(undefined8 *)(puVar11 + 0x6de8);
                uVar74 = *(undefined8 *)(puVar11 + 0x6de0);
                uVar62 = *(undefined8 *)(puVar11 + 0x6dd0);
                puVar67[0xd] = *(undefined8 *)(puVar11 + 0x6dd8);
                puVar67[0xc] = uVar62;
                puVar67[0xf] = uVar70;
                puVar67[0xe] = uVar74;
                uVar74 = *(undefined8 *)(puVar11 + 0x6d70);
                uVar62 = *(undefined8 *)(puVar11 + 0x6d88);
                uVar70 = *(undefined8 *)(puVar11 + 0x6d80);
                puVar67[1] = *(undefined8 *)(puVar11 + 0x6d78);
                *puVar67 = uVar74;
                puVar67[3] = uVar62;
                puVar67[2] = uVar70;
                uVar70 = *(undefined8 *)(puVar11 + 0x6da8);
                uVar74 = *(undefined8 *)(puVar11 + 0x6da0);
                uVar62 = *(undefined8 *)(puVar11 + 0x6d90);
                puVar67[5] = *(undefined8 *)(puVar11 + 0x6d98);
                puVar67[4] = uVar62;
                puVar67[7] = uVar70;
                puVar67[6] = uVar74;
                puVar53[0xc4] = puVar67;
                *(bool *)((long)puVar53 + 0xab2) = puVar53[0x4b] == 0;
                if (puVar53[0x4b] == 0) goto code_r0x00010059916c;
code_r0x000100598528:
                puVar67 = (undefined8 *)0x8;
                lVar61 = 0;
                lVar60 = 0;
                do {
                  *(undefined2 *)((long)puVar53 + 0xab3) = 0;
                  puVar53[0xc5] = puVar67;
                  puVar36 = puVar67 + lVar60 * 0x19;
                  puVar53[0xc6] = puVar67;
                  puVar53[199] = lVar61;
                  puVar53[200] = puVar36;
                  puVar37 = puVar53 + 0xc9;
                  if (puVar67 != puVar36) {
                    do {
                      puVar40 = puVar67 + 0x19;
                      puVar53[0xc6] = puVar40;
                      uVar74 = *puVar67;
                      puVar37[1] = puVar67[1];
                      *puVar37 = uVar74;
                      uVar74 = puVar67[6];
                      uVar62 = puVar67[9];
                      uVar70 = puVar67[8];
                      uVar72 = puVar67[3];
                      uVar68 = puVar67[2];
                      uVar65 = puVar67[5];
                      uVar86 = puVar67[4];
                      puVar37[7] = puVar67[7];
                      puVar37[6] = uVar74;
                      puVar37[9] = uVar62;
                      puVar37[8] = uVar70;
                      puVar37[3] = uVar72;
                      puVar37[2] = uVar68;
                      puVar37[5] = uVar65;
                      puVar37[4] = uVar86;
                      uVar74 = puVar67[0xe];
                      uVar62 = puVar67[0x11];
                      uVar70 = puVar67[0x10];
                      uVar72 = puVar67[0xb];
                      uVar68 = puVar67[10];
                      uVar65 = puVar67[0xd];
                      uVar86 = puVar67[0xc];
                      puVar37[0xf] = puVar67[0xf];
                      puVar37[0xe] = uVar74;
                      puVar37[0x11] = uVar62;
                      puVar37[0x10] = uVar70;
                      puVar37[0xb] = uVar72;
                      puVar37[10] = uVar68;
                      puVar37[0xd] = uVar65;
                      puVar37[0xc] = uVar86;
                      uVar86 = puVar67[0x15];
                      uVar62 = puVar67[0x14];
                      uVar70 = puVar67[0x17];
                      uVar74 = puVar67[0x16];
                      uVar68 = puVar67[0x13];
                      uVar65 = puVar67[0x12];
                      puVar37[0x18] = puVar67[0x18];
                      puVar37[0x15] = uVar86;
                      puVar37[0x14] = uVar62;
                      puVar37[0x17] = uVar70;
                      puVar37[0x16] = uVar74;
                      puVar37[0x13] = uVar68;
                      puVar37[0x12] = uVar65;
                      if (puVar53[0xc9] == -0x7ffffffffffffffa) goto code_r0x0001005992fc;
                      uVar62 = puVar37[0x11];
                      uVar70 = puVar37[0x10];
                      uVar74 = puVar37[0x12];
                      puVar53[0xf5] = puVar37[0x13];
                      puVar53[0xf4] = uVar74;
                      uVar74 = puVar37[0x14];
                      uVar65 = puVar37[0x17];
                      uVar86 = puVar37[0x16];
                      puVar53[0xf7] = puVar37[0x15];
                      puVar53[0xf6] = uVar74;
                      puVar53[0xf9] = uVar65;
                      puVar53[0xf8] = uVar86;
                      uVar65 = puVar37[9];
                      uVar86 = puVar37[8];
                      uVar74 = puVar37[10];
                      puVar53[0xed] = puVar37[0xb];
                      puVar53[0xec] = uVar74;
                      uVar74 = puVar37[0xc];
                      uVar72 = puVar37[0xf];
                      uVar68 = puVar37[0xe];
                      puVar53[0xef] = puVar37[0xd];
                      puVar53[0xee] = uVar74;
                      puVar53[0xf1] = uVar72;
                      puVar53[0xf0] = uVar68;
                      puVar53[0xf3] = uVar62;
                      puVar53[0xf2] = uVar70;
                      uVar62 = puVar37[1];
                      uVar70 = *puVar37;
                      uVar74 = puVar37[2];
                      puVar53[0xe5] = puVar37[3];
                      puVar53[0xe4] = uVar74;
                      uVar74 = puVar37[4];
                      uVar72 = puVar37[7];
                      uVar68 = puVar37[6];
                      puVar53[0xe7] = puVar37[5];
                      puVar53[0xe6] = uVar74;
                      puVar53[0xe9] = uVar72;
                      puVar53[0xe8] = uVar68;
                      puVar53[0xeb] = uVar65;
                      puVar53[0xea] = uVar86;
                      *(undefined1 *)((long)puVar53 + 0xab9) = 1;
                      puVar53[0xfa] = puVar37[0x18];
                      puVar53[0xe3] = uVar62;
                      puVar53[0xe2] = uVar70;
                      puVar53[0x170] = puVar53 + 0x46;
                      puVar53[0x171] = puVar53 + 0x47;
                      puVar53[0x172] = puVar53 + 0xe2;
                      *(undefined1 *)((long)puVar53 + 0xb99) = 0;
code_r0x00010059a588:
                      puVar67 = puVar53 + 0x159;
                      pcVar22 = (code *)FUN_1004f3b94(puVar11 + 0x6d70,puVar67,
                                                      *(undefined8 *)(puVar11 + -0x1028));
                      if (*(long *)(puVar11 + 0x6d70) == -0x8000000000000000) {
                        **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                        uVar41 = 0x11;
                        goto LAB_100595774;
                      }
                      *(undefined8 *)(puVar11 + -0xee8) = *(undefined8 *)(puVar11 + 0x6d78);
                      *(undefined8 *)(puVar11 + -0xef0) = *(undefined8 *)(puVar11 + 0x6d70);
                      *(undefined8 *)(puVar11 + -0xee0) = *(undefined8 *)(puVar11 + 0x6d80);
                      bVar27 = puVar11[0x6d88];
                      FUN_100e82624(puVar67);
                      if ((bVar27 & 1) == 0) {
                        uVar74 = puVar53[0xf4];
                        *(undefined8 *)(puVar11 + 0x6e20) = puVar53[0xf5];
                        *(undefined8 *)(puVar11 + 0x6e18) = uVar74;
                        uVar74 = puVar53[0xf6];
                        *(undefined8 *)(puVar11 + 0x6e30) = puVar53[0xf7];
                        *(undefined8 *)(puVar11 + 0x6e28) = uVar74;
                        uVar74 = puVar53[0xf8];
                        *(undefined8 *)(puVar11 + 0x6e40) = puVar53[0xf9];
                        *(undefined8 *)(puVar11 + 0x6e38) = uVar74;
                        uVar74 = puVar53[0xfa];
                        uVar70 = puVar53[0xec];
                        *(undefined8 *)(puVar11 + 0x6de0) = puVar53[0xed];
                        *(undefined8 *)(puVar11 + 0x6dd8) = uVar70;
                        uVar70 = puVar53[0xee];
                        *(undefined8 *)(puVar11 + 0x6df0) = puVar53[0xef];
                        *(undefined8 *)(puVar11 + 0x6de8) = uVar70;
                        uVar70 = puVar53[0xf0];
                        *(undefined8 *)(puVar11 + 0x6e00) = puVar53[0xf1];
                        *(undefined8 *)(puVar11 + 0x6df8) = uVar70;
                        uVar70 = puVar53[0xf2];
                        *(undefined8 *)(puVar11 + 0x6e10) = puVar53[0xf3];
                        *(undefined8 *)(puVar11 + 0x6e08) = uVar70;
                        uVar70 = puVar53[0xe4];
                        *(undefined8 *)(puVar11 + 0x6da0) = puVar53[0xe5];
                        *(undefined8 *)(puVar11 + 0x6d98) = uVar70;
                        uVar70 = puVar53[0xe6];
                        *(undefined8 *)(puVar11 + 0x6db0) = puVar53[0xe7];
                        *(undefined8 *)(puVar11 + 0x6da8) = uVar70;
                        uVar70 = puVar53[0xe8];
                        *(undefined8 *)(puVar11 + 0x6dc0) = puVar53[0xe9];
                        *(undefined8 *)(puVar11 + 0x6db8) = uVar70;
                        uVar70 = puVar53[0xea];
                        *(undefined8 *)(puVar11 + 0x6dd0) = puVar53[0xeb];
                        *(undefined8 *)(puVar11 + 0x6dc8) = uVar70;
                        uVar70 = puVar53[0xe2];
                        *(undefined8 *)(puVar11 + 0x6d90) = puVar53[0xe3];
                        *(undefined8 *)(puVar11 + 0x6d88) = uVar70;
                        *(undefined8 *)(puVar11 + 0x6e48) = uVar74;
                        *(undefined8 *)(puVar11 + 0x6d80) = *(undefined8 *)(puVar11 + -0xee0);
                        *(undefined8 *)(puVar11 + 0x3208) = *(undefined8 *)(puVar11 + 0x6e18);
                        *(undefined8 *)(puVar11 + 0x3200) = *(undefined8 *)(puVar11 + 0x6e10);
                        *(undefined8 *)(puVar11 + 0x3218) = *(undefined8 *)(puVar11 + 0x6e28);
                        *(undefined8 *)(puVar11 + 0x3210) = *(undefined8 *)(puVar11 + 0x6e20);
                        *(undefined8 *)(puVar11 + 0x3228) = *(undefined8 *)(puVar11 + 0x6e38);
                        *(undefined8 *)(puVar11 + 0x3220) = *(undefined8 *)(puVar11 + 0x6e30);
                        *(undefined8 *)(puVar11 + 0x3238) = *(undefined8 *)(puVar11 + 0x6e48);
                        *(undefined8 *)(puVar11 + 0x3230) = *(undefined8 *)(puVar11 + 0x6e40);
                        uVar68 = *(undefined8 *)(puVar11 + 0x6dc8);
                        uVar65 = *(undefined8 *)(puVar11 + 0x6dc0);
                        *(undefined8 *)(puVar11 + 0x31c8) = *(undefined8 *)(puVar11 + 0x6dd8);
                        *(undefined8 *)(puVar11 + 0x31c0) = *(undefined8 *)(puVar11 + 0x6dd0);
                        *(undefined8 *)(puVar11 + 0x31d8) = *(undefined8 *)(puVar11 + 0x6de8);
                        *(undefined8 *)(puVar11 + 0x31d0) = *(undefined8 *)(puVar11 + 0x6de0);
                        *(undefined8 *)(puVar11 + 0x31e8) = *(undefined8 *)(puVar11 + 0x6df8);
                        *(undefined8 *)(puVar11 + 0x31e0) = *(undefined8 *)(puVar11 + 0x6df0);
                        *(undefined8 *)(puVar11 + 0x31f8) = *(undefined8 *)(puVar11 + 0x6e08);
                        *(undefined8 *)(puVar11 + 0x31f0) = *(undefined8 *)(puVar11 + 0x6e00);
                        uVar70 = *(undefined8 *)(puVar11 + 0x6db8);
                        uVar74 = *(undefined8 *)(puVar11 + 0x6db0);
                        uVar86 = *(undefined8 *)(puVar11 + 0x6d88);
                        uVar62 = *(undefined8 *)(puVar11 + 0x6d80);
                        *(undefined8 *)(puVar11 + 0x3188) = *(undefined8 *)(puVar11 + 0x6d98);
                        *(undefined8 *)(puVar11 + 0x3180) = *(undefined8 *)(puVar11 + 0x6d90);
                        *(undefined8 *)(puVar11 + 0x3198) = *(undefined8 *)(puVar11 + 0x6da8);
                        *(undefined8 *)(puVar11 + 0x3190) = *(undefined8 *)(puVar11 + 0x6da0);
                        *(undefined1 *)((long)puVar53 + 0xab4) = 1;
                        *(undefined1 *)((long)puVar53 + 0xab9) = 0;
                        *(undefined8 *)(puVar11 + 0x31a8) = uVar70;
                        *(undefined8 *)(puVar11 + 0x31a0) = uVar74;
                        *(undefined8 *)(puVar11 + 0x31b8) = uVar68;
                        *(undefined8 *)(puVar11 + 0x31b0) = uVar65;
                        *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(puVar11 + -0xee8);
                        *(undefined8 *)(puVar11 + 0x6d70) = *(undefined8 *)(puVar11 + -0xef0);
                        *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xee8);
                        *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xef0);
                        *(undefined8 *)(puVar11 + 0x3178) = uVar86;
                        *(undefined8 *)(puVar11 + 0x3170) = uVar62;
                        uVar74 = *(undefined8 *)(puVar11 + 0x3200);
                        uVar62 = *(undefined8 *)(puVar11 + 0x3218);
                        uVar70 = *(undefined8 *)(puVar11 + 0x3210);
                        puVar53[0x16e] = *(undefined8 *)(puVar11 + 0x3208);
                        puVar53[0x16d] = uVar74;
                        puVar53[0x170] = uVar62;
                        puVar53[0x16f] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x3220);
                        uVar62 = *(undefined8 *)(puVar11 + 0x3238);
                        uVar70 = *(undefined8 *)(puVar11 + 0x3230);
                        puVar53[0x172] = *(undefined8 *)(puVar11 + 0x3228);
                        puVar53[0x171] = uVar74;
                        puVar53[0x174] = uVar62;
                        puVar53[0x173] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x31c0);
                        uVar62 = *(undefined8 *)(puVar11 + 0x31d8);
                        uVar70 = *(undefined8 *)(puVar11 + 0x31d0);
                        puVar53[0x166] = *(undefined8 *)(puVar11 + 0x31c8);
                        puVar53[0x165] = uVar74;
                        puVar53[0x168] = uVar62;
                        puVar53[0x167] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x31e0);
                        uVar62 = *(undefined8 *)(puVar11 + 0x31f8);
                        uVar70 = *(undefined8 *)(puVar11 + 0x31f0);
                        puVar53[0x16a] = *(undefined8 *)(puVar11 + 0x31e8);
                        puVar53[0x169] = uVar74;
                        puVar53[0x16c] = uVar62;
                        puVar53[0x16b] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x3180);
                        uVar62 = *(undefined8 *)(puVar11 + 0x3198);
                        uVar70 = *(undefined8 *)(puVar11 + 0x3190);
                        puVar53[0x15e] = *(undefined8 *)(puVar11 + 0x3188);
                        puVar53[0x15d] = uVar74;
                        puVar53[0x160] = uVar62;
                        puVar53[0x15f] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x31a0);
                        uVar62 = *(undefined8 *)(puVar11 + 0x31b8);
                        uVar70 = *(undefined8 *)(puVar11 + 0x31b0);
                        puVar53[0x162] = *(undefined8 *)(puVar11 + 0x31a8);
                        puVar53[0x161] = uVar74;
                        puVar53[0x164] = uVar62;
                        puVar53[0x163] = uVar70;
                        uVar74 = *(undefined8 *)(puVar11 + 0x3160);
                        uVar62 = *(undefined8 *)(puVar11 + 0x3178);
                        uVar70 = *(undefined8 *)(puVar11 + 0x3170);
                        puVar53[0x15a] = *(undefined8 *)(puVar11 + 0x3168);
                        *puVar67 = uVar74;
                        puVar53[0x15c] = uVar62;
                        puVar53[0x15b] = uVar70;
                        puVar53[0x175] = puVar53 + 0x46;
                        puVar53[0x176] = puVar53 + 0x47;
                        *(undefined1 *)(puVar53 + 0x195) = 0;
code_r0x00010059a788:
                        pcVar22 = (code *)FUN_1004f35c0(puVar53 + 0x159,
                                                        *(undefined8 *)(puVar11 + -0x1028));
                        if ((int)pcVar22 != 0) {
                          **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                          uVar41 = 0x13;
                          goto LAB_100595774;
                        }
                        FUN_100e7e654(puVar53 + 0x159);
                      }
                      else {
                        *(undefined1 *)((long)puVar53 + 0xab3) = 1;
                        uVar74 = *(undefined8 *)(puVar11 + -0xef0);
                        puVar53[0x15a] = *(undefined8 *)(puVar11 + -0xee8);
                        *puVar67 = uVar74;
                        puVar53[0x15b] = *(undefined8 *)(puVar11 + -0xee0);
                        puVar53[0x15c] = puVar53 + 0x46;
                        puVar53[0x15d] = puVar53 + 0x47;
                        **(undefined1 **)(puVar11 + -0x1040) = 0;
code_r0x00010059a608:
                        pcVar22 = (code *)func_0x0001004f6c44(puVar53 + 0x159,
                                                              *(undefined8 *)(puVar11 + -0x1028));
                        if ((int)pcVar22 != 0) {
                          **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                          uVar41 = 0x12;
                          goto LAB_100595774;
                        }
                        FUN_100ca1af4(puVar53 + 0x159);
                      }
                      if ((*(byte *)((long)puVar53 + 0xab9) & 1) != 0) {
                        if (puVar53[0xe2] == -0x7ffffffffffffffb) {
                          lVar66 = puVar53[0xe4];
                          lVar61 = lVar66;
                          for (lVar60 = puVar53[0xe5]; lVar60 != 0; lVar60 = lVar60 + -1) {
                            FUN_100e06c08(lVar61);
                            lVar61 = lVar61 + 0x38;
                          }
                          if (puVar53[0xe3] != 0) {
                            _free(lVar66);
                          }
                        }
                        else {
                          FUN_100e139e8(puVar53 + 0xe2);
                        }
                      }
                      *(undefined1 *)((long)puVar53 + 0xab9) = 0;
                      puVar36 = (undefined8 *)puVar53[200];
                      puVar67 = (undefined8 *)puVar53[0xc6];
                      puVar37 = puVar53 + 0xc9;
                    } while (puVar67 != puVar36);
                  }
                  *puVar37 = 0x8000000000000006;
                  puVar40 = puVar67;
code_r0x0001005992fc:
                  FUN_100e37258(puVar40,((ulong)((long)puVar36 - (long)puVar40) >> 3) *
                                        -0x70a3d70a3d70a3d7);
                  if (puVar53[199] != 0) {
                    _free(puVar53[0xc5]);
                  }
                  if ((*(char *)((long)puVar53 + 0xab3) == '\x01') &&
                     ((*(byte *)((long)puVar53 + 0xab4) & 1) == 0)) goto LAB_10059cf3c;
                  puVar53[0x159] = puVar53[0x46] + 0x10;
                  *(undefined1 *)(puVar53 + 0x169) = 0;
code_r0x000100599354:
                  pcVar64 = (code *)(puVar53 + 0x159);
                  pcVar22 = (code *)FUN_1005a3614(puVar11 + 0x6d70,pcVar64,
                                                  *(undefined8 *)(puVar11 + -0x1028));
                  if (*(long *)(puVar11 + 0x6d70) == 3) {
                    **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                    uVar41 = 0x14;
                    goto LAB_100595774;
                  }
                  _memcpy(puVar11 + 0x3160,puVar11 + 0x6d70,0x1f0);
                  if ((((*(char *)(puVar53 + 0x169) == '\x03') &&
                       (*(char *)(puVar53 + 0x168) == '\x03')) &&
                      (*(char *)(puVar53 + 0x167) == '\x03')) &&
                     (*(char *)(puVar53 + 0x15e) == '\x04')) {
                    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                              (puVar53 + 0x15f);
                    if (puVar53[0x160] != 0) {
                      (**(code **)(puVar53[0x160] + 0x18))(puVar53[0x161]);
                    }
                  }
                  __ZN10codex_core15context_manager7history14ContextManager10for_prompt17h603b73efa9c20fb3E
                            (puVar53 + 0xfb,puVar11 + 0x3160,*(undefined8 *)(puVar53[0x47] + 0xf0),
                             *(undefined8 *)(puVar53[0x47] + 0xf8));
                  __ZN10codex_core13turn_metadata17TurnMetadataState20current_header_value17h7aa6287b048a3c4eE
                            (puVar53 + 0xfe,*(long *)(puVar53[0x47] + 0x7b0) + 0x10);
                  unaff_x22 = (code *)puVar53[0x46];
                  lVar61 = *(long *)unaff_x22;
                  *(long *)unaff_x22 = lVar61 + 1;
                  if (lVar61 < 0) goto code_r0x0001005975c0;
                  *(code **)(puVar11 + 0xbe80) = unaff_x22;
                  pcVar19 = (code *)puVar53[0x47];
                  lVar61 = *(long *)pcVar19;
                  *(long *)pcVar19 = lVar61 + 1;
                  if (lVar61 < 0) goto code_r0x0001005975c0;
                  *(code **)(puVar11 + 0xae30) = pcVar19;
                  unaff_x25 = (code *)puVar53[0x48];
                  lVar61 = *(long *)unaff_x25;
                  *(long *)unaff_x25 = lVar61 + 1;
                  if (lVar61 < 0) goto code_r0x0001005975c0;
                  *(code **)(puVar11 + -0xa80) = unaff_x25;
                  plVar57 = (long *)puVar53[0xc4];
                  lVar61 = *plVar57;
                  *plVar57 = lVar61 + 1;
                  if (lVar61 < 0) goto code_r0x0001005975c0;
                  *(long **)(puVar11 + 0x3160) = plVar57;
                  unaff_x26 = (code *)puVar53[0x100];
                  plVar57 = (long *)0x0;
                  if (puVar53[0xfe] != -0x8000000000000000) {
                    plVar57 = (long *)puVar53[0xff];
                  }
                  FUN_1011499a8(puVar11 + 0x6d70,puVar53[0xfc],puVar53[0xfd]);
                  pcVar25 = (code *)__ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                                              (puVar53 + 0x4c);
                  unaff_x28 = (code *)(puVar53 + 0x4d);
                  pcVar43 = *(code **)(puVar11 + 0x3160);
                  uVar70 = *(undefined8 *)(puVar11 + 0x6d70);
                  *(undefined8 *)(puVar11 + 0xb548) = *(undefined8 *)(puVar11 + 0x6d78);
                  *(undefined8 *)(puVar11 + 0xb540) = uVar70;
                  uVar74 = *(undefined8 *)(puVar11 + 0x6d80);
                  *(undefined8 *)(puVar11 + 0xb550) = uVar74;
                  puVar53[0x15a] = *(undefined8 *)(puVar11 + 0x6d78);
                  *(undefined8 *)pcVar64 = uVar70;
                  puVar53[0x15b] = uVar74;
                  puVar53[0x15c] = unaff_x22;
                  puVar53[0x15d] = pcVar19;
                  puVar53[0x15e] = unaff_x25;
                  puVar53[0x15f] = pcVar43;
                  puVar53[0x160] = unaff_x28;
                  puVar53[0x161] = pcVar25;
                  puVar53[0x162] = plVar57;
                  puVar53[0x163] = unaff_x26;
                  *(undefined8 **)(puVar11 + -0x1060) = puVar53 + 0x16a;
                  *(undefined1 *)(puVar53 + 0x16a) = 0;
code_r0x0001005994f0:
                  pcVar42 = *(code **)(puVar11 + -0x1030);
                  *(undefined2 *)(pcVar42 + 0x98) = 0;
                  *(code **)(puVar11 + 0xb4b0) = unaff_x22;
                  *(undefined2 *)((long)puVar53 + 0xb57) = 0x101;
code_r0x000100599510:
                  puVar53[0x164] = pcVar19;
                  *(code **)(puVar11 + 0xaaa0) = unaff_x25;
                  *(code **)(puVar11 + -0x1058) = pcVar43;
                  *(code **)(puVar11 + 0xb120) = pcVar43;
                  uVar74 = *(undefined8 *)pcVar64;
                  *(undefined8 *)(puVar11 + 0xbe88) = *(undefined8 *)(pcVar64 + 8);
                  *(undefined8 *)(puVar11 + 0xbe80) = uVar74;
                  *(undefined8 *)(puVar11 + 0xbe90) = *(undefined8 *)(pcVar64 + 0x10);
                  pcVar19 = pcVar42 + 0x9a;
                  *(undefined4 *)pcVar19 = 0x1010101;
                  *(code **)(puVar11 + 0xbc20) = pcVar25;
                  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
                    if (1 < bRam000000010b62aa68 - 1) {
                      if (bRam000000010b62aa68 != 0) {
                        cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                                           );
                        puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                        if (cVar16 != '\0') goto code_r0x000100599f48;
                      }
                      goto code_r0x000100599570;
                    }
code_r0x000100599f48:
                    uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (
                                       ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                                       );
                    if ((uVar20 & 1) == 0) goto code_r0x000100599570;
                    lVar61 = puVar53[0x164];
                    *(long *)(puVar11 + 0xb380) = lVar61 + 0x240;
                    *(long *)(puVar11 + 0xb600) = lVar61 + 0x40;
                    uVar74 = *(undefined8 *)(lVar61 + 0x3b0);
                    *(undefined8 *)(puVar11 + -0xa80) = *(undefined8 *)(lVar61 + 0x3a8);
                    *(undefined8 *)(puVar11 + -0xa78) = uVar74;
                    *(undefined1 **)(puVar11 + 0xb730) = puVar11 + -0xa80;
                    *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xb380;
                    *(undefined **)(puVar11 + 0x6d78) = &UNK_10b215b00;
                    *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xb600;
                    *(undefined **)(puVar11 + 0x6d88) = &UNK_10b215b00;
                    *(undefined1 **)(puVar11 + 0x6d90) = puVar11 + 0xb730;
                    *(undefined **)(puVar11 + 0x6d98) = &UNK_10b216450;
                    *(undefined8 *)(puVar11 + 0x3160) = 1;
                    *(undefined1 **)(puVar11 + 0x3168) = puVar11 + 0x6d70;
                    *(undefined8 *)(puVar11 + 0x3170) = 3;
                    *(long *)(puVar11 + 0x3178) =
                         ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                         + 0x30;
                    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                              (puVar53 + 0x165,
                               ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                               ,puVar11 + 0x3160);
                    *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x98) = 1;
                    pcVar21 = *(code **)(puVar11 + -0x1058);
                  }
                  else {
code_r0x000100599570:
                    *(undefined8 *)(puVar11 + 0x3160) = 2;
                    *(long *)(puVar11 + 0x3180) =
                         ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                    ;
                    pcVar21 = *(code **)(puVar11 + -0x1058);
                    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
                      pcVar30 = (code *)(
                                        ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdcb403ad50c1fa30E
                                        + 0x30);
                      lVar61 = puVar53[0x164];
                      *(long *)(puVar11 + 0xad00) = lVar61 + 0x240;
                      *(long *)(puVar11 + 0xb380) = lVar61 + 0x40;
                      uVar74 = *(undefined8 *)(lVar61 + 0x3b0);
                      *(undefined8 *)(puVar11 + 0xb730) = *(undefined8 *)(lVar61 + 0x3a8);
                      *(undefined8 *)(puVar11 + 0xb738) = uVar74;
                      *(undefined1 **)(puVar11 + 0xb600) = puVar11 + 0xb730;
                      pcVar39 = (code *)&UNK_10b215000;
code_r0x0001005995e4:
                      *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xad00;
                      *(code **)(puVar11 + 0x6d78) = pcVar39 + 0xb00;
                      *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xb380;
                      *(code **)(puVar11 + 0x6d88) = pcVar39 + 0xb00;
                      *(undefined1 **)(puVar11 + 0x6d90) = puVar11 + 0xb600;
                      *(undefined **)(puVar11 + 0x6d98) = &UNK_10b216450;
                      *(undefined8 *)(puVar11 + -0xa80) = 1;
                      *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x6d70;
                      *(undefined8 *)(puVar11 + -0xa70) = 3;
                      *(code **)(puVar11 + -0xa68) = pcVar30;
                      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                                (puVar11 + 0x3160,puVar11 + -0xa80);
                    }
                    cVar28 = (code)0x1;
code_r0x000100599654:
                    *(code *)((long)puVar53 + 0xb51) = cVar28;
                    puVar53[0x169] = *(undefined8 *)(puVar11 + 0x3180);
                    uVar74 = *(undefined8 *)(puVar11 + 0x3160);
                    uVar62 = *(undefined8 *)(puVar11 + 0x3178);
                    uVar70 = *(undefined8 *)(puVar11 + 0x3170);
                    puVar53[0x166] = *(undefined8 *)(puVar11 + 0x3168);
                    puVar53[0x165] = uVar74;
                    puVar53[0x168] = uVar62;
                    puVar53[0x167] = uVar70;
                  }
                  *(undefined2 *)(pcVar19 + 4) = 0;
                  *(undefined4 *)pcVar19 = 0;
                  *(undefined1 *)((long)puVar53 + 0xb52) = 1;
                  *(undefined8 *)(puVar11 + -0xa60) = puVar53[0x164];
                  *(code **)(puVar11 + -0xa58) = pcVar25;
                  *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + 0xbe88);
                  *(undefined8 *)(puVar11 + -0xa80) = *(undefined8 *)(puVar11 + 0xbe80);
                  *(code **)(puVar11 + -0xa68) = unaff_x22;
                  *(undefined8 *)(puVar11 + -0xa70) = *(undefined8 *)(puVar11 + 0xbe90);
                  *(code **)(puVar11 + -0xa50) = pcVar21;
                  *(code **)(puVar11 + -0xa48) = unaff_x25;
                  *(code **)(puVar11 + -0xa40) = unaff_x28;
                  *(long **)(puVar11 + -0xa38) = plVar57;
                  *(code **)(puVar11 + -0xa30) = unaff_x26;
                  puVar11[-2000] = 0;
                  if (puVar53[0x165] == 2) {
                    *(undefined1 *)((long)puVar53 + 0xb52) = 0;
                    _memcpy(puVar53 + 0x16c,puVar11 + -0xa80,0x3be0);
code_r0x0001005996e0:
                    pcVar22 = (code *)FUN_10057e4b8(puVar11 + 0x6d70,puVar53 + 0x16c,
                                                    *(undefined8 *)(puVar11 + -0x1028));
                    pcVar19 = *(code **)(puVar11 + 0x6d70);
                    if (pcVar19 == (code *)0x8000000000000021) {
                      uVar41 = 4;
code_r0x00010059c014:
                      **(undefined1 **)(puVar11 + -0x1060) = uVar41;
                      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                      uVar41 = 0x15;
                      goto LAB_100595774;
                    }
                    pcVar30 = (code *)(puVar11 + 0x6d70);
                    *(undefined8 *)(puVar11 + 0xae98) = *(undefined8 *)(puVar11 + 0x6de0);
                    *(undefined8 *)(puVar11 + 0xae90) = *(undefined8 *)(puVar11 + 0x6dd8);
                    *(undefined8 *)(puVar11 + 0xaea8) = *(undefined8 *)(puVar11 + 0x6df0);
                    *(undefined8 *)(puVar11 + 0xaea0) = *(undefined8 *)(puVar11 + 0x6de8);
                    *(undefined8 *)(puVar11 + 0xaeb8) = *(undefined8 *)(puVar11 + 0x6e00);
                    *(undefined8 *)(puVar11 + 0xaeb0) = *(undefined8 *)(puVar11 + 0x6df8);
                    uVar70 = *(undefined8 *)(puVar11 + 0x6d90);
                    uVar74 = *(undefined8 *)(puVar11 + 0x6d88);
                    *(undefined8 *)(puVar11 + 0xae58) = *(undefined8 *)(puVar11 + 0x6da0);
                    *(undefined8 *)(puVar11 + 0xae50) = *(undefined8 *)(puVar11 + 0x6d98);
                    *(undefined8 *)(puVar11 + 0xae68) = *(undefined8 *)(puVar11 + 0x6db0);
                    *(undefined8 *)(puVar11 + 0xae60) = *(undefined8 *)(puVar11 + 0x6da8);
                    *(undefined8 *)(puVar11 + 0xae88) = *(undefined8 *)(puVar11 + 0x6dd0);
                    *(undefined8 *)(puVar11 + 0xae80) = *(undefined8 *)(puVar11 + 0x6dc8);
                    *(undefined8 *)(puVar11 + 0xae78) = *(undefined8 *)(puVar11 + 0x6dc0);
                    *(undefined8 *)(puVar11 + 0xae70) = *(undefined8 *)(puVar11 + 0x6db8);
code_r0x000100599750:
                    uVar86 = *(undefined8 *)(pcVar30 + 0x10);
                    uVar62 = *(undefined8 *)(pcVar30 + 8);
                    *(undefined8 *)(puVar11 + 0xae48) = uVar70;
                    *(undefined8 *)(puVar11 + 0xae40) = uVar74;
                    *(undefined8 *)(puVar11 + 0xae38) = uVar86;
                    *(undefined8 *)(puVar11 + 0xae30) = uVar62;
                    FUN_100cfa7a0(puVar53 + 0x16c);
                  }
                  else {
                    *(undefined1 *)((long)puVar53 + 0xb52) = 0;
                    _memcpy(puVar11 + 0x6d98,puVar11 + -0xa80,0x3be0);
                    *(undefined1 *)((long)puVar53 + 0xb51) = 0;
                    uVar74 = puVar53[0x165];
                    uVar62 = puVar53[0x168];
                    uVar70 = puVar53[0x167];
                    *(undefined8 *)(puVar11 + 0x6d78) = puVar53[0x166];
                    *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
                    *(undefined8 *)(puVar11 + 0x6d88) = uVar62;
                    *(undefined8 *)(puVar11 + 0x6d80) = uVar70;
                    *(undefined8 *)(puVar11 + 0x6d90) = puVar53[0x169];
                    _memcpy(puVar11 + 0x3160,puVar11 + 0x6d70,0x3c08);
                    _memcpy(puVar53 + 0x16c,puVar11 + 0x3160,0x3c08);
code_r0x0001005997d0:
                    pcVar19 = (code *)(puVar53 + 0x16c);
                    if (puVar53[0x16c] != 2) {
                      lVar61 = puVar53[0x16d];
                      if ((puVar53[0x16c] & 1) != 0) {
                        lVar61 = lVar61 + (*(long *)(puVar53[0x16e] + 0x10) - 1U &
                                          0xfffffffffffffff0) + 0x10;
                      }
                      (**(code **)(puVar53[0x16e] + 0x60))(lVar61,puVar53 + 0x16f);
                    }
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (lVar61 = puVar53[0x170], lVar61 != 0)) {
                      uVar74 = *(undefined8 *)(lVar61 + 0x18);
                      *(undefined8 *)(puVar11 + 0xb600) = *(undefined8 *)(lVar61 + 0x10);
                      *(undefined8 *)(puVar11 + 0xb608) = uVar74;
                      *(undefined1 **)(puVar11 + 0xb730) = puVar11 + 0xb600;
                      *(undefined **)(puVar11 + 0xb738) = &DAT_100c7b3a0;
                      FUN_1011d7d74(pcVar19,&UNK_108cd3ef5,0x15,s__>___108ab67cd,puVar11 + 0xb730);
                    }
                    pcVar22 = (code *)FUN_10057e4b8(puVar11 + 0x6d70,puVar53 + 0x171,
                                                    *(undefined8 *)(puVar11 + -0x1028));
                    if (*(ulong *)pcVar19 != 2) {
                      lVar61 = puVar53[0x16d];
                      if ((*(ulong *)pcVar19 & 1) != 0) {
                        lVar61 = lVar61 + (*(long *)(puVar53[0x16e] + 0x10) - 1U &
                                          0xfffffffffffffff0) + 0x10;
                      }
                      pcVar22 = (code *)(**(code **)(puVar53[0x16e] + 0x68))(lVar61,puVar53 + 0x16f)
                      ;
                    }
                    pcVar25 = pcVar19;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (lVar61 = puVar53[0x170], lVar61 != 0)) {
                      pcVar39 = *(code **)(lVar61 + 0x10);
                      pcVar30 = *(code **)(lVar61 + 0x18);
code_r0x0001005998d4:
                      *(code **)(puVar11 + 0xb600) = pcVar39;
                      *(code **)(puVar11 + 0xb608) = pcVar30;
                      *(undefined1 **)(puVar11 + 0xb730) = puVar11 + 0xb600;
                      *(undefined **)(puVar11 + 0xb738) = &DAT_100c7b3a0;
                      pcVar22 = (code *)FUN_1011d7d74(pcVar19,&UNK_108cd3ef5,0x15,s_<____108ab67c5,
                                                      puVar11 + 0xb730);
                      pcVar25 = pcVar19;
                    }
code_r0x000100599920:
                    pcVar19 = *(code **)(puVar11 + 0x6d70);
                    if (pcVar19 == (code *)0x8000000000000021) {
                      uVar41 = 3;
                      goto code_r0x00010059c014;
                    }
                    *(undefined8 *)(puVar11 + 0xae98) = *(undefined8 *)(puVar11 + 0x6de0);
                    *(undefined8 *)(puVar11 + 0xae90) = *(undefined8 *)(puVar11 + 0x6dd8);
                    *(undefined8 *)(puVar11 + 0xaea8) = *(undefined8 *)(puVar11 + 0x6df0);
                    *(undefined8 *)(puVar11 + 0xaea0) = *(undefined8 *)(puVar11 + 0x6de8);
                    *(undefined8 *)(puVar11 + 0xaeb8) = *(undefined8 *)(puVar11 + 0x6e00);
                    *(undefined8 *)(puVar11 + 0xaeb0) = *(undefined8 *)(puVar11 + 0x6df8);
                    *(undefined8 *)(puVar11 + 0xae58) = *(undefined8 *)(puVar11 + 0x6da0);
                    *(undefined8 *)(puVar11 + 0xae50) = *(undefined8 *)(puVar11 + 0x6d98);
                    *(undefined8 *)(puVar11 + 0xae68) = *(undefined8 *)(puVar11 + 0x6db0);
                    *(undefined8 *)(puVar11 + 0xae60) = *(undefined8 *)(puVar11 + 0x6da8);
                    *(undefined8 *)(puVar11 + 0xae88) = *(undefined8 *)(puVar11 + 0x6dd0);
                    *(undefined8 *)(puVar11 + 0xae80) = *(undefined8 *)(puVar11 + 0x6dc8);
                    *(undefined8 *)(puVar11 + 0xae78) = *(undefined8 *)(puVar11 + 0x6dc0);
                    *(undefined8 *)(puVar11 + 0xae70) = *(undefined8 *)(puVar11 + 0x6db8);
                    *(undefined8 *)(puVar11 + 0xae48) = *(undefined8 *)(puVar11 + 0x6d90);
                    *(undefined8 *)(puVar11 + 0xae40) = *(undefined8 *)(puVar11 + 0x6d88);
                    *(undefined8 *)(puVar11 + 0xae38) = *(undefined8 *)(puVar11 + 0x6d80);
                    *(undefined8 *)(puVar11 + 0xae30) = *(undefined8 *)(puVar11 + 0x6d78);
                    FUN_100d735a0(pcVar25);
                  }
                  *(undefined1 *)((long)puVar53 + 0xb52) = 0;
                  if ((*(byte *)((long)puVar53 + 0xb51) & 1) != 0) {
                    FUN_100dddd8c(puVar53 + 0x165);
                  }
                  uVar38 = *(ulong *)(puVar11 + 0xae98);
                  uVar20 = *(ulong *)(puVar11 + 0xae90);
                  uVar70 = *(undefined8 *)(puVar11 + 0xaea8);
                  uVar74 = *(undefined8 *)(puVar11 + 0xaea0);
code_r0x0001005999ac:
                  *(ulong *)(puVar11 + -0xe68) = uVar38;
                  *(ulong *)(puVar11 + -0xe70) = uVar20;
                  *(undefined8 *)(puVar11 + -0xe58) = uVar70;
                  *(undefined8 *)(puVar11 + -0xe60) = uVar74;
                  *(undefined8 *)(puVar11 + -0xe48) = *(undefined8 *)(puVar11 + 0xaeb8);
                  *(undefined8 *)(puVar11 + -0xe50) = *(undefined8 *)(puVar11 + 0xaeb0);
                  *(undefined8 *)(puVar11 + -0xea8) = *(undefined8 *)(puVar11 + 0xae58);
                  *(undefined8 *)(puVar11 + -0xeb0) = *(undefined8 *)(puVar11 + 0xae50);
                  *(undefined8 *)(puVar11 + -0xe98) = *(undefined8 *)(puVar11 + 0xae68);
                  *(undefined8 *)(puVar11 + -0xea0) = *(undefined8 *)(puVar11 + 0xae60);
                  *(undefined8 *)(puVar11 + -0xe88) = *(undefined8 *)(puVar11 + 0xae78);
                  *(undefined8 *)(puVar11 + -0xe90) = *(undefined8 *)(puVar11 + 0xae70);
                  *(undefined8 *)(puVar11 + -0xe78) = *(undefined8 *)(puVar11 + 0xae88);
                  *(undefined8 *)(puVar11 + -0xe80) = *(undefined8 *)(puVar11 + 0xae80);
                  *(undefined8 *)(puVar11 + -0xec8) = *(undefined8 *)(puVar11 + 0xae38);
                  *(undefined8 *)(puVar11 + -0xed0) = *(undefined8 *)(puVar11 + 0xae30);
                  *(undefined8 *)(puVar11 + -0xeb8) = *(undefined8 *)(puVar11 + 0xae48);
                  *(undefined8 *)(puVar11 + -0xec0) = *(undefined8 *)(puVar11 + 0xae40);
                  uVar62 = *(undefined8 *)(puVar11 + -0xe88);
                  uVar70 = *(undefined8 *)(puVar11 + -0xe90);
                  uVar74 = *(undefined8 *)(puVar11 + -0xe80);
                  puVar53[0x10d] = *(undefined8 *)(puVar11 + -0xe78);
                  puVar53[0x10c] = uVar74;
                  uVar74 = *(undefined8 *)(puVar11 + -0xe70);
                  uVar65 = *(undefined8 *)(puVar11 + -0xe58);
                  uVar86 = *(undefined8 *)(puVar11 + -0xe60);
                  puVar53[0x10f] = *(undefined8 *)(puVar11 + -0xe68);
                  puVar53[0x10e] = uVar74;
                  puVar53[0x111] = uVar65;
                  puVar53[0x110] = uVar86;
                  uVar74 = *(undefined8 *)(puVar11 + -0xe50);
                  puVar53[0x113] = *(undefined8 *)(puVar11 + -0xe48);
                  puVar53[0x112] = uVar74;
                  uVar65 = *(undefined8 *)(puVar11 + -0xec8);
                  uVar86 = *(undefined8 *)(puVar11 + -0xed0);
                  uVar74 = *(undefined8 *)(puVar11 + -0xec0);
                  puVar53[0x105] = *(undefined8 *)(puVar11 + -0xeb8);
                  puVar53[0x104] = uVar74;
                  uVar74 = *(undefined8 *)(puVar11 + -0xeb0);
                  uVar72 = *(undefined8 *)(puVar11 + -0xe98);
                  uVar68 = *(undefined8 *)(puVar11 + -0xea0);
                  puVar53[0x107] = *(undefined8 *)(puVar11 + -0xea8);
                  puVar53[0x106] = uVar74;
                  puVar53[0x109] = uVar72;
                  puVar53[0x108] = uVar68;
                  puVar53[0x10b] = uVar62;
                  puVar53[0x10a] = uVar70;
                  *(undefined1 *)((long)puVar53 + 0xb51) = 0;
                  *(undefined4 *)(*(long *)(puVar11 + -0x1030) + 0x9a) = 0;
                  *(undefined2 *)((long)puVar53 + 0xb57) = 0;
                  *(undefined1 *)(puVar53 + 0x16a) = 1;
                  *(undefined1 *)((long)puVar53 + 0xaba) = 1;
                  puVar53[0x101] = pcVar19;
                  puVar53[0x103] = uVar65;
                  puVar53[0x102] = uVar86;
                  FUN_100e82fa0(pcVar64);
                  uVar20 = puVar53[0x101];
                  if (uVar20 == 0x8000000000000020) {
                    *(byte *)((long)puVar53 + 0xab5) = *(byte *)(puVar53 + 0x105) & 1;
                    *(undefined1 *)((long)puVar53 + 0xabb) = 1;
                    puVar53[0x115] = puVar53[0x103];
                    puVar53[0x114] = puVar53[0x102];
                    puVar53[0x116] = puVar53[0x104];
                    *(undefined1 *)((long)puVar53 + 0xab2) = 1;
                    puVar53[0x159] = puVar53[0x46] + 0x6f8;
                    puVar53[0x15a] = puVar53[0x46] + 0x1118;
                    *(undefined1 *)(puVar53 + 0x15d) = 0;
code_r0x000100599aa0:
                    pcVar22 = (code *)FUN_1005770d4(*(long *)(puVar11 + -0x1030) + 0xf,
                                                    *(undefined8 *)(puVar11 + -0x1028));
                    if (((uint)pcVar22 & 0xff) == 2) {
                      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                      uVar41 = 0x16;
                      goto LAB_100595774;
                    }
                    *(char *)((long)puVar53 + 0xab6) = (char)pcVar22;
                    FUN_100cce300(*(long *)(puVar11 + -0x1030) + 0xf);
                    uVar41 = 1;
                    if ((*(byte *)((long)puVar53 + 0xab5) & 1) == 0) {
                      uVar41 = *(undefined1 *)((long)puVar53 + 0xab6);
                    }
                    *(undefined1 *)((long)puVar53 + 0xab7) = uVar41;
                    lVar60 = puVar53[0x46];
                    lVar61 = *(long *)(puVar11 + -0x1030);
                    *(long *)(lVar61 + 0x17) = puVar53[0x47] + 0x10;
                    *(long *)(lVar61 + 0xf) = lVar60 + 0x10;
                    *(undefined1 *)(puVar53 + 0x15e) = 0;
code_r0x000100599af8:
                    pcVar19 = (code *)(puVar53 + 0x159);
                    pcVar22 = (code *)FUN_10058ebf0(puVar11 + -0xe40,pcVar19,
                                                    *(undefined8 *)(puVar11 + -0x1028));
                    if (*(long *)(puVar11 + -0xe40) == 2) {
                      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                      uVar41 = 0x17;
                      goto LAB_100595774;
                    }
                    uVar74 = *(undefined8 *)(puVar11 + -0xe20);
                    uVar62 = *(undefined8 *)(puVar11 + -0xe08);
                    uVar70 = *(undefined8 *)(puVar11 + -0xe10);
                    puVar53[0x11c] = *(undefined8 *)(puVar11 + -0xe18);
                    puVar53[0x11b] = uVar74;
                    puVar53[0x11e] = uVar62;
                    puVar53[0x11d] = uVar70;
                    uVar74 = *(undefined8 *)(puVar11 + -0xe00);
                    puVar53[0x120] = *(undefined8 *)(puVar11 + -0xdf8);
                    puVar53[0x11f] = uVar74;
                    uVar62 = *(undefined8 *)(puVar11 + -0xe40);
                    uVar70 = *(undefined8 *)(puVar11 + -0xe28);
                    uVar74 = *(undefined8 *)(puVar11 + -0xe30);
                    puVar53[0x118] = *(undefined8 *)(puVar11 + -0xe38);
                    puVar53[0x117] = uVar62;
                    puVar53[0x11a] = uVar70;
                    puVar53[0x119] = uVar74;
                    func_0x000100ca1dc8(pcVar19);
                    *(undefined1 *)(puVar53 + 0x157) = *(undefined1 *)((long)puVar53 + 0x901);
                    pcVar30 = (code *)(puVar53[0x46] + 0x10);
                    lVar61 = puVar53[0x47] + 0x10;
                    puVar53[0x159] = pcVar30;
                    puVar53[0x15a] = lVar61;
                    pcVar64 = (code *)(puVar53 + 0x16b);
                    *(undefined1 *)(puVar53 + 0x16b) = 0;
code_r0x000100599b64:
                    puVar53[0x15b] = lVar61;
                    puVar53[0x15c] = pcVar30 + 0x790;
                    *(undefined1 *)(puVar53 + 0x16a) = 0;
code_r0x000100599b74:
                    pcVar32 = (char *)FUN_100fd3e50(puVar53 + 0x15c,
                                                    *(undefined8 *)(puVar11 + -0x1028));
                    if (pcVar32 == (char *)0x0) {
                      *pcVar64 = (code)0x3;
                      pcVar22 = (code *)0x0;
                    }
                    else {
                      if (((*(char *)(puVar53 + 0x16a) == '\x03') &&
                          (*(char *)(puVar53 + 0x169) == '\x03')) &&
                         (*(char *)(puVar53 + 0x160) == '\x04')) {
                        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                                  (puVar53 + 0x161);
                        if (puVar53[0x162] != 0) {
                          (**(code **)(puVar53[0x162] + 0x18))(puVar53[0x163]);
                        }
                      }
                      auVar124 = __ZN10codex_core15context_manager7history14ContextManager20estimate_token_count17h07474dfadc0e1ab7E
                                           (pcVar32 + 0x4f0,puVar53[0x15b]);
                      if (*pcVar32 == '\0') {
                        *pcVar32 = '\x01';
                      }
                      else {
                        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                                  (pcVar32,auVar124._8_8_,1000000000);
                      }
                      pcVar22 = (code *)FUN_1060fa678(pcVar32,1,pcVar32);
                      *pcVar64 = (code)0x1;
                      if (auVar124._0_8_ != 2) {
                        puVar67 = puVar53 + 0x121;
                        *(undefined1 (*) [16])(puVar53 + 0x121) = auVar124;
                        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
                          if (1 < bRam000000010b62ab40 - 1) {
                            if (bRam000000010b62ab40 != 0) {
                              pcVar22 = (code *)__ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                                          (&
                                                  __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                                  );
                              puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                              if (((ulong)pcVar22 & 0xff) != 0) goto code_r0x00010059a034;
                            }
                            goto code_r0x000100599c2c;
                          }
code_r0x00010059a034:
                          pcVar22 = (code *)__ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                                      (
                                                  ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                                  );
                          if (((ulong)pcVar22 & 1) == 0) goto code_r0x000100599c2c;
                          *(undefined **)(puVar11 + 0xae30) = &UNK_108ca6591;
                          *(undefined8 *)(puVar11 + 0xae38) = 0x33;
                          lVar61 = puVar53[0x47];
                          *(long *)(puVar11 + 0xbc20) = lVar61 + 0x240;
                          *(undefined8 **)(puVar11 + 0xad00) = puVar67;
                          *(long *)(puVar11 + 0xb380) = *(long *)(lVar61 + 0x798) + 0x252c;
                          *(undefined8 **)(puVar11 + 0xb600) = puVar53 + 0x119;
                          *(undefined8 **)(puVar11 + 0xb730) = puVar53 + 0x11b;
                          *(undefined8 **)(puVar11 + 0xbe80) = puVar53 + 0x117;
                          *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xae30;
                          *(undefined **)(puVar11 + 0x6d78) = &UNK_10b208fd0;
                          *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xbc20;
                          *(undefined **)(puVar11 + 0x6d88) = &UNK_10b215b00;
                          *(undefined8 **)(puVar11 + 0x6d90) = puVar53 + 0x11d;
                          *(undefined **)(puVar11 + 0x6d98) = &UNK_10b217fe0;
                          *(undefined8 **)(puVar11 + 0x6da0) = puVar53 + 0x11e;
                          *(undefined **)(puVar11 + 0x6da8) = &UNK_10b217fe0;
                          *(undefined1 **)(puVar11 + 0x6db0) = puVar11 + 0xad00;
                          *(undefined **)(puVar11 + 0x6db8) = &UNK_10b218000;
                          *(undefined8 **)(puVar11 + 0x6dc0) = puVar53 + 0x11f;
                          *(undefined **)(puVar11 + 0x6dc8) = &UNK_10b217fe0;
                          *(undefined1 **)(puVar11 + 0x6dd0) = puVar11 + 0xb380;
                          *(undefined **)(puVar11 + 0x6dd8) = &UNK_10b218020;
                          *(undefined1 **)(puVar11 + 0x6de0) = puVar11 + 0xb600;
                          *(undefined **)(puVar11 + 0x6de8) = &UNK_10b218040;
                          *(undefined1 **)(puVar11 + 0x6df0) = puVar11 + 0xb730;
                          *(undefined **)(puVar11 + 0x6df8) = &UNK_10b218000;
                          *(undefined1 **)(puVar11 + 0x6e00) = puVar11 + 0xbe80;
                          *(undefined **)(puVar11 + 0x6e08) = &UNK_10b218000;
                          *(undefined8 **)(puVar11 + 0x6e10) = puVar53 + 0x120;
                          *(undefined **)(puVar11 + 0x6e18) = &UNK_10b216268;
                          *(undefined8 **)(puVar11 + 0x6e20) = puVar53 + 0x157;
                          *(undefined **)(puVar11 + 0x6e28) = &UNK_10b216268;
                          *(undefined1 **)(puVar11 + 0x6e30) = (undefined1 *)((long)puVar53 + 0xab5)
                          ;
                          *(undefined **)(puVar11 + 0x6e38) = &UNK_10b216268;
                          *(undefined1 **)(puVar11 + 0x6e40) = (undefined1 *)((long)puVar53 + 0xab6)
                          ;
                          *(undefined **)(puVar11 + 0x6e48) = &UNK_10b216268;
                          *(undefined1 **)(puVar11 + 0x6e50) = (undefined1 *)((long)puVar53 + 0xab7)
                          ;
                          *(undefined **)(puVar11 + 0x6e58) = &UNK_10b216268;
                          *(undefined8 *)(puVar11 + 0x3160) = 1;
                          *(undefined1 **)(puVar11 + 0x3168) = puVar11 + 0x6d70;
                          *(undefined8 *)(puVar11 + 0x3170) = 0xf;
                          *(long *)(puVar11 + 0x3178) =
                               ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                               + 0x30;
                          pcVar22 = (code *)__ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                                      (
                                                  ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                                  ,puVar11 + 0x3160);
                          lVar61 = 
                          ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                          ;
                          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                            uVar74 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                      + 0x20);
                            uVar70 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                      + 0x28);
                            *(undefined8 *)(puVar11 + -0xa80) = 5;
                            *(undefined8 *)(puVar11 + -0xa78) = uVar74;
                            *(undefined8 *)(puVar11 + -0xa70) = uVar70;
                            pcVar21 = pcRam000000010b634c20;
                            if (pcRam000000010b66fd20 != (code *)0x2) {
                              pcVar21 = (code *)&UNK_10b3c24c8;
                            }
                            pcVar39 = pcRam000000010b634c18;
                            if (pcRam000000010b66fd20 != (code *)0x2) {
                              pcVar39 = (code *)&UNK_109adfc03;
                            }
                            pcVar22 = (code *)(**(code **)(pcVar21 + 0x18))
                                                        (pcVar39,puVar11 + -0xa80);
                            if ((int)pcVar22 != 0) {
                              pcVar22 = (code *)__ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                                          (lVar61,pcVar39,pcVar21,puVar11 + -0xa80,
                                                           puVar11 + 0x3160);
                            }
                          }
                        }
                        else {
code_r0x000100599c2c:
                          lVar61 = 
                          ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                          ;
                          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                            uVar74 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                      + 0x20);
                            uVar70 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                      + 0x28);
                            *(undefined8 *)(puVar11 + -0xdf0) = 5;
                            *(undefined8 *)(puVar11 + -0xde8) = uVar74;
                            *(undefined8 *)(puVar11 + -0xde0) = uVar70;
                            pcVar21 = pcRam000000010b634c20;
                            if (pcRam000000010b66fd20 != (code *)0x2) {
                              pcVar21 = (code *)&UNK_10b3c24c8;
                            }
                            pcVar39 = pcRam000000010b634c18;
                            if (pcRam000000010b66fd20 != (code *)0x2) {
                              pcVar39 = (code *)&UNK_109adfc03;
                            }
                            pcVar22 = (code *)(**(code **)(pcVar21 + 0x18))
                                                        (pcVar39,puVar11 + -0xdf0);
                            if ((int)pcVar22 != 0) {
                              *(undefined **)(puVar11 + 0xb730) = &UNK_108ca6591;
                              *(undefined8 *)(puVar11 + 0xb738) = 0x33;
                              lVar60 = puVar53[0x47];
                              *(long *)(puVar11 + 0xaaa0) = lVar60 + 0x240;
                              *(undefined8 **)(puVar11 + 0xb120) = puVar67;
                              *(long *)(puVar11 + 0xbc20) = *(long *)(lVar60 + 0x798) + 0x252c;
                              *(undefined8 **)(puVar11 + 0xad00) = puVar53 + 0x119;
                              *(undefined8 **)(puVar11 + 0xb380) = puVar53 + 0x11b;
                              *(undefined8 **)(puVar11 + 0xb600) = puVar53 + 0x117;
                              *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xb730;
                              *(undefined **)(puVar11 + 0x6d78) = &UNK_10b208fd0;
                              *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + 0xaaa0;
                              *(undefined **)(puVar11 + 0x6d88) = &UNK_10b215b00;
                              *(undefined8 **)(puVar11 + 0x6d90) = puVar53 + 0x11d;
                              *(undefined **)(puVar11 + 0x6d98) = &UNK_10b217fe0;
                              *(undefined8 **)(puVar11 + 0x6da0) = puVar53 + 0x11e;
                              *(undefined **)(puVar11 + 0x6da8) = &UNK_10b217fe0;
                              *(undefined1 **)(puVar11 + 0x6db0) = puVar11 + 0xb120;
                              *(undefined **)(puVar11 + 0x6db8) = &UNK_10b218000;
                              *(undefined8 **)(puVar11 + 0x6dc0) = puVar53 + 0x11f;
                              *(undefined **)(puVar11 + 0x6dc8) = &UNK_10b217fe0;
                              *(undefined1 **)(puVar11 + 0x6dd0) = puVar11 + 0xbc20;
                              *(undefined **)(puVar11 + 0x6dd8) = &UNK_10b218020;
                              *(undefined1 **)(puVar11 + 0x6de0) = puVar11 + 0xad00;
                              *(undefined **)(puVar11 + 0x6de8) = &UNK_10b218040;
                              *(undefined1 **)(puVar11 + 0x6df0) = puVar11 + 0xb380;
                              *(undefined **)(puVar11 + 0x6df8) = &UNK_10b218000;
                              *(undefined1 **)(puVar11 + 0x6e00) = puVar11 + 0xb600;
                              *(undefined **)(puVar11 + 0x6e08) = &UNK_10b218000;
                              *(undefined8 **)(puVar11 + 0x6e10) = puVar53 + 0x120;
                              *(undefined **)(puVar11 + 0x6e18) = &UNK_10b216268;
                              *(undefined8 **)(puVar11 + 0x6e20) = puVar53 + 0x157;
                              *(undefined **)(puVar11 + 0x6e28) = &UNK_10b216268;
                              *(undefined1 **)(puVar11 + 0x6e30) =
                                   (undefined1 *)((long)puVar53 + 0xab5);
                              *(undefined **)(puVar11 + 0x6e38) = &UNK_10b216268;
                              *(undefined1 **)(puVar11 + 0x6e40) =
                                   (undefined1 *)((long)puVar53 + 0xab6);
                              *(undefined **)(puVar11 + 0x6e48) = &UNK_10b216268;
                              *(undefined1 **)(puVar11 + 0x6e50) =
                                   (undefined1 *)((long)puVar53 + 0xab7);
                              *(undefined **)(puVar11 + 0x6e58) = &UNK_10b216268;
                              *(undefined8 *)(puVar11 + -0xa80) = 1;
                              *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x6d70;
                              *(undefined8 *)(puVar11 + -0xa70) = 0xf;
                              *(long *)(puVar11 + -0xa68) =
                                   ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h41bf2af58cc1afe1E
                                   + 0x30;
                              *(undefined8 *)(puVar11 + 0x3198) = *(undefined8 *)(puVar11 + -0xde8);
                              *(undefined8 *)(puVar11 + 0x3190) = *(undefined8 *)(puVar11 + -0xdf0);
                              *(undefined8 *)(puVar11 + 0x31a0) = *(undefined8 *)(puVar11 + -0xde0);
                              lVar60 = *(long *)(lVar61 + 0x60);
                              uVar70 = *(undefined8 *)(lVar61 + 0x68);
                              lVar66 = *(long *)(lVar61 + 0x50);
                              uVar62 = *(undefined8 *)(lVar61 + 0x58);
                              uVar74 = 1;
                              if (lVar66 == 0) {
                                uVar74 = 2;
                              }
                              uVar50 = *(undefined4 *)(lVar61 + 8);
                              uVar51 = *(undefined4 *)(lVar61 + 0xc);
                              *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + -0xa80;
                              puVar11[0xbe88] = 1;
                              *(undefined1 **)(puVar11 + 0xae30) = puVar11 + 0xbe80;
                              *(undefined **)(puVar11 + 0xae38) = &DAT_1061c2098;
                              uVar86 = 1;
                              if (lVar60 == 0) {
                                uVar86 = 2;
                              }
                              *(char **)(puVar11 + 0x31b0) = s__108b39f4f;
                              *(undefined1 **)(puVar11 + 0x31b8) = puVar11 + 0xae30;
                              *(undefined8 *)(puVar11 + 0x3160) = uVar74;
                              *(long *)(puVar11 + 0x3168) = lVar66;
                              *(undefined8 *)(puVar11 + 0x3170) = uVar62;
                              *(undefined8 *)(puVar11 + 0x3178) = uVar86;
                              *(long *)(puVar11 + 0x3180) = lVar60;
                              *(undefined8 *)(puVar11 + 0x3188) = uVar70;
                              *(undefined4 *)(puVar11 + 0x31a8) = uVar50;
                              *(undefined4 *)(puVar11 + 0x31ac) = uVar51;
                              pcVar22 = (code *)(**(code **)(pcVar21 + 0x20))
                                                          (pcVar39,puVar11 + 0x3160);
                            }
                          }
                        }
                        if ((*(byte *)(puVar53 + 0x157) & 1) != 0) {
                          if ((*(byte *)((long)puVar53 + 0xab7) & 1) == 0)
                          goto code_r0x00010059a364;
                          puVar53[0x159] = puVar53 + 0x46;
                          puVar53[0x15a] = puVar53 + 0x47;
                          puVar53[0x15b] = puVar53 + 0x4d;
                          *(undefined4 *)(puVar53 + 0x15c) = 0x20100;
code_r0x00010059a2d4:
                          plVar57 = puVar53 + 0x159;
                          pcVar22 = (code *)FUN_10057da14(puVar11 + -0xdd8,plVar57,
                                                          *(undefined8 *)(puVar11 + -0x1028));
                          if (*(long *)(puVar11 + -0xdd8) == -0x7fffffffffffffdf) {
                            **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                            uVar41 = 0x19;
                            goto LAB_100595774;
                          }
                          plVar58 = puVar53 + 0x123;
                          puVar53[0x135] = *(undefined8 *)(puVar11 + -0xd48);
                          uVar74 = *(undefined8 *)(puVar11 + -0xd78);
                          uVar62 = *(undefined8 *)(puVar11 + -0xd60);
                          uVar70 = *(undefined8 *)(puVar11 + -0xd68);
                          puVar53[0x130] = *(undefined8 *)(puVar11 + -0xd70);
                          puVar53[0x12f] = uVar74;
                          puVar53[0x132] = uVar62;
                          puVar53[0x131] = uVar70;
                          uVar74 = *(undefined8 *)(puVar11 + -0xd58);
                          puVar53[0x134] = *(undefined8 *)(puVar11 + -0xd50);
                          puVar53[0x133] = uVar74;
                          uVar74 = *(undefined8 *)(puVar11 + -0xdb8);
                          uVar62 = *(undefined8 *)(puVar11 + -0xda0);
                          uVar70 = *(undefined8 *)(puVar11 + -0xda8);
                          puVar53[0x128] = *(undefined8 *)(puVar11 + -0xdb0);
                          puVar53[0x127] = uVar74;
                          puVar53[0x12a] = uVar62;
                          puVar53[0x129] = uVar70;
                          uVar74 = *(undefined8 *)(puVar11 + -0xd98);
                          uVar62 = *(undefined8 *)(puVar11 + -0xd80);
                          uVar70 = *(undefined8 *)(puVar11 + -0xd88);
                          puVar53[300] = *(undefined8 *)(puVar11 + -0xd90);
                          puVar53[299] = uVar74;
                          puVar53[0x12e] = uVar62;
                          puVar53[0x12d] = uVar70;
                          lVar61 = *(long *)(puVar11 + -0xdd8);
                          uVar70 = *(undefined8 *)(puVar11 + -0xdc0);
                          uVar74 = *(undefined8 *)(puVar11 + -0xdc8);
                          puVar53[0x124] = *(undefined8 *)(puVar11 + -0xdd0);
                          *plVar58 = lVar61;
                          puVar53[0x126] = uVar70;
                          puVar53[0x125] = uVar74;
                          cVar16 = *(char *)(puVar53 + 0x15c);
                          if (cVar16 == '\x05') {
                            func_0x000100e8b4b8(puVar53 + 0x15d);
                          }
                          else if (cVar16 == '\x04') {
                            func_0x000100ccde68(puVar53 + 0x15d);
                          }
                          else if (cVar16 == '\x03') {
                            func_0x000100cd84bc(puVar53 + 0x15d);
                          }
                          if (*plVar58 == -0x7fffffffffffffe0) {
                            if ((*(byte *)(puVar53 + 0x124) & 1) != 0) {
                              __ZN10codex_core6client18ModelClientSession23reset_websocket_session17hefe018869918ed02E
                                        (puVar53 + 0x4d);
                            }
                            *(byte *)((long)puVar53 + 0xab2) = *(byte *)((long)puVar53 + 0xab5) ^ 1;
code_r0x00010059a8b0:
                            bVar27 = *(byte *)((long)puVar53 + 0xabb);
joined_r0x00010059a8b4:
                            if ((((bVar27 & 1) != 0) && (puVar53[0x114] != -0x8000000000000000)) &&
                               (puVar53[0x114] != 0)) {
                              _free(puVar53[0x115]);
                            }
                            *(undefined1 *)((long)puVar53 + 0xabb) = 0;
                            lVar61 = puVar53[0x101];
                            goto joined_r0x00010059be14;
                          }
                          puVar53[0x166] = puVar53[0x130];
                          puVar53[0x165] = puVar53[0x12f];
                          puVar53[0x168] = puVar53[0x132];
                          puVar53[0x167] = puVar53[0x131];
                          puVar53[0x16a] = puVar53[0x134];
                          puVar53[0x169] = puVar53[0x133];
                          puVar53[0x16b] = puVar53[0x135];
                          puVar53[0x15e] = puVar53[0x128];
                          puVar53[0x15d] = puVar53[0x127];
                          puVar53[0x160] = puVar53[0x12a];
                          puVar53[0x15f] = puVar53[0x129];
                          puVar53[0x162] = puVar53[300];
                          puVar53[0x161] = puVar53[299];
                          puVar53[0x164] = puVar53[0x12e];
                          puVar53[0x163] = puVar53[0x12d];
                          puVar53[0x15a] = puVar53[0x124];
                          *plVar57 = *plVar58;
                          puVar53[0x15c] = puVar53[0x126];
                          puVar53[0x15b] = puVar53[0x125];
                          cVar16 = __ZN14codex_protocol5error8CodexErr23to_codex_protocol_error17h3ce3e31048761f00E
                                             (plVar57);
                          if (cVar16 != '\x01') goto LAB_100597300;
                          *(long *)(puVar11 + 0x6d78) = puVar53[0x47] + 0x10;
                          *(undefined8 *)(puVar11 + 0x6d70) = 8;
                          auVar124 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                                               (puVar53 + 0x46,puVar11 + 0x6d70);
                          *(undefined1 (*) [16])(puVar53 + 0x16c) = auVar124;
                          goto code_r0x000100590ee0;
                        }
                        if ((*(byte *)((long)puVar53 + 0xab7) & 1) != 0) goto code_r0x00010059a8b0;
code_r0x00010059a364:
                        *(undefined1 *)((long)puVar53 + 0xabb) = 0;
                        uVar74 = puVar53[0x114];
                        *(undefined8 *)(puVar11 + 0x6d78) = puVar53[0x115];
                        *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
                        *(undefined8 *)(puVar11 + 0x6d80) = puVar53[0x116];
                        lVar61 = -0x8000000000000000;
                        if ((puVar53[0xc1] != -0x8000000000000000) && (puVar53[0xc1] != 0)) {
                          pcVar22 = (code *)_free(puVar53[0xc2]);
                        }
                        *(undefined1 *)(puVar53 + 0x158) = 1;
                        uVar74 = *(undefined8 *)(puVar11 + 0x6d70);
                        puVar53[0xc2] = *(undefined8 *)(puVar11 + 0x6d78);
                        puVar53[0xc1] = uVar74;
                        puVar53[0xc3] = *(undefined8 *)(puVar11 + 0x6d80);
                        uVar41 = *(undefined1 *)((long)puVar53 + 0xab1);
                        if (puVar53[0xc1] != -0x8000000000000000) {
                          uVar74 = puVar53[0xc2];
                          lVar61 = puVar53[0xc3];
                          lVar60 = 1;
                          if ((lVar61 != 0) && (lVar60 = _malloc(lVar61), lVar60 == 0)) {
                            FUN_107c03c64(1,lVar61);
                            goto code_r0x0001005975c0;
                          }
                          *(long *)(puVar11 + -0x1090) = lVar60;
                          pcVar22 = (code *)_memcpy(lVar60,uVar74,lVar61);
                          *(long *)(puVar11 + -0x1098) = lVar61;
                        }
                        plVar57 = puVar53 + 0x47;
                        puVar53[0x159] = lVar61;
                        plVar58 = puVar53 + 0x46;
                        unaff_x25 = (code *)(puVar53 + 0x159);
                        uVar74 = *(undefined8 *)(puVar11 + -0x1098);
                        *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(puVar11 + -0x1090);
                        *(undefined8 *)(pcVar19 + 0x10) = uVar74;
                        puVar53[0x15c] = plVar58;
                        puVar53[0x15d] = plVar57;
                        *(undefined1 *)(puVar53 + 0x196) = uVar41;
                        *(undefined1 **)(puVar11 + -0x1088) = (undefined1 *)((long)puVar53 + 0xcb1);
                        *(undefined1 *)((long)puVar53 + 0xcb1) = 0;
code_r0x00010059a420:
                        *(undefined4 *)(*(long *)(puVar11 + -0x1030) + 0x1fa) = 0x100;
                        puVar53[0x15e] = plVar58;
                        puVar53[0x15f] = plVar57;
                        *(undefined1 *)((long)puVar53 + 0xcb2) = uVar41;
                        uVar74 = *(undefined8 *)unaff_x25;
                        puVar53[0x161] = *(undefined8 *)(unaff_x25 + 8);
                        puVar53[0x160] = uVar74;
                        puVar53[0x162] = *(undefined8 *)(unaff_x25 + 0x10);
                        lVar61 = *plVar57;
                        if (*(ulong *)(lVar61 + 0x6a0) < 0x8000000000000006) {
                          if (*(ulong *)(lVar61 + 0x6a0) < 0x8000000000000001) {
                            puVar53[0x163] = lVar61 + 0x6e8;
                            if (*(long *)(lVar61 + 0x6d0) == -0x8000000000000000) {
code_r0x00010059a918:
                              lVar60 = 7;
                              puVar26 = (undefined4 *)_malloc(7);
                              if (puVar26 == (undefined4 *)0x0) {
code_r0x00010059d2fc:
                                *(code **)(puVar11 + -0x1058) = unaff_x25;
                                FUN_107c03c64(1,lVar60);
                                goto code_r0x0001005975c0;
                              }
                              *(undefined4 *)((long)puVar26 + 3) = 0x746c7561;
                              *puVar26 = 0x61666564;
                              lVar60 = 7;
                            }
                            else {
                              lVar60 = *(long *)(lVar61 + 0x6e0);
                              if (lVar60 == 0) {
                                puVar26 = (undefined4 *)0x1;
                              }
                              else {
                                uVar74 = *(undefined8 *)(lVar61 + 0x6d8);
                                puVar26 = (undefined4 *)_malloc(lVar60);
                                if (puVar26 == (undefined4 *)0x0) goto code_r0x00010059d2fc;
                                _memcpy(puVar26,uVar74,lVar60);
                                if (lVar60 == -0x8000000000000000) goto code_r0x00010059a918;
                              }
                            }
                            puVar53[0x164] = lVar60;
                            puVar53[0x165] = puVar26;
                            puVar53[0x166] = lVar60;
                            puVar53[0x197] = *plVar58 + 0x10;
                            *(undefined1 *)(puVar53 + 0x199) = 0;
code_r0x00010059a9a8:
                            pcVar22 = (code *)func_0x0001005a7878(puVar11 + 0xaaa0,puVar53 + 0x197,
                                                                  *(undefined8 *)(puVar11 + -0x1028)
                                                                 );
                            if (*(long *)(puVar11 + 0xaaa0) == -0x7fffffffffffffff) {
                              uVar41 = 3;
                            }
                            else {
                              puVar53[0x169] = *(undefined8 *)(puVar11 + 0xaab0);
                              uVar74 = *(undefined8 *)(puVar11 + 0xaaa0);
                              puVar53[0x168] = *(undefined8 *)(puVar11 + 0xaaa8);
                              puVar53[0x167] = uVar74;
                              FUN_100d3e874(puVar53 + 0x197);
                              lVar60 = *(long *)(*(long *)puVar53[0x15e] + 0x3f0);
                              lVar61 = *(long *)(*(long *)puVar53[0x15e] + 0x3f8);
                              lVar66 = *(long *)(lVar61 + 0x10);
                              uVar74 = *(undefined8 *)puVar53[0x163];
                              *(undefined8 *)(puVar11 + 0x6d7a) = ((undefined8 *)puVar53[0x163])[1];
                              *(undefined8 *)(puVar11 + 0x6d72) = uVar74;
                              *(undefined2 *)(puVar11 + 0x6d70) = 1;
                              auVar124 = (**(code **)(lVar61 + 0x68))
                                                   (lVar60 + (lVar66 - 1U & 0xfffffffffffffff0) +
                                                    0x10,puVar11 + 0x6d70);
                              *(undefined1 (*) [16])(puVar53 + 0x197) = auVar124;
code_r0x00010059aa40:
                              pcVar19 = *(code **)(auVar124._8_8_ + 0x18);
                              *(code **)(puVar11 + -0x1058) = unaff_x25;
                              pcVar22 = (code *)(*pcVar19)(puVar11 + 0x6d70,auVar124._0_8_,
                                                           *(undefined8 *)(puVar11 + -0x1028));
                              pcVar19 = *(code **)(puVar11 + 0x6d70);
code_r0x00010059aa5c:
                              if (pcVar19 != (code *)0x3) {
                                *(undefined8 *)(puVar11 + 0xad08) =
                                     *(undefined8 *)(puVar11 + 0x6d80);
                                *(undefined8 *)(puVar11 + 0xad00) =
                                     *(undefined8 *)(puVar11 + 0x6d78);
                                *(undefined8 *)(puVar11 + 0xad18) =
                                     *(undefined8 *)(puVar11 + 0x6d90);
                                *(undefined8 *)(puVar11 + 0xad10) =
                                     *(undefined8 *)(puVar11 + 0x6d88);
                                _memcpy(puVar11 + 0x3160,puVar11 + 0x6d98,0x250);
                                uVar74 = puVar53[0x197];
                                puVar67 = (undefined8 *)puVar53[0x198];
                                pcVar21 = (code *)*puVar67;
                                if (pcVar21 != (code *)0x0) {
                                  (*pcVar21)(uVar74);
                                }
                                if (puVar67[1] != 0) {
                                  _free(uVar74);
                                }
                                if (pcVar19 == (code *)0x2) {
                                  uVar38 = *(ulong *)(puVar11 + 0xad08);
                                  uVar20 = *(ulong *)(puVar11 + 0xad00);
code_r0x00010059aacc:
                                  *(ulong *)(puVar11 + 0xb388) = uVar38;
                                  *(ulong *)(puVar11 + 0xb380) = uVar20;
                                  *(undefined8 *)(puVar11 + 0xb398) =
                                       *(undefined8 *)(puVar11 + 0xad18);
                                  *(undefined8 *)(puVar11 + 0xb390) =
                                       *(undefined8 *)(puVar11 + 0xad10);
                                  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4
                                     ) {
                                    pcVar21 = (code *)&
                                                  __ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                    ;
                                    if (1 < bRam000000010b629a20 - 1) {
                                      if (bRam000000010b629a20 != 0) {
                                        cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                                           (&
                                                  __ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                                  );
                                        puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                                        if (cVar16 != '\0') goto code_r0x00010059ab04;
                                      }
                                      goto code_r0x00010059afe8;
                                    }
code_r0x00010059ab04:
                                    uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                                       (
                                                  ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                                  );
                                    if ((uVar20 & 1) == 0) goto code_r0x00010059afe8;
                                    pcVar39 = ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                              + 0x30;
                                    *(undefined **)(puVar11 + -0xcc0) = &UNK_108ca2b77;
                                    *(undefined8 *)(puVar11 + -0xcb8) = 0x75;
                                    *(undefined8 **)(puVar11 + 0xb990) = puVar53 + 0x163;
                                    *(undefined1 **)(puVar11 + 0xbb50) = puVar11 + 0xb380;
                                    pcVar30 = (code *)(puVar11 + -0xcc0);
                                    pcVar42 = (code *)&UNK_10b208fd0;
                                    pcVar43 = (code *)(puVar11 + 0xae30);
                                    pcVar22 = 
                                    ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                    ;
code_r0x00010059ab58:
                                    *(code **)(pcVar43 + 0x900) = pcVar30;
                                    *(code **)(pcVar43 + 0x908) = pcVar42;
                                    *(undefined1 **)(pcVar43 + 0x910) = puVar11 + 0xb990;
                                    *(undefined **)(pcVar43 + 0x918) = &UNK_10b2159e8;
                                    *(undefined1 **)(pcVar43 + 0x920) = puVar11 + 0xbb50;
                                    *(undefined **)(pcVar43 + 0x928) = &UNK_10b215a08;
                                    pcVar43 = (code *)(puVar11 + 0xb540);
                                    *(undefined8 *)(puVar11 + 0xb600) = 1;
                                    *(undefined1 **)(puVar11 + 0xb608) = puVar11 + 0xb730;
                                    pcVar30 = (code *)0x3;
code_r0x00010059aba4:
                                    *(code **)(pcVar43 + 0xd0) = pcVar30;
                                    *(code **)(pcVar43 + 0xd8) = pcVar39;
                                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                              (pcVar22,puVar11 + 0xb600);
                                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE
                                         == '\0') &&
                                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                                      lVar61 = *(long *)pcVar21;
                                      uVar74 = *(undefined8 *)(lVar61 + 0x20);
                                      uVar70 = *(undefined8 *)(lVar61 + 0x28);
                                      *(undefined8 *)(puVar11 + 0xbc20) = 2;
                                      *(undefined8 *)(puVar11 + 0xbc28) = uVar74;
                                      *(undefined8 *)(puVar11 + 0xbc30) = uVar70;
                                      pcVar19 = pcRam000000010b634c20;
                                      if (pcRam000000010b66fd20 != (code *)0x2) {
                                        pcVar19 = (code *)&UNK_10b3c24c8;
                                      }
                                      pcVar21 = pcRam000000010b634c18;
                                      if (pcRam000000010b66fd20 != (code *)0x2) {
                                        pcVar21 = (code *)&UNK_109adfc03;
                                      }
                                      iVar17 = (**(code **)(pcVar19 + 0x18))
                                                         (pcVar21,puVar11 + 0xbc20);
                                      if (iVar17 != 0) {
                                        lVar60 = *(long *)(lVar61 + 0x60);
                                        uVar70 = *(undefined8 *)(lVar61 + 0x68);
                                        lVar66 = *(long *)(lVar61 + 0x50);
                                        uVar62 = *(undefined8 *)(lVar61 + 0x58);
                                        uVar74 = 1;
                                        if (lVar66 == 0) {
                                          uVar74 = 2;
                                        }
                                        uVar50 = *(undefined4 *)(lVar61 + 8);
                                        uVar51 = *(undefined4 *)(lVar61 + 0xc);
                                        *(undefined1 **)(puVar11 + -0xb10) = puVar11 + 0xb600;
                                        puVar11[-0xb08] = 1;
                                        *(undefined1 **)(puVar11 + 0xb4b0) = puVar11 + -0xb10;
                                        *(undefined **)(puVar11 + 0xb4b8) = &DAT_1061c2098;
                                        uVar86 = 1;
                                        if (lVar60 == 0) {
                                          uVar86 = 2;
                                        }
                                        *(undefined8 *)(puVar11 + 0x6da8) =
                                             *(undefined8 *)(puVar11 + 0xbc28);
                                        *(undefined8 *)(puVar11 + 0x6da0) =
                                             *(undefined8 *)(puVar11 + 0xbc20);
                                        *(undefined8 *)(puVar11 + 0x6db0) =
                                             *(undefined8 *)(puVar11 + 0xbc30);
                                        *(char **)(puVar11 + 0x6dc0) = s__108b39f4f;
                                        *(undefined1 **)(puVar11 + 0x6dc8) = puVar11 + 0xb4b0;
                                        *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
                                        *(long *)(puVar11 + 0x6d78) = lVar66;
                                        *(undefined8 *)(puVar11 + 0x6d80) = uVar62;
                                        *(undefined8 *)(puVar11 + 0x6d88) = uVar86;
                                        *(long *)(puVar11 + 0x6d90) = lVar60;
                                        *(undefined8 *)(puVar11 + 0x6d98) = uVar70;
                                        *(undefined4 *)(puVar11 + 0x6db8) = uVar50;
                                        *(undefined4 *)(puVar11 + 0x6dbc) = uVar51;
                                        (**(code **)(pcVar19 + 0x20))(pcVar21,puVar11 + 0x6d70);
                                      }
                                    }
                                  }
                                  else {
code_r0x00010059afe8:
                                    pcVar19 = 
                                    ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                    ;
                                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE
                                         == '\0') &&
                                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                                      uVar74 = *(undefined8 *)
                                                (
                                                ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                                + 0x20);
                                      uVar70 = *(undefined8 *)
                                                (
                                                ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                                + 0x28);
                                      *(undefined8 *)(puVar11 + 0xb120) = 2;
                                      *(undefined8 *)(puVar11 + 0xb128) = uVar74;
                                      *(undefined8 *)(puVar11 + 0xb130) = uVar70;
                                      pcVar21 = pcRam000000010b634c20;
                                      if (pcRam000000010b66fd20 != (code *)0x2) {
                                        pcVar21 = (code *)&UNK_10b3c24c8;
                                      }
                                      pcVar22 = pcRam000000010b634c18;
                                      if (pcRam000000010b66fd20 != (code *)0x2) {
                                        pcVar22 = (code *)&UNK_109adfc03;
                                      }
                                      iVar17 = (**(code **)(pcVar21 + 0x18))
                                                         (pcVar22,puVar11 + 0xb120);
                                      if (iVar17 != 0) {
                                        *(undefined **)(puVar11 + 0xbc20) = &UNK_108ca2b77;
                                        *(undefined8 *)(puVar11 + 0xbc28) = 0x75;
                                        *(undefined8 **)(puVar11 + -0xb10) = puVar53 + 0x163;
                                        *(undefined1 **)(puVar11 + 0xb4b0) = puVar11 + 0xb380;
                                        *(undefined1 **)(puVar11 + 0x6d70) = puVar11 + 0xbc20;
                                        *(undefined **)(puVar11 + 0x6d78) = &UNK_10b208fd0;
                                        *(undefined1 **)(puVar11 + 0x6d80) = puVar11 + -0xb10;
                                        *(undefined **)(puVar11 + 0x6d88) = &UNK_10b2159e8;
                                        *(undefined1 **)(puVar11 + 0x6d90) = puVar11 + 0xb4b0;
                                        *(undefined **)(puVar11 + 0x6d98) = &UNK_10b215a08;
                                        *(undefined8 *)(puVar11 + 0xb730) = 1;
                                        *(undefined1 **)(puVar11 + 0xb738) = puVar11 + 0x6d70;
                                        *(undefined8 *)(puVar11 + 0xb740) = 3;
                                        *(code **)(puVar11 + 0xb748) =
                                             ___ZN10codex_core12hook_runtime19run_turn_stop_hooks28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf4a0ec81da0d7b4aE
                                             + 0x30;
                                        *(undefined8 *)(puVar11 + 0xb608) =
                                             *(undefined8 *)(puVar11 + 0xb128);
                                        *(undefined8 *)(puVar11 + 0xb600) =
                                             *(undefined8 *)(puVar11 + 0xb120);
                                        *(undefined8 *)(puVar11 + 0xb610) =
                                             *(undefined8 *)(puVar11 + 0xb130);
                                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                                  (pcVar19,pcVar22,pcVar21,puVar11 + 0xb600,
                                                   puVar11 + 0xb730);
                                      }
                                    }
                                  }
                                  bVar27 = puVar11[0xb380];
                                  if (bVar27 < 2) {
                                    if (bVar27 != 0) {
code_r0x00010059b18c:
                                      if (*(long *)(puVar11 + 0xb388) != 0) {
                                        _free(*(undefined8 *)(puVar11 + 0xb390));
                                      }
                                    }
                                  }
                                  else if ((bVar27 == 2) || (bVar27 != 3))
                                  goto code_r0x00010059b18c;
                                  *(undefined8 *)(puVar11 + -0x1060) = 0x8000000000000000;
                                }
                                else {
                                  *(code **)(puVar11 + 0x6d70) = pcVar19;
                                  *(undefined8 *)(puVar11 + 0x6d80) =
                                       *(undefined8 *)(puVar11 + 0xad08);
                                  *(undefined8 *)(puVar11 + 0x6d78) =
                                       *(undefined8 *)(puVar11 + 0xad00);
                                  *(undefined8 *)(puVar11 + 0x6d90) =
                                       *(undefined8 *)(puVar11 + 0xad18);
                                  *(undefined8 *)(puVar11 + 0x6d88) =
                                       *(undefined8 *)(puVar11 + 0xad10);
                                  _memcpy(puVar11 + 0x6d98,puVar11 + 0x3160,0x250);
                                  *(undefined8 *)(puVar11 + -0x1080) =
                                       *(undefined8 *)(puVar11 + 0x6e08);
                                  *(undefined8 *)(puVar11 + -0x1070) =
                                       *(undefined8 *)(puVar11 + 0x6e10);
                                  *(undefined8 *)(puVar11 + -0x1060) =
                                       *(undefined8 *)(puVar11 + 0x6e00);
                                  if (*(long *)(puVar11 + 0x6da0) != 0) {
                                    _free(*(undefined8 *)(puVar11 + 0x6da8));
                                  }
                                  if ((*(long *)(puVar11 + 0x6e18) != -0x8000000000000000) &&
                                     (*(long *)(puVar11 + 0x6e18) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6e20));
                                  }
                                  if (*(long *)(puVar11 + 0x6db8) != 0) {
                                    _free(*(undefined8 *)(puVar11 + 0x6dc0));
                                  }
                                  if ((*(long *)(puVar11 + 0x6e30) != -0x8000000000000000) &&
                                     (*(long *)(puVar11 + 0x6e30) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6e38));
                                  }
                                  if (*(long *)(puVar11 + 0x6dd0) != 0) {
                                    _free(*(undefined8 *)(puVar11 + 0x6dd8));
                                  }
                                  if (*(long *)(puVar11 + 0x6de8) != 0) {
                                    _free(*(undefined8 *)(puVar11 + 0x6df0));
                                  }
                                  lVar61 = *(ulong *)(puVar11 + 0x6f38) + 0x7ffffffffffffffa;
                                  if (*(ulong *)(puVar11 + 0x6f38) < 0x8000000000000006) {
                                    lVar61 = 6;
                                  }
                                  if (lVar61 == 6) {
                                    FUN_100e0fca4(puVar11 + 0x6f38);
                                  }
                                  else if ((lVar61 == 4) && (*(long *)(puVar11 + 0x6f40) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6f48));
                                  }
                                  if ((*(long *)(puVar11 + 0x6e48) != -0x8000000000000000) &&
                                     (*(long *)(puVar11 + 0x6e48) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6e50));
                                  }
                                  if ((*(long *)(puVar11 + 0x6e60) != -0x8000000000000000) &&
                                     (*(long *)(puVar11 + 0x6e60) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6e68));
                                  }
                                  if ((*(long *)(puVar11 + 0x6e78) != -0x8000000000000000) &&
                                     (*(long *)(puVar11 + 0x6e78) != 0)) {
                                    _free(*(undefined8 *)(puVar11 + 0x6e80));
                                  }
                                  if (*(ulong *)(puVar11 + 0x6ed0) != 0x8000000000000001) {
                                    if ((*(ulong *)(puVar11 + 0x6ed0) & 0x7fffffffffffffff) != 0) {
                                      _free(*(undefined8 *)(puVar11 + 0x6ed8));
                                    }
                                    if ((*(long *)(puVar11 + 0x6ee8) != -0x8000000000000000) &&
                                       (*(long *)(puVar11 + 0x6ee8) != 0)) {
                                      _free(*(undefined8 *)(puVar11 + 0x6ef0));
                                    }
                                    if ((*(long *)(puVar11 + 0x6f00) != -0x8000000000000000) &&
                                       (*(long *)(puVar11 + 0x6f00) != 0)) {
                                      _free(*(undefined8 *)(puVar11 + 0x6f08));
                                    }
                                  }
                                  lVar61 = *(long *)(puVar11 + 0x6f18);
                                  if (-0x7ffffffffffffffe < lVar61) {
                                    lVar66 = *(long *)(puVar11 + 0x6f20);
                                    lVar60 = *(long *)(puVar11 + 0x6f28);
                                    if (lVar60 != 0) {
                                      puVar67 = (undefined8 *)(lVar66 + 8);
                                      do {
                                        if (puVar67[-1] != 0) {
                                          _free(*puVar67);
                                        }
                                        puVar67 = puVar67 + 3;
                                        lVar60 = lVar60 + -1;
                                      } while (lVar60 != 0);
                                    }
                                    if (lVar61 != 0) {
                                      _free(lVar66);
                                    }
                                  }
                                  if (*(long *)(puVar11 + 0x6e90) == -0x8000000000000000 ||
                                      *(long *)(puVar11 + 0x6e90) == 0) {
                                    lVar61 = *(long *)(puVar11 + 0x6ea8);
                                  }
                                  else {
                                    _free(*(undefined8 *)(puVar11 + 0x6e98));
                                    lVar61 = *(long *)(puVar11 + 0x6ea8);
                                  }
                                  if (lVar61 != -0x8000000000000000) {
                                    lVar45 = *(long *)(puVar11 + 0x6eb0);
                                    lVar60 = *(long *)(puVar11 + 0x6eb8) + 1;
                                    lVar66 = lVar45;
                                    while (lVar60 = lVar60 + -1, lVar60 != 0) {
                                      FUN_100e068b8(lVar66);
                                      lVar66 = lVar66 + 0x1e0;
                                    }
                                    if (lVar61 != 0) {
                                      _free(lVar45);
                                    }
                                  }
                                }
                                uVar74 = *(undefined8 *)(*(long *)puVar53[0x15e] + 0x790);
                                *(undefined8 *)(puVar11 + 0xb388) =
                                     *(undefined8 *)(*(long *)puVar53[0x15e] + 0x798);
                                *(undefined8 *)(puVar11 + 0xb380) = uVar74;
                                *(undefined8 *)(puVar11 + 0xb600) = 0;
                                *(undefined8 *)(puVar11 + 0xb608) = 1;
                                *(undefined8 *)(puVar11 + 0xb610) = 0;
                                FUN_10624142c(puVar11 + 0xb730,puVar11 + 0xb380,0);
                                thunk_FUN_108855060(puVar11 + 0xb600,0,0x24,1,1);
                                lVar61 = *(long *)(puVar11 + 0xb610);
                                puVar67 = (undefined8 *)(*(long *)(puVar11 + 0xb608) + lVar61);
                                uVar74 = *(undefined8 *)(puVar11 + 0xb730);
                                puVar67[1] = *(undefined8 *)(puVar11 + 0xb738);
                                *puVar67 = uVar74;
                                uVar74 = *(undefined8 *)(puVar11 + 0xb740);
                                puVar67[3] = *(undefined8 *)(puVar11 + 0xb748);
                                puVar67[2] = uVar74;
                                *(undefined4 *)(puVar67 + 4) = *(undefined4 *)(puVar11 + 0xb750);
                                *(undefined8 *)(puVar11 + 0x6d78) =
                                     *(undefined8 *)(puVar11 + 0xb608);
                                *(undefined8 *)(puVar11 + 0x6d70) =
                                     *(undefined8 *)(puVar11 + 0xb600);
                                uVar74 = puVar53[0x166];
                                *(long *)(puVar11 + 0x6d80) = lVar61 + 0x24;
                                *(undefined8 *)(puVar11 + 0x6d98) = uVar74;
                                uVar74 = puVar53[0x164];
                                *(undefined8 *)(puVar11 + 0x6d90) = puVar53[0x165];
                                *(undefined8 *)(puVar11 + 0x6d88) = uVar74;
                                uVar62 = puVar53[0x168];
                                uVar70 = puVar53[0x167];
                                uVar74 = puVar53[0x169];
                                *(undefined8 *)(puVar11 + 0x6db0) = uVar74;
                                *(undefined8 *)(puVar11 + 0x6da8) = uVar62;
                                *(undefined8 *)(puVar11 + 0x6da0) = uVar70;
                                *(undefined8 *)(puVar11 + -0xa40) = uVar74;
                                *(undefined8 *)(puVar11 + -0xa48) =
                                     *(undefined8 *)(puVar11 + 0x6da8);
                                *(undefined8 *)(puVar11 + -0xa50) =
                                     *(undefined8 *)(puVar11 + 0x6da0);
                                *(undefined8 *)(puVar11 + -0xa58) =
                                     *(undefined8 *)(puVar11 + 0x6d98);
                                *(undefined8 *)(puVar11 + -0xa60) =
                                     *(undefined8 *)(puVar11 + 0x6d90);
                                *(undefined8 *)(puVar11 + -0xa78) =
                                     *(undefined8 *)(puVar11 + 0x6d78);
                                *(undefined8 *)(puVar11 + -0xa80) =
                                     *(undefined8 *)(puVar11 + 0x6d70);
                                *(undefined8 *)(puVar11 + -0xa68) =
                                     *(undefined8 *)(puVar11 + 0x6d88);
                                *(undefined8 *)(puVar11 + -0xa70) =
                                     *(undefined8 *)(puVar11 + 0x6d80);
                                goto code_r0x00010059b29c;
                              }
                              uVar41 = 4;
                            }
                            goto code_r0x00010059bfe0;
                          }
                          *(code **)(puVar11 + -0x1058) = unaff_x25;
                          if ((puVar53[0x160] != -0x8000000000000000) && (puVar53[0x160] != 0)) {
                            pcVar22 = (code *)_free(puVar53[0x161]);
                          }
                          lVar60 = 0;
                          uVar62 = 0;
                          uVar86 = 0;
                          uVar65 = 0;
                          uVar41 = 0;
                          uVar69 = 0;
                          *(undefined1 *)((long)puVar53 + 0xcb4) = 0;
                          uVar72 = 0x8000000000000000;
                          uVar68 = 8;
                          uVar70 = 8;
                          uVar74 = 0x8000000000000000;
code_r0x00010059bc90:
                          *(undefined8 *)(puVar11 + -0xd08) = *(undefined8 *)(puVar11 + -0xb98);
                          *(undefined8 *)(puVar11 + -0xd10) = *(undefined8 *)(puVar11 + -0xba0);
                          *(undefined8 *)(puVar11 + -0xd18) = *(undefined8 *)(puVar11 + -0xc28);
                          *(undefined8 *)(puVar11 + -0xd20) = *(undefined8 *)(puVar11 + -0xc30);
                          *(undefined4 *)(puVar11 + -0xd28) = *(undefined4 *)(puVar11 + 0xb050);
                          *(undefined2 *)(puVar11 + -0xd24) = *(undefined2 *)(puVar11 + 0xb054);
                          **(undefined1 **)(puVar11 + -0x1088) = 1;
                          if (lVar60 != -0x8000000000000000) {
                            puVar53[0x136] = lVar60;
                            puVar53[0x137] = uVar68;
                            puVar53[0x138] = uVar62;
                            puVar53[0x139] = uVar86;
                            puVar53[0x13a] = uVar70;
                            puVar53[0x13b] = uVar65;
                            puVar53[0x13c] = uVar72;
                            uVar70 = *(undefined8 *)(puVar11 + -0xd10);
                            puVar53[0x13e] = *(undefined8 *)(puVar11 + -0xd08);
                            puVar53[0x13d] = uVar70;
                            puVar53[0x13f] = uVar74;
                            uVar74 = *(undefined8 *)(puVar11 + -0xd20);
                            puVar53[0x141] = *(undefined8 *)(puVar11 + -0xd18);
                            puVar53[0x140] = uVar74;
                            *(undefined1 *)(puVar53 + 0x142) = uVar41;
                            *(undefined1 *)((long)puVar53 + 0xa11) = uVar69;
                            *(undefined2 *)((long)puVar53 + 0xa16) =
                                 *(undefined2 *)(puVar11 + -0xd24);
                            *(undefined4 *)((long)puVar53 + 0xa12) =
                                 *(undefined4 *)(puVar11 + -0xd28);
                            plVar57 = *(long **)(puVar11 + -0x1058);
                            FUN_100e7a7d4(plVar57);
                            if ((*(byte *)((long)puVar53 + 0xa11) & 1) == 0)
                            goto code_r0x00010059beb0;
                            __ZN14codex_protocol5items25build_hook_prompt_message17h7099e80f140203a9E
                                      (plVar57,puVar53[0x13a],puVar53[0x13b]);
                            if (*plVar57 != 0x11) {
                              lVar60 = plVar57[1];
                              lVar61 = *plVar57;
                              lVar45 = plVar57[3];
                              lVar66 = plVar57[2];
                              lVar23 = plVar57[4];
                              lVar34 = plVar57[7];
                              lVar71 = plVar57[6];
                              puVar53[0x176] = plVar57[5];
                              puVar53[0x175] = lVar23;
                              puVar53[0x178] = lVar34;
                              puVar53[0x177] = lVar71;
                              puVar53[0x172] = lVar60;
                              puVar53[0x171] = lVar61;
                              puVar53[0x174] = lVar45;
                              puVar53[0x173] = lVar66;
                              lVar60 = plVar57[9];
                              lVar61 = plVar57[8];
                              lVar45 = plVar57[0xb];
                              lVar66 = plVar57[10];
                              lVar23 = plVar57[0xc];
                              lVar34 = plVar57[0xf];
                              lVar71 = plVar57[0xe];
                              puVar53[0x17e] = plVar57[0xd];
                              puVar53[0x17d] = lVar23;
                              puVar53[0x180] = lVar34;
                              puVar53[0x17f] = lVar71;
                              puVar53[0x17a] = lVar60;
                              puVar53[0x179] = lVar61;
                              puVar53[0x17c] = lVar45;
                              puVar53[0x17b] = lVar66;
                              lVar60 = plVar57[0x11];
                              lVar61 = plVar57[0x10];
                              lVar45 = plVar57[0x13];
                              lVar66 = plVar57[0x12];
                              lVar23 = plVar57[0x14];
                              lVar34 = plVar57[0x17];
                              lVar71 = plVar57[0x16];
                              puVar53[0x186] = plVar57[0x15];
                              puVar53[0x185] = lVar23;
                              puVar53[0x188] = lVar34;
                              puVar53[0x187] = lVar71;
                              puVar53[0x182] = lVar60;
                              puVar53[0x181] = lVar61;
                              puVar53[0x184] = lVar45;
                              puVar53[0x183] = lVar66;
                              lVar61 = *(long *)(puVar11 + -0x1030);
                              lVar60 = puVar53[0x46];
                              *(long *)(lVar61 + 0x197) = puVar53[0x47] + 0x10;
                              *(long *)(lVar61 + 399) = lVar60 + 0x10;
                              puVar53[0x18b] = puVar53 + 0x171;
                              puVar53[0x18c] = 1;
                              *(undefined1 *)(puVar53 + 0x191) = 0;
code_r0x00010059bdac:
                              pcVar22 = (code *)FUN_1005af7fc(puVar53 + 0x189,
                                                              *(undefined8 *)(puVar11 + -0x1028));
                              if ((int)pcVar22 == 0) {
                                func_0x000100d50dec(puVar53 + 0x189);
                                *(undefined1 *)((long)puVar53 + 0xab1) = 1;
                                FUN_100e02a24(puVar53 + 0x171);
                                FUN_100e095b4(puVar53 + 0x136);
                                bVar27 = *(byte *)((long)puVar53 + 0xabb);
                                goto joined_r0x00010059a8b4;
                              }
                              **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                              uVar41 = 0x1c;
                              goto LAB_100595774;
                            }
                            uVar74 = puVar53[0x46];
                            *(undefined8 *)(puVar11 + -0x1038) = puVar53[0x47];
                            *(undefined8 *)(puVar11 + -0x1040) = uVar74;
                            puVar67 = (undefined8 *)_malloc(0x46);
                            if (puVar67 == (undefined8 *)0x0) {
                              FUN_107c03c64(1,0x46);
                              goto code_r0x0001005975c0;
                            }
                            lVar60 = *(long *)(puVar11 + -0x1038);
                            lVar61 = *(long *)(puVar11 + -0x1040);
                            puVar67[5] = 0x706d6f7270206120;
                            puVar67[4] = 0x74756f6874697720;
                            puVar67[7] = 0x2065687420676e69;
                            puVar67[6] = 0x726f6e6769203b74;
                            *(undefined8 *)((long)puVar67 + 0x3e) = 0x2e6b636f6c622065;
                            puVar67[1] = 0x736575716572206b;
                            *puVar67 = 0x6f6f6820706f7453;
                            puVar67[3] = 0x6e6f697461756e69;
                            puVar67[2] = 0x746e6f6320646574;
                            *(undefined4 *)(puVar53 + 0x159) = 1;
                            puVar53[0x15a] = 0x46;
                            puVar53[0x15b] = puVar67;
                            puVar53[0x15c] = 0x46;
                            puVar53[0x195] = lVar60 + 0x10;
                            puVar53[0x194] = lVar61 + 0x10;
                            *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x5b7) = 0;
                            goto code_r0x00010059be84;
                          }
                        }
                        else {
                          puVar53[0x197] = 0x8000000000000000;
                          puVar53[0x1a0] = *plVar58 + 0x10;
                          *(undefined1 *)(puVar53 + 0x1a2) = 0;
code_r0x00010059a4a8:
                          *(code **)(puVar11 + -0x1058) = unaff_x25;
                          pcVar22 = (code *)func_0x0001005a7878(puVar11 + 0x6d70,puVar53 + 0x1a0,
                                                                *(undefined8 *)(puVar11 + -0x1028));
                          *(long *)(puVar11 + -0x1060) = *(long *)(puVar11 + 0x6d70);
                          if (*(long *)(puVar11 + 0x6d70) == -0x7fffffffffffffff) {
                            uVar41 = 5;
                            goto code_r0x00010059bfe0;
                          }
                          *(undefined8 *)(puVar11 + -0x1080) = *(undefined8 *)(puVar11 + 0x6d78);
                          *(undefined8 *)(puVar11 + -0x1070) = *(undefined8 *)(puVar11 + 0x6d80);
                          FUN_100d3e874(puVar53 + 0x1a0);
                          *(undefined8 *)(puVar11 + -0xa40) = puVar53[0x19f];
                          uVar74 = puVar53[0x19b];
                          uVar62 = puVar53[0x19e];
                          uVar70 = puVar53[0x19d];
                          *(undefined8 *)(puVar11 + -0xa58) = puVar53[0x19c];
                          *(undefined8 *)(puVar11 + -0xa60) = uVar74;
                          *(undefined8 *)(puVar11 + -0xa48) = uVar62;
                          *(undefined8 *)(puVar11 + -0xa50) = uVar70;
                          uVar62 = puVar53[0x198];
                          uVar70 = puVar53[0x197];
                          uVar74 = puVar53[0x199];
                          *(undefined8 *)(puVar11 + -0xa68) = puVar53[0x19a];
                          *(undefined8 *)(puVar11 + -0xa70) = uVar74;
                          *(undefined8 *)(puVar11 + -0xa78) = uVar62;
                          *(undefined8 *)(puVar11 + -0xa80) = uVar70;
code_r0x00010059b29c:
                          *(undefined8 *)(puVar11 + 0xbea8) = *(undefined8 *)(puVar11 + -0xa58);
                          *(undefined8 *)(puVar11 + 0xbea0) = *(undefined8 *)(puVar11 + -0xa60);
                          *(undefined8 *)(puVar11 + 0xbeb8) = *(undefined8 *)(puVar11 + -0xa48);
                          *(undefined8 *)(puVar11 + 0xbeb0) = *(undefined8 *)(puVar11 + -0xa50);
                          *(undefined8 *)(puVar11 + 0xbec0) = *(undefined8 *)(puVar11 + -0xa40);
                          *(undefined8 *)(puVar11 + 0xbe98) = *(undefined8 *)(puVar11 + -0xa68);
                          *(undefined8 *)(puVar11 + 0xbe90) = *(undefined8 *)(puVar11 + -0xa70);
                          *(undefined8 *)(puVar11 + 0xbe88) = *(undefined8 *)(puVar11 + -0xa78);
                          *(undefined8 *)(puVar11 + 0xbe80) = *(undefined8 *)(puVar11 + -0xa80);
                          *(undefined2 *)((long)puVar53 + 0xcb5) = 0x101;
                          uVar74 = *(undefined8 *)(*(long *)puVar53[0x15e] + 0x3d8);
                          *(undefined8 *)(puVar11 + 0x6d78) =
                               *(undefined8 *)(*(long *)puVar53[0x15e] + 0x3e0);
                          *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
                          uVar74 = *(undefined8 *)(*(long *)puVar53[0x15f] + 0x248);
                          lVar60 = *(long *)(*(long *)puVar53[0x15f] + 0x250);
                          lVar61 = 1;
                          if ((lVar60 != 0) && (lVar61 = _malloc(lVar60), lVar61 == 0)) {
                            FUN_107c03c64(1,lVar60);
                            goto code_r0x0001005975c0;
                          }
                          _memcpy(lVar61,uVar74,lVar60);
                          uVar74 = *(undefined8 *)(*(long *)puVar53[0x15f] + 0x3a8);
                          lVar45 = *(long *)(*(long *)puVar53[0x15f] + 0x3b0);
                          lVar66 = 1;
                          if ((lVar45 != 0) && (lVar66 = _malloc(lVar45), lVar66 == 0)) {
                            FUN_107c03c64(1,lVar45);
                            goto code_r0x0001005975c0;
                          }
                          _memcpy(lVar66,uVar74,lVar45);
                          *(undefined1 *)((long)puVar53 + 0xcb5) = 0;
                          uVar74 = *(undefined8 *)(*(long *)puVar53[0x15f] + 0x48);
                          lVar23 = *(long *)(*(long *)puVar53[0x15f] + 0x50);
                          lVar71 = 1;
                          if ((lVar23 != 0) && (lVar71 = _malloc(lVar23), lVar71 == 0)) {
                            FUN_107c03c64(1,lVar23);
                            goto code_r0x0001005975c0;
                          }
                          _memcpy(lVar71,uVar74,lVar23);
                          bVar27 = *(byte *)(*(long *)puVar53[0x15f] + 0x790);
                          uVar74 = 7;
                          if (5 < bVar27) {
                            uVar74 = 0x11;
                          }
                          lVar34 = _malloc(uVar74);
                          if (lVar34 == 0) {
                            FUN_107c03c64(1,uVar74);
                            goto code_r0x0001005975c0;
                          }
                          puVar2 = &UNK_108d524f0;
                          if (5 < bVar27) {
                            puVar2 = &UNK_108d537b8;
                          }
                          _memcpy(lVar34,puVar2,uVar74);
                          uVar70 = *(undefined8 *)(puVar11 + 0x6d70);
                          puVar53[0x186] = *(undefined8 *)(puVar11 + 0x6d78);
                          puVar53[0x185] = uVar70;
                          puVar53[0x17a] = puVar53[0x161];
                          puVar53[0x179] = puVar53[0x160];
                          uVar70 = *(undefined8 *)(puVar11 + 0xbe90);
                          uVar86 = *(undefined8 *)(puVar11 + 0xbe88);
                          uVar62 = *(undefined8 *)(puVar11 + 0xbe80);
                          puVar53[0x17f] = *(undefined8 *)(puVar11 + 0xbe98);
                          puVar53[0x17e] = uVar70;
                          uVar70 = *(undefined8 *)(puVar11 + 0xbea0);
                          uVar68 = *(undefined8 *)(puVar11 + 0xbeb8);
                          uVar65 = *(undefined8 *)(puVar11 + 0xbeb0);
                          puVar53[0x181] = *(undefined8 *)(puVar11 + 0xbea8);
                          puVar53[0x180] = uVar70;
                          puVar53[0x183] = uVar68;
                          puVar53[0x182] = uVar65;
                          *(undefined1 *)((long)puVar53 + 0xcb6) = 0;
                          *(undefined2 *)((long)puVar53 + 0xcb3) = 1;
                          puVar53[0x16a] = lVar60;
                          puVar53[0x16b] = lVar61;
                          puVar53[0x16c] = lVar60;
                          puVar53[0x16d] = lVar45;
                          puVar53[0x16e] = lVar66;
                          puVar53[0x16f] = lVar45;
                          puVar53[0x176] = *(undefined8 *)(puVar11 + -0x1060);
                          puVar53[0x177] = *(undefined8 *)(puVar11 + -0x1080);
                          puVar53[0x178] = *(undefined8 *)(puVar11 + -0x1070);
                          puVar53[0x170] = lVar23;
                          puVar53[0x171] = lVar71;
                          puVar53[0x172] = lVar23;
                          puVar53[0x173] = uVar74;
                          puVar53[0x174] = lVar34;
                          puVar53[0x175] = uVar74;
                          *(undefined1 *)(puVar53 + 0x187) = *(undefined1 *)((long)puVar53 + 0xcb2);
                          puVar53[0x17b] = puVar53[0x162];
                          puVar53[0x184] = *(undefined8 *)(puVar11 + 0xbec0);
                          puVar53[0x17d] = uVar86;
                          puVar53[0x17c] = uVar62;
                          *(long *)(puVar11 + 0x6d70) = *(long *)puVar53[0x15e] + 0x4f0;
                          auVar124 = FUN_1037cc704(puVar11 + 0x6d70);
                          plVar58 = auVar124._8_8_;
                          plVar57 = auVar124._0_8_;
                          *(long **)(puVar11 + 0x6d70) = plVar57;
                          *(undefined8 *)(puVar11 + 0x6d78) = 0;
                          puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                          if (plVar58 != (long *)0x0) {
                            lVar61 = *plVar57;
                            *plVar57 = lVar61 + 1;
                            if (lVar61 < 0) goto code_r0x0001005975c0;
                            if ((long *)*plVar58 == plVar57 + 2) {
                              *plVar58 = 3;
                            }
                            else {
                              *(long **)(puVar11 + -0xa80) = plVar57;
                              lVar61 = *plVar57;
                              *plVar57 = lVar61 + -1;
                              LORelease();
                              if (lVar61 == 1) {
                                DataMemoryBarrier(2,1);
                                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E
                                          (puVar11 + -0xa80);
                              }
                            }
                          }
                          lVar61 = *(long *)(puVar11 + 0x6d70);
                          puVar53[0x188] = lVar61;
                          uVar74 = puVar53[0x15e];
                          *(undefined8 *)(puVar11 + -0x1068) = puVar53[0x15f];
                          *(undefined8 *)(puVar11 + -0x1070) = uVar74;
                          __ZN11codex_hooks8registry5Hooks12preview_stop17h1be76d8617441877E
                                    (puVar11 + 0x6d70,lVar61 + 0x10,puVar53 + 0x16a);
                          uVar70 = *(undefined8 *)(puVar11 + 0x6d70);
                          *(undefined8 *)(puVar11 + -0xa78) = *(undefined8 *)(puVar11 + 0x6d78);
                          *(undefined8 *)(puVar11 + -0xa80) = uVar70;
                          uVar74 = *(undefined8 *)(puVar11 + 0x6d80);
                          *(undefined8 *)(puVar11 + -0xa70) = uVar74;
                          puVar53[0x198] = *(undefined8 *)(puVar11 + 0x6d78);
                          puVar53[0x197] = uVar70;
                          puVar53[0x199] = uVar74;
                          uVar74 = *(undefined8 *)(puVar11 + -0x1070);
                          puVar53[0x19b] = *(undefined8 *)(puVar11 + -0x1068);
                          puVar53[0x19a] = uVar74;
                          *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0x210) = 0;
code_r0x00010059b550:
                          unaff_x25 = (code *)(puVar53 + 0x197);
                          pcVar22 = (code *)FUN_1004f65a0(unaff_x25,
                                                          *(undefined8 *)(puVar11 + -0x1028));
                          if ((int)pcVar22 == 0) {
                            FUN_100c9749c(unaff_x25);
                            lVar61 = puVar53[0x188] + 0x10;
                            *(undefined1 *)((long)puVar53 + 0xcb3) = 0;
                            puVar53[0x1b0] = puVar53[0x183];
                            puVar53[0x1af] = puVar53[0x182];
                            puVar53[0x1b2] = puVar53[0x185];
                            puVar53[0x1b1] = puVar53[0x184];
                            puVar53[0x1b4] = puVar53[0x187];
                            puVar53[0x1b3] = puVar53[0x186];
                            puVar53[0x1a8] = puVar53[0x17b];
                            puVar53[0x1a7] = puVar53[0x17a];
                            puVar53[0x1aa] = puVar53[0x17d];
                            puVar53[0x1a9] = puVar53[0x17c];
                            puVar53[0x1ac] = puVar53[0x17f];
                            puVar53[0x1ab] = puVar53[0x17e];
                            puVar53[0x1ae] = puVar53[0x181];
                            puVar53[0x1ad] = puVar53[0x180];
                            puVar53[0x1a0] = puVar53[0x173];
                            puVar53[0x19f] = puVar53[0x172];
                            puVar53[0x1a2] = puVar53[0x175];
                            puVar53[0x1a1] = puVar53[0x174];
                            puVar53[0x1a4] = puVar53[0x177];
                            puVar53[0x1a3] = puVar53[0x176];
                            puVar53[0x1a6] = puVar53[0x179];
                            puVar53[0x1a5] = puVar53[0x178];
                            puVar53[0x198] = puVar53[0x16b];
                            *(undefined8 *)unaff_x25 = puVar53[0x16a];
                            puVar53[0x19a] = puVar53[0x16d];
                            puVar53[0x199] = puVar53[0x16c];
                            puVar53[0x19c] = puVar53[0x16f];
                            puVar53[0x19b] = puVar53[0x16e];
                            puVar53[0x19e] = puVar53[0x171];
                            puVar53[0x19d] = puVar53[0x170];
                            puVar53[0x1b5] = lVar61;
                            *(long *)(puVar11 + -0x1070) = *(long *)(puVar11 + -0x1030) + 0x76f;
                            *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x76f) = 0;
code_r0x00010059b5e8:
                            uVar62 = *(undefined8 *)(unaff_x25 + 0xa8);
                            uVar70 = *(undefined8 *)(unaff_x25 + 0xa0);
                            uVar74 = *(undefined8 *)(unaff_x25 + 0xb0);
                            puVar53[0x1cd] = *(undefined8 *)(unaff_x25 + 0xb8);
                            puVar53[0x1cc] = uVar74;
                            uVar74 = *(undefined8 *)(unaff_x25 + 0xc0);
                            uVar65 = *(undefined8 *)(unaff_x25 + 0xd8);
                            uVar86 = *(undefined8 *)(unaff_x25 + 0xd0);
                            puVar53[0x1cf] = *(undefined8 *)(unaff_x25 + 200);
                            puVar53[0x1ce] = uVar74;
                            puVar53[0x1d1] = uVar65;
                            puVar53[0x1d0] = uVar86;
                            uVar74 = *(undefined8 *)(unaff_x25 + 0xe0);
                            puVar53[0x1d3] = *(undefined8 *)(unaff_x25 + 0xe8);
                            puVar53[0x1d2] = uVar74;
                            uVar65 = *(undefined8 *)(unaff_x25 + 0x68);
                            uVar86 = *(undefined8 *)(unaff_x25 + 0x60);
                            uVar74 = *(undefined8 *)(unaff_x25 + 0x70);
                            puVar53[0x1c5] = *(undefined8 *)(unaff_x25 + 0x78);
                            puVar53[0x1c4] = uVar74;
                            uVar74 = *(undefined8 *)(unaff_x25 + 0x80);
                            uVar72 = *(undefined8 *)(unaff_x25 + 0x98);
                            uVar68 = *(undefined8 *)(unaff_x25 + 0x90);
                            puVar53[0x1c7] = *(undefined8 *)(unaff_x25 + 0x88);
                            puVar53[0x1c6] = uVar74;
                            puVar53[0x1c9] = uVar72;
                            puVar53[0x1c8] = uVar68;
                            puVar53[0x1cb] = uVar62;
                            puVar53[0x1ca] = uVar70;
                            uVar62 = *(undefined8 *)(unaff_x25 + 0x28);
                            uVar70 = *(undefined8 *)(unaff_x25 + 0x20);
                            uVar74 = *(undefined8 *)(unaff_x25 + 0x30);
                            puVar53[0x1bd] = *(undefined8 *)(unaff_x25 + 0x38);
                            puVar53[0x1bc] = uVar74;
                            uVar74 = *(undefined8 *)(unaff_x25 + 0x40);
                            uVar72 = *(undefined8 *)(unaff_x25 + 0x58);
                            uVar68 = *(undefined8 *)(unaff_x25 + 0x50);
                            puVar53[0x1bf] = *(undefined8 *)(unaff_x25 + 0x48);
                            puVar53[0x1be] = uVar74;
                            puVar53[0x1c1] = uVar72;
                            puVar53[0x1c0] = uVar68;
                            puVar53[0x1c3] = uVar65;
                            puVar53[0x1c2] = uVar86;
                            uVar74 = *(undefined8 *)unaff_x25;
                            uVar65 = *(undefined8 *)(unaff_x25 + 0x18);
                            uVar86 = *(undefined8 *)(unaff_x25 + 0x10);
                            puVar53[0x1b7] = *(undefined8 *)(unaff_x25 + 8);
                            puVar53[0x1b6] = uVar74;
                            puVar53[0x1b9] = uVar65;
                            puVar53[0x1b8] = uVar86;
                            pcVar30 = (code *)(lVar61 + 0x18);
                            unaff_x26 = (code *)(puVar53 + 0x1b6);
                            puVar53[0x1bb] = uVar62;
                            puVar53[0x1ba] = uVar70;
                            puVar53[0x1d4] = pcVar30;
                            pcVar19 = (code *)(puVar53 + 0x1e5);
                            *(undefined1 *)(puVar53 + 0x1e5) = 0;
code_r0x00010059b658:
                            uVar86 = *(undefined8 *)(unaff_x26 + 200);
                            uVar62 = *(undefined8 *)(unaff_x26 + 0xc0);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0xd8);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0xd0);
                            uVar68 = *(undefined8 *)(unaff_x26 + 0xb8);
                            uVar65 = *(undefined8 *)(unaff_x26 + 0xb0);
                            uVar72 = *(undefined8 *)(unaff_x26 + 0xc0);
                            *(undefined8 *)(puVar11 + 0x6e38) = *(undefined8 *)(unaff_x26 + 200);
                            *(undefined8 *)(puVar11 + 0x6e30) = uVar72;
                            *(undefined8 *)(puVar11 + 0x6e48) = uVar70;
                            *(undefined8 *)(puVar11 + 0x6e40) = uVar74;
                            uVar75 = *(undefined8 *)(unaff_x26 + 0xd8);
                            uVar52 = *(undefined8 *)(unaff_x26 + 0xd0);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0xe0);
                            *(undefined8 *)(puVar11 + 0x6e58) = *(undefined8 *)(unaff_x26 + 0xe8);
                            *(undefined8 *)(puVar11 + 0x6e50) = uVar74;
                            uVar76 = *(undefined8 *)(unaff_x26 + 0x88);
                            uVar72 = *(undefined8 *)(unaff_x26 + 0x80);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0x98);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0x90);
                            uVar81 = *(undefined8 *)(unaff_x26 + 0x78);
                            uVar79 = *(undefined8 *)(unaff_x26 + 0x70);
                            uVar77 = *(undefined8 *)(unaff_x26 + 0x80);
                            *(undefined8 *)(puVar11 + 0x6df8) = *(undefined8 *)(unaff_x26 + 0x88);
                            *(undefined8 *)(puVar11 + 0x6df0) = uVar77;
                            *(undefined8 *)(puVar11 + 0x6e08) = uVar70;
                            *(undefined8 *)(puVar11 + 0x6e00) = uVar74;
                            uVar78 = *(undefined8 *)(unaff_x26 + 0xa8);
                            uVar77 = *(undefined8 *)(unaff_x26 + 0xa0);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0xb0);
                            uVar89 = *(undefined8 *)(unaff_x26 + 0x98);
                            uVar87 = *(undefined8 *)(unaff_x26 + 0x90);
                            uVar83 = *(undefined8 *)(unaff_x26 + 0xa8);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0xa0);
                            *(undefined8 *)(puVar11 + 0x6e28) = *(undefined8 *)(unaff_x26 + 0xb8);
                            *(undefined8 *)(puVar11 + 0x6e20) = uVar74;
                            *(undefined8 *)(puVar11 + 0x6e18) = uVar83;
                            *(undefined8 *)(puVar11 + 0x6e10) = uVar70;
                            uVar84 = *(undefined8 *)(unaff_x26 + 0x48);
                            uVar83 = *(undefined8 *)(unaff_x26 + 0x40);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0x58);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0x50);
                            uVar98 = *(undefined8 *)(unaff_x26 + 0x38);
                            uVar96 = *(undefined8 *)(unaff_x26 + 0x30);
                            uVar91 = *(undefined8 *)(unaff_x26 + 0x40);
                            *(undefined8 *)(puVar11 + 0x6db8) = *(undefined8 *)(unaff_x26 + 0x48);
                            *(undefined8 *)(puVar11 + 0x6db0) = uVar91;
                            *(undefined8 *)(puVar11 + 0x6dc8) = uVar70;
                            *(undefined8 *)(puVar11 + 0x6dc0) = uVar74;
                            uVar93 = *(undefined8 *)(unaff_x26 + 0x68);
                            uVar91 = *(undefined8 *)(unaff_x26 + 0x60);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0x70);
                            uVar106 = *(undefined8 *)(unaff_x26 + 0x58);
                            uVar104 = *(undefined8 *)(unaff_x26 + 0x50);
                            uVar100 = *(undefined8 *)(unaff_x26 + 0x68);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0x60);
                            *(undefined8 *)(puVar11 + 0x6de8) = *(undefined8 *)(unaff_x26 + 0x78);
                            *(undefined8 *)(puVar11 + 0x6de0) = uVar74;
                            *(undefined8 *)(puVar11 + 0x6dd8) = uVar100;
                            *(undefined8 *)(puVar11 + 0x6dd0) = uVar70;
                            uVar74 = *(undefined8 *)unaff_x26;
                            uVar100 = *(undefined8 *)(unaff_x26 + 0x18);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0x10);
                            uVar110 = *(undefined8 *)(unaff_x26 + 8);
                            uVar108 = *(undefined8 *)unaff_x26;
                            uVar117 = *(undefined8 *)(unaff_x26 + 0x18);
                            uVar115 = *(undefined8 *)(unaff_x26 + 0x10);
                            *(undefined8 *)(puVar11 + 0x6d78) = *(undefined8 *)(unaff_x26 + 8);
                            *(undefined8 *)(puVar11 + 0x6d70) = uVar74;
                            *(undefined8 *)(puVar11 + 0x6d88) = uVar100;
                            *(undefined8 *)(puVar11 + 0x6d80) = uVar70;
                            uVar102 = *(undefined8 *)(unaff_x26 + 0x28);
                            uVar100 = *(undefined8 *)(unaff_x26 + 0x20);
                            uVar74 = *(undefined8 *)(unaff_x26 + 0x30);
                            uVar113 = *(undefined8 *)(unaff_x26 + 0x28);
                            uVar70 = *(undefined8 *)(unaff_x26 + 0x20);
                            *(undefined8 *)(puVar11 + 0x6da8) = *(undefined8 *)(unaff_x26 + 0x38);
                            *(undefined8 *)(puVar11 + 0x6da0) = uVar74;
                            *(undefined8 *)(puVar11 + 0x6d98) = uVar113;
                            *(undefined8 *)(puVar11 + 0x6d90) = uVar70;
                            puVar53[0x1d7] = puVar53[0x1d2];
                            puVar53[0x1d6] = puVar53[0x1d1];
                            puVar53[0x1d5] = pcVar30;
                            *(undefined1 *)((long)puVar53 + 0xf29) = 1;
                            uVar74 = *(undefined8 *)(pcVar30 + 8);
                            uVar70 = *(undefined8 *)(pcVar30 + 0x10);
                            puVar53[0x1eb] = uVar102;
                            puVar53[0x1ea] = uVar100;
                            puVar53[0x1e9] = uVar117;
                            puVar53[0x1e8] = uVar115;
                            puVar53[0x1e7] = uVar110;
                            puVar53[0x1e6] = uVar108;
                            puVar53[499] = uVar93;
                            puVar53[0x1f2] = uVar91;
                            puVar53[0x1f1] = uVar106;
                            puVar53[0x1f0] = uVar104;
                            puVar53[0x1ef] = uVar84;
                            puVar53[0x1ee] = uVar83;
                            puVar53[0x1ed] = uVar98;
                            puVar53[0x1ec] = uVar96;
                            puVar53[0x1fb] = uVar78;
                            puVar53[0x1fa] = uVar77;
                            puVar53[0x1f9] = uVar89;
                            puVar53[0x1f8] = uVar87;
                            puVar53[0x1f7] = uVar76;
                            puVar53[0x1f6] = uVar72;
                            puVar53[0x1f5] = uVar81;
                            puVar53[500] = uVar79;
                            uVar72 = *(undefined8 *)(unaff_x26 + 0xe0);
                            puVar53[0x203] = *(undefined8 *)(unaff_x26 + 0xe8);
                            puVar53[0x202] = uVar72;
                            puVar53[0x201] = uVar75;
                            puVar53[0x200] = uVar52;
                            puVar53[0x1ff] = uVar86;
                            puVar53[0x1fe] = uVar62;
                            *(undefined1 *)((long)puVar53 + 0xf29) = 0;
                            puVar53[0x1fd] = uVar68;
                            puVar53[0x1fc] = uVar65;
                            puVar53[0x204] = uVar74;
                            puVar53[0x205] = uVar70;
                            puVar53[0x206] = pcVar30 + 0x30;
                            *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x767) = 0;
code_r0x00010059b748:
                            plVar57 = puVar53 + 0x1e6;
                            pcVar22 = (code *)FUN_1006cf970(puVar11 + -0xa80,plVar57,
                                                            **(undefined8 **)(puVar11 + -0x1028));
                            if (*(long *)(puVar11 + -0xa80) == -0x8000000000000000) {
                              cVar28 = (code)0x3;
code_r0x00010059bfb0:
                              *pcVar19 = cVar28;
                            }
                            else {
                              uVar74 = *(undefined8 *)(puVar11 + -0xa50);
                              uVar62 = *(undefined8 *)(puVar11 + -0xa58);
                              uVar70 = *(undefined8 *)(puVar11 + -0xa60);
                              puVar53[0x1df] = *(undefined8 *)(puVar11 + -0xa48);
                              puVar53[0x1de] = uVar74;
                              uVar74 = *(undefined8 *)(puVar11 + -0xa40);
                              uVar65 = *(undefined8 *)(puVar11 + -0xa28);
                              uVar86 = *(undefined8 *)(puVar11 + -0xa30);
                              puVar53[0x1e1] = *(undefined8 *)(puVar11 + -0xa38);
                              puVar53[0x1e0] = uVar74;
                              puVar53[0x1e3] = uVar65;
                              puVar53[0x1e2] = uVar86;
                              puVar53[0x1e4] = *(undefined8 *)(puVar11 + -0xa20);
                              uVar74 = *(undefined8 *)(puVar11 + -0xa80);
                              uVar65 = *(undefined8 *)(puVar11 + -0xa68);
                              uVar86 = *(undefined8 *)(puVar11 + -0xa70);
                              puVar53[0x1d9] = *(undefined8 *)(puVar11 + -0xa78);
                              puVar53[0x1d8] = uVar74;
                              puVar53[0x1db] = uVar65;
                              puVar53[0x1da] = uVar86;
                              puVar53[0x1dd] = uVar62;
                              puVar53[0x1dc] = uVar70;
                              FUN_100e48b38(plVar57);
                              pcVar30 = (code *)puVar53[0x1d5];
                              puVar53[0x1e8] = puVar53[0x1dd];
                              puVar53[0x1e7] = puVar53[0x1dc];
                              *plVar57 = puVar53[0x1db];
                              puVar53[0x1e9] = pcVar30;
                              puVar53[0x1eb] = puVar53[0x1d7];
                              puVar53[0x1ea] = puVar53[0x1d6];
                              pcVar42 = *(code **)(puVar11 + -0x1030);
                              pcVar25 = pcVar42 + 0x6c7;
                              pcVar42[0x6c7] = (code)0x0;
code_r0x00010059b7e0:
                              pcVar30 = pcVar30 + 0x60;
                              puVar67 = puVar53 + 0x1ec;
                              lVar61 = *plVar57;
                              puVar53[0x1ed] = plVar57[1];
                              puVar53[0x1ec] = lVar61;
                              puVar53[0x1ee] = plVar57[2];
                              puVar53[0x1ef] = pcVar30;
                              puVar53[0x1f1] = puVar53[0x1eb];
                              puVar53[0x1f0] = puVar53[0x1ea];
                              pcVar21 = pcVar42 + 0x6bf;
                              pcVar42[0x6bf] = (code)0x0;
code_r0x00010059b80c:
                              *(undefined2 *)(pcVar42 + 0x6c0) = 0x100;
                              puVar53[0x1f2] = pcVar30;
                              puVar53[500] = puVar53[0x1f1];
                              puVar53[499] = puVar53[0x1f0];
                              uVar74 = *puVar67;
                              puVar53[0x1f6] = puVar67[1];
                              puVar53[0x1f5] = uVar74;
                              lVar61 = puVar67[2];
                              puVar53[0x1f7] = lVar61;
                              pcVar22 = (code *)0x8;
                              if (lVar61 != 0) {
                                pcVar22 = (code *)_malloc(lVar61 * 0x30);
                                if (pcVar22 == (code *)0x0) {
                                  FUN_107c03c64(8,lVar61 * 0x30);
                                  goto code_r0x0001005975c0;
                                }
                              }
                              puVar53[0x1f8] = lVar61;
                              puVar53[0x1f9] = pcVar22;
                              puVar53[0x1fa] = 0;
                              *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x6c1) = 0;
                              puVar36 = (undefined8 *)puVar53[0x1f6];
                              puVar40 = puVar36 + lVar61 * 6;
                              puVar53[0x1fb] = puVar36;
                              puVar53[0x1fc] = puVar36;
                              puVar53[0x1fd] = puVar53[0x1f5];
                              puVar53[0x1fe] = puVar40;
                              puVar37 = puVar53 + 0x1ff;
                              if (puVar36 != puVar40) {
                                do {
                                  puVar53[0x1fc] = puVar36 + 6;
                                  uVar86 = puVar36[3];
                                  uVar62 = puVar36[2];
                                  uVar70 = puVar36[5];
                                  uVar74 = puVar36[4];
                                  uVar65 = *puVar36;
                                  puVar37[1] = puVar36[1];
                                  *puVar37 = uVar65;
                                  puVar37[3] = uVar86;
                                  puVar37[2] = uVar62;
                                  puVar37[5] = uVar70;
                                  puVar37[4] = uVar74;
                                  puVar36 = puVar36 + 6;
                                  if (puVar53[0x1ff] == -0x8000000000000000)
                                  goto code_r0x00010059b9fc;
                                  uVar74 = *puVar37;
                                  uVar62 = puVar37[3];
                                  uVar70 = puVar37[2];
                                  uVar65 = puVar37[1];
                                  uVar86 = *puVar37;
                                  puVar53[0x206] = puVar37[1];
                                  puVar53[0x205] = uVar74;
                                  puVar53[0x208] = uVar62;
                                  puVar53[0x207] = uVar70;
                                  uVar74 = puVar37[4];
                                  puVar53[0x20a] = puVar37[5];
                                  puVar53[0x209] = uVar74;
                                  lVar61 = *(long *)(puVar11 + -0x1030);
                                  *(undefined1 *)(lVar61 + 0x6c0) = 1;
                                  puVar53[0x20b] = puVar53 + 0x1f8;
                                  puVar53[0x20d] = uVar65;
                                  puVar53[0x20c] = uVar86;
                                  puVar53[0x20e] = puVar37[2];
                                  puVar53[0x20f] = puVar53[0x1f2];
                                  puVar53[0x211] = puVar53[500];
                                  puVar53[0x210] = puVar53[499];
                                  *(undefined1 *)(lVar61 + 0x607) = 0;
code_r0x00010059b914:
                                  pcVar22 = (code *)FUN_1006c8ebc(puVar11 + 0xb380,puVar53 + 0x20c,
                                                                  *(undefined8 *)(puVar11 + -0x1028)
                                                                 );
                                  if (*(long *)(puVar11 + 0xb380) == -0x8000000000000000) {
                                    *pcVar21 = (code)0x3;
                                    goto code_r0x00010059bfa4;
                                  }
                                  *(undefined8 *)(puVar11 + 0xb608) =
                                       *(undefined8 *)(puVar11 + 0xb388);
                                  *(undefined8 *)(puVar11 + 0xb600) =
                                       *(undefined8 *)(puVar11 + 0xb380);
                                  *(undefined8 *)(puVar11 + 0xb610) =
                                       *(undefined8 *)(puVar11 + 0xb390);
                                  pcVar22 = (code *)FUN_100ccb608(puVar53 + 0x20c);
                                  *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x6c0) = 0;
                                  uVar74 = puVar53[0x208];
                                  *(undefined8 *)(puVar11 + 0xb750) = puVar53[0x209];
                                  *(undefined8 *)(puVar11 + 0xb748) = uVar74;
                                  *(undefined8 *)(puVar11 + 0xb758) = puVar53[0x20a];
                                  *(undefined8 *)(puVar11 + 0xb738) =
                                       *(undefined8 *)(puVar11 + 0xb608);
                                  *(undefined8 *)(puVar11 + 0xb730) =
                                       *(undefined8 *)(puVar11 + 0xb600);
                                  *(undefined8 *)(puVar11 + 0xb740) =
                                       *(undefined8 *)(puVar11 + 0xb610);
                                  plVar58 = (long *)puVar53[0x20b];
                                  lVar61 = plVar58[2];
                                  if (lVar61 == *plVar58) {
                                    pcVar22 = (code *)FUN_107c05c44(plVar58);
                                  }
                                  puVar37 = (undefined8 *)(plVar58[1] + lVar61 * 0x30);
                                  uVar74 = *(undefined8 *)(puVar11 + 0xb730);
                                  puVar37[1] = *(undefined8 *)(puVar11 + 0xb738);
                                  *puVar37 = uVar74;
                                  uVar74 = *(undefined8 *)(puVar11 + 0xb740);
                                  puVar37[3] = *(undefined8 *)(puVar11 + 0xb748);
                                  puVar37[2] = uVar74;
                                  uVar74 = *(undefined8 *)(puVar11 + 0xb750);
                                  puVar37[5] = *(undefined8 *)(puVar11 + 0xb758);
                                  puVar37[4] = uVar74;
                                  plVar58[2] = lVar61 + 1;
                                  *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x6c0) = 0;
                                  puVar40 = (undefined8 *)puVar53[0x1fe];
                                  puVar36 = (undefined8 *)puVar53[0x1fc];
                                  puVar37 = puVar53 + 0x1ff;
                                } while (puVar36 != puVar40);
                              }
                              *puVar37 = 0x8000000000000000;
code_r0x00010059b9fc:
                              if ((long)puVar40 - (long)puVar36 != 0) {
                                uVar20 = (ulong)((long)puVar40 - (long)puVar36) / 0x30;
                                puVar36 = puVar36 + 4;
                                do {
                                  if (puVar36[-4] != 0) {
                                    pcVar22 = (code *)_free(puVar36[-3]);
                                  }
                                  if (puVar36[-1] != 0) {
                                    pcVar22 = (code *)_free(*puVar36);
                                  }
                                  puVar36 = puVar36 + 6;
                                  uVar20 = uVar20 - 1;
                                } while (uVar20 != 0);
                              }
                              if (puVar53[0x1fd] != 0) {
                                pcVar22 = (code *)_free(puVar53[0x1fb]);
                              }
                              lVar60 = puVar53[0x1f8];
                              uVar74 = puVar53[0x1f9];
                              *(undefined8 *)(puVar11 + 0xb4b8) = puVar53[0x1fa];
                              *(undefined8 *)(puVar11 + 0xb4b0) = uVar74;
                              lVar61 = *(long *)(puVar11 + -0x1030);
                              *(undefined1 *)(lVar61 + 0x6c1) = 0;
                              *(undefined1 *)(lVar61 + 0x6bf) = 1;
                              if (lVar60 == -0x8000000000000000) {
code_r0x00010059bfa4:
                                *pcVar25 = (code)0x3;
                                cVar28 = (code)0x4;
                                goto code_r0x00010059bfb0;
                              }
                              pcVar22 = (code *)FUN_100cf55f4(puVar67);
                              *pcVar25 = (code)0x1;
                              *(undefined8 *)(puVar11 + 0xbc28) = *(undefined8 *)(puVar11 + 0xb4b8);
                              *(undefined8 *)(puVar11 + 0xbc20) = *(undefined8 *)(puVar11 + 0xb4b0);
                              if ((char)plVar57[0x4a] == '\x03') {
                                pcVar22 = (code *)FUN_100cf55f4(plVar57 + 6);
                              }
                              else if ((char)plVar57[0x4a] == '\0') {
                                lVar61 = plVar57[1];
                                lVar66 = plVar57[2];
                                if (lVar66 != 0) {
                                  puVar67 = (undefined8 *)(lVar61 + 0x20);
                                  do {
                                    if (puVar67[-4] != 0) {
                                      pcVar22 = (code *)_free(puVar67[-3]);
                                    }
                                    if (puVar67[-1] != 0) {
                                      pcVar22 = (code *)_free(*puVar67);
                                    }
                                    puVar67 = puVar67 + 6;
                                    lVar66 = lVar66 + -1;
                                  } while (lVar66 != 0);
                                }
                                if (*plVar57 != 0) {
                                  pcVar22 = (code *)_free(lVar61);
                                }
                              }
                              puVar53[0x1db] = lVar60;
                              uVar74 = *(undefined8 *)(puVar11 + 0xbc20);
                              puVar53[0x1dd] = *(undefined8 *)(puVar11 + 0xbc28);
                              puVar53[0x1dc] = uVar74;
                              lVar61 = puVar53[0x1d8];
                              uVar74 = puVar53[0x1dd];
                              uVar62 = puVar53[0x1e0];
                              uVar70 = puVar53[0x1df];
                              *(undefined8 *)(puVar11 + 0xae58) = puVar53[0x1de];
                              *(undefined8 *)(puVar11 + 0xae50) = uVar74;
                              *(undefined8 *)(puVar11 + 0xae68) = uVar62;
                              *(undefined8 *)(puVar11 + 0xae60) = uVar70;
                              uVar74 = puVar53[0x1e1];
                              uVar62 = puVar53[0x1e4];
                              uVar70 = puVar53[0x1e3];
                              *(undefined8 *)(puVar11 + 0xae78) = puVar53[0x1e2];
                              *(undefined8 *)(puVar11 + 0xae70) = uVar74;
                              *(undefined8 *)(puVar11 + 0xae88) = uVar62;
                              *(undefined8 *)(puVar11 + 0xae80) = uVar70;
                              uVar74 = puVar53[0x1d9];
                              uVar62 = puVar53[0x1dc];
                              uVar70 = puVar53[0x1db];
                              *(undefined8 *)(puVar11 + 0xae38) = puVar53[0x1da];
                              *(undefined8 *)(puVar11 + 0xae30) = uVar74;
                              *(undefined8 *)(puVar11 + 0xae48) = uVar62;
                              *(undefined8 *)(puVar11 + 0xae40) = uVar70;
                              *(undefined1 *)((long)puVar53 + 0xf29) = 0;
                              *(undefined1 *)(puVar53 + 0x1e5) = 1;
                              if (lVar61 != -0x8000000000000000) {
                                FUN_100e86f74(unaff_x26);
                                **(undefined1 **)(puVar11 + -0x1070) = 1;
                                puVar53[0x189] = lVar61;
                                uVar74 = *(undefined8 *)(puVar11 + 0xae50);
                                uVar62 = *(undefined8 *)(puVar11 + 0xae68);
                                uVar70 = *(undefined8 *)(puVar11 + 0xae60);
                                puVar53[399] = *(undefined8 *)(puVar11 + 0xae58);
                                puVar53[0x18e] = uVar74;
                                puVar53[0x191] = uVar62;
                                puVar53[400] = uVar70;
                                uVar74 = *(undefined8 *)(puVar11 + 0xae70);
                                uVar62 = *(undefined8 *)(puVar11 + 0xae88);
                                uVar70 = *(undefined8 *)(puVar11 + 0xae80);
                                puVar53[0x193] = *(undefined8 *)(puVar11 + 0xae78);
                                puVar53[0x192] = uVar74;
                                puVar53[0x195] = uVar62;
                                puVar53[0x194] = uVar70;
                                uVar74 = *(undefined8 *)(puVar11 + 0xae30);
                                uVar62 = *(undefined8 *)(puVar11 + 0xae48);
                                uVar70 = *(undefined8 *)(puVar11 + 0xae40);
                                puVar53[0x18b] = *(undefined8 *)(puVar11 + 0xae38);
                                puVar53[0x18a] = uVar74;
                                puVar53[0x18d] = uVar62;
                                puVar53[0x18c] = uVar70;
                                uVar62 = puVar53[0x18a];
                                uVar70 = puVar53[0x189];
                                *(undefined8 *)(puVar11 + 0x6d78) = uVar62;
                                *(undefined8 *)(puVar11 + 0x6d70) = uVar70;
                                uVar74 = puVar53[0x18b];
                                *(undefined8 *)(puVar11 + 0x6d80) = uVar74;
                                puVar53[0x189] = 0;
                                puVar53[0x18a] = 8;
                                puVar53[0x18b] = 0;
                                uVar65 = puVar53[0x15f];
                                uVar86 = puVar53[0x15e];
                                *(undefined8 *)(unaff_x25 + 0x10) = uVar74;
                                *(undefined8 *)(unaff_x25 + 8) = uVar62;
                                *(undefined8 *)unaff_x25 = uVar70;
                                puVar53[0x19b] = uVar65;
                                puVar53[0x19a] = uVar86;
                                *(undefined1 *)(*(long *)(puVar11 + -0x1040) + 0x2d8) = 0;
                                unaff_x25 = *(code **)(puVar11 + -0x1058);
code_r0x00010059bbe4:
                                *(code **)(puVar11 + -0x1058) = unaff_x25;
                                pcVar22 = (code *)FUN_1004f68e8(puVar53 + 0x197,
                                                                *(undefined8 *)(puVar11 + -0x1028));
                                if ((int)pcVar22 == 0) {
                                  pcVar22 = (code *)FUN_100ca19bc(puVar53 + 0x197);
                                  lVar60 = puVar53[0x189];
                                  uVar68 = puVar53[0x18a];
                                  uVar62 = puVar53[0x18b];
                                  uVar86 = puVar53[0x18c];
                                  uVar70 = puVar53[0x18d];
                                  uVar65 = puVar53[0x18e];
                                  uVar72 = puVar53[399];
                                  uVar74 = puVar53[400];
                                  *(undefined8 *)(puVar11 + -0xb98) = puVar53[0x191];
                                  *(undefined8 *)(puVar11 + -0xba0) = uVar74;
                                  uVar74 = puVar53[0x192];
                                  uVar52 = puVar53[0x193];
                                  *(undefined8 *)(puVar11 + -0xc28) = puVar53[0x194];
                                  *(undefined8 *)(puVar11 + -0xc30) = uVar52;
                                  uVar41 = *(undefined1 *)(puVar53 + 0x195);
                                  uVar69 = *(undefined1 *)((long)puVar53 + 0xca9);
                                  *(undefined2 *)(puVar11 + 0xb054) =
                                       *(undefined2 *)((long)puVar53 + 0xcae);
                                  *(undefined4 *)(puVar11 + 0xb050) =
                                       *(undefined4 *)((long)puVar53 + 0xcaa);
                                  lVar61 = *(long *)puVar53[0x188];
                                  *(long *)puVar53[0x188] = lVar61 + -1;
                                  LORelease();
                                  if (lVar61 == 1) {
                                    DataMemoryBarrier(2,1);
                                    pcVar22 = (code *)
                                                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E
                                                            (*(long *)(puVar11 + -0x1048) + 0xc40);
                                  }
                                  *(undefined4 *)(*(long *)(puVar11 + -0x1030) + 0x1fa) = 0;
                                  puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                                  goto code_r0x00010059bc90;
                                }
                                uVar41 = 8;
                                goto code_r0x00010059bfe0;
                              }
                            }
                            **(undefined1 **)(puVar11 + -0x1070) = 3;
                            uVar41 = 7;
                          }
                          else {
                            uVar41 = 6;
                          }
code_r0x00010059bfe0:
                          **(undefined1 **)(puVar11 + -0x1088) = uVar41;
                        }
                        **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                        uVar41 = 0x1b;
                        goto LAB_100595774;
                      }
                    }
                    **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                    uVar41 = 0x18;
                    goto LAB_100595774;
                  }
                  uVar38 = uVar20 ^ 0x8000000000000000;
                  if (-1 < (long)uVar20) {
                    uVar38 = 10;
                  }
                  if (uVar38 != 0xc) {
                    if (uVar38 == 0) goto LAB_10059a96c;
                    *(undefined1 *)((long)puVar53 + 0xaba) = 0;
                    puVar1 = puVar53 + 0x143;
                    puVar53[0x150] = puVar53[0x10e];
                    puVar53[0x14f] = puVar53[0x10d];
                    puVar53[0x152] = puVar53[0x110];
                    puVar53[0x151] = puVar53[0x10f];
                    puVar53[0x154] = puVar53[0x112];
                    puVar53[0x153] = puVar53[0x111];
                    puVar53[0x155] = puVar53[0x113];
                    puVar53[0x148] = puVar53[0x106];
                    puVar53[0x147] = puVar53[0x105];
                    puVar53[0x14a] = puVar53[0x108];
                    puVar53[0x149] = puVar53[0x107];
                    puVar53[0x14c] = puVar53[0x10a];
                    puVar53[0x14b] = puVar53[0x109];
                    puVar53[0x14e] = puVar53[0x10c];
                    puVar53[0x14d] = puVar53[0x10b];
                    puVar53[0x144] = puVar53[0x102];
                    *puVar1 = puVar53[0x101];
                    puVar53[0x146] = puVar53[0x104];
                    puVar53[0x145] = puVar53[0x103];
                    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
                      if (1 < bRam000000010b62ab88 - 1) {
                        if (bRam000000010b62ab88 != 0) {
                          cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                             (&
                                              __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                                             );
                          puVar53 = *(undefined8 **)(puVar11 + -0x1048);
                          if (cVar16 != '\0') goto code_r0x00010059c108;
                        }
                        goto code_r0x00010059d0f8;
                      }
code_r0x00010059c108:
                      uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                                         );
                      if ((uVar20 & 1) == 0) goto code_r0x00010059d0f8;
                      *(ulong **)(puVar11 + 0x3160) = puVar1;
                      *(code **)(puVar11 + 0x3168) =
                           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
                      ;
                      *(undefined **)(puVar11 + -0xa80) = &UNK_108ca65f0;
                      *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x3160;
                      *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
                      *(undefined **)(puVar11 + 0xae38) = &UNK_10b208fd0;
                      *(undefined8 *)(puVar11 + 0x6d70) = 1;
                      *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xae30;
                      *(undefined8 *)(puVar11 + 0x6d80) = 1;
                      *(long *)(puVar11 + 0x6d88) =
                           ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                           + 0x30;
                      FUN_10059e5f4(puVar11 + 0x6d70);
                    }
                    else {
code_r0x00010059d0f8:
                      lVar61 = 
                      ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                      ;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        uVar74 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                                  + 0x20);
                        uVar70 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                                  + 0x28);
                        *(undefined8 *)(puVar11 + -0xd00) = 3;
                        *(undefined8 *)(puVar11 + -0xcf8) = uVar74;
                        *(undefined8 *)(puVar11 + -0xcf0) = uVar70;
                        pcVar19 = pcRam000000010b634c20;
                        if (pcRam000000010b66fd20 != (code *)0x2) {
                          pcVar19 = (code *)&UNK_10b3c24c8;
                        }
                        pcVar21 = pcRam000000010b634c18;
                        if (pcRam000000010b66fd20 != (code *)0x2) {
                          pcVar21 = (code *)&UNK_109adfc03;
                        }
                        iVar17 = (**(code **)(pcVar19 + 0x18))(pcVar21,puVar11 + -0xd00);
                        if (iVar17 != 0) {
                          *(ulong **)(puVar11 + -0xa80) = puVar1;
                          *(code **)(puVar11 + -0xa78) =
                               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
                          ;
                          *(undefined **)(puVar11 + 0xae30) = &UNK_108ca65f0;
                          *(undefined1 **)(puVar11 + 0xae38) = puVar11 + -0xa80;
                          *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + 0xae30;
                          *(undefined **)(puVar11 + 0xbe88) = &UNK_10b208fd0;
                          *(undefined8 *)(puVar11 + 0x6d70) = 1;
                          *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xbe80;
                          *(undefined8 *)(puVar11 + 0x6d80) = 1;
                          *(long *)(puVar11 + 0x6d88) =
                               ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                               + 0x30;
                          *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xcf8);
                          *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xd00);
                          *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + -0xcf0);
                          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                    (lVar61,pcVar21,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
                        }
                      }
                    }
                    cVar16 = __ZN14codex_protocol5error8CodexErr23to_codex_protocol_error17h3ce3e31048761f00E
                                       (puVar1);
                    if (cVar16 != '\x01') goto LAB_100597330;
                    *(long *)(puVar11 + 0x6d78) = puVar53[0x47] + 0x10;
                    *(undefined8 *)(puVar11 + 0x6d70) = 8;
                    auVar124 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                                         (puVar53 + 0x46,puVar11 + 0x6d70);
                    *(undefined1 (*) [16])(puVar53 + 0x159) = auVar124;
                    goto code_r0x000100590f0c;
                  }
                  puVar53[0x159] = puVar53[0x46] + 0x7a0;
                  *(undefined1 *)(puVar53 + 0x167) = 0;
code_r0x000100598a5c:
                  pcVar64 = (code *)FUN_100fd3e50(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028)
                                                 );
                  if (pcVar64 == (code *)0x0) {
                    **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                    uVar41 = 0x1f;
                    pcVar22 = (code *)0x0;
                    goto LAB_100595774;
                  }
                  if (((*(char *)(puVar53 + 0x167) == '\x03') &&
                      (*(char *)(puVar53 + 0x166) == '\x03')) &&
                     (*(char *)(puVar53 + 0x15d) == '\x04')) {
                    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                              (puVar53 + 0x15e);
                    if (puVar53[0x15f] != 0) {
                      (**(code **)(puVar53[0x15f] + 0x18))(puVar53[0x160]);
                    }
                  }
                  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                     (((bRam000000010b62a0b0 - 1 < 2 ||
                       ((bRam000000010b62a0b0 != 0 &&
                        (cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                            ), cVar16 != '\0')))) &&
                      (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                          (
                                          ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                          ),
                      lVar61 = 
                      ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E,
                      iVar17 != 0)))) {
                    puVar67 = (undefined8 *)_malloc(0x43);
                    if (puVar67 == (undefined8 *)0x0) {
code_r0x000100598fc8:
                      FUN_107c03c64(1,0x43);
                      goto code_r0x0001005975c0;
                    }
                    *(undefined4 *)((long)puVar67 + 0x3f) = 0x676e696e;
                    puVar67[1] = 0x6564206567616d69;
                    *puVar67 = 0x2064696c61766e49;
                    puVar67[3] = 0x697a6974696e6173;
                    puVar67[2] = 0x203b646574636574;
                    puVar67[5] = 0x742074757074756f;
                    puVar67[4] = 0x206c6f6f7420676e;
                    puVar67[7] = 0x6e6f73696f702074;
                    puVar67[6] = 0x6e6576657270206f;
                    *(undefined8 *)(puVar11 + -0xa80) = 0x43;
                    *(undefined8 **)(puVar11 + -0xa78) = puVar67;
                    *(undefined8 *)(puVar11 + -0xa70) = 0x43;
                    *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
                    *(undefined **)(puVar11 + 0xae38) = &DAT_10112965c;
                    *(char **)(puVar11 + 0xbe80) = s__108b1bd74;
                    *(undefined1 **)(puVar11 + 0xbe88) = puVar11 + 0xae30;
                    *(undefined1 **)(puVar11 + 0xb730) = puVar11 + 0xbe80;
                    *(undefined **)(puVar11 + 0xb738) = &UNK_10b208fd0;
                    *(undefined8 *)(puVar11 + 0x6d70) = 1;
                    *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xb730;
                    *(undefined8 *)(puVar11 + 0x6d80) = 1;
                    *(long *)(puVar11 + 0x6d88) = lVar61 + 0x30;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (lVar61,puVar11 + 0x6d70);
                    lVar61 = ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                      uVar74 = *(undefined8 *)
                                (
                                ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                + 0x20);
                      uVar70 = *(undefined8 *)
                                (
                                ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                + 0x28);
                      *(undefined8 *)(puVar11 + 0x3160) = 1;
                      *(undefined8 *)(puVar11 + 0x3168) = uVar74;
                      *(undefined8 *)(puVar11 + 0x3170) = uVar70;
                      pcVar19 = pcRam000000010b634c20;
                      if (pcRam000000010b66fd20 != (code *)0x2) {
                        pcVar19 = (code *)&UNK_10b3c24c8;
                      }
                      pcVar21 = pcRam000000010b634c18;
                      if (pcRam000000010b66fd20 != (code *)0x2) {
                        pcVar21 = (code *)&UNK_109adfc03;
                      }
                      iVar17 = (**(code **)(pcVar19 + 0x18))(pcVar21,puVar11 + 0x3160);
                      if (iVar17 != 0) {
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar61,pcVar21,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
                      }
                    }
code_r0x000100598e48:
                    if (*(long *)(puVar11 + -0xa80) != 0) {
                      _free(*(undefined8 *)(puVar11 + -0xa78));
                    }
                  }
                  else {
                    lVar61 = ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                      uVar74 = *(undefined8 *)
                                (
                                ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                + 0x20);
                      uVar70 = *(undefined8 *)
                                (
                                ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E
                                + 0x28);
                      *(undefined8 *)(puVar11 + 0xae30) = 1;
                      *(undefined8 *)(puVar11 + 0xae38) = uVar74;
                      *(undefined8 *)(puVar11 + 0xae40) = uVar70;
                      pcVar19 = pcRam000000010b634c20;
                      if (pcRam000000010b66fd20 != (code *)0x2) {
                        pcVar19 = (code *)&UNK_10b3c24c8;
                      }
                      pcVar21 = pcRam000000010b634c18;
                      if (pcRam000000010b66fd20 != (code *)0x2) {
                        pcVar21 = (code *)&UNK_109adfc03;
                      }
                      iVar17 = (**(code **)(pcVar19 + 0x18))(pcVar21,puVar11 + 0xae30);
                      lVar60 = 
                      ___ZN10codex_core4util14error_or_panic10__CALLSITE17h70e1b05e00acdbf5E;
                      if (iVar17 != 0) {
                        puVar67 = (undefined8 *)_malloc(0x43);
                        if (puVar67 == (undefined8 *)0x0) goto code_r0x000100598fc8;
                        *(undefined4 *)((long)puVar67 + 0x3f) = 0x676e696e;
                        puVar67[1] = 0x6564206567616d69;
                        *puVar67 = 0x2064696c61766e49;
                        puVar67[3] = 0x697a6974696e6173;
                        puVar67[2] = 0x203b646574636574;
                        puVar67[5] = 0x742074757074756f;
                        puVar67[4] = 0x206c6f6f7420676e;
                        puVar67[7] = 0x6e6f73696f702074;
                        puVar67[6] = 0x6e6576657270206f;
                        *(undefined8 *)(puVar11 + -0xa80) = 0x43;
                        *(undefined8 **)(puVar11 + -0xa78) = puVar67;
                        *(undefined8 *)(puVar11 + -0xa70) = 0x43;
                        *(undefined1 **)(puVar11 + 0xb600) = puVar11 + -0xa80;
                        *(undefined **)(puVar11 + 0xb608) = &DAT_10112965c;
                        *(char **)(puVar11 + 0xb380) = s__108b1bd74;
                        *(undefined1 **)(puVar11 + 0xb388) = puVar11 + 0xb600;
                        pcVar22 = (code *)(puVar11 + 0x6d70);
                        *(undefined1 **)(puVar11 + 0xad00) = puVar11 + 0xb380;
                        *(undefined **)(puVar11 + 0xad08) = &UNK_10b208fd0;
                        *(undefined8 *)(puVar11 + 0x3160) = 1;
                        *(undefined1 **)(puVar11 + 0x3168) = puVar11 + 0xad00;
                        *(undefined8 *)(puVar11 + 0x3170) = 1;
                        *(long *)(puVar11 + 0x3178) = lVar60 + 0x30;
                        pcVar30 = *(code **)(lVar61 + 0x60);
                        pcVar42 = *(code **)(lVar61 + 0x68);
                        pcVar43 = *(code **)(lVar61 + 0x50);
                        pcVar48 = *(code **)(lVar61 + 0x58);
                        uVar72 = 1;
                        if (pcVar43 == (code *)0x0) {
                          uVar72 = 2;
                        }
                        uVar50 = *(undefined4 *)(lVar61 + 8);
                        uVar51 = *(undefined4 *)(lVar61 + 0xc);
                        *(undefined1 **)(puVar11 + 0xb730) = puVar11 + 0x3160;
                        puVar11[0xb738] = 1;
                        *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + 0xb730;
                        *(undefined **)(puVar11 + 0xbe88) = &DAT_1061c2098;
                        pcVar39 = (code *)0x1;
                        if (pcVar30 == (code *)0x0) {
                          pcVar39 = (code *)0x2;
                        }
                        *(undefined8 *)(puVar11 + 0x6da8) = *(undefined8 *)(puVar11 + 0xae38);
                        *(undefined8 *)(puVar11 + 0x6da0) = *(undefined8 *)(puVar11 + 0xae30);
                        uVar52 = *(undefined8 *)(puVar11 + 0xae40);
                        pcVar32 = 
                        "try/src/index.crates.io-1949cf8c6b5b557f/toml_edit-0.24.0+spec-1.1.0/src/parser/key.rs"
                        ;
code_r0x000100598e00:
                        *(undefined8 *)(puVar11 + 0x6db0) = uVar52;
                        *(char **)(puVar11 + 0x6dc0) = pcVar32 + 0xf4f;
                        *(undefined1 **)(puVar11 + 0x6dc8) = puVar11 + 0xbe80;
                        *(undefined8 *)(puVar11 + 0x6d70) = uVar72;
                        *(code **)(puVar11 + 0x6d78) = pcVar43;
                        *(code **)(puVar11 + 0x6d80) = pcVar48;
                        *(code **)(puVar11 + 0x6d88) = pcVar39;
                        *(code **)(puVar11 + 0x6d90) = pcVar30;
                        *(code **)(puVar11 + 0x6d98) = pcVar42;
                        *(undefined4 *)(pcVar22 + 0x48) = uVar50;
                        *(undefined4 *)(pcVar22 + 0x4c) = uVar51;
                        (**(code **)(pcVar19 + 0x20))(pcVar21,puVar11 + 0x6d70);
                        goto code_r0x000100598e48;
                      }
                    }
                  }
                  auVar124 = __ZN10codex_core15context_manager7history14ContextManager24replace_last_turn_images17h047781f21f473a75E
                                       (pcVar64 + 0x4f0,&UNK_108ca6541,0xd);
                  if ((auVar124._0_8_ & 1) == 0) {
                    __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                              (pcVar64,1);
                    puVar67 = (undefined8 *)_malloc(0x43);
                    if (puVar67 == (undefined8 *)0x0) {
                      FUN_107c03c64(1,0x43);
                      goto code_r0x0001005975c0;
                    }
                    *(undefined4 *)((long)puVar67 + 0x3f) = 0x2e6e6961;
                    puVar67[1] = 0x6e69206567616d69;
                    *puVar67 = 0x2064696c61766e49;
                    puVar67[3] = 0x617373656d207473;
                    puVar67[2] = 0x616c2072756f7920;
                    puVar67[5] = 0x766f6d6572206573;
                    puVar67[4] = 0x61656c50202e6567;
                    puVar67[7] = 0x6167612079727420;
                    puVar67[6] = 0x646e612074692065;
                    *(undefined8 *)(puVar11 + 0x6d78) = 0x43;
                    *(undefined8 **)(puVar11 + 0x6d80) = puVar67;
                    *(undefined8 *)(puVar11 + 0x6d88) = 0x43;
                    puVar11[0x6d90] = 8;
                    *(undefined4 *)(puVar11 + 0x6d70) = 0;
                    *(undefined1 *)((long)puVar53 + 0xabf) = 0;
                    _memcpy(puVar53 + 0x159,puVar11 + 0x6d70,0x1d8);
                    puVar53[0x195] = puVar53[0x47] + 0x10;
                    puVar53[0x194] = puVar53[0x46] + 0x10;
                    *(undefined1 *)(*(long *)(puVar11 + -0x1030) + 0x5b7) = 0;
                    goto code_r0x000100598f54;
                  }
                  if (*pcVar64 == (code)0x0) {
                    *pcVar64 = (code)0x1;
                  }
                  else {
                    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                              (pcVar64,auVar124._8_8_,1000000000);
                  }
                  FUN_1060fa678(pcVar64,1,pcVar64);
                  lVar61 = puVar53[0x101];
joined_r0x00010059be14:
                  if ((lVar61 != -0x7fffffffffffffe0) &&
                     ((*(byte *)((long)puVar53 + 0xaba) & 1) != 0)) {
                    FUN_100df5738(puVar53 + 0x101);
                  }
                  *(undefined1 *)((long)puVar53 + 0xaba) = 0;
                  if ((puVar53[0xfe] != -0x8000000000000000) && (puVar53[0xfe] != 0)) {
                    _free(puVar53[0xff]);
                  }
                  lVar66 = puVar53[0xfc];
                  lVar61 = puVar53[0xfd] + 1;
                  lVar60 = lVar66;
                  while (lVar61 = lVar61 + -1, lVar61 != 0) {
                    FUN_100e02a24(lVar60);
                    lVar60 = lVar60 + 0xc0;
                  }
                  if (puVar53[0xfb] != 0) {
                    _free(lVar66);
                  }
                  if ((*(byte *)((long)puVar53 + 0xab2) & 1) == 0) goto code_r0x000100598528;
code_r0x00010059916c:
                  puVar53[0x15b] = puVar53[0x46] + 0x6f8;
                  puVar53[0x15c] = puVar53[0x46] + 0x1118;
                  *(undefined1 *)((long)puVar53 + 0xae9) = 0;
code_r0x000100599188:
                  pcVar22 = (code *)FUN_100576380(puVar11 + 0x6d70,puVar53 + 0x159,
                                                  *(undefined8 *)(puVar11 + -0x1028));
                  lVar61 = *(long *)(puVar11 + 0x6d70);
                  if (lVar61 == -0x8000000000000000) {
                    **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
                    uVar41 = 0x10;
                    goto LAB_100595774;
                  }
                  puVar67 = *(undefined8 **)(puVar11 + 0x6d78);
                  lVar60 = *(long *)(puVar11 + 0x6d80);
                  FUN_100cce0d0(puVar53 + 0x159);
                } while( true );
              }
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xe8);
              break;
            }
            cVar28 = (code)0x4;
          }
          pcVar22 = (code *)0x0;
          *pcVar19 = cVar28;
          **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
          uVar41 = 0xe;
          goto LAB_100595774;
        }
      }
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 0xb;
      goto LAB_100595774;
    }
    uVar74 = *(undefined8 *)(puVar11 + -0xf20);
    *(undefined8 *)(unaff_x22 + 8) = *(undefined8 *)(puVar11 + -0xf18);
    *(undefined8 *)unaff_x22 = uVar74;
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(puVar11 + -0xf10);
    puVar53[0x15c] = puVar53 + 0x46;
    puVar53[0x15d] = puVar53 + 0x47;
    **(undefined1 **)(puVar11 + -0x1040) = 0;
code_r0x0001005965a8:
    pcVar22 = (code *)func_0x0001004f6c44(puVar53 + 0x159,*(undefined8 *)(puVar11 + -0x1028));
    if ((int)pcVar22 != 0) {
      **(undefined8 **)(puVar11 + -0x1050) = 0x8000000000000001;
      uVar41 = 9;
      goto LAB_100595774;
    }
    FUN_100ca1af4(puVar53 + 0x159);
    FUN_100e18c38(puVar53 + 0xa8);
code_r0x0001005965dc:
    *(undefined1 *)((long)puVar53 + 0xabd) = 0;
    goto code_r0x00010059cdc8;
  case (code)0xb8:
code_r0x000100596b90:
    break;
  case (code)0xb9:
    goto code_r0x000100596498;
  case (code)0xba:
    goto code_r0x000100596d50;
  case (code)0xbb:
    goto code_r0x000100597190;
  case (code)0xbc:
    goto code_r0x000100597398;
  case (code)0xbd:
    pcVar22 = (code *)(puVar11 + 0x6d70);
code_r0x000100596d70:
    FUN_100e3e028(pcVar22);
    FUN_100e51f04(puVar11 + 0xaaa0);
code_r0x000100596f70:
    lVar61 = **(long **)(*(long *)(puVar11 + -0x1048) + 0xb90);
    **(long **)(*(long *)(puVar11 + -0x1048) + 0xb90) = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E
                (*(long *)(puVar11 + -0x1048) + 0xb90);
    }
    if ((*(byte *)(*(long *)(puVar11 + -0x1048) + 0xba9) & 1) != 0) {
      FUN_100e3e028(*(long *)(puVar11 + -0x1048) + 0xad8);
    }
code_r0x000100596fb0:
    lVar61 = *(long *)(puVar11 + -0x1048);
    *(undefined1 *)(lVar61 + 0xba9) = 0;
    pcVar30 = (code *)(ulong)*(byte *)(lVar61 + 0xba8);
code_r0x000100596fbc:
    if (((ulong)pcVar30 & 1) != 0) {
      FUN_100e30ca8(*(long *)(puVar11 + -0x1048) + 0xbb0);
    }
code_r0x000100596fcc:
    *(undefined1 *)(*(long *)(puVar11 + -0x1048) + 0xba8) = 0;
    **(undefined1 **)(puVar11 + -0x1060) = 2;
    FUN_100cb7e8c(*(undefined8 *)(puVar11 + -0x1058));
    puVar67 = *(undefined8 **)(puVar11 + -0x1048);
code_r0x0001005989d4:
    FUN_100e759a8(puVar67 + 0xa2);
    if ((*(byte *)((long)puVar67 + 0xabc) & 1) != 0) {
      FUN_100e47a48(puVar67 + 0x9f);
    }
    *(undefined1 *)((long)puVar67 + 0xabc) = 0;
code_r0x000100597540:
    FUN_100e08e20(puVar67 + 0x4d);
    FUN_100e3ff3c(puVar67 + 0x4c);
    FUN_100e4a774(puVar67 + 0x49);
    lVar61 = *(long *)puVar67[0x48];
    *(long *)puVar67[0x48] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(puVar67 + 0x48);
    }
    lVar61 = *(long *)puVar67[0x47];
    *(long *)puVar67[0x47] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(puVar67 + 0x47);
    }
    lVar61 = *(long *)puVar67[0x46];
    *(long *)puVar67[0x46] = lVar61 + -1;
    LORelease();
    bVar15 = lVar61 == 1;
code_r0x0001005975a0:
    if (bVar15) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(puVar67 + 0x46);
    }
    *(undefined1 *)(puVar67 + 0x156) = 2;
    __Unwind_Resume(*(undefined8 *)(puVar11 + -0x1028));
    break;
  case (code)0xbe:
    if (pcVar30 != (code *)0x0) {
      _free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0xc00));
    }
    goto code_r0x000100596fb0;
  case (code)0xbf:
    goto LAB_100597310;
  case (code)0xc0:
    bVar15 = pcVar30 == (code *)0x8000000000000020;
code_r0x0001005973f4:
    if (!bVar15) goto code_r0x00010059e0b4;
    goto code_r0x00010059926c;
  case (code)0xc1:
    goto code_r0x000100596898;
  case (code)0xc2:
    goto code_r0x000100590d54;
  case (code)0xc3:
    goto code_r0x0001005925f0;
  case (code)0xc4:
    goto code_r0x0001005925e0;
  case (code)0xc6:
    goto code_r0x000100590e20;
  case (code)0xc8:
    goto code_r0x00010059116c;
  case (code)0xca:
    goto code_r0x000100591374;
  case (code)0xcb:
    goto code_r0x0001005913d8;
  case (code)0xcc:
    goto code_r0x0001005914b8;
  case (code)0xcd:
    goto code_r0x000100591614;
  case (code)0xce:
    goto code_r0x000100591658;
  case (code)0xcf:
    goto code_r0x0001005916d8;
  case (code)0xd1:
    goto code_r0x00010059326c;
  case (code)0xd2:
    goto code_r0x000100593260;
  case (code)0xd5:
    goto code_r0x000100592380;
  case (code)0xd6:
    goto code_r0x000100592470;
  case (code)0xd7:
    goto code_r0x0001005924b4;
  case (code)0xd8:
    goto code_r0x000100592570;
  case (code)0xd9:
    goto code_r0x0001005926bc;
  case (code)0xda:
    goto code_r0x000100590ea8;
  case (code)0xdb:
    goto code_r0x000100592924;
  case (code)0xdc:
    goto code_r0x000100590ecc;
  case (code)0xde:
    goto code_r0x00010059503c;
  case (code)0xdf:
code_r0x000100595030:
    _free(*(undefined8 *)(pcVar30 + 0x2b10));
    pcVar30 = *(code **)(puVar11 + -0x1040);
code_r0x00010059503c:
    if (((byte)pcVar30[0xe7b] & 1) != 0) goto code_r0x000100595044;
    goto code_r0x00010059531c;
  case (code)0xe0:
    goto code_r0x0001005922d0;
  case (code)0xe1:
    goto code_r0x000100592a3c;
  case (code)0xe2:
    goto code_r0x000100592b0c;
  case (code)0xe4:
    goto code_r0x000100592c34;
  case (code)0xe5:
    goto code_r0x000100592da4;
  case (code)0xe6:
    goto FUN_100590ff0;
  case (code)0xe8:
code_r0x000100590f84:
    _free(pcVar22);
code_r0x000100590f88:
    if (pcVar21 != (code *)0x0) {
code_r0x000100590f8c:
      pcVar30 = (code *)(puVar11 + 0xae30);
code_r0x000100590f90:
      *(code **)(pcVar30 + 0x900) = pcVar21;
      pcVar30 = (code *)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
code_r0x000100590fa0:
      if (*(ulong *)pcVar30 < 4) {
        pcVar21 = (code *)&
                          __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
        ;
code_r0x000100590fb4:
        if (1 < (byte)pcVar21[0x10] - 1) {
          if ((byte)pcVar21[0x10] != 0) {
            cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
                               );
            puVar53 = *(undefined8 **)(puVar11 + -0x1048);
            if (cVar16 != '\0') goto code_r0x000100590fc4;
          }
          goto code_r0x000100591d48;
        }
code_r0x000100590fc4:
        pcVar22 = (code *)__ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (*(undefined8 *)pcVar21);
code_r0x000100590fcc:
        if (((ulong)pcVar22 & 1) == 0) goto code_r0x000100591d48;
        pcVar30 = *(code **)pcVar21;
code_r0x000100590fd4:
        pcVar30 = pcVar30 + 0x30;
code_r0x000100590fd8:
        pcVar39 = (code *)(puVar11 + 0xb730);
code_r0x000100590fe0:
        pcVar42 = (code *)0x10002f000;
code_r0x000100590fe4:
        pcVar42 = pcVar42 + 0x8e4;
        *(code **)(puVar11 + 0x3160) = pcVar39;
code_r0x000100590fec:
        *(code **)(puVar11 + 0x3168) = pcVar42;
FUN_100590ff0:
        *(char **)(puVar11 + -0xa80) = s__failed_to_usage_limit_active_go_108ac17b7;
        *(undefined1 **)(puVar11 + -0xa78) = puVar11 + 0x3160;
        *(undefined1 **)(puVar11 + 0xae30) = puVar11 + -0xa80;
        *(undefined **)(puVar11 + 0xae38) = &UNK_10b208fd0;
        pcVar39 = (code *)0x1;
        *(undefined8 *)(puVar11 + 0x6d70) = 1;
        *(undefined1 **)(puVar11 + 0x6d78) = puVar11 + 0xae30;
code_r0x00010059102c:
        *(code **)(puVar11 + 0x6d80) = pcVar39;
        *(code **)(puVar11 + 0x6d88) = pcVar30;
        FUN_10059e100(puVar11 + 0x6d70);
code_r0x000100591040:
      }
      else {
code_r0x000100591d48:
        pcVar21 = 
        ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar74 = *(undefined8 *)
                    (
                    ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
                    + 0x20);
          uVar70 = *(undefined8 *)
                    (
                    ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
                    + 0x28);
          *(undefined8 *)(puVar11 + -0xd40) = 2;
          *(undefined8 *)(puVar11 + -0xd38) = uVar74;
          *(undefined8 *)(puVar11 + -0xd30) = uVar70;
          pcVar19 = pcRam000000010b634c20;
          if (pcRam000000010b66fd20 != (code *)0x2) {
            pcVar19 = (code *)&UNK_10b3c24c8;
          }
          unaff_x22 = pcRam000000010b634c18;
          if (pcRam000000010b66fd20 != (code *)0x2) {
            unaff_x22 = (code *)&UNK_109adfc03;
          }
          iVar17 = (**(code **)(pcVar19 + 0x18))(unaff_x22,puVar11 + -0xd40);
          if (iVar17 != 0) {
            pcVar30 = ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha70534181baf5964E
                      + 0x30;
            *(undefined1 **)(puVar11 + -0xa80) = puVar11 + 0xb730;
            *(code **)(puVar11 + -0xa78) =
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            *(char **)(puVar11 + 0xae30) = s__failed_to_usage_limit_active_go_108ac17b7;
            *(undefined1 **)(puVar11 + 0xae38) = puVar11 + -0xa80;
            *(undefined1 **)(puVar11 + 0xbe80) = puVar11 + 0xae30;
            *(undefined **)(puVar11 + 0xbe88) = &UNK_10b208fd0;
            pcVar39 = (code *)0x1;
            pcVar42 = (code *)(puVar11 + 0xbe80);
            *(undefined8 *)(puVar11 + 0x6d70) = 1;
code_r0x000100591e38:
            *(code **)(puVar11 + 0x6d78) = pcVar42;
            *(code **)(puVar11 + 0x6d80) = pcVar39;
            *(code **)(puVar11 + 0x6d88) = pcVar30;
            *(undefined8 *)(puVar11 + 0x3168) = *(undefined8 *)(puVar11 + -0xd38);
            *(undefined8 *)(puVar11 + 0x3160) = *(undefined8 *)(puVar11 + -0xd40);
            *(undefined8 *)(puVar11 + 0x3170) = *(undefined8 *)(puVar11 + -0xd30);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (pcVar21,unaff_x22,pcVar19,puVar11 + 0x3160,puVar11 + 0x6d70);
          }
        }
      }
      (**(code **)**(undefined8 **)(puVar11 + 0xb730))();
    }
LAB_100597300:
    FUN_100df5738(puVar53 + 0x159);
    bVar27 = *(byte *)((long)puVar53 + 0xabb);
joined_r0x00010059cd2c:
    if ((bVar27 & 1) != 0) {
LAB_100597310:
      if ((puVar53[0x114] != -0x8000000000000000) && (puVar53[0x114] != 0)) {
        _free(puVar53[0x115]);
      }
    }
    *(undefined2 *)((long)puVar53 + 0xaba) = 0;
    if ((puVar53[0xfe] != -0x8000000000000000) && (puVar53[0xfe] != 0)) {
      _free(puVar53[0xff]);
    }
    lVar66 = puVar53[0xfc];
    lVar61 = puVar53[0xfd] + 1;
    lVar60 = lVar66;
    while (lVar61 = lVar61 + -1, lVar61 != 0) {
      FUN_100e02a24(lVar60);
      lVar60 = lVar60 + 0xc0;
    }
    if (puVar53[0xfb] != 0) {
      _free(lVar66);
    }
    lVar61 = *(long *)puVar53[0xc4];
    *(long *)puVar53[0xc4] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(puVar53 + 0xc4);
    }
    if (puVar53[0xc1] != -0x8000000000000000 && puVar53[0xc1] != 0) {
      _free(puVar53[0xc2]);
    }
    *(undefined1 *)(puVar53 + 0x158) = 0;
code_r0x00010059cdc8:
    lVar61 = puVar53[0xa3];
    if (lVar61 != 0) {
      lVar60 = puVar53[0xa5];
      if (lVar60 != 0) {
        plVar57 = (long *)puVar53[0xa2];
        plVar58 = plVar57 + 1;
        lVar66 = *plVar57;
        uVar20 = CONCAT17(-(-1 < lVar66),
                          CONCAT16(-(-1 < (char)((ulong)lVar66 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar66 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar66 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar66 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar66
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar66 >> 8)),-(-1 < (char)lVar66)))))))) &
                 0x8080808080808080;
        do {
          while (uVar20 == 0) {
            lVar66 = *plVar58;
            plVar57 = plVar57 + -0x18;
            plVar58 = plVar58 + 1;
            uVar20 = CONCAT17(-(-1 < lVar66),
                              CONCAT16(-(-1 < (char)((ulong)lVar66 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar66 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar66 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar66 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar66 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar66 >> 8)),
                                                           -(-1 < (char)lVar66)))))))) &
                     0x8080808080808080;
          }
          uVar38 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
          iVar17 = (int)((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
          if (plVar57[(long)-iVar17 * 3 + -3] != 0) {
            _free(plVar57[(long)-iVar17 * 3 + -2]);
          }
          uVar20 = uVar20 - 1 & uVar20;
          lVar60 = lVar60 + -1;
        } while (lVar60 != 0);
      }
      if (lVar61 * 0x19 != -0x21) {
        _free(puVar53[0xa2] + lVar61 * -0x18 + -0x18);
      }
    }
    if ((*(byte *)((long)puVar53 + 0xabc) & 1) != 0) {
      lVar66 = puVar53[0xa0];
      lVar61 = puVar53[0xa1] + 1;
      lVar60 = lVar66;
      while (lVar61 = lVar61 + -1, lVar61 != 0) {
        FUN_100e02a24(lVar60);
        lVar60 = lVar60 + 0xc0;
      }
      if (puVar53[0x9f] != 0) {
        _free(lVar66);
      }
    }
    *(undefined1 *)((long)puVar53 + 0xabc) = 0;
LAB_100597440:
    FUN_100e08e20(puVar53 + 0x4d);
    puVar67 = puVar53 + 0x4c;
    pcVar22 = (code *)__ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                                (puVar67);
    lVar61 = *(long *)*puVar67;
    *(long *)*puVar67 = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar67);
    }
    lVar66 = puVar53[0x4a];
    lVar61 = lVar66;
    for (lVar60 = puVar53[0x4b]; lVar60 != 0; lVar60 = lVar60 + -1) {
      pcVar22 = (code *)FUN_100e06c08(lVar61);
      lVar61 = lVar61 + 0x38;
    }
    if (puVar53[0x49] != 0) {
      pcVar22 = (code *)_free(lVar66);
    }
    lVar61 = *(long *)puVar53[0x48];
    *(long *)puVar53[0x48] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E
                                  (puVar53 + 0x48);
    }
    lVar61 = *(long *)puVar53[0x47];
    *(long *)puVar53[0x47] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E
                                  (puVar53 + 0x47);
    }
    lVar61 = *(long *)puVar53[0x46];
    *(long *)puVar53[0x46] = lVar61 + -1;
    LORelease();
    if (lVar61 == 1) {
      DataMemoryBarrier(2,1);
      pcVar22 = (code *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E
                                  (puVar53 + 0x46);
    }
    uVar74 = 0x8000000000000000;
    goto LAB_10059d0dc;
  case (code)0xeb:
    goto code_r0x000100590f40;
  case (code)0xec:
    goto code_r0x000100590f90;
  case (code)0xed:
    goto code_r0x0001005942f4;
  case (code)0xef:
code_r0x000100595028:
    if (pcVar30 != (code *)0x0) {
      pcVar30 = *(code **)(puVar11 + -0x1048);
      goto code_r0x000100595030;
    }
    goto code_r0x000100595044;
  case (code)0xf0:
    pcVar30 = *(code **)(pcVar30 + 0x2b08);
    if (pcVar30 != (code *)0x8000000000000000) goto code_r0x000100595028;
code_r0x000100595044:
    FUN_100e75348(*(long *)(puVar11 + -0x1048) + 0x2b20);
    if ((((((((*(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01') &&
             (FUN_100e1c490(*(long *)(puVar11 + -0x1048) + 0x2b38),
             *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01')) &&
            (FUN_100e634c4(*(long *)(puVar11 + -0x1048) + 0x2ff0),
            *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01')) &&
           ((FUN_100e75348(*(long *)(puVar11 + -0x1048) + 0x2b58),
            *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01' &&
            (FUN_100e75348(*(long *)(puVar11 + -0x1048) + 0x2b70),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
          ((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2b88) == pcVar21 ||
           ((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2b88) == (code *)0x0 ||
            (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2b90)),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
         ((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2ba0) == pcVar21 ||
          ((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2ba0) == (code *)0x0 ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2ba8)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
        ((((((FUN_100dff438(*(long *)(puVar11 + -0x1048) + 0x1b08),
             (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
             (((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2770) == 0 ||
               (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2778)),
               (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
              (FUN_100e582c8(*(long *)(puVar11 + -0x1048) + 0x2788),
              (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
            (FUN_100d7bdac(*(long *)(puVar11 + -0x1048) + 0x3020),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
           (((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2bb8) == -0x8000000000000000 ||
             (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2bb8) == 0)) ||
            (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2bc0)),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
          (((FUN_100d04a7c(*(long *)(puVar11 + -0x1048) + 0x3070),
            *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01' &&
            (FUN_100e1ad68(*(long *)(puVar11 + -0x1048) + 0x27a0),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
           ((FUN_100cfe600(*(long *)(puVar11 + -0x1048) + 0x30a8),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
            (FUN_100dff494(*(long *)(puVar11 + -0x1048) + 0x2bd0),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
         ((*(long *)(*(long *)(puVar11 + -0x1048) + 0x27b8) == 0 ||
          (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x27c0)),
          (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
       (((*(long *)(*(long *)(puVar11 + -0x1048) + 0x27d0) == 0 ||
         (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x27d8)),
         (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
        ((((*(long *)(*(long *)(puVar11 + -0x1048) + 0x27e8) == 0 ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x27f0)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
          (((*(ulong *)(*(long *)(puVar11 + -0x1048) + 0x2c38) & 0x7fffffffffffffff) == 0 ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2c40)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
         (plVar57 = *(long **)(*(long *)(puVar11 + -0x1048) + 0x30c0), plVar57 != (long *)0x0))))))
    {
      lVar61 = *plVar57;
      *plVar57 = lVar61 + -1;
      LORelease();
      if (lVar61 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf037e8b028e32f13E
                  (*(long *)(puVar11 + -0x1048) + 0x30c0);
      }
    }
code_r0x00010059531c:
    if ((*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0) {
      pcVar21 = (code *)0x8000000000000000;
      if (((((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c50) == -0x8000000000000000) ||
            (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c50) == 0)) ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2c58)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
          (((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c68) == -0x8000000000000000 ||
            (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c68) == 0)) ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2c70)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
         ((((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c80) == -0x8000000000000000 ||
            (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c80) == 0)) ||
           (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2c88)),
           (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
          (((((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c98) == -0x8000000000000000 ||
              (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2c98) == 0)) ||
             (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2ca0)),
             (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
            (FUN_100e78dbc(*(long *)(puVar11 + -0x1048) + 0x2cb0),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
           ((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2800) == 0 ||
            (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2808)),
            (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))))) {
        pcVar30 = *(code **)(*(long *)(puVar11 + -0x1048) + 0x2cc8);
        if (pcVar30 != (code *)0x8000000000000000) {
code_r0x00010059542c:
          if (pcVar30 != (code *)0x0) {
            pcVar30 = *(code **)(puVar11 + -0x1048);
code_r0x000100595434:
            _free(*(undefined8 *)(pcVar30 + 0x2cd0));
            if ((*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) == 0)
            goto code_r0x0001005956d0;
          }
        }
        if ((((((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2ce0) == pcVar21) ||
               (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2ce0) == (code *)0x0)) ||
              (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2ce8)),
              (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
             ((((FUN_100df3274(*(long *)(puVar11 + -0x1048) + 0x2cf8),
                (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
                (((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d28) == pcVar21 ||
                  (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d28) == (code *)0x0)) ||
                 (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2d30)),
                 (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
               ((((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d40) == pcVar21 ||
                  (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d40) == (code *)0x0)) ||
                 (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2d48)),
                 (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
                (((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d58) == pcVar21 ||
                  (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d58) == (code *)0x0)) ||
                 (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2d60)),
                 (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
              (((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d70) == pcVar21 ||
                (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d70) == (code *)0x0)) ||
               (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2d78)),
               (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))) &&
            ((((((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d88) == pcVar21 ||
                 (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2d88) == (code *)0x0)) ||
                (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2d90)),
                (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
               (((*(code **)(*(long *)(puVar11 + -0x1048) + 0x2da0) == pcVar21 ||
                 (*(code **)(*(long *)(puVar11 + -0x1048) + 0x2da0) == (code *)0x0)) ||
                (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2da8)),
                (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
              (((*(ulong *)(*(long *)(puVar11 + -0x1048) + 0x2db8) & 0x7fffffffffffffff) == 0 ||
               (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2dc0)),
               (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))) &&
             ((FUN_100e75348(*(long *)(puVar11 + -0x1048) + 0x2dd0),
              (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
              ((((FUN_100cc08c4(*(long *)(puVar11 + -0x1048) + 0x2fc8),
                 (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
                 (FUN_100e78c9c(*(long *)(puVar11 + -0x1048) + 0x2e88),
                 *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01')) &&
                (FUN_100e08f44(*(long *)(puVar11 + -0x1048) + 0x2de8),
                (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
               (FUN_100e38898(*(long *)(puVar11 + -0x1048) + 0x2f08),
               (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)))))))) &&
           ((((*(long *)(*(long *)(puVar11 + -0x1048) + 0x2e70) == -0x8000000000000000 ||
              (*(long *)(*(long *)(puVar11 + -0x1048) + 0x2e70) == 0)) ||
             (_free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0x2e78)),
             (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0)) &&
            ((FUN_100decb54(*(long *)(puVar11 + -0x1048) + 0x1788),
             (*(byte *)(*(long *)(puVar11 + -0x1040) + 0xe7b) & 1) != 0 &&
             (FUN_100e08d70(*(long *)(puVar11 + -0x1048) + 0x2818),
             *(char *)(*(long *)(puVar11 + -0x1040) + 0xe7b) == '\x01')))))) {
          func_0x000100df542c(*(long *)(puVar11 + -0x1048) + 0x2848);
        }
      }
    }
code_r0x0001005956d0:
    *(undefined2 *)(*(long *)(puVar11 + -0x1040) + 0xe7b) = 0;
    if (*(long *)(*(long *)(puVar11 + -0x1048) + 0xba0) != 0) {
      _free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0xba8));
    }
    **(undefined1 **)(puVar11 + -0x1088) = 2;
    FUN_100cbccb8(*(undefined8 *)(puVar11 + -0x1090));
    if (((*(byte *)(*(long *)(puVar11 + -0x1048) + 0xb68) & 1) != 0) &&
       (**(long **)(puVar11 + -0x1070) != 0)) {
      _free(*(undefined8 *)(*(long *)(puVar11 + -0x1048) + 0xb08));
    }
    *(undefined1 *)(*(long *)(puVar11 + -0x1048) + 0xb68) = 0;
    **(undefined1 **)(puVar11 + -0x1058) = 2;
    func_0x000100cd8f90(*(undefined8 *)(puVar11 + -0x1070));
    **(undefined1 **)(puVar11 + -0x1060) = 2;
    FUN_100c9d8a4(*(undefined8 *)(puVar11 + -0x1080));
    puVar67 = *(undefined8 **)(puVar11 + -0x1048);
    goto code_r0x000100597540;
  case (code)0xf1:
    goto code_r0x0001005925a0;
  case (code)0xf2:
    goto code_r0x000100592598;
  case (code)0xf3:
    goto code_r0x00010059258c;
  case (code)0xf4:
    goto code_r0x000100592594;
  case (code)0xf5:
    goto code_r0x00010059259c;
  case (code)0xf6:
    FUN_100e8330c(*(long *)(puVar11 + -0x1048) + 0x2ab8);
    *(undefined2 *)(*(long *)(puVar11 + -0x1030) + 0x60f) = 2;
    FUN_100da6ff8(0x8000000000000020);
    goto code_r0x000100596f70;
  case (code)0xf7:
code_r0x000100596bc0:
    FUN_107c05cc4(pcVar22 + 0xf58);
    break;
  case (code)0xf8:
    goto LAB_100592588;
  case (code)0xf9:
    goto code_r0x000100592590;
  case (code)0xfa:
    goto code_r0x0001005925cc;
  case (code)0xfc:
code_r0x0001005913b4:
    if ((int)pcVar30 != 0) {
      *(code **)(puVar11 + -0x1058) = unaff_x22;
      if ((int)pcVar30 == 1) {
        FUN_107c05cc0(&UNK_10b217f38);
      }
      else {
        FUN_107c05cc4(&UNK_10b217f38);
      }
      break;
    }
    lVar61 = extraout_x1[0x15f];
    lVar60 = extraout_x1[0x160];
    uVar74 = extraout_x1[0x15b];
    uVar70 = extraout_x1[0x15c];
    goto code_r0x0001005976f4;
  case (code)0xfd:
    goto code_r0x000100591148;
  case (code)0xfe:
    goto code_r0x000100591294;
  }
code_r0x0001005975c0:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x1005975c4);
  (*pcVar19)();
code_r0x000100596478:
  plVar57 = (long *)puVar53[0x172];
  lVar61 = *plVar57;
  *plVar57 = lVar61 + -1;
  LORelease();
  if (lVar61 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
  }
  *(undefined1 *)((long)puVar53 + 0xba9) = 0;
code_r0x000100596498:
  bVar14 = true;
code_r0x00010059649c:
  *(undefined1 *)(puVar53 + 0x175) = 0;
code_r0x0001005964a8:
  uVar74 = *(undefined8 *)(puVar11 + -0x1058);
  **(undefined1 **)(puVar11 + -0x1060) = 1;
  FUN_100cb7e8c(uVar74);
  if (!bVar14) {
    if (puVar53[0x4b] != 0) {
      func_0x0001013ed5e4(puVar11 + 0x6d70,puVar53[0x4a]);
      *(undefined1 *)((long)puVar53 + 0xabd) = 1;
      pcVar30 = (code *)(puVar53 + 0xa8);
      pcVar39 = (code *)(puVar53 + 0xa9);
      puVar53[0xab] = *(undefined8 *)(puVar11 + 0x6d80);
      uVar38 = *(ulong *)(puVar11 + 0x6d78);
      uVar20 = *(ulong *)(puVar11 + 0x6d70);
      goto code_r0x0001005964f0;
    }
    goto code_r0x000100596770;
  }
  goto code_r0x00010059cdc8;
}

