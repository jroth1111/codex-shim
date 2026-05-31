
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005a4314(undefined8 *param_1,long *******param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  long *******ppppppplVar6;
  code *pcVar7;
  undefined1 *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined1 uVar17;
  long ******pppppplVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long *******ppppppplVar23;
  long *******ppppppplVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long ******pppppplVar27;
  long *******ppppppplVar28;
  ulong *puVar29;
  long ******pppppplVar30;
  long lVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_a1b0 [800];
  undefined1 auStack_9e90 [40016];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d0 [8];
  undefined1 uStack_1c8;
  char ***pppcStack_150;
  undefined *puStack_148;
  long *******ppppppplStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long *******ppppppplStack_128;
  char ***pppcStack_120;
  undefined8 uStack_118;
  long lStack_110;
  char **ppcStack_108;
  char **ppcStack_100;
  char *pcStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *******ppppppplStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  undefined *puStack_68;
  long *******ppppppplStack_60;
  undefined *puStack_58;
  
  bVar5 = *(byte *)(param_1 + 0xe);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        FUN_107c05cc0(&UNK_10b218108);
      }
      uVar14 = FUN_107c05cc4();
      if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
        FUN_100e0fc04(param_1 + 9);
      }
      *(undefined2 *)(param_1 + 0xe) = 2;
      __Unwind_Resume(uVar14);
      auVar36 = FUN_107c05ccc();
      lVar22 = auVar36._8_8_;
      puVar25 = auVar36._0_8_;
      puVar32 = &stack0xfffffffffffffe50;
      do {
        puVar8 = puVar32;
        *(undefined8 *)(puVar8 + -0x1000) = 0;
        puVar32 = puVar8 + -0x1000;
      } while (puVar8 + -0x1000 != auStack_a1b0);
      puVar32 = puVar8 + 0x3fb0;
      bVar5 = *(byte *)(lVar22 + 0x380);
      if (bVar5 < 3) {
        if (bVar5 == 0) {
          lVar16 = *(long *)(lVar22 + 0x1b8);
          *(long *)(lVar22 + 0x1c0) = lVar16;
          _memcpy(lVar22 + 0x1c8,lVar22,0x1b8);
          *(bool *)(lVar22 + 0x381) = *(long *)(*(long *)(lVar16 + 0x3b0) + 0x50) != 0;
          *(long *)(lVar22 + 0x388) = lVar16 + 0x790;
          *(undefined1 *)(lVar22 + 0x3f8) = 0;
          goto LAB_1005a4d5c;
        }
        if (bVar5 == 1) {
          FUN_107c05cc0(&UNK_10b218138);
        }
        FUN_107c05cc4();
LAB_1005a58e0:
        FUN_107c03c64(1,puVar32);
LAB_1005a58ec:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005a58f0);
        (*pcVar7)();
      }
      if (bVar5 == 3) {
LAB_1005a4d5c:
        lVar16 = lVar22 + 0x388;
        pcVar13 = (char *)FUN_100fd3e50(lVar16,param_3);
        if (pcVar13 == (char *)0x0) {
          *puVar25 = 0x8000000000000003;
          uVar17 = 3;
          uVar14 = 0;
          goto LAB_1005a5858;
        }
        if (((*(char *)(lVar22 + 0x3f8) == '\x03') && (*(char *)(lVar22 + 0x3f0) == '\x03')) &&
           (*(char *)(lVar22 + 0x3a8) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (lVar22 + 0x3b0);
          if (*(long *)(lVar22 + 0x3b8) != 0) {
            (**(code **)(*(long *)(lVar22 + 0x3b8) + 0x18))(*(undefined8 *)(lVar22 + 0x3c0));
          }
        }
        pcVar1 = pcVar13 + 0x28;
        __ZN10codex_core7session7session20SessionConfiguration5apply17hf94b256e7c9f0107E
                  (puVar8 + 0x19b8,pcVar1,lVar22 + 0x1c8);
        if (*(long *)(puVar8 + 0x19b8) != 2) {
          _memcpy(puVar8 + -0x10a0,puVar8 + 0x19b8,0x4c8);
          if ((*(byte *)(lVar22 + 0x381) & 1) == 0) {
            *(undefined8 *)(puVar8 + -0xb90) = 2;
LAB_1005a5068:
            *(undefined8 *)(puVar8 + 0x19b8) = 2;
            uVar14 = *(undefined8 *)(pcVar13 + 0x260);
            lVar31 = *(long *)(pcVar13 + 0x268);
            if (lVar31 != 0) goto LAB_1005a5040;
LAB_1005a507c:
            lVar15 = 1;
          }
          else {
            __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_30build_effective_session_config17hc5c50b37d5296071E
                      (puVar8 + -0xb90,pcVar1);
            if ((*(byte *)(lVar22 + 0x381) & 1) == 0) goto LAB_1005a5068;
            __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_30build_effective_session_config17hc5c50b37d5296071E
                      (puVar8 + 0x19b8,puVar8 + -0x10a0);
            uVar14 = *(undefined8 *)(pcVar13 + 0x260);
            lVar31 = *(long *)(pcVar13 + 0x268);
            if (lVar31 == 0) goto LAB_1005a507c;
LAB_1005a5040:
            lVar15 = _malloc(lVar31);
            if (lVar15 == 0) {
              FUN_107c03c64(1,lVar31);
              goto LAB_1005a58ec;
            }
          }
          _memcpy(lVar15,uVar14,lVar31);
          lVar20 = *(long *)(pcVar13 + 0x3c0);
          if (-1 < lVar20) {
            lVar20 = 2;
          }
          puVar29 = (ulong *)(pcVar1 + *(long *)(&UNK_108cd9a90 + lVar20 * 8));
          uVar19 = *puVar29;
          uVar14 = 0x8000000000000000;
          uVar21 = uVar19;
          if (uVar19 < 0x8000000000000001) {
            uVar21 = 0;
          }
          *(long *)(puVar8 + -0x10b0) = lVar15;
          *(long *)(puVar8 + -0x10a8) = lVar31;
          if ((uVar21 & 0x7fffffffffffffff) == 0) {
            if (uVar19 == 0x8000000000000000) {
              uVar21 = 0x8000000000000000;
            }
            else {
              FUN_1035ab934(puVar8 + 0x3fb0,puVar29[1],puVar29[2]);
              uVar21 = puVar29[3];
              uVar14 = *(undefined8 *)(puVar8 + 0x3fb0);
              *(undefined8 *)(puVar8 + 0x3f58) = *(undefined8 *)(puVar8 + 0x3fc0);
              *(undefined8 *)(puVar8 + 0x3f50) = *(undefined8 *)(puVar8 + 0x3fb8);
            }
            uVar19 = puVar29[4];
            *(undefined8 *)(puVar8 + 0x3fc0) = *(undefined8 *)(puVar8 + 0x3f58);
            *(undefined8 *)(puVar8 + 0x3fb8) = *(undefined8 *)(puVar8 + 0x3f50);
            *(undefined8 *)(puVar8 + 0x3fb0) = uVar14;
            *(ulong *)(puVar8 + 0x3fc8) = uVar21;
            puVar8[0x3fd0] = (char)uVar19;
          }
          else if ((uVar21 & 0x7fffffffffffffff) == 1) {
            *(undefined8 *)(puVar8 + 0x3fb0) = 0x8000000000000001;
          }
          else {
            uVar21 = *puVar29;
            *(ulong *)(puVar8 + 0x3fb8) = puVar29[1];
            *(ulong *)(puVar8 + 0x3fb0) = uVar21;
            uVar21 = puVar29[2];
            *(ulong *)(puVar8 + 0x3fc8) = puVar29[3];
            *(ulong *)(puVar8 + 0x3fc0) = uVar21;
            *(ulong *)(puVar8 + 0x3fd0) = puVar29[4];
          }
          func_0x000104922e0c(puVar8 + 0x3f00,puVar8 + 0x3fb0,*(undefined8 *)(pcVar13 + 0x278),
                              *(undefined8 *)(pcVar13 + 0x280));
          uVar21 = *(ulong *)(puVar8 + -0xd08) ^ 0x8000000000000000;
          if (-1 < (long)*(ulong *)(puVar8 + -0xd08)) {
            uVar21 = 2;
          }
          if (uVar21 == 0) {
            puVar29 = (ulong *)(puVar8 + -0xd00);
          }
          else if (uVar21 == 1) {
            puVar29 = (ulong *)(puVar8 + -0xcd0);
          }
          else {
            puVar29 = (ulong *)(puVar8 + -0xcc0);
          }
          uVar19 = *puVar29;
          uVar21 = uVar19;
          if (uVar19 < 0x8000000000000001) {
            uVar21 = 0;
          }
          if ((uVar21 & 0x7fffffffffffffff) == 2) {
            uVar21 = *puVar29;
            uVar33 = puVar29[3];
            uVar19 = puVar29[2];
            *(ulong *)(puVar8 + 0x3fb8) = puVar29[1];
            *(ulong *)(puVar8 + 0x3fb0) = uVar21;
            *(ulong *)(puVar8 + 0x3fc8) = uVar33;
            *(ulong *)(puVar8 + 0x3fc0) = uVar19;
            *(ulong *)(puVar8 + 0x3fd0) = puVar29[4];
          }
          else if ((uVar21 & 0x7fffffffffffffff) == 1) {
            *(undefined8 *)(puVar8 + 0x3fb0) = 0x8000000000000001;
          }
          else {
            uVar14 = 0x8000000000000000;
            if (uVar19 == 0x8000000000000000) {
              uVar21 = 0x8000000000000000;
            }
            else {
              FUN_1035ab934(puVar8 + 0x3fb0,puVar29[1],puVar29[2]);
              uVar21 = puVar29[3];
              uVar14 = *(undefined8 *)(puVar8 + 0x3fb0);
              *(undefined8 *)(puVar8 + 0x3f58) = *(undefined8 *)(puVar8 + 0x3fc0);
              *(undefined8 *)(puVar8 + 0x3f50) = *(undefined8 *)(puVar8 + 0x3fb8);
            }
            uVar19 = puVar29[4];
            *(undefined8 *)(puVar8 + 0x3fc0) = *(undefined8 *)(puVar8 + 0x3f58);
            *(undefined8 *)(puVar8 + 0x3fb8) = *(undefined8 *)(puVar8 + 0x3f50);
            *(undefined8 *)(puVar8 + 0x3fb0) = uVar14;
            *(ulong *)(puVar8 + 0x3fc8) = uVar21;
            puVar8[0x3fd0] = (char)uVar19;
          }
          func_0x000104922e0c(puVar8 + 0x3f28,puVar8 + 0x3fb0,*(undefined8 *)(puVar8 + -0xe50),
                              *(undefined8 *)(puVar8 + -0xe48));
          uVar12 = FUN_1011e7cd8(puVar8 + 0x3f00,puVar8 + 0x3f28);
          uVar14 = *(undefined8 *)(puVar8 + -0xe68);
          lVar31 = *(long *)(puVar8 + -0xe60);
          *(undefined4 *)(puVar8 + -0x10c4) = uVar12;
          if (lVar31 == 0) {
            lVar15 = 1;
          }
          else {
            lVar15 = _malloc(lVar31);
            if (lVar15 == 0) {
              FUN_107c03c64(1,lVar31);
              goto LAB_1005a58ec;
            }
          }
          *(long *)(puVar8 + -0x10b8) = lVar15;
          _memcpy(lVar15,uVar14,lVar31);
          uVar14 = *(undefined8 *)(puVar8 + -0xe38);
          lVar15 = *(long *)(puVar8 + -0xe30);
          if (lVar15 == 0) {
            lVar20 = 1;
          }
          else {
            lVar20 = _malloc(lVar15);
            if (lVar20 == 0) {
              FUN_107c03c64(1,lVar15);
              goto LAB_1005a58ec;
            }
          }
          *(long *)(puVar8 + -0x10c0) = lVar20;
          _memcpy(lVar20,uVar14,lVar15);
          lVar20 = *(ulong *)(puVar8 + -0xc78) + 0x7ffffffffffffffa;
          if (*(ulong *)(puVar8 + -0xc78) < 0x8000000000000006) {
            lVar20 = 6;
          }
          if (lVar20 < 4) {
            if (lVar20 < 2) {
              if (lVar20 == 0) {
                uVar14 = 0x8000000000000006;
              }
              else {
                uVar14 = 0x8000000000000007;
              }
            }
            else if (lVar20 == 2) {
              uVar14 = 0x8000000000000008;
            }
            else {
              uVar14 = 0x8000000000000009;
            }
LAB_1005a5554:
            *(undefined8 *)(puVar8 + 0x3f50) = uVar14;
          }
          else {
            if (lVar20 < 6) {
              if (lVar20 == 4) {
                uVar14 = *(undefined8 *)(puVar8 + -0xc68);
                puVar32 = *(undefined1 **)(puVar8 + -0xc60);
                *(long *)(puVar8 + -0x10d0) = lVar16;
                if (puVar32 == (undefined1 *)0x0) {
                  lVar16 = 1;
                }
                else {
                  *(undefined8 *)(puVar8 + -0x10d8) = uVar14;
                  lVar16 = _malloc(puVar32);
                  if (lVar16 == 0) goto LAB_1005a58e0;
                  uVar14 = *(undefined8 *)(puVar8 + -0x10d8);
                }
                _memcpy(lVar16,uVar14,puVar32);
                *(undefined1 **)(puVar8 + 0x3f58) = puVar32;
                *(long *)(puVar8 + 0x3f60) = lVar16;
                uVar14 = 0x800000000000000a;
                *(undefined1 **)(puVar8 + 0x3f68) = puVar32;
                lVar16 = *(long *)(puVar8 + -0x10d0);
              }
              else {
                uVar14 = 0x800000000000000b;
              }
              goto LAB_1005a5554;
            }
            if (lVar20 != 6) {
              uVar14 = 0x800000000000000d;
              goto LAB_1005a5554;
            }
            FUN_1011d1944(puVar8 + 0x3f50,puVar8 + -0xc78);
          }
          _memcpy(puVar8 + 0x3fb0,puVar8 + -0x10a0,0x4c8);
          FUN_100e2d09c(pcVar1);
          _memcpy(pcVar1,puVar8 + 0x3fb0,0x4c8);
          _memcpy(puVar8 + 0x4480,puVar8 + -0xb90,0x2548);
          _memcpy(puVar8 + 0x69c8,puVar8 + 0x19b8,0x2548);
          *(undefined8 *)(puVar8 + 0x8f38) = *(undefined8 *)(puVar8 + 0x3f78);
          *(undefined8 *)(puVar8 + 0x8f30) = *(undefined8 *)(puVar8 + 0x3f70);
          *(undefined8 *)(puVar8 + 0x8f48) = *(undefined8 *)(puVar8 + 0x3f88);
          *(undefined8 *)(puVar8 + 0x8f40) = *(undefined8 *)(puVar8 + 0x3f80);
          *(undefined8 *)(puVar8 + 0x8f58) = *(undefined8 *)(puVar8 + 0x3f98);
          *(undefined8 *)(puVar8 + 0x8f50) = *(undefined8 *)(puVar8 + 0x3f90);
          *(undefined8 *)(puVar8 + 0x8f68) = *(undefined8 *)(puVar8 + 0x3fa8);
          *(undefined8 *)(puVar8 + 0x8f60) = *(undefined8 *)(puVar8 + 0x3fa0);
          uVar21 = *(ulong *)(puVar8 + 0x3f28);
          bVar9 = uVar21 != 0x8000000000000000;
          if (uVar21 < 0x8000000000000001) {
            uVar21 = 0;
          }
          *(undefined8 *)(puVar8 + 0x8f18) = *(undefined8 *)(puVar8 + 0x3f58);
          *(undefined8 *)(puVar8 + 0x8f10) = *(undefined8 *)(puVar8 + 0x3f50);
          *(undefined8 *)(puVar8 + 0x8f28) = *(undefined8 *)(puVar8 + 0x3f68);
          *(undefined8 *)(puVar8 + 0x8f20) = *(undefined8 *)(puVar8 + 0x3f60);
          uVar14 = extraout_x1_08;
          if ((bVar9) && ((uVar21 & 0x7fffffffffffffff) == 0)) {
            FUN_100e79780(puVar8 + 0x3f28);
            uVar14 = extraout_x1_09;
          }
          uVar21 = *(ulong *)(puVar8 + 0x3f00);
          bVar9 = uVar21 != 0x8000000000000000;
          if (uVar21 < 0x8000000000000001) {
            uVar21 = 0;
          }
          if ((bVar9) && ((uVar21 & 0x7fffffffffffffff) == 0)) {
            FUN_100e79780(puVar8 + 0x3f00);
            uVar14 = extraout_x1_10;
          }
          if (*pcVar13 == '\0') {
            *pcVar13 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar13,uVar14,1000000000);
          }
          FUN_1060fa678(pcVar13,1,pcVar13);
          _memcpy(lVar16,puVar8 + 0x4480,0x2548);
          _memcpy(lVar22 + 0x28d0,puVar8 + 0x69c8,0x2548);
          uVar14 = *(undefined8 *)(puVar8 + 0x8f30);
          uVar34 = *(undefined8 *)(puVar8 + 0x8f48);
          uVar26 = *(undefined8 *)(puVar8 + 0x8f40);
          *(undefined8 *)(lVar22 + 0x4e88) = *(undefined8 *)(puVar8 + 0x8f38);
          *(undefined8 *)(lVar22 + 0x4e80) = uVar14;
          *(undefined8 *)(lVar22 + 0x4e98) = uVar34;
          *(undefined8 *)(lVar22 + 0x4e90) = uVar26;
          uVar14 = *(undefined8 *)(puVar8 + 0x8f50);
          uVar34 = *(undefined8 *)(puVar8 + 0x8f68);
          uVar26 = *(undefined8 *)(puVar8 + 0x8f60);
          *(undefined8 *)(lVar22 + 0x4ea8) = *(undefined8 *)(puVar8 + 0x8f58);
          *(undefined8 *)(lVar22 + 0x4ea0) = uVar14;
          *(undefined8 *)(lVar22 + 0x4eb8) = uVar34;
          *(undefined8 *)(lVar22 + 0x4eb0) = uVar26;
          uVar14 = *(undefined8 *)(puVar8 + 0x8f10);
          uVar35 = *(undefined8 *)(puVar8 + 0x8f28);
          uVar34 = *(undefined8 *)(puVar8 + 0x8f20);
          *(undefined8 *)(lVar22 + 0x4e68) = *(undefined8 *)(puVar8 + 0x8f18);
          *(undefined8 *)(lVar22 + 0x4e60) = uVar14;
          uVar14 = *(undefined8 *)(puVar8 + -0x10b0);
          uVar26 = *(undefined8 *)(puVar8 + -0x10a8);
          *(undefined8 *)(lVar22 + 0x4e18) = uVar26;
          *(undefined8 *)(lVar22 + 20000) = uVar14;
          *(undefined8 *)(lVar22 + 0x4e28) = uVar26;
          *(long *)(lVar22 + 0x4e30) = lVar31;
          uVar14 = *(undefined8 *)(puVar8 + -0x10c0);
          *(undefined8 *)(lVar22 + 0x4e38) = *(undefined8 *)(puVar8 + -0x10b8);
          *(long *)(lVar22 + 0x4e40) = lVar31;
          *(long *)(lVar22 + 0x4e48) = lVar15;
          *(undefined8 *)(lVar22 + 0x4e50) = uVar14;
          *(long *)(lVar22 + 0x4e58) = lVar15;
          *(undefined8 *)(lVar22 + 0x4e78) = uVar35;
          *(undefined8 *)(lVar22 + 0x4e70) = uVar34;
          lVar31 = 0;
          if (*(long *)(lVar22 + 0x388) != 2) {
            lVar31 = lVar16;
          }
          lVar16 = 0;
          if (*(long *)(lVar22 + 0x28d0) != 2) {
            lVar16 = lVar22 + 0x28d0;
          }
          __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_32emit_config_changed_contributors17hc166f4e06efaf732E
                    (*(undefined8 *)(lVar22 + 0x1c0),lVar31,lVar16);
          __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_36maybe_refresh_shell_snapshot_for_cwd17h467b9b89d6a10a69E
                    (*(undefined8 *)(lVar22 + 0x1c0),lVar22 + 0x4e18,lVar22 + 0x4e30,lVar22 + 0x4e48
                     ,lVar22 + 0x4e60);
          if (*(int *)(puVar8 + -0x10c4) == 0) {
            *(undefined8 *)(lVar22 + 0x5900) = *(undefined8 *)(lVar22 + 0x1c0);
            *(undefined1 *)(lVar22 + 0x5909) = 0;
            goto LAB_1005a5740;
          }
          goto LAB_1005a576c;
        }
        *(undefined8 *)(puVar8 + -0xb48) = *(undefined8 *)(puVar8 + 0x1a08);
        *(undefined8 *)(puVar8 + -0xb50) = *(undefined8 *)(puVar8 + 0x1a00);
        *(undefined8 *)(puVar8 + -0xb38) = *(undefined8 *)(puVar8 + 0x1a18);
        *(undefined8 *)(puVar8 + -0xb40) = *(undefined8 *)(puVar8 + 0x1a10);
        *(undefined8 *)(puVar8 + -0xb28) = *(undefined8 *)(puVar8 + 0x1a28);
        *(undefined8 *)(puVar8 + -0xb30) = *(undefined8 *)(puVar8 + 0x1a20);
        *(undefined8 *)(puVar8 + -0xb88) = *(undefined8 *)(puVar8 + 0x19c8);
        *(undefined8 *)(puVar8 + -0xb90) = *(undefined8 *)(puVar8 + 0x19c0);
        *(undefined8 *)(puVar8 + -0xb78) = *(undefined8 *)(puVar8 + 0x19d8);
        *(undefined8 *)(puVar8 + -0xb80) = *(undefined8 *)(puVar8 + 0x19d0);
        *(undefined8 *)(puVar8 + -0xb58) = *(undefined8 *)(puVar8 + 0x19f8);
        *(undefined8 *)(puVar8 + -0xb60) = *(undefined8 *)(puVar8 + 0x19f0);
        *(undefined8 *)(puVar8 + -0xb68) = *(undefined8 *)(puVar8 + 0x19e8);
        *(undefined8 *)(puVar8 + -0xb70) = *(undefined8 *)(puVar8 + 0x19e0);
        uVar21 = extraout_x1_02;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          uVar21 = (ulong)bRam000000010b62abe8;
          if (1 < bRam000000010b62abe8 - 1) {
            if (bRam000000010b62abe8 != 0) {
              cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                                 );
              if (cVar10 != '\0') goto LAB_1005a4e44;
              uVar21 = 0;
            }
            goto LAB_1005a510c;
          }
LAB_1005a4e44:
          auVar36 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                              );
          uVar21 = auVar36._8_8_;
          if ((auVar36._0_8_ & 1) == 0) goto LAB_1005a510c;
          *(undefined1 **)(puVar8 + -3000) = puVar8 + -0xb90;
          *(undefined **)(puVar8 + -0xbb0) =
               &
               __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
          ;
          *(char **)(puVar8 + -0xbc8) = s__rejected_session_settings_updat_108ac181f;
          *(undefined1 **)(puVar8 + -0xbc0) = puVar8 + -3000;
          *(undefined1 **)(puVar8 + -0xbd8) = puVar8 + -0xbc8;
          *(undefined **)(puVar8 + -0xbd0) = &UNK_10b208fd0;
          *(undefined8 *)(puVar8 + 0x3f50) = 1;
          *(undefined1 **)(puVar8 + 0x3f58) = puVar8 + -0xbd8;
          *(undefined8 *)(puVar8 + 0x3f60) = 1;
          *(long *)(puVar8 + 0x3f68) =
               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
               + 0x30;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                     ,puVar8 + 0x3f50);
          lVar16 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
          ;
          uVar21 = extraout_x1_03;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar14 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                      + 0x20);
            uVar26 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                      + 0x28);
            *(undefined8 *)(puVar8 + 0x3f28) = 2;
            *(undefined8 *)(puVar8 + 0x3f30) = uVar14;
            *(undefined8 *)(puVar8 + 0x3f38) = uVar26;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,puVar8 + 0x3f28);
            uVar21 = extraout_x1_04;
            if (iVar11 != 0) {
              lVar31 = *(long *)(lVar16 + 0x60);
              uVar26 = *(undefined8 *)(lVar16 + 0x68);
              lVar15 = *(long *)(lVar16 + 0x50);
              uVar34 = *(undefined8 *)(lVar16 + 0x58);
              uVar14 = 1;
              if (lVar15 == 0) {
                uVar14 = 2;
              }
              uVar12 = *(undefined4 *)(lVar16 + 8);
              uVar4 = *(undefined4 *)(lVar16 + 0xc);
              *(undefined1 **)(puVar8 + 0x8fe0) = puVar8 + 0x3f50;
              uStack_1c8 = 1;
              *(undefined1 **)(puVar8 + 0x3f00) = auStack_1d0;
              *(undefined **)(puVar8 + 0x3f08) = &DAT_1061c2098;
              uVar35 = 1;
              if (lVar31 == 0) {
                uVar35 = 2;
              }
              *(undefined8 *)(puVar8 + 0x3fe8) = *(undefined8 *)(puVar8 + 0x3f30);
              *(undefined8 *)(puVar8 + 0x3fe0) = *(undefined8 *)(puVar8 + 0x3f28);
              *(undefined8 *)(puVar8 + 0x3ff0) = *(undefined8 *)(puVar8 + 0x3f38);
              *(char **)(puVar8 + 0x4000) = s__108b39f4f;
              *(undefined1 **)(puVar8 + 0x4008) = puVar8 + 0x3f00;
              *(undefined8 *)(puVar8 + 0x3fb0) = uVar14;
              *(long *)(puVar8 + 0x3fb8) = lVar15;
              *(undefined8 *)(puVar8 + 0x3fc0) = uVar34;
              *(undefined8 *)(puVar8 + 0x3fc8) = uVar35;
              *(long *)(puVar8 + 0x3fd0) = lVar31;
              *(undefined8 *)(puVar8 + 0x3fd8) = uVar26;
              *(undefined4 *)(puVar8 + 0x3ff8) = uVar12;
              *(undefined4 *)(puVar8 + 0x3ffc) = uVar4;
              (**(code **)(puVar2 + 0x20))(puVar3,puVar8 + 0x3fb0);
              uVar21 = extraout_x1_05;
            }
          }
        }
        else {
LAB_1005a510c:
          lVar16 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar14 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                      + 0x20);
            uVar26 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                      + 0x28);
            *(undefined8 *)(puVar8 + -0xba8) = 2;
            *(undefined8 *)(puVar8 + -0xba0) = uVar14;
            *(undefined8 *)(puVar8 + -0xb98) = uVar26;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,puVar8 + -0xba8);
            uVar21 = extraout_x1_06;
            if (iVar11 != 0) {
              *(undefined1 **)(puVar8 + 0x3f50) = puVar8 + -0xb90;
              *(undefined **)(puVar8 + 0x3f58) =
                   &
                   __ZN80__LT_codex_config__constraint__ConstraintError_u20_as_u20_core__fmt__Display_GT_3fmt17h4c9fd451b6abeaafE
              ;
              *(char **)(puVar8 + 0x3f28) = s__rejected_session_settings_updat_108ac181f;
              *(undefined1 **)(puVar8 + 0x3f30) = puVar8 + 0x3f50;
              *(undefined1 **)(puVar8 + 0x3f00) = puVar8 + 0x3f28;
              *(undefined **)(puVar8 + 0x3f08) = &UNK_10b208fd0;
              *(undefined8 *)(puVar8 + 0x3fb0) = 1;
              *(undefined1 **)(puVar8 + 0x3fb8) = puVar8 + 0x3f00;
              *(undefined8 *)(puVar8 + 0x3fc0) = 1;
              *(long *)(puVar8 + 0x3fc8) =
                   ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15update_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc2f867a8e233c04aE
                   + 0x30;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar16,puVar3,puVar2,puVar8 + -0xba8,puVar8 + 0x3fb0);
              uVar21 = extraout_x1_07;
            }
          }
        }
        uVar26 = *(undefined8 *)(puVar8 + -0xb90);
        *(undefined8 *)(puVar8 + 0x8fd0) = *(undefined8 *)(puVar8 + -0xb28);
        uStack_208 = *(undefined8 *)(puVar8 + -0xb50);
        uStack_210 = *(undefined8 *)(puVar8 + -0xb58);
        uStack_1f8 = *(undefined8 *)(puVar8 + -0xb40);
        uStack_200 = *(undefined8 *)(puVar8 + -0xb48);
        uStack_1e8 = *(undefined8 *)(puVar8 + -0xb30);
        uStack_1f0 = *(undefined8 *)(puVar8 + -0xb38);
        uStack_238 = *(undefined8 *)(puVar8 + -0xb80);
        uStack_240 = *(undefined8 *)(puVar8 + -0xb88);
        uStack_228 = *(undefined8 *)(puVar8 + -0xb70);
        uStack_230 = *(undefined8 *)(puVar8 + -0xb78);
        uStack_218 = *(undefined8 *)(puVar8 + -0xb60);
        uStack_220 = *(undefined8 *)(puVar8 + -0xb68);
        if (*pcVar13 == '\0') {
          *pcVar13 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar13,uVar21,1000000000);
        }
        FUN_1060fa678(pcVar13,1,pcVar13);
        uVar14 = FUN_100e3079c(lVar22 + 0x1c8);
      }
      else {
LAB_1005a5740:
        uVar14 = FUN_1005b5b60(lVar22 + 0x4ec0,param_3);
        if ((int)uVar14 != 0) {
          *puVar25 = 0x8000000000000003;
          uVar17 = 4;
          goto LAB_1005a5858;
        }
        FUN_100d871c8(lVar22 + 0x4ec0);
LAB_1005a576c:
        lVar16 = *(ulong *)(lVar22 + 0x4e60) + 0x7ffffffffffffffa;
        if (*(ulong *)(lVar22 + 0x4e60) < 0x8000000000000006) {
          lVar16 = 6;
        }
        if (lVar16 == 6) {
          FUN_100e0fca4(lVar22 + 0x4e60);
        }
        else if ((lVar16 == 4) && (*(long *)(lVar22 + 0x4e68) != 0)) {
          _free(*(undefined8 *)(lVar22 + 0x4e70));
        }
        if (*(long *)(lVar22 + 0x4e48) != 0) {
          _free(*(undefined8 *)(lVar22 + 0x4e50));
        }
        if (*(long *)(lVar22 + 0x4e30) != 0) {
          _free(*(undefined8 *)(lVar22 + 0x4e38));
        }
        if (*(long *)(lVar22 + 0x4e18) != 0) {
          _free(*(undefined8 *)(lVar22 + 20000));
        }
        if (*(long *)(lVar22 + 0x28d0) != 2) {
          FUN_100de93d0(lVar22 + 0x28d0);
        }
        if (*(long *)(lVar22 + 0x388) != 2) {
          FUN_100de93d0(lVar22 + 0x388);
        }
        uVar14 = FUN_100e3079c(lVar22 + 0x1c8);
        uVar26 = 0x8000000000000002;
      }
      puVar25[8] = uStack_208;
      puVar25[7] = uStack_210;
      puVar25[10] = uStack_1f8;
      puVar25[9] = uStack_200;
      puVar25[0xc] = uStack_1e8;
      puVar25[0xb] = uStack_1f0;
      puVar25[2] = uStack_238;
      puVar25[1] = uStack_240;
      puVar25[4] = uStack_228;
      puVar25[3] = uStack_230;
      *puVar25 = uVar26;
      puVar25[0xd] = *(undefined8 *)(puVar8 + 0x8fd0);
      uVar17 = 1;
      puVar25[6] = uStack_218;
      puVar25[5] = uStack_220;
LAB_1005a5858:
      *(undefined1 *)(lVar22 + 0x380) = uVar17;
      return uVar14;
    }
    param_1[10] = param_1[1];
    param_1[9] = *param_1;
    param_1[7] = param_1[5];
    param_1[8] = param_1[6];
    *(undefined1 *)((long)param_1 + 0x71) = 1;
    param_1[0xc] = param_1[3];
    param_1[0xb] = param_1[2];
    param_1[0xf] = param_1[4] + 0x1108;
    *(undefined1 *)(param_1 + 0x1d) = 0;
LAB_1005a4384:
    auVar36 = FUN_100fd3e50(param_1 + 0xf,param_2);
    uVar14 = auVar36._8_8_;
    if (auVar36._0_8_ == 0) {
      uVar14 = 1;
      uVar17 = 3;
      goto LAB_1005a4ab8;
    }
    param_1[0xd] = auVar36._0_8_;
    if (((*(char *)(param_1 + 0x1d) == '\x03') && (*(char *)(param_1 + 0x1c) == '\x03')) &&
       (*(char *)(param_1 + 0x13) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x14);
      uVar14 = extraout_x1;
      if (param_1[0x15] != 0) {
        (**(code **)(param_1[0x15] + 0x18))(param_1[0x16]);
        uVar14 = extraout_x1_00;
      }
    }
    pcVar13 = (char *)param_1[0xd];
    if (*(long *)(pcVar13 + 0x28) != -0x8000000000000000) {
      param_1[0xf] = *(long *)(pcVar13 + 0x70) + 0x10;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      goto LAB_1005a4410;
    }
    uVar21 = 0;
  }
  else {
    if (bVar5 == 3) goto LAB_1005a4384;
LAB_1005a4410:
    pcVar13 = (char *)FUN_100fd3e50(param_1 + 0xf,param_2);
    if (pcVar13 == (char *)0x0) {
      uVar14 = 1;
      uVar17 = 4;
      goto LAB_1005a4ab8;
    }
    if (((*(char *)(param_1 + 0x1d) == '\x03') && (*(char *)(param_1 + 0x1c) == '\x03')) &&
       (*(char *)(param_1 + 0x13) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x14);
      if (param_1[0x15] != 0) {
        (**(code **)(param_1[0x15] + 0x18))(param_1[0x16]);
      }
    }
    auVar36 = __ZN10codex_core5state4turn9TurnState23remove_pending_approval17hd586ac79e8c37ddeE
                        (pcVar13 + 0x28,param_1[7],param_1[8]);
    param_2 = auVar36._8_8_;
    uVar21 = auVar36._0_8_;
    if (*pcVar13 == '\0') {
      *pcVar13 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar13,param_2,1000000000)
      ;
    }
    FUN_1060fa678(pcVar13,1,pcVar13);
    pcVar13 = (char *)param_1[0xd];
    uVar14 = extraout_x1_01;
  }
  if (*pcVar13 == '\0') {
    *pcVar13 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar13,uVar14,1000000000);
  }
  FUN_1060fa678(pcVar13,1,pcVar13);
  if ((uVar21 & 1) == 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62abd0 - 1 < 2 ||
         ((bRam000000010b62abd0 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                              ), cVar10 != '\0')))) &&
        (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                            ), (uVar21 & 1) != 0)))) {
      lStack_110 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                   + 0x30;
      pcStack_f8 = (char *)(param_1 + 7);
      ppppppplStack_f0 = (long *******)&DAT_100c7b3a0;
      ppcStack_100 = &pcStack_f8;
      ppcStack_108 = (char **)s__No_pending_approval_found_for_c_108ac17f5;
      pppcStack_150 = &ppcStack_108;
      puStack_148 = &UNK_10b208fd0;
      ppppppplStack_128 = (long *******)0x1;
      uStack_118 = 1;
      pppcStack_120 = (char ***)&pppcStack_150;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                 ,&ppppppplStack_128);
      lVar22 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_e0 = *(undefined **)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                      + 0x20);
        uStack_d8 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                     + 0x28);
        ppppppplStack_e8 = (long *******)0x2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_e8);
        if (iVar11 != 0) {
          lStack_b0 = *(long *)(lVar22 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar22 + 0x68);
          pppppplStack_c8 = *(long *******)(lVar22 + 0x50);
          pppppplStack_c0 = *(long *******)(lVar22 + 0x58);
          pppppplStack_d0 = (long ******)0x1;
          if (pppppplStack_c8 == (long ******)0x0) {
            pppppplStack_d0 = (long ******)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar22 + 8);
          uStack_84 = *(undefined4 *)(lVar22 + 0xc);
          ppppppplStack_70 = (long *******)&ppppppplStack_128;
          puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
          ppppppplStack_60 = (long *******)&ppppppplStack_70;
          puStack_58 = &DAT_1061c2098;
          pppppplStack_b8 = (long ******)0x1;
          if (lStack_b0 == 0) {
            pppppplStack_b8 = (long ******)0x2;
          }
          puStack_98 = puStack_e0;
          ppppppplStack_a0 = ppppppplStack_e8;
          uStack_90 = uStack_d8;
          ppppppplStack_78 = (long *******)&ppppppplStack_60;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&pppppplStack_d0);
        }
      }
    }
    else {
      lVar22 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_138 = *(undefined **)
                       (
                       ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                       + 0x20);
        uStack_130 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                      + 0x28);
        ppppppplStack_140 = (long *******)0x2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_140);
        if (iVar11 != 0) {
          lStack_110 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_15notify_approval28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h75ec0618988e3e72E
                       + 0x30;
          ppppppplStack_70 = (long *******)(param_1 + 7);
          puStack_68 = &DAT_100c7b3a0;
          ppppppplStack_f0 = (long *******)&ppppppplStack_70;
          pcStack_f8 = s__No_pending_approval_found_for_c_108ac17f5;
          ppcStack_108 = &pcStack_f8;
          ppcStack_100 = (char **)&UNK_10b208fd0;
          pppcStack_120 = &ppcStack_108;
          ppppppplStack_128 = (long *******)0x1;
          uStack_118 = 1;
          lStack_b0 = *(long *)(lVar22 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar22 + 0x68);
          pppppplStack_c8 = *(long *******)(lVar22 + 0x50);
          pppppplStack_c0 = *(long *******)(lVar22 + 0x58);
          pppppplStack_d0 = (long ******)0x1;
          if (pppppplStack_c8 == (long ******)0x0) {
            pppppplStack_d0 = (long ******)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar22 + 8);
          uStack_84 = *(undefined4 *)(lVar22 + 0xc);
          ppppppplStack_60 = (long *******)&ppppppplStack_128;
          puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
          ppppppplStack_e8 = (long *******)&ppppppplStack_60;
          puStack_e0 = &DAT_1061c2098;
          pppppplStack_b8 = (long ******)0x1;
          if (lStack_b0 == 0) {
            pppppplStack_b8 = (long ******)0x2;
          }
          puStack_98 = puStack_138;
          ppppppplStack_a0 = ppppppplStack_140;
          uStack_90 = uStack_130;
          ppppppplStack_78 = (long *******)&ppppppplStack_e8;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&pppppplStack_d0);
        }
      }
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x71) = 0;
    pppppplStack_c8 = (long ******)param_1[10];
    pppppplStack_d0 = (long ******)param_1[9];
    pppppplStack_b8 = (long ******)param_1[0xc];
    pppppplStack_c0 = (long ******)param_1[0xb];
    ppppppplStack_e8 = (long *******)0x0;
    if (param_2 == (long *******)0x0) {
      FUN_107c05cb0(&UNK_10b23a928);
      goto LAB_1005a4b1c;
    }
    ppppppplVar24 = param_2 + 2;
    pppppplVar18 = *ppppppplVar24;
    ppppppplStack_128 = param_2;
    if (pppppplVar18 != (long ******)0x8000000000000007) {
      uVar21 = (ulong)pppppplVar18 ^ 0x8000000000000000;
      if (-1 < (long)pppppplVar18) {
        uVar21 = 3;
      }
      if (uVar21 == 3) {
        if (pppppplVar18 != (long ******)0x0) {
          pppppplVar18 = param_2[3];
LAB_1005a4848:
          _free(pppppplVar18);
        }
      }
      else if (uVar21 == 1) {
        pppppplVar18 = param_2[4];
        pppppplVar27 = param_2[5];
        if (pppppplVar27 != (long ******)0x0) {
          pppppplVar30 = pppppplVar18 + 1;
          do {
            if (pppppplVar30[-1] != (long *****)0x0) {
              _free(*pppppplVar30);
            }
            pppppplVar30 = pppppplVar30 + 3;
            pppppplVar27 = (long ******)((long)pppppplVar27 + -1);
          } while (pppppplVar27 != (long ******)0x0);
        }
        if (param_2[3] != (long ******)0x0) goto LAB_1005a4848;
      }
    }
    param_2[3] = pppppplStack_c8;
    *ppppppplVar24 = pppppplStack_d0;
    param_2[5] = pppppplStack_b8;
    param_2[4] = pppppplStack_c0;
    pppppplVar18 = param_2[10];
    do {
      pppppplVar27 = pppppplVar18;
      if (((uint)pppppplVar27 >> 2 & 1) != 0) goto LAB_1005a4884;
      pppppplVar18 = param_2[10];
    } while (pppppplVar18 != pppppplVar27);
    param_2[10] = (long ******)((ulong)pppppplVar27 | 2);
LAB_1005a4884:
    if (((ulong)pppppplVar27 & 5) == 1) {
      (*(code *)param_2[8][2])(param_2[9]);
    }
    if (((uint)pppppplVar27 >> 2 & 1) == 0) {
      pppppplVar18 = *ppppppplStack_128;
      *ppppppplStack_128 = (long ******)((long)pppppplVar18 + -1);
      LORelease();
      if (pppppplVar18 == (long ******)0x1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6770(&ppppppplStack_128);
      }
      ppppppplVar23 = ppppppplStack_e8;
      if (ppppppplStack_e8 != (long *******)0x0) {
        pppppplVar18 = ppppppplStack_e8[10];
        do {
          pppppplVar27 = pppppplVar18;
          if (((uint)pppppplVar27 >> 2 & 1) != 0) goto LAB_1005a48f0;
          pppppplVar18 = ppppppplStack_e8[10];
        } while (pppppplVar18 != pppppplVar27);
        ppppppplStack_e8[10] = (long ******)((ulong)pppppplVar27 | 2);
LAB_1005a48f0:
        if (((ulong)pppppplVar27 & 5) == 1) {
          (*(code *)ppppppplStack_e8[8][2])(ppppppplStack_e8[9]);
        }
        pppppplVar18 = *ppppppplVar23;
        *ppppppplVar23 = (long ******)((long)pppppplVar18 + -1);
        LORelease();
        if (pppppplVar18 == (long ******)0x1) {
          ppppppplVar28 = (long *******)0x8000000000000007;
LAB_1005a49b8:
          DataMemoryBarrier(2,1);
          func_0x0001034c6770(&ppppppplStack_e8);
          if (ppppppplVar28 != (long *******)0x8000000000000007) goto LAB_1005a49d0;
        }
      }
    }
    else {
      ppppppplVar28 = (long *******)ppppppplStack_128[2];
      ppppppplStack_128[2] = (long ******)0x8000000000000007;
      if (ppppppplVar28 == (long *******)0x8000000000000007) {
        FUN_107c05cb0(&UNK_10b23a940);
LAB_1005a4b1c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005a4b20);
        (*pcVar7)();
      }
      param_2 = (long *******)ppppppplStack_128[3];
      ppppppplVar23 = (long *******)ppppppplStack_128[4];
      ppppppplVar24 = (long *******)ppppppplStack_128[5];
      pppppplVar18 = *ppppppplStack_128;
      *ppppppplStack_128 = (long ******)((long)pppppplVar18 + -1);
      LORelease();
      if (pppppplVar18 == (long ******)0x1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c6770(&ppppppplStack_128);
      }
      ppppppplVar6 = ppppppplStack_e8;
      if (ppppppplStack_e8 != (long *******)0x0) {
        pppppplVar18 = ppppppplStack_e8[10];
        do {
          pppppplVar27 = pppppplVar18;
          if (((uint)pppppplVar27 >> 2 & 1) != 0) goto LAB_1005a498c;
          pppppplVar18 = ppppppplStack_e8[10];
        } while (pppppplVar18 != pppppplVar27);
        ppppppplStack_e8[10] = (long ******)((ulong)pppppplVar27 | 2);
LAB_1005a498c:
        if (((ulong)pppppplVar27 & 5) == 1) {
          (*(code *)ppppppplStack_e8[8][2])(ppppppplStack_e8[9]);
        }
        pppppplVar18 = *ppppppplVar6;
        *ppppppplVar6 = (long ******)((long)pppppplVar18 + -1);
        LORelease();
        if (pppppplVar18 == (long ******)0x1) goto LAB_1005a49b8;
      }
LAB_1005a49d0:
      uVar21 = (ulong)ppppppplVar28 ^ 0x8000000000000000;
      if (-1 < (long)ppppppplVar28) {
        uVar21 = 3;
      }
      ppppppplVar6 = param_2;
      if (uVar21 != 3) {
        if (uVar21 != 1) goto LAB_1005a4a34;
        ppppppplVar6 = ppppppplVar23;
        ppppppplVar28 = param_2;
        if (ppppppplVar24 != (long *******)0x0) {
          ppppppplVar23 = ppppppplVar23 + 1;
          do {
            if (ppppppplVar23[-1] != (long ******)0x0) {
              _free(*ppppppplVar23);
            }
            ppppppplVar23 = ppppppplVar23 + 3;
            ppppppplVar24 = (long *******)((long)ppppppplVar24 + -1);
          } while (ppppppplVar24 != (long *******)0x0);
        }
      }
      if (ppppppplVar28 != (long *******)0x0) {
        _free(ppppppplVar6);
      }
    }
  }
LAB_1005a4a34:
  if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
    uVar19 = param_1[9];
    uVar21 = uVar19 ^ 0x8000000000000000;
    if (-1 < (long)uVar19) {
      uVar21 = 3;
    }
    if (uVar21 == 3) {
      if (uVar19 != 0) {
        lVar22 = param_1[10];
LAB_1005a4aa4:
        _free(lVar22);
      }
    }
    else if (uVar21 == 1) {
      lVar22 = param_1[0xb];
      lVar16 = param_1[0xc];
      if (lVar16 != 0) {
        puVar25 = (undefined8 *)(lVar22 + 8);
        do {
          if (puVar25[-1] != 0) {
            _free(*puVar25);
          }
          puVar25 = puVar25 + 3;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (param_1[10] != 0) goto LAB_1005a4aa4;
    }
  }
  uVar14 = 0;
  *(undefined1 *)((long)param_1 + 0x71) = 0;
  uVar17 = 1;
LAB_1005a4ab8:
  *(undefined1 *)(param_1 + 0xe) = uVar17;
  return uVar14;
}

