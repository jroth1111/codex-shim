
void FUN_10145e600(ulong *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  ushort uVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  int iVar16;
  char *pcVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  byte bVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  long lVar38;
  ulong uVar39;
  long lStack_258;
  undefined8 *puStack_248;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  ulong uStack_208;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
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
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
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
    lVar21 = *(long *)(param_2 + 0x18) * 0x40;
    lVar3 = lVar25 + lVar21;
    puStack_1f8 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    uVar33 = 0;
    lVar20 = lVar25;
    if (*(long *)(param_2 + 0x18) != 0) {
      puVar36 = (undefined8 *)0x0;
      puStack_238 = (undefined8 *)0x0;
      uStack_208 = 0;
LAB_10145e694:
      func_0x0001004e0914(&uStack_d0,lVar25);
      puVar18 = puStack_b8;
      puVar35 = puStack_c0;
      puVar37 = puStack_c8;
      if (uStack_d0 != 2) {
        uStack_1d8 = uStack_a7;
        uStack_1d1 = uStack_a0;
        uStack_1e0 = uStack_af;
        uStack_1d9 = uStack_a8;
        uStack_1c8 = uStack_97;
        uStack_1c1 = uStack_90;
        uStack_1d0 = uStack_9f;
        uStack_1c9 = uStack_98;
        uStack_1c0 = uStack_8f;
        uStack_1b9 = uStack_88;
        uStack_1b8 = uStack_87;
        uStack_1b1 = uStack_80;
        uStack_1b0 = uStack_7f;
        uVar33 = uStack_d0;
        puVar28 = puStack_c0;
        puVar27 = puStack_b8;
        puVar18 = puStack_c8;
LAB_10145f1d8:
        uStack_117 = uStack_1d8;
        uStack_110 = uStack_1d1;
        uStack_11f = uStack_1e0;
        uStack_118 = uStack_1d9;
        uStack_107 = uStack_1c8;
        uStack_100 = uStack_1c1;
        uStack_10f = uStack_1d0;
        uStack_108 = uStack_1c9;
        uStack_f7 = uStack_1b8;
        uStack_ff = uStack_1c0;
        uStack_f8 = uStack_1b9;
        uStack_f0 = uStack_1b1;
        uStack_ef = uStack_1b0;
        if (puVar36 == (undefined8 *)0x0) {
          puStack_238 = (undefined8 *)0x0;
        }
        else {
          puStack_c8 = (undefined8 *)0x0;
          puStack_b8 = puStack_230;
          uStack_a8 = 0;
          uStack_a7 = 0;
          uStack_a0 = SUB81(puVar36,0);
          uStack_9f = (undefined7)((ulong)puVar36 >> 8);
          uStack_98 = SUB81(puStack_230,0);
          uStack_97 = (undefined7)((ulong)puStack_230 >> 8);
          puStack_c0 = puVar36;
        }
        bVar12 = puVar36 != (undefined8 *)0x0;
        uStack_d0 = (ulong)bVar12;
        uStack_af = 0;
        uStack_90 = SUB81(puStack_238,0);
        uStack_8f = (undefined7)((ulong)puStack_238 >> 8);
        uStack_140 = uVar33;
        uStack_138 = puVar18;
        puStack_130 = puVar28;
        puStack_128 = puVar27;
        uStack_120 = uStack_b0;
        uStack_b0 = bVar12;
        FUN_100f3a554(&uStack_1a0,&uStack_d0);
        while (uStack_1a0 != 0) {
          lVar25 = uStack_1a0 + (long)puStack_190 * 0x18;
          if (*(long *)(lVar25 + 8) != 0) {
            _free(*(undefined8 *)(lVar25 + 0x10));
          }
          FUN_100f3a554(&uStack_1a0,&uStack_d0);
        }
        goto LAB_10145f3cc;
      }
      pbVar19 = (byte *)(lVar25 + 0x20);
      bVar31 = *pbVar19;
      if (bVar31 - 0xc < 2) {
        pbVar32 = (byte *)0x0;
joined_r0x00010145e76c:
        if (0xc < bVar31) {
          if (bVar31 == 0xd) {
            piVar22 = *(int **)(pbVar19 + 8);
            lVar20 = *(long *)(pbVar19 + 0x10);
            if (lVar20 == 5) {
LAB_10145e6f4:
              if (*piVar22 == 0x6f6c6c61 && (char)piVar22[1] == 'w') goto LAB_10145e920;
              lVar20 = 5;
            }
            else {
LAB_10145e944:
              if (lVar20 == 4) {
                if (*piVar22 == 0x796e6564) goto LAB_10145e960;
                lVar20 = 4;
              }
            }
            FUN_1087e44e4(&uStack_140,piVar22,lVar20,&UNK_10b2204a0,2);
            goto LAB_10145e730;
          }
          if (bVar31 == 0xe) {
            pcVar17 = *(char **)(pbVar19 + 0x10);
            lVar20 = *(long *)(pbVar19 + 0x18);
            if (lVar20 != 5) goto LAB_10145e7a0;
LAB_10145e830:
            if ((((*pcVar17 == 'a') && (pcVar17[1] == 'l')) && (pcVar17[2] == 'l')) &&
               ((pcVar17[3] == 'o' && (pcVar17[4] == 'w')))) goto LAB_10145e920;
          }
          else {
            if (bVar31 != 0xf) goto LAB_10145f194;
            pcVar17 = *(char **)(pbVar19 + 8);
            lVar20 = *(long *)(pbVar19 + 0x10);
            if (lVar20 == 5) goto LAB_10145e830;
LAB_10145e7a0:
            if ((((lVar20 == 4) && ((*pcVar17 == 'd' && (pcVar17[1] == 'e')))) &&
                (pcVar17[2] == 'n')) && (pcVar17[3] == 'y')) goto LAB_10145e960;
          }
          __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_e8);
          uVar14 = uStack_e0;
          uVar33 = uStack_e8;
          FUN_1087e44e4(&uStack_d0,uStack_e0,uStack_d8,&UNK_10b2204a0,2);
          uStack_118 = uStack_a8;
          uStack_117 = uStack_a7;
          uStack_120 = uStack_b0;
          uStack_11f = uStack_af;
          uStack_108 = uStack_98;
          uStack_107 = uStack_97;
          uStack_110 = uStack_a0;
          uStack_10f = uStack_9f;
          uStack_f8 = uStack_88;
          uStack_f7 = uStack_87;
          uStack_100 = uStack_90;
          uStack_ff = uStack_8f;
          uStack_f0 = uStack_80;
          uStack_ef = uStack_7f;
          uStack_138 = puStack_c8;
          uStack_140 = uStack_d0;
          puStack_128 = puStack_b8;
          puStack_130 = puStack_c0;
          if ((uVar33 & 0x7fffffffffffffff) != 0) {
            _free(uVar14);
          }
          if (uStack_140 == 2) goto LAB_10145e740;
LAB_10145f2f0:
          uStack_198._0_4_ = uStack_138._1_4_ << 8;
          uStack_198 = (undefined8 *)CONCAT44(uStack_138._4_4_,(int)uStack_198);
          uStack_180 = uStack_120;
          uStack_17f = uStack_11f;
          puStack_188 = puStack_128;
          uStack_170 = uStack_110;
          uStack_16f = uStack_10f;
          uStack_178 = uStack_118;
          uStack_177 = uStack_117;
          uStack_160 = uStack_100;
          uStack_15f = uStack_ff;
          uStack_168 = uStack_108;
          uStack_167 = uStack_107;
          uStack_150 = uStack_f0;
          uStack_14f = uStack_ef;
          uStack_158 = uStack_f8;
          uStack_157 = uStack_f7;
          uStack_198 = (undefined8 *)CONCAT71(uStack_198._1_7_,(byte)uStack_138);
          uVar33 = uStack_140;
          puVar28 = puStack_130;
          goto LAB_10145f32c;
        }
        if (bVar31 == 1) {
          bVar31 = pbVar19[1];
          if (bVar31 == 0) goto LAB_10145e920;
          if (bVar31 != 1) {
            uStack_d0 = 1;
            puStack_c8 = (undefined8 *)(ulong)bVar31;
            FUN_1087e3ee8(&uStack_140,&uStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_10145e730;
          }
LAB_10145e960:
          if (((pbVar32 != (byte *)0x0) && (*pbVar32 != 0x12)) &&
             (FUN_108855bf0(&uStack_d0,pbVar32,auStack_71,&UNK_10b20a5c0), uStack_d0 != 2)) {
LAB_10145f15c:
            uStack_168 = uStack_98;
            uStack_167 = uStack_97;
            uStack_170 = uStack_a0;
            uStack_16f = uStack_9f;
            uStack_158 = uStack_88;
            uStack_157 = uStack_87;
            uStack_160 = uStack_90;
            uStack_15f = uStack_8f;
            uStack_150 = uStack_80;
            uStack_14f = uStack_7f;
            uStack_198 = puStack_c8;
            uStack_1a0 = uStack_d0;
            puStack_188 = puStack_b8;
            puStack_190 = puStack_c0;
            uStack_178 = uStack_a8;
            uStack_177 = uStack_a7;
            uStack_180 = uStack_b0;
            uStack_17f = uStack_af;
            goto LAB_10145f180;
          }
          bVar31 = 1;
        }
        else {
          if (bVar31 == 4) {
            puVar27 = *(undefined8 **)(pbVar19 + 8);
            if (puVar27 == (undefined8 *)0x0) goto LAB_10145e920;
            if (puVar27 == (undefined8 *)0x1) goto LAB_10145e960;
            uStack_d0 = 1;
            puStack_c8 = puVar27;
            FUN_1087e3ee8(&uStack_140,&uStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
          }
          else {
            if (bVar31 == 0xc) {
              piVar22 = *(int **)(pbVar19 + 0x10);
              lVar20 = *(long *)(pbVar19 + 0x18);
              if (lVar20 != 5) goto LAB_10145e944;
              goto LAB_10145e6f4;
            }
LAB_10145f194:
            FUN_108855bf0(&uStack_140,pbVar19,auStack_71,&UNK_10b214528);
          }
LAB_10145e730:
          if (uStack_140 != 2) goto LAB_10145f2f0;
LAB_10145e740:
          if (((byte)uStack_138 & 1) != 0) goto LAB_10145e960;
LAB_10145e920:
          if (((pbVar32 != (byte *)0x0) && (*pbVar32 != 0x12)) &&
             (FUN_108855bf0(&uStack_d0,pbVar32,auStack_71,&UNK_10b20a5c0), uStack_d0 != 2))
          goto LAB_10145f15c;
          bVar31 = 0;
        }
      }
      else {
        if (bVar31 == 0x15) {
          if (*(long *)(lVar25 + 0x38) == 1) {
            pbVar19 = *(byte **)(lVar25 + 0x30);
            pbVar32 = pbVar19 + 0x20;
            bVar31 = *pbVar19;
            goto joined_r0x00010145e76c;
          }
          if (*(long *)(lVar25 + 0x38) == 0) {
            uStack_d0 = 0xb;
            FUN_1087e3ee8(&uStack_1a0,&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
          }
          else {
            uStack_d0 = 0xb;
            FUN_1087e3ee8(&uStack_1a0,&uStack_d0,&UNK_10b20a580,&UNK_10b20a590);
          }
        }
        else {
          FUN_1088556a8(&uStack_d0);
          FUN_1087e3db0(&uStack_1a0,&uStack_d0,&UNK_10b20a5b0,&UNK_10b20a590);
        }
LAB_10145f180:
        uVar33 = uStack_1a0;
        puVar28 = puStack_190;
        if (uStack_1a0 != 2) {
LAB_10145f32c:
          puVar27 = puStack_188;
          puVar18 = uStack_198;
          uStack_1d8 = uStack_177;
          uStack_1d1 = uStack_170;
          uStack_1e0 = uStack_17f;
          uStack_1d9 = uStack_178;
          uStack_1c8 = uStack_167;
          uStack_1c1 = uStack_160;
          uStack_1d0 = uStack_16f;
          uStack_1c9 = uStack_168;
          uStack_1b8 = uStack_157;
          uStack_1c0 = uStack_15f;
          uStack_1b9 = uStack_158;
          uStack_1b1 = uStack_150;
          uStack_1b0 = uStack_14f;
          uStack_b0 = uStack_180;
          if (puVar37 != (undefined8 *)0x0) {
            _free(puVar35);
          }
          goto LAB_10145f1d8;
        }
        bVar31 = (byte)uStack_198;
      }
      lVar25 = lVar25 + 0x40;
      uStack_208 = uStack_208 + 1;
      uVar33 = uStack_208;
      lVar20 = lVar25;
      if (puVar37 != (undefined8 *)0x8000000000000000) {
        puVar27 = puVar36;
        puVar28 = puStack_1f0;
        if (puVar36 != (undefined8 *)0x0) {
          do {
            puVar34 = puVar27 + 1;
            uVar10 = *(ushort *)((long)puVar27 + 0x112);
            uVar33 = (ulong)uVar10;
            lVar38 = uVar33 * 0x18;
            puVar23 = puVar34;
            lVar20 = 0x113;
            do {
              lVar29 = lVar20;
              uVar39 = uVar33;
              if (lVar38 == 0) goto joined_r0x00010145ea30;
              puVar7 = (undefined8 *)puVar23[2];
              puVar4 = puVar18;
              if (puVar7 <= puVar18) {
                puVar4 = puVar7;
              }
              iVar16 = _memcmp(puVar35,puVar23[1],puVar4);
              lVar20 = (long)puVar18 - (long)puVar7;
              if (iVar16 != 0) {
                lVar20 = (long)iVar16;
              }
              cVar1 = 0 < lVar20;
              if (lVar20 < 0) {
                cVar1 = -1;
              }
              lVar38 = lVar38 + -0x18;
              lVar20 = lVar29 + 1;
              puVar23 = puVar23 + 3;
            } while (cVar1 == '\x01');
            if (cVar1 == '\0') {
              if (puVar37 != (undefined8 *)0x0) {
                _free(puVar35);
              }
              *(byte *)((long)puVar27 + lVar20) = bVar31 & 1;
              puStack_230 = puStack_1f0;
              goto joined_r0x00010145e690;
            }
            uVar39 = lVar29 - 0x113;
joined_r0x00010145ea30:
            if (puVar28 == (undefined8 *)0x0) goto LAB_10145eaa8;
            puVar27 = (undefined8 *)puVar27[uVar39 + 0x24];
            puVar28 = (undefined8 *)((long)puVar28 + -1);
          } while( true );
        }
        puVar36 = (undefined8 *)_malloc(0x120);
        if (puVar36 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
          goto LAB_10145f568;
        }
        puStack_1f0 = (undefined8 *)0x0;
        *(undefined2 *)((long)puVar36 + 0x112) = 1;
        *puVar36 = 0;
        puVar36[1] = puVar37;
        puVar36[2] = puVar35;
        puVar36[3] = puVar18;
        *(byte *)((long)puVar36 + 0x114) = bVar31 & 1;
        puStack_1f8 = puVar36;
        goto LAB_10145ea88;
      }
    }
LAB_10145f230:
    puStack_130 = puStack_1f0;
    uStack_138 = puStack_1f8;
    puStack_128 = puStack_1e8;
    uStack_140 = 2;
    if ((lVar3 - lVar20 == 0) ||
       (uStack_1a0 = uVar33,
       FUN_1087e427c(&uStack_d0,uVar33 + ((ulong)(lVar3 - lVar20) >> 6),&uStack_1a0,&UNK_10b23a190),
       uStack_d0 == 2)) goto LAB_10145f254;
    uStack_118 = uStack_a8;
    uStack_117 = uStack_a7;
    uStack_120 = uStack_b0;
    uStack_11f = uStack_af;
    uStack_108 = uStack_98;
    uStack_107 = uStack_97;
    uStack_110 = uStack_a0;
    uStack_10f = uStack_9f;
    uStack_f8 = uStack_88;
    uStack_f7 = uStack_87;
    uStack_100 = uStack_90;
    uStack_ff = uStack_8f;
    uStack_f0 = uStack_80;
    uStack_ef = uStack_7f;
    uStack_138 = puStack_c8;
    uStack_140 = uStack_d0;
    puStack_128 = puStack_b8;
    puStack_130 = puStack_c0;
    if (puStack_1f8 == (undefined8 *)0x0) {
      puStack_1e8 = (undefined8 *)0x0;
    }
    else {
      puStack_c8 = (undefined8 *)0x0;
      puStack_c0 = puStack_1f8;
      puStack_b8 = puStack_1f0;
      uStack_a8 = 0;
      uStack_a7 = 0;
      uStack_a0 = SUB81(puStack_1f8,0);
      uStack_9f = (undefined7)((ulong)puStack_1f8 >> 8);
      uStack_98 = SUB81(puStack_1f0,0);
      uStack_97 = (undefined7)((ulong)puStack_1f0 >> 8);
    }
    uStack_b0 = puStack_1f8 != (undefined8 *)0x0;
    uStack_d0 = (ulong)(byte)uStack_b0;
    uStack_af = 0;
    uStack_90 = SUB81(puStack_1e8,0);
    uStack_8f = (undefined7)((ulong)puStack_1e8 >> 8);
    FUN_100f3a554(&uStack_1a0,&uStack_d0);
    while (uStack_1a0 != 0) {
      lVar25 = uStack_1a0 + (long)puStack_190 * 0x18;
      if (*(long *)(lVar25 + 8) != 0) {
        _free(*(undefined8 *)(lVar25 + 0x10));
      }
      FUN_100f3a554(&uStack_1a0,&uStack_d0);
    }
  }
  else {
    FUN_108855bf0(&uStack_140,param_2,auStack_71,&UNK_10b2131c8);
  }
LAB_10145f3cc:
  if (uStack_140 != 2) {
    param_1[5] = CONCAT71(uStack_117,uStack_118);
    param_1[4] = CONCAT71(uStack_11f,uStack_120);
    param_1[7] = CONCAT71(uStack_107,uStack_108);
    param_1[6] = CONCAT71(uStack_10f,uStack_110);
    param_1[9] = CONCAT71(uStack_f7,uStack_f8);
    param_1[8] = CONCAT71(uStack_ff,uStack_100);
    param_1[10] = CONCAT71(uStack_ef,uStack_f0);
    param_1[1] = (ulong)uStack_138;
    *param_1 = uStack_140;
    param_1[3] = (ulong)puStack_128;
    param_1[2] = (ulong)puStack_130;
    return;
  }
LAB_10145f254:
  param_1[4] = (ulong)puStack_128;
  param_1[1] = 1;
  *param_1 = 2;
  param_1[3] = (ulong)puStack_130;
  param_1[2] = (ulong)uStack_138;
  return;
LAB_10145eaa8:
  if (uVar10 < 0xb) {
    puVar28 = puVar34 + uVar39 * 3;
    lVar20 = uVar33 - uVar39;
    if (uVar33 < uVar39 || lVar20 == 0) {
      *puVar28 = puVar37;
      puVar28[1] = puVar35;
      puVar28[2] = puVar18;
    }
    else {
      _memmove(puVar34 + (uVar39 + 1) * 3,puVar28,lVar20 * 0x18);
      *puVar28 = puVar37;
      puVar28[1] = puVar35;
      puVar28[2] = puVar18;
      _memmove((long)puVar27 + uVar39 + 0x115,(long)puVar27 + uVar39 + 0x114,lVar20);
    }
    *(byte *)((long)puVar27 + uVar39 + 0x114) = bVar31 & 1;
    *(ushort *)((long)puVar27 + 0x112) = uVar10 + 1;
LAB_10145ea88:
    puStack_238 = (undefined8 *)((long)puStack_1e8 + 1);
    puStack_230 = puStack_1f0;
    puStack_1e8 = puStack_238;
joined_r0x00010145e690:
    uVar33 = (lVar21 - 0x40U >> 6) + 1;
    lVar20 = lVar3;
    puStack_1f0 = puStack_230;
    if (lVar25 == lVar3) goto LAB_10145f230;
    goto LAB_10145e694;
  }
  uVar33 = 0;
  if (uVar39 != 6) {
    uVar33 = uVar39 - 7;
  }
  uVar5 = 5;
  if (uVar39 != 6) {
    uVar5 = 6;
  }
  uVar30 = uVar39;
  uVar6 = uVar39;
  if (uVar39 != 5) {
    uVar30 = uVar5;
    uVar6 = uVar33;
  }
  uVar33 = uVar39;
  if (4 < uVar39) {
    uVar33 = uVar6;
  }
  uVar5 = 4;
  if (4 < uVar39) {
    uVar5 = uVar30;
  }
  puStack_248 = (undefined8 *)_malloc(0x120);
  if (puStack_248 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
  }
  else {
    *puStack_248 = 0;
    uVar30 = (ulong)*(ushort *)((long)puVar27 + 0x112) + ~uVar5;
    *(short *)((long)puStack_248 + 0x112) = (short)uVar30;
    plVar24 = puVar34 + uVar5 * 3;
    lVar20 = *plVar24;
    puStack_238 = (undefined8 *)plVar24[1];
    if (uVar30 < 0xc) {
      uVar8 = *(undefined1 *)((long)puVar27 + uVar5 + 0x114);
      lStack_258 = plVar24[2];
      _memcpy(puStack_248 + 1,puVar34 + (uVar5 + 1) * 3,uVar30 * 0x18);
      _memcpy((long)puStack_248 + 0x114,(long)puVar27 + uVar5 + 0x115,uVar30);
      *(short *)((long)puVar27 + 0x112) = (short)uVar5;
      puVar28 = puStack_248;
      if (uVar39 < 6) {
        puVar28 = puVar27;
      }
      uVar10 = *(ushort *)((long)puVar28 + 0x112);
      puVar34 = puVar28 + uVar33 * 3 + 1;
      lVar38 = uVar10 - uVar33;
      if (uVar10 < uVar33 || lVar38 == 0) {
        *puVar34 = puVar37;
        puVar34[1] = puVar35;
        puVar34[2] = puVar18;
      }
      else {
        _memmove(puVar28 + (uVar33 + 1) * 3 + 1,puVar34,lVar38 * 0x18);
        *puVar34 = puVar37;
        puVar34[1] = puVar35;
        puVar34[2] = puVar18;
        _memmove((long)puVar28 + uVar33 + 0x115,(long)puVar28 + uVar33 + 0x114,lVar38);
      }
      *(byte *)((long)puVar28 + uVar33 + 0x114) = bVar31 & 1;
      *(ushort *)((long)puVar28 + 0x112) = uVar10 + 1;
      if (lVar20 != -0x8000000000000000) {
        puVar37 = (undefined8 *)0x0;
        do {
          puVar35 = (undefined8 *)*puVar27;
          if (puVar35 == (undefined8 *)0x0) {
            puStack_1f8 = (undefined8 *)_malloc(0x180);
            if (puStack_1f8 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
              goto LAB_10145f568;
            }
            *puStack_1f8 = 0;
            *(undefined2 *)((long)puStack_1f8 + 0x112) = 0;
            puStack_1f8[0x24] = puVar36;
            if ((undefined8 *)0xfffffffffffffffe < puStack_1f0) {
              func_0x000108a07a20(&UNK_10b238148);
              goto LAB_10145f568;
            }
            *puVar36 = puStack_1f8;
            *(undefined2 *)(puVar36 + 0x22) = 0;
            if (puVar37 != puStack_1f0) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
              goto LAB_10145f568;
            }
            *(undefined2 *)((long)puStack_1f8 + 0x112) = 1;
            puStack_1f8[1] = lVar20;
            puStack_1f8[2] = puStack_238;
            puStack_1f8[3] = lStack_258;
            *(undefined1 *)((long)puStack_1f8 + 0x114) = uVar8;
            puStack_1f8[0x25] = puStack_248;
            *puStack_248 = puStack_1f8;
            *(undefined2 *)(puStack_248 + 0x22) = 1;
            puVar36 = puStack_1f8;
            puStack_1f0 = (undefined8 *)((long)puStack_1f0 + 1);
            break;
          }
          uVar10 = *(ushort *)(puVar27 + 0x22);
          uVar33 = (ulong)uVar10;
          uVar11 = *(ushort *)((long)puVar35 + 0x112);
          uVar39 = (ulong)uVar11;
          if (uVar11 < 0xb) {
            plVar24 = puVar35 + uVar33 * 3 + 1;
            if (uVar10 < uVar11) {
              lVar38 = uVar39 - uVar33;
              _memmove(puVar35 + (uVar33 + 1) * 3 + 1,plVar24,lVar38 * 0x18);
              *plVar24 = lVar20;
              plVar24[1] = (long)puStack_238;
              plVar24[2] = lStack_258;
              _memmove((long)puVar35 + uVar33 + 0x115,(long)puVar35 + uVar33 + 0x114,lVar38);
              *(undefined1 *)((long)puVar35 + uVar33 + 0x114) = uVar8;
              _memmove(puVar35 + uVar33 + 0x26,puVar35 + uVar33 + 0x25,lVar38 * 8);
            }
            else {
              *plVar24 = lVar20;
              plVar24[1] = (long)puStack_238;
              plVar24[2] = lStack_258;
              *(undefined1 *)((long)puVar35 + uVar33 + 0x114) = uVar8;
            }
            puVar35[uVar33 + 0x25] = puStack_248;
            *(ushort *)((long)puVar35 + 0x112) = uVar11 + 1;
            if (uVar33 + 1 < uVar39 + 2) {
              lVar20 = uVar33 + 0x25;
              do {
                puVar37 = (undefined8 *)puVar35[lVar20];
                *puVar37 = puVar35;
                *(short *)(puVar37 + 0x22) = (short)lVar20 + -0x24;
                lVar20 = lVar20 + 1;
              } while (lVar20 - uVar39 != 0x26);
            }
            break;
          }
          puVar37 = (undefined8 *)((long)puVar37 + 1);
          uVar5 = 5;
          if (uVar10 != 6) {
            uVar5 = 6;
          }
          uVar30 = 0;
          if (uVar10 != 6) {
            uVar30 = uVar33 - 7;
          }
          uVar6 = uVar33;
          uVar13 = uVar33;
          if (uVar10 != 5) {
            uVar6 = uVar30;
            uVar13 = uVar5;
          }
          uVar5 = 4;
          if (4 < uVar10) {
            uVar33 = uVar6;
            uVar5 = uVar13;
          }
          puVar18 = (undefined8 *)_malloc(0x180);
          if (puVar18 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
            goto LAB_10145f568;
          }
          *puVar18 = 0;
          uVar30 = (ulong)*(ushort *)((long)puVar35 + 0x112) + ~uVar5;
          *(short *)((long)puVar18 + 0x112) = (short)uVar30;
          plVar24 = puVar35 + uVar5 * 3 + 1;
          lVar38 = *plVar24;
          lVar29 = plVar24[1];
          if (0xb < uVar30) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar30,0xb,&UNK_10b2381a8)
            ;
            goto LAB_10145f568;
          }
          uVar9 = *(undefined1 *)((long)puVar35 + uVar5 + 0x114);
          lVar26 = plVar24[2];
          _memcpy(puVar18 + 1,puVar35 + (uVar5 + 1) * 3 + 1,uVar30 * 0x18);
          _memcpy((long)puVar18 + 0x114,(long)puVar35 + uVar5 + 0x115,uVar30);
          *(short *)((long)puVar35 + 0x112) = (short)uVar5;
          uVar30 = (ulong)*(ushort *)((long)puVar18 + 0x112);
          lVar2 = uVar30 + 1;
          if (0xb < uVar30) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,lVar2,0xc,&UNK_10b2381c0);
            goto LAB_10145f568;
          }
          if (uVar39 - uVar5 != lVar2) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
            goto LAB_10145f568;
          }
          _memcpy(puVar18 + 0x24,puVar35 + uVar5 + 0x25,lVar2 * 8);
          uVar39 = 0;
          do {
            puVar27 = (undefined8 *)(puVar18 + 0x24)[uVar39];
            *puVar27 = puVar18;
            *(short *)(puVar27 + 0x22) = (short)uVar39;
            if (uVar30 <= uVar39) break;
            uVar39 = uVar39 + 1;
          } while (uVar39 <= uVar30);
          puVar27 = puVar18;
          if (uVar10 < 6) {
            puVar27 = puVar35;
          }
          uVar10 = *(ushort *)((long)puVar27 + 0x112);
          uVar39 = (ulong)uVar10;
          plVar24 = puVar27 + (long)(int)uVar33 * 3 + 1;
          lVar2 = uVar39 - uVar33;
          if (uVar39 < uVar33 || lVar2 == 0) {
            *plVar24 = lVar20;
            plVar24[1] = (long)puStack_238;
            plVar24[2] = lStack_258;
            *(undefined1 *)((long)puVar27 + uVar33 + 0x114) = uVar8;
          }
          else {
            _memmove(puVar27 + (long)(int)(uVar33 + 1) * 3 + 1,plVar24,lVar2 * 0x18);
            *plVar24 = lVar20;
            plVar24[1] = (long)puStack_238;
            plVar24[2] = lStack_258;
            _memmove((long)puVar27 + uVar33 + 0x115,(long)puVar27 + uVar33 + 0x114,lVar2);
            *(undefined1 *)((long)puVar27 + uVar33 + 0x114) = uVar8;
            _memmove(puVar27 + uVar33 + 0x26,puVar27 + uVar33 + 0x25,lVar2 * 8);
          }
          puVar27[uVar33 + 0x25] = puStack_248;
          *(ushort *)((long)puVar27 + 0x112) = uVar10 + 1;
          if (uVar33 + 1 < uVar39 + 2) {
            lVar20 = uVar33 + 0x25;
            do {
              puVar28 = (undefined8 *)puVar27[lVar20];
              *puVar28 = puVar27;
              *(short *)(puVar28 + 0x22) = (short)lVar20 + -0x24;
              lVar20 = lVar20 + 1;
            } while (lVar20 - uVar39 != 0x26);
          }
          puVar27 = puVar35;
          lVar20 = lVar38;
          lStack_258 = lVar26;
          puStack_248 = puVar18;
          puStack_238 = (undefined8 *)lVar29;
          uVar8 = uVar9;
        } while (lVar38 != -0x8000000000000000);
      }
      goto LAB_10145ea88;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar30,0xb,&UNK_10b2381a8);
  }
LAB_10145f568:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10145f56c);
  (*pcVar15)();
}

