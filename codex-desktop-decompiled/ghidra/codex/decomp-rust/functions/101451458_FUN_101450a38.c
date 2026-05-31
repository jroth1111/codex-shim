
void FUN_101450a38(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte bVar21;
  undefined8 uVar22;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  int *piStack_80;
  long lStack_78;
  
  bVar1 = *param_2;
  if (bVar1 == 0x14) {
    pbStack_c0 = *(byte **)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    pbStack_b8 = pbStack_d0 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_b0 = (byte *)0x0;
    pbStack_c8 = pbStack_d0;
    FUN_100f2abac(&pbStack_310,&pbStack_d0);
    pbVar16 = pbStack_310;
    if (pbStack_310 == (byte *)0x8000000000000002) {
LAB_101450b00:
      pbStack_310 = (byte *)0x8000000000000001;
LAB_101450b08:
      lVar17 = ((ulong)((long)pbStack_b8 - (long)pbStack_c8) >> 5) + 1;
      pbVar16 = pbStack_c8;
      while (lVar17 = lVar17 + -1, lVar17 != 0) {
        FUN_100e077ec(pbVar16);
        pbVar16 = pbVar16 + 0x20;
      }
      if (pbStack_c0 != (byte *)0x0) {
        _free(pbStack_d0);
      }
    }
    else {
      pbStack_278 = pbStack_2f8;
      pbStack_280 = pbStack_300;
      pbStack_268 = pbStack_2e8;
      pbStack_270 = pbStack_2f0;
      pbStack_258 = pbStack_2d8;
      pbStack_260 = pbStack_2e0;
      pbStack_250 = pbStack_2d0;
      if (pbStack_310 == (byte *)0x8000000000000001) {
        pbStack_308 = (byte *)FUN_1087e422c(0,&UNK_10b22e048,&UNK_10b20a590);
        goto LAB_101450b00;
      }
      pbStack_140 = pbStack_2f8;
      pbStack_148 = pbStack_300;
      pbStack_130 = pbStack_2e8;
      pbStack_138 = pbStack_2f0;
      pbStack_120 = pbStack_2d8;
      pbStack_128 = pbStack_2e0;
      pbStack_118 = pbStack_2d0;
      pbStack_158 = pbStack_310;
      pbStack_150 = pbStack_308;
      FUN_100f2abac(&pbStack_310,&pbStack_d0);
      pbVar19 = pbStack_158;
      pbVar8 = pbStack_2d0;
      pbVar7 = pbStack_2d8;
      pbVar6 = pbStack_2e0;
      pbVar5 = pbStack_2e8;
      pbVar4 = pbStack_2f0;
      pbVar3 = pbStack_2f8;
      pbVar11 = pbStack_300;
      pbVar20 = pbStack_308;
      pbVar18 = pbStack_310;
      if (pbStack_310 == (byte *)0x8000000000000002) {
LAB_101450bac:
        pbStack_310 = (byte *)0x8000000000000001;
        if (pbVar16 != (byte *)0x8000000000000000) {
          if ((pbStack_138 != (byte *)0x0) && ((long)pbStack_138 * 9 != -0x11)) {
            _free(pbStack_140 + (long)pbStack_138 * -8 + -8);
          }
          func_0x000100cd7284(&pbStack_158);
        }
        goto LAB_101450b08;
      }
      pbStack_198 = pbStack_2f8;
      pbStack_1a0 = pbStack_300;
      pbStack_188 = pbStack_2e8;
      pbStack_190 = pbStack_2f0;
      pbStack_178 = pbStack_2d8;
      pbStack_180 = pbStack_2e0;
      pbStack_170 = pbStack_2d0;
      if (pbStack_310 == (byte *)0x8000000000000001) {
        pbStack_308 = (byte *)FUN_1087e422c(1,&UNK_10b22e048,&UNK_10b20a590);
        goto LAB_101450bac;
      }
      pbStack_2b0 = pbStack_2f8;
      pbStack_2b8 = pbStack_300;
      pbStack_2a0 = pbStack_2e8;
      pbStack_2a8 = pbStack_2f0;
      pbStack_290 = pbStack_2d8;
      pbStack_298 = pbStack_2e0;
      pbStack_288 = pbStack_2d0;
      pbStack_2e8 = pbStack_130;
      pbStack_2f0 = pbStack_138;
      pbStack_2d8 = pbStack_120;
      pbStack_2e0 = pbStack_128;
      pbStack_2d0 = pbStack_118;
      pbStack_310 = pbStack_158;
      pbStack_2f8 = pbStack_140;
      pbStack_300 = pbStack_148;
      pbStack_308 = pbStack_150;
      pbStack_2c8 = pbVar18;
      pbStack_2c0 = pbVar20;
      if (pbStack_158 == (byte *)0x8000000000000001) goto LAB_101450b08;
      pbStack_1c8 = pbVar4;
      pbStack_1d0 = pbVar3;
      pbStack_1b8 = pbVar6;
      pbStack_1c0 = pbVar5;
      pbStack_1a8 = pbVar8;
      pbStack_1b0 = pbVar7;
      pbStack_208 = pbStack_130;
      pbStack_210 = pbStack_138;
      pbStack_1f8 = pbStack_120;
      pbStack_200 = pbStack_128;
      pbStack_1e8 = pbVar18;
      pbStack_1f0 = pbStack_118;
      pbStack_1d8 = pbVar11;
      pbStack_1e0 = pbVar20;
      pbStack_228 = pbStack_150;
      pbStack_230 = pbStack_158;
      pbStack_218 = pbStack_140;
      pbStack_220 = pbStack_148;
      pbVar16 = (byte *)FUN_100fbc738(&pbStack_d0);
      if (pbVar16 == (byte *)0x0) goto LAB_10145123c;
      pbStack_310 = (byte *)0x8000000000000001;
      pbStack_308 = pbVar16;
      FUN_100e1f86c(&pbStack_230);
    }
LAB_101450b44:
    pbVar19 = (byte *)0x8000000000000001;
  }
  else {
    if (bVar1 != 0x15) {
      pbStack_308 = (byte *)FUN_108855b04(param_2,&pbStack_310,&UNK_10b20c5e0);
      goto LAB_101451260;
    }
    pbStack_250 = *(byte **)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    pbStack_248 = pbVar16 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_280 = (byte *)CONCAT71(pbStack_280._1_7_,0x16);
    pbStack_240 = (byte *)0x0;
    pbStack_260 = pbVar16;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbVar19 = (byte *)0x8000000000000000;
      pbStack_258 = pbVar16;
LAB_1014511a0:
      pbVar18 = (byte *)0x8000000000000000;
    }
    else {
      bVar21 = *pbVar16;
      pbStack_258 = pbVar16 + 0x40;
      if (bVar21 == 0x16) {
        pbVar19 = (byte *)0x8000000000000001;
        pbVar18 = (byte *)0x8000000000000001;
      }
      else {
        puVar15 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar14 = (undefined8 *)((ulong)&pbStack_280 | 1);
        puVar10 = (undefined8 *)((ulong)&pbStack_310 | 1);
        pbStack_330 = (byte *)0x8000000000000001;
        pbVar20 = (byte *)0x8000000000000001;
        pbVar18 = (byte *)0x8000000000000001;
        pbVar19 = (byte *)0x8000000000000001;
        do {
          pbStack_240 = pbStack_240 + 1;
          uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar21);
          uVar22 = *(undefined8 *)(pbVar16 + 1);
          puVar15[1] = *(undefined8 *)(pbVar16 + 9);
          *puVar15 = uVar22;
          uVar22 = *(undefined8 *)(pbVar16 + 0x10);
          pbStack_308 = *(byte **)(pbVar16 + 0x28);
          pbStack_310 = *(byte **)(pbVar16 + 0x20);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar16 + 0x18);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar22;
          pbStack_2f8 = *(byte **)(pbVar16 + 0x38);
          pbStack_300 = *(byte **)(pbVar16 + 0x30);
          if ((char)pbStack_280 != '\x16') {
            FUN_100e077ec(&pbStack_280);
          }
          pbStack_278 = pbStack_308;
          pbStack_280 = pbStack_310;
          pbStack_268 = pbStack_2f8;
          pbStack_270 = pbStack_300;
          if (bVar21 < 0xd) {
            if (bVar21 == 1) {
              iVar13 = 1;
              if (uStack_90._1_1_ != '\x01') {
                iVar13 = 2;
              }
              iVar12 = 0;
              if (uStack_90._1_1_ != '\0') {
                iVar12 = iVar13;
              }
              goto LAB_101450f40;
            }
            if (bVar21 == 4) {
              iVar13 = 1;
              if (piStack_88 != (int *)0x1) {
                iVar13 = 2;
              }
              iVar12 = 0;
              if (piStack_88 != (int *)0x0) {
                iVar12 = iVar13;
              }
              goto LAB_101450f40;
            }
            if (bVar21 == 0xc) {
              if (lStack_78 == 7) {
                iVar12 = 1;
                if (*piStack_80 != 0x746e6f63 || *(int *)((long)piStack_80 + 3) != 0x74786574) {
                  iVar12 = 2;
                }
              }
              else if (lStack_78 == 5) {
                iVar12 = 2;
                if (*piStack_80 == 0x6c6f6f74 && (char)piStack_80[1] == 's') {
                  iVar12 = 0;
                }
              }
              else {
                iVar12 = 2;
              }
              goto joined_r0x000101450ea4;
            }
LAB_1014514dc:
            pbStack_150 = pbStack_328;
            pbStack_1a0 = pbStack_330;
            pbStack_198 = pbStack_320;
            pbStack_158 = pbVar20;
            pbStack_308 = (byte *)FUN_108855b04(&uStack_90,&pbStack_310,&UNK_10b2127c0);
LAB_1014512cc:
            pbStack_310 = (byte *)0x8000000000000001;
            if ((pbVar18 != (byte *)0x8000000000000001) && (pbVar18 != (byte *)0x8000000000000000))
            {
LAB_1014512f4:
              pbStack_310 = (byte *)0x8000000000000001;
              if ((pbStack_138 != (byte *)0x0) && ((long)pbStack_138 * 9 != -0x11)) {
                _free(pbStack_140 + (long)pbStack_138 * -8 + -8);
              }
              func_0x000100cd7284(&pbStack_158);
            }
LAB_10145134c:
            if ((pbVar19 != (byte *)0x8000000000000001) && (pbVar19 != (byte *)0x8000000000000000))
            {
              if ((pbStack_180 != (byte *)0x0) && ((long)pbStack_180 * 9 != -0x11)) {
                _free(pbStack_188 + (long)pbStack_180 * -8 + -8);
              }
              func_0x000100cd7284(&pbStack_1a0);
            }
            FUN_100d34830(&pbStack_260);
            if ((char)pbStack_280 != '\x16') {
              FUN_100e077ec(&pbStack_280);
            }
            goto LAB_101450b44;
          }
          if (bVar21 == 0xd) {
            if (piStack_80 == (int *)0x7) {
              iVar12 = 1;
              if (*piStack_88 != 0x746e6f63 || *(int *)((long)piStack_88 + 3) != 0x74786574) {
                iVar12 = 2;
              }
            }
            else {
              if (piStack_80 != (int *)0x5) goto LAB_101450f08;
              iVar12 = 2;
              if (*piStack_88 == 0x6c6f6f74 && (char)piStack_88[1] == 's') {
                iVar12 = 0;
              }
            }
LAB_101450f40:
            FUN_100e077ec(&uStack_90);
          }
          else {
            if (bVar21 != 0xe) {
              if (bVar21 != 0xf) goto LAB_1014514dc;
              if (piStack_80 == (int *)0x7) {
                if (((((((char)*piStack_88 != 'c') || (*(char *)((long)piStack_88 + 1) != 'o')) ||
                      (*(char *)((long)piStack_88 + 2) != 'n')) ||
                     ((*(char *)((long)piStack_88 + 3) != 't' || ((char)piStack_88[1] != 'e')))) ||
                    (*(char *)((long)piStack_88 + 5) != 'x')) ||
                   (*(char *)((long)piStack_88 + 6) != 't')) goto LAB_101450f08;
                iVar12 = 1;
              }
              else if (((piStack_80 == (int *)0x5) && ((char)*piStack_88 == 't')) &&
                      ((*(char *)((long)piStack_88 + 1) == 'o' &&
                       (((*(char *)((long)piStack_88 + 2) == 'o' &&
                         (*(char *)((long)piStack_88 + 3) == 'l')) && ((char)piStack_88[1] == 's')))
                       ))) {
                iVar12 = 0;
              }
              else {
LAB_101450f08:
                iVar12 = 2;
              }
              goto LAB_101450f40;
            }
            if (lStack_78 == 7) {
              if ((((char)*piStack_80 != 'c') || (*(char *)((long)piStack_80 + 1) != 'o')) ||
                 ((((*(char *)((long)piStack_80 + 2) != 'n' ||
                    ((*(char *)((long)piStack_80 + 3) != 't' || ((char)piStack_80[1] != 'e')))) ||
                   (*(char *)((long)piStack_80 + 5) != 'x')) ||
                  (*(char *)((long)piStack_80 + 6) != 't')))) goto LAB_101450e68;
              iVar12 = 1;
            }
            else if ((((lStack_78 == 5) && ((char)*piStack_80 == 't')) &&
                     (*(char *)((long)piStack_80 + 1) == 'o')) &&
                    (((*(char *)((long)piStack_80 + 2) == 'o' &&
                      (*(char *)((long)piStack_80 + 3) == 'l')) && ((char)piStack_80[1] == 's')))) {
              iVar12 = 0;
            }
            else {
LAB_101450e68:
              iVar12 = 2;
            }
joined_r0x000101450ea4:
            if (piStack_88 != (int *)0x0) {
              _free();
            }
          }
          if (iVar12 == 0) {
            if (pbVar19 == (byte *)0x8000000000000001) {
              func_0x000100f21ca8(&pbStack_310,&pbStack_280);
              if (pbStack_310 != (byte *)0x8000000000000001) {
                pbStack_320 = pbStack_308;
                pbStack_188 = pbStack_2f8;
                pbStack_190 = pbStack_300;
                pbStack_178 = pbStack_2e8;
                pbStack_180 = pbStack_2f0;
                pbStack_168 = pbStack_2d8;
                pbStack_170 = pbStack_2e0;
                pbStack_160 = pbStack_2d0;
                pbStack_330 = pbStack_310;
                pbVar19 = pbStack_310;
                goto LAB_10145104c;
              }
              pbStack_150 = pbStack_328;
              pbStack_1a0 = pbStack_330;
              pbStack_198 = pbStack_320;
              pbVar19 = (byte *)0x8000000000000001;
              pbStack_158 = pbVar20;
            }
            else {
              pbStack_150 = pbStack_328;
              pbStack_1a0 = pbStack_330;
              pbStack_198 = pbStack_320;
              uStack_90 = &UNK_108ca26d4;
              piStack_88 = (int *)0x5;
              pbStack_310 = (byte *)&uStack_90;
              pbStack_308 = &DAT_100c7b3a0;
              pbStack_158 = pbVar20;
              pbStack_308 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&pbStack_310);
            }
            goto LAB_1014512cc;
          }
          if (iVar12 == 1) {
            if (pbVar18 != (byte *)0x8000000000000001) {
              pbStack_150 = pbStack_328;
              pbStack_1a0 = pbStack_330;
              pbStack_198 = pbStack_320;
              uStack_90 = &UNK_108caea46;
              piStack_88 = (int *)0x7;
              pbStack_310 = (byte *)&uStack_90;
              pbStack_308 = &DAT_100c7b3a0;
              pbStack_158 = pbVar20;
              pbStack_308 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&pbStack_310);
              pbStack_310 = (byte *)0x8000000000000001;
              if (pbVar18 == (byte *)0x8000000000000000) goto LAB_10145134c;
              goto LAB_1014512f4;
            }
            func_0x000100f21ca8(&pbStack_310,&pbStack_280);
            if (pbStack_310 != (byte *)0x8000000000000001) {
              pbStack_328 = pbStack_308;
              pbStack_140 = pbStack_2f8;
              pbStack_148 = pbStack_300;
              pbStack_130 = pbStack_2e8;
              pbStack_138 = pbStack_2f0;
              pbStack_120 = pbStack_2d8;
              pbStack_128 = pbStack_2e0;
              pbStack_118 = pbStack_2d0;
              pbVar18 = pbStack_310;
              pbVar20 = pbStack_310;
              goto LAB_10145104c;
            }
            pbStack_1a0 = pbStack_330;
            pbStack_198 = pbStack_320;
            pbStack_310 = (byte *)0x8000000000000001;
            goto LAB_10145134c;
          }
          cVar2 = (char)pbStack_280;
          pbStack_280 = (byte *)CONCAT71(pbStack_280._1_7_,0x16);
          if (cVar2 == '\x16') {
            pbStack_150 = pbStack_328;
            pbStack_1a0 = pbStack_330;
            pbStack_198 = pbStack_320;
            pbStack_158 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x101451428);
            (*pcVar9)();
          }
          uVar22 = *puVar14;
          puVar10[1] = puVar14[1];
          *puVar10 = uVar22;
          uVar22 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar10 + 0xf) = uVar22;
          pbStack_310 = (byte *)CONCAT71(pbStack_310._1_7_,cVar2);
          FUN_100e077ec(&pbStack_310);
LAB_10145104c:
          pbVar16 = pbStack_248;
          if (pbStack_258 == pbStack_248) goto LAB_10145112c;
          pbVar11 = pbStack_258 + 0x40;
          bVar21 = *pbStack_258;
          pbVar16 = pbStack_258;
          pbStack_258 = pbVar11;
        } while (bVar21 != 0x16);
      }
      pbVar16 = pbVar16 + 0x40;
LAB_10145112c:
      pbStack_150 = pbStack_328;
      pbStack_198 = pbStack_320;
      pbVar20 = pbStack_320;
      pbVar11 = pbStack_190;
      pbVar3 = pbStack_178;
      pbVar4 = pbStack_170;
      pbVar5 = pbStack_188;
      pbVar6 = pbStack_180;
      pbVar7 = pbStack_168;
      pbVar8 = pbStack_160;
      if (pbVar19 == (byte *)0x8000000000000001) {
        pbVar19 = (byte *)0x8000000000000000;
        pbVar20 = pbStack_110;
        pbVar11 = pbStack_108;
        pbVar3 = pbStack_f0;
        pbVar4 = pbStack_e8;
        pbVar5 = pbStack_100;
        pbVar6 = pbStack_f8;
        pbVar7 = pbStack_e0;
        pbVar8 = pbStack_d8;
      }
      pbStack_d8 = pbVar8;
      pbStack_e0 = pbVar7;
      pbStack_f8 = pbVar6;
      pbStack_100 = pbVar5;
      pbStack_e8 = pbVar4;
      pbStack_f0 = pbVar3;
      pbStack_108 = pbVar11;
      pbStack_110 = pbVar20;
      if (pbVar18 == (byte *)0x8000000000000001) goto LAB_1014511a0;
      pbStack_c8 = pbStack_148;
      pbStack_d0 = pbStack_328;
      pbStack_b8 = pbStack_138;
      pbStack_c0 = pbStack_140;
      pbStack_a8 = pbStack_128;
      pbStack_b0 = pbStack_130;
      pbStack_98 = pbStack_118;
      pbStack_a0 = pbStack_120;
    }
    pbVar20 = pbStack_248;
    pbStack_2d0 = pbStack_d8;
    pbStack_2d8 = pbStack_e0;
    pbStack_300 = pbStack_108;
    pbStack_308 = pbStack_110;
    pbStack_2f0 = pbStack_f8;
    pbStack_2f8 = pbStack_100;
    pbStack_2e0 = pbStack_e8;
    pbStack_2e8 = pbStack_f0;
    pbStack_2b8 = pbStack_c8;
    pbStack_2c0 = pbStack_d0;
    pbStack_2a8 = pbStack_b8;
    pbStack_2b0 = pbStack_c0;
    pbStack_298 = pbStack_a8;
    pbStack_2a0 = pbStack_b0;
    pbStack_288 = pbStack_98;
    pbStack_290 = pbStack_a0;
    pbStack_208 = pbStack_f0;
    pbStack_210 = pbStack_f8;
    pbStack_1f8 = pbStack_e0;
    pbStack_200 = pbStack_e8;
    pbStack_228 = pbStack_110;
    pbStack_218 = pbStack_100;
    pbStack_220 = pbStack_108;
    pbStack_1b8 = pbStack_a8;
    pbStack_1c0 = pbStack_b0;
    pbStack_1a8 = pbStack_98;
    pbStack_1b0 = pbStack_a0;
    pbStack_1d8 = pbStack_c8;
    pbStack_1e0 = pbStack_d0;
    pbStack_1c8 = pbStack_b8;
    pbStack_1d0 = pbStack_c0;
    pbStack_1f0 = pbStack_d8;
    pbStack_310 = pbVar19;
    pbStack_2c8 = pbVar18;
    pbStack_230 = pbVar19;
    pbStack_1e8 = pbVar18;
    FUN_100d34830(&pbStack_260);
    if (pbVar20 == pbVar16) {
      pbVar16 = (byte *)0x0;
    }
    else {
      pbStack_158 = pbStack_240;
      pbVar16 = (byte *)FUN_1087e422c(pbStack_240 + ((ulong)((long)pbVar20 - (long)pbVar16) >> 6),
                                      &pbStack_158,&UNK_10b23a190);
    }
    if ((char)pbStack_280 != '\x16') {
      FUN_100e077ec(&pbStack_280);
    }
    if (pbVar16 != (byte *)0x0) {
      pbVar19 = (byte *)0x8000000000000001;
      pbStack_310 = (byte *)0x8000000000000001;
      pbStack_308 = pbVar16;
      FUN_100e1f86c(&pbStack_230);
    }
  }
LAB_10145123c:
  if ((bVar1 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (pbVar19 != (byte *)0x8000000000000001) {
    param_1[0xd] = pbStack_2a8;
    param_1[0xc] = pbStack_2b0;
    param_1[0xf] = pbStack_298;
    param_1[0xe] = pbStack_2a0;
    param_1[0x11] = pbStack_288;
    param_1[0x10] = pbStack_290;
    param_1[5] = pbStack_2e8;
    param_1[4] = pbStack_2f0;
    param_1[7] = pbStack_2d8;
    param_1[6] = pbStack_2e0;
    param_1[9] = pbStack_2c8;
    param_1[8] = pbStack_2d0;
    param_1[0xb] = pbStack_2b8;
    param_1[10] = pbStack_2c0;
    param_1[1] = pbStack_308;
    *param_1 = pbStack_310;
    param_1[3] = pbStack_2f8;
    param_1[2] = pbStack_300;
    return;
  }
LAB_101451260:
  *param_1 = 0x8000000000000002;
  param_1[1] = pbStack_308;
  return;
}

