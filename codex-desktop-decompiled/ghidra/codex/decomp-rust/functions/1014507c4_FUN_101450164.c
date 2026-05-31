
void FUN_101450164(long *param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
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
  int *piStack_88;
  uint *puStack_80;
  long lStack_78;
  byte *pbVar17;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    puStack_200 = *(undefined8 **)(param_2 + 8);
    puStack_210 = *(undefined8 **)(param_2 + 0x10);
    puStack_1f8 = puStack_210 + *(long *)(param_2 + 0x18) * 4;
    pbStack_1f0 = (byte *)0x0;
    puStack_208 = puStack_210;
    FUN_100f2abac(&puStack_120,&puStack_210);
    puVar13 = puStack_120;
    if (puStack_120 != (undefined8 *)0x8000000000000002) {
      puStack_1b8 = puStack_108;
      puStack_1c0 = puStack_110;
      puStack_1a8 = puStack_f8;
      puStack_1b0 = puStack_100;
      puStack_198 = puStack_e8;
      puStack_1a0 = puStack_f0;
      puStack_190 = puStack_e0;
      if (puStack_120 != (undefined8 *)0x8000000000000001) {
        puStack_148 = puStack_f8;
        puStack_150 = puStack_100;
        puStack_138 = puStack_e8;
        puStack_140 = puStack_f0;
        puStack_130 = puStack_e0;
        puStack_168 = puStack_118;
        puStack_170 = puStack_120;
        puStack_158 = puStack_108;
        puStack_160 = puStack_110;
        puVar14 = (undefined8 *)FUN_100fbc738(&puStack_210);
        if (puVar14 != (undefined8 *)0x0) {
          puStack_120 = (undefined8 *)0x8000000000000001;
          puStack_118 = puVar14;
          if (puStack_170 != (undefined8 *)0x8000000000000000) {
            if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
              _free(puStack_158 + (-1 - (long)puStack_150));
            }
            func_0x000100cd7284(&puStack_170);
          }
LAB_101450768:
          puVar13 = (undefined8 *)0x8000000000000001;
        }
        goto joined_r0x000101450778;
      }
      puStack_118 = (undefined8 *)FUN_1087e422c(0,&UNK_10b22e778,&UNK_10b20a590);
    }
    puStack_120 = (undefined8 *)0x8000000000000001;
    lVar10 = ((ulong)((long)puStack_1f8 - (long)puStack_208) >> 5) + 1;
    puVar13 = puStack_208;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_100e077ec(puVar13);
      puVar13 = puVar13 + 4;
    }
    if (puStack_200 != (undefined8 *)0x0) {
      _free(puStack_210);
    }
    puVar13 = (undefined8 *)0x8000000000000001;
  }
  else {
    if (bVar4 != 0x15) {
      puStack_118 = (undefined8 *)FUN_108855b04(param_2,&puStack_120,&UNK_10b20b380);
      goto LAB_1014506f4;
    }
    uStack_1e0 = *(undefined8 *)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    pbVar8 = pbVar16 + *(long *)(param_2 + 0x18) * 0x40;
    puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
    puStack_1d0 = (undefined8 *)0x0;
    puStack_170 = (undefined8 *)0x8000000000000001;
    pbStack_1f0 = pbVar16;
    pbStack_1d8 = pbVar8;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar13 = (undefined8 *)0x8000000000000000;
      pbStack_1e8 = pbVar16;
    }
    else {
      puVar12 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar11 = (undefined8 *)((ulong)&puStack_210 | 1);
      puVar9 = (undefined8 *)((ulong)&puStack_120 | 1);
      puVar13 = (undefined8 *)0x8000000000000001;
      puVar14 = (undefined8 *)0x8000000000000001;
      pbVar15 = pbVar8;
      pbVar17 = pbVar16;
      do {
        pbVar8 = pbVar15;
        pbVar16 = pbVar17 + 0x40;
        bVar3 = *pbVar17;
        pbStack_1e8 = pbVar16;
        if (bVar3 == 0x16) break;
        puStack_1d0 = (undefined8 *)((long)puStack_1d0 + 1);
        uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar3);
        uVar18 = *(undefined8 *)(pbVar17 + 1);
        uVar20 = *(undefined8 *)(pbVar17 + 0x18);
        uVar19 = *(undefined8 *)(pbVar17 + 0x10);
        puStack_118 = *(undefined8 **)(pbVar17 + 0x28);
        puStack_120 = *(undefined8 **)(pbVar17 + 0x20);
        puVar12[1] = *(undefined8 *)(pbVar17 + 9);
        *puVar12 = uVar18;
        *(undefined8 *)((long)puVar12 + 0x17) = uVar20;
        *(undefined8 *)((long)puVar12 + 0xf) = uVar19;
        puStack_108 = *(undefined8 **)(pbVar17 + 0x38);
        puStack_110 = *(undefined8 **)(pbVar17 + 0x30);
        if ((char)puStack_210 != '\x16') {
          FUN_100e077ec(&puStack_210);
        }
        puStack_208 = puStack_118;
        puStack_210 = puStack_120;
        puStack_1f8 = puStack_108;
        puStack_200 = puStack_110;
        if (0xc < bVar3) {
          if (bVar3 == 0xd) {
            if (puStack_80 == (uint *)0x6) {
              bVar7 = false;
              if (*piStack_88 == 0x61657263) {
                bVar7 = (short)piStack_88[1] == 0x6574;
              }
              goto LAB_1014503f0;
            }
LAB_1014503f8:
            bVar7 = true;
            goto LAB_1014503fc;
          }
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_10145082c;
            if (((((puStack_80 != (uint *)0x6) || ((char)*piStack_88 != 'c')) ||
                 (*(char *)((long)piStack_88 + 1) != 'r')) ||
                ((*(char *)((long)piStack_88 + 2) != 'e' || (*(char *)((long)piStack_88 + 3) != 'a')
                 ))) || ((char)piStack_88[1] != 't')) goto LAB_1014503f8;
            bVar7 = *(char *)((long)piStack_88 + 5) == 'e';
            goto LAB_1014503f0;
          }
          if (((lStack_78 == 6) && ((char)*puStack_80 == 'c')) &&
             ((*(char *)((long)puStack_80 + 1) == 'r' &&
              (((*(char *)((long)puStack_80 + 2) == 'e' && (*(char *)((long)puStack_80 + 3) == 'a'))
               && ((char)puStack_80[1] == 't')))))) {
            bVar7 = *(char *)((long)puStack_80 + 5) != 'e';
          }
          else {
            bVar7 = true;
          }
          if (piStack_88 == (int *)0x0) goto LAB_101450404;
          _free();
          if (bVar7) goto LAB_101450408;
LAB_10145044c:
          if (puVar13 == (undefined8 *)0x8000000000000001) {
            func_0x000100f21ca8(&puStack_120,&puStack_210);
            if (puStack_120 != (undefined8 *)0x8000000000000001) {
              puStack_158 = puStack_108;
              puStack_160 = puStack_110;
              puStack_148 = puStack_f8;
              puStack_150 = puStack_100;
              puStack_138 = puStack_e8;
              puStack_140 = puStack_f0;
              puStack_130 = puStack_e0;
              puVar13 = puStack_120;
              puVar14 = puStack_120;
              pbVar15 = pbStack_1d8;
              pbVar8 = pbStack_1e8;
              unaff_x27 = puStack_118;
              goto LAB_101450230;
            }
            puStack_120 = (undefined8 *)0x8000000000000001;
          }
          else {
            uStack_90 = &UNK_108cba47a;
            piStack_88 = (int *)0x6;
            puStack_120 = &uStack_90;
            puStack_118 = (undefined8 *)&DAT_100c7b3a0;
            puStack_170 = puVar14;
            puStack_168 = unaff_x27;
            puStack_118 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&puStack_120);
LAB_1014507ec:
            puStack_120 = (undefined8 *)0x8000000000000001;
            if (puVar13 != (undefined8 *)0x8000000000000000) {
              if ((puStack_150 != (undefined8 *)0x0) && ((long)puStack_150 * 9 != -0x11)) {
                _free(puStack_158 + (-1 - (long)puStack_150));
              }
              func_0x000100cd7284(&puStack_170);
            }
          }
LAB_10145074c:
          FUN_100d34830(&pbStack_1f0);
          if ((char)puStack_210 != '\x16') {
            FUN_100e077ec(&puStack_210);
          }
          goto LAB_101450768;
        }
        if (bVar3 != 1) {
          if (bVar3 == 4) {
            bVar7 = piStack_88 == (int *)0x0;
            goto LAB_1014503f0;
          }
          if (bVar3 == 0xc) {
            if (lStack_78 == 6) {
              uVar2 = *puStack_80;
              uVar1 = (ushort)puStack_80[1] ^ 0x6574;
              bVar7 = (uVar2 ^ 0x61657263) != 0 || uVar1 != 0;
              if (piStack_88 == (int *)0x0) goto LAB_101450404;
              _free();
              if ((uVar2 ^ 0x61657263) == 0 && uVar1 == 0) goto LAB_10145044c;
            }
            else if (piStack_88 != (int *)0x0) {
              _free();
            }
            goto LAB_101450408;
          }
LAB_10145082c:
          puStack_170 = puVar14;
          puStack_168 = unaff_x27;
          puStack_118 = (undefined8 *)FUN_108855b04(&uStack_90,&puStack_120,&UNK_10b20ebe0);
          puStack_120 = (undefined8 *)0x8000000000000001;
          if (puVar13 == (undefined8 *)0x8000000000000001) goto LAB_10145074c;
          goto LAB_1014507ec;
        }
        bVar7 = uStack_90._1_1_ == '\0';
LAB_1014503f0:
        bVar7 = !bVar7;
LAB_1014503fc:
        FUN_100e077ec(&uStack_90);
LAB_101450404:
        if (!bVar7) goto LAB_10145044c;
LAB_101450408:
        cVar5 = (char)puStack_210;
        puStack_210 = (undefined8 *)CONCAT71(puStack_210._1_7_,0x16);
        if (cVar5 == '\x16') {
          puStack_170 = puVar14;
          puStack_168 = unaff_x27;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1014507a0);
          (*pcVar6)();
        }
        uVar18 = *puVar11;
        puVar9[1] = puVar11[1];
        *puVar9 = uVar18;
        uVar18 = *(undefined8 *)((long)puVar11 + 0xf);
        *(undefined8 *)((long)puVar9 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
        *(undefined8 *)((long)puVar9 + 0xf) = uVar18;
        puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,cVar5);
        FUN_100e077ec(&puStack_120);
        pbVar15 = pbVar8;
        pbVar8 = pbVar16;
LAB_101450230:
        pbVar17 = pbVar8;
        pbVar16 = pbVar8;
      } while (pbVar8 != pbVar15);
      puStack_168 = unaff_x27;
      if (puVar13 == (undefined8 *)0x8000000000000001) {
        puVar13 = (undefined8 *)0x8000000000000000;
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
    puStack_1c0 = puVar13;
    puStack_120 = puVar13;
    FUN_100d34830(&pbStack_1f0);
    if (pbVar8 == pbVar16) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puStack_170 = puStack_1d0;
      puVar14 = (undefined8 *)
                FUN_1087e422c((long)puStack_1d0 + ((ulong)((long)pbVar8 - (long)pbVar16) >> 6),
                              &puStack_170,&UNK_10b23a190);
    }
    if ((char)puStack_210 != '\x16') {
      FUN_100e077ec(&puStack_210);
    }
    if (puVar14 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x8000000000000001;
      puStack_120 = (undefined8 *)0x8000000000000001;
      puStack_118 = puVar14;
      if (puStack_1c0 != (undefined8 *)0x8000000000000000) {
        if ((puStack_1a0 != (undefined8 *)0x0) && ((long)puStack_1a0 * 9 != -0x11)) {
          _free(puStack_1a8 + (-1 - (long)puStack_1a0));
        }
        func_0x000100cd7284(&puStack_1c0);
      }
    }
joined_r0x000101450778:
    if ((bVar4 & 0x1e) != 0x14) {
      FUN_100e077ec(param_2);
    }
  }
  if (puVar13 != (undefined8 *)0x8000000000000001) {
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
LAB_1014506f4:
  *param_1 = -0x7ffffffffffffffe;
  param_1[1] = (long)puStack_118;
  return;
}

