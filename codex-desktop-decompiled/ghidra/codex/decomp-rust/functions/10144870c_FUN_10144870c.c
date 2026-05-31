
/* WARNING: Removing unreachable block (ram,0x000101448fc4) */
/* WARNING: Removing unreachable block (ram,0x000101448c34) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10144870c(long *param_1,char *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  char *pcVar8;
  undefined6 uVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  undefined7 uVar12;
  byte bVar13;
  byte bVar14;
  undefined6 uVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined6 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined6 uVar21;
  byte bVar22;
  byte bVar23;
  undefined6 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined6 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined6 uVar30;
  undefined2 uVar31;
  undefined6 uVar32;
  code *pcVar33;
  int iVar34;
  long lVar35;
  undefined1 (*pauVar36) [16];
  ulong uVar37;
  char *pcVar38;
  char *pcVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  ulong uVar43;
  byte bVar44;
  long lVar45;
  uint uVar46;
  uint uVar47;
  long lVar48;
  long lVar49;
  byte bVar50;
  long *plVar51;
  byte bVar52;
  char *pcVar53;
  long lVar54;
  long lVar55;
  byte bVar56;
  long lVar57;
  long *plVar58;
  ulong uVar59;
  long lVar60;
  byte *pbVar61;
  long lVar62;
  byte bVar63;
  long lVar64;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  long lVar65;
  undefined1 auVar72 [16];
  ulong uStack_280;
  long lStack_240;
  long lStack_238;
  char *pcStack_230;
  long lStack_228;
  long lStack_220;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined8 uStack_209;
  long *plStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined8 uStack_1d0;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  undefined6 uStack_1c0;
  undefined2 uStack_1ba;
  undefined6 uStack_1b8;
  undefined2 uStack_1b2;
  undefined6 uStack_1b0;
  undefined2 uStack_1aa;
  undefined6 uStack_1a8;
  undefined2 uStack_1a2;
  undefined6 uStack_1a0;
  long lStack_190;
  byte bStack_188;
  byte bStack_187;
  undefined6 uStack_186;
  byte bStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  byte bStack_170;
  byte bStack_16f;
  undefined6 uStack_16e;
  byte bStack_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined6 uStack_15e;
  byte bStack_158;
  byte bStack_157;
  undefined6 uStack_156;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  long lStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  byte bStack_119;
  undefined7 uStack_118;
  byte bStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined8 uStack_e9;
  long lStack_e0;
  byte bStack_d8;
  byte bStack_d7;
  undefined6 uStack_d6;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  byte bStack_b8;
  undefined1 uStack_b7;
  undefined6 uStack_b6;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  byte bStack_a8;
  byte bStack_a7;
  undefined6 uStack_a6;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined6 uStack_9e;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined1 auStack_81 [17];
  
  if (*param_2 == '\x15') {
    lVar54 = *(long *)(param_2 + 0x10);
    lVar60 = *(long *)(param_2 + 0x18) * 0x40;
    lStack_238 = 0;
    pcStack_230 = (char *)0x8;
    lStack_228 = 0;
    if (*(long *)(param_2 + 0x18) == 0) {
      lVar49 = 0;
      lStack_240 = lVar54;
    }
    else {
      lVar62 = 0;
      plVar51 = (long *)((ulong)&lStack_130 | 1);
      lVar49 = (lVar60 - 0x40U >> 6) + 1;
      lVar48 = 1;
      do {
        pbVar1 = (byte *)(lVar54 + lVar62);
        bVar50 = *pbVar1;
        if (bVar50 < 0xd) {
          if (bVar50 == 1) {
            bStack_d7 = *(byte *)(lVar54 + lVar62 + 1);
            bStack_d8 = 1;
            goto LAB_101448910;
          }
          if (bVar50 == 4) {
            uVar41 = *(undefined8 *)(lVar54 + lVar62 + 8);
            bStack_d8 = 4;
            bStack_d0 = (byte)uVar41;
            uStack_cf = (undefined7)((ulong)uVar41 >> 8);
            goto LAB_101448910;
          }
          if (bVar50 == 0xc) {
            uVar41 = *(undefined8 *)(lVar54 + lVar62 + 0x10);
            lVar64 = *(long *)(lVar54 + lVar62 + 0x18);
            if (lVar64 == 0) {
              lVar35 = 1;
            }
            else {
              lVar35 = _malloc(lVar64);
              if (lVar35 == 0) goto LAB_101449840;
            }
            _memcpy(lVar35,uVar41,lVar64);
            bStack_d8 = 0xc;
            goto LAB_1014488fc;
          }
LAB_101448988:
          FUN_108855bf0(&lStack_e0,pbVar1,auStack_81,&UNK_10b215288);
          lStack_220 = CONCAT17(bStack_d0,CONCAT61(uStack_d6,bStack_d7));
          uStack_128 = uStack_cf;
          bStack_119 = bStack_c0;
          uStack_118 = (undefined7)(CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0)) >> 8);
          uStack_121 = uStack_c8;
          uStack_120 = uStack_c7;
          lStack_130 = lStack_220;
          if (lStack_e0 != 2) {
            uStack_160 = uStack_b0;
            uStack_15f = uStack_af;
            uStack_15e = uStack_ae;
            bStack_168 = bStack_b8;
            uStack_167 = uStack_b7;
            uStack_166 = uStack_b6;
            uStack_150 = uStack_a0;
            uStack_14f = uStack_9f;
            uStack_14e = uStack_9e;
            bStack_158 = bStack_a8;
            bStack_157 = bStack_a7;
            uStack_156 = uStack_a6;
            uStack_140 = uStack_90;
            uStack_13e = uStack_8e;
            uStack_148 = uStack_98;
            uStack_147 = uStack_97;
            uStack_146 = uStack_96;
            uStack_218 = uStack_cf;
            uStack_209 = CONCAT71(uStack_118,bStack_c0);
            uStack_211 = uStack_c8;
            uStack_210 = uStack_c7;
            bStack_170 = bStack_c0;
            bStack_16f = bStack_bf;
            uStack_16e = uStack_be;
            uStack_177 = uStack_c7;
            uStack_17f = uStack_cf;
            uStack_178 = uStack_c8;
            bStack_187 = bStack_d7;
            uStack_186 = uStack_d6;
            bStack_180 = bStack_d0;
            lStack_190 = lStack_e0;
            bStack_188 = bStack_d8;
            goto LAB_1014495dc;
          }
          uStack_209 = CONCAT71(uStack_118,bStack_c0);
          bVar50 = bStack_d8;
          if (bStack_d8 == 0x16) {
            lStack_240 = lVar54 + lVar62 + 0x40;
            goto LAB_101448a18;
          }
        }
        else {
          if (bVar50 == 0xd) {
            uVar41 = *(undefined8 *)(lVar54 + lVar62 + 8);
            uVar42 = *(undefined8 *)(lVar54 + lVar62 + 0x10);
            bStack_d8 = 0xd;
          }
          else {
            if (bVar50 == 0xe) {
              uVar41 = *(undefined8 *)(lVar54 + lVar62 + 0x10);
              lVar64 = *(long *)(lVar54 + lVar62 + 0x18);
              if (lVar64 == 0) {
                lVar35 = 1;
              }
              else {
                lVar35 = _malloc(lVar64);
                if (lVar35 == 0) {
LAB_101449840:
                  func_0x0001087c9084(1,lVar64);
                    /* WARNING: Does not return */
                  pcVar33 = (code *)SoftwareBreakpoint(1,0x101449850);
                  (*pcVar33)();
                }
              }
              _memcpy(lVar35,uVar41,lVar64);
              bStack_d8 = 0xe;
LAB_1014488fc:
              bStack_d0 = (byte)lVar64;
              uStack_cf = (undefined7)((ulong)lVar64 >> 8);
              uStack_c8 = (undefined1)lVar35;
              uStack_c7 = (undefined7)((ulong)lVar35 >> 8);
              bStack_bf = (byte)((ulong)lVar64 >> 8);
              uStack_be = (undefined6)((ulong)lVar64 >> 0x10);
              bStack_c0 = bStack_d0;
              goto LAB_101448910;
            }
            if (bVar50 != 0xf) goto LAB_101448988;
            uVar41 = *(undefined8 *)(lVar54 + lVar62 + 8);
            uVar42 = *(undefined8 *)(lVar54 + lVar62 + 0x10);
            bStack_d8 = 0xf;
          }
          bStack_d0 = (byte)uVar41;
          uStack_cf = (undefined7)((ulong)uVar41 >> 8);
          uStack_c8 = (undefined1)uVar42;
          uStack_c7 = (undefined7)((ulong)uVar42 >> 8);
LAB_101448910:
          lStack_130 = CONCAT17(bStack_d0,CONCAT61(uStack_d6,bStack_d7));
          uStack_118 = (undefined7)(CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0)) >> 8);
          uStack_209 = CONCAT71(uStack_118,bStack_c0);
        }
        lStack_220 = lStack_130;
        plVar51[1] = CONCAT17(uStack_c8,uStack_cf);
        *plVar51 = lStack_130;
        *(undefined8 *)((long)plVar51 + 0x17) = uStack_209;
        *(ulong *)((long)plVar51 + 0xf) = CONCAT71(uStack_c7,uStack_c8);
        lStack_130 = CONCAT71(lStack_130._1_7_,bVar50);
        uStack_218 = uStack_cf;
        uStack_211 = uStack_c8;
        uStack_210 = uStack_c7;
        uStack_128 = uStack_cf;
        uStack_121 = uStack_c8;
        uStack_120 = uStack_c7;
        bStack_119 = bStack_c0;
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&bStack_d8,pbVar1 + 0x20);
        uStack_a6 = uStack_be;
        bStack_a7 = bStack_bf;
        bStack_a8 = bStack_c0;
        uStack_b0 = uStack_c8;
        bStack_b8 = bStack_d0;
        uVar9 = uStack_d6;
        bVar52 = bStack_d7;
        bVar50 = bStack_d8;
        lVar64 = lStack_228;
        bStack_168 = bStack_d0;
        uStack_167 = (undefined1)uStack_cf;
        uStack_166 = (undefined6)((uint7)uStack_cf >> 8);
        bStack_170 = bStack_d8;
        bStack_16f = bStack_d7;
        uStack_16e = uStack_d6;
        bStack_158 = bStack_c0;
        bStack_157 = bStack_bf;
        uStack_156 = uStack_be;
        uStack_160 = uStack_c8;
        uStack_15f = (undefined1)uStack_c7;
        uStack_15e = (undefined6)((uint7)uStack_c7 >> 8);
        lStack_e0 = lStack_130;
        bStack_d8 = (byte)uStack_128;
        bStack_d7 = (byte)((uint7)uStack_128 >> 8);
        uStack_d6 = (undefined6)(CONCAT17(uStack_121,uStack_128) >> 0x10);
        uStack_c8 = (undefined1)uStack_118;
        uStack_c7 = (undefined7)(CONCAT17(bStack_111,uStack_118) >> 8);
        bStack_d0 = (byte)uStack_120;
        uStack_cf = (undefined7)(CONCAT17(bStack_119,uStack_120) >> 8);
        uStack_b7 = uStack_167;
        uStack_b6 = uStack_166;
        bStack_c0 = bVar50;
        bStack_bf = bVar52;
        uStack_be = uVar9;
        uStack_af = uStack_15f;
        uStack_ae = uStack_15e;
        if (lStack_228 == lStack_238) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_238);
        }
        plVar58 = (long *)(pcStack_230 + lVar64 * 0x40);
        plVar58[1] = CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8));
        *plVar58 = lStack_e0;
        plVar58[3] = CONCAT71(uStack_c7,uStack_c8);
        plVar58[2] = CONCAT71(uStack_cf,bStack_d0);
        plVar58[5] = CONCAT62(uStack_b6,CONCAT11(uStack_b7,bStack_b8));
        plVar58[4] = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
        plVar58[7] = CONCAT62(uStack_a6,CONCAT11(bStack_a7,bStack_a8));
        plVar58[6] = CONCAT62(uStack_ae,CONCAT11(uStack_af,uStack_b0));
        lStack_228 = lVar64 + 1;
        lVar62 = lVar62 + 0x40;
        lVar48 = lVar48 + 1;
        lStack_240 = lVar54 + lVar60;
      } while (lVar60 - lVar62 != 0);
    }
    uStack_209 = CONCAT71(uStack_118,bStack_119);
    lVar48 = lVar49;
LAB_101448a18:
    lVar49 = lStack_228;
    pcVar8 = pcStack_230;
    lStack_220 = lStack_130;
    uStack_218 = uStack_128;
    uStack_211 = uStack_121;
    uStack_210 = uStack_120;
    pauVar36 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar36[1][0] == '\x01') {
      auVar72 = *pauVar36;
    }
    else {
      auVar72 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar36 + 8) = auVar72._8_8_;
      pauVar36[1][0] = 1;
    }
    *(long *)*pauVar36 = auVar72._0_8_ + 1;
    plStack_200 = (long *)&UNK_108c56c70;
    uStack_1f8 = 0;
    lStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e6 = 0;
    uStack_1e0 = auVar72._0_2_;
    uStack_1de = auVar72._2_6_;
    uStack_1d8 = auVar72._8_2_;
    uStack_1d6 = auVar72._10_6_;
    pcVar53 = pcVar8;
LAB_101448a60:
    pcVar38 = pcVar53;
    if (pcVar38 != pcVar8 + lVar49 * 0x40) {
      pcVar53 = pcVar38 + 0x40;
      if (*pcVar38 != '\x16') {
        func_0x0001004e0914(&lStack_e0,pcVar38);
        lVar64 = CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8));
        lVar35 = CONCAT71(uStack_cf,bStack_d0);
        lVar62 = CONCAT71(uStack_c7,uStack_c8);
        if (lStack_e0 != 2) {
          uStack_1d0 = CONCAT17(uStack_b7,CONCAT16(bStack_b8,uStack_be));
          uStack_1c2 = (undefined2)(CONCAT17(uStack_af,CONCAT16(uStack_b0,uStack_b6)) >> 0x30);
          uStack_1b2 = (undefined2)(CONCAT17(uStack_9f,CONCAT16(uStack_a0,uStack_a6)) >> 0x30);
          uStack_1ba = (undefined2)(CONCAT17(bStack_a7,CONCAT16(bStack_a8,uStack_ae)) >> 0x30);
          uStack_1aa = (undefined2)(CONCAT17(uStack_97,CONCAT16(uStack_98,uStack_9e)) >> 0x30);
          uVar37 = uStack_1f8;
          uStack_1c8 = uStack_b6;
          uStack_1c0 = uStack_ae;
          uStack_1b8 = uStack_a6;
          uStack_1b0 = uStack_9e;
          uStack_1a8 = uStack_96;
          uStack_1a2 = uStack_90;
          uStack_1a0 = uStack_8e;
          lVar49 = lStack_e0;
          lVar54 = lVar64;
          lVar60 = lVar35;
          bVar50 = bStack_c0;
          bVar52 = bStack_bf;
joined_r0x000101449500:
          uStack_1f8 = uVar37;
          if (uVar37 != 0) {
            lVar48 = CONCAT62(uStack_1e6,uStack_1e8);
            if (lVar48 != 0) {
              plVar58 = plStack_200 + 1;
              lVar64 = *plStack_200;
              uVar59 = CONCAT17(-(-1 < lVar64),
                                CONCAT16(-(-1 < (char)((ulong)lVar64 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar64 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar64 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar64 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar64 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar64 >> 8)),
                                                           -(-1 < (char)lVar64)))))))) &
                       0x8080808080808080;
              plVar51 = plStack_200;
              do {
                while (uVar59 == 0) {
                  lVar64 = *plVar58;
                  plVar51 = plVar51 + -0x20;
                  plVar58 = plVar58 + 1;
                  uVar59 = CONCAT17(-(-1 < lVar64),
                                    CONCAT16(-(-1 < (char)((ulong)lVar64 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar64 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar64 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar64
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar64 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar64 >> 8)),
                                                           -(-1 < (char)lVar64)))))))) &
                           0x8080808080808080;
                }
                uVar5 = (uVar59 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar59 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) & 0x78;
                if (*(long *)((long)plVar51 + uVar5 * -4 + -0x20) != 0) {
                  _free(*(undefined8 *)((long)plVar51 + uVar5 * -4 + -0x18));
                }
                uVar59 = uVar59 - 1 & uVar59;
                lVar48 = lVar48 + -1;
              } while (lVar48 != 0);
            }
            if (uVar37 * 0x21 != -0x29) {
              _free(plStack_200 + uVar37 * -4 + -4);
            }
          }
          uStack_150 = (undefined1)uStack_1b2;
          uStack_14f = (undefined1)((ushort)uStack_1b2 >> 8);
          uStack_14e = uStack_1b0;
          bStack_158 = (byte)uStack_1ba;
          bStack_157 = (byte)((ushort)uStack_1ba >> 8);
          uStack_156 = uStack_1b8;
          uStack_140 = uStack_1a2;
          uStack_13e = uStack_1a0;
          uStack_148 = (undefined1)uStack_1aa;
          uStack_147 = (undefined1)((ushort)uStack_1aa >> 8);
          uStack_146 = uStack_1a8;
          uStack_166 = uStack_1c8;
          uStack_16e = (undefined6)uStack_1d0;
          bStack_168 = (byte)((ulong)uStack_1d0 >> 0x30);
          uStack_167 = (undefined1)((ulong)uStack_1d0 >> 0x38);
          uStack_160 = (undefined1)uStack_1c2;
          uStack_15f = (undefined1)((ushort)uStack_1c2 >> 8);
          uStack_15e = uStack_1c0;
          bStack_188 = (byte)lVar54;
          bStack_187 = (byte)((ulong)lVar54 >> 8);
          uStack_186 = (undefined6)((ulong)lVar54 >> 0x10);
          bStack_180 = (byte)lVar60;
          uStack_17f = (undefined7)((ulong)lVar60 >> 8);
          uStack_178 = (undefined1)lVar62;
          uStack_177 = (undefined7)((ulong)lVar62 >> 8);
          lStack_190 = lVar49;
          bStack_170 = bVar50;
          bStack_16f = bVar52;
LAB_1014495dc:
          FUN_100d5c778(&lStack_238);
          goto LAB_1014495e8;
        }
        if (lVar64 == -0x8000000000000000) goto LAB_1014493ac;
        if (pcVar38[0x20] == '\x14') {
          pcVar4 = *(char **)(pcVar38 + 0x30);
          lVar45 = *(long *)(pcVar38 + 0x38);
          if (lVar45 == 0) {
            bVar50 = 2;
          }
          else {
            pcVar38 = pcVar4 + 0x20;
            cVar66 = *pcVar4;
            if (cVar66 != '\x10') {
              if (cVar66 == '\x11') {
                pcVar39 = *(char **)(pcVar4 + 8);
                if (*pcVar39 == '\0') {
                  bVar50 = pcVar39[1];
                  goto LAB_101449214;
                }
                FUN_108855bf0(&lStack_e0,pcVar39,auStack_81,&UNK_10b20a560);
LAB_101449370:
                uVar47 = (uint)bStack_d8;
                lVar65 = lStack_e0;
                if (lStack_e0 != 2) {
                  uStack_118 = CONCAT61(uStack_be,bStack_bf);
                  uStack_108 = CONCAT17(bStack_a8,CONCAT61(uStack_ae,uStack_af));
                  uStack_110 = CONCAT17(uStack_b0,CONCAT61(uStack_b6,uStack_b7));
                  uStack_f8 = CONCAT61(uStack_9e,uStack_9f);
                  uStack_100 = CONCAT17(uStack_a0,CONCAT61(uStack_a6,bStack_a7));
                  uStack_e9 = CONCAT62(uStack_8e,uStack_90);
                  uStack_f1 = uStack_98;
                  uStack_f0 = (undefined7)(CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98)) >> 8);
                  lStack_130 = CONCAT17(bStack_d0,CONCAT61(uStack_d6,bStack_d7));
                  uStack_128 = uStack_cf;
                  uStack_121 = uStack_c8;
                  bStack_111 = bStack_b8;
                  uStack_120 = uStack_c7;
                  bStack_119 = bStack_c0;
                }
              }
              else {
                if (cVar66 == '\x12') goto LAB_101448f58;
                if (cVar66 != '\0') {
                  FUN_108855bf0(&lStack_e0,pcVar4,auStack_81,&UNK_10b20a560);
                  goto LAB_101449370;
                }
                bVar50 = pcVar4[1];
LAB_101449214:
                uVar47 = (uint)bVar50;
                lVar65 = 2;
              }
              if (lVar65 == 2) {
                bVar50 = 2;
                if (uVar47 != 3) {
                  bVar50 = (byte)uVar47;
                }
                goto joined_r0x000101449240;
              }
              bStack_16f = (byte)uStack_118;
              uStack_16e = (undefined6)((uint7)uStack_118 >> 8);
              bStack_168 = bStack_111;
              uStack_177 = uStack_120;
              bStack_170 = bStack_119;
              uStack_15f = (undefined1)uStack_108;
              uStack_15e = (undefined6)((ulong)uStack_108 >> 8);
              bStack_158 = (byte)((ulong)uStack_108 >> 0x38);
              uStack_167 = (undefined1)uStack_110;
              uStack_166 = (undefined6)((ulong)uStack_110 >> 8);
              uStack_160 = (undefined1)((ulong)uStack_110 >> 0x38);
              uStack_14f = (undefined1)uStack_f8;
              uStack_14e = (undefined6)((uint7)uStack_f8 >> 8);
              bStack_157 = (byte)uStack_100;
              uStack_156 = (undefined6)((ulong)uStack_100 >> 8);
              uStack_150 = (undefined1)((ulong)uStack_100 >> 0x38);
              uStack_140 = (undefined2)uStack_e9;
              uStack_13e = (undefined6)((ulong)uStack_e9 >> 0x10);
              uStack_148 = uStack_f1;
              uStack_147 = (undefined1)uStack_f0;
              uStack_146 = (undefined6)((uint7)uStack_f0 >> 8);
              uStack_17f = uStack_128;
              uStack_178 = uStack_121;
              bStack_187 = (byte)lStack_130;
              uStack_186 = (undefined6)((ulong)lStack_130 >> 8);
              bStack_180 = (byte)((ulong)lStack_130 >> 0x38);
LAB_101449470:
              bStack_188 = (byte)uVar47;
              lStack_190 = lVar65;
              goto LAB_10144947c;
            }
LAB_101448f58:
            bVar50 = 2;
joined_r0x000101449240:
            if (pcVar38 != pcVar4 + lVar45 * 0x20) {
              cVar66 = *pcVar38;
              bVar52 = 3;
              if ((cVar66 != '\x10') && (cVar66 != '\x12')) {
                if (cVar66 == '\x11') {
                  pcVar38 = *(char **)(pcVar4 + 0x28);
                }
                FUN_101439718(&lStack_e0,pcVar38);
                bVar52 = bStack_d8;
                if (lStack_e0 != 2) {
LAB_101449690:
                  uVar47 = (uint)bStack_d8;
                  bStack_16f = bStack_bf;
                  uStack_16e = uStack_be;
                  bStack_168 = bStack_b8;
                  uStack_177 = uStack_c7;
                  bStack_170 = bStack_c0;
                  uStack_15f = uStack_af;
                  uStack_15e = uStack_ae;
                  bStack_158 = bStack_a8;
                  uStack_167 = uStack_b7;
                  uStack_166 = uStack_b6;
                  uStack_160 = uStack_b0;
                  uStack_14f = uStack_9f;
                  uStack_14e = uStack_9e;
                  bStack_157 = bStack_a7;
                  uStack_156 = uStack_a6;
                  uStack_150 = uStack_a0;
                  uStack_140 = uStack_90;
                  uStack_13e = uStack_8e;
                  uStack_148 = uStack_98;
                  uStack_147 = uStack_97;
                  uStack_146 = uStack_96;
                  uStack_17f = uStack_cf;
                  uStack_178 = uStack_c8;
                  bStack_187 = bStack_d7;
                  uStack_186 = uStack_d6;
                  bStack_180 = bStack_d0;
                  lVar65 = lStack_e0;
                  goto LAB_101449470;
                }
              }
              uVar37 = (long)(pcVar4 + lVar45 * 0x20) - (long)(pcVar4 + 0x40);
              lVar45 = lStack_130;
              if (uVar37 != 0) {
                lStack_130 = 2;
                FUN_1087e427c(&lStack_e0,(uVar37 >> 5) + 2,&lStack_130,&UNK_10b23a1b0);
                goto joined_r0x000101449054;
              }
              goto LAB_101449084;
            }
          }
          bVar52 = 3;
          uVar37 = FUN_100e8dd9c(CONCAT62(uStack_1de,uStack_1e0),CONCAT62(uStack_1d6,uStack_1d8),
                                 lVar35,lVar62);
        }
        else {
          if (pcVar38[0x20] == '\x15') {
            lVar3 = *(long *)(pcVar38 + 0x30);
            lVar45 = *(long *)(pcVar38 + 0x38) * 0x40;
            lVar2 = lVar3 + lVar45;
            if (*(long *)(pcVar38 + 0x38) == 0) {
              bStack_188 = 2;
              bStack_187 = 3;
              lVar55 = 0;
              lVar45 = lStack_130;
joined_r0x000101449288:
              lStack_130 = lVar55;
              uVar37 = lVar2 - lVar3;
              bVar52 = bStack_187;
              bVar50 = bStack_188;
              if (uVar37 != 0) {
                FUN_1087e427c(&lStack_e0,lStack_130 + (uVar37 >> 6),&lStack_130,&UNK_10b23a190);
                bVar52 = bStack_187;
                bVar50 = bStack_188;
joined_r0x000101449054:
                lVar65 = lStack_e0;
                bVar44 = bStack_d8;
                bVar56 = bStack_d7;
                uVar9 = uStack_d6;
                bVar63 = bStack_d0;
                uVar10 = uStack_cf;
                uVar11 = uStack_c8;
                uVar12 = uStack_c7;
                bVar13 = bStack_c0;
                bVar14 = bStack_bf;
                uVar15 = uStack_be;
                bVar16 = bStack_b8;
                uVar17 = uStack_b7;
                uVar18 = uStack_b6;
                uVar19 = uStack_b0;
                uVar20 = uStack_af;
                uVar21 = uStack_ae;
                bVar22 = bStack_a8;
                bVar23 = bStack_a7;
                uVar24 = uStack_a6;
                uVar25 = uStack_a0;
                uVar26 = uStack_9f;
                uVar27 = uStack_9e;
                uVar28 = uStack_98;
                uVar29 = uStack_97;
                uVar30 = uStack_96;
                uVar31 = uStack_90;
                uVar32 = uStack_8e;
                lVar45 = lStack_130;
                if (lStack_e0 != 2) goto LAB_101449310;
              }
            }
            else {
              lVar57 = 0;
              bVar50 = 4;
              uVar46 = 3;
              lVar55 = 1;
              do {
                pbVar1 = (byte *)(lVar3 + lVar57);
                pbVar61 = pbVar1 + 0x20;
                bVar52 = *pbVar1;
                if (bVar52 < 0xd) {
                  if (bVar52 == 1) {
                    cVar66 = *(char *)(lVar3 + lVar57 + 1);
                    bVar44 = 1;
                    if (cVar66 != '\x01') {
                      bVar44 = 2;
                    }
                    bVar52 = 0;
                    if (cVar66 != '\0') {
                      bVar52 = bVar44;
                    }
                  }
                  else if (bVar52 == 4) {
                    lVar65 = *(long *)(lVar3 + lVar57 + 8);
                    bVar44 = 1;
                    if (lVar65 != 1) {
                      bVar44 = 2;
                    }
                    bVar52 = 0;
                    if (lVar65 != 0) {
                      bVar52 = bVar44;
                    }
                  }
                  else {
                    if (bVar52 == 0xc) {
                      plVar51 = *(long **)(lVar3 + lVar57 + 0x10);
                      lVar65 = *(long *)(lVar3 + lVar57 + 0x18);
                      if (lVar65 != 0xd) goto joined_r0x000101448d60;
                      goto LAB_101448de4;
                    }
LAB_101448e88:
                    uStack_280 = CONCAT44(uStack_280._4_4_,uVar46);
                    FUN_108855bf0(&lStack_e0,pbVar1,auStack_81,&UNK_10b214f68);
                    bVar52 = bStack_d8;
                    if (lStack_e0 != 2) goto LAB_101449690;
                  }
joined_r0x000101448d44:
                  if (bVar52 != 0) goto LAB_101448dac;
LAB_101448c5c:
                  if (uVar46 != 3) {
                    puVar40 = &UNK_108ca2209;
                    uVar41 = 7;
                    goto LAB_101449264;
                  }
                  bVar52 = *pbVar61;
                  uVar46 = 2;
                  if (bVar52 != 0x10) {
                    if (bVar52 == 0x11) {
                      pcVar38 = *(char **)(lVar3 + lVar57 + 0x28);
                      if (*pcVar38 == '\0') {
                        bVar52 = pcVar38[1];
                        goto LAB_101448e78;
                      }
                      FUN_108855bf0(&lStack_e0,pcVar38,auStack_81,&UNK_10b20a560);
LAB_101448ef4:
                      uVar47 = (uint)bStack_d8;
                      lVar65 = lStack_e0;
                      if (lStack_e0 != 2) {
                        uStack_118 = CONCAT61(uStack_be,bStack_bf);
                        uStack_108 = CONCAT17(bStack_a8,CONCAT61(uStack_ae,uStack_af));
                        uStack_110 = CONCAT17(uStack_b0,CONCAT61(uStack_b6,uStack_b7));
                        uStack_f8 = CONCAT61(uStack_9e,uStack_9f);
                        uStack_100 = CONCAT17(uStack_a0,CONCAT61(uStack_a6,bStack_a7));
                        uStack_e9 = CONCAT62(uStack_8e,uStack_90);
                        uStack_f1 = uStack_98;
                        uStack_f0 = (undefined7)
                                    (CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98)) >> 8);
                        lStack_130 = CONCAT17(bStack_d0,CONCAT61(uStack_d6,bStack_d7));
                        uStack_128 = uStack_cf;
                        uStack_121 = uStack_c8;
                        bStack_111 = bStack_b8;
                        uStack_120 = uStack_c7;
                        bStack_119 = bStack_c0;
                      }
                    }
                    else {
                      if (bVar52 == 0x12) goto LAB_101448afc;
                      if (bVar52 != 0) {
                        FUN_108855bf0(&lStack_e0,pbVar61,auStack_81,&UNK_10b20a560);
                        goto LAB_101448ef4;
                      }
                      bVar52 = *(byte *)(lVar3 + lVar57 + 0x21);
LAB_101448e78:
                      uVar47 = (uint)bVar52;
                      lVar65 = 2;
                    }
                    uVar46 = uVar47;
                    if (lVar65 != 2) {
                      bStack_16f = (byte)uStack_118;
                      uStack_16e = (undefined6)((uint7)uStack_118 >> 8);
                      bStack_168 = bStack_111;
                      uStack_177 = uStack_120;
                      bStack_170 = bStack_119;
                      uStack_15f = (undefined1)uStack_108;
                      uStack_15e = (undefined6)((ulong)uStack_108 >> 8);
                      bStack_158 = (byte)((ulong)uStack_108 >> 0x38);
                      uStack_167 = (undefined1)uStack_110;
                      uStack_166 = (undefined6)((ulong)uStack_110 >> 8);
                      uStack_160 = (undefined1)((ulong)uStack_110 >> 0x38);
                      uStack_14f = (undefined1)uStack_f8;
                      uStack_14e = (undefined6)((uint7)uStack_f8 >> 8);
                      bStack_157 = (byte)uStack_100;
                      uStack_156 = (undefined6)((ulong)uStack_100 >> 8);
                      uStack_150 = (undefined1)((ulong)uStack_100 >> 0x38);
                      uStack_140 = (undefined2)uStack_e9;
                      uStack_13e = (undefined6)((ulong)uStack_e9 >> 0x10);
                      uStack_148 = uStack_f1;
                      uStack_147 = (undefined1)uStack_f0;
                      uStack_146 = (undefined6)((uint7)uStack_f0 >> 8);
                      uStack_17f = uStack_128;
                      uStack_178 = uStack_121;
                      bStack_187 = (byte)lStack_130;
                      uStack_186 = (undefined6)((ulong)lStack_130 >> 8);
                      bStack_180 = (byte)((ulong)lStack_130 >> 0x38);
                      goto LAB_101449470;
                    }
                  }
                }
                else {
                  if (bVar52 == 0xd) {
                    plVar51 = *(long **)(lVar3 + lVar57 + 8);
                    lVar65 = *(long *)(lVar3 + lVar57 + 0x10);
                    if (lVar65 == 0xd) {
LAB_101448de4:
                      bVar52 = 1;
                      if (*plVar51 != 0x6c61766f72707061 ||
                          *(long *)((long)plVar51 + 5) != 0x65646f6d5f6c6176) {
                        bVar52 = 2;
                      }
                    }
                    else {
joined_r0x000101448d60:
                      if (lVar65 != 7) goto LAB_101448da0;
                      bVar52 = 2;
                      if ((int)*plVar51 == 0x62616e65 && *(int *)((long)plVar51 + 3) == 0x64656c62)
                      {
                        bVar52 = 0;
                      }
                    }
                    goto joined_r0x000101448d44;
                  }
                  if (bVar52 == 0xe) {
                    pcVar38 = *(char **)(lVar3 + 0x10 + lVar57);
                    lVar65 = *(long *)(lVar3 + 0x18 + lVar57);
                  }
                  else {
                    if (bVar52 != 0xf) goto LAB_101448e88;
                    pcVar38 = *(char **)(lVar3 + 8 + lVar57);
                    lVar65 = *(long *)(lVar3 + 0x10 + lVar57);
                  }
                  if (lVar65 != 0xd) {
                    if (((((lVar65 != 7) || (*pcVar38 != 'e')) ||
                         ((pcVar38[1] != 'n' || ((pcVar38[2] != 'a' || (pcVar38[3] != 'b')))))) ||
                        (pcVar38[4] != 'l')) || ((pcVar38[5] != 'e' || (pcVar38[6] != 'd')))) {
LAB_101448da0:
                      bVar52 = 2;
                      goto LAB_101448dac;
                    }
                    goto LAB_101448c5c;
                  }
                  if ((((((*pcVar38 != 'a') || (pcVar38[1] != 'p')) || (pcVar38[2] != 'p')) ||
                       ((pcVar38[3] != 'r' || (pcVar38[4] != 'o')))) ||
                      ((pcVar38[5] != 'v' || ((pcVar38[6] != 'a' || (pcVar38[7] != 'l')))))) ||
                     ((pcVar38[8] != '_' ||
                      ((((pcVar38[9] != 'm' || (pcVar38[10] != 'o')) || (pcVar38[0xb] != 'd')) ||
                       (pcVar38[0xc] != 'e')))))) goto LAB_101448da0;
                  bVar52 = 1;
LAB_101448dac:
                  if (bVar52 == 1) {
                    if (bVar50 != 4) {
                      puVar40 = &UNK_108cac0ec;
                      uVar41 = 0xd;
LAB_101449264:
                      FUN_1087e4364(&lStack_190,puVar40,uVar41);
                      if (lStack_190 != 2) goto LAB_10144947c;
                      lVar3 = lVar3 + lVar57 + 0x40;
                      lVar45 = lStack_130;
                      goto joined_r0x000101449288;
                    }
                    bVar52 = *pbVar61;
                    bVar50 = 3;
                    if (bVar52 != 0x10) {
                      if (bVar52 == 0x11) {
                        pbVar61 = *(byte **)(lVar3 + lVar57 + 0x28);
                      }
                      else if (bVar52 == 0x12) goto LAB_101448afc;
                      FUN_101439718(&lStack_e0,pbVar61);
                      uVar47 = (uint)bStack_d8;
                      bVar50 = bStack_d8;
                      if (lStack_e0 != 2) {
                        bStack_16f = bStack_bf;
                        uStack_16e = uStack_be;
                        bStack_168 = bStack_b8;
                        uStack_177 = uStack_c7;
                        bStack_170 = bStack_c0;
                        uStack_15f = uStack_af;
                        uStack_15e = uStack_ae;
                        bStack_158 = bStack_a8;
                        uStack_167 = uStack_b7;
                        uStack_166 = uStack_b6;
                        uStack_160 = uStack_b0;
                        uStack_14f = uStack_9f;
                        uStack_14e = uStack_9e;
                        bStack_157 = bStack_a7;
                        uStack_156 = uStack_a6;
                        uStack_150 = uStack_a0;
                        uStack_140 = uStack_90;
                        uStack_13e = uStack_8e;
                        uStack_148 = uStack_98;
                        uStack_147 = uStack_97;
                        uStack_146 = uStack_96;
                        uStack_17f = uStack_cf;
                        uStack_178 = uStack_c8;
                        bStack_187 = bStack_d7;
                        uStack_186 = uStack_d6;
                        bStack_180 = bStack_d0;
                        lVar65 = lStack_e0;
                        goto LAB_101449470;
                      }
                    }
                  }
                }
LAB_101448afc:
                lVar55 = lVar55 + 1;
                lVar57 = lVar57 + 0x40;
              } while (lVar45 != lVar57);
              uVar47 = 2;
              if (uVar46 != 3) {
                uVar47 = uVar46;
              }
              bStack_187 = 3;
              if (bVar50 != 4) {
                bStack_187 = bVar50;
              }
              bStack_188 = (byte)uVar47;
              lVar45 = lStack_130;
              bVar52 = bStack_187;
              bVar50 = bStack_188;
            }
          }
          else {
            FUN_108855bf0(&lStack_190,pcVar38 + 0x20,auStack_81,&UNK_10b2143e8);
            lVar65 = lStack_190;
            bVar44 = bStack_188;
            bVar56 = bStack_187;
            uVar9 = uStack_186;
            bVar63 = bStack_180;
            uVar10 = uStack_17f;
            uVar11 = uStack_178;
            uVar12 = uStack_177;
            bVar13 = bStack_170;
            bVar14 = bStack_16f;
            uVar15 = uStack_16e;
            bVar16 = bStack_168;
            uVar17 = uStack_167;
            uVar18 = uStack_166;
            uVar19 = uStack_160;
            uVar20 = uStack_15f;
            uVar21 = uStack_15e;
            bVar22 = bStack_158;
            bVar23 = bStack_157;
            uVar24 = uStack_156;
            uVar25 = uStack_150;
            uVar26 = uStack_14f;
            uVar27 = uStack_14e;
            uVar28 = uStack_148;
            uVar29 = uStack_147;
            uVar30 = uStack_146;
            uVar31 = uStack_140;
            uVar32 = uStack_13e;
LAB_101449310:
            uStack_13e = uVar32;
            uStack_140 = uVar31;
            uStack_146 = uVar30;
            uStack_147 = uVar29;
            uStack_148 = uVar28;
            uStack_14e = uVar27;
            uStack_14f = uVar26;
            uStack_150 = uVar25;
            uStack_156 = uVar24;
            bStack_157 = bVar23;
            bStack_158 = bVar22;
            uStack_15e = uVar21;
            uStack_15f = uVar20;
            uStack_160 = uVar19;
            uStack_166 = uVar18;
            uStack_167 = uVar17;
            bStack_168 = bVar16;
            uStack_16e = uVar15;
            bStack_16f = bVar14;
            bStack_170 = bVar13;
            uStack_177 = uVar12;
            uStack_178 = uVar11;
            uStack_17f = uVar10;
            bStack_180 = bVar63;
            uStack_186 = uVar9;
            bStack_187 = bVar56;
            bStack_188 = bVar44;
            lStack_190 = lVar65;
            lVar45 = lStack_130;
            bVar52 = bStack_187;
            bVar50 = bStack_188;
            if (lStack_190 != 2) {
LAB_10144947c:
              bVar52 = bStack_16f;
              bVar50 = bStack_170;
              lVar49 = lStack_190;
              lVar54 = CONCAT62(uStack_186,CONCAT11(bStack_187,bStack_188));
              lVar60 = CONCAT71(uStack_17f,bStack_180);
              lVar62 = CONCAT71(uStack_177,uStack_178);
              uStack_1d0 = CONCAT17(uStack_167,CONCAT16(bStack_168,uStack_16e));
              uStack_1c8 = uStack_166;
              uStack_1c2 = (undefined2)
                           (CONCAT17(uStack_15f,CONCAT16(uStack_160,uStack_166)) >> 0x30);
              uStack_1b8 = uStack_156;
              uStack_1b2 = (undefined2)
                           (CONCAT17(uStack_14f,CONCAT16(uStack_150,uStack_156)) >> 0x30);
              uStack_1c0 = uStack_15e;
              uStack_1ba = (undefined2)
                           (CONCAT17(bStack_157,CONCAT16(bStack_158,uStack_15e)) >> 0x30);
              uStack_1a8 = uStack_146;
              uStack_1b0 = uStack_14e;
              uStack_1aa = (undefined2)
                           (CONCAT17(uStack_147,CONCAT16(uStack_148,uStack_14e)) >> 0x30);
              uStack_1a2 = uStack_140;
              uStack_1a0 = uStack_13e;
              uVar37 = uStack_1f8;
              if (lVar64 != 0) {
                _free(lVar35);
                uVar37 = uStack_1f8;
              }
              goto joined_r0x000101449500;
            }
          }
LAB_101449084:
          lStack_130 = lVar45;
          uVar37 = FUN_100e8dd9c(CONCAT62(uStack_1de,uStack_1e0),CONCAT62(uStack_1d6,uStack_1d8),
                                 lVar35,lVar62);
        }
        if (lStack_1f0 == 0) {
          func_0x00010891d368(&plStack_200,1,&uStack_1e0,1);
        }
        uVar5 = uStack_1f8;
        plVar51 = plStack_200;
        bVar7 = false;
        lVar45 = 0;
        bVar44 = (byte)(uVar37 >> 0x38);
        bVar56 = bVar44 >> 1;
        uVar37 = uVar37 & uStack_1f8;
        lVar65 = *(long *)((long)plStack_200 + uVar37);
        uVar59 = CONCAT17(-((byte)((ulong)lVar65 >> 0x38) == bVar56),
                          CONCAT16(-((byte)((ulong)lVar65 >> 0x30) == bVar56),
                                   CONCAT15(-((byte)((ulong)lVar65 >> 0x28) == bVar56),
                                            CONCAT14(-((byte)((ulong)lVar65 >> 0x20) == bVar56),
                                                     CONCAT13(-((byte)((ulong)lVar65 >> 0x18) ==
                                                               bVar56),CONCAT12(-((byte)((ulong)
                                                  lVar65 >> 0x10) == bVar56),
                                                  CONCAT11(-((byte)((ulong)lVar65 >> 8) == bVar56),
                                                           -((byte)lVar65 == bVar56)))))))) &
                 0x8080808080808080;
joined_r0x0001014490c4:
        while (uVar59 == 0) {
          cVar66 = (char)((ulong)lVar65 >> 8);
          cVar67 = (char)((ulong)lVar65 >> 0x10);
          cVar68 = (char)((ulong)lVar65 >> 0x18);
          cVar69 = (char)((ulong)lVar65 >> 0x20);
          cVar70 = (char)((ulong)lVar65 >> 0x28);
          cVar71 = (char)((ulong)lVar65 >> 0x30);
          uVar59 = uStack_280;
          if (bVar7) {
LAB_101449138:
            bVar63 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar65 >> 0x38) == -1),
                                         CONCAT16(-(cVar71 == -1),
                                                  CONCAT15(-(cVar70 == -1),
                                                           CONCAT14(-(cVar69 == -1),
                                                                    CONCAT13(-(cVar68 == -1),
                                                                             CONCAT12(-(cVar67 == -1
                                                                                       ),CONCAT11(-(
                                                  cVar66 == -1),-((char)lVar65 == -1)))))))),1);
            if ((bVar63 & 1) != 0) {
              uVar37 = (ulong)*(char *)((long)plVar51 + uVar59);
              if (-1 < *(char *)((long)plVar51 + uVar59)) {
                lVar45 = *plVar51;
                uVar37 = CONCAT17(-(lVar45 < 0),
                                  CONCAT16(-((char)((ulong)lVar45 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar45 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar45 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar45 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar45 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar45 >> 8) < '\0'),
                                                           -((char)lVar45 < '\0'))))))));
                uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
                uVar59 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
                uVar37 = (ulong)*(byte *)((long)plVar51 + uVar59);
              }
              *(byte *)((long)plVar51 + uVar59) = bVar44 >> 1;
              *(byte *)((long)plVar51 + (uVar59 - 8 & uVar5) + 8) = bVar44 >> 1;
              lStack_1f0 = lStack_1f0 - (uVar37 & 1);
              lVar45 = CONCAT62(uStack_1e6,uStack_1e8) + 1;
              uStack_1e8 = (undefined2)lVar45;
              uStack_1e6 = (undefined6)((ulong)lVar45 >> 0x10);
              plVar51[uVar59 * -4 + -4] = lVar64;
              plVar51[uVar59 * -4 + -3] = lVar35;
              plVar51[uVar59 * -4 + -2] = lVar62;
              *(byte *)(plVar51 + uVar59 * -4 + -1) = bVar50;
              *(byte *)((long)plVar51 + uVar59 * -0x20 + -7) = bVar52;
              goto LAB_101448a60;
            }
            bVar7 = true;
            uStack_280 = uVar59;
          }
          else {
            uVar59 = CONCAT17(-(lVar65 < 0),
                              CONCAT16(-(cVar71 < '\0'),
                                       CONCAT15(-(cVar70 < '\0'),
                                                CONCAT14(-(cVar69 < '\0'),
                                                         CONCAT13(-(cVar68 < '\0'),
                                                                  CONCAT12(-(cVar67 < '\0'),
                                                                           CONCAT11(-(cVar66 < '\0')
                                                                                    ,-((char)lVar65
                                                                                      < '\0'))))))))
            ;
            if (uVar59 != 0) {
              uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
              uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
              uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
              uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
              uVar59 = uVar37 + ((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3) & uVar5;
              goto LAB_101449138;
            }
            bVar7 = false;
          }
          lVar45 = lVar45 + 8;
          uVar37 = lVar45 + uVar37 & uVar5;
          lVar65 = *(long *)((long)plVar51 + uVar37);
          uVar59 = CONCAT17(-((byte)((ulong)lVar65 >> 0x38) == bVar56),
                            CONCAT16(-((byte)((ulong)lVar65 >> 0x30) == bVar56),
                                     CONCAT15(-((byte)((ulong)lVar65 >> 0x28) == bVar56),
                                              CONCAT14(-((byte)((ulong)lVar65 >> 0x20) == bVar56),
                                                       CONCAT13(-((byte)((ulong)lVar65 >> 0x18) ==
                                                                 bVar56),CONCAT12(-((byte)((ulong)
                                                  lVar65 >> 0x10) == bVar56),
                                                  CONCAT11(-((byte)((ulong)lVar65 >> 8) == bVar56),
                                                           -((byte)lVar65 == bVar56)))))))) &
                   0x8080808080808080;
        }
        uVar43 = (uVar59 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar59 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
        uVar43 = uVar37 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3) & uVar5;
        if ((lVar62 != plVar51[uVar43 * -4 + -2]) ||
           (iVar34 = _memcmp(lVar35,plVar51[uVar43 * -4 + -3]), iVar34 != 0)) {
          uVar59 = uVar59 - 1 & uVar59;
          goto joined_r0x0001014490c4;
        }
        *(byte *)(plVar51 + uVar43 * -4 + -1) = bVar50;
        *(byte *)((long)plVar51 + uVar43 * -0x20 + -7) = bVar52;
        if (lVar64 != 0) {
          _free(lVar35);
        }
      }
      goto LAB_101448a60;
    }
LAB_1014493ac:
    uVar59 = uStack_1f8;
    plVar51 = plStack_200;
    uStack_1d0 = CONCAT26(uStack_1e0,uStack_1e6);
    uStack_1c8 = uStack_1de;
    uStack_1c2 = uStack_1d8;
    uStack_1c0 = uStack_1d6;
    uStack_166 = uStack_1de;
    uStack_16e = uStack_1e6;
    bStack_168 = (byte)uStack_1e0;
    uStack_167 = (undefined1)((ushort)uStack_1e0 >> 8);
    uStack_160 = (undefined1)uStack_1d8;
    uStack_15f = (undefined1)((ushort)uStack_1d8 >> 8);
    uStack_15e = uStack_1d6;
    bStack_180 = (byte)uStack_1f8;
    uStack_17f = (undefined7)(uStack_1f8 >> 8);
    uStack_178 = (undefined1)lStack_1f0;
    uStack_177 = (undefined7)((ulong)lStack_1f0 >> 8);
    bStack_170 = (byte)uStack_1e8;
    bStack_16f = (byte)((ushort)uStack_1e8 >> 8);
    lStack_190 = 2;
    bStack_188 = (byte)plStack_200;
    bStack_187 = (byte)((ulong)plStack_200 >> 8);
    uStack_186 = (undefined6)((ulong)plStack_200 >> 0x10);
    FUN_100d5c778(&lStack_238);
    uVar37 = (lVar54 + lVar60) - lStack_240;
    if (uVar37 == 0) goto LAB_1014495f4;
    lVar54 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
    lStack_130 = lVar48;
    FUN_1087e427c(&lStack_e0,lVar48 + (uVar37 >> 6),&lStack_130,&UNK_10b23a190);
    if (lStack_e0 == 2) goto LAB_1014495f4;
    bStack_168 = bStack_b8;
    uStack_167 = uStack_b7;
    uStack_166 = uStack_b6;
    bStack_170 = bStack_c0;
    bStack_16f = bStack_bf;
    uStack_16e = uStack_be;
    bStack_158 = bStack_a8;
    bStack_157 = bStack_a7;
    uStack_156 = uStack_a6;
    uStack_160 = uStack_b0;
    uStack_15f = uStack_af;
    uStack_15e = uStack_ae;
    uStack_148 = uStack_98;
    uStack_147 = uStack_97;
    uStack_146 = uStack_96;
    uStack_150 = uStack_a0;
    uStack_14f = uStack_9f;
    uStack_14e = uStack_9e;
    uStack_140 = uStack_90;
    uStack_13e = uStack_8e;
    lStack_190 = lStack_e0;
    bStack_188 = bStack_d8;
    bStack_187 = bStack_d7;
    uStack_186 = uStack_d6;
    uStack_178 = uStack_c8;
    uStack_177 = uStack_c7;
    bStack_180 = bStack_d0;
    uStack_17f = uStack_cf;
    if (uVar59 != 0) {
      if (lVar54 != 0) {
        plVar58 = plVar51 + 1;
        lVar60 = *plVar51;
        uVar37 = CONCAT17(-(-1 < lVar60),
                          CONCAT16(-(-1 < (char)((ulong)lVar60 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar60 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar60 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar60 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar60
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar60 >> 8)),-(-1 < (char)lVar60)))))))) &
                 0x8080808080808080;
        plVar6 = plVar51;
        do {
          while (uVar37 == 0) {
            lVar60 = *plVar58;
            plVar58 = plVar58 + 1;
            plVar6 = plVar6 + -0x20;
            uVar37 = CONCAT17(-(-1 < lVar60),
                              CONCAT16(-(-1 < (char)((ulong)lVar60 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar60 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar60 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar60 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar60 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar60 >> 8)),
                                                           -(-1 < (char)lVar60)))))))) &
                     0x8080808080808080;
          }
          uVar5 = (uVar37 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar37 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) & 0x78;
          if (*(long *)((long)plVar6 + uVar5 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar6 + uVar5 * -4 + -0x18));
          }
          uVar37 = uVar37 - 1 & uVar37;
          lVar54 = lVar54 + -1;
        } while (lVar54 != 0);
      }
      if (uVar59 * 0x21 != -0x29) {
        _free(plVar51 + uVar59 * -4 + -4);
      }
    }
  }
  else {
    FUN_108855bf0(&lStack_190,param_2,auStack_81,&UNK_10b213448);
  }
LAB_1014495e8:
  if (lStack_190 != 2) {
    param_1[5] = CONCAT62(uStack_166,CONCAT11(uStack_167,bStack_168));
    param_1[4] = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
    param_1[7] = CONCAT62(uStack_156,CONCAT11(bStack_157,bStack_158));
    param_1[6] = CONCAT62(uStack_15e,CONCAT11(uStack_15f,uStack_160));
    param_1[9] = CONCAT62(uStack_146,CONCAT11(uStack_147,uStack_148));
    param_1[8] = CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
    param_1[10] = CONCAT62(uStack_13e,uStack_140);
    param_1[1] = CONCAT62(uStack_186,CONCAT11(bStack_187,bStack_188));
    *param_1 = lStack_190;
    param_1[3] = CONCAT71(uStack_177,uStack_178);
    param_1[2] = CONCAT71(uStack_17f,bStack_180);
    return;
  }
LAB_1014495f4:
  param_1[2] = CONCAT71(uStack_17f,bStack_180);
  param_1[1] = CONCAT62(uStack_186,CONCAT11(bStack_187,bStack_188));
  param_1[4] = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
  param_1[3] = CONCAT71(uStack_177,uStack_178);
  param_1[6] = CONCAT62(uStack_15e,CONCAT11(uStack_15f,uStack_160));
  param_1[5] = CONCAT62(uStack_166,CONCAT11(uStack_167,bStack_168));
  *param_1 = 2;
  return;
}

