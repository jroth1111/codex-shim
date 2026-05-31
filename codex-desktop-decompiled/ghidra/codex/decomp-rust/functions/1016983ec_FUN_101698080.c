
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101698080(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long ******pppppplVar2;
  undefined1 auVar3 [16];
  long *******ppppppplVar4;
  code *pcVar5;
  ulong uVar6;
  long *******ppppppplVar7;
  undefined8 *puVar8;
  long *******ppppppplVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar12;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long ******pppppplVar18;
  byte bVar19;
  long extraout_x9;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong extraout_x17;
  ulong uVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  long *******ppppppplVar30;
  long *******unaff_x25;
  long *******ppppppplVar31;
  long *******ppppppplVar32;
  long *******ppppppplVar33;
  long lVar34;
  byte bVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  long *******ppppppplStack_728;
  long *******ppppppplStack_720;
  long *******ppppppplStack_718;
  undefined8 uStack_710;
  long *******ppppppplStack_708;
  long *******ppppppplStack_700;
  long *******ppppppplStack_6f8;
  long *******ppppppplStack_6f0;
  long *******ppppppplStack_6e8;
  long *******ppppppplStack_6e0;
  long *******ppppppplStack_6d8;
  long *******ppppppplStack_6d0;
  long *******ppppppplStack_6c8;
  long *******ppppppplStack_6c0;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long *******ppppppplStack_670;
  long *******ppppppplStack_668;
  long *******ppppppplStack_660;
  long *******ppppppplStack_650;
  long *******ppppppplStack_648;
  long *******ppppppplStack_640;
  long *******ppppppplStack_638;
  long *******ppppppplStack_630;
  long *******ppppppplStack_628;
  long *******ppppppplStack_620;
  long *******ppppppplStack_618;
  long *******ppppppplStack_610;
  long *******ppppppplStack_608;
  long *******ppppppplStack_600;
  long *******ppppppplStack_5f8;
  long *******ppppppplStack_5f0;
  long *******ppppppplStack_5e8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long *******ppppppplStack_530;
  long *******ppppppplStack_528;
  long *******ppppppplStack_520;
  long *******ppppppplStack_518;
  long *******ppppppplStack_510;
  long *******ppppppplStack_508;
  long *******ppppppplStack_500;
  long *******ppppppplStack_4f8;
  long *******ppppppplStack_4f0;
  long *******ppppppplStack_4e8;
  undefined8 uStack_4e0;
  long *******ppppppplStack_4d0;
  long *******ppppppplStack_4c8;
  long *******ppppppplStack_4c0;
  long *******ppppppplStack_4b8;
  long *******ppppppplStack_4b0;
  long *******ppppppplStack_4a8;
  long *******ppppppplStack_4a0;
  long *******ppppppplStack_498;
  long *******ppppppplStack_490;
  long *******ppppppplStack_480;
  long *******ppppppplStack_478;
  long *******ppppppplStack_470;
  long *******ppppppplStack_468;
  long *******ppppppplStack_460;
  long *******ppppppplStack_458;
  long *******ppppppplStack_450;
  long *******ppppppplStack_448;
  long *******ppppppplStack_440;
  long *******ppppppplStack_438;
  undefined1 uStack_430;
  undefined7 uStack_42f;
  long *******ppppppplStack_428;
  long *******ppppppplStack_420;
  long *******ppppppplStack_418;
  long *******ppppppplStack_410;
  long *******ppppppplStack_408;
  long *******ppppppplStack_400;
  undefined8 uStack_3f8;
  long *******ppppppplStack_3f0;
  long *******ppppppplStack_3e8;
  long *******ppppppplStack_3e0;
  long *******ppppppplStack_3d8;
  long *******ppppppplStack_3d0;
  long *******ppppppplStack_3c8;
  long *******ppppppplStack_3c0;
  long *******ppppppplStack_3b8;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  long *******ppppppplStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long *******ppppppplStack_350;
  long *******ppppppplStack_348;
  long lStack_40;
  long lStack_38;
  
  bVar19 = *(byte *)(param_1 + 0x15);
  if (bVar19 < 2) {
    if (bVar19 != 0) {
      func_0x000108a07af4(&UNK_10b251b00);
      *(undefined1 *)(param_1 + 0x15) = 2;
      ppppppplVar7 = (long *******)__Unwind_Resume();
      if (param_1[0xc] != 0) {
        (**(code **)(param_1[0xc] + 0x18))(param_1[0xd]);
      }
      *(undefined1 *)(param_1 + 0x15) = 2;
      __Unwind_Resume(ppppppplVar7);
      auVar37 = func_0x000108a07bc4();
      puVar12 = auVar37._8_8_;
      puVar8 = auVar37._0_8_;
      ppppppplVar9 = (long *******)&ppppppplStack_630;
      bVar19 = *(byte *)((long)puVar12 + 0x99);
      if (bVar19 < 3) {
        if (bVar19 != 0) {
          if (bVar19 == 1) {
            func_0x000108a07af4(&UNK_10b251b18);
          }
          func_0x000108a07b10();
LAB_1016994f8:
          func_0x000108a07af4(&UNK_10b251758);
          goto LAB_1016995cc;
        }
        *(undefined1 *)(puVar12 + 0x13) = 0;
        ppppppplVar31 = (long *******)puVar12[0x12];
        puVar12[6] = puVar12[0x11];
        puVar12[3] = puVar12[1];
        puVar12[2] = *puVar12;
        ppppppplStack_628 = (long *******)puVar12[1];
        ppppppplStack_630 = (long *******)*puVar12;
        uVar36 = __ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_12thread_label17he4090c5fc193c67dE
                           (&ppppppplStack_480,puVar12[0x11],&ppppppplStack_630);
        ppppppplVar4 = ppppppplStack_470;
        ppppppplStack_728 = ppppppplStack_478;
        ppppppplStack_720 = ppppppplStack_480;
        unaff_x25 = (long *******)&ppppppplStack_480;
        ppppppplVar29 = (long *******)0x8000000000000002;
        *(undefined1 *)(puVar12 + 0x13) = 1;
        auVar37._8_8_ = ppppppplStack_470;
        auVar37._0_8_ = uVar36;
        auVar3._8_8_ = ppppppplStack_470;
        auVar3._0_8_ = uVar36;
        uVar26 = (long)*ppppppplVar31 + 0x8000000000000001U & (long)*ppppppplVar31 >> 0x3f;
        ppppppplVar28 = (long *******)0x8000000000000006;
        ppppppplVar33 = ppppppplStack_728;
        ppppppplVar30 = ppppppplStack_480;
        if ((long)uVar26 < 3) {
          if (uVar26 != 0) {
            auVar37 = auVar3;
            if (uVar26 == 1) {
              puVar12[5] = puVar12[3];
              puVar12[4] = puVar12[2];
              *(undefined1 *)(puVar12 + 0x13) = 0;
              puVar12[7] = ppppppplVar31 + 1;
              puVar12[8] = ppppppplStack_480;
              puVar12[9] = ppppppplStack_478;
              puVar12[10] = ppppppplStack_470;
              pppppplVar18 = ppppppplVar31[8];
              pppppplVar2 = ppppppplVar31[9];
              if (pppppplVar2 == (long ******)0x0) {
                lVar16 = 1;
              }
              else {
                lVar16 = _malloc(pppppplVar2);
                if (lVar16 == 0) {
                  func_0x0001087c9084(1,pppppplVar2);
                  goto LAB_1016995cc;
                }
              }
              _memcpy(lVar16,pppppplVar18,pppppplVar2);
              puVar12[0xb] = pppppplVar2;
              puVar12[0xc] = lVar16;
              puVar12[0xd] = pppppplVar2;
              lVar16 = puVar12[7];
              if (*(long *)(lVar16 + 0x48) == -0x8000000000000000) {
                puVar12[0xe] = 0x8000000000000000;
              }
              else {
                uVar36 = *(undefined8 *)(lVar16 + 0x50);
                lVar16 = *(long *)(lVar16 + 0x58);
                if (lVar16 == 0) {
                  lVar17 = 1;
                }
                else {
                  lVar17 = _malloc(lVar16);
                  if (lVar17 == 0) {
                    func_0x0001087c9084(1,lVar16);
                    goto LAB_1016995cc;
                  }
                }
                _memcpy(lVar17,uVar36,lVar16);
                puVar12[0xe] = lVar16;
                puVar12[0xf] = lVar17;
                puVar12[0x10] = lVar16;
              }
              lVar16 = puVar12[6];
              puVar12[0x14] = lVar16;
              puVar12[0x16] = puVar12[3];
              puVar12[0x15] = puVar12[2];
              *(undefined1 *)(puVar12 + 0x28) = 0;
              puVar12[0x18] = puVar12[0x16];
              puVar12[0x17] = puVar12[0x15];
              lVar17 = *(long *)(lVar16 + 0x8c20);
              goto joined_r0x000101698ae4;
            }
            goto LAB_101698e9c;
          }
          if (ppppppplVar31[0xf] == (long ******)0x8000000000000000) {
            ppppppplStack_6d0 = (long *******)0x8000000000000000;
            pppppplVar18 = ppppppplVar31[0x25];
            if (pppppplVar18 == (long ******)0x8000000000000002) goto LAB_1016985bc;
LAB_101698730:
            uVar14 = *(undefined1 *)(ppppppplVar31 + 0x2f);
            ppppppplStack_480 = (long *******)0x8000000000000001;
            if (pppppplVar18 != (long ******)0x8000000000000001) {
              FUN_100711560(&ppppppplStack_630,ppppppplVar31 + 0x25);
              ppppppplStack_4a8 = ppppppplStack_600;
              ppppppplStack_4b0 = ppppppplStack_608;
              ppppppplStack_498 = ppppppplStack_5f0;
              ppppppplStack_4a0 = ppppppplStack_5f8;
              ppppppplStack_490 = ppppppplStack_5e8;
              ppppppplStack_4c8 = ppppppplStack_620;
              ppppppplStack_4d0 = ppppppplStack_628;
              ppppppplStack_4b8 = ppppppplStack_610;
              ppppppplStack_4c0 = ppppppplStack_618;
              ppppppplStack_480 = ppppppplStack_630;
            }
            ppppppplStack_470 = ppppppplStack_4c8;
            ppppppplStack_478 = ppppppplStack_4d0;
            ppppppplStack_460 = ppppppplStack_4b8;
            ppppppplStack_468 = ppppppplStack_4c0;
            ppppppplStack_450 = ppppppplStack_4a8;
            ppppppplStack_458 = ppppppplStack_4b0;
            ppppppplStack_440 = ppppppplStack_498;
            ppppppplStack_448 = ppppppplStack_4a0;
            ppppppplStack_438 = ppppppplStack_490;
            uStack_430 = uVar14;
            if (ppppppplVar31[0x1c] != (long ******)0x8000000000000000) goto LAB_1016987a8;
LAB_1016985d8:
            lStack_6b0 = -0x8000000000000000;
          }
          else {
            pppppplVar18 = ppppppplVar31[0x10];
            ppppppplVar7 = (long *******)ppppppplVar31[0x11];
            if (ppppppplVar7 == (long *******)0x0) {
              ppppppplVar9 = (long *******)0x1;
            }
            else {
              ppppppplVar9 = (long *******)_malloc(ppppppplVar7);
              if (ppppppplVar9 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplVar7);
                goto LAB_1016995cc;
              }
            }
            _memcpy(ppppppplVar9,pppppplVar18,ppppppplVar7);
            uStack_6b8 = *(undefined1 *)(ppppppplVar31 + 0x12);
            pppppplVar18 = ppppppplVar31[0x25];
            ppppppplStack_6d0 = ppppppplVar7;
            ppppppplStack_6c8 = ppppppplVar9;
            ppppppplStack_6c0 = ppppppplVar7;
            if (pppppplVar18 != (long ******)0x8000000000000002) goto LAB_101698730;
LAB_1016985bc:
            ppppppplStack_480 = (long *******)0x8000000000000002;
            if (ppppppplVar31[0x1c] == (long ******)0x8000000000000000) goto LAB_1016985d8;
LAB_1016987a8:
            func_0x000101146714(&lStack_6b0,ppppppplVar31[0x1d],ppppppplVar31[0x1e]);
          }
          if (ppppppplVar31[0x1f] == (long ******)0x8000000000000000) {
            lStack_698 = -0x8000000000000000;
          }
          else {
            func_0x000101149d58(&lStack_698,ppppppplVar31[0x20],ppppppplVar31[0x21]);
          }
          uStack_678 = puVar12[3];
          uStack_680 = puVar12[2];
          *(undefined1 *)(puVar12 + 0x13) = 0;
          if (ppppppplVar31[9] == (long ******)0x8000000000000000) {
LAB_101698828:
            pppppplVar18 = ppppppplVar31[7];
            ppppppplVar28 = (long *******)ppppppplVar31[8];
            if (ppppppplVar28 == (long *******)0x0) {
              ppppppplStack_6d8 = (long *******)0x1;
            }
            else {
              ppppppplStack_6d8 = (long *******)_malloc(ppppppplVar28);
              if (ppppppplStack_6d8 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplVar28);
                goto LAB_1016995cc;
              }
            }
            _memcpy(ppppppplStack_6d8,pppppplVar18,ppppppplVar28);
LAB_101698858:
            if (ppppppplVar31[0x13] == (long ******)0x8000000000000000) goto LAB_1016991a0;
LAB_10169886c:
            __ZN9codex_tui12exec_command20split_command_string17h31dd3c98d4f40651E
                      (&ppppppplStack_630,ppppppplVar31[0x14],ppppppplVar31[0x15]);
            if (ppppppplStack_630 == (long *******)0x8000000000000000) goto LAB_1016991a0;
            ppppppplStack_668 = ppppppplStack_628;
            ppppppplStack_670 = ppppppplStack_630;
            ppppppplStack_660 = ppppppplStack_620;
          }
          else {
            ppppppplVar28 = (long *******)ppppppplVar31[0xb];
            if (ppppppplVar28 != (long *******)0x0) {
              pppppplVar18 = ppppppplVar31[10];
              ppppppplStack_6d8 = (long *******)_malloc(ppppppplVar28);
              if (ppppppplStack_6d8 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplVar28);
                goto LAB_1016995cc;
              }
              _memcpy(ppppppplStack_6d8,pppppplVar18,ppppppplVar28);
              if (ppppppplVar28 == (long *******)0x8000000000000000) goto LAB_101698828;
              goto LAB_101698858;
            }
            ppppppplStack_6d8 = (long *******)0x1;
            if (ppppppplVar31[0x13] != (long ******)0x8000000000000000) goto LAB_10169886c;
LAB_1016991a0:
            ppppppplStack_670 = (long *******)0x0;
            ppppppplStack_668 = (long *******)0x8;
            ppppppplStack_660 = (long *******)0x0;
          }
          if (ppppppplVar31[0xc] == (long ******)0x8000000000000000) {
            ppppppplStack_708 = (long *******)0x8000000000000000;
            if (ppppppplVar31[0x22] == (long ******)0x8000000000000000) goto LAB_10169923c;
LAB_10169921c:
            uVar36 = func_0x000101146820(&ppppppplStack_630,ppppppplVar31[0x23],ppppppplVar31[0x24])
            ;
            if (ppppppplStack_630 == (long *******)0x8000000000000000) goto LAB_10169923c;
            ppppppplStack_4c8 = ppppppplStack_628;
            ppppppplStack_4d0 = ppppppplStack_630;
            ppppppplStack_4c0 = ppppppplStack_620;
            lVar17 = lStack_698;
          }
          else {
            pppppplVar18 = ppppppplVar31[0xd];
            ppppppplStack_708 = (long *******)ppppppplVar31[0xe];
            if (ppppppplStack_708 == (long *******)0x0) {
              ppppppplStack_718 = (long *******)0x1;
            }
            else {
              ppppppplStack_718 = (long *******)_malloc(ppppppplStack_708);
              if (ppppppplStack_718 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplStack_708);
LAB_1016995cc:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1016995d0);
                (*pcVar5)();
              }
            }
            _memcpy(ppppppplStack_718,pppppplVar18);
            ppppppplStack_6f8 = ppppppplStack_708;
            if (ppppppplVar31[0x22] != (long ******)0x8000000000000000) goto LAB_10169921c;
LAB_10169923c:
            lVar17 = lStack_698;
            lVar16 = 0;
            if (lStack_698 != -0x8000000000000000) {
              lVar16 = lStack_690;
            }
            plVar20 = (long *)0x0;
            if (lStack_6b0 != -0x8000000000000000) {
              plVar20 = &lStack_6b0;
            }
            ppppppplVar7 = (long *******)0x0;
            if (ppppppplStack_6d0 != (long *******)0x8000000000000000) {
              ppppppplVar7 = (long *******)&ppppppplStack_6d0;
            }
            ppppppplVar9 = (long *******)0x0;
            if (ppppppplStack_480 != (long *******)0x8000000000000002) {
              ppppppplVar9 = (long *******)&ppppppplStack_480;
            }
            uVar36 = __ZN9codex_tui3app31default_exec_approval_decisions17hf61bc4dcc48c5c95E
                               (&ppppppplStack_4d0,ppppppplVar7,plVar20,lVar16,lStack_688,
                                ppppppplVar9);
          }
          ppppppplVar30 = ppppppplStack_4d0;
          ppppppplVar33 = ppppppplStack_660;
          ppppppplVar29 = ppppppplStack_668;
          ppppppplVar31 = ppppppplStack_6c0;
          ppppppplStack_648 = ppppppplStack_6c8;
          ppppppplStack_650 = ppppppplStack_6d0;
          uVar21 = CONCAT71(uStack_6b7,uStack_6b8);
          ppppppplStack_508 = ppppppplStack_458;
          ppppppplStack_510 = ppppppplStack_460;
          ppppppplStack_4f8 = ppppppplStack_448;
          ppppppplStack_500 = ppppppplStack_450;
          ppppppplStack_4e8 = ppppppplStack_438;
          ppppppplStack_4f0 = ppppppplStack_440;
          uStack_4e0 = CONCAT71(uStack_42f,uStack_430);
          ppppppplStack_528 = ppppppplStack_478;
          ppppppplStack_530 = ppppppplStack_480;
          ppppppplStack_518 = ppppppplStack_468;
          ppppppplStack_520 = ppppppplStack_470;
          uStack_538 = uStack_678;
          uStack_540 = uStack_680;
          ppppppplStack_6f0 = ppppppplStack_670;
          ppppppplStack_6e8 = ppppppplStack_4c8;
          ppppppplStack_700 = ppppppplStack_4c0;
          if (lVar17 != -0x8000000000000000) {
            if (lStack_688 != 0) {
              puVar10 = (undefined8 *)(lStack_690 + 8);
              lVar16 = lStack_688;
              do {
                if (puVar10[-1] != 0) {
                  uVar36 = _free(*puVar10);
                }
                puVar10 = puVar10 + 4;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            if (lVar17 != 0) {
              uVar36 = _free(lStack_690);
            }
          }
          lVar16 = lStack_6b0;
          auVar37._8_8_ = uVar21;
          auVar37._0_8_ = uVar36;
          ppppppplVar7 = ppppppplVar4;
          unaff_x25 = ppppppplStack_728;
          ppppppplVar9 = ppppppplStack_720;
          ppppppplStack_6e0 = ppppppplVar28;
          if (lStack_6b0 != -0x8000000000000000) {
            if (lStack_6a0 != 0) {
              puVar10 = (undefined8 *)(lStack_6a8 + 8);
              lVar17 = lStack_6a0;
              do {
                if (puVar10[-1] != 0) {
                  uVar36 = _free(*puVar10);
                }
                puVar10 = puVar10 + 3;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            auVar37._0_8_ = uVar36;
            if (lVar16 != 0) {
              uVar36 = _free(lStack_6a8);
              auVar37._0_8_ = uVar36;
            }
          }
        }
        else if (uVar26 == 3) {
          ppppppplVar28 = (long *******)0x8000000000000002;
          ppppppplStack_4c8 = (long *******)puVar12[3];
          ppppppplStack_4d0 = (long *******)puVar12[2];
          pppppplVar18 = ppppppplVar31[5];
          pppppplVar2 = ppppppplVar31[6];
          ppppppplVar7 = ppppppplVar31 + 0x1f;
          if (*ppppppplVar7 == (long ******)0x8000000000000000) {
            ppppppplVar33 = ppppppplStack_478;
            ppppppplStack_630 = (long *******)*ppppppplVar7;
            ppppppplStack_628 = (long *******)ppppppplVar31[0x20];
            ppppppplStack_620 = (long *******)ppppppplVar31[0x21];
          }
          else {
            ppppppplVar33 = (long *******)ppppppplVar31[0x20];
            ppppppplVar30 = (long *******)ppppppplVar31[0x21];
            if (ppppppplVar30 == (long *******)0x0) {
              ppppppplVar9 = (long *******)0x1;
            }
            else {
              ppppppplVar9 = (long *******)_malloc(ppppppplVar30);
              if (ppppppplVar9 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplVar30);
                goto LAB_1016995cc;
              }
            }
            _memcpy(ppppppplVar9,ppppppplVar33,ppppppplVar30);
            ppppppplStack_630 = ppppppplVar30;
            ppppppplStack_628 = ppppppplVar9;
            ppppppplStack_620 = ppppppplVar30;
          }
          uVar36 = __ZN9codex_tui11bottom_pane13app_link_view17AppLinkViewParams27from_url_app_server_request17h32dad5d14ad239dfE
                             (&ppppppplStack_480,&ppppppplStack_4d0,pppppplVar18,pppppplVar2,
                              &ppppppplStack_630,ppppppplVar31 + 10);
          if (ppppppplStack_480 == (long *******)0x8000000000000000) {
            ppppppplStack_6c8 = (long *******)puVar12[3];
            ppppppplStack_6d0 = (long *******)puVar12[2];
            if (*ppppppplVar7 == (long ******)0x8000000000000000) {
              ppppppplStack_4c8 = (long *******)ppppppplVar31[0x20];
              ppppppplStack_4d0 = (long *******)*ppppppplVar7;
              ppppppplStack_4c0 = (long *******)ppppppplVar31[0x21];
            }
            else {
              func_0x000100025ae8(&ppppppplStack_4d0,ppppppplVar7);
            }
            FUN_1006c45f8(&ppppppplStack_630,ppppppplVar31 + 1);
            uVar36 = __ZN9codex_tui11bottom_pane22mcp_server_elicitation31McpServerElicitationFormRequest23from_app_server_request17h2cb90b9805e23951E
                               (&ppppppplStack_480,&ppppppplStack_6d0,&ppppppplStack_4d0,
                                &ppppppplStack_630);
            if (ppppppplStack_480 == (long *******)0x8000000000000000) {
              if (ppppppplVar31[10] == (long ******)0x8000000000000000) {
                lVar16 = puVar12[6];
                ppppppplStack_6c8 = (long *******)puVar12[3];
                ppppppplStack_6d0 = (long *******)puVar12[2];
                func_0x000100025ae8(&ppppppplStack_4d0,ppppppplVar31 + 4);
                if (*ppppppplVar7 == (long ******)0x8000000000000000) {
                  ppppppplStack_628 = (long *******)ppppppplVar31[0x20];
                  ppppppplStack_630 = (long *******)*ppppppplVar7;
                  ppppppplStack_620 = (long *******)ppppppplVar31[0x21];
                }
                else {
                  func_0x000100025ae8(&ppppppplStack_630,ppppppplVar7);
                }
                ppppppplStack_348 = ppppppplStack_6c8;
                ppppppplStack_350 = ppppppplStack_6d0;
                ppppppplStack_450 = ppppppplStack_628;
                ppppppplStack_458 = ppppppplStack_630;
                ppppppplStack_460 = ppppppplStack_4c0;
                ppppppplStack_448 = ppppppplStack_620;
                ppppppplStack_440 = (long *******)0x8000000000000005;
                uStack_3f8 = 0x8000000000000005;
                uStack_3b0 = 1;
                ppppppplStack_478 = (long *******)0x800000000000000a;
                ppppppplStack_480 = (long *******)0x8000000000000003;
                ppppppplStack_468 = ppppppplStack_4c8;
                ppppppplStack_470 = ppppppplStack_4d0;
                uVar36 = __ZN9codex_tui16app_event_sender14AppEventSender4send17h8493fff0e745a28cE
                                   (lVar16 + 0x8bd8,&ppppppplStack_480);
                auVar37._8_8_ = ppppppplVar4;
                auVar37._0_8_ = uVar36;
                ppppppplVar28 = (long *******)0x8000000000000006;
                ppppppplVar29 = (long *******)0x8000000000000002;
                unaff_x25 = (long *******)&ppppppplStack_480;
              }
              else {
                ppppppplStack_718 = (long *******)puVar12[2];
                ppppppplStack_6f8 = (long *******)puVar12[3];
                *(undefined1 *)(puVar12 + 0x13) = 0;
                func_0x000100025ae8(&ppppppplStack_4d0,ppppppplVar31 + 4);
                if (*ppppppplVar7 == (long ******)0x8000000000000000) {
                  ppppppplStack_628 = (long *******)ppppppplVar31[0x20];
                  ppppppplStack_630 = (long *******)*ppppppplVar7;
                  ppppppplStack_620 = (long *******)ppppppplVar31[0x21];
                }
                else {
                  func_0x000100025ae8(&ppppppplStack_630,ppppppplVar7);
                }
                uVar36 = func_0x000100025ae8(&ppppppplStack_480,ppppppplVar31 + 10);
                auVar37._8_8_ = ppppppplVar4;
                auVar37._0_8_ = uVar36;
                ppppppplStack_6e0 = ppppppplStack_4c8;
                ppppppplStack_6d8 = ppppppplStack_4d0;
                ppppppplStack_6f0 = ppppppplStack_4c0;
                ppppppplStack_6e8 = ppppppplStack_720;
                ppppppplStack_708 = ppppppplStack_620;
                ppppppplStack_700 = ppppppplStack_728;
                ppppppplVar7 = ppppppplStack_628;
                ppppppplVar29 = ppppppplStack_480;
                ppppppplVar30 = ppppppplStack_470;
                unaff_x25 = ppppppplStack_630;
                ppppppplVar9 = ppppppplVar4;
                ppppppplVar33 = ppppppplStack_478;
              }
            }
            else {
              ppppppplStack_6e0 = ppppppplStack_478;
              ppppppplStack_6d8 = ppppppplStack_480;
              ppppppplStack_6f0 = ppppppplStack_470;
              ppppppplStack_6e8 = ppppppplStack_450;
              ppppppplStack_708 = ppppppplStack_428;
              ppppppplStack_700 = ppppppplStack_448;
              ppppppplStack_6f8 = ppppppplStack_418;
              ppppppplStack_648 = ppppppplStack_408;
              ppppppplStack_650 = ppppppplStack_410;
              ppppppplStack_718 = ppppppplStack_420;
              auVar37._8_8_ = uStack_3f8;
              auVar37._0_8_ = uVar36;
              uStack_4e0 = uStack_3a0;
              ppppppplStack_4f0 = (long *******)CONCAT71(uStack_3af,uStack_3b0);
              ppppppplStack_4f8 = ppppppplStack_3b8;
              ppppppplStack_500 = ppppppplStack_3c0;
              ppppppplStack_4e8 = ppppppplStack_3a8;
              ppppppplStack_518 = ppppppplStack_3d8;
              ppppppplStack_520 = ppppppplStack_3e0;
              ppppppplStack_508 = ppppppplStack_3c8;
              ppppppplStack_510 = ppppppplStack_3d0;
              ppppppplVar28 = (long *******)0x8000000000000005;
              uStack_538 = uStack_390;
              uStack_540 = uStack_398;
              ppppppplStack_528 = ppppppplStack_3e8;
              ppppppplStack_530 = ppppppplStack_3f0;
              ppppppplVar7 = (long *******)CONCAT71(uStack_42f,uStack_430);
              ppppppplVar29 = ppppppplStack_468;
              ppppppplVar30 = ppppppplStack_458;
              unaff_x25 = ppppppplStack_438;
              ppppppplVar31 = ppppppplStack_400;
              ppppppplVar9 = ppppppplStack_440;
              ppppppplVar33 = ppppppplStack_460;
            }
          }
          else {
            ppppppplStack_6e0 = ppppppplStack_478;
            ppppppplStack_6d8 = ppppppplStack_480;
            ppppppplStack_6f0 = ppppppplStack_470;
            ppppppplStack_6e8 = ppppppplStack_450;
            ppppppplStack_708 = ppppppplStack_428;
            ppppppplStack_700 = ppppppplStack_448;
            ppppppplStack_6f8 = ppppppplStack_418;
            ppppppplStack_648 = ppppppplStack_408;
            ppppppplStack_650 = ppppppplStack_410;
            ppppppplStack_718 = ppppppplStack_420;
            auVar37._8_8_ = uStack_3f8;
            auVar37._0_8_ = uVar36;
            ppppppplStack_4f0 = (long *******)CONCAT71(uStack_3af,uStack_3b0);
            ppppppplStack_508 = ppppppplStack_3c8;
            ppppppplStack_510 = ppppppplStack_3d0;
            ppppppplStack_4f8 = ppppppplStack_3b8;
            ppppppplStack_500 = ppppppplStack_3c0;
            ppppppplVar28 = (long *******)0x8000000000000003;
            ppppppplStack_528 = ppppppplStack_3e8;
            ppppppplStack_530 = ppppppplStack_3f0;
            ppppppplStack_518 = ppppppplStack_3d8;
            ppppppplStack_520 = ppppppplStack_3e0;
            ppppppplVar7 = (long *******)CONCAT71(uStack_42f,uStack_430);
            ppppppplVar29 = ppppppplStack_468;
            ppppppplVar30 = ppppppplStack_458;
            unaff_x25 = ppppppplStack_438;
            ppppppplVar31 = ppppppplStack_400;
            ppppppplVar9 = ppppppplStack_440;
            ppppppplVar33 = ppppppplStack_460;
          }
        }
        else if (uVar26 == 4) {
          ppppppplStack_6c8 = (long *******)puVar12[3];
          ppppppplStack_6d0 = (long *******)puVar12[2];
          *(undefined1 *)(puVar12 + 0x13) = 0;
          pppppplVar18 = ppppppplVar31[8];
          ppppppplStack_6f0 = (long *******)ppppppplVar31[9];
          if (ppppppplStack_6f0 == (long *******)0x0) {
            ppppppplStack_6e0 = (long *******)0x1;
          }
          else {
            ppppppplStack_6e0 = (long *******)_malloc(ppppppplStack_6f0);
            if (ppppppplStack_6e0 == (long *******)0x0) {
              func_0x0001087c9084(1,ppppppplStack_6f0);
              goto LAB_1016995cc;
            }
          }
          uVar36 = _memcpy(ppppppplStack_6e0,pppppplVar18,ppppppplStack_6f0);
          ppppppplStack_6e8 = (long *******)0x8000000000000000;
          if (ppppppplVar31[0xd] != (long ******)0x8000000000000000) {
            pppppplVar18 = ppppppplVar31[0xe];
            ppppppplStack_6e8 = (long *******)ppppppplVar31[0xf];
            if (ppppppplStack_6e8 == (long *******)0x0) {
              ppppppplStack_700 = (long *******)0x1;
            }
            else {
              ppppppplStack_700 = (long *******)_malloc(ppppppplStack_6e8);
              if (ppppppplStack_700 == (long *******)0x0) {
                func_0x0001087c9084(1,ppppppplStack_6e8);
                goto LAB_1016995cc;
              }
            }
            uVar36 = _memcpy(ppppppplStack_700,pppppplVar18,ppppppplStack_6e8);
            ppppppplVar9 = ppppppplStack_6e8;
          }
          ppppppplVar32 = ppppppplVar31 + 0x10;
          ppppppplStack_6f8 = (long *******)(ulong)*(byte *)(ppppppplVar31 + 0x1a);
          ppppppplVar7 = (long *******)*ppppppplVar32;
          if ((long *******)*ppppppplVar32 == (long *******)0x8000000000000001) {
LAB_10169910c:
            unaff_x25 = (long *******)0x8000000000000000;
          }
          else {
            uVar36 = FUN_100711560(&ppppppplStack_480,ppppppplVar32);
            ppppppplStack_608 = ppppppplStack_450;
            ppppppplStack_610 = ppppppplStack_458;
            ppppppplStack_5f8 = ppppppplStack_440;
            ppppppplStack_600 = ppppppplStack_448;
            ppppppplStack_5f0 = ppppppplStack_438;
            ppppppplStack_628 = ppppppplStack_470;
            ppppppplStack_630 = ppppppplStack_478;
            ppppppplStack_618 = ppppppplStack_460;
            ppppppplStack_620 = ppppppplStack_468;
            ppppppplVar7 = ppppppplStack_480;
            if (ppppppplStack_480 == (long *******)0x8000000000000001) goto LAB_10169910c;
            uVar36 = __ZN25codex_app_server_protocol8protocol2v211permissions188__LT_impl_u20_core__convert__From_LT_codex_app_server_protocol__protocol__v2__permissions__AdditionalFileSystemPermissions_GT__u20_for_u20_codex_protocol__models__FileSystemPermissions_GT_4from17h00f31a367072adddE
                               (&ppppppplStack_4d0,&ppppppplStack_480);
            ppppppplStack_708 = ppppppplStack_4c0;
            ppppppplStack_718 = ppppppplStack_4b8;
            ppppppplVar7 = ppppppplStack_4c8;
            unaff_x25 = ppppppplStack_4d0;
          }
          auVar37._8_8_ = ppppppplVar4;
          auVar37._0_8_ = uVar36;
          ppppppplVar28 = (long *******)0x8000000000000000;
          ppppppplStack_648 = ppppppplStack_6c8;
          ppppppplStack_650 = ppppppplStack_6d0;
          ppppppplVar29 = ppppppplStack_720;
          ppppppplVar30 = ppppppplVar4;
          ppppppplVar31 = ppppppplVar32;
          ppppppplStack_6d8 = ppppppplStack_6f0;
        }
      }
      else {
        if (bVar19 == 3) {
          bVar19 = *(byte *)(puVar12 + 0x28);
          if (1 < bVar19) {
            if (bVar19 != 3) {
              func_0x000108a07b10(&UNK_10b251758);
              goto LAB_1016995cc;
            }
LAB_101698bc4:
            auVar37 = FUN_100fd3e50(puVar12 + 0x19,param_3);
            uVar36 = auVar37._8_8_;
            pcVar11 = auVar37._0_8_;
            if (pcVar11 == (char *)0x0) {
              *(undefined1 *)(puVar12 + 0x28) = 3;
              uVar36 = 0;
            }
            else {
              if (((*(char *)(puVar12 + 0x27) == '\x03') && (*(char *)(puVar12 + 0x26) == '\x03'))
                 && (*(char *)(puVar12 + 0x1d) == '\x04')) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (puVar12 + 0x1e);
                uVar36 = extraout_x1_02;
                if (puVar12[0x1f] != 0) {
                  (**(code **)(puVar12[0x1f] + 0x18))(puVar12[0x20]);
                  uVar36 = extraout_x1_03;
                }
              }
              if (*(long *)(pcVar11 + 0x28) == 2) {
                lVar16 = -0x8000000000000000;
              }
              else {
                uVar36 = *(undefined8 *)(pcVar11 + 0x78);
                lVar16 = *(long *)(pcVar11 + 0x80);
                if (lVar16 == 0) {
                  unaff_x25 = (long *******)0x1;
                }
                else {
                  unaff_x25 = (long *******)_malloc(lVar16);
                  if (unaff_x25 == (long *******)0x0) {
                    func_0x0001087c9084(1,lVar16);
                    goto LAB_1016995cc;
                  }
                }
                _memcpy(unaff_x25,uVar36,lVar16);
                uVar36 = extraout_x1_04;
              }
              if (*pcVar11 == '\0') {
                *pcVar11 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar11,uVar36,1000000000);
              }
              uVar36 = FUN_1060fa678(pcVar11,1,pcVar11);
              *(undefined1 *)(puVar12 + 0x28) = 1;
              if (lVar16 != -0x7fffffffffffffff) {
                if (lVar16 == -0x8000000000000000) goto LAB_101698cc8;
                goto LAB_101698d0c;
              }
            }
            *puVar8 = 0x8000000000000007;
            uVar14 = 3;
            goto LAB_101699068;
          }
          if (bVar19 != 0) goto LAB_1016994f8;
          lVar16 = puVar12[0x14];
          puVar12[0x18] = puVar12[0x16];
          puVar12[0x17] = puVar12[0x15];
          lVar17 = *(long *)(lVar16 + 0x8c20);
joined_r0x000101698ae4:
          if (lVar17 != 0) {
            uVar27 = FUN_100e8ed88(*(undefined8 *)(lVar16 + 0x8c28),*(undefined8 *)(lVar16 + 0x8c30)
                                   ,puVar12 + 0x17);
            lVar17 = 0;
            uVar6 = *(ulong *)(lVar16 + 0x8c10);
            bVar19 = (byte)(uVar27 >> 0x39);
            lVar16 = *(long *)(lVar16 + 0x8c08);
            uVar27 = uVar27 & uVar6;
            uVar36 = *(undefined8 *)(lVar16 + uVar27);
            uVar26 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                              CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                       CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                                CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19),
                                                         CONCAT13(-((byte)((ulong)uVar36 >> 0x18) ==
                                                                   bVar19),CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar19),
                                                           -((byte)uVar36 == bVar19)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
                uVar22 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = uVar27 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar6;
                plVar20 = (long *)(lVar16 + -0x28 + uVar22 * -0x28);
                if (puVar12[0x18] == plVar20[1] && puVar12[0x17] == *plVar20) {
                  puVar12[0x19] = *(long *)(lVar16 + uVar22 * -0x28 + -0x10) + 0x10;
                  *(undefined1 *)(puVar12 + 0x27) = 0;
                  goto LAB_101698bc4;
                }
              }
              bVar35 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar36 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     -1),-((char)uVar36 == -1)))))))
                                          ),1);
              if ((bVar35 & 1) != 0) break;
              lVar17 = lVar17 + 8;
              uVar27 = uVar27 + lVar17 & uVar6;
              uVar36 = *(undefined8 *)(lVar16 + uVar27);
              uVar26 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                                CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                         CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                                  CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19
                                                            ),CONCAT13(-((byte)((ulong)uVar36 >>
                                                                               0x18) == bVar19),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar19),
                                                           -((byte)uVar36 == bVar19)))))))) &
                       0x8080808080808080;
            }
          }
          *(undefined1 *)(puVar12 + 0x28) = 1;
LAB_101698cc8:
          uVar36 = *(undefined8 *)(puVar12[6] + 0x7030);
          lVar16 = *(long *)(puVar12[6] + 0x7038);
          if (lVar16 == 0) {
            unaff_x25 = (long *******)0x1;
          }
          else {
            unaff_x25 = (long *******)_malloc(lVar16);
            if (unaff_x25 == (long *******)0x0) {
              func_0x0001087c9084(1,lVar16);
              goto LAB_1016995cc;
            }
          }
          _memcpy(unaff_x25,uVar36,lVar16);
LAB_101698d0c:
          puVar12[0x14] = lVar16;
          puVar12[0x15] = unaff_x25;
          puVar12[0x16] = lVar16;
          lVar16 = puVar12[6];
          lVar17 = puVar12[7];
          uVar21 = *(undefined8 *)(lVar17 + 0x20);
          uVar36 = *(undefined8 *)(lVar17 + 0x28);
          uVar24 = *(undefined8 *)(lVar17 + 0x38);
          uVar25 = *(undefined8 *)(lVar17 + 0x40);
          puVar12[0x17] = lVar16;
          puVar12[0x18] = uVar21;
          puVar12[0x19] = uVar36;
          puVar12[0x1a] = uVar24;
          puVar12[0x1b] = uVar25;
          puVar12[0x1d] = puVar12[3];
          puVar12[0x1c] = puVar12[2];
          *(undefined1 *)(puVar12 + 0x33) = 0;
LAB_101698d40:
          puVar12[0x1f] = puVar12[0x1d];
          puVar12[0x1e] = puVar12[0x1c];
          puVar12[0x20] = uVar21;
          puVar12[0x21] = uVar36;
          puVar12[0x22] = uVar24;
          puVar12[0x23] = uVar25;
          if (*(long *)(lVar16 + 0x8c20) != 0) {
            uVar27 = FUN_100e8ed88(*(undefined8 *)(lVar16 + 0x8c28),*(undefined8 *)(lVar16 + 0x8c30)
                                   ,puVar12 + 0x1e);
            lVar17 = 0;
            uVar6 = *(ulong *)(lVar16 + 0x8c10);
            bVar19 = (byte)(uVar27 >> 0x39);
            lVar16 = *(long *)(lVar16 + 0x8c08);
            uVar27 = uVar27 & uVar6;
            uVar36 = *(undefined8 *)(lVar16 + uVar27);
            uVar26 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                              CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                       CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                                CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19),
                                                         CONCAT13(-((byte)((ulong)uVar36 >> 0x18) ==
                                                                   bVar19),CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar19),
                                                           -((byte)uVar36 == bVar19)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar26 != 0; uVar26 = uVar26 - 1 & uVar26) {
                uVar22 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = uVar27 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar6;
                plVar20 = (long *)(lVar16 + -0x28 + uVar22 * -0x28);
                if (puVar12[0x1f] == plVar20[1] && puVar12[0x1e] == *plVar20) {
                  puVar12[0x24] = *(long *)(lVar16 + uVar22 * -0x28 + -0x10) + 0x10;
                  *(undefined1 *)(puVar12 + 0x32) = 0;
                  goto LAB_101698f50;
                }
              }
              bVar35 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar36 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     -1),-((char)uVar36 == -1)))))))
                                          ),1);
              if ((bVar35 & 1) != 0) break;
              lVar17 = lVar17 + 8;
              uVar27 = uVar27 + lVar17 & uVar6;
              uVar36 = *(undefined8 *)(lVar16 + uVar27);
              uVar26 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                                CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                         CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                                  CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19
                                                            ),CONCAT13(-((byte)((ulong)uVar36 >>
                                                                               0x18) == bVar19),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar19),
                                                           -((byte)uVar36 == bVar19)))))))) &
                       0x8080808080808080;
            }
          }
          *(undefined1 *)(puVar12 + 0x33) = 1;
          ppppppplStack_638 = ppppppplStack_620;
          ppppppplStack_640 = ppppppplStack_628;
LAB_101698e20:
          puVar10 = (undefined8 *)
                    (*
                    ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                    )();
          if (*(char *)(puVar10 + 2) == '\x01') {
            ppppppplVar31 = (long *******)*puVar10;
            auVar37._8_8_ = puVar10[1];
            auVar37._0_8_ = puVar10;
          }
          else {
            auVar37 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            ppppppplVar31 = auVar37._0_8_;
            puVar10[1] = auVar37._8_8_;
            *(undefined1 *)(puVar10 + 2) = 1;
          }
          ppppppplStack_6f8 = (long *******)0x0;
          *puVar10 = (undefined *)((long)ppppppplVar31 + 1);
          ppppppplStack_650 = (long *******)0x0;
          ppppppplStack_648 = (long *******)0x0;
          ppppppplStack_718 = (long *******)&UNK_108c56c70;
        }
        else {
          bVar19 = *(byte *)(puVar12 + 0x33);
          if (bVar19 < 2) {
            if (bVar19 != 0) {
              func_0x000108a07af4(&UNK_10b2518c0);
              goto LAB_1016995cc;
            }
            lVar16 = puVar12[0x17];
            uVar21 = puVar12[0x18];
            uVar36 = puVar12[0x19];
            uVar24 = puVar12[0x1a];
            uVar25 = puVar12[0x1b];
            goto LAB_101698d40;
          }
          if (bVar19 != 3) {
            func_0x000108a07b10(&UNK_10b2518c0);
            goto LAB_1016995cc;
          }
LAB_101698f50:
          pcVar11 = (char *)FUN_100fd3e50(puVar12 + 0x24,param_3);
          if (pcVar11 == (char *)0x0) {
            *(undefined1 *)(puVar12 + 0x33) = 3;
            uVar36 = 0;
LAB_10169905c:
            *puVar8 = 0x8000000000000007;
            uVar14 = 4;
            goto LAB_101699068;
          }
          if (((*(char *)(puVar12 + 0x32) == '\x03') && (*(char *)(puVar12 + 0x31) == '\x03')) &&
             (*(char *)(puVar12 + 0x28) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (puVar12 + 0x29);
            if (puVar12[0x2a] != 0) {
              (**(code **)(puVar12[0x2a] + 0x18))(puVar12[0x2b]);
            }
          }
          __ZN9codex_tui3app13thread_events16ThreadEventStore19file_change_changes17h19a9b38e1873692dE
                    (&ppppppplStack_630,pcVar11 + 0x28,puVar12[0x20],puVar12[0x21],puVar12[0x22],
                     puVar12[0x23]);
          if (*pcVar11 == '\0') {
            *pcVar11 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar11,extraout_x1_05,1000000000);
          }
          uVar36 = FUN_1060fa678(pcVar11,1,pcVar11);
          ppppppplStack_4c8 = ppppppplStack_620;
          ppppppplStack_4d0 = ppppppplStack_628;
          *(undefined1 *)(puVar12 + 0x33) = 1;
          if (ppppppplStack_630 == (long *******)0x8000000000000001) goto LAB_10169905c;
          ppppppplStack_638 = ppppppplStack_620;
          ppppppplStack_640 = ppppppplStack_628;
          if (ppppppplStack_630 == (long *******)0x8000000000000000) goto LAB_101698e20;
          uVar36 = __ZN9codex_tui31app_server_approval_conversions30file_update_changes_to_display17h055d23a39e788864E
                             (&ppppppplStack_480,&ppppppplStack_630);
          ppppppplStack_718 = ppppppplStack_480;
          if (ppppppplStack_480 == (long *******)0x0) goto LAB_101698e20;
          ppppppplStack_6f8 = ppppppplStack_478;
          ppppppplStack_648 = ppppppplStack_468;
          ppppppplStack_650 = ppppppplStack_470;
          auVar37._8_8_ = ppppppplStack_458;
          auVar37._0_8_ = uVar36;
          ppppppplVar31 = ppppppplStack_460;
        }
        ppppppplStack_528 = (long *******)puVar12[5];
        ppppppplStack_530 = (long *******)puVar12[4];
        ppppppplStack_6e8 = (long *******)puVar12[8];
        ppppppplStack_700 = (long *******)puVar12[9];
        ppppppplStack_6d8 = (long *******)puVar12[0xb];
        ppppppplStack_6f0 = (long *******)puVar12[0xd];
        ppppppplStack_708 = (long *******)puVar12[0x10];
        ppppppplVar28 = (long *******)0x8000000000000001;
        ppppppplVar7 = (long *******)puVar12[0xf];
        ppppppplVar29 = (long *******)puVar12[0x14];
        ppppppplVar30 = (long *******)puVar12[0x16];
        unaff_x25 = (long *******)puVar12[0xe];
        ppppppplVar9 = (long *******)puVar12[10];
        ppppppplVar33 = (long *******)puVar12[0x15];
        ppppppplStack_6e0 = (long *******)puVar12[0xc];
      }
LAB_101698e9c:
      uStack_710 = auVar37._8_8_;
      uVar36 = auVar37._0_8_;
      if (*(char *)(puVar12 + 0x13) == '\x01' &&
          ((ulong)ppppppplStack_720 & 0x7fffffffffffffff) != 0) {
        uVar36 = _free(ppppppplStack_728);
      }
      puVar8[0x10] = ppppppplStack_648;
      puVar8[0xf] = ppppppplStack_650;
      puVar8[0x18] = ppppppplStack_508;
      puVar8[0x17] = ppppppplStack_510;
      puVar8[0x1a] = ppppppplStack_4f8;
      puVar8[0x19] = ppppppplStack_500;
      puVar8[0x1c] = ppppppplStack_4e8;
      puVar8[0x1b] = ppppppplStack_4f0;
      puVar8[0x14] = ppppppplStack_528;
      puVar8[0x13] = ppppppplStack_530;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      *puVar8 = ppppppplVar28;
      puVar8[1] = ppppppplStack_6d8;
      puVar8[2] = ppppppplStack_6e0;
      puVar8[3] = ppppppplStack_6f0;
      puVar8[4] = ppppppplVar29;
      puVar8[5] = ppppppplVar33;
      puVar8[6] = ppppppplVar30;
      puVar8[7] = ppppppplStack_6e8;
      puVar8[8] = ppppppplStack_700;
      puVar8[9] = ppppppplVar9;
      puVar8[10] = unaff_x25;
      puVar8[0xb] = ppppppplVar7;
      puVar8[0xc] = ppppppplStack_708;
      puVar8[0xd] = ppppppplStack_718;
      puVar8[0xe] = ppppppplStack_6f8;
      puVar8[0x11] = ppppppplVar31;
      puVar8[0x12] = uStack_710;
      puVar8[0x1d] = uStack_4e0;
      puVar8[0x16] = ppppppplStack_518;
      puVar8[0x15] = ppppppplStack_520;
      uVar14 = 1;
      puVar8[0x1f] = uStack_538;
      puVar8[0x1e] = uStack_540;
LAB_101699068:
      *(undefined1 *)((long)puVar12 + 0x99) = uVar14;
      return uVar36;
    }
    lVar16 = *param_1;
    param_1[3] = lVar16;
    param_1[5] = param_1[2];
    param_1[4] = param_1[1];
    if (*(long *)(lVar16 + 0x8c20) != 0) {
      uVar6 = FUN_100e8ed88(*(undefined8 *)(lVar16 + 0x8c28),*(undefined8 *)(lVar16 + 0x8c30),
                            param_1 + 4);
      lVar17 = 0;
      uVar22 = *(ulong *)(lVar16 + 0x8c10);
      bVar19 = (byte)(uVar6 >> 0x39);
      lVar16 = *(long *)(lVar16 + 0x8c08);
      uVar6 = uVar6 & uVar22;
      uVar36 = *(undefined8 *)(lVar16 + uVar6);
      uVar27 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                        CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                 CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                          CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19),
                                                   CONCAT13(-((byte)((ulong)uVar36 >> 0x18) ==
                                                             bVar19),CONCAT12(-((byte)((ulong)uVar36
                                                                                      >> 0x10) ==
                                                                               bVar19),CONCAT11(-((
                                                  byte)((ulong)uVar36 >> 8) == bVar19),
                                                  -((byte)uVar36 == bVar19)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
          uVar26 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          uVar26 = uVar6 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) & uVar22;
          plVar20 = (long *)(lVar16 + -0x28 + uVar26 * -0x28);
          if (param_1[5] == plVar20[1] && param_1[4] == *plVar20) goto LAB_101698194;
        }
        bVar35 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar36 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar36
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar36 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar36 >> 8) == -1),
                                                           -((char)uVar36 == -1)))))))),1);
        if ((bVar35 & 1) != 0) break;
        lVar17 = lVar17 + 8;
        uVar6 = uVar6 + lVar17 & uVar22;
        uVar36 = *(undefined8 *)(lVar16 + uVar6);
        uVar27 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar19),
                          CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar19),
                                   CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar19),
                                            CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar19),
                                                     CONCAT13(-((byte)((ulong)uVar36 >> 0x18) ==
                                                               bVar19),CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar19),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar19),
                                                           -((byte)uVar36 == bVar19)))))))) &
                 0x8080808080808080;
      }
    }
  }
  else {
    if (bVar19 != 3) {
      func_0x000108a07b10(&UNK_10b251b00);
      param_2 = extraout_x1;
      lVar16 = extraout_x9;
      uVar26 = extraout_x17;
LAB_101698194:
      param_1[6] = *(long *)(lVar16 + uVar26 * -0x28 + -0x10) + 0x10;
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    auVar37 = FUN_100fd3e50(param_1 + 6,param_2);
    uVar36 = auVar37._8_8_;
    pcVar11 = auVar37._0_8_;
    if (pcVar11 == (char *)0x0) {
      uVar36 = 1;
      uVar14 = 3;
      goto LAB_101698344;
    }
    if ((((char)param_1[0x14] == '\x03') && ((char)param_1[0x13] == '\x03')) &&
       ((char)param_1[10] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xb);
      uVar36 = extraout_x1_00;
      if (param_1[0xc] != 0) {
        (**(code **)(param_1[0xc] + 0x18))(param_1[0xd]);
        uVar36 = extraout_x1_01;
      }
    }
    if (*(long *)(pcVar11 + 0x598) == 0) {
      iVar15 = 6;
      if ((*(long *)(pcVar11 + 0x448) != 0 || *(long *)(pcVar11 + 0x4a8) != 0) ||
          (*(long *)(pcVar11 + 0x508) != 0 || *(long *)(pcVar11 + 0x538) != 0)) {
        iVar15 = 1;
      }
      if (*pcVar11 != '\0') goto LAB_10169835c;
      *pcVar11 = '\x01';
    }
    else {
      iVar15 = 0;
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
LAB_10169835c:
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar11,uVar36,1000000000);
      }
    }
    FUN_1060fa678(pcVar11,1,pcVar11);
    lVar16 = param_1[3];
    if (iVar15 == 6) {
      bVar13 = false;
      plVar20 = *(long **)(lVar16 + 0x8c68);
      plVar23 = plVar20 + 1;
      lVar34 = *plVar20;
      lVar17 = param_1[4];
      lVar1 = param_1[5];
      uVar26 = CONCAT17(-(-1 < lVar34),
                        CONCAT16(-(-1 < (char)((ulong)lVar34 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar34 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar34 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar34 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar34 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar34 >> 8)),-(-1 < (char)lVar34)))))))) &
               0x8080808080808080;
      lVar16 = *(long *)(lVar16 + 0x8c80);
      while (lVar16 != 0) {
        while (uVar26 == 0) {
          lVar34 = *plVar23;
          plVar20 = plVar20 + -0x21;
          plVar23 = plVar23 + 1;
          uVar26 = CONCAT17(-(-1 < lVar34),
                            CONCAT16(-(-1 < (char)((ulong)lVar34 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar34 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar34 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar34 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar34 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar34 >> 8)),
                                                           -(-1 < (char)lVar34)))))))) &
                   0x8080808080808080;
        }
        uVar27 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
        uVar26 = uVar26 - 1 & uVar26;
        lVar16 = lVar16 + -1;
        if ((*(long *)((long)plVar20 + uVar27 * -0x21 + -8) == lVar1 &&
             *(long *)((long)plVar20 + uVar27 * -0x21 + -0x10) == lVar17) &&
           (*(byte *)((long)plVar20 + uVar27 * -0x21 + -0x11) < 2)) {
          *(undefined1 *)((long)plVar20 + uVar27 * -0x21 + -0x11) = 6;
          bVar13 = true;
        }
      }
      if (bVar13) {
        func_0x000105503fdc();
      }
    }
    else {
      lStack_38 = param_1[5];
      lStack_40 = param_1[4];
      __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_22set_side_parent_status17he95a9c2129256965E
                (lVar16,&lStack_40,iVar15);
    }
  }
  uVar36 = 0;
  uVar14 = 1;
LAB_101698344:
  *(undefined1 *)(param_1 + 0x15) = uVar14;
  return uVar36;
}

