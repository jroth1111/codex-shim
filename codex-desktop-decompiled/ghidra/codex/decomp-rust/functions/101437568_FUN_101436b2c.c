
void FUN_101436b2c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 uVar7;
  byte **ppbVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte bStack_170;
  char cStack_16f;
  undefined6 uStack_16e;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined1 auStack_69 [9];
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    pbVar16 = *(byte **)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18);
    pbVar13 = pbVar1 + lVar11 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar17 = pbVar1;
    pbStack_f0 = pbVar1;
    pbStack_e0 = pbVar16;
    pbStack_d8 = pbVar13;
    if (lVar11 == 0) {
LAB_101436fe8:
      pbStack_e8 = pbVar17;
      pbVar15 = (byte *)FUN_1087e422c(0,&UNK_10b22e268,&UNK_10b20a590);
LAB_101437004:
      bStack_170 = 0;
      cStack_16f = 0;
      uStack_16e = 0x800000000000;
      uStack_168 = SUB81(pbVar15,0);
      uStack_167 = (undefined7)((ulong)pbVar15 >> 8);
    }
    else {
      pbVar17 = pbVar1 + 0x20;
      bStack_170 = *pbVar1;
      if (bStack_170 == 0x16) goto LAB_101436fe8;
      uVar7 = *(undefined8 *)(pbVar1 + 1);
      uStack_167 = (undefined7)*(undefined8 *)(pbVar1 + 9);
      cStack_16f = (char)uVar7;
      uStack_16e = (undefined6)((ulong)uVar7 >> 8);
      uStack_168 = (undefined1)((ulong)uVar7 >> 0x38);
      pbStack_158 = *(byte **)(pbVar1 + 0x18);
      uStack_160 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar17;
      FUN_1004b5b34(&uStack_88,&bStack_170);
      pbVar18 = pbStack_78;
      pbVar15 = pbStack_80;
      pbVar20 = uStack_88;
      if (uStack_88 == (byte *)0x8000000000000000) goto LAB_101437004;
      pbStack_a0 = uStack_88;
      pbStack_98 = pbStack_80;
      pbStack_90 = pbStack_78;
      if (lVar11 == 1) {
LAB_1014370bc:
        pbVar19 = (byte *)FUN_1087e422c(1,&UNK_10b22e268,&UNK_10b20a590);
LAB_1014370d4:
        bStack_170 = 0;
        cStack_16f = 0;
        uStack_16e = 0x800000000000;
        uStack_168 = SUB81(pbVar19,0);
        uStack_167 = (undefined7)((ulong)pbVar19 >> 8);
        if (pbVar18 != (byte *)0x0) {
          pbVar19 = pbVar15 + 8;
          do {
            if (*(long *)(pbVar19 + -8) != 0) {
              _free(*(undefined8 *)pbVar19);
            }
            pbVar19 = pbVar19 + 0x18;
            pbVar18 = pbVar18 + -1;
          } while (pbVar18 != (byte *)0x0);
        }
        if (pbVar20 != (byte *)0x0) {
          _free(pbVar15);
        }
      }
      else {
        pbVar17 = pbVar1 + 0x40;
        pbStack_e8 = pbVar17;
        if (pbVar1[0x20] == 0x16) goto LAB_1014370bc;
        uVar7 = *(undefined8 *)(pbVar1 + 0x21);
        uStack_167 = (undefined7)*(undefined8 *)(pbVar1 + 0x29);
        cStack_16f = (char)uVar7;
        uStack_16e = (undefined6)((ulong)uVar7 >> 8);
        uStack_168 = (undefined1)((ulong)uVar7 >> 0x38);
        pbStack_158 = *(byte **)(pbVar1 + 0x38);
        uStack_160 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
        uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
        pbStack_d0 = (byte *)0x2;
        bStack_170 = pbVar1[0x20];
        FUN_1004b5b34(&uStack_88,&bStack_170);
        pbVar19 = pbStack_80;
        if (uStack_88 == (byte *)0x8000000000000000) goto LAB_1014370d4;
        pbStack_148 = pbStack_78;
        uStack_168 = SUB81(pbStack_98,0);
        uStack_167 = (undefined7)((ulong)pbStack_98 >> 8);
        bStack_170 = (byte)pbStack_a0;
        cStack_16f = (char)((ulong)pbStack_a0 >> 8);
        uStack_16e = (undefined6)((ulong)pbStack_a0 >> 0x10);
        uStack_160 = SUB81(pbStack_90,0);
        uStack_15f = (undefined7)((ulong)pbStack_90 >> 8);
        pbStack_158 = uStack_88;
        pbStack_150 = pbStack_80;
        if (pbStack_a0 != (byte *)0x8000000000000000) {
          pbStack_138 = pbStack_98;
          pbStack_140 = pbStack_a0;
          pbStack_130 = pbStack_90;
          pbStack_128 = uStack_88;
          pbStack_118 = pbStack_78;
          pbStack_120 = pbStack_80;
          lVar11 = FUN_100fbc738(&pbStack_f0);
          if (lVar11 != 0) {
            uStack_168 = (undefined1)lVar11;
            uStack_167 = (undefined7)((ulong)lVar11 >> 8);
            ppbVar8 = &pbStack_140;
            goto LAB_1014373c8;
          }
          goto LAB_1014374c0;
        }
      }
    }
    lVar11 = ((ulong)((long)pbVar13 - (long)pbVar17) >> 5) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(pbVar17);
      pbVar17 = pbVar17 + 0x20;
    }
    if (pbVar16 != (byte *)0x0) {
      _free(pbVar1);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar7 = FUN_108855b04(param_2,auStack_69,&UNK_10b20baa0);
      goto LAB_1014374e8;
    }
    uStack_110 = *(undefined8 *)(param_2 + 8);
    pbStack_120 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar17 = pbStack_120 + lVar11;
    pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
    pbStack_100 = (byte *)0x0;
    pbStack_b8 = (byte *)0x8000000000000000;
    pbVar13 = param_2;
    pbStack_108 = pbVar17;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbStack_a0 = (byte *)0x8000000000000000;
      pbStack_b8 = (byte *)0x8000000000000000;
      pbStack_178 = (byte *)0x8000000000000000;
      pbStack_118 = pbStack_120;
LAB_101437140:
      uStack_88 = &UNK_108ca2284;
      pbStack_80 = (byte *)0xf;
      bStack_170 = (byte)&uStack_88;
      cStack_16f = (char)((ulong)&uStack_88 >> 8);
      uStack_16e = (undefined6)((ulong)&uStack_88 >> 0x10);
      uStack_168 = 0xa0;
      uStack_167 = 0x100c7b3;
      pbVar15 = (byte *)0x8000000000000000;
      uVar7 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_170);
LAB_101437174:
      uStack_168 = (undefined1)uVar7;
      uStack_167 = (undefined7)((ulong)uVar7 >> 8);
joined_r0x0001014372e0:
      uStack_16e = 0x800000000000;
      cStack_16f = 0;
      bStack_170 = 0;
      if (pbStack_178 != (byte *)0x8000000000000000) {
joined_r0x00010143743c:
        uStack_16e = 0x800000000000;
        cStack_16f = 0;
        bStack_170 = 0;
        if (pbVar13 != (byte *)0x0) {
          uStack_16e = 0x800000000000;
          cStack_16f = 0;
          bStack_170 = 0;
          pbVar17 = pbStack_188 + 8;
          do {
            if (*(long *)(pbVar17 + -8) != 0) {
              _free(*(undefined8 *)pbVar17);
            }
            pbVar17 = pbVar17 + 0x18;
            pbVar13 = pbVar13 + -1;
          } while (pbVar13 != (byte *)0x0);
        }
        if (pbStack_178 != (byte *)0x0) {
          _free(pbStack_188);
          pbVar15 = pbStack_b8;
        }
      }
LAB_101437450:
      pbStack_190 = pbStack_b0;
      if (pbVar15 != (byte *)0x8000000000000000) {
        if (pbStack_a8 != (byte *)0x0) {
          pbVar17 = pbStack_b0 + 8;
          pbVar13 = pbStack_a8;
          do {
            if (*(long *)(pbVar17 + -8) != 0) {
              _free(*(undefined8 *)pbVar17);
            }
            pbVar17 = pbVar17 + 0x18;
            pbVar13 = pbVar13 + -1;
          } while (pbVar13 != (byte *)0x0);
        }
        if (pbVar15 != (byte *)0x0) goto LAB_101437494;
      }
LAB_101437498:
      FUN_100d34830(&pbStack_120);
      if ((byte)pbStack_140 != '\x16') {
        FUN_100e077ec(&pbStack_140);
      }
    }
    else {
      pbVar16 = (byte *)0x0;
      puVar14 = (undefined8 *)((ulong)&bStack_170 | 1);
      puVar12 = (undefined8 *)((ulong)&pbStack_140 | 1);
      pbStack_180 = (byte *)0x8000000000000000;
      pbStack_178 = (byte *)0x8000000000000000;
      pbVar15 = (byte *)0x8000000000000000;
      pbVar1 = pbStack_120;
      pbStack_118 = pbStack_120;
      do {
        pbVar19 = pbVar1 + 0x40;
        bStack_170 = *pbVar1;
        pbVar18 = pbVar16;
        pbVar20 = pbVar19;
        if (bStack_170 == 0x16) break;
        uVar7 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar7;
        uVar7 = *(undefined8 *)(pbVar1 + 1);
        puVar14[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar14 = uVar7;
        pbStack_138 = *(byte **)(pbVar1 + 0x28);
        pbStack_140 = *(byte **)(pbVar1 + 0x20);
        pbStack_128 = *(byte **)(pbVar1 + 0x38);
        pbStack_130 = *(byte **)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_167,uStack_168);
        plVar4 = (long *)CONCAT71(uStack_15f,uStack_160);
        if (0xc < bStack_170) {
          if (bStack_170 == 0xd) {
            if (plVar4 == (long *)0xe) {
              uVar10 = 1;
              if (*plVar3 != 0x645f6465696e6564 || *(long *)((long)plVar3 + 6) != 0x736e69616d6f645f
                 ) {
                uVar10 = 2;
              }
            }
            else if (plVar4 == (long *)0xf) {
              uVar10 = 2;
              if (*plVar3 == 0x5f6465776f6c6c61 && *(long *)((long)plVar3 + 7) == 0x736e69616d6f645f
                 ) {
                uVar10 = 0;
              }
            }
            else {
              uVar10 = 2;
            }
            goto LAB_101436e2c;
          }
          if (bStack_170 == 0xe) {
            FUN_100b30a78(&uStack_88,plVar4);
joined_r0x000101436cf8:
            pbVar1 = pbStack_140;
            pbVar18 = uStack_88;
            if (plVar3 != (long *)0x0) {
              _free(plVar4);
              pbVar1 = pbStack_140;
              pbVar18 = uStack_88;
            }
            goto joined_r0x000101436e40;
          }
          if (bStack_170 == 0xf) {
            FUN_100b30a78(&uStack_88,plVar3,plVar4);
            goto LAB_101436e34;
          }
LAB_101436f5c:
          pbStack_80 = (byte *)FUN_108855b04(&bStack_170,auStack_69,&UNK_10b2102a0);
          uStack_88 = (byte *)CONCAT71(uStack_88._1_7_,1);
LAB_1014372c8:
          pbStack_b8 = pbVar15;
          pbStack_100 = pbVar16 + 1;
          uStack_168 = SUB81(pbStack_80,0);
          uStack_167 = (undefined7)((ulong)pbStack_80 >> 8);
          pbStack_118 = pbVar19;
          pbStack_90 = pbVar13;
          pbStack_a8 = pbStack_198;
          pbStack_b0 = pbStack_190;
          pbStack_98 = pbStack_188;
          pbStack_a0 = pbStack_180;
          pbVar15 = pbStack_b8;
          goto joined_r0x0001014372e0;
        }
        if (bStack_170 == 1) {
          uVar9 = 1;
          if (cStack_16f != '\x01') {
            uVar9 = 2;
          }
          uVar10 = 0;
          if (cStack_16f != '\0') {
            uVar10 = uVar9;
          }
        }
        else {
          if (bStack_170 != 4) {
            if (bStack_170 != 0xc) goto LAB_101436f5c;
            if (pbStack_158 == (byte *)0xe) {
              uVar9 = 1;
              if (*plVar4 != 0x645f6465696e6564 || *(long *)((long)plVar4 + 6) != 0x736e69616d6f645f
                 ) {
                uVar9 = 2;
              }
              uStack_88 = (byte *)((ulong)CONCAT61(uStack_88._2_6_,uVar9) << 8);
            }
            else if (pbStack_158 == (byte *)0xf) {
              uVar9 = 2;
              if (*plVar4 == 0x5f6465776f6c6c61 && *(long *)((long)plVar4 + 7) == 0x736e69616d6f645f
                 ) {
                uVar9 = 0;
              }
              uStack_88 = (byte *)((ulong)CONCAT61(uStack_88._2_6_,uVar9) << 8);
            }
            else {
              uStack_88 = (byte *)CONCAT62(uStack_88._2_6_,0x200);
            }
            goto joined_r0x000101436cf8;
          }
          uVar9 = 1;
          if (plVar3 != (long *)0x1) {
            uVar9 = 2;
          }
          uVar10 = 0;
          if (plVar3 != (long *)0x0) {
            uVar10 = uVar9;
          }
        }
LAB_101436e2c:
        uStack_88 = (byte *)((ulong)CONCAT61(uStack_88._2_6_,uVar10) << 8);
LAB_101436e34:
        FUN_100e077ec(&bStack_170);
        pbVar1 = pbStack_140;
        pbVar18 = uStack_88;
joined_r0x000101436e40:
        pbStack_140 = pbVar1;
        uStack_88 = pbVar18;
        if (((ulong)pbVar18 & 1) != 0) goto LAB_1014372c8;
        uStack_88._1_1_ = (char)((ulong)pbVar18 >> 8);
        pbStack_140._0_1_ = (byte)pbVar1;
        bVar5 = (byte)pbStack_140;
        pbStack_140._1_7_ = (undefined7)((ulong)pbVar1 >> 8);
        if (uStack_88._1_1_ == '\0') {
          if (pbVar15 != (byte *)0x8000000000000000) {
            pbStack_100 = pbVar16 + 1;
            pbStack_98 = pbStack_188;
            pbStack_a8 = pbStack_198;
            pbStack_a0 = pbStack_180;
            pbStack_b0 = pbStack_190;
            uStack_88 = &UNK_108ca2284;
            pbStack_80 = (byte *)0xf;
            bStack_170 = (byte)&uStack_88;
            cStack_16f = (char)((ulong)&uStack_88 >> 8);
            uStack_16e = (undefined6)((ulong)&uStack_88 >> 0x10);
            uStack_168 = 0xa0;
            uStack_167 = 0x100c7b3;
            pbStack_118 = pbVar19;
            pbStack_b8 = pbVar15;
            pbStack_90 = pbVar13;
            uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
            goto LAB_101437174;
          }
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_100 = pbVar16 + 1;
            pbStack_98 = pbStack_188;
            pbStack_a8 = pbStack_198;
            pbStack_a0 = pbStack_180;
            pbStack_b8 = (byte *)0x8000000000000000;
            pbStack_b0 = pbStack_190;
            pbStack_118 = pbVar19;
            pbStack_90 = pbVar13;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10143765c;
          }
          uVar7 = *puVar12;
          puVar14[1] = puVar12[1];
          *puVar14 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar7;
          bStack_170 = bVar5;
          FUN_1004b5b34(&uStack_88,&bStack_170);
          if (uStack_88 == (byte *)0x8000000000000000) {
            pbStack_b8 = (byte *)0x8000000000000000;
            pbVar15 = pbStack_b8;
            goto LAB_1014372c8;
          }
          pbStack_190 = pbStack_80;
          pbStack_198 = pbStack_78;
          pbVar15 = uStack_88;
        }
        else if (uStack_88._1_1_ == '\x01') {
          if (pbStack_178 != (byte *)0x8000000000000000) {
            pbStack_100 = pbVar16 + 1;
            pbStack_98 = pbStack_188;
            pbStack_a8 = pbStack_198;
            pbStack_a0 = pbStack_180;
            pbStack_b0 = pbStack_190;
            uStack_88 = &UNK_108ca22af;
            pbStack_80 = (byte *)0xe;
            bStack_170 = (byte)&uStack_88;
            cStack_16f = (char)((ulong)&uStack_88 >> 8);
            uStack_16e = (undefined6)((ulong)&uStack_88 >> 0x10);
            uStack_168 = 0xa0;
            uStack_167 = 0x100c7b3;
            pbStack_118 = pbVar19;
            pbStack_b8 = pbVar15;
            pbStack_90 = pbVar13;
            uVar7 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
            uStack_168 = (undefined1)uVar7;
            uStack_167 = (undefined7)((ulong)uVar7 >> 8);
            goto joined_r0x00010143743c;
          }
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_100 = pbVar16 + 1;
            pbStack_98 = pbStack_188;
            pbStack_a8 = pbStack_198;
            pbStack_a0 = pbStack_180;
            pbStack_b0 = pbStack_190;
            pbStack_118 = pbVar19;
            pbStack_b8 = pbVar15;
            pbStack_90 = pbVar13;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10143765c;
          }
          uVar7 = *puVar12;
          puVar14[1] = puVar12[1];
          *puVar14 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar7;
          bStack_170 = bVar5;
          FUN_1004b5b34(&uStack_88,&bStack_170);
          pbStack_180 = uStack_88;
          if (uStack_88 == (byte *)0x8000000000000000) {
            pbStack_100 = pbVar16 + 1;
            pbStack_b0 = pbStack_190;
            pbStack_a8 = pbStack_198;
            bStack_170 = 0;
            cStack_16f = 0;
            uStack_16e = 0x800000000000;
            uStack_168 = SUB81(pbStack_80,0);
            uStack_167 = (undefined7)((ulong)pbStack_80 >> 8);
            pbStack_118 = pbVar19;
            goto LAB_101437450;
          }
          pbStack_188 = pbStack_80;
          pbVar13 = pbStack_78;
          pbStack_178 = pbStack_180;
        }
        else {
          pbStack_140 = (byte *)CONCAT71(pbStack_140._1_7_,0x16);
          if (bVar5 == 0x16) {
            pbStack_100 = pbVar16 + 1;
            pbStack_98 = pbStack_188;
            pbStack_a8 = pbStack_198;
            pbStack_a0 = pbStack_180;
            pbStack_b0 = pbStack_190;
            pbStack_118 = pbVar19;
            pbStack_b8 = pbVar15;
            pbStack_90 = pbVar13;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10143765c:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101437660);
            (*pcVar6)();
          }
          uVar7 = *puVar12;
          puVar14[1] = puVar12[1];
          *puVar14 = uVar7;
          uVar7 = *(undefined8 *)((long)puVar12 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar7;
          bStack_170 = bVar5;
          FUN_100e077ec(&bStack_170);
        }
        pbVar16 = pbVar16 + 1;
        pbVar18 = (byte *)((lVar11 - 0x40U >> 6) + 1);
        pbVar20 = pbVar17;
        pbVar1 = pbVar19;
      } while (pbVar19 != pbVar17);
      pbStack_98 = pbStack_188;
      pbStack_a8 = pbStack_198;
      pbStack_a0 = pbStack_180;
      pbStack_b0 = pbStack_190;
      pbStack_118 = pbVar20;
      pbStack_100 = pbVar18;
      pbStack_b8 = pbVar15;
      pbStack_90 = pbVar13;
      if (pbVar15 == (byte *)0x8000000000000000) goto LAB_101437140;
      if (pbStack_178 == (byte *)0x8000000000000000) {
        uStack_88 = &UNK_108ca22af;
        pbStack_80 = (byte *)0xe;
        bStack_170 = (byte)&uStack_88;
        cStack_16f = (char)((ulong)&uStack_88 >> 8);
        uStack_16e = (undefined6)((ulong)&uStack_88 >> 0x10);
        uStack_168 = 0xa0;
        uStack_167 = 0x100c7b3;
        uVar7 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_170);
        bStack_170 = 0;
        cStack_16f = 0;
        uStack_16e = 0x800000000000;
        uStack_168 = (undefined1)uVar7;
        uStack_167 = (undefined7)((ulong)uVar7 >> 8);
        if (pbStack_198 != (byte *)0x0) {
          pbVar17 = pbStack_190 + 8;
          do {
            if (*(long *)(pbVar17 + -8) != 0) {
              _free(*(undefined8 *)pbVar17);
            }
            pbVar17 = pbVar17 + 0x18;
            pbStack_198 = pbStack_198 + -1;
          } while (pbStack_198 != (byte *)0x0);
        }
        if (pbVar15 == (byte *)0x0) goto LAB_101437498;
LAB_101437494:
        _free(pbStack_190);
        goto LAB_101437498;
      }
      uStack_168 = SUB81(pbStack_190,0);
      uStack_167 = (undefined7)((ulong)pbStack_190 >> 8);
      bStack_170 = (byte)pbVar15;
      cStack_16f = (char)((ulong)pbVar15 >> 8);
      uStack_16e = (undefined6)((ulong)pbVar15 >> 0x10);
      uStack_160 = SUB81(pbStack_198,0);
      uStack_15f = (undefined7)((ulong)pbStack_198 >> 8);
      pbStack_158 = pbStack_178;
      pbStack_150 = pbStack_188;
      pbStack_148 = pbVar13;
      if (pbVar15 == (byte *)0x8000000000000000) goto LAB_101437498;
      pbStack_e8 = pbStack_190;
      pbStack_e0 = pbStack_198;
      pbStack_d8 = pbStack_178;
      pbStack_d0 = pbStack_188;
      pbStack_f0 = pbVar15;
      pbStack_c8 = pbVar13;
      FUN_100d34830(&pbStack_120);
      if (pbVar17 != pbVar20) {
        uStack_88 = pbVar18;
        uVar7 = FUN_1087e422c(pbVar18 + ((ulong)((long)pbVar17 - (long)pbVar20) >> 6),&uStack_88,
                              &UNK_10b23a190);
        uStack_168 = (undefined1)uVar7;
        uStack_167 = (undefined7)((ulong)uVar7 >> 8);
        ppbVar8 = &pbStack_f0;
LAB_1014373c8:
        uStack_16e = 0x800000000000;
        cStack_16f = 0;
        bStack_170 = 0;
        FUN_100c973ec(ppbVar8);
      }
    }
  }
LAB_1014374c0:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_16e,CONCAT11(cStack_16f,bStack_170)) != -0x8000000000000000) {
    param_1[1] = CONCAT71(uStack_167,uStack_168);
    *param_1 = CONCAT62(uStack_16e,CONCAT11(cStack_16f,bStack_170));
    param_1[3] = pbStack_158;
    param_1[2] = CONCAT71(uStack_15f,uStack_160);
    param_1[5] = pbStack_148;
    param_1[4] = pbStack_150;
    return;
  }
  uVar7 = CONCAT71(uStack_167,uStack_168);
LAB_1014374e8:
  *param_1 = 0x8000000000000001;
  param_1[1] = uVar7;
  return;
}

