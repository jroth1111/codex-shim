
void FUN_1014205c4(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  undefined7 uVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  byte bVar27;
  byte *pbVar28;
  ulong uVar29;
  long lVar30;
  char *pcVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long *plVar39;
  long lStack_2b8;
  long lStack_2a8;
  ulong uStack_298;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_250;
  long lStack_240;
  long lStack_238;
  char *pcStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined7 uStack_218;
  byte bStack_211;
  undefined7 uStack_210;
  undefined8 uStack_209;
  undefined8 *puStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined8 *puStack_1a0;
  uint uStack_198;
  undefined1 uStack_194;
  undefined2 uStack_193;
  byte bStack_191;
  undefined7 uStack_190;
  byte bStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  byte bStack_180;
  undefined7 uStack_17f;
  byte bStack_178;
  undefined7 uStack_177;
  byte bStack_170;
  undefined7 uStack_16f;
  byte bStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined8 *puStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  byte bStack_130;
  undefined7 uStack_12f;
  byte bStack_128;
  undefined7 uStack_127;
  byte bStack_120;
  undefined7 uStack_11f;
  byte bStack_118;
  undefined7 uStack_117;
  byte bStack_110;
  undefined7 uStack_10f;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  byte bStack_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  byte bStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte bStack_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined7 uStack_a7;
  byte bStack_a0;
  undefined7 uStack_9f;
  byte bStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 auStack_71 [17];
  
  if (*param_2 == '\x15') {
    lVar25 = *(long *)(param_2 + 0x10);
    lVar34 = *(long *)(param_2 + 0x18) * 0x40;
    lStack_238 = 0;
    pcStack_230 = (char *)0x8;
    lStack_228 = 0;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar20 = (undefined8 *)0x0;
      lVar30 = lVar25;
    }
    else {
      lVar37 = 0;
      puVar26 = (undefined8 *)((ulong)&puStack_1a0 | 1);
      puVar20 = (undefined8 *)((lVar34 - 0x40U >> 6) + 1);
      puVar35 = (undefined8 *)0x1;
      do {
        pbVar15 = (byte *)(lVar25 + lVar37);
        bVar27 = *pbVar15;
        if (bVar27 < 0xd) {
          if (bVar27 == 1) {
            uStack_c7 = *(undefined1 *)(lVar25 + lVar37 + 1);
            bStack_c8 = 1;
            goto LAB_1014207a4;
          }
          if (bVar27 == 4) {
            uVar17 = *(undefined8 *)(lVar25 + lVar37 + 8);
            bStack_c8 = 4;
            bStack_c0 = (byte)uVar17;
            uStack_bf = (undefined7)((ulong)uVar17 >> 8);
            goto LAB_1014207a4;
          }
          if (bVar27 == 0xc) {
            uVar17 = *(undefined8 *)(lVar25 + lVar37 + 0x10);
            lVar30 = *(long *)(lVar25 + lVar37 + 0x18);
            if (lVar30 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar30);
              if (lVar13 == 0) goto LAB_1014217f8;
            }
            _memcpy(lVar13,uVar17,lVar30);
            bStack_c8 = 0xc;
            goto LAB_101420790;
          }
LAB_101420820:
          FUN_108855bf0(&puStack_d0,pbVar15,auStack_71,&UNK_10b214c08);
          puStack_220 = (undefined8 *)CONCAT17(bStack_c0,CONCAT61(uStack_c6,uStack_c7));
          uStack_198 = (uint)uStack_bf;
          uStack_194 = (undefined1)((uint7)uStack_bf >> 0x20);
          uStack_193 = (undefined2)((uint7)uStack_bf >> 0x28);
          bStack_189 = bStack_b0;
          uStack_188 = uStack_af;
          bStack_191 = bStack_b8;
          uStack_190 = uStack_b7;
          puStack_1a0 = puStack_220;
          if (puStack_d0 != (undefined8 *)0x2) {
            bStack_110 = bStack_a0;
            uStack_10f = uStack_9f;
            bStack_118 = bStack_a8;
            uStack_117 = uStack_a7;
            uStack_100 = uStack_90;
            uStack_ff = uStack_8f;
            bStack_108 = bStack_98;
            uStack_107 = uStack_97;
            uStack_f0 = uStack_80;
            uStack_ef = uStack_7f;
            uStack_f8 = uStack_88;
            uStack_f7 = uStack_87;
            uStack_218 = uStack_bf;
            uStack_209 = CONCAT71(uStack_af,bStack_b0);
            bStack_211 = bStack_b8;
            uStack_210 = uStack_b7;
            bStack_120 = bStack_b0;
            uStack_11f = uStack_af;
            uStack_127 = uStack_b7;
            uStack_12f = uStack_bf;
            bStack_128 = bStack_b8;
            uStack_134 = (undefined4)((uint6)uStack_c6 >> 0x10);
            bStack_130 = bStack_c0;
            puStack_140 = puStack_d0;
            uStack_138 = CONCAT31((int3)CONCAT61(uStack_c6,uStack_c7),bStack_c8);
            goto LAB_1014215dc;
          }
          uStack_218 = uStack_bf;
          uStack_209 = CONCAT71(uStack_af,bStack_b0);
          bVar27 = bStack_c8;
          if (bStack_c8 == 0x16) {
            lVar30 = lVar25 + lVar37 + 0x40;
            goto LAB_10142089c;
          }
        }
        else {
          if (bVar27 == 0xd) {
            uVar17 = *(undefined8 *)(lVar25 + lVar37 + 8);
            uVar18 = *(undefined8 *)(lVar25 + lVar37 + 0x10);
            bStack_c8 = 0xd;
          }
          else {
            if (bVar27 == 0xe) {
              uVar17 = *(undefined8 *)(lVar25 + lVar37 + 0x10);
              lVar30 = *(long *)(lVar25 + lVar37 + 0x18);
              if (lVar30 == 0) {
                lVar13 = 1;
              }
              else {
                lVar13 = _malloc(lVar30);
                if (lVar13 == 0) {
LAB_1014217f8:
                  func_0x0001087c9084(1,lVar30);
                  goto LAB_101421840;
                }
              }
              _memcpy(lVar13,uVar17,lVar30);
              bStack_c8 = 0xe;
LAB_101420790:
              bStack_c0 = (byte)lVar30;
              uStack_bf = (undefined7)((ulong)lVar30 >> 8);
              bStack_b8 = (byte)lVar13;
              uStack_b7 = (undefined7)((ulong)lVar13 >> 8);
              bStack_b0 = bStack_c0;
              uStack_af = uStack_bf;
              goto LAB_1014207a4;
            }
            if (bVar27 != 0xf) goto LAB_101420820;
            uVar17 = *(undefined8 *)(lVar25 + lVar37 + 8);
            uVar18 = *(undefined8 *)(lVar25 + lVar37 + 0x10);
            bStack_c8 = 0xf;
          }
          bStack_c0 = (byte)uVar17;
          uStack_bf = (undefined7)((ulong)uVar17 >> 8);
          bStack_b8 = (byte)uVar18;
          uStack_b7 = (undefined7)((ulong)uVar18 >> 8);
LAB_1014207a4:
          puStack_1a0 = (undefined8 *)CONCAT17(bStack_c0,CONCAT61(uStack_c6,uStack_c7));
          uStack_198 = (uint)uStack_bf;
          uStack_194 = (undefined1)((uint7)uStack_bf >> 0x20);
          uStack_193 = (undefined2)((uint7)uStack_bf >> 0x28);
          uStack_209 = CONCAT71(uStack_af,bStack_b0);
        }
        puStack_220 = puStack_1a0;
        puVar26[1] = CONCAT17(bStack_b8,uStack_bf);
        *puVar26 = puStack_1a0;
        *(undefined8 *)((long)puVar26 + 0x17) = uStack_209;
        *(ulong *)((long)puVar26 + 0xf) = CONCAT71(uStack_b7,bStack_b8);
        puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,bVar27);
        uStack_218 = uStack_bf;
        bStack_211 = bStack_b8;
        uStack_210 = uStack_b7;
        bStack_191 = bStack_b8;
        uStack_190 = uStack_b7;
        bStack_189 = bStack_b0;
        uStack_188 = uStack_af;
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&bStack_c8,pbVar15 + 0x20);
        uStack_97 = uStack_af;
        bStack_98 = bStack_b0;
        uStack_9f = uStack_b7;
        bStack_a0 = bStack_b8;
        uStack_a7 = uStack_bf;
        bStack_a8 = bStack_c0;
        bVar27 = bStack_c8;
        lVar30 = lStack_228;
        bStack_118 = bStack_c0;
        uStack_117 = uStack_bf;
        bStack_120 = bStack_c8;
        uStack_11f = (undefined7)(CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8)) >> 8);
        bStack_108 = bStack_b0;
        uStack_107 = uStack_af;
        bStack_110 = bStack_b8;
        uStack_10f = uStack_b7;
        puStack_d0 = puStack_1a0;
        bStack_c8 = (byte)uStack_198;
        uStack_c7 = (undefined1)(uStack_198 >> 8);
        uStack_c6 = (undefined6)
                    (CONCAT17(bStack_191,CONCAT25(uStack_193,CONCAT14(uStack_194,uStack_198))) >>
                    0x10);
        bStack_b8 = (byte)uStack_188;
        uStack_b7 = (undefined7)(CONCAT17(uStack_181,uStack_188) >> 8);
        bStack_c0 = (byte)uStack_190;
        uStack_bf = (undefined7)(CONCAT17(bStack_189,uStack_190) >> 8);
        bStack_b0 = bVar27;
        uStack_af = uStack_11f;
        if (lStack_228 == lStack_238) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_238);
        }
        pcVar2 = pcStack_230 + lVar30 * 0x40;
        *(ulong *)(pcVar2 + 8) = CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
        *(undefined8 **)pcVar2 = puStack_d0;
        *(ulong *)(pcVar2 + 0x18) = CONCAT71(uStack_b7,bStack_b8);
        *(ulong *)(pcVar2 + 0x10) = CONCAT71(uStack_bf,bStack_c0);
        *(ulong *)(pcVar2 + 0x28) = CONCAT71(uStack_a7,bStack_a8);
        *(ulong *)(pcVar2 + 0x20) = CONCAT71(uStack_af,bStack_b0);
        *(ulong *)(pcVar2 + 0x38) = CONCAT71(uStack_97,bStack_98);
        *(ulong *)(pcVar2 + 0x30) = CONCAT71(uStack_9f,bStack_a0);
        lStack_228 = lVar30 + 1;
        lVar37 = lVar37 + 0x40;
        puVar35 = (undefined8 *)((long)puVar35 + 1);
        lVar30 = lVar25 + lVar34;
      } while (lVar34 - lVar37 != 0);
    }
    uStack_218 = CONCAT25(uStack_193,CONCAT14(uStack_194,uStack_198));
    uStack_209 = CONCAT71(uStack_188,bStack_189);
    puVar35 = puVar20;
LAB_10142089c:
    puStack_268 = (undefined8 *)0x0;
    lVar37 = 0;
    pcVar2 = pcStack_230 + lStack_228 * 0x40;
    puStack_1f8 = (undefined8 *)0x0;
    lStack_1e8 = 0;
    pcVar31 = pcStack_230;
    puStack_220 = puStack_1a0;
    bStack_211 = bStack_191;
    uStack_210 = uStack_190;
LAB_1014208b4:
    do {
      pcVar14 = pcVar31;
      if (pcVar14 == pcVar2) goto LAB_10142143c;
      pcVar31 = pcVar14 + 0x40;
      if (*pcVar14 != '\x16') {
        func_0x0001004e0914(&puStack_d0,pcVar14);
        lVar13 = CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
        lStack_240 = CONCAT71(uStack_bf,bStack_c0);
        uVar21 = CONCAT71(uStack_b7,bStack_b8);
        if (puStack_d0 != (undefined8 *)0x2) {
          uStack_1d8 = CONCAT17(bStack_a0,uStack_a7);
          uStack_1e0 = CONCAT17(bStack_a8,uStack_af);
          uStack_1c8 = CONCAT17(uStack_90,uStack_97);
          uStack_1d0 = CONCAT17(bStack_98,uStack_9f);
          uStack_1c0 = CONCAT17(uStack_88,uStack_8f);
          uStack_1b8 = uStack_87;
          uStack_1b1 = uStack_80;
          uStack_1b0 = uStack_7f;
          if (puStack_268 == (undefined8 *)0x0) {
LAB_10142156c:
            lVar37 = 0;
            puVar20 = puStack_d0;
            bVar27 = bStack_b0;
          }
          else {
LAB_1014214c8:
            bStack_c8 = 0;
            uStack_c7 = 0;
            uStack_c6 = 0;
            bStack_c0 = (byte)puStack_268;
            uStack_bf = (undefined7)((ulong)puStack_268 >> 8);
            bStack_b8 = (byte)uStack_298;
            uStack_b7 = (undefined7)(uStack_298 >> 8);
            puStack_268 = (undefined8 *)0x1;
            bStack_a8 = 0;
            uStack_a7 = 0;
            puVar20 = puStack_d0;
            bVar27 = bStack_b0;
            bStack_a0 = bStack_c0;
            uStack_9f = uStack_bf;
            bStack_98 = bStack_b8;
            uStack_97 = uStack_b7;
          }
          bStack_b0 = (byte)puStack_268;
          uStack_af = (undefined7)((ulong)puStack_268 >> 8);
          uStack_90 = (undefined1)lVar37;
          uStack_8f = (undefined7)((ulong)lVar37 >> 8);
          puStack_d0 = puStack_268;
          while (FUN_100f3a554(&puStack_140,&puStack_d0), puStack_140 != (undefined8 *)0x0) {
            if (puStack_140[CONCAT71(uStack_12f,bStack_130) * 3 + 1] != 0) {
              _free(puStack_140[CONCAT71(uStack_12f,bStack_130) * 3 + 2]);
            }
          }
          uStack_117 = (undefined7)uStack_1d8;
          bStack_110 = (byte)((ulong)uStack_1d8 >> 0x38);
          uStack_11f = (undefined7)uStack_1e0;
          bStack_118 = (byte)((ulong)uStack_1e0 >> 0x38);
          uStack_107 = (undefined7)uStack_1c8;
          uStack_100 = (undefined1)((ulong)uStack_1c8 >> 0x38);
          uStack_10f = (undefined7)uStack_1d0;
          bStack_108 = (byte)((ulong)uStack_1d0 >> 0x38);
          uStack_f7 = uStack_1b8;
          uStack_ff = (undefined7)uStack_1c0;
          uStack_f8 = (undefined1)((ulong)uStack_1c0 >> 0x38);
          uStack_f0 = uStack_1b1;
          uStack_ef = uStack_1b0;
          uStack_138 = (uint)lVar13;
          uStack_134 = (undefined4)((ulong)lVar13 >> 0x20);
          bStack_130 = (byte)lStack_240;
          uStack_12f = (undefined7)((ulong)lStack_240 >> 8);
          bStack_128 = (byte)uVar21;
          uStack_127 = (undefined7)(uVar21 >> 8);
          puStack_140 = puVar20;
          bStack_120 = bVar27;
LAB_1014215dc:
          FUN_100d5c778(&lStack_238);
          goto joined_r0x00010142163c;
        }
        if (lVar13 != -0x8000000000000000) {
          pbVar15 = (byte *)(pcVar14 + 0x20);
          bVar27 = pcVar14[0x20];
          if (bVar27 - 0xc < 2) {
            pbVar28 = (byte *)0x0;
joined_r0x0001014209b8:
            if (bVar27 < 0xd) {
              if (bVar27 != 1) {
                if (bVar27 == 4) {
                  lVar16 = *(long *)(pbVar15 + 8);
                  if (lVar16 == 0) goto LAB_101420b50;
                  if (lVar16 == 1) goto LAB_101420bd8;
                  bStack_c8 = (byte)lVar16;
                  uStack_c7 = (undefined1)((ulong)lVar16 >> 8);
                  uStack_c6 = (undefined6)((ulong)lVar16 >> 0x10);
                  puStack_d0 = (undefined8 *)0x1;
                  FUN_1087e3ee8(&puStack_140,&puStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
                }
                else {
                  if (bVar27 == 0xc) {
                    piVar19 = *(int **)(pbVar15 + 0x10);
                    lVar16 = *(long *)(pbVar15 + 0x18);
                    if (lVar16 != 5) goto LAB_101420bbc;
                    goto LAB_101420940;
                  }
LAB_10142141c:
                  FUN_108855bf0(&puStack_140,pbVar15,auStack_71,&UNK_10b2144e8);
                }
                goto LAB_10142097c;
              }
              bVar27 = pbVar15[1];
              if (bVar27 != 0) {
                if (bVar27 != 1) {
                  uStack_c7 = 0;
                  uStack_c6 = 0;
                  puStack_d0 = (undefined8 *)0x1;
                  bStack_c8 = bVar27;
                  FUN_1087e3ee8(&puStack_140,&puStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
                  goto LAB_10142097c;
                }
                goto LAB_101420bd8;
              }
LAB_101420b50:
              if (((pbVar28 != (byte *)0x0) && (*pbVar28 != 0x12)) &&
                 (FUN_108855bf0(&puStack_d0,pbVar28,auStack_71,&UNK_10b20a5c0),
                 puStack_d0 != (undefined8 *)0x2)) {
LAB_1014213e0:
                bStack_178 = bStack_a8;
                uStack_177 = uStack_a7;
                bStack_180 = bStack_b0;
                uStack_17f = uStack_af;
                bStack_168 = bStack_98;
                uStack_167 = uStack_97;
                bStack_170 = bStack_a0;
                uStack_16f = uStack_9f;
                uStack_158 = uStack_88;
                uStack_157 = uStack_87;
                uStack_160 = uStack_90;
                uStack_15f = uStack_8f;
                uStack_150 = uStack_80;
                uStack_14f = uStack_7f;
                uStack_198 = (uint)CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
                uStack_194 = (undefined1)((uint6)uStack_c6 >> 0x10);
                uStack_193 = (undefined2)((uint6)uStack_c6 >> 0x18);
                bStack_191 = (byte)((uint6)uStack_c6 >> 0x28);
                puStack_1a0 = puStack_d0;
                uStack_188 = (undefined7)CONCAT71(uStack_b7,bStack_b8);
                uStack_181 = (undefined1)((uint7)uStack_b7 >> 0x30);
                uStack_190 = (undefined7)CONCAT71(uStack_bf,bStack_c0);
                bStack_189 = (byte)((uint7)uStack_bf >> 0x30);
                goto LAB_101421400;
              }
              bVar27 = 0;
              uStack_298 = uStack_1f0;
            }
            else {
              if (bVar27 == 0xd) {
                piVar19 = *(int **)(pbVar15 + 8);
                lVar16 = *(long *)(pbVar15 + 0x10);
                if (lVar16 == 5) {
LAB_101420940:
                  if (*piVar19 == 0x6f6c6c61 && (char)piVar19[1] == 'w') goto LAB_101420b50;
                  lVar16 = 5;
                }
                else {
LAB_101420bbc:
                  if (lVar16 == 4) {
                    if (*piVar19 == 0x656e6f6e) goto LAB_101420bd8;
                    lVar16 = 4;
                  }
                }
                FUN_1087e44e4(&puStack_140,piVar19,lVar16,&UNK_10b2204c0,2);
                goto LAB_10142097c;
              }
              if (bVar27 == 0xe) {
                pcVar14 = *(char **)(pbVar15 + 0x10);
                lVar16 = *(long *)(pbVar15 + 0x18);
                if (lVar16 != 5) goto LAB_1014209ec;
LAB_101420a7c:
                if ((((*pcVar14 == 'a') && (pcVar14[1] == 'l')) && (pcVar14[2] == 'l')) &&
                   ((pcVar14[3] == 'o' && (pcVar14[4] == 'w')))) goto LAB_101420b50;
              }
              else {
                if (bVar27 != 0xf) goto LAB_10142141c;
                pcVar14 = *(char **)(pbVar15 + 8);
                lVar16 = *(long *)(pbVar15 + 0x10);
                if (lVar16 == 5) goto LAB_101420a7c;
LAB_1014209ec:
                if ((((lVar16 == 4) && ((*pcVar14 == 'n' && (pcVar14[1] == 'o')))) &&
                    (pcVar14[2] == 'n')) && (pcVar14[3] == 'e')) goto LAB_101420bd8;
              }
              __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_e8);
              uVar17 = uStack_e0;
              uVar29 = uStack_e8;
              FUN_1087e44e4(&puStack_d0,uStack_e0,uStack_d8,&UNK_10b2204c0,2);
              bStack_118 = bStack_a8;
              uStack_117 = uStack_a7;
              bStack_120 = bStack_b0;
              uStack_11f = uStack_af;
              bStack_108 = bStack_98;
              uStack_107 = uStack_97;
              bStack_110 = bStack_a0;
              uStack_10f = uStack_9f;
              uStack_f8 = uStack_88;
              uStack_f7 = uStack_87;
              uStack_100 = uStack_90;
              uStack_ff = uStack_8f;
              uStack_f0 = uStack_80;
              uStack_ef = uStack_7f;
              puStack_140 = puStack_d0;
              uStack_138 = (uint)CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
              uStack_134 = (undefined4)((uint6)uStack_c6 >> 0x10);
              bStack_128 = bStack_b8;
              uStack_127 = uStack_b7;
              bStack_130 = bStack_c0;
              uStack_12f = uStack_bf;
              if ((uVar29 & 0x7fffffffffffffff) != 0) {
                _free(uVar17);
              }
LAB_10142097c:
              if (puStack_140 != (undefined8 *)0x2) {
                uStack_194 = (undefined1)uStack_134;
                uStack_193 = (undefined2)((uint)uStack_134 >> 8);
                bStack_191 = (byte)((uint)uStack_134 >> 0x18);
                lVar25 = CONCAT71(uStack_12f,bStack_130);
                bStack_180 = bStack_120;
                uStack_17f = uStack_11f;
                uStack_188 = (undefined7)CONCAT71(uStack_127,bStack_128);
                uStack_181 = (undefined1)((uint7)uStack_127 >> 0x30);
                bStack_170 = bStack_110;
                uStack_16f = uStack_10f;
                bStack_178 = bStack_118;
                uStack_177 = uStack_117;
                uStack_160 = uStack_100;
                uStack_15f = uStack_ff;
                bStack_168 = bStack_108;
                uStack_167 = uStack_107;
                uStack_150 = uStack_f0;
                uStack_14f = uStack_ef;
                uStack_158 = uStack_f8;
                uStack_157 = uStack_f7;
                uStack_198 = uStack_138;
                puVar20 = puStack_140;
                goto LAB_101421528;
              }
              if ((uStack_138 & 1) == 0) goto LAB_101420b50;
LAB_101420bd8:
              if (((pbVar28 != (byte *)0x0) && (*pbVar28 != 0x12)) &&
                 (FUN_108855bf0(&puStack_d0,pbVar28,auStack_71,&UNK_10b20a5c0),
                 puStack_d0 != (undefined8 *)0x2)) goto LAB_1014213e0;
              bVar27 = 1;
              uStack_298 = uStack_1f0;
            }
          }
          else {
            if (bVar27 == 0x15) {
              if (*(long *)(pcVar14 + 0x38) == 1) {
                pbVar15 = *(byte **)(pcVar14 + 0x30);
                pbVar28 = pbVar15 + 0x20;
                bVar27 = *pbVar15;
                goto joined_r0x0001014209b8;
              }
              if (*(long *)(pcVar14 + 0x38) == 0) {
                puStack_d0 = (undefined8 *)0xb;
                FUN_1087e3ee8(&puStack_1a0,&puStack_d0,&UNK_10b20a580,&UNK_10b20a590);
              }
              else {
                puStack_d0 = (undefined8 *)0xb;
                FUN_1087e3ee8(&puStack_1a0,&puStack_d0,&UNK_10b20a580,&UNK_10b20a590);
              }
            }
            else {
              FUN_1088556a8(&puStack_d0);
              FUN_1087e3db0(&puStack_1a0,&puStack_d0,&UNK_10b20a5b0,&UNK_10b20a590);
            }
LAB_101421400:
            if (puStack_1a0 != (undefined8 *)0x2) {
              lVar25 = CONCAT17(bStack_189,uStack_190);
              puVar20 = puStack_1a0;
LAB_101421528:
              bVar27 = bStack_180;
              lVar34 = CONCAT17(bStack_191,CONCAT25(uStack_193,CONCAT14(uStack_194,uStack_198)));
              uVar21 = CONCAT17(uStack_181,uStack_188);
              uStack_1d8 = CONCAT17(bStack_170,uStack_177);
              uStack_1e0 = CONCAT17(bStack_178,uStack_17f);
              uStack_1c8 = CONCAT17(uStack_160,uStack_167);
              uStack_1d0 = CONCAT17(bStack_168,uStack_16f);
              uStack_1c0 = CONCAT17(uStack_158,uStack_15f);
              uStack_1b8 = uStack_157;
              uStack_1b1 = uStack_150;
              uStack_1b0 = uStack_14f;
              if (lVar13 != 0) {
                _free(lStack_240);
              }
              puStack_d0 = puVar20;
              lVar13 = lVar34;
              bStack_b0 = bVar27;
              lStack_240 = lVar25;
              if (puStack_268 != (undefined8 *)0x0) goto LAB_1014214c8;
              goto LAB_10142156c;
            }
            bVar27 = (byte)uStack_198;
            uStack_298 = uStack_1f0;
          }
          puStack_250 = puStack_268;
          uVar29 = uStack_298;
          uStack_1f0 = uStack_298;
          if (puStack_268 != (undefined8 *)0x0) {
            do {
              puVar20 = puStack_250 + 1;
              uVar7 = *(ushort *)((long)puStack_250 + 0x112);
              uVar36 = (ulong)uVar7;
              lVar38 = uVar36 * 0x18;
              puVar26 = puVar20;
              lVar16 = 0x113;
              do {
                lVar32 = lVar16;
                uVar3 = uVar36;
                if (lVar38 == 0) goto joined_r0x000101420c8c;
                uVar33 = puVar26[2];
                uVar3 = uVar21;
                if (uVar33 <= uVar21) {
                  uVar3 = uVar33;
                }
                iVar12 = _memcmp(lStack_240,puVar26[1],uVar3);
                lVar16 = uVar21 - uVar33;
                if (iVar12 != 0) {
                  lVar16 = (long)iVar12;
                }
                cVar1 = 0 < lVar16;
                if (lVar16 < 0) {
                  cVar1 = -1;
                }
                lVar38 = lVar38 + -0x18;
                lVar16 = lVar32 + 1;
                puVar26 = puVar26 + 3;
              } while (cVar1 == '\x01');
              if (cVar1 == '\0') {
                if (lVar13 != 0) {
                  _free(lStack_240);
                }
                *(byte *)((long)puStack_250 + lVar16) = bVar27 & 1;
                goto LAB_1014208b4;
              }
              uVar3 = lVar32 - 0x113;
joined_r0x000101420c8c:
              if (uVar29 == 0) goto LAB_101420ccc;
              puStack_250 = (undefined8 *)puStack_250[uVar3 + 0x24];
              uVar29 = uVar29 - 1;
            } while( true );
          }
          puStack_268 = (undefined8 *)_malloc(0x120);
          if (puStack_268 != (undefined8 *)0x0) {
            uStack_298 = 0;
            uStack_1f0 = 0;
            *(undefined2 *)((long)puStack_268 + 0x112) = 1;
            *puStack_268 = 0;
            puStack_268[1] = lVar13;
            puStack_268[2] = lStack_240;
            puStack_268[3] = uVar21;
            *(byte *)((long)puStack_268 + 0x114) = bVar27 & 1;
            puStack_1f8 = puStack_268;
            goto LAB_101420ee4;
          }
          func_0x0001087c906c(8,0x120);
          goto LAB_101421840;
        }
        goto LAB_10142143c;
      }
    } while( true );
  }
  FUN_108855bf0(&puStack_140,param_2,auStack_71,&UNK_10b213568);
joined_r0x00010142163c:
  if (puStack_140 != (undefined8 *)0x2) {
    param_1[5] = CONCAT71(uStack_117,bStack_118);
    param_1[4] = CONCAT71(uStack_11f,bStack_120);
    param_1[7] = CONCAT71(uStack_107,bStack_108);
    param_1[6] = CONCAT71(uStack_10f,bStack_110);
    param_1[9] = CONCAT71(uStack_f7,uStack_f8);
    param_1[8] = CONCAT71(uStack_ff,uStack_100);
    param_1[10] = CONCAT71(uStack_ef,uStack_f0);
    param_1[1] = CONCAT44(uStack_134,uStack_138);
    *param_1 = puStack_140;
    param_1[3] = CONCAT71(uStack_127,bStack_128);
    param_1[2] = CONCAT71(uStack_12f,bStack_130);
    return;
  }
LAB_101421468:
  param_1[4] = CONCAT71(uStack_127,bStack_128);
  param_1[1] = 1;
  *param_1 = 2;
  param_1[3] = CONCAT71(uStack_12f,bStack_130);
  param_1[2] = CONCAT44(uStack_134,uStack_138);
  return;
LAB_101420ccc:
  if (uVar7 < 0xb) {
    plVar39 = puVar20 + uVar3 * 3;
    lVar16 = uVar36 - uVar3;
    if (uVar36 < uVar3 || lVar16 == 0) {
      *plVar39 = lVar13;
      plVar39[1] = lStack_240;
      plVar39[2] = uVar21;
    }
    else {
      _memmove(puVar20 + (uVar3 + 1) * 3,plVar39,lVar16 * 0x18);
      *plVar39 = lVar13;
      plVar39[1] = lStack_240;
      plVar39[2] = uVar21;
      _memmove((long)puStack_250 + uVar3 + 0x115,(long)puStack_250 + uVar3 + 0x114,lVar16);
    }
    *(byte *)((long)puStack_250 + uVar3 + 0x114) = bVar27 & 1;
    *(ushort *)((long)puStack_250 + 0x112) = uVar7 + 1;
  }
  else {
    uVar29 = 0;
    if (uVar3 != 6) {
      uVar29 = uVar3 - 7;
    }
    uVar36 = 5;
    if (uVar3 != 6) {
      uVar36 = 6;
    }
    uVar33 = uVar3;
    uVar4 = uVar3;
    if (uVar3 != 5) {
      uVar33 = uVar36;
      uVar4 = uVar29;
    }
    uVar29 = uVar3;
    if (4 < uVar3) {
      uVar29 = uVar4;
    }
    uVar36 = 4;
    if (4 < uVar3) {
      uVar36 = uVar33;
    }
    puStack_260 = (undefined8 *)_malloc(0x120);
    if (puStack_260 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x120);
LAB_101421840:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x101421844);
      (*pcVar11)();
    }
    *puStack_260 = 0;
    uVar33 = (ulong)*(ushort *)((long)puStack_250 + 0x112) + ~uVar36;
    *(short *)((long)puStack_260 + 0x112) = (short)uVar33;
    plVar39 = puVar20 + uVar36 * 3;
    lVar16 = *plVar39;
    lStack_2a8 = plVar39[1];
    if (0xb < uVar33) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar33,0xb,&UNK_10b2381a8);
      goto LAB_101421840;
    }
    uVar5 = *(undefined1 *)((long)puStack_250 + uVar36 + 0x114);
    lStack_2b8 = plVar39[2];
    _memcpy(puStack_260 + 1,puVar20 + (uVar36 + 1) * 3,uVar33 * 0x18);
    _memcpy((long)puStack_260 + 0x114,(long)puStack_250 + uVar36 + 0x115,uVar33);
    *(short *)((long)puStack_250 + 0x112) = (short)uVar36;
    puVar20 = puStack_260;
    if (uVar3 < 6) {
      puVar20 = puStack_250;
    }
    uVar7 = *(ushort *)((long)puVar20 + 0x112);
    plVar39 = puVar20 + uVar29 * 3 + 1;
    lVar38 = uVar7 - uVar29;
    if (uVar7 < uVar29 || lVar38 == 0) {
      *plVar39 = lVar13;
      plVar39[1] = lStack_240;
      plVar39[2] = uVar21;
    }
    else {
      _memmove(puVar20 + (uVar29 + 1) * 3 + 1,plVar39,lVar38 * 0x18);
      *plVar39 = lVar13;
      plVar39[1] = lStack_240;
      plVar39[2] = uVar21;
      _memmove((long)puVar20 + uVar29 + 0x115,(long)puVar20 + uVar29 + 0x114,lVar38);
    }
    *(byte *)((long)puVar20 + uVar29 + 0x114) = bVar27 & 1;
    *(ushort *)((long)puVar20 + 0x112) = uVar7 + 1;
    if (lVar16 != -0x8000000000000000) {
      uVar21 = 0;
      do {
        uVar29 = uStack_1f0;
        puVar20 = (undefined8 *)*puStack_250;
        if (puVar20 == (undefined8 *)0x0) {
          puVar20 = (undefined8 *)_malloc(0x180);
          if (puVar20 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x180);
            goto LAB_101421840;
          }
          *puVar20 = 0;
          *(undefined2 *)((long)puVar20 + 0x112) = 0;
          puVar20[0x24] = puStack_268;
          uStack_298 = uVar29 + 1;
          if (0xfffffffffffffffe < uVar29) {
            func_0x000108a07a20(&UNK_10b238148);
            goto LAB_101421840;
          }
          *puStack_268 = puVar20;
          *(undefined2 *)(puStack_268 + 0x22) = 0;
          puStack_1f8 = puVar20;
          uStack_1f0 = uStack_298;
          if (uVar21 != uVar29) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
            goto LAB_101421840;
          }
          *(undefined2 *)((long)puVar20 + 0x112) = 1;
          puVar20[1] = lVar16;
          puVar20[2] = lStack_2a8;
          puVar20[3] = lStack_2b8;
          *(undefined1 *)((long)puVar20 + 0x114) = uVar5;
          puVar20[0x25] = puStack_260;
          *puStack_260 = puVar20;
          *(undefined2 *)(puStack_260 + 0x22) = 1;
          puStack_268 = puVar20;
          break;
        }
        uVar7 = *(ushort *)(puStack_250 + 0x22);
        uVar29 = (ulong)uVar7;
        uVar8 = *(ushort *)((long)puVar20 + 0x112);
        uVar36 = (ulong)uVar8;
        if (uVar8 < 0xb) {
          plVar39 = puVar20 + uVar29 * 3 + 1;
          if (uVar7 < uVar8) {
            lVar13 = uVar36 - uVar29;
            _memmove(puVar20 + (uVar29 + 1) * 3 + 1,plVar39,lVar13 * 0x18);
            *plVar39 = lVar16;
            plVar39[1] = lStack_2a8;
            plVar39[2] = lStack_2b8;
            _memmove((long)puVar20 + uVar29 + 0x115,(long)puVar20 + uVar29 + 0x114,lVar13);
            *(undefined1 *)((long)puVar20 + uVar29 + 0x114) = uVar5;
            _memmove(puVar20 + uVar29 + 0x26,puVar20 + uVar29 + 0x25,lVar13 * 8);
          }
          else {
            *plVar39 = lVar16;
            plVar39[1] = lStack_2a8;
            plVar39[2] = lStack_2b8;
            *(undefined1 *)((long)puVar20 + uVar29 + 0x114) = uVar5;
          }
          puVar20[uVar29 + 0x25] = puStack_260;
          *(ushort *)((long)puVar20 + 0x112) = uVar8 + 1;
          if (uVar29 + 1 < uVar36 + 2) {
            lVar13 = uVar29 + 0x25;
            do {
              puVar26 = (undefined8 *)puVar20[lVar13];
              *puVar26 = puVar20;
              *(short *)(puVar26 + 0x22) = (short)lVar13 + -0x24;
              lVar13 = lVar13 + 1;
            } while (lVar13 - uVar36 != 0x26);
          }
          break;
        }
        uVar21 = uVar21 + 1;
        uVar3 = 5;
        if (uVar7 != 6) {
          uVar3 = 6;
        }
        uVar33 = 0;
        if (uVar7 != 6) {
          uVar33 = uVar29 - 7;
        }
        uVar4 = uVar29;
        uVar9 = uVar29;
        if (uVar7 != 5) {
          uVar4 = uVar33;
          uVar9 = uVar3;
        }
        uVar3 = 4;
        if (4 < uVar7) {
          uVar29 = uVar4;
          uVar3 = uVar9;
        }
        puVar26 = (undefined8 *)_malloc(0x180);
        if (puVar26 == (undefined8 *)0x0) {
          func_0x0001087c906c(8,0x180);
          goto LAB_101421840;
        }
        *puVar26 = 0;
        uVar33 = (ulong)*(ushort *)((long)puVar20 + 0x112) + ~uVar3;
        *(short *)((long)puVar26 + 0x112) = (short)uVar33;
        plVar39 = puVar20 + uVar3 * 3 + 1;
        lVar13 = *plVar39;
        lVar38 = plVar39[1];
        if (0xb < uVar33) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar33,0xb,&UNK_10b2381a8);
          goto LAB_101421840;
        }
        uVar6 = *(undefined1 *)((long)puVar20 + uVar3 + 0x114);
        lVar22 = plVar39[2];
        _memcpy(puVar26 + 1,puVar20 + (uVar3 + 1) * 3 + 1,uVar33 * 0x18);
        _memcpy((long)puVar26 + 0x114,(long)puVar20 + uVar3 + 0x115,uVar33);
        *(short *)((long)puVar20 + 0x112) = (short)uVar3;
        uVar33 = (ulong)*(ushort *)((long)puVar26 + 0x112);
        lVar32 = uVar33 + 1;
        if (0xb < uVar33) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,lVar32,0xc,&UNK_10b2381c0);
          goto LAB_101421840;
        }
        if (uVar36 - uVar3 != lVar32) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
          goto LAB_101421840;
        }
        _memcpy(puVar26 + 0x24,puVar20 + uVar3 + 0x25,lVar32 * 8);
        uVar36 = 0;
        do {
          puVar23 = (undefined8 *)(puVar26 + 0x24)[uVar36];
          *puVar23 = puVar26;
          *(short *)(puVar23 + 0x22) = (short)uVar36;
          if (uVar33 <= uVar36) break;
          uVar36 = uVar36 + 1;
        } while (uVar36 <= uVar33);
        puVar23 = puVar26;
        if (uVar7 < 6) {
          puVar23 = puVar20;
        }
        uVar7 = *(ushort *)((long)puVar23 + 0x112);
        uVar36 = (ulong)uVar7;
        plVar39 = puVar23 + (long)(int)uVar29 * 3 + 1;
        lVar32 = uVar36 - uVar29;
        if (uVar36 < uVar29 || lVar32 == 0) {
          *plVar39 = lVar16;
          plVar39[1] = lStack_2a8;
          plVar39[2] = lStack_2b8;
          *(undefined1 *)((long)puVar23 + uVar29 + 0x114) = uVar5;
        }
        else {
          _memmove(puVar23 + (long)(int)(uVar29 + 1) * 3 + 1,plVar39,lVar32 * 0x18);
          *plVar39 = lVar16;
          plVar39[1] = lStack_2a8;
          plVar39[2] = lStack_2b8;
          _memmove((long)puVar23 + uVar29 + 0x115,(long)puVar23 + uVar29 + 0x114,lVar32);
          *(undefined1 *)((long)puVar23 + uVar29 + 0x114) = uVar5;
          _memmove(puVar23 + uVar29 + 0x26,puVar23 + uVar29 + 0x25,lVar32 * 8);
        }
        puVar23[uVar29 + 0x25] = puStack_260;
        *(ushort *)((long)puVar23 + 0x112) = uVar7 + 1;
        if (uVar29 + 1 < uVar36 + 2) {
          lVar16 = uVar29 + 0x25;
          do {
            puVar24 = (undefined8 *)puVar23[lVar16];
            *puVar24 = puVar23;
            *(short *)(puVar24 + 0x22) = (short)lVar16 + -0x24;
            lVar16 = lVar16 + 1;
          } while (lVar16 - uVar36 != 0x26);
        }
        lVar16 = lVar13;
        lStack_2b8 = lVar22;
        lStack_2a8 = lVar38;
        puStack_260 = puVar26;
        puStack_250 = puVar20;
        uVar5 = uVar6;
      } while (lVar13 != -0x8000000000000000);
    }
  }
LAB_101420ee4:
  lVar37 = lVar37 + 1;
  lStack_1e8 = lVar37;
  goto LAB_1014208b4;
LAB_10142143c:
  puVar20 = puStack_1f8;
  bStack_130 = (byte)uStack_1f0;
  bVar27 = bStack_130;
  uStack_12f = (undefined7)(uStack_1f0 >> 8);
  uVar10 = uStack_12f;
  bStack_128 = (byte)lVar37;
  uStack_127 = (undefined7)((ulong)lVar37 >> 8);
  puStack_140 = (undefined8 *)0x2;
  uStack_138 = (uint)puStack_1f8;
  uStack_134 = (undefined4)((ulong)puStack_1f8 >> 0x20);
  FUN_100d5c778(&lStack_238);
  uVar21 = (lVar25 + lVar34) - lVar30;
  if ((uVar21 == 0) ||
     (puStack_1a0 = puVar35,
     FUN_1087e427c(&puStack_d0,(long)puVar35 + (uVar21 >> 6),&puStack_1a0,&UNK_10b23a190),
     puStack_d0 == (undefined8 *)0x2)) goto LAB_101421468;
  bStack_118 = bStack_a8;
  uStack_117 = uStack_a7;
  bStack_120 = bStack_b0;
  uStack_11f = uStack_af;
  bStack_108 = bStack_98;
  uStack_107 = uStack_97;
  bStack_110 = bStack_a0;
  uStack_10f = uStack_9f;
  uStack_f8 = uStack_88;
  uStack_f7 = uStack_87;
  uStack_100 = uStack_90;
  uStack_ff = uStack_8f;
  uStack_f0 = uStack_80;
  uStack_ef = uStack_7f;
  uStack_138 = (uint)CONCAT62(uStack_c6,CONCAT11(uStack_c7,bStack_c8));
  uStack_134 = (undefined4)((uint6)uStack_c6 >> 0x10);
  puStack_140 = puStack_d0;
  bStack_128 = bStack_b8;
  uStack_127 = uStack_b7;
  bStack_130 = bStack_c0;
  uStack_12f = uStack_bf;
  if (puVar20 == (undefined8 *)0x0) {
    lVar37 = 0;
  }
  else {
    bStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c6 = 0;
    bStack_c0 = (byte)puVar20;
    uStack_bf = (undefined7)((ulong)puVar20 >> 8);
    bStack_a8 = 0;
    uStack_a7 = 0;
    bStack_b8 = bVar27;
    uStack_b7 = uVar10;
    bStack_a0 = bStack_c0;
    uStack_9f = uStack_bf;
    bStack_98 = bVar27;
    uStack_97 = uVar10;
  }
  bStack_b0 = puVar20 != (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)(ulong)bStack_b0;
  uStack_af = 0;
  uStack_90 = (undefined1)lVar37;
  uStack_8f = (undefined7)((ulong)lVar37 >> 8);
  FUN_100f3a554(&puStack_1a0,&puStack_d0);
  while (puStack_1a0 != (undefined8 *)0x0) {
    if (puStack_1a0[CONCAT17(bStack_189,uStack_190) * 3 + 1] != 0) {
      _free(puStack_1a0[CONCAT17(bStack_189,uStack_190) * 3 + 2]);
    }
    FUN_100f3a554(&puStack_1a0,&puStack_d0);
  }
  goto joined_r0x00010142163c;
}

