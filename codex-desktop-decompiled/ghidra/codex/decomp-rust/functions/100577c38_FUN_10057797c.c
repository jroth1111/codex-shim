
long FUN_10057797c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 extraout_x9;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long extraout_x15;
  undefined8 *puVar23;
  long *unaff_x22;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  long lStack_2d20;
  undefined8 uStack_2d18;
  undefined8 uStack_2d10;
  undefined8 uStack_2d08;
  undefined8 uStack_2d00;
  undefined8 uStack_2cf8;
  undefined1 auStack_2cf0 [24];
  undefined8 uStack_2cd8;
  undefined8 uStack_2cd0;
  long *plStack_2cc8;
  long *plStack_2cc0;
  long lStack_2cb8;
  long *plStack_2cb0;
  long lStack_2ca8;
  long *plStack_2ca0;
  long lStack_2c98;
  long *plStack_2c90;
  long lStack_2c88;
  long *plStack_2c80;
  long lStack_2c78;
  long *plStack_2c70;
  long lStack_2c68;
  long *plStack_2c60;
  long lStack_2c58;
  long *plStack_2c50;
  long lStack_2c48;
  long *plStack_2c40;
  long lStack_2c38;
  long *plStack_2c30;
  undefined8 uStack_2c20;
  undefined8 uStack_2c18;
  undefined8 uStack_2c10;
  undefined8 uStack_2c08;
  long *plStack_2bf8;
  long lStack_2bf0;
  long *plStack_2be8;
  long *plStack_2a10;
  long lStack_2a08;
  long *plStack_2a00;
  long lStack_29f8;
  long *plStack_29f0;
  long lStack_29e8;
  long *plStack_29e0;
  long lStack_29d8;
  long *plStack_29d0;
  long lStack_29c8;
  long *plStack_29c0;
  long lStack_29b8;
  long *plStack_29b0;
  long lStack_29a8;
  long *plStack_29a0;
  long lStack_2998;
  long *plStack_2990;
  long lStack_2988;
  long *plStack_2980;
  long lStack_2978;
  long *plStack_2970;
  undefined8 uStack_2130;
  undefined8 uStack_1130;
  long alStack_4c8 [63];
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long lStack_270;
  undefined1 uStack_268;
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_170;
  long *plStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined *puStack_88;
  
  bVar5 = *(byte *)(param_2 + 0x10);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      param_2[1] = *param_2 + 0x50;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_1005779c4:
      auVar29 = FUN_100fd3e50(param_2 + 1,param_3);
      uVar10 = auVar29._8_8_;
      pcVar11 = auVar29._0_8_;
      if (pcVar11 == (char *)0x0) {
        *param_1 = 0x8000000000000000;
        uVar14 = 3;
        lVar9 = 0;
      }
      else {
        if ((((char)param_2[0xf] == '\x03') && ((char)param_2[0xe] == '\x03')) &&
           ((char)param_2[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 6);
          uVar10 = extraout_x1;
          if (param_2[7] != 0) {
            (**(code **)(param_2[7] + 0x18))(param_2[8]);
            uVar10 = extraout_x1_00;
          }
        }
        uVar28 = *(undefined8 *)(pcVar11 + 0x30);
        uVar25 = *(undefined8 *)(pcVar11 + 0x28);
        uVar16 = *(undefined8 *)(pcVar11 + 0x38);
        pcVar11[0x28] = '\0';
        pcVar11[0x29] = '\0';
        pcVar11[0x2a] = '\0';
        pcVar11[0x2b] = '\0';
        pcVar11[0x2c] = '\0';
        pcVar11[0x2d] = '\0';
        pcVar11[0x2e] = '\0';
        pcVar11[0x2f] = '\0';
        pcVar11[0x30] = '\b';
        pcVar11[0x31] = '\0';
        pcVar11[0x32] = '\0';
        pcVar11[0x33] = '\0';
        pcVar11[0x34] = '\0';
        pcVar11[0x35] = '\0';
        pcVar11[0x36] = '\0';
        pcVar11[0x37] = '\0';
        pcVar11[0x38] = '\0';
        pcVar11[0x39] = '\0';
        pcVar11[0x3a] = '\0';
        pcVar11[0x3b] = '\0';
        pcVar11[0x3c] = '\0';
        pcVar11[0x3d] = '\0';
        pcVar11[0x3e] = '\0';
        pcVar11[0x3f] = '\0';
        if (*pcVar11 == '\0') {
          *pcVar11 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar11,uVar10,1000000000);
        }
        lVar9 = FUN_1060fa678(pcVar11,1,pcVar11);
        param_1[1] = uVar28;
        *param_1 = uVar25;
        param_1[2] = uVar16;
        uVar14 = 1;
      }
      *(undefined1 *)(param_2 + 0x10) = uVar14;
      return lVar9;
    }
    FUN_107c05cc0(&UNK_10b217af0);
  }
  else if (bVar5 == 3) goto LAB_1005779c4;
  FUN_107c05cc4(&UNK_10b217af0);
  *(undefined1 *)(param_2 + 0x10) = 2;
  uVar10 = __Unwind_Resume();
  if (param_2[7] != 0) {
    (**(code **)(param_2[7] + 0x18))(param_2[8]);
  }
  *(undefined1 *)(param_2 + 0x10) = 2;
  __Unwind_Resume(uVar10);
  auVar29 = FUN_107c05ccc();
  plVar13 = auVar29._0_8_;
  bVar5 = *(byte *)(plVar13 + 0xae9);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      lVar9 = *plVar13;
      plVar1 = (long *)(lVar9 + 0x1328);
      LOAcquire();
      lStack_98 = *plVar1;
      *plVar1 = lStack_98 + 1;
      LORelease();
      plStack_90 = &lStack_98;
      puStack_88 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_b0,s_auto_compact__108af5d75,&plStack_90);
      plVar13[2] = lStack_a8;
      plVar13[1] = lStack_b0;
      plVar13[3] = lStack_a0;
      plVar13[4] = lVar9;
      *(undefined1 *)(plVar13 + 0xa2) = 0;
LAB_100577bb0:
      lVar9 = FUN_100579200(plVar13 + 1,auVar29._8_8_);
      if (lVar9 == 0) {
        uVar14 = 3;
      }
      else {
        FUN_100d75da0(plVar13 + 1);
        uVar14 = 1;
      }
      *(undefined1 *)(plVar13 + 0xae9) = uVar14;
      return lVar9;
    }
    FUN_107c05cc0(&UNK_10b217b38);
  }
  else if (bVar5 == 3) goto LAB_100577bb0;
  FUN_107c05cc4(&UNK_10b217b38);
  *(undefined1 *)(plVar13 + 0xae9) = 2;
  uVar10 = __Unwind_Resume();
  FUN_100d75da0(plVar13 + 1);
  *(undefined1 *)(plVar13 + 0xae9) = 2;
  __Unwind_Resume(uVar10);
  auVar29 = FUN_107c05ccc();
  uVar10 = auVar29._8_8_;
  lVar9 = auVar29._0_8_;
  uStack_1130 = 0;
  uStack_2130 = 0;
  bVar5 = *(byte *)(lVar9 + 0x3bb8);
  if (bVar5 < 5) {
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        *(undefined1 *)(lVar9 + 0x3bc1) = 0;
        *(undefined8 *)(lVar9 + 0x3bb9) = 0;
        *(undefined8 *)(lVar9 + 0x548) = *(undefined8 *)(lVar9 + 0x540);
        *(undefined1 *)(lVar9 + 0x3bbd) = 1;
        *(undefined8 *)(lVar9 + 0x560) = *(undefined8 *)(lVar9 + 0x4d8);
        *(undefined8 *)(lVar9 + 0x558) = *(undefined8 *)(lVar9 + 0x4d0);
        *(undefined8 *)(lVar9 + 0x550) = *(undefined8 *)(lVar9 + 0x4c8);
        _memcpy(lVar9 + 0x568,lVar9,0x4c8);
        *(undefined8 *)(lVar9 + 0xa48) = *(undefined8 *)(lVar9 + 0x510);
        *(undefined8 *)(lVar9 + 0xa40) = *(undefined8 *)(lVar9 + 0x508);
        *(undefined8 *)(lVar9 + 0xa58) = *(undefined8 *)(lVar9 + 0x520);
        *(undefined8 *)(lVar9 + 0xa50) = *(undefined8 *)(lVar9 + 0x518);
        *(undefined8 *)(lVar9 + 0xa68) = *(undefined8 *)(lVar9 + 0x530);
        *(undefined8 *)(lVar9 + 0xa60) = *(undefined8 *)(lVar9 + 0x528);
        *(undefined1 *)(lVar9 + 0x3bc2) = 1;
        *(undefined8 *)(lVar9 + 0xa70) = *(undefined8 *)(lVar9 + 0x538);
        *(undefined8 *)(lVar9 + 0xa38) = *(undefined8 *)(lVar9 + 0x500);
        *(undefined8 *)(lVar9 + 0xa30) = *(undefined8 *)(lVar9 + 0x4f8);
        *(undefined1 *)(lVar9 + 0x3bbc) = 1;
        *(undefined8 *)(lVar9 + 0xa80) = *(undefined8 *)(lVar9 + 0x4e8);
        *(undefined8 *)(lVar9 + 0xa78) = *(undefined8 *)(lVar9 + 0x4e0);
        *(undefined8 *)(lVar9 + 0xa88) = *(undefined8 *)(lVar9 + 0x4f0);
        lVar17 = *(long *)(lVar9 + 0xa80);
        lVar12 = 0;
        if (*(long *)(lVar9 + 0xa88) != 0) {
          lVar12 = lVar17;
        }
        *(long *)(lVar9 + 0xa90) = lVar12;
        if (lVar12 == 0) {
          uVar16 = *(undefined8 *)(lVar9 + 0x7a0);
          lVar12 = *(long *)(lVar9 + 0x7a8);
          if (lVar12 == 0) {
LAB_100577dd4:
            lVar17 = 1;
          }
          else {
LAB_100577da4:
            lVar17 = _malloc(lVar12);
            if (lVar17 == 0) {
              FUN_107c03c64(1,lVar12);
              goto LAB_1005789ac;
            }
          }
          _memcpy(lVar17,uVar16,lVar12);
        }
        else {
          lVar12 = *(long *)(lVar17 + 0x28);
          if (lVar12 == 0) {
            lVar17 = 1;
          }
          else {
            uVar16 = *(undefined8 *)(lVar17 + 0x20);
            lVar17 = _malloc(lVar12);
            if (lVar17 == 0) {
              FUN_107c03c64(1,lVar12);
              goto LAB_1005789ac;
            }
            _memcpy(lVar17,uVar16,lVar12);
            if (lVar12 == -0x8000000000000000) {
              uVar16 = *(undefined8 *)(lVar9 + 0x7a0);
              lVar12 = *(long *)(lVar9 + 0x7a8);
              if (lVar12 == 0) goto LAB_100577dd4;
              goto LAB_100577da4;
            }
          }
        }
        *(long *)(lVar9 + 0xa98) = lVar12;
        *(long *)(lVar9 + 0xaa0) = lVar17;
        *(long *)(lVar9 + 0xaa8) = lVar12;
        lVar12 = 1;
        *(undefined1 *)(lVar9 + 0x3bbb) = 1;
        uVar16 = *(undefined8 *)(lVar9 + 0xaa0);
        unaff_x22 = *(long **)(lVar9 + 0xaa8);
        if ((unaff_x22 == (long *)0x0) || (lVar12 = _malloc(unaff_x22), lVar12 != 0)) {
          _memcpy(lVar12,uVar16,unaff_x22);
          plStack_2a10 = unaff_x22;
          lStack_2a08 = lVar12;
          plStack_2a00 = unaff_x22;
          __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_21build_per_turn_config17h3126574fa0fee5fbE
                    (lVar9 + 0xab0,lVar9 + 0x568,&plStack_2a10);
          *(undefined1 *)(lVar9 + 0x3bba) = 1;
          *(long *)(lVar9 + 0x3bc8) = *(long *)(*(long *)(lVar9 + 0x548) + 0x360) + 0x10;
          *(undefined1 *)(lVar9 + 0x3c20) = 0;
          goto LAB_100577e68;
        }
      }
      else {
        if (bVar5 == 1) {
          FUN_107c05cc0(&UNK_10b217b68);
        }
        FUN_107c05cc4();
      }
      FUN_107c03c64(1,unaff_x22);
      goto LAB_1005789ac;
    }
    if (bVar5 == 3) {
LAB_100577e68:
      auVar29 = FUN_100fd4eb8(lVar9 + 0x3bc8,uVar10);
      pcVar11 = auVar29._0_8_;
      if (pcVar11 == (char *)0x0) {
        lVar12 = 0;
        uVar14 = 3;
        goto LAB_100578918;
      }
      if ((*(char *)(lVar9 + 0x3c20) == '\x03') && (*(char *)(lVar9 + 0x3c18) == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (lVar9 + 0x3bd8);
        if (*(long *)(lVar9 + 0x3be0) != 0) {
          (**(code **)(*(long *)(lVar9 + 0x3be0) + 0x18))(*(undefined8 *)(lVar9 + 0x3be8));
        }
      }
      __ZN9codex_mcp18connection_manager20McpConnectionManager19set_approval_policy17h2253cb9192e2fd72E
                (auVar29._8_8_,lVar9 + 0x9f0);
      lVar12 = *(long *)(lVar9 + 0x900);
      if (-1 < lVar12) {
        lVar12 = 2;
      }
      lVar12 = lVar9 + *(long *)(&UNK_108cd9a90 + lVar12 * 8);
      uVar18 = *(ulong *)(lVar12 + 0x568);
      uVar4 = uVar18;
      if (uVar18 < 0x8000000000000001) {
        uVar4 = 0;
      }
      if ((uVar4 & 0x7fffffffffffffff) == 0) {
        if (uVar18 == 0x8000000000000000) {
          lStack_29f8 = -0x8000000000000000;
          plStack_2a10 = (long *)0x8000000000000000;
        }
        else {
          FUN_1035ab934(&plStack_2a10,*(undefined8 *)(lVar12 + 0x570),
                        *(undefined8 *)(lVar12 + 0x578));
          lStack_29f8 = *(long *)(lVar12 + 0x580);
          plStack_2be8 = plStack_2a00;
          lStack_2bf0 = lStack_2a08;
        }
        plStack_2a00 = plStack_2be8;
        lStack_2a08 = lStack_2bf0;
        plStack_29f0 = (long *)CONCAT71(plStack_29f0._1_7_,*(undefined1 *)(lVar12 + 0x588));
      }
      else if ((uVar4 & 0x7fffffffffffffff) == 1) {
        plStack_2a10 = (long *)0x8000000000000001;
      }
      else {
        lStack_2a08 = *(long *)(lVar12 + 0x570);
        plStack_2a10 = *(long **)(lVar12 + 0x568);
        lStack_29f8 = *(long *)(lVar12 + 0x580);
        plStack_2a00 = *(long **)(lVar12 + 0x578);
        plStack_29f0 = *(long **)(lVar12 + 0x588);
      }
      func_0x000104922e0c(alStack_4c8,&plStack_2a10,*(undefined8 *)(lVar9 + 0x7b8),
                          *(undefined8 *)(lVar9 + 0x7c0));
      __ZN9codex_mcp18connection_manager20McpConnectionManager22set_permission_profile17h4601d5069dc32cdeE
                (auVar29._8_8_,alStack_4c8);
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar11,extraout_x1_01,1000000000);
      }
      FUN_1060fa678(pcVar11,1,pcVar11);
      lVar12 = *(long *)(*(long *)(lVar9 + 0x548) + 0x388);
      lVar17 = *(long *)(*(long *)(lVar9 + 0x548) + 0x390);
      uVar16 = *(undefined8 *)(lVar9 + 0x748);
      uVar25 = *(undefined8 *)(lVar9 + 0x750);
      __ZN10codex_core6config6Config24to_models_manager_config17hc032ee81d7650970E
                (lVar9 + 0x3bc8,lVar9 + 0xab0);
      auVar29 = (**(code **)(lVar17 + 0x68))
                          (lVar12 + (*(long *)(lVar17 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           uVar16,uVar25,lVar9 + 0x3bc8);
      *(undefined1 (*) [16])(lVar9 + 0x3c30) = auVar29;
    }
    else {
      auVar29 = *(undefined1 (*) [16])(lVar9 + 0x3c30);
    }
    (**(code **)(auVar29._8_8_ + 0x18))(&plStack_2a10,auVar29._0_8_,uVar10);
    if (plStack_2a10 == (long *)0x2) {
      lVar12 = 0;
      uVar14 = 4;
      goto LAB_100578918;
    }
    *(undefined1 *)(lVar9 + 0x3bb9) = 1;
    _memcpy(lVar9 + 0x2ff8,&plStack_2a10,0x1f8);
    uVar16 = *(undefined8 *)(lVar9 + 0x3c30);
    puVar23 = *(undefined8 **)(lVar9 + 0x3c38);
    pcVar15 = (code *)*puVar23;
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(uVar16);
    }
    if (puVar23[1] != 0) {
      _free(uVar16);
    }
    if ((*(long *)(lVar9 + 0x3bf8) != -0x8000000000000000) && (*(long *)(lVar9 + 0x3bf8) != 0)) {
      _free(*(undefined8 *)(lVar9 + 0x3c00));
    }
    lVar12 = *(long *)(lVar9 + 0x3c10);
    if (lVar12 != -0x8000000000000000) {
      lVar24 = *(long *)(lVar9 + 0x3c18);
      lVar17 = lVar24;
      for (lVar26 = *(long *)(lVar9 + 0x3c20); lVar26 != 0; lVar26 = lVar26 + -1) {
        FUN_100e0f5d0(lVar17);
        lVar17 = lVar17 + 0x1f8;
      }
      if (lVar12 != 0) {
        _free(lVar24);
      }
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0x548) + 0x3a0);
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E
              (lVar9 + 0x48b0,lVar9 + 0xab0);
    *(long *)(lVar9 + 0x3bc8) = lVar12 + 0x10;
    *(long *)(lVar9 + 0x3bd0) = lVar9 + 0x48b0;
    *(undefined1 *)(lVar9 + 0x48a8) = 0;
LAB_100578108:
    FUN_100a7ebb0(&lStack_2d20,lVar9 + 0x3bc8,uVar10);
    if (lStack_2d20 == -0x8000000000000000) {
      lVar12 = 0;
      uVar14 = 5;
      goto LAB_100578918;
    }
    *(undefined8 *)(lVar9 + 0x31f8) = uStack_2d18;
    *(long *)(lVar9 + 0x31f0) = lStack_2d20;
    *(undefined8 *)(lVar9 + 0x3208) = uStack_2d08;
    *(undefined8 *)(lVar9 + 0x3200) = uStack_2d10;
    *(undefined8 *)(lVar9 + 0x3218) = uStack_2cf8;
    *(undefined8 *)(lVar9 + 0x3210) = uStack_2d00;
    if ((*(char *)(lVar9 + 0x48a8) == '\x03') && (*(char *)(lVar9 + 0x48a2) == '\x03')) {
      FUN_100cb9114(lVar9 + 0x3bf8);
      if (*(long *)(lVar9 + 0x3be0) != 0) {
        _free(*(undefined8 *)(lVar9 + 0x3be8));
      }
      *(undefined1 *)(lVar9 + 0x48a1) = 0;
    }
    FUN_100e05b5c(lVar9 + 0x48b0);
    if (*(long *)(lVar9 + 0x5210) != 0) {
      _free(*(undefined8 *)(lVar9 + 0x5218));
    }
    FUN_10074cf40(auStack_2cf0,*(undefined8 *)(lVar9 + 0x31f8),*(undefined8 *)(lVar9 + 0x3200));
    __ZN10codex_core6skills29skills_load_input_from_config17h701c8c7c51865ebbE
              (lVar9 + 0x3220,lVar9 + 0xab0,auStack_2cf0);
    uVar16 = 0;
    uVar25 = extraout_x9;
    if (*(long *)(lVar9 + 0xa90) != 0) {
      lVar17 = *(long *)(*(long *)(lVar9 + 0xa90) + 0x48);
      lVar12 = **(long **)(lVar17 + 0xf0);
      **(long **)(lVar17 + 0xf0) = lVar12 + 1;
      if (lVar12 < 0) goto LAB_1005789ac;
      uVar16 = *(undefined8 *)(lVar17 + 0xf0);
      uVar25 = *(undefined8 *)(lVar17 + 0xf8);
    }
    *(undefined1 *)(lVar9 + 0x3bc1) = 1;
    lVar12 = *(long *)(*(long *)(lVar9 + 0x548) + 0x398);
    *(undefined1 *)(lVar9 + 0x3bc1) = 0;
    *(undefined8 *)(lVar9 + 0x3bc8) = uVar16;
    *(undefined8 *)(lVar9 + 0x3bd0) = uVar25;
    *(long *)(lVar9 + 0x3c00) = lVar12 + 0x10;
    *(long *)(lVar9 + 0x3c08) = lVar9 + 0x3220;
    *(undefined1 *)(lVar9 + 0x3c12) = 0;
    uStack_2cd8 = uVar16;
    uStack_2cd0 = uVar25;
LAB_10057821c:
    FUN_100a162f0(&plStack_2a10,lVar9 + 0x3bc8,uVar10);
    if (plStack_2a10 == (long *)0x8000000000000000) {
      lVar12 = 0;
      uVar14 = 6;
      goto LAB_100578918;
    }
    lStack_2c58 = lStack_29a8;
    plStack_2c60 = plStack_29b0;
    lStack_2c48 = lStack_2998;
    plStack_2c50 = plStack_29a0;
    lStack_2c38 = lStack_2988;
    plStack_2c40 = plStack_2990;
    plStack_2c30 = plStack_2980;
    lStack_2c98 = lStack_29e8;
    plStack_2ca0 = plStack_29f0;
    lStack_2c88 = lStack_29d8;
    plStack_2c90 = plStack_29e0;
    lStack_2c78 = lStack_29c8;
    plStack_2c80 = plStack_29d0;
    lStack_2c68 = lStack_29b8;
    plStack_2c70 = plStack_29c0;
    lStack_2cb8 = lStack_2a08;
    plStack_2cc0 = plStack_2a10;
    lStack_2ca8 = lStack_29f8;
    plStack_2cb0 = plStack_2a00;
    FUN_100cc55bc(lVar9 + 0x3bc8);
    lStack_2998 = lStack_2c58;
    plStack_29a0 = plStack_2c60;
    lStack_2988 = lStack_2c48;
    plStack_2990 = plStack_2c50;
    lStack_2978 = lStack_2c38;
    plStack_2980 = plStack_2c40;
    lStack_29c8 = lStack_2c88;
    plStack_29d0 = plStack_2c90;
    lStack_29b8 = lStack_2c78;
    plStack_29c0 = plStack_2c80;
    lStack_29a8 = lStack_2c68;
    plStack_29b0 = plStack_2c70;
    lStack_2a08 = 1;
    plStack_2a10 = (long *)0x1;
    lStack_29f8 = lStack_2cb8;
    plStack_2a00 = plStack_2cc0;
    plStack_2970 = plStack_2c30;
    lStack_29e8 = lStack_2ca8;
    plStack_29f0 = plStack_2cb0;
    lStack_29d8 = lStack_2c98;
    plStack_29e0 = plStack_2ca0;
    plVar13 = (long *)_malloc(0xa8);
    if (plVar13 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
      goto LAB_1005789ac;
    }
    plVar13[0x11] = lStack_2988;
    plVar13[0x10] = (long)plStack_2990;
    plVar13[0x13] = lStack_2978;
    plVar13[0x12] = (long)plStack_2980;
    plVar13[0x14] = (long)plStack_2970;
    plVar13[9] = lStack_29c8;
    plVar13[8] = (long)plStack_29d0;
    plVar13[0xb] = lStack_29b8;
    plVar13[10] = (long)plStack_29c0;
    plVar13[0xd] = lStack_29a8;
    plVar13[0xc] = (long)plStack_29b0;
    plVar13[0xf] = lStack_2998;
    plVar13[0xe] = (long)plStack_29a0;
    plVar13[1] = lStack_2a08;
    *plVar13 = (long)plStack_2a10;
    plVar13[3] = lStack_29f8;
    plVar13[2] = (long)plStack_2a00;
    plVar13[5] = lStack_29e8;
    plVar13[4] = (long)plStack_29f0;
    plVar13[7] = lStack_29d8;
    plVar13[6] = (long)plStack_29e0;
    *(undefined1 *)(lVar9 + 0x3bc0) = 1;
    plStack_2cc8 = plVar13;
    if ((*(byte *)(lVar9 + 0x2fe1) & 1) == 0) {
      lVar12 = *(long *)(lVar9 + 0x548);
      plVar13 = *(long **)(lVar12 + 0x5f8);
      bVar6 = plVar13 != (long *)0x0;
      if (plVar13 != (long *)0x0) {
        lVar17 = *plVar13;
        *plVar13 = lVar17 + 1;
        if (lVar17 < 0) goto LAB_1005789ac;
        plStack_2a10 = *(long **)(lVar12 + 0x5f8);
        lVar12 = *plStack_2a10;
        *plStack_2a10 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(&plStack_2a10);
        }
      }
    }
    else {
      bVar6 = false;
    }
    lVar12 = *(long *)(lVar9 + 0x548);
    uStack_2c18 = *(undefined8 *)(lVar12 + 0x788);
    uStack_2c20 = *(undefined8 *)(lVar12 + 0x780);
    uStack_2c08 = *(undefined8 *)(lVar12 + 0x3d0);
    uStack_2c10 = *(undefined8 *)(lVar12 + 0x3c8);
    plVar13 = *(long **)(lVar12 + 0x380);
    lVar12 = *plVar13;
    *plVar13 = lVar12 + 1;
    if (lVar12 < 0) goto LAB_1005789ac;
    lVar24 = *(long *)(lVar9 + 0x548);
    lVar12 = lVar9 + 0x568;
    plStack_2bf8 = plVar13;
    FUN_1011eae84(&lStack_2bf0,lVar12);
    lVar26 = *(long *)(lVar9 + 0x548);
    lVar27 = *(long *)(lVar26 + 0x368);
    lVar17 = 0;
    if (*(long *)(lVar26 + 0x1f0) != -0x8000000000000000) {
      lVar17 = lVar26 + 0x1f0;
    }
    lVar3 = 0;
    if (*(long *)(lVar26 + 0x208) != -0x8000000000000000) {
      lVar3 = lVar26 + 0x208;
    }
    *(undefined1 *)(lVar9 + 0x3bba) = 0;
    _memcpy(&plStack_2a10,lVar9 + 0xab0,0x2548);
    *(undefined1 *)(lVar9 + 0x3bb9) = 0;
    _memcpy(alStack_4c8,lVar9 + 0x2ff8,0x1f8);
    uStack_170 = lVar26 + 0x5f0;
    auVar29 = FUN_101496fa8(&uStack_170);
    plStack_168 = auVar29._8_8_;
    plVar13 = auVar29._0_8_;
    uStack_170 = 0;
    if (plVar13 != (long *)0x0) {
      if (plStack_168 == (long *)0x0) {
        if (*plVar13 == 0) {
          *plVar13 = 3;
        }
      }
      else {
        lVar7 = *plStack_168;
        *plStack_168 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_1005789ac;
        if ((long *)*plVar13 == plStack_168 + 2) {
          *plVar13 = 3;
        }
        else {
          lVar7 = *plStack_168;
          *plStack_168 = lVar7 + -1;
          LORelease();
          plStack_1e0 = plStack_168;
          if (lVar7 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_1e0);
          }
        }
      }
    }
    plVar13 = plStack_168;
    plStack_258 = plStack_168;
    if (plStack_168 == (long *)0x0) {
      lStack_2d0 = CONCAT62(lStack_2d0._2_6_,2);
    }
    else {
      lVar7 = *(long *)(lVar9 + 0x900);
      if (-1 < lVar7) {
        lVar7 = 2;
      }
      puVar2 = (ulong *)(lVar12 + *(long *)(&UNK_108cd9a90 + lVar7 * 8));
      uVar18 = *puVar2;
      uVar4 = uVar18;
      if (uVar18 < 0x8000000000000001) {
        uVar4 = 0;
      }
      if ((uVar4 & 0x7fffffffffffffff) == 0) {
        if (uVar18 == 0x8000000000000000) {
          uStack_158 = 0x8000000000000000;
          uStack_170 = 0x8000000000000000;
        }
        else {
          FUN_1035ab934(&uStack_170,puVar2[1],puVar2[2]);
          uStack_158 = puVar2[3];
          uStack_1d8 = uStack_160;
          plStack_1e0 = plStack_168;
        }
        uStack_160 = uStack_1d8;
        plStack_168 = plStack_1e0;
        uStack_150 = CONCAT71(uStack_150._1_7_,(char)puVar2[4]);
      }
      else if ((uVar4 & 0x7fffffffffffffff) == 1) {
        uStack_170 = 0x8000000000000001;
      }
      else {
        uStack_170 = *puVar2;
        uStack_158 = puVar2[3];
        uStack_160 = puVar2[2];
        uStack_150 = puVar2[4];
        plStack_168 = (long *)puVar2[1];
      }
      func_0x000104922e0c(&plStack_1e0,&uStack_170,*(undefined8 *)(lVar9 + 0x7b8),
                          *(undefined8 *)(lVar9 + 0x7c0));
      plVar1 = plStack_1e0;
      if (plStack_1e0 < (long *)0x8000000000000001) {
        plVar1 = (long *)0x0;
      }
      if (((ulong)plVar1 & 0x7fffffffffffffff) == 1) {
        lStack_2d0 = CONCAT62(lStack_2d0._2_6_,2);
      }
      else {
        plVar19 = (long *)plVar13[10];
        lVar7 = *plVar19;
        *plVar19 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_1005789ac;
        uVar14 = (undefined1)plVar13[0xf];
        plVar20 = (long *)plVar13[0xb];
        lVar7 = *plVar20;
        *plVar20 = lVar7 + 1;
        if ((lVar7 < 0) ||
           ((plVar21 = (long *)plVar13[0xc], plVar21 != (long *)0x0 &&
            (lVar7 = *plVar21, *plVar21 = lVar7 + 1, lVar7 < 0)))) goto LAB_1005789ac;
        plVar22 = (long *)plVar13[0xd];
        lVar7 = extraout_x15;
        if (plVar22 != (long *)0x0) {
          lVar7 = *plVar22;
          *plVar22 = lVar7 + 1;
          if (lVar7 < 0) goto LAB_1005789ac;
          lVar7 = plVar13[0xe];
        }
        lStack_2c8 = plVar13[3];
        lStack_2d0 = plVar13[2];
        lStack_2b8 = plVar13[5];
        lStack_2c0 = plVar13[4];
        lStack_2a8 = plVar13[7];
        lStack_2b0 = plVar13[6];
        lStack_298 = plVar13[9];
        lStack_2a0 = plVar13[8];
        plStack_290 = plVar19;
        plStack_288 = plVar20;
        plStack_280 = plVar21;
        plStack_278 = plVar22;
        lStack_270 = lVar7;
        uStack_268 = uVar14;
        if ((plStack_1e0 != (long *)0x8000000000000000) &&
           (((ulong)plVar1 & 0x7fffffffffffffff) == 0)) {
          FUN_100e79780(&plStack_1e0);
        }
      }
    }
    *(undefined2 *)(lVar9 + 0x3bbb) = 0;
    uStack_240 = *(undefined8 *)(lVar9 + 0xa88);
    uStack_248 = *(undefined8 *)(lVar9 + 0xa80);
    uStack_250 = *(undefined8 *)(lVar9 + 0xa78);
    uStack_1d8 = *(ulong *)(lVar9 + 0xaa0);
    plStack_1e0 = *(long **)(lVar9 + 0xa98);
    uStack_1d0 = *(undefined8 *)(lVar9 + 0xaa8);
    *(undefined1 *)(lVar9 + 0x3bbd) = 0;
    plStack_168 = *(long **)(lVar9 + 0x558);
    uStack_170 = *(ulong *)(lVar9 + 0x550);
    uStack_160 = *(ulong *)(lVar9 + 0x560);
    *(undefined1 *)(lVar9 + 0x3bc0) = 0;
    __ZN10codex_core7session12turn_context55__LT_impl_u20_codex_core__session__session__Session_GT_17make_turn_context17hb50f6d2f0a37f7ddE
              (lVar9 + 0x3c50,&uStack_2c20,&uStack_2c10,plStack_2bf8,lVar24 + 0x10,&lStack_2bf0,
               lVar12,lVar27 + 0x10,lVar17,lVar3,&plStack_2a10,alStack_4c8,lVar26 + 0x388,
               &lStack_2d0,&uStack_250,&plStack_1e0,&uStack_170,plStack_2cc8,bVar6);
    *(undefined2 *)(lVar9 + 0x3bbe) = 0x101;
    if (plStack_258 != (long *)0x0) {
      lVar12 = *plStack_258;
      *plStack_258 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0fbc73cd6bda15b8E(&plStack_258);
      }
    }
    *(long *)(lVar9 + 0x3bc8) = *(long *)(*(long *)(lVar9 + 0x548) + 0x6e0) + 0x10;
    *(undefined1 *)(lVar9 + 0x3c48) = 0;
  }
  else {
    if (bVar5 == 5) goto LAB_100578108;
    if (bVar5 == 6) goto LAB_10057821c;
  }
  cVar8 = FUN_10052acf0(lVar9 + 0x3bc8,uVar10);
  if (cVar8 == '\x02') {
    lVar12 = 0;
    uVar14 = 7;
  }
  else {
    if ((((*(char *)(lVar9 + 0x3c48) == '\x03') && (*(char *)(lVar9 + 0x3c40) == '\x03')) &&
        (*(char *)(lVar9 + 0x3c38) == '\x03')) && (*(char *)(lVar9 + 0x3bf0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (lVar9 + 0x3bf8);
      if (*(long *)(lVar9 + 0x3c00) != 0) {
        (**(code **)(*(long *)(lVar9 + 0x3c00) + 0x18))(*(undefined8 *)(lVar9 + 0x3c08));
      }
    }
    *(char *)(lVar9 + 0x4420) = cVar8;
    if (*(long *)(lVar9 + 0xa30) != -0x7ffffffffffffffa) {
      *(undefined1 *)(lVar9 + 0x3bc2) = 0;
      uStack_208 = *(undefined8 *)(lVar9 + 0xa58);
      uStack_210 = *(undefined8 *)(lVar9 + 0xa50);
      uStack_1f8 = *(undefined8 *)(lVar9 + 0xa68);
      uStack_200 = *(undefined8 *)(lVar9 + 0xa60);
      uStack_1f0 = *(undefined8 *)(lVar9 + 0xa70);
      uStack_228 = *(undefined8 *)(lVar9 + 0xa38);
      uStack_230 = *(undefined8 *)(lVar9 + 0xa30);
      uStack_218 = *(undefined8 *)(lVar9 + 0xa48);
      uStack_220 = *(undefined8 *)(lVar9 + 0xa40);
      if (*(long *)(lVar9 + 0x4200) != -0x7ffffffffffffffb) {
        FUN_100de6690((undefined8 *)(lVar9 + 0x4200));
      }
      *(undefined1 *)(lVar9 + 0x3bbf) = 1;
      *(undefined8 *)(lVar9 + 0x4228) = uStack_208;
      *(undefined8 *)(lVar9 + 0x4220) = uStack_210;
      *(undefined8 *)(lVar9 + 0x4238) = uStack_1f8;
      *(undefined8 *)(lVar9 + 0x4230) = uStack_200;
      *(undefined8 *)(lVar9 + 0x4240) = uStack_1f0;
      *(undefined8 *)(lVar9 + 0x4208) = uStack_228;
      *(undefined8 *)(lVar9 + 0x4200) = uStack_230;
      *(undefined8 *)(lVar9 + 0x4218) = uStack_218;
      *(undefined8 *)(lVar9 + 0x4210) = uStack_220;
    }
    *(undefined2 *)(lVar9 + 0x3bbe) = 0;
    _memcpy(&plStack_2a00,lVar9 + 0x3c50,0x7e0);
    lStack_2a08 = 1;
    plStack_2a10 = (long *)0x1;
    lVar12 = _malloc(0x7f0);
    if (lVar12 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x7f0);
LAB_1005789ac:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1005789b0);
      (*pcVar15)();
    }
    _memcpy(lVar12,&plStack_2a10,0x7f0);
    alStack_4c8[0] = lVar12;
    __ZN10codex_core13turn_metadata17TurnMetadataState25spawn_git_enrichment_task17hecdb7f9d327a1d29E
              (*(long *)(lVar12 + 0x7b0) + 0x10);
    lVar12 = alStack_4c8[0];
    *(undefined4 *)(lVar9 + 0x3bbe) = 0;
    FUN_100e19918(lVar9 + 0x3220);
    lVar24 = *(long *)(lVar9 + 0x31f8);
    lVar17 = lVar24;
    for (lVar26 = *(long *)(lVar9 + 0x3200); lVar26 != 0; lVar26 = lVar26 + -1) {
      FUN_100cc1c58(lVar17);
      lVar17 = lVar17 + 0x140;
    }
    if (*(long *)(lVar9 + 0x31f0) != 0) {
      _free(lVar24);
    }
    lVar24 = *(long *)(lVar9 + 0x3210);
    lVar17 = lVar24;
    for (lVar26 = *(long *)(lVar9 + 0x3218); lVar26 != 0; lVar26 = lVar26 + -1) {
      FUN_100e0649c(lVar17);
      lVar17 = lVar17 + 0x80;
    }
    if (*(long *)(lVar9 + 0x3208) != 0) {
      _free(lVar24);
    }
    *(undefined1 *)(lVar9 + 0x3bc2) = 0;
    *(undefined4 *)(lVar9 + 0x3bb9) = 0;
    FUN_100e2d09c(lVar9 + 0x568);
    *(undefined1 *)(lVar9 + 0x3bbd) = 0;
    uVar14 = 1;
  }
LAB_100578918:
  *(undefined1 *)(lVar9 + 0x3bb8) = uVar14;
  return lVar12;
}

