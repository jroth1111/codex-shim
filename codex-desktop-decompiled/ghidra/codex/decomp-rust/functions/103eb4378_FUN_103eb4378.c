
/* WARNING: Type propagation algorithm not settling */

void FUN_103eb4378(undefined8 *param_1,char *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong *unaff_x26;
  ulong uVar26;
  ulong *puVar27;
  undefined8 uVar28;
  ulong uVar29;
  long *plStack_278;
  ulong *puStack_270;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_248;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  long lStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined *puStack_1e0;
  ulong *puStack_1d8;
  long *plStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  undefined *puStack_198;
  ulong *puStack_190;
  long *plStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  byte abStack_150 [8];
  ulong *puStack_148;
  ulong *puStack_140;
  long lStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  
  if (*param_2 == '\x14') {
    puVar1 = *(ulong **)(param_2 + 8);
    puVar2 = *(ulong **)(param_2 + 0x10);
    puVar12 = *(ulong **)(param_2 + 0x18);
    puVar10 = puVar2 + (long)puVar12 * 4;
    lStack_200 = 0;
    puVar20 = puVar12;
    if ((ulong *)0x38e2 < puVar12) {
      puVar20 = (ulong *)0x38e3;
    }
    puStack_220 = puVar2;
    puStack_218 = puVar2;
    puStack_210 = puVar1;
    puStack_208 = puVar10;
    if (puVar12 == (ulong *)0x0) {
      puStack_1f8 = (ulong *)0x0;
      puStack_1f0 = (ulong *)0x8;
      puStack_1e8 = (ulong *)0x0;
      puVar20 = puVar2;
    }
    else {
      puVar12 = (ulong *)_malloc((long)puVar20 * 0x48);
      if (puVar12 == (ulong *)0x0) {
        func_0x0001087c9084(8,(long)puVar20 * 0x48);
LAB_103eb558c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x103eb5590);
        (*pcVar7)();
      }
      lVar17 = 0;
      puVar13 = (undefined8 *)((ulong)abStack_150 | 1);
      puStack_1e8 = (ulong *)0x0;
      puVar22 = (undefined8 *)((ulong)&uStack_b0 | 1);
      puVar16 = (undefined8 *)((ulong)&puStack_130 | 1);
      puVar14 = (undefined8 *)((ulong)&puStack_90 | 1);
      puVar24 = puVar2;
      puStack_1f8 = puVar20;
      puStack_1f0 = puVar12;
      do {
        puVar12 = puVar24 + 4;
        bVar3 = (byte)*puVar24;
        puVar20 = puVar12;
        puStack_218 = puVar12;
        if (bVar3 == 0x16) break;
        uVar28 = *(undefined8 *)((long)puVar24 + 1);
        puVar13[1] = *(undefined8 *)((long)puVar24 + 9);
        *puVar13 = uVar28;
        uVar25 = puVar24[2];
        *(ulong *)((long)puVar13 + 0x17) = puVar24[3];
        *(ulong *)((long)puVar13 + 0xf) = uVar25;
        lVar17 = lVar17 + 1;
        lStack_200 = lVar17;
        abStack_150[0] = bVar3;
        if (bVar3 != 0x14) {
          if (bVar3 == 0x15) {
            puVar20 = puStack_140 + lStack_138 * 8;
            puStack_110 = puStack_140;
            puStack_108 = puStack_140;
            puStack_100 = puStack_148;
            puStack_130 = (ulong *)CONCAT71(puStack_130._1_7_,0x16);
            puStack_f0 = (ulong *)0x0;
            puStack_e0 = (ulong *)0x8000000000000001;
            puStack_f8 = puVar20;
            if (lStack_138 == 0) {
              puVar27 = (ulong *)0x8000000000000001;
              puStack_e0 = (ulong *)0x8000000000000001;
              puVar24 = (ulong *)0x8000000000000001;
            }
            else {
              puVar21 = (undefined *)0x8000000000000000;
              puVar27 = (ulong *)0x8000000000000001;
              puVar24 = (ulong *)0x8000000000000001;
              puVar18 = (ulong *)0x8000000000000001;
              puVar23 = puStack_140;
              do {
                puVar8 = puVar23 + 8;
                bVar4 = (byte)*puVar23;
                puVar15 = puVar20;
                puStack_108 = puVar8;
                if (bVar4 == 0x16) break;
                puStack_f0 = (ulong *)((long)puStack_f0 + 1);
                uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar4);
                uVar28 = *(undefined8 *)((long)puVar23 + 1);
                uVar29 = puVar23[3];
                uVar25 = puVar23[2];
                puStack_88 = (ulong *)puVar23[5];
                puStack_90 = (ulong *)puVar23[4];
                puVar22[1] = *(undefined8 *)((long)puVar23 + 9);
                *puVar22 = uVar28;
                *(ulong *)((long)puVar22 + 0x17) = uVar29;
                *(ulong *)((long)puVar22 + 0xf) = uVar25;
                puStack_78 = (ulong *)puVar23[7];
                puStack_80 = (ulong *)puVar23[6];
                if ((char)puStack_130 != '\x16') {
                  func_0x000103db23f4(&puStack_130);
                }
                puStack_128 = puStack_88;
                puStack_130 = puStack_90;
                puStack_118 = puStack_78;
                puStack_120 = puStack_80;
                if (bVar4 < 0xd) {
                  if (bVar4 == 1) {
                    uVar11 = (uint)uStack_b0._1_1_;
                    if (2 < uVar11) {
                      uVar11 = 3;
                    }
                  }
                  else {
                    if (bVar4 != 4) {
                      if (bVar4 == 0xc) {
                        if (lStack_98 == 8) {
                          if (*plStack_a0 != 0x65707954656d696d) goto LAB_103eb48d4;
                          uVar11 = 1;
                        }
                        else if (lStack_98 == 5) {
                          if ((int)*plStack_a0 != 0x657a6973 ||
                              *(char *)((long)plStack_a0 + 4) != 's') goto LAB_103eb48d4;
                          uVar11 = 2;
                        }
                        else if ((lStack_98 == 3) &&
                                ((short)*plStack_a0 == 0x7273 &&
                                 *(char *)((long)plStack_a0 + 2) == 'c')) {
                          uVar11 = 0;
                        }
                        else {
LAB_103eb48d4:
                          uVar11 = 3;
                        }
                        goto joined_r0x000103eb4b54;
                      }
LAB_103eb51f0:
                      puStack_d8 = puStack_248;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      puStack_190 = (ulong *)func_0x00010897c8c4(&uStack_b0,&puStack_90,
                                                                 &UNK_10b2f7688);
                      goto joined_r0x000103eb4e28;
                    }
                    puVar23 = puStack_a8;
                    if ((ulong *)0x2 < puStack_a8) {
                      puVar23 = (ulong *)0x3;
                    }
                    uVar11 = (uint)puVar23;
                  }
LAB_103eb4990:
                  func_0x000103db23f4(&uStack_b0);
                }
                else {
                  if (bVar4 == 0xd) {
                    if (plStack_a0 == (long *)0x8) {
                      if (*puStack_a8 != 0x65707954656d696d) goto LAB_103eb498c;
LAB_103eb4b48:
                      uVar11 = 1;
                    }
                    else if (plStack_a0 == (long *)0x5) {
                      if ((int)*puStack_a8 != 0x657a6973 || *(byte *)((long)puStack_a8 + 4) != 0x73)
                      goto LAB_103eb498c;
LAB_103eb4968:
                      uVar11 = 2;
                    }
                    else if ((plStack_a0 == (long *)0x3) &&
                            ((short)*puStack_a8 == 0x7273 && *(byte *)((long)puStack_a8 + 2) == 99))
                    {
LAB_103eb478c:
                      uVar11 = 0;
                    }
                    else {
LAB_103eb498c:
                      uVar11 = 3;
                    }
                    goto LAB_103eb4990;
                  }
                  if (bVar4 != 0xe) {
                    if (bVar4 != 0xf) goto LAB_103eb51f0;
                    if (plStack_a0 == (long *)0x8) {
                      if ((((((byte)*puStack_a8 == 0x6d) &&
                            (*(byte *)((long)puStack_a8 + 1) == 0x69)) &&
                           (*(byte *)((long)puStack_a8 + 2) == 0x6d)) &&
                          ((*(byte *)((long)puStack_a8 + 3) == 0x65 &&
                           (*(byte *)((long)puStack_a8 + 4) == 0x54)))) &&
                         ((*(byte *)((long)puStack_a8 + 5) == 0x79 &&
                          ((*(byte *)((long)puStack_a8 + 6) == 0x70 &&
                           (*(byte *)((long)puStack_a8 + 7) == 0x65)))))) goto LAB_103eb4b48;
                    }
                    else if (plStack_a0 == (long *)0x5) {
                      if (((((byte)*puStack_a8 == 0x73) && (*(byte *)((long)puStack_a8 + 1) == 0x69)
                           ) && (*(byte *)((long)puStack_a8 + 2) == 0x7a)) &&
                         ((*(byte *)((long)puStack_a8 + 3) == 0x65 &&
                          (*(byte *)((long)puStack_a8 + 4) == 0x73)))) goto LAB_103eb4968;
                    }
                    else if (((plStack_a0 == (long *)0x3) && ((byte)*puStack_a8 == 0x73)) &&
                            ((*(byte *)((long)puStack_a8 + 1) == 0x72 &&
                             (*(byte *)((long)puStack_a8 + 2) == 99)))) goto LAB_103eb478c;
                    goto LAB_103eb498c;
                  }
                  if (lStack_98 == 8) {
                    if (((((char)*plStack_a0 != 'm') || (*(char *)((long)plStack_a0 + 1) != 'i')) ||
                        (*(char *)((long)plStack_a0 + 2) != 'm')) ||
                       (((*(char *)((long)plStack_a0 + 3) != 'e' ||
                         (*(char *)((long)plStack_a0 + 4) != 'T')) ||
                        ((*(char *)((long)plStack_a0 + 5) != 'y' ||
                         ((*(char *)((long)plStack_a0 + 6) != 'p' ||
                          (*(char *)((long)plStack_a0 + 7) != 'e')))))))) goto LAB_103eb48ac;
                    uVar11 = 1;
                  }
                  else if (lStack_98 == 5) {
                    if (((((char)*plStack_a0 != 's') || (*(char *)((long)plStack_a0 + 1) != 'i')) ||
                        (*(char *)((long)plStack_a0 + 2) != 'z')) ||
                       ((*(char *)((long)plStack_a0 + 3) != 'e' ||
                        (*(char *)((long)plStack_a0 + 4) != 's')))) goto LAB_103eb48ac;
                    uVar11 = 2;
                  }
                  else if (((lStack_98 == 3) && ((char)*plStack_a0 == 's')) &&
                          ((*(char *)((long)plStack_a0 + 1) == 'r' &&
                           (*(char *)((long)plStack_a0 + 2) == 'c')))) {
                    uVar11 = 0;
                  }
                  else {
LAB_103eb48ac:
                    uVar11 = 3;
                  }
joined_r0x000103eb4b54:
                  if (puStack_a8 != (ulong *)0x0) {
                    _free();
                  }
                }
                puVar23 = puStack_a8;
                uVar11 = uVar11 & 0xff;
                cVar5 = (char)puStack_130;
                puVar15 = unaff_x26;
                if (uVar11 < 2) {
                  if (uVar11 == 0) {
                    if (puVar21 != (undefined *)0x8000000000000000) {
                      puStack_d8 = puStack_248;
                      uStack_b0 = &UNK_108dc1882;
                      puStack_a8 = (ulong *)0x3;
                      puStack_90 = &uStack_b0;
                      puStack_88 = (ulong *)&DAT_103d8be04;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      puStack_190 = (ulong *)func_0x00010897ca94(s_duplicate_field_____108ac2973,
                                                                 &puStack_90);
                      goto joined_r0x000103eb4e28;
                    }
                    puStack_130 = (ulong *)CONCAT71(puStack_130._1_7_,0x16);
                    if (cVar5 == '\x16') {
                      puStack_d8 = puStack_248;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      func_0x000108a079f0(&UNK_108dc11c5,0x2c,&UNK_10b3004a0);
                      goto LAB_103eb558c;
                    }
                    uVar28 = *puVar16;
                    puVar14[1] = puVar16[1];
                    *puVar14 = uVar28;
                    uVar28 = *(undefined8 *)((long)puVar16 + 0xf);
                    *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                    *(undefined8 *)((long)puVar14 + 0xf) = uVar28;
                    puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,cVar5);
                    FUN_103d20208(&uStack_b0,&puStack_90);
                    if (uStack_b0 == (undefined *)0x8000000000000000) {
                      puVar21 = (undefined *)0x0;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      puStack_190 = puStack_a8;
                      puStack_d8 = puStack_248;
                      goto joined_r0x000103eb4e28;
                    }
                    puStack_258 = puStack_a8;
                    plStack_278 = plStack_a0;
                    puVar21 = uStack_b0;
                  }
                  else {
                    if (puVar24 != (ulong *)0x8000000000000001) {
                      puStack_d8 = puStack_248;
                      uStack_b0 = &UNK_108c98350;
                      puStack_a8 = (ulong *)0x8;
                      puStack_90 = &uStack_b0;
                      puStack_88 = (ulong *)&DAT_103d8be04;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      puStack_190 = (ulong *)func_0x00010897ca94(s_duplicate_field_____108ac2973,
                                                                 &puStack_90);
                      goto joined_r0x000103eb4e28;
                    }
                    func_0x000103e2e828(&puStack_90,&puStack_130);
                    if (puStack_90 == (ulong *)0x8000000000000001) {
                      puVar24 = (ulong *)0x8000000000000001;
                      puStack_e0 = puVar18;
                      puStack_d0 = unaff_x26;
                      puStack_190 = puStack_88;
                      puStack_d8 = puStack_248;
                      goto joined_r0x000103eb4e28;
                    }
                    puStack_260 = puStack_88;
                    puStack_270 = puStack_80;
                    puVar20 = puStack_f8;
                    puVar8 = puStack_108;
                    puVar24 = puStack_90;
                  }
                }
                else if (uVar11 == 2) {
                  puVar9 = unaff_x26;
                  if (puVar27 != (ulong *)0x8000000000000001) {
                    puStack_d8 = puStack_248;
                    uStack_b0 = &UNK_108dc1885;
                    puStack_a8 = (ulong *)0x5;
                    puStack_90 = &uStack_b0;
                    puStack_88 = (ulong *)&DAT_103d8be04;
                    puStack_e0 = puVar18;
                    puStack_d0 = unaff_x26;
                    puStack_190 = (ulong *)func_0x00010897ca94(s_duplicate_field_____108ac2973,
                                                               &puStack_90);
                    puStack_198 = (undefined *)0x8000000000000000;
                    puVar20 = puStack_190;
                    if (puVar27 == (ulong *)0x8000000000000000) goto joined_r0x000103eb4f60;
                    goto LAB_103eb4c6c;
                  }
                  puStack_130 = (ulong *)CONCAT71(puStack_130._1_7_,0x16);
                  if (cVar5 == '\x16') {
                    puStack_d8 = puStack_248;
                    puStack_e0 = puVar18;
                    puStack_d0 = unaff_x26;
                    func_0x000108a079f0(&UNK_108dc11c5,0x2c,&UNK_10b3004a0);
                    goto LAB_103eb558c;
                  }
                  uVar28 = *puVar16;
                  puVar22[1] = puVar16[1];
                  *puVar22 = uVar28;
                  uVar28 = *(undefined8 *)((long)puVar16 + 0xf);
                  *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                  *(undefined8 *)((long)puVar22 + 0xf) = uVar28;
                  uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,cVar5);
                  if (cVar5 == '\x10') {
LAB_103eb4a68:
                    puStack_c8 = (ulong *)0x8000000000000000;
                    func_0x000103db23f4(&uStack_b0);
                    puVar18 = (ulong *)0x8000000000000000;
                    puVar15 = puStack_b8;
                    puVar27 = puVar18;
                    puStack_248 = puStack_c0;
                  }
                  else {
                    if (cVar5 == '\x11') {
                      puStack_88 = (ulong *)puStack_a8[1];
                      puStack_90 = (ulong *)*puStack_a8;
                      puStack_78 = (ulong *)puStack_a8[3];
                      puStack_80 = (ulong *)puStack_a8[2];
                      func_0x000103ebb410(&puStack_c8,&puStack_90);
                      _free(puVar23);
                      puVar18 = puStack_c8;
                      puStack_248 = puStack_c0;
                      puVar15 = puStack_b8;
                    }
                    else {
                      if (cVar5 == '\x12') goto LAB_103eb4a68;
                      func_0x000103ebb410(&puStack_c8,&uStack_b0);
                      puVar18 = puStack_c8;
                      puStack_248 = puStack_c0;
                      puVar15 = puStack_b8;
                    }
                    puVar27 = puVar18;
                    puStack_c8 = puVar18;
                    puStack_c0 = puStack_248;
                    puStack_b8 = puVar15;
                    if (puVar18 == (ulong *)0x8000000000000001) {
                      puStack_198 = (undefined *)0x8000000000000000;
                      puVar20 = puStack_248;
                      puStack_190 = puStack_248;
                      goto joined_r0x000103eb4f60;
                    }
                  }
                }
                else {
                  puStack_130 = (ulong *)CONCAT71(puStack_130._1_7_,0x16);
                  if (cVar5 == '\x16') {
                    puStack_d8 = puStack_248;
                    puStack_e0 = puVar18;
                    puStack_d0 = unaff_x26;
                    func_0x000108a079f0(&UNK_108dc11c5,0x2c,&UNK_10b3004a0);
                    goto LAB_103eb558c;
                  }
                  uVar28 = *puVar16;
                  puVar14[1] = puVar16[1];
                  *puVar14 = uVar28;
                  uVar28 = *(undefined8 *)((long)puVar16 + 0xf);
                  *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                  *(undefined8 *)((long)puVar14 + 0xf) = uVar28;
                  puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,cVar5);
                  func_0x000103db23f4(&puStack_90);
                }
                puVar23 = puVar8;
                unaff_x26 = puVar15;
                puVar15 = puVar8;
              } while (puVar8 != puVar20);
              puStack_d8 = puStack_248;
              puStack_e0 = puVar18;
              puStack_d0 = unaff_x26;
              if (puVar21 != (undefined *)0x8000000000000000) {
                puVar18 = (ulong *)0x8000000000000000;
                if (puVar24 != (ulong *)0x8000000000000001) {
                  puVar18 = puVar24;
                }
                puStack_190 = puStack_258;
                puVar24 = (ulong *)0x8000000000000000;
                if (puVar27 != (ulong *)0x8000000000000001) {
                  puVar24 = puVar27;
                }
                plStack_188 = plStack_278;
                puStack_178 = puStack_260;
                puStack_170 = puStack_270;
                puStack_160 = puStack_248;
                puStack_198 = puVar21;
                puStack_180 = puVar18;
                puStack_168 = puVar24;
                puStack_158 = unaff_x26;
                FUN_103d988cc(&puStack_110);
                if (puVar15 == puVar8) {
                  puVar27 = (ulong *)0x0;
                }
                else {
                  puStack_90 = puStack_f0;
                  puVar27 = (ulong *)func_0x000108978e3c((byte *)((long)puStack_f0 +
                                                                 ((ulong)((long)puVar15 -
                                                                         (long)puVar8) >> 6)),
                                                         &puStack_90,&UNK_10b2fb940);
                }
                if ((char)puStack_130 != '\x16') {
                  func_0x000103db23f4(&puStack_130);
                }
                puVar20 = puStack_258;
                if (puVar27 != (ulong *)0x0) {
                  puStack_198 = (undefined *)0x8000000000000000;
                  puStack_190 = puVar27;
                  if (puVar21 != (undefined *)0x0) {
                    _free(puStack_258);
                  }
                  if (((ulong)puVar18 & 0x7fffffffffffffff) != 0) {
                    _free(puStack_260);
                  }
                  puVar20 = puVar27;
                  if (puVar24 == (ulong *)0x8000000000000000) {
                    puVar21 = (undefined *)0x8000000000000000;
                  }
                  else {
                    if (unaff_x26 != (ulong *)0x0) {
                      puVar27 = puStack_248 + 1;
                      do {
                        if (puVar27[-1] != 0) {
                          _free(*puVar27);
                        }
                        puVar27 = puVar27 + 3;
                        unaff_x26 = (ulong *)((long)unaff_x26 + -1);
                      } while (unaff_x26 != (ulong *)0x0);
                    }
                    if (puVar24 != (ulong *)0x0) {
                      _free(puStack_248);
                    }
                    puVar21 = (undefined *)0x8000000000000000;
                  }
                }
                goto LAB_103eb4e88;
              }
            }
            uStack_b0 = &UNK_108dc1882;
            puStack_a8 = (ulong *)0x3;
            puVar21 = (undefined *)0x0;
            puStack_90 = &uStack_b0;
            puStack_88 = (ulong *)&DAT_103d8be04;
            puStack_190 = (ulong *)func_0x00010897ca94(s_missing_field_____108ac28f7,&puStack_90);
joined_r0x000103eb4e28:
            puStack_198 = (undefined *)0x8000000000000000;
            puVar9 = unaff_x26;
            puVar20 = puStack_190;
            if (-0x7fffffffffffffff < (long)puVar27) {
LAB_103eb4c6c:
              puVar20 = puStack_190;
              puStack_198 = (undefined *)0x8000000000000000;
              if (unaff_x26 != (ulong *)0x0) {
                puVar18 = puStack_248 + 1;
                do {
                  if (puVar18[-1] != 0) {
                    _free(*puVar18);
                  }
                  puVar18 = puVar18 + 3;
                  unaff_x26 = (ulong *)((long)unaff_x26 + -1);
                } while (unaff_x26 != (ulong *)0x0);
              }
              puVar9 = unaff_x26;
              if (puVar27 != (ulong *)0x0) {
                _free(puStack_248);
              }
            }
joined_r0x000103eb4f60:
            if ((-0x7fffffffffffffff < (long)puVar24) && (puVar24 != (ulong *)0x0)) {
              _free(puStack_260);
            }
            if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
              _free(puStack_258);
            }
            FUN_103d988cc(&puStack_110);
            if ((char)puStack_130 != '\x16') {
              func_0x000103db23f4(&puStack_130);
            }
LAB_103eb4e84:
            puVar21 = (undefined *)0x8000000000000000;
            unaff_x26 = puVar9;
            goto LAB_103eb4e88;
          }
          puVar20 = (ulong *)func_0x00010897c8c4(abStack_150,&puStack_90,&UNK_10b2f7468);
LAB_103eb5438:
          puVar27 = puStack_1e8;
          puVar24 = puStack_1f0;
          puStack_128 = puVar20;
          if (puStack_1e8 != (ulong *)0x0) {
            puVar20 = (ulong *)0x0;
            do {
              puVar18 = puVar24 + (long)puVar20 * 9;
              if (*puVar18 != 0) {
                _free(puVar18[1]);
              }
              if (puVar18[3] == 0x8000000000000000 || puVar18[3] == 0) {
                uVar25 = puVar18[6];
              }
              else {
                _free(puVar18[4]);
                uVar25 = puVar18[6];
              }
              if (uVar25 != 0x8000000000000000) {
                uVar29 = puVar18[7];
                uVar26 = puVar18[8];
                if (uVar26 != 0) {
                  puVar13 = (undefined8 *)(uVar29 + 8);
                  do {
                    if (puVar13[-1] != 0) {
                      _free(*puVar13);
                    }
                    puVar13 = puVar13 + 3;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                if (uVar25 != 0) {
                  _free(uVar29);
                }
              }
              puVar20 = (ulong *)((long)puVar20 + 1);
            } while (puVar20 != puVar27);
          }
          if (puStack_1f8 != (ulong *)0x0) {
            _free(puVar24);
          }
          goto LAB_103eb54fc;
        }
        puVar24 = puStack_140 + lStack_138 * 4;
        puStack_130 = puStack_140;
        puStack_120 = puStack_148;
        puStack_110 = (ulong *)0x0;
        unaff_x26 = puStack_140;
        puStack_118 = puVar24;
        if (lStack_138 == 0) {
LAB_103eb4b60:
          puStack_128 = unaff_x26;
          puVar20 = (ulong *)func_0x000108978e3c(0,&UNK_10b2f96d8,&UNK_10b2f7378);
LAB_103eb4b80:
          puStack_198 = (undefined *)0x8000000000000000;
          puStack_190 = puVar20;
LAB_103eb4b88:
          lVar19 = ((ulong)((long)puVar24 - (long)unaff_x26) >> 5) + 1;
          while (lVar19 = lVar19 + -1, lVar19 != 0) {
            func_0x000103db23f4(unaff_x26);
            unaff_x26 = unaff_x26 + 4;
          }
          puVar8 = puStack_130;
          puVar9 = unaff_x26;
          if (puStack_120 != (ulong *)0x0) {
LAB_103eb4bc8:
            _free(puVar8);
            goto LAB_103eb4e84;
          }
          puVar21 = (undefined *)0x8000000000000000;
        }
        else {
          unaff_x26 = puStack_140 + 4;
          uVar25 = *puStack_140;
          if ((byte)uVar25 == 0x16) goto LAB_103eb4b60;
          uVar28 = *(undefined8 *)((long)puStack_140 + 1);
          puVar14[1] = *(undefined8 *)((long)puStack_140 + 9);
          *puVar14 = uVar28;
          uVar29 = puStack_140[2];
          *(ulong *)((long)puVar14 + 0x17) = puStack_140[3];
          *(ulong *)((long)puVar14 + 0xf) = uVar29;
          puStack_110 = (ulong *)0x1;
          puStack_90 = (ulong *)CONCAT71(puStack_90._1_7_,(byte)uVar25);
          puStack_128 = unaff_x26;
          FUN_103d20208(&uStack_b0,&puStack_90);
          plVar6 = plStack_a0;
          puVar27 = puStack_a8;
          puVar21 = uStack_b0;
          puVar20 = puStack_a8;
          if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_103eb4b80;
          func_0x000103e2f6cc(&puStack_90,&puStack_130);
          puVar18 = puStack_80;
          unaff_x26 = puStack_88;
          puVar24 = puStack_90;
          puVar20 = puStack_a8;
          if (puStack_90 == (ulong *)0x8000000000000002) {
            puStack_198 = (undefined *)0x8000000000000000;
            puStack_190 = puStack_88;
            unaff_x26 = puStack_128;
            puVar24 = puStack_118;
            puVar20 = puStack_88;
joined_r0x000103eb4598:
            puStack_128 = unaff_x26;
            puStack_118 = puVar24;
            if (puVar21 != (undefined *)0x0) {
              _free(puVar27);
              puVar24 = puStack_118;
              unaff_x26 = puStack_128;
            }
            goto LAB_103eb4b88;
          }
          if (puStack_90 == (ulong *)0x8000000000000001) {
            puVar20 = (ulong *)func_0x000108978e3c(1,&UNK_10b2f96d8,&UNK_10b2f7378);
joined_r0x000103eb527c:
            puStack_198 = (undefined *)0x8000000000000000;
            puStack_190 = puVar20;
            unaff_x26 = puStack_128;
            puVar24 = puStack_118;
            goto joined_r0x000103eb4598;
          }
          puVar23 = puStack_128;
          if (puStack_128 == puStack_118) {
LAB_103eb4da4:
            puStack_128 = puVar23;
            puVar20 = (ulong *)func_0x000108978e3c(2,&UNK_10b2f96d8,&UNK_10b2f7378);
LAB_103eb4dc0:
            puStack_198 = (undefined *)0x8000000000000000;
            if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
              puStack_190 = puVar20;
              _free(unaff_x26);
              unaff_x26 = puStack_128;
              puVar24 = puStack_118;
              goto joined_r0x000103eb4598;
            }
            goto joined_r0x000103eb527c;
          }
          puVar23 = puStack_128 + 4;
          bVar4 = (byte)*puStack_128;
          if (bVar4 == 0x16) goto LAB_103eb4da4;
          uVar28 = *(undefined8 *)((long)puStack_128 + 1);
          puVar22[1] = *(undefined8 *)((long)puStack_128 + 9);
          *puVar22 = uVar28;
          uVar25 = puStack_128[2];
          *(ulong *)((long)puVar22 + 0x17) = puStack_128[3];
          *(ulong *)((long)puVar22 + 0xf) = uVar25;
          puStack_110 = (ulong *)((long)puStack_110 + 1);
          uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar4);
          puStack_248 = puStack_80;
          puStack_128 = puVar23;
          if (bVar4 != 0x10) {
            if (bVar4 == 0x11) {
              puStack_88 = (ulong *)puStack_a8[1];
              puStack_90 = (ulong *)*puStack_a8;
              puStack_78 = (ulong *)puStack_a8[3];
              puStack_80 = (ulong *)puStack_a8[2];
              func_0x000103ebb410(&puStack_c8,&puStack_90);
              _free(puVar20);
            }
            else {
              if (bVar4 == 0x12) goto LAB_103eb4fa4;
              func_0x000103ebb410(&puStack_c8,&uStack_b0);
            }
            puVar20 = puStack_c0;
            if ((puStack_c8 != (ulong *)0x8000000000000001) &&
               (puVar15 = puStack_c8, puVar23 = puStack_b8, puVar8 = puStack_c0,
               puStack_c8 != (ulong *)0x8000000000000002)) goto LAB_103eb4fb0;
            goto LAB_103eb4dc0;
          }
LAB_103eb4fa4:
          func_0x000103db23f4(&uStack_b0);
          puVar15 = (ulong *)0x8000000000000000;
          puVar23 = puVar2;
          puVar8 = puVar18;
LAB_103eb4fb0:
          puStack_198 = puVar21;
          puStack_190 = puVar27;
          plStack_188 = plVar6;
          puStack_180 = puVar24;
          puStack_178 = unaff_x26;
          puStack_170 = puVar18;
          puStack_168 = puVar15;
          puStack_160 = puVar8;
          puStack_158 = puVar23;
          puVar9 = (ulong *)func_0x000103e32ba0(&puStack_130);
          puVar20 = puVar27;
          puStack_248 = puVar15;
          if (puVar9 != (ulong *)0x0) {
            puStack_198 = (undefined *)0x8000000000000000;
            puStack_190 = puVar9;
            if (puVar21 != (undefined *)0x0) {
              _free(puVar27);
            }
            if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
              _free(unaff_x26);
            }
            puVar21 = (undefined *)0x8000000000000000;
            puVar20 = puVar9;
            if (puVar15 == (ulong *)0x8000000000000000) goto LAB_103eb4e88;
            if (puVar23 != (ulong *)0x0) {
              puVar24 = puVar8 + 1;
              do {
                if (puVar24[-1] != 0) {
                  _free(*puVar24);
                }
                puVar24 = puVar24 + 3;
                puVar23 = (ulong *)((long)puVar23 + -1);
              } while (puVar23 != (ulong *)0x0);
            }
            if (puVar15 == (ulong *)0x0) {
              puVar21 = (undefined *)0x8000000000000000;
              unaff_x26 = puVar9;
              goto LAB_103eb4e88;
            }
            goto LAB_103eb4bc8;
          }
        }
LAB_103eb4e88:
        if ((bVar3 & 0x1e) != 0x14) {
          func_0x000103db23f4(abStack_150);
        }
        puVar24 = puStack_1e8;
        if (puVar21 == (undefined *)0x8000000000000000) goto LAB_103eb5438;
        puStack_1c8 = puStack_180;
        plStack_1d0 = plStack_188;
        puStack_1b8 = puStack_170;
        puStack_1c0 = puStack_178;
        puStack_1a8 = puStack_160;
        puStack_1b0 = puStack_168;
        puStack_1a0 = puStack_158;
        puStack_1e0 = puVar21;
        puStack_1d8 = puVar20;
        if (puStack_1e8 == puStack_1f8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17he0f273de780c5358E(&puStack_1f8);
        }
        puVar20 = puStack_1f0 + (long)puVar24 * 9;
        puVar20[1] = (ulong)puStack_1d8;
        *puVar20 = (ulong)puStack_1e0;
        puVar20[3] = (ulong)puStack_1c8;
        puVar20[2] = (ulong)plStack_1d0;
        puVar20[5] = (ulong)puStack_1b8;
        puVar20[4] = (ulong)puStack_1c0;
        puVar20[7] = (ulong)puStack_1a8;
        puVar20[6] = (ulong)puStack_1b0;
        puVar20[8] = (ulong)puStack_1a0;
        puStack_1e8 = (ulong *)((long)puVar24 + 1);
        puVar20 = puVar10;
        puVar24 = puVar12;
      } while (puVar12 != puVar10);
    }
    puVar18 = puStack_1e8;
    puVar24 = puStack_1f0;
    puVar27 = puStack_1f8;
    puStack_128 = puStack_1f0;
    puStack_130 = puStack_1f8;
    puStack_120 = puStack_1e8;
    puVar12 = puVar20;
    if (puStack_1f8 == (ulong *)0x8000000000000000) {
LAB_103eb54fc:
      lVar17 = ((ulong)((long)puVar10 - (long)puVar12) >> 5) + 1;
      while (lVar17 = lVar17 + -1, puVar24 = puVar2, puVar27 = puVar1, lVar17 != 0) {
        func_0x000103db23f4(puVar12);
        puVar12 = puVar12 + 4;
      }
    }
    else {
      puVar10 = (ulong *)func_0x000103e32ba0(&puStack_220);
      if (puVar10 == (ulong *)0x0) {
        param_1[1] = puStack_128;
        *param_1 = puStack_130;
        param_1[2] = puStack_120;
        return;
      }
      puStack_128 = puVar10;
      if (puVar18 != (ulong *)0x0) {
        puVar10 = (ulong *)0x0;
        do {
          puVar20 = puVar24 + (long)puVar10 * 9;
          if (*puVar20 != 0) {
            _free(puVar20[1]);
          }
          if (puVar20[3] == 0x8000000000000000 || puVar20[3] == 0) {
            uVar25 = puVar20[6];
          }
          else {
            _free(puVar20[4]);
            uVar25 = puVar20[6];
          }
          if (uVar25 != 0x8000000000000000) {
            uVar29 = puVar20[7];
            uVar26 = puVar20[8];
            if (uVar26 != 0) {
              puVar13 = (undefined8 *)(uVar29 + 8);
              do {
                if (puVar13[-1] != 0) {
                  _free(*puVar13);
                }
                puVar13 = puVar13 + 3;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            if (uVar25 != 0) {
              _free(uVar29);
            }
          }
          puVar10 = (ulong *)((long)puVar10 + 1);
        } while (puVar10 != puVar18);
      }
    }
    if (puVar27 != (ulong *)0x0) {
      _free(puVar24);
    }
  }
  else {
    puStack_128 = (ulong *)func_0x00010897c8c4(param_2,&puStack_90,&UNK_10b2f7288);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = puStack_128;
  return;
}

