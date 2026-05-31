
/* WARNING: Removing unreachable block (ram,0x00010144cbd0) */
/* WARNING: Removing unreachable block (ram,0x00010144cbf4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144c168(long *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  undefined7 uVar6;
  char cVar7;
  undefined7 uVar8;
  long lVar9;
  long lVar10;
  undefined7 uVar11;
  undefined7 uVar12;
  undefined7 uVar13;
  undefined1 uVar14;
  undefined7 uVar15;
  undefined1 uVar16;
  undefined7 uVar17;
  undefined1 uVar18;
  undefined7 uVar19;
  undefined1 uVar20;
  undefined7 uVar21;
  undefined1 uVar22;
  undefined7 uVar23;
  undefined1 uVar24;
  undefined7 uVar25;
  code *pcVar26;
  bool bVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  long lVar30;
  long lVar31;
  long *plVar32;
  char *pcVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  byte bVar52;
  byte bVar53;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  long lVar54;
  undefined1 auVar61 [16];
  ulong uStack_2b8;
  long lStack_298;
  ulong uStack_288;
  undefined8 uStack_270;
  ulong uStack_268;
  long lStack_260;
  ulong uStack_258;
  long *plStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  long lStack_1c0;
  char cStack_1b8;
  undefined7 uStack_1b7;
  char cStack_1b0;
  undefined7 uStack_1af;
  char cStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  char cStack_d0;
  undefined7 uStack_cf;
  char cStack_c8;
  undefined7 uStack_c7;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
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
  long lStack_88;
  
  if (*param_2 == '\x15') {
    lVar41 = *(long *)(param_2 + 0x10);
    uVar46 = *(ulong *)(param_2 + 0x18);
    lVar39 = uVar46 * 0x40;
    uVar37 = uVar46;
    if (0x3332 < uVar46) {
      uVar37 = 0x3333;
    }
    pauVar29 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar29[1][0] == '\x01') {
      auVar61 = *pauVar29;
      *(long *)*pauVar29 = *(long *)*pauVar29 + 1;
    }
    else {
      auVar61 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      pauVar29[1][0] = 1;
      *(long *)*pauVar29 = auVar61._0_8_ + 1;
      *(long *)(*pauVar29 + 8) = auVar61._8_8_;
    }
    if (uVar46 != 0) {
      lStack_298 = lVar41 + lVar39;
      uVar35 = 4;
      if (3 < uVar46) {
        uVar35 = (uVar37 & 8) + 8;
      }
      if (0xe < uVar46) {
        uVar35 = (0xffffffffffffffffU >>
                 (LZCOUNT(((ulong)(uint)((int)uVar37 << 3) * 0x92492493 >> 0x22) - 1) & 0x3fU)) + 1;
      }
      lVar43 = uVar35 * 8;
      lVar45 = uVar35 + 8;
      lVar30 = _malloc(lVar45 + lVar43);
      if (lVar30 == 0) {
        func_0x0001087c906c(8,lVar45 + lVar43);
      }
      else {
        uVar46 = uVar35 - 1;
        _memset((long *)(lVar30 + lVar43),0xff,lVar45);
        lVar45 = uVar37 * 0x50;
        lVar31 = _malloc(lVar45);
        if (lVar31 != 0) {
          uStack_288 = 0;
          uStack_240 = uVar46;
          if (7 < uVar46) {
            uStack_240 = (uVar35 >> 3) * 7;
          }
          uStack_258 = 0;
          lStack_238 = 0;
          lVar45 = lVar41;
          uStack_268 = uVar37;
          lStack_260 = lVar31;
          plStack_250 = (long *)(lVar30 + lVar43);
          uStack_248 = uVar46;
LAB_10144c30c:
          auStack_230 = auVar61;
          func_0x0001004e0914(&lStack_d8,lVar45);
          uVar8 = uStack_bf;
          cVar7 = cStack_c0;
          uVar6 = uStack_c7;
          cVar5 = cStack_c8;
          lVar43 = CONCAT71(uStack_cf,cStack_d0);
          uVar3 = CONCAT71(uStack_c7,cStack_c8);
          lVar30 = CONCAT71(uStack_bf,cStack_c0);
          if (lStack_d8 != 2) {
            uStack_1e8 = uStack_b0;
            uStack_1e7 = uStack_af;
            uStack_1f0 = uStack_b8;
            uStack_1ef = uStack_b7;
            uStack_1d8 = uStack_a0;
            uStack_1d7 = uStack_9f;
            uStack_1e0 = uStack_a8;
            uStack_1df = uStack_a7;
            uStack_1c8 = uStack_90;
            uStack_1c7 = uStack_8f;
            uStack_1d0 = uStack_98;
            uStack_1cf = uStack_97;
            lVar41 = lStack_d8;
            lVar39 = lStack_88;
            lVar31 = lVar43;
            uStack_270 = uVar3;
            goto LAB_10144d380;
          }
          if (*(char *)(lVar45 + 0x20) != '\x14') {
            if (*(char *)(lVar45 + 0x20) == '\x15') {
              lVar47 = *(long *)(lVar45 + 0x30);
              lVar31 = *(long *)(lVar45 + 0x38) * 0x40;
              lVar54 = lVar47 + lVar31;
              lStack_110 = -0x8000000000000000;
              lStack_f0 = -0x8000000000000000;
              if (*(long *)(lVar45 + 0x38) != 0) {
                lVar48 = 0;
                lVar34 = (lVar31 - 0x40U >> 6) + 1;
                lVar51 = 1;
                do {
                  pbVar1 = (byte *)(lVar47 + lVar48);
                  bVar2 = *pbVar1;
                  if (bVar2 < 0xd) {
                    if (bVar2 == 1) {
                      cVar56 = *(char *)(lVar47 + lVar48 + 1);
                      cVar55 = '\x01';
                      if (cVar56 != '\x01') {
                        cVar55 = '\x02';
                      }
                      bVar27 = cVar56 == '\0';
                    }
                    else {
                      if (bVar2 != 4) {
                        if (bVar2 != 0xc) goto LAB_10144c800;
                        plVar32 = *(long **)(lVar47 + lVar48 + 0x10);
                        lVar42 = *(long *)(lVar47 + lVar48 + 0x18);
                        if (lVar42 != 0x16) {
                          if (lVar42 == 0x15) goto LAB_10144c6b4;
                          goto LAB_10144c710;
                        }
                        goto LAB_10144c718;
                      }
                      lVar42 = *(long *)(lVar47 + lVar48 + 8);
                      cVar55 = '\x01';
                      if (lVar42 != 1) {
                        cVar55 = '\x02';
                      }
                      bVar27 = lVar42 == 0;
                    }
                    cVar56 = '\0';
                    if (!bVar27) {
                      cVar56 = cVar55;
                    }
                    goto LAB_10144c770;
                  }
                  if (bVar2 == 0xd) {
                    plVar32 = *(long **)(lVar47 + lVar48 + 8);
                    lVar42 = *(long *)(lVar47 + lVar48 + 0x10);
                    if (lVar42 == 0x16) {
LAB_10144c718:
                      cVar56 = '\x01';
                      if ((*plVar32 != 0x725f7463656a6e69 || plVar32[1] != 0x685f747365757165) ||
                          *(long *)((long)plVar32 + 0xe) != 0x737265646165685f) {
                        cVar56 = '\x02';
                      }
                    }
                    else {
                      if (lVar42 != 0x15) goto LAB_10144c710;
LAB_10144c6b4:
                      cVar56 = '\x02';
                      if ((*plVar32 == 0x65725f7069727473 && plVar32[1] == 0x65685f7473657571) &&
                          *(long *)((long)plVar32 + 0xd) == 0x737265646165685f) {
                        cVar56 = '\0';
                      }
                    }
                    goto LAB_10144c770;
                  }
                  if (bVar2 != 0xe) {
                    if (bVar2 == 0xf) {
                      pcVar33 = *(char **)(lVar47 + 8 + lVar48);
                      lVar42 = *(long *)(lVar47 + 0x10 + lVar48);
                      goto joined_r0x00010144c56c;
                    }
LAB_10144c800:
                    FUN_108855bf0(&lStack_d8,pbVar1,&lStack_160,&UNK_10b215268);
                    cVar56 = cStack_d0;
                    lVar42 = lStack_d8;
                    cVar55 = cStack_d0;
                    uVar11 = uStack_cf;
                    cVar57 = cStack_c8;
                    uVar12 = uStack_c7;
                    cVar58 = cStack_c0;
                    uVar13 = uStack_bf;
                    uVar14 = uStack_b8;
                    uVar15 = uStack_b7;
                    uVar16 = uStack_b0;
                    uVar17 = uStack_af;
                    uVar18 = uStack_a8;
                    uVar19 = uStack_a7;
                    uVar20 = uStack_a0;
                    uVar21 = uStack_9f;
                    uVar22 = uStack_98;
                    uVar23 = uStack_97;
                    uVar24 = uStack_90;
                    uVar25 = uStack_8f;
                    lVar38 = lStack_88;
                    if (lStack_d8 == 2) goto LAB_10144c770;
joined_r0x00010144d130:
                    lStack_170 = lVar38;
                    uStack_177 = uVar25;
                    uStack_178 = uVar24;
                    uStack_17f = uVar23;
                    uStack_180 = uVar22;
                    uStack_187 = uVar21;
                    uStack_188 = uVar20;
                    uStack_18f = uVar19;
                    uStack_190 = uVar18;
                    uStack_197 = uVar17;
                    uStack_198 = uVar16;
                    uStack_19f = uVar15;
                    uStack_1a0 = uVar14;
                    uStack_1a7 = uVar13;
                    cStack_1a8 = cVar58;
                    uStack_1af = uVar12;
                    cStack_1b0 = cVar57;
                    uStack_1b7 = uVar11;
                    cStack_1b8 = cVar55;
                    lStack_1c0 = lVar42;
                    lStack_d8 = lStack_1c0;
                    cStack_d0 = cStack_1b8;
                    uStack_cf = uStack_1b7;
                    cStack_c8 = cStack_1b0;
                    uStack_c7 = uStack_1af;
                    cStack_c0 = cStack_1a8;
                    uStack_bf = uStack_1a7;
                    uStack_b8 = uStack_1a0;
                    uStack_b7 = uStack_19f;
                    uStack_b0 = uStack_198;
                    uStack_af = uStack_197;
                    uStack_a8 = uStack_190;
                    uStack_a7 = uStack_18f;
                    uStack_a0 = uStack_188;
                    uStack_9f = uStack_187;
                    uStack_98 = uStack_180;
                    uStack_97 = uStack_17f;
                    uStack_90 = uStack_178;
                    uStack_8f = uStack_177;
                    lStack_88 = lStack_170;
                    if (lStack_f0 == -0x8000000000000000) goto LAB_10144cad0;
LAB_10144ca10:
                    lVar34 = lStack_e8;
                    lVar31 = lStack_f0;
                    lStack_1c0 = lStack_d8;
                    uStack_1a0 = uStack_b8;
                    uStack_19f = uStack_b7;
                    uStack_198 = uStack_b0;
                    uStack_197 = uStack_af;
                    uStack_190 = uStack_a8;
                    uStack_18f = uStack_a7;
                    uStack_188 = uStack_a0;
                    uStack_187 = uStack_9f;
                    uStack_180 = uStack_98;
                    uStack_17f = uStack_97;
                    uStack_178 = uStack_90;
                    uStack_177 = uStack_8f;
                    lStack_170 = lStack_88;
                    if (lStack_e0 == 0) goto LAB_10144cac0;
                    plVar32 = (long *)(lStack_e8 + 0x30);
                    lVar42 = lStack_e0;
                    goto LAB_10144ca4c;
                  }
                  pcVar33 = *(char **)(lVar47 + 0x10 + lVar48);
                  lVar42 = *(long *)(lVar47 + 0x18 + lVar48);
joined_r0x00010144c56c:
                  if (lVar42 == 0x16) {
                    if ((((((*pcVar33 == 'i') && (pcVar33[1] == 'n')) &&
                          (((pcVar33[2] == 'j' && ((pcVar33[3] == 'e' && (pcVar33[4] == 'c')))) &&
                           (pcVar33[5] == 't')))) &&
                         ((((((pcVar33[6] == '_' && (pcVar33[7] == 'r')) && (pcVar33[8] == 'e')) &&
                            ((pcVar33[9] == 'q' && (pcVar33[10] == 'u')))) && (pcVar33[0xb] == 'e'))
                          && (((pcVar33[0xc] == 's' && (pcVar33[0xd] == 't')) &&
                              ((pcVar33[0xe] == '_' &&
                               (((pcVar33[0xf] == 'h' && (pcVar33[0x10] == 'e')) &&
                                (pcVar33[0x11] == 'a')))))))))) &&
                        ((pcVar33[0x12] == 'd' && (pcVar33[0x13] == 'e')))) &&
                       ((pcVar33[0x14] == 'r' && (pcVar33[0x15] == 's')))) {
                      cVar56 = '\x01';
                    }
                    else {
LAB_10144c710:
                      cVar56 = '\x02';
                    }
                  }
                  else {
                    if ((((((((lVar42 != 0x15) || (*pcVar33 != 's')) || (pcVar33[1] != 't')) ||
                           ((pcVar33[2] != 'r' || (pcVar33[3] != 'i')))) ||
                          ((pcVar33[4] != 'p' || ((pcVar33[5] != '_' || (pcVar33[6] != 'r')))))) ||
                         (pcVar33[7] != 'e')) ||
                        ((((pcVar33[8] != 'q' || (pcVar33[9] != 'u')) || (pcVar33[10] != 'e')) ||
                         (((pcVar33[0xb] != 's' || (pcVar33[0xc] != 't')) ||
                          ((pcVar33[0xd] != '_' || ((pcVar33[0xe] != 'h' || (pcVar33[0xf] != 'e'))))
                          )))))) ||
                       (((pcVar33[0x10] != 'a' ||
                         (((pcVar33[0x11] != 'd' || (pcVar33[0x12] != 'e')) ||
                          (pcVar33[0x13] != 'r')))) || (pcVar33[0x14] != 's')))) goto LAB_10144c710;
                    cVar56 = '\0';
                  }
LAB_10144c770:
                  if (cVar56 == '\0') {
                    if (lStack_110 != -0x8000000000000000) {
                      FUN_1087e4364(&lStack_d8,&UNK_108cabffa,0x15);
                      lVar42 = lStack_d8;
                      cVar55 = cStack_d0;
                      uVar11 = uStack_cf;
                      cVar57 = cStack_c8;
                      uVar12 = uStack_c7;
                      cVar58 = cStack_c0;
                      uVar13 = uStack_bf;
                      uVar14 = uStack_b8;
                      uVar15 = uStack_b7;
                      uVar16 = uStack_b0;
                      uVar17 = uStack_af;
                      uVar18 = uStack_a8;
                      uVar19 = uStack_a7;
                      uVar20 = uStack_a0;
                      uVar21 = uStack_9f;
                      uVar22 = uStack_98;
                      uVar23 = uStack_97;
                      uVar24 = uStack_90;
                      uVar25 = uStack_8f;
                      lVar38 = lStack_88;
                      goto joined_r0x00010144d130;
                    }
                    FUN_1004dfff4(&lStack_d8,pbVar1 + 0x20);
                    lStack_158 = CONCAT71(uStack_c7,cStack_c8);
                    lStack_160 = CONCAT71(uStack_cf,cStack_d0);
                    lStack_150 = CONCAT71(uStack_bf,cStack_c0);
                    lVar42 = lStack_160;
                    lVar38 = lStack_158;
                    lVar49 = lStack_150;
                    lVar44 = lStack_f0;
                    lVar9 = lStack_e8;
                    lVar10 = lStack_e0;
                    if (lStack_d8 == 2) goto LAB_10144c394;
LAB_10144c9d4:
                    uStack_198 = uStack_b0;
                    uStack_197 = uStack_af;
                    uStack_1a0 = uStack_b8;
                    uStack_19f = uStack_b7;
                    uStack_188 = uStack_a0;
                    uStack_187 = uStack_9f;
                    uStack_190 = uStack_a8;
                    uStack_18f = uStack_a7;
                    uStack_178 = uStack_90;
                    uStack_177 = uStack_8f;
                    uStack_180 = uStack_98;
                    uStack_17f = uStack_97;
                    lStack_170 = lStack_88;
                    cStack_1b0 = (char)lStack_158;
                    uStack_1af = (undefined7)((ulong)lStack_158 >> 8);
                    cStack_1b8 = (char)lStack_160;
                    uStack_1b7 = (undefined7)((ulong)lStack_160 >> 8);
                    cStack_1a8 = (char)lStack_150;
                    uStack_1a7 = (undefined7)((ulong)lStack_150 >> 8);
                    lStack_1c0 = lStack_d8;
                    if (lStack_f0 != -0x8000000000000000) goto LAB_10144ca10;
                    goto LAB_10144cad0;
                  }
                  lVar42 = lStack_110;
                  lVar38 = lStack_108;
                  lVar49 = lStack_100;
                  lVar44 = lStack_f0;
                  lVar9 = lStack_e8;
                  lVar10 = lStack_e0;
                  if (cVar56 == '\x01') {
                    if (lStack_f0 != -0x8000000000000000) {
                      FUN_1087e4364(&lStack_d8,&UNK_108cac00f,0x16);
                      lVar42 = lStack_d8;
                      cVar55 = cStack_d0;
                      uVar11 = uStack_cf;
                      cVar57 = cStack_c8;
                      uVar12 = uStack_c7;
                      cVar58 = cStack_c0;
                      uVar13 = uStack_bf;
                      uVar14 = uStack_b8;
                      uVar15 = uStack_b7;
                      uVar16 = uStack_b0;
                      uVar17 = uStack_af;
                      uVar18 = uStack_a8;
                      uVar19 = uStack_a7;
                      uVar20 = uStack_a0;
                      uVar21 = uStack_9f;
                      uVar22 = uStack_98;
                      uVar23 = uStack_97;
                      uVar24 = uStack_90;
                      uVar25 = uStack_8f;
                      lVar38 = lStack_88;
                      goto joined_r0x00010144d130;
                    }
                    FUN_1013bbe90(&lStack_d8,pbVar1 + 0x20);
                    lStack_158 = CONCAT71(uStack_c7,cStack_c8);
                    lStack_160 = CONCAT71(uStack_cf,cStack_d0);
                    lStack_150 = CONCAT71(uStack_bf,cStack_c0);
                    lVar42 = lStack_110;
                    lVar38 = lStack_108;
                    lVar49 = lStack_100;
                    lVar44 = lStack_160;
                    lVar9 = lStack_158;
                    lVar10 = lStack_150;
                    if (lStack_d8 != 2) goto LAB_10144c9d4;
                  }
LAB_10144c394:
                  lStack_e0 = lVar10;
                  lStack_e8 = lVar9;
                  lStack_f0 = lVar44;
                  lStack_100 = lVar49;
                  lStack_108 = lVar38;
                  lStack_110 = lVar42;
                  lVar51 = lVar51 + 1;
                  lVar48 = lVar48 + 0x40;
                } while (lVar31 - lVar48 != 0);
                lVar9 = lStack_160;
                auVar61 = auStack_230;
                if (lStack_110 == -0x8000000000000000) {
                  lVar47 = lVar54;
                  if (lStack_f0 == -0x8000000000000000) goto LAB_10144c934;
                  lVar31 = 0;
                  lVar47 = 8;
                  lVar54 = 0;
LAB_10144cbd4:
                  cStack_1b8 = (char)lVar54;
                  uStack_1b7 = (undefined7)((ulong)lVar54 >> 8);
                  cStack_1b0 = (char)lVar47;
                  uStack_1af = (undefined7)((ulong)lVar47 >> 8);
                  cStack_1a8 = (char)lVar31;
                  uStack_1a7 = (undefined7)((ulong)lVar31 >> 8);
                  uStack_1a0 = (undefined1)lStack_f0;
                  uStack_19f = (undefined7)((ulong)lStack_f0 >> 8);
                  uStack_198 = (undefined1)lStack_e8;
                  uStack_197 = (undefined7)((ulong)lStack_e8 >> 8);
                  uStack_190 = (undefined1)lStack_e0;
                  uStack_18f = (undefined7)((ulong)lStack_e0 >> 8);
                  lStack_1c0 = 2;
                }
                else {
                  lVar31 = lStack_100;
                  lVar47 = lStack_108;
                  lVar54 = lStack_110;
                  if (lStack_f0 != -0x8000000000000000) goto LAB_10144cbd4;
                  cStack_1b8 = (char)lStack_110;
                  uStack_1b7 = (undefined7)((ulong)lStack_110 >> 8);
                  cStack_1b0 = (char)lStack_108;
                  uStack_1af = (undefined7)((ulong)lStack_108 >> 8);
                  cStack_1a8 = (char)lStack_100;
                  uStack_1a7 = (undefined7)((ulong)lStack_100 >> 8);
                  uStack_1a0 = 0;
                  uStack_19f = 0;
                  uStack_198 = 8;
                  uStack_197 = 0;
                  uStack_190 = 0;
                  uStack_18f = 0;
                  lStack_1c0 = 2;
                }
                goto LAB_10144ccb8;
              }
              lVar34 = 0;
LAB_10144c934:
              lVar49 = 0;
              lVar48 = 0;
              lVar31 = 0;
              lVar42 = 0;
              cStack_1b8 = '\0';
              uStack_1b7 = 0;
              cStack_1b0 = '\b';
              uStack_1af = 0;
              lVar44 = 8;
              lVar38 = 8;
              cStack_1a8 = '\0';
              uStack_1a7 = 0;
              uStack_1a0 = 0;
              uStack_19f = 0;
              uStack_198 = 8;
              uStack_197 = 0;
              uStack_190 = 0;
              uStack_18f = 0;
              lStack_1c0 = 2;
              lVar51 = lVar34;
              lVar9 = lStack_160;
              goto joined_r0x00010144ccb4;
            }
            FUN_108855bf0(&lStack_1c0,lVar45 + 0x20,&lStack_160,&UNK_10b2139a8);
            goto LAB_10144cb7c;
          }
          lVar31 = *(long *)(lVar45 + 0x30);
          lVar47 = *(long *)(lVar45 + 0x38);
          lStack_160 = 0;
          lStack_158 = 8;
          lStack_150 = 0;
          uStack_148 = 0;
          lStack_140 = 8;
          uStack_138 = 0;
          if (lVar47 == 0) {
            lVar34 = 0;
            lVar54 = lVar31;
LAB_10144c8dc:
            lStack_e8 = lStack_158;
            lStack_f0 = lStack_160;
            lStack_e0 = lStack_150;
            lVar31 = lVar31 + lVar47 * 0x20;
            lVar47 = lVar31;
            if (lVar54 == lVar31) goto LAB_10144cc1c;
LAB_10144c8fc:
            FUN_1013bbe90(&lStack_d8,lVar54);
            lVar44 = lStack_e8;
            lVar51 = CONCAT71(uStack_cf,cStack_d0);
            lStack_118 = CONCAT71(uStack_bf,cStack_c0);
            lStack_120 = CONCAT71(uStack_c7,cStack_c8);
            lStack_108 = lStack_118;
            lStack_110 = lStack_120;
            if (lStack_d8 == 2) {
              lVar31 = lVar54 + 0x20;
              lVar34 = lVar34 + 1;
              goto LAB_10144cc24;
            }
            uStack_188 = uStack_a0;
            uStack_187 = uStack_9f;
            uStack_190 = uStack_a8;
            uStack_18f = uStack_a7;
            uStack_178 = uStack_90;
            uStack_177 = uStack_8f;
            uStack_180 = uStack_98;
            uStack_17f = uStack_97;
            lStack_170 = lStack_88;
            cStack_1a8 = cStack_c0;
            uStack_1a7 = uStack_bf;
            cStack_1b0 = cStack_c8;
            uStack_1af = uStack_c7;
            uStack_198 = uStack_b0;
            uStack_197 = uStack_af;
            uStack_1a0 = uStack_b8;
            uStack_19f = uStack_b7;
            lStack_1c0 = lStack_d8;
            cStack_1b8 = cStack_d0;
            uStack_1b7 = uStack_cf;
            lVar54 = lStack_f0;
            if (lStack_e0 != 0) {
              puVar40 = (undefined8 *)(lStack_e8 + 8);
              lVar31 = lStack_e0;
              do {
                if (puVar40[-1] != 0) {
                  _free(*puVar40);
                }
                puVar40 = puVar40 + 3;
                lVar31 = lVar31 + -1;
                lVar54 = lStack_f0;
              } while (lVar31 != 0);
            }
joined_r0x00010144cb70:
            if (lVar54 == 0) goto LAB_10144cb7c;
            goto LAB_10144cb78;
          }
          FUN_1004dfff4(&lStack_d8,lVar31);
          lStack_128 = CONCAT71(uStack_bf,cStack_c0);
          lStack_130 = CONCAT71(uStack_c7,cStack_c8);
          lStack_108 = lStack_128;
          lStack_110 = lStack_130;
          if (lStack_d8 != 2) {
            uStack_188 = uStack_a0;
            uStack_187 = uStack_9f;
            uStack_190 = uStack_a8;
            uStack_18f = uStack_a7;
            uStack_178 = uStack_90;
            uStack_177 = uStack_8f;
            uStack_180 = uStack_98;
            uStack_17f = uStack_97;
            lStack_170 = lStack_88;
            cStack_1a8 = cStack_c0;
            uStack_1a7 = uStack_bf;
            cStack_1b0 = cStack_c8;
            uStack_1af = uStack_c7;
            uStack_198 = uStack_b0;
            uStack_197 = uStack_af;
            uStack_1a0 = uStack_b8;
            uStack_19f = uStack_b7;
            lStack_1c0 = lStack_d8;
            cStack_1b8 = cStack_d0;
            uStack_1b7 = uStack_cf;
            goto LAB_10144cb7c;
          }
          lVar54 = lVar31 + 0x20;
          if (CONCAT71(uStack_cf,cStack_d0) == -0x8000000000000000) {
            lVar34 = 1;
            goto LAB_10144c8dc;
          }
          lStack_e0 = lStack_128;
          lStack_e8 = lStack_130;
          lStack_f0 = CONCAT71(uStack_cf,cStack_d0);
          lVar34 = 1;
          lVar31 = lVar31 + lVar47 * 0x20;
          lVar47 = lVar31;
          if (lVar54 != lVar31) goto LAB_10144c8fc;
LAB_10144cc1c:
          lVar51 = -0x8000000000000000;
          lVar47 = lVar31;
LAB_10144cc24:
          lVar48 = lStack_e0;
          lVar38 = lStack_e8;
          lVar42 = lStack_f0;
          lStack_118 = lStack_108;
          lStack_120 = lStack_110;
          plVar32 = &lStack_140;
          if (lVar51 != -0x8000000000000000) {
            plVar32 = &lStack_120;
          }
          lVar54 = 0;
          if (lVar51 != -0x8000000000000000) {
            lVar54 = lVar51;
          }
          lVar51 = plVar32[1];
          lVar44 = *plVar32;
          uStack_190 = (undefined1)lVar51;
          uStack_18f = (undefined7)((ulong)lVar51 >> 8);
          uStack_198 = (undefined1)lVar44;
          uStack_197 = (undefined7)((ulong)lVar44 >> 8);
          cStack_1a8 = (char)lStack_e0;
          uStack_1a7 = (undefined7)((ulong)lStack_e0 >> 8);
          cStack_1b0 = (char)lStack_e8;
          uStack_1af = (undefined7)((ulong)lStack_e8 >> 8);
          cStack_1b8 = (char)lStack_f0;
          uStack_1b7 = (undefined7)((ulong)lStack_f0 >> 8);
          uStack_1a0 = (undefined1)lVar54;
          uStack_19f = (undefined7)((ulong)lVar54 >> 8);
          lStack_1c0 = 2;
          lVar9 = lStack_160;
          auVar61 = auStack_230;
          if (lVar47 - lVar31 != 0) {
            lStack_160 = lVar34;
            FUN_1087e427c(&lStack_d8,lVar34 + ((ulong)(lVar47 - lVar31) >> 5),&lStack_160,
                          &UNK_10b23a1b0);
            lVar9 = lStack_160;
            auVar61 = auStack_230;
            if (lStack_d8 != 2) {
              uStack_198 = uStack_b0;
              uStack_197 = uStack_af;
              uStack_1a0 = uStack_b8;
              uStack_19f = uStack_b7;
              uStack_188 = uStack_a0;
              uStack_187 = uStack_9f;
              uStack_190 = uStack_a8;
              uStack_18f = uStack_a7;
              uStack_178 = uStack_90;
              uStack_177 = uStack_8f;
              uStack_180 = uStack_98;
              uStack_17f = uStack_97;
              lStack_170 = lStack_88;
              cStack_1b8 = cStack_d0;
              uStack_1b7 = uStack_cf;
              lStack_1c0 = lStack_d8;
              cStack_1a8 = cStack_c0;
              uStack_1a7 = uStack_bf;
              cStack_1b0 = cStack_c8;
              uStack_1af = uStack_c7;
              if (lVar48 != 0) {
                puVar40 = (undefined8 *)(lVar38 + 8);
                do {
                  if (puVar40[-1] != 0) {
                    _free(*puVar40);
                  }
                  puVar40 = puVar40 + 3;
                  lVar48 = lVar48 + -1;
                } while (lVar48 != 0);
              }
              lVar31 = lVar44;
              if (lVar42 != 0) {
                _free(lVar38);
              }
              for (; lVar51 != 0; lVar51 = lVar51 + -1) {
                FUN_100e4d1c8(lVar31);
                lVar31 = lVar31 + 0x60;
              }
              goto joined_r0x00010144cb70;
            }
          }
          goto LAB_10144ccb8;
        }
      }
      func_0x0001087c9084(8,lVar45);
LAB_10144d674:
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x10144d678);
      (*pcVar26)();
    }
    uStack_268 = 0;
    lStack_260 = 8;
    uStack_258 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)&UNK_108c56c70;
    lStack_238 = 0;
    uStack_240 = 0;
    uVar37 = 0;
    lVar31 = lVar41;
LAB_10144d4c0:
    uVar50 = uStack_248;
    plVar32 = plStack_250;
    uVar46 = uStack_258;
    lVar45 = lStack_260;
    uVar35 = uStack_268;
    lStack_298 = lVar41 + lVar39;
    cStack_1b0 = (char)lStack_260;
    uStack_1af = (undefined7)((ulong)lStack_260 >> 8);
    cStack_1b8 = (char)uStack_268;
    uStack_1b7 = (undefined7)(uStack_268 >> 8);
    uStack_1a0 = SUB81(plStack_250,0);
    uStack_19f = (undefined7)((ulong)plStack_250 >> 8);
    cStack_1a8 = (char)uStack_258;
    uStack_1a7 = (undefined7)(uStack_258 >> 8);
    uStack_190 = (undefined1)uStack_240;
    uStack_18f = (undefined7)(uStack_240 >> 8);
    uStack_198 = (undefined1)uStack_248;
    uStack_197 = (undefined7)(uStack_248 >> 8);
    uStack_180 = auVar61[0];
    uStack_17f = auVar61._1_7_;
    uStack_188 = (undefined1)lStack_238;
    uStack_187 = (undefined7)((ulong)lStack_238 >> 8);
    uStack_178 = auVar61[8];
    uStack_177 = auVar61._9_7_;
    lStack_1c0 = 2;
    if (lStack_298 - lVar31 == 0) goto LAB_10144d500;
    uStack_268 = uVar37;
    auStack_230 = auVar61;
    FUN_1087e427c(&lStack_d8,uVar37 + ((ulong)(lStack_298 - lVar31) >> 6),&uStack_268,&UNK_10b23a190
                 );
    if (lStack_d8 == 2) goto LAB_10144d500;
    uStack_198 = uStack_b0;
    uStack_197 = uStack_af;
    uStack_1a0 = uStack_b8;
    uStack_19f = uStack_b7;
    uStack_188 = uStack_a0;
    uStack_187 = uStack_9f;
    uStack_190 = uStack_a8;
    uStack_18f = uStack_a7;
    uStack_178 = uStack_90;
    uStack_177 = uStack_8f;
    uStack_180 = uStack_98;
    uStack_17f = uStack_97;
    lStack_170 = lStack_88;
    cStack_1b8 = cStack_d0;
    uStack_1b7 = uStack_cf;
    lStack_1c0 = lStack_d8;
    cStack_1a8 = cStack_c0;
    uStack_1a7 = uStack_bf;
    cStack_1b0 = cStack_c8;
    uStack_1af = uStack_c7;
    if ((uVar50 != 0) && (uVar50 * 9 != -0x11)) {
      _free(plVar32 + (-1 - uVar50));
    }
    if (uVar46 != 0) {
      lVar41 = lVar45 + 0x18;
      do {
        if (*(long *)(lVar41 + -0x18) != 0) {
          _free(*(undefined8 *)(lVar41 + -0x10));
        }
        FUN_100e38614(lVar41);
        lVar41 = lVar41 + 0x50;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
    }
    if (uVar35 != 0) {
      _free(lVar45);
    }
  }
  else {
    FUN_108855bf0(&lStack_1c0,param_2,&lStack_160,&UNK_10b2132c8);
  }
  goto LAB_10144d41c;
LAB_10144ce40:
  if (uStack_258 <= uVar50) {
    func_0x000108a07bdc(uVar50,uStack_258,&UNK_10b24daa8);
    goto LAB_10144d674;
  }
  lVar48 = lStack_260 + uVar50 * 0x50;
  lVar30 = *(long *)(lVar48 + 0x18);
  lVar54 = *(long *)(lVar48 + 0x20);
  lVar31 = *(long *)(lVar48 + 0x28);
  lVar34 = *(long *)(lVar48 + 0x30);
  lVar47 = *(long *)(lVar48 + 0x38);
  lVar51 = *(long *)(lVar48 + 0x40);
  *(undefined8 *)(lVar48 + 0x20) = uStack_218;
  *(undefined8 *)(lVar48 + 0x18) = uStack_220;
  *(undefined8 *)(lVar48 + 0x30) = uStack_208;
  *(undefined8 *)(lVar48 + 0x28) = uStack_210;
  *(undefined8 *)(lVar48 + 0x40) = uStack_1f8;
  *(undefined8 *)(lVar48 + 0x38) = uStack_200;
  if (lVar43 != 0) {
    _free(uVar3);
  }
  auVar61 = auStack_230;
  if (lVar30 != -0x8000000000000000) {
    if (lVar31 != 0) {
      puVar40 = (undefined8 *)(lVar54 + 8);
      do {
        if (puVar40[-1] != 0) {
          _free(*puVar40);
        }
        puVar40 = puVar40 + 3;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    if (lVar30 != 0) {
      _free(lVar54);
    }
    if (lVar51 != 0) {
      plVar32 = (long *)(lVar47 + 0x30);
      do {
        while( true ) {
          if (plVar32[-6] != 0) {
            _free(plVar32[-5]);
          }
          if (plVar32[-3] != -0x8000000000000000 && plVar32[-3] != 0) break;
          if (*plVar32 == -0x8000000000000000 || *plVar32 == 0) goto LAB_10144cf50;
LAB_10144cee0:
          _free(plVar32[1]);
          if (plVar32[3] != -0x8000000000000000 && plVar32[3] != 0) goto LAB_10144cf60;
LAB_10144cef8:
          plVar32 = plVar32 + 0xc;
          lVar51 = lVar51 + -1;
          if (lVar51 == 0) goto LAB_10144cf74;
        }
        _free(plVar32[-2]);
        if (*plVar32 != -0x8000000000000000 && *plVar32 != 0) goto LAB_10144cee0;
LAB_10144cf50:
        if (plVar32[3] == -0x8000000000000000 || plVar32[3] == 0) goto LAB_10144cef8;
LAB_10144cf60:
        _free(plVar32[4]);
        plVar32 = plVar32 + 0xc;
        lVar51 = lVar51 + -1;
      } while (lVar51 != 0);
    }
LAB_10144cf74:
    auVar61 = auStack_230;
    if (lVar34 != 0) {
      _free(lVar47);
      auVar61 = auStack_230;
    }
  }
LAB_10144c2fc:
  uVar37 = (lVar39 - 0x40U >> 6) + 1;
  lVar31 = lStack_298;
  if (lVar45 == lStack_298) goto LAB_10144d4c0;
  goto LAB_10144c30c;
LAB_10144ca4c:
  do {
    if (plVar32[-6] != 0) {
      _free(plVar32[-5]);
    }
    if (plVar32[-3] != -0x8000000000000000 && plVar32[-3] != 0) {
      _free(plVar32[-2]);
      if (*plVar32 != -0x8000000000000000 && *plVar32 != 0) goto LAB_10144ca28;
LAB_10144ca9c:
      if (plVar32[3] == -0x8000000000000000 || plVar32[3] == 0) goto LAB_10144ca40;
LAB_10144caac:
      _free(plVar32[4]);
      plVar32 = plVar32 + 0xc;
      lVar42 = lVar42 + -1;
      if (lVar42 == 0) break;
      goto LAB_10144ca4c;
    }
    if (*plVar32 == -0x8000000000000000 || *plVar32 == 0) goto LAB_10144ca9c;
LAB_10144ca28:
    _free(plVar32[1]);
    if (plVar32[3] != -0x8000000000000000 && plVar32[3] != 0) goto LAB_10144caac;
LAB_10144ca40:
    plVar32 = plVar32 + 0xc;
    lVar42 = lVar42 + -1;
  } while (lVar42 != 0);
LAB_10144cac0:
  if (lVar31 != 0) {
    _free(lVar34);
  }
LAB_10144cad0:
  lVar34 = lStack_108;
  lVar31 = lStack_110;
  if (lStack_110 != -0x8000000000000000) {
    if (lStack_100 != 0) {
      puVar40 = (undefined8 *)(lStack_108 + 8);
      lVar42 = lStack_100;
      do {
        if (puVar40[-1] != 0) {
          _free(*puVar40);
        }
        puVar40 = puVar40 + 3;
        lVar42 = lVar42 + -1;
      } while (lVar42 != 0);
    }
    if (lVar31 != 0) {
      _free(lVar34);
    }
  }
  lVar31 = CONCAT71(uStack_1b7,cStack_1b8);
  if (lStack_1c0 == 2) {
    lVar47 = lVar47 + lVar48 + 0x40;
    lVar38 = CONCAT71(uStack_1af,cStack_1b0);
    lVar48 = CONCAT71(uStack_1a7,cStack_1a8);
    lVar49 = CONCAT71(uStack_19f,uStack_1a0);
    lVar44 = CONCAT71(uStack_197,uStack_198);
    lVar42 = CONCAT71(uStack_18f,uStack_190);
    lVar9 = lStack_160;
joined_r0x00010144ccb4:
    lStack_160 = lVar51;
    uVar37 = lVar54 - lVar47;
    auVar61 = auStack_230;
    if (uVar37 == 0) {
LAB_10144ccb8:
      lStack_160 = lVar9;
      auStack_230._8_8_ = auVar61._8_8_;
      auStack_230._0_8_ = auVar61._0_8_;
      lVar45 = lVar45 + 0x40;
      uStack_288 = uStack_288 + 1;
      uStack_1f8 = CONCAT71(uStack_18f,uStack_190);
      uStack_200 = CONCAT71(uStack_197,uStack_198);
      uStack_208 = CONCAT71(uStack_19f,uStack_1a0);
      uStack_210 = CONCAT71(uStack_1a7,cStack_1a8);
      uStack_218 = CONCAT71(uStack_1af,cStack_1b0);
      uStack_220 = CONCAT71(uStack_1b7,cStack_1b8);
      uVar37 = uStack_288;
      lVar31 = lVar45;
      if (lVar43 != -0x8000000000000000) {
        uVar46 = FUN_100e8dd9c(auStack_230._0_8_,auStack_230._8_8_,uVar3,lVar30);
        auStack_230 = auVar61;
        uVar37 = uStack_258;
        lVar31 = lStack_260;
        if (uStack_240 == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h097a6304f7593f46E
                    (&plStack_250,1,lStack_260,uStack_258,1);
        }
        uVar4 = uStack_248;
        plVar32 = plStack_250;
        bVar27 = false;
        lVar47 = 0;
        bVar2 = (byte)(uVar46 >> 0x38);
        bVar52 = bVar2 >> 1;
        uVar36 = uVar46 & uStack_248;
        lVar54 = *(long *)((long)plStack_250 + uVar36);
        uVar35 = CONCAT17(-((byte)((ulong)lVar54 >> 0x38) == bVar52),
                          CONCAT16(-((byte)((ulong)lVar54 >> 0x30) == bVar52),
                                   CONCAT15(-((byte)((ulong)lVar54 >> 0x28) == bVar52),
                                            CONCAT14(-((byte)((ulong)lVar54 >> 0x20) == bVar52),
                                                     CONCAT13(-((byte)((ulong)lVar54 >> 0x18) ==
                                                               bVar52),CONCAT12(-((byte)((ulong)
                                                  lVar54 >> 0x10) == bVar52),
                                                  CONCAT11(-((byte)((ulong)lVar54 >> 8) == bVar52),
                                                           -((byte)lVar54 == bVar52)))))))) &
                 0x8080808080808080;
        uVar50 = uStack_258;
        uVar14 = uStack_90;
        uVar11 = uStack_8f;
joined_r0x00010144cd3c:
        while (uStack_258 = uVar50, uStack_90 = uVar14, uStack_8f = uVar11, uVar35 == 0) {
          cVar55 = (char)((ulong)lVar54 >> 8);
          cVar56 = (char)((ulong)lVar54 >> 0x10);
          cVar57 = (char)((ulong)lVar54 >> 0x18);
          cVar58 = (char)((ulong)lVar54 >> 0x20);
          cVar59 = (char)((ulong)lVar54 >> 0x28);
          cVar60 = (char)((ulong)lVar54 >> 0x30);
          if (bVar27) {
LAB_10144cdfc:
            bVar53 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar54 >> 0x38) == -1),
                                         CONCAT16(-(cVar60 == -1),
                                                  CONCAT15(-(cVar59 == -1),
                                                           CONCAT14(-(cVar58 == -1),
                                                                    CONCAT13(-(cVar57 == -1),
                                                                             CONCAT12(-(cVar56 == -1
                                                                                       ),CONCAT11(-(
                                                  cVar55 == -1),-((char)lVar54 == -1)))))))),1);
            if ((bVar53 & 1) != 0) {
              uVar35 = (ulong)*(char *)((long)plVar32 + uStack_2b8);
              uVar37 = uStack_2b8;
              if (-1 < *(char *)((long)plVar32 + uStack_2b8)) {
                lVar30 = *plVar32;
                uVar37 = CONCAT17(-(lVar30 < 0),
                                  CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar30 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar30 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar30 >> 8) < '\0'),
                                                           -((char)lVar30 < '\0'))))))));
                uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
                uVar35 = (ulong)*(byte *)((long)plVar32 + uVar37);
              }
              *(byte *)((long)plVar32 + uVar37) = bVar2 >> 1;
              *(byte *)((long)plVar32 + (uVar37 - 8 & uVar4) + 8) = bVar2 >> 1;
              uStack_240 = uStack_240 - (uVar35 & 1);
              lStack_238 = lStack_238 + 1;
              plVar32[-1 - uVar37] = uVar50;
              uStack_90 = (undefined1)uVar46;
              uVar16 = uStack_90;
              uStack_8f = (undefined7)(uVar46 >> 8);
              uVar12 = uStack_8f;
              if (uVar50 == uStack_268) {
                uVar37 = uStack_240 + lStack_238;
                uVar46 = uVar37;
                if (0x199999999999998 < uVar37) {
                  uVar46 = 0x199999999999999;
                }
                uStack_90 = uVar14;
                uStack_8f = uVar11;
                if (1 < uVar46 - uVar50 && uVar50 <= uVar37) {
                  FUN_108854f18(&lStack_d8,uVar50,lStack_260,uVar46,8,0x50);
                  if ((int)lStack_d8 != 1) {
                    lStack_260 = CONCAT71(uStack_cf,cStack_d0);
                    uStack_268 = uVar46;
                    goto LAB_10144cfdc;
                  }
                }
                FUN_108854f18(&lStack_d8,uVar50,lStack_260,uVar50 + 1,8,0x50);
                if ((int)lStack_d8 == 1) {
                  func_0x0001087c9084(CONCAT71(uStack_cf,cStack_d0),CONCAT71(uStack_c7,cStack_c8));
                  goto LAB_10144d674;
                }
                lStack_260 = CONCAT71(uStack_cf,cStack_d0);
                cStack_d0 = cVar5;
                uStack_cf = uVar6;
                cStack_c8 = cVar7;
                uStack_c7 = uVar8;
                uStack_b8 = (undefined1)uStack_218;
                uStack_b7 = (undefined7)((ulong)uStack_218 >> 8);
                cStack_c0 = (char)uStack_220;
                uStack_bf = (undefined7)((ulong)uStack_220 >> 8);
                uStack_a8 = (undefined1)uStack_208;
                uStack_a7 = (undefined7)((ulong)uStack_208 >> 8);
                uStack_b0 = (undefined1)uStack_210;
                uStack_af = (undefined7)((ulong)uStack_210 >> 8);
                uStack_98 = (undefined1)uStack_1f8;
                uStack_97 = (undefined7)((ulong)uStack_1f8 >> 8);
                uStack_a0 = (undefined1)uStack_200;
                uStack_9f = (undefined7)((ulong)uStack_200 >> 8);
                uStack_268 = uVar50 + 1;
                lStack_d8 = lVar43;
                uStack_90 = uVar16;
                uStack_8f = uVar12;
              }
              else {
LAB_10144cfdc:
                cStack_d0 = cVar5;
                uStack_cf = uVar6;
                cStack_c8 = cVar7;
                uStack_c7 = uVar8;
                uStack_b8 = (undefined1)uStack_218;
                uStack_b7 = (undefined7)((ulong)uStack_218 >> 8);
                cStack_c0 = (char)uStack_220;
                uStack_bf = (undefined7)((ulong)uStack_220 >> 8);
                uStack_a8 = (undefined1)uStack_208;
                uStack_a7 = (undefined7)((ulong)uStack_208 >> 8);
                uStack_b0 = (undefined1)uStack_210;
                uStack_af = (undefined7)((ulong)uStack_210 >> 8);
                uStack_98 = (undefined1)uStack_1f8;
                uStack_97 = (undefined7)((ulong)uStack_1f8 >> 8);
                uStack_a0 = (undefined1)uStack_200;
                uStack_9f = (undefined7)((ulong)uStack_200 >> 8);
                lStack_d8 = lVar43;
                uStack_90 = uVar16;
                uStack_8f = uVar12;
                if (uVar50 == uStack_268) {
                  func_0x00010891a054(&uStack_268);
                }
              }
              plVar32 = (long *)(lStack_260 + uVar50 * 0x50);
              plVar32[3] = CONCAT71(uStack_bf,cStack_c0);
              plVar32[2] = CONCAT71(uStack_c7,cStack_c8);
              plVar32[5] = CONCAT71(uStack_af,uStack_b0);
              plVar32[4] = CONCAT71(uStack_b7,uStack_b8);
              plVar32[7] = CONCAT71(uStack_9f,uStack_a0);
              plVar32[6] = CONCAT71(uStack_a7,uStack_a8);
              plVar32[1] = CONCAT71(uStack_cf,cStack_d0);
              *plVar32 = lStack_d8;
              plVar32[9] = CONCAT71(uStack_8f,uStack_90);
              plVar32[8] = CONCAT71(uStack_97,uStack_98);
              uStack_258 = uVar50 + 1;
              auVar61 = auStack_230;
              goto LAB_10144c2fc;
            }
            bVar27 = true;
          }
          else {
            uVar35 = CONCAT17(-(lVar54 < 0),
                              CONCAT16(-(cVar60 < '\0'),
                                       CONCAT15(-(cVar59 < '\0'),
                                                CONCAT14(-(cVar58 < '\0'),
                                                         CONCAT13(-(cVar57 < '\0'),
                                                                  CONCAT12(-(cVar56 < '\0'),
                                                                           CONCAT11(-(cVar55 < '\0')
                                                                                    ,-((char)lVar54
                                                                                      < '\0'))))))))
            ;
            if (uVar35 != 0) {
              uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
              uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
              uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
              uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
              uStack_2b8 = uVar36 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3) & uVar4;
              goto LAB_10144cdfc;
            }
            bVar27 = false;
          }
          lVar47 = lVar47 + 8;
          uVar36 = lVar47 + uVar36 & uVar4;
          lVar54 = *(long *)((long)plVar32 + uVar36);
          uVar35 = CONCAT17(-((byte)((ulong)lVar54 >> 0x38) == bVar52),
                            CONCAT16(-((byte)((ulong)lVar54 >> 0x30) == bVar52),
                                     CONCAT15(-((byte)((ulong)lVar54 >> 0x28) == bVar52),
                                              CONCAT14(-((byte)((ulong)lVar54 >> 0x20) == bVar52),
                                                       CONCAT13(-((byte)((ulong)lVar54 >> 0x18) ==
                                                                 bVar52),CONCAT12(-((byte)((ulong)
                                                  lVar54 >> 0x10) == bVar52),
                                                  CONCAT11(-((byte)((ulong)lVar54 >> 8) == bVar52),
                                                           -((byte)lVar54 == bVar52)))))))) &
                   0x8080808080808080;
        }
        uVar50 = (uVar35 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar35 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10;
        uVar50 = plVar32[-1 - (uVar36 + ((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3) &
                              uVar4)];
        if (uVar37 <= uVar50) {
          func_0x000108a07bdc(uVar50,uVar37,&UNK_10b24da78);
          goto LAB_10144d674;
        }
        lVar34 = lVar31 + uVar50 * 0x50;
        if (lVar30 == *(long *)(lVar34 + 0x10)) {
          iVar28 = _memcmp(uVar3,*(undefined8 *)(lVar34 + 8),lVar30);
          if (iVar28 == 0) goto LAB_10144ce40;
        }
        uVar35 = uVar35 - 1 & uVar35;
        uVar50 = uStack_258;
        uVar14 = uStack_90;
        uVar11 = uStack_8f;
        goto joined_r0x00010144cd3c;
      }
      goto LAB_10144d4c0;
    }
    FUN_1087e427c(&lStack_d8,lStack_160 + (uVar37 >> 6),&lStack_160,&UNK_10b23a190);
    lVar9 = lStack_160;
    auVar61 = auStack_230;
    if (lStack_d8 == 2) goto LAB_10144ccb8;
    uStack_198 = uStack_b0;
    uStack_197 = uStack_af;
    uStack_1a0 = uStack_b8;
    uStack_19f = uStack_b7;
    uStack_188 = uStack_a0;
    uStack_187 = uStack_9f;
    uStack_190 = uStack_a8;
    uStack_18f = uStack_a7;
    uStack_178 = uStack_90;
    uStack_177 = uStack_8f;
    uStack_180 = uStack_98;
    uStack_17f = uStack_97;
    lStack_170 = lStack_88;
    cStack_1b8 = cStack_d0;
    uStack_1b7 = uStack_cf;
    lStack_1c0 = lStack_d8;
    cStack_1a8 = cStack_c0;
    uStack_1a7 = uStack_bf;
    cStack_1b0 = cStack_c8;
    uStack_1af = uStack_c7;
    if (lVar48 != 0) {
      puVar40 = (undefined8 *)(lVar38 + 8);
      do {
        if (puVar40[-1] != 0) {
          _free(*puVar40);
        }
        puVar40 = puVar40 + 3;
        lVar48 = lVar48 + -1;
      } while (lVar48 != 0);
    }
    lVar47 = lVar44;
    if (lVar31 != 0) {
      _free(lVar38);
    }
    for (; lVar42 != 0; lVar42 = lVar42 + -1) {
      FUN_100e4d1c8(lVar47);
      lVar47 = lVar47 + 0x60;
    }
    if (lVar49 != 0) {
LAB_10144cb78:
      _free(lVar44);
    }
LAB_10144cb7c:
    lVar9 = lStack_160;
    auVar61 = auStack_230;
    if (lStack_1c0 == 2) goto LAB_10144ccb8;
    lVar31 = CONCAT71(uStack_1b7,cStack_1b8);
  }
  lVar39 = lStack_170;
  lVar41 = lStack_1c0;
  uStack_270 = CONCAT71(uStack_1af,cStack_1b0);
  lVar30 = CONCAT71(uStack_1a7,cStack_1a8);
  uStack_1e8 = uStack_198;
  uStack_1e7 = uStack_197;
  uStack_1f0 = uStack_1a0;
  uStack_1ef = uStack_19f;
  uStack_1d8 = uStack_188;
  uStack_1d7 = uStack_187;
  uStack_1e0 = uStack_190;
  uStack_1df = uStack_18f;
  uStack_1c8 = uStack_178;
  uStack_1c7 = uStack_177;
  uStack_1d0 = uStack_180;
  uStack_1cf = uStack_17f;
  if (lVar43 != 0) {
    _free(uVar3);
  }
LAB_10144d380:
  uStack_218._0_1_ = uStack_1e8;
  uStack_218._1_7_ = uStack_1e7;
  uStack_220._0_1_ = uStack_1f0;
  uStack_220._1_7_ = uStack_1ef;
  uStack_208._0_1_ = uStack_1d8;
  uStack_208._1_7_ = uStack_1d7;
  uStack_210._0_1_ = uStack_1e0;
  uStack_210._1_7_ = uStack_1df;
  uStack_1f8._0_1_ = uStack_1c8;
  uStack_1f8._1_7_ = uStack_1c7;
  uStack_200._0_1_ = uStack_1d0;
  uStack_200._1_7_ = uStack_1cf;
  uStack_198 = uStack_1e8;
  uStack_197 = uStack_1e7;
  uStack_1a0 = uStack_1f0;
  uStack_19f = uStack_1ef;
  uStack_188 = uStack_1d8;
  uStack_187 = uStack_1d7;
  uStack_190 = uStack_1e0;
  uStack_18f = uStack_1df;
  uStack_178 = uStack_1c8;
  uStack_177 = uStack_1c7;
  uStack_180 = uStack_1d0;
  uStack_17f = uStack_1cf;
  cStack_1b8 = (char)lVar31;
  uStack_1b7 = (undefined7)((ulong)lVar31 >> 8);
  cStack_1b0 = (char)uStack_270;
  uStack_1af = (undefined7)((ulong)uStack_270 >> 8);
  cStack_1a8 = (char)lVar30;
  uStack_1a7 = (undefined7)((ulong)lVar30 >> 8);
  lStack_1c0 = lVar41;
  lStack_170 = lVar39;
  if ((uStack_248 != 0) && (uStack_248 * 9 != -0x11)) {
    _free(plStack_250 + (-1 - uStack_248));
  }
  lVar41 = lStack_260;
  if (uStack_258 != 0) {
    lVar39 = lStack_260 + 0x18;
    uVar37 = uStack_258;
    do {
      if (*(long *)(lVar39 + -0x18) != 0) {
        _free(*(undefined8 *)(lVar39 + -0x10));
      }
      FUN_100e38614(lVar39);
      lVar39 = lVar39 + 0x50;
      uVar37 = uVar37 - 1;
    } while (uVar37 != 0);
  }
  if (uStack_268 != 0) {
    _free(lVar41);
  }
LAB_10144d41c:
  if (lStack_1c0 != 2) {
    param_1[5] = CONCAT71(uStack_197,uStack_198);
    param_1[4] = CONCAT71(uStack_19f,uStack_1a0);
    param_1[7] = CONCAT71(uStack_187,uStack_188);
    param_1[6] = CONCAT71(uStack_18f,uStack_190);
    param_1[9] = CONCAT71(uStack_177,uStack_178);
    param_1[8] = CONCAT71(uStack_17f,uStack_180);
    param_1[10] = lStack_170;
    param_1[1] = CONCAT71(uStack_1b7,cStack_1b8);
    *param_1 = lStack_1c0;
    param_1[3] = CONCAT71(uStack_1a7,cStack_1a8);
    param_1[2] = CONCAT71(uStack_1af,cStack_1b0);
    return;
  }
LAB_10144d500:
  param_1[4] = CONCAT71(uStack_19f,uStack_1a0);
  param_1[3] = CONCAT71(uStack_1a7,cStack_1a8);
  param_1[6] = CONCAT71(uStack_18f,uStack_190);
  param_1[5] = CONCAT71(uStack_197,uStack_198);
  param_1[8] = CONCAT71(uStack_17f,uStack_180);
  param_1[7] = CONCAT71(uStack_187,uStack_188);
  param_1[9] = CONCAT71(uStack_177,uStack_178);
  param_1[2] = CONCAT71(uStack_1af,cStack_1b0);
  param_1[1] = CONCAT71(uStack_1b7,cStack_1b8);
  *param_1 = 2;
  return;
}

