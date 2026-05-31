
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057c548(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  byte bVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined *puVar15;
  code *pcVar16;
  long *****extraout_x8;
  long *****extraout_x8_00;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  char *pcVar27;
  long *****ppppplVar28;
  undefined8 uVar29;
  long lVar30;
  long *****ppppplVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  undefined1 auVar34 [16];
  long lStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  long ****pppplStack_728;
  long ****pppplStack_720;
  long ****pppplStack_718;
  long ****pppplStack_710;
  long ****pppplStack_708;
  long ****pppplStack_700;
  long ****pppplStack_6f8;
  long ****pppplStack_6f0;
  long ****pppplStack_6e8;
  long ****pppplStack_6e0;
  long lStack_6d8;
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
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long ****pppplStack_640;
  long ****pppplStack_638;
  long ****pppplStack_630;
  long ****pppplStack_628;
  long ****pppplStack_620;
  long ****pppplStack_618;
  long ****pppplStack_610;
  long ****pppplStack_608;
  long ****pppplStack_600;
  long ****pppplStack_5f8;
  long ****pppplStack_5f0;
  undefined8 uStack_5e8;
  long ****pppplStack_5e0;
  long ****pppplStack_5d8;
  long ****pppplStack_5d0;
  long ****pppplStack_5c8;
  undefined1 auStack_5c0 [16];
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long ****pppplStack_590;
  long ****pppplStack_588;
  long ****pppplStack_580;
  long ****pppplStack_578;
  long ****pppplStack_570;
  long ****pppplStack_568;
  long ****pppplStack_560;
  long ****pppplStack_558;
  long ****pppplStack_550;
  long ****pppplStack_548;
  long ****pppplStack_540;
  long ****pppplStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long ****pppplStack_2e0;
  long ****pppplStack_2d8;
  long ****pppplStack_2d0;
  long ****pppplStack_2c8;
  undefined1 auStack_2c0 [16];
  long ****pppplStack_2b0;
  long ****pppplStack_2a8;
  undefined8 uStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_a8;
  undefined1 uStack_9d;
  
  bVar5 = param_2[0x16][0xb];
  if (bVar5 < 5) {
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        param_2[0x16][10] = 0;
        lVar30 = *(long *)param_2[0x15];
        *(undefined8 *)(param_2[4] + 8) = *(undefined8 *)(param_2[0x15] + 8);
        *(long *)param_2[4] = lVar30;
        *(undefined8 *)param_2[5] = *(undefined8 *)param_2[0x16];
        *(long *)param_2[0x17] = *(long *)(lVar30 + 0x360) + 0x10;
        param_2[0x1c][8] = 0;
        goto LAB_10057c618;
      }
      if (bVar5 == 1) {
        FUN_107c05cc0(&UNK_10b217cd0);
      }
      FUN_107c05cc4();
LAB_10057d510:
      FUN_107c03c64(8,0x9c0);
      goto LAB_10057d51c;
    }
    if (bVar5 == 3) {
LAB_10057c618:
      auVar34 = FUN_100fd4eb8(param_2 + 0x17,param_3);
      if (auVar34._0_8_ == 0) {
        *param_1 = 0x8000000000000021;
        uVar14 = 3;
        goto LAB_10057d428;
      }
      param_2[0x16][10] = 1;
      *param_2 = auVar34;
      if ((param_2[0x1c][8] == '\x03') && (param_2[0x1c][0] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0x18);
        if (*(long *)(param_2[0x18] + 8) != 0) {
          (**(code **)(*(long *)(param_2[0x18] + 8) + 0x18))(*(undefined8 *)param_2[0x19]);
        }
      }
      auStack_2c0._8_8_ = *(undefined8 *)(*param_2 + 8);
      param_2[0x16][8] = *(long *)(auStack_2c0._8_8_ + 0x18) != 0;
      uStack_a8 = *(undefined8 *)param_2[5];
      pppplStack_2b0._0_3_ = (uint3)(ushort)pppplStack_2b0;
      uStack_9d = 0;
      lVar30 = _malloc(0x248);
      if (lVar30 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x248);
        goto LAB_10057d51c;
      }
      _memcpy(lVar30,&pppplStack_2e0,0x248);
      puVar15 = &UNK_10b237400;
      *(long *)param_2[0x17] = lVar30;
      *(undefined **)(param_2[0x17] + 8) = &UNK_10b237400;
    }
    else {
      lVar30 = *(long *)param_2[0x17];
      puVar15 = *(undefined **)(param_2[0x17] + 8);
    }
    (**(code **)(puVar15 + 0x18))(&pppplStack_2e0,lVar30,param_3);
    pppplVar4 = pppplStack_2d0;
    pppplVar7 = pppplStack_2d8;
    pppplVar6 = pppplStack_2e0;
    if ((long *****)pppplStack_2e0 == (long *****)0x8000000000000001) {
      *param_1 = 0x8000000000000021;
      uVar14 = 4;
      goto LAB_10057d428;
    }
    uVar29 = *(undefined8 *)param_2[0x17];
    puVar3 = *(undefined8 **)(param_2[0x17] + 8);
    pcVar16 = (code *)*puVar3;
    uVar13 = extraout_x1;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar29);
      uVar13 = extraout_x1_00;
    }
    if (puVar3[1] != 0) {
      _free(uVar29);
      uVar13 = extraout_x1_01;
    }
    if ((long *****)pppplVar6 != (long *****)0x8000000000000000) {
      *(long *****)(param_2[5] + 8) = pppplVar6;
      *(long *****)(param_2[6] + 8) = pppplVar4;
      *(long *****)param_2[6] = pppplVar7;
      param_2[0x16][10] = 0;
      pcVar27 = *(char **)*param_2;
      if (*pcVar27 == '\0') {
        *pcVar27 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar27,uVar13,1000000000);
      }
      FUN_1060fa678(pcVar27,1,pcVar27);
      lVar30 = *(long *)(*(long *)param_2[4] + 0x3a0);
      __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
                (param_2[0xe5] + 8,*(long *)(*(long *)(param_2[4] + 8) + 0x788) + 0x10);
      *(long *)param_2[0x17] = lVar30 + 0x10;
      *(undefined1 **)(param_2[0x17] + 8) = param_2[0xe5] + 8;
      param_2[0xe5][0] = 0;
      goto LAB_10057c7bc;
    }
    pcVar27 = *(char **)*param_2;
    if (*pcVar27 == '\0') {
      *pcVar27 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar27,uVar13,1000000000);
    }
    FUN_1060fa678(pcVar27,1,pcVar27);
    uVar29 = 0x8000000000000000;
  }
  else {
    if (bVar5 == 5) {
LAB_10057c7bc:
      FUN_100a7ebb0(&lStack_758,param_2 + 0x17,param_3);
      if (lStack_758 == -0x8000000000000000) {
        *param_1 = 0x8000000000000021;
        uVar14 = 5;
        goto LAB_10057d428;
      }
      *(undefined8 *)(param_2[1] + 8) = uStack_750;
      *(long *)param_2[1] = lStack_758;
      *(undefined8 *)(param_2[2] + 8) = uStack_740;
      *(undefined8 *)param_2[2] = uStack_748;
      *(undefined8 *)(param_2[3] + 8) = uStack_730;
      *(undefined8 *)param_2[3] = uStack_738;
      if ((param_2[0xe5][0] == '\x03') && (param_2[0xe4][10] == '\x03')) {
        FUN_100cb9114(param_2 + 0x1a);
        if (*(long *)(param_2[0x18] + 8) != 0) {
          _free(*(undefined8 *)param_2[0x19]);
        }
        param_2[0xe4][9] = 0;
      }
      FUN_100e05b5c(param_2[0xe5] + 8);
      if (*(long *)(param_2[0x17b] + 8) != 0) {
        _free(*(undefined8 *)param_2[0x17c]);
      }
      lVar30 = *(long *)(param_2[4] + 8);
      bVar8 = false;
      if (*(long *)(lVar30 + 0x7c8) != 0) {
        uVar10 = __ZN11codex_login4auth7manager11AuthManager9auth_mode17h44c6e88f9543bc98E
                           (*(long *)(lVar30 + 0x7c8) + 0x10);
        bVar8 = (uVar10 & 0xff) - 1 < 3;
      }
      lVar17 = *(long *)(lVar30 + 0x638);
      if (lVar17 != 0) {
        lVar30 = *(long *)(lVar30 + 0x640);
        do {
          uVar19 = 0xffffffffffffffff;
          pbVar25 = (byte *)(lVar17 + 0xc);
          uVar26 = (ulong)*(ushort *)(lVar17 + 10);
          do {
            uVar22 = (ulong)*(ushort *)(lVar17 + 10);
            if (uVar26 == 0) goto LAB_10057c8c0;
            cVar9 = *pbVar25 < 0x17;
            if (0x17 < *pbVar25) {
              cVar9 = -1;
            }
            uVar26 = uVar26 - 1;
            uVar19 = uVar19 + 1;
            pbVar25 = pbVar25 + 1;
          } while (cVar9 == '\x01');
          uVar22 = uVar19;
          if (cVar9 == '\0') {
            param_2[0x16][9] = bVar8;
            if (bVar8 == false) goto LAB_10057c9e8;
            __ZN10codex_core10connectors36accessible_connectors_from_mcp_tools17h72988b39a13f647fE
                      (param_2 + 7,*(undefined8 *)param_2[6],*(undefined8 *)(param_2[6] + 8));
            if (*(long *)param_2[7] == -0x8000000000000000) goto LAB_10057c9f4;
            lVar30 = *(long *)(param_2[4] + 8);
            func_0x000101147ab8(&pppplStack_2e0,*(undefined8 *)(param_2[7] + 8),
                                *(undefined8 *)param_2[8]);
            __ZN10codex_core10connectors22with_app_enabled_state17h7e6db2a0f6eb2ca3E
                      (param_2[8] + 8,&pppplStack_2e0,*(long *)(lVar30 + 0x788) + 0x10);
            goto LAB_10057c9fc;
          }
LAB_10057c8c0:
          if (lVar30 == 0) break;
          lVar17 = *(long *)(lVar17 + uVar22 * 8 + 0x18);
          lVar30 = lVar30 + -1;
        } while( true );
      }
      param_2[0x16][9] = 0;
LAB_10057c9e8:
      *(undefined8 *)param_2[7] = 0x8000000000000000;
LAB_10057c9f4:
      *(undefined8 *)(param_2[8] + 8) = 0x8000000000000000;
LAB_10057c9fc:
      if ((param_2[0x16][9] & 1) == 0) {
        *(undefined8 *)param_2[10] = 0x8000000000000000;
      }
      else {
        FUN_10074c87c(&pppplStack_2e0,*(undefined8 *)(param_2[1] + 8),*(undefined8 *)param_2[2]);
        pppplStack_6f8 = pppplStack_2d8 + (long)pppplStack_2d0 * 3;
        pppplStack_710 = pppplStack_2d8;
        pppplStack_708 = pppplStack_2d8;
        pppplStack_700 = pppplStack_2e0;
        if ((*(long *)param_2[7] == -0x8000000000000000) ||
           (func_0x000101147ab8(&pppplStack_2e0,*(undefined8 *)(param_2[7] + 8),
                                *(undefined8 *)param_2[8]),
           (long *****)pppplStack_2e0 == (long *****)0x8000000000000000)) {
          pppplStack_6f0 = (long ****)0x0;
          pppplStack_6e8 = (long ****)0x8;
          pppplStack_6e0 = (long ****)0x0;
        }
        else {
          pppplStack_6e8 = pppplStack_2d8;
          pppplStack_6f0 = pppplStack_2e0;
          pppplStack_6e0 = pppplStack_2d0;
        }
        ppppplVar28 = (long *****)pppplStack_6e0;
        pppplVar6 = pppplStack_6e8;
        pauVar12 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar12[1][0] == '\x01') {
          auStack_2c0 = *pauVar12;
        }
        else {
          auStack_2c0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar12 + 8) = auStack_2c0._8_8_;
          pauVar12[1][0] = 1;
        }
        *(long *)*pauVar12 = auStack_2c0._0_8_ + 1;
        pppplStack_2d8 = (long ****)0x0;
        pppplStack_2e0 = (long ****)&UNK_108c56c70;
        pppplStack_2c8 = (long ****)0x0;
        pppplStack_2d0 = (long ****)0x0;
        if (ppppplVar28 != (long *****)0x0) {
          func_0x000107c05abc(&pppplStack_2e0,ppppplVar28,auStack_2c0,1);
          ppppplVar31 = (long *****)(pppplVar6 + 2);
          do {
            FUN_1016e6088(&pppplStack_2e0,ppppplVar31[-1],*ppppplVar31);
            ppppplVar31 = ppppplVar31 + 0x4e;
            ppppplVar28 = (long *****)((long)ppppplVar28 + -1);
          } while (ppppplVar28 != (long *****)0x0);
        }
        pppplStack_5d8 = pppplStack_2d8;
        pppplStack_5e0 = pppplStack_2e0;
        pppplStack_5c8 = pppplStack_2c8;
        pppplStack_5d0 = pppplStack_2d0;
        pppplStack_588 = pppplStack_708;
        pppplStack_590 = pppplStack_710;
        pppplStack_578 = pppplStack_6f8;
        pppplStack_580 = pppplStack_700;
        pppplStack_570 = (long ****)&pppplStack_5e0;
        auStack_5c0 = auStack_2c0;
        func_0x0001004179d8(&pppplStack_550,&pppplStack_590);
        if ((long *****)pppplStack_550 == (long *****)0x8000000000000000) {
          pppplStack_610 = (long ****)0x0;
          pppplStack_608 = (long ****)0x8;
          pppplStack_600 = (long ****)0x0;
          if ((long)pppplStack_578 - (long)pppplStack_588 != 0) {
            uVar19 = (ulong)((long)pppplStack_578 - (long)pppplStack_588) / 0x18;
            ppppplVar28 = (long *****)(pppplStack_588 + 1);
            do {
              if (ppppplVar28[-1] != (long ****)0x0) {
                _free(*ppppplVar28);
              }
              ppppplVar28 = ppppplVar28 + 3;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if ((long *****)pppplStack_580 != (long *****)0x0) {
            _free(pppplStack_590);
          }
        }
        else {
          ppppplVar28 = (long *****)_malloc(0x9c0);
          if (ppppplVar28 == (long *****)0x0) goto LAB_10057d510;
          lVar30 = 0x270;
          _memcpy(ppppplVar28,&pppplStack_550,0x270);
          pppplStack_568 = (long ****)0x4;
          pppplStack_558 = (long ****)0x1;
          pppplStack_608 = pppplStack_588;
          pppplStack_610 = pppplStack_590;
          pppplStack_5f8 = pppplStack_578;
          pppplStack_600 = pppplStack_580;
          pppplStack_5f0 = pppplStack_570;
          pppplStack_560 = (long ****)ppppplVar28;
          while( true ) {
            pppplVar6 = pppplStack_558;
            func_0x0001004179d8(&pppplStack_2e0,&pppplStack_610);
            if ((long *****)pppplStack_2e0 == (long *****)0x8000000000000000) break;
            if (pppplVar6 == pppplStack_568) {
              thunk_FUN_108855060(&pppplStack_568,pppplVar6,1,8,0x270);
              ppppplVar28 = (long *****)pppplStack_560;
            }
            _memcpy((long)ppppplVar28 + lVar30,&pppplStack_2e0,0x270);
            pppplStack_558 = (long ****)((long)pppplVar6 + 1);
            lVar30 = lVar30 + 0x270;
          }
          if ((long)pppplStack_5f8 - (long)pppplStack_608 != 0) {
            uVar19 = (ulong)((long)pppplStack_5f8 - (long)pppplStack_608) / 0x18;
            ppppplVar28 = (long *****)(pppplStack_608 + 1);
            do {
              if (ppppplVar28[-1] != (long ****)0x0) {
                _free(*ppppplVar28);
              }
              ppppplVar28 = ppppplVar28 + 3;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          if ((long *****)pppplStack_600 != (long *****)0x0) {
            _free(pppplStack_610);
          }
          pppplStack_608 = pppplStack_560;
          pppplStack_610 = pppplStack_568;
          pppplStack_600 = pppplStack_558;
        }
        pppplStack_2d8 = pppplStack_6e8;
        pppplStack_2e0 = pppplStack_6f0;
        pppplStack_2d0 = pppplStack_6e0;
        func_0x000102c4477c(&pppplStack_728,&pppplStack_610,&pppplStack_2e0);
        if (((long *****)pppplStack_5d8 != (long *****)0x0) &&
           ((long)pppplStack_5d8 * 0x11 != -0x19)) {
          _free(pppplStack_5e0 + (long)pppplStack_5d8 * -2 + -2);
        }
        pppplStack_2d8 = pppplStack_720;
        pppplStack_2e0 = pppplStack_728;
        pppplStack_2d0 = pppplStack_718;
        __ZN10codex_core10connectors22with_app_enabled_state17h7e6db2a0f6eb2ca3E
                  (&pppplStack_550,&pppplStack_2e0,
                   *(long *)(*(long *)(param_2[4] + 8) + 0x788) + 0x10);
        *(long *****)(param_2[10] + 8) = pppplStack_548;
        *(long *****)param_2[10] = pppplStack_550;
        *(long *****)param_2[0xb] = pppplStack_540;
      }
      *(long *)(param_2[0x17] + 8) = *(long *)(*(long *)param_2[4] + 0x380) + 0x10;
      param_2[0x18][1] = 0;
LAB_10057cde8:
      FUN_1006dd9c8(&lStack_6d8,param_2 + 0x17,param_3);
      if (lStack_6d8 == -0x7ffffffffffffffc) {
        *param_1 = 0x8000000000000021;
        uVar14 = 6;
        goto LAB_10057d428;
      }
      *(undefined8 *)param_2[0xe] = uStack_6b0;
      *(undefined8 *)(param_2[0xd] + 8) = uStack_6b8;
      *(undefined8 *)param_2[0xf] = uStack_6a0;
      *(undefined8 *)(param_2[0xe] + 8) = uStack_6a8;
      *(undefined8 *)param_2[0x10] = uStack_690;
      *(undefined8 *)(param_2[0xf] + 8) = uStack_698;
      *(undefined8 *)param_2[0xc] = uStack_6d0;
      *(long *)(param_2[0xb] + 8) = lStack_6d8;
      *(undefined8 *)param_2[0xd] = uStack_6c0;
      *(undefined8 *)(param_2[0xc] + 8) = uStack_6c8;
      *(undefined8 *)param_2[0x13] = uStack_660;
      *(undefined8 *)(param_2[0x12] + 8) = uStack_668;
      *(undefined8 *)param_2[0x14] = uStack_650;
      *(undefined8 *)(param_2[0x13] + 8) = uStack_658;
      *(undefined8 *)(param_2[0x14] + 8) = uStack_648;
      *(undefined8 *)param_2[0x11] = uStack_680;
      *(undefined8 *)(param_2[0x10] + 8) = uStack_688;
      *(undefined8 *)param_2[0x12] = uStack_670;
      *(undefined8 *)(param_2[0x11] + 8) = uStack_678;
      if (param_2[0x18][1] == '\x04') {
        FUN_100cab424(param_2 + 0x22);
        FUN_100e0609c(param_2[0x18] + 8);
        param_2[0x18][0] = 0;
        bVar5 = param_2[0x16][9];
      }
      else {
        if (param_2[0x18][1] == '\x03') {
          FUN_100ce72d8(param_2[0x18] + 8);
        }
        bVar5 = param_2[0x16][9];
      }
      if ((bVar5 & 1) != 0) {
        lVar30 = *(long *)(param_2[4] + 8);
        lVar17 = *(long *)(lVar30 + 0x638);
        if (lVar17 != 0) {
          lVar18 = *(long *)(lVar30 + 0x640);
          lVar20 = lVar18;
          lVar23 = lVar17;
          do {
            uVar19 = 0xffffffffffffffff;
            pbVar25 = (byte *)(lVar23 + 0xc);
            uVar26 = (ulong)*(ushort *)(lVar23 + 10);
            do {
              uVar22 = (ulong)*(ushort *)(lVar23 + 10);
              if (uVar26 == 0) goto LAB_10057cef4;
              cVar9 = *pbVar25 < 0x1c;
              if (0x1c < *pbVar25) {
                cVar9 = -1;
              }
              uVar26 = uVar26 - 1;
              uVar19 = uVar19 + 1;
              pbVar25 = pbVar25 + 1;
            } while (cVar9 == '\x01');
            lVar21 = lVar18;
            lVar24 = lVar17;
            uVar22 = uVar19;
            if (cVar9 == '\0') goto LAB_10057cf14;
LAB_10057cef4:
            if (lVar20 == 0) break;
            lVar23 = *(long *)(lVar23 + uVar22 * 8 + 0x18);
            lVar20 = lVar20 + -1;
          } while( true );
        }
      }
LAB_10057cfc8:
      pppplStack_640 = (long ****)0x8000000000000000;
    }
    else {
      if (bVar5 == 6) goto LAB_10057cde8;
LAB_10057c5c0:
      func_0x0001004e981c(&pppplStack_2e0,param_2 + 0x17,param_3);
      ppppplVar28 = (long *****)pppplStack_2d0;
      pppplVar7 = pppplStack_2d8;
      pppplVar6 = pppplStack_2e0;
      if ((long *****)pppplStack_2e0 == (long *****)0x8000000000000001) {
        *param_1 = 0x8000000000000021;
        uVar14 = 7;
        goto LAB_10057d428;
      }
      func_0x000100ce6c3c(param_2 + 0x17);
      if ((long *****)pppplVar6 == (long *****)0x8000000000000000) {
        pppplStack_710 = pppplVar7;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (1 < bRam000000010b62aa50 - 1) {
            if (bRam000000010b62aa50 != 0) {
              cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
                                );
              if (cVar9 != '\0') goto LAB_10057c920;
            }
            goto LAB_10057d020;
          }
LAB_10057c920:
          uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
                             );
          if ((uVar19 & 1) == 0) goto LAB_10057d020;
          pppplStack_2c8 =
               (long ****)
               (
               ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
               + 0x30);
          pppplStack_550 = (long ****)&pppplStack_710;
          pppplStack_548 =
               (long ****)
               __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
          ;
          pppplStack_5d8 = (long ****)&pppplStack_550;
          pppplStack_5e0 = (long ****)&UNK_108ca63ca;
          pppplStack_610 = (long ****)&pppplStack_5e0;
          pppplStack_608 = (long ****)&UNK_10b208fd0;
          pppplStack_2d8 = (long ****)&pppplStack_610;
          pppplStack_2e0 = (long ****)0x1;
          pppplStack_2d0 = (long ****)0x1;
          func_0x00010057d8d8(&pppplStack_2e0);
        }
        else {
LAB_10057d020:
          lVar30 = 
          ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppplStack_620 =
                 *(long *****)
                  (
                  ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
                  + 0x20);
            pppplStack_618 =
                 *(long *****)
                  (
                  ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
                  + 0x28);
            pppplStack_628 = (long ****)0x2;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar15 + 0x18))(puVar2,&pppplStack_628);
            if (iVar11 != 0) {
              pppplStack_2c8 =
                   (long ****)
                   (
                   ___ZN10codex_core7session4turn11built_tools28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2c579a1fb4ca01acE
                   + 0x30);
              pppplStack_5e0 = (long ****)&pppplStack_710;
              pppplStack_5d8 =
                   (long ****)
                   __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
              ;
              pppplStack_608 = (long ****)&pppplStack_5e0;
              pppplStack_610 = (long ****)&UNK_108ca63ca;
              pppplStack_590 = (long ****)&pppplStack_610;
              pppplStack_588 = (long ****)&UNK_10b208fd0;
              pppplStack_2d8 = (long ****)&pppplStack_590;
              pppplStack_2e0 = (long ****)0x1;
              pppplStack_2d0 = (long ****)0x1;
              pppplStack_548 = pppplStack_620;
              pppplStack_550 = pppplStack_628;
              pppplStack_540 = pppplStack_618;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar30,puVar2,puVar15,&pppplStack_550,&pppplStack_2e0);
            }
          }
        }
        pppplStack_640 = (long ****)0x8000000000000000;
        (*(code *)**pppplStack_710)();
      }
      else {
        lVar30 = *(long *)(param_2[4] + 8);
        if (((*(long *)(lVar30 + 0x4c8) != -0x8000000000000000) && (*(long *)(lVar30 + 0x4d8) == 9))
           && (**(long **)(lVar30 + 0x4d0) == 0x75742d7865646f63 &&
               (char)(*(long **)(lVar30 + 0x4d0))[1] == 'i')) {
          ppppplVar31 = (long *****)pppplVar7;
          if (ppppplVar28 != (long *****)0x0) {
            ppppplVar33 = (long *****)pppplVar7;
            do {
              while (pppplVar4 = ppppplVar33[1], *ppppplVar33 == (long ****)0x0) {
                ppppplVar32 = ppppplVar31 + 2;
                *ppppplVar31 = (long ****)0x0;
                ppppplVar31[1] = pppplVar4;
                ppppplVar33 = ppppplVar33 + 2;
                ppppplVar31 = ppppplVar32;
                if (ppppplVar33 == (long *****)(pppplVar7 + (long)ppppplVar28 * 2))
                goto LAB_10057cb08;
              }
              func_0x0001050279f8(pppplVar4);
              _free(pppplVar4);
              ppppplVar33 = ppppplVar33 + 2;
            } while (ppppplVar33 != (long *****)(pppplVar7 + (long)ppppplVar28 * 2));
          }
LAB_10057cb08:
          ppppplVar28 = (long *****)((ulong)((long)ppppplVar31 - (long)pppplVar7) >> 4);
        }
        if (ppppplVar28 == (long *****)0x0) {
          pppplStack_640 = (long ****)0x8000000000000000;
          if ((long *****)pppplVar6 != (long *****)0x0) {
            _free(pppplVar7);
          }
        }
        else {
          pppplStack_640 = pppplVar6;
          pppplStack_638 = pppplVar7;
          pppplStack_630 = (long ****)ppppplVar28;
        }
      }
    }
LAB_10057d13c:
    uVar29 = 0;
    if (*(long *)param_2[10] != -0x8000000000000000) {
      uVar29 = *(undefined8 *)(param_2[10] + 8);
    }
    func_0x000102d5fb3c(&pppplStack_610,*(undefined8 *)param_2[6],*(undefined8 *)(param_2[6] + 8),
                        uVar29,*(undefined8 *)param_2[0xb],
                        *(long *)(*(long *)(param_2[4] + 8) + 0x788) + 0x10,
                        *(undefined1 *)(*(long *)(param_2[4] + 8) + 0x1ec));
    pppplVar7 = pppplStack_608;
    pppplVar6 = pppplStack_610;
    ppppplVar28 = (long *****)pppplStack_600;
    ppppplVar31 = (long *****)pppplStack_610;
    if ((param_2[0x16][8] & 1) == 0) {
      lVar30 = (long)pppplStack_600 + 1;
      ppppplVar31 = (long *****)pppplStack_608;
      while (lVar30 = lVar30 + -1, lVar30 != 0) {
        FUN_100dea5d4(ppppplVar31);
        ppppplVar31 = ppppplVar31 + 0x35;
        ppppplVar28 = extraout_x8;
      }
      if ((long *****)pppplVar6 != (long *****)0x0) {
        _free(pppplVar7);
        ppppplVar28 = extraout_x8_00;
      }
      ppppplVar31 = (long *****)0x8000000000000000;
    }
    pppplStack_588 = pppplVar7;
    uVar29 = *(undefined8 *)(param_2[4] + 8);
    pppplStack_590 = (long ****)ppppplVar31;
    pppplStack_580 = (long ****)ppppplVar28;
    func_0x000102de0e7c(&pppplStack_550,*(undefined8 *)param_2[4]);
    uStack_280 = *(undefined8 *)(*(long *)(param_2[4] + 8) + 0x470);
    uStack_278 = *(undefined8 *)(*(long *)(param_2[4] + 8) + 0x478);
    auStack_2c0._0_8_ = pppplStack_588;
    pppplStack_2c8 = pppplStack_590;
    pppplStack_2a8 = pppplStack_5f0;
    pppplStack_2b0 = pppplStack_5f8;
    pppplStack_290 = pppplStack_638;
    pppplStack_298 = pppplStack_640;
    uStack_2a0 = uStack_5e8;
    pppplStack_288 = pppplStack_630;
    auStack_2c0._8_8_ = pppplStack_580;
    pppplStack_2d0 = pppplStack_540;
    pppplStack_2d8 = pppplStack_548;
    pppplStack_2e0 = pppplStack_550;
    func_0x000102e34d38(&pppplStack_550,uVar29,&pppplStack_2e0);
    pppplStack_5d8 = pppplStack_548;
    pppplStack_5e0 = pppplStack_550;
    pppplStack_5d0 = pppplStack_540;
    uStack_5a0 = uStack_510;
    uStack_5a8 = uStack_518;
    auStack_5c0._0_8_ = uStack_530;
    pppplStack_5c8 = pppplStack_538;
    uStack_5b0 = uStack_520;
    auStack_5c0._8_8_ = uStack_528;
    auStack_2c0._8_8_ = pppplStack_538;
    auStack_2c0._0_8_ = pppplStack_540;
    pppplStack_2a8 = (long ****)uStack_528;
    pppplStack_2b0 = (long ****)uStack_530;
    pppplStack_298 = (long ****)uStack_518;
    uStack_2a0 = uStack_520;
    pppplStack_290 = (long ****)uStack_510;
    pppplStack_2d8 = (long ****)0x1;
    pppplStack_2e0 = (long ****)0x1;
    pppplStack_2c8 = pppplStack_548;
    pppplStack_2d0 = pppplStack_550;
    pcVar27 = (char *)_malloc(0x58);
    if (pcVar27 == (char *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x58);
LAB_10057d51c:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10057d520);
      (*pcVar16)();
    }
    *(undefined8 *)(pcVar27 + 0x28) = auStack_2c0._8_8_;
    *(undefined8 *)(pcVar27 + 0x20) = auStack_2c0._0_8_;
    *(long *****)(pcVar27 + 0x38) = pppplStack_2a8;
    *(long *****)(pcVar27 + 0x30) = pppplStack_2b0;
    *(long *****)(pcVar27 + 0x48) = pppplStack_298;
    *(undefined8 *)(pcVar27 + 0x40) = uStack_2a0;
    *(long *****)(pcVar27 + 0x50) = pppplStack_290;
    *(long *****)(pcVar27 + 8) = pppplStack_2d8;
    *(long *****)pcVar27 = pppplStack_2e0;
    *(long *****)(pcVar27 + 0x18) = pppplStack_2c8;
    *(long *****)(pcVar27 + 0x10) = pppplStack_2d0;
    if (*(long *)(param_2[0xb] + 8) != -0x7ffffffffffffffd) {
      FUN_100e0609c();
    }
    lVar30 = *(long *)param_2[10];
    if (lVar30 != -0x8000000000000000) {
      lVar20 = *(long *)(param_2[10] + 8);
      lVar17 = lVar20;
      for (lVar23 = *(long *)param_2[0xb]; lVar23 != 0; lVar23 = lVar23 + -1) {
        FUN_100e3b46c(lVar17);
        lVar17 = lVar17 + 0x270;
      }
      if (lVar30 != 0) {
        _free(lVar20);
      }
    }
    lVar30 = *(long *)(param_2[8] + 8);
    if (lVar30 != -0x8000000000000000) {
      lVar20 = *(long *)param_2[9];
      lVar17 = lVar20;
      for (lVar23 = *(long *)(param_2[9] + 8); lVar23 != 0; lVar23 = lVar23 + -1) {
        FUN_100e3b46c(lVar17);
        lVar17 = lVar17 + 0x270;
      }
      if (lVar30 != 0) {
        _free(lVar20);
      }
    }
    lVar30 = *(long *)param_2[7];
    if (lVar30 != -0x8000000000000000) {
      lVar20 = *(long *)(param_2[7] + 8);
      lVar17 = lVar20;
      for (lVar23 = *(long *)param_2[8]; lVar23 != 0; lVar23 = lVar23 + -1) {
        FUN_100e3b46c(lVar17);
        lVar17 = lVar17 + 0x270;
      }
      if (lVar30 != 0) {
        _free(lVar20);
      }
    }
    lVar17 = *(long *)(param_2[1] + 8);
    lVar30 = lVar17;
    for (lVar20 = *(long *)param_2[2]; lVar20 != 0; lVar20 = lVar20 + -1) {
      FUN_100cc1c58(lVar30);
      lVar30 = lVar30 + 0x140;
    }
    if (*(long *)param_2[1] != 0) {
      _free(lVar17);
    }
    lVar17 = *(long *)param_2[3];
    lVar30 = lVar17;
    for (lVar20 = *(long *)(param_2[3] + 8); lVar20 != 0; lVar20 = lVar20 + -1) {
      FUN_100e0649c(lVar30);
      lVar30 = lVar30 + 0x80;
    }
    if (*(long *)(param_2[2] + 8) != 0) {
      _free(lVar17);
    }
    lVar17 = *(long *)param_2[6];
    lVar30 = *(long *)(param_2[6] + 8) + 1;
    lVar20 = lVar17;
    while (lVar30 = lVar30 + -1, lVar30 != 0) {
      FUN_100dea5d4(lVar20);
      lVar20 = lVar20 + 0x1a8;
    }
    uVar29 = 0x8000000000000020;
    if (*(long *)(param_2[5] + 8) != 0) {
      _free(lVar17);
    }
  }
  param_2[0x16][10] = 0;
  uVar14 = 1;
  *param_1 = uVar29;
  param_1[1] = pcVar27;
LAB_10057d428:
  param_2[0x16][0xb] = uVar14;
  return;
LAB_10057cf14:
  uVar19 = 0xffffffffffffffff;
  pbVar25 = (byte *)(lVar24 + 0xc);
  uVar26 = (ulong)*(ushort *)(lVar24 + 10);
  do {
    uVar22 = (ulong)*(ushort *)(lVar24 + 10);
    if (uVar26 == 0) goto LAB_10057cf58;
    cVar9 = *pbVar25 < 0x17;
    if (0x17 < *pbVar25) {
      cVar9 = -1;
    }
    uVar26 = uVar26 - 1;
    uVar19 = uVar19 + 1;
    pbVar25 = pbVar25 + 1;
  } while (cVar9 == '\x01');
  uVar22 = uVar19;
  if (cVar9 == '\0') goto LAB_10057cf70;
LAB_10057cf58:
  if (lVar21 == 0) goto LAB_10057cfc8;
  lVar21 = lVar21 + -1;
  lVar24 = *(long *)(lVar24 + uVar22 * 8 + 0x18);
  goto LAB_10057cf14;
LAB_10057cf70:
  uVar19 = 0xffffffffffffffff;
  pbVar25 = (byte *)(lVar17 + 0xc);
  uVar26 = (ulong)*(ushort *)(lVar17 + 10);
  do {
    uVar22 = (ulong)*(ushort *)(lVar17 + 10);
    if (uVar26 == 0) goto LAB_10057cfb4;
    cVar9 = *pbVar25 < 0x1d;
    if (0x1d < *pbVar25) {
      cVar9 = -1;
    }
    uVar26 = uVar26 - 1;
    uVar19 = uVar19 + 1;
    pbVar25 = pbVar25 + 1;
  } while (cVar9 == '\x01');
  uVar22 = uVar19;
  if (cVar9 == '\0') {
    if (*(long *)(param_2[8] + 8) == -0x8000000000000000) {
      pppplStack_640 = (long ****)0x8000000000000000;
      goto LAB_10057d13c;
    }
    lVar30 = *(long *)(lVar30 + 0x788);
    puVar1 = (undefined1 *)0x0;
    if (*(long *)(param_2[0xb] + 8) != -0x7ffffffffffffffd) {
      puVar1 = param_2[0xb] + 8;
    }
    uVar29 = *(undefined8 *)(param_2[9] + 8);
    *(undefined8 *)param_2[0x1b] = *(undefined8 *)param_2[9];
    *(undefined8 *)(param_2[0x1b] + 8) = uVar29;
    *(undefined1 **)param_2[0x1c] = puVar1;
    *(long *)(param_2[0x1d] + 8) = lVar30 + 0x10;
    param_2[0x1e][1] = 0;
    goto LAB_10057c5c0;
  }
LAB_10057cfb4:
  if (lVar18 == 0) goto LAB_10057cfc8;
  lVar17 = *(long *)(lVar17 + uVar22 * 8 + 0x18);
  lVar18 = lVar18 + -1;
  goto LAB_10057cf70;
}

