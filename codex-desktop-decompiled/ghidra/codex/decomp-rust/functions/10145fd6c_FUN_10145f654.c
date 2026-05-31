
void FUN_10145f654(long *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *unaff_x27;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  ulong *puStack_80;
  long lStack_78;
  byte *pbVar10;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    puStack_200 = *(undefined8 **)(param_2 + 8);
    puStack_210 = *(undefined8 **)(param_2 + 0x10);
    puStack_1f8 = puStack_210 + *(long *)(param_2 + 0x18) * 4;
    pbStack_1f0 = (byte *)0x0;
    puStack_208 = puStack_210;
    FUN_100f2abac(&puStack_120,&puStack_210);
    puVar15 = puStack_120;
    if (puStack_120 == (undefined8 *)0x8000000000000002) {
LAB_10145fa88:
      puStack_120 = (undefined8 *)0x8000000000000001;
      lVar11 = ((ulong)((long)puStack_1f8 - (long)puStack_208) >> 5) + 1;
      puVar15 = puStack_208;
      while (lVar11 = lVar11 + -1, lVar11 != 0) {
        FUN_100e077ec(puVar15);
        puVar15 = puVar15 + 4;
      }
      if (puStack_200 != (undefined8 *)0x0) {
        _free(puStack_210);
      }
    }
    else {
      puStack_1b8 = puStack_108;
      puStack_1c0 = puStack_110;
      puStack_1a8 = puStack_f8;
      puStack_1b0 = puStack_100;
      puStack_198 = puStack_e8;
      puStack_1a0 = puStack_f0;
      puStack_190 = puStack_e0;
      if (puStack_120 == (undefined8 *)0x8000000000000001) {
        puStack_118 = (undefined8 *)FUN_1087e422c(0,&UNK_10b22e4c8,&UNK_10b20a590);
        goto LAB_10145fa88;
      }
      puStack_148 = puStack_f8;
      puStack_150 = puStack_100;
      puStack_138 = puStack_e8;
      puStack_140 = puStack_f0;
      puStack_130 = puStack_e0;
      puStack_168 = puStack_118;
      puStack_170 = puStack_120;
      puStack_158 = puStack_108;
      puStack_160 = puStack_110;
      puVar16 = (undefined8 *)FUN_100fbc738(&puStack_210);
      if (puVar16 == (undefined8 *)0x0) goto LAB_10145fcbc;
      puStack_120 = (undefined8 *)0x8000000000000001;
      puStack_118 = puVar16;
      if (puStack_170 != (undefined8 *)0x8000000000000000) {
        if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
          _free(puStack_158 + (-1 - (long)puStack_150));
        }
        func_0x000100cd7284(&puStack_170);
      }
    }
LAB_10145fcb8:
    puVar15 = (undefined8 *)0x8000000000000001;
  }
  else {
    if (bVar2 != 0x15) {
      puStack_118 = (undefined8 *)FUN_108855b04(param_2,&puStack_120,&UNK_10b20bf60);
      goto LAB_10145fce0;
    }
    uStack_1e0 = *(undefined8 *)(param_2 + 8);
    pbVar9 = *(byte **)(param_2 + 0x10);
    pbVar6 = pbVar9 + *(long *)(param_2 + 0x18) * 0x40;
    puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
    puStack_1d0 = (undefined8 *)0x0;
    puStack_170 = (undefined8 *)0x8000000000000001;
    pbStack_1f0 = pbVar9;
    pbStack_1d8 = pbVar6;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar15 = (undefined8 *)0x8000000000000000;
      pbStack_1e8 = pbVar9;
    }
    else {
      puVar14 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar12 = (undefined8 *)((ulong)&puStack_210 | 1);
      puVar13 = (undefined8 *)((ulong)&puStack_120 | 1);
      puVar15 = (undefined8 *)0x8000000000000001;
      puVar16 = (undefined8 *)0x8000000000000001;
      pbVar10 = pbVar9;
      pbVar17 = pbVar6;
      do {
        pbVar6 = pbVar17;
        pbVar9 = pbVar10 + 0x40;
        bVar1 = *pbVar10;
        pbStack_1e8 = pbVar9;
        if (bVar1 == 0x16) break;
        puStack_1d0 = (undefined8 *)((long)puStack_1d0 + 1);
        uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar1);
        uVar18 = *(undefined8 *)(pbVar10 + 1);
        uVar20 = *(undefined8 *)(pbVar10 + 0x18);
        uVar19 = *(undefined8 *)(pbVar10 + 0x10);
        puStack_118 = *(undefined8 **)(pbVar10 + 0x28);
        puStack_120 = *(undefined8 **)(pbVar10 + 0x20);
        puVar14[1] = *(undefined8 *)(pbVar10 + 9);
        *puVar14 = uVar18;
        *(undefined8 *)((long)puVar14 + 0x17) = uVar20;
        *(undefined8 *)((long)puVar14 + 0xf) = uVar19;
        puStack_108 = *(undefined8 **)(pbVar10 + 0x38);
        puStack_110 = *(undefined8 **)(pbVar10 + 0x30);
        if ((char)puStack_210 != '\x16') {
          FUN_100e077ec(&puStack_210);
        }
        puStack_208 = puStack_118;
        puStack_210 = puStack_120;
        puStack_1f8 = puStack_108;
        puStack_200 = puStack_110;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            bVar5 = uStack_90._1_1_ == '\0';
LAB_10145f9b8:
            bVar5 = !bVar5;
            goto LAB_10145f9c4;
          }
          if (bVar1 == 4) {
            bVar5 = plStack_88 == (long *)0x0;
            goto LAB_10145f9b8;
          }
          if (bVar1 == 0xc) {
            if (lStack_78 == 0xd) {
              uVar7 = *puStack_80;
              uVar8 = *(ulong *)((long)puStack_80 + 5) ^ 0x6567617373654d65;
              bVar5 = (uVar7 ^ 0x654d657461657263) != 0 || uVar8 != 0;
              if (plStack_88 == (long *)0x0) goto LAB_10145f9cc;
              _free();
              if ((uVar7 ^ 0x654d657461657263) == 0 && uVar8 == 0) goto LAB_10145fa14;
            }
            else if (plStack_88 != (long *)0x0) {
              _free();
            }
            goto LAB_10145f9d0;
          }
LAB_10145fdd4:
          puStack_170 = puVar16;
          puStack_168 = unaff_x27;
          puStack_118 = (undefined8 *)FUN_108855b04(&uStack_90,&puStack_120,&UNK_10b210480);
          puStack_120 = (undefined8 *)0x8000000000000001;
          if (puVar15 == (undefined8 *)0x8000000000000001) goto LAB_10145fc9c;
LAB_10145fd94:
          puStack_120 = (undefined8 *)0x8000000000000001;
          if (puVar15 != (undefined8 *)0x8000000000000000) {
            if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
              _free(puStack_158 + (-1 - (long)puStack_150));
            }
            func_0x000100cd7284(&puStack_170);
          }
LAB_10145fc9c:
          FUN_100d34830(&pbStack_1f0);
          if ((char)puStack_210 != '\x16') {
            FUN_100e077ec(&puStack_210);
          }
          goto LAB_10145fcb8;
        }
        if (bVar1 != 0xd) {
          if (bVar1 != 0xe) {
            if (bVar1 != 0xf) goto LAB_10145fdd4;
            if (((puStack_80 != (ulong *)0xd) || ((char)*plStack_88 != 'c')) ||
               ((((*(char *)((long)plStack_88 + 1) != 'r' ||
                  ((*(char *)((long)plStack_88 + 2) != 'e' ||
                   (*(char *)((long)plStack_88 + 3) != 'a')))) ||
                 (*(char *)((long)plStack_88 + 4) != 't')) ||
                (((*(char *)((long)plStack_88 + 5) != 'e' ||
                  (*(char *)((long)plStack_88 + 6) != 'M')) ||
                 (*(char *)((long)plStack_88 + 7) != 'e')))))) goto LAB_10145f9c0;
            bVar5 = true;
            if ((((char)plStack_88[1] == 's') && (*(char *)((long)plStack_88 + 9) == 's')) &&
               ((*(char *)((long)plStack_88 + 10) == 'a' &&
                (*(char *)((long)plStack_88 + 0xb) == 'g')))) {
              bVar5 = *(char *)((long)plStack_88 + 0xc) == 'e';
              goto LAB_10145f9b8;
            }
            goto LAB_10145f9c4;
          }
          if ((((((lStack_78 == 0xd) && ((char)*puStack_80 == 'c')) &&
                (*(char *)((long)puStack_80 + 1) == 'r')) &&
               ((*(char *)((long)puStack_80 + 2) == 'e' && (*(char *)((long)puStack_80 + 3) == 'a'))
               )) && (*(char *)((long)puStack_80 + 4) == 't')) &&
             (((*(char *)((long)puStack_80 + 5) == 'e' && (*(char *)((long)puStack_80 + 6) == 'M'))
              && (*(char *)((long)puStack_80 + 7) == 'e')))) {
            bVar5 = true;
            if (((((char)puStack_80[1] == 's') && (*(char *)((long)puStack_80 + 9) == 's')) &&
                (*(char *)((long)puStack_80 + 10) == 'a')) &&
               (*(char *)((long)puStack_80 + 0xb) == 'g')) {
              bVar5 = *(char *)((long)puStack_80 + 0xc) != 'e';
            }
          }
          else {
            bVar5 = true;
          }
          if (plStack_88 == (long *)0x0) goto LAB_10145f9cc;
          _free();
          if (bVar5) goto LAB_10145f9d0;
LAB_10145fa14:
          if (puVar15 != (undefined8 *)0x8000000000000001) {
            uStack_90 = &UNK_108cb9c42;
            plStack_88 = (long *)0xd;
            puStack_120 = &uStack_90;
            puStack_118 = (undefined8 *)&DAT_100c7b3a0;
            puStack_170 = puVar16;
            puStack_168 = unaff_x27;
            puStack_118 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&puStack_120);
            goto LAB_10145fd94;
          }
          func_0x000100f21ca8(&puStack_120,&puStack_210);
          if (puStack_120 != (undefined8 *)0x8000000000000001) {
            puStack_158 = puStack_108;
            puStack_160 = puStack_110;
            puStack_148 = puStack_f8;
            puStack_150 = puStack_100;
            puStack_138 = puStack_e8;
            puStack_140 = puStack_f0;
            puStack_130 = puStack_e0;
            pbVar9 = pbStack_1e8;
            puVar15 = puStack_120;
            puVar16 = puStack_120;
            pbVar17 = pbStack_1d8;
            unaff_x27 = puStack_118;
            goto LAB_10145f720;
          }
          puStack_120 = (undefined8 *)0x8000000000000001;
          goto LAB_10145fc9c;
        }
        if (puStack_80 == (ulong *)0xd) {
          bVar5 = false;
          if (*plStack_88 == 0x654d657461657263) {
            bVar5 = *(long *)((long)plStack_88 + 5) == 0x6567617373654d65;
          }
          goto LAB_10145f9b8;
        }
LAB_10145f9c0:
        bVar5 = true;
LAB_10145f9c4:
        FUN_100e077ec(&uStack_90);
LAB_10145f9cc:
        if (!bVar5) goto LAB_10145fa14;
LAB_10145f9d0:
        cVar3 = (char)puStack_210;
        puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
        if (cVar3 == '\x16') {
          puStack_170 = puVar16;
          puStack_168 = unaff_x27;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10145fd48);
          (*pcVar4)();
        }
        uVar18 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar18;
        uVar18 = *(undefined8 *)((long)puVar12 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar18;
        puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,cVar3);
        FUN_100e077ec(&puStack_120);
        pbVar17 = pbVar6;
LAB_10145f720:
        pbVar6 = pbVar9;
        pbVar10 = pbVar6;
        pbVar9 = pbVar6;
      } while (pbVar6 != pbVar17);
      puStack_168 = unaff_x27;
      if (puVar15 == (undefined8 *)0x8000000000000001) {
        puVar15 = (undefined8 *)0x8000000000000000;
      }
      else {
        puStack_c8 = puStack_160;
        puStack_b8 = puStack_150;
        puStack_c0 = puStack_158;
        puStack_a8 = puStack_140;
        puStack_b0 = puStack_148;
        puStack_98 = puStack_130;
        puStack_a0 = puStack_138;
        puStack_d0 = unaff_x27;
      }
    }
    puStack_e0 = puStack_98;
    puStack_e8 = puStack_a0;
    puStack_110 = puStack_c8;
    puStack_118 = puStack_d0;
    puStack_f0 = puStack_a8;
    puStack_f8 = puStack_b0;
    puStack_100 = puStack_b8;
    puStack_108 = puStack_c0;
    puStack_198 = puStack_b0;
    puStack_1a0 = puStack_b8;
    puStack_188 = puStack_a0;
    puStack_190 = puStack_a8;
    puStack_180 = puStack_98;
    puStack_1b8 = puStack_d0;
    puStack_1a8 = puStack_c0;
    puStack_1b0 = puStack_c8;
    puStack_1c0 = puVar15;
    puStack_120 = puVar15;
    FUN_100d34830(&pbStack_1f0);
    if (pbVar6 == pbVar9) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      puStack_170 = puStack_1d0;
      puVar16 = (undefined8 *)
                FUN_1087e422c((long)puStack_1d0 + ((ulong)((long)pbVar6 - (long)pbVar9) >> 6),
                              &puStack_170,&UNK_10b23a190);
    }
    if ((char)puStack_210 != '\x16') {
      FUN_100e077ec(&puStack_210);
    }
    if (puVar16 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x8000000000000001;
      puStack_120 = (undefined8 *)0x8000000000000001;
      puStack_118 = puVar16;
      if (puStack_1c0 != (undefined8 *)0x8000000000000000) {
        if ((puStack_1a0 != (undefined8 *)0x0) && ((long)puStack_1a0 * 9 != -0x11)) {
          _free(puStack_1a8 + (-1 - (long)puStack_1a0));
        }
        func_0x000100cd7284(&puStack_1c0);
      }
    }
  }
LAB_10145fcbc:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (puVar15 != (undefined8 *)0x8000000000000001) {
    param_1[5] = (long)puStack_f8;
    param_1[4] = (long)puStack_100;
    param_1[7] = (long)puStack_e8;
    param_1[6] = (long)puStack_f0;
    param_1[8] = (long)puStack_e0;
    param_1[1] = (long)puStack_118;
    *param_1 = (long)puStack_120;
    param_1[3] = (long)puStack_108;
    param_1[2] = (long)puStack_110;
    return;
  }
LAB_10145fce0:
  *param_1 = -0x7ffffffffffffffe;
  param_1[1] = (long)puStack_118;
  return;
}

