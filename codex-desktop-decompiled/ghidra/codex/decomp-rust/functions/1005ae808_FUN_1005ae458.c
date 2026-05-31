
bool FUN_1005ae458(long *param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  long unaff_x24;
  undefined8 unaff_x25;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_880 [416];
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  int aiStack_6d0 [2];
  undefined8 uStack_6c8;
  int iStack_6c0;
  undefined1 auStack_530 [12];
  undefined1 auStack_520 [12];
  undefined8 uStack_510;
  int iStack_508;
  undefined4 uStack_504;
  uint uStack_500;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
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
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  bVar2 = *(byte *)((long)param_1 + 0x21);
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        FUN_107c05cc0(&UNK_10b218390);
      }
      FUN_107c05cc4();
      *(undefined1 *)((long)param_1 + 0x21) = 2;
      uVar7 = __Unwind_Resume();
      FUN_100ca4214(param_1 + 5);
      *(undefined1 *)((long)param_1 + 0x21) = 2;
      __Unwind_Resume(uVar7);
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)((long)param_1 + 0x21) = 2;
      __Unwind_Resume(uVar7);
      puVar8 = (undefined8 *)FUN_107c05ccc();
      bVar2 = *(byte *)(puVar8 + 0x3a);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          *(undefined1 *)((long)puVar8 + 0x1d1) = 1;
          puVar8[0x27] = puVar8[0x11];
          puVar8[0x26] = puVar8[0x10];
          puVar8[0x29] = puVar8[0x13];
          puVar8[0x28] = puVar8[0x12];
          puVar8[0x1f] = puVar8[9];
          puVar8[0x1e] = puVar8[8];
          puVar8[0x21] = puVar8[0xb];
          puVar8[0x20] = puVar8[10];
          puVar8[0x23] = puVar8[0xd];
          puVar8[0x22] = puVar8[0xc];
          puVar8[0x25] = puVar8[0xf];
          puVar8[0x24] = puVar8[0xe];
          puVar8[0x17] = puVar8[1];
          puVar8[0x16] = *puVar8;
          puVar8[0x19] = puVar8[3];
          puVar8[0x18] = puVar8[2];
          puVar8[0x1b] = puVar8[5];
          puVar8[0x1a] = puVar8[4];
          puVar8[0x1d] = puVar8[7];
          puVar8[0x1c] = puVar8[6];
          puVar8[0x2a] = puVar8[0x14];
          puVar8[0x2b] = puVar8[0x15] + 0x790;
          *(undefined1 *)(puVar8 + 0x39) = 0;
LAB_1005ae87c:
          pcVar9 = (char *)FUN_100fd3e50(puVar8 + 0x2b);
          if (pcVar9 == (char *)0x0) {
            uVar14 = 3;
          }
          else {
            if (((*(char *)(puVar8 + 0x39) == '\x03') && (*(char *)(puVar8 + 0x38) == '\x03')) &&
               (*(char *)(puVar8 + 0x2f) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (puVar8 + 0x30);
              if (puVar8[0x31] != 0) {
                (**(code **)(puVar8[0x31] + 0x18))(puVar8[0x32]);
              }
            }
            *(undefined1 *)((long)puVar8 + 0x1d1) = 0;
            uStack_3d8 = puVar8[0x27];
            uStack_3e0 = puVar8[0x26];
            uStack_3c8 = puVar8[0x29];
            uStack_3d0 = puVar8[0x28];
            uStack_3c0 = puVar8[0x2a];
            uStack_418 = puVar8[0x1f];
            uStack_420 = puVar8[0x1e];
            uStack_408 = puVar8[0x21];
            uStack_410 = puVar8[0x20];
            uStack_3f8 = puVar8[0x23];
            uStack_400 = puVar8[0x22];
            uStack_3e8 = puVar8[0x25];
            uStack_3f0 = puVar8[0x24];
            uStack_458 = puVar8[0x17];
            uStack_460 = puVar8[0x16];
            uStack_448 = puVar8[0x19];
            uStack_450 = puVar8[0x18];
            uStack_438 = puVar8[0x1b];
            uStack_440 = puVar8[0x1a];
            uStack_428 = puVar8[0x1d];
            uStack_430 = puVar8[0x1c];
            __ZN10codex_core5state7session12SessionState15set_rate_limits17h493baedb9e716039E
                      (pcVar9 + 0x28,&uStack_460);
            if (*pcVar9 == '\0') {
              *pcVar9 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar9,extraout_x1_02,1000000000);
            }
            FUN_1060fa678(pcVar9,1,pcVar9);
            *(undefined1 *)((long)puVar8 + 0x1d1) = 0;
            uVar14 = 1;
          }
          *(undefined1 *)(puVar8 + 0x3a) = uVar14;
          return pcVar9 == (char *)0x0;
        }
        FUN_107c05cc0(&UNK_10b2183d8);
      }
      else if (bVar2 == 3) goto LAB_1005ae87c;
      lVar27 = FUN_107c05cc4(&UNK_10b2183d8);
      if ((*(byte *)((long)puVar8 + 0x1d1) & 1) != 0) {
        FUN_100e19b98(puVar8 + 0x16);
      }
      *(undefined2 *)(puVar8 + 0x3a) = 2;
      __Unwind_Resume(lVar27);
      auVar32 = FUN_107c05ccc();
      plVar28 = auVar32._0_8_;
      bVar2 = *(byte *)(plVar28 + 6);
      if (bVar2 < 3) {
        if (bVar2 != 0) {
          if (bVar2 == 1) {
            FUN_107c05cc0(&UNK_10b2183f0);
          }
          FUN_107c05cc4();
          *(undefined1 *)(plVar28 + 6) = 2;
          uVar7 = __Unwind_Resume();
          FUN_100d1eb68(plVar28[10],plVar28[0xb]);
          *(undefined1 *)(plVar28 + 6) = 2;
          __Unwind_Resume(uVar7);
          auVar32 = FUN_107c05ccc();
          lVar21 = auVar32._0_8_;
          bVar2 = *(byte *)(lVar21 + 0x360);
          if (bVar2 < 3) {
            if (bVar2 != 0) {
              if (bVar2 == 1) {
                FUN_107c05cc0(&UNK_10b218450);
              }
              FUN_107c05cc4();
LAB_1005af210:
              FUN_107c03c64(1,lVar27);
LAB_1005af26c:
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x1005af270);
              (*pcVar17)();
            }
            lVar27 = *(long *)(lVar21 + 0x1a8);
            *(undefined8 *)(lVar21 + 0x1b8) = *(undefined8 *)(lVar21 + 0x1a8);
            *(undefined8 *)(lVar21 + 0x1b0) = *(undefined8 *)(lVar21 + 0x1a0);
            *(undefined1 *)(lVar21 + 0x361) = 1;
            plVar28 = (long *)(lVar21 + 0x1c0);
            _memcpy(plVar28,lVar21,0x1a0);
            *(long *)(lVar21 + 0x368) = lVar27;
            *(long **)(lVar21 + 0x370) = plVar28;
            *(undefined1 *)(lVar21 + 0x410) = 0;
LAB_1005aee9c:
            *(long *)(lVar21 + 0x378) = lVar27;
            lVar27 = *(long *)(lVar27 + 0x7c0) + 0x10;
            *(long *)(lVar21 + 0x380) = lVar27;
            *(long **)(lVar21 + 0x388) = plVar28;
            *(undefined1 *)(lVar21 + 0x408) = 0;
            if (*plVar28 != -0x7ffffffffffffffe) goto LAB_1005aef18;
LAB_1005aeed0:
            *(long *)(lVar21 + 0x390) = lVar27;
            *(undefined1 *)(lVar21 + 0x400) = 0;
LAB_1005aef2c:
            auVar33 = FUN_100fd3e50(lVar21 + 0x390,auVar32._8_8_);
            uVar7 = auVar33._8_8_;
            pcVar9 = auVar33._0_8_;
            if (pcVar9 == (char *)0x0) {
              uVar14 = 3;
              *(undefined1 *)(lVar21 + 0x408) = 3;
              *(undefined1 *)(lVar21 + 0x410) = 3;
              bVar5 = true;
              goto LAB_1005af1c0;
            }
            if (((*(char *)(lVar21 + 0x400) == '\x03') && (*(char *)(lVar21 + 0x3f8) == '\x03')) &&
               (*(char *)(lVar21 + 0x3b0) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (lVar21 + 0x3b8);
              uVar7 = extraout_x1_03;
              if (*(long *)(lVar21 + 0x3c0) != 0) {
                (**(code **)(*(long *)(lVar21 + 0x3c0) + 0x18))(*(undefined8 *)(lVar21 + 0x3c8));
                uVar7 = extraout_x1_04;
              }
            }
            auVar3._8_4_ = auStack_520._8_4_;
            auVar3._0_8_ = auStack_520._0_8_;
            if (*(int *)(pcVar9 + 0x60) == 1000000000) {
              iVar1 = *(int *)(pcVar9 + 0x40);
              iVar29 = 1000000000;
              auStack_520 = auVar3;
              if (iVar1 != 1000000000) {
                uVar7 = *(undefined8 *)(pcVar9 + 0x38);
                auStack_520 = func_0x000106032954(8);
                *(undefined1 (*) [12])(pcVar9 + 0x58) = auStack_520;
                uStack_510 = uVar7;
                iStack_508 = iVar1;
                func_0x000106032878(aiStack_6d0,auStack_520,&uStack_510);
                iVar29 = 0;
                if (aiStack_6d0[0] == 0) {
                  iVar29 = iStack_6c0;
                }
                unaff_x25 = 0;
                uVar7 = extraout_x1_05;
                if (aiStack_6d0[0] == 0) {
                  unaff_x25 = uStack_6c8;
                }
              }
            }
            else {
              iVar29 = 1000000000;
            }
            if (*pcVar9 == '\0') {
              *pcVar9 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar9,uVar7,1000000000);
            }
            FUN_1060fa678(pcVar9,1,pcVar9);
            *(undefined1 *)(lVar21 + 0x408) = 1;
            if (iVar29 != 1000000000) {
              __ZN10codex_otel6events17session_telemetry16SessionTelemetry15record_duration17h4300f28a02b6a0faE
                        (*(long *)(lVar21 + 0x378) + 0x248,&UNK_108ca2ac3,0x1b,unaff_x25,iVar29,8,0)
              ;
            }
LAB_1005af074:
            lVar26 = 1;
            *(undefined1 *)(lVar21 + 0x410) = 1;
            lVar30 = *(long *)(lVar21 + 0x1b0);
            lVar31 = *(long *)(lVar21 + 0x1b8);
            uStack_6d8 = *(undefined8 *)(lVar30 + 0x788);
            uStack_6e0 = *(undefined8 *)(lVar30 + 0x780);
            uVar7 = *(undefined8 *)(lVar31 + 0x238);
            lVar27 = *(long *)(lVar31 + 0x240);
            if (lVar27 != 0) {
              lVar26 = _malloc(lVar27);
              if (lVar26 == 0) goto LAB_1005af210;
            }
            _memcpy(lVar26,uVar7,lVar27);
            *(undefined1 *)(lVar21 + 0x361) = 0;
            _memcpy(aiStack_6d0,lVar21 + 0x1c0,0x1a0);
            auStack_530 = func_0x000106032954(0);
            auStack_520._0_8_ = 0;
            auStack_520._8_4_ = 0;
            func_0x000106032878(&uStack_510,auStack_530,auStack_520);
            uVar4 = uStack_6d8;
            uVar7 = uStack_6e0;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = CONCAT44(uStack_504,iStack_508);
            lVar22 = SUB168(auVar33 * ZEXT816(1000),8);
            uVar15 = CONCAT44(uStack_504,iStack_508) * 1000;
            uVar6 = uVar15 + (ulong)uStack_500 / 1000000;
            if (CARRY8(uVar15,(ulong)uStack_500 / 1000000)) {
              lVar22 = lVar22 + 1;
            }
            if (0x7ffffffffffffffe < uVar6) {
              uVar6 = 0x7fffffffffffffff;
            }
            if (lVar22 != 0) {
              uVar6 = 0x7fffffffffffffff;
            }
            uVar15 = 0;
            if ((int)uStack_510 == 0) {
              uVar15 = uVar6;
            }
            _memcpy(auStack_880,aiStack_6d0,0x1a0);
            *(undefined4 *)(lVar21 + 0x368) = 0x39;
            *(long *)(lVar21 + 0x370) = lVar27;
            *(long *)(lVar21 + 0x378) = lVar26;
            *(long *)(lVar21 + 0x380) = lVar27;
            _memcpy(lVar21 + 0x388,auStack_880,0x1a0);
            *(undefined8 *)(lVar21 + 0x530) = uVar4;
            *(undefined8 *)(lVar21 + 0x528) = uVar7;
            *(ulong *)(lVar21 + 0x538) = uVar15;
            *(long *)(lVar21 + 0x540) = lVar30;
            *(long *)(lVar21 + 0x548) = lVar31;
            *(undefined1 *)(lVar21 + 0x910) = 0;
          }
          else if (bVar2 == 3) {
            bVar2 = *(byte *)(lVar21 + 0x410);
            if (bVar2 < 2) {
              if (bVar2 != 0) {
                FUN_107c05cc0(&UNK_10b215688);
                goto LAB_1005af26c;
              }
              lVar27 = *(long *)(lVar21 + 0x368);
              plVar28 = *(long **)(lVar21 + 0x370);
              goto LAB_1005aee9c;
            }
            if (bVar2 != 3) {
              FUN_107c05cc4(&UNK_10b215688);
              goto LAB_1005af26c;
            }
            bVar2 = *(byte *)(lVar21 + 0x408);
            if (1 < bVar2) {
              if (bVar2 != 3) {
                FUN_107c05cc4(&UNK_10b215640);
                goto LAB_1005af26c;
              }
              goto LAB_1005aef2c;
            }
            if (bVar2 != 0) {
              FUN_107c05cc0(&UNK_10b215640);
              goto LAB_1005af26c;
            }
            lVar27 = *(long *)(lVar21 + 0x380);
            if (**(long **)(lVar21 + 0x388) == -0x7ffffffffffffffe) goto LAB_1005aeed0;
LAB_1005aef18:
            *(undefined1 *)(lVar21 + 0x408) = 1;
            goto LAB_1005af074;
          }
          uVar6 = FUN_10059e898(lVar21 + 0x368,auVar32._8_8_);
          if ((uVar6 & 1) == 0) {
            FUN_100d1ddbc(lVar21 + 0x368);
            bVar5 = false;
            *(undefined1 *)(lVar21 + 0x361) = 0;
            uVar14 = 1;
          }
          else {
            bVar5 = true;
            uVar14 = 4;
          }
LAB_1005af1c0:
          *(undefined1 *)(lVar21 + 0x360) = uVar14;
          return bVar5;
        }
        plVar28[4] = plVar28[1];
        plVar28[3] = *plVar28;
        if (plVar28[2] != 0) {
          plVar28[5] = plVar28[2];
          plVar28[7] = *plVar28 + 0x790;
          *(undefined1 *)(plVar28 + 0x15) = 0;
          goto LAB_1005aea58;
        }
      }
      else {
        if (bVar2 != 3) {
          auVar33 = *(undefined1 (*) [16])(plVar28 + 10);
          goto LAB_1005aed00;
        }
LAB_1005aea58:
        pcVar9 = (char *)FUN_100fd3e50(plVar28 + 7,auVar32._8_8_);
        if (pcVar9 == (char *)0x0) {
          bVar5 = true;
          uVar14 = 3;
          goto LAB_1005aed98;
        }
        if ((((char)plVar28[0x15] == '\x03') && ((char)plVar28[0x14] == '\x03')) &&
           ((char)plVar28[0xb] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar28 + 0xc);
          if (plVar28[0xd] != 0) {
            (**(code **)(plVar28[0xd] + 0x18))(plVar28[0xe]);
          }
        }
        plVar19 = (long *)plVar28[4];
        plVar18 = (long *)plVar28[5];
        lVar27 = 8;
        if ((int)*plVar19 == 0) {
          lVar27 = 0x18;
        }
        if (plVar19[2] == 0 && *plVar19 == 0) {
          lVar16 = 0;
          lVar21 = *plVar18;
          lVar31 = plVar18[1];
          lVar30 = plVar18[2];
          lVar26 = plVar18[3];
          lVar23 = plVar18[4];
          lVar27 = *(long *)(pcVar9 + 0x4f0);
          lVar22 = 0;
          lVar13 = 0;
          if (lVar27 == 2) goto LAB_1005aeb30;
LAB_1005aeb78:
          lVar24 = *(long *)(pcVar9 + 0x500);
          lVar25 = *(long *)(pcVar9 + 0x508);
          lVar10 = *(long *)(pcVar9 + 0x510);
          lVar11 = *(long *)(pcVar9 + 0x518);
          lVar12 = *(long *)(pcVar9 + 0x520);
          lVar13 = *(long *)(pcVar9 + 0x4f8);
        }
        else {
          uVar20 = plVar19[0x3b];
          uVar15 = *(ulong *)((long)plVar19 + lVar27);
          uVar6 = uVar15 * uVar20;
          if (SUB168(SEXT816((long)uVar15) * SEXT816((long)uVar20),8) !=
              (long)(uVar15 * uVar20) >> 0x3f) {
            uVar6 = (long)(uVar15 ^ uVar20) >> 0x3f ^ 0x7fffffffffffffff;
          }
          lVar22 = (long)uVar6 / 100;
          lVar16 = 1;
          lVar21 = *plVar18;
          lVar31 = plVar18[1];
          lVar30 = plVar18[2];
          lVar26 = plVar18[3];
          lVar23 = plVar18[4];
          lVar27 = *(long *)(pcVar9 + 0x4f0);
          lVar13 = lVar22;
          if (lVar27 != 2) goto LAB_1005aeb78;
LAB_1005aeb30:
          lVar24 = 0;
          lVar25 = 0;
          lVar10 = 0;
          lVar11 = 0;
          lVar12 = 0;
          lVar22 = lVar13;
          lVar27 = lVar16;
        }
        if ((int)lVar16 != 0) {
          lVar27 = 1;
          lVar13 = lVar22;
        }
        *(long *)(pcVar9 + 0x4f0) = lVar27;
        *(long *)(pcVar9 + 0x4f8) = lVar13;
        *(long *)(pcVar9 + 0x500) = lVar24 + lVar21;
        *(long *)(pcVar9 + 0x508) = lVar25 + lVar31;
        *(long *)(pcVar9 + 0x510) = lVar10 + lVar30;
        *(long *)(pcVar9 + 0x518) = lVar11 + lVar26;
        *(long *)(pcVar9 + 0x520) = lVar12 + lVar23;
        *(long *)(pcVar9 + 0x528) = lVar21;
        *(long *)(pcVar9 + 0x530) = lVar31;
        *(long *)(pcVar9 + 0x538) = lVar30;
        *(long *)(pcVar9 + 0x540) = lVar26;
        *(long *)(pcVar9 + 0x548) = lVar23;
        if ((*(char *)(*(long *)(plVar28[4] + 0x788) + 0x252c) == '\x01') &&
           (*(long *)(pcVar9 + 0x6e0) != 0)) {
          uVar6 = *(ulong *)plVar28[5];
          pcVar9[0x6e0] = '\0';
          pcVar9[0x6e1] = '\0';
          pcVar9[0x6e2] = '\0';
          pcVar9[0x6e3] = '\0';
          pcVar9[0x6e4] = '\0';
          pcVar9[0x6e5] = '\0';
          pcVar9[0x6e6] = '\0';
          pcVar9[0x6e7] = '\0';
          *(ulong *)(pcVar9 + 0x6e8) = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
        }
        lVar30 = *(long *)(pcVar9 + 0x508);
        lVar21 = *(long *)(pcVar9 + 0x500);
        lVar22 = *(long *)(pcVar9 + 0x518);
        lVar31 = *(long *)(pcVar9 + 0x510);
        plVar28[0x12] = *(long *)(pcVar9 + 0x520);
        plVar28[0xf] = lVar30;
        plVar28[0xe] = lVar21;
        plVar28[0x11] = lVar22;
        plVar28[0x10] = lVar31;
        lVar31 = *(long *)(pcVar9 + 0x530);
        lVar30 = *(long *)(pcVar9 + 0x528);
        lVar13 = *(long *)(pcVar9 + 0x540);
        lVar22 = *(long *)(pcVar9 + 0x538);
        lVar21 = *(long *)(pcVar9 + 0x548);
        plVar19 = plVar28 + 0xc;
        *plVar19 = lVar27;
        plVar28[0x17] = lVar21;
        plVar28[0x16] = lVar13;
        plVar28[0x15] = lVar22;
        plVar28[0x14] = lVar31;
        plVar28[0x13] = lVar30;
        plVar28[0xd] = *(long *)(pcVar9 + 0x4f8);
        if (*pcVar9 == '\0') {
          *pcVar9 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar9,lVar11 + lVar26,1000000000);
        }
        FUN_1060fa678(pcVar9,1,pcVar9);
        if (*plVar19 != 2) {
          plVar28[7] = (long)plVar19;
          plVar18 = *(long **)(*(long *)(plVar28[3] + 0x3b0) + 0x60);
          plVar19 = plVar18 + *(long *)(*(long *)(plVar28[3] + 0x3b0) + 0x68) * 2;
          plVar28[8] = (long)plVar18;
          plVar28[9] = (long)plVar19;
          while (plVar18 != plVar19) {
            plVar28[8] = (long)(plVar18 + 2);
            auVar33 = (**(code **)(plVar18[1] + 0x18))
                                (*plVar18 + (*(long *)(plVar18[1] + 0x10) - 1U & 0xfffffffffffffff0)
                                 + 0x10,plVar28[3] + 0x140,plVar28[3] + 0x198,
                                 *(long *)(plVar28[4] + 0x7a8) + 0x10,plVar28[7]);
            *(undefined1 (*) [16])(plVar28 + 10) = auVar33;
LAB_1005aed00:
            uVar6 = (**(code **)(auVar33._8_8_ + 0x18))(auVar33._0_8_,auVar32._8_8_);
            if ((uVar6 & 1) != 0) {
              bVar5 = true;
              uVar14 = 4;
              goto LAB_1005aed98;
            }
            lVar27 = plVar28[10];
            puVar8 = (undefined8 *)plVar28[0xb];
            pcVar17 = (code *)*puVar8;
            if (pcVar17 != (code *)0x0) {
              (*pcVar17)(lVar27);
            }
            if (puVar8[1] != 0) {
              _free(lVar27);
            }
            plVar19 = (long *)plVar28[9];
            plVar18 = (long *)plVar28[8];
          }
        }
      }
      bVar5 = false;
      uVar14 = 1;
LAB_1005aed98:
      *(undefined1 *)(plVar28 + 6) = uVar14;
      return bVar5;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = param_1[3];
    *param_1 = param_1[2];
    param_1[5] = param_1[2] + 0x790;
    *(undefined1 *)(param_1 + 0x13) = 0;
LAB_1005ae4b8:
    auVar32 = FUN_100fd3e50(param_1 + 5,param_2);
    uVar7 = auVar32._8_8_;
    pcVar9 = auVar32._0_8_;
    if (pcVar9 == (char *)0x0) {
      bVar5 = true;
      uVar14 = 3;
      goto LAB_1005ae714;
    }
    if ((((char)param_1[0x13] == '\x03') && ((char)param_1[0x12] == '\x03')) &&
       ((char)param_1[9] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 10);
      uVar7 = extraout_x1;
      if (param_1[0xb] != 0) {
        (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
        uVar7 = extraout_x1_00;
      }
    }
    lVar27 = *(long *)(pcVar9 + 0x4f0);
    if (lVar27 != 2) {
      lStack_1d8 = *(long *)(pcVar9 + 0x508);
      lStack_1e0 = *(long *)(pcVar9 + 0x500);
      lStack_1c8 = *(long *)(pcVar9 + 0x518);
      lStack_1d0 = *(long *)(pcVar9 + 0x510);
      lStack_1c0 = *(long *)(pcVar9 + 0x520);
      lStack_1f0 = *(long *)(pcVar9 + 0x548);
      lStack_208 = *(long *)(pcVar9 + 0x530);
      lStack_210 = *(long *)(pcVar9 + 0x528);
      lStack_1f8 = *(long *)(pcVar9 + 0x540);
      lStack_200 = *(long *)(pcVar9 + 0x538);
      unaff_x24 = *(long *)(pcVar9 + 0x4f8);
    }
    if (*(long *)(pcVar9 + 0x6f8) == 3) {
      lVar21 = 3;
    }
    else {
      FUN_103635e88(&lStack_108,pcVar9 + 0x6f8);
      lStack_148 = lStack_98;
      lStack_150 = lStack_a0;
      lStack_138 = lStack_88;
      lStack_140 = lStack_90;
      lStack_128 = lStack_78;
      lStack_130 = lStack_80;
      lStack_118 = lStack_68;
      lStack_120 = lStack_70;
      lStack_188 = lStack_d8;
      lStack_190 = lStack_e0;
      lStack_178 = lStack_c8;
      lStack_180 = lStack_d0;
      lStack_168 = lStack_b8;
      lStack_170 = lStack_c0;
      lStack_158 = lStack_a8;
      lStack_160 = lStack_b0;
      lStack_1a8 = lStack_f8;
      lStack_1b0 = lStack_100;
      lStack_198 = lStack_e8;
      lStack_1a0 = lStack_f0;
      uVar7 = extraout_x1_01;
      lVar21 = lStack_108;
    }
    if (*pcVar9 == '\0') {
      *pcVar9 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar9,uVar7,1000000000);
    }
    FUN_1060fa678(pcVar9,1,pcVar9);
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 5) = 0xe;
    param_1[6] = lVar27;
    param_1[7] = unaff_x24;
    param_1[9] = lStack_1d8;
    param_1[8] = lStack_1e0;
    param_1[0xb] = lStack_1c8;
    param_1[10] = lStack_1d0;
    param_1[0xc] = lStack_1c0;
    param_1[0xe] = lStack_208;
    param_1[0xd] = lStack_210;
    param_1[0x10] = lStack_1f8;
    param_1[0xf] = lStack_200;
    param_1[0x11] = lStack_1f0;
    param_1[0x13] = lStack_1b0;
    param_1[0x12] = lVar21;
    param_1[0x15] = lStack_1a0;
    param_1[0x14] = lStack_1a8;
    param_1[0x1b] = lStack_170;
    param_1[0x1a] = lStack_178;
    param_1[0x1d] = lStack_160;
    param_1[0x1c] = lStack_168;
    param_1[0x17] = lStack_190;
    param_1[0x16] = lStack_198;
    param_1[0x19] = lStack_180;
    param_1[0x18] = lStack_188;
    param_1[0x26] = lStack_118;
    param_1[0x23] = lStack_130;
    param_1[0x22] = lStack_138;
    param_1[0x25] = lStack_120;
    param_1[0x24] = lStack_128;
    param_1[0x1f] = lStack_150;
    param_1[0x1e] = lStack_158;
    param_1[0x21] = lStack_140;
    param_1[0x20] = lStack_148;
    param_1[0x41] = param_1[1];
    param_1[0x40] = *param_1;
    *(undefined1 *)(param_1 + 0xba) = 0;
  }
  else if (bVar2 == 3) goto LAB_1005ae4b8;
  uVar6 = FUN_10059e898(param_1 + 5,param_2);
  if ((uVar6 & 1) == 0) {
    FUN_100d1ddbc(param_1 + 5);
    bVar5 = false;
    *(undefined1 *)(param_1 + 4) = 0;
    uVar14 = 1;
  }
  else {
    bVar5 = true;
    uVar14 = 4;
  }
LAB_1005ae714:
  *(undefined1 *)((long)param_1 + 0x21) = uVar14;
  return bVar5;
}

