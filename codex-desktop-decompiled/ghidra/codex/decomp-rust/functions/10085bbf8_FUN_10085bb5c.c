
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085bb5c(long *param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  long extraout_x1;
  long *plVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  uint uVar17;
  long unaff_x21;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  uint unaff_w22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long unaff_x23;
  undefined8 *puVar24;
  long unaff_x24;
  long lVar25;
  long lVar26;
  undefined8 **ppuVar27;
  undefined8 *unaff_x27;
  long lVar28;
  long unaff_x28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  long lStack_e08;
  long lStack_e00;
  long lStack_df8;
  undefined8 **ppuStack_df0;
  undefined *puStack_de8;
  ulong uStack_de0;
  long *plStack_dd8;
  ulong uStack_dd0;
  long *plStack_dc8;
  long lStack_dc0;
  long lStack_db8;
  undefined8 uStack_db0;
  undefined8 **ppuStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 *puStack_d90;
  undefined8 *puStack_d88;
  ulong uStack_d10;
  ulong uStack_d08;
  ulong uStack_cf8;
  ulong uStack_cf0;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  ulong uStack_cc0;
  ulong uStack_cb8;
  undefined8 uStack_cb0;
  ulong uStack_ca8;
  ulong uStack_ca0;
  byte bStack_c98;
  undefined1 uStack_c97;
  char cStack_c96;
  undefined5 uStack_c95;
  undefined *puStack_c28;
  undefined *puStack_c20;
  undefined1 auStack_850 [16];
  long lStack_840;
  undefined8 *puStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7e0 [872];
  undefined1 auStack_478 [872];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 auStack_80 [16];
  
  bVar1 = *(byte *)(param_2 + 0x99);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      uVar21 = FUN_107c05cc0(&UNK_10b223ad0);
      if (*(long *)(unaff_x23 + 8) != 0) {
        _free(0);
      }
      _free();
      FUN_100de8a5c(param_2 + 0x1e);
      FUN_100de2268(param_2 + 4);
      *(undefined1 *)(param_2 + 0x99) = 2;
      __Unwind_Resume(uVar21);
      FUN_107c05ccc();
      FUN_107c05ccc();
      auVar29 = FUN_107c05ccc();
      puVar19 = auVar29._8_8_;
      puVar18 = auVar29._0_8_;
      bVar1 = *(byte *)((long)puVar19 + 0x59);
      if (bVar1 < 3) {
        if (bVar1 != 0) {
          lVar7 = param_3;
          if (bVar1 == 1) {
            FUN_107c05cc0(&UNK_10b223b00);
          }
          uVar21 = FUN_107c05cc4();
          if (unaff_x24 != 0) {
            _free(uStack_cb8);
          }
          if (unaff_x23 != 0) {
            _free();
          }
          if (uStack_d10 != 0) {
            _free(uStack_d08);
          }
          if (&stack0x00000000 != (undefined1 *)0x850) {
            _free(param_3);
          }
          if (puVar19[7] != 0) {
            _free(puVar19[8]);
          }
          if (((*(byte *)(puVar19 + 0xb) & 1) != 0) && (puVar19[4] != 0)) {
            _free(puVar19[5]);
            *(undefined2 *)(puVar19 + 0xb) = 0x200;
            uVar21 = __Unwind_Resume(uVar21);
            FUN_100e86ecc(puVar19 + 0xc);
          }
          *(undefined2 *)(puVar19 + 0xb) = 0x200;
          __Unwind_Resume(uVar21);
          auVar29 = FUN_107c05ccc();
          plVar11 = auVar29._8_8_;
          puVar18 = auVar29._0_8_;
          lVar26 = 8;
          lStack_e08 = 0;
          lStack_e00 = 8;
          lStack_df8 = 0;
          if (plVar11 == (long *)0x0) {
            lVar20 = 0;
            goto joined_r0x00010085c8fc;
          }
          plStack_dd8 = (long *)*plVar11;
          lStack_dc0 = (long)plStack_dd8 + plVar11[1] + 1;
          plStack_dc8 = plStack_dd8 + 1;
          lVar26 = *plStack_dd8;
          uStack_dd0 = CONCAT17(-(-1 < lVar26),
                                CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar26 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8)),
                                                           -(-1 < (char)lVar26)))))))) &
                       0x8080808080808080;
          lStack_db8 = plVar11[3];
          FUN_10068cabc(&ppuStack_df0,&plStack_dd8);
          puVar2 = puStack_de8;
          ppuStack_da8 = &puStack_d90;
          if (uStack_de0 < 2) {
            if (uStack_de0 != 0) goto LAB_10085ca10;
            lVar26 = 8;
            lVar20 = 0;
            ppuVar27 = ppuStack_df0;
          }
          else {
            if (uStack_de0 < 0x15) {
              FUN_100e9492c(puStack_de8,uStack_de0);
            }
            else {
              __ZN4core5slice4sort6stable14driftsort_main17h4e64b4c67cbd7879E
                        (puStack_de8,uStack_de0,&ppuStack_da8);
            }
LAB_10085ca10:
            ppuVar27 = ppuStack_df0;
            FUN_108855060(&lStack_e08,0,uStack_de0,8,0x18);
            lVar26 = lStack_e00;
            lVar28 = 0;
            lVar25 = lStack_df8 * 0x18;
            lVar20 = lStack_df8;
            do {
              uStack_db0 = *(undefined8 *)(puVar2 + lVar28);
              puStack_d90 = &uStack_db0;
              puStack_d88 = (undefined8 *)&DAT_100c7b524;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&ppuStack_da8,s________108ac942d,&puStack_d90);
              puVar19 = (undefined8 *)(lVar26 + lVar25);
              puVar19[1] = uStack_da0;
              *puVar19 = ppuStack_da8;
              puVar19[2] = uStack_d98;
              lVar20 = lVar20 + 1;
              lVar25 = lVar25 + 0x18;
              lVar28 = lVar28 + 0x10;
            } while (uStack_de0 * 0x10 - lVar28 != 0);
          }
          lStack_df8 = lVar20;
          if (ppuVar27 != (undefined8 **)0x0) {
            _free(puVar2);
          }
joined_r0x00010085c8fc:
          lVar25 = lStack_e00;
          lVar28 = lStack_df8;
          if (param_4 != 0) {
            if ((ulong)(lStack_e08 - lVar20) < param_4) {
              FUN_108855060(&lStack_e08,lVar20,param_4,8,0x18);
              lVar20 = lStack_df8;
              lVar26 = lStack_e00;
            }
            puVar19 = (undefined8 *)(lVar26 + lVar20 * 0x18);
            puVar23 = (undefined8 *)(lVar7 + 0x10);
            do {
              puStack_d88 = (undefined8 *)puVar23[1];
              puStack_d90 = (undefined8 *)*puVar23;
              if (puVar23[-2] != -0x8000000000000000) {
                puStack_d88 = (undefined8 *)*puVar23;
                puStack_d90 = (undefined8 *)puVar23[-1];
              }
              puStack_de8 = &DAT_100c7b3a0;
              ppuStack_df0 = &puStack_d90;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&ppuStack_da8,s________108ac942d,&ppuStack_df0);
              puVar19[2] = uStack_d98;
              puVar19[1] = uStack_da0;
              *puVar19 = ppuStack_da8;
              lVar20 = lVar20 + 1;
              param_4 = param_4 - 1;
              puVar19 = puVar19 + 3;
              puVar23 = puVar23 + 6;
              lVar25 = lStack_e00;
              lVar28 = lVar20;
            } while (param_4 != 0);
          }
          lStack_df8 = lVar28;
          lStack_e00 = lVar25;
          if (lVar20 == 0) {
            puVar10 = (undefined1 *)_malloc(1);
            if (puVar10 == (undefined1 *)0x0) {
              func_0x0001087c9084(1,1);
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x10085caa8);
              (*pcVar16)();
            }
            *puVar10 = 0x2d;
            *puVar18 = 1;
            puVar18[1] = puVar10;
            puVar18[2] = 1;
            lVar25 = lStack_e00;
          }
          else {
            FUN_100f3f514(&ppuStack_da8,lVar25,lVar20,&UNK_108ca7fce,2);
            puVar18[1] = uStack_da0;
            *puVar18 = ppuStack_da8;
            puVar18[2] = uStack_d98;
            puVar18 = (undefined8 *)(lVar25 + 8);
            do {
              if (puVar18[-1] != 0) {
                _free(*puVar18);
              }
              puVar18 = puVar18 + 3;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (lStack_e08 != 0) {
            _free(lVar25);
          }
          return;
        }
        *(undefined1 *)(puVar19 + 0xb) = 0;
        *puVar19 = puVar19[2];
        puVar19[1] = puVar19[3];
        puVar19[0xc] = puVar19[2];
        puVar19[0xd] = puVar19[3];
        puVar19[0xe] = puVar19[10];
        *(undefined1 *)(puVar19 + 0x12) = 0;
LAB_10085c140:
        FUN_10085b404(&uStack_ca8,puVar19 + 0xc,param_3);
        uVar4 = uStack_ca0;
        uVar8 = uStack_ca8;
        if (uStack_ca8 == 0x8000000000000001) {
          *puVar18 = 0x8000000000000001;
          uVar13 = 3;
          goto LAB_10085c488;
        }
        uVar21 = CONCAT53(uStack_c95,CONCAT12(cStack_c96,CONCAT11(uStack_c97,bStack_c98)));
        if (*(char *)(puVar19 + 0x12) == '\x03') {
          uVar22 = puVar19[0x13];
          puVar23 = (undefined8 *)puVar19[0x14];
          pcVar16 = (code *)*puVar23;
          if (pcVar16 != (code *)0x0) {
            (*pcVar16)(uVar22);
          }
          if (puVar23[1] != 0) goto LAB_10085c1ec;
        }
        else if ((*(char *)(puVar19 + 0x12) == '\x04') &&
                (FUN_100cab34c(puVar19 + 0x16), puVar19[0x13] != 0)) {
          uVar22 = puVar19[0x14];
LAB_10085c1ec:
          _free(uVar22);
        }
        if (uVar8 != 0x8000000000000000) {
          *(undefined1 *)(puVar19 + 0xb) = 1;
          puVar19[4] = uVar8;
          puVar19[6] = uVar21;
          puVar19[5] = uVar4;
          uVar21 = puVar19[5];
          uVar22 = puVar19[6];
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&uStack_cc0,&UNK_108cde3c0,4);
          uVar8 = uStack_cb8;
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&uStack_ca8,uStack_cb8,uStack_cb0,uVar21,uVar22);
          puVar19[8] = uStack_ca0;
          puVar19[7] = uStack_ca8;
          puVar19[9] = CONCAT53(uStack_c95,CONCAT12(cStack_c96,CONCAT11(uStack_c97,bStack_c98)));
          if (uStack_cc0 != 0) {
            _free(uVar8);
          }
          auVar29 = (**(code **)(puVar19[1] + 0x38))(*puVar19,puVar19 + 7,0);
          *(undefined1 (*) [16])(puVar19 + 0xc) = auVar29;
LAB_10085c284:
          (**(code **)(auVar29._8_8_ + 0x18))(&uStack_ca8,auVar29._0_8_,param_3);
          cVar12 = cStack_c96;
          bVar1 = bStack_c98;
          uVar8 = uStack_ca8;
          if (cStack_c96 == '\x03') {
            *puVar18 = 0x8000000000000001;
            uVar13 = 4;
            goto LAB_10085c488;
          }
          uVar21 = puVar19[0xc];
          puVar23 = (undefined8 *)puVar19[0xd];
          pcVar16 = (code *)*puVar23;
          if (pcVar16 != (code *)0x0) {
            (*pcVar16)(uVar21);
          }
          if (puVar23[1] != 0) {
            _free(uVar21);
          }
          if (cVar12 == '\x02') {
            if ((uVar8 & 3) == 1) {
              puVar23 = (undefined8 *)(uVar8 - 1);
              uVar21 = *puVar23;
              puVar24 = *(undefined8 **)(uVar8 + 7);
              pcVar16 = (code *)*puVar24;
              if (pcVar16 != (code *)0x0) {
                (*pcVar16)(uVar21);
              }
              if (puVar24[1] != 0) {
                _free(uVar21);
              }
              goto LAB_10085c38c;
            }
            goto LAB_10085c390;
          }
          if ((bVar1 & 1) == 0) {
            auVar29 = (**(code **)(puVar19[1] + 0x20))(*puVar19,puVar19 + 7,0);
            *(undefined1 (*) [16])(puVar19 + 0xc) = auVar29;
            goto LAB_10085c1a4;
          }
          *(undefined1 *)(puVar19 + 0xb) = 0;
          uStack_cd8 = puVar19[5];
          uStack_ce0 = puVar19[4];
          uStack_cd0 = puVar19[6];
          goto LAB_10085c444;
        }
        uStack_ce0 = 0x8000000000000000;
      }
      else {
        if (bVar1 == 3) goto LAB_10085c140;
        if (bVar1 == 4) {
          auVar29 = *(undefined1 (*) [16])(puVar19 + 0xc);
          goto LAB_10085c284;
        }
        auVar29 = *(undefined1 (*) [16])(puVar19 + 0xc);
LAB_10085c1a4:
        (**(code **)(auVar29._8_8_ + 0x18))(&uStack_ca8,auVar29._0_8_,param_3);
        uVar4 = uStack_ca0;
        uVar8 = uStack_ca8;
        if (uStack_ca8 == 0x8000000000000001) {
          *puVar18 = 0x8000000000000001;
          uVar13 = 5;
          goto LAB_10085c488;
        }
        uVar22 = CONCAT53(uStack_c95,CONCAT12(cStack_c96,CONCAT11(uStack_c97,bStack_c98)));
        uVar21 = puVar19[0xc];
        puVar23 = (undefined8 *)puVar19[0xd];
        pcVar16 = (code *)*puVar23;
        if (pcVar16 != (code *)0x0) {
          (*pcVar16)(uVar21);
        }
        if (puVar23[1] != 0) {
          _free(uVar21);
        }
        if (uVar8 == 0x8000000000000000) {
          if ((uVar4 & 3) == 1) {
            puVar23 = (undefined8 *)(uVar4 - 1);
            uVar21 = *puVar23;
            puVar24 = *(undefined8 **)(uVar4 + 7);
            pcVar16 = (code *)*puVar24;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(uVar21);
            }
            if (puVar24[1] != 0) {
              _free(uVar21);
            }
LAB_10085c38c:
            _free(puVar23);
          }
LAB_10085c390:
          uStack_ce0 = 0x8000000000000000;
LAB_10085c444:
          if (puVar19[7] != 0) {
            _free(puVar19[8]);
          }
          if (*(char *)(puVar19 + 0xb) != '\x01') goto LAB_10085c470;
        }
        else {
          auVar29 = FUN_100e8d6f8(uVar4,uVar22);
          puVar9 = auVar29._0_8_;
          if (auVar29._8_8_ < 7) {
LAB_10085c430:
            uStack_ce0 = 0x8000000000000000;
LAB_10085c438:
            if (uVar8 != 0) {
              _free(uVar4);
            }
            goto LAB_10085c444;
          }
          uVar14 = 0x67697464;
          uVar17 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
          uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
          if (uVar17 == 0x67697464) {
            uVar14 = 0x6469723a;
            uVar17 = (*(uint *)((long)puVar9 + 3) & 0xff00ff00) >> 8 |
                     (*(uint *)((long)puVar9 + 3) & 0xff00ff) << 8;
            uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
            if (uVar17 != 0x6469723a) goto LAB_10085c420;
            iVar15 = 0;
          }
          else {
LAB_10085c420:
            iVar15 = 1;
            if (uVar14 < uVar17) {
              iVar15 = -1;
            }
          }
          if ((iVar15 != 0) || (FUN_100e8d6f8((long)puVar9 + 7,auVar29._8_8_ - 7), extraout_x1 == 0)
             ) goto LAB_10085c430;
          uVar21 = puVar19[5];
          uVar22 = puVar19[6];
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&uStack_cc0);
          uVar3 = uStack_cb8;
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&uStack_ca8,uStack_cb8,uStack_cb0,uVar21,uVar22);
          uStack_d08 = uStack_ca0;
          uStack_d10 = uStack_ca8;
          if (uStack_cc0 != 0) {
            _free(uVar3);
          }
          func_0x0001055614c0(&uStack_ca8,&uStack_d10);
          uVar5 = uStack_ca0;
          uVar3 = uStack_ca8;
          if (uStack_ca8 == 0x8000000000000000) {
            uStack_ce0 = 0x8000000000000000;
LAB_10085c580:
            if (uStack_d10 != 0) {
              _free(uStack_d08);
            }
            goto LAB_10085c438;
          }
          uStack_cf0 = uStack_ca0;
          uStack_cf8 = uStack_ca8;
          auVar29 = __ZN3std4path4Path9file_name17h4ab5db2cd370dd44E
                              (uStack_ca0,
                               CONCAT53(uStack_c95,
                                        CONCAT12(cStack_c96,CONCAT11(uStack_c97,bStack_c98))));
          plVar11 = auVar29._0_8_;
          if ((((plVar11 == (long *)0x0) || (auVar29._8_8_ != 9)) ||
              (*plVar11 != 0x656572746b726f77 || (char)plVar11[1] != 's')) ||
             (func_0x0001055614c0(&uStack_ca8,&uStack_cf8), uStack_ca8 == 0x8000000000000000)) {
            uStack_ce0 = 0x8000000000000000;
            if (uVar3 != 0) {
              _free(uVar5);
            }
            goto LAB_10085c580;
          }
          uStack_cb8 = uStack_ca0;
          uStack_cc0 = uStack_ca8;
          func_0x0001055614c0(&uStack_ce0,&uStack_cc0);
          if (uStack_ca8 != 0) {
            _free(uStack_cb8);
          }
          if (uVar3 != 0) {
            _free(uVar5);
          }
          if (uStack_d10 != 0) {
            _free(uStack_d08);
          }
          if (uVar8 != 0) {
            _free(uVar4);
          }
          if (puVar19[7] != 0) {
            _free(puVar19[8]);
          }
        }
        if (puVar19[4] != 0) {
          _free(puVar19[5]);
        }
      }
LAB_10085c470:
      *(undefined1 *)(puVar19 + 0xb) = 0;
      puVar18[1] = uStack_cd8;
      *puVar18 = uStack_ce0;
      puVar18[2] = uStack_cd0;
      uVar13 = 1;
LAB_10085c488:
      *(undefined1 *)((long)puVar19 + 0x59) = uVar13;
      return;
    }
    unaff_x27 = (undefined8 *)*param_2;
    lVar26 = param_2[1];
    lVar7 = param_2[2];
    lVar20 = param_2[3];
    __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E(param_2 + 4,&UNK_108cac26e,3);
    *(undefined1 *)(param_2 + 0x1d) = 0;
    __ZN3std3sys7process3env10CommandEnv3set17hb1c24f691b771ca9E
              (param_2 + 0x10,&UNK_108cb17cf,0x12,&UNK_108cb17e1,1);
    puStack_c28 = &UNK_10b223aa8;
    puStack_c20 = &DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (auStack_850,s_core_hooksPath__108ac941b,&puStack_c28);
    __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(param_2 + 4,&UNK_108cb17e2,2);
    __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
              (param_2 + 4,auStack_850._8_8_,lStack_840);
    __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(param_2 + 4,&UNK_108cb17e2,2);
    __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
              (param_2 + 4,&UNK_108cb17e4,0x14);
    if (lVar26 != 0) {
      puVar18 = unaff_x27 + lVar26 * 2;
      puVar19 = unaff_x27;
      do {
        unaff_x27 = puVar19 + 2;
        __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (param_2 + 4,*puVar19,puVar19[1]);
        puVar19 = unaff_x27;
      } while (unaff_x27 != puVar18);
    }
    __ZN3std3sys7process4unix6common7Command3cwd17h4267741f6f8380b4E(param_2 + 4,lVar7,lVar20);
    *(undefined1 *)(param_2 + 0x1d) = 1;
    if (auStack_850._0_8_ != 0) {
      _free(auStack_850._8_8_);
    }
    __ZN5tokio7process7Command6output17he0b139d844368e05E(auStack_478,param_2 + 4);
    auVar30 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
    unaff_w22 = auVar30._8_4_;
    lVar7 = auVar30._0_8_;
    unaff_x21 = lVar7 + 5;
    unaff_x28 = auStack_850._0_8_;
    if ((!SCARRY8(lVar7,5)) &&
       ((unaff_x23 = 1000000000, unaff_w22 < 1000000000 ||
        ((bVar6 = SCARRY8(unaff_x21,1), unaff_x21 = lVar7 + 6, !bVar6 &&
         (unaff_w22 = unaff_w22 + 0xc4653600, unaff_w22 != 1000000000)))))) goto LAB_10085bd18;
    __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(auStack_f0,0);
LAB_10085bd5c:
    _memcpy(auStack_7e0,auStack_478,0x368);
    uStack_808 = uStack_a8;
    uStack_810 = uStack_b0;
    lStack_7f8 = lStack_98;
    uStack_800 = uStack_a0;
    uStack_7e8 = CONCAT71(uStack_87,uStack_88);
    uStack_7f0 = CONCAT44(uStack_8c,uStack_90);
    puStack_838 = puStack_d8;
    lStack_840 = lStack_e0;
    lStack_828 = lStack_c8;
    lStack_830 = lStack_d0;
    uStack_818 = uStack_b8;
    lStack_820 = lStack_c0;
    auStack_850 = auStack_f0;
    _memcpy(&puStack_c28,auStack_850,0x3d8);
    _memcpy(param_2 + 0x1e,&puStack_c28,0x3d8);
  }
  else if (bVar1 != 3) {
    FUN_107c05cc4(&UNK_10b223ad0);
LAB_10085bd18:
    auStack_f0 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b223ab8);
    lVar7 = 0x140;
    if ((auStack_f0._0_8_ & 1) == 0) {
      lVar7 = 0x200;
    }
    auStack_80 = auStack_f0;
    if (*(int *)(auStack_f0._8_8_ + lVar7 + 0xd8) == (int)unaff_x23) {
      FUN_107c05cac(&UNK_109bebb98,0x73,&UNK_10b223ab8);
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10085bfd4);
      (*pcVar16)();
    }
    lStack_e0 = 0;
    uStack_88 = 0;
    lStack_98 = unaff_x21;
    uStack_90 = unaff_w22;
    goto LAB_10085bd5c;
  }
  lVar7 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  bVar1 = *(byte *)(lVar7 + 0x48);
  puVar18 = (undefined8 *)(ulong)bVar1;
  if (bVar1 == 1) {
LAB_10085bdfc:
    puVar18 = (undefined8 *)
              (ulong)((uint)(*(char *)(lVar7 + 0x45) != '\0') |
                     (*(byte *)(lVar7 + 0x44) ^ 0xffffffff) & 1);
  }
  else if (bVar1 != 2) {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar7,&DAT_100c35d48);
    *(undefined1 *)(lVar7 + 0x48) = 1;
    goto LAB_10085bdfc;
  }
  FUN_100fe7c78(auStack_850,param_2 + 0x2c,param_3);
  lVar7 = auStack_850._0_8_;
  if (auStack_850._0_8_ == -0x7fffffffffffffff) {
    uVar8 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                      ((uint)((uint)puVar18 == 2) | (uint)puVar18 & 1,param_2 + 0x1e,param_3);
    if ((uVar8 & 1) != 0) {
      *param_1 = -0x7fffffffffffffff;
      uVar13 = 3;
      goto LAB_10085bf94;
    }
    cVar12 = (char)param_2[0x98];
    if (cVar12 != '\x03') goto LAB_10085be8c;
LAB_10085bef0:
    FUN_100e676e8(param_2 + 0x50);
  }
  else {
    lStack_108 = lStack_820;
    lStack_110 = lStack_828;
    cVar12 = (char)param_2[0x98];
    puVar18 = (undefined8 *)auStack_850._8_8_;
    param_3 = lStack_830;
    unaff_x27 = puStack_838;
    unaff_x28 = lStack_840;
    if (cVar12 == '\x03') goto LAB_10085bef0;
LAB_10085be8c:
    if (cVar12 == '\0') {
      if (param_2[0x2c] == 3) {
        uVar8 = param_2[0x2d];
        if ((uVar8 & 3) == 1) {
          uVar21 = *(undefined8 *)(uVar8 - 1);
          puVar19 = *(undefined8 **)(uVar8 + 7);
          pcVar16 = (code *)*puVar19;
          if (pcVar16 != (code *)0x0) {
            (*pcVar16)(uVar21);
          }
          if (puVar19[1] != 0) {
            _free(uVar21);
          }
          _free((undefined8 *)(uVar8 - 1));
        }
      }
      else {
        FUN_100de2564(param_2 + 0x2c);
      }
    }
  }
  FUN_100de8a5c(param_2 + 0x1e);
  if (lVar7 < -0x7ffffffffffffffe) {
    puVar19 = puVar18;
    if ((lVar7 == -0x8000000000000000) && (((ulong)puVar18 & 3) == 1)) {
      puVar19 = (undefined8 *)((long)puVar18 - 1);
      uVar21 = *puVar19;
      puVar18 = *(undefined8 **)((long)puVar18 + 7);
      pcVar16 = (code *)*puVar18;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar21);
      }
      if (puVar18[1] != 0) {
        _free(uVar21);
      }
      _free(puVar19);
    }
    lVar7 = -0x8000000000000000;
    puVar18 = puVar19;
  }
  else {
    lStack_f8 = lStack_108;
    lStack_100 = lStack_110;
  }
  FUN_100de2268(param_2 + 4);
  *param_1 = lVar7;
  param_1[1] = (long)puVar18;
  param_1[2] = unaff_x28;
  param_1[3] = (long)unaff_x27;
  param_1[4] = param_3;
  param_1[6] = lStack_f8;
  param_1[5] = lStack_100;
  uVar13 = 1;
LAB_10085bf94:
  *(undefined1 *)(param_2 + 0x99) = uVar13;
  return;
}

