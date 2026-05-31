
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100b8de90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong uVar18;
  ulong extraout_x1_04;
  undefined1 uVar19;
  byte bVar20;
  undefined *puVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****unaff_x20;
  long unaff_x21;
  long lVar23;
  byte *pbVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 auStack_6a8 [448];
  long *plStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
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
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  code *pcStack_118;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  code *pcStack_58;
  
  bVar20 = *(byte *)(param_1 + 0x37);
  if (bVar20 < 2) {
    if (bVar20 != 0) {
      func_0x000108a07af4(&UNK_10b230ca0);
LAB_100b8e1a8:
      uVar12 = func_0x000108a07b10(&UNK_10b230ca0);
      if ((unaff_x21 != 0) && ((*(byte *)((long)param_1 + 0x1b9) & 1) != 0)) {
        _free();
      }
      *(undefined1 *)((long)param_1 + 0x1b9) = 0;
      FUN_100e3d46c(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x37) = 2;
      __Unwind_Resume(uVar12);
      func_0x000108a07bc4();
      auVar26 = func_0x000108a07bc4();
      puVar8 = auVar26._0_8_;
      bVar20 = *(byte *)(puVar8 + 0x37);
      if (bVar20 < 2) {
        if (bVar20 != 0) {
          func_0x000108a07af4(&UNK_10b230ca0);
LAB_100b8e5bc:
          uVar12 = func_0x000108a07b10(&UNK_10b230ca0);
          if ((unaff_x21 != 0) && ((*(byte *)((long)puVar8 + 0x1b9) & 1) != 0)) {
            _free();
          }
          *(undefined1 *)((long)puVar8 + 0x1b9) = 0;
          FUN_100e3d46c(puVar8 + 0x18);
          *(undefined1 *)(puVar8 + 0x37) = 2;
          __Unwind_Resume(uVar12);
          func_0x000108a07bc4();
          auVar26 = func_0x000108a07bc4();
          lVar16 = auVar26._8_8_;
          plVar11 = auVar26._0_8_;
          bVar20 = *(byte *)(lVar16 + 0x1c8);
          if (bVar20 < 3) {
            if (bVar20 != 0) {
              if (bVar20 == 1) {
                func_0x000108a07af4(&UNK_10b230d00);
              }
              uVar12 = func_0x000108a07b10();
              *(undefined1 *)(lVar16 + 0x1c9) = 0;
              if ((*(byte *)(lVar16 + 0x1ca) & 1) != 0) {
                FUN_100d9d514(&plStack_4e8);
              }
              *(undefined1 *)(lVar16 + 0x1ca) = 0;
              if ((*(byte *)(lVar16 + 0x1cb) & 1) != 0) {
                FUN_100e44f40(auStack_6a8);
              }
              *(undefined1 *)(lVar16 + 0x1cb) = 0;
              *(undefined1 *)(lVar16 + 0x1c8) = 2;
              __Unwind_Resume(uVar12);
              func_0x000108a07bc4();
              auVar26 = func_0x000108a07bc4();
              puVar9 = auVar26._8_8_;
              puVar8 = auVar26._0_8_;
              bVar20 = *(byte *)(puVar8 + 0x18);
              if (bVar20 < 2) {
                if (bVar20 == 0) {
                  uVar12 = puVar8[2];
                  pbVar24 = (byte *)((long)puVar8 + 0xc1);
                  *pbVar24 = 0;
                  __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                            (&uStack_7e0,*puVar8,*(undefined4 *)(puVar8 + 1),&UNK_10b230dc0);
                  uStack_728 = uStack_798;
                  uStack_730 = uStack_7a0;
                  uStack_718 = uStack_788;
                  uStack_720 = uStack_790;
                  uStack_708 = uStack_778;
                  uStack_710 = uStack_780;
                  uStack_768 = uStack_7d8;
                  uStack_770 = uStack_7e0;
                  uStack_758 = uStack_7c8;
                  uStack_760 = uStack_7d0;
                  uStack_748 = uStack_7b8;
                  uStack_750 = uStack_7c0;
                  uStack_738 = uStack_7a8;
                  uStack_740 = uStack_7b0;
                  puVar13 = puVar8 + 3;
                  puVar8[10] = uStack_7a8;
                  puVar8[9] = uStack_7b0;
                  puVar8[0xc] = uStack_798;
                  puVar8[0xb] = uStack_7a0;
                  puVar8[0xe] = uStack_788;
                  puVar8[0xd] = uStack_790;
                  puVar8[0x10] = uStack_778;
                  puVar8[0xf] = uStack_780;
                  puVar8[4] = uStack_7d8;
                  puVar8[3] = uStack_7e0;
                  puVar8[6] = uStack_7c8;
                  puVar8[5] = uStack_7d0;
                  puVar8[8] = uStack_7b8;
                  puVar8[7] = uStack_7c0;
                  puVar8[0x11] = uVar12;
                  *(undefined1 *)(puVar8 + 0x15) = 0;
                  puVar8[0x16] = pbVar24;
                  puVar8[0x17] = puVar13;
                  goto LAB_100b8eb64;
                }
                func_0x000108a07af4(&UNK_10b230dd8);
LAB_100b8ed44:
                func_0x000108a07b10(&UNK_10b230dd8);
LAB_100b8ed50:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca2bde,0x6b,&UNK_10b230df0);
LAB_100b8ed68:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8ed6c);
                (*pcVar5)();
              }
              if (bVar20 != 3) goto LAB_100b8ed44;
              pbVar24 = (byte *)puVar8[0x16];
              puVar13 = (undefined8 *)puVar8[0x17];
LAB_100b8eb64:
              lVar16 = (*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
              if (*(char *)(lVar16 + 0x48) != '\x01') {
                if (*(char *)(lVar16 + 0x48) == '\x02') {
                  func_0x000108a82a50(&UNK_10b4cce20);
                  goto LAB_100b8ed68;
                }
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar16,&DAT_100c35d48);
                *(undefined1 *)(lVar16 + 0x48) = 1;
              }
              if (*(char *)(lVar16 + 0x44) == '\x01' && *(char *)(lVar16 + 0x45) == '\0') {
                FUN_10610bbb4(*(undefined8 *)*puVar9,((undefined8 *)*puVar9)[1]);
                uVar18 = extraout_x1;
LAB_100b8ebe4:
                uVar12 = 2;
                uVar19 = 3;
                goto LAB_100b8ed14;
              }
              if ((*(uint *)(lVar16 + 0x38) & 1) == 0) {
                uVar6 = FUN_1060fcce0();
                uVar18 = extraout_x1_00;
              }
              else {
                uVar6 = *(uint *)(lVar16 + 0x3c);
                uVar18 = (ulong)*(uint *)(lVar16 + 0x40);
              }
              uVar6 = uVar6 ^ uVar6 << 0x11;
              uVar17 = (uint)uVar18;
              uVar6 = (uint)(uVar18 >> 0x10) & 0xffff ^ uVar6 >> 7 ^ uVar17 ^ uVar6;
              *(undefined4 *)(lVar16 + 0x38) = 1;
              *(uint *)(lVar16 + 0x3c) = uVar17;
              *(uint *)(lVar16 + 0x40) = uVar6;
              bVar20 = *pbVar24;
              if ((int)(uVar6 + uVar17) < 0) {
                bVar1 = bVar20 & 2;
                if ((bVar20 >> 1 & 1) == 0) {
                  uVar6 = FUN_100fe62c8(puVar13 + 0xe,puVar9);
                  uVar6 = uVar6 & 0xff;
                  if (uVar6 == 2) {
                    bVar20 = *pbVar24;
                    uVar18 = extraout_x1_01;
                    goto LAB_100b8ec48;
                  }
                  bVar20 = 2;
                }
                else {
LAB_100b8ec48:
                  if ((bVar20 & 1) != 0) goto LAB_100b8ecac;
                  auVar26 = func_0x000106114748(puVar13,puVar9);
                  uVar18 = auVar26._8_8_;
                  if ((auVar26._0_8_ & 1) != 0) goto LAB_100b8eca4;
LAB_100b8ecc4:
                  uVar6 = 2;
                  bVar20 = 1;
                }
LAB_100b8ecd4:
                *pbVar24 = *pbVar24 | bVar20;
              }
              else {
                bVar1 = bVar20 & 1;
                if ((bVar20 & 1) == 0) {
                  iVar7 = func_0x000106114748(puVar13,puVar9);
                  if (iVar7 != 0) {
                    bVar20 = *pbVar24;
                    uVar18 = extraout_x1_02;
                    goto LAB_100b8ec84;
                  }
                  goto LAB_100b8ecc4;
                }
LAB_100b8ec84:
                if ((bVar20 >> 1 & 1) == 0) {
                  uVar6 = FUN_100fe62c8(puVar13 + 0xe,puVar9);
                  uVar6 = uVar6 & 0xff;
                  uVar18 = extraout_x1_03;
                  if (uVar6 != 2) {
                    bVar20 = 2;
                    goto LAB_100b8ecd4;
                  }
LAB_100b8eca4:
                  uVar12 = 2;
                  uVar19 = 3;
                  goto LAB_100b8ed14;
                }
LAB_100b8ecac:
                if (bVar1 == 0) goto LAB_100b8ebe4;
                uVar6 = 4;
              }
              FUN_100de8a5c(puVar8 + 3);
              uVar17 = uVar6 - 2;
              if (uVar6 < 2) {
                uVar17 = 1;
              }
              if (uVar17 == 0) {
                uVar12 = 0;
              }
              else {
                if ((uVar17 & 0xff) != 1) goto LAB_100b8ed50;
                uVar12 = 1;
              }
              uVar19 = 1;
              uVar18 = extraout_x1_04;
LAB_100b8ed14:
              *(undefined1 *)(puVar8 + 0x18) = uVar19;
              auVar26._8_8_ = uVar18;
              auVar26._0_8_ = uVar12;
              return auVar26;
            }
            *(undefined2 *)(lVar16 + 0x1c9) = 0;
            uVar12 = *(undefined8 *)(lVar16 + 0x1c0);
            *(undefined1 *)(lVar16 + 0x1cb) = 1;
            _memcpy(auStack_6a8,lVar16,0x1c0);
            lStack_4d8 = 1;
            lStack_4e0 = 1;
            lStack_4a8 = -0x7ffffffffffffffe;
            lStack_4b0 = 0;
            plVar14 = (long *)_malloc(0xa0);
            if (plVar14 == (long *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
LAB_100b8e9d8:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8e9dc);
              (*pcVar5)();
            }
            plVar14[0xd] = lStack_478;
            plVar14[0xc] = lStack_480;
            plVar14[0xf] = lStack_468;
            plVar14[0xe] = lStack_470;
            plVar14[0x11] = lStack_458;
            plVar14[0x10] = lStack_460;
            plVar14[0x13] = lStack_448;
            plVar14[0x12] = lStack_450;
            plVar14[5] = lStack_4b8;
            plVar14[4] = lStack_4c0;
            plVar14[7] = lStack_4a8;
            plVar14[6] = lStack_4b0;
            plVar14[9] = lStack_498;
            plVar14[8] = lStack_4a0;
            plVar14[0xb] = lStack_488;
            plVar14[10] = lStack_490;
            plVar14[1] = lStack_4d8;
            *plVar14 = lStack_4e0;
            plVar14[3] = lStack_4c8;
            plVar14[2] = lStack_4d0;
            lVar23 = *plVar14;
            *plVar14 = lVar23 + 1;
            if (lVar23 < 0) goto LAB_100b8e9d8;
            *(undefined2 *)(lVar16 + 0x1c9) = 0x101;
            *(long **)(lVar16 + 0x1d0) = plVar14;
            *(undefined1 *)(lVar16 + 0x1cb) = 0;
            plStack_4e8 = plVar14;
            _memcpy(&lStack_4e0,lVar16,0x1c0);
            lVar23 = _malloc(0x1c0);
            if (lVar23 == 0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1c0);
              goto LAB_100b8e9d8;
            }
            _memcpy(lVar23,lVar16,0x1c0);
            *(undefined1 *)(lVar16 + 0x1ca) = 0;
            *(undefined8 *)(lVar16 + 0x1d8) = 0x8000000000000000;
            *(long *)(lVar16 + 0x1e0) = lVar23;
            *(long **)(lVar16 + 0x1e8) = plVar14;
            *(undefined8 *)(lVar16 + 0x260) = uVar12;
            *(undefined1 *)(lVar16 + 0x370) = 0;
LAB_100b8e7e8:
            auVar26 = FUN_100fcf8d4(&lStack_4e0,lVar16 + 0x1d8,param_3);
            lVar23 = lStack_4e0;
            if (lStack_4e0 == -0x7ffffffffffffffa) {
              *plVar11 = -0x7ffffffffffffffe;
              uVar19 = 3;
              goto LAB_100b8e998;
            }
            lStack_2d8 = lStack_490;
            lStack_2e0 = lStack_498;
            lStack_2c8 = lStack_480;
            lStack_2d0 = lStack_488;
            lStack_2b8 = lStack_470;
            lStack_2c0 = lStack_478;
            lStack_2a8 = lStack_460;
            lStack_2b0 = lStack_468;
            lStack_318 = lStack_4d0;
            lStack_320 = lStack_4d8;
            lStack_308 = lStack_4c0;
            lStack_310 = lStack_4c8;
            lStack_2f8 = lStack_4b0;
            lStack_300 = lStack_4b8;
            lStack_2e8 = lStack_4a0;
            lStack_2f0 = lStack_4a8;
            FUN_100d1cef4(lVar16 + 0x1d8);
            if (lVar23 == -0x7ffffffffffffffb) {
              *(undefined1 *)(lVar16 + 0x1c9) = 0;
              goto LAB_100b8e85c;
            }
            lStack_490 = lStack_2d8;
            lStack_498 = lStack_2e0;
            lStack_480 = lStack_2c8;
            lStack_488 = lStack_2d0;
            lStack_470 = lStack_2b8;
            lStack_478 = lStack_2c0;
            lStack_460 = lStack_2a8;
            lStack_468 = lStack_2b0;
            lStack_4d0 = lStack_318;
            lStack_4d8 = lStack_320;
            lStack_4c0 = lStack_308;
            lStack_4c8 = lStack_310;
            lStack_4b0 = lStack_2f8;
            lStack_4b8 = lStack_300;
            lStack_4a0 = lStack_2e8;
            lStack_4a8 = lStack_2f0;
            lStack_4e0 = lVar23;
            lVar15 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xb,&UNK_108cbf623,0x2a);
            auVar26 = FUN_100e08810(&lStack_4e0);
LAB_100b8e92c:
            if ((*(byte *)(lVar16 + 0x1c9) & 1) != 0) {
              auVar26 = FUN_100d9e13c(lVar16 + 0x1d0);
            }
            *(undefined1 *)(lVar16 + 0x1c9) = 0;
            lVar23 = -0x7fffffffffffffff;
          }
          else {
            if (bVar20 == 3) goto LAB_100b8e7e8;
LAB_100b8e85c:
            auVar26 = FUN_101402244(&lStack_4e0,lVar16 + 0x1d0,param_3);
            lVar15 = lStack_4d8;
            lVar23 = lStack_4e0;
            if (lStack_4e0 == -0x7ffffffffffffffd) {
              *plVar11 = -0x7ffffffffffffffe;
              uVar19 = 4;
              goto LAB_100b8e998;
            }
            lStack_278 = lStack_4a8;
            lStack_280 = lStack_4b0;
            lStack_268 = lStack_498;
            lStack_270 = lStack_4a0;
            lStack_258 = lStack_488;
            lStack_260 = lStack_490;
            lStack_250 = lStack_480;
            lStack_298 = lStack_4c8;
            lStack_2a0 = lStack_4d0;
            lStack_288 = lStack_4b8;
            lStack_290 = lStack_4c0;
            auVar26 = FUN_100d9e13c(lVar16 + 0x1d0);
            if (lVar23 == -0x7ffffffffffffffe) {
              auVar26 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xb,&UNK_108cbf6a2,0x2b);
              lVar15 = auVar26._0_8_;
              goto LAB_100b8e92c;
            }
            lStack_218 = lStack_278;
            lStack_220 = lStack_280;
            lStack_208 = lStack_268;
            lStack_210 = lStack_270;
            lStack_1f8 = lStack_258;
            lStack_200 = lStack_260;
            lStack_1f0 = lStack_250;
            lStack_238 = lStack_298;
            lStack_240 = lStack_2a0;
            lStack_228 = lStack_288;
            lStack_230 = lStack_290;
            *(undefined1 *)(lVar16 + 0x1c9) = 0;
          }
          *(undefined2 *)(lVar16 + 0x1ca) = 0;
          *plVar11 = lVar23;
          plVar11[1] = lVar15;
          plVar11[7] = lStack_218;
          plVar11[6] = lStack_220;
          plVar11[9] = lStack_208;
          plVar11[8] = lStack_210;
          plVar11[0xb] = lStack_1f8;
          plVar11[10] = lStack_200;
          plVar11[0xc] = lStack_1f0;
          uVar19 = 1;
          plVar11[3] = lStack_238;
          plVar11[2] = lStack_240;
          plVar11[5] = lStack_228;
          plVar11[4] = lStack_230;
LAB_100b8e998:
          *(undefined1 *)(lVar16 + 0x1c8) = uVar19;
          return auVar26;
        }
        *(undefined1 *)((long)puVar8 + 0x1b9) = 0;
        puVar8[0x29] = puVar8[0x11];
        puVar8[0x28] = puVar8[0x10];
        puVar8[0x2b] = puVar8[0x13];
        puVar8[0x2a] = puVar8[0x12];
        uVar12 = puVar8[0x15];
        puVar8[0x21] = puVar8[9];
        puVar8[0x20] = puVar8[8];
        puVar8[0x23] = puVar8[0xb];
        puVar8[0x22] = puVar8[10];
        puVar8[0x25] = puVar8[0xd];
        puVar8[0x24] = puVar8[0xc];
        puVar8[0x27] = puVar8[0xf];
        puVar8[0x26] = puVar8[0xe];
        puVar8[0x19] = puVar8[1];
        puVar8[0x18] = *puVar8;
        puVar8[0x1b] = puVar8[3];
        puVar8[0x1a] = puVar8[2];
        puVar8[0x1d] = puVar8[5];
        puVar8[0x1c] = puVar8[4];
        puVar8[0x1f] = puVar8[7];
        puVar8[0x1e] = puVar8[6];
        puVar8[0x2c] = puVar8[0x14];
        puVar8[0x2d] = puVar8[0x16];
        puVar8[0x2e] = puVar8[0x17];
        func_0x000100658d90(&ppppuStack_130,puVar8 + 0x18);
        ppppuVar3 = ppppuStack_120;
        unaff_x20 = (undefined8 *****)ppppuStack_128;
        ppppuVar2 = ppppuStack_130;
        if ((undefined8 *****)ppppuStack_130 != (undefined8 *****)0x8000000000000000) {
          *(undefined1 *)((long)puVar8 + 0x1b9) = 0;
          pppppuVar22 = unaff_x20;
          if (ppppuStack_120 == ppppuStack_130) {
            if ((undefined8 *****)ppppuStack_130 == (undefined8 *****)0x0) {
              puVar21 = &UNK_10b205a90;
              pppppuVar10 = (undefined8 *****)0x0;
              pppppuVar22 = (undefined8 *****)0x1;
            }
            else if (((ulong)ppppuStack_128 & 1) == 0) {
              puVar21 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
              pppppuVar10 = (undefined8 *****)((ulong)ppppuStack_128 | 1);
            }
            else {
              puVar21 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
              pppppuVar10 = (undefined8 *****)ppppuStack_128;
            }
          }
          else {
            pppppuVar10 = (undefined8 *****)_malloc(0x18);
            if (pppppuVar10 == (undefined8 *****)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
              goto LAB_100b8e5ac;
            }
            *pppppuVar10 = unaff_x20;
            pppppuVar10[1] = ppppuVar2;
            pppppuVar10[2] = (undefined8 ****)0x1;
            puVar21 = &UNK_10b205b08;
          }
          puVar8[0x2f] = 0;
          puVar8[0x30] = puVar21;
          puVar8[0x31] = pppppuVar22;
          puVar8[0x32] = ppppuVar3;
          puVar8[0x33] = pppppuVar10;
          puVar8[0x36] = uVar12;
          goto LAB_100b8e40c;
        }
        ppppuStack_168 = ppppuStack_128;
        puVar9 = (undefined8 *)_malloc(8);
        if (puVar9 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100b8e5ac;
        }
        *puVar9 = unaff_x20;
        puVar13 = (undefined8 *)_malloc(0x18);
        if (puVar13 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100b8e5ac;
        }
        *puVar13 = puVar9;
        puVar13[1] = &UNK_10b212f28;
        *(undefined1 *)(puVar13 + 2) = 0x28;
        *(undefined1 *)((long)puVar8 + 0x1b9) = 0;
        FUN_100e3d46c(puVar8 + 0x18);
        unaff_x20 = (undefined8 *****)((long)puVar13 + 1);
      }
      else {
        if (bVar20 != 3) goto LAB_100b8e5bc;
LAB_100b8e40c:
        FUN_101517acc(&ppppuStack_130,puVar8 + 0x2f,auVar26._8_8_);
        pcVar5 = pcStack_118;
        ppppuVar4 = ppppuStack_120;
        ppppuVar3 = ppppuStack_128;
        ppppuVar2 = ppppuStack_130;
        if ((undefined8 *****)ppppuStack_130 == (undefined8 *****)0x16) {
          *(undefined1 *)(puVar8 + 0x37) = 3;
          uVar12 = 1;
          goto LAB_100b8e53c;
        }
        if ((puVar8[0x2f] != 6) && ((puVar8[0x2f] != 4 || (*(short *)(puVar8 + 0x34) != 0x12)))) {
          (**(code **)(puVar8[0x30] + 0x20))(puVar8 + 0x33,puVar8[0x31],puVar8[0x32]);
        }
        if ((undefined8 *****)ppppuVar2 == (undefined8 *****)0x15) {
          unaff_x20 = (undefined8 *****)0x0;
        }
        else {
          ppppuStack_130 = (undefined8 ****)(puVar8 + 0x2d);
          ppppuStack_168 = ppppuVar2;
          ppppuStack_158 = ppppuVar4;
          ppppuStack_160 = ppppuVar3;
          pcStack_150 = pcVar5;
          ppppuStack_128 = (undefined8 ****)&DAT_100c7b3a0;
          ppppuStack_120 = &ppppuStack_168;
          pcStack_118 = 
          __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_148,s__failed_to_write_websocket_messa_108ad106d,&ppppuStack_130);
          puVar9 = (undefined8 *)_malloc(0x18);
          if (puVar9 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100b8e5ac:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8e5b0);
            (*pcVar5)();
          }
          *puVar9 = uStack_148;
          puVar9[1] = uStack_140;
          puVar9[2] = uStack_138;
          plVar11 = (long *)_malloc(0x18);
          if (plVar11 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100b8e5ac;
          }
          *plVar11 = (long)puVar9;
          plVar11[1] = (long)&UNK_10b209118;
          *(undefined1 *)(plVar11 + 2) = 0x28;
          FUN_100de8b24(&ppppuStack_168);
          unaff_x20 = (undefined8 *****)((long)plVar11 + 1);
        }
        *(undefined1 *)((long)puVar8 + 0x1b9) = 0;
        FUN_100e3d46c(puVar8 + 0x18);
      }
      uVar12 = 0;
      *(undefined1 *)(puVar8 + 0x37) = 1;
LAB_100b8e53c:
      auVar27._8_8_ = unaff_x20;
      auVar27._0_8_ = uVar12;
      return auVar27;
    }
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    param_1[0x29] = param_1[0x11];
    param_1[0x28] = param_1[0x10];
    param_1[0x2b] = param_1[0x13];
    param_1[0x2a] = param_1[0x12];
    uVar12 = param_1[0x15];
    param_1[0x21] = param_1[9];
    param_1[0x20] = param_1[8];
    param_1[0x23] = param_1[0xb];
    param_1[0x22] = param_1[10];
    param_1[0x25] = param_1[0xd];
    param_1[0x24] = param_1[0xc];
    param_1[0x27] = param_1[0xf];
    param_1[0x26] = param_1[0xe];
    param_1[0x19] = param_1[1];
    param_1[0x18] = *param_1;
    param_1[0x1b] = param_1[3];
    param_1[0x1a] = param_1[2];
    param_1[0x1d] = param_1[5];
    param_1[0x1c] = param_1[4];
    param_1[0x1f] = param_1[7];
    param_1[0x1e] = param_1[6];
    param_1[0x2c] = param_1[0x14];
    param_1[0x2d] = param_1[0x16];
    param_1[0x2e] = param_1[0x17];
    func_0x000100658d90(&ppppuStack_70,param_1 + 0x18);
    ppppuVar3 = ppppuStack_60;
    unaff_x20 = (undefined8 *****)ppppuStack_68;
    ppppuVar2 = ppppuStack_70;
    if ((undefined8 *****)ppppuStack_70 != (undefined8 *****)0x8000000000000000) {
      *(undefined1 *)((long)param_1 + 0x1b9) = 0;
      pppppuVar22 = unaff_x20;
      if (ppppuStack_60 == ppppuStack_70) {
        if ((undefined8 *****)ppppuStack_70 == (undefined8 *****)0x0) {
          puVar21 = &UNK_10b205a90;
          pppppuVar10 = (undefined8 *****)0x0;
          pppppuVar22 = (undefined8 *****)0x1;
        }
        else if (((ulong)ppppuStack_68 & 1) == 0) {
          puVar21 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          pppppuVar10 = (undefined8 *****)((ulong)ppppuStack_68 | 1);
        }
        else {
          puVar21 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          pppppuVar10 = (undefined8 *****)ppppuStack_68;
        }
      }
      else {
        pppppuVar10 = (undefined8 *****)_malloc(0x18);
        if (pppppuVar10 == (undefined8 *****)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100b8e198;
        }
        *pppppuVar10 = unaff_x20;
        pppppuVar10[1] = ppppuVar2;
        pppppuVar10[2] = (undefined8 ****)0x1;
        puVar21 = &UNK_10b205b08;
      }
      param_1[0x2f] = 0;
      param_1[0x30] = puVar21;
      param_1[0x31] = pppppuVar22;
      param_1[0x32] = ppppuVar3;
      param_1[0x33] = pppppuVar10;
      param_1[0x36] = uVar12;
      goto LAB_100b8dff8;
    }
    ppppuStack_a8 = ppppuStack_68;
    puVar8 = (undefined8 *)_malloc(8);
    if (puVar8 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100b8e198;
    }
    *puVar8 = unaff_x20;
    puVar9 = (undefined8 *)_malloc(0x18);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100b8e198;
    }
    *puVar9 = puVar8;
    puVar9[1] = &UNK_10b212f28;
    *(undefined1 *)(puVar9 + 2) = 0x28;
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    FUN_100e3d46c(param_1 + 0x18);
    unaff_x20 = (undefined8 *****)((long)puVar9 + 1);
  }
  else {
    if (bVar20 != 3) goto LAB_100b8e1a8;
LAB_100b8dff8:
    FUN_1015179ac(&ppppuStack_70,param_1 + 0x2f,param_2);
    pcVar5 = pcStack_58;
    ppppuVar4 = ppppuStack_60;
    ppppuVar3 = ppppuStack_68;
    ppppuVar2 = ppppuStack_70;
    if ((undefined8 *****)ppppuStack_70 == (undefined8 *****)0x16) {
      *(undefined1 *)(param_1 + 0x37) = 3;
      uVar12 = 1;
      goto LAB_100b8e128;
    }
    if ((param_1[0x2f] != 6) && ((param_1[0x2f] != 4 || (*(short *)(param_1 + 0x34) != 0x12)))) {
      (**(code **)(param_1[0x30] + 0x20))(param_1 + 0x33,param_1[0x31],param_1[0x32]);
    }
    if ((undefined8 *****)ppppuVar2 == (undefined8 *****)0x15) {
      unaff_x20 = (undefined8 *****)0x0;
    }
    else {
      ppppuStack_70 = (undefined8 ****)(param_1 + 0x2d);
      ppppuStack_a8 = ppppuVar2;
      ppppuStack_98 = ppppuVar4;
      ppppuStack_a0 = ppppuVar3;
      pcStack_90 = pcVar5;
      ppppuStack_68 = (undefined8 ****)&DAT_100c7b3a0;
      ppppuStack_60 = &ppppuStack_a8;
      pcStack_58 = 
      __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_88,s__failed_to_write_websocket_messa_108ad106d,&ppppuStack_70);
      puVar8 = (undefined8 *)_malloc(0x18);
      if (puVar8 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100b8e198:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8e19c);
        (*pcVar5)();
      }
      *puVar8 = uStack_88;
      puVar8[1] = uStack_80;
      puVar8[2] = uStack_78;
      plVar11 = (long *)_malloc(0x18);
      if (plVar11 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100b8e198;
      }
      *plVar11 = (long)puVar8;
      plVar11[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar11 + 2) = 0x28;
      FUN_100de8b24(&ppppuStack_a8);
      unaff_x20 = (undefined8 *****)((long)plVar11 + 1);
    }
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    FUN_100e3d46c(param_1 + 0x18);
  }
  uVar12 = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
LAB_100b8e128:
  auVar25._8_8_ = unaff_x20;
  auVar25._0_8_ = uVar12;
  return auVar25;
}

