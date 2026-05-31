
undefined8 * FUN_10075fff0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar20 [16];
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
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
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
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
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar3 = *(byte *)(param_1 + 3);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b2219c0);
      }
      FUN_107c05cc4();
      *(undefined1 *)(param_1 + 3) = 2;
      uVar7 = __Unwind_Resume();
      *(undefined1 *)(param_1 + 6) = 0;
      lVar12 = *(long *)param_1[2];
      *(long *)param_1[2] = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
      }
      *(undefined1 *)(param_1 + 3) = 2;
      __Unwind_Resume(uVar7);
      auVar20 = FUN_107c05ccc();
      puVar6 = auVar20._8_8_;
      plVar8 = auVar20._0_8_;
      bVar3 = *(byte *)(puVar6 + 2);
      if (bVar3 < 3) {
        if (bVar3 != 0) {
          if (bVar3 == 1) {
            FUN_107c05cc0(&UNK_10b2219d8);
          }
          FUN_107c05cc4();
          *(undefined1 *)(puVar6 + 2) = 2;
          uVar7 = __Unwind_Resume();
          lVar12 = *(long *)puVar6[1];
          *(long *)puVar6[1] = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
          }
          *(undefined1 *)(puVar6 + 2) = 2;
          __Unwind_Resume(uVar7);
          auVar20 = FUN_107c05ccc();
          plVar8 = auVar20._8_8_;
          puVar6 = auVar20._0_8_;
          bVar3 = *(byte *)(plVar8 + 0x32e);
          if (bVar3 < 2) {
            if (bVar3 != 0) {
              FUN_107c05cc0(&UNK_10b2219f0);
LAB_10076085c:
              FUN_107c03c64(1,unaff_x22);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10076086c);
              (*pcVar5)();
            }
            param_3 = plVar8 + 1;
            lVar12 = *plVar8;
            __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E(param_3,lVar12)
            ;
            unaff_x23 = *(undefined8 *)(lVar12 + 0x1c00);
            unaff_x22 = *(long *)(lVar12 + 0x1c08);
            if (unaff_x22 == 0) goto LAB_1007606dc;
            lVar12 = _malloc(unaff_x22);
            if (lVar12 == 0) goto LAB_10076085c;
          }
          else {
            if (bVar3 == 3) goto LAB_10076071c;
            FUN_107c05cc4(&UNK_10b2219f0);
LAB_1007606dc:
            lVar12 = 1;
          }
          _memcpy(lVar12,unaff_x23,unaff_x22);
          lStack_488 = unaff_x22;
          lStack_480 = lVar12;
          lStack_478 = unaff_x22;
          __ZN18codex_core_plugins7manager14PluginsManager28new_with_restriction_product17hc4ed87e9f89ea398E
                    (plVar8 + 0x131,&lStack_488,1);
          plVar8[0x191] = (long)(plVar8 + 0x131);
          plVar8[0x192] = (long)param_3;
          *(undefined1 *)(plVar8 + 0x32d) = 0;
LAB_10076071c:
          puVar9 = (undefined8 *)FUN_100a7ebb0(&lStack_488,plVar8 + 0x191);
          lVar12 = lStack_478;
          lVar4 = lStack_480;
          lVar13 = lStack_488;
          if (lStack_488 == -0x8000000000000000) {
            *puVar6 = 0x8000000000000000;
            uVar10 = 3;
          }
          else {
            if (((char)plVar8[0x32d] == '\x03') && (*(char *)((long)plVar8 + 0x1962) == '\x03')) {
              FUN_100cb9114(plVar8 + 0x197);
              if (plVar8[0x194] != 0) {
                _free(plVar8[0x195]);
              }
              *(undefined1 *)((long)plVar8 + 0x1961) = 0;
            }
            FUN_10074c87c(&uStack_458,lVar4,lVar12);
            lVar2 = lVar4;
            for (; lVar12 != 0; lVar12 = lVar12 + -1) {
              FUN_100cc1c58(lVar2);
              lVar2 = lVar2 + 0x140;
            }
            lVar12 = lStack_468;
            if (lVar13 != 0) {
              _free(lVar4);
            }
            for (; lStack_460 != 0; lStack_460 = lStack_460 + -1) {
              FUN_100e0649c(lVar12);
              lVar12 = lVar12 + 0x80;
            }
            if (lStack_470 != 0) {
              _free(lStack_468);
            }
            FUN_100e1955c(plVar8 + 0x131);
            puVar9 = (undefined8 *)FUN_100e05b5c(plVar8 + 1);
            if (plVar8[0x12d] != 0) {
              puVar9 = (undefined8 *)_free(plVar8[0x12e]);
            }
            puVar6[1] = uStack_450;
            *puVar6 = uStack_458;
            puVar6[2] = uStack_448;
            uVar10 = 1;
          }
          *(undefined1 *)(plVar8 + 0x32e) = uVar10;
          return puVar9;
        }
        puVar6[0x178] = *puVar6;
        *(undefined2 *)(puVar6 + 0x179) = 0;
LAB_100760340:
        lVar12 = FUN_1006d95b0(puVar6 + 3,param_3);
        if (lVar12 == 0) {
          *plVar8 = -0x7ffffffffffffffc;
          uVar10 = 3;
          puVar9 = (undefined8 *)0x0;
          goto LAB_100760534;
        }
        puVar6[1] = lVar12;
        if (*(char *)(puVar6 + 0x179) == '\x03') {
          if (*(char *)((long)puVar6 + 0xbb2) == '\x03') {
            func_0x000100e78740(puVar6 + 9);
          }
          else if (*(char *)((long)puVar6 + 0xbb2) == '\0') {
            if (puVar6[3] != 0) {
              _free(puVar6[4]);
            }
            if ((puVar6[6] != -0x8000000000000000) && (puVar6[6] != 0)) {
              _free(puVar6[7]);
            }
          }
        }
        puVar6[4] = puVar6[1] + 0x10;
        *(undefined1 *)((long)puVar6 + 0x29) = 0;
      }
      else if (bVar3 == 3) goto LAB_100760340;
      puVar9 = (undefined8 *)FUN_1006dd9c8(&lStack_358,puVar6 + 3,param_3);
      if (lStack_358 == -0x7ffffffffffffffc) {
        *plVar8 = -0x7ffffffffffffffc;
        uVar10 = 4;
        goto LAB_100760534;
      }
      lStack_258 = lStack_2e0;
      lStack_260 = lStack_2e8;
      lStack_248 = lStack_2d0;
      lStack_250 = lStack_2d8;
      lStack_240 = lStack_2c8;
      lStack_298 = lStack_320;
      lStack_2a0 = lStack_328;
      lStack_288 = lStack_310;
      lStack_290 = lStack_318;
      lStack_278 = lStack_300;
      lStack_280 = lStack_308;
      lStack_268 = lStack_2f0;
      lStack_270 = lStack_2f8;
      lStack_2b8 = lStack_340;
      lStack_2c0 = lStack_348;
      lStack_2a8 = lStack_330;
      lStack_2b0 = lStack_338;
      if (*(char *)((long)puVar6 + 0x29) == '\x04') {
        FUN_100cab424(puVar6 + 0x19);
        FUN_100e0609c(puVar6 + 6);
        *(undefined1 *)(puVar6 + 5) = 0;
        if (lStack_358 == -0x7ffffffffffffffd) goto LAB_100760454;
LAB_10076048c:
        lStack_378 = lStack_258;
        lStack_380 = lStack_260;
        lStack_368 = lStack_248;
        lStack_370 = lStack_250;
        lStack_360 = lStack_240;
        lStack_3b8 = lStack_298;
        lStack_3c0 = lStack_2a0;
        lStack_3a8 = lStack_288;
        lStack_3b0 = lStack_290;
        lStack_398 = lStack_278;
        lStack_3a0 = lStack_280;
        lStack_388 = lStack_268;
        lStack_390 = lStack_270;
        lStack_3d8 = lStack_2b8;
        lStack_3e0 = lStack_2c0;
        lStack_3c8 = lStack_2a8;
        lStack_3d0 = lStack_2b0;
        lStack_3f0 = lStack_358;
        lStack_3e8 = lStack_350;
        if (lStack_358 == -0x8000000000000000) {
          lVar12 = FUN_107c058fc(&UNK_108cacf86,0x2d);
          FUN_100e0609c(&lStack_3f0);
          goto LAB_1007604e0;
        }
        lStack_1c8 = lStack_258;
        lStack_1d0 = lStack_260;
        lStack_1b8 = lStack_248;
        lStack_1c0 = lStack_250;
        lStack_1b0 = lStack_240;
        lStack_208 = lStack_298;
        lStack_210 = lStack_2a0;
        lStack_1f8 = lStack_288;
        lStack_200 = lStack_290;
        lStack_1e8 = lStack_278;
        lStack_1f0 = lStack_280;
        lStack_1d8 = lStack_268;
        lStack_1e0 = lStack_270;
        lStack_228 = lStack_2b8;
        lStack_230 = lStack_2c0;
        lStack_218 = lStack_2a8;
        lStack_220 = lStack_2b0;
        puVar9 = puVar6 + 1;
        lVar12 = *(long *)*puVar9;
        *(long *)*puVar9 = lVar12 + -1;
        LORelease();
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          puVar9 = (undefined8 *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
        }
      }
      else {
        if (*(char *)((long)puVar6 + 0x29) == '\x03') {
          FUN_100ce72d8(puVar6 + 6);
        }
        if (lStack_358 != -0x7ffffffffffffffd) goto LAB_10076048c;
LAB_100760454:
        lVar12 = FUN_107c058fc(&UNK_108cacfb3,0x1a);
LAB_1007604e0:
        puVar9 = puVar6 + 1;
        lVar13 = *(long *)*puVar9;
        *(long *)*puVar9 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          puVar9 = (undefined8 *)__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
        }
        lStack_358 = -0x7ffffffffffffffd;
        lStack_350 = lVar12;
      }
      *plVar8 = lStack_358;
      plVar8[1] = lStack_350;
      plVar8[0xf] = lStack_1c8;
      plVar8[0xe] = lStack_1d0;
      plVar8[0x11] = lStack_1b8;
      plVar8[0x10] = lStack_1c0;
      plVar8[0x12] = lStack_1b0;
      plVar8[7] = lStack_208;
      plVar8[6] = lStack_210;
      plVar8[9] = lStack_1f8;
      plVar8[8] = lStack_200;
      plVar8[0xb] = lStack_1e8;
      plVar8[10] = lStack_1f0;
      plVar8[0xd] = lStack_1d8;
      plVar8[0xc] = lStack_1e0;
      uVar10 = 1;
      plVar8[3] = lStack_228;
      plVar8[2] = lStack_230;
      plVar8[5] = lStack_218;
      plVar8[4] = lStack_220;
LAB_100760534:
      *(undefined1 *)(puVar6 + 2) = uVar10;
      return puVar9;
    }
    param_1[1] = *param_1;
    param_1[0x179] = *param_1;
    *(undefined2 *)(param_1 + 0x17a) = 0;
LAB_100760038:
    lVar12 = FUN_1006d95b0(param_1 + 4,param_2);
    if (lVar12 == 0) {
      puVar6 = (undefined8 *)0x2;
      uVar10 = 3;
      goto LAB_100760230;
    }
    param_1[2] = lVar12;
    if (*(char *)(param_1 + 0x17a) == '\x03') {
      if (*(char *)((long)param_1 + 0xbba) == '\x03') {
        func_0x000100e78740(param_1 + 10);
      }
      else if (*(char *)((long)param_1 + 0xbba) == '\0') {
        if (param_1[4] != 0) {
          _free(param_1[5]);
        }
        if ((param_1[7] != -0x8000000000000000) && (param_1[7] != 0)) {
          _free(param_1[8]);
        }
      }
    }
    param_1[5] = param_1[2] + 0x10;
    *(undefined1 *)((long)param_1 + 0x31) = 0;
  }
  else if (bVar3 == 3) goto LAB_100760038;
  FUN_1006dd9c8(&uStack_c8,param_1 + 4,param_2);
  if (uStack_c8 == 0x8000000000000004) {
    puVar6 = (undefined8 *)0x2;
    uVar10 = 4;
  }
  else {
    uStack_f8 = uStack_60;
    uStack_100 = uStack_68;
    uStack_e8 = uStack_50;
    uStack_f0 = uStack_58;
    uStack_d8 = uStack_40;
    uStack_e0 = uStack_48;
    uStack_d0 = uStack_38;
    uStack_138 = uStack_a0;
    uStack_140 = uStack_a8;
    uStack_128 = uStack_90;
    uStack_130 = uStack_98;
    uStack_118 = uStack_80;
    uStack_120 = uStack_88;
    uStack_108 = uStack_70;
    uStack_110 = uStack_78;
    uStack_158 = uStack_c0;
    uStack_160 = uStack_c8;
    uStack_148 = uStack_b0;
    uStack_150 = uStack_b8;
    if (*(char *)((long)param_1 + 0x31) == '\x04') {
      FUN_100cab424(param_1 + 0x1a);
      FUN_100e0609c(param_1 + 7);
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else if (*(char *)((long)param_1 + 0x31) == '\x03') {
      FUN_100ce72d8(param_1 + 7);
    }
    uVar11 = 0;
    if (uStack_160 != 0x8000000000000003) {
      uVar11 = (uint)(uStack_160 < 0x8000000000000000 || uStack_160 + 0x7fffffffffffffff < 3);
    }
    lVar12 = *(long *)(param_1[1] + 0x2388);
    if (lVar12 != 0) {
      lVar13 = *(long *)(param_1[1] + 0x2390);
      do {
        uVar16 = (ulong)*(ushort *)(lVar12 + 10);
        uVar14 = 0xffffffffffffffff;
        pbVar15 = (byte *)(lVar12 + 0xc);
        uVar17 = uVar16;
        do {
          if (uVar17 == 0) goto LAB_1007601d0;
          cVar1 = *pbVar15 < 0x17;
          if (0x17 < *pbVar15) {
            cVar1 = -1;
          }
          uVar17 = uVar17 - 1;
          uVar14 = uVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while (cVar1 == '\x01');
        uVar16 = uVar14;
        if (cVar1 == '\0') {
          uVar19 = 1;
          uVar18 = 1;
          goto joined_r0x0001007601ec;
        }
LAB_1007601d0:
        if (lVar13 == 0) break;
        lVar12 = *(long *)(lVar12 + uVar16 * 8 + 0x18);
        lVar13 = lVar13 + -1;
      } while( true );
    }
    uVar19 = 0;
    uVar18 = 0;
joined_r0x0001007601ec:
    if (uStack_160 != 0x8000000000000003) {
      FUN_100e0609c(&uStack_160);
      uVar18 = uVar19;
    }
    lVar12 = *(long *)param_1[2];
    *(long *)param_1[2] = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
    puVar6 = (undefined8 *)(ulong)(uVar11 & uVar18);
    uVar10 = 1;
  }
LAB_100760230:
  *(undefined1 *)(param_1 + 3) = uVar10;
  return puVar6;
}

