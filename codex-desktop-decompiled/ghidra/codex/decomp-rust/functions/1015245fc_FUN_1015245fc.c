
void FUN_1015245fc(ulong *param_1,char *param_2,long param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  byte bVar23;
  ulong uVar24;
  char *pcVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lStack_218;
  undefined8 *puStack_208;
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  ulong uStack_188;
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
  ulong uStack_128;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  ulong uStack_b8;
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
  
  puVar29 = (undefined8 *)0x0;
  uStack_1f0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  uStack_1a8 = 0;
  pcVar25 = param_2;
LAB_101524640:
  do {
    pcVar12 = pcVar25;
    if (pcVar12 == param_2 + param_3 * 0x40) {
LAB_101525194:
      param_1[2] = uStack_1b0;
      param_1[1] = (ulong)puStack_1b8;
      param_1[3] = uStack_1a8;
      *param_1 = 2;
      return;
    }
    pcVar25 = pcVar12 + 0x40;
  } while (*pcVar12 == '\x16');
  func_0x0001004e0914(&uStack_d0,pcVar12);
  uVar24 = uStack_b8;
  puVar28 = puStack_c0;
  uVar18 = uStack_c8;
  puStack_1c0 = puStack_c0;
  if (uStack_d0 != 2) {
    uStack_138 = CONCAT17(uStack_a0,uStack_a7);
    uStack_140 = CONCAT17(uStack_a8,uStack_af);
    uStack_128 = CONCAT17(uStack_90,uStack_97);
    puStack_130 = (undefined8 *)CONCAT17(uStack_98,uStack_9f);
    uStack_120 = CONCAT17(uStack_88,uStack_8f);
    uStack_118 = uStack_87;
    uStack_111 = uStack_80;
    uStack_110 = uStack_7f;
    uVar27 = uStack_d0;
    uVar24 = uStack_c8;
    uVar33 = uStack_b8;
    uVar4 = uStack_b0;
    goto LAB_1015251f0;
  }
  if (uStack_c8 != 0x8000000000000000) {
    pbVar14 = (byte *)(pcVar12 + 0x20);
    bVar23 = pcVar12[0x20];
    if (bVar23 - 0xc < 2) {
      pbVar26 = (byte *)0x0;
joined_r0x00010152473c:
      if (0xc < bVar23) {
        if (bVar23 == 0xd) {
          piVar16 = *(int **)(pbVar14 + 8);
          lVar15 = *(long *)(pbVar14 + 0x10);
          if (lVar15 == 5) {
LAB_1015246c4:
            if (*piVar16 == 0x6f6c6c61 && (char)piVar16[1] == 'w') goto LAB_1015248f4;
            lVar15 = 5;
          }
          else {
LAB_101524954:
            if (lVar15 == 4) {
              if (*piVar16 == 0x656e6f6e) goto LAB_101524970;
              lVar15 = 4;
            }
          }
          FUN_1087e44e4(&uStack_140,piVar16,lVar15,&UNK_10b2204c0,2);
          goto LAB_101524700;
        }
        if (bVar23 == 0xe) {
          pcVar12 = *(char **)(pbVar14 + 0x10);
          lVar15 = *(long *)(pbVar14 + 0x18);
          if (lVar15 != 5) goto LAB_101524770;
LAB_101524800:
          if ((((*pcVar12 == 'a') && (pcVar12[1] == 'l')) && (pcVar12[2] == 'l')) &&
             ((pcVar12[3] == 'o' && (pcVar12[4] == 'w')))) goto LAB_1015248f4;
        }
        else {
          if (bVar23 != 0xf) goto LAB_101525174;
          pcVar12 = *(char **)(pbVar14 + 8);
          lVar15 = *(long *)(pbVar14 + 0x10);
          if (lVar15 == 5) goto LAB_101524800;
LAB_101524770:
          if ((((lVar15 == 4) && ((*pcVar12 == 'n' && (pcVar12[1] == 'o')))) && (pcVar12[2] == 'n'))
             && (pcVar12[3] == 'e')) goto LAB_101524970;
        }
        __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_e8);
        uVar9 = uStack_e0;
        uVar33 = uStack_e8;
        FUN_1087e44e4(&uStack_d0,uStack_e0,uStack_d8,&UNK_10b2204c0,2);
        uStack_120 = CONCAT71(uStack_af,uStack_b0);
        uStack_108 = CONCAT71(uStack_97,uStack_98);
        uStack_f8 = CONCAT71(uStack_87,uStack_88);
        uStack_100 = CONCAT71(uStack_8f,uStack_90);
        uStack_110 = (undefined7)CONCAT71(uStack_9f,uStack_a0);
        uStack_109 = (undefined1)((uint7)uStack_9f >> 0x30);
        uStack_f0 = CONCAT71(uStack_7f,uStack_80);
        uStack_138 = uStack_c8;
        uStack_140 = uStack_d0;
        uStack_128 = uStack_b8;
        puStack_130 = puStack_c0;
        uStack_118 = (undefined7)CONCAT71(uStack_a7,uStack_a8);
        uStack_111 = (undefined1)((uint7)uStack_a7 >> 0x30);
        if ((uVar33 & 0x7fffffffffffffff) != 0) {
          _free(uVar9);
        }
        if (uStack_140 == 2) goto LAB_101524710;
LAB_10152529c:
        uStack_198._0_4_ = uStack_138._1_4_ << 8;
        uStack_198 = CONCAT44(uStack_138._4_4_,(int)uStack_198);
        uStack_180 = (undefined1)uStack_120;
        uStack_17f = (undefined7)((ulong)uStack_120 >> 8);
        uStack_188 = uStack_128;
        uStack_170 = (undefined1)uStack_110;
        uStack_16f = (undefined7)(CONCAT17(uStack_109,uStack_110) >> 8);
        uStack_178 = (undefined1)uStack_118;
        uStack_177 = (undefined7)(CONCAT17(uStack_111,uStack_118) >> 8);
        uStack_160 = (undefined1)uStack_100;
        uStack_15f = (undefined7)((ulong)uStack_100 >> 8);
        uStack_168 = (undefined1)uStack_108;
        uStack_167 = (undefined7)((ulong)uStack_108 >> 8);
        uStack_150 = (undefined1)uStack_f0;
        uStack_14f = (undefined7)((ulong)uStack_f0 >> 8);
        uStack_158 = (undefined1)uStack_f8;
        uStack_157 = (undefined7)((ulong)uStack_f8 >> 8);
        uStack_198 = CONCAT71(uStack_198._1_7_,(byte)uStack_138);
        uVar27 = uStack_140;
        puStack_1c0 = puStack_130;
        goto LAB_1015252d8;
      }
      if (bVar23 == 1) {
        bVar23 = pbVar14[1];
        if (bVar23 != 0) {
          if (bVar23 != 1) {
            uStack_d0 = 1;
            uStack_c8 = (ulong)bVar23;
            FUN_1087e3ee8(&uStack_140,&uStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_101524700;
          }
          goto LAB_101524970;
        }
LAB_1015248f4:
        if (((pbVar26 != (byte *)0x0) && (*pbVar26 != 0x12)) &&
           (FUN_108855bf0(&uStack_d0,pbVar26,auStack_71,&UNK_10b20a5c0), uStack_d0 != 2)) {
LAB_101525138:
          uStack_178 = uStack_a8;
          uStack_177 = uStack_a7;
          uStack_180 = uStack_b0;
          uStack_17f = uStack_af;
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
          uStack_198 = uStack_c8;
          uStack_1a0 = uStack_d0;
          uStack_188 = uStack_b8;
          puStack_190 = puStack_c0;
          goto LAB_10152515c;
        }
        bVar23 = 0;
      }
      else {
        if (bVar23 == 4) {
          uVar33 = *(ulong *)(pbVar14 + 8);
          if (uVar33 == 0) goto LAB_1015248f4;
          if (uVar33 == 1) goto LAB_101524970;
          uStack_d0 = 1;
          uStack_c8 = uVar33;
          FUN_1087e3ee8(&uStack_140,&uStack_d0,&UNK_10b2242c0,&UNK_10b20a590);
        }
        else {
          if (bVar23 == 0xc) {
            piVar16 = *(int **)(pbVar14 + 0x10);
            lVar15 = *(long *)(pbVar14 + 0x18);
            if (lVar15 != 5) goto LAB_101524954;
            goto LAB_1015246c4;
          }
LAB_101525174:
          FUN_108855bf0(&uStack_140,pbVar14,auStack_71,&UNK_10b214b28);
        }
LAB_101524700:
        if (uStack_140 != 2) goto LAB_10152529c;
LAB_101524710:
        if (((byte)uStack_138 & 1) == 0) goto LAB_1015248f4;
LAB_101524970:
        if (((pbVar26 != (byte *)0x0) && (*pbVar26 != 0x12)) &&
           (FUN_108855bf0(&uStack_d0,pbVar26,auStack_71,&UNK_10b20a5c0), uStack_d0 != 2))
        goto LAB_101525138;
        bVar23 = 1;
      }
    }
    else {
      if (bVar23 == 0x15) {
        if (*(long *)(pcVar12 + 0x38) == 1) {
          pbVar14 = *(byte **)(pcVar12 + 0x30);
          pbVar26 = pbVar14 + 0x20;
          bVar23 = *pbVar14;
          goto joined_r0x00010152473c;
        }
        if (*(long *)(pcVar12 + 0x38) == 0) {
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
LAB_10152515c:
      uVar27 = uStack_1a0;
      puStack_1c0 = puStack_190;
      if (uStack_1a0 != 2) {
LAB_1015252d8:
        uVar4 = uStack_180;
        uVar33 = uStack_188;
        uVar24 = uStack_198;
        uStack_138 = CONCAT17(uStack_170,uStack_177);
        uStack_140 = CONCAT17(uStack_178,uStack_17f);
        uStack_128 = CONCAT17(uStack_160,uStack_167);
        puStack_130 = (undefined8 *)CONCAT17(uStack_168,uStack_16f);
        uStack_120 = CONCAT17(uStack_158,uStack_15f);
        uStack_118 = uStack_157;
        uStack_111 = uStack_150;
        uStack_110 = uStack_14f;
        if (uVar18 != 0) {
          _free(puVar28);
        }
LAB_1015251f0:
        *param_1 = uVar27;
        param_1[1] = uVar24;
        param_1[2] = (ulong)puStack_1c0;
        param_1[3] = uVar33;
        *(undefined1 *)(param_1 + 4) = uVar4;
        *(ulong *)((long)param_1 + 0x29) = uStack_138;
        *(ulong *)((long)param_1 + 0x21) = uStack_140;
        *(ulong *)((long)param_1 + 0x39) = uStack_128;
        *(undefined8 **)((long)param_1 + 0x31) = puStack_130;
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_111,uStack_118);
        *(undefined8 *)((long)param_1 + 0x41) = uStack_120;
        param_1[10] = CONCAT71(uStack_110,uStack_111);
        if (puVar29 == (undefined8 *)0x0) {
          uStack_1f0 = 0;
        }
        else {
          uStack_c8 = 0;
          uStack_b8 = uStack_1f8;
          uStack_a8 = 0;
          uStack_a7 = 0;
          uStack_a0 = SUB81(puVar29,0);
          uStack_9f = (undefined7)((ulong)puVar29 >> 8);
          uStack_98 = (undefined1)uStack_1f8;
          uStack_97 = (undefined7)(uStack_1f8 >> 8);
          puStack_c0 = puVar29;
        }
        uStack_b0 = puVar29 != (undefined8 *)0x0;
        uStack_d0 = (ulong)(byte)uStack_b0;
        uStack_af = 0;
        uStack_90 = (undefined1)uStack_1f0;
        uStack_8f = (undefined7)(uStack_1f0 >> 8);
        FUN_100f3a554(&uStack_1a0,&uStack_d0);
        while (uStack_1a0 != 0) {
          lVar15 = uStack_1a0 + (long)puStack_190 * 0x18;
          if (*(long *)(lVar15 + 8) != 0) {
            _free(*(undefined8 *)(lVar15 + 0x10));
          }
          FUN_100f3a554(&uStack_1a0,&uStack_d0);
        }
        return;
      }
      bVar23 = (byte)uStack_198;
    }
    if (puVar29 != (undefined8 *)0x0) {
      uStack_1f8 = uStack_1b0;
      uVar33 = uStack_1b0;
      puVar20 = puVar29;
      do {
        puVar13 = puVar20 + 1;
        uVar6 = *(ushort *)((long)puVar20 + 0x112);
        uVar27 = (ulong)uVar6;
        lVar31 = uVar27 * 0x18;
        puVar21 = puVar13;
        lVar15 = 0x113;
        do {
          lVar32 = lVar15;
          uVar22 = uVar27;
          if (lVar31 == 0) goto joined_r0x000101524a18;
          uVar3 = puVar21[2];
          uVar22 = uVar24;
          if (uVar3 <= uVar24) {
            uVar22 = uVar3;
          }
          iVar11 = _memcmp(puVar28,puVar21[1],uVar22);
          lVar15 = uVar24 - uVar3;
          if (iVar11 != 0) {
            lVar15 = (long)iVar11;
          }
          cVar1 = 0 < lVar15;
          if (lVar15 < 0) {
            cVar1 = -1;
          }
          lVar31 = lVar31 + -0x18;
          lVar15 = lVar32 + 1;
          puVar21 = puVar21 + 3;
        } while (cVar1 == '\x01');
        if (cVar1 == '\0') {
          if (uVar18 != 0) {
            _free(puVar28);
          }
          *(byte *)((long)puVar20 + lVar15) = bVar23 & 1;
          goto LAB_101524640;
        }
        uVar22 = lVar32 - 0x113;
joined_r0x000101524a18:
        if (uVar33 == 0) goto LAB_101524a5c;
        puVar20 = (undefined8 *)puVar20[uVar22 + 0x24];
        uVar33 = uVar33 - 1;
      } while( true );
    }
    puStack_1b8 = (undefined8 *)_malloc(0x120);
    if (puStack_1b8 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
      goto LAB_101525400;
    }
    uStack_1b0 = 0;
    *(undefined2 *)((long)puStack_1b8 + 0x112) = 1;
    *puStack_1b8 = 0;
    puStack_1b8[1] = uVar18;
    puStack_1b8[2] = puVar28;
    puStack_1b8[3] = uVar24;
    *(byte *)((long)puStack_1b8 + 0x114) = bVar23 & 1;
    puVar29 = puStack_1b8;
    goto LAB_10152505c;
  }
  goto LAB_101525194;
LAB_101524a5c:
  if (uVar6 < 0xb) {
    puVar30 = puVar13 + uVar22 * 3;
    lVar15 = uVar27 - uVar22;
    if (uVar27 < uVar22 || lVar15 == 0) {
      *puVar30 = uVar18;
      puVar30[1] = (ulong)puVar28;
      puVar30[2] = uVar24;
    }
    else {
      _memmove(puVar13 + (uVar22 + 1) * 3,puVar30,lVar15 * 0x18);
      *puVar30 = uVar18;
      puVar30[1] = (ulong)puVar28;
      puVar30[2] = uVar24;
      _memmove((long)puVar20 + uVar22 + 0x115,(long)puVar20 + uVar22 + 0x114,lVar15);
    }
    *(byte *)((long)puVar20 + uVar22 + 0x114) = bVar23 & 1;
    *(ushort *)((long)puVar20 + 0x112) = uVar6 + 1;
LAB_10152505c:
    uStack_1f0 = uStack_1a8 + 1;
    uStack_1f8 = uStack_1b0;
    uStack_1a8 = uStack_1f0;
    goto LAB_101524640;
  }
  uVar33 = 0;
  if (uVar22 != 6) {
    uVar33 = uVar22 - 7;
  }
  uVar27 = 5;
  if (uVar22 != 6) {
    uVar27 = 6;
  }
  uVar3 = uVar22;
  uVar8 = uVar22;
  if (uVar22 != 5) {
    uVar3 = uVar27;
    uVar8 = uVar33;
  }
  uVar33 = uVar22;
  if (4 < uVar22) {
    uVar33 = uVar8;
  }
  uVar27 = 4;
  if (4 < uVar22) {
    uVar27 = uVar3;
  }
  puStack_208 = (undefined8 *)_malloc(0x120);
  if (puStack_208 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x120);
  }
  else {
    *puStack_208 = 0;
    uVar3 = (ulong)*(ushort *)((long)puVar20 + 0x112) + ~uVar27;
    *(short *)((long)puStack_208 + 0x112) = (short)uVar3;
    plVar17 = puVar13 + uVar27 * 3;
    lVar15 = *plVar17;
    lStack_200 = plVar17[1];
    if (uVar3 < 0xc) {
      uVar4 = *(undefined1 *)((long)puVar20 + uVar27 + 0x114);
      lStack_218 = plVar17[2];
      _memcpy(puStack_208 + 1,puVar13 + (uVar27 + 1) * 3,uVar3 * 0x18);
      _memcpy((long)puStack_208 + 0x114,(long)puVar20 + uVar27 + 0x115,uVar3);
      *(short *)((long)puVar20 + 0x112) = (short)uVar27;
      puVar13 = puStack_208;
      if (uVar22 < 6) {
        puVar13 = puVar20;
      }
      uVar6 = *(ushort *)((long)puVar13 + 0x112);
      puVar30 = puVar13 + uVar33 * 3 + 1;
      lVar31 = uVar6 - uVar33;
      if (uVar6 < uVar33 || lVar31 == 0) {
        *puVar30 = uVar18;
        puVar30[1] = (ulong)puVar28;
        puVar30[2] = uVar24;
      }
      else {
        _memmove(puVar13 + (uVar33 + 1) * 3 + 1,puVar30,lVar31 * 0x18);
        *puVar30 = uVar18;
        puVar30[1] = (ulong)puVar28;
        puVar30[2] = uVar24;
        _memmove((long)puVar13 + uVar33 + 0x115,(long)puVar13 + uVar33 + 0x114,lVar31);
      }
      *(byte *)((long)puVar13 + uVar33 + 0x114) = bVar23 & 1;
      *(ushort *)((long)puVar13 + 0x112) = uVar6 + 1;
      if (lVar15 != -0x8000000000000000) {
        uVar18 = 0;
        do {
          puVar28 = (undefined8 *)*puVar20;
          if (puVar28 == (undefined8 *)0x0) {
            puStack_1b8 = (undefined8 *)_malloc(0x180);
            if (puStack_1b8 == (undefined8 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
              goto LAB_101525400;
            }
            *puStack_1b8 = 0;
            *(undefined2 *)((long)puStack_1b8 + 0x112) = 0;
            puStack_1b8[0x24] = puVar29;
            if (0xfffffffffffffffe < uStack_1b0) {
              func_0x000108a07a20(&UNK_10b238148);
              goto LAB_101525400;
            }
            *puVar29 = puStack_1b8;
            *(undefined2 *)(puVar29 + 0x22) = 0;
            if (uVar18 != uStack_1b0) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f39,0x30,&UNK_10b238118);
              goto LAB_101525400;
            }
            *(undefined2 *)((long)puStack_1b8 + 0x112) = 1;
            puStack_1b8[1] = lVar15;
            puStack_1b8[2] = lStack_200;
            puStack_1b8[3] = lStack_218;
            *(undefined1 *)((long)puStack_1b8 + 0x114) = uVar4;
            puStack_1b8[0x25] = puStack_208;
            *puStack_208 = puStack_1b8;
            *(undefined2 *)(puStack_208 + 0x22) = 1;
            puVar29 = puStack_1b8;
            uStack_1b0 = uStack_1b0 + 1;
            break;
          }
          uVar6 = *(ushort *)(puVar20 + 0x22);
          uVar24 = (ulong)uVar6;
          uVar7 = *(ushort *)((long)puVar28 + 0x112);
          uVar33 = (ulong)uVar7;
          if (uVar7 < 0xb) {
            plVar17 = puVar28 + uVar24 * 3 + 1;
            if (uVar6 < uVar7) {
              lVar31 = uVar33 - uVar24;
              _memmove(puVar28 + (uVar24 + 1) * 3 + 1,plVar17,lVar31 * 0x18);
              *plVar17 = lVar15;
              plVar17[1] = lStack_200;
              plVar17[2] = lStack_218;
              _memmove((long)puVar28 + uVar24 + 0x115,(long)puVar28 + uVar24 + 0x114,lVar31);
              *(undefined1 *)((long)puVar28 + uVar24 + 0x114) = uVar4;
              _memmove(puVar28 + uVar24 + 0x26,puVar28 + uVar24 + 0x25,lVar31 * 8);
            }
            else {
              *plVar17 = lVar15;
              plVar17[1] = lStack_200;
              plVar17[2] = lStack_218;
              *(undefined1 *)((long)puVar28 + uVar24 + 0x114) = uVar4;
            }
            puVar28[uVar24 + 0x25] = puStack_208;
            *(ushort *)((long)puVar28 + 0x112) = uVar7 + 1;
            if (uVar24 + 1 < uVar33 + 2) {
              lVar15 = uVar24 + 0x25;
              do {
                puVar20 = (undefined8 *)puVar28[lVar15];
                *puVar20 = puVar28;
                *(short *)(puVar20 + 0x22) = (short)lVar15 + -0x24;
                lVar15 = lVar15 + 1;
              } while (lVar15 - uVar33 != 0x26);
            }
            break;
          }
          uVar18 = uVar18 + 1;
          uVar27 = 5;
          if (uVar6 != 6) {
            uVar27 = 6;
          }
          uVar22 = 0;
          if (uVar6 != 6) {
            uVar22 = uVar24 - 7;
          }
          uVar3 = uVar24;
          uVar8 = uVar24;
          if (uVar6 != 5) {
            uVar3 = uVar22;
            uVar8 = uVar27;
          }
          uVar27 = 4;
          if (4 < uVar6) {
            uVar24 = uVar3;
            uVar27 = uVar8;
          }
          puVar13 = (undefined8 *)_malloc(0x180);
          if (puVar13 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x180);
            goto LAB_101525400;
          }
          *puVar13 = 0;
          uVar22 = (ulong)*(ushort *)((long)puVar28 + 0x112) + ~uVar27;
          *(short *)((long)puVar13 + 0x112) = (short)uVar22;
          plVar17 = puVar28 + uVar27 * 3 + 1;
          lVar31 = *plVar17;
          lVar32 = plVar17[1];
          if (0xb < uVar22) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar22,0xb,&UNK_10b2381a8)
            ;
            goto LAB_101525400;
          }
          uVar5 = *(undefined1 *)((long)puVar28 + uVar27 + 0x114);
          lVar19 = plVar17[2];
          _memcpy(puVar13 + 1,puVar28 + (uVar27 + 1) * 3 + 1,uVar22 * 0x18);
          _memcpy((long)puVar13 + 0x114,(long)puVar28 + uVar27 + 0x115,uVar22);
          *(short *)((long)puVar28 + 0x112) = (short)uVar27;
          uVar22 = (ulong)*(ushort *)((long)puVar13 + 0x112);
          lVar2 = uVar22 + 1;
          if (0xb < uVar22) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,lVar2,0xc,&UNK_10b2381c0);
            goto LAB_101525400;
          }
          if (uVar33 - uVar27 != lVar2) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5fc7,0x28,&UNK_10b238190);
            goto LAB_101525400;
          }
          _memcpy(puVar13 + 0x24,puVar28 + uVar27 + 0x25,lVar2 * 8);
          uVar33 = 0;
          do {
            puVar20 = (undefined8 *)(puVar13 + 0x24)[uVar33];
            *puVar20 = puVar13;
            *(short *)(puVar20 + 0x22) = (short)uVar33;
            if (uVar22 <= uVar33) break;
            uVar33 = uVar33 + 1;
          } while (uVar33 <= uVar22);
          puVar20 = puVar13;
          if (uVar6 < 6) {
            puVar20 = puVar28;
          }
          uVar6 = *(ushort *)((long)puVar20 + 0x112);
          uVar33 = (ulong)uVar6;
          plVar17 = puVar20 + (long)(int)uVar24 * 3 + 1;
          lVar2 = uVar33 - uVar24;
          if (uVar33 < uVar24 || lVar2 == 0) {
            *plVar17 = lVar15;
            plVar17[1] = lStack_200;
            plVar17[2] = lStack_218;
            *(undefined1 *)((long)puVar20 + uVar24 + 0x114) = uVar4;
          }
          else {
            _memmove(puVar20 + (long)(int)(uVar24 + 1) * 3 + 1,plVar17,lVar2 * 0x18);
            *plVar17 = lVar15;
            plVar17[1] = lStack_200;
            plVar17[2] = lStack_218;
            _memmove((long)puVar20 + uVar24 + 0x115,(long)puVar20 + uVar24 + 0x114,lVar2);
            *(undefined1 *)((long)puVar20 + uVar24 + 0x114) = uVar4;
            _memmove(puVar20 + uVar24 + 0x26,puVar20 + uVar24 + 0x25,lVar2 * 8);
          }
          puVar20[uVar24 + 0x25] = puStack_208;
          *(ushort *)((long)puVar20 + 0x112) = uVar6 + 1;
          if (uVar24 + 1 < uVar33 + 2) {
            lVar15 = uVar24 + 0x25;
            do {
              puVar21 = (undefined8 *)puVar20[lVar15];
              *puVar21 = puVar20;
              *(short *)(puVar21 + 0x22) = (short)lVar15 + -0x24;
              lVar15 = lVar15 + 1;
            } while (lVar15 - uVar33 != 0x26);
          }
          puVar20 = puVar28;
          lVar15 = lVar31;
          lStack_218 = lVar19;
          puStack_208 = puVar13;
          lStack_200 = lVar32;
          uVar4 = uVar5;
        } while (lVar31 != -0x8000000000000000);
      }
      goto LAB_10152505c;
    }
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar3,0xb,&UNK_10b2381a8);
  }
LAB_101525400:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x101525404);
  (*pcVar10)();
}

