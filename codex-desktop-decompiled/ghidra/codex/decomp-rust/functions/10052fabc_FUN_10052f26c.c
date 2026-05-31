
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10052f26c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long *plStack_df0;
  ulong *puStack_de8;
  long *plStack_de0;
  long *plStack_dd8;
  long lStack_dd0;
  long lStack_dc8;
  long lStack_dc0;
  long lStack_db8;
  long lStack_db0;
  long lStack_da8;
  long lStack_da0;
  long lStack_d98;
  long lStack_d90;
  long lStack_d88;
  long *plStack_d38;
  ulong *puStack_d30;
  long *plStack_d28;
  long *plStack_d20;
  long lStack_d18;
  long lStack_d10;
  long lStack_d08;
  long lStack_d00;
  undefined1 uStack_cf8;
  undefined7 uStack_cf7;
  long *plStack_cf0;
  ulong *puStack_ce8;
  long *plStack_ce0;
  long *plStack_cd8;
  long lStack_cd0;
  long lStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  long lStack_cb0;
  long lStack_ca8;
  long lStack_ca0;
  long lStack_c98;
  long lStack_c90;
  long lStack_c88;
  undefined8 *puStack_c80;
  undefined8 uStack_c40;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  ulong uStack_c20;
  long lStack_c18;
  ulong uStack_c10;
  undefined1 uStack_c08;
  long lStack_a68;
  undefined8 uStack_a60;
  undefined1 auStack_a50 [472];
  long alStack_878 [63];
  undefined1 auStack_620 [320];
  long alStack_4e0 [40];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_2e0 [320];
  long alStack_1a0 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar15 = *(byte *)(param_2 + 0x2d3);
  if (bVar15 < 2) {
    if (bVar15 == 0) {
      lVar16 = *(long *)*param_2;
      param_2[2] = param_2[1];
      param_2[3] = lVar16 + 0x10;
      *(undefined1 *)(param_2 + 0x2d2) = 0;
LAB_10052f2bc:
      uVar7 = FUN_100562420(alStack_1a0,param_2 + 2);
      if (alStack_1a0[0] == -0x8000000000000000) {
        *param_1 = 0;
        uVar14 = 3;
      }
      else {
        _memcpy(auStack_2e0,alStack_1a0,0x140);
        FUN_100e6adb8(param_2 + 2);
        __ZN9codex_mcp3mcp22configured_mcp_servers17hfa671293f5acfcffE(&uStack_60,auStack_2e0);
        uVar7 = FUN_100de7ce8(auStack_2e0);
        param_1[1] = uStack_58;
        *param_1 = uStack_60;
        param_1[3] = uStack_48;
        param_1[2] = uStack_50;
        param_1[5] = uStack_38;
        param_1[4] = uStack_40;
        uVar14 = 1;
      }
      *(undefined1 *)(param_2 + 0x2d3) = uVar14;
      return uVar7;
    }
    FUN_107c05cc0(&UNK_10b216980);
  }
  else if (bVar15 == 3) goto LAB_10052f2bc;
  FUN_107c05cc4(&UNK_10b216980);
  *(undefined1 *)(param_2 + 0x2d3) = 2;
  uVar7 = __Unwind_Resume();
  FUN_100e6adb8(param_2 + 2);
  *(undefined1 *)(param_2 + 0x2d3) = 2;
  __Unwind_Resume(uVar7);
  auVar23 = FUN_107c05ccc();
  puVar11 = auVar23._8_8_;
  puVar8 = auVar23._0_8_;
  bVar15 = *(byte *)(puVar11 + 0x2d3);
  if (bVar15 < 2) {
    if (bVar15 == 0) {
      lVar16 = *(long *)*puVar11;
      puVar11[2] = puVar11[1];
      puVar11[3] = lVar16 + 0x10;
      *(undefined1 *)(puVar11 + 0x2d2) = 0;
LAB_10052f3e4:
      uVar7 = FUN_100562420(alStack_4e0,puVar11 + 2);
      if (alStack_4e0[0] == -0x8000000000000000) {
        *puVar8 = 0;
        uVar14 = 3;
      }
      else {
        _memcpy(auStack_620,alStack_4e0,0x140);
        FUN_100e6adb8(puVar11 + 2);
        func_0x000103ed8ac0(&uStack_3a0,auStack_620);
        uVar7 = FUN_100de7ce8(auStack_620);
        puVar8[0xd] = uStack_338;
        puVar8[0xc] = uStack_340;
        puVar8[0xf] = uStack_328;
        puVar8[0xe] = uStack_330;
        puVar8[0x11] = uStack_318;
        puVar8[0x10] = uStack_320;
        puVar8[5] = uStack_378;
        puVar8[4] = uStack_380;
        puVar8[7] = uStack_368;
        puVar8[6] = uStack_370;
        puVar8[9] = uStack_358;
        puVar8[8] = uStack_360;
        puVar8[0xb] = uStack_348;
        puVar8[10] = uStack_350;
        puVar8[1] = uStack_398;
        *puVar8 = uStack_3a0;
        puVar8[3] = uStack_388;
        puVar8[2] = uStack_390;
        uVar14 = 1;
      }
      *(undefined1 *)(puVar11 + 0x2d3) = uVar14;
      return uVar7;
    }
    FUN_107c05cc0(&UNK_10b216998);
  }
  else if (bVar15 == 3) goto LAB_10052f3e4;
  FUN_107c05cc4(&UNK_10b216998);
  *(undefined1 *)(puVar11 + 0x2d3) = 2;
  uVar7 = __Unwind_Resume();
  FUN_100e6adb8(puVar11 + 2);
  *(undefined1 *)(puVar11 + 0x2d3) = 2;
  __Unwind_Resume(uVar7);
  auVar23 = FUN_107c05ccc();
  puVar12 = auVar23._8_8_;
  puVar11 = auVar23._0_8_;
  uStack_c40 = 0;
  puVar8 = puVar12 + 0x400;
  bVar15 = *(byte *)((long)puVar12 + 0x2151);
  if (2 < bVar15) {
    if (bVar15 == 3) goto LAB_10052f6d4;
    goto LAB_10052f5e8;
  }
  if (bVar15 == 0) {
    puVar12[0x16] = puVar12[3];
    puVar12[0x15] = puVar12[2];
    puVar12[0x18] = puVar12[5];
    puVar12[0x17] = puVar12[4];
    puVar12[0x1a] = puVar12[7];
    puVar12[0x19] = puVar12[6];
    puVar12[0x1c] = puVar12[9];
    puVar12[0x1b] = puVar12[8];
    puVar12[0x14] = puVar12[1];
    puVar12[0x13] = *puVar12;
    puVar12[0x1e] = puVar12[0xd];
    puVar12[0x1d] = puVar12[0xc];
    puVar12[0x22] = puVar12[0x11];
    puVar12[0x21] = puVar12[0x10];
    *(undefined2 *)((long)puVar12 + 0x2153) = 0;
    *(undefined1 *)((long)puVar12 + 0x2152) = *(undefined1 *)(puVar12 + 0x42a);
    uVar20 = puVar12[0xb];
    puVar12[0x23] = puVar12[0x12];
    puVar12[0x24] = puVar12[10];
    uVar13 = uVar20;
    if (0x1fff < uVar20) {
      uVar13 = 0x2000;
    }
    puVar12[0x20] = puVar12[0xf];
    puVar12[0x1f] = puVar12[0xe];
    if ((int)puVar12[10] == 0) {
      uVar13 = 0x2000;
    }
    puVar12[0x25] = uVar20;
    if (uVar13 == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = _malloc(uVar13);
      if (lVar16 == 0) {
        FUN_107c03c64(1,uVar13);
LAB_10052fa00:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10052fa04);
        (*pcVar5)();
      }
    }
    puVar12[0x26] = uVar13;
    puVar12[0x27] = lVar16;
    _bzero(puVar12 + 0x28,0x2010);
LAB_10052f6bc:
    puVar12[0x42b] = puVar12 + 0x13;
    puVar12[0x42c] = puVar12 + 0x29;
    puVar12[0x42d] = 0x2000;
LAB_10052f6d4:
    uVar7 = 0x2158;
    auVar23 = FUN_101212d94(puVar12 + 0x42b,param_3);
    uVar13 = auVar23._8_8_;
    if (auVar23._0_8_ == 2) {
      *puVar11 = 0x8000000000000001;
      uVar14 = 3;
      uVar9 = 2;
      goto LAB_10052f698;
    }
    if ((auVar23._0_8_ & 1) != 0) {
      if (puVar12[0x26] != 0) {
        _free(puVar12[0x27]);
      }
      if (puVar12[0x1d] != -0x8000000000000000) {
        if (puVar12[0x1d] != 0) {
          _free(puVar12[0x1e]);
        }
        if (puVar12[0x20] != 0) {
          _free(puVar12[0x21]);
        }
        FUN_100e4a908(puVar12 + 0x23);
      }
      uVar9 = func_0x000100df6bcc(puVar12 + 0x13);
      lVar16 = puVar12[0x1a];
      uVar18 = 0x8000000000000000;
joined_r0x00010052f8f4:
      if (lVar16 != 0) {
        uVar9 = _free(puVar12[0x19]);
      }
      *puVar11 = uVar18;
      puVar11[1] = uVar13;
      puVar11[2] = uVar7;
      uVar14 = 1;
      *(undefined4 *)(puVar11 + 3) = 0;
LAB_10052f698:
      *(undefined1 *)((long)puVar12 + 0x2151) = uVar14;
      return uVar9;
    }
    puVar12[0x42b] = uVar13;
    if (uVar13 == 0) {
      uVar18 = puVar12[0x26];
      uVar13 = puVar12[0x27];
      uVar7 = puVar12[0x28];
      if (puVar12[0x1d] != -0x8000000000000000) {
        if (puVar12[0x1d] != 0) {
          _free(puVar12[0x1e]);
        }
        if (puVar12[0x20] != 0) {
          _free(puVar12[0x21]);
        }
        FUN_100e4a908(puVar12 + 0x23);
      }
      uVar9 = func_0x000100df6bcc(puVar12 + 0x13);
      lVar16 = puVar12[0x1a];
      goto joined_r0x00010052f8f4;
    }
    if ((puVar12[0x1d] != -0x8000000000000000) && ((ulong)puVar12[0x429] >> 4 < 0x271)) {
      if (0x2000 < uVar13) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar13,0x2000,&UNK_10b2169f8);
        goto LAB_10052fa00;
      }
      lVar16 = _malloc(uVar13);
      if (lVar16 == 0) {
        FUN_107c03c64(1,uVar13);
        goto LAB_10052fa00;
      }
      _memcpy(lVar16,puVar12 + 0x29,uVar13);
      lVar21 = 1;
      *(undefined1 *)((long)puVar12 + 0x2154) = 1;
      uVar7 = puVar12[0x21];
      lVar2 = puVar12[0x22];
      lVar22 = 1;
      if ((lVar2 != 0) && (lVar22 = _malloc(lVar2), lVar22 == 0)) {
        FUN_107c03c64(1,lVar2);
        goto LAB_10052fa00;
      }
      _memcpy(lVar22,uVar7,lVar2);
      uStack_c08 = *(undefined1 *)((long)puVar12 + 0x2152);
      *(undefined2 *)((long)puVar12 + 0x2153) = 1;
      uStack_c40 = CONCAT44(uStack_c40._4_4_,0x1f);
      uVar7 = puVar12[0x1e];
      lVar3 = puVar12[0x1f];
      lStack_c38 = lVar2;
      lStack_c30 = lVar22;
      lStack_c28 = lVar2;
      uStack_c20 = uVar13;
      lStack_c18 = lVar16;
      uStack_c10 = uVar13;
      if ((lVar3 != 0) && (lVar21 = _malloc(lVar3), lVar21 == 0)) {
        FUN_107c03c64(1,lVar3);
        goto LAB_10052fa00;
      }
      _memcpy(lVar21,uVar7,lVar3);
      *(undefined1 *)((long)puVar12 + 0x2153) = 0;
      puVar12[0x42c] = lVar3;
      puVar12[0x42d] = lVar21;
      puVar12[0x42e] = lVar3;
      _memcpy(puVar12 + 0x42f,&uStack_c40,0x1d8);
      puVar12[0x46a] = puVar12 + 0x23;
      puVar12[0x46b] = 0;
LAB_10052f5e8:
      uVar9 = func_0x0001011c40bc(alStack_878,puVar12 + 0x42c,*param_3);
      if (alStack_878[0] == -0x7fffffffffffffff) {
        *puVar11 = 0x8000000000000001;
        uVar14 = 4;
        goto LAB_10052f698;
      }
      _memcpy(&lStack_a68,alStack_878,0x1f0);
      FUN_100e44a28(puVar12 + 0x42c);
      if (lStack_a68 != -0x8000000000000000) {
        if (lStack_a68 != 0) {
          _free(uStack_a60);
        }
        func_0x000100dfc74c(auStack_a50);
      }
      puVar12[0x429] = puVar12[0x429] + 1;
      *(undefined1 *)((long)puVar12 + 0x2153) = 0;
      *(undefined1 *)((long)puVar12 + 0x2154) = 0;
    }
    if (*(int *)(puVar12 + 0x24) == 1) {
      uVar13 = puVar12[0x42b];
      if (uVar13 < 0x2001) goto code_r0x00010052f80c;
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar13,0x2000,&UNK_10b2169c8);
    }
    else {
      uVar13 = puVar12[0x42b];
      if (uVar13 < 0x2001) {
        uVar20 = puVar12[0x28];
        if (puVar12[0x26] - uVar20 < uVar13) {
          thunk_FUN_108855060(puVar12 + 0x26,uVar20,uVar13,1,1);
          goto LAB_10052f9b0;
        }
        goto LAB_10052f870;
      }
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar13,0x2000,&UNK_10b2169e0);
    }
    goto LAB_10052fa00;
  }
  if (bVar15 == 1) {
    FUN_107c05cc0(&UNK_10b2169b0);
  }
  uVar7 = FUN_107c05cc4();
  FUN_100e46b64(puVar12 + 0x1d);
  FUN_100e790b4(puVar12 + 0x13);
  *(undefined1 *)((long)puVar12 + 0x2151) = 2;
  __Unwind_Resume(uVar7);
  auVar23 = FUN_107c05ccc();
  puVar11 = auVar23._8_8_;
  plVar10 = auVar23._0_8_;
  bVar15 = *(byte *)(plVar10 + 6);
  puStack_c80 = puVar8;
  if (bVar15 < 4) {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        FUN_107c05cc0(&UNK_10b216a58);
LAB_10052ff64:
        FUN_107c05cc4(&UNK_10b216a58);
        goto LAB_10052ff70;
      }
      plVar10[1] = plVar10[4];
      *plVar10 = plVar10[3];
      lVar16 = plVar10[5];
      plVar10[2] = lVar16;
      iVar6 = (uint)lVar16 + 0xc4653600;
      if ((uint)lVar16 < 1000000000) {
        iVar6 = 3;
      }
      if (1 < iVar6) {
        if (iVar6 != 2) {
          plStack_d38 = plVar10 + 8;
          *plStack_d38 = *plVar10;
          pbVar19 = (byte *)(plVar10 + 7);
          *pbVar19 = 0;
          puStack_d30 = (ulong *)(*plVar10 + 0x10);
          plStack_d28 = (long *)(*puStack_d30 >> 2);
          uStack_cf8 = 0;
          lStack_d00 = 0;
          plStack_d20 = (long *)0x0;
          lStack_d18 = 0;
          lStack_d10 = 0;
          __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                    (&plStack_cf0,plVar10[1],lVar16,&UNK_10b216a40);
          plStack_dd8 = plStack_d20;
          plStack_de0 = plStack_d28;
          lStack_dc8 = lStack_d10;
          lStack_dd0 = lStack_d18;
          lStack_db8 = lStack_d00;
          lStack_db0 = CONCAT71(uStack_cf7,uStack_cf8);
          puStack_de8 = puStack_d30;
          plStack_df0 = plStack_d38;
          plVar17 = plVar10 + 9;
          plVar10[0xc] = (long)plStack_d20;
          plVar10[0xb] = (long)plStack_d28;
          plVar10[0xe] = lStack_d10;
          plVar10[0xd] = lStack_d18;
          plVar10[0x10] = lStack_d00;
          plVar10[0xf] = lStack_d08;
          plVar10[0x11] = lStack_db0;
          plVar10[10] = (long)puStack_d30;
          plVar10[9] = (long)plStack_d38;
          plVar10[0x1b] = lStack_ca8;
          plVar10[0x1a] = lStack_cb0;
          plVar10[0x1d] = lStack_c98;
          plVar10[0x1c] = lStack_ca0;
          plVar10[0x1f] = lStack_c88;
          plVar10[0x1e] = lStack_c90;
          plVar10[0x13] = (long)puStack_ce8;
          plVar10[0x12] = (long)plStack_cf0;
          plVar10[0x15] = (long)plStack_cd8;
          plVar10[0x14] = (long)plStack_ce0;
          plVar10[0x17] = lStack_cc8;
          plVar10[0x16] = lStack_cd0;
          plVar10[0x19] = lStack_cb8;
          plVar10[0x18] = lStack_cc0;
          plVar10[0x20] = (long)pbVar19;
          plVar10[0x21] = (long)plVar17;
          goto LAB_10052fbdc;
        }
        plVar10[7] = *plVar10;
        puVar1 = (ulong *)(*plVar10 + 0x10);
        uVar13 = *puVar1;
        plVar10[8] = (long)(plVar10 + 7);
        plVar10[9] = (long)puVar1;
        plVar10[10] = uVar13 >> 2;
        plVar10[0xb] = 0;
        plVar10[0xc] = 0;
        plVar10[0xd] = 0;
        plVar10[0xf] = 0;
        *(undefined1 *)(plVar10 + 0x10) = 0;
        goto LAB_10052faf8;
      }
      if (iVar6 != 0) {
        __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&plStack_df0,10,0,&UNK_10b216a28);
        lStack_ca8 = lStack_da8;
        lStack_cb0 = lStack_db0;
        lStack_c98 = lStack_d98;
        lStack_ca0 = lStack_da0;
        lStack_c88 = lStack_d88;
        lStack_c90 = lStack_d90;
        puStack_ce8 = puStack_de8;
        plStack_cf0 = plStack_df0;
        plStack_cd8 = plStack_dd8;
        plStack_ce0 = plStack_de0;
        lStack_cc8 = lStack_dc8;
        lStack_cd0 = lStack_dd0;
        lStack_cb8 = lStack_db8;
        lStack_cc0 = lStack_dc0;
        plVar10[0xe] = lStack_db8;
        plVar10[0xd] = lStack_dc0;
        plVar10[0x10] = lStack_da8;
        plVar10[0xf] = lStack_db0;
        plVar10[0x12] = lStack_d98;
        plVar10[0x11] = lStack_da0;
        plVar10[0x14] = lStack_d88;
        plVar10[0x13] = lStack_d90;
        plVar10[8] = (long)puStack_de8;
        plVar10[7] = (long)plStack_df0;
        plVar10[10] = (long)plStack_dd8;
        plVar10[9] = (long)plStack_de0;
        plVar10[0xc] = lStack_dc8;
        plVar10[0xb] = lStack_dd0;
        goto LAB_10052fd8c;
      }
      __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                (&plStack_df0,*plVar10,(int)plVar10[1],&UNK_10b216a10);
      lStack_ca8 = lStack_da8;
      lStack_cb0 = lStack_db0;
      lStack_c98 = lStack_d98;
      lStack_ca0 = lStack_da0;
      lStack_c88 = lStack_d88;
      lStack_c90 = lStack_d90;
      puStack_ce8 = puStack_de8;
      plStack_cf0 = plStack_df0;
      plStack_cd8 = plStack_dd8;
      plStack_ce0 = plStack_de0;
      lStack_cc8 = lStack_dc8;
      lStack_cd0 = lStack_dd0;
      lStack_cb8 = lStack_db8;
      lStack_cc0 = lStack_dc0;
      plVar10[0xe] = lStack_db8;
      plVar10[0xd] = lStack_dc0;
      plVar10[0x10] = lStack_da8;
      plVar10[0xf] = lStack_db0;
      plVar10[0x12] = lStack_d98;
      plVar10[0x11] = lStack_da0;
      plVar10[0x14] = lStack_d88;
      plVar10[0x13] = lStack_d90;
      plVar10[8] = (long)puStack_de8;
      plVar10[7] = (long)plStack_df0;
      plVar10[10] = (long)plStack_dd8;
      plVar10[9] = (long)plStack_de0;
      plVar10[0xc] = lStack_dc8;
      plVar10[0xb] = lStack_dd0;
    }
    else if (bVar15 != 3) goto LAB_10052ff64;
    uVar13 = func_0x000106114748(plVar10 + 7,puVar11);
    if ((uVar13 & 1) != 0) {
      uVar7 = 2;
      uVar14 = 3;
      goto LAB_10052ff38;
    }
    FUN_100de8a5c(plVar10 + 7);
LAB_10052fdb0:
    uVar7 = 0;
  }
  else {
    if (bVar15 == 4) {
LAB_10052fd8c:
      iVar6 = func_0x000106114748(plVar10 + 7,puVar11);
      if (iVar6 != 0) {
        uVar7 = 2;
        uVar14 = 4;
        goto LAB_10052ff38;
      }
      FUN_100de8a5c(plVar10 + 7);
      goto LAB_10052fdb0;
    }
    if (bVar15 != 5) {
      pbVar19 = (byte *)plVar10[0x20];
      plVar17 = (long *)plVar10[0x21];
LAB_10052fbdc:
      lVar16 = (*
               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
               )();
      if (*(char *)(lVar16 + 0x48) == '\x01') {
LAB_10052fc1c:
        if (*(char *)(lVar16 + 0x44) != '\x01' || *(char *)(lVar16 + 0x45) != '\0')
        goto LAB_10052fc30;
        FUN_10610bbb4(*(undefined8 *)*puVar11,((undefined8 *)*puVar11)[1]);
      }
      else {
        if (*(char *)(lVar16 + 0x48) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar16,&DAT_100c35d48);
          *(undefined1 *)(lVar16 + 0x48) = 1;
          goto LAB_10052fc1c;
        }
LAB_10052fc30:
        if ((*pbVar19 & 1) == 0) {
          uVar13 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                             (plVar17,puVar11);
          if ((uVar13 & 1) == 0) {
            iVar6 = 0;
            bVar15 = *pbVar19 | 1;
LAB_10052feb4:
            *pbVar19 = bVar15;
LAB_10052feb8:
            plStack_cf0 = (long *)plVar10[10];
            puStack_ce8 = (ulong *)(plVar10 + 0x11);
            plStack_ce0 = plVar10 + 0xb;
            plStack_cd8 = plVar10 + 0xc;
            FUN_1060fb5d4(&plStack_cf0);
            if (plVar10[0xe] != 0) {
              (**(code **)(plVar10[0xe] + 0x18))(plVar10[0xf]);
            }
            FUN_100de8a5c(plVar10 + 0x12);
            if (iVar6 == 0) {
              uVar7 = 1;
            }
            else {
              if (iVar6 != 1) {
LAB_10052ff70:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca2bde,0x6b,&UNK_10b216a70);
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10052ff8c);
                (*pcVar5)();
              }
              uVar7 = 0;
            }
            __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                      (plVar10 + 8);
            lVar16 = *(long *)plVar10[8];
            *(long *)plVar10[8] = lVar16 + -1;
            LORelease();
            if (lVar16 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar10 + 8);
            }
            goto LAB_10052ff34;
          }
          if ((*pbVar19 >> 1 & 1) == 0) goto LAB_10052fd00;
        }
        else {
          if ((*pbVar19 >> 1 & 1) != 0) {
            iVar6 = 2;
            goto LAB_10052feb8;
          }
LAB_10052fd00:
          uVar13 = func_0x000106114748(plVar17 + 9,puVar11);
          if ((uVar13 & 1) == 0) {
            bVar15 = *pbVar19 | 2;
            iVar6 = 1;
            goto LAB_10052feb4;
          }
        }
      }
      uVar7 = 2;
      uVar14 = 6;
      goto LAB_10052ff38;
    }
LAB_10052faf8:
    uVar13 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                       (plVar10 + 8,puVar11);
    if ((uVar13 & 1) != 0) {
      uVar7 = 2;
      uVar14 = 5;
      goto LAB_10052ff38;
    }
    plStack_df0 = (long *)plVar10[9];
    puStack_de8 = (ulong *)(plVar10 + 0x10);
    plStack_de0 = plVar10 + 10;
    plStack_dd8 = plVar10 + 0xb;
    FUN_1060fb5d4(&plStack_df0);
    if (plVar10[0xd] != 0) {
      (**(code **)(plVar10[0xd] + 0x18))(plVar10[0xe]);
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (plVar10 + 7);
    lVar16 = *(long *)plVar10[7];
    *(long *)plVar10[7] = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar10 + 7);
    }
    uVar7 = 1;
  }
LAB_10052ff34:
  uVar14 = 1;
LAB_10052ff38:
  *(undefined1 *)(plVar10 + 6) = uVar14;
  return uVar7;
code_r0x00010052f80c:
  uVar20 = puVar12[0x28];
  uVar4 = puVar12[0x25] - uVar20;
  if (uVar20 <= (ulong)puVar12[0x25] && uVar4 != 0) {
    if (uVar4 <= uVar13) {
      uVar13 = uVar4;
    }
    if (puVar12[0x26] - uVar20 < uVar13) {
      thunk_FUN_108855060(puVar12 + 0x26,uVar20,uVar13,1,1);
LAB_10052f9b0:
      uVar20 = puVar12[0x28];
    }
LAB_10052f870:
    _memcpy(puVar12[0x27] + uVar20,puVar12 + 0x29,uVar13);
    puVar12[0x28] = uVar20 + uVar13;
  }
  goto LAB_10052f6bc;
}

