
/* WARNING: Removing unreachable block (ram,0x00010062827c) */
/* WARNING: Removing unreachable block (ram,0x0001006281d8) */
/* WARNING: Removing unreachable block (ram,0x000100628290) */

void FUN_10062760c(ulong *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  undefined7 uVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  undefined1 uVar15;
  undefined7 uVar16;
  undefined1 uVar17;
  undefined7 uVar18;
  undefined1 uVar19;
  undefined7 uVar20;
  undefined1 uVar21;
  undefined7 uVar22;
  code *pcVar23;
  bool bVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  char cVar31;
  long lVar32;
  byte *pbVar33;
  ulong uVar34;
  long *plVar35;
  byte *pbVar36;
  ulong *puVar37;
  char *pcVar38;
  char *pcVar39;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  ulong uVar44;
  byte *unaff_x26;
  char cVar45;
  byte *pbVar46;
  undefined8 *puVar47;
  char *pcVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  char cStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  byte *pbStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  ulong uStack_290;
  char *pcStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  ulong uStack_270;
  byte *pbStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  byte *pbStack_200;
  char cStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  ulong uStack_1b0;
  char acStack_1a0 [8];
  long lStack_198;
  byte *pbStack_190;
  long lStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  long lStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  long lStack_150;
  byte *pbStack_148;
  long lStack_140;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f0;
  char cStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  byte bStack_90;
  char cStack_8f;
  int *piStack_88;
  int *piStack_80;
  long lStack_78;
  char *pcVar40;
  
  cVar31 = *param_2;
  *param_2 = '\x16';
  if (cVar31 == '\x16') {
    puVar25 = (undefined8 *)_malloc(0x10);
    if (puVar25 != (undefined8 *)0x0) {
      puVar25[1] = 0x676e697373696d20;
      *puVar25 = 0x73692065756c6176;
      *param_1 = 0;
      param_1[3] = 0x10;
      param_1[4] = (ulong)puVar25;
      param_1[6] = 0;
      param_1[5] = 0x10;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[7] = 8;
      return;
    }
    FUN_107c03c64(1,0x10);
    puVar37 = param_1;
  }
  else {
    uStack_2b7 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_2bf = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_2b8 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    pbStack_2a8 = *(byte **)(param_2 + 0x18);
    pcVar48 = *(char **)(param_2 + 0x10);
    uStack_2b0 = SUB81(pcVar48,0);
    uStack_2af = (undefined7)((ulong)pcVar48 >> 8);
    cStack_2c0 = cVar31;
    if (cVar31 != '\x14') {
      thunk_FUN_108855b7c(param_1,&cStack_2c0,&pbStack_110,&UNK_10b209e80);
      return;
    }
    uVar3 = CONCAT71(uStack_2b7,uStack_2b8);
    uVar34 = (long)pbStack_2a8 * 0x20;
    pcVar1 = pcVar48 + uVar34;
    pbStack_280 = (byte *)0x0;
    pbVar36 = pbStack_2a8;
    if ((byte *)0x5554 < pbStack_2a8) {
      pbVar36 = (byte *)0x5555;
    }
    pcStack_2a0 = pcVar48;
    pcStack_298 = pcVar48;
    uStack_290 = uVar3;
    pcStack_288 = pcVar1;
    if (pbStack_2a8 == (byte *)0x0) {
      pbStack_278 = (byte *)0x0;
      uStack_270 = 8;
      pbStack_268 = (byte *)0x0;
LAB_100628384:
      param_1[2] = uStack_270;
      param_1[1] = (ulong)pbStack_278;
      param_1[3] = (ulong)pbStack_268;
      *param_1 = 2;
      uVar3 = param_1[1];
      pcVar48 = (char *)param_1[2];
      uVar34 = param_1[3];
      func_0x000100fbc814(&pbStack_f0,&pcStack_2a0);
      if (pbStack_f0 == (byte *)0x2) {
        *param_1 = 2;
        return;
      }
      param_1[5] = CONCAT71(uStack_c7,uStack_c8);
      param_1[4] = CONCAT71(uStack_cf,uStack_d0);
      param_1[7] = CONCAT71(uStack_b7,uStack_b8);
      param_1[6] = CONCAT71(uStack_bf,uStack_c0);
      param_1[9] = CONCAT71(uStack_a7,uStack_a8);
      param_1[8] = CONCAT71(uStack_af,uStack_b0);
      param_1[10] = uStack_a0;
      param_1[1] = CONCAT71(uStack_e7,cStack_e8);
      *param_1 = (ulong)pbStack_f0;
      param_1[3] = CONCAT71(uStack_d7,uStack_d8);
      param_1[2] = CONCAT71(uStack_df,uStack_e0);
      pcVar1 = pcVar48;
      for (; uVar34 != 0; uVar34 = uVar34 - 1) {
        if (*(long *)(pcVar1 + 0x18) != -0x8000000000000000 && *(long *)(pcVar1 + 0x18) != 0) {
          _free(*(undefined8 *)(pcVar1 + 0x20));
        }
        FUN_100cd109c(pcVar1);
        pcVar1 = pcVar1 + 0x30;
      }
      goto joined_r0x0001006284e4;
    }
    puVar37 = (ulong *)((long)pbVar36 * 0x30);
    uVar26 = _malloc(puVar37);
    if (uVar26 != 0) {
      pbVar46 = (byte *)0x0;
      pbStack_268 = (byte *)0x0;
      puVar25 = (undefined8 *)((ulong)acStack_1a0 | 1);
      puVar47 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar27 = (undefined8 *)((ulong)&pbStack_180 | 1);
      puVar28 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      pcVar40 = pcVar48;
      pcVar38 = pcVar48;
      pbStack_278 = pbVar36;
      uStack_270 = uVar26;
LAB_10062777c:
      pcVar38 = pcVar38 + 0x20;
      uVar34 = uVar34 - 0x20;
      pcVar39 = pcVar40 + 0x20;
      cVar31 = *pcVar40;
      pcStack_298 = pcVar39;
      if (cVar31 != '\x16') {
        uVar49 = *(undefined8 *)(pcVar40 + 1);
        puVar25[1] = *(undefined8 *)(pcVar40 + 9);
        *puVar25 = uVar49;
        uVar49 = *(undefined8 *)(pcVar40 + 0x10);
        *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pcVar40 + 0x18);
        *(undefined8 *)((long)puVar25 + 0xf) = uVar49;
        pbVar46 = pbVar46 + 1;
        pbStack_280 = pbVar46;
        acStack_1a0[0] = cVar31;
        if (cVar31 != '\x14') {
          if (cVar31 != '\x15') {
            thunk_FUN_108855b7c(&pbStack_200,acStack_1a0,&pbStack_110,&UNK_10b20cac0);
            pbVar43 = unaff_x26;
            goto LAB_100628298;
          }
          pbVar43 = pbStack_190 + lStack_188 * 0x40;
          pbStack_160 = pbStack_190;
          pbStack_158 = pbStack_190;
          lStack_150 = lStack_198;
          pbStack_180 = (byte *)CONCAT71(pbStack_180._1_7_,0x16);
          lStack_140 = 0;
          pbStack_130 = (byte *)0x8000000000000000;
          uVar26 = 0x8000000000000001;
          pbVar42 = pbStack_190;
          pbStack_148 = pbVar43;
          if (lStack_188 == 0) {
            pbVar30 = pbStack_190;
            pbVar33 = (byte *)0x0;
            pbVar29 = pbVar46;
          }
          else {
LAB_10062781c:
            do {
              pbVar41 = pbVar42 + 0x40;
              bVar4 = *pbVar42;
              pbVar30 = pbStack_120;
              pbVar33 = pbStack_128;
              pbVar29 = unaff_x26;
              pbStack_158 = pbVar41;
              if (bVar4 == 0x16) break;
              lStack_140 = lStack_140 + 1;
              uVar49 = *(undefined8 *)(pbVar42 + 1);
              uVar51 = *(undefined8 *)(pbVar42 + 0x18);
              uVar50 = *(undefined8 *)(pbVar42 + 0x10);
              uVar52 = *(undefined8 *)(pbVar42 + 0x28);
              pbStack_f0 = *(byte **)(pbVar42 + 0x20);
              puVar47[1] = *(undefined8 *)(pbVar42 + 9);
              *puVar47 = uVar49;
              *(undefined8 *)((long)puVar47 + 0x17) = uVar51;
              *(undefined8 *)((long)puVar47 + 0xf) = uVar50;
              cStack_e8 = (char)uVar52;
              uStack_e7 = (undefined7)((ulong)uVar52 >> 8);
              uStack_d8 = (undefined1)*(undefined8 *)(pbVar42 + 0x38);
              uStack_d7 = (undefined7)((ulong)*(undefined8 *)(pbVar42 + 0x38) >> 8);
              uStack_e0 = (undefined1)*(undefined8 *)(pbVar42 + 0x30);
              uStack_df = (undefined7)((ulong)*(undefined8 *)(pbVar42 + 0x30) >> 8);
              bStack_90 = bVar4;
              if ((byte)pbStack_180 != '\x16') {
                FUN_100e077ec(&pbStack_180);
              }
              pbStack_178 = (byte *)CONCAT71(uStack_e7,cStack_e8);
              pbStack_168 = (byte *)CONCAT71(uStack_d7,uStack_d8);
              lStack_170 = CONCAT71(uStack_df,uStack_e0);
              pbStack_180 = pbStack_f0;
              if (bVar4 < 0xd) {
                if (bVar4 == 1) {
                  cVar31 = '\x01';
                  if (cStack_8f != '\x01') {
                    cVar31 = '\x02';
                  }
                  cVar45 = '\0';
                  if (cStack_8f != '\0') {
                    cVar45 = cVar31;
                  }
                  goto LAB_100627b44;
                }
                if (bVar4 == 4) {
                  cVar31 = '\x01';
                  if (piStack_88 != (int *)0x1) {
                    cVar31 = '\x02';
                  }
                  cVar45 = '\0';
                  if (piStack_88 != (int *)0x0) {
                    cVar45 = cVar31;
                  }
                  goto LAB_100627b44;
                }
                if (bVar4 == 0xc) {
                  if (lStack_78 == 5) {
                    cVar45 = '\x01';
                    if (*piStack_80 != 0x6b6f6f68 || (char)piStack_80[1] != 's') {
                      cVar45 = '\x02';
                    }
                  }
                  else if (lStack_78 == 7) {
                    cVar45 = '\x02';
                    if (*piStack_80 == 0x6374616d && *(int *)((long)piStack_80 + 3) == 0x72656863) {
                      cVar45 = '\0';
                    }
                  }
                  else {
                    cVar45 = '\x02';
                  }
                  goto joined_r0x000100627ac4;
                }
LAB_100627c5c:
                thunk_FUN_108855b7c(&pbStack_f0,&bStack_90,&pbStack_110,&UNK_10b210bc0);
                cVar45 = cStack_e8;
                pbVar42 = pbStack_f0;
                cVar31 = cStack_e8;
                uVar6 = uStack_e7;
                uVar7 = uStack_e0;
                uVar8 = uStack_df;
                uVar9 = uStack_d8;
                uVar10 = uStack_d7;
                uVar11 = uStack_d0;
                uVar12 = uStack_cf;
                uVar13 = uStack_c8;
                uVar14 = uStack_c7;
                uVar15 = uStack_c0;
                uVar16 = uStack_bf;
                uVar17 = uStack_b8;
                uVar18 = uStack_b7;
                uVar19 = uStack_b0;
                uVar20 = uStack_af;
                uVar21 = uStack_a8;
                uVar22 = uStack_a7;
                uVar44 = uStack_a0;
                if (pbStack_f0 == (byte *)0x2) goto LAB_100627b5c;
joined_r0x000100628354:
                uStack_1b0 = uVar44;
                uStack_1b7 = uVar22;
                uStack_1b8 = uVar21;
                uStack_1bf = uVar20;
                uStack_1c0 = uVar19;
                uStack_1c7 = uVar18;
                uStack_1c8 = uVar17;
                uStack_1cf = uVar16;
                uStack_1d0 = uVar15;
                uStack_1d7 = uVar14;
                uStack_1d8 = uVar13;
                uStack_1df = uVar12;
                uStack_1e0 = uVar11;
                uStack_1e7 = uVar10;
                uStack_1e8 = uVar9;
                uStack_1ef = uVar8;
                uStack_1f0 = uVar7;
                uStack_1f7 = uVar6;
                cStack_1f8 = cVar31;
                pbStack_200 = pbVar42;
                pbVar36 = pbStack_130;
                pbStack_130 = pbVar36;
                pbStack_f0 = pbStack_200;
                cStack_e8 = cStack_1f8;
                uStack_e7 = uStack_1f7;
                uStack_e0 = uStack_1f0;
                uStack_df = uStack_1ef;
                uStack_d8 = uStack_1e8;
                uStack_d7 = uStack_1e7;
                uStack_d0 = uStack_1e0;
                uStack_cf = uStack_1df;
                uStack_c8 = uStack_1d8;
                uStack_c7 = uStack_1d7;
                uStack_c0 = uStack_1d0;
                uStack_bf = uStack_1cf;
                uStack_b8 = uStack_1c8;
                uStack_b7 = uStack_1c7;
                uStack_b0 = uStack_1c0;
                uStack_af = uStack_1bf;
                uStack_a8 = uStack_1b8;
                uStack_a7 = uStack_1b7;
                uStack_a0 = uStack_1b0;
                if (pbVar36 == (byte *)0x8000000000000000) goto LAB_100628170;
LAB_1006280d4:
                pbVar43 = pbStack_128;
                pbVar36 = pbStack_130;
                pbStack_200 = pbStack_f0;
                cStack_1f8 = cStack_e8;
                uStack_1f7 = uStack_e7;
                uStack_1f0 = uStack_e0;
                uStack_1ef = uStack_df;
                uStack_1e8 = uStack_d8;
                uStack_1e7 = uStack_d7;
                uStack_1e0 = uStack_d0;
                uStack_1df = uStack_cf;
                uStack_1d8 = uStack_c8;
                uStack_1d7 = uStack_c7;
                uStack_1d0 = uStack_c0;
                uStack_1cf = uStack_bf;
                uStack_1c8 = uStack_b8;
                uStack_1c7 = uStack_b7;
                uStack_1c0 = uStack_b0;
                uStack_1bf = uStack_af;
                uStack_1b8 = uStack_a8;
                uStack_1b7 = uStack_a7;
                uStack_1b0 = uStack_a0;
                if (pbStack_120 == (byte *)0x0) goto LAB_10062815c;
                pbVar42 = pbStack_128 + 0x28;
                pbVar29 = pbStack_120;
                goto LAB_100628110;
              }
              if (bVar4 == 0xd) {
                if (piStack_80 == (int *)0x5) {
                  cVar45 = '\x01';
                  if (*piStack_88 != 0x6b6f6f68 || (char)piStack_88[1] != 's') {
                    cVar45 = '\x02';
                  }
                }
                else {
                  if (piStack_80 != (int *)0x7) goto LAB_100627b10;
                  cVar45 = '\x02';
                  if (*piStack_88 == 0x6374616d && *(int *)((long)piStack_88 + 3) == 0x72656863) {
                    cVar45 = '\0';
                  }
                }
LAB_100627b44:
                FUN_100e077ec(&bStack_90);
              }
              else {
                if (bVar4 != 0xe) {
                  if (bVar4 != 0xf) goto LAB_100627c5c;
                  if (piStack_80 == (int *)0x5) {
                    if (((((char)*piStack_88 != 'h') || (*(char *)((long)piStack_88 + 1) != 'o')) ||
                        (*(char *)((long)piStack_88 + 2) != 'o')) ||
                       ((*(char *)((long)piStack_88 + 3) != 'k' || ((char)piStack_88[1] != 's'))))
                    goto LAB_100627b10;
                    cVar45 = '\x01';
                  }
                  else if ((((piStack_80 == (int *)0x7) && ((char)*piStack_88 == 'm')) &&
                           ((*(char *)((long)piStack_88 + 1) == 'a' &&
                            (((*(char *)((long)piStack_88 + 2) == 't' &&
                              (*(char *)((long)piStack_88 + 3) == 'c')) &&
                             ((char)piStack_88[1] == 'h')))))) &&
                          ((*(char *)((long)piStack_88 + 5) == 'e' &&
                           (*(char *)((long)piStack_88 + 6) == 'r')))) {
                    cVar45 = '\0';
                  }
                  else {
LAB_100627b10:
                    cVar45 = '\x02';
                  }
                  goto LAB_100627b44;
                }
                if (lStack_78 == 5) {
                  if ((((char)*piStack_80 != 'h') || (*(char *)((long)piStack_80 + 1) != 'o')) ||
                     ((*(char *)((long)piStack_80 + 2) != 'o' ||
                      ((*(char *)((long)piStack_80 + 3) != 'k' || ((char)piStack_80[1] != 's'))))))
                  goto LAB_100627a8c;
                  cVar45 = '\x01';
                }
                else if (((((lStack_78 == 7) && ((char)*piStack_80 == 'm')) &&
                          (*(char *)((long)piStack_80 + 1) == 'a')) &&
                         ((*(char *)((long)piStack_80 + 2) == 't' &&
                          (*(char *)((long)piStack_80 + 3) == 'c')))) &&
                        (((char)piStack_80[1] == 'h' &&
                         ((*(char *)((long)piStack_80 + 5) == 'e' &&
                          (*(char *)((long)piStack_80 + 6) == 'r')))))) {
                  cVar45 = '\0';
                }
                else {
LAB_100627a8c:
                  cVar45 = '\x02';
                }
joined_r0x000100627ac4:
                if (piStack_88 != (int *)0x0) {
                  _free();
                }
              }
LAB_100627b5c:
              if (cVar45 == '\0') {
                if (uVar26 != 0x8000000000000001) {
                  thunk_FUN_1087e4364(&pbStack_f0,&UNK_108cabf0f,7);
                  pbVar42 = pbStack_f0;
                  cVar31 = cStack_e8;
                  uVar6 = uStack_e7;
                  uVar7 = uStack_e0;
                  uVar8 = uStack_df;
                  uVar9 = uStack_d8;
                  uVar10 = uStack_d7;
                  uVar11 = uStack_d0;
                  uVar12 = uStack_cf;
                  uVar13 = uStack_c8;
                  uVar14 = uStack_c7;
                  uVar15 = uStack_c0;
                  uVar16 = uStack_bf;
                  uVar17 = uStack_b8;
                  uVar18 = uStack_b7;
                  uVar19 = uStack_b0;
                  uVar20 = uStack_af;
                  uVar21 = uStack_a8;
                  uVar22 = uStack_a7;
                  uVar44 = uStack_a0;
                  goto joined_r0x000100628354;
                }
                func_0x000100f21318(&pbStack_f0,&pbStack_180);
                uVar26 = CONCAT71(uStack_e7,cStack_e8);
                pbVar29 = (byte *)CONCAT71(uStack_df,uStack_e0);
                pbVar36 = (byte *)CONCAT71(uStack_d7,uStack_d8);
                if (pbStack_f0 != (byte *)0x2) {
                  uVar26 = 0x8000000000000001;
                  pbVar5 = pbStack_f0;
                  cVar31 = cStack_e8;
                  uVar6 = uStack_e7;
                  uVar7 = uStack_e0;
                  uVar8 = uStack_df;
                  uVar9 = uStack_d8;
                  uVar10 = uStack_d7;
                  uVar11 = uStack_d0;
                  uVar12 = uStack_cf;
                  uVar13 = uStack_c8;
                  uVar14 = uStack_c7;
                  uVar15 = uStack_c0;
                  uVar16 = uStack_bf;
                  uVar17 = uStack_b8;
                  uVar18 = uStack_b7;
                  uVar19 = uStack_b0;
                  uVar20 = uStack_af;
                  uVar21 = uStack_a8;
                  uVar22 = uStack_a7;
                  uVar44 = uStack_a0;
joined_r0x0001006280d0:
                  uStack_1b0 = uVar44;
                  uStack_1b7 = uVar22;
                  uStack_1b8 = uVar21;
                  uStack_1bf = uVar20;
                  uStack_1c0 = uVar19;
                  uStack_1c7 = uVar18;
                  uStack_1c8 = uVar17;
                  uStack_1cf = uVar16;
                  uStack_1d0 = uVar15;
                  uStack_1d7 = uVar14;
                  uStack_1d8 = uVar13;
                  uStack_1df = uVar12;
                  uStack_1e0 = uVar11;
                  uStack_1e7 = uVar10;
                  uStack_1e8 = uVar9;
                  uStack_1ef = uVar8;
                  uStack_1f0 = uVar7;
                  uStack_1f7 = uVar6;
                  cStack_1f8 = cVar31;
                  pbStack_200 = pbVar5;
                  pbVar36 = pbStack_130;
                  pbStack_130 = pbVar36;
                  pbStack_f0 = pbStack_200;
                  cStack_e8 = cStack_1f8;
                  uStack_e7 = uStack_1f7;
                  uStack_e0 = uStack_1f0;
                  uStack_df = uStack_1ef;
                  uStack_d8 = uStack_1e8;
                  uStack_d7 = uStack_1e7;
                  uStack_d0 = uStack_1e0;
                  uStack_cf = uStack_1df;
                  uStack_c8 = uStack_1d8;
                  uStack_c7 = uStack_1d7;
                  uStack_c0 = uStack_1d0;
                  uStack_bf = uStack_1cf;
                  uStack_b8 = uStack_1c8;
                  uStack_b7 = uStack_1c7;
                  uStack_b0 = uStack_1c0;
                  uStack_af = uStack_1bf;
                  uStack_a8 = uStack_1b8;
                  uStack_a7 = uStack_1b7;
                  uStack_a0 = uStack_1b0;
                  if (pbVar36 != (byte *)0x8000000000000000) goto LAB_1006280d4;
                  goto LAB_100628170;
                }
                pbVar30 = pbStack_120;
                pbVar33 = pbStack_128;
                pbVar42 = pbStack_158;
                pbVar43 = pbStack_148;
                unaff_x26 = pbVar29;
                if (pbStack_158 == pbStack_148) break;
                goto LAB_10062781c;
              }
              bVar4 = (byte)pbStack_180;
              if (cVar45 == '\x01') {
                if (pbStack_130 != (byte *)0x8000000000000000) {
                  thunk_FUN_1087e4364(&pbStack_f0,&UNK_108cabd72,5);
                  pbVar42 = pbStack_f0;
                  cVar31 = cStack_e8;
                  uVar6 = uStack_e7;
                  uVar7 = uStack_e0;
                  uVar8 = uStack_df;
                  uVar9 = uStack_d8;
                  uVar10 = uStack_d7;
                  uVar11 = uStack_d0;
                  uVar12 = uStack_cf;
                  uVar13 = uStack_c8;
                  uVar14 = uStack_c7;
                  uVar15 = uStack_c0;
                  uVar16 = uStack_bf;
                  uVar17 = uStack_b8;
                  uVar18 = uStack_b7;
                  uVar19 = uStack_b0;
                  uVar20 = uStack_af;
                  uVar21 = uStack_a8;
                  uVar22 = uStack_a7;
                  uVar44 = uStack_a0;
                  goto joined_r0x000100628354;
                }
                pbStack_180 = (byte *)CONCAT71(pbStack_180._1_7_,0x16);
                if (bVar4 == 0x16) goto LAB_100628510;
                uVar49 = *puVar27;
                puVar47[1] = puVar27[1];
                *puVar47 = uVar49;
                uVar49 = *(undefined8 *)((long)puVar27 + 0xf);
                *(undefined8 *)((long)puVar47 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
                *(undefined8 *)((long)puVar47 + 0xf) = uVar49;
                bStack_90 = bVar4;
                func_0x00010139bbcc(&pbStack_f0,&bStack_90);
                pbStack_108 = (byte *)CONCAT71(uStack_df,uStack_e0);
                pbStack_110 = (byte *)CONCAT71(uStack_e7,cStack_e8);
                pbStack_100 = (byte *)CONCAT71(uStack_d7,uStack_d8);
                pbVar42 = pbStack_110;
                pbVar30 = pbStack_108;
                pbVar33 = pbStack_100;
                pbVar5 = pbStack_f0;
                cVar31 = cStack_e8;
                uVar6 = uStack_e7;
                uVar7 = uStack_e0;
                uVar8 = uStack_df;
                uVar9 = uStack_d8;
                uVar10 = uStack_d7;
                uVar11 = uStack_d0;
                uVar12 = uStack_cf;
                uVar13 = uStack_c8;
                uVar14 = uStack_c7;
                uVar15 = uStack_c0;
                uVar16 = uStack_bf;
                uVar17 = uStack_b8;
                uVar18 = uStack_b7;
                uVar19 = uStack_b0;
                uVar20 = uStack_af;
                uVar21 = uStack_a8;
                uVar22 = uStack_a7;
                uVar44 = uStack_a0;
                if (pbStack_f0 != (byte *)0x2) goto joined_r0x0001006280d0;
              }
              else {
                pbStack_180 = (byte *)CONCAT71(pbStack_180._1_7_,0x16);
                if (bVar4 == 0x16) {
LAB_100628510:
                  pbStack_180 = (byte *)CONCAT71(pbStack_180._1_7_,0x16);
                  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_100628560;
                }
                uVar49 = *puVar27;
                puVar28[1] = puVar27[1];
                *puVar28 = uVar49;
                uVar49 = *(undefined8 *)((long)puVar27 + 0xf);
                *(undefined8 *)((long)puVar28 + 0x17) = *(undefined8 *)((long)puVar27 + 0x17);
                *(undefined8 *)((long)puVar28 + 0xf) = uVar49;
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,bVar4);
                FUN_100e077ec(&pbStack_f0);
                pbVar42 = pbStack_130;
                pbVar30 = pbStack_128;
                pbVar33 = pbStack_120;
              }
              pbStack_120 = pbVar33;
              pbStack_128 = pbVar30;
              pbStack_130 = pbVar42;
              pbVar30 = pbStack_120;
              pbVar33 = pbStack_128;
              pbVar42 = pbVar41;
            } while (pbVar41 != pbVar43);
          }
          uVar44 = 0x8000000000000000;
          if (uVar26 != 0x8000000000000001) {
            uVar44 = uVar26;
          }
          bVar24 = pbStack_130 != (byte *)0x8000000000000000;
          pbVar43 = (byte *)0x8;
          if (bVar24) {
            pbVar43 = pbVar33;
          }
          pbVar42 = (byte *)0x0;
          if (bVar24) {
            pbVar42 = pbVar30;
          }
          uStack_1f0 = SUB81(pbVar43,0);
          uStack_1ef = (undefined7)((ulong)pbVar43 >> 8);
          uStack_1e8 = SUB81(pbVar42,0);
          uStack_1e7 = (undefined7)((ulong)pbVar42 >> 8);
          pbVar30 = (byte *)0x0;
          if (bVar24) {
            pbVar30 = pbStack_130;
          }
          uStack_1e0 = (undefined1)uVar44;
          uStack_1df = (undefined7)(uVar44 >> 8);
          uStack_1d8 = SUB81(pbVar29,0);
          uStack_1d7 = (undefined7)((ulong)pbVar29 >> 8);
          uStack_1d0 = SUB81(pbVar36,0);
          uStack_1cf = (undefined7)((ulong)pbVar36 >> 8);
          pbStack_200 = (byte *)0x2;
          cStack_1f8 = (char)pbVar30;
          uStack_1f7 = (undefined7)((ulong)pbVar30 >> 8);
          goto LAB_100627e10;
        }
        pbStack_168 = pbStack_190 + lStack_188 * 0x20;
        pbStack_180 = pbStack_190;
        pbStack_178 = pbStack_190;
        lStack_170 = lStack_198;
        pbStack_160 = (byte *)0x0;
        func_0x000100f28e14(&pbStack_f0,&pbStack_180);
        uVar8 = uStack_d7;
        uVar9 = uStack_d8;
        uVar6 = uStack_df;
        uVar7 = uStack_e0;
        pbVar36 = pbStack_168;
        uVar49 = CONCAT71(uStack_df,uStack_e0);
        if (pbStack_f0 == (byte *)0x2) {
          pbVar29 = (byte *)0x8000000000000000;
          lVar32 = -0x7fffffffffffffff;
          pbVar43 = (byte *)0x8000000000000000;
          if ((byte *)CONCAT71(uStack_e7,cStack_e8) != (byte *)0x8000000000000001) {
            pbVar43 = (byte *)CONCAT71(uStack_e7,cStack_e8);
          }
          pbVar30 = pbStack_178;
          if (pbStack_178 != pbStack_168) {
            pbVar42 = pbStack_178 + 0x20;
            bVar4 = *pbStack_178;
            if (bVar4 == 0x16) {
              pbVar29 = (byte *)0x8000000000000000;
              pbStack_178 = pbVar42;
            }
            else {
              uVar50 = *(undefined8 *)(pbStack_178 + 1);
              puVar47[1] = *(undefined8 *)(pbStack_178 + 9);
              *puVar47 = uVar50;
              uVar50 = *(undefined8 *)(pbStack_178 + 0x10);
              *(undefined8 *)((long)puVar47 + 0x17) = *(undefined8 *)(pbStack_178 + 0x18);
              *(undefined8 *)((long)puVar47 + 0xf) = uVar50;
              pbStack_160 = pbStack_160 + 1;
              pbStack_178 = pbVar42;
              bStack_90 = bVar4;
              func_0x00010139bbcc(&pbStack_f0,&bStack_90);
              pbVar29 = (byte *)CONCAT71(uStack_e7,cStack_e8);
              lVar32 = CONCAT71(uStack_df,uStack_e0);
              pbVar30 = (byte *)CONCAT71(uStack_d7,uStack_d8);
              if (pbStack_f0 != (byte *)0x2) {
                uStack_1d8 = uStack_c8;
                uStack_1d7 = uStack_c7;
                uStack_1e0 = uStack_d0;
                uStack_1df = uStack_cf;
                uStack_1c8 = uStack_b8;
                uStack_1c7 = uStack_b7;
                uStack_1d0 = uStack_c0;
                uStack_1cf = uStack_bf;
                uStack_1b8 = uStack_a8;
                uStack_1b7 = uStack_a7;
                uStack_1c0 = uStack_b0;
                uStack_1bf = uStack_af;
                uStack_1b0 = uStack_a0;
                pbStack_200 = pbStack_f0;
                cStack_1f8 = cStack_e8;
                uStack_1f7 = uStack_e7;
                uStack_1f0 = uStack_e0;
                uStack_1ef = uStack_df;
                uStack_1e8 = uStack_d8;
                uStack_1e7 = uStack_d7;
                if (((ulong)pbVar43 & 0x7fffffffffffffff) != 0) {
                  _free(uVar49);
                }
                goto LAB_100627d7c;
              }
            }
          }
          bVar24 = pbVar29 != (byte *)0x8000000000000000;
          pbVar36 = (byte *)0x0;
          if (bVar24) {
            pbVar36 = pbVar29;
          }
          lVar2 = 8;
          if (bVar24) {
            lVar2 = lVar32;
          }
          pbVar42 = (byte *)0x0;
          if (bVar24) {
            pbVar42 = pbVar30;
          }
          uStack_1f0 = (undefined1)lVar2;
          uStack_1ef = (undefined7)((ulong)lVar2 >> 8);
          uStack_1e8 = SUB81(pbVar42,0);
          uStack_1e7 = (undefined7)((ulong)pbVar42 >> 8);
          uStack_1e0 = SUB81(pbVar43,0);
          uStack_1df = (undefined7)((ulong)pbVar43 >> 8);
          uStack_1d8 = uVar7;
          uStack_1d7 = uVar6;
          uStack_1d0 = uVar9;
          uStack_1cf = uVar8;
          pbStack_200 = (byte *)0x2;
          cStack_1f8 = (char)pbVar36;
          uStack_1f7 = (undefined7)((ulong)pbVar36 >> 8);
          func_0x000100fbc814(&pbStack_f0,&pbStack_180);
          if (pbStack_f0 == (byte *)0x2) {
            pbStack_200 = pbStack_f0;
          }
          else {
            uStack_1d8 = uStack_c8;
            uStack_1d7 = uStack_c7;
            uStack_1e0 = uStack_d0;
            uStack_1df = uStack_cf;
            uStack_1c8 = uStack_b8;
            uStack_1c7 = uStack_b7;
            uStack_1d0 = uStack_c0;
            uStack_1cf = uStack_bf;
            uStack_1b8 = uStack_a8;
            uStack_1b7 = uStack_a7;
            uStack_1c0 = uStack_b0;
            uStack_1bf = uStack_af;
            uStack_1b0 = uStack_a0;
            cStack_1f8 = cStack_e8;
            uStack_1f7 = uStack_e7;
            pbStack_200 = pbStack_f0;
            uStack_1e8 = uStack_d8;
            uStack_1e7 = uStack_d7;
            uStack_1f0 = uStack_e0;
            uStack_1ef = uStack_df;
            if (((ulong)pbVar43 & 0x7fffffffffffffff) != 0) {
              _free(uVar49);
            }
            if (pbVar42 != (byte *)0x0) {
              plVar35 = (long *)(lVar2 + 0x28);
              do {
                if ((ulong)plVar35[-5] < 2) {
                  if (plVar35[-3] != 0) {
                    _free(plVar35[-2]);
                  }
                  if (*plVar35 == -0x8000000000000000 || *plVar35 == 0) {
                    if (plVar35[3] != -0x8000000000000000 && plVar35[3] != 0) {
LAB_100628250:
                      _free(plVar35[4]);
                    }
                  }
                  else {
                    _free(plVar35[1]);
                    if (plVar35[3] != -0x8000000000000000 && plVar35[3] != 0) goto LAB_100628250;
                  }
                }
                plVar35 = plVar35 + 0xc;
                pbVar42 = pbVar42 + -1;
              } while (pbVar42 != (byte *)0x0);
            }
            if (pbVar36 != (byte *)0x0) {
              _free(lVar2);
            }
          }
        }
        else {
          uStack_1d8 = uStack_c8;
          uStack_1d7 = uStack_c7;
          uStack_1e0 = uStack_d0;
          uStack_1df = uStack_cf;
          uStack_1c8 = uStack_b8;
          uStack_1c7 = uStack_b7;
          uStack_1d0 = uStack_c0;
          uStack_1cf = uStack_bf;
          uStack_1b8 = uStack_a8;
          uStack_1b7 = uStack_a7;
          uStack_1c0 = uStack_b0;
          uStack_1bf = uStack_af;
          uStack_1b0 = uStack_a0;
          pbStack_200 = pbStack_f0;
          cStack_1f8 = cStack_e8;
          uStack_1f7 = uStack_e7;
          uStack_1f0 = uStack_e0;
          uStack_1ef = uStack_df;
          uStack_1e8 = uStack_d8;
          uStack_1e7 = uStack_d7;
          pbVar42 = pbStack_178;
LAB_100627d7c:
          lVar32 = ((ulong)((long)pbVar36 - (long)pbVar42) >> 5) + 1;
          pbVar43 = unaff_x26;
          while (lVar32 = lVar32 + -1, lVar32 != 0) {
            pbVar42 = pbVar42 + 0x20;
            FUN_100e077ec();
            pbVar43 = pbVar42;
          }
          if (lStack_170 != 0) {
            _free(pbStack_180);
          }
        }
        goto LAB_100628298;
      }
      goto LAB_100628384;
    }
  }
  FUN_107c03c64(8,puVar37);
LAB_100628560:
                    /* WARNING: Does not return */
  pcVar23 = (code *)SoftwareBreakpoint(1,0x100628564);
  (*pcVar23)();
LAB_100628110:
  do {
    if (*(ulong *)(pbVar42 + -0x28) < 2) {
      if (*(long *)(pbVar42 + -0x18) != 0) {
        _free(*(undefined8 *)(pbVar42 + -0x10));
      }
      if (*(long *)pbVar42 == -0x8000000000000000 || *(long *)pbVar42 == 0) {
        if (*(long *)(pbVar42 + 0x18) != -0x8000000000000000 && *(long *)(pbVar42 + 0x18) != 0) {
LAB_100628150:
          _free(*(undefined8 *)(pbVar42 + 0x20));
        }
      }
      else {
        _free(*(undefined8 *)(pbVar42 + 8));
        if (*(long *)(pbVar42 + 0x18) != -0x8000000000000000 && *(long *)(pbVar42 + 0x18) != 0)
        goto LAB_100628150;
      }
    }
    pbVar42 = pbVar42 + 0x60;
    pbVar29 = pbVar29 + -1;
  } while (pbVar29 != (byte *)0x0);
LAB_10062815c:
  if (pbVar36 != (byte *)0x0) {
    _free(pbVar43);
  }
LAB_100628170:
  if ((-0x7fffffffffffffff < (long)uVar26) && (uVar26 != 0)) {
    _free(unaff_x26);
  }
  if (pbStack_200 == (byte *)0x2) {
    pbVar30 = (byte *)CONCAT71(uStack_1f7,cStack_1f8);
    pbVar43 = (byte *)CONCAT71(uStack_1ef,uStack_1f0);
    pbVar42 = (byte *)CONCAT71(uStack_1e7,uStack_1e8);
    uVar44 = CONCAT71(uStack_1df,uStack_1e0);
    pbVar29 = (byte *)CONCAT71(uStack_1d7,uStack_1d8);
LAB_100627e10:
    func_0x000100fbc59c(&pbStack_f0,&pbStack_180);
    if (pbStack_f0 == (byte *)0x2) {
      pbStack_200 = pbStack_f0;
    }
    else {
      uStack_1d8 = uStack_c8;
      uStack_1d7 = uStack_c7;
      uStack_1e0 = uStack_d0;
      uStack_1df = uStack_cf;
      uStack_1c8 = uStack_b8;
      uStack_1c7 = uStack_b7;
      uStack_1d0 = uStack_c0;
      uStack_1cf = uStack_bf;
      uStack_1b8 = uStack_a8;
      uStack_1b7 = uStack_a7;
      uStack_1c0 = uStack_b0;
      uStack_1bf = uStack_af;
      uStack_1b0 = uStack_a0;
      cStack_1f8 = cStack_e8;
      uStack_1f7 = uStack_e7;
      pbStack_200 = pbStack_f0;
      uStack_1e8 = uStack_d8;
      uStack_1e7 = uStack_d7;
      uStack_1f0 = uStack_e0;
      uStack_1ef = uStack_df;
      if ((uVar44 & 0x7fffffffffffffff) != 0) {
        _free(pbVar29);
      }
      if (pbVar42 != (byte *)0x0) {
        pbVar36 = pbVar43 + 0x28;
        do {
          if (*(ulong *)(pbVar36 + -0x28) < 2) {
            if (*(long *)(pbVar36 + -0x18) != 0) {
              _free(*(undefined8 *)(pbVar36 + -0x10));
            }
            if (*(long *)pbVar36 == -0x8000000000000000 || *(long *)pbVar36 == 0) {
              if (*(long *)(pbVar36 + 0x18) != -0x8000000000000000 && *(long *)(pbVar36 + 0x18) != 0
                 ) {
LAB_100627fd4:
                _free(*(undefined8 *)(pbVar36 + 0x20));
              }
            }
            else {
              _free(*(undefined8 *)(pbVar36 + 8));
              if (*(long *)(pbVar36 + 0x18) != -0x8000000000000000 && *(long *)(pbVar36 + 0x18) != 0
                 ) goto LAB_100627fd4;
            }
          }
          pbVar36 = pbVar36 + 0x60;
          pbVar42 = pbVar42 + -1;
        } while (pbVar42 != (byte *)0x0);
      }
      if (pbVar30 != (byte *)0x0) {
        _free(pbVar43);
      }
    }
  }
  else {
    FUN_100d34830(&pbStack_160);
    pbVar43 = unaff_x26;
    if ((byte)pbStack_180 != '\x16') {
      FUN_100e077ec(&pbStack_180);
    }
  }
LAB_100628298:
  pbVar42 = pbStack_268;
  uVar44 = uStack_270;
  uVar26 = CONCAT71(uStack_1f7,cStack_1f8);
  uStack_258 = CONCAT71(uStack_1e7,uStack_1e8);
  uStack_260 = CONCAT71(uStack_1ef,uStack_1f0);
  uStack_248 = CONCAT71(uStack_1d7,uStack_1d8);
  uStack_250 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_240 = CONCAT71(uStack_1cf,uStack_1d0);
  if (pbStack_200 == (byte *)0x2) {
    if (uVar26 == 0x8000000000000000) goto LAB_100628384;
    uStack_230 = uVar26;
    uStack_228 = uStack_260;
    uStack_220 = uStack_258;
    uStack_218 = uStack_250;
    uStack_210 = uStack_248;
    uStack_208 = uStack_240;
    if (pbStack_268 == pbStack_278) {
      func_0x000107c05af0(&pbStack_278);
    }
    puVar37 = (ulong *)(uStack_270 + (long)pbVar42 * 0x30);
    puVar37[1] = uStack_228;
    *puVar37 = uStack_230;
    puVar37[3] = uStack_218;
    puVar37[2] = uStack_220;
    pbStack_268 = pbVar42 + 1;
    puVar37[5] = uStack_208;
    puVar37[4] = uStack_210;
    pcVar40 = pcVar39;
    unaff_x26 = pbVar43;
    if (pcVar39 == pcVar1) goto LAB_100628384;
    goto LAB_10062777c;
  }
  param_1[8] = CONCAT71(uStack_1bf,uStack_1c0);
  param_1[7] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[10] = uStack_1b0;
  param_1[9] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[3] = uStack_258;
  param_1[2] = uStack_260;
  param_1[5] = uStack_248;
  param_1[4] = uStack_250;
  param_1[6] = uStack_240;
  *param_1 = (ulong)pbStack_200;
  param_1[1] = uVar26;
  uVar26 = uStack_270;
  for (pbVar36 = pbStack_268; pbVar36 != (byte *)0x0; pbVar36 = pbVar36 + -1) {
    if (*(long *)(uVar26 + 0x18) != -0x8000000000000000 && *(long *)(uVar26 + 0x18) != 0) {
      _free(*(undefined8 *)(uVar26 + 0x20));
    }
    FUN_100cd109c(uVar26);
    uVar26 = uVar26 + 0x30;
  }
  if (pbStack_278 != (byte *)0x0) {
    _free(uVar44);
  }
  lVar32 = (uVar34 >> 5) + 1;
  while (lVar32 = lVar32 + -1, lVar32 != 0) {
    FUN_100e077ec(pcVar38);
    pcVar38 = pcVar38 + 0x20;
  }
joined_r0x0001006284e4:
  if (uVar3 != 0) {
    _free(pcVar48);
  }
  return;
}

