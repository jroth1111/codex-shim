
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100579200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined1 uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 unaff_x23;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long lStack_1cb0;
  long lStack_1ca8;
  long lStack_1ca0;
  long lStack_1c98;
  long lStack_1c90;
  long lStack_1c88;
  undefined8 uStack_18b0;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  long lStack_1330;
  long lStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined1 uStack_12d8;
  undefined1 uStack_12d7;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  long lStack_12b0;
  long lStack_12a8;
  long lStack_12a0;
  long lStack_1298;
  long lStack_1290;
  long lStack_1288;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined1 auStack_818 [8];
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined *puStack_7f8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
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
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 ******ppppppuStack_660;
  char ***pppcStack_658;
  undefined8 uStack_650;
  long lStack_648;
  char **ppcStack_638;
  undefined *puStack_630;
  char *pcStack_628;
  long **pplStack_620;
  long *plStack_618;
  code *pcStack_610;
  undefined8 ******ppppppuStack_608;
  char ***pppcStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [1224];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *******pppppppcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  char *******pppppppcStack_70;
  long **pplStack_68;
  
  bVar3 = *(byte *)(param_1 + 0xa1);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b217b80);
      }
      uVar20 = FUN_107c05cc4();
      FUN_100df5738(&lStack_700);
      *(undefined1 *)((long)param_1 + 0x50a) = 0;
      FUN_100cca270(param_1 + 0x9e);
      if ((*(byte *)((long)param_1 + 0x50b) & 1) != 0) {
        FUN_100e2d09c(param_1 + 5);
      }
      *(undefined1 *)((long)param_1 + 0x50b) = 0;
      if (((*(byte *)((long)param_1 + 0x509) & 1) != 0) && (param_1[0xa2] != 0)) {
        _free(param_1[0xa3]);
      }
      *(undefined2 *)(param_1 + 0xa1) = 2;
      __Unwind_Resume(uVar20);
      auVar27 = FUN_107c05ccc();
      puVar23 = auVar27._0_8_;
      bVar3 = *(byte *)(puVar23 + 800);
      if (bVar3 < 2) {
        if (bVar3 != 0) {
          FUN_107c05cc0(&UNK_10b217b98);
LAB_1005799b4:
          FUN_107c05cc4(&UNK_10b217b98);
          *(undefined1 *)(puVar23 + 800) = 2;
          uVar20 = __Unwind_Resume();
          FUN_100d1ddbc(puVar23 + 2);
          *(undefined1 *)(puVar23 + 800) = 2;
          __Unwind_Resume(uVar20);
          auVar27 = FUN_107c05ccc();
          lVar10 = auVar27._8_8_;
          puVar23 = auVar27._0_8_;
          uStack_18b0 = 0;
          bVar3 = *(byte *)(lVar10 + 0x16ba);
          if (bVar3 < 2) {
            if (bVar3 == 0) {
              *(undefined2 *)(lVar10 + 0x16b8) = 0;
              *(undefined8 *)(lVar10 + 0x980) = *(undefined8 *)(lVar10 + 0x16a0);
              unaff_x23 = *(undefined8 *)(lVar10 + 0x16a8);
              __ZN10codex_core5shell5Shell16derive_exec_args17h7e043e3afe4c621fE
                        (lVar10 + 0x988,*(undefined8 *)(lVar10 + 0x16b0),1,0,0);
              *(undefined1 *)(lVar10 + 0x16b9) = 1;
              lVar22 = *(long *)(lVar10 + 0x998);
              if (lVar22 != 0) {
                plVar11 = *(long **)(lVar10 + 0x990);
                lVar24 = *plVar11;
                lStack_1ca8 = plVar11[2];
                lStack_1cb0 = plVar11[1];
                lVar21 = lVar22 + -1;
                _memmove(plVar11,plVar11 + 3,lVar21 * 0x18);
                *(long *)(lVar10 + 0x998) = lVar21;
                if (lVar24 == -0x8000000000000000) goto LAB_100579ebc;
                *(long *)(lVar10 + 0x9a0) = lVar24;
                *(long *)(lVar10 + 0x9b0) = lStack_1ca8;
                *(long *)(lVar10 + 0x9a8) = lStack_1cb0;
                *(undefined1 *)(lVar10 + 0x16b8) = 1;
                if (lVar21 == 0) {
LAB_100579ae4:
                  lVar22 = *(long *)(lVar10 + 0x980);
                  lVar21 = *(long *)(lVar22 + 0x2388);
                }
                else {
                  *(long *)(lVar10 + 0x998) = lVar22 + -2;
                  puVar13 = (ulong *)(*(long *)(lVar10 + 0x990) + (lVar22 + -2) * 0x18);
                  if ((*puVar13 & 0x7fffffffffffffff) == 0) goto LAB_100579ae4;
                  _free(puVar13[1]);
                  lVar22 = *(long *)(lVar10 + 0x980);
                  lVar21 = *(long *)(lVar22 + 0x2388);
                }
                if (lVar21 != 0) {
                  lVar22 = *(long *)(lVar22 + 0x2390);
                  do {
                    uVar17 = (ulong)*(ushort *)(lVar21 + 10);
                    uVar9 = 0xffffffffffffffff;
                    pbVar16 = (byte *)(lVar21 + 0xc);
                    uVar18 = uVar17;
                    do {
                      if (uVar18 == 0) goto LAB_100579b40;
                      cVar6 = *pbVar16 < 0x1e;
                      if (0x1e < *pbVar16) {
                        cVar6 = -1;
                      }
                      uVar18 = uVar18 - 1;
                      uVar9 = uVar9 + 1;
                      pbVar16 = pbVar16 + 1;
                    } while (cVar6 == '\x01');
                    uVar17 = uVar9;
                    if (cVar6 == '\0') goto LAB_100579b68;
LAB_100579b40:
                    if (lVar22 == 0) break;
                    lVar21 = *(long *)(lVar21 + uVar17 * 8 + 0x18);
                    lVar22 = lVar22 + -1;
                  } while( true );
                }
                uVar20 = 0;
                lVar24 = 0;
                uVar26 = 0;
                uVar19 = 8;
                lVar25 = 8;
                lVar22 = 0;
                goto LAB_100579cd8;
              }
            }
            else {
              FUN_107c05cc0(&UNK_10b217bc8);
            }
            lVar21 = 0;
LAB_100579ebc:
            FUN_107c03c58(0,lVar21,&UNK_10b217bb0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100579ed4);
            (*pcVar5)();
          }
          if (bVar3 != 3) {
            FUN_107c05cc4(&UNK_10b217bc8);
LAB_100579b68:
            __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E(lVar10);
            *(undefined8 *)(lVar10 + 0x9b8) = unaff_x23;
            *(long *)(lVar10 + 0x9c0) = lVar10;
            *(undefined1 *)(lVar10 + 0x1698) = 0;
          }
          lVar22 = FUN_100a7ebb0(&lStack_1cb0,lVar10 + 0x9b8,param_3);
          if (lStack_1cb0 == -0x8000000000000000) {
            *puVar23 = 0x8000000000000000;
            uVar12 = 3;
            goto LAB_100579e70;
          }
          lStack_12a8 = lStack_1ca8;
          lStack_12b0 = lStack_1cb0;
          lStack_1298 = lStack_1c98;
          lStack_12a0 = lStack_1ca0;
          lStack_1288 = lStack_1c88;
          lStack_1290 = lStack_1c90;
          if ((*(char *)(lVar10 + 0x1698) == '\x03') && (*(char *)(lVar10 + 0x1692) == '\x03')) {
            FUN_100cb9114(lVar10 + 0x9e8);
            if (*(long *)(lVar10 + 0x9d0) != 0) {
              _free(*(undefined8 *)(lVar10 + 0x9d8));
            }
            *(undefined1 *)(lVar10 + 0x1691) = 0;
          }
          lVar21 = lStack_12a0;
          lVar14 = lStack_12a8;
          FUN_10074d304(&uStack_12c8,lStack_12a8,lStack_12a0);
          FUN_10074d5c0(&lStack_1cb0,lVar14,lVar21);
          uVar26 = uStack_12b8;
          uVar19 = uStack_12c0;
          uVar20 = uStack_12c8;
          lVar25 = lStack_1ca8;
          lVar24 = lStack_1cb0;
          lVar22 = lVar14;
          for (; lVar21 != 0; lVar21 = lVar21 + -1) {
            FUN_100cc1c58(lVar22);
            lVar22 = lVar22 + 0x140;
          }
          lVar22 = lStack_1290;
          lVar21 = lStack_1290;
          lVar15 = lStack_1288;
          if (lStack_12b0 != 0) {
            _free(lVar14);
            lVar22 = lStack_1290;
            lVar21 = lStack_1290;
            lVar15 = lStack_1288;
          }
          for (; lVar14 = lStack_1290, lStack_1290 = lVar21, lVar15 != 0; lVar15 = lVar15 + -1) {
            FUN_100e0649c(lVar22);
            lVar22 = lVar22 + 0x80;
            lVar21 = lStack_1290;
            lStack_1290 = lVar14;
          }
          if (lStack_1298 != 0) {
            _free(lVar14);
          }
          FUN_100e05b5c(lVar10);
          lVar22 = lStack_1ca0;
          if (*(long *)(lVar10 + 0x960) != 0) {
            _free(*(undefined8 *)(lVar10 + 0x968));
          }
LAB_100579cd8:
          lVar21 = *(long *)(lVar10 + 0x980);
          if (*(long *)(lVar21 + 0x1f60) == -0x8000000000000000) {
            uStack_12c8 = 0x8000000000000000;
            lVar14 = *(long *)(lVar21 + 0x2388);
          }
          else {
            FUN_101146714(&uStack_12c8,*(undefined8 *)(lVar21 + 0x1f68),
                          *(undefined8 *)(lVar21 + 0x1f70));
            lVar21 = *(long *)(lVar10 + 0x980);
            lVar14 = *(long *)(lVar21 + 0x2388);
          }
          if (lVar14 != 0) {
            lVar15 = *(long *)(lVar21 + 0x2390);
            do {
              uVar17 = (ulong)*(ushort *)(lVar14 + 10);
              uVar9 = 0xffffffffffffffff;
              pbVar16 = (byte *)(lVar14 + 0xc);
              uVar18 = uVar17;
              do {
                if (uVar18 == 0) goto LAB_100579d74;
                cVar6 = *pbVar16 == 0;
                if (1 < *pbVar16) {
                  cVar6 = -1;
                }
                uVar18 = uVar18 - 1;
                uVar9 = uVar9 + 1;
                pbVar16 = pbVar16 + 1;
              } while (cVar6 == '\x01');
              uVar17 = uVar9;
              if (cVar6 == '\0') {
                uVar12 = 1;
                goto LAB_100579d94;
              }
LAB_100579d74:
              if (lVar15 == 0) break;
              lVar14 = *(long *)(lVar14 + uVar17 * 8 + 0x18);
              lVar15 = lVar15 + -1;
            } while( true );
          }
          uVar12 = 0;
LAB_100579d94:
          uVar4 = *(undefined1 *)(lVar21 + 0x2532);
          FUN_1011c1348(&lStack_12b0);
          _memcpy(&lStack_1cb0,&lStack_12b0,0x960);
          *(undefined2 *)(lVar10 + 0x16b8) = 0;
          uStack_12e8 = *(undefined8 *)(lVar10 + 0x9a8);
          uStack_12f0 = *(undefined8 *)(lVar10 + 0x9a0);
          uStack_12e0 = *(undefined8 *)(lVar10 + 0x9b0);
          uStack_1310 = *(undefined8 *)(lVar10 + 0x998);
          uStack_1318 = *(undefined8 *)(lVar10 + 0x990);
          uStack_1320 = *(undefined8 *)(lVar10 + 0x988);
          uStack_1300 = uStack_12c0;
          uStack_1308 = uStack_12c8;
          uStack_12f8 = uStack_12b8;
          uStack_1350 = uVar20;
          uStack_1348 = uVar19;
          uStack_1340 = uVar26;
          lStack_1338 = lVar24;
          lStack_1330 = lVar25;
          lStack_1328 = lVar22;
          uStack_12d8 = uVar12;
          uStack_12d7 = uVar4;
          lVar22 = __ZN11codex_hooks8registry5Hooks3new17h0a1ac373443313b5E
                             (&uStack_948,&lStack_1cb0);
          puVar23[0xd] = uStack_8e0;
          puVar23[0xc] = uStack_8e8;
          puVar23[0xf] = uStack_8d0;
          puVar23[0xe] = uStack_8d8;
          puVar23[0x11] = uStack_8c0;
          puVar23[0x10] = uStack_8c8;
          puVar23[5] = uStack_920;
          puVar23[4] = uStack_928;
          puVar23[7] = uStack_910;
          puVar23[6] = uStack_918;
          puVar23[9] = uStack_900;
          puVar23[8] = uStack_908;
          puVar23[0xb] = uStack_8f0;
          puVar23[10] = uStack_8f8;
          puVar23[1] = uStack_940;
          *puVar23 = uStack_948;
          puVar23[3] = uStack_930;
          puVar23[2] = uStack_938;
          uVar12 = 1;
          *(undefined2 *)(lVar10 + 0x16b8) = 0;
LAB_100579e70:
          *(undefined1 *)(lVar10 + 0x16ba) = uVar12;
          return lVar22;
        }
        lVar10 = puVar23[1];
        if ((*(byte *)(lVar10 + 0x1eb) & 1) != 0) {
          uVar20 = *puVar23;
          lStack_800 = lVar10 + 0x30;
          puStack_7f8 = &DAT_10112965c;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (auStack_818,s_Model_metadata_for______not_foun_108ac1539,&lStack_800);
          uStack_840 = (undefined4)uStack_810;
          uStack_848 = auStack_818._0_4_;
          uStack_844 = auStack_818._4_4_;
          *(undefined4 *)(puVar23 + 2) = 1;
          *(ulong *)((long)puVar23 + 0x1c) = CONCAT44(uStack_840,uStack_844);
          *(ulong *)((long)puVar23 + 0x14) = CONCAT44(uStack_848,uStack_84c);
          puVar23[5] = uStack_808;
          puVar23[4] = uStack_810;
          puVar23[0x3d] = uVar20;
          puVar23[0x3e] = lVar10;
          *(undefined1 *)(puVar23 + 0xb7) = 0;
          goto LAB_100579964;
        }
      }
      else {
        if (bVar3 != 3) goto LAB_1005799b4;
LAB_100579964:
        uVar9 = FUN_10059e898(puVar23 + 2,auVar27._8_8_);
        if ((uVar9 & 1) != 0) {
          lVar10 = 1;
          uVar12 = 3;
          goto LAB_10057998c;
        }
        FUN_100d1ddbc(puVar23 + 2);
      }
      lVar10 = 0;
      uVar12 = 1;
LAB_10057998c:
      *(undefined1 *)(puVar23 + 800) = uVar12;
      return lVar10;
    }
    *(undefined1 *)((long)param_1 + 0x50b) = 0;
    param_1[4] = param_1[3];
    *(undefined2 *)((long)param_1 + 0x509) = 1;
    param_1[0xa3] = param_1[1];
    param_1[0xa2] = *param_1;
    param_1[0xa4] = param_1[2];
    param_1[0xa5] = param_1[3] + 0x790;
    *(undefined1 *)(param_1 + 0xb3) = 0;
LAB_100579274:
    pcVar8 = (char *)FUN_100fd3e50(param_1 + 0xa5);
    if (pcVar8 == (char *)0x0) {
      uVar12 = 3;
      lVar10 = 0;
      goto LAB_10057974c;
    }
    if (((*(char *)(param_1 + 0xb3) == '\x03') && (*(char *)(param_1 + 0xb2) == '\x03')) &&
       (*(char *)(param_1 + 0xa9) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xaa);
      if (param_1[0xab] != 0) {
        (**(code **)(param_1[0xab] + 0x18))(param_1[0xac]);
      }
    }
    FUN_101404bb0(param_1 + 5,pcVar8 + 0x28);
    *(undefined1 *)((long)param_1 + 0x50b) = 1;
    if (*pcVar8 == '\0') {
      *pcVar8 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar8,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar8,1,pcVar8);
    func_0x000101149bcc(param_1 + 0x9e,param_1[0x55],param_1[0x56]);
    func_0x000102e9e94c(param_1[0x9f],param_1[0xa0],param_1 + 0x4b);
    func_0x000102d68d88(&lStack_798,*(long *)(param_1[4] + 0x400) + 0x10,param_1[0x9f],param_1[0xa0]
                       );
    if (lStack_798 == -0x7fffffffffffffe0) {
      uStack_7a8 = uStack_788;
      uStack_7b0 = uStack_790;
      uStack_7a0 = uStack_780;
      *(undefined1 *)((long)param_1 + 0x50a) = 1;
    }
    else {
      uStack_698 = uStack_730;
      uStack_6a0 = uStack_738;
      uStack_688 = uStack_720;
      uStack_690 = uStack_728;
      uStack_678 = uStack_710;
      uStack_680 = uStack_718;
      uStack_670 = uStack_708;
      uStack_6d8 = uStack_770;
      uStack_6e0 = uStack_778;
      uStack_6c8 = uStack_760;
      uStack_6d0 = uStack_768;
      uStack_6b8 = uStack_750;
      uStack_6c0 = uStack_758;
      uStack_6a8 = uStack_740;
      uStack_6b0 = uStack_748;
      uStack_6f8 = uStack_790;
      lStack_700 = lStack_798;
      uStack_6e8 = uStack_780;
      uStack_6f0 = uStack_788;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62a9a8 - 1 < 2 ||
           ((bRam000000010b62a9a8 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                               ), cVar6 != '\0')))) &&
          (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                             ), (uVar9 & 1) != 0)))) {
        lStack_648 = ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                     + 0x30;
        plStack_618 = &lStack_700;
        pcStack_610 = 
        __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
        ;
        pplStack_620 = &plStack_618;
        pcStack_628 = s__failed_to_resolve_stored_sessio_108ac1507;
        ppcStack_638 = &pcStack_628;
        puStack_630 = &UNK_10b208fd0;
        pppcStack_658 = &ppcStack_638;
        ppppppuStack_660 = (undefined8 ******)0x1;
        uStack_650 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                   ,&ppppppuStack_660);
        lVar10 = 
        ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcStack_f0 = *(code **)(
                                 ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                                 + 0x20);
          uStack_e8 = *(undefined8 *)
                       (
                       ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                       + 0x28);
          plStack_f8 = (long *)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&plStack_f8);
          if (iVar7 != 0) {
            lStack_c0 = *(long *)(lVar10 + 0x60);
            uStack_b8 = *(undefined8 *)(lVar10 + 0x68);
            pppppppcStack_d8 = *(char ********)(lVar10 + 0x50);
            uStack_d0 = *(undefined8 *)(lVar10 + 0x58);
            uStack_e0 = 1;
            if (pppppppcStack_d8 == (char *******)0x0) {
              uStack_e0 = 2;
            }
            uStack_98 = *(undefined4 *)(lVar10 + 8);
            uStack_94 = *(undefined4 *)(lVar10 + 0xc);
            pppppppuStack_80 = &ppppppuStack_660;
            puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
            pppppppcStack_70 = (char *******)&pppppppuStack_80;
            pplStack_68 = (long **)&DAT_1061c2098;
            lStack_c8 = 1;
            if (lStack_c0 == 0) {
              lStack_c8 = 2;
            }
            pcStack_a8 = pcStack_f0;
            plStack_b0 = plStack_f8;
            uStack_a0 = uStack_e8;
            pppppppuStack_88 = &pppppppcStack_70;
            pcStack_90 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&uStack_e0);
          }
        }
      }
      else {
        lVar10 = 
        ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_600 =
               *(char ****)
                (
                ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                + 0x20);
          uStack_5f8 = *(undefined8 *)
                        (
                        ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                        + 0x28);
          ppppppuStack_608 = (undefined8 ******)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppuStack_608);
          if (iVar7 != 0) {
            lStack_c8 = ___ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_28new_default_turn_with_sub_id28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha943206c31779711E
                        + 0x30;
            plStack_f8 = &lStack_700;
            pcStack_f0 = 
            __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
            ;
            pplStack_68 = &plStack_f8;
            pppppppcStack_70 = (char *******)s__failed_to_resolve_stored_sessio_108ac1507;
            pppppppuStack_80 = &pppppppcStack_70;
            puStack_78 = &UNK_10b208fd0;
            pppppppcStack_d8 = (char *******)&pppppppuStack_80;
            uStack_e0 = 1;
            uStack_d0 = 1;
            pppcStack_658 = pppcStack_600;
            ppppppuStack_660 = ppppppuStack_608;
            uStack_650 = uStack_5f8;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar10,puVar2,puVar1,&ppppppuStack_660,&uStack_e0);
          }
        }
      }
      uStack_7b0 = 0;
      uStack_7a8 = 8;
      uStack_7a0 = 0;
      *(undefined1 *)((long)param_1 + 0x50a) = 1;
      FUN_100df5738(&lStack_700);
    }
    uVar20 = param_1[4];
    *(undefined1 *)((long)param_1 + 0x509) = 0;
    uStack_120 = param_1[0xa3];
    uStack_128 = param_1[0xa2];
    uStack_118 = param_1[0xa4];
    *(undefined1 *)((long)param_1 + 0x50b) = 0;
    _memcpy(auStack_5f0,param_1 + 5,0x4c8);
    *(undefined1 *)((long)param_1 + 0x50a) = 0;
    uStack_108 = uStack_7a8;
    uStack_110 = uStack_7b0;
    uStack_100 = uStack_7a0;
    _memcpy(param_1 + 0xa2,auStack_5f0,0x4f8);
    param_1[0x141] = 0x8000000000000006;
    param_1[0x14a] = uVar20;
    *(undefined1 *)(param_1 + 0x819) = 0;
  }
  else if (bVar3 == 3) goto LAB_100579274;
  lVar10 = func_0x000100577c38(param_1 + 0xa2,param_2);
  if (lVar10 == 0) {
    uVar12 = 4;
  }
  else {
    FUN_100d74270(param_1 + 0xa2);
    *(undefined1 *)((long)param_1 + 0x50a) = 0;
    lVar21 = param_1[0x9f];
    lVar22 = param_1[0xa0];
    if (lVar22 != 0) {
      puVar23 = (undefined8 *)(lVar21 + 0x20);
      do {
        if (puVar23[-4] != 0) {
          _free(puVar23[-3]);
        }
        if (puVar23[-1] != 0) {
          _free(*puVar23);
        }
        puVar23 = puVar23 + 6;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (param_1[0x9e] != 0) {
      _free(lVar21);
    }
    *(undefined1 *)((long)param_1 + 0x50b) = 0;
    *(undefined1 *)((long)param_1 + 0x509) = 0;
    uVar12 = 1;
  }
LAB_10057974c:
  *(undefined1 *)(param_1 + 0xa1) = uVar12;
  return lVar10;
}

