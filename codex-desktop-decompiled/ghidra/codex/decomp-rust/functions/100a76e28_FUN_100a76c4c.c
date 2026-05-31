
void FUN_100a76c4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined1 *puStack_3c0;
  ulong *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  undefined *puStack_388;
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
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  bVar2 = *(byte *)((long)param_2 + 0x662);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar11 = param_2[0xca];
      param_2[0xc2] = lVar11;
      uVar19 = param_2[0xcb];
      param_2[0xc3] = uVar19;
      bVar2 = *(byte *)((long)param_2 + 0x663);
      *(byte *)(param_2 + 0xcc) = bVar2;
      puVar21 = (undefined *)*param_2;
      uVar15 = param_2[1];
      param_2[2] = puVar21;
      param_2[3] = uVar15;
      param_2[0xc4] = 0;
      param_2[0xc5] = 8;
      *(undefined1 *)((long)param_2 + 0x661) = 1;
      param_2[199] = 0x8000000000000000;
      param_2[0xc6] = 0;
      puVar18 = (undefined *)param_2[200];
      lVar16 = -0x8000000000000000;
      uVar25 = param_2[0xc9];
      do {
        puVar17 = (undefined *)0x0;
        if (lVar16 != -0x8000000000000000) {
          puVar17 = puVar18;
        }
        param_2[4] = puVar17;
        param_2[5] = uVar25;
        param_2[6] = puVar21;
        param_2[7] = uVar15;
        param_2[0xbf] = lVar11;
        param_2[0xc0] = uVar19;
        *(undefined1 *)((long)param_2 + 0x609) = 0;
        *(byte *)((long)param_2 + 0x60a) = bVar2;
LAB_100a76d84:
        *(undefined1 *)(param_2 + 0xc1) = 0;
        uVar1 = *(ulong *)(lVar11 + 8);
        lVar11 = *(long *)(lVar11 + 0x10);
        do {
          lVar16 = lVar11;
          if (lVar16 == 0) break;
          lVar11 = uVar1 + lVar16;
          pbVar13 = (byte *)(lVar11 + -1);
          uVar12 = (uint)(char)*pbVar13;
          if ((int)uVar12 < 0) {
            pbVar13 = (byte *)(lVar11 + -2);
            bVar3 = *pbVar13;
            if ((char)bVar3 < -0x40) {
              pbVar13 = (byte *)(lVar11 + -3);
              bVar4 = *pbVar13;
              if ((char)bVar4 < -0x40) {
                pbVar13 = (byte *)(lVar11 + -4);
                uVar14 = bVar4 & 0x3f | (*pbVar13 & 7) << 6;
              }
              else {
                uVar14 = (int)(char)bVar4 & 0xf;
              }
              uVar14 = bVar3 & 0x3f | uVar14 << 6;
            }
            else {
              uVar14 = (int)(char)bVar3 & 0x1f;
            }
            uVar12 = uVar12 & 0x3f | uVar14 << 6;
          }
          lVar11 = (long)pbVar13 - uVar1;
        } while (uVar12 == 0x2f);
        puStack_2a8 = param_2 + 8;
        *puStack_2a8 = uVar1;
        param_2[9] = lVar16;
        puStack_2a0 = &DAT_100c7b3a0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&puStack_198,s__ps_plugins_list_108acf370,&puStack_2a8);
        param_2[0xb] = puStack_190;
        param_2[10] = puStack_198;
        param_2[0xc] = puStack_188;
        uVar7 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E();
        param_2[0xd] = uVar7;
        FUN_1011d51fc(&puStack_198,uVar7,&UNK_108ca1660,param_2[0xb],param_2[0xc]);
        __ZN18codex_core_plugins6remote21authenticated_request17h250c66f122829838E
                  (&puStack_2a8,&puStack_198,uVar19);
        uVar7 = uStack_270;
        puVar18 = puStack_278;
        lVar16 = lStack_280;
        puVar22 = puStack_288;
        puVar20 = puStack_290;
        puVar23 = puStack_298;
        puVar24 = puStack_2a0;
        if (puStack_2a8 == (ulong *)0x3) {
          *(undefined1 *)(param_2 + 0xc1) = 0;
          lVar11 = *(long *)param_2[0xd];
          *(long *)param_2[0xd] = lVar11 + -1;
          LORelease();
          if (lVar11 == 1) {
            DataMemoryBarrier(2,1);
            func_0x000105c30fe4(param_2 + 0xd);
          }
          if (param_2[10] != 0) {
LAB_100a77174:
            _free(param_2[0xb]);
          }
          puStack_3c0 = (undefined1 *)((long)param_2 + 0x609);
          *puStack_3c0 = 1;
          if (puVar24 == (undefined *)0x8000000000000015) {
LAB_100a77314:
            *param_1 = 0x8000000000000015;
            uVar10 = 3;
            goto LAB_100a77328;
          }
        }
        else {
          uStack_2d0 = uStack_1c0;
          uStack_2d8 = uStack_1c8;
          uStack_2c0 = uStack_1b0;
          uStack_2c8 = uStack_1b8;
          uStack_2b0 = uStack_1a0;
          uStack_2b8 = uStack_1a8;
          uStack_310 = uStack_200;
          uStack_318 = uStack_208;
          uStack_300 = uStack_1f0;
          uStack_308 = uStack_1f8;
          uStack_2e0 = uStack_1d0;
          uStack_2e8 = uStack_1d8;
          uStack_2f0 = uStack_1e0;
          uStack_2f8 = uStack_1e8;
          uStack_350 = uStack_240;
          uStack_358 = uStack_248;
          uStack_340 = uStack_230;
          uStack_348 = uStack_238;
          uStack_320 = uStack_210;
          uStack_328 = uStack_218;
          uStack_330 = uStack_220;
          uStack_338 = uStack_228;
          uStack_360 = uStack_250;
          uStack_368 = uStack_258;
          uStack_370 = uStack_260;
          uStack_378 = uStack_268;
          puStack_3a8 = puStack_298;
          puStack_3a0 = puStack_290;
          puStack_398 = puStack_288;
          lStack_390 = lStack_280;
          puStack_388 = puStack_278;
          uStack_380 = uStack_270;
          puStack_3b8 = puStack_2a8;
          puStack_3b0 = puStack_2a0;
          *(undefined1 *)(param_2 + 0xc1) = 0;
          _memcpy(&puStack_198,&puStack_3b8,0x110);
          bVar6 = (bVar2 & 1) == 0;
          uStack_70 = 9;
          if (bVar6) {
            uStack_70 = 6;
          }
          puStack_88 = &UNK_108ca1394;
          uStack_80 = 5;
          puStack_78 = &UNK_108cb690a;
          if (bVar6) {
            puStack_78 = &UNK_108cb6904;
          }
          FUN_1011d5dc4(&puStack_2a8,&puStack_198,&puStack_88);
          _memcpy(&puStack_3b8,&puStack_2a8,0x110);
          *(undefined1 *)(param_2 + 0xc1) = 0;
          _memcpy(&puStack_198,&puStack_3b8,0x110);
          FUN_1011d604c(&puStack_2a8,&puStack_198);
          *(undefined1 *)(param_2 + 0xc1) = 1;
          _memcpy(&puStack_3b8,&puStack_2a8,0x110);
          if (puVar21 != (undefined *)0x0) {
            *(undefined1 *)(param_2 + 0xc1) = 0;
            _memcpy(&puStack_198,&puStack_3b8,0x110);
            puStack_88 = &UNK_108cb6aaa;
            uStack_80 = 10;
            puStack_78 = puVar21;
            uStack_70 = uVar15;
            FUN_1011d5dc4(&puStack_2a8,&puStack_198,&puStack_88);
            *(undefined1 *)(param_2 + 0xc1) = 1;
            _memcpy(&puStack_3b8,&puStack_2a8,0x110);
          }
          if (puVar17 != (undefined *)0x0) {
            *(undefined1 *)(param_2 + 0xc1) = 0;
            _memcpy(&puStack_198,&puStack_3b8,0x110);
            puStack_88 = &UNK_108cb6ab4;
            uStack_80 = 9;
            puStack_78 = puVar17;
            uStack_70 = uVar25;
            FUN_1011d5dc4(&puStack_2a8,&puStack_198,&puStack_88);
            *(undefined1 *)(param_2 + 0xc1) = 1;
            _memcpy(&puStack_3b8,&puStack_2a8,0x110);
          }
          *(undefined1 *)(param_2 + 0xc1) = 0;
          uVar15 = param_2[0xb];
          uVar25 = param_2[0xc];
          _memcpy(param_2 + 0xe,&puStack_3b8,0x110);
          param_2[0x30] = uVar15;
          param_2[0x31] = uVar25;
          *(undefined1 *)(param_2 + 0x34) = 0;
LAB_100a77104:
          puStack_3c0 = (undefined1 *)((long)param_2 + 0x609);
          func_0x000100a6f910(&puStack_198,param_2 + 0xe,param_3);
          uVar7 = uStack_168;
          puVar18 = puStack_170;
          lVar16 = lStack_178;
          if (puStack_198 == (undefined *)0x8000000000000015) {
            *puStack_3c0 = 3;
            goto LAB_100a77314;
          }
          FUN_100d534e0(param_2 + 0xe);
          *(undefined1 *)(param_2 + 0xc1) = 0;
          lVar11 = *(long *)param_2[0xd];
          *(long *)param_2[0xd] = lVar11 + -1;
          LORelease();
          if (lVar11 == 1) {
            DataMemoryBarrier(2,1);
            func_0x000105c30fe4();
          }
          puVar20 = puStack_188;
          puVar22 = puStack_180;
          puVar23 = puStack_190;
          puVar24 = puStack_198;
          if (param_2[10] != 0) goto LAB_100a77174;
          *puStack_3c0 = 1;
        }
        FUN_100caf154(param_2 + 4);
        if (puVar24 != (undefined *)0x8000000000000014) {
          if ((param_2[199] != -0x8000000000000000) && (param_2[199] != 0)) {
            _free(param_2[200]);
          }
          lVar8 = param_2[0xc5];
          lVar11 = param_2[0xc6] + 1;
          lVar9 = lVar8;
          while (lVar11 = lVar11 + -1, lVar11 != 0) {
            FUN_100e38a40(lVar9);
            lVar9 = lVar9 + 0x2c0;
          }
          if (param_2[0xc4] != 0) {
            _free(lVar8);
          }
          *(undefined1 *)((long)param_2 + 0x661) = 0;
          goto LAB_100a772ec;
        }
        puStack_180 = puVar20 + (long)puVar22 * 0x2c0;
        lVar11 = param_2[0xc6];
        puStack_198 = puVar20;
        puStack_190 = puVar20;
        puStack_188 = puVar23;
        if ((undefined *)(param_2[0xc4] - lVar11) < puVar22) {
          FUN_108855060(param_2 + 0xc4,lVar11,puVar22,8,0x2c0);
          lVar11 = param_2[0xc6];
        }
        _memcpy(param_2[0xc5] + lVar11 * 0x2c0,puVar20,(long)puVar22 * 0x2c0);
        param_2[0xc6] = puVar22 + lVar11;
        puStack_180 = puVar20;
        if (puVar23 != (undefined *)0x0) {
          _free(puVar20);
        }
        if (lVar16 == -0x8000000000000000) {
          *(undefined1 *)((long)param_2 + 0x661) = 0;
          puVar23 = (undefined *)param_2[0xc4];
          puVar20 = (undefined *)param_2[0xc5];
          puVar22 = (undefined *)param_2[0xc6];
          if ((param_2[199] != -0x8000000000000000) && (param_2[199] != 0)) {
            _free(param_2[200]);
          }
          *(undefined1 *)((long)param_2 + 0x661) = 0;
LAB_100a772ec:
          *param_1 = puVar24;
          param_1[1] = puVar23;
          param_1[2] = puVar20;
          param_1[3] = puVar22;
          param_1[4] = lVar16;
          param_1[5] = puVar18;
          uVar10 = 1;
          param_1[6] = uVar7;
LAB_100a77328:
          *(undefined1 *)((long)param_2 + 0x662) = uVar10;
          return;
        }
        if ((param_2[199] != -0x8000000000000000) && (param_2[199] != 0)) {
          _free(param_2[200]);
        }
        param_2[199] = lVar16;
        param_2[200] = puVar18;
        param_2[0xc9] = uVar7;
        lVar11 = param_2[0xc2];
        uVar19 = param_2[0xc3];
        bVar2 = *(byte *)(param_2 + 0xcc);
        puVar21 = (undefined *)param_2[2];
        uVar15 = param_2[3];
        uVar25 = uVar7;
      } while( true );
    }
    func_0x000108a07af4(&UNK_10b22bf48);
LAB_100a76d34:
    func_0x000108a07b10(&UNK_10b22bf48);
  }
  else {
    if (bVar2 != 3) goto LAB_100a76d34;
    bVar2 = *(byte *)((long)param_2 + 0x609);
    if (1 < bVar2) {
      if (bVar2 == 3) goto LAB_100a77104;
      func_0x000108a07b10(&UNK_10b22bd98);
      goto LAB_100a76d4c;
    }
    if (bVar2 == 0) {
      lVar11 = param_2[0xbf];
      uVar19 = param_2[0xc0];
      bVar2 = *(byte *)((long)param_2 + 0x60a);
      puVar17 = (undefined *)param_2[4];
      uVar25 = param_2[5];
      puVar21 = (undefined *)param_2[6];
      uVar15 = param_2[7];
      goto LAB_100a76d84;
    }
  }
  func_0x000108a07af4(&UNK_10b22bd98);
LAB_100a76d4c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a76d50);
  (*pcVar5)();
}

