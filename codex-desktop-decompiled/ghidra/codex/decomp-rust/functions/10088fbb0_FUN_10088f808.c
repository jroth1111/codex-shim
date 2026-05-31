
/* WARNING: Possible PIC construction at 0x00010088fca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010089022c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008903b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100890230) */
/* WARNING: Removing unreachable block (ram,0x00010089023c) */
/* WARNING: Removing unreachable block (ram,0x000100890254) */
/* WARNING: Removing unreachable block (ram,0x00010088fca8) */
/* WARNING: Removing unreachable block (ram,0x00010088fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010088fcd4) */
/* WARNING: Removing unreachable block (ram,0x0001008903b4) */
/* WARNING: Removing unreachable block (ram,0x0001008903c0) */
/* WARNING: Removing unreachable block (ram,0x0001008903dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088f808(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *extraout_x12;
  long *plVar24;
  long *extraout_x12_00;
  long *extraout_x13;
  long *plVar25;
  long *extraout_x13_00;
  long *plVar26;
  undefined8 unaff_x22;
  ulong *unaff_x23;
  undefined8 unaff_x24;
  long lVar27;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong uVar28;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined1 auStack_808 [440];
  undefined8 *******pppppppuStack_610;
  undefined8 uStack_608;
  undefined8 *******pppppppuStack_5c0;
  code *pcStack_5b8;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  undefined8 *******pppppppuStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined8 *******pppppppuStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  undefined8 *******pppppppuStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  undefined8 *******pppppppuStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2b8 [440];
  undefined8 ******ppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  bVar5 = *(byte *)(param_2 + 0x14);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      param_2[3] = param_2[1];
      param_2[4] = param_2[2];
      param_2[5] = *(long *)*param_2 + 0x10;
      *(undefined1 *)(param_2 + 0x13) = 0;
LAB_10088f85c:
      pcVar10 = (char *)FUN_100fd3e50(param_2 + 5,param_3);
      if (pcVar10 == (char *)0x0) {
        *param_1 = -0x7ffffffffffffffd;
        uVar17 = 3;
      }
      else {
        if (((*(char *)(param_2 + 0x13) == '\x03') && (*(char *)(param_2 + 0x12) == '\x03')) &&
           (*(char *)(param_2 + 9) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 10);
          if (param_2[0xb] != 0) {
            (**(code **)(param_2[0xb] + 0x18))(param_2[0xc]);
          }
        }
        __ZN16codex_app_server13thread_status16ThreadWatchState10status_for17h418044b1aeaeea0cE
                  (&lStack_48,pcVar10 + 0x28,param_2[3],param_2[4]);
        if (lStack_48 == -0x7ffffffffffffffd) {
          lVar18 = -0x8000000000000000;
        }
        else {
          lStack_58 = lStack_38;
          lStack_60 = lStack_40;
          lVar18 = lStack_48;
        }
        if (*pcVar10 == '\0') {
          *pcVar10 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar10,extraout_x1,1000000000);
        }
        FUN_1060fa678(pcVar10,1,pcVar10);
        *param_1 = lVar18;
        param_1[2] = lStack_58;
        param_1[1] = lStack_60;
        uVar17 = 1;
      }
      *(undefined1 *)(param_2 + 0x14) = uVar17;
      return;
    }
    FUN_107c05cc0(&UNK_10b224ae0);
  }
  else if (bVar5 == 3) goto LAB_10088f85c;
  FUN_107c05cc4(&UNK_10b224ae0);
  *(undefined1 *)(param_2 + 0x14) = 2;
  uVar11 = __Unwind_Resume();
  if (param_2[0xb] != 0) {
    (**(code **)(param_2[0xb] + 0x18))(param_2[0xc]);
  }
  *(undefined1 *)(param_2 + 0x14) = 2;
  __Unwind_Resume(uVar11);
  auVar35 = FUN_107c05ccc();
  puVar16 = auVar35._8_8_;
  uStack_68 = 0x10088f9d4;
  bVar5 = *(byte *)(puVar16 + 0x1b6);
  uStack_80 = uVar11;
  puStack_78 = param_2;
  pppuStack_70 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      puVar16[0x1b1] = puVar16[1];
      puVar16[0x1b2] = puVar16[2];
      puVar16[0x1b4] = *puVar16;
      *(undefined2 *)((long)puVar16 + 0xda9) = 0;
LAB_10088fa20:
      FUN_10088dcdc(auVar35._0_8_,puVar16 + 3);
      if (*auVar35._0_8_ == 2) {
        uVar17 = 3;
      }
      else {
        if ((*(char *)((long)puVar16 + 0xda9) == '\x03') &&
           (*(char *)((long)puVar16 + 0xd71) == '\x03')) {
          FUN_100ddc208(puVar16 + 3);
          *(undefined1 *)(puVar16 + 0x1ae) = 0;
        }
        uVar17 = 1;
      }
      *(undefined1 *)(puVar16 + 0x1b6) = uVar17;
      return;
    }
    FUN_107c05cc0(&UNK_10b224af8);
  }
  else if (bVar5 == 3) goto LAB_10088fa20;
  FUN_107c05cc4(&UNK_10b224af8);
  *(undefined1 *)(puVar16 + 0x1ae) = 0;
  *(undefined1 *)(puVar16 + 0x1b6) = 2;
  uVar11 = __Unwind_Resume();
  FUN_100cf29e4(puVar16 + 3);
  *(undefined1 *)(puVar16 + 0x1b6) = 2;
  __Unwind_Resume(uVar11);
  auVar35 = FUN_107c05ccc();
  puVar13 = auVar35._8_8_;
  uStack_88 = 0x10088fac0;
  bVar5 = *(byte *)(puVar13 + 0x1b6);
  uStack_a0 = uVar11;
  puStack_98 = puVar16;
  pppppuStack_90 = (undefined8 *****)&pppuStack_70;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      puVar13[0x1b1] = puVar13[1];
      puVar13[0x1b2] = puVar13[2];
      puVar13[0x1b4] = *puVar13;
      *(undefined2 *)((long)puVar13 + 0xda9) = 0x100;
LAB_10088fb10:
      FUN_10088dcdc(auVar35._0_8_,puVar13 + 3);
      if (*auVar35._0_8_ == 2) {
        uVar17 = 3;
      }
      else {
        if ((*(char *)((long)puVar13 + 0xda9) == '\x03') &&
           (*(char *)((long)puVar13 + 0xd71) == '\x03')) {
          FUN_100ddc208(puVar13 + 3);
          *(undefined1 *)(puVar13 + 0x1ae) = 0;
        }
        uVar17 = 1;
      }
      *(undefined1 *)(puVar13 + 0x1b6) = uVar17;
      return;
    }
    FUN_107c05cc0(&UNK_10b224b10);
  }
  else if (bVar5 == 3) goto LAB_10088fb10;
  FUN_107c05cc4(&UNK_10b224b10);
  *(undefined1 *)(puVar13 + 0x1ae) = 0;
  *(undefined1 *)(puVar13 + 0x1b6) = 2;
  puVar12 = (ulong *)__Unwind_Resume();
  FUN_100cf29e4(puVar13 + 3);
  *(undefined1 *)(puVar13 + 0x1b6) = 2;
  __Unwind_Resume(puVar12);
  auVar35 = FUN_107c05ccc();
  lVar18 = auVar35._8_8_;
  uVar11 = auVar35._0_8_;
  uStack_a8 = 0x10088fbb0;
  bVar5 = *(byte *)(lVar18 + 0x730);
  ppppppuStack_b0 = &pppppuStack_90;
  if (bVar5 < 2) {
    if (bVar5 != 0) {
      FUN_107c05cc0(&UNK_10b224b70);
      goto LAB_10088fd04;
    }
    unaff_x22 = *(undefined8 *)(lVar18 + 0x1d0);
    uStack_2e8 = *(undefined8 *)(lVar18 + 0x1e0);
    lStack_2f0 = *(long *)(lVar18 + 0x1d8);
    uStack_2d8 = *(undefined8 *)(lVar18 + 0x1f0);
    uStack_2e0 = *(undefined8 *)(lVar18 + 0x1e8);
    uStack_2c8 = *(undefined8 *)(lVar18 + 0x200);
    uStack_2d0 = *(undefined8 *)(lVar18 + 0x1f8);
    *(undefined2 *)(lVar18 + 0x732) = 0x101;
    _memcpy(auStack_2b8,lVar18,0x1b8);
    *(undefined1 *)(lVar18 + 0x731) = 1;
    unaff_x23 = *(ulong **)(lVar18 + 0x1b8);
    puVar12 = *(ulong **)(lVar18 + 0x1c0);
    unaff_x25 = *(undefined8 *)(lVar18 + 0x1c8);
    __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
              (lVar18 + 0x208,unaff_x22);
    unaff_x26 = *(undefined8 *)(lVar18 + 0x210);
    unaff_x27 = *(undefined8 *)(lVar18 + 0x218);
    *(undefined1 *)(lVar18 + 0x733) = 0;
    *(undefined2 *)(lVar18 + 0x731) = 0;
    _memcpy(lVar18 + 0x220,auStack_2b8,0x1b8);
    *(ulong **)(lVar18 + 0x3d8) = unaff_x23;
    *(ulong **)(lVar18 + 0x3e0) = puVar12;
    *(undefined8 *)(lVar18 + 1000) = unaff_x25;
    *(undefined8 *)(lVar18 + 0x3f0) = unaff_x22;
    *(undefined8 *)(lVar18 + 0x3f8) = unaff_x26;
    *(undefined8 *)(lVar18 + 0x400) = unaff_x27;
    *(undefined8 *)(lVar18 + 0x410) = uStack_2e8;
    *(long *)(lVar18 + 0x408) = lStack_2f0;
    *(undefined8 *)(lVar18 + 0x420) = uStack_2d8;
    *(undefined8 *)(lVar18 + 0x418) = uStack_2e0;
    *(undefined8 *)(lVar18 + 0x430) = uStack_2c8;
    *(undefined8 *)(lVar18 + 0x428) = uStack_2d0;
    *(undefined1 *)(lVar18 + 0x728) = 0;
    unaff_x24 = param_3;
LAB_10088fc9c:
    puVar16 = (undefined8 *)(lVar18 + 0x220);
    uVar30 = 0x10088fca8;
    plVar19 = &lStack_2f0;
    pppppppuVar29 = &ppppppuStack_b0;
  }
  else {
    if (bVar5 == 3) goto LAB_10088fc9c;
LAB_10088fd04:
    uVar11 = FUN_107c05cc4(&UNK_10b224b70);
    if ((*(char *)(lVar18 + 0x731) == '\x01') && (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0)) {
      _free(puVar12);
    }
    *(undefined1 *)(lVar18 + 0x731) = 0;
    if ((*(byte *)(lVar18 + 0x732) & 1) != 0) {
      FUN_100dff6cc(auStack_2b8);
    }
    *(undefined1 *)(lVar18 + 0x732) = 0;
    if ((*(char *)(lVar18 + 0x733) == '\x01') && (lStack_2f0 != 0)) {
      FUN_100cc2fb4(&lStack_2f0);
    }
    *(undefined1 *)(lVar18 + 0x733) = 0;
    *(undefined1 *)(lVar18 + 0x730) = 2;
    __Unwind_Resume(uVar11);
    auVar35 = FUN_107c05ccc();
    puVar15 = auVar35._8_8_;
    uStack_2f8 = 0x10088fda4;
    unaff_x23 = puVar15 + 0x200;
    bVar5 = (byte)puVar15[0x21c];
    pppppppuStack_300 = &ppppppuStack_b0;
    if (bVar5 < 2) {
      uStack_598 = param_3;
      if (bVar5 == 0) {
        *(undefined1 *)((long)puVar15 + 0x10e1) = 1;
        uStack_588 = *puVar15;
        uStack_590 = puVar15[1];
        uVar28 = puVar15[2];
        uVar21 = puVar15[3];
        auVar36 = __ZN16codex_app_server14config_manager13ConfigManager28current_thread_config_loader17h510a37b25a840537E
                            (uVar21);
        *(undefined1 (*) [16])(puVar15 + 4) = auVar36;
        if (lRam000000010b62c4d8 != 0) {
          pppppppuStack_408 =
               (undefined8 *******)
               &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          pppppppuStack_4c0 = &pppppppuStack_408;
          __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                    (0x10b62c4d8,1,&pppppppuStack_4c0,&UNK_10b234158,&UNK_10b2340c8);
        }
        uVar6 = uRam000000010b62c4d0;
        lVar18 = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
        lVar27 = *(long *)(uRam000000010b62c4d0 + 0x10);
        uStack_5a0 = *(ulong *)(uVar21 + 8);
        uStack_5a8 = *(ulong *)(uVar21 + 0x10);
        *(undefined1 *)((long)puVar15 + 0x10e1) = 0;
        __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
                  (puVar15 + 6,uVar21);
        uVar3 = puVar15[7];
        uVar4 = puVar15[8];
        FUN_1011b4ddc(&pppppppuStack_408,uVar21 + 0x18);
        uStack_410 = *(undefined1 *)(uVar21 + 0x130);
        uStack_438 = uStack_380;
        uStack_440 = uStack_388;
        uStack_428 = uStack_370;
        uStack_430 = uStack_378;
        uStack_418 = uStack_360;
        uStack_420 = uStack_368;
        uStack_478 = uStack_3c0;
        uStack_480 = uStack_3c8;
        uStack_468 = uStack_3b0;
        uStack_470 = uStack_3b8;
        uStack_458 = uStack_3a0;
        uStack_460 = uStack_3a8;
        uStack_448 = uStack_390;
        uStack_450 = uStack_398;
        uStack_4b8 = uStack_400;
        pppppppuStack_4c0 = pppppppuStack_408;
        uStack_4a8 = uStack_3f0;
        uStack_4b0 = uStack_3f8;
        uStack_498 = uStack_3e0;
        uStack_4a0 = uStack_3e8;
        uStack_488 = uStack_3d0;
        uStack_490 = uStack_3d8;
        auVar36 = __ZN16codex_app_server14config_manager13ConfigManager26current_cloud_requirements17h054f06d04600ac40E
                            (uVar21);
        lVar22 = *(long *)(puVar15[5] + 0x10);
        uStack_4f8 = uStack_438;
        uStack_500 = uStack_440;
        uStack_4e8 = uStack_428;
        uStack_4f0 = uStack_430;
        uStack_4d8 = uStack_418;
        uStack_4e0 = uStack_420;
        uStack_4d0 = CONCAT71(uStack_40f,uStack_410);
        uStack_538 = uStack_478;
        uStack_540 = uStack_480;
        uStack_528 = uStack_468;
        uStack_530 = uStack_470;
        uStack_518 = uStack_458;
        uStack_520 = uStack_460;
        uStack_508 = uStack_448;
        uStack_510 = uStack_450;
        uStack_578 = uStack_4b8;
        pppppppuStack_580 = pppppppuStack_4c0;
        uStack_568 = uStack_4a8;
        uStack_570 = uStack_4b0;
        uStack_558 = uStack_498;
        uStack_560 = uStack_4a0;
        uStack_548 = uStack_488;
        uStack_550 = uStack_490;
        puVar15[9] = uStack_588;
        puVar15[10] = uStack_590;
        puVar15[0xb] = uVar28;
        puVar15[0x1d] = uStack_438;
        puVar15[0x1c] = uStack_440;
        puVar15[0x1f] = uStack_428;
        puVar15[0x1e] = uStack_430;
        puVar15[0x21] = uStack_418;
        puVar15[0x20] = uStack_420;
        puVar15[0x15] = uStack_478;
        puVar15[0x14] = uStack_480;
        puVar15[0x17] = uStack_468;
        puVar15[0x16] = uStack_470;
        puVar15[0x19] = uStack_458;
        puVar15[0x18] = uStack_460;
        puVar15[0x1b] = uStack_448;
        puVar15[0x1a] = uStack_450;
        puVar15[0xd] = uStack_4b8;
        puVar15[0xc] = (ulong)pppppppuStack_4c0;
        puVar15[0xf] = uStack_4a8;
        puVar15[0xe] = uStack_4b0;
        puVar15[0x11] = uStack_498;
        puVar15[0x10] = uStack_4a0;
        puVar15[0x13] = uStack_488;
        puVar15[0x12] = uStack_490;
        puVar15[0x22] = uStack_4d0;
        puVar15[0x23] = lVar18 + (lVar27 - 1U & 0xfffffffffffffff0) + 0x10;
        puVar15[0x24] = uVar6;
        puVar15[0x25] = uStack_5a0;
        puVar15[0x26] = uStack_5a8;
        puVar15[0x27] = uVar3;
        puVar15[0x28] = uVar4;
        puVar15[0x29] = puVar15[4] + (lVar22 - 1U & 0xfffffffffffffff0) + 0x10;
        puVar15[0x2a] = puVar15[5];
        *(undefined1 (*) [16])(puVar15 + 0x2b) = auVar36;
        *(undefined1 *)(puVar15 + 0x191) = 0;
LAB_10088ff98:
        FUN_10073ec38(auVar35._0_8_,puVar15 + 9);
        lVar18 = *auVar35._0_8_;
        if (lVar18 != 3) {
          FUN_100d2cf64(puVar15 + 9);
          FUN_100e76384(puVar15 + 6);
          plVar19 = (long *)puVar15[4];
          lVar18 = *plVar19;
          *plVar19 = lVar18 + -1;
          LORelease();
          if (lVar18 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar15 + 4);
          }
          *(undefined1 *)((long)puVar15 + 0x10e1) = 0;
          lVar18 = 1;
        }
        *(char *)(puVar15 + 0x21c) = (char)lVar18;
        return;
      }
      FUN_107c05cc0(&UNK_10b224b88);
    }
    else if (bVar5 == 3) goto LAB_10088ff98;
    uVar11 = FUN_107c05cc4(&UNK_10b224b88);
    puVar12 = puVar15 + 4;
    lVar18 = *(long *)*puVar12;
    *(long *)*puVar12 = lVar18 + -1;
    LORelease();
    if (lVar18 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar12);
    }
    if (((*(byte *)((long)puVar15 + 0x10e1) & 1) != 0) && ((uStack_588 & 0x7fffffffffffffff) != 0))
    {
      _free(uStack_590);
    }
    *(undefined2 *)(puVar15 + 0x21c) = 2;
    __Unwind_Resume(uVar11);
    auVar35 = FUN_107c05ccc();
    puVar16 = auVar35._8_8_;
    uVar11 = auVar35._0_8_;
    pcStack_5b8 = FUN_10089011c;
    bVar5 = *(byte *)(puVar16 + 0xa9);
    pppppppuStack_5c0 = &pppppppuStack_300;
    if (bVar5 < 2) {
      if (bVar5 == 0) {
        *(undefined1 *)((long)puVar16 + 0x549) = 1;
        unaff_x23 = (ulong *)*puVar16;
        puVar12 = (ulong *)puVar16[1];
        unaff_x25 = puVar16[2];
        unaff_x22 = puVar16[3];
        __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
                  (puVar16 + 4,unaff_x22);
        *(undefined1 *)((long)puVar16 + 0x549) = 0;
        puVar16[7] = 0;
        puVar16[8] = 8;
        puVar16[10] = 0x8000000000000000;
        puVar16[9] = 0;
        puVar16[0xd] = 0x8000000000000000;
        puVar16[0x10] = 0x8000000000000000;
        puVar16[0x13] = 0x8000000000000000;
        puVar16[0x16] = 0x8000000000000000;
        puVar16[0x19] = 0x8000000000000000;
        puVar16[0x1c] = 0x8000000000000000;
        puVar16[0x1f] = 0x8000000000000000;
        puVar16[0x22] = 0x8000000000000000;
        puVar16[0x25] = 0x8000000000000000;
        puVar16[0x28] = 0x8000000000000000;
        puVar16[0x2b] = 0x8000000000000000;
        puVar16[0x2e] = 0x8000000000000000;
        puVar16[0x31] = 0x8000000000000000;
        puVar16[0x34] = 0x8000000000000001;
        puVar16[0x37] = 0x8000000000000003;
        *(undefined1 *)(puVar16 + 0x3c) = 2;
        *(undefined4 *)((long)puVar16 + 0x1e1) = 0x2020202;
        *(undefined2 *)((long)puVar16 + 0x1e5) = 0x303;
        *(undefined1 *)((long)puVar16 + 0x1e7) = 7;
        puVar16[0x3e] = unaff_x23;
        puVar16[0x3f] = puVar12;
        puVar16[0x40] = unaff_x25;
        puVar16[0x41] = unaff_x22;
        puVar16[0x42] = puVar16[5];
        puVar16[0x43] = puVar16[6];
        puVar16[0x44] = 0;
        *(undefined1 *)(puVar16 + 0xa8) = 0;
        unaff_x24 = param_3;
LAB_100890224:
        puVar16 = puVar16 + 7;
        uVar30 = 0x100890230;
        plVar19 = (long *)&stack0xfffffffffffffa00;
        pppppppuVar29 = &pppppppuStack_5c0;
        goto SUB_100890488;
      }
      FUN_107c05cc0(&UNK_10b224ba0);
    }
    else if (bVar5 == 3) goto LAB_100890224;
    uVar11 = FUN_107c05cc4(&UNK_10b224ba0);
    if ((*(char *)((long)puVar16 + 0x549) == '\x01') &&
       (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0)) {
      _free(puVar12);
    }
    *(undefined2 *)(puVar16 + 0xa9) = 2;
    __Unwind_Resume(uVar11);
    auVar35 = FUN_107c05ccc();
    lVar18 = auVar35._8_8_;
    puVar12 = auVar35._0_8_;
    uStack_608 = 0x1008902e4;
    pppppppuVar29 = &pppppppuStack_610;
    plVar19 = &lStack_840;
    bVar5 = *(byte *)(lVar18 + 0x718);
    pppppppuStack_610 = &pppppppuStack_5c0;
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        FUN_107c05cc0(&UNK_10b224bd0);
LAB_100890408:
        puVar12 = (ulong *)FUN_107c05cc4(&UNK_10b224bd0);
        if ((*(byte *)(lVar18 + 0x719) & 1) != 0) {
          FUN_100dff6cc(auStack_808);
        }
        *(undefined1 *)(lVar18 + 0x719) = 0;
        if ((*(char *)(lVar18 + 0x71a) == '\x01') && (lStack_840 != 0)) {
          FUN_100cc2fb4(&lStack_840);
        }
        *(undefined1 *)(lVar18 + 0x71a) = 0;
        *(undefined1 *)(lVar18 + 0x718) = 2;
        __Unwind_Resume(puVar12);
        uVar30 = 0x100890488;
        auVar36 = FUN_107c05ccc();
        puVar16 = auVar36._8_8_;
        auVar35._8_8_ = lVar18;
        auVar35._0_8_ = auVar36._0_8_;
        goto SUB_100890488;
      }
      unaff_x23 = (ulong *)(lVar18 + 0x719);
      uVar11 = *(undefined8 *)(lVar18 + 0x1b8);
      uStack_838 = *(undefined8 *)(lVar18 + 0x1c8);
      lStack_840 = *(long *)(lVar18 + 0x1c0);
      uStack_828 = *(undefined8 *)(lVar18 + 0x1d8);
      uStack_830 = *(undefined8 *)(lVar18 + 0x1d0);
      uStack_818 = *(undefined8 *)(lVar18 + 0x1e8);
      uStack_820 = *(undefined8 *)(lVar18 + 0x1e0);
      *(undefined2 *)unaff_x23 = 0x101;
      _memcpy(auStack_808,lVar18,0x1b8);
      __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
                (lVar18 + 0x1f0,uVar11);
      unaff_x24 = *(undefined8 *)(lVar18 + 0x1f8);
      unaff_x25 = *(undefined8 *)(lVar18 + 0x200);
      *(undefined2 *)unaff_x23 = 0;
      _memcpy(lVar18 + 0x208,auStack_808,0x1b8);
      *(undefined8 *)(lVar18 + 0x3c0) = 0x8000000000000000;
      *(undefined8 *)(lVar18 + 0x3d8) = uVar11;
      *(undefined8 *)(lVar18 + 0x3e0) = unaff_x24;
      *(undefined8 *)(lVar18 + 1000) = unaff_x25;
      *(undefined8 *)(lVar18 + 0x3f8) = uStack_838;
      *(long *)(lVar18 + 0x3f0) = lStack_840;
      *(undefined8 *)(lVar18 + 0x408) = uStack_828;
      *(undefined8 *)(lVar18 + 0x400) = uStack_830;
      *(undefined8 *)(lVar18 + 0x418) = uStack_818;
      *(undefined8 *)(lVar18 + 0x410) = uStack_820;
      *(undefined1 *)(lVar18 + 0x710) = 0;
      unaff_x22 = param_3;
    }
    else if (bVar5 != 3) goto LAB_100890408;
    puVar16 = (undefined8 *)(lVar18 + 0x208);
    uVar30 = 0x1008903b4;
    plVar19 = &lStack_840;
  }
SUB_100890488:
  plVar26 = auVar35._0_8_;
  *(undefined8 *)((long)plVar19 + -0x60) = unaff_x28;
  *(undefined8 *)((long)plVar19 + -0x58) = unaff_x27;
  *(undefined8 *)((long)plVar19 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar19 + -0x48) = unaff_x25;
  *(undefined8 *)((long)plVar19 + -0x40) = unaff_x24;
  *(ulong **)((long)plVar19 + -0x38) = unaff_x23;
  *(undefined8 *)((long)plVar19 + -0x30) = unaff_x22;
  *(undefined8 *)((long)plVar19 + -0x28) = uVar11;
  *(ulong **)((long)plVar19 + -0x20) = puVar12;
  *(long *)((long)plVar19 + -0x18) = auVar35._8_8_;
  *(undefined8 ********)((long)plVar19 + -0x10) = pppppppuVar29;
  *(undefined8 *)((long)plVar19 + -8) = uVar30;
  puVar7 = (undefined1 *)((long)plVar19 + -0x60);
  do {
    puVar9 = puVar7;
    *(undefined8 *)(puVar9 + -0x1000) = 0;
    puVar7 = puVar9 + -0x1000;
  } while (puVar9 + -0x1000 != (undefined1 *)((long)plVar19 + -0xa060));
  *(undefined8 *)(puVar9 + -0x1b20) = 0;
  bVar5 = *(byte *)(puVar16 + 0xa1);
  if (bVar5 < 2) {
    *(undefined8 *)(puVar9 + -0x1b10) = param_3;
    if (bVar5 != 0) {
      FUN_107c05cc0(&UNK_10b224be8);
      goto LAB_100890eb8;
    }
    puVar1 = (undefined4 *)((long)puVar16 + 0x509);
    lVar18 = puVar16[0x3b];
    puVar16[0x43] = puVar16[0x3a];
    lVar22 = puVar16[0x3c];
    uVar11 = puVar16[0x3d];
    uVar14 = puVar16[0x40];
    uVar30 = puVar16[0x3f];
    *(undefined8 *)(puVar9 + -0x1ae8) = puVar16[0x3e];
    *(undefined8 *)(puVar9 + -0x1af0) = uVar11;
    *(undefined8 *)(puVar9 + -0x1ad8) = uVar14;
    *(undefined8 *)(puVar9 + -0x1ae0) = uVar30;
    uVar11 = puVar16[0x41];
    *(undefined8 *)(puVar9 + -0x1ac8) = puVar16[0x42];
    *(undefined8 *)(puVar9 + -0x1ad0) = uVar11;
    _memcpy(puVar9 + -0x1ab8,puVar16,0x1b8);
    uVar11 = puVar16[0x38];
    *(undefined8 *)(puVar9 + -0x1af8) = puVar16[0x37];
    uVar30 = puVar16[0x39];
    *puVar1 = 0x10100;
    plVar19 = *(long **)(puVar9 + -0x1af0);
    if (plVar19 == (long *)0x0) {
      plVar19 = (long *)(*
                        ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                        )();
      if ((char)plVar19[2] == '\x01') {
        lVar27 = *plVar19;
        plVar24 = extraout_x12;
        plVar25 = extraout_x13;
      }
      else {
        auVar35 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        lVar27 = auVar35._0_8_;
        plVar19[1] = auVar35._8_8_;
        *(undefined1 *)(plVar19 + 2) = 1;
        plVar24 = extraout_x12_00;
        plVar25 = extraout_x13_00;
      }
      plVar20 = (long *)0x0;
      lVar31 = 0;
      uVar14 = 0;
      *plVar19 = lVar27 + 1;
      lVar27 = -1;
      plVar19 = (long *)&UNK_108c56c70;
    }
    else {
      lVar23 = *(long *)(puVar9 + -0x1ae8);
      plVar20 = *(long **)(puVar9 + -0x1ad8);
      lVar27 = *plVar19;
      plVar24 = plVar20;
      plVar25 = plVar20;
      lVar31 = 0;
      if (lVar23 != 0) {
        plVar24 = plVar19 + lVar23 * -0xc + -0xc;
        plVar25 = (long *)(lVar23 * 0x61 + 0x69);
        lVar31 = lVar23;
      }
      uVar14 = 0;
      if (lVar23 != 0) {
        uVar14 = 8;
      }
    }
    *(long **)(puVar9 + -0x1b08) = plVar26;
    *(undefined8 *)(puVar9 + 0x1d60) = uVar14;
    *(long **)(puVar9 + 0x1d68) = plVar25;
    *(long **)(puVar9 + 0x1d70) = plVar24;
    *(long **)(puVar9 + 0x1d78) = plVar19;
    *(ulong *)(puVar9 + 0x1d80) =
         CONCAT17(-(-1 < lVar27),
                  CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                           CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                    CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                             CONCAT13(-(-1 < (char)((ulong)lVar27 >> 0x18)),
                                                      CONCAT12(-(-1 < (char)((ulong)lVar27 >> 0x10))
                                                               ,CONCAT11(-(-1 < (char)((ulong)lVar27
                                                                                      >> 8)),
                                                                         -(-1 < (char)lVar27))))))))
         & 0x8080808080808080;
    *(long **)(puVar9 + 0x1d88) = plVar19 + 1;
    *(undefined **)(puVar9 + 0x1d90) = (undefined *)((long)plVar19 + lVar31 + 1);
    *(long **)(puVar9 + 0x1d98) = plVar20;
    *(long *)(puVar9 + 0x1da0) = lVar18;
    *(long *)(puVar9 + 0x1da8) = lVar18 + lVar22 * 0x68;
    func_0x00010042b804(puVar9 + -0x18e8,puVar9 + 0x1d60);
    *(undefined8 *)(puVar9 + -0x1b00) = uVar30;
    if (*(long *)(puVar9 + -0x18e8) == -0x8000000000000000) {
      *(undefined8 *)(puVar9 + -0x1900) = 0;
      *(undefined8 *)(puVar9 + -0x18f8) = 8;
      *(undefined8 *)(puVar9 + -0x18f0) = 0;
      lVar18 = *(long *)(puVar9 + 0x1d60);
      if (lVar18 != -0x7fffffffffffffff) {
        *(undefined8 *)(puVar9 + -0x1b18) = uVar11;
        lVar22 = *(long *)(puVar9 + 0x1d98);
        if (lVar22 != 0) {
          uVar28 = *(ulong *)(puVar9 + 0x1d80);
          lVar27 = *(long *)(puVar9 + 0x1d78);
          plVar19 = *(long **)(puVar9 + 0x1d88);
          do {
            while (uVar28 == 0) {
              lVar31 = *plVar19;
              lVar27 = lVar27 + -0x300;
              plVar19 = plVar19 + 1;
              uVar28 = CONCAT17(-(-1 < lVar31),
                                CONCAT16(-(-1 < (char)((ulong)lVar31 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar31 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar31 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar31 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar31 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar31 >> 8)),
                                                           -(-1 < (char)lVar31)))))))) &
                       0x8080808080808080;
            }
            uVar21 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            lVar31 = lVar27 + (long)-(int)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) *
                              0x60;
            if (*(long *)(lVar31 + -0x60) != 0) {
              _free(*(undefined8 *)(lVar31 + -0x58));
            }
            FUN_100de6690(lVar31 + -0x48);
            uVar28 = uVar28 - 1 & uVar28;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        uVar11 = *(undefined8 *)(puVar9 + -0x1b18);
        if ((lVar18 != 0) && (*(long *)(puVar9 + 0x1d68) != 0)) {
          _free(*(undefined8 *)(puVar9 + 0x1d70));
        }
      }
LAB_1008909a8:
      *(undefined1 *)puVar1 = 1;
      auVar35 = __ZN100__LT_codex_config__cloud_requirements__CloudRequirementsLoader_u20_as_u20_core__default__Default_GT_7default17h140615628771f262E
                          ();
      *(undefined8 *)(puVar9 + 0x2038) = 0x8000000000000000;
      *(undefined8 *)(puVar9 + 0x2050) = 0x8000000000000000;
      *(undefined8 *)(puVar9 + 0x2238) = 0x8000000000000001;
      puVar9[0x2308] = 0;
      *(undefined1 (*) [16])(puVar9 + 0x22e8) = auVar35;
      *(undefined8 *)(puVar9 + 0x22f8) = 0;
      *(undefined8 *)(puVar9 + 0x2068) = 0x8000000000000000;
      *(undefined8 *)(puVar9 + 0x2220) = 0x8000000000000000;
      uVar30 = *(undefined8 *)(puVar16[0x43] + 8);
      lVar18 = *(long *)(puVar16[0x43] + 0x10);
      if (lVar18 == 0) {
        lVar22 = 1;
      }
      else {
        lVar22 = _malloc(lVar18);
        if (lVar22 == 0) {
          func_0x0001087c9084(1,lVar18);
          goto LAB_100890a10;
        }
      }
      _memcpy(lVar22,uVar30,lVar18);
      *(long *)(puVar9 + 0x2038) = lVar18;
      *(long *)(puVar9 + 0x2040) = lVar22;
      *(long *)(puVar9 + 0x2048) = lVar18;
      _memcpy(puVar9 + 0x1d60,puVar9 + 0x2038,0x2d8);
      *(undefined1 *)puVar1 = 0;
      if (*(long *)(puVar9 + 0x1d78) != -0x8000000000000000) {
        FUN_1033e4678(puVar9 + 0x1d78);
      }
      *(undefined8 *)(puVar9 + 0x1d80) = *(undefined8 *)(puVar9 + -0x18f8);
      *(undefined8 *)(puVar9 + 0x1d78) = *(undefined8 *)(puVar9 + -0x1900);
      *(undefined8 *)(puVar9 + 0x1d88) = *(undefined8 *)(puVar9 + -0x18f0);
      _memcpy(puVar9 + 0x1a88,puVar9 + 0x1d60,0x2d8);
      FUN_1011b4ddc(puVar9 + 0x2038,puVar16[0x43] + 0x18);
      uVar30 = *(undefined8 *)(puVar9 + -0x1b00);
      if (*(long *)(puVar9 + 0x1c88) != -0x7fffffffffffffff) {
        FUN_1033961c0(puVar9 + 0x1c88);
      }
      *(undefined8 *)(puVar9 + 0x1d10) = *(undefined8 *)(puVar9 + 0x20c0);
      *(undefined8 *)(puVar9 + 0x1d08) = *(undefined8 *)(puVar9 + 0x20b8);
      *(undefined8 *)(puVar9 + 0x1d20) = *(undefined8 *)(puVar9 + 0x20d0);
      *(undefined8 *)(puVar9 + 0x1d18) = *(undefined8 *)(puVar9 + 0x20c8);
      *(undefined8 *)(puVar9 + 0x1d30) = *(undefined8 *)(puVar9 + 0x20e0);
      *(undefined8 *)(puVar9 + 0x1d28) = *(undefined8 *)(puVar9 + 0x20d8);
      *(undefined8 *)(puVar9 + 0x1cd0) = *(undefined8 *)(puVar9 + 0x2080);
      *(undefined8 *)(puVar9 + 0x1cc8) = *(undefined8 *)(puVar9 + 0x2078);
      *(undefined8 *)(puVar9 + 0x1ce0) = *(undefined8 *)(puVar9 + 0x2090);
      *(undefined8 *)(puVar9 + 0x1cd8) = *(undefined8 *)(puVar9 + 0x2088);
      *(undefined8 *)(puVar9 + 0x1cf0) = *(undefined8 *)(puVar9 + 0x20a0);
      *(undefined8 *)(puVar9 + 0x1ce8) = *(undefined8 *)(puVar9 + 0x2098);
      *(undefined8 *)(puVar9 + 0x1d00) = *(undefined8 *)(puVar9 + 0x20b0);
      *(undefined8 *)(puVar9 + 0x1cf8) = *(undefined8 *)(puVar9 + 0x20a8);
      *(undefined8 *)(puVar9 + 0x1c90) = *(undefined8 *)(puVar9 + 0x2040);
      *(undefined8 *)(puVar9 + 0x1c88) = *(undefined8 *)(puVar9 + 0x2038);
      *(undefined8 *)(puVar9 + 0x1ca0) = *(undefined8 *)(puVar9 + 0x2050);
      *(undefined8 *)(puVar9 + 0x1c98) = *(undefined8 *)(puVar9 + 0x2048);
      *(undefined8 *)(puVar9 + 0x1cb0) = *(undefined8 *)(puVar9 + 0x2060);
      *(undefined8 *)(puVar9 + 0x1ca8) = *(undefined8 *)(puVar9 + 0x2058);
      *(undefined8 *)(puVar9 + 0x1cc0) = *(undefined8 *)(puVar9 + 0x2070);
      *(undefined8 *)(puVar9 + 0x1cb8) = *(undefined8 *)(puVar9 + 0x2068);
      _memcpy(puVar9 + 0x17b0,puVar9 + 0x1a88,0x2d0);
      *(undefined4 *)(puVar9 + 0x1a81) = *(undefined4 *)(puVar9 + 0x1d59);
      *(undefined4 *)(puVar9 + 0x1a84) = *(undefined4 *)(puVar9 + 0x1d5c);
      puVar9[0x1a80] = *(undefined1 *)(puVar16[0x43] + 0x130);
      *(undefined1 *)((long)puVar16 + 0x50b) = 0;
      if (*(long *)(puVar9 + 0x17e0) != -0x8000000000000000) {
        FUN_103393e74(puVar9 + 0x17e0);
      }
      _memcpy(puVar9 + 0x17e0,puVar9 + -0x1ab8,0x1b8);
      _memcpy(puVar9 + 0x15c8,puVar9 + 0x17b0,0x1e8);
      uVar28 = *(ulong *)(puVar9 + 0x1998);
      uVar14 = *(undefined8 *)(puVar9 + 0x19a0);
      *(undefined8 *)(puVar9 + 0x1598) = *(undefined8 *)(puVar9 + 0x1a58);
      *(undefined8 *)(puVar9 + 0x1590) = *(undefined8 *)(puVar9 + 0x1a50);
      *(undefined8 *)(puVar9 + 0x15a8) = *(undefined8 *)(puVar9 + 0x1a68);
      *(undefined8 *)(puVar9 + 0x15a0) = *(undefined8 *)(puVar9 + 0x1a60);
      *(undefined8 *)(puVar9 + 0x15b8) = *(undefined8 *)(puVar9 + 0x1a78);
      *(undefined8 *)(puVar9 + 0x15b0) = *(undefined8 *)(puVar9 + 0x1a70);
      *(undefined8 *)(puVar9 + 0x15c0) = *(undefined8 *)(puVar9 + 0x1a80);
      *(undefined8 *)(puVar9 + 0x1558) = *(undefined8 *)(puVar9 + 0x1a18);
      *(undefined8 *)(puVar9 + 0x1550) = *(undefined8 *)(puVar9 + 0x1a10);
      *(undefined8 *)(puVar9 + 0x1568) = *(undefined8 *)(puVar9 + 0x1a28);
      *(undefined8 *)(puVar9 + 0x1560) = *(undefined8 *)(puVar9 + 0x1a20);
      *(undefined8 *)(puVar9 + 0x1578) = *(undefined8 *)(puVar9 + 0x1a38);
      *(undefined8 *)(puVar9 + 0x1570) = *(undefined8 *)(puVar9 + 0x1a30);
      *(undefined8 *)(puVar9 + 0x1588) = *(undefined8 *)(puVar9 + 0x1a48);
      *(undefined8 *)(puVar9 + 0x1580) = *(undefined8 *)(puVar9 + 0x1a40);
      *(undefined8 *)(puVar9 + 0x1518) = *(undefined8 *)(puVar9 + 0x19d8);
      *(undefined8 *)(puVar9 + 0x1510) = *(undefined8 *)(puVar9 + 0x19d0);
      *(undefined8 *)(puVar9 + 0x1528) = *(undefined8 *)(puVar9 + 0x19e8);
      *(undefined8 *)(puVar9 + 0x1520) = *(undefined8 *)(puVar9 + 0x19e0);
      *(undefined8 *)(puVar9 + 0x1538) = *(undefined8 *)(puVar9 + 0x19f8);
      *(undefined8 *)(puVar9 + 0x1530) = *(undefined8 *)(puVar9 + 0x19f0);
      *(undefined8 *)(puVar9 + 0x1548) = *(undefined8 *)(puVar9 + 0x1a08);
      *(undefined8 *)(puVar9 + 0x1540) = *(undefined8 *)(puVar9 + 0x1a00);
      *(undefined8 *)(puVar9 + 0x14f8) = *(undefined8 *)(puVar9 + 0x19b8);
      *(undefined8 *)(puVar9 + 0x14f0) = *(undefined8 *)(puVar9 + 0x19b0);
      *(undefined8 *)(puVar9 + 0x1508) = *(undefined8 *)(puVar9 + 0x19c8);
      *(undefined8 *)(puVar9 + 0x1500) = *(undefined8 *)(puVar9 + 0x19c0);
      *(undefined1 *)((long)puVar16 + 0x50a) = 0;
      if ((uVar28 & 0x7fffffffffffffff) != 0) {
        _free(uVar14);
      }
      _memcpy(puVar9 + 0x1218,puVar9 + 0x15c8,0x1e8);
      *(undefined8 *)(puVar9 + 0x14c0) = *(undefined8 *)(puVar9 + 0x1598);
      *(undefined8 *)(puVar9 + 0x14b8) = *(undefined8 *)(puVar9 + 0x1590);
      *(undefined8 *)(puVar9 + 0x14d0) = *(undefined8 *)(puVar9 + 0x15a8);
      *(undefined8 *)(puVar9 + 0x14c8) = *(undefined8 *)(puVar9 + 0x15a0);
      *(undefined8 *)(puVar9 + 0x14e0) = *(undefined8 *)(puVar9 + 0x15b8);
      *(undefined8 *)(puVar9 + 0x14d8) = *(undefined8 *)(puVar9 + 0x15b0);
      *(undefined8 *)(puVar9 + 0x1480) = *(undefined8 *)(puVar9 + 0x1558);
      *(undefined8 *)(puVar9 + 0x1478) = *(undefined8 *)(puVar9 + 0x1550);
      *(undefined8 *)(puVar9 + 0x1490) = *(undefined8 *)(puVar9 + 0x1568);
      *(undefined8 *)(puVar9 + 0x1488) = *(undefined8 *)(puVar9 + 0x1560);
      *(undefined8 *)(puVar9 + 0x14a0) = *(undefined8 *)(puVar9 + 0x1578);
      *(undefined8 *)(puVar9 + 0x1498) = *(undefined8 *)(puVar9 + 0x1570);
      *(undefined8 *)(puVar9 + 0x14b0) = *(undefined8 *)(puVar9 + 0x1588);
      *(undefined8 *)(puVar9 + 0x14a8) = *(undefined8 *)(puVar9 + 0x1580);
      *(undefined8 *)(puVar9 + 0x1440) = *(undefined8 *)(puVar9 + 0x1518);
      *(undefined8 *)(puVar9 + 0x1438) = *(undefined8 *)(puVar9 + 0x1510);
      *(undefined8 *)(puVar9 + 0x1450) = *(undefined8 *)(puVar9 + 0x1528);
      *(undefined8 *)(puVar9 + 0x1448) = *(undefined8 *)(puVar9 + 0x1520);
      *(undefined8 *)(puVar9 + 0x1460) = *(undefined8 *)(puVar9 + 0x1538);
      *(undefined8 *)(puVar9 + 0x1458) = *(undefined8 *)(puVar9 + 0x1530);
      *(undefined8 *)(puVar9 + 0x1470) = *(undefined8 *)(puVar9 + 0x1548);
      *(undefined8 *)(puVar9 + 0x1468) = *(undefined8 *)(puVar9 + 0x1540);
      *(undefined8 *)(puVar9 + 0x1420) = *(undefined8 *)(puVar9 + 0x14f8);
      *(undefined8 *)(puVar9 + 0x1418) = *(undefined8 *)(puVar9 + 0x14f0);
      *(undefined8 *)(puVar9 + 0x1400) = *(undefined8 *)(puVar9 + -0x1af8);
      *(undefined8 *)(puVar9 + 0x1408) = uVar11;
      *(undefined8 *)(puVar9 + 0x1410) = uVar30;
      *(undefined8 *)(puVar9 + 0x14e8) = *(undefined8 *)(puVar9 + 0x15c0);
      *(undefined8 *)(puVar9 + 0x1430) = *(undefined8 *)(puVar9 + 0x1508);
      *(undefined8 *)(puVar9 + 0x1428) = *(undefined8 *)(puVar9 + 0x1500);
      auVar35 = __ZN16codex_app_server14config_manager13ConfigManager26current_cloud_requirements17h054f06d04600ac40E
                          (puVar16[0x43]);
      FUN_103379894(puVar9 + 0x14c8);
      plVar26 = *(long **)(puVar9 + -0x1b08);
      *(undefined1 (*) [16])(puVar9 + 0x14c8) = auVar35;
      _memcpy(puVar9 + 0xf40,puVar9 + 0x1218,0x2d8);
      auVar35 = __ZN16codex_app_server14config_manager13ConfigManager28current_thread_config_loader17h510a37b25a840537E
                          (puVar16[0x43]);
      plVar19 = *(long **)(puVar9 + 0x1200);
      if (plVar19 != (long *)0x0) {
        lVar18 = *plVar19;
        *plVar19 = lVar18 + -1;
        LORelease();
        if (lVar18 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar9 + 0x1200);
        }
      }
      *(undefined1 (*) [16])(puVar9 + 0x1200) = auVar35;
      _memcpy(puVar9 + 0xc60,puVar9 + 0xf40,0x2d8);
      _memcpy(puVar16 + 0x44,puVar9 + 0xc60,0x2e0);
      *(undefined1 *)(puVar16 + 0xa0) = 0;
LAB_100890d70:
      FUN_10055d518(puVar9 + 0x2038,puVar16 + 0x44);
      lVar18 = *(long *)(puVar9 + 0x2038);
      if (lVar18 == 3) {
        uVar17 = 3;
        *plVar26 = 3;
      }
      else {
        lVar22 = *(long *)(puVar9 + 0x2040);
        _memcpy(puVar9 + 0x4580,puVar9 + 0x2048,0x2538);
        if (*(char *)(puVar16 + 0xa0) == '\x03') {
          uVar11 = puVar16[0x9f];
          FUN_100e7de2c(uVar11);
          _free(uVar11);
        }
        else if (*(char *)(puVar16 + 0xa0) == '\0') {
          FUN_100df9554(puVar16 + 0x44);
        }
        if (lVar18 != 2) {
          _memcpy(puVar9 + -0x18d8,puVar9 + 0x4580,0x2538);
          *(long *)(puVar9 + -0x18e8) = lVar18;
          *(long *)(puVar9 + -0x18e0) = lVar22;
          __ZN16codex_app_server14config_manager13ConfigManager32apply_runtime_feature_enablement17hb494339509949e9cE
                    (puVar16[0x43],puVar9 + -0x18e8);
          __ZN16codex_app_server14config_manager13ConfigManager16apply_arg0_paths17h361a56c070c9a192E
                    (puVar16[0x43],puVar9 + -0x18e8);
          lVar18 = *(long *)(puVar9 + -0x18e8);
          lVar22 = *(long *)(puVar9 + -0x18e0);
          _memcpy(puVar9 + 0x6ab8,puVar9 + -0x18d8,0x2538);
        }
        *(undefined4 *)((long)puVar16 + 0x509) = 0;
        *plVar26 = lVar18;
        plVar26[1] = lVar22;
        _memcpy(plVar26 + 2,puVar9 + 0x6ab8,0x2538);
        uVar17 = 1;
      }
      *(undefined1 *)(puVar16 + 0xa1) = uVar17;
      return;
    }
    if (*(long *)(puVar9 + 0x1da0) == 0) {
      uVar28 = 0;
      if (*(long *)(puVar9 + 0x1d60) != -0x7fffffffffffffff) {
        uVar28 = *(ulong *)(puVar9 + 0x1d98);
      }
    }
    else {
      uVar21 = ((ulong)(*(long *)(puVar9 + 0x1da8) - *(long *)(puVar9 + 0x1da0)) >> 3) *
               0x4ec4ec4ec4ec4ec5;
      uVar28 = uVar21;
      if ((*(long *)(puVar9 + 0x1d60) != -0x7fffffffffffffff) &&
         (uVar28 = uVar21 + *(ulong *)(puVar9 + 0x1d98), CARRY8(uVar21,*(ulong *)(puVar9 + 0x1d98)))
         ) {
        uVar28 = 0xffffffffffffffff;
      }
    }
    uVar21 = uVar28 + 1;
    if (uVar28 == 0xffffffffffffffff) {
      uVar21 = 0xffffffffffffffff;
    }
    uVar28 = uVar21;
    if (uVar21 < 5) {
      uVar28 = 4;
    }
    plVar26 = (long *)(uVar28 * 0x68);
    if (uVar21 < 0x13b13b13b13b13c) {
      *(undefined8 *)(puVar9 + -0x1b18) = uVar11;
      if (plVar26 == (long *)0x0) {
        uVar28 = 0;
        puVar13 = (undefined8 *)0x8;
LAB_1008907a0:
        uVar11 = *(undefined8 *)(puVar9 + -0x18b8);
        puVar13[7] = *(undefined8 *)(puVar9 + -0x18b0);
        puVar13[6] = uVar11;
        uVar11 = *(undefined8 *)(puVar9 + -0x18a8);
        puVar13[9] = *(undefined8 *)(puVar9 + -0x18a0);
        puVar13[8] = uVar11;
        uVar11 = *(undefined8 *)(puVar9 + -0x1898);
        puVar13[0xb] = *(undefined8 *)(puVar9 + -0x1890);
        puVar13[10] = uVar11;
        puVar13[0xc] = *(undefined8 *)(puVar9 + -0x1888);
        uVar11 = *(undefined8 *)(puVar9 + -0x18e8);
        puVar13[1] = *(undefined8 *)(puVar9 + -0x18e0);
        *puVar13 = uVar11;
        uVar11 = *(undefined8 *)(puVar9 + -0x18d8);
        puVar13[3] = *(undefined8 *)(puVar9 + -0x18d0);
        puVar13[2] = uVar11;
        uVar11 = *(undefined8 *)(puVar9 + -0x18c8);
        puVar13[5] = *(undefined8 *)(puVar9 + -0x18c0);
        puVar13[4] = uVar11;
        *(ulong *)(puVar9 + 0x1a88) = uVar28;
        *(undefined8 **)(puVar9 + 0x1a90) = puVar13;
        lVar18 = 1;
        *(undefined8 *)(puVar9 + 0x1a98) = 1;
        *(undefined8 *)(puVar9 + 0xc88) = *(undefined8 *)(puVar9 + 0x1d88);
        *(undefined8 *)(puVar9 + 0xc80) = *(undefined8 *)(puVar9 + 0x1d80);
        *(undefined8 *)(puVar9 + 0xc98) = *(undefined8 *)(puVar9 + 0x1d98);
        *(undefined8 *)(puVar9 + 0xc90) = *(undefined8 *)(puVar9 + 0x1d90);
        *(undefined8 *)(puVar9 + 0xca8) = *(undefined8 *)(puVar9 + 0x1da8);
        *(undefined8 *)(puVar9 + 0xca0) = *(undefined8 *)(puVar9 + 0x1da0);
        *(undefined8 *)(puVar9 + 0xc78) = *(undefined8 *)(puVar9 + 0x1d78);
        *(undefined8 *)(puVar9 + 0xc70) = *(undefined8 *)(puVar9 + 0x1d70);
        *(undefined8 *)(puVar9 + 0xc68) = *(undefined8 *)(puVar9 + 0x1d68);
        *(undefined8 *)(puVar9 + 0xc60) = *(undefined8 *)(puVar9 + 0x1d60);
        lVar22 = 0x68;
        while (func_0x00010042b804(puVar9 + 0x2038,puVar9 + 0xc60),
              *(long *)(puVar9 + 0x2038) != -0x8000000000000000) {
          if (lVar18 == *(long *)(puVar9 + 0x1a88)) {
            if (*(long *)(puVar9 + 0xca0) == 0) {
              uVar28 = 0;
              if (*(long *)(puVar9 + 0xc60) != -0x7fffffffffffffff) {
                uVar28 = *(ulong *)(puVar9 + 0xc98);
              }
            }
            else {
              uVar21 = ((ulong)(*(long *)(puVar9 + 0xca8) - *(long *)(puVar9 + 0xca0)) >> 3) *
                       0x4ec4ec4ec4ec4ec5;
              uVar28 = uVar21;
              if ((*(long *)(puVar9 + 0xc60) != -0x7fffffffffffffff) &&
                 (uVar28 = uVar21 + *(ulong *)(puVar9 + 0xc98),
                 CARRY8(uVar21,*(ulong *)(puVar9 + 0xc98)))) {
                uVar28 = 0xffffffffffffffff;
              }
            }
            lVar27 = uVar28 + 1;
            if (uVar28 == 0xffffffffffffffff) {
              lVar27 = -1;
            }
            FUN_108855060(puVar9 + 0x1a88,lVar18,lVar27,8,0x68);
            puVar13 = *(undefined8 **)(puVar9 + 0x1a90);
          }
          puVar2 = (undefined8 *)((long)puVar13 + lVar22);
          uVar30 = *(undefined8 *)(puVar9 + 0x2040);
          uVar11 = *(undefined8 *)(puVar9 + 0x2038);
          uVar14 = *(undefined8 *)(puVar9 + 0x2048);
          uVar33 = *(undefined8 *)(puVar9 + 0x2060);
          uVar32 = *(undefined8 *)(puVar9 + 0x2058);
          puVar2[3] = *(undefined8 *)(puVar9 + 0x2050);
          puVar2[2] = uVar14;
          puVar2[5] = uVar33;
          puVar2[4] = uVar32;
          puVar2[1] = uVar30;
          *puVar2 = uVar11;
          uVar30 = *(undefined8 *)(puVar9 + 0x2070);
          uVar11 = *(undefined8 *)(puVar9 + 0x2068);
          uVar32 = *(undefined8 *)(puVar9 + 0x2080);
          uVar14 = *(undefined8 *)(puVar9 + 0x2078);
          uVar34 = *(undefined8 *)(puVar9 + 0x2090);
          uVar33 = *(undefined8 *)(puVar9 + 0x2088);
          puVar2[0xc] = *(undefined8 *)(puVar9 + 0x2098);
          puVar2[9] = uVar32;
          puVar2[8] = uVar14;
          puVar2[0xb] = uVar34;
          puVar2[10] = uVar33;
          puVar2[7] = uVar30;
          puVar2[6] = uVar11;
          lVar18 = lVar18 + 1;
          *(long *)(puVar9 + 0x1a98) = lVar18;
          lVar22 = lVar22 + 0x68;
        }
        lVar18 = *(long *)(puVar9 + 0xc60);
        if (lVar18 != -0x7fffffffffffffff) {
          lVar22 = *(long *)(puVar9 + 0xc98);
          if (lVar22 != 0) {
            uVar28 = *(ulong *)(puVar9 + 0xc80);
            lVar27 = *(long *)(puVar9 + 0xc78);
            plVar19 = *(long **)(puVar9 + 0xc88);
            do {
              plVar26 = plVar19;
              if (uVar28 == 0) {
                do {
                  plVar19 = plVar26 + 1;
                  lVar31 = *plVar26;
                  lVar27 = lVar27 + -0x300;
                  uVar28 = CONCAT17(-(-1 < lVar31),
                                    CONCAT16(-(-1 < (char)((ulong)lVar31 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar31 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar31 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar31
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar31 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar31 >> 8)),
                                                           -(-1 < (char)lVar31)))))))) &
                           0x8080808080808080;
                  plVar26 = plVar19;
                } while (uVar28 == 0);
                *(long **)(puVar9 + 0xc88) = plVar19;
                *(long *)(puVar9 + 0xc78) = lVar27;
              }
              uVar21 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar28 = uVar28 - 1 & uVar28;
              lVar31 = lVar27 + (long)-(int)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) *
                                0x60;
              lVar22 = lVar22 + -1;
              *(ulong *)(puVar9 + 0xc80) = uVar28;
              *(long *)(puVar9 + 0xc98) = lVar22;
              if (*(long *)(lVar31 + -0x60) != 0) {
                _free(*(undefined8 *)(lVar31 + -0x58));
              }
              FUN_100de6690(lVar31 + -0x48);
            } while (lVar22 != 0);
          }
          if ((lVar18 != 0) && (*(long *)(puVar9 + 0xc68) != 0)) {
            _free(*(undefined8 *)(puVar9 + 0xc70));
          }
        }
        *(undefined8 *)(puVar9 + -0x18f8) = *(undefined8 *)(puVar9 + 0x1a90);
        *(undefined8 *)(puVar9 + -0x1900) = *(undefined8 *)(puVar9 + 0x1a88);
        *(undefined8 *)(puVar9 + -0x18f0) = *(undefined8 *)(puVar9 + 0x1a98);
        uVar11 = *(undefined8 *)(puVar9 + -0x1b18);
        goto LAB_1008909a8;
      }
      puVar13 = (undefined8 *)_malloc(plVar26);
      if (puVar13 != (undefined8 *)0x0) goto LAB_1008907a0;
      goto LAB_100890ec4;
    }
    uVar11 = 0;
  }
  else {
    if (bVar5 == 3) goto LAB_100890d70;
LAB_100890eb8:
    FUN_107c05cc4(&UNK_10b224be8);
LAB_100890ec4:
    uVar11 = 8;
  }
  func_0x0001087c9084(uVar11,plVar26);
LAB_100890a10:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100890a14);
  (*pcVar8)();
}

