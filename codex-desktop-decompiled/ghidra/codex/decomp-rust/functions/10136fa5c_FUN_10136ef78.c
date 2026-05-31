
void FUN_10136ef78(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  char cVar12;
  undefined7 uVar13;
  undefined7 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined7 uVar17;
  undefined7 uVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined **ppuVar32;
  byte *pbVar33;
  byte *pbVar34;
  undefined *puVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined8 uVar39;
  undefined **ppuStack_220;
  ulong uStack_210;
  ulong uStack_208;
  long *plStack_1f8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long *plStack_170;
  ulong uStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  undefined **ppuStack_140;
  char cStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  ulong uStack_120;
  long *plStack_118;
  ulong uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  bVar6 = *param_2;
  if (bVar6 != 0x14) {
    if (bVar6 != 0x15) {
      uVar22 = FUN_108855b04(param_2,&puStack_90,&UNK_10b20ace0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar22;
      return;
    }
    uStack_150 = *(ulong *)(param_2 + 8);
    pbStack_160 = *(byte **)(param_2 + 0x10);
    lVar26 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_160 + lVar26;
    uStack_180 = CONCAT71(uStack_180._1_7_,0x16);
    ppuStack_140 = (undefined **)0x0;
    pbStack_148 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      ppuVar32 = (undefined **)0x8000000000000003;
      cStack_138 = '\x03';
      uStack_137 = 0x80000000000000;
      pbStack_158 = pbStack_160;
    }
    else {
      ppuVar36 = (undefined **)0x0;
      ppuStack_220 = (undefined **)0x8000000000000002;
      puVar30 = (undefined8 *)((ulong)&uStack_1e0 | 1);
      puVar28 = (undefined8 *)((ulong)&uStack_180 | 1);
      puVar27 = (undefined8 *)((ulong)&cStack_b0 | 1);
      ppuVar32 = (undefined **)0x8000000000000003;
      puVar35 = (undefined *)0x8000000000000000;
      ppuVar38 = (undefined **)0x8000000000000003;
      pbVar8 = pbStack_160;
      pbStack_158 = pbStack_160;
      do {
        uVar17 = uStack_12f;
        uVar15 = uStack_130;
        uVar13 = uStack_137;
        cVar7 = cStack_138;
        ppuVar10 = uStack_1e0;
        pbVar33 = pbVar8 + 0x40;
        bVar5 = *pbVar8;
        pbVar34 = pbVar33;
        ppuVar37 = ppuVar36;
        if (bVar5 == 0x16) break;
        uStack_1e0 = (undefined **)CONCAT71(uStack_1e0._1_7_,bVar5);
        ppuVar37 = uStack_1e0;
        uVar39 = *(undefined8 *)(pbVar8 + 0x10);
        *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)(pbVar8 + 0x18);
        *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
        uVar39 = *(undefined8 *)(pbVar8 + 1);
        puVar30[1] = *(undefined8 *)(pbVar8 + 9);
        *puVar30 = uVar39;
        uStack_178 = *(ulong *)(pbVar8 + 0x28);
        uStack_180 = *(ulong *)(pbVar8 + 0x20);
        uStack_168 = *(ulong *)(pbVar8 + 0x38);
        plStack_170 = *(long **)(pbVar8 + 0x30);
        cStack_138 = (char)ppuVar38;
        cVar12 = cStack_138;
        uStack_137 = (undefined7)((ulong)ppuVar38 >> 8);
        uVar14 = uStack_137;
        uStack_130 = SUB81(plStack_1f8,0);
        uVar16 = uStack_130;
        uStack_12f = (undefined7)((ulong)plStack_1f8 >> 8);
        uVar18 = uStack_12f;
        if (bVar5 < 0xd) {
          if (bVar5 == 1) {
            uStack_1e0._1_1_ = SUB81(ppuVar10,1);
            iVar25 = 1;
            if (uStack_1e0._1_1_ != '\x01') {
              iVar25 = 2;
            }
            iVar24 = 0;
            if (uStack_1e0._1_1_ != '\0') {
              iVar24 = iVar25;
            }
          }
          else {
            if (bVar5 != 4) {
              if (bVar5 == 0xc) {
                if (uStack_1c8 == 7) {
                  iVar24 = 1;
                  if ((int)*plStack_1d0 != 0x49746967 ||
                      *(int *)((long)plStack_1d0 + 3) != 0x6f666e49) {
                    iVar24 = 2;
                  }
                }
                else if (uStack_1c8 == 8) {
                  iVar24 = 2;
                  if (*plStack_1d0 == 0x6449646165726874) {
                    iVar24 = 0;
                  }
                }
                else {
                  iVar24 = 2;
                }
                goto joined_r0x00010136f3b4;
              }
LAB_10136fb8c:
              ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
              pbStack_158 = pbVar33;
              uVar22 = FUN_108855b04(&uStack_1e0,&puStack_90,&UNK_10b210b60);
              goto LAB_10136f6ec;
            }
            iVar25 = 1;
            if (plStack_1d8 != (long *)0x1) {
              iVar25 = 2;
            }
            iVar24 = 0;
            if (plStack_1d8 != (long *)0x0) {
              iVar24 = iVar25;
            }
          }
LAB_10136f450:
          uStack_1e0 = ppuVar37;
          cStack_138 = cVar7;
          uStack_137 = uVar13;
          uStack_130 = uVar15;
          uStack_12f = uVar17;
          FUN_100e077ec(&uStack_1e0);
        }
        else {
          if (bVar5 == 0xd) {
            if (plStack_1d0 == (long *)0x7) {
              iVar24 = 1;
              if ((int)*plStack_1d8 != 0x49746967 || *(int *)((long)plStack_1d8 + 3) != 0x6f666e49)
              {
                iVar24 = 2;
              }
            }
            else {
              if (plStack_1d0 != (long *)0x8) goto LAB_10136f418;
              iVar24 = 2;
              if (*plStack_1d8 == 0x6449646165726874) {
                iVar24 = 0;
              }
            }
            goto LAB_10136f450;
          }
          if (bVar5 != 0xe) {
            if (bVar5 != 0xf) goto LAB_10136fb8c;
            if (plStack_1d0 == (long *)0x7) {
              if (((((((char)*plStack_1d8 != 'g') || (*(char *)((long)plStack_1d8 + 1) != 'i')) ||
                    (*(char *)((long)plStack_1d8 + 2) != 't')) ||
                   ((*(char *)((long)plStack_1d8 + 3) != 'I' ||
                    (*(char *)((long)plStack_1d8 + 4) != 'n')))) ||
                  (*(char *)((long)plStack_1d8 + 5) != 'f')) ||
                 (*(char *)((long)plStack_1d8 + 6) != 'o')) goto LAB_10136f418;
              iVar24 = 1;
            }
            else if ((((plStack_1d0 == (long *)0x8) && ((char)*plStack_1d8 == 't')) &&
                     ((*(char *)((long)plStack_1d8 + 1) == 'h' &&
                      (((*(char *)((long)plStack_1d8 + 2) == 'r' &&
                        (*(char *)((long)plStack_1d8 + 3) == 'e')) &&
                       (*(char *)((long)plStack_1d8 + 4) == 'a')))))) &&
                    (((*(char *)((long)plStack_1d8 + 5) == 'd' &&
                      (*(char *)((long)plStack_1d8 + 6) == 'I')) &&
                     (*(char *)((long)plStack_1d8 + 7) == 'd')))) {
              iVar24 = 0;
            }
            else {
LAB_10136f418:
              iVar24 = 2;
            }
            goto LAB_10136f450;
          }
          if (uStack_1c8 == 7) {
            if (((((char)*plStack_1d0 != 'g') || (*(char *)((long)plStack_1d0 + 1) != 'i')) ||
                ((*(char *)((long)plStack_1d0 + 2) != 't' ||
                 (((*(char *)((long)plStack_1d0 + 3) != 'I' ||
                   (*(char *)((long)plStack_1d0 + 4) != 'n')) ||
                  (*(char *)((long)plStack_1d0 + 5) != 'f')))))) ||
               (*(char *)((long)plStack_1d0 + 6) != 'o')) goto LAB_10136f378;
            iVar24 = 1;
          }
          else if (((uStack_1c8 == 8) && ((char)*plStack_1d0 == 't')) &&
                  (((*(char *)((long)plStack_1d0 + 1) == 'h' &&
                    ((*(char *)((long)plStack_1d0 + 2) == 'r' &&
                     (*(char *)((long)plStack_1d0 + 3) == 'e')))) &&
                   ((*(char *)((long)plStack_1d0 + 4) == 'a' &&
                    (((*(char *)((long)plStack_1d0 + 5) == 'd' &&
                      (*(char *)((long)plStack_1d0 + 6) == 'I')) &&
                     (*(char *)((long)plStack_1d0 + 7) == 'd')))))))) {
            iVar24 = 0;
          }
          else {
LAB_10136f378:
            iVar24 = 2;
          }
joined_r0x00010136f3b4:
          cStack_138 = cVar7;
          uStack_137 = uVar13;
          uStack_130 = uVar15;
          uStack_12f = uVar17;
          if (plStack_1d8 != (long *)0x0) {
            _free();
          }
        }
        cVar7 = (char)uStack_180;
        if (iVar24 == 0) {
          if (puVar35 != (undefined *)0x8000000000000000) {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            puStack_90 = &UNK_108c982f8;
            uStack_88 = 8;
            uStack_1e0 = &puStack_90;
            plStack_1d8 = (long *)&DAT_100c7b3a0;
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            uVar22 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e0);
            goto LAB_10136f6ec;
          }
          uStack_180 = CONCAT71(uStack_180._1_7_,0x16);
          if (cVar7 == '\x16') {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10136fb88;
          }
          uVar39 = *puVar28;
          puVar30[1] = puVar28[1];
          *puVar30 = uVar39;
          uVar39 = *(undefined8 *)((long)puVar28 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
          uStack_1e0 = (undefined **)CONCAT71(uStack_1e0._1_7_,cVar7);
          FUN_1004b62d4(&puStack_90,&uStack_1e0);
          if (puStack_90 == (undefined *)0x8000000000000000) {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            puVar35 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_88;
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            goto joined_r0x00010136f8a4;
          }
          uStack_208 = uStack_88;
          uStack_210 = uStack_80;
          puVar35 = puStack_90;
        }
        else if (iVar24 == 1) {
          if (ppuVar32 != (undefined **)0x8000000000000003) {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            puStack_90 = &UNK_108cc0248;
            uStack_88 = 7;
            uStack_1e0 = &puStack_90;
            plStack_1d8 = (long *)&DAT_100c7b3a0;
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            uVar22 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e0);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar22;
            goto joined_r0x00010136fa8c;
          }
          uStack_180 = CONCAT71(uStack_180._1_7_,0x16);
          if (cVar7 == '\x16') {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10136fb88;
          }
          uVar39 = *puVar28;
          puVar27[1] = puVar28[1];
          *puVar27 = uVar39;
          uVar39 = *(undefined8 *)((long)puVar28 + 0xf);
          *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
          *(undefined8 *)((long)puVar27 + 0xf) = uVar39;
          cStack_b0 = cVar7;
          if (cVar7 == '\x10') {
LAB_10136f4c8:
            uStack_1e0 = (undefined **)0x8000000000000002;
            FUN_100e077ec(&cStack_b0);
            ppuVar32 = (undefined **)0x8000000000000002;
          }
          else {
            if (cVar7 == '\x11') {
              puVar9 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              uStack_88 = puVar9[1];
              puStack_90 = (undefined *)*puVar9;
              uStack_78 = puVar9[3];
              uStack_80 = puVar9[2];
              FUN_10143cf68(&uStack_1e0,&puStack_90);
              _free(puVar9);
              ppuVar32 = uStack_1e0;
            }
            else {
              if (cVar7 == '\x12') goto LAB_10136f4c8;
              cStack_b0 = cVar7;
              FUN_10143cf68(&uStack_1e0,&cStack_b0);
              ppuVar32 = uStack_1e0;
            }
            uStack_1e0 = ppuVar32;
            if (ppuVar32 == (undefined **)0x8000000000000003) {
              ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)plStack_1d8;
              pbStack_158 = pbVar33;
              goto LAB_10136f8a8;
            }
          }
          uStack_120 = uStack_1c8;
          uStack_128 = SUB81(plStack_1d0,0);
          uStack_127 = (undefined7)((ulong)plStack_1d0 >> 8);
          uStack_110 = uStack_1b8;
          plStack_118 = plStack_1c0;
          pbStack_100 = pbStack_1a8;
          pbStack_108 = pbStack_1b0;
          uStack_f8 = uStack_1a0;
          ppuVar38 = ppuVar32;
          plStack_1f8 = plStack_1d8;
        }
        else {
          uStack_180 = CONCAT71(uStack_180._1_7_,0x16);
          if (cVar7 == '\x16') {
            ppuStack_140 = (undefined **)((long)ppuVar36 + 1);
            pbStack_158 = pbVar33;
            cStack_138 = cVar12;
            uStack_137 = uVar14;
            uStack_130 = uVar16;
            uStack_12f = uVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10136fb88:
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x10136fb8c);
            (*pcVar19)();
          }
          uVar39 = *puVar28;
          puVar30[1] = puVar28[1];
          *puVar30 = uVar39;
          uVar39 = *(undefined8 *)((long)puVar28 + 0xf);
          *(undefined8 *)((long)puVar30 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
          *(undefined8 *)((long)puVar30 + 0xf) = uVar39;
          uStack_1e0 = (undefined **)CONCAT71(uStack_1e0._1_7_,cVar7);
          FUN_100e077ec(&uStack_1e0);
        }
        ppuVar36 = (undefined **)((long)ppuVar36 + 1);
        pbVar34 = pbVar1;
        ppuVar37 = (undefined **)((lVar26 - 0x40U >> 6) + 1);
        pbVar8 = pbVar33;
      } while (pbVar33 != pbVar1);
      cStack_138 = (char)ppuVar38;
      uStack_137 = (undefined7)((ulong)ppuVar38 >> 8);
      uStack_130 = SUB81(plStack_1f8,0);
      uStack_12f = (undefined7)((ulong)plStack_1f8 >> 8);
      pbStack_158 = pbVar34;
      ppuStack_140 = ppuVar37;
      if (puVar35 != (undefined *)0x8000000000000000) {
        if (ppuVar32 != (undefined **)0x8000000000000003) {
          plStack_e8 = (long *)CONCAT71(uStack_127,uStack_128);
          plStack_f0 = plStack_1f8;
          plStack_d8 = plStack_118;
          uStack_e0 = uStack_120;
          pbStack_c8 = pbStack_108;
          uStack_d0 = uStack_110;
          uStack_b8 = uStack_f8;
          pbStack_c0 = pbStack_100;
          ppuStack_220 = ppuVar32;
        }
        *param_1 = (ulong)puVar35;
        param_1[1] = uStack_208;
        param_1[2] = uStack_210;
        param_1[3] = (ulong)ppuStack_220;
        param_1[5] = (ulong)plStack_e8;
        param_1[4] = (ulong)plStack_f0;
        param_1[7] = (ulong)plStack_d8;
        param_1[6] = uStack_e0;
        param_1[9] = (ulong)pbStack_c8;
        param_1[8] = uStack_d0;
        param_1[0xb] = uStack_b8;
        param_1[10] = (ulong)pbStack_c0;
        uVar29 = param_1[4];
        uVar22 = param_1[6];
        uVar4 = param_1[7];
        uVar20 = param_1[9];
        uVar21 = param_1[10];
        FUN_100d34830(&pbStack_160);
        if (pbVar1 != pbVar34) {
          uStack_1e0 = ppuVar37;
          uVar23 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar34) >> 6) + (long)ppuVar37,
                                 &uStack_1e0,&UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar23;
          if (puVar35 != (undefined *)0x0) {
            _free(uStack_208);
          }
          if (-0x7fffffffffffffff < (long)ppuStack_220) {
            if (ppuStack_220 == (undefined **)0x8000000000000002) goto LAB_10136f8d4;
            if (ppuStack_220 != (undefined **)0x0) {
              _free(uVar29);
            }
          }
          if ((-0x7fffffffffffffff < (long)uVar22) && (uVar22 != 0)) {
            _free(uVar4);
          }
          if ((-0x7fffffffffffffff < (long)uVar20) && (uVar20 != 0)) {
            _free(uVar21);
          }
        }
        goto LAB_10136f8d4;
      }
    }
    puStack_90 = &UNK_108c982f8;
    uStack_88 = 8;
    uStack_1e0 = &puStack_90;
    plStack_1d8 = (long *)&DAT_100c7b3a0;
    puVar35 = (undefined *)0x0;
    uVar22 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_1e0);
LAB_10136f6ec:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar22;
joined_r0x00010136f8a4:
    if (ppuVar32 != (undefined **)0x8000000000000003) {
joined_r0x00010136fa8c:
      if (ppuVar32 != (undefined **)0x8000000000000002) {
        if ((-0x7fffffffffffffff < (long)ppuVar32) && (ppuVar32 != (undefined **)0x0)) {
          _free(plStack_1f8);
        }
        if (((uStack_120 != 0x8000000000000001) && (uStack_120 != 0x8000000000000000)) &&
           (uStack_120 != 0)) {
          _free(plStack_118);
        }
        if (((pbStack_108 != (byte *)0x8000000000000001) &&
            (pbStack_108 != (byte *)0x8000000000000000)) && (pbStack_108 != (byte *)0x0)) {
          _free(pbStack_100);
        }
      }
    }
LAB_10136f8a8:
    if (((ulong)puVar35 & 0x7fffffffffffffff) != 0) {
      _free(uStack_208);
    }
    FUN_100d34830(&pbStack_160);
    if ((char)uStack_180 != '\x16') {
      FUN_100e077ec(&uStack_180);
    }
    goto LAB_10136f8d4;
  }
  uVar22 = *(ulong *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0x10);
  lVar26 = *(long *)(param_2 + 0x18);
  plVar2 = plVar3 + lVar26 * 4;
  uStack_d0 = 0;
  plVar31 = plVar3;
  plStack_f0 = plVar3;
  uStack_e0 = uVar22;
  plStack_d8 = plVar2;
  if (lVar26 == 0) {
LAB_10136f06c:
    plStack_e8 = plVar31;
    uVar20 = FUN_1087e422c(0,&UNK_10b232360,&UNK_10b20a590);
LAB_10136f088:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar20;
  }
  else {
    plVar31 = plVar3 + 4;
    if ((char)*plVar3 == '\x16') goto LAB_10136f06c;
    uStack_12f = (undefined7)*(undefined8 *)((long)plVar3 + 9);
    uStack_137 = (undefined7)*(undefined8 *)((long)plVar3 + 1);
    uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)plVar3 + 1) >> 0x38);
    uStack_120 = plVar3[3];
    uStack_128 = (undefined1)plVar3[2];
    uStack_127 = (undefined7)((ulong)plVar3[2] >> 8);
    uStack_d0 = 1;
    cStack_138 = (char)*plVar3;
    plStack_e8 = plVar31;
    FUN_1004b62d4(&uStack_180,&cStack_138);
    plVar11 = plStack_170;
    uVar20 = uStack_178;
    uVar4 = uStack_180;
    if (uStack_180 == 0x8000000000000000) goto LAB_10136f088;
    if (lVar26 == 1) {
LAB_10136f650:
      uVar21 = FUN_1087e422c(1,&UNK_10b232360,&UNK_10b20a590);
    }
    else {
      plVar31 = plVar3 + 8;
      cVar7 = (char)plVar3[4];
      plStack_e8 = plVar31;
      if (cVar7 == '\x16') goto LAB_10136f650;
      uStack_a7 = (undefined7)*(undefined8 *)((long)plVar3 + 0x29);
      uStack_af = (undefined7)*(undefined8 *)((long)plVar3 + 0x21);
      uStack_a8 = (undefined1)((ulong)*(undefined8 *)((long)plVar3 + 0x21) >> 0x38);
      lStack_98 = plVar3[7];
      uStack_a0 = (undefined1)plVar3[6];
      uStack_9f = (undefined7)((ulong)plVar3[6] >> 8);
      uStack_d0 = 2;
      cStack_b0 = cVar7;
      if (cVar7 == '\x10') {
LAB_10136f940:
        uVar21 = FUN_100e077ec(&cStack_b0);
        uVar29 = 0x8000000000000002;
LAB_10136f950:
        param_1[6] = uStack_178;
        param_1[5] = uStack_180;
        param_1[8] = uStack_168;
        param_1[7] = (ulong)plStack_170;
        param_1[10] = (ulong)pbStack_158;
        param_1[9] = (ulong)pbStack_160;
        param_1[0xb] = uStack_150;
        *param_1 = uVar4;
        param_1[1] = uVar20;
        param_1[2] = (ulong)plVar11;
        param_1[3] = uVar29;
        param_1[4] = uVar21;
        plStack_1d8 = (long *)param_1[1];
        uStack_1e0 = (undefined **)*param_1;
        uStack_1c8 = param_1[3];
        plStack_1d0 = (long *)param_1[2];
        uStack_1b8 = param_1[5];
        plStack_1c0 = (long *)param_1[4];
        pbStack_1a8 = (byte *)param_1[7];
        pbStack_1b0 = (byte *)param_1[6];
        uStack_198 = param_1[9];
        uStack_1a0 = param_1[8];
        uStack_188 = param_1[0xb];
        uStack_190 = param_1[10];
        uVar22 = FUN_100fbc738(&plStack_f0);
        if (uVar22 != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar22;
          func_0x000100e7d7b8(&uStack_1e0);
        }
        goto LAB_10136f8d4;
      }
      if (cVar7 == '\x11') {
        puVar27 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
        uStack_88 = puVar27[1];
        puStack_90 = (undefined *)*puVar27;
        uStack_78 = puVar27[3];
        uStack_80 = puVar27[2];
        FUN_10143cf68(&cStack_138,&puStack_90);
        _free(puVar27);
      }
      else {
        if (cVar7 == '\x12') goto LAB_10136f940;
        FUN_10143cf68(&cStack_138,&cStack_b0);
      }
      uVar29 = CONCAT71(uStack_137,cStack_138);
      uVar21 = CONCAT71(uStack_12f,uStack_130);
      if (uVar29 != 0x8000000000000003) {
        uStack_178 = uStack_120;
        uStack_180 = CONCAT71(uStack_127,uStack_128);
        uStack_168 = uStack_110;
        plStack_170 = plStack_118;
        pbStack_158 = pbStack_100;
        pbStack_160 = pbStack_108;
        uStack_150 = uStack_f8;
        if (uVar29 != 0x8000000000000004) goto LAB_10136f950;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar21;
    if (uVar4 != 0) {
      _free(uVar20);
    }
  }
  lVar26 = ((ulong)((long)plVar2 - (long)plVar31) >> 5) + 1;
  while (lVar26 = lVar26 + -1, lVar26 != 0) {
    FUN_100e077ec(plVar31);
    plVar31 = plVar31 + 4;
  }
  if (uVar22 != 0) {
    _free(plVar3);
  }
LAB_10136f8d4:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

