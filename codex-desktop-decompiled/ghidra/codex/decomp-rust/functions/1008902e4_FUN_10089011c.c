
/* WARNING: Possible PIC construction at 0x00010089022c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008903b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100890230) */
/* WARNING: Removing unreachable block (ram,0x00010089023c) */
/* WARNING: Removing unreachable block (ram,0x000100890254) */
/* WARNING: Removing unreachable block (ram,0x0001008903b4) */
/* WARNING: Removing unreachable block (ram,0x0001008903c0) */
/* WARNING: Removing unreachable block (ram,0x0001008903dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089011c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x13;
  long *plVar16;
  long *extraout_x13_00;
  long *unaff_x20;
  undefined8 unaff_x22;
  long lVar17;
  undefined2 *unaff_x23;
  undefined8 unaff_x24;
  long lVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar19;
  undefined8 unaff_x27;
  ulong uVar20;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [440];
  undefined8 *******pppppppuStack_60;
  undefined8 uStack_58;
  
  bVar3 = *(byte *)(param_2 + 0xa9);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b224ba0);
      goto LAB_10089027c;
    }
    *(undefined1 *)((long)param_2 + 0x549) = 1;
    unaff_x23 = (undefined2 *)*param_2;
    unaff_x20 = (long *)param_2[1];
    unaff_x25 = param_2[2];
    unaff_x22 = param_2[3];
    __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
              (param_2 + 4,unaff_x22);
    *(undefined1 *)((long)param_2 + 0x549) = 0;
    param_2[7] = 0;
    param_2[8] = 8;
    param_2[10] = 0x8000000000000000;
    param_2[9] = 0;
    param_2[0xd] = 0x8000000000000000;
    param_2[0x10] = 0x8000000000000000;
    param_2[0x13] = 0x8000000000000000;
    param_2[0x16] = 0x8000000000000000;
    param_2[0x19] = 0x8000000000000000;
    param_2[0x1c] = 0x8000000000000000;
    param_2[0x1f] = 0x8000000000000000;
    param_2[0x22] = 0x8000000000000000;
    param_2[0x25] = 0x8000000000000000;
    param_2[0x28] = 0x8000000000000000;
    param_2[0x2b] = 0x8000000000000000;
    param_2[0x2e] = 0x8000000000000000;
    param_2[0x31] = 0x8000000000000000;
    param_2[0x34] = 0x8000000000000001;
    param_2[0x37] = 0x8000000000000003;
    *(undefined1 *)(param_2 + 0x3c) = 2;
    *(undefined4 *)((long)param_2 + 0x1e1) = 0x2020202;
    *(undefined2 *)((long)param_2 + 0x1e5) = 0x303;
    *(undefined1 *)((long)param_2 + 0x1e7) = 7;
    param_2[0x3e] = unaff_x23;
    param_2[0x3f] = unaff_x20;
    param_2[0x40] = unaff_x25;
    param_2[0x41] = unaff_x22;
    param_2[0x42] = param_2[5];
    param_2[0x43] = param_2[6];
    param_2[0x44] = 0;
    *(undefined1 *)(param_2 + 0xa8) = 0;
    unaff_x24 = param_3;
LAB_100890224:
    puVar10 = param_2 + 7;
    uVar22 = 0x100890230;
    plVar14 = (long *)&stack0xffffffffffffffb0;
    plVar7 = param_1;
    pppppppuVar21 = (undefined8 *******)&stack0xfffffffffffffff0;
  }
  else {
    if (bVar3 == 3) goto LAB_100890224;
LAB_10089027c:
    plVar7 = (long *)FUN_107c05cc4(&UNK_10b224ba0);
    if ((*(char *)((long)param_2 + 0x549) == '\x01') &&
       (((ulong)unaff_x23 & 0x7fffffffffffffff) != 0)) {
      _free();
    }
    *(undefined2 *)(param_2 + 0xa9) = 2;
    __Unwind_Resume(plVar7);
    auVar28 = FUN_107c05ccc();
    param_2 = auVar28._8_8_;
    param_1 = auVar28._0_8_;
    uStack_58 = 0x1008902e4;
    pppppppuVar21 = &pppppppuStack_60;
    plVar14 = &lStack_290;
    bVar3 = *(byte *)(param_2 + 0xe3);
    pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        unaff_x23 = (undefined2 *)((long)param_2 + 0x719);
        plVar7 = (long *)param_2[0x37];
        uStack_288 = param_2[0x39];
        lStack_290 = param_2[0x38];
        uStack_278 = param_2[0x3b];
        uStack_280 = param_2[0x3a];
        uStack_268 = param_2[0x3d];
        uStack_270 = param_2[0x3c];
        *unaff_x23 = 0x101;
        _memcpy(auStack_258,param_2,0x1b8);
        __ZN16codex_app_server14config_manager13ConfigManager21current_cli_overrides17h1e93b0b33276661cE
                  (param_2 + 0x3e,plVar7);
        unaff_x24 = param_2[0x3f];
        unaff_x25 = param_2[0x40];
        *unaff_x23 = 0;
        _memcpy(param_2 + 0x41,auStack_258,0x1b8);
        param_2[0x78] = 0x8000000000000000;
        param_2[0x7b] = plVar7;
        param_2[0x7c] = unaff_x24;
        param_2[0x7d] = unaff_x25;
        param_2[0x7f] = uStack_288;
        param_2[0x7e] = lStack_290;
        param_2[0x81] = uStack_278;
        param_2[0x80] = uStack_280;
        param_2[0x83] = uStack_268;
        param_2[0x82] = uStack_270;
        *(undefined1 *)(param_2 + 0xe2) = 0;
        unaff_x22 = param_3;
LAB_1008903a8:
        puVar10 = param_2 + 0x41;
        uVar22 = 0x1008903b4;
        plVar14 = &lStack_290;
        unaff_x20 = param_1;
        goto SUB_100890488;
      }
      FUN_107c05cc0(&UNK_10b224bd0);
    }
    else if (bVar3 == 3) goto LAB_1008903a8;
    unaff_x20 = (long *)FUN_107c05cc4(&UNK_10b224bd0);
    if ((*(byte *)((long)param_2 + 0x719) & 1) != 0) {
      FUN_100dff6cc(auStack_258);
    }
    *(undefined1 *)((long)param_2 + 0x719) = 0;
    if ((*(char *)((long)param_2 + 0x71a) == '\x01') && (lStack_290 != 0)) {
      FUN_100cc2fb4(&lStack_290);
    }
    *(undefined1 *)((long)param_2 + 0x71a) = 0;
    *(undefined1 *)(param_2 + 0xe3) = 2;
    __Unwind_Resume(unaff_x20);
    uVar22 = 0x100890488;
    auVar28 = FUN_107c05ccc();
    puVar10 = auVar28._8_8_;
    param_1 = auVar28._0_8_;
  }
SUB_100890488:
  *(undefined8 *)((long)plVar14 + -0x60) = unaff_x28;
  *(undefined8 *)((long)plVar14 + -0x58) = unaff_x27;
  *(undefined8 *)((long)plVar14 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar14 + -0x48) = unaff_x25;
  *(undefined8 *)((long)plVar14 + -0x40) = unaff_x24;
  *(undefined2 **)((long)plVar14 + -0x38) = unaff_x23;
  *(undefined8 *)((long)plVar14 + -0x30) = unaff_x22;
  *(long **)((long)plVar14 + -0x28) = plVar7;
  *(long **)((long)plVar14 + -0x20) = unaff_x20;
  *(undefined8 **)((long)plVar14 + -0x18) = param_2;
  *(undefined8 ********)((long)plVar14 + -0x10) = pppppppuVar21;
  *(undefined8 *)((long)plVar14 + -8) = uVar22;
  puVar4 = (undefined1 *)((long)plVar14 + -0x60);
  do {
    puVar6 = puVar4;
    *(undefined8 *)(puVar6 + -0x1000) = 0;
    puVar4 = puVar6 + -0x1000;
  } while (puVar6 + -0x1000 != (undefined1 *)((long)plVar14 + -0xa060));
  *(undefined8 *)(puVar6 + -0x1b20) = 0;
  bVar3 = *(byte *)(puVar10 + 0xa1);
  if (bVar3 < 2) {
    *(undefined8 *)(puVar6 + -0x1b10) = param_3;
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b224be8);
      goto LAB_100890eb8;
    }
    puVar1 = (undefined4 *)((long)puVar10 + 0x509);
    lVar17 = puVar10[0x3b];
    puVar10[0x43] = puVar10[0x3a];
    lVar18 = puVar10[0x3c];
    uVar22 = puVar10[0x3d];
    uVar9 = puVar10[0x40];
    uVar19 = puVar10[0x3f];
    *(undefined8 *)(puVar6 + -0x1ae8) = puVar10[0x3e];
    *(undefined8 *)(puVar6 + -0x1af0) = uVar22;
    *(undefined8 *)(puVar6 + -0x1ad8) = uVar9;
    *(undefined8 *)(puVar6 + -0x1ae0) = uVar19;
    uVar22 = puVar10[0x41];
    *(undefined8 *)(puVar6 + -0x1ac8) = puVar10[0x42];
    *(undefined8 *)(puVar6 + -0x1ad0) = uVar22;
    _memcpy(puVar6 + -0x1ab8,puVar10,0x1b8);
    uVar22 = puVar10[0x38];
    *(undefined8 *)(puVar6 + -0x1af8) = puVar10[0x37];
    uVar19 = puVar10[0x39];
    *puVar1 = 0x10100;
    plVar14 = *(long **)(puVar6 + -0x1af0);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)(*
                        ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                        )();
      if ((char)plVar14[2] == '\x01') {
        lVar23 = *plVar14;
        plVar7 = extraout_x12;
        plVar16 = extraout_x13;
      }
      else {
        auVar28 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        lVar23 = auVar28._0_8_;
        plVar14[1] = auVar28._8_8_;
        *(undefined1 *)(plVar14 + 2) = 1;
        plVar7 = extraout_x12_00;
        plVar16 = extraout_x13_00;
      }
      plVar12 = (long *)0x0;
      lVar24 = 0;
      uVar9 = 0;
      *plVar14 = lVar23 + 1;
      lVar23 = -1;
      plVar14 = (long *)&UNK_108c56c70;
    }
    else {
      lVar15 = *(long *)(puVar6 + -0x1ae8);
      plVar12 = *(long **)(puVar6 + -0x1ad8);
      lVar23 = *plVar14;
      plVar7 = plVar12;
      plVar16 = plVar12;
      lVar24 = 0;
      if (lVar15 != 0) {
        plVar7 = plVar14 + lVar15 * -0xc + -0xc;
        plVar16 = (long *)(lVar15 * 0x61 + 0x69);
        lVar24 = lVar15;
      }
      uVar9 = 0;
      if (lVar15 != 0) {
        uVar9 = 8;
      }
    }
    *(long **)(puVar6 + -0x1b08) = param_1;
    *(undefined8 *)(puVar6 + 0x1d60) = uVar9;
    *(long **)(puVar6 + 0x1d68) = plVar16;
    *(long **)(puVar6 + 0x1d70) = plVar7;
    *(long **)(puVar6 + 0x1d78) = plVar14;
    *(ulong *)(puVar6 + 0x1d80) =
         CONCAT17(-(-1 < lVar23),
                  CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                           CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                    CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                             CONCAT13(-(-1 < (char)((ulong)lVar23 >> 0x18)),
                                                      CONCAT12(-(-1 < (char)((ulong)lVar23 >> 0x10))
                                                               ,CONCAT11(-(-1 < (char)((ulong)lVar23
                                                                                      >> 8)),
                                                                         -(-1 < (char)lVar23))))))))
         & 0x8080808080808080;
    *(long **)(puVar6 + 0x1d88) = plVar14 + 1;
    *(undefined **)(puVar6 + 0x1d90) = (undefined *)((long)plVar14 + lVar24 + 1);
    *(long **)(puVar6 + 0x1d98) = plVar12;
    *(long *)(puVar6 + 0x1da0) = lVar17;
    *(long *)(puVar6 + 0x1da8) = lVar17 + lVar18 * 0x68;
    func_0x00010042b804(puVar6 + -0x18e8,puVar6 + 0x1d60);
    *(undefined8 *)(puVar6 + -0x1b00) = uVar19;
    if (*(long *)(puVar6 + -0x18e8) == -0x8000000000000000) {
      *(undefined8 *)(puVar6 + -0x1900) = 0;
      *(undefined8 *)(puVar6 + -0x18f8) = 8;
      *(undefined8 *)(puVar6 + -0x18f0) = 0;
      lVar17 = *(long *)(puVar6 + 0x1d60);
      if (lVar17 != -0x7fffffffffffffff) {
        *(undefined8 *)(puVar6 + -0x1b18) = uVar22;
        lVar18 = *(long *)(puVar6 + 0x1d98);
        if (lVar18 != 0) {
          uVar20 = *(ulong *)(puVar6 + 0x1d80);
          lVar23 = *(long *)(puVar6 + 0x1d78);
          plVar14 = *(long **)(puVar6 + 0x1d88);
          do {
            while (uVar20 == 0) {
              lVar24 = *plVar14;
              lVar23 = lVar23 + -0x300;
              plVar14 = plVar14 + 1;
              uVar20 = CONCAT17(-(-1 < lVar24),
                                CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                       0x8080808080808080;
            }
            uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            lVar24 = lVar23 + (long)-(int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) *
                              0x60;
            if (*(long *)(lVar24 + -0x60) != 0) {
              _free(*(undefined8 *)(lVar24 + -0x58));
            }
            FUN_100de6690(lVar24 + -0x48);
            uVar20 = uVar20 - 1 & uVar20;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        uVar22 = *(undefined8 *)(puVar6 + -0x1b18);
        if ((lVar17 != 0) && (*(long *)(puVar6 + 0x1d68) != 0)) {
          _free(*(undefined8 *)(puVar6 + 0x1d70));
        }
      }
LAB_1008909a8:
      *(undefined1 *)puVar1 = 1;
      auVar28 = __ZN100__LT_codex_config__cloud_requirements__CloudRequirementsLoader_u20_as_u20_core__default__Default_GT_7default17h140615628771f262E
                          ();
      *(undefined8 *)(puVar6 + 0x2038) = 0x8000000000000000;
      *(undefined8 *)(puVar6 + 0x2050) = 0x8000000000000000;
      *(undefined8 *)(puVar6 + 0x2238) = 0x8000000000000001;
      puVar6[0x2308] = 0;
      *(undefined1 (*) [16])(puVar6 + 0x22e8) = auVar28;
      *(undefined8 *)(puVar6 + 0x22f8) = 0;
      *(undefined8 *)(puVar6 + 0x2068) = 0x8000000000000000;
      *(undefined8 *)(puVar6 + 0x2220) = 0x8000000000000000;
      uVar19 = *(undefined8 *)(puVar10[0x43] + 8);
      lVar17 = *(long *)(puVar10[0x43] + 0x10);
      if (lVar17 == 0) {
        lVar18 = 1;
      }
      else {
        lVar18 = _malloc(lVar17);
        if (lVar18 == 0) {
          func_0x0001087c9084(1,lVar17);
          goto LAB_100890a10;
        }
      }
      _memcpy(lVar18,uVar19,lVar17);
      *(long *)(puVar6 + 0x2038) = lVar17;
      *(long *)(puVar6 + 0x2040) = lVar18;
      *(long *)(puVar6 + 0x2048) = lVar17;
      _memcpy(puVar6 + 0x1d60,puVar6 + 0x2038,0x2d8);
      *(undefined1 *)puVar1 = 0;
      if (*(long *)(puVar6 + 0x1d78) != -0x8000000000000000) {
        FUN_1033e4678(puVar6 + 0x1d78);
      }
      *(undefined8 *)(puVar6 + 0x1d80) = *(undefined8 *)(puVar6 + -0x18f8);
      *(undefined8 *)(puVar6 + 0x1d78) = *(undefined8 *)(puVar6 + -0x1900);
      *(undefined8 *)(puVar6 + 0x1d88) = *(undefined8 *)(puVar6 + -0x18f0);
      _memcpy(puVar6 + 0x1a88,puVar6 + 0x1d60,0x2d8);
      FUN_1011b4ddc(puVar6 + 0x2038,puVar10[0x43] + 0x18);
      uVar19 = *(undefined8 *)(puVar6 + -0x1b00);
      if (*(long *)(puVar6 + 0x1c88) != -0x7fffffffffffffff) {
        FUN_1033961c0(puVar6 + 0x1c88);
      }
      *(undefined8 *)(puVar6 + 0x1d10) = *(undefined8 *)(puVar6 + 0x20c0);
      *(undefined8 *)(puVar6 + 0x1d08) = *(undefined8 *)(puVar6 + 0x20b8);
      *(undefined8 *)(puVar6 + 0x1d20) = *(undefined8 *)(puVar6 + 0x20d0);
      *(undefined8 *)(puVar6 + 0x1d18) = *(undefined8 *)(puVar6 + 0x20c8);
      *(undefined8 *)(puVar6 + 0x1d30) = *(undefined8 *)(puVar6 + 0x20e0);
      *(undefined8 *)(puVar6 + 0x1d28) = *(undefined8 *)(puVar6 + 0x20d8);
      *(undefined8 *)(puVar6 + 0x1cd0) = *(undefined8 *)(puVar6 + 0x2080);
      *(undefined8 *)(puVar6 + 0x1cc8) = *(undefined8 *)(puVar6 + 0x2078);
      *(undefined8 *)(puVar6 + 0x1ce0) = *(undefined8 *)(puVar6 + 0x2090);
      *(undefined8 *)(puVar6 + 0x1cd8) = *(undefined8 *)(puVar6 + 0x2088);
      *(undefined8 *)(puVar6 + 0x1cf0) = *(undefined8 *)(puVar6 + 0x20a0);
      *(undefined8 *)(puVar6 + 0x1ce8) = *(undefined8 *)(puVar6 + 0x2098);
      *(undefined8 *)(puVar6 + 0x1d00) = *(undefined8 *)(puVar6 + 0x20b0);
      *(undefined8 *)(puVar6 + 0x1cf8) = *(undefined8 *)(puVar6 + 0x20a8);
      *(undefined8 *)(puVar6 + 0x1c90) = *(undefined8 *)(puVar6 + 0x2040);
      *(undefined8 *)(puVar6 + 0x1c88) = *(undefined8 *)(puVar6 + 0x2038);
      *(undefined8 *)(puVar6 + 0x1ca0) = *(undefined8 *)(puVar6 + 0x2050);
      *(undefined8 *)(puVar6 + 0x1c98) = *(undefined8 *)(puVar6 + 0x2048);
      *(undefined8 *)(puVar6 + 0x1cb0) = *(undefined8 *)(puVar6 + 0x2060);
      *(undefined8 *)(puVar6 + 0x1ca8) = *(undefined8 *)(puVar6 + 0x2058);
      *(undefined8 *)(puVar6 + 0x1cc0) = *(undefined8 *)(puVar6 + 0x2070);
      *(undefined8 *)(puVar6 + 0x1cb8) = *(undefined8 *)(puVar6 + 0x2068);
      _memcpy(puVar6 + 0x17b0,puVar6 + 0x1a88,0x2d0);
      *(undefined4 *)(puVar6 + 0x1a81) = *(undefined4 *)(puVar6 + 0x1d59);
      *(undefined4 *)(puVar6 + 0x1a84) = *(undefined4 *)(puVar6 + 0x1d5c);
      puVar6[0x1a80] = *(undefined1 *)(puVar10[0x43] + 0x130);
      *(undefined1 *)((long)puVar10 + 0x50b) = 0;
      if (*(long *)(puVar6 + 0x17e0) != -0x8000000000000000) {
        FUN_103393e74(puVar6 + 0x17e0);
      }
      _memcpy(puVar6 + 0x17e0,puVar6 + -0x1ab8,0x1b8);
      _memcpy(puVar6 + 0x15c8,puVar6 + 0x17b0,0x1e8);
      uVar20 = *(ulong *)(puVar6 + 0x1998);
      uVar9 = *(undefined8 *)(puVar6 + 0x19a0);
      *(undefined8 *)(puVar6 + 0x1598) = *(undefined8 *)(puVar6 + 0x1a58);
      *(undefined8 *)(puVar6 + 0x1590) = *(undefined8 *)(puVar6 + 0x1a50);
      *(undefined8 *)(puVar6 + 0x15a8) = *(undefined8 *)(puVar6 + 0x1a68);
      *(undefined8 *)(puVar6 + 0x15a0) = *(undefined8 *)(puVar6 + 0x1a60);
      *(undefined8 *)(puVar6 + 0x15b8) = *(undefined8 *)(puVar6 + 0x1a78);
      *(undefined8 *)(puVar6 + 0x15b0) = *(undefined8 *)(puVar6 + 0x1a70);
      *(undefined8 *)(puVar6 + 0x15c0) = *(undefined8 *)(puVar6 + 0x1a80);
      *(undefined8 *)(puVar6 + 0x1558) = *(undefined8 *)(puVar6 + 0x1a18);
      *(undefined8 *)(puVar6 + 0x1550) = *(undefined8 *)(puVar6 + 0x1a10);
      *(undefined8 *)(puVar6 + 0x1568) = *(undefined8 *)(puVar6 + 0x1a28);
      *(undefined8 *)(puVar6 + 0x1560) = *(undefined8 *)(puVar6 + 0x1a20);
      *(undefined8 *)(puVar6 + 0x1578) = *(undefined8 *)(puVar6 + 0x1a38);
      *(undefined8 *)(puVar6 + 0x1570) = *(undefined8 *)(puVar6 + 0x1a30);
      *(undefined8 *)(puVar6 + 0x1588) = *(undefined8 *)(puVar6 + 0x1a48);
      *(undefined8 *)(puVar6 + 0x1580) = *(undefined8 *)(puVar6 + 0x1a40);
      *(undefined8 *)(puVar6 + 0x1518) = *(undefined8 *)(puVar6 + 0x19d8);
      *(undefined8 *)(puVar6 + 0x1510) = *(undefined8 *)(puVar6 + 0x19d0);
      *(undefined8 *)(puVar6 + 0x1528) = *(undefined8 *)(puVar6 + 0x19e8);
      *(undefined8 *)(puVar6 + 0x1520) = *(undefined8 *)(puVar6 + 0x19e0);
      *(undefined8 *)(puVar6 + 0x1538) = *(undefined8 *)(puVar6 + 0x19f8);
      *(undefined8 *)(puVar6 + 0x1530) = *(undefined8 *)(puVar6 + 0x19f0);
      *(undefined8 *)(puVar6 + 0x1548) = *(undefined8 *)(puVar6 + 0x1a08);
      *(undefined8 *)(puVar6 + 0x1540) = *(undefined8 *)(puVar6 + 0x1a00);
      *(undefined8 *)(puVar6 + 0x14f8) = *(undefined8 *)(puVar6 + 0x19b8);
      *(undefined8 *)(puVar6 + 0x14f0) = *(undefined8 *)(puVar6 + 0x19b0);
      *(undefined8 *)(puVar6 + 0x1508) = *(undefined8 *)(puVar6 + 0x19c8);
      *(undefined8 *)(puVar6 + 0x1500) = *(undefined8 *)(puVar6 + 0x19c0);
      *(undefined1 *)((long)puVar10 + 0x50a) = 0;
      if ((uVar20 & 0x7fffffffffffffff) != 0) {
        _free(uVar9);
      }
      _memcpy(puVar6 + 0x1218,puVar6 + 0x15c8,0x1e8);
      *(undefined8 *)(puVar6 + 0x14c0) = *(undefined8 *)(puVar6 + 0x1598);
      *(undefined8 *)(puVar6 + 0x14b8) = *(undefined8 *)(puVar6 + 0x1590);
      *(undefined8 *)(puVar6 + 0x14d0) = *(undefined8 *)(puVar6 + 0x15a8);
      *(undefined8 *)(puVar6 + 0x14c8) = *(undefined8 *)(puVar6 + 0x15a0);
      *(undefined8 *)(puVar6 + 0x14e0) = *(undefined8 *)(puVar6 + 0x15b8);
      *(undefined8 *)(puVar6 + 0x14d8) = *(undefined8 *)(puVar6 + 0x15b0);
      *(undefined8 *)(puVar6 + 0x1480) = *(undefined8 *)(puVar6 + 0x1558);
      *(undefined8 *)(puVar6 + 0x1478) = *(undefined8 *)(puVar6 + 0x1550);
      *(undefined8 *)(puVar6 + 0x1490) = *(undefined8 *)(puVar6 + 0x1568);
      *(undefined8 *)(puVar6 + 0x1488) = *(undefined8 *)(puVar6 + 0x1560);
      *(undefined8 *)(puVar6 + 0x14a0) = *(undefined8 *)(puVar6 + 0x1578);
      *(undefined8 *)(puVar6 + 0x1498) = *(undefined8 *)(puVar6 + 0x1570);
      *(undefined8 *)(puVar6 + 0x14b0) = *(undefined8 *)(puVar6 + 0x1588);
      *(undefined8 *)(puVar6 + 0x14a8) = *(undefined8 *)(puVar6 + 0x1580);
      *(undefined8 *)(puVar6 + 0x1440) = *(undefined8 *)(puVar6 + 0x1518);
      *(undefined8 *)(puVar6 + 0x1438) = *(undefined8 *)(puVar6 + 0x1510);
      *(undefined8 *)(puVar6 + 0x1450) = *(undefined8 *)(puVar6 + 0x1528);
      *(undefined8 *)(puVar6 + 0x1448) = *(undefined8 *)(puVar6 + 0x1520);
      *(undefined8 *)(puVar6 + 0x1460) = *(undefined8 *)(puVar6 + 0x1538);
      *(undefined8 *)(puVar6 + 0x1458) = *(undefined8 *)(puVar6 + 0x1530);
      *(undefined8 *)(puVar6 + 0x1470) = *(undefined8 *)(puVar6 + 0x1548);
      *(undefined8 *)(puVar6 + 0x1468) = *(undefined8 *)(puVar6 + 0x1540);
      *(undefined8 *)(puVar6 + 0x1420) = *(undefined8 *)(puVar6 + 0x14f8);
      *(undefined8 *)(puVar6 + 0x1418) = *(undefined8 *)(puVar6 + 0x14f0);
      *(undefined8 *)(puVar6 + 0x1400) = *(undefined8 *)(puVar6 + -0x1af8);
      *(undefined8 *)(puVar6 + 0x1408) = uVar22;
      *(undefined8 *)(puVar6 + 0x1410) = uVar19;
      *(undefined8 *)(puVar6 + 0x14e8) = *(undefined8 *)(puVar6 + 0x15c0);
      *(undefined8 *)(puVar6 + 0x1430) = *(undefined8 *)(puVar6 + 0x1508);
      *(undefined8 *)(puVar6 + 0x1428) = *(undefined8 *)(puVar6 + 0x1500);
      auVar28 = __ZN16codex_app_server14config_manager13ConfigManager26current_cloud_requirements17h054f06d04600ac40E
                          (puVar10[0x43]);
      FUN_103379894(puVar6 + 0x14c8);
      param_1 = *(long **)(puVar6 + -0x1b08);
      *(undefined1 (*) [16])(puVar6 + 0x14c8) = auVar28;
      _memcpy(puVar6 + 0xf40,puVar6 + 0x1218,0x2d8);
      auVar28 = __ZN16codex_app_server14config_manager13ConfigManager28current_thread_config_loader17h510a37b25a840537E
                          (puVar10[0x43]);
      plVar14 = *(long **)(puVar6 + 0x1200);
      if (plVar14 != (long *)0x0) {
        lVar17 = *plVar14;
        *plVar14 = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar6 + 0x1200);
        }
      }
      *(undefined1 (*) [16])(puVar6 + 0x1200) = auVar28;
      _memcpy(puVar6 + 0xc60,puVar6 + 0xf40,0x2d8);
      _memcpy(puVar10 + 0x44,puVar6 + 0xc60,0x2e0);
      *(undefined1 *)(puVar10 + 0xa0) = 0;
LAB_100890d70:
      FUN_10055d518(puVar6 + 0x2038,puVar10 + 0x44);
      lVar17 = *(long *)(puVar6 + 0x2038);
      if (lVar17 == 3) {
        uVar11 = 3;
        *param_1 = 3;
      }
      else {
        lVar18 = *(long *)(puVar6 + 0x2040);
        _memcpy(puVar6 + 0x4580,puVar6 + 0x2048,0x2538);
        if (*(char *)(puVar10 + 0xa0) == '\x03') {
          uVar22 = puVar10[0x9f];
          FUN_100e7de2c(uVar22);
          _free(uVar22);
        }
        else if (*(char *)(puVar10 + 0xa0) == '\0') {
          FUN_100df9554(puVar10 + 0x44);
        }
        if (lVar17 != 2) {
          _memcpy(puVar6 + -0x18d8,puVar6 + 0x4580,0x2538);
          *(long *)(puVar6 + -0x18e8) = lVar17;
          *(long *)(puVar6 + -0x18e0) = lVar18;
          __ZN16codex_app_server14config_manager13ConfigManager32apply_runtime_feature_enablement17hb494339509949e9cE
                    (puVar10[0x43],puVar6 + -0x18e8);
          __ZN16codex_app_server14config_manager13ConfigManager16apply_arg0_paths17h361a56c070c9a192E
                    (puVar10[0x43],puVar6 + -0x18e8);
          lVar17 = *(long *)(puVar6 + -0x18e8);
          lVar18 = *(long *)(puVar6 + -0x18e0);
          _memcpy(puVar6 + 0x6ab8,puVar6 + -0x18d8,0x2538);
        }
        *(undefined4 *)((long)puVar10 + 0x509) = 0;
        *param_1 = lVar17;
        param_1[1] = lVar18;
        _memcpy(param_1 + 2,puVar6 + 0x6ab8,0x2538);
        uVar11 = 1;
      }
      *(undefined1 *)(puVar10 + 0xa1) = uVar11;
      return;
    }
    if (*(long *)(puVar6 + 0x1da0) == 0) {
      uVar20 = 0;
      if (*(long *)(puVar6 + 0x1d60) != -0x7fffffffffffffff) {
        uVar20 = *(ulong *)(puVar6 + 0x1d98);
      }
    }
    else {
      uVar13 = ((ulong)(*(long *)(puVar6 + 0x1da8) - *(long *)(puVar6 + 0x1da0)) >> 3) *
               0x4ec4ec4ec4ec4ec5;
      uVar20 = uVar13;
      if ((*(long *)(puVar6 + 0x1d60) != -0x7fffffffffffffff) &&
         (uVar20 = uVar13 + *(ulong *)(puVar6 + 0x1d98), CARRY8(uVar13,*(ulong *)(puVar6 + 0x1d98)))
         ) {
        uVar20 = 0xffffffffffffffff;
      }
    }
    uVar13 = uVar20 + 1;
    if (uVar20 == 0xffffffffffffffff) {
      uVar13 = 0xffffffffffffffff;
    }
    uVar20 = uVar13;
    if (uVar13 < 5) {
      uVar20 = 4;
    }
    param_1 = (long *)(uVar20 * 0x68);
    if (uVar13 < 0x13b13b13b13b13c) {
      *(undefined8 *)(puVar6 + -0x1b18) = uVar22;
      if (param_1 == (long *)0x0) {
        uVar20 = 0;
        puVar8 = (undefined8 *)0x8;
LAB_1008907a0:
        uVar22 = *(undefined8 *)(puVar6 + -0x18b8);
        puVar8[7] = *(undefined8 *)(puVar6 + -0x18b0);
        puVar8[6] = uVar22;
        uVar22 = *(undefined8 *)(puVar6 + -0x18a8);
        puVar8[9] = *(undefined8 *)(puVar6 + -0x18a0);
        puVar8[8] = uVar22;
        uVar22 = *(undefined8 *)(puVar6 + -0x1898);
        puVar8[0xb] = *(undefined8 *)(puVar6 + -0x1890);
        puVar8[10] = uVar22;
        puVar8[0xc] = *(undefined8 *)(puVar6 + -0x1888);
        uVar22 = *(undefined8 *)(puVar6 + -0x18e8);
        puVar8[1] = *(undefined8 *)(puVar6 + -0x18e0);
        *puVar8 = uVar22;
        uVar22 = *(undefined8 *)(puVar6 + -0x18d8);
        puVar8[3] = *(undefined8 *)(puVar6 + -0x18d0);
        puVar8[2] = uVar22;
        uVar22 = *(undefined8 *)(puVar6 + -0x18c8);
        puVar8[5] = *(undefined8 *)(puVar6 + -0x18c0);
        puVar8[4] = uVar22;
        *(ulong *)(puVar6 + 0x1a88) = uVar20;
        *(undefined8 **)(puVar6 + 0x1a90) = puVar8;
        lVar17 = 1;
        *(undefined8 *)(puVar6 + 0x1a98) = 1;
        *(undefined8 *)(puVar6 + 0xc88) = *(undefined8 *)(puVar6 + 0x1d88);
        *(undefined8 *)(puVar6 + 0xc80) = *(undefined8 *)(puVar6 + 0x1d80);
        *(undefined8 *)(puVar6 + 0xc98) = *(undefined8 *)(puVar6 + 0x1d98);
        *(undefined8 *)(puVar6 + 0xc90) = *(undefined8 *)(puVar6 + 0x1d90);
        *(undefined8 *)(puVar6 + 0xca8) = *(undefined8 *)(puVar6 + 0x1da8);
        *(undefined8 *)(puVar6 + 0xca0) = *(undefined8 *)(puVar6 + 0x1da0);
        *(undefined8 *)(puVar6 + 0xc78) = *(undefined8 *)(puVar6 + 0x1d78);
        *(undefined8 *)(puVar6 + 0xc70) = *(undefined8 *)(puVar6 + 0x1d70);
        *(undefined8 *)(puVar6 + 0xc68) = *(undefined8 *)(puVar6 + 0x1d68);
        *(undefined8 *)(puVar6 + 0xc60) = *(undefined8 *)(puVar6 + 0x1d60);
        lVar18 = 0x68;
        while (func_0x00010042b804(puVar6 + 0x2038,puVar6 + 0xc60),
              *(long *)(puVar6 + 0x2038) != -0x8000000000000000) {
          if (lVar17 == *(long *)(puVar6 + 0x1a88)) {
            if (*(long *)(puVar6 + 0xca0) == 0) {
              uVar20 = 0;
              if (*(long *)(puVar6 + 0xc60) != -0x7fffffffffffffff) {
                uVar20 = *(ulong *)(puVar6 + 0xc98);
              }
            }
            else {
              uVar13 = ((ulong)(*(long *)(puVar6 + 0xca8) - *(long *)(puVar6 + 0xca0)) >> 3) *
                       0x4ec4ec4ec4ec4ec5;
              uVar20 = uVar13;
              if ((*(long *)(puVar6 + 0xc60) != -0x7fffffffffffffff) &&
                 (uVar20 = uVar13 + *(ulong *)(puVar6 + 0xc98),
                 CARRY8(uVar13,*(ulong *)(puVar6 + 0xc98)))) {
                uVar20 = 0xffffffffffffffff;
              }
            }
            lVar23 = uVar20 + 1;
            if (uVar20 == 0xffffffffffffffff) {
              lVar23 = -1;
            }
            FUN_108855060(puVar6 + 0x1a88,lVar17,lVar23,8,0x68);
            puVar8 = *(undefined8 **)(puVar6 + 0x1a90);
          }
          puVar2 = (undefined8 *)((long)puVar8 + lVar18);
          uVar19 = *(undefined8 *)(puVar6 + 0x2040);
          uVar22 = *(undefined8 *)(puVar6 + 0x2038);
          uVar9 = *(undefined8 *)(puVar6 + 0x2048);
          uVar26 = *(undefined8 *)(puVar6 + 0x2060);
          uVar25 = *(undefined8 *)(puVar6 + 0x2058);
          puVar2[3] = *(undefined8 *)(puVar6 + 0x2050);
          puVar2[2] = uVar9;
          puVar2[5] = uVar26;
          puVar2[4] = uVar25;
          puVar2[1] = uVar19;
          *puVar2 = uVar22;
          uVar19 = *(undefined8 *)(puVar6 + 0x2070);
          uVar22 = *(undefined8 *)(puVar6 + 0x2068);
          uVar25 = *(undefined8 *)(puVar6 + 0x2080);
          uVar9 = *(undefined8 *)(puVar6 + 0x2078);
          uVar27 = *(undefined8 *)(puVar6 + 0x2090);
          uVar26 = *(undefined8 *)(puVar6 + 0x2088);
          puVar2[0xc] = *(undefined8 *)(puVar6 + 0x2098);
          puVar2[9] = uVar25;
          puVar2[8] = uVar9;
          puVar2[0xb] = uVar27;
          puVar2[10] = uVar26;
          puVar2[7] = uVar19;
          puVar2[6] = uVar22;
          lVar17 = lVar17 + 1;
          *(long *)(puVar6 + 0x1a98) = lVar17;
          lVar18 = lVar18 + 0x68;
        }
        lVar17 = *(long *)(puVar6 + 0xc60);
        if (lVar17 != -0x7fffffffffffffff) {
          lVar18 = *(long *)(puVar6 + 0xc98);
          if (lVar18 != 0) {
            uVar20 = *(ulong *)(puVar6 + 0xc80);
            lVar23 = *(long *)(puVar6 + 0xc78);
            plVar14 = *(long **)(puVar6 + 0xc88);
            do {
              plVar7 = plVar14;
              if (uVar20 == 0) {
                do {
                  plVar14 = plVar7 + 1;
                  lVar24 = *plVar7;
                  lVar23 = lVar23 + -0x300;
                  uVar20 = CONCAT17(-(-1 < lVar24),
                                    CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar24
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                           0x8080808080808080;
                  plVar7 = plVar14;
                } while (uVar20 == 0);
                *(long **)(puVar6 + 0xc88) = plVar14;
                *(long *)(puVar6 + 0xc78) = lVar23;
              }
              uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar20 = uVar20 - 1 & uVar20;
              lVar24 = lVar23 + (long)-(int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) *
                                0x60;
              lVar18 = lVar18 + -1;
              *(ulong *)(puVar6 + 0xc80) = uVar20;
              *(long *)(puVar6 + 0xc98) = lVar18;
              if (*(long *)(lVar24 + -0x60) != 0) {
                _free(*(undefined8 *)(lVar24 + -0x58));
              }
              FUN_100de6690(lVar24 + -0x48);
            } while (lVar18 != 0);
          }
          if ((lVar17 != 0) && (*(long *)(puVar6 + 0xc68) != 0)) {
            _free(*(undefined8 *)(puVar6 + 0xc70));
          }
        }
        *(undefined8 *)(puVar6 + -0x18f8) = *(undefined8 *)(puVar6 + 0x1a90);
        *(undefined8 *)(puVar6 + -0x1900) = *(undefined8 *)(puVar6 + 0x1a88);
        *(undefined8 *)(puVar6 + -0x18f0) = *(undefined8 *)(puVar6 + 0x1a98);
        uVar22 = *(undefined8 *)(puVar6 + -0x1b18);
        goto LAB_1008909a8;
      }
      puVar8 = (undefined8 *)_malloc(param_1);
      if (puVar8 != (undefined8 *)0x0) goto LAB_1008907a0;
      goto LAB_100890ec4;
    }
    uVar22 = 0;
  }
  else {
    if (bVar3 == 3) goto LAB_100890d70;
LAB_100890eb8:
    FUN_107c05cc4(&UNK_10b224be8);
LAB_100890ec4:
    uVar22 = 8;
  }
  func_0x0001087c9084(uVar22,param_1);
LAB_100890a10:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100890a14);
  (*pcVar5)();
}

