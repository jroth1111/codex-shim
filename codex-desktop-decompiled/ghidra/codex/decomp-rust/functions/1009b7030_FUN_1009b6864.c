
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009b6864(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  undefined4 *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bVar19;
  ulong extraout_x17;
  ulong extraout_x17_00;
  long *unaff_x21;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  byte bVar25;
  long lVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  long lVar27;
  undefined1 auVar34 [16];
  undefined8 uStack_590;
  long lStack_588;
  code *pcStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  undefined4 *puStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined4 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  code *pcStack_398;
  long lStack_390;
  code *pcStack_388;
  code *pcStack_358;
  long lStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 *puStack_270;
  undefined8 uStack_268;
  ulong uStack_1c8;
  long *plStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long alStack_98 [5];
  
  bVar19 = *(byte *)(param_1 + 0x2d);
  if (bVar19 < 2) {
    if (bVar19 != 0) {
      FUN_107c05cc0(&UNK_10b229870);
LAB_1009b6e74:
      uVar10 = FUN_107c05cc4(&UNK_10b229870);
      FUN_100e4c600(alStack_98);
      if (unaff_x21 != (long *)0x0) {
        lVar5 = *unaff_x21;
        *unaff_x21 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_120);
        }
      }
      __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E();
      FUN_100e50da4(param_1 + 0x1d);
      if ((*(byte *)((long)param_1 + 0x169) & 1) != 0) {
        FUN_100e4c600(param_1 + 0x1c);
      }
      *(undefined1 *)((long)param_1 + 0x169) = 0;
      if (((*(byte *)((long)param_1 + 0x16a) & 1) != 0) &&
         (plVar7 = (long *)param_1[0x1a], plVar7 != (long *)0x0)) {
        lVar5 = *plVar7;
        *plVar7 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      *(undefined1 *)((long)param_1 + 0x16a) = 0;
      if (((*(byte *)((long)param_1 + 0x16b) & 1) != 0) &&
         (plVar7 = (long *)param_1[0x18], plVar7 != (long *)0x0)) {
        lVar5 = *plVar7;
        *plVar7 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      *(undefined1 *)((long)param_1 + 0x16b) = 0;
      if (((*(byte *)((long)param_1 + 0x16c) & 1) != 0) && (param_1[0xf] != -0x7ffffffffffffffb)) {
        FUN_100de6690();
      }
      *(undefined1 *)((long)param_1 + 0x16c) = 0;
      *(undefined1 *)(param_1 + 0x2d) = 2;
      __Unwind_Resume(uVar10);
      FUN_107c05ccc();
      puVar11 = (undefined8 *)FUN_107c05ccc();
      bVar19 = *(byte *)(puVar11 + 0x34);
      if (bVar19 < 2) {
        if (bVar19 == 0) {
          uVar10 = puVar11[0x16];
          *(undefined1 *)((long)puVar11 + 0x1a1) = 1;
          lVar26 = puVar11[0x18];
          lVar27 = puVar11[0x17];
          uStack_508 = puVar11[0x11];
          uStack_510 = puVar11[0x10];
          uStack_4f8 = puVar11[0x13];
          uStack_500 = puVar11[0x12];
          uStack_4e8 = puVar11[0x15];
          uStack_4f0 = puVar11[0x14];
          uStack_548 = puVar11[9];
          uStack_550 = puVar11[8];
          uStack_538 = puVar11[0xb];
          uStack_540 = puVar11[10];
          uStack_528 = puVar11[0xd];
          lVar9 = puVar11[0xc];
          uStack_518 = puVar11[0xf];
          uStack_520 = puVar11[0xe];
          lStack_588 = puVar11[1];
          uStack_590 = *puVar11;
          lVar17 = puVar11[3];
          pcStack_580 = (code *)puVar11[2];
          uStack_568 = puVar11[5];
          uStack_570 = puVar11[4];
          uStack_558 = puVar11[7];
          uStack_560 = puVar11[6];
          lVar5 = 1;
          if (lVar9 != -0x7ffffffffffffffb) {
            lVar5 = 2;
          }
          cVar28 = (char)uStack_4e8;
          uVar16 = uStack_4e8 & 0xff;
          if ((char)uStack_4e8 != '\x02') {
            lVar5 = lVar5 + 1;
          }
          if (lVar17 != -0x8000000000000000) {
            lVar5 = lVar5 + 1;
          }
          lStack_578 = lVar17;
          lStack_530 = lVar9;
          pauVar12 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar12[1][0] == '\x01') {
            auVar34 = *pauVar12;
          }
          else {
            auVar34 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar12 + 8) = auVar34._8_8_;
            pauVar12[1][0] = 1;
          }
          *(long *)*pauVar12 = auVar34._0_8_ + 1;
          FUN_105dc99f8(&lStack_2c0,lVar5,auVar34._0_8_,auVar34._8_8_);
          pcVar4 = pcStack_580;
          lVar5 = lStack_588;
          lStack_278 = -0x8000000000000000;
          if (lStack_2c0 == -0x7fffffffffffffff) {
            puVar11[0x19] = 0x8000000000000005;
            puVar11[0x1a] = lStack_2b8;
          }
          else {
            lStack_428 = lStack_288;
            lStack_430 = lStack_290;
            lStack_418 = -0x8000000000000000;
            lStack_420 = lStack_280;
            uStack_408 = uStack_268;
            puStack_410 = puStack_270;
            lStack_448 = lStack_2a8;
            lStack_450 = lStack_2b0;
            lStack_438 = lStack_298;
            lStack_440 = lStack_2a0;
            lStack_460 = lStack_2c0;
            lStack_458 = lStack_2b8;
            if (lStack_2c0 == -0x8000000000000000) {
LAB_1009b7174:
              lStack_2c0 = 10;
              lVar13 = FUN_107c05dbc(&lStack_2c0,0,0);
            }
            else {
              puVar14 = (undefined4 *)_malloc(7);
              if (puVar14 == (undefined4 *)0x0) {
                func_0x0001087c9084(1,7);
                goto LAB_1009b76e0;
              }
              *(undefined4 *)((long)puVar14 + 3) = 0x746e6574;
              *puVar14 = 0x746e6f63;
              if ((lStack_418 != -0x8000000000000000) && (lStack_418 != 0)) {
                _free(puStack_410);
              }
              uStack_408 = 7;
              lStack_418 = -0x8000000000000000;
              uStack_3a8 = 7;
              uStack_3b8 = 7;
              lVar15 = (long)pcVar4 * 0x48;
              puStack_410 = puVar14;
              puStack_3b0 = puVar14;
              if ((code *)0x1c71c71c71c71c7 < pcVar4) {
                uVar10 = 0;
LAB_1009b7408:
                func_0x0001087c9084(uVar10,lVar15);
                goto LAB_1009b76e0;
              }
              if (lVar15 == 0) {
                pcStack_358 = (code *)0x0;
                lStack_350 = 8;
              }
              else {
                lStack_350 = _malloc(lVar15);
                pcStack_358 = pcVar4;
                if (lStack_350 == 0) {
                  uVar10 = 8;
                  goto LAB_1009b7408;
                }
              }
              pcStack_348 = (code *)0x0;
              if (pcVar4 != (code *)0x0) {
                pcStack_348 = (code *)0x0;
                lVar15 = (long)pcVar4 * 0x118;
LAB_1009b74d4:
                FUN_100ecc60c(&lStack_2c0,lVar5);
                lVar13 = lStack_2b8;
                pcVar4 = pcStack_348;
                lVar3 = lStack_350;
                if (lStack_2c0 != -0x7ffffffffffffffb) goto code_r0x0001009b74ec;
                pcVar4 = pcStack_348 + 1;
                lVar5 = lStack_350;
                while (pcVar4 = pcVar4 + -1, pcVar4 != (code *)0x0) {
                  FUN_100de6690(lVar5);
                  lVar5 = lVar5 + 0x48;
                }
                if (pcStack_358 != (code *)0x0) {
                  _free(lVar3);
                }
                _free(puStack_3b0);
                goto LAB_1009b7190;
              }
LAB_1009b755c:
              pcStack_388 = pcStack_348;
              lStack_390 = lStack_350;
              puStack_3a0 = (undefined8 *)0x8000000000000004;
              pcStack_398 = pcStack_358;
              FUN_101497a9c(&lStack_2c0,&lStack_460,&uStack_3b8,&puStack_3a0);
              lStack_3f8 = lStack_2b0;
              lStack_400 = lStack_2b8;
              lStack_3e8 = lStack_2a0;
              lStack_3f0 = lStack_2a8;
              lStack_3d8 = lStack_290;
              lStack_3e0 = lStack_298;
              lStack_3c8 = lStack_280;
              lStack_3d0 = lStack_288;
              lStack_3c0 = lStack_278;
              if (lStack_2b8 != -0x7ffffffffffffffb) {
                FUN_100de6690(&lStack_400);
              }
              if ((lVar9 == -0x7ffffffffffffffb) ||
                 (lVar13 = FUN_10148a714(&lStack_460,&UNK_108cadf7d,0x11,&lStack_530), lVar13 == 0))
              {
                if (cVar28 != '\x02') {
                  if (lStack_460 == -0x8000000000000000) goto LAB_1009b7174;
                  lVar13 = func_0x0001006384d0(&lStack_460,&UNK_108cadf8e,7,uVar16);
                  if (lVar13 != 0) goto LAB_1009b7190;
                }
                if (lVar17 != -0x8000000000000000) {
                  if (lStack_460 == -0x8000000000000000) goto LAB_1009b7174;
                  lVar13 = FUN_10063f7f8(&lStack_460,&lStack_578);
                  if (lVar13 != 0) goto LAB_1009b7190;
                }
                lStack_298 = lStack_438;
                lStack_2a0 = lStack_440;
                lStack_288 = lStack_428;
                lStack_290 = lStack_430;
                lStack_278 = lStack_418;
                lStack_280 = lStack_420;
                uStack_268 = uStack_408;
                puStack_270 = puStack_410;
                lStack_2b8 = lStack_458;
                lStack_2c0 = lStack_460;
                lStack_2a8 = lStack_448;
                lStack_2b0 = lStack_450;
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (puVar11 + 0x19,&lStack_2c0);
                goto LAB_1009b719c;
              }
            }
LAB_1009b7190:
            puVar11[0x19] = 0x8000000000000005;
            puVar11[0x1a] = lVar13;
            FUN_100e040f0(&lStack_460);
          }
LAB_1009b719c:
          FUN_100ded07c(&uStack_590);
          if (puVar11[0x19] != -0x7ffffffffffffffb) {
            uStack_490 = puVar11[0x21];
            uStack_4b8 = puVar11[0x1c];
            uStack_4c0 = puVar11[0x1b];
            uStack_4a8 = puVar11[0x1e];
            uStack_4b0 = puVar11[0x1d];
            uStack_498 = puVar11[0x20];
            uStack_4a0 = puVar11[0x1f];
            uStack_4c8 = puVar11[0x1a];
            lStack_4d0 = puVar11[0x19];
            *(undefined1 *)((long)puVar11 + 0x1a1) = 0;
            uStack_4d8 = 0x8000000000000003;
            lStack_488 = lVar27;
            lStack_480 = lVar26;
            lStack_2c0 = lStack_4d0;
            lStack_2b8 = uStack_4c8;
            lStack_2b0 = uStack_4c0;
            lStack_2a8 = uStack_4b8;
            lStack_2a0 = uStack_4b0;
            lStack_298 = uStack_4a8;
            lStack_290 = uStack_4a0;
            lStack_288 = uStack_498;
            lStack_280 = uStack_490;
            lStack_278 = lVar27;
            puStack_270 = (undefined4 *)lVar26;
            uVar10 = func_0x000100fd3924(&lStack_2c0,uVar10,&uStack_4d8);
            if (lStack_2c0 != -0x7ffffffffffffffc) {
              uVar10 = FUN_100e30e98(&lStack_2c0);
            }
            goto LAB_1009b72c4;
          }
          puStack_3a0 = puVar11 + 0x22;
          puVar11[0x22] = puVar11[0x1a];
          *(undefined1 *)((long)puVar11 + 0x1a1) = 0;
          pcStack_398 = 
          __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          lStack_400 = lVar27;
          lStack_3f8 = lVar26;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_2c0,s_failed_to_serialize_response__108ac9ec1,&puStack_3a0);
          lStack_458 = lStack_2b8;
          lStack_460 = lStack_2c0;
          lStack_450 = lStack_2b0;
          puVar11[0x24] = lStack_2b8;
          puVar11[0x23] = lStack_2c0;
          puVar11[0x25] = lStack_2b0;
          puVar11[0x26] = 0x8000000000000005;
          *(undefined4 *)(puVar11 + 0x2f) = 0xffff80a5;
          puVar11[0x30] = uVar10;
          puVar11[0x32] = lVar26;
          puVar11[0x31] = lVar27;
          *(undefined1 *)(puVar11 + 0x33) = 0;
LAB_1009b7224:
          uStack_2d0 = puVar11[0x32];
          uStack_2d8 = puVar11[0x31];
          uStack_2f8 = puVar11[0x2c];
          uStack_300 = puVar11[0x2b];
          uStack_2e8 = puVar11[0x2e];
          uStack_2f0 = puVar11[0x2d];
          uStack_2e0 = puVar11[0x2f];
          uStack_338 = puVar11[0x24];
          uStack_340 = puVar11[0x23];
          uStack_328 = puVar11[0x26];
          uStack_330 = puVar11[0x25];
          uStack_318 = puVar11[0x28];
          uStack_320 = puVar11[0x27];
          uStack_308 = puVar11[0x2a];
          uStack_310 = puVar11[0x29];
          func_0x000100fd3924(&lStack_2c0,uVar10,&uStack_340);
          if (lStack_2c0 != -0x7ffffffffffffffc) {
            FUN_100e30e98(&lStack_2c0);
          }
          *(undefined1 *)(puVar11 + 0x33) = 1;
          plVar7 = (long *)puVar11[0x22];
          if (*plVar7 == 1) {
            uVar16 = plVar7[1];
            if ((uVar16 & 3) == 1) {
              puVar20 = (undefined8 *)(uVar16 - 1);
              uVar10 = *puVar20;
              puVar23 = *(undefined8 **)(uVar16 + 7);
              pcVar4 = (code *)*puVar23;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar10);
              }
              if (puVar23[1] != 0) {
                _free(uVar10);
              }
              goto LAB_1009b72a0;
            }
          }
          else if ((*plVar7 == 0) && (plVar7[2] != 0)) {
            puVar20 = (undefined8 *)plVar7[1];
LAB_1009b72a0:
            _free(puVar20);
          }
          uVar10 = _free(plVar7);
LAB_1009b72c4:
          *(undefined1 *)((long)puVar11 + 0x1a1) = 0;
          *(undefined1 *)(puVar11 + 0x34) = 1;
          return uVar10;
        }
        FUN_107c05cc0(&UNK_10b229888);
LAB_1009b76b8:
        FUN_107c05cc4(&UNK_10b229888);
      }
      else {
        if (bVar19 != 3) goto LAB_1009b76b8;
        if (*(char *)(puVar11 + 0x33) == '\0') {
          uVar10 = puVar11[0x30];
          goto LAB_1009b7224;
        }
        if (*(char *)(puVar11 + 0x33) == '\x01') {
          FUN_107c05cc0(&UNK_10b229858);
          goto LAB_1009b76e0;
        }
      }
      FUN_107c05cc4(&UNK_10b229858);
LAB_1009b76e0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b76e4);
      (*pcVar4)();
    }
    param_1[0x12] = param_1[3];
    param_1[0x11] = param_1[2];
    param_1[0x14] = param_1[5];
    param_1[0x13] = param_1[4];
    *(undefined4 *)((long)param_1 + 0x169) = 0x1000000;
    param_1[0x16] = param_1[7];
    param_1[0x15] = param_1[6];
    param_1[0xd] = param_1[10];
    param_1[0xc] = param_1[9];
    param_1[0xe] = param_1[0xb];
    param_1[0x17] = param_1[8];
    param_1[0x10] = param_1[1];
    param_1[0xf] = *param_1;
    plVar7 = (long *)(param_1[9] + 8);
    lVar5 = *plVar7;
    *plVar7 = lVar5 + 1;
    param_1[0x18] = 0;
    param_1[0x19] = lVar5;
    param_1[0x1b] = param_1[0x19];
    param_1[0x1a] = param_1[0x18];
    *(undefined2 *)((long)param_1 + 0x16a) = 0x101;
    lStack_118 = 1;
    plStack_120 = (long *)0x1;
    lStack_e8 = -0x7ffffffffffffffb;
    lStack_f0 = 0;
    plVar7 = (long *)_malloc(0x80);
    if (plVar7 == (long *)0x0) {
      func_0x0001087c906c(8,0x80);
      goto LAB_1009b6e18;
    }
    plVar7[9] = lStack_d8;
    plVar7[8] = lStack_e0;
    plVar7[0xb] = lStack_c8;
    plVar7[10] = lStack_d0;
    plVar7[0xd] = lStack_b8;
    plVar7[0xc] = lStack_c0;
    plVar7[0xf] = lStack_a8;
    plVar7[0xe] = lStack_b0;
    plVar7[1] = lStack_118;
    *plVar7 = (long)plStack_120;
    plVar7[3] = lStack_108;
    plVar7[2] = lStack_110;
    plVar7[5] = lStack_f8;
    plVar7[4] = lStack_100;
    plVar7[7] = lStack_e8;
    plVar7[6] = lStack_f0;
    lVar5 = *plVar7;
    *plVar7 = lVar5 + 1;
    if (lVar5 < 0) goto LAB_1009b6e18;
    *(undefined1 *)((long)param_1 + 0x169) = 1;
    param_1[0x1c] = plVar7;
    param_1[0x1d] = plVar7;
    param_1[0x1e] = param_1[0xc] + 0x10;
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else if (bVar19 != 3) goto LAB_1009b6e74;
  pcVar8 = (char *)FUN_100fd3e50(param_1 + 0x1e,param_2);
  if (pcVar8 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x2d) = 3;
    return 1;
  }
  if (((*(char *)(param_1 + 0x2c) == '\x03') && (*(char *)(param_1 + 0x2b) == '\x03')) &&
     (*(char *)(param_1 + 0x22) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (param_1 + 0x23);
    if (param_1[0x24] != 0) {
      (**(code **)(param_1[0x24] + 0x18))(param_1[0x25]);
    }
  }
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  lVar9 = param_1[0x19];
  plVar7 = (long *)param_1[0x18];
  *(undefined1 *)((long)param_1 + 0x169) = 0;
  lVar5 = param_1[0x1c];
  plStack_120 = plVar7;
  lStack_118 = lVar9;
  alStack_98[0] = lVar5;
  auVar34 = FUN_100e8ec1c(*(undefined8 *)(pcVar8 + 0x48),*(undefined8 *)(pcVar8 + 0x50),plVar7,lVar9
                         );
  uVar10 = auVar34._8_8_;
  uVar16 = extraout_x17;
  if (*(long *)(pcVar8 + 0x38) == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6507b54e57ba0d1cE
              (pcVar8 + 0x28,1,pcVar8 + 0x48,1);
    uVar10 = extraout_x1_03;
    uVar16 = extraout_x17_00;
  }
  plVar1 = *(long **)(pcVar8 + 0x28);
  uVar18 = *(ulong *)(pcVar8 + 0x30);
  bVar19 = auVar34[7] >> 1;
  bVar2 = false;
  if (plVar7 == (long *)0x0) {
    lVar17 = 0;
    uVar24 = auVar34._0_8_ & uVar18;
    lVar27 = *(long *)((long)plVar1 + uVar24);
    uVar21 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar19),
                      CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar19),
                               CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar19),
                                        CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar19),
                                                 CONCAT13(-((byte)((ulong)lVar27 >> 0x18) == bVar19)
                                                          ,CONCAT12(-((byte)((ulong)lVar27 >> 0x10)
                                                                     == bVar19),
                                                                    CONCAT11(-((byte)((ulong)lVar27
                                                                                     >> 8) == bVar19
                                                                              ),-((byte)lVar27 ==
                                                                                 bVar19)))))))) &
             0x8080808080808080;
    uStack_1c8 = uVar16;
joined_r0x0001009b6b6c:
    while (uVar21 == 0) {
      cVar28 = (char)((ulong)lVar27 >> 8);
      cVar29 = (char)((ulong)lVar27 >> 0x10);
      cVar30 = (char)((ulong)lVar27 >> 0x18);
      cVar31 = (char)((ulong)lVar27 >> 0x20);
      cVar32 = (char)((ulong)lVar27 >> 0x28);
      cVar33 = (char)((ulong)lVar27 >> 0x30);
      if (bVar2) {
LAB_1009b6bcc:
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar27 >> 0x38) == -1),
                                     CONCAT16(-(cVar33 == -1),
                                              CONCAT15(-(cVar32 == -1),
                                                       CONCAT14(-(cVar31 == -1),
                                                                CONCAT13(-(cVar30 == -1),
                                                                         CONCAT12(-(cVar29 == -1),
                                                                                  CONCAT11(-(cVar28 
                                                  == -1),-((char)lVar27 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_1009b6cac;
        bVar2 = true;
      }
      else {
        uVar16 = CONCAT17(-(lVar27 < 0),
                          CONCAT16(-(cVar33 < '\0'),
                                   CONCAT15(-(cVar32 < '\0'),
                                            CONCAT14(-(cVar31 < '\0'),
                                                     CONCAT13(-(cVar30 < '\0'),
                                                              CONCAT12(-(cVar29 < '\0'),
                                                                       CONCAT11(-(cVar28 < '\0'),
                                                                                -((char)lVar27 <
                                                                                 '\0'))))))));
        bVar2 = false;
        if (uVar16 != 0) {
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uStack_1c8 = uVar24 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar18;
          goto LAB_1009b6bcc;
        }
      }
      lVar17 = lVar17 + 8;
      uVar24 = lVar17 + uVar24 & uVar18;
      lVar27 = *(long *)((long)plVar1 + uVar24);
      uVar21 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar19),
                        CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar19),
                                 CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar19),
                                          CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar19),
                                                   CONCAT13(-((byte)((ulong)lVar27 >> 0x18) ==
                                                             bVar19),CONCAT12(-((byte)((ulong)lVar27
                                                                                      >> 0x10) ==
                                                                               bVar19),CONCAT11(-((
                                                  byte)((ulong)lVar27 >> 8) == bVar19),
                                                  -((byte)lVar27 == bVar19)))))))) &
               0x8080808080808080;
    }
    uVar16 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar24 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar18;
    if ((plVar1[uVar16 * -3 + -3] != 0) || (lVar9 != plVar1[uVar16 * -3 + -2])) {
      uVar21 = uVar21 - 1 & uVar21;
      goto joined_r0x0001009b6b6c;
    }
    plVar22 = (long *)plVar1[uVar16 * -3 + -1];
    plVar1[uVar16 * -3 + -1] = lVar5;
  }
  else {
    lVar17 = 0;
    uVar21 = auVar34._0_8_ & uVar18;
    lVar27 = *(long *)((long)plVar1 + uVar21);
    uVar16 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar19),
                      CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar19),
                               CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar19),
                                        CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar19),
                                                 CONCAT13(-((byte)((ulong)lVar27 >> 0x18) == bVar19)
                                                          ,CONCAT12(-((byte)((ulong)lVar27 >> 0x10)
                                                                     == bVar19),
                                                                    CONCAT11(-((byte)((ulong)lVar27
                                                                                     >> 8) == bVar19
                                                                              ),-((byte)lVar27 ==
                                                                                 bVar19)))))))) &
             0x8080808080808080;
joined_r0x0001009b6a38:
    while (uVar16 == 0) {
      cVar28 = (char)((ulong)lVar27 >> 8);
      cVar29 = (char)((ulong)lVar27 >> 0x10);
      cVar30 = (char)((ulong)lVar27 >> 0x18);
      cVar31 = (char)((ulong)lVar27 >> 0x20);
      cVar32 = (char)((ulong)lVar27 >> 0x28);
      cVar33 = (char)((ulong)lVar27 >> 0x30);
      if (bVar2) {
LAB_1009b6ad4:
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar27 >> 0x38) == -1),
                                     CONCAT16(-(cVar33 == -1),
                                              CONCAT15(-(cVar32 == -1),
                                                       CONCAT14(-(cVar31 == -1),
                                                                CONCAT13(-(cVar30 == -1),
                                                                         CONCAT12(-(cVar29 == -1),
                                                                                  CONCAT11(-(cVar28 
                                                  == -1),-((char)lVar27 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_1009b6cac;
        bVar2 = true;
      }
      else {
        uVar16 = CONCAT17(-(lVar27 < 0),
                          CONCAT16(-(cVar33 < '\0'),
                                   CONCAT15(-(cVar32 < '\0'),
                                            CONCAT14(-(cVar31 < '\0'),
                                                     CONCAT13(-(cVar30 < '\0'),
                                                              CONCAT12(-(cVar29 < '\0'),
                                                                       CONCAT11(-(cVar28 < '\0'),
                                                                                -((char)lVar27 <
                                                                                 '\0'))))))));
        if (uVar16 != 0) {
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uStack_1c8 = uVar21 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar18;
          goto LAB_1009b6ad4;
        }
        bVar2 = false;
      }
      lVar17 = lVar17 + 8;
      uVar21 = lVar17 + uVar21 & uVar18;
      lVar27 = *(long *)((long)plVar1 + uVar21);
      uVar16 = CONCAT17(-((byte)((ulong)lVar27 >> 0x38) == bVar19),
                        CONCAT16(-((byte)((ulong)lVar27 >> 0x30) == bVar19),
                                 CONCAT15(-((byte)((ulong)lVar27 >> 0x28) == bVar19),
                                          CONCAT14(-((byte)((ulong)lVar27 >> 0x20) == bVar19),
                                                   CONCAT13(-((byte)((ulong)lVar27 >> 0x18) ==
                                                             bVar19),CONCAT12(-((byte)((ulong)lVar27
                                                                                      >> 0x10) ==
                                                                               bVar19),CONCAT11(-((
                                                  byte)((ulong)lVar27 >> 8) == bVar19),
                                                  -((byte)lVar27 == bVar19)))))))) &
               0x8080808080808080;
    }
    uVar24 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar21 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & uVar18;
    if (((plVar1[uVar24 * -3 + -3] == 0) || (lVar9 != plVar1[uVar24 * -3 + -2])) ||
       (iVar6 = _memcmp(plVar7 + 2,plVar1[uVar24 * -3 + -3] + 0x10,lVar9), uVar10 = extraout_x1,
       iVar6 != 0)) {
      uVar16 = uVar16 - 1 & uVar16;
      goto joined_r0x0001009b6a38;
    }
    plVar22 = (long *)plVar1[uVar24 * -3 + -1];
    plVar1[uVar24 * -3 + -1] = lVar5;
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      *plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_120);
        uVar10 = extraout_x1_00;
      }
    }
  }
  plStack_1a0 = plVar22;
  if (plVar22 != (long *)0x0) {
    uVar16 = plVar22[6];
    do {
      uVar18 = uVar16;
      if (((uint)uVar18 >> 2 & 1) != 0) goto LAB_1009b6c70;
      uVar16 = plVar22[6];
    } while (uVar16 != uVar18);
    plVar22[6] = uVar18 | 2;
LAB_1009b6c70:
    if ((uVar18 & 5) == 1) {
      (**(code **)(plVar22[4] + 0x10))(plVar22[5]);
      uVar10 = extraout_x1_01;
    }
    lVar5 = *plVar22;
    *plVar22 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a6c7a360bc05152E(&plStack_1a0);
      uVar10 = extraout_x1_02;
    }
  }
  goto LAB_1009b6cf8;
code_r0x0001009b74ec:
  if (pcStack_348 == pcStack_358) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&pcStack_358);
  }
  lVar5 = lVar5 + 0x118;
  plVar7 = (long *)(lStack_350 + (long)pcVar4 * 0x48);
  plVar7[1] = lStack_2b8;
  *plVar7 = lStack_2c0;
  plVar7[3] = lStack_2a8;
  plVar7[2] = lStack_2b0;
  plVar7[5] = lStack_298;
  plVar7[4] = lStack_2a0;
  plVar7[7] = lStack_288;
  plVar7[6] = lStack_290;
  plVar7[8] = lStack_280;
  pcStack_348 = pcVar4 + 1;
  lVar15 = lVar15 + -0x118;
  if (lVar15 == 0) goto LAB_1009b755c;
  goto LAB_1009b74d4;
LAB_1009b6cac:
  uVar16 = (ulong)*(char *)((long)plVar1 + uStack_1c8);
  if (-1 < *(char *)((long)plVar1 + uStack_1c8)) {
    lVar9 = *plVar1;
    uVar16 = CONCAT17(-(lVar9 < 0),
                      CONCAT16(-((char)((ulong)lVar9 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar9 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar9 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar9 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar9 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar9 >> 8) < '\0'),-((char)lVar9 < '\0'))))))));
    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uStack_1c8 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
    uVar16 = (ulong)*(byte *)((long)plVar1 + uStack_1c8);
  }
  bVar19 = auVar34[7] >> 1;
  *(byte *)((long)plVar1 + uStack_1c8) = bVar19;
  *(byte *)((long)plVar1 + (uStack_1c8 - 8 & uVar18) + 8) = bVar19;
  *(long *)(pcVar8 + 0x40) = *(long *)(pcVar8 + 0x40) + 1;
  *(ulong *)(pcVar8 + 0x38) = *(long *)(pcVar8 + 0x38) - (uVar16 & 1);
  plVar1[uStack_1c8 * -3 + -2] = lStack_118;
  plVar1[uStack_1c8 * -3 + -3] = (long)plStack_120;
  plVar1[uStack_1c8 * -3 + -1] = lVar5;
LAB_1009b6cf8:
  if (*pcVar8 == '\0') {
    *pcVar8 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar8,uVar10,1000000000);
  }
  FUN_1060fa678(pcVar8,1,pcVar8);
  *(undefined1 *)((long)param_1 + 0x16a) = 0;
  lStack_118 = param_1[0x1b];
  plStack_120 = (long *)param_1[0x1a];
  uVar10 = param_1[0xd];
  lVar5 = param_1[0xe];
  if (lVar5 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = _malloc(lVar5);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,lVar5);
LAB_1009b6e18:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b6e1c);
      (*pcVar4)();
    }
  }
  _memcpy(lVar9,uVar10,lVar5);
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  uStack_160 = param_1[0x12];
  uStack_168 = param_1[0x11];
  uStack_150 = param_1[0x14];
  uStack_158 = param_1[0x13];
  uStack_140 = param_1[0x16];
  uStack_148 = param_1[0x15];
  uStack_138 = param_1[0x17];
  uStack_170 = param_1[0x10];
  uStack_178 = param_1[0xf];
  lStack_128 = lStack_118;
  plStack_130 = plStack_120;
  uStack_198 = 0x8000000000000001;
  lStack_190 = lVar5;
  lStack_188 = lVar9;
  lStack_180 = lVar5;
  func_0x000100fd3924(&plStack_120,param_1[0xc],&uStack_198);
  if (plStack_120 != (long *)0x8000000000000004) {
    FUN_100e30e98(&plStack_120);
  }
  *(undefined4 *)((long)param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return 0;
}

