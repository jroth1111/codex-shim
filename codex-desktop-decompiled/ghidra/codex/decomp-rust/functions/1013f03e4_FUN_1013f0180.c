
void FUN_1013f0180(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  long lStack_2f9;
  char cStack_2e8;
  undefined7 uStack_2e7;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  char cStack_2c0;
  undefined8 uStack_2bf;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  char cStack_268;
  undefined8 uStack_267;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1f0;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 uStack_188;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  char acStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plVar12;
  
  plVar8 = *(long **)(param_2 + 8);
  plVar9 = *(long **)(param_2 + 0x18);
  uVar5 = ((ulong)((long)plVar9 - (long)plVar8) >> 3) * -0x71c71c71c71c71c7;
  if (0x7fff < uVar5) {
    uVar5 = 0x8000;
  }
  if (plVar9 == plVar8) {
    uStack_108 = 0;
    lStack_100 = 8;
    uStack_f8 = 0;
  }
  else {
    lStack_100 = _malloc(uVar5 << 5);
    if (lStack_100 == 0) {
      uVar3 = func_0x0001087c9084(8,uVar5 << 5);
      FUN_100e077ec(&cStack_f0);
      FUN_100e4a7d4(&uStack_108);
      __Unwind_Resume(uVar3);
      auVar14 = func_0x000108a07bc4();
      lVar10 = auVar14._8_8_;
      plVar9 = auVar14._0_8_;
      lStack_358 = 0;
      lStack_350 = 8;
      lStack_348 = 0;
      uVar3 = *(undefined8 *)(lVar10 + 0x28);
      lVar6 = *(long *)(lVar10 + 0x30);
      *(long *)(lVar10 + 0x30) = lVar6 + 1;
      plVar8 = *(long **)(lVar10 + 0x18);
      uVar2 = *(undefined8 *)(lVar10 + 0x20);
      if (*(long **)(lVar10 + 8) != plVar8) {
        puVar13 = (undefined8 *)((ulong)&cStack_2e8 | 1);
        plVar11 = *(long **)(lVar10 + 8);
        do {
          plVar12 = plVar11 + 0xc;
          lVar7 = *plVar11;
          *(long **)(lVar10 + 8) = plVar12;
          if (lVar7 == -0x7ffffffffffffffa) break;
          lStack_1c8 = plVar11[4];
          uStack_1d0 = (undefined7)plVar11[3];
          uStack_1c9 = (undefined1)((ulong)plVar11[3] >> 0x38);
          lStack_1b8 = plVar11[6];
          lStack_1c0 = plVar11[5];
          lStack_1a8 = plVar11[8];
          lStack_1b0 = plVar11[7];
          lStack_1a0 = plVar11[9];
          uStack_1d8 = (undefined7)plVar11[2];
          uStack_1d1 = (undefined1)((ulong)plVar11[2] >> 0x38);
          uStack_1e0 = (undefined7)plVar11[1];
          uStack_1d9 = (undefined1)((ulong)plVar11[1] >> 0x38);
          uStack_218 = 1;
          uStack_1e8 = (undefined7)lVar7;
          uStack_1e1 = (undefined1)((ulong)lVar7 >> 0x38);
          lStack_190 = plVar11[0xb];
          lStack_198 = plVar11[10];
          uStack_188 = 0;
          lStack_210 = lVar6;
          uStack_208 = uVar2;
          uStack_1f0 = uVar3;
          FUN_10155fa60(&lStack_270,&uStack_218,&uStack_1e8);
          lVar7 = lStack_348;
          uStack_310 = uStack_267;
          uStack_308 = uStack_25f;
          lStack_2f9 = lStack_250;
          uStack_301 = uStack_258;
          uStack_300 = uStack_257;
          if (lStack_270 != 2) {
            lStack_338 = lStack_240;
            lStack_340 = lStack_248;
            lStack_328 = lStack_230;
            lStack_330 = lStack_238;
            lStack_318 = lStack_220;
            lStack_320 = lStack_228;
            lStack_2c8 = lStack_270;
            cStack_2c0 = cStack_268;
            uStack_2bf = uStack_267;
            lStack_2a8 = lStack_250;
            lStack_288 = lStack_230;
            lStack_290 = lStack_238;
            lStack_278 = lStack_220;
            lStack_280 = lStack_228;
            lStack_298 = lStack_240;
            lStack_2a0 = lStack_248;
            __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(uVar3,uVar2);
            lVar7 = lStack_350;
            *(ulong *)((long)plVar9 + 0x11) = CONCAT17(uStack_301,uStack_308);
            *(undefined8 *)((long)plVar9 + 9) = uStack_310;
            plVar9[4] = lStack_2f9;
            plVar9[3] = CONCAT71(uStack_300,uStack_301);
            plVar9[6] = lStack_338;
            plVar9[5] = lStack_340;
            plVar9[8] = lStack_328;
            plVar9[7] = lStack_330;
            *plVar9 = lStack_270;
            *(char *)(plVar9 + 1) = cStack_268;
            lVar6 = lStack_348 + 1;
            plVar9[10] = lStack_318;
            plVar9[9] = lStack_320;
            lVar4 = lStack_350;
            while (lVar6 = lVar6 + -1, lVar6 != 0) {
              FUN_100e077ec(lVar4);
              lVar4 = lVar4 + 0x20;
            }
            if (lStack_358 != 0) {
              _free(lVar7);
            }
            goto LAB_1013f0580;
          }
          if (cStack_268 == '\x16') break;
          cStack_2e8 = cStack_268;
          puVar13[1] = CONCAT17(uStack_258,uStack_25f);
          *puVar13 = uStack_267;
          *(long *)((long)puVar13 + 0x17) = lStack_250;
          *(ulong *)((long)puVar13 + 0xf) = CONCAT71(uStack_257,uStack_258);
          if (lStack_348 == lStack_358) {
            func_0x000108a1efa8(&lStack_358);
          }
          puVar1 = (undefined8 *)(lStack_350 + lVar7 * 0x20);
          puVar1[1] = uStack_2e0;
          *puVar1 = CONCAT71(uStack_2e7,cStack_2e8);
          puVar1[3] = uStack_2d0;
          puVar1[2] = uStack_2d8;
          lStack_348 = lVar7 + 1;
          *(long *)(lVar10 + 0x30) = lVar6 + 2;
          lVar6 = lVar6 + 1;
          plVar11 = plVar12;
        } while (plVar12 != plVar8);
      }
      uStack_1d9 = (undefined1)lStack_350;
      uStack_1d8 = (undefined7)((ulong)lStack_350 >> 8);
      uStack_1e1 = (undefined1)lStack_358;
      uStack_1e0 = (undefined7)((ulong)lStack_358 >> 8);
      uStack_1d1 = (undefined1)lStack_348;
      uStack_1d0 = (undefined7)((ulong)lStack_348 >> 8);
      *(undefined1 *)(plVar9 + 1) = 0x14;
      *(ulong *)((long)plVar9 + 0x11) = CONCAT17(uStack_1d9,uStack_1e0);
      *(ulong *)((long)plVar9 + 9) = CONCAT17(uStack_1e1,uStack_1e8);
      plVar9[4] = lStack_348;
      plVar9[3] = lStack_350;
      *plVar9 = 2;
LAB_1013f0580:
      FUN_100e1fcd4(lVar10);
      return;
    }
    uStack_f8 = 0;
    uStack_108 = uVar5;
    do {
      plVar11 = plVar8 + 9;
      lVar6 = *plVar8;
      *(long **)(param_2 + 8) = plVar11;
      if (lVar6 == -0x7ffffffffffffffb) break;
      uStack_d0 = (undefined7)lVar6;
      uStack_c9 = (undefined1)((ulong)lVar6 >> 0x38);
      uStack_c0 = (undefined7)plVar8[2];
      uStack_b9 = (undefined1)((ulong)plVar8[2] >> 0x38);
      uStack_c8 = (undefined7)plVar8[1];
      uStack_c1 = (undefined1)((ulong)plVar8[1] >> 0x38);
      lStack_b0 = plVar8[4];
      uStack_b8 = (undefined7)plVar8[3];
      uStack_b1 = (undefined1)((ulong)plVar8[3] >> 0x38);
      lStack_a0 = plVar8[6];
      lStack_a8 = plVar8[5];
      lStack_90 = plVar8[8];
      lStack_98 = plVar8[7];
      FUN_100673418(acStack_88,&uStack_d0);
      uVar5 = uStack_f8;
      lVar6 = lStack_100;
      if (acStack_88[0] == '\x16') {
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *param_1 = 0x16;
        lVar10 = uStack_f8 + 1;
        lVar7 = lStack_100;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_100e077ec(lVar7);
          lVar7 = lVar7 + 0x20;
        }
        if (uStack_108 == 0) {
          return;
        }
        _free(lVar6);
        return;
      }
      *(undefined4 *)((ulong)&cStack_f0 | 1) = *(undefined4 *)((ulong)acStack_88 | 1);
      *(undefined4 *)((long)((ulong)&cStack_f0 | 1) + 3) =
           *(undefined4 *)((long)((ulong)acStack_88 | 1) + 3);
      uStack_e8 = uStack_80;
      uStack_d8 = uStack_70;
      uStack_e0 = uStack_78;
      cStack_f0 = acStack_88[0];
      if (uStack_f8 == uStack_108) {
        func_0x000108a1efa8(&uStack_108);
      }
      puVar13 = (undefined8 *)(lStack_100 + uVar5 * 0x20);
      puVar13[1] = uStack_e8;
      *puVar13 = CONCAT71(uStack_ef,cStack_f0);
      puVar13[3] = uStack_d8;
      puVar13[2] = uStack_e0;
      uStack_f8 = uVar5 + 1;
      plVar8 = plVar11;
    } while (plVar11 != plVar9);
  }
  uStack_c1 = (undefined1)lStack_100;
  uStack_c9 = (undefined1)uStack_108;
  uStack_c8 = (undefined7)(uStack_108 >> 8);
  *param_1 = 0x14;
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_c1,uStack_c8);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_c9,uStack_d0);
  *(ulong *)(param_1 + 0x18) = uStack_f8;
  *(long *)(param_1 + 0x10) = lStack_100;
  return;
}

