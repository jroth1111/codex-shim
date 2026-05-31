
/* WARNING: Removing unreachable block (ram,0x0001006cc0cc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cb098(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined4 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  ulong ******ppppppuVar21;
  byte bVar22;
  undefined8 uVar23;
  ulong *******pppppppuVar24;
  undefined8 uVar25;
  code *unaff_x23;
  long *plVar26;
  ulong *******pppppppuVar27;
  long lVar28;
  uint uVar29;
  undefined8 *unaff_x25;
  undefined8 *puVar30;
  long lVar31;
  ulong *******pppppppuVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  ulong uStack_990;
  undefined8 *puStack_988;
  long lStack_980;
  code *pcStack_978;
  long lStack_970;
  long lStack_968;
  long lStack_960;
  long lStack_958;
  long lStack_950;
  long lStack_948;
  long lStack_940;
  long lStack_938;
  long lStack_930;
  long lStack_928;
  long lStack_920;
  long lStack_918;
  long lStack_910;
  long lStack_908;
  long lStack_900;
  long lStack_8f8;
  ulong *******pppppppuStack_8f0;
  code *pcStack_8e8;
  ulong *******pppppppuStack_8e0;
  undefined1 auStack_640 [16];
  ulong *******pppppppuStack_630;
  code *pcStack_628;
  ulong *******pppppppuStack_620;
  long lStack_618;
  ulong uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [576];
  ulong *******pppppppuStack_390;
  code *pcStack_388;
  ulong *******pppppppuStack_380;
  long lStack_378;
  ulong uStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 uStack_158;
  ulong *******pppppppuStack_150;
  code *pcStack_148;
  ulong *******pppppppuStack_140;
  long lStack_138;
  ulong uStack_130;
  code *apcStack_120 [2];
  code *pcStack_110;
  ulong *******pppppppuStack_108;
  undefined1 auStack_f8 [16];
  ulong *******pppppppuStack_e8;
  code *pcStack_e0;
  ulong *******pppppppuStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 auStack_88 [16];
  undefined1 auStack_71 [17];
  
  bVar22 = *(byte *)((long)param_2 + 0x1f9);
  if (bVar22 < 3) {
    if (bVar22 != 0) {
      if (bVar22 == 1) {
        FUN_107c05cc0(&UNK_10b21dee0);
      }
      FUN_107c05cc4();
LAB_1006cc18c:
      FUN_107c05cc0(&UNK_10b23acd8);
      goto LAB_1006cc1a8;
    }
    *(undefined1 *)(param_2 + 0x3f) = 0;
    lVar28 = param_2[0x3d];
    param_2[0x3a] = param_2[0x3e];
    unaff_x25 = (undefined8 *)param_2[0x36];
    lVar19 = param_2[0x37];
    lVar31 = param_2[0x38];
    lVar1 = param_2[0x39];
    __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(auStack_640);
    iVar11 = (int)auStack_640._0_4_ >> 0xd;
    iVar18 = iVar11 + -1;
    if (iVar11 < 1) {
      iVar11 = (1U - iVar11) / 400 + 1;
      iVar18 = iVar18 + iVar11 * 400;
      iVar11 = iVar11 * -0x23ab1;
    }
    else {
      iVar11 = 0;
    }
    param_2[0x3b] =
         ((ulong)auStack_640._0_8_ >> 0x20) +
         (long)(int)(((((uint)auStack_640._0_4_ >> 4 & 0x1ff) + iVar11 + -0xaf93b) - iVar18 / 100) +
                     (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180;
    auVar35 = func_0x000106032954(8);
    *(undefined1 (*) [12])(param_2 + 8) = auVar35;
    __ZN11codex_hooks6engine14command_runner13build_command17h2dd45f5e7378b070E
              (param_2 + 10,lVar28,param_2[0x3a]);
    __ZN3std3sys7process4unix6common7Command3cwd17h4267741f6f8380b4E(param_2 + 10,lVar31,lVar1);
    if ((int)param_2[0x13] == 3) {
      _close(*(undefined4 *)((long)param_2 + 0x9c));
      *(undefined4 *)(param_2 + 0x13) = 2;
      if ((int)param_2[0x14] != 3) goto LAB_1006cb218;
LAB_1006cb28c:
      _close(*(undefined4 *)((long)param_2 + 0xa4));
      *(undefined4 *)(param_2 + 0x14) = 2;
      iVar11 = (int)param_2[0x15];
    }
    else {
      *(undefined4 *)(param_2 + 0x13) = 2;
      if ((int)param_2[0x14] == 3) goto LAB_1006cb28c;
LAB_1006cb218:
      *(undefined4 *)(param_2 + 0x14) = 2;
      iVar11 = (int)param_2[0x15];
    }
    if (iVar11 == 3) {
      _close(*(undefined4 *)((long)param_2 + 0xac));
    }
    *(undefined4 *)(param_2 + 0x15) = 2;
    *(undefined1 *)(param_2 + 0x23) = 1;
    func_0x0001060339f8(auStack_640,param_2 + 10,0,1);
    if (auStack_640._0_4_ == 2) {
      lStack_980 = 3;
      pcVar8 = (code *)auStack_640._8_8_;
    }
    else {
      pppppppuStack_8f0 = (ulong *******)auStack_640._0_8_;
      pcStack_8e8 = (code *)auStack_640._8_8_;
      pppppppuStack_8e0 = pppppppuStack_630;
      __ZN5tokio7process7Command11build_child17h16d9f1b0d2e64326E
                (&lStack_980,param_2 + 10,&pppppppuStack_8f0);
      pcVar8 = pcStack_978;
      if (lStack_980 != 3) {
        param_2[0x31] = lStack_918;
        param_2[0x30] = lStack_920;
        param_2[0x33] = lStack_908;
        param_2[0x32] = lStack_910;
        param_2[0x35] = lStack_8f8;
        param_2[0x34] = lStack_900;
        param_2[0x29] = lStack_958;
        param_2[0x28] = lStack_960;
        param_2[0x2b] = lStack_948;
        param_2[0x2a] = lStack_950;
        param_2[0x2d] = lStack_938;
        param_2[0x2c] = lStack_940;
        param_2[0x2f] = lStack_928;
        param_2[0x2e] = lStack_930;
        param_2[0x25] = (long)pcStack_978;
        param_2[0x24] = lStack_980;
        param_2[0x27] = lStack_968;
        param_2[0x26] = lStack_970;
        *(undefined1 *)(param_2 + 0x3f) = 1;
        param_2[1] = (long)pcStack_978;
        *param_2 = lStack_980;
        param_2[3] = lStack_968;
        param_2[2] = lStack_970;
        param_2[0x24] = 2;
        if (*param_2 != 2) {
          param_2[5] = (long)pcStack_978;
          param_2[4] = lStack_980;
          param_2[7] = lStack_968;
          param_2[6] = lStack_970;
          param_2[0x40] = (long)(param_2 + 4);
          param_2[0x41] = (long)unaff_x25;
          param_2[0x42] = lVar19;
          goto LAB_1006cb4fc;
        }
LAB_1006cb644:
        lVar19 = *(long *)(param_2[0x3a] + 0x90);
        *(undefined1 *)(param_2 + 0x3f) = 0;
        lStack_328 = param_2[0x31];
        lStack_330 = param_2[0x30];
        lStack_318 = param_2[0x33];
        lStack_320 = param_2[0x32];
        lStack_308 = param_2[0x35];
        lStack_310 = param_2[0x34];
        lStack_368 = param_2[0x29];
        uStack_370 = param_2[0x28];
        lStack_358 = param_2[0x2b];
        lStack_360 = param_2[0x2a];
        lStack_348 = param_2[0x2d];
        lStack_350 = param_2[0x2c];
        lStack_338 = param_2[0x2f];
        lStack_340 = param_2[0x2e];
        pcStack_388 = (code *)param_2[0x25];
        pppppppuStack_390 = (ulong *******)param_2[0x24];
        lStack_378 = param_2[0x27];
        pppppppuStack_380 = (ulong *******)param_2[0x26];
        uStack_158 = 0;
        auVar35 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
        uVar29 = auVar35._8_4_;
        unaff_x23 = (code *)(auVar35._0_8_ + lVar19);
        if ((lVar19 < 0 != SCARRY8(auVar35._0_8_,lVar19)) ||
           ((999999999 < uVar29 &&
            ((bVar9 = SCARRY8((long)unaff_x23,1), unaff_x23 = unaff_x23 + 1, bVar9 ||
             (uVar29 = uVar29 + 0xc4653600, uVar29 == 1000000000)))))) {
          __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(auStack_f8,0);
          auVar34._8_8_ = auStack_f8._8_8_;
          auVar34._0_8_ = auStack_f8._0_8_;
        }
        else {
          auVar34 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b21def8);
          lVar19 = 0x140;
          if ((auVar34._0_8_ & 1) == 0) {
            lVar19 = 0x200;
          }
          auStack_88 = auVar34;
          if (*(int *)(auVar34._8_8_ + lVar19 + 0xd8) == 1000000000) {
            FUN_107c05cac(&UNK_109bebb98,0x73,&UNK_10b21def8);
            goto LAB_1006cc1a8;
          }
          pppppppuStack_e8 = (ulong *******)0x0;
          uStack_90 = 0;
          pcStack_a0 = unaff_x23;
          uStack_98 = uVar29;
        }
        auStack_f8 = auVar34;
        _memcpy(auStack_5d0,&pppppppuStack_390,0x240);
        uStack_5f8 = uStack_b0;
        uStack_600 = uStack_b8;
        pcStack_5e8 = pcStack_a0;
        uStack_5f0 = uStack_a8;
        uStack_5d8 = CONCAT71(uStack_8f,uStack_90);
        uStack_5e0 = CONCAT44(uStack_94,uStack_98);
        pcStack_628 = pcStack_e0;
        pppppppuStack_630 = pppppppuStack_e8;
        lStack_618 = lStack_d0;
        pppppppuStack_620 = pppppppuStack_d8;
        uStack_608 = uStack_c0;
        uStack_610 = uStack_c8;
        auStack_640 = auStack_f8;
        _memcpy(&pppppppuStack_8f0,auStack_640,0x2b0);
        _memcpy(param_2 + 0x40,&pppppppuStack_8f0,0x2b0);
        goto LAB_1006cb788;
      }
    }
    puStack_988 = (undefined8 *)param_2[0x3b];
    auStack_88._0_8_ = pcVar8;
    __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(auStack_f8);
    uVar7 = auStack_f8._0_4_;
    iVar11 = (int)auStack_f8._0_4_ >> 0xd;
    iVar18 = iVar11 + -1;
    if (iVar11 < 1) {
      iVar11 = (1U - iVar11) / 400 + 1;
      iVar18 = iVar18 + iVar11 * 400;
      iVar11 = iVar11 * -0x23ab1;
    }
    else {
      iVar11 = 0;
    }
    uVar17 = (ulong)auStack_f8._0_8_ >> 0x20;
    auVar35 = func_0x000106032954(8);
    pppppppuStack_390 = auVar35._0_8_;
    pppppppuStack_8f0 = (ulong *******)param_2[8];
    pcStack_388 = (code *)CONCAT44(pcStack_388._4_4_,auVar35._8_4_);
    pcStack_8e8 = (code *)CONCAT44(pcStack_8e8._4_4_,(int)param_2[9]);
    func_0x000106032878(auStack_640,&pppppppuStack_390,&pppppppuStack_8f0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auStack_640._8_8_;
    lVar19 = SUB168(auVar2 * ZEXT816(1000),8);
    uVar13 = auStack_640._8_8_ * 1000 + (ulong)(uint)pppppppuStack_630 / 1000000;
    if (CARRY8(auStack_640._8_8_ * 1000,(ulong)(uint)pppppppuStack_630 / 1000000)) {
      lVar19 = lVar19 + 1;
    }
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (lVar19 != 0) {
      uVar13 = 0x7fffffffffffffff;
    }
    uStack_990 = 0;
    if (auStack_640._0_4_ == 0) {
      uStack_990 = uVar13;
    }
    pppppppuStack_8f0 = (ulong *******)0x0;
    pcStack_8e8 = (code *)0x1;
    pppppppuStack_8e0 = (ulong *******)0x0;
    pppppppuStack_630 = (ulong *******)0x60000020;
    auStack_640._8_8_ = &UNK_10b209290;
    auStack_640._0_8_ = &pppppppuStack_8f0;
    iVar10 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                       (auStack_88,auStack_640);
    pppppppuVar32 = pppppppuStack_8f0;
    if (iVar10 != 0) {
      FUN_107c05cb4(&UNK_108cc3daa,0x37,auStack_71,&UNK_10b235000,&UNK_10b2346c0);
      goto LAB_1006cc1a8;
    }
    pppppppuStack_108 = pppppppuStack_8e0;
    pcStack_110 = pcStack_8e8;
    puVar30 = puStack_988;
    if (((ulong)pcVar8 & 3) == 1) {
      uVar23 = *(undefined8 *)(pcVar8 + -1);
      puVar30 = *(undefined8 **)(pcVar8 + 7);
      if ((code *)*puVar30 != (code *)0x0) {
        (*(code *)*puVar30)(uVar23);
      }
      if (puVar30[1] != 0) {
        _free(uVar23);
      }
      _free(pcVar8 + -1);
    }
    uVar29 = (uint)puVar30;
    lVar19 = uVar17 + (long)(int)(((((uint)uVar7 >> 4 & 0x1ff) + iVar11 + -0xaf93b) - iVar18 / 100)
                                  + (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180;
LAB_1006cbaa8:
    *(undefined1 *)(param_2 + 0x3f) = 0;
    FUN_100de2268(param_2 + 10);
    pppppppuVar24 = (ulong *******)0x0;
    pppppppuVar27 = (ulong *******)0x0;
    uVar20 = 0;
    lVar28 = 1;
    lVar31 = 1;
  }
  else {
    if (bVar22 != 5) {
      if (bVar22 == 4) {
        bVar22 = *(byte *)(param_2 + 0x46);
        if (bVar22 < 2) {
          if (bVar22 != 0) goto LAB_1006cc18c;
          plVar26 = (long *)param_2[0x41];
          iVar11 = (int)plVar26[0xc];
          if (iVar11 != 3) goto LAB_1006cb570;
          goto LAB_1006cb594;
        }
        if (bVar22 != 3) {
          FUN_107c05cc4(&UNK_10b23acd8);
          goto LAB_1006cc1a8;
        }
LAB_1006cb5a8:
        FUN_100fe76f8(auStack_640,param_2 + 0x42,param_3);
        if (auStack_640._0_4_ == 2) {
          *(undefined1 *)(param_2 + 0x46) = 3;
          *param_1 = 0x8000000000000000;
          uVar14 = 4;
          goto LAB_1006cc018;
        }
        pcVar8 = (code *)auStack_640._8_8_;
        if ((auStack_640._0_8_ & 1) == 0) {
          pcVar8 = (code *)0x0;
        }
        *(undefined1 *)(param_2 + 0x46) = 1;
      }
      else {
        lVar19 = param_2[0x42];
LAB_1006cb4fc:
        do {
          if (lVar19 == 0) {
            param_2[0x3c] = 0;
            func_0x000100df6bcc(param_2 + 4);
            goto LAB_1006cb644;
          }
          auVar33 = __ZN86__LT_tokio__process__imp__ChildStdio_u20_as_u20_tokio__io__async_write__AsyncWrite_GT_10poll_write17h87734f2a6f660369E
                              (param_2[0x40],param_3,param_2[0x41]);
          uVar13 = auVar33._8_8_;
          if (auVar33._0_8_ == 2) {
            *param_1 = 0x8000000000000000;
            uVar14 = 3;
            goto LAB_1006cc018;
          }
          if ((auVar33._0_8_ & 1) != 0) goto LAB_1006cb54c;
          lVar28 = param_2[0x41];
          uVar17 = param_2[0x42];
          param_2[0x41] = 1;
          param_2[0x42] = 0;
          lVar19 = uVar17 - uVar13;
          if (uVar17 < uVar13) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
            goto LAB_1006cc1a8;
          }
          param_2[0x41] = lVar28 + uVar13;
          param_2[0x42] = lVar19;
        } while (uVar13 != 0);
        uVar13 = 0x1700000003;
LAB_1006cb54c:
        param_2[0x3c] = uVar13;
        param_2[0x40] = uVar13;
        plVar26 = param_2 + 0x24;
        param_2[0x41] = (long)plVar26;
        *(undefined1 *)(param_2 + 0x46) = 0;
        iVar11 = (int)param_2[0x30];
        if (iVar11 == 3) {
LAB_1006cb594:
          param_2[0x42] = (long)plVar26;
          *(undefined1 *)(param_2 + 0x45) = 0;
          goto LAB_1006cb5a8;
        }
LAB_1006cb570:
        if (iVar11 == 2) {
          FUN_107c05cac(&UNK_109beb6a8,0x13,&UNK_10b4cd768);
          goto LAB_1006cc1a8;
        }
        if (iVar11 != 0) {
LAB_1006cb590:
          *(undefined1 *)(plVar26 + 0x11) = 0;
          goto LAB_1006cb594;
        }
        iVar11 = _kill((int)plVar26[0xd],9);
        if (iVar11 != -1) goto LAB_1006cb590;
        puVar12 = (uint *)___error();
        pcVar8 = (code *)((ulong)*puVar12 << 0x20 | 2);
        *(undefined1 *)(param_2 + 0x46) = 1;
      }
      if (((ulong)pcVar8 & 3) == 1) {
        uVar23 = *(undefined8 *)(pcVar8 + -1);
        puVar30 = *(undefined8 **)(pcVar8 + 7);
        pcVar16 = (code *)*puVar30;
        if (pcVar16 != (code *)0x0) {
          (*pcVar16)(uVar23);
        }
        if (puVar30[1] != 0) {
          _free(uVar23);
        }
        _free(pcVar8 + -1);
      }
      puStack_988 = (undefined8 *)param_2[0x3b];
      __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(auStack_f8);
      iVar11 = (int)auStack_f8._0_4_ >> 0xd;
      iVar18 = iVar11 + -1;
      if (iVar11 < 1) {
        iVar11 = (1U - iVar11) / 400 + 1;
        iVar18 = iVar18 + iVar11 * 400;
        iVar11 = iVar11 * -0x23ab1;
      }
      else {
        iVar11 = 0;
      }
      auVar35 = func_0x000106032954(8);
      pppppppuStack_390 = auVar35._0_8_;
      pppppppuStack_8f0 = (ulong *******)param_2[8];
      pcStack_388 = (code *)CONCAT44(pcStack_388._4_4_,auVar35._8_4_);
      pcStack_8e8 = (code *)CONCAT44(pcStack_8e8._4_4_,(int)param_2[9]);
      func_0x000106032878(auStack_640,&pppppppuStack_390,&pppppppuStack_8f0);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = auStack_640._8_8_;
      lVar19 = SUB168(auVar33 * ZEXT816(1000),8);
      uVar13 = ((ulong)pppppppuStack_630 & 0xffffffff) / 1000000;
      uVar17 = auStack_640._8_8_ * 1000 + uVar13;
      if (CARRY8(auStack_640._8_8_ * 1000,uVar13)) {
        lVar19 = lVar19 + 1;
      }
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (lVar19 != 0) {
        uVar17 = 0x7fffffffffffffff;
      }
      uStack_990 = 0;
      if (auStack_640._0_4_ == 0) {
        uStack_990 = uVar17;
      }
      pcStack_8e8 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      pppppppuStack_8f0 = (ulong *******)(param_2 + 0x40);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (auStack_640,s_failed_to_write_hook_stdin__108ac30d6,&pppppppuStack_8f0);
      pppppppuVar32 = (ulong *******)auStack_640._0_8_;
      pppppppuStack_108 = pppppppuStack_630;
      pcStack_110 = (code *)auStack_640._8_8_;
      ppppppuVar21 = (ulong ******)param_2[0x40];
      if (((ulong)ppppppuVar21 & 3) == 1) {
        uVar23 = *(undefined8 *)((long)ppppppuVar21 + -1);
        unaff_x25 = *(undefined8 **)((long)ppppppuVar21 + 7);
        if ((code *)*unaff_x25 != (code *)0x0) {
          (*(code *)*unaff_x25)(uVar23);
        }
        if (unaff_x25[1] != 0) {
          _free(uVar23);
        }
        _free((undefined8 *)((long)ppppppuVar21 + -1));
      }
      uVar29 = (uint)unaff_x25;
      func_0x000100df6bcc(param_2 + 4);
      FUN_100de2564(param_2 + 0x24);
      lVar19 = ((ulong)auStack_f8._0_8_ >> 0x20) +
               (long)(int)(((((uint)auStack_f8._0_4_ >> 4 & 0x1ff) + iVar11 + -0xaf93b) -
                           iVar18 / 100) + (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180;
      goto LAB_1006cbaa8;
    }
LAB_1006cb788:
    lVar19 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    bVar22 = *(byte *)(lVar19 + 0x48);
    if (bVar22 == 1) {
LAB_1006cb7c8:
      bVar22 = *(char *)(lVar19 + 0x45) != '\0' | (*(byte *)(lVar19 + 0x44) ^ 0xff) & 1;
    }
    else if (bVar22 != 2) {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar19,&DAT_100c35d48);
      *(undefined1 *)(lVar19 + 0x48) = 1;
      goto LAB_1006cb7c8;
    }
    func_0x000100fe64f0(auStack_640,param_2 + 0x4e,param_3);
    uVar23 = auStack_640._0_8_;
    if ((ulong *******)auStack_640._0_8_ == (ulong *******)0x8000000000000001) {
      uVar13 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                         (bVar22 == 2 | bVar22 & 1,param_2 + 0x40,param_3);
      if ((uVar13 & 1) != 0) {
        *param_1 = 0x8000000000000000;
        uVar14 = 5;
        goto LAB_1006cc018;
      }
    }
    else {
      pcStack_388 = pcStack_628;
      pppppppuStack_390 = pppppppuStack_630;
      lStack_378 = lStack_618;
      pppppppuStack_380 = pppppppuStack_620;
      uStack_370 = uStack_610;
      unaff_x23 = (code *)auStack_640._8_8_;
    }
    pcStack_148 = pcStack_388;
    pppppppuStack_150 = pppppppuStack_390;
    lStack_138 = lStack_378;
    pppppppuStack_140 = pppppppuStack_380;
    uStack_130 = uStack_370;
    FUN_100e676e8(param_2 + 0x4e);
    FUN_100de8a5c(param_2 + 0x40);
    if ((ulong *******)uVar23 == (ulong *******)0x8000000000000000) {
      puStack_988 = (undefined8 *)param_2[0x3b];
      apcStack_120[0] = unaff_x23;
      __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(auStack_88);
      uVar23 = auStack_88._0_8_;
      uVar7 = auStack_88._0_4_;
      iVar11 = (int)auStack_88._0_4_ >> 0xd;
      iVar18 = iVar11 + -1;
      if (iVar11 < 1) {
        iVar11 = (1U - iVar11) / 400 + 1;
        iVar18 = iVar18 + iVar11 * 400;
        iVar11 = iVar11 * -0x23ab1;
      }
      else {
        iVar11 = 0;
      }
      auVar35 = func_0x000106032954(8);
      pppppppuStack_390 = (ulong *******)param_2[8];
      auStack_f8._8_4_ = auVar35._8_4_;
      pcStack_388 = (code *)CONCAT44(pcStack_388._4_4_,(int)param_2[9]);
      auStack_f8._0_8_ = auVar35._0_8_;
      func_0x000106032878(auStack_640,auStack_f8,&pppppppuStack_390);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auStack_640._8_8_;
      lVar19 = SUB168(auVar4 * ZEXT816(1000),8);
      uVar13 = ((ulong)pppppppuStack_630 & 0xffffffff) / 1000000;
      uVar17 = auStack_640._8_8_ * 1000 + uVar13;
      if (CARRY8(auStack_640._8_8_ * 1000,uVar13)) {
        lVar19 = lVar19 + 1;
      }
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (lVar19 != 0) {
        uVar17 = 0x7fffffffffffffff;
      }
      uStack_990 = 0;
      if (auStack_640._0_4_ == 0) {
        uStack_990 = uVar17;
      }
      pppppppuStack_390 = (ulong *******)0x0;
      pcStack_388 = (code *)0x1;
      pppppppuStack_380 = (ulong *******)0x0;
      pppppppuStack_630 = (ulong *******)0x60000020;
      auStack_640._8_8_ = &UNK_10b209290;
      auStack_640._0_8_ = &pppppppuStack_390;
      iVar10 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                         (apcStack_120,auStack_640);
      pppppppuVar32 = pppppppuStack_390;
      if (iVar10 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,auStack_71,&UNK_10b235000,&UNK_10b2346c0);
LAB_1006cc1a8:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006cc1ac);
        (*pcVar8)();
      }
      pppppppuStack_108 = pppppppuStack_380;
      pcStack_110 = pcStack_388;
      if (((ulong)unaff_x23 & 3) == 1) {
        uVar25 = *(undefined8 *)(unaff_x23 + -1);
        puVar30 = *(undefined8 **)(unaff_x23 + 7);
        pcVar8 = (code *)*puVar30;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar25);
        }
        if (puVar30[1] != 0) {
          _free(uVar25);
        }
        _free(unaff_x23 + -1);
      }
      lVar19 = ((ulong)uVar23 >> 0x20) +
               (long)(int)(((((uint)uVar7 >> 4 & 0x1ff) + iVar11 + -0xaf93b) - iVar18 / 100) +
                           (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180;
LAB_1006cbdb8:
      uVar29 = (uint)unaff_x23;
      pppppppuVar27 = (ulong *******)0x0;
      pppppppuVar24 = (ulong *******)0x0;
      uVar20 = 0;
      lVar28 = 1;
      lVar31 = 1;
    }
    else {
      if ((ulong *******)uVar23 == (ulong *******)0x8000000000000001) {
        puStack_988 = (undefined8 *)param_2[0x3b];
        __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(auStack_88);
        uVar23 = auStack_88._0_8_;
        uVar7 = auStack_88._0_4_;
        iVar11 = (int)auStack_88._0_4_ >> 0xd;
        uVar29 = iVar11 - 1;
        if (iVar11 < 1) {
          iVar11 = (1U - iVar11) / 400 + 1;
          uVar29 = uVar29 + iVar11 * 400;
          iVar11 = iVar11 * -0x23ab1;
        }
        else {
          iVar11 = 0;
        }
        unaff_x23 = (code *)(ulong)uVar29;
        auVar35 = func_0x000106032954(8);
        pppppppuStack_390 = (ulong *******)param_2[8];
        auStack_f8._8_4_ = auVar35._8_4_;
        pcStack_388 = (code *)CONCAT44(pcStack_388._4_4_,(int)param_2[9]);
        auStack_f8._0_8_ = auVar35._0_8_;
        func_0x000106032878(auStack_640,auStack_f8,&pppppppuStack_390);
        pppppppuVar32 = pppppppuStack_630;
        auVar33 = auStack_640;
        uVar25 = auStack_640._8_8_;
        pppppppuStack_390 = (ulong *******)(param_2[0x3a] + 0x90);
        pcStack_388 = (code *)&
                              __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (auStack_640,s_hook_timed_out_after_s_108ac30f5,&pppppppuStack_390);
        lVar19 = ((ulong)uVar23 >> 0x20) +
                 (long)(int)(((((uint)uVar7 >> 4 & 0x1ff) + iVar11 + -0xaf93b) - (int)uVar29 / 100)
                             + ((int)(uVar29 * 0x5b5) >> 2) + ((int)uVar29 / 100 >> 2)) * 0x15180;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar25;
        lVar28 = SUB168(auVar3 * ZEXT816(1000),8);
        uVar15 = uVar25 * 1000;
        uVar13 = ((ulong)pppppppuVar32 & 0xffffffff) / 1000000;
        uVar17 = uVar15 + uVar13;
        if (CARRY8(uVar15,uVar13)) {
          lVar28 = lVar28 + 1;
        }
        if (0x7ffffffffffffffe < uVar17) {
          uVar17 = 0x7fffffffffffffff;
        }
        if (lVar28 != 0) {
          uVar17 = 0x7fffffffffffffff;
        }
        uStack_990 = 0;
        if (auVar33._0_4_ == 0) {
          uStack_990 = uVar17;
        }
        pppppppuStack_108 = pppppppuStack_630;
        pcStack_110 = (code *)auStack_640._8_8_;
        pppppppuVar32 = (ulong *******)auStack_640._0_8_;
        goto LAB_1006cbdb8;
      }
      pcStack_628 = pcStack_148;
      pppppppuStack_630 = pppppppuStack_150;
      lStack_618 = lStack_138;
      pppppppuStack_620 = pppppppuStack_140;
      uStack_610 = uStack_130;
      puStack_988 = (undefined8 *)param_2[0x3b];
      auStack_640._0_8_ = uVar23;
      auStack_640._8_8_ = unaff_x23;
      __ZN6chrono6offset3utc3Utc3now17h7f7b48be272b4303E(apcStack_120);
      uVar29 = (uint)apcStack_120[0];
      iVar11 = (int)(uint)apcStack_120[0] >> 0xd;
      iVar18 = iVar11 + -1;
      if (iVar11 < 1) {
        iVar11 = (1U - iVar11) / 400 + 1;
        iVar18 = iVar18 + iVar11 * 400;
        iVar11 = iVar11 * -0x23ab1;
      }
      else {
        iVar11 = 0;
      }
      uVar15 = (ulong)apcStack_120[0] >> 0x20;
      auVar35 = func_0x000106032954(8);
      auStack_88._8_4_ = auVar35._8_4_;
      auStack_f8._8_4_ = (int)param_2[9];
      auStack_f8._0_8_ = param_2[8];
      auStack_88._0_8_ = auVar35._0_8_;
      func_0x000106032878(&pppppppuStack_390,auStack_88,auStack_f8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = pcStack_388;
      lVar19 = SUB168(auVar5 * ZEXT816(1000),8);
      uVar13 = ((ulong)pppppppuStack_380 & 0xffffffff) / 1000000;
      uVar17 = (long)pcStack_388 * 1000 + uVar13;
      if (CARRY8((long)pcStack_388 * 1000,uVar13)) {
        lVar19 = lVar19 + 1;
      }
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (lVar19 != 0) {
        uVar17 = 0x7fffffffffffffff;
      }
      uStack_990 = 0;
      if ((int)pppppppuStack_390 == 0) {
        uStack_990 = uVar17;
      }
      uVar6 = (uint)uStack_610;
      uVar20 = (uint)((uStack_610 & 0x7f) == 0);
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                (auStack_f8,unaff_x23,pppppppuStack_630);
      pppppppuVar24 = pppppppuStack_e8;
      uVar25 = auStack_f8._8_8_;
      if (pppppppuStack_e8 == (ulong *******)0x0) {
        lVar28 = 1;
      }
      else {
        lVar28 = _malloc(pppppppuStack_e8);
        if (lVar28 == 0) {
          FUN_107c03c64(1,pppppppuVar24);
          goto LAB_1006cc1a8;
        }
      }
      _memcpy(lVar28,uVar25,pppppppuVar24);
      pppppppuVar32 = pppppppuStack_620;
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                (&pppppppuStack_390,pppppppuStack_620,lStack_618);
      pppppppuVar27 = pppppppuStack_380;
      pcVar8 = pcStack_388;
      if (pppppppuStack_380 == (ulong *******)0x0) {
        lVar31 = 1;
      }
      else {
        lVar31 = _malloc(pppppppuStack_380);
        if (lVar31 == 0) {
          FUN_107c03c64(1,pppppppuVar27);
          goto LAB_1006cc1a8;
        }
      }
      _memcpy(lVar31,pcVar8,pppppppuVar27);
      if (((ulong)pppppppuStack_390 & 0x7fffffffffffffff) != 0) {
        _free(pcVar8);
      }
      if ((auStack_f8._0_8_ & 0x7fffffffffffffff) != 0) {
        _free(uVar25);
      }
      if ((ulong *******)uVar23 != (ulong *******)0x0) {
        _free(unaff_x23);
      }
      lVar19 = uVar15 + (long)(int)((((uVar29 >> 4 & 0x1ff) + iVar11 + -0xaf93b) - iVar18 / 100) +
                                    (iVar18 * 0x5b5 >> 2) + (iVar18 / 100 >> 2)) * 0x15180;
      uVar29 = uVar6 >> 8 & 0xff;
      if (pcStack_628 != (code *)0x0) {
        _free(pppppppuVar32);
      }
      pppppppuVar32 = (ulong *******)0x8000000000000000;
    }
    *(undefined1 *)(param_2 + 0x3f) = 0;
    FUN_100de2268(param_2 + 10);
  }
  *param_1 = pppppppuVar24;
  param_1[1] = lVar28;
  param_1[2] = pppppppuVar24;
  param_1[3] = pppppppuVar27;
  param_1[4] = lVar31;
  param_1[5] = pppppppuVar27;
  param_1[6] = pppppppuVar32;
  param_1[8] = pppppppuStack_108;
  param_1[7] = pcStack_110;
  *(uint *)(param_1 + 9) = uVar20;
  *(uint *)((long)param_1 + 0x4c) = uVar29;
  param_1[10] = puStack_988;
  param_1[0xb] = lVar19;
  uVar14 = 1;
  param_1[0xc] = uStack_990;
LAB_1006cc018:
  *(undefined1 *)((long)param_2 + 0x1f9) = uVar14;
  return;
}

