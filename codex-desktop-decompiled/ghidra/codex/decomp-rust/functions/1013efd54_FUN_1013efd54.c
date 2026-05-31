
void FUN_1013efd54(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_490;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  long lStack_479;
  char cStack_468;
  undefined7 uStack_467;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  char cStack_440;
  undefined8 uStack_43f;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  char cStack_3e8;
  undefined8 uStack_3e7;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_370;
  undefined7 uStack_368;
  undefined1 uStack_361;
  undefined7 uStack_360;
  undefined1 uStack_359;
  undefined7 uStack_358;
  undefined1 uStack_351;
  undefined7 uStack_350;
  undefined1 uStack_349;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined1 uStack_308;
  ulong uStack_288;
  long lStack_280;
  ulong uStack_278;
  char cStack_270;
  undefined7 uStack_26f;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined7 uStack_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  char acStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
  char cStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char cStack_140;
  undefined6 uStack_13f;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  char cStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  long *plVar15;
  
  lVar13 = *(long *)(param_2 + 8);
  lVar16 = *(long *)(param_2 + 0x18);
  uVar8 = (ulong)(lVar16 - lVar13) >> 5;
  if (0x7fff < uVar8) {
    uVar8 = 0x8000;
  }
  if (lVar16 == lVar13) {
    uStack_b8 = 0;
    lStack_b0 = 8;
    lStack_a8 = 0;
  }
  else {
    lVar6 = _malloc(uVar8 << 5);
    if (lVar6 == 0) {
      uVar9 = func_0x0001087c9084(8,uVar8 << 5);
      FUN_100e077ec(&cStack_a0);
      func_0x000100e4a7d4(&uStack_b8);
      __Unwind_Resume(uVar9);
      _free();
      __Unwind_Resume(uVar9);
      auVar20 = func_0x000108a07bc4();
      plVar10 = auVar20._8_8_;
      puVar7 = auVar20._0_8_;
      lVar13 = *plVar10;
      lVar16 = plVar10[1];
      uStack_178 = (ulong)(lVar16 - lVar13) >> 5;
      if (0x7fff < uStack_178) {
        uStack_178 = 0x8000;
      }
      if (lVar16 == lVar13) {
        uStack_178 = 0;
        lStack_170 = 8;
        uStack_168 = 0;
      }
      else {
        lStack_170 = _malloc(uStack_178 << 5);
        if (lStack_170 == 0) {
          uVar9 = func_0x0001087c9084(8,uStack_178 << 5);
          FUN_100e077ec(&cStack_160);
          func_0x000100e4a7d4(&uStack_178);
          __Unwind_Resume(uVar9);
          auVar20 = func_0x000108a07bc4();
          lVar13 = auVar20._8_8_;
          puVar7 = auVar20._0_8_;
          plVar10 = *(long **)(lVar13 + 8);
          plVar12 = *(long **)(lVar13 + 0x18);
          uStack_288 = ((ulong)((long)plVar12 - (long)plVar10) >> 3) * -0x71c71c71c71c71c7;
          if (0x7fff < uStack_288) {
            uStack_288 = 0x8000;
          }
          if (plVar12 == plVar10) {
            uStack_288 = 0;
            lStack_280 = 8;
            uStack_278 = 0;
          }
          else {
            lStack_280 = _malloc(uStack_288 << 5);
            if (lStack_280 == 0) {
              uVar9 = func_0x0001087c9084(8,uStack_288 << 5);
              FUN_100e077ec(&cStack_270);
              func_0x000100e4a7d4(&uStack_288);
              __Unwind_Resume(uVar9);
              auVar20 = func_0x000108a07bc4();
              lVar16 = auVar20._8_8_;
              plVar12 = auVar20._0_8_;
              lStack_4d8 = 0;
              lStack_4d0 = 8;
              lStack_4c8 = 0;
              uVar9 = *(undefined8 *)(lVar16 + 0x28);
              lVar13 = *(long *)(lVar16 + 0x30);
              *(long *)(lVar16 + 0x30) = lVar13 + 1;
              plVar10 = *(long **)(lVar16 + 0x18);
              uVar4 = *(undefined8 *)(lVar16 + 0x20);
              if (*(long **)(lVar16 + 8) != plVar10) {
                puVar19 = (undefined8 *)((ulong)&cStack_468 | 1);
                plVar14 = *(long **)(lVar16 + 8);
                do {
                  plVar15 = plVar14 + 0xc;
                  lVar6 = *plVar14;
                  *(long **)(lVar16 + 8) = plVar15;
                  if (lVar6 == -0x7ffffffffffffffa) break;
                  lStack_348 = plVar14[4];
                  uStack_350 = (undefined7)plVar14[3];
                  uStack_349 = (undefined1)((ulong)plVar14[3] >> 0x38);
                  lStack_338 = plVar14[6];
                  lStack_340 = plVar14[5];
                  lStack_328 = plVar14[8];
                  lStack_330 = plVar14[7];
                  lStack_320 = plVar14[9];
                  uStack_358 = (undefined7)plVar14[2];
                  uStack_351 = (undefined1)((ulong)plVar14[2] >> 0x38);
                  uStack_360 = (undefined7)plVar14[1];
                  uStack_359 = (undefined1)((ulong)plVar14[1] >> 0x38);
                  uStack_398 = 1;
                  uStack_368 = (undefined7)lVar6;
                  uStack_361 = (undefined1)((ulong)lVar6 >> 0x38);
                  lStack_310 = plVar14[0xb];
                  lStack_318 = plVar14[10];
                  uStack_308 = 0;
                  lStack_390 = lVar13;
                  uStack_388 = uVar4;
                  uStack_370 = uVar9;
                  func_0x00010155fa60(&lStack_3f0,&uStack_398,&uStack_368);
                  lVar6 = lStack_4c8;
                  uStack_490 = uStack_3e7;
                  uStack_488 = uStack_3df;
                  lStack_479 = lStack_3d0;
                  uStack_481 = uStack_3d8;
                  uStack_480 = uStack_3d7;
                  if (lStack_3f0 != 2) {
                    lStack_4b8 = lStack_3c0;
                    lStack_4c0 = lStack_3c8;
                    lStack_4a8 = lStack_3b0;
                    lStack_4b0 = lStack_3b8;
                    lStack_498 = lStack_3a0;
                    lStack_4a0 = lStack_3a8;
                    lStack_448 = lStack_3f0;
                    cStack_440 = cStack_3e8;
                    uStack_43f = uStack_3e7;
                    lStack_428 = lStack_3d0;
                    lStack_408 = lStack_3b0;
                    lStack_410 = lStack_3b8;
                    lStack_3f8 = lStack_3a0;
                    lStack_400 = lStack_3a8;
                    lStack_418 = lStack_3c0;
                    lStack_420 = lStack_3c8;
                    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(uVar9,uVar4);
                    lVar6 = lStack_4d0;
                    *(ulong *)((long)plVar12 + 0x11) = CONCAT17(uStack_481,uStack_488);
                    *(undefined8 *)((long)plVar12 + 9) = uStack_490;
                    plVar12[4] = lStack_479;
                    plVar12[3] = CONCAT71(uStack_480,uStack_481);
                    plVar12[6] = lStack_4b8;
                    plVar12[5] = lStack_4c0;
                    plVar12[8] = lStack_4a8;
                    plVar12[7] = lStack_4b0;
                    *plVar12 = lStack_3f0;
                    *(char *)(plVar12 + 1) = cStack_3e8;
                    lVar13 = lStack_4c8 + 1;
                    plVar12[10] = lStack_498;
                    plVar12[9] = lStack_4a0;
                    lVar17 = lStack_4d0;
                    while (lVar13 = lVar13 + -1, lVar13 != 0) {
                      FUN_100e077ec(lVar17);
                      lVar17 = lVar17 + 0x20;
                    }
                    if (lStack_4d8 != 0) {
                      _free(lVar6);
                    }
                    goto LAB_1013f0580;
                  }
                  if (cStack_3e8 == '\x16') break;
                  cStack_468 = cStack_3e8;
                  puVar19[1] = CONCAT17(uStack_3d8,uStack_3df);
                  *puVar19 = uStack_3e7;
                  *(long *)((long)puVar19 + 0x17) = lStack_3d0;
                  *(ulong *)((long)puVar19 + 0xf) = CONCAT71(uStack_3d7,uStack_3d8);
                  if (lStack_4c8 == lStack_4d8) {
                    func_0x000108a1efa8(&lStack_4d8);
                  }
                  puVar3 = (undefined8 *)(lStack_4d0 + lVar6 * 0x20);
                  puVar3[1] = uStack_460;
                  *puVar3 = CONCAT71(uStack_467,cStack_468);
                  puVar3[3] = uStack_450;
                  puVar3[2] = uStack_458;
                  lStack_4c8 = lVar6 + 1;
                  *(long *)(lVar16 + 0x30) = lVar13 + 2;
                  lVar13 = lVar13 + 1;
                  plVar14 = plVar15;
                } while (plVar15 != plVar10);
              }
              uStack_359 = (undefined1)lStack_4d0;
              uStack_358 = (undefined7)((ulong)lStack_4d0 >> 8);
              uStack_361 = (undefined1)lStack_4d8;
              uStack_360 = (undefined7)((ulong)lStack_4d8 >> 8);
              uStack_351 = (undefined1)lStack_4c8;
              uStack_350 = (undefined7)((ulong)lStack_4c8 >> 8);
              *(undefined1 *)(plVar12 + 1) = 0x14;
              *(ulong *)((long)plVar12 + 0x11) = CONCAT17(uStack_359,uStack_360);
              *(ulong *)((long)plVar12 + 9) = CONCAT17(uStack_361,uStack_368);
              plVar12[4] = lStack_4c8;
              plVar12[3] = lStack_4d0;
              *plVar12 = 2;
LAB_1013f0580:
              FUN_100e1fcd4(lVar16);
              return;
            }
            uStack_278 = 0;
            do {
              plVar14 = plVar10 + 9;
              lVar16 = *plVar10;
              *(long **)(lVar13 + 8) = plVar14;
              if (lVar16 == -0x7ffffffffffffffb) break;
              uStack_250 = (undefined7)lVar16;
              uStack_249 = (undefined1)((ulong)lVar16 >> 0x38);
              uStack_240 = (undefined7)plVar10[2];
              uStack_239 = (undefined1)((ulong)plVar10[2] >> 0x38);
              uStack_248 = (undefined7)plVar10[1];
              uStack_241 = (undefined1)((ulong)plVar10[1] >> 0x38);
              lStack_230 = plVar10[4];
              uStack_238 = (undefined7)plVar10[3];
              uStack_231 = (undefined1)((ulong)plVar10[3] >> 0x38);
              lStack_220 = plVar10[6];
              lStack_228 = plVar10[5];
              lStack_210 = plVar10[8];
              lStack_218 = plVar10[7];
              FUN_100673418(acStack_208,&uStack_250);
              uVar8 = uStack_278;
              lVar16 = lStack_280;
              if (acStack_208[0] == '\x16') {
                *(undefined8 *)(puVar7 + 8) = uStack_200;
                *puVar7 = 0x16;
                lVar13 = uStack_278 + 1;
                lVar6 = lStack_280;
                while (lVar13 = lVar13 + -1, lVar13 != 0) {
                  FUN_100e077ec(lVar6);
                  lVar6 = lVar6 + 0x20;
                }
                if (uStack_288 == 0) {
                  return;
                }
                _free(lVar16);
                return;
              }
              *(undefined4 *)((ulong)&cStack_270 | 1) = *(undefined4 *)((ulong)acStack_208 | 1);
              *(undefined4 *)((long)((ulong)&cStack_270 | 1) + 3) =
                   *(undefined4 *)((long)((ulong)acStack_208 | 1) + 3);
              uStack_268 = uStack_200;
              uStack_258 = uStack_1f0;
              uStack_260 = uStack_1f8;
              cStack_270 = acStack_208[0];
              if (uStack_278 == uStack_288) {
                func_0x000108a1efa8(&uStack_288);
              }
              puVar19 = (undefined8 *)(lStack_280 + uVar8 * 0x20);
              puVar19[1] = uStack_268;
              *puVar19 = CONCAT71(uStack_26f,cStack_270);
              puVar19[3] = uStack_258;
              puVar19[2] = uStack_260;
              uStack_278 = uVar8 + 1;
              plVar10 = plVar14;
            } while (plVar14 != plVar12);
          }
          uStack_241 = (undefined1)lStack_280;
          uStack_249 = (undefined1)uStack_288;
          uStack_248 = (undefined7)(uStack_288 >> 8);
          *puVar7 = 0x14;
          *(ulong *)(puVar7 + 9) = CONCAT17(uStack_241,uStack_248);
          *(ulong *)(puVar7 + 1) = CONCAT17(uStack_249,uStack_250);
          *(ulong *)(puVar7 + 0x18) = uStack_278;
          *(long *)(puVar7 + 0x10) = lStack_280;
          return;
        }
        uStack_168 = 0;
        lVar6 = plVar10[2];
        do {
          lVar6 = lVar6 + 1;
          lVar13 = lVar13 + 0x20;
          *plVar10 = lVar13;
          plVar10[2] = lVar6;
          __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&cStack_140);
          uVar8 = uStack_168;
          lVar17 = lStack_170;
          if (cStack_140 == '\x16') {
            *(ulong *)(puVar7 + 8) = CONCAT17(uStack_131,uStack_138);
            *puVar7 = 0x16;
            lVar13 = uStack_168 + 1;
            lVar16 = lStack_170;
            while (lVar13 = lVar13 + -1, lVar13 != 0) {
              FUN_100e077ec(lVar16);
              lVar16 = lVar16 + 0x20;
            }
            if (uStack_178 == 0) {
              return;
            }
            _free(lVar17);
            return;
          }
          *(undefined4 *)((ulong)&cStack_160 | 1) = *(undefined4 *)((ulong)&cStack_140 | 1);
          *(undefined4 *)((long)((ulong)&cStack_160 | 1) + 3) =
               *(undefined4 *)((long)((ulong)&cStack_140 | 1) + 3);
          uStack_158 = CONCAT17(uStack_131,uStack_138);
          uStack_148 = CONCAT17(uStack_121,uStack_128);
          uStack_150 = CONCAT17(uStack_129,uStack_130);
          cStack_160 = cStack_140;
          if (uStack_168 == uStack_178) {
            func_0x000108a1efa8(&uStack_178);
          }
          puVar19 = (undefined8 *)(lStack_170 + uVar8 * 0x20);
          puVar19[1] = uStack_158;
          *puVar19 = CONCAT71(uStack_15f,cStack_160);
          puVar19[3] = uStack_148;
          puVar19[2] = uStack_150;
          uStack_168 = uVar8 + 1;
        } while (lVar13 != lVar16);
      }
      uStack_131 = (undefined1)lStack_170;
      uStack_139 = (undefined1)uStack_178;
      uStack_138 = (undefined7)(uStack_178 >> 8);
      *puVar7 = 0x14;
      *(ulong *)(puVar7 + 9) = CONCAT17(uStack_131,uStack_138);
      *(ulong *)(puVar7 + 1) = CONCAT17(uStack_139,CONCAT61(uStack_13f,cStack_140));
      *(ulong *)(puVar7 + 0x18) = uStack_168;
      *(long *)(puVar7 + 0x10) = lStack_170;
      return;
    }
    lVar17 = 0;
    lStack_a8 = 0;
    lVar18 = *(long *)(param_2 + 0x20);
    lVar2 = 1;
    uStack_b8 = uVar8;
    lStack_b0 = lVar6;
    do {
      lVar11 = lVar2;
      pcVar1 = (char *)(lVar13 + lVar17);
      cVar5 = *pcVar1;
      *(char **)(param_2 + 8) = pcVar1 + 0x20;
      if (cVar5 == '\x16') break;
      uVar9 = *(undefined8 *)(pcVar1 + 8);
      *(long *)(param_2 + 0x20) = lVar18 + lVar11;
      if (cVar5 == '\x17') {
        *(undefined8 *)(param_1 + 8) = uVar9;
        *param_1 = 0x16;
        lVar13 = lVar6;
        while (lVar11 = lVar11 + -1, lVar11 != 0) {
          FUN_100e077ec(lVar13);
          lVar13 = lVar13 + 0x20;
        }
        if (uStack_b8 == 0) {
          return;
        }
        _free(lVar6);
        return;
      }
      lVar2 = lVar13 + lVar17;
      *(undefined4 *)((ulong)&cStack_a0 | 1) = *(undefined4 *)(lVar2 + 1);
      *(undefined4 *)((long)((ulong)&cStack_a0 | 1) + 3) = *(undefined4 *)(lVar2 + 4);
      uStack_88 = *(undefined8 *)(lVar2 + 0x18);
      uStack_90 = *(undefined8 *)(lVar2 + 0x10);
      cStack_a0 = cVar5;
      uStack_98 = uVar9;
      if (lVar11 - 1U == uStack_b8) {
        func_0x000108a1efa8(&uStack_b8);
        lVar6 = lStack_b0;
      }
      puVar19 = (undefined8 *)(lVar6 + lVar17);
      puVar19[1] = uStack_98;
      *puVar19 = CONCAT71(uStack_9f,cStack_a0);
      puVar19[3] = uStack_88;
      puVar19[2] = uStack_90;
      lVar17 = lVar17 + 0x20;
      lVar2 = lVar11 + 1;
      lStack_a8 = lVar11;
    } while (lVar13 + lVar17 != lVar16);
  }
  uStack_70 = (undefined1)lStack_b0;
  uStack_78 = (undefined1)uStack_b8;
  uStack_77 = (undefined7)(uStack_b8 >> 8);
  *param_1 = 0x14;
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_70,uStack_77);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_78,uStack_7f);
  *(long *)(param_1 + 0x18) = lStack_a8;
  *(long *)(param_1 + 0x10) = lStack_b0;
  return;
}

