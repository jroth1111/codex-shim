
/* WARNING: Type propagation algorithm not settling */

void FUN_10144b068(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  undefined7 uVar5;
  byte bVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined7 uVar9;
  byte bVar10;
  undefined7 uVar11;
  byte bVar12;
  undefined7 uVar13;
  byte bVar14;
  undefined7 uVar15;
  byte bVar16;
  undefined7 uVar17;
  byte bVar18;
  undefined7 uVar19;
  byte bVar20;
  undefined7 uVar21;
  uint uVar22;
  char *pcVar23;
  ulong uVar24;
  long lVar25;
  ulong unaff_x20;
  long lVar26;
  long lVar27;
  char *pcVar28;
  undefined8 unaff_x23;
  ulong uVar29;
  byte *pbVar30;
  ulong uVar31;
  long lVar32;
  undefined8 unaff_x27;
  ulong uVar33;
  ulong uVar34;
  long lStack_1f8;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  byte bStack_180;
  undefined7 uStack_17f;
  byte bStack_178;
  undefined7 uStack_177;
  byte bStack_170;
  undefined7 uStack_16f;
  byte bStack_168;
  undefined7 uStack_167;
  byte bStack_160;
  undefined7 uStack_15f;
  byte bStack_158;
  undefined7 uStack_157;
  byte bStack_150;
  undefined7 uStack_14f;
  byte bStack_148;
  undefined7 uStack_147;
  byte bStack_140;
  undefined7 uStack_13f;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long alStack_120 [10];
  ulong uStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
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
  byte bStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  
  if (*param_2 == '\x14') {
    lVar32 = *(long *)(param_2 + 0x18);
    if (lVar32 == 0) {
LAB_10144b950:
      FUN_1087e427c(&uStack_188,0,&UNK_10b22e568,&UNK_10b20a590);
      goto LAB_10144bca8;
    }
    pcVar28 = *(char **)(param_2 + 0x10);
    pcVar23 = pcVar28 + 0x20;
    cVar4 = *pcVar28;
    if (cVar4 == '\x10') {
LAB_10144b710:
      uVar31 = 0x8000000000000000;
    }
    else {
      if (cVar4 == '\x11') {
        func_0x0001004e0914(&uStack_190,*(undefined8 *)(pcVar28 + 8));
        unaff_x20 = CONCAT71(uStack_17f,bStack_180);
        unaff_x27 = CONCAT71(uStack_177,bStack_178);
        uVar31 = uStack_188;
        bVar6 = bStack_170;
        uVar7 = uStack_16f;
        bVar8 = bStack_168;
        uVar9 = uStack_167;
        bVar10 = bStack_160;
        uVar11 = uStack_15f;
        bVar12 = bStack_158;
        uVar13 = uStack_157;
        bVar14 = bStack_150;
        uVar15 = uStack_14f;
        bVar16 = bStack_148;
        uVar17 = uStack_147;
        bVar3 = bStack_140;
        uVar5 = uStack_13f;
      }
      else {
        if (cVar4 == '\x12') goto LAB_10144b710;
        func_0x0001004e0914(&uStack_190,pcVar28);
        unaff_x20 = CONCAT71(uStack_17f,bStack_180);
        unaff_x27 = CONCAT71(uStack_177,bStack_178);
        uVar31 = uStack_188;
        bVar6 = bStack_170;
        uVar7 = uStack_16f;
        bVar8 = bStack_168;
        uVar9 = uStack_167;
        bVar10 = bStack_160;
        uVar11 = uStack_15f;
        bVar12 = bStack_158;
        uVar13 = uStack_157;
        bVar14 = bStack_150;
        uVar15 = uStack_14f;
        bVar16 = bStack_148;
        uVar17 = uStack_147;
        bVar3 = bStack_140;
        uVar5 = uStack_13f;
      }
      uStack_13f = uVar17;
      bStack_140 = bVar16;
      uStack_147 = uVar15;
      bStack_148 = bVar14;
      uStack_14f = uVar13;
      bStack_150 = bVar12;
      uStack_157 = uVar11;
      bStack_158 = bVar10;
      uStack_15f = uVar9;
      bStack_160 = bVar8;
      uStack_167 = uVar7;
      bStack_168 = bVar6;
      if (uStack_190 != 2) {
        uStack_138 = CONCAT71(uVar5,bVar3);
        bStack_180 = (byte)uVar31;
        uStack_17f = (undefined7)(uVar31 >> 8);
        bStack_178 = (byte)unaff_x20;
        uStack_177 = (undefined7)(unaff_x20 >> 8);
        bStack_170 = (byte)unaff_x27;
        uStack_16f = (undefined7)((ulong)unaff_x27 >> 8);
        uStack_188 = uStack_190;
        goto LAB_10144bca8;
      }
      uStack_188 = uVar31;
      bStack_170 = bStack_168;
      uStack_16f = uStack_167;
      bStack_168 = bStack_160;
      uStack_167 = uStack_15f;
      bStack_160 = bStack_158;
      uStack_15f = uStack_157;
      bStack_158 = bStack_150;
      uStack_157 = uStack_14f;
      bStack_150 = bStack_148;
      uStack_14f = uStack_147;
      bStack_148 = bStack_140;
      uStack_147 = uStack_13f;
      bStack_140 = bVar3;
      uStack_13f = uVar5;
      if (uVar31 == 0x8000000000000001) goto LAB_10144b950;
    }
    if (lVar32 == 1) {
LAB_10144b71c:
      FUN_1087e427c(&uStack_d0,1,&UNK_10b22e568,&UNK_10b20a590);
      uStack_190 = uStack_d0;
      bStack_180 = bStack_c8;
      uStack_17f = uStack_c7;
      bStack_178 = bStack_b8;
      uStack_177 = uStack_b7;
      bStack_170 = bStack_b0;
      uStack_16f = uStack_af;
      bStack_168 = bStack_a8;
      uStack_167 = uStack_a7;
      bStack_160 = bStack_a0;
      uStack_15f = uStack_9f;
      bStack_158 = bStack_98;
      uStack_157 = uStack_97;
      bStack_150 = bStack_90;
      uStack_14f = uStack_8f;
      bStack_148 = bStack_88;
      uStack_147 = uStack_87;
joined_r0x00010144bad0:
      uVar31 = uVar31 & 0x7fffffffffffffff;
      uStack_130 = unaff_x20;
      uVar29 = 0x8000000000000001;
      uStack_188 = uStack_190;
      bVar3 = bStack_c0;
      uVar5 = uStack_bf;
      bVar6 = bStack_178;
      uVar7 = uStack_177;
      bVar8 = bStack_170;
      uVar9 = uStack_16f;
      bVar10 = bStack_168;
      uVar11 = uStack_167;
      bVar12 = bStack_160;
      uVar13 = uStack_15f;
      bVar14 = bStack_158;
      uVar15 = uStack_157;
      bVar16 = bStack_150;
      uVar17 = uStack_14f;
      bStack_140 = bStack_148;
      uStack_13f = uStack_147;
      uStack_138 = uStack_80;
    }
    else {
      cVar4 = pcVar28[0x20];
      if (cVar4 == '\x10') {
LAB_10144b894:
        uVar29 = 0x8000000000000000;
      }
      else {
        if (cVar4 == '\x11') {
          func_0x0001004e0914(&uStack_190,*(undefined8 *)(pcVar28 + 0x28));
        }
        else {
          if (cVar4 == '\x12') goto LAB_10144b894;
          func_0x0001004e0914(&uStack_190,pcVar23);
        }
        uVar5 = uStack_17f;
        bVar3 = bStack_180;
        pcVar23 = (char *)CONCAT71(uStack_17f,bStack_180);
        unaff_x23 = CONCAT71(uStack_177,bStack_178);
        if (uStack_190 != 2) {
          uStack_80 = CONCAT71(uStack_13f,bStack_140);
          bStack_180 = (byte)uStack_188;
          uStack_17f = (undefined7)(uStack_188 >> 8);
          bStack_c0 = bVar3;
          uStack_bf = uVar5;
          goto joined_r0x00010144bad0;
        }
        uVar29 = uStack_188;
        if (uStack_188 == 0x8000000000000001) goto LAB_10144b71c;
      }
      if (lVar32 == 2) {
LAB_10144b8a0:
        FUN_1087e427c(&uStack_d0,2,&UNK_10b22e568,&UNK_10b20a590);
        bStack_160 = bStack_a8;
        uStack_15f = uStack_a7;
        bStack_168 = bStack_b0;
        uStack_167 = uStack_af;
        bStack_150 = bStack_98;
        uStack_14f = uStack_97;
        bStack_158 = bStack_a0;
        uStack_157 = uStack_9f;
        bStack_140 = bStack_88;
        uStack_13f = uStack_87;
        bStack_148 = bStack_90;
        uStack_147 = uStack_8f;
        uStack_138 = uStack_80;
        bStack_180 = bStack_c8;
        uStack_17f = uStack_c7;
        uStack_188 = uStack_d0;
        bStack_170 = bStack_b8;
        uStack_16f = uStack_b7;
        bStack_178 = bStack_c0;
        uStack_177 = uStack_bf;
        uStack_190 = 0x8000000000000001;
      }
      else {
        cVar4 = pcVar28[0x40];
        if (cVar4 == '\x10') {
LAB_10144b9d8:
          uVar33 = 0x8000000000000000;
        }
        else {
          if (cVar4 == '\x11') {
            func_0x0001004e0914(&uStack_190,*(undefined8 *)(pcVar28 + 0x48));
          }
          else {
            if (cVar4 == '\x12') goto LAB_10144b9d8;
            func_0x0001004e0914(&uStack_190,pcVar28 + 0x40);
          }
          uVar13 = uStack_13f;
          bVar12 = bStack_140;
          uVar11 = uStack_14f;
          bVar10 = bStack_150;
          uVar9 = uStack_15f;
          bVar8 = bStack_160;
          uVar7 = uStack_177;
          bVar6 = bStack_178;
          uVar5 = uStack_17f;
          bVar3 = bStack_180;
          uVar33 = uStack_190;
          uStack_198 = CONCAT71(uStack_17f,bStack_180);
          uStack_1a0 = CONCAT71(uStack_177,bStack_178);
          if (uStack_190 != 2) {
            bStack_160 = bStack_168;
            uStack_15f = uStack_167;
            bStack_168 = bStack_170;
            uStack_167 = uStack_16f;
            bStack_150 = bStack_158;
            uStack_14f = uStack_157;
            bStack_158 = bVar8;
            uStack_157 = uVar9;
            bStack_140 = bStack_148;
            uStack_13f = uStack_147;
            bStack_148 = bVar10;
            uStack_147 = uVar11;
            uStack_138 = CONCAT71(uVar13,bVar12);
            bStack_180 = (byte)uStack_188;
            uStack_17f = (undefined7)(uStack_188 >> 8);
            bStack_178 = bVar3;
            uStack_177 = uVar5;
            bStack_170 = bVar6;
            uStack_16f = uVar7;
            uStack_190 = 0x8000000000000001;
            uStack_188 = uVar33;
            goto LAB_10144b8ec;
          }
          uVar33 = uStack_188;
          if (uStack_188 == 0x8000000000000001) goto LAB_10144b8a0;
        }
        if (lVar32 != 3) {
          cVar4 = pcVar28[0x60];
          if (cVar4 == '\x10') {
LAB_10144bc6c:
            uVar34 = 0x8000000000000000;
          }
          else {
            if (cVar4 == '\x11') {
              func_0x0001004e0914(&uStack_190,*(undefined8 *)(pcVar28 + 0x68));
            }
            else {
              if (cVar4 == '\x12') goto LAB_10144bc6c;
              func_0x0001004e0914(&uStack_190,pcVar28 + 0x60);
            }
            uVar5 = uStack_14f;
            bVar3 = bStack_150;
            uVar24 = uStack_188;
            uVar34 = uStack_190;
            if (uStack_190 != 2) {
              uStack_138 = CONCAT71(uStack_13f,bStack_140);
              bStack_150 = bStack_158;
              uStack_14f = uStack_157;
              bStack_158 = bStack_160;
              uStack_157 = uStack_15f;
              bStack_140 = bStack_148;
              uStack_13f = uStack_147;
              bStack_148 = bVar3;
              uStack_147 = uVar5;
              bStack_160 = bStack_168;
              uStack_15f = uStack_167;
              bStack_168 = bStack_170;
              uStack_167 = uStack_16f;
              bStack_170 = bStack_178;
              uStack_16f = uStack_177;
              bStack_178 = bStack_180;
              uStack_177 = uStack_17f;
              uStack_188 = uStack_190;
              bStack_180 = (byte)uVar24;
              uStack_17f = (undefined7)(uVar24 >> 8);
              uStack_190 = 0x8000000000000001;
              if ((uVar33 & 0x7fffffffffffffff) == 0) goto LAB_10144b8ec;
              goto LAB_10144ba38;
            }
            uStack_130 = CONCAT71(uStack_17f,bStack_180);
            bStack_c8 = bStack_178;
            uStack_c7 = uStack_177;
            uStack_128 = CONCAT71(uStack_177,bStack_178);
            uVar34 = uStack_188;
            uStack_d0 = uStack_130;
            if (uStack_188 == 0x8000000000000001) goto LAB_10144b9e4;
          }
          uStack_138 = uStack_128;
          bStack_140 = (byte)uStack_130;
          uStack_13f = (undefined7)(uStack_130 >> 8);
          bStack_180 = (byte)unaff_x27;
          uStack_17f = (undefined7)((ulong)unaff_x27 >> 8);
          bStack_178 = (byte)uVar29;
          uStack_177 = (undefined7)(uVar29 >> 8);
          bStack_170 = (byte)pcVar23;
          uStack_16f = (undefined7)((ulong)pcVar23 >> 8);
          bStack_168 = (byte)unaff_x23;
          uStack_167 = (undefined7)((ulong)unaff_x23 >> 8);
          bStack_160 = (byte)uVar33;
          uStack_15f = (undefined7)(uVar33 >> 8);
          bStack_158 = (byte)uStack_198;
          uStack_157 = (undefined7)((ulong)uStack_198 >> 8);
          bStack_150 = (byte)uStack_1a0;
          uStack_14f = (undefined7)((ulong)uStack_1a0 >> 8);
          bStack_148 = (byte)uVar34;
          uStack_147 = (undefined7)(uVar34 >> 8);
          uStack_190 = uVar31;
          uStack_188 = unaff_x20;
          if (lVar32 != 4) {
            alStack_120[0] = 4;
            FUN_1087e427c(&uStack_d0,(lVar32 + 0x7fffffffffffffcU & 0x7ffffffffffffff) + 4,
                          alStack_120,&UNK_10b23a1b0);
            if (uStack_d0 != 2) {
              bStack_160 = bStack_a8;
              uStack_15f = uStack_a7;
              bStack_168 = bStack_b0;
              uStack_167 = uStack_af;
              bStack_150 = bStack_98;
              uStack_14f = uStack_97;
              bStack_158 = bStack_a0;
              uStack_157 = uStack_9f;
              bStack_140 = bStack_88;
              uStack_13f = uStack_87;
              bStack_148 = bStack_90;
              uStack_147 = uStack_8f;
              bStack_180 = bStack_c8;
              uStack_17f = uStack_c7;
              uStack_188 = uStack_d0;
              uStack_138 = uStack_80;
              bStack_170 = bStack_b8;
              uStack_16f = uStack_b7;
              bStack_178 = bStack_c0;
              uStack_177 = uStack_bf;
              uStack_190 = 0x8000000000000001;
              if ((uVar31 & 0x7fffffffffffffff) != 0) {
                _free(unaff_x20);
              }
              if ((uVar29 & 0x7fffffffffffffff) != 0) {
                _free(pcVar23);
              }
              if ((uVar33 & 0x7fffffffffffffff) != 0) {
                _free(uStack_198);
              }
              goto joined_r0x00010144c088;
            }
          }
          goto LAB_10144bc98;
        }
LAB_10144b9e4:
        FUN_1087e427c(&uStack_d0,3,&UNK_10b22e568,&UNK_10b20a590);
        bStack_160 = bStack_a8;
        uStack_15f = uStack_a7;
        bStack_168 = bStack_b0;
        uStack_167 = uStack_af;
        bStack_150 = bStack_98;
        uStack_14f = uStack_97;
        bStack_158 = bStack_a0;
        uStack_157 = uStack_9f;
        bStack_140 = bStack_88;
        uStack_13f = uStack_87;
        bStack_148 = bStack_90;
        uStack_147 = uStack_8f;
        uStack_138 = uStack_80;
        uStack_188 = uStack_d0;
        bStack_180 = bStack_c8;
        uStack_17f = uStack_c7;
        bStack_170 = bStack_b8;
        uStack_16f = uStack_b7;
        bStack_178 = bStack_c0;
        uStack_177 = uStack_bf;
        uStack_190 = 0x8000000000000001;
        if ((uVar33 & 0x7fffffffffffffff) != 0) {
LAB_10144ba38:
          uStack_190 = 0x8000000000000001;
          _free(uStack_198);
        }
      }
LAB_10144b8ec:
      if ((uVar29 & 0x7fffffffffffffff) != 0) {
        _free(pcVar23);
      }
      uVar31 = uVar31 & 0x7fffffffffffffff;
      uStack_130 = unaff_x20;
      uVar29 = uStack_190;
      bVar3 = bStack_178;
      uVar5 = uStack_177;
      bVar6 = bStack_170;
      uVar7 = uStack_16f;
      bVar8 = bStack_168;
      uVar9 = uStack_167;
      bVar10 = bStack_160;
      uVar11 = uStack_15f;
      bVar12 = bStack_158;
      uVar13 = uStack_157;
      bVar14 = bStack_150;
      uVar15 = uStack_14f;
      bVar16 = bStack_148;
      uVar17 = uStack_147;
    }
joined_r0x00010144bae4:
    uStack_147 = uVar17;
    bStack_148 = bVar16;
    uStack_14f = uVar15;
    bStack_150 = bVar14;
    uStack_157 = uVar13;
    bStack_158 = bVar12;
    uStack_15f = uVar11;
    bStack_160 = bVar10;
    uStack_167 = uVar9;
    bStack_168 = bVar8;
    uStack_16f = uVar7;
    bStack_170 = bVar6;
    uStack_177 = uVar5;
    bStack_178 = bVar3;
    uStack_190 = uVar29;
    if (uVar31 != 0) {
      _free(uStack_130);
    }
  }
  else {
    if (*param_2 != '\x15') {
      FUN_108855bf0(&uStack_d0,param_2,&uStack_190,&UNK_10b213e48);
      bStack_160 = bStack_a8;
      uStack_15f = uStack_a7;
      bStack_168 = bStack_b0;
      uStack_167 = uStack_af;
      bStack_150 = bStack_98;
      uStack_14f = uStack_97;
      bStack_158 = bStack_a0;
      uStack_157 = uStack_9f;
      bStack_140 = bStack_88;
      uStack_13f = uStack_87;
      bStack_148 = bStack_90;
      uStack_147 = uStack_8f;
      uStack_138 = uStack_80;
      uStack_188 = uStack_d0;
      bStack_180 = bStack_c8;
      uStack_17f = uStack_c7;
      bStack_170 = bStack_b8;
      uStack_16f = uStack_b7;
      bStack_178 = bStack_c0;
      uStack_177 = uStack_bf;
      goto LAB_10144bca8;
    }
    lVar32 = *(long *)(param_2 + 0x10);
    lVar26 = *(long *)(param_2 + 0x18) * 0x40;
    if (*(long *)(param_2 + 0x18) == 0) {
      lStack_1f8 = 0;
      uVar29 = 0x8000000000000001;
      uVar34 = 0x8000000000000001;
      uVar33 = 0x8000000000000001;
      uVar31 = 0x8000000000000001;
      lVar25 = lVar32;
    }
    else {
      lVar27 = 0;
      lStack_1f8 = (lVar26 - 0x40U >> 6) + 1;
      uVar31 = 0x8000000000000001;
      uVar33 = 0x8000000000000001;
      uVar34 = 0x8000000000000001;
      uVar29 = 0x8000000000000001;
      do {
        pbVar1 = (byte *)(lVar32 + lVar27);
        pbVar30 = pbVar1 + 0x20;
        bVar3 = *pbVar1;
        if (0xc < bVar3) {
          if (bVar3 == 0xd) {
            plVar2 = *(long **)(lVar32 + lVar27 + 8);
            lVar25 = *(long *)(lVar32 + lVar27 + 0x10);
joined_r0x00010144b128:
            if (lVar25 < 7) {
              if (lVar25 == 4) {
                if (*(int *)plVar2 != 0x79746963) goto LAB_10144b3e8;
LAB_10144b2dc:
                uVar22 = 2;
              }
              else {
                if ((lVar25 != 6) ||
                   (*(int *)plVar2 != 0x69676572 || *(short *)((long)plVar2 + 4) != 0x6e6f))
                goto LAB_10144b3e8;
LAB_10144b15c:
                uVar22 = 1;
              }
            }
            else if (lVar25 == 8) {
              if (*plVar2 != 0x656e6f7a656d6974) goto LAB_10144b3e8;
LAB_10144b668:
              uVar22 = 3;
            }
            else {
              if ((lVar25 != 7) ||
                 (*(int *)plVar2 != 0x6e756f63 || *(int *)((long)plVar2 + 3) != 0x7972746e))
              goto LAB_10144b3e8;
LAB_10144b32c:
              uVar22 = 0;
            }
            goto LAB_10144b3ec;
          }
          if (bVar3 == 0xe) {
            pcVar23 = *(char **)(lVar32 + 0x10 + lVar27);
            lVar25 = *(long *)(lVar32 + 0x18 + lVar27);
joined_r0x00010144b238:
            if (lVar25 < 7) {
              if (lVar25 == 4) {
                if ((((*pcVar23 == 'c') && (pcVar23[1] == 'i')) && (pcVar23[2] == 't')) &&
                   (pcVar23[3] == 'y')) goto LAB_10144b2dc;
              }
              else if (((((lVar25 == 6) && (*pcVar23 == 'r')) &&
                        ((pcVar23[1] == 'e' && ((pcVar23[2] == 'g' && (pcVar23[3] == 'i')))))) &&
                       (pcVar23[4] == 'o')) && (pcVar23[5] == 'n')) goto LAB_10144b15c;
            }
            else if (lVar25 == 8) {
              if (((((*pcVar23 == 't') && (pcVar23[1] == 'i')) && (pcVar23[2] == 'm')) &&
                  ((pcVar23[3] == 'e' && (pcVar23[4] == 'z')))) &&
                 ((pcVar23[5] == 'o' && ((pcVar23[6] == 'n' && (pcVar23[7] == 'e'))))))
              goto LAB_10144b668;
            }
            else if (((lVar25 == 7) &&
                     (((*pcVar23 == 'c' && (pcVar23[1] == 'o')) && (pcVar23[2] == 'u')))) &&
                    (((pcVar23[3] == 'n' && (pcVar23[4] == 't')) &&
                     ((pcVar23[5] == 'r' && (pcVar23[6] == 'y')))))) goto LAB_10144b32c;
LAB_10144b3e8:
            uVar22 = 4;
            goto LAB_10144b3ec;
          }
          if (bVar3 == 0xf) {
            pcVar23 = *(char **)(lVar32 + 8 + lVar27);
            lVar25 = *(long *)(lVar32 + 0x10 + lVar27);
            goto joined_r0x00010144b238;
          }
LAB_10144b670:
          FUN_108855bf0(&uStack_d0,pbVar1,&uStack_190,&UNK_10b214668);
          uVar22 = (uint)bStack_c8;
          uVar24 = uStack_d0;
          bVar6 = bStack_c8;
          uVar7 = uStack_c7;
          bVar3 = bStack_c0;
          uVar5 = uStack_bf;
          bVar8 = bStack_b8;
          uVar9 = uStack_b7;
          bVar10 = bStack_b0;
          uVar11 = uStack_af;
          bVar12 = bStack_a8;
          uVar13 = uStack_a7;
          bVar14 = bStack_a0;
          uVar15 = uStack_9f;
          bVar16 = bStack_98;
          uVar17 = uStack_97;
          bVar18 = bStack_90;
          uVar19 = uStack_8f;
          bVar20 = bStack_88;
          uVar21 = uStack_87;
          uStack_138 = uStack_80;
          if (uStack_d0 == 2) goto LAB_10144b3ec;
          goto joined_r0x00010144bb2c;
        }
        if (bVar3 == 1) {
          uVar22 = (uint)*(byte *)(lVar32 + lVar27 + 1);
          if (3 < uVar22) {
            uVar22 = 4;
          }
        }
        else {
          if (bVar3 != 4) {
            if (bVar3 != 0xc) goto LAB_10144b670;
            plVar2 = *(long **)(lVar32 + lVar27 + 0x10);
            lVar25 = *(long *)(lVar32 + lVar27 + 0x18);
            goto joined_r0x00010144b128;
          }
          uVar24 = *(ulong *)(lVar32 + lVar27 + 8);
          if (3 < uVar24) {
            uVar24 = 4;
          }
          uVar22 = (uint)uVar24;
        }
LAB_10144b3ec:
        uVar22 = uVar22 & 0xff;
        if (uVar22 < 2) {
          if (uVar22 == 0) {
            if (uVar31 == 0x8000000000000001) {
              bVar3 = *pbVar30;
              uVar31 = 0x8000000000000000;
              if (bVar3 != 0x10) {
                if (bVar3 == 0x11) {
                  func_0x0001004e0914(&uStack_190,*(undefined8 *)(lVar32 + lVar27 + 0x28));
                }
                else {
                  if (bVar3 == 0x12) goto LAB_10144b5fc;
                  func_0x0001004e0914(&uStack_190,pbVar30);
                }
                uVar5 = uStack_17f;
                bVar3 = bStack_180;
                if (uStack_190 != 2) {
                  uStack_d0 = CONCAT71(uStack_16f,bStack_170);
                  bStack_c8 = bStack_168;
                  uStack_c7 = uStack_167;
                  bStack_b8 = bStack_158;
                  uStack_b7 = uStack_157;
                  bStack_c0 = bStack_160;
                  uStack_bf = uStack_15f;
                  bStack_a8 = bStack_148;
                  uStack_a7 = uStack_147;
                  bStack_b0 = bStack_150;
                  uStack_af = uStack_14f;
                  bStack_a0 = bStack_140;
                  uStack_9f = uStack_13f;
                }
                uStack_1a8 = CONCAT71(uStack_17f,bStack_180);
                uStack_1e8 = CONCAT71(uStack_177,bStack_178);
                uVar31 = uStack_188;
                if (uStack_190 != 2) {
                  bStack_168 = (byte)uStack_d0;
                  uStack_167 = (undefined7)(uStack_d0 >> 8);
                  uStack_138 = CONCAT71(uStack_9f,bStack_a0);
                  bStack_180 = (byte)uStack_188;
                  uStack_17f = (undefined7)(uStack_188 >> 8);
                  uVar31 = 0x8000000000000001;
                  uVar24 = uStack_190;
                  bVar6 = bStack_180;
                  uVar7 = uStack_17f;
                  bVar8 = bStack_178;
                  uVar9 = uStack_177;
                  bVar10 = bStack_168;
                  uVar11 = uStack_167;
                  bVar12 = bStack_c8;
                  uVar13 = uStack_c7;
                  bVar14 = bStack_c0;
                  uVar15 = uStack_bf;
                  bVar16 = bStack_b8;
                  uVar17 = uStack_b7;
                  bVar18 = bStack_b0;
                  uVar19 = uStack_af;
                  bVar20 = bStack_a8;
                  uVar21 = uStack_a7;
                  goto joined_r0x00010144bb2c;
                }
              }
LAB_10144b5fc:
              uStack_1c0 = uStack_1a8;
              goto LAB_10144b0e4;
            }
            FUN_1087e4364(&uStack_d0,&UNK_108cada2e,7);
            uVar24 = uStack_d0;
            bVar6 = bStack_c8;
            uVar7 = uStack_c7;
            bVar3 = bStack_c0;
            uVar5 = uStack_bf;
            bVar8 = bStack_b8;
            uVar9 = uStack_b7;
            bVar10 = bStack_b0;
            uVar11 = uStack_af;
            bVar12 = bStack_a8;
            uVar13 = uStack_a7;
            bVar14 = bStack_a0;
            uVar15 = uStack_9f;
            bVar16 = bStack_98;
            uVar17 = uStack_97;
            bVar18 = bStack_90;
            uVar19 = uStack_8f;
            bVar20 = bStack_88;
            uVar21 = uStack_87;
            uStack_138 = uStack_80;
          }
          else {
            if (uVar33 == 0x8000000000000001) {
              bVar3 = *pbVar30;
              uVar33 = 0x8000000000000000;
              if (bVar3 != 0x10) {
                if (bVar3 == 0x11) {
                  func_0x0001004e0914(&uStack_190,*(undefined8 *)(lVar32 + lVar27 + 0x28));
                }
                else {
                  if (bVar3 == 0x12) goto LAB_10144b65c;
                  func_0x0001004e0914(&uStack_190,pbVar30);
                }
                uVar5 = uStack_17f;
                bVar3 = bStack_180;
                if (uStack_190 != 2) {
                  uStack_d0 = CONCAT71(uStack_16f,bStack_170);
                  bStack_c8 = bStack_168;
                  uStack_c7 = uStack_167;
                  bStack_b8 = bStack_158;
                  uStack_b7 = uStack_157;
                  bStack_c0 = bStack_160;
                  uStack_bf = uStack_15f;
                  bStack_a8 = bStack_148;
                  uStack_a7 = uStack_147;
                  bStack_b0 = bStack_150;
                  uStack_af = uStack_14f;
                  bStack_a0 = bStack_140;
                  uStack_9f = uStack_13f;
                }
                uStack_1a0 = CONCAT71(uStack_17f,bStack_180);
                uStack_1e0 = CONCAT71(uStack_177,bStack_178);
                uVar33 = uStack_188;
                if (uStack_190 != 2) {
                  bStack_168 = (byte)uStack_d0;
                  uStack_167 = (undefined7)(uStack_d0 >> 8);
                  uStack_138 = CONCAT71(uStack_9f,bStack_a0);
                  bStack_180 = (byte)uStack_188;
                  uStack_17f = (undefined7)(uStack_188 >> 8);
                  uVar33 = 0x8000000000000001;
                  uVar24 = uStack_190;
                  bVar6 = bStack_180;
                  uVar7 = uStack_17f;
                  bVar8 = bStack_178;
                  uVar9 = uStack_177;
                  bVar10 = bStack_168;
                  uVar11 = uStack_167;
                  bVar12 = bStack_c8;
                  uVar13 = uStack_c7;
                  bVar14 = bStack_c0;
                  uVar15 = uStack_bf;
                  bVar16 = bStack_b8;
                  uVar17 = uStack_b7;
                  bVar18 = bStack_b0;
                  uVar19 = uStack_af;
                  bVar20 = bStack_a8;
                  uVar21 = uStack_a7;
                  goto joined_r0x00010144bb2c;
                }
              }
LAB_10144b65c:
              uStack_1b0 = uStack_1a0;
              goto LAB_10144b0e4;
            }
            FUN_1087e4364(&uStack_d0,&UNK_108cada35,6);
            uVar24 = uStack_d0;
            bVar6 = bStack_c8;
            uVar7 = uStack_c7;
            bVar3 = bStack_c0;
            uVar5 = uStack_bf;
            bVar8 = bStack_b8;
            uVar9 = uStack_b7;
            bVar10 = bStack_b0;
            uVar11 = uStack_af;
            bVar12 = bStack_a8;
            uVar13 = uStack_a7;
            bVar14 = bStack_a0;
            uVar15 = uStack_9f;
            bVar16 = bStack_98;
            uVar17 = uStack_97;
            bVar18 = bStack_90;
            uVar19 = uStack_8f;
            bVar20 = bStack_88;
            uVar21 = uStack_87;
            uStack_138 = uStack_80;
          }
joined_r0x00010144bb2c:
          uStack_13f = uVar21;
          bStack_140 = bVar20;
          uStack_147 = uVar19;
          bStack_148 = bVar18;
          uStack_14f = uVar17;
          bStack_150 = bVar16;
          uStack_157 = uVar15;
          bStack_158 = bVar14;
          uStack_15f = uVar13;
          bStack_160 = bVar12;
          uStack_167 = uVar11;
          bStack_168 = bVar10;
          uStack_16f = uVar9;
          bStack_170 = bVar8;
          uStack_177 = uVar5;
          bStack_178 = bVar3;
          uStack_17f = uVar7;
          bStack_180 = bVar6;
          uStack_188 = uVar24;
          if ((long)uVar29 < -0x7ffffffffffffffe) {
            uStack_190 = 0x8000000000000001;
          }
          else {
joined_r0x00010144bb80:
            uStack_190 = 0x8000000000000001;
            if (uVar29 != 0) {
              uStack_190 = 0x8000000000000001;
              _free(uStack_1c8);
            }
          }
LAB_10144bc04:
          if ((-0x7fffffffffffffff < (long)uVar34) && (uVar34 != 0)) {
            _free(uStack_1b8);
          }
          if ((-0x7fffffffffffffff < (long)uVar33) && (uVar33 != 0)) {
            _free(uStack_1b0);
          }
          uStack_130 = uStack_1c0;
          uVar29 = uStack_190;
          bVar3 = bStack_178;
          uVar5 = uStack_177;
          bVar6 = bStack_170;
          uVar7 = uStack_16f;
          bVar8 = bStack_168;
          uVar9 = uStack_167;
          bVar10 = bStack_160;
          uVar11 = uStack_15f;
          bVar12 = bStack_158;
          uVar13 = uStack_157;
          bVar14 = bStack_150;
          uVar15 = uStack_14f;
          bVar16 = bStack_148;
          uVar17 = uStack_147;
          if ((long)uVar31 < -0x7ffffffffffffffe) goto LAB_10144bc98;
          goto joined_r0x00010144bae4;
        }
        if (uVar22 == 2) {
          if (uVar34 != 0x8000000000000001) {
            FUN_1087e4364(&uStack_d0,&UNK_108cde3dc,4);
            uVar24 = uStack_d0;
            bVar6 = bStack_c8;
            uVar7 = uStack_c7;
            bVar3 = bStack_c0;
            uVar5 = uStack_bf;
            bVar8 = bStack_b8;
            uVar9 = uStack_b7;
            bVar10 = bStack_b0;
            uVar11 = uStack_af;
            bVar12 = bStack_a8;
            uVar13 = uStack_a7;
            bVar14 = bStack_a0;
            uVar15 = uStack_9f;
            bVar16 = bStack_98;
            uVar17 = uStack_97;
            bVar18 = bStack_90;
            uVar19 = uStack_8f;
            bVar20 = bStack_88;
            uVar21 = uStack_87;
            uStack_138 = uStack_80;
            goto joined_r0x00010144bb2c;
          }
          bVar3 = *pbVar30;
          uVar34 = 0x8000000000000000;
          if (bVar3 != 0x10) {
            if (bVar3 == 0x11) {
              func_0x0001004e0914(&uStack_190,*(undefined8 *)(lVar32 + lVar27 + 0x28));
            }
            else {
              if (bVar3 == 0x12) goto LAB_10144b0dc;
              func_0x0001004e0914(&uStack_190,pbVar30);
            }
            uVar5 = uStack_17f;
            bVar3 = bStack_180;
            if (uStack_190 != 2) {
              uStack_d0 = CONCAT71(uStack_16f,bStack_170);
              bStack_c8 = bStack_168;
              uStack_c7 = uStack_167;
              bStack_b8 = bStack_158;
              uStack_b7 = uStack_157;
              bStack_c0 = bStack_160;
              uStack_bf = uStack_15f;
              bStack_a8 = bStack_148;
              uStack_a7 = uStack_147;
              bStack_b0 = bStack_150;
              uStack_af = uStack_14f;
              bStack_a0 = bStack_140;
              uStack_9f = uStack_13f;
            }
            uStack_198 = CONCAT71(uStack_17f,bStack_180);
            uStack_1d8 = CONCAT71(uStack_177,bStack_178);
            uVar34 = uStack_188;
            if (uStack_190 != 2) {
              bStack_168 = (byte)uStack_d0;
              uStack_167 = (undefined7)(uStack_d0 >> 8);
              uStack_138 = CONCAT71(uStack_9f,bStack_a0);
              bStack_180 = (byte)uStack_188;
              uStack_17f = (undefined7)(uStack_188 >> 8);
              uVar34 = 0x8000000000000001;
              uVar24 = uStack_190;
              bVar6 = bStack_180;
              uVar7 = uStack_17f;
              bVar8 = bStack_178;
              uVar9 = uStack_177;
              bVar10 = bStack_168;
              uVar11 = uStack_167;
              bVar12 = bStack_c8;
              uVar13 = uStack_c7;
              bVar14 = bStack_c0;
              uVar15 = uStack_bf;
              bVar16 = bStack_b8;
              uVar17 = uStack_b7;
              bVar18 = bStack_b0;
              uVar19 = uStack_af;
              bVar20 = bStack_a8;
              uVar21 = uStack_a7;
              goto joined_r0x00010144bb2c;
            }
          }
LAB_10144b0dc:
          uStack_1b8 = uStack_198;
        }
        else if (uVar22 == 3) {
          if (uVar29 != 0x8000000000000001) {
            FUN_1087e4364(&uStack_d0,&UNK_108c98268,8);
            uVar29 = uVar29 & 0x7fffffffffffffff;
            uStack_188 = uStack_d0;
            bStack_180 = bStack_c8;
            uStack_17f = uStack_c7;
            bStack_178 = bStack_c0;
            uStack_177 = uStack_bf;
            bStack_170 = bStack_b8;
            uStack_16f = uStack_b7;
            bStack_168 = bStack_b0;
            uStack_167 = uStack_af;
            bStack_160 = bStack_a8;
            uStack_15f = uStack_a7;
            bStack_158 = bStack_a0;
            uStack_157 = uStack_9f;
            bStack_150 = bStack_98;
            uStack_14f = uStack_97;
            bStack_148 = bStack_90;
            uStack_147 = uStack_8f;
            bStack_140 = bStack_88;
            uStack_13f = uStack_87;
            uStack_138 = uStack_80;
            goto joined_r0x00010144bb80;
          }
          bVar3 = *pbVar30;
          uVar29 = 0x8000000000000000;
          if (bVar3 != 0x10) {
            if (bVar3 == 0x11) {
              func_0x0001004e0914(&uStack_190,*(undefined8 *)(lVar32 + lVar27 + 0x28));
            }
            else {
              if (bVar3 == 0x12) goto LAB_10144b0e4;
              func_0x0001004e0914(&uStack_190,pbVar30);
            }
            uVar7 = uStack_177;
            bVar6 = bStack_178;
            uVar5 = uStack_17f;
            bVar3 = bStack_180;
            uVar24 = uStack_190;
            if (uStack_190 != 2) {
              uStack_d0 = CONCAT71(uStack_16f,bStack_170);
              bStack_c8 = bStack_168;
              uStack_c7 = uStack_167;
              bStack_b8 = bStack_158;
              uStack_b7 = uStack_157;
              bStack_c0 = bStack_160;
              uStack_bf = uStack_15f;
              bStack_a8 = bStack_148;
              uStack_a7 = uStack_147;
              bStack_b0 = bStack_150;
              uStack_af = uStack_14f;
              bStack_a0 = bStack_140;
              uStack_9f = uStack_13f;
            }
            uStack_1c8 = CONCAT71(uStack_17f,bStack_180);
            uStack_1d0 = CONCAT71(uStack_177,bStack_178);
            uVar29 = uStack_188;
            if (uStack_190 != 2) {
              bStack_160 = bStack_c8;
              uStack_15f = uStack_c7;
              bStack_168 = (byte)uStack_d0;
              uStack_167 = (undefined7)(uStack_d0 >> 8);
              bStack_150 = bStack_b8;
              uStack_14f = uStack_b7;
              bStack_158 = bStack_c0;
              uStack_157 = uStack_bf;
              bStack_140 = bStack_a8;
              uStack_13f = uStack_a7;
              bStack_148 = bStack_b0;
              uStack_147 = uStack_af;
              uStack_138 = CONCAT71(uStack_9f,bStack_a0);
              bStack_180 = (byte)uStack_188;
              uStack_17f = (undefined7)(uStack_188 >> 8);
              bStack_178 = bVar3;
              uStack_177 = uVar5;
              bStack_170 = bVar6;
              uStack_16f = uVar7;
              uStack_190 = 0x8000000000000001;
              uStack_188 = uVar24;
              goto LAB_10144bc04;
            }
          }
        }
LAB_10144b0e4:
        lVar27 = lVar27 + 0x40;
        lVar25 = lVar32 + lVar26;
      } while (lVar26 - lVar27 != 0);
    }
    uVar24 = 0x8000000000000000;
    if (uVar31 != 0x8000000000000001) {
      uVar24 = uVar31;
    }
    uStack_188 = uStack_1c0;
    uVar31 = 0x8000000000000000;
    if (uVar33 != 0x8000000000000001) {
      uVar31 = uVar33;
    }
    uVar33 = 0x8000000000000000;
    if (uVar34 != 0x8000000000000001) {
      uVar33 = uVar34;
    }
    bStack_180 = (byte)uStack_1e8;
    uStack_17f = (undefined7)((ulong)uStack_1e8 >> 8);
    bStack_178 = (byte)uVar31;
    uStack_177 = (undefined7)(uVar31 >> 8);
    uVar34 = 0x8000000000000000;
    if (uVar29 != 0x8000000000000001) {
      uVar34 = uVar29;
    }
    bStack_170 = (byte)uStack_1b0;
    uStack_16f = (undefined7)((ulong)uStack_1b0 >> 8);
    bStack_168 = (byte)uStack_1e0;
    uStack_167 = (undefined7)((ulong)uStack_1e0 >> 8);
    bStack_160 = (byte)uVar33;
    uStack_15f = (undefined7)(uVar33 >> 8);
    bStack_158 = (byte)uStack_1b8;
    uStack_157 = (undefined7)((ulong)uStack_1b8 >> 8);
    bStack_150 = (byte)uStack_1d8;
    uStack_14f = (undefined7)((ulong)uStack_1d8 >> 8);
    bStack_148 = (byte)uVar34;
    uStack_147 = (undefined7)(uVar34 >> 8);
    bStack_140 = (byte)uStack_1c8;
    uStack_13f = (undefined7)(uStack_1c8 >> 8);
    uStack_138 = uStack_1d0;
    uVar29 = (lVar32 + lVar26) - lVar25;
    uStack_190 = uVar24;
    if (uVar29 != 0) {
      alStack_120[0] = lStack_1f8;
      FUN_1087e427c(&uStack_d0,lStack_1f8 + (uVar29 >> 6),alStack_120,&UNK_10b23a190);
      if (uStack_d0 != 2) {
        bStack_160 = bStack_a8;
        uStack_15f = uStack_a7;
        bStack_168 = bStack_b0;
        uStack_167 = uStack_af;
        bStack_150 = bStack_98;
        uStack_14f = uStack_97;
        bStack_158 = bStack_a0;
        uStack_157 = uStack_9f;
        bStack_140 = bStack_88;
        uStack_13f = uStack_87;
        bStack_148 = bStack_90;
        uStack_147 = uStack_8f;
        bStack_180 = bStack_c8;
        uStack_17f = uStack_c7;
        uStack_188 = uStack_d0;
        uStack_138 = uStack_80;
        bStack_170 = bStack_b8;
        uStack_16f = uStack_b7;
        bStack_178 = bStack_c0;
        uStack_177 = uStack_bf;
        uStack_190 = 0x8000000000000001;
        if ((uVar24 & 0x7fffffffffffffff) != 0) {
          _free(uStack_1c0);
        }
        if ((uVar31 & 0x7fffffffffffffff) != 0) {
          _free(uStack_1b0);
        }
        uStack_130 = uStack_1c8;
        if ((uVar33 & 0x7fffffffffffffff) != 0) {
          _free(uStack_1b8);
        }
joined_r0x00010144c088:
        uVar31 = uVar34 & 0x7fffffffffffffff;
        uVar29 = uStack_190;
        bVar3 = bStack_178;
        uVar5 = uStack_177;
        bVar6 = bStack_170;
        uVar7 = uStack_16f;
        bVar8 = bStack_168;
        uVar9 = uStack_167;
        bVar10 = bStack_160;
        uVar11 = uStack_15f;
        bVar12 = bStack_158;
        uVar13 = uStack_157;
        bVar14 = bStack_150;
        uVar15 = uStack_14f;
        bVar16 = bStack_148;
        uVar17 = uStack_147;
        goto joined_r0x00010144bae4;
      }
    }
  }
LAB_10144bc98:
  if (uStack_190 != 0x8000000000000001) {
    param_1[5] = CONCAT71(uStack_167,bStack_168);
    param_1[4] = CONCAT71(uStack_16f,bStack_170);
    param_1[7] = CONCAT71(uStack_157,bStack_158);
    param_1[6] = CONCAT71(uStack_15f,bStack_160);
    param_1[9] = CONCAT71(uStack_147,bStack_148);
    param_1[8] = CONCAT71(uStack_14f,bStack_150);
    param_1[0xb] = uStack_138;
    param_1[10] = CONCAT71(uStack_13f,bStack_140);
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[3] = CONCAT71(uStack_177,bStack_178);
    param_1[2] = CONCAT71(uStack_17f,bStack_180);
    return;
  }
LAB_10144bca8:
  param_1[6] = CONCAT71(uStack_15f,bStack_160);
  param_1[5] = CONCAT71(uStack_167,bStack_168);
  param_1[8] = CONCAT71(uStack_14f,bStack_150);
  param_1[7] = CONCAT71(uStack_157,bStack_158);
  param_1[10] = CONCAT71(uStack_13f,bStack_140);
  param_1[9] = CONCAT71(uStack_147,bStack_148);
  param_1[0xb] = uStack_138;
  param_1[2] = CONCAT71(uStack_17f,bStack_180);
  param_1[1] = uStack_188;
  param_1[4] = CONCAT71(uStack_16f,bStack_170);
  param_1[3] = CONCAT71(uStack_177,bStack_178);
  *param_1 = 0x8000000000000002;
  return;
}

