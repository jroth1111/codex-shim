
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a67a18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  char cVar8;
  int iVar9;
  long *******ppppppplVar10;
  undefined1 (*pauVar11) [16];
  long extraout_x1;
  undefined1 uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long *******ppppppplVar15;
  long *plVar16;
  long *******ppppppplVar17;
  long ******pppppplVar18;
  undefined8 uVar19;
  long *******ppppppplVar20;
  long lVar21;
  long *******ppppppplVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *******ppppppplVar25;
  long *******ppppppplVar26;
  long lVar27;
  long *******unaff_x23;
  long lVar28;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  long *****ppppplVar31;
  long ******pppppplVar32;
  long *plVar33;
  long lVar34;
  long *******ppppppplVar35;
  undefined8 uVar36;
  long ******pppppplVar37;
  long ******pppppplVar38;
  long lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  undefined1 auStack_218 [16];
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  undefined1 auStack_1d0 [16];
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  undefined1 auStack_180 [16];
  long *******ppppppplStack_170;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  undefined1 auStack_140 [16];
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined8 uStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char *pcStack_78;
  long *******ppppppplStack_70;
  
  bVar3 = *(byte *)(param_2 + 0x1e);
  if (bVar3 < 2) {
    if (bVar3 != 0) goto LAB_100a67aa8;
    param_2[5] = param_2[3];
    param_2[6] = param_2[4];
    lVar34 = param_2[1];
    param_2[7] = 0;
    param_2[8] = 8;
    *(undefined1 *)((long)param_2 + 0xf1) = 0;
    param_2[9] = 0;
    param_2[10] = lVar34;
    param_2[0xb] = lVar34;
    param_2[0xc] = *param_2;
    param_2[0xd] = lVar34 + param_2[2] * 0x18;
  }
  else {
    if (bVar3 == 3) goto LAB_100a67b08;
    func_0x000108a07b10(&UNK_10b22bb30);
LAB_100a67aa8:
    func_0x000108a07af4(&UNK_10b22bb30);
  }
LAB_100a67ab4:
  puVar13 = (undefined8 *)param_2[0xb];
  if (puVar13 != (undefined8 *)param_2[0xd]) {
    puVar24 = puVar13 + 3;
    param_2[0xb] = puVar24;
    uVar19 = puVar13[2];
    uVar36 = *puVar13;
    param_2[0xf] = puVar13[1];
    param_2[0xe] = uVar36;
    param_2[0x10] = uVar19;
    if (param_2[0xe] == -0x8000000000000000) goto joined_r0x000100a68444;
    uVar19 = puVar13[2];
    uVar36 = *puVar13;
    param_2[0x12] = puVar13[1];
    param_2[0x11] = uVar36;
    param_2[0x13] = uVar19;
    param_2[0x14] = param_2[0x12];
    param_2[0x15] = uVar19;
    *(undefined1 *)(param_2 + 0x1d) = 0;
LAB_100a67b08:
    FUN_100fbfb50(&ppppppplStack_c8,param_2 + 0x14,param_3);
    ppppppplVar10 = ppppppplStack_b8;
    ppppppplVar22 = ppppppplStack_c0;
    ppppppplVar20 = ppppppplStack_c8;
    if (ppppppplStack_c8 != (long *******)0x8000000000000001) {
      if (*(char *)(param_2 + 0x1d) == '\x03') {
        if (*(char *)(param_2 + 0x1c) == '\x03') {
          plVar16 = (long *)param_2[0x1b];
          if (*plVar16 == 0xcc) {
            *plVar16 = 0x84;
          }
          else {
            (**(code **)(plVar16[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_2 + 0x1c) == '\0') && (param_2[0x18] != 0)) {
          _free(param_2[0x19]);
        }
      }
      if (ppppppplVar20 != (long *******)0x8000000000000000) {
        ppppppplStack_a8 = ppppppplVar10;
        ppppppplStack_a0 = (long *******)0x0;
        ppppppplStack_98 = (long *******)0x0;
        ppppppplStack_90 = ppppppplVar22;
        ppppppplStack_88 = ppppppplVar10;
        ppppppplStack_c8 = (long *******)0x0;
        ppppppplStack_c0 = (long *******)0x1;
        ppppppplStack_b8 = (long *******)0x0;
        ppppppplStack_b0 = ppppppplVar22;
        uStack_80 = CONCAT31(uStack_80._1_3_,0x80);
        if (ppppppplVar10 != (long *******)0x0) {
          ppppppplVar30 = (long *******)&ppppppplStack_158;
          do {
            bVar3 = *(byte *)((long)ppppppplVar22 + (long)ppppppplStack_a0);
            if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
              if (bVar3 != 0x5b) {
                if (bVar3 != 0x7b) {
                  ppppppplVar10 =
                       (long *******)
                       FUN_108832208(&ppppppplStack_c8,&ppppppplStack_100,&UNK_10b24eff8);
                  ppppppplVar25 = ppppppplStack_228;
                  ppppppplVar15 = ppppppplStack_220;
                  goto LAB_100a68ef8;
                }
                uStack_80 = CONCAT31(uStack_80._1_3_,0x7f);
                ppppppplStack_a0 = (long *******)((long)ppppppplStack_a0 + 1);
                ppppppplStack_f0 = (long *******)&ppppppplStack_c8;
                ppppppplStack_e8 = (long *******)CONCAT71(ppppppplStack_e8._1_7_,1);
                ppppppplVar10 = (long *******)0x0;
                goto LAB_100a682a8;
              }
              uStack_80 = CONCAT31(uStack_80._1_3_,0x7f);
              ppppppplStack_a0 = (long *******)((long)ppppppplStack_a0 + 1);
              ppppppplStack_130 = (long *******)&ppppppplStack_c8;
              ppppppplStack_128 = (long *******)CONCAT71(ppppppplStack_128._1_7_,1);
              auVar41 = FUN_1011de3f0(&uStack_1a0,&ppppppplStack_130);
              if ((char)uStack_1a0 == '\x01') {
                ppppppplStack_160 = (long *******)0x0;
                ppppppplStack_158 = ppppppplStack_198;
              }
              else {
                if (uStack_1a0._1_1_ == '\x01') {
                  auVar41 = FUN_10138b374(&uStack_1a0,ppppppplStack_130);
                  ppppppplStack_160 = uStack_1a0;
                  ppppppplStack_158 = ppppppplStack_198;
                  if (uStack_1a0 == (long *******)0x0) goto LAB_100a68780;
                  ppppppplStack_158 = ppppppplStack_190;
                  ppppppplStack_160 = ppppppplStack_198;
                  ppppppplStack_150 = ppppppplStack_188;
                  ppppppplVar10 = (long *******)&ppppppplStack_160;
                  ppppppplStack_160 = uStack_1a0;
                  auVar41 = auStack_180;
                }
                else {
                  pauVar11 = (undefined1 (*) [16])
                             (*
                             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                             )();
                  if (pauVar11[1][0] == '\x01') {
                    auVar41 = *pauVar11;
                  }
                  else {
                    auVar41 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                    *(long *)(*pauVar11 + 8) = auVar41._8_8_;
                    pauVar11[1][0] = 1;
                  }
                  *(long *)*pauVar11 = auVar41._0_8_ + 1;
                  ppppppplVar10 = (long *******)&UNK_10b209510;
                  ppppppplVar30 = (long *******)&UNK_10b209518;
                  ppppppplStack_160 = (long *******)&UNK_108c56c70;
                }
                ppppppplStack_e8 = (long *******)ppppppplVar30[1];
                ppppppplStack_f0 = (long *******)*ppppppplVar30;
                ppppppplStack_158 = (long *******)*ppppppplVar10;
              }
LAB_100a68780:
              uStack_80 = CONCAT31(uStack_80._1_3_,(char)uStack_80 + '\x01');
              ppppppplStack_148 = ppppppplStack_e8;
              ppppppplStack_150 = ppppppplStack_f0;
              auStack_140 = auVar41;
              ppppppplVar30 = (long *******)FUN_10065474c(&ppppppplStack_c8);
              ppppppplVar10 = ppppppplStack_158;
              ppppppplStack_198 = ppppppplStack_158;
              uStack_1a0 = ppppppplStack_160;
              ppppppplStack_188 = ppppppplStack_148;
              ppppppplStack_190 = ppppppplStack_150;
              if (ppppppplStack_160 != (long *******)0x0) goto joined_r0x000100a688a4;
              ppppppplStack_170 = ppppppplVar30;
              ppppppplVar5 = ppppppplStack_1b8;
              ppppppplVar35 = ppppppplStack_1c0;
              ppppppplVar25 = ppppppplStack_228;
              ppppppplVar15 = ppppppplStack_220;
              ppppppplVar26 = ppppppplStack_160;
              auStack_180 = auStack_140;
              auVar41 = auStack_1b0;
              if (ppppppplVar30 == (long *******)0x0) goto joined_r0x000100a687d4;
              if (*ppppppplVar30 == (long ******)0x1) {
                FUN_100de21d4(ppppppplVar30 + 1);
              }
              else if ((*ppppppplVar30 == (long ******)0x0) &&
                      (ppppppplVar30[2] != (long ******)0x0)) {
                _free(ppppppplVar30[1]);
              }
              _free(ppppppplVar30);
              ppppppplVar25 = ppppppplStack_228;
              ppppppplVar15 = ppppppplStack_220;
              goto LAB_100a68ef8;
            }
            ppppppplStack_a0 = (long *******)((long)ppppppplStack_a0 + 1);
          } while (ppppppplVar10 != ppppppplStack_a0);
        }
        uStack_1a0 = (long *******)0x5;
        ppppppplVar10 = (long *******)FUN_108831e8c(&ppppppplStack_c8,&uStack_1a0);
        goto LAB_100a67c40;
      }
      if (((ulong)ppppppplVar22 & 3) == 1) {
        ppppppplVar20 = (long *******)((long)ppppppplVar22 + -1);
        unaff_x23 = (long *******)*ppppppplVar20;
        puVar13 = *(undefined8 **)((long)ppppppplVar22 + 7);
        pcVar14 = (code *)*puVar13;
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(unaff_x23);
        }
        ppppppplVar22 = ppppppplVar20;
        if (puVar13[1] != 0) {
          _free(unaff_x23);
        }
        goto LAB_100a68e7c;
      }
      goto LAB_100a68e84;
    }
    *param_1 = 0x8000000000000000;
    uVar12 = 3;
    goto LAB_100a686f8;
  }
  param_2[0xe] = 0x8000000000000000;
  puVar24 = puVar13;
joined_r0x000100a68444:
  uVar23 = (long)param_2[0xd] - (long)puVar24;
  if (uVar23 != 0) {
    uVar23 = uVar23 / 0x18;
    puVar24 = puVar24 + 1;
    do {
      if (puVar24[-1] != 0) {
        _free(*puVar24);
      }
      puVar24 = puVar24 + 3;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (param_2[0xc] != 0) {
    _free(param_2[10]);
  }
  uVar23 = param_2[9];
  lVar34 = uVar23 - 2;
  if (1 < uVar23) {
    lVar28 = param_2[8];
    plVar16 = (long *)(lVar28 + 0x30);
    lVar27 = 1;
    do {
      if (plVar16[-1] == plVar16[-4]) {
        lVar21 = plVar16[-2];
        iVar9 = _memcmp(lVar21,plVar16[-5]);
        if (iVar9 == 0) {
          if (plVar16[-3] != 0) {
            _free(lVar21);
          }
          if (lVar27 + 1U < uVar23) goto LAB_100a68528;
          goto LAB_100a686d8;
        }
      }
      lVar27 = lVar27 + 1;
      lVar34 = lVar34 + -1;
      plVar16 = plVar16 + 3;
    } while (lVar34 != -1);
  }
LAB_100a686dc:
  uVar19 = param_2[7];
  param_1[1] = param_2[8];
  *param_1 = uVar19;
  param_1[2] = param_2[9];
  *(undefined1 *)((long)param_2 + 0xf1) = 0;
  uVar12 = 1;
LAB_100a686f8:
  *(undefined1 *)(param_2 + 0x1e) = uVar12;
  return;
  while( true ) {
    auVar40 = FUN_10062a8ec(ppppppplVar26);
    ppppppplVar30 = auVar40._0_8_;
    auVar41 = auStack_140;
    if (ppppppplVar30 != (long *******)0x0) break;
LAB_100a682a8:
    auVar40 = FUN_1011ddbc4(&uStack_1a0,&ppppppplStack_f0);
    ppppppplVar26 = ppppppplStack_f0;
    ppppppplVar30 = ppppppplStack_198;
    auVar41 = auStack_140;
    if ((char)uStack_1a0 == '\x01') break;
    if (uStack_1a0._1_1_ != '\x01') {
      if (ppppppplVar10 == (long *******)0x0) {
        ppppppplStack_160 = ppppppplVar10;
        ppppppplStack_158 = unaff_x23;
        pauVar11 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar11[1][0] == '\x01') {
          auStack_140 = *pauVar11;
        }
        else {
          auVar41 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar11 + 8) = auVar41._8_8_;
          pauVar11[1][0] = 1;
          auStack_140 = auVar41;
        }
        ppppppplStack_158 = (long *******)0x0;
        *(long *)*pauVar11 = auStack_140._0_8_ + 1;
        ppppppplStack_e0 = (long *******)0x0;
        ppppppplStack_d8 = (long *******)0x0;
        ppppppplStack_160 = (long *******)&UNK_108c56c70;
      }
      else {
        ppppppplStack_d8 = ppppppplStack_148;
        ppppppplStack_e0 = ppppppplStack_150;
        ppppppplStack_160 = ppppppplVar10;
        ppppppplStack_158 = unaff_x23;
      }
      goto LAB_100a68860;
    }
    ppppppplStack_f0[5] = (long ******)((long)ppppppplStack_f0[5] + 1);
    ppppppplStack_f0[2] = (long ******)0x0;
    auVar40 = __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                        (&uStack_1a0,ppppppplStack_f0 + 3,ppppppplStack_f0);
    ppppppplVar30 = ppppppplStack_198;
    auVar41 = auStack_140;
    if (uStack_1a0 == (long *******)0x2) break;
    if ((ppppppplStack_190 == (long *******)0x4) && (*(int *)ppppppplStack_198 == 0x73707061)) {
      if (ppppppplVar10 != (long *******)0x0) {
        ppppppplStack_130 = (long *******)&UNK_108cde3ac;
        ppppppplStack_128 = (long *******)0x4;
        uStack_1a0 = (long *******)&ppppppplStack_130;
        ppppppplStack_198 = (long *******)&DAT_100c7b3a0;
        ppppppplStack_160 = ppppppplVar10;
        ppppppplStack_158 = unaff_x23;
        ppppppplVar30 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1a0);
        ppppppplVar10 = ppppppplStack_160;
        unaff_x23 = ppppppplStack_158;
        auVar41 = auStack_140;
        goto LAB_100a68850;
      }
      pppppplVar38 = ppppppplVar26[5];
      if (pppppplVar38 < ppppppplVar26[4]) {
        while( true ) {
          bVar3 = *(byte *)((long)ppppppplVar26[3] + (long)pppppplVar38);
          if (0x3a < bVar3) goto LAB_100a68f58;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
          pppppplVar38 = (long ******)((long)pppppplVar38 + 1);
          ppppppplVar26[5] = pppppplVar38;
          if (ppppppplVar26[4] == pppppplVar38) goto LAB_100a68e98;
        }
        if ((ulong)bVar3 == 0x3a) {
          ppppppplVar26[5] = (long ******)((long)pppppplVar38 + 1);
          auVar41 = FUN_10138b374(&uStack_1a0,ppppppplVar26);
          if (uStack_1a0 == (long *******)0x0) {
            ppppppplStack_160 = (long *******)0x0;
            ppppppplStack_158 = ppppppplStack_198;
            auStack_140 = auVar41;
            goto LAB_100a68860;
          }
          ppppppplStack_148 = ppppppplStack_188;
          ppppppplStack_150 = ppppppplStack_190;
          ppppppplVar10 = uStack_1a0;
          unaff_x23 = ppppppplStack_198;
          auStack_140 = auStack_180;
          goto LAB_100a682a8;
        }
LAB_100a68f58:
        ppppppplStack_160 = (long *******)0x0;
        ppppppplStack_130 = (long *******)0x6;
        ppppppplStack_158 = unaff_x23;
        auVar41 = FUN_108831e8c(ppppppplVar26,&ppppppplStack_130);
      }
      else {
LAB_100a68e98:
        ppppppplStack_160 = (long *******)0x0;
        ppppppplStack_130 = (long *******)0x3;
        ppppppplStack_158 = unaff_x23;
        auVar41 = FUN_108831e8c(ppppppplVar26,&ppppppplStack_130);
      }
      ppppppplStack_160 = (long *******)0x0;
      ppppppplStack_158 = auVar41._0_8_;
      auStack_140 = auVar41;
      goto LAB_100a68860;
    }
  }
  ppppppplStack_160 = (long *******)0x0;
  ppppppplStack_158 = ppppppplVar30;
  auStack_140 = auVar40;
  if (ppppppplVar10 != (long *******)0x0) {
LAB_100a68850:
    ppppppplStack_158 = unaff_x23;
    ppppppplStack_160 = ppppppplVar10;
    auStack_140 = auVar41;
    auVar41 = FUN_100d0265c(&ppppppplStack_160);
    ppppppplStack_160 = (long *******)0x0;
    ppppppplStack_158 = ppppppplVar30;
    auStack_140 = auVar41;
  }
LAB_100a68860:
  uStack_80 = CONCAT31(uStack_80._1_3_,(char)uStack_80 + '\x01');
  ppppppplStack_148 = ppppppplStack_d8;
  ppppppplStack_150 = ppppppplStack_e0;
  ppppppplVar30 = (long *******)FUN_100654604(&ppppppplStack_c8);
  ppppppplVar10 = ppppppplStack_158;
  ppppppplStack_198 = ppppppplStack_158;
  uStack_1a0 = ppppppplStack_160;
  ppppppplStack_188 = ppppppplStack_148;
  ppppppplStack_190 = ppppppplStack_150;
  if (ppppppplStack_160 == (long *******)0x0) {
    ppppppplStack_170 = ppppppplVar30;
    ppppppplVar5 = ppppppplStack_1b8;
    ppppppplVar35 = ppppppplStack_1c0;
    ppppppplVar25 = ppppppplStack_228;
    ppppppplVar15 = ppppppplStack_220;
    ppppppplVar26 = ppppppplStack_160;
    auStack_180 = auStack_140;
    auVar41 = auStack_1b0;
    if (ppppppplVar30 != (long *******)0x0) {
      if (*ppppppplVar30 == (long ******)0x1) {
        FUN_100de21d4(ppppppplVar30 + 1);
      }
      else if ((*ppppppplVar30 == (long ******)0x0) && (ppppppplVar30[2] != (long ******)0x0)) {
        _free(ppppppplVar30[1]);
      }
      _free(ppppppplVar30);
      ppppppplVar26 = (long *******)0x0;
      ppppppplVar5 = ppppppplStack_1b8;
      ppppppplVar35 = ppppppplStack_1c0;
      ppppppplVar25 = ppppppplStack_228;
      ppppppplVar15 = ppppppplStack_220;
      auVar41 = auStack_1b0;
    }
  }
  else {
joined_r0x000100a688a4:
    ppppppplStack_170 = ppppppplVar30;
    ppppppplVar5 = ppppppplStack_188;
    ppppppplVar35 = ppppppplStack_190;
    ppppppplVar25 = ppppppplStack_228;
    ppppppplVar15 = ppppppplStack_220;
    ppppppplVar26 = uStack_1a0;
    ppppppplStack_160 = uStack_1a0;
    ppppppplVar10 = ppppppplStack_198;
    ppppppplStack_158 = ppppppplStack_198;
    ppppppplStack_150 = ppppppplStack_190;
    ppppppplStack_148 = ppppppplStack_188;
    auStack_180 = auStack_140;
    auVar41 = auStack_140;
    if (ppppppplVar30 != (long *******)0x0) {
      FUN_100d0265c(&uStack_1a0);
      ppppppplVar26 = (long *******)0x0;
      ppppppplVar5 = ppppppplStack_1b8;
      ppppppplVar35 = ppppppplStack_1c0;
      ppppppplVar25 = ppppppplStack_228;
      ppppppplVar15 = ppppppplStack_220;
      ppppppplVar10 = ppppppplVar30;
      auVar41 = auStack_1b0;
    }
  }
joined_r0x000100a687d4:
  auStack_1b0 = auVar41;
  ppppppplStack_228 = ppppppplVar35;
  ppppppplStack_220 = ppppppplVar5;
  ppppppplStack_1c0 = ppppppplStack_228;
  ppppppplStack_1b8 = ppppppplStack_220;
  if (ppppppplVar26 == (long *******)0x0) {
LAB_100a68ef8:
    ppppppplStack_220 = ppppppplVar15;
    ppppppplStack_228 = ppppppplVar25;
    ppppppplVar10 = (long *******)FUN_108832da4(ppppppplVar10,&ppppppplStack_c8);
LAB_100a67c40:
    ppppppplStack_238 = (long *******)0x0;
    ppppppplStack_230 = ppppppplVar10;
joined_r0x000100a68ad4:
    if (ppppppplStack_c8 != (long *******)0x0) {
      ppppppplVar26 = (long *******)0x0;
LAB_100a67c54:
      _free(ppppppplStack_c0);
      goto LAB_100a67c5c;
    }
  }
  else {
    ppppppplStack_238 = ppppppplVar26;
    ppppppplStack_230 = ppppppplVar10;
    ppppppplStack_1f0 = ppppppplVar26;
    ppppppplStack_1e8 = ppppppplVar10;
    ppppppplStack_1e0 = ppppppplStack_228;
    ppppppplStack_1d8 = ppppppplStack_220;
    auStack_218 = auStack_1b0;
    auStack_1d0 = auStack_1b0;
    if (ppppppplStack_a0 < ppppppplStack_a8) {
      do {
        if (0x20 < *(byte *)((long)ppppppplStack_b0 + (long)ppppppplStack_a0) ||
            (1L << ((ulong)*(byte *)((long)ppppppplStack_b0 + (long)ppppppplStack_a0) & 0x3f) &
            0x100002600U) == 0) {
          uStack_1a0 = (long *******)0x16;
          ppppppplVar10 = (long *******)FUN_108831e8c(&ppppppplStack_c8,&uStack_1a0);
          ppppppplStack_238 = (long *******)0x0;
          ppppppplStack_230 = ppppppplVar10;
          FUN_100d0265c(&ppppppplStack_1f0);
          goto joined_r0x000100a68ad4;
        }
        ppppppplStack_a0 = (long *******)((long)ppppppplStack_a0 + 1);
      } while (ppppppplStack_a8 != ppppppplStack_a0);
    }
    if (ppppppplStack_c8 != (long *******)0x0) goto LAB_100a67c54;
LAB_100a67c5c:
    ppppppplVar30 = ppppppplStack_220;
    if (ppppppplVar26 != (long *******)0x0) {
      ppppppplVar15 = ppppppplVar26 + (long)ppppppplVar10 * -6 + -6;
      ppppppplVar25 = ppppppplVar15;
      if (ppppppplVar10 != (long *******)0x0) {
        ppppppplVar25 = (long *******)((long)ppppppplVar10 * 0x31 + 0x39);
      }
      pppppplVar38 = (long ******)0x0;
      if (ppppppplVar10 != (long *******)0x0) {
        pppppplVar38 = (long ******)0x8;
      }
      if (ppppppplStack_220 == (long *******)0x0) {
        ppppppplStack_130 = (long *******)0x0;
        ppppppplStack_128 = (long *******)0x8;
        ppppppplStack_120 = (long *******)0x0;
      }
      else {
        pppppplVar37 = *ppppppplVar26;
        puVar1 = (undefined *)((long)ppppppplVar26 + (long)ppppppplVar10);
        uVar23 = CONCAT17(-(-1 < (long)pppppplVar37),
                          CONCAT16(-(-1 < (char)((ulong)pppppplVar37 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)pppppplVar37 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)pppppplVar37 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)pppppplVar37 >>
                                                                           0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar37 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar37 >> 8)),
                                                           -(-1 < (char)pppppplVar37))))))));
        ppppppplVar5 = ppppppplVar26;
        while( true ) {
          uVar23 = uVar23 & 0x8080808080808080;
          ppppppplVar5 = ppppppplVar5 + 1;
          if (uVar23 != 0) break;
          pppppplVar37 = *ppppppplVar5;
          uVar23 = CONCAT17(-(-1 < (long)pppppplVar37),
                            CONCAT16(-(-1 < (char)((ulong)pppppplVar37 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)pppppplVar37 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)pppppplVar37 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)pppppplVar37 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar37 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar37 >> 8)),
                                                           -(-1 < (char)pppppplVar37))))))));
          ppppppplVar26 = ppppppplVar26 + -0x30;
        }
        uVar4 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        ppppppplVar35 = (long *******)(uVar23 - 1 & uVar23);
        iVar9 = (int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
        ppppppplVar29 = (long *******)((long)ppppppplStack_220 + -1);
        if (ppppppplVar26[(long)-iVar9 * 6 + -6] != (long ******)0x8000000000000000) {
          pppppplVar37 = ppppppplVar26[(long)-iVar9 * 6 + -3];
          pppppplVar32 = ppppppplVar26[(long)-iVar9 * 6 + -2];
          pppppplVar18 = ppppppplVar26[(long)-iVar9 * 6 + -1];
          if (ppppppplVar26[(long)-iVar9 * 6 + -6] != (long ******)0x0) {
            _free(ppppppplVar26[(long)-iVar9 * 6 + -5]);
          }
          if (pppppplVar37 != (long ******)0x8000000000000000) {
            ppppppplVar10 = ppppppplVar30;
            if (ppppppplVar30 < (long *******)0x5) {
              ppppppplVar10 = (long *******)0x4;
            }
            lVar34 = (long)ppppppplVar10 * 0x18;
            if ((long *******)0x555555555555555 < ppppppplVar30) {
              uVar19 = 0;
LAB_100a683c8:
              func_0x0001087c9084(uVar19,lVar34);
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100a683d0);
              (*pcVar14)();
            }
            ppppppplVar30 = (long *******)0x8;
            ppppppplVar17 = (long *******)0x0;
            if (lVar34 != 0) {
              ppppppplVar30 = (long *******)_malloc(lVar34);
              ppppppplVar17 = ppppppplVar10;
              if (ppppppplVar30 == (long *******)0x0) {
                uVar19 = 8;
                goto LAB_100a683c8;
              }
            }
            *ppppppplVar30 = pppppplVar37;
            ppppppplVar30[1] = pppppplVar32;
            ppppppplVar30[2] = pppppplVar18;
            ppppppplStack_190 = (long *******)0x1;
            ppppppplStack_b8 = ppppppplVar15;
            ppppppplStack_98 = (long *******)(puVar1 + 1);
            ppppppplStack_a8 = ppppppplVar35;
            ppppppplStack_90 = ppppppplVar29;
            ppppppplStack_c8 = (long *******)pppppplVar38;
            ppppppplStack_198 = ppppppplVar30;
            uStack_1a0 = ppppppplVar17;
            ppppppplVar10 = ppppppplStack_190;
            ppppppplStack_c0 = ppppppplVar25;
            ppppppplStack_a0 = ppppppplVar5;
            ppppppplStack_b0 = ppppppplVar26;
            while (ppppppplStack_190 = ppppppplVar10, ppppppplVar29 != (long *******)0x0) {
              while (ppppppplVar35 == (long *******)0x0) {
                pppppplVar38 = *ppppppplVar5;
                ppppppplVar26 = ppppppplVar26 + -0x30;
                ppppppplVar5 = ppppppplVar5 + 1;
                ppppppplVar35 =
                     (long *******)
                     (CONCAT17(-(-1 < (long)pppppplVar38),
                               CONCAT16(-(-1 < (char)((ulong)pppppplVar38 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)pppppplVar38 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)pppppplVar38 >> 0x20)
                                                           ),CONCAT13(-(-1 < (char)((ulong)
                                                  pppppplVar38 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)pppppplVar38 >> 0x10
                                                                        )),
                                                           CONCAT11(-(-1 < (char)((ulong)
                                                  pppppplVar38 >> 8)),-(-1 < (char)pppppplVar38)))))
                                                ))) & 0x8080808080808080);
              }
              uVar23 = ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              ppppppplVar35 =
                   (long *******)((ulong)((long)ppppppplVar35 + -1) & (ulong)ppppppplVar35);
              iVar9 = (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              ppppppplVar25 = (long *******)((long)ppppppplVar29 + -1);
              ppppppplVar15 = ppppppplVar35;
              ppppppplVar17 = ppppppplVar25;
              ppppppplVar6 = ppppppplVar26;
              ppppppplVar7 = ppppppplVar5;
              if (ppppppplVar26[(long)-iVar9 * 6 + -6] == (long ******)0x8000000000000000)
              goto joined_r0x000100a68904;
              pppppplVar38 = ppppppplVar26[(long)-iVar9 * 6 + -3];
              pppppplVar37 = ppppppplVar26[(long)-iVar9 * 6 + -2];
              pppppplVar32 = ppppppplVar26[(long)-iVar9 * 6 + -1];
              if (ppppppplVar26[(long)-iVar9 * 6 + -6] != (long ******)0x0) {
                _free(ppppppplVar26[(long)-iVar9 * 6 + -5]);
              }
              if (pppppplVar38 == (long ******)0x8000000000000000) goto joined_r0x000100a68904;
              if (ppppppplVar10 == uStack_1a0) {
                FUN_108855060(&uStack_1a0,ppppppplVar10,ppppppplVar29,8,0x18);
                ppppppplVar30 = ppppppplStack_198;
              }
              ppppppplVar15 = ppppppplVar30 + (long)ppppppplVar10 * 3;
              *ppppppplVar15 = pppppplVar38;
              ppppppplVar15[1] = pppppplVar37;
              ppppppplVar15[2] = pppppplVar32;
              ppppppplVar10 = (long *******)((long)ppppppplVar10 + 1);
              ppppppplVar29 = ppppppplVar25;
            }
            goto LAB_100a68970;
          }
        }
        ppppppplStack_130 = (long *******)0x0;
        ppppppplStack_128 = (long *******)0x8;
        ppppppplStack_120 = (long *******)0x0;
        for (; ppppppplVar29 != (long *******)0x0;
            ppppppplVar29 = (long *******)((long)ppppppplVar29 + -1)) {
          while (ppppppplVar35 == (long *******)0x0) {
            pppppplVar38 = *ppppppplVar5;
            ppppppplVar26 = ppppppplVar26 + -0x30;
            ppppppplVar5 = ppppppplVar5 + 1;
            ppppppplVar35 =
                 (long *******)
                 (CONCAT17(-(-1 < (long)pppppplVar38),
                           CONCAT16(-(-1 < (char)((ulong)pppppplVar38 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)pppppplVar38 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)pppppplVar38 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)pppppplVar38 >>
                                                                            0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)
                                                  pppppplVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppppplVar38 >> 8)),
                                                           -(-1 < (char)pppppplVar38)))))))) &
                 0x8080808080808080);
          }
          uVar23 = ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          iVar9 = (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
          if (ppppppplVar26[(long)-iVar9 * 6 + -6] != (long ******)0x0) {
            _free(ppppppplVar26[(long)-iVar9 * 6 + -5]);
          }
          if (ppppppplVar26[(long)-iVar9 * 6 + -3] != (long ******)0x0) {
            _free(ppppppplVar26[(long)-iVar9 * 6 + -2]);
          }
          ppppppplVar35 = (long *******)((ulong)((long)ppppppplVar35 + -1) & (ulong)ppppppplVar35);
        }
      }
      if ((ppppppplVar10 != (long *******)0x0) && (ppppppplVar25 != (long *******)0x0)) {
        _free(ppppppplVar15);
      }
      ppppppplVar30 = (long *******)0x0;
      ppppppplVar10 = (long *******)0x8;
      goto LAB_100a67dd8;
    }
  }
  ppppppplStack_108 = ppppppplVar10;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    if (1 < bRam000000010b62b748 - 1) {
      if (bRam000000010b62b748 != 0) {
        cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                          );
        if (cVar8 != '\0') goto LAB_100a68b08;
      }
      goto LAB_100a68c90;
    }
LAB_100a68b08:
    uVar23 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                       (
                       ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
                       );
    if ((uVar23 & 1) == 0) goto LAB_100a68c90;
    ppppppplStack_148 =
         (long *******)
         (
         ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
         + 0x30);
    ppppppplStack_f0 = (long *******)&ppppppplStack_108;
    ppppppplStack_e8 =
         (long *******)
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    ppppppplStack_f8 = (long *******)&ppppppplStack_f0;
    ppppppplStack_100 = (long *******)s__failed_to_parse_plugin_app_conf_108acf244;
    ppppppplStack_e0 = (long *******)param_2[0x12];
    ppppppplStack_d8 = (long *******)param_2[0x13];
    ppppppplStack_118 = (long *******)&ppppppplStack_e0;
    uStack_1a0 = (long *******)&ppppppplStack_100;
    ppppppplStack_198 = (long *******)&UNK_10b208fd0;
    ppppppplStack_190 = (long *******)&ppppppplStack_118;
    ppppppplStack_188 = (long *******)&UNK_10b216450;
    ppppppplStack_158 = (long *******)&uStack_1a0;
    ppppppplStack_160 = (long *******)0x1;
    ppppppplStack_150 = (long *******)0x2;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
               ,&ppppppplStack_160);
    lVar34 = 
    ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      ppppppplStack_1e8 =
           *(long ********)
            (
            ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
            + 0x20);
      ppppppplStack_1e0 =
           *(long ********)
            (
            ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
            + 0x28);
      ppppppplStack_1f0 = (long *******)0x2;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_1f0);
      if (iVar9 != 0) {
        ppppppplStack_a8 = *(long ********)(lVar34 + 0x60);
        ppppppplStack_a0 = *(long ********)(lVar34 + 0x68);
        ppppppplStack_c0 = *(long ********)(lVar34 + 0x50);
        ppppppplStack_b8 = *(long ********)(lVar34 + 0x58);
        ppppppplStack_c8 = (long *******)0x1;
        if (ppppppplStack_c0 == (long *******)0x0) {
          ppppppplStack_c8 = (long *******)0x2;
        }
        uStack_80 = *(undefined4 *)(lVar34 + 8);
        uStack_7c = *(undefined4 *)(lVar34 + 0xc);
        ppppppplStack_130 = (long *******)&ppppppplStack_160;
        ppppppplStack_128 = (long *******)CONCAT71(ppppppplStack_128._1_7_,1);
        ppppppplStack_1c0 = (long *******)&ppppppplStack_130;
        ppppppplStack_1b8 = (long *******)&DAT_1061c2098;
        ppppppplStack_b0 = (long *******)0x1;
        if (ppppppplStack_a8 == (long *******)0x0) {
          ppppppplStack_b0 = (long *******)0x2;
        }
        ppppppplStack_90 = ppppppplStack_1e8;
        ppppppplStack_98 = ppppppplStack_1f0;
        ppppppplStack_88 = ppppppplStack_1e0;
        ppppppplStack_70 = (long *******)&ppppppplStack_1c0;
        pcStack_78 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_c8);
      }
    }
  }
  else {
LAB_100a68c90:
    lVar34 = 
    ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      ppppppplStack_200 =
           *(long ********)
            (
            ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
            + 0x20);
      ppppppplStack_1f8 =
           *(long ********)
            (
            ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
            + 0x28);
      ppppppplStack_208 = (long *******)0x2;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_208);
      if (iVar9 != 0) {
        ppppppplStack_148 =
             (long *******)
             (
             ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9bb9e4ad88ba357E
             + 0x30);
        ppppppplStack_e0 = (long *******)&ppppppplStack_108;
        ppppppplStack_d8 =
             (long *******)
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        ppppppplStack_e8 = (long *******)&ppppppplStack_e0;
        ppppppplStack_f0 = (long *******)s__failed_to_parse_plugin_app_conf_108acf244;
        ppppppplStack_130 = (long *******)param_2[0x12];
        ppppppplStack_128 = (long *******)param_2[0x13];
        ppppppplStack_100 = (long *******)&ppppppplStack_130;
        uStack_1a0 = (long *******)&ppppppplStack_f0;
        ppppppplStack_198 = (long *******)&UNK_10b208fd0;
        ppppppplStack_190 = (long *******)&ppppppplStack_100;
        ppppppplStack_188 = (long *******)&UNK_10b216450;
        ppppppplStack_158 = (long *******)&uStack_1a0;
        ppppppplStack_160 = (long *******)0x1;
        ppppppplStack_150 = (long *******)0x2;
        ppppppplStack_90 = ppppppplStack_200;
        ppppppplStack_98 = ppppppplStack_208;
        ppppppplStack_88 = ppppppplStack_1f8;
        ppppppplStack_a8 = *(long ********)(lVar34 + 0x60);
        ppppppplStack_a0 = *(long ********)(lVar34 + 0x68);
        ppppppplStack_c0 = *(long ********)(lVar34 + 0x50);
        ppppppplStack_b8 = *(long ********)(lVar34 + 0x58);
        ppppppplStack_c8 = (long *******)0x1;
        if (ppppppplStack_c0 == (long *******)0x0) {
          ppppppplStack_c8 = (long *******)0x2;
        }
        uStack_80 = *(undefined4 *)(lVar34 + 8);
        uStack_7c = *(undefined4 *)(lVar34 + 0xc);
        ppppppplStack_1c0 = (long *******)&ppppppplStack_160;
        ppppppplStack_1b8 = (long *******)CONCAT71(ppppppplStack_1b8._1_7_,1);
        ppppppplStack_1f0 = (long *******)&ppppppplStack_1c0;
        ppppppplStack_1e8 = (long *******)&DAT_1061c2098;
        ppppppplStack_b0 = (long *******)0x1;
        if (ppppppplStack_a8 == (long *******)0x0) {
          ppppppplStack_b0 = (long *******)0x2;
        }
        ppppppplStack_70 = (long *******)&ppppppplStack_1f0;
        pcStack_78 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_c8);
      }
    }
  }
  unaff_x23 = ppppppplStack_108;
  if (*ppppppplStack_108 == (long ******)0x1) {
    pppppplVar38 = ppppppplStack_108[1];
    if (((ulong)pppppplVar38 & 3) == 1) {
      pppppplVar37 = (long ******)((long)pppppplVar38 + -1);
      ppppplVar31 = *pppppplVar37;
      puVar13 = *(undefined8 **)((long)pppppplVar38 + 7);
      pcVar14 = (code *)*puVar13;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(ppppplVar31);
      }
      if (puVar13[1] != 0) {
        _free(ppppplVar31);
      }
      goto LAB_100a68e68;
    }
  }
  else if ((*ppppppplStack_108 == (long ******)0x0) && (ppppppplStack_108[2] != (long ******)0x0)) {
    pppppplVar37 = ppppppplStack_108[1];
LAB_100a68e68:
    _free(pppppplVar37);
  }
  _free(unaff_x23);
joined_r0x000100a68254:
  if (ppppppplVar20 != (long *******)0x0) {
LAB_100a68e7c:
    _free(ppppppplVar22);
  }
LAB_100a68e84:
  if (param_2[0x11] != 0) {
    _free(param_2[0x12]);
  }
  goto LAB_100a67ab4;
joined_r0x000100a68904:
  for (; ppppppplStack_a0 = ppppppplVar7, ppppppplStack_b0 = ppppppplVar6,
      ppppppplStack_90 = ppppppplVar17, ppppppplStack_a8 = ppppppplVar15,
      ppppppplVar25 != (long *******)0x0; ppppppplVar25 = (long *******)((long)ppppppplVar25 + -1))
  {
    while (ppppppplVar35 == (long *******)0x0) {
      pppppplVar38 = *ppppppplVar5;
      ppppppplVar26 = ppppppplVar26 + -0x30;
      ppppppplVar5 = ppppppplVar5 + 1;
      ppppppplVar35 =
           (long *******)
           (CONCAT17(-(-1 < (long)pppppplVar38),
                     CONCAT16(-(-1 < (char)((ulong)pppppplVar38 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)pppppplVar38 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)pppppplVar38 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)pppppplVar38 >> 0x18))
                                                         ,CONCAT12(-(-1 < (char)((ulong)pppppplVar38
                                                                                >> 0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  pppppplVar38 >> 8)),-(-1 < (char)pppppplVar38)))))
                                      ))) & 0x8080808080808080);
    }
    uVar23 = ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)ppppppplVar35 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    iVar9 = (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
    if (ppppppplVar26[(long)-iVar9 * 6 + -6] != (long ******)0x0) {
      _free(ppppppplVar26[(long)-iVar9 * 6 + -5]);
    }
    if (ppppppplVar26[(long)-iVar9 * 6 + -3] != (long ******)0x0) {
      _free(ppppppplVar26[(long)-iVar9 * 6 + -2]);
    }
    ppppppplVar35 = (long *******)((ulong)((long)ppppppplVar35 + -1) & (ulong)ppppppplVar35);
    ppppppplVar15 = ppppppplStack_a8;
    ppppppplVar17 = ppppppplStack_90;
    ppppppplVar6 = ppppppplStack_b0;
    ppppppplVar7 = ppppppplStack_a0;
  }
LAB_100a68970:
  if ((ppppppplStack_c8 != (long *******)0x0) && (ppppppplStack_c0 != (long *******)0x0)) {
    _free(ppppppplStack_b8);
  }
  ppppppplVar30 = ppppppplStack_190;
  ppppppplVar10 = ppppppplStack_198;
  ppppppplStack_128 = ppppppplStack_198;
  ppppppplStack_130 = uStack_1a0;
  ppppppplStack_120 = ppppppplStack_190;
  ppppppplStack_c8 = (long *******)&ppppppplStack_100;
  if ((long *******)0x1 < ppppppplStack_190) {
    if (ppppppplStack_190 < (long *******)0x15) {
      FUN_100e94434(ppppppplStack_198,ppppppplStack_190);
    }
    else {
      __ZN4core5slice4sort8unstable7ipnsort17ha1a305eae3f2e01dE
                (ppppppplStack_198,ppppppplStack_190,&ppppppplStack_c8);
    }
  }
LAB_100a67dd8:
  ppppppplVar5 = ppppppplStack_130;
  ppppppplVar29 = ppppppplVar10 + (long)ppppppplVar30 * 3;
  ppppppplVar26 = (long *******)param_2[5];
  ppppppplVar25 = (long *******)param_2[6];
  ppppppplStack_190 = ppppppplStack_130;
  unaff_x23 = ppppppplVar10;
  ppppppplVar15 = ppppppplVar10;
  uStack_1a0 = ppppppplVar10;
  ppppppplVar35 = ppppppplVar10;
  ppppppplStack_198 = ppppppplVar10;
  ppppppplStack_188 = ppppppplVar29;
  auStack_180._0_8_ = ppppppplVar26;
  auStack_180._8_8_ = ppppppplVar25;
  if (ppppppplVar30 != (long *******)0x0) {
    do {
      while( true ) {
        unaff_x23 = ppppppplVar15 + 3;
        pppppplVar38 = *ppppppplVar15;
        pppppplVar37 = ppppppplVar15[1];
        pppppplVar32 = ppppppplVar15[2];
        FUN_100e8d6f8(pppppplVar37,pppppplVar32);
        ppppppplVar15 = unaff_x23;
        if (extraout_x1 != 0) break;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (1 < bRam000000010b62b760 - 1) {
            if (bRam000000010b62b760 != 0) {
              cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                                );
              if (cVar8 != '\0') goto LAB_100a67e74;
            }
            goto LAB_100a68014;
          }
LAB_100a67e74:
          iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                            );
          if (iVar9 == 0) goto LAB_100a68014;
          ppppppplStack_1d8 =
               (long *******)
               (
               ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
               + 0x30);
          ppppppplStack_118 = (long *******)&UNK_108cb681c;
          uStack_110 = 0x4d;
          ppppppplStack_108 = (long *******)&ppppppplStack_100;
          ppppppplStack_160 = (long *******)&ppppppplStack_118;
          ppppppplStack_150 = (long *******)&ppppppplStack_108;
          ppppppplStack_158 = (long *******)&UNK_10b208fd0;
          ppppppplStack_148 = (long *******)&UNK_10b216450;
          ppppppplStack_1f0 = (long *******)0x1;
          ppppppplStack_1e8 = (long *******)&ppppppplStack_160;
          ppppppplStack_1e0 = (long *******)0x2;
          ppppppplStack_100 = ppppppplVar26;
          ppppppplStack_f8 = ppppppplVar25;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                     ,&ppppppplStack_1f0);
          lVar34 = 
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_230 =
                 *(long ********)
                  (
                  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                  + 0x20);
            ppppppplStack_228 =
                 *(long ********)
                  (
                  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                  + 0x28);
            ppppppplStack_238 = (long *******)0x2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_238);
            if (iVar9 != 0) {
              ppppppplStack_a8 = *(long ********)(lVar34 + 0x60);
              ppppppplStack_a0 = *(long ********)(lVar34 + 0x68);
              ppppppplStack_c0 = *(long ********)(lVar34 + 0x50);
              ppppppplStack_b8 = *(long ********)(lVar34 + 0x58);
              ppppppplStack_c8 = (long *******)0x1;
              if (ppppppplStack_c0 == (long *******)0x0) {
                ppppppplStack_c8 = (long *******)0x2;
              }
              uStack_80 = *(undefined4 *)(lVar34 + 8);
              uStack_7c = *(undefined4 *)(lVar34 + 0xc);
              ppppppplStack_f0 = (long *******)&ppppppplStack_1f0;
              ppppppplStack_e8 = (long *******)CONCAT71(ppppppplStack_e8._1_7_,1);
              ppppppplStack_e0 = (long *******)&ppppppplStack_f0;
              ppppppplStack_d8 = (long *******)&DAT_1061c2098;
              ppppppplStack_b0 = (long *******)0x1;
              if (ppppppplStack_a8 == (long *******)0x0) {
                ppppppplStack_b0 = (long *******)0x2;
              }
              ppppppplStack_90 = ppppppplStack_230;
              ppppppplStack_98 = ppppppplStack_238;
              ppppppplStack_88 = ppppppplStack_228;
              ppppppplStack_70 = (long *******)&ppppppplStack_e0;
              pcStack_78 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_c8);
            }
          }
        }
        else {
LAB_100a68014:
          lVar34 = 
          ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_1b8 =
                 *(long ********)
                  (
                  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                  + 0x20);
            auStack_1b0._0_8_ =
                 *(undefined8 *)
                  (
                  ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                  + 0x28);
            ppppppplStack_1c0 = (long *******)0x2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_1c0);
            if (iVar9 != 0) {
              ppppppplStack_1d8 =
                   (long *******)
                   (
                   ___ZN18codex_core_plugins6loader20load_apps_from_paths28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hed82ef846af01a9fE
                   + 0x30);
              ppppppplStack_100 = (long *******)&UNK_108cb681c;
              ppppppplStack_f8 = (long *******)0x4d;
              ppppppplStack_118 = (long *******)&ppppppplStack_f0;
              ppppppplStack_160 = (long *******)&ppppppplStack_100;
              ppppppplStack_150 = (long *******)&ppppppplStack_118;
              ppppppplStack_158 = (long *******)&UNK_10b208fd0;
              ppppppplStack_148 = (long *******)&UNK_10b216450;
              ppppppplStack_1e8 = (long *******)&ppppppplStack_160;
              ppppppplStack_1f0 = (long *******)0x1;
              ppppppplStack_1e0 = (long *******)0x2;
              ppppppplStack_a8 = *(long ********)(lVar34 + 0x60);
              ppppppplStack_a0 = *(long ********)(lVar34 + 0x68);
              ppppppplStack_c0 = *(long ********)(lVar34 + 0x50);
              ppppppplStack_b8 = *(long ********)(lVar34 + 0x58);
              ppppppplStack_c8 = (long *******)0x1;
              if (ppppppplStack_c0 == (long *******)0x0) {
                ppppppplStack_c8 = (long *******)0x2;
              }
              uStack_80 = *(undefined4 *)(lVar34 + 8);
              uStack_7c = *(undefined4 *)(lVar34 + 0xc);
              ppppppplStack_e0 = (long *******)&ppppppplStack_1f0;
              ppppppplStack_d8 = (long *******)CONCAT71(ppppppplStack_d8._1_7_,1);
              ppppppplStack_238 = (long *******)&ppppppplStack_e0;
              ppppppplStack_230 = (long *******)&DAT_1061c2098;
              ppppppplStack_b0 = (long *******)0x1;
              if (ppppppplStack_a8 == (long *******)0x0) {
                ppppppplStack_b0 = (long *******)0x2;
              }
              ppppppplStack_90 = ppppppplStack_1b8;
              ppppppplStack_98 = ppppppplStack_1c0;
              ppppppplStack_88 = (long *******)auStack_1b0._0_8_;
              ppppppplStack_70 = (long *******)&ppppppplStack_238;
              pcStack_78 = s__108b39f4f;
              ppppppplStack_f0 = ppppppplVar26;
              ppppppplStack_e8 = ppppppplVar25;
              (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_c8);
            }
          }
        }
        if (pppppplVar38 != (long ******)0x0) {
          _free(pppppplVar37);
        }
LAB_100a67e18:
        ppppppplVar35 = ppppppplStack_198;
        if (unaff_x23 == ppppppplVar29) goto LAB_100a68200;
      }
      if (pppppplVar38 == (long ******)0x8000000000000000) goto LAB_100a67e18;
      lVar34 = param_2[9];
      if (lVar34 == param_2[7]) {
        FUN_108855060(param_2 + 7,lVar34,1,8,0x18);
      }
      plVar16 = (long *)(param_2[8] + lVar34 * 0x18);
      *plVar16 = (long)pppppplVar38;
      plVar16[1] = (long)pppppplVar37;
      plVar16[2] = (long)pppppplVar32;
      param_2[9] = lVar34 + 1;
      ppppppplVar35 = unaff_x23;
    } while (unaff_x23 != ppppppplVar29);
  }
LAB_100a68200:
  ppppppplStack_198 = ppppppplVar35;
  if ((long)ppppppplVar29 - (long)unaff_x23 != 0) {
    uVar23 = (ulong)((long)ppppppplVar29 - (long)unaff_x23) / 0x18;
    ppppppplVar30 = unaff_x23 + 1;
    do {
      if (ppppppplVar30[-1] != (long ******)0x0) {
        _free(*ppppppplVar30);
      }
      ppppppplVar30 = ppppppplVar30 + 3;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  if (ppppppplVar5 != (long *******)0x0) {
    _free(ppppppplVar10);
  }
  goto joined_r0x000100a68254;
LAB_100a68528:
  do {
    plVar33 = (long *)(lVar28 + lVar27 * 0x18);
    if (plVar16[2] == plVar33[-1]) {
      lVar21 = plVar16[1];
      iVar9 = _memcmp(lVar21,plVar33[-2]);
      if (iVar9 != 0) goto LAB_100a68508;
      if (*plVar16 != 0) {
        _free(lVar21);
      }
    }
    else {
LAB_100a68508:
      lVar39 = plVar16[1];
      lVar21 = *plVar16;
      plVar33[2] = plVar16[2];
      plVar33[1] = lVar39;
      *plVar33 = lVar21;
      lVar27 = lVar27 + 1;
    }
    plVar16 = plVar16 + 3;
    lVar34 = lVar34 + -1;
  } while (lVar34 != 0);
LAB_100a686d8:
  param_2[9] = lVar27;
  goto LAB_100a686dc;
}

