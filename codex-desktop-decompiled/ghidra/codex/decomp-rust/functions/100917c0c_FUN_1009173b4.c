
/* WARNING: Removing unreachable block (ram,0x000100917840) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009173b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined6 uVar7;
  undefined1 uVar8;
  undefined6 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  char cVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined1 uVar20;
  uint uVar21;
  uint extraout_w8;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  byte bVar29;
  long unaff_x28;
  undefined1 auVar30 [16];
  undefined8 *******pppppppuStack_bc8;
  undefined8 *******pppppppuStack_bc0;
  undefined8 *******pppppppuStack_bb8;
  undefined8 *******pppppppuStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 *******pppppppuStack_b98;
  undefined8 *******pppppppuStack_b90;
  undefined8 uStack_b88;
  undefined8 *******pppppppuStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 ******ppppppuStack_b60;
  undefined8 *******pppppppuStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  long lStack_b40;
  long lStack_b38;
  long lStack_b30;
  undefined8 ******ppppppuStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined1 auStack_a90 [592];
  undefined7 uStack_840;
  byte bStack_839;
  undefined7 uStack_838;
  byte bStack_831;
  undefined7 uStack_830;
  undefined8 uStack_820;
  undefined8 uStack_818;
  byte *pbStack_810;
  undefined *puStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  byte bStack_5e8;
  undefined1 uStack_5e7;
  undefined6 uStack_5e6;
  byte bStack_5e0;
  undefined1 uStack_5df;
  undefined6 uStack_5de;
  byte bStack_5d8;
  undefined1 uStack_5d7;
  undefined6 uStack_5d6;
  byte bStack_5d0;
  undefined7 uStack_5cf;
  long lStack_5c8;
  undefined1 auStack_5c0 [8];
  long lStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a0;
  undefined8 uStack_598;
  long lStack_588;
  undefined8 uStack_580;
  long lStack_570;
  undefined8 uStack_568;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 uStack_538;
  long lStack_528;
  undefined8 uStack_520;
  long lStack_510;
  undefined8 uStack_508;
  long lStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4c8 [72];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [248];
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined1 auStack_330 [464];
  byte *pbStack_160;
  undefined *puStack_158;
  byte *pbStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  bVar3 = *(byte *)((long)param_2 + 0x51);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b2264e0);
LAB_100917948:
      uVar24 = FUN_107c05cc4(&UNK_10b2264e0);
      if (*(long *)(unaff_x28 + 7) != 0) {
        _free(CONCAT71(uStack_830,bStack_831));
        *(undefined1 *)((long)param_2 + 0x51) = 2;
        uVar24 = __Unwind_Resume(uVar24);
        FUN_100e4a6c8(&lStack_370);
        if (CONCAT62(uStack_5e6,CONCAT11(uStack_5e7,bStack_5e8)) == 0) {
          lVar22 = CONCAT71(uStack_5cf,bStack_5d0);
        }
        else {
          _free(CONCAT62(uStack_5de,CONCAT11(uStack_5df,bStack_5e0)));
          lVar22 = CONCAT71(uStack_5cf,bStack_5d0);
        }
        if (lVar22 != 0) {
          _free(lStack_5c8);
        }
        if ((lStack_540 != -0x8000000000000000) && (lStack_540 != 0)) {
          _free(uStack_538);
        }
        if (lStack_5b8 != 0) {
          _free(uStack_5b0);
        }
        if (lStack_5a0 != 0) {
          _free(uStack_598);
        }
        FUN_100e4d08c(auStack_480);
        if ((lStack_528 != -0x8000000000000000) && (lStack_528 != 0)) {
          _free(uStack_520);
        }
        if (lStack_588 != 0) {
          _free(uStack_580);
        }
        if (lStack_570 != 0) {
          _free(uStack_568);
        }
        FUN_100e61884(auStack_468);
        if ((lStack_510 != -0x8000000000000000) && (lStack_510 != 0)) {
          _free(uStack_508);
        }
        if ((lStack_4f8 != -0x8000000000000000) && (lStack_4f8 != 0)) {
          _free(uStack_4f0);
        }
        FUN_100cc6380(auStack_4c8);
        if ((lStack_4e0 != -0x8000000000000000) && (lStack_4e0 != 0)) {
          _free(uStack_4d8);
        }
        FUN_100ca0554(&lStack_558);
      }
      *(undefined1 *)((long)param_2 + 0x51) = 2;
      __Unwind_Resume(uVar24);
      FUN_107c05ccc();
      auVar30 = FUN_107c05ccc();
      puVar19 = auVar30._8_8_;
      plVar18 = auVar30._0_8_;
      bVar3 = *(byte *)(puVar19 + 0x40);
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          puVar28 = puVar19 + 1;
          *puVar28 = *puVar19;
          if (lRam000000010b62c4d8 != 0) {
            ppppppuStack_b60 =
                 (undefined8 ******)
                 &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
            pppppppuStack_bc8 = &ppppppuStack_b60;
            __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                      (0x10b62c4d8,1,&pppppppuStack_bc8,&UNK_10b234158,&UNK_10b2340c8);
          }
          lVar25 = lRam000000010b62c4d0;
          lVar22 = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
                   (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          puVar19[2] = puVar28;
          puVar19[3] = lVar22;
          puVar19[4] = lVar25;
          *(undefined1 *)(puVar19 + 0xb) = 0;
LAB_100917cc8:
          puVar19[8] = 0;
          puVar19[5] = puVar28;
          puVar19[6] = lVar22;
          puVar19[7] = lVar25;
          puVar19[9] = 8;
          puVar19[10] = 0;
          if (lRam000000010b62c4d8 != 0) {
            ppppppuStack_b60 =
                 (undefined8 ******)
                 &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
            pppppppuStack_bc8 = &ppppppuStack_b60;
            __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                      (0x10b62c4d8,1,&pppppppuStack_bc8,&UNK_10b234158,&UNK_10b2340c8);
          }
          lVar22 = lRam000000010b62c4d0;
          lVar25 = *(long *)puVar19[5];
          puVar19[0x16] =
               ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
               (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          puVar19[0x17] = lVar22;
          puVar19[0x18] = lVar25 + 0x1bf8;
          puVar19[0x1e] = puVar19 + 8;
          *(undefined1 *)((long)puVar19 + 0xf9) = 0;
LAB_100917d20:
          FUN_1005f9154(&pppppppuStack_bc8,puVar19 + 0xc,param_3);
          pppppppuVar6 = pppppppuStack_bb0;
          pppppppuVar5 = pppppppuStack_bc0;
          pppppppuVar4 = pppppppuStack_bc8;
          if (pppppppuStack_bc8 == (undefined8 *******)0x8000000000000001) {
            *(undefined1 *)(puVar19 + 0xb) = 3;
          }
          else {
            if (*(char *)((long)puVar19 + 0xf9) == '\x03') {
              uVar24 = puVar19[0x14];
              puVar28 = (undefined8 *)puVar19[0x15];
              pcVar23 = (code *)*puVar28;
              if (pcVar23 != (code *)0x0) {
                (*pcVar23)(uVar24);
              }
              if (puVar28[1] != 0) {
                _free(uVar24);
              }
              if (puVar19[0x1b] != 0) {
                _free(puVar19[0x1c]);
              }
              *(undefined1 *)(puVar19 + 0x1f) = 0;
            }
            if (pppppppuVar4 == (undefined8 *******)0x8000000000000000) {
              uVar24 = 0;
              puVar28 = (undefined8 *)0x8;
            }
            else {
              puVar28 = (undefined8 *)_malloc(0x18);
              if (puVar28 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                goto LAB_1009182cc;
              }
              *puVar28 = pppppppuVar6;
              puVar28[1] = uStack_ba8;
              puVar28[2] = uStack_ba0;
              if (pppppppuVar4 != (undefined8 *******)0x0) {
                _free(pppppppuVar5);
              }
              uVar24 = 1;
            }
            puVar19[0xc] = uVar24;
            puVar19[0xd] = puVar28;
            puVar19[0xe] = uVar24;
            puVar19[0x1c] = puVar19[7];
            puVar19[0x1b] = puVar19[6];
            puVar19[0x27] = puVar19[5];
            *(undefined1 *)((long)puVar19 + 0x145) = 0;
LAB_100917e04:
            FUN_1005f7ad0(&pppppppuStack_bc8,puVar19 + 0xf,param_3);
            pppppppuVar6 = pppppppuStack_bb8;
            pppppppuVar5 = pppppppuStack_bc0;
            pppppppuVar4 = pppppppuStack_bc8;
            if (pppppppuStack_bc8 == (undefined8 *******)0x8000000000000001) {
              *(undefined1 *)(puVar19 + 0xb) = 4;
            }
            else {
              FUN_100cae11c(puVar19 + 0xf);
              if (pppppppuVar4 == (undefined8 *******)0x8000000000000000) {
                pppppppuStack_b98 = pppppppuVar5;
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62b1b8 - 1 < 2 ||
                     ((bRam000000010b62b1b8 != 0 &&
                      (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                          ), cVar14 != '\0')))) &&
                    (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                        ), (uVar16 & 1) != 0)))) {
                  lStack_b48 = ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                               + 0x30;
                  pppppppuStack_b90 = (undefined8 *******)&UNK_108ca6e4b;
                  uStack_b88 = 0x73;
                  pppppppuStack_b80 = &pppppppuStack_b98;
                  pppppppuStack_bc8 = &pppppppuStack_b90;
                  pppppppuStack_bc0 = (undefined8 *******)&UNK_10b208fd0;
                  pppppppuStack_bb8 = &pppppppuStack_b80;
                  pppppppuStack_bb0 = (undefined8 *******)&UNK_10b217808;
                  pppppppuStack_b58 = &pppppppuStack_bc8;
                  ppppppuStack_b60 = (undefined8 ******)0x1;
                  uStack_b50 = 2;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                             ,&ppppppuStack_b60);
                  lVar22 = 
                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uStack_b20 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                  + 0x20);
                    uStack_b18 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                  + 0x28);
                    ppppppuStack_b28 = (undefined8 ******)0x2;
                    puVar1 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar1 = &UNK_10b3c24c8;
                    }
                    puVar2 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_109adfc03;
                    }
                    iVar15 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppuStack_b28);
                    if (iVar15 != 0) {
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar2,puVar1,&ppppppuStack_b28,&ppppppuStack_b60);
                    }
                  }
                }
                else {
                  lVar22 = 
                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uStack_b70 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                  + 0x20);
                    uStack_b68 = *(undefined8 *)
                                  (
                                  ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                  + 0x28);
                    uStack_b78 = 2;
                    puVar1 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar1 = &UNK_10b3c24c8;
                    }
                    puVar2 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_109adfc03;
                    }
                    iVar15 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_b78);
                    if (iVar15 != 0) {
                      lStack_b48 = ___ZN10codex_core9agents_md15AgentsMdManager19instruction_sources28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9f39d8097b9aacf9E
                                   + 0x30;
                      ppppppuStack_b28 = (undefined8 ******)&UNK_108ca6e4b;
                      uStack_b20 = 0x73;
                      pppppppuStack_b90 = &pppppppuStack_b98;
                      pppppppuStack_bc8 = &ppppppuStack_b28;
                      pppppppuStack_bc0 = (undefined8 *******)&UNK_10b208fd0;
                      pppppppuStack_bb8 = &pppppppuStack_b90;
                      pppppppuStack_bb0 = (undefined8 *******)&UNK_10b217808;
                      pppppppuStack_b58 = &pppppppuStack_bc8;
                      ppppppuStack_b60 = (undefined8 ******)0x1;
                      uStack_b50 = 2;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar22,puVar2,puVar1,&uStack_b78,&ppppppuStack_b60);
                    }
                  }
                }
                if (((ulong)pppppppuStack_b98 & 3) == 1) {
                  puVar26 = (undefined8 *)((long)pppppppuStack_b98 + -1);
                  uVar24 = *puVar26;
                  puVar28 = *(undefined8 **)((long)pppppppuStack_b98 + 7);
                  pcVar23 = (code *)*puVar28;
                  if (pcVar23 != (code *)0x0) {
                    (*pcVar23)(uVar24);
                  }
                  if (puVar28[1] != 0) {
                    _free(uVar24);
                  }
                  _free(puVar26);
                }
              }
              else {
                pppppppuStack_bb0 = pppppppuVar5 + (long)pppppppuVar6 * 3;
                pppppppuStack_bc8 = pppppppuVar5;
                pppppppuStack_bb8 = pppppppuVar4;
                lVar22 = puVar19[0xe];
                pppppppuStack_bc0 = pppppppuVar5;
                if ((undefined8 *******)(puVar19[0xc] - lVar22) < pppppppuVar6) {
                  FUN_108855060(puVar19 + 0xc,lVar22,pppppppuVar6,8,0x18);
                  lVar22 = puVar19[0xe];
                }
                _memcpy(puVar19[0xd] + lVar22 * 0x18,pppppppuVar5,(long)pppppppuVar6 * 0x18);
                puVar19[0xe] = (undefined *)(lVar22 + (long)pppppppuVar6);
                if (pppppppuVar4 != (undefined8 *******)0x0) {
                  _free(pppppppuVar5);
                }
              }
              lStack_b38 = puVar19[0xd];
              lStack_b40 = puVar19[0xc];
              lStack_b30 = puVar19[0xe];
              lVar22 = puVar19[9];
              lVar25 = puVar19[10];
              if (lVar25 != 0) {
                puVar28 = (undefined8 *)(lVar22 + 8);
                do {
                  if (puVar28[-1] != 0) {
                    _free(*puVar28);
                  }
                  puVar28 = puVar28 + 3;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
              }
              if (puVar19[8] != 0) {
                _free(lVar22);
              }
              plVar18[1] = lStack_b38;
              *plVar18 = lStack_b40;
              plVar18[2] = lStack_b30;
              lVar22 = *plVar18;
              *(undefined1 *)(puVar19 + 0xb) = 1;
              if (lVar22 != -0x8000000000000000) {
                FUN_100cc0c0c(puVar19 + 2);
                uVar20 = 1;
                goto LAB_1009181a8;
              }
            }
          }
          *plVar18 = -0x8000000000000000;
          uVar20 = 3;
LAB_1009181a8:
          *(undefined1 *)(puVar19 + 0x40) = uVar20;
          return;
        }
        FUN_107c05cc0(&UNK_10b226528);
LAB_100918298:
        FUN_107c05cc4(&UNK_10b226528);
        uVar21 = extraout_w8;
      }
      else {
        if (bVar3 != 3) goto LAB_100918298;
        bVar3 = *(byte *)(puVar19 + 0xb);
        uVar21 = (uint)bVar3;
        if (2 < bVar3) {
          if (bVar3 == 3) goto LAB_100917d20;
          goto LAB_100917e04;
        }
        if (bVar3 == 0) {
          puVar28 = (undefined8 *)puVar19[2];
          lVar22 = puVar19[3];
          lVar25 = puVar19[4];
          goto LAB_100917cc8;
        }
      }
      if (uVar21 == 1) {
        FUN_107c05cc0(&UNK_10b218ff0);
      }
      else {
        FUN_107c05cc4(&UNK_10b218ff0);
      }
LAB_1009182cc:
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009182d0);
      (*pcVar23)();
    }
    lVar22 = param_2[9];
    param_2[8] = lVar22;
    param_2[3] = param_2[1];
    param_2[2] = *param_2;
    uStack_5e7 = *(undefined1 *)((long)param_2 + 0x52);
    *(undefined1 *)(param_2 + 10) = uStack_5e7;
    uVar24 = *(undefined8 *)(*(long *)(lVar22 + 0x198) + 0x1ba0);
    param_2[4] = *(undefined8 *)(*(long *)(lVar22 + 0x198) + 0x1b98);
    param_2[5] = uVar24;
    uVar27 = param_2[1];
    uVar24 = *param_2;
    uStack_5de = (undefined6)uVar27;
    bStack_5d8 = (byte)((ulong)uVar27 >> 0x30);
    uStack_5d7 = (undefined1)((ulong)uVar27 >> 0x38);
    uStack_5e6 = (undefined6)uVar24;
    bStack_5e0 = (byte)((ulong)uVar24 >> 0x30);
    uStack_5df = (undefined1)((ulong)uVar24 >> 0x38);
    bStack_5e8 = 1;
    auVar30 = (**(code **)(*(long *)(lVar22 + 0x1a8) + 0x68))
                        (*(long *)(lVar22 + 0x1a0) +
                         (*(long *)(*(long *)(lVar22 + 0x1a8) + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,&bStack_5e8);
    *(undefined1 (*) [16])(param_2 + 6) = auVar30;
  }
  else {
    if (bVar3 != 3) goto LAB_100917948;
    auVar30 = *(undefined1 (*) [16])(param_2 + 6);
  }
  (**(code **)(auVar30._8_8_ + 0x18))(&bStack_5e8,auVar30._0_8_,param_3);
  bVar29 = bStack_5e0;
  uVar7 = uStack_5e6;
  uVar20 = uStack_5e7;
  bVar3 = bStack_5e8;
  lVar22 = CONCAT62(uStack_5e6,CONCAT11(uStack_5e7,bStack_5e8));
  if (lVar22 == 3) {
    *param_1 = 0x8000000000000002;
    uVar20 = 3;
    goto LAB_1009178f4;
  }
  uStack_838 = CONCAT61(uStack_5d6,uStack_5d7);
  uStack_840 = CONCAT61(uStack_5de,uStack_5df);
  bStack_839 = bStack_5d8;
  bStack_831 = bStack_5d0;
  uStack_830 = uStack_5cf;
  _memcpy(auStack_a90,auStack_5c0,0x250);
  uVar24 = param_2[6];
  puVar19 = (undefined8 *)param_2[7];
  pcVar23 = (code *)*puVar19;
  if (pcVar23 != (code *)0x0) {
    (*pcVar23)(uVar24);
  }
  if (puVar19[1] != 0) {
    _free(uVar24);
  }
  uVar12 = uStack_5d6;
  uVar10 = uStack_5d7;
  uVar9 = uStack_5de;
  uVar8 = uStack_5df;
  uStack_5df = (undefined1)uStack_840;
  uStack_5de = (undefined6)((uint7)uStack_840 >> 8);
  uStack_5d7 = (undefined1)uStack_838;
  uVar11 = uStack_5d7;
  uStack_5d6 = (undefined6)((uint7)uStack_838 >> 8);
  uVar13 = uStack_5d6;
  if (lVar22 == 2) {
    uStack_5d7 = uVar10;
    uStack_5d6 = uVar12;
    if (bVar29 == 0) {
      if (CONCAT17(bStack_831,uStack_838) == param_2[3] &&
          CONCAT17(bStack_839,uStack_840) == param_2[2]) {
        bVar29 = 0;
        uVar27 = 0x8000000000000000;
        uStack_5df = uVar8;
        uStack_5de = uVar9;
        goto LAB_1009177e8;
      }
    }
    else if (bVar29 == 1) {
      pbStack_810 = (byte *)(param_2 + 2);
      puStack_808 = &
                    __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      uStack_5df = uVar8;
      uStack_5de = uVar9;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&bStack_5e8,s_no_rollout_found_for_thread_id_108acb1f5,&pbStack_810);
      lVar22 = CONCAT62(uStack_5e6,CONCAT11(uStack_5e7,bStack_5e8));
      uVar24 = CONCAT62(uStack_5de,CONCAT11(uStack_5df,bStack_5e0));
      if (lStack_5c8 == CONCAT62(uStack_5d6,CONCAT11(uStack_5d7,bStack_5d8))) {
        uVar27 = CONCAT71(uStack_830,bStack_831);
        iVar15 = _memcmp(uVar27,uVar24,lStack_5c8);
        if (iVar15 == 0) {
          if (lVar22 != 0) {
            _free(uVar24);
          }
          if (CONCAT71(uStack_838,bStack_839) != 0) {
            _free(uVar27);
          }
          uVar27 = 0x8000000000000000;
          goto LAB_1009178d0;
        }
      }
      if (lVar22 != 0) {
        _free(uVar24);
      }
      uVar24 = 0;
      puStack_158 = (undefined *)CONCAT71(uStack_830,bStack_831);
      pbStack_160 = (byte *)CONCAT71(uStack_838,bStack_839);
      uVar27 = 0x8000000000000001;
      goto LAB_1009178d0;
    }
    bStack_5e8 = bVar29;
    bStack_5e0 = bStack_839;
    bStack_5d8 = bStack_831;
    uStack_5d7 = (undefined1)uStack_830;
    uStack_5d6 = (undefined6)((uint7)uStack_830 >> 8);
    bStack_5d0 = (byte)lStack_5c8;
    uStack_5cf = (undefined7)((ulong)lStack_5c8 >> 8);
    pbStack_148 = &bStack_5e8;
    puStack_140 = &
                  __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
    ;
    uStack_5e7 = uStack_5df;
    uStack_5e6 = uStack_5de;
    uStack_5df = uVar11;
    uStack_5de = uVar13;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pbStack_810,s_failed_to_read_thread__108acb217,&pbStack_148);
    lStack_5c8 = lStack_800;
    puStack_158 = puStack_808;
    pbStack_160 = pbStack_810;
    if (bStack_5e8 < 2) {
      if (bStack_5e8 != 0) {
LAB_1009178b8:
        if (CONCAT62(uStack_5de,CONCAT11(uStack_5df,bStack_5e0)) != 0) {
          _free(CONCAT62(uStack_5d6,CONCAT11(uStack_5d7,bStack_5d8)));
        }
      }
    }
    else if ((bStack_5e8 == 2) || (bStack_5e8 != 3)) goto LAB_1009178b8;
    uVar27 = 0x8000000000000001;
    uVar24 = 2;
  }
  else {
    bStack_5d8 = bStack_839;
    bStack_5d0 = bStack_831;
    uStack_5cf = uStack_830;
    bStack_5e8 = bVar3;
    uStack_5e7 = uVar20;
    uStack_5e6 = uVar7;
    bStack_5e0 = bVar29;
    _memcpy(auStack_5c0,auStack_a90,0x250);
    __ZN16codex_app_server18request_processors16thread_processor25thread_from_stored_thread17h9999c464848c4bd4E
              (&pbStack_810,&bStack_5e8,param_2[4],param_2[5],*(long *)(param_2[8] + 0x198) + 0x1bc0
              );
    _memcpy(&bStack_5e8,&pbStack_810,0x1f8);
    uStack_818 = uStack_5f8;
    uStack_820 = uStack_600;
    bVar3 = 0;
    if (lStack_618 != -0x8000000000000000) {
      bVar3 = *(byte *)(param_2 + 10);
    }
    if ((bVar3 & 1) != 0) {
      lStack_370 = lStack_618;
      lStack_368 = lStack_610;
      lStack_360 = lStack_608;
      uStack_350 = uStack_5f8;
      uStack_358 = uStack_600;
      uStack_a0 = 0;
      pbStack_148 = (byte *)0x2;
      uStack_88 = 1;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_98 = 8;
      uStack_80 = 0;
      if (lStack_608 != 0) {
        lVar17 = lStack_608 * 0x1e0;
        lVar25 = lStack_610;
        do {
          uVar16 = __ZN13codex_rollout6policy25is_persisted_rollout_item17h98bfcaadf1c2122dE
                             (lVar25,0);
          if ((uVar16 & 1) != 0) {
            __ZN25codex_app_server_protocol8protocol14thread_history20ThreadHistoryBuilder19handle_rollout_item17hb68b233a9c7bc0b3E
                      (&pbStack_148,lVar25);
          }
          lVar25 = lVar25 + 0x1e0;
          lVar17 = lVar17 + -0x1e0;
        } while (lVar17 != 0);
      }
      uStack_768 = uStack_a0;
      uStack_770 = uStack_a8;
      uStack_758 = uStack_90;
      uStack_760 = uStack_98;
      uStack_748 = uStack_80;
      uStack_750 = uStack_88;
      uStack_740 = uStack_78;
      uStack_7a8 = uStack_e0;
      uStack_7b0 = uStack_e8;
      uStack_798 = uStack_d0;
      uStack_7a0 = uStack_d8;
      uStack_788 = uStack_c0;
      uStack_790 = uStack_c8;
      uStack_778 = uStack_b0;
      uStack_780 = uStack_b8;
      uStack_7e8 = uStack_120;
      uStack_7f0 = uStack_128;
      uStack_7d8 = uStack_110;
      uStack_7e0 = uStack_118;
      uStack_7c8 = uStack_100;
      uStack_7d0 = uStack_108;
      uStack_7b8 = uStack_f0;
      uStack_7c0 = uStack_f8;
      puStack_808 = puStack_140;
      pbStack_810 = pbStack_148;
      uStack_7f8 = uStack_130;
      lStack_800 = lStack_138;
      __ZN25codex_app_server_protocol8protocol14thread_history20ThreadHistoryBuilder6finish17h967c0c52edf97bb5E
                (&lStack_348,&pbStack_810);
      lStack_548 = lStack_548 + 1;
      lVar25 = lStack_550;
      while (lStack_548 = lStack_548 + -1, lStack_548 != 0) {
        FUN_100e4623c(lVar25);
        lVar25 = lVar25 + 0xa0;
      }
      if (lStack_558 != 0) {
        _free(lStack_550);
      }
      lStack_550 = lStack_340;
      lStack_558 = lStack_348;
      lStack_548 = lStack_338;
      lVar25 = lStack_608 + 1;
      lVar17 = lStack_610;
      while (lVar25 = lVar25 + -1, lVar25 != 0) {
        FUN_100e068b8(lVar17);
        lVar17 = lVar17 + 0x1e0;
      }
      if (lStack_618 != 0) {
        _free(lStack_610);
      }
    }
    uVar27 = CONCAT62(uStack_5e6,CONCAT11(uStack_5e7,bStack_5e8));
    uVar24 = CONCAT62(uStack_5de,CONCAT11(uStack_5df,bStack_5e0));
    puStack_158 = (undefined *)CONCAT71(uStack_5cf,bStack_5d0);
    pbStack_160 = (byte *)CONCAT62(uStack_5d6,CONCAT11(uStack_5d7,bStack_5d8));
    _memcpy(auStack_330,auStack_5c0,0x1d0);
    if (((lStack_618 != -0x8000000000000000 ^ bVar3) & 1) != 0) {
      lVar25 = lStack_608 + 1;
      lVar17 = lStack_610;
      while (lVar25 = lVar25 + -1, lVar25 != 0) {
        FUN_100e068b8(lVar17);
        lVar17 = lVar17 + 0x1e0;
      }
      if (lStack_618 != 0) {
        _free(lStack_610);
      }
    }
    if (lVar22 == 2) {
LAB_1009177e8:
      if ((((bVar29 != 1) && (bVar29 != 0)) && ((bVar29 == 2 || (bVar29 != 3)))) &&
         (CONCAT71(uStack_838,bStack_839) != 0)) {
        _free(CONCAT71(uStack_830,bStack_831));
      }
    }
  }
LAB_1009178d0:
  *param_1 = uVar27;
  param_1[1] = uVar24;
  param_1[3] = puStack_158;
  param_1[2] = pbStack_160;
  param_1[4] = lStack_5c8;
  _memcpy(param_1 + 5,auStack_330,0x1d0);
  uVar20 = 1;
LAB_1009178f4:
  *(undefined1 *)((long)param_2 + 0x51) = uVar20;
  return;
}

