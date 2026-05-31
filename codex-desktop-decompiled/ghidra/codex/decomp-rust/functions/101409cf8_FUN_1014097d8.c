
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014097d8(undefined8 param_1,byte *param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  byte *****pppppbVar3;
  byte bVar4;
  byte ******ppppppbVar5;
  byte ******ppppppbVar6;
  ushort uVar7;
  ushort uVar8;
  byte ******ppppppbVar9;
  byte *****pppppbVar10;
  byte *****pppppbVar11;
  byte *****pppppbVar12;
  byte *****pppppbVar13;
  code *pcVar14;
  bool bVar15;
  byte *****pppppbVar16;
  long lVar17;
  char cVar18;
  int iVar19;
  byte ******ppppppbVar20;
  ulong uVar21;
  byte ******ppppppbVar22;
  undefined *puVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  byte *****pppppbStack_1b8;
  byte *****pppppbStack_1b0;
  byte ***pppbStack_1a0;
  byte *****pppppbStack_198;
  undefined8 uStack_190;
  byte ****ppppbStack_180;
  undefined *puStack_178;
  byte ***pppbStack_170;
  byte *****pppppbStack_168;
  byte *****pppppbStack_160;
  undefined *puStack_158;
  byte *****pppppbStack_150;
  byte *****pppppbStack_148;
  byte *****pppppbStack_140;
  byte *****pppppbStack_138;
  undefined1 uStack_130;
  byte *****pppppbStack_128;
  byte *****pppppbStack_120;
  byte *****pppppbStack_118;
  byte *****pppppbStack_110;
  undefined1 uStack_108;
  uint7 uStack_107;
  byte *****pppppbStack_100;
  byte *****pppppbStack_f8;
  byte *****pppppbStack_f0;
  byte ***pppbStack_e8;
  byte ***pppbStack_e0;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  byte *****pppppbStack_c0;
  byte *****pppppbStack_b8;
  byte ***pppbStack_b0;
  byte *****pppppbStack_a8;
  undefined8 uStack_a0;
  byte *****pppppbStack_98;
  byte *****pppppbStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  byte *****pppppbStack_78;
  byte *****pppppbStack_70;
  undefined *puStack_68;
  
  FUN_100ea12b8(&pppppbStack_d0,param_1,&UNK_108cb19e8);
  pppppbVar13 = pppppbStack_b8;
  pppppbStack_1b0 = pppppbStack_c0;
  pppppbVar3 = pppppbStack_c8;
  pppppbVar16 = pppppbStack_d0;
  if (uStack_a0._2_1_ == '\x03') {
    func_0x000108a07a3c(&UNK_108caab02,0x17,&pppppbStack_70,&UNK_10b234e80,&UNK_10b2235f8);
  }
  else {
    pppppbStack_1b8 = pppppbStack_c8;
    pppppbStack_198 = pppppbStack_a8;
    pppbStack_1a0 = pppbStack_b0;
    uStack_190 = uStack_a0;
    pppppbStack_100 = (byte *****)0x0;
    pppppbStack_f8 = (byte *****)0x1;
    pppppbStack_f0 = (byte *****)0x0;
    pppppbStack_c0 = (byte *****)0x60000020;
    pppppbStack_d0 = (byte *****)&pppppbStack_100;
    pppppbStack_c8 = (byte *****)&UNK_10b209290;
    iVar19 = __ZN93__LT_rama_net__address__host_with_opt_port__HostWithOptPort_u20_as_u20_core__fmt__Display_GT_3fmt17h1a01c45ad78bf007E
                       (param_2,&pppppbStack_d0);
    pppppbVar12 = pppppbStack_f0;
    pppppbVar11 = pppppbStack_f8;
    pppppbVar10 = pppppbStack_100;
    if (iVar19 == 0) {
      ppppppbVar20 = (byte ******)_malloc(0x20);
      ppppppbVar9 = uStack_190;
      ppppppbVar22 = (byte ******)pppppbStack_198;
      if (ppppppbVar20 == (byte ******)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      }
      else {
        *ppppppbVar20 = (byte *****)0x1;
        ppppppbVar20[1] = pppppbVar10;
        ppppppbVar20[2] = pppppbVar11;
        ppppppbVar20[3] = pppppbVar12;
        pppppbStack_c0 = pppppbVar12;
        pppppbStack_d0 = (byte *****)0x0;
        pppppbStack_c8 = pppppbVar11;
        ppppppbVar6 = (byte ******)pppppbVar11;
        for (ppppppbVar5 = (byte ******)pppppbVar12; pppppbStack_b8 = (byte *****)ppppppbVar20,
            ppppppbVar5 != (byte ******)0x0; ppppppbVar5 = (byte ******)((long)ppppppbVar5 + -1)) {
          bVar4 = *(byte *)ppppppbVar6;
          if (bVar4 < 0x20) {
            if (bVar4 != 9) {
LAB_1014098d0:
              pppppbVar16 = *ppppppbVar20;
              *ppppppbVar20 = (byte *****)((long)pppppbVar16 + -1);
              LORelease();
              if (pppppbVar16 == (byte *****)0x1) {
                if (ppppppbVar20[1] != (byte *****)0x0) {
                  _free(ppppppbVar20[2]);
                }
                _free(ppppppbVar20);
              }
              if ((byte ******)pppppbStack_d0 != (byte ******)0x0) {
                (*(code *)pppppbStack_d0[4])(&pppppbStack_b8,pppppbStack_c8,pppppbStack_c0);
              }
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                 (((bRam000000010b638c70 - 1 < 2 ||
                   ((bRam000000010b638c70 != 0 &&
                    (cVar18 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                                        ), cVar18 != '\0')))) &&
                  (iVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                                      ), iVar19 != 0)))) {
                pppppbStack_b8 =
                     (byte *****)
                     (
                     ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                     + 0x30);
                pppppbStack_128 = (byte *****)&pppppbStack_70;
                pppppbStack_120 =
                     (byte *****)
                     &
                     __ZN78__LT_http__header__value__InvalidHeaderValue_u20_as_u20_core__fmt__Display_GT_3fmt17hf88278615a9d7b82E
                ;
                pppppbStack_148 = (byte *****)&pppppbStack_128;
                pppppbStack_150 = (byte *****)s_Kfailed_to_encode_stringified_au_108ad91d6;
                pppppbStack_70 = (byte *****)&pppppbStack_150;
                puStack_68 = &UNK_10b208fd0;
                pppppbStack_d0 = (byte *****)0x1;
                pppppbStack_c0 = (byte *****)0x1;
                pppppbStack_c8 = pppppbStack_128;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                           ,&pppppbStack_d0);
                lVar17 = 
                ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  pppppbStack_f8 =
                       *(byte ******)
                        (
                        ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                        + 0x20);
                  pppppbStack_f0 =
                       *(byte ******)
                        (
                        ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                        + 0x28);
                  pppppbStack_100 = (byte *****)0x4;
                  puVar23 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar23 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar19 = (**(code **)(puVar23 + 0x18))(puVar2,&pppppbStack_100);
                  if (iVar19 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar17,puVar2,puVar23,&pppppbStack_100,&pppppbStack_d0);
                  }
                }
              }
              else {
                lVar17 = 
                ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  pppppbStack_120 =
                       *(byte ******)
                        (
                        ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                        + 0x20);
                  pppppbStack_118 =
                       *(byte ******)
                        (
                        ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                        + 0x28);
                  pppppbStack_128 = (byte *****)0x4;
                  puVar23 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar23 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar19 = (**(code **)(puVar23 + 0x18))(puVar2,&pppppbStack_128);
                  if (iVar19 != 0) {
                    pppbStack_e8 = (byte ***)
                                   (
                                   ___ZN97__LT_rama_http_headers__common__host__Host_u20_as_u20_rama_http_headers__header__HeaderEncode_GT_6encode10__CALLSITE17hdd330cb80450c85bE
                                   + 0x30);
                    pppppbStack_160 = (byte *****)&pppppbStack_70;
                    puStack_158 = &
                                  __ZN78__LT_http__header__value__InvalidHeaderValue_u20_as_u20_core__fmt__Display_GT_3fmt17hf88278615a9d7b82E
                    ;
                    pppppbStack_168 = (byte *****)&pppppbStack_160;
                    pppbStack_170 = (byte ***)s_Kfailed_to_encode_stringified_au_108ad91d6;
                    ppppbStack_180 = &pppbStack_170;
                    puStack_178 = &UNK_10b208fd0;
                    pppppbStack_f8 = &ppppbStack_180;
                    pppppbStack_100 = (byte *****)0x1;
                    pppppbStack_f0 = (byte *****)0x1;
                    pppbStack_b0 = *(byte ****)(lVar17 + 0x60);
                    pppppbStack_a8 = *(byte ******)(lVar17 + 0x68);
                    pppppbStack_c8 = *(byte ******)(lVar17 + 0x50);
                    pppppbStack_c0 = *(byte ******)(lVar17 + 0x58);
                    pppppbStack_d0 = (byte *****)0x1;
                    if ((byte ******)pppppbStack_c8 == (byte ******)0x0) {
                      pppppbStack_d0 = (byte *****)0x2;
                    }
                    uStack_88 = *(undefined4 *)(lVar17 + 8);
                    uStack_84 = *(undefined4 *)(lVar17 + 0xc);
                    pppppbStack_70 = (byte *****)&pppppbStack_100;
                    puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
                    pppppbStack_148 = (byte *****)&DAT_1061c2098;
                    pppppbStack_b8 = (byte *****)0x1;
                    if ((byte ****)pppbStack_b0 == (byte ****)0x0) {
                      pppppbStack_b8 = (byte *****)0x2;
                    }
                    pppppbStack_98 = pppppbStack_120;
                    uStack_a0 = (byte ******)pppppbStack_128;
                    pppppbStack_90 = pppppbStack_118;
                    pppppbStack_78 = (byte *****)&pppppbStack_150;
                    pcStack_80 = s__108b39f4f;
                    pppppbStack_150 = pppppbStack_160;
                    (**(code **)(puVar23 + 0x20))(puVar2,&pppppbStack_d0);
                  }
                }
              }
              goto LAB_101409d9c;
            }
          }
          else if (bVar4 == 0x7f) goto LAB_1014098d0;
          ppppppbVar6 = (byte ******)((long)ppppppbVar6 + 1);
        }
        pppppbStack_150 = (byte *****)&UNK_10b238ad0;
        pppppbStack_148 = pppppbVar11;
        pppppbStack_140 = pppppbVar12;
        uStack_130 = 2;
        pppppbStack_128 = (byte *****)&UNK_10b238ad0;
        pppppbStack_120 = pppppbVar11;
        pppppbStack_118 = pppppbVar12;
        uStack_108 = 0;
        uVar26 = (ulong)uStack_190 & 0xffff;
        bVar15 = uStack_190._2_1_ == 2;
        lVar17 = 0;
        if (2 < uStack_190._2_1_) {
          lVar17 = (ulong)(byte)(uStack_190._2_1_ - 3) + 1;
        }
        uStack_190._0_3_ = CONCAT12(4,(undefined2)uStack_190);
        pppppbStack_138 = (byte *****)ppppppbVar20;
        pppppbStack_110 = (byte *****)ppppppbVar20;
        if (lVar17 == 0) {
          if (bVar15) {
            pppppbStack_d0 = (byte *****)&UNK_10b238ad0;
            pppbStack_b0 = (byte ***)((ulong)uStack_107 << 8);
            ppppppbVar22 = (byte ******)pppppbVar16[5];
            if (pppppbStack_1b0 < ppppppbVar22) {
              if (((ulong)pppppbVar16[4][(long)pppppbStack_1b0 * 0xd] & 1) != 0) {
                FUN_100ea2b1c(pppppbVar16,(pppppbVar16[4] + (long)pppppbStack_1b0 * 0xd)[1]);
                ppppppbVar22 = (byte ******)pppppbVar16[5];
              }
              if (pppppbStack_1b0 < ppppppbVar22) {
                pppppbVar16 = (byte *****)pppppbVar16[4];
                pppbStack_e0 = (byte ***)pppppbVar16[(long)pppppbStack_1b0 * 0xd + 7];
                pppbStack_e8 = (byte ***)pppppbVar16[(long)pppppbStack_1b0 * 0xd + 6];
                pppppbStack_f0 = (byte *****)pppppbVar16[(long)pppppbStack_1b0 * 0xd + 5];
                pppppbStack_f8 = (byte *****)pppppbVar16[(long)pppppbStack_1b0 * 0xd + 4];
                pppppbStack_100 = (byte *****)pppppbVar16[(long)pppppbStack_1b0 * 0xd + 3];
                pppppbVar16[(long)pppppbStack_1b0 * 0xd + 7] =
                     (byte ****)CONCAT71(uStack_107,uStack_108);
                pppppbVar16[(long)pppppbStack_1b0 * 0xd + 6] = (byte ****)pppppbStack_110;
                pppppbVar16[(long)pppppbStack_1b0 * 0xd + 5] = (byte ****)pppppbStack_118;
                pppppbVar16[(long)pppppbStack_1b0 * 0xd + 4] = (byte ****)pppppbStack_120;
                pppppbVar16[(long)pppppbStack_1b0 * 0xd + 3] = (byte ****)pppppbStack_128;
                (*(code *)pppppbStack_100[4])(&pppbStack_e8,pppppbStack_f8,pppppbStack_f0);
                ppppppbVar22 = (byte ******)pppppbVar3;
                goto LAB_101409b70;
              }
              puVar23 = &UNK_10b236248;
            }
            else {
              puVar23 = &UNK_10b236230;
            }
            func_0x000108a07bdc(pppppbStack_1b0,ppppppbVar22,puVar23);
          }
          else {
            pppbStack_e8 = pppbStack_1a0;
            pppppbStack_f0 = pppppbVar13;
            pppppbStack_d0 = (byte *****)&UNK_10b238ad0;
            pppbStack_b0 = (byte ***)((ulong)uStack_107 << 8);
            pppppbStack_100 = pppppbVar3;
            pppppbStack_f8 = pppppbStack_1b0;
            pppppbStack_1b0 = (byte *****)pppppbVar16[5];
            uVar21 = FUN_100ea29f4(pppppbVar16,uVar26,&pppppbStack_100,&pppppbStack_d0);
            if ((uVar21 & 1) == 0) {
              uVar21 = 0;
              pppppbVar3 = (byte *****)pppppbVar16[9];
              ppppppbVar5 = (byte ******)pppppbVar16[10];
              uVar25 = (uint)pppppbStack_1b0 & 0xffff;
              ppppppbVar20 = ppppppbVar22;
              while( true ) {
                uVar7 = (ushort)uVar26;
                uVar8 = (ushort)uVar25;
                if ((ppppppbVar5 <= ppppppbVar20) &&
                   (ppppppbVar20 = (byte ******)0x0, ppppppbVar5 == (byte ******)0x0)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                puVar1 = (ushort *)((long)pppppbVar3 + (long)ppppppbVar20 * 4);
                uVar25 = (uint)*puVar1;
                if (uVar25 == 0xffff) break;
                uVar21 = uVar21 + 1;
                uVar26 = (ulong)puVar1[1];
                *puVar1 = uVar8;
                puVar1[1] = uVar7;
                ppppppbVar20 = (byte ******)((long)ppppppbVar20 + 1);
              }
              *puVar1 = uVar8;
              puVar1[1] = uVar7;
              if ((((ulong)ppppppbVar9 & 0x10000) != 0 || 0x7f < uVar21) &&
                 ((byte *****)*pppppbVar16 == (byte *****)0x0)) {
                *pppppbVar16 = (byte ****)0x1;
              }
LAB_101409b70:
              uStack_190._0_3_ = CONCAT12(3,(undefined2)uStack_190);
              pppppbStack_1b8 = (byte *****)ppppppbVar22;
LAB_101409d9c:
              if (((uStack_190._2_1_ < 3) && (uStack_190._2_1_ != 2)) &&
                 ((byte ******)pppppbStack_1b8 != (byte ******)0x0)) {
                (*(code *)pppppbStack_1b8[4])(&pppbStack_1a0,pppppbStack_1b0,pppppbVar13);
              }
              if ((*param_2 != 0x1a) && (0x18 < *param_2)) {
                plVar24 = *(long **)(param_2 + 8);
                lVar17 = *plVar24;
                *plVar24 = lVar17 + -1;
                LORelease();
                if (lVar17 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_2 + 8);
                }
              }
              return;
            }
            func_0x000108a07a3c(&UNK_108caab02,0x17,&pppppbStack_70,&UNK_10b234e80,&UNK_10b21f0b0);
          }
        }
        else if (lVar17 == 1) {
          pppppbStack_d0 = (byte *****)&UNK_10b238ad0;
          pppbStack_b0 = (byte ***)((ulong)uStack_107 << 8);
          if (pppppbStack_1b0 < pppppbVar16[5]) {
            FUN_100ea08a0(pppppbStack_1b0,pppppbVar16[4] + (long)pppppbStack_1b0 * 0xd,
                          pppppbVar16 + 6,&pppppbStack_128);
            ppppppbVar22 = (byte ******)pppppbVar3;
            goto LAB_101409b70;
          }
          func_0x000108a07bdc(pppppbStack_1b0,pppppbVar16[5],&UNK_10b236470);
        }
        else {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cacec7,0x7b,&UNK_10b221958);
        }
      }
    }
    else {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&pppppbStack_70,&UNK_10b235000,&UNK_10b2346c0);
    }
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x101409f14);
  (*pcVar14)();
}

