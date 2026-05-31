
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a66fec(long *param_1,undefined8 *param_2,undefined8 ****param_3)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  code *pcVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x1;
  long lVar19;
  undefined1 uVar20;
  undefined8 ****ppppuVar21;
  undefined8 ****ppppuVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined8 ****unaff_x22;
  undefined8 ****unaff_x23;
  long *plVar25;
  undefined8 ****ppppuVar26;
  ulong uVar27;
  undefined8 ***pppuVar28;
  long lVar29;
  undefined1 auVar30 [16];
  long lStack_980;
  undefined8 **ppuStack_958;
  undefined8 ***pppuStack_950;
  undefined8 ***pppuStack_948;
  undefined8 ***pppuStack_940;
  undefined8 ***pppuStack_938;
  long lStack_930;
  long lStack_928;
  long lStack_920;
  long lStack_918;
  long lStack_910;
  long *plStack_908;
  long lStack_900;
  undefined8 uStack_8f8;
  long lStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long *plStack_8d8;
  long *plStack_8d0;
  long *plStack_8c8;
  long *aplStack_8c0 [2];
  undefined8 ***pppuStack_8b0;
  undefined8 ***pppuStack_8a8;
  undefined8 ***pppuStack_8a0;
  undefined *puStack_898;
  long lStack_828;
  char *pcStack_820;
  long lStack_818;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined8 ***pppuStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  bVar5 = *(byte *)(param_2 + 2);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        func_0x000108a07af4(&UNK_10b22bb00);
      }
      uVar14 = func_0x000108a07b10();
      func_0x000100e1ca08(param_2 + 0x46);
      *(undefined1 *)(param_2 + 2) = 2;
      uVar14 = __Unwind_Resume(uVar14);
      FUN_100e86c44(param_2 + 3);
      *(undefined1 *)(param_2 + 2) = 2;
      __Unwind_Resume(uVar14);
      auVar30 = func_0x000108a07bc4();
      puVar17 = auVar30._8_8_;
      puVar15 = auVar30._0_8_;
      bVar5 = *(byte *)((long)puVar17 + 0x5f2);
      if (bVar5 < 2) {
        if (bVar5 != 0) {
          uVar14 = func_0x000108a07af4(&UNK_10b22bb18);
          if (param_3 != (undefined8 ****)0x0) {
            _free();
          }
          FUN_100ca0c80(&pppuStack_248);
          FUN_100e4787c(&pppuStack_270);
          do {
            *(undefined1 *)(lStack_980 + 0x5f2) = 2;
            __Unwind_Resume(uVar14);
            ppppuVar21 = unaff_x22 + 1;
            do {
              if (ppppuVar21[-1] != (undefined8 ***)0x0) {
                _free(*ppppuVar21);
              }
              ppppuVar21 = ppppuVar21 + 3;
              param_3 = (undefined8 ****)((long)param_3 + -1);
            } while (param_3 != (undefined8 ****)0x0);
            if (unaff_x23 != (undefined8 ****)0x0) {
              _free();
            }
          } while( true );
        }
        ppuStack_958 = (undefined8 **)puVar17[0xbb];
        *(undefined1 *)(puVar17 + 0xbe) = *(undefined1 *)((long)puVar17 + 0x5f1);
        *puVar17 = puVar17[0xbd];
        __ZN18codex_core_plugins6loader18plugin_skill_roots17hf0d1d64b1f2d2ab7E
                  (&pppuStack_8b0,puVar17[0xba],puVar17[0xbc]);
        lVar18 = (long)pppuStack_8a0 * 0x48;
        param_3 = (undefined8 ****)pppuStack_8a0;
        unaff_x22 = (undefined8 ****)pppuStack_8a8;
        unaff_x23 = (undefined8 ****)pppuStack_8b0;
        if ((undefined8 ****)0x1c71c71c71c71c7 < pppuStack_8a0) {
          uVar14 = 0;
          goto LAB_100a6729c;
        }
      }
      else {
        if (bVar5 == 3) goto LAB_100a67448;
        func_0x000108a07b10(&UNK_10b22bb18);
        lVar18 = extraout_x1;
      }
      if (lVar18 == 0) {
        ppppuVar21 = (undefined8 ****)0x0;
        ppppuVar16 = (undefined8 ****)0x8;
      }
      else {
        ppppuVar16 = (undefined8 ****)_malloc(lVar18);
        ppppuVar21 = param_3;
        if (ppppuVar16 == (undefined8 ****)0x0) {
          uVar14 = 8;
LAB_100a6729c:
          func_0x0001087c9084(uVar14,lVar18);
LAB_100a672a0:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100a672a4);
          (*pcVar11)();
        }
      }
      ppppuVar22 = unaff_x22 + (long)param_3 * 3;
      ppppuVar26 = (undefined8 ****)0x0;
      pppuStack_270 = ppppuVar21;
      pppuStack_268 = ppppuVar16;
      pppuStack_248 = unaff_x22;
      pppuStack_238 = unaff_x23;
      pppuStack_230 = ppppuVar22;
      if (param_3 != (undefined8 ****)0x0) {
        ppppuVar21 = unaff_x22;
        ppppuVar16 = ppppuVar16 + 8;
        do {
          pppuVar1 = *ppppuVar21;
          pppuVar3 = ppppuVar21[1];
          pppuVar28 = ppppuVar21[2];
          ppppuVar21 = ppppuVar21 + 3;
          pppuStack_240 = ppppuVar21;
          if (lRam000000010b62c4d8 != 0) {
            pppuStack_950 =
                 (undefined8 ***)
                 &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
            pppuStack_8b0 = &pppuStack_950;
            __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                      (0x10b62c4d8,1,&pppuStack_8b0,&UNK_10b234158,&UNK_10b2340c8);
          }
          ppuVar12 = *___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          *___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE =
               (undefined8 **)((long)ppuVar12 + 1);
          pppuVar10 = pppuRam000000010b62c4d0;
          pppuVar9 = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          if ((long)ppuVar12 < 0) goto LAB_100a672a0;
          pppuStack_8b0 = (undefined8 ***)ppuStack_958;
          pppuStack_8a8 = (undefined8 ***)&DAT_1048e978c;
          puStack_898 = &DAT_1048e978c;
          pppuStack_8a0 = (undefined8 ***)(ppuStack_958 + 3);
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&pppuStack_950,s___108b03abb,&pppuStack_8b0);
          pppuStack_8b0 = pppuStack_950;
          pppuStack_8a8 = pppuStack_948;
          pppuStack_8a0 = pppuStack_940;
          ppppuVar16[-8] = pppuVar1;
          ppppuVar16[-7] = pppuVar3;
          ppppuVar16[-6] = pppuVar28;
          ppppuVar16[-4] = pppuStack_948;
          ppppuVar16[-5] = pppuStack_950;
          ppppuVar16[-3] = pppuStack_940;
          ppppuVar16[-2] = pppuVar9;
          ppppuVar16[-1] = pppuVar10;
          *(undefined1 *)ppppuVar16 = 0;
          ppppuVar26 = (undefined8 ****)((long)ppppuVar26 + 1);
          ppppuVar16 = ppppuVar16 + 9;
        } while (ppppuVar21 != ppppuVar22);
      }
      if (unaff_x23 != (undefined8 ****)0x0) {
        _free(unaff_x22);
      }
      pppuStack_8a8 = pppuStack_268;
      pppuStack_8b0 = pppuStack_270;
      pppuStack_8a0 = ppppuVar26;
      _memcpy(puVar17 + 1,&pppuStack_8b0,0x5b8);
      *(undefined1 *)(puVar17 + 0xb8) = 0;
LAB_100a67448:
      FUN_100a124a8(&pppuStack_248,puVar17 + 1);
      if ((undefined8 ****)pppuStack_248 == (undefined8 ****)0x8000000000000000) {
        *puVar15 = 0x8000000000000000;
        uVar20 = 3;
      }
      else {
        uStack_8e8 = uStack_1e0;
        lStack_8f0 = lStack_1e8;
        plStack_8d8 = plStack_1d0;
        uStack_8e0 = uStack_1d8;
        plStack_8c8 = plStack_1c0;
        plStack_8d0 = plStack_1c8;
        aplStack_8c0[0] = plStack_1b8;
        lStack_928 = lStack_220;
        lStack_930 = lStack_228;
        lStack_918 = lStack_210;
        lStack_920 = lStack_218;
        plStack_908 = plStack_200;
        lStack_910 = lStack_208;
        uStack_8f8 = uStack_1f0;
        lStack_900 = lStack_1f8;
        pppuStack_948 = pppuStack_240;
        pppuStack_950 = pppuStack_248;
        pppuStack_938 = pppuStack_230;
        pppuStack_940 = pppuStack_238;
        FUN_100d714d0(puVar17 + 1);
        lVar18 = lStack_928;
        pppuVar3 = pppuStack_948;
        pppuVar1 = pppuStack_950;
        ppppuVar21 = (undefined8 ****)pppuStack_948;
        if ((undefined8 ****)pppuStack_940 != (undefined8 ****)0x0) {
          ppppuVar26 = (undefined8 ****)(pppuStack_948 + (long)pppuStack_940 * 0x29);
          ppppuVar16 = (undefined8 ****)pppuStack_948;
          do {
            while( true ) {
              _memcpy(&pppuStack_248,ppppuVar16,0x148);
              pppuStack_8b0 = pppuVar3;
              pppuStack_8a8 = ppppuVar21;
              _memcpy(&pppuStack_8a0,ppppuVar16,0x148);
              if ((lStack_828 != -0x8000000000000000) && (lStack_818 != 0)) break;
LAB_100a674f0:
              _memmove(ppppuVar21,&pppuStack_248,0x148);
              ppppuVar21 = ppppuVar21 + 0x29;
              ppppuVar16 = ppppuVar16 + 0x29;
              if (ppppuVar16 == ppppuVar26) goto LAB_100a67588;
            }
            lVar13 = lStack_818;
            pcVar23 = pcStack_820;
            if (*(char *)(puVar17 + 0xbe) != '\x03') {
              do {
                if (lVar13 == 0) goto LAB_100a67554;
                cVar4 = *pcVar23;
                lVar13 = lVar13 + -1;
                pcVar23 = pcVar23 + 1;
              } while (cVar4 != *(char *)(puVar17 + 0xbe));
              goto LAB_100a674f0;
            }
LAB_100a67554:
            FUN_100e0c08c(&pppuStack_8a0);
            ppppuVar16 = ppppuVar16 + 0x29;
          } while (ppppuVar16 != ppppuVar26);
        }
LAB_100a67588:
        lVar19 = ((ulong)((long)ppppuVar21 - (long)pppuVar3) >> 3) * -0x7063e7063e7063e7;
        pppuStack_270 = pppuVar1;
        pppuStack_268 = pppuVar3;
        __ZN17codex_core_skills12config_rules28resolve_disabled_skill_paths17h74cd0599c7494338E
                  (&uStack_2f0,pppuVar3,lVar19,*puVar17);
        lVar13 = lStack_930;
        pppuStack_2b8 = pppuStack_268;
        pppuStack_2c0 = pppuStack_270;
        uStack_2a0 = uStack_2e8;
        uStack_2a8 = uStack_2f0;
        uStack_290 = uStack_2d8;
        uStack_298 = uStack_2e0;
        uStack_280 = uStack_2c8;
        uStack_288 = uStack_2d0;
        lStack_2b0 = lVar19;
        if (lStack_928 != 0) {
          puVar24 = (undefined8 *)(lStack_930 + 0x20);
          lVar19 = lStack_928;
          do {
            if (puVar24[-4] != 0) {
              _free(puVar24[-3]);
            }
            if (puVar24[-1] != 0) {
              _free(*puVar24);
            }
            puVar24 = puVar24 + 6;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        if ((undefined8 ****)pppuStack_938 != (undefined8 ****)0x0) {
          _free(lVar13);
        }
        lVar13 = lStack_900;
        if (lStack_900 != 0) {
          if (lStack_8f0 != 0) {
            plVar25 = plStack_908 + 1;
            lVar19 = *plStack_908;
            uVar27 = CONCAT17(-(-1 < lVar19),
                              CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                     0x8080808080808080;
            plVar8 = plStack_908;
            lVar19 = lStack_8f0;
            do {
              while (uVar27 == 0) {
                lVar29 = *plVar25;
                plVar8 = plVar8 + -0x18;
                plVar25 = plVar25 + 1;
                uVar27 = CONCAT17(-(-1 < lVar29),
                                  CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar29 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar29 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar29 >> 8)),
                                                           -(-1 < (char)lVar29)))))))) &
                         0x8080808080808080;
              }
              uVar6 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              iVar7 = (int)((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
              if (plVar8[(long)-iVar7 * 3 + -3] != 0) {
                _free(plVar8[(long)-iVar7 * 3 + -2]);
              }
              uVar27 = uVar27 - 1 & uVar27;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          if (lVar13 * 0x19 != -0x21) {
            _free(plStack_908 + lVar13 * -3 + -3);
          }
        }
        lVar13 = lStack_918;
        if (lStack_910 != 0) {
          puVar24 = (undefined8 *)(lStack_918 + 8);
          lVar19 = lStack_910;
          do {
            if (puVar24[-1] != 0) {
              _free(*puVar24);
            }
            puVar24 = puVar24 + 3;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        if (lStack_920 != 0) {
          _free(lVar13);
        }
        lVar13 = *plStack_8d8;
        *plStack_8d8 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h516dbdaead00933fE(&plStack_8d8);
        }
        lVar13 = *plStack_8d0;
        *plStack_8d0 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbcd0bfd41f3bc2f3E(&plStack_8d0);
        }
        lVar13 = *plStack_8c8;
        *plStack_8c8 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he0920bb38ad281d7E(&plStack_8c8);
        }
        lVar13 = *aplStack_8c0[0];
        *aplStack_8c0[0] = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he0920bb38ad281d7E(aplStack_8c0);
        }
        puVar15[5] = uStack_298;
        puVar15[4] = uStack_2a0;
        puVar15[7] = uStack_288;
        puVar15[6] = uStack_290;
        puVar15[8] = uStack_280;
        puVar15[1] = pppuStack_2b8;
        *puVar15 = pppuStack_2c0;
        puVar15[3] = uStack_2a8;
        puVar15[2] = lStack_2b0;
        uVar20 = 1;
        *(bool *)(puVar15 + 9) = lVar18 != 0;
      }
      *(undefined1 *)((long)puVar17 + 0x5f2) = uVar20;
      return;
    }
    uVar14 = *param_2;
    uVar2 = param_2[1];
    __ZN18codex_core_plugins8manifest20load_plugin_manifest17hf558c55998e288a4E
              (param_2 + 3,uVar14,uVar2);
    if (param_2[3] == 3) {
      __ZN18codex_core_plugins6loader24default_app_config_paths17h8b7430bf74baf8e1E
                (&lStack_78,uVar14,uVar2);
      param_2[4] = lStack_70;
      param_2[3] = lStack_78;
      param_2[5] = lStack_68;
      param_2[6] = uVar14;
      param_2[7] = uVar2;
      *(undefined1 *)(param_2 + 0x21) = 0;
      goto LAB_100a6707c;
    }
    _memcpy(param_2 + 0x46,param_2 + 3,0x218);
    __ZN18codex_core_plugins6loader23plugin_app_config_paths17hd6e04f7754fc6a2bE
              (&lStack_78,uVar14,uVar2,param_2 + 0x46);
    param_2[0x8a] = lStack_70;
    param_2[0x89] = lStack_78;
    param_2[0x8b] = lStack_68;
    param_2[0x8c] = uVar14;
    param_2[0x8d] = uVar2;
    *(undefined1 *)(param_2 + 0xa7) = 0;
LAB_100a67110:
    FUN_100a67a18(&lStack_78,param_2 + 0x89,param_3);
    if (lStack_78 == -0x8000000000000000) {
      *param_1 = -0x8000000000000000;
      uVar20 = 3;
      goto LAB_100a67170;
    }
    lStack_58 = lStack_70;
    lStack_60 = lStack_78;
    lStack_50 = lStack_68;
    FUN_100e86c44(param_2 + 0x89);
    func_0x000100e1ca08(param_2 + 0x46);
  }
  else {
    if (bVar5 == 3) goto LAB_100a67110;
LAB_100a6707c:
    FUN_100a67a18(&lStack_78,param_2 + 3,param_3);
    if (lStack_78 == -0x8000000000000000) {
      *param_1 = -0x8000000000000000;
      uVar20 = 4;
      goto LAB_100a67170;
    }
    lStack_58 = lStack_70;
    lStack_60 = lStack_78;
    lStack_50 = lStack_68;
    FUN_100e86c44(param_2 + 3);
  }
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  uVar20 = 1;
LAB_100a67170:
  *(undefined1 *)(param_2 + 2) = uVar20;
  return;
}

