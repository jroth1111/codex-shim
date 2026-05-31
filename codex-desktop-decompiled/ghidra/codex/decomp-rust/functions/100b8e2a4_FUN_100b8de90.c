
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100b8de90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong uVar19;
  ulong extraout_x1_04;
  undefined1 uVar20;
  byte bVar21;
  undefined *puVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****unaff_x20;
  long unaff_x21;
  long lVar24;
  byte *pbVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined1 *puStack_118;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined1 *puStack_58;
  
  bVar21 = *(byte *)(param_1 + 0x37);
  if (bVar21 < 2) {
    if (bVar21 != 0) {
      func_0x000108a07af4(&UNK_10b230ca0);
LAB_100b8e1a8:
      uVar13 = func_0x000108a07b10(&UNK_10b230ca0);
      if ((unaff_x21 != 0) && ((*(byte *)((long)param_1 + 0x1b9) & 1) != 0)) {
        _free();
      }
      *(undefined1 *)((long)param_1 + 0x1b9) = 0;
      FUN_100e3d46c(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x37) = 2;
      __Unwind_Resume(uVar13);
      func_0x000108a07bc4();
      auVar27 = func_0x000108a07bc4();
      puVar9 = auVar27._0_8_;
      bVar21 = *(byte *)(puVar9 + 0x37);
      if (bVar21 < 2) {
        if (bVar21 != 0) {
          func_0x000108a07af4(&UNK_10b230ca0);
LAB_100b8e5bc:
          uVar13 = func_0x000108a07b10(&UNK_10b230ca0);
          if ((unaff_x21 != 0) && ((*(byte *)((long)puVar9 + 0x1b9) & 1) != 0)) {
            _free();
          }
          *(undefined1 *)((long)puVar9 + 0x1b9) = 0;
          FUN_100e3d46c(puVar9 + 0x18);
          *(undefined1 *)(puVar9 + 0x37) = 2;
          __Unwind_Resume(uVar13);
          func_0x000108a07bc4();
          auVar27 = func_0x000108a07bc4();
          lVar17 = auVar27._8_8_;
          plVar12 = auVar27._0_8_;
          bVar21 = *(byte *)(lVar17 + 0x1c8);
          if (bVar21 < 3) {
            if (bVar21 != 0) {
              if (bVar21 == 1) {
                func_0x000108a07af4(&UNK_10b230d00);
              }
              uVar13 = func_0x000108a07b10();
              *(undefined1 *)(lVar17 + 0x1c9) = 0;
              if ((*(byte *)(lVar17 + 0x1ca) & 1) != 0) {
                FUN_100d9d514(&plStack_4e8);
              }
              *(undefined1 *)(lVar17 + 0x1ca) = 0;
              if ((*(byte *)(lVar17 + 0x1cb) & 1) != 0) {
                FUN_100e44f40(auStack_6a8);
              }
              *(undefined1 *)(lVar17 + 0x1cb) = 0;
              *(undefined1 *)(lVar17 + 0x1c8) = 2;
              __Unwind_Resume(uVar13);
              func_0x000108a07bc4();
              auVar27 = func_0x000108a07bc4();
              puVar10 = auVar27._8_8_;
              puVar9 = auVar27._0_8_;
              bVar21 = *(byte *)(puVar9 + 0x18);
              if (bVar21 < 2) {
                if (bVar21 == 0) {
                  uVar13 = puVar9[2];
                  pbVar25 = (byte *)((long)puVar9 + 0xc1);
                  *pbVar25 = 0;
                  __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
                            (&uStack_7e0,*puVar9,*(undefined4 *)(puVar9 + 1),&UNK_10b230dc0);
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
                  puVar14 = puVar9 + 3;
                  puVar9[10] = uStack_7a8;
                  puVar9[9] = uStack_7b0;
                  puVar9[0xc] = uStack_798;
                  puVar9[0xb] = uStack_7a0;
                  puVar9[0xe] = uStack_788;
                  puVar9[0xd] = uStack_790;
                  puVar9[0x10] = uStack_778;
                  puVar9[0xf] = uStack_780;
                  puVar9[4] = uStack_7d8;
                  puVar9[3] = uStack_7e0;
                  puVar9[6] = uStack_7c8;
                  puVar9[5] = uStack_7d0;
                  puVar9[8] = uStack_7b8;
                  puVar9[7] = uStack_7c0;
                  puVar9[0x11] = uVar13;
                  *(undefined1 *)(puVar9 + 0x15) = 0;
                  puVar9[0x16] = pbVar25;
                  puVar9[0x17] = puVar14;
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
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100b8ed6c);
                (*pcVar6)();
              }
              if (bVar21 != 3) goto LAB_100b8ed44;
              pbVar25 = (byte *)puVar9[0x16];
              puVar14 = (undefined8 *)puVar9[0x17];
LAB_100b8eb64:
              lVar17 = (*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
              if (*(char *)(lVar17 + 0x48) != '\x01') {
                if (*(char *)(lVar17 + 0x48) == '\x02') {
                  func_0x000108a82a50(&UNK_10b4cce20);
                  goto LAB_100b8ed68;
                }
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar17,&DAT_100c35d48);
                *(undefined1 *)(lVar17 + 0x48) = 1;
              }
              if (*(char *)(lVar17 + 0x44) == '\x01' && *(char *)(lVar17 + 0x45) == '\0') {
                FUN_10610bbb4(*(undefined8 *)*puVar10,((undefined8 *)*puVar10)[1]);
                uVar19 = extraout_x1;
LAB_100b8ebe4:
                uVar13 = 2;
                uVar20 = 3;
                goto LAB_100b8ed14;
              }
              if ((*(uint *)(lVar17 + 0x38) & 1) == 0) {
                uVar7 = FUN_1060fcce0();
                uVar19 = extraout_x1_00;
              }
              else {
                uVar7 = *(uint *)(lVar17 + 0x3c);
                uVar19 = (ulong)*(uint *)(lVar17 + 0x40);
              }
              uVar7 = uVar7 ^ uVar7 << 0x11;
              uVar18 = (uint)uVar19;
              uVar7 = (uint)(uVar19 >> 0x10) & 0xffff ^ uVar7 >> 7 ^ uVar18 ^ uVar7;
              *(undefined4 *)(lVar17 + 0x38) = 1;
              *(uint *)(lVar17 + 0x3c) = uVar18;
              *(uint *)(lVar17 + 0x40) = uVar7;
              bVar21 = *pbVar25;
              if ((int)(uVar7 + uVar18) < 0) {
                bVar1 = bVar21 & 2;
                if ((bVar21 >> 1 & 1) == 0) {
                  uVar7 = FUN_100fe62c8(puVar14 + 0xe,puVar10);
                  uVar7 = uVar7 & 0xff;
                  if (uVar7 == 2) {
                    bVar21 = *pbVar25;
                    uVar19 = extraout_x1_01;
                    goto LAB_100b8ec48;
                  }
                  bVar21 = 2;
                }
                else {
LAB_100b8ec48:
                  if ((bVar21 & 1) != 0) goto LAB_100b8ecac;
                  auVar27 = func_0x000106114748(puVar14,puVar10);
                  uVar19 = auVar27._8_8_;
                  if ((auVar27._0_8_ & 1) != 0) goto LAB_100b8eca4;
LAB_100b8ecc4:
                  uVar7 = 2;
                  bVar21 = 1;
                }
LAB_100b8ecd4:
                *pbVar25 = *pbVar25 | bVar21;
              }
              else {
                bVar1 = bVar21 & 1;
                if ((bVar21 & 1) == 0) {
                  iVar8 = func_0x000106114748(puVar14,puVar10);
                  if (iVar8 != 0) {
                    bVar21 = *pbVar25;
                    uVar19 = extraout_x1_02;
                    goto LAB_100b8ec84;
                  }
                  goto LAB_100b8ecc4;
                }
LAB_100b8ec84:
                if ((bVar21 >> 1 & 1) == 0) {
                  uVar7 = FUN_100fe62c8(puVar14 + 0xe,puVar10);
                  uVar7 = uVar7 & 0xff;
                  uVar19 = extraout_x1_03;
                  if (uVar7 != 2) {
                    bVar21 = 2;
                    goto LAB_100b8ecd4;
                  }
LAB_100b8eca4:
                  uVar13 = 2;
                  uVar20 = 3;
                  goto LAB_100b8ed14;
                }
LAB_100b8ecac:
                if (bVar1 == 0) goto LAB_100b8ebe4;
                uVar7 = 4;
              }
              FUN_100de8a5c(puVar9 + 3);
              uVar18 = uVar7 - 2;
              if (uVar7 < 2) {
                uVar18 = 1;
              }
              if (uVar18 == 0) {
                uVar13 = 0;
              }
              else {
                if ((uVar18 & 0xff) != 1) goto LAB_100b8ed50;
                uVar13 = 1;
              }
              uVar20 = 1;
              uVar19 = extraout_x1_04;
LAB_100b8ed14:
              *(undefined1 *)(puVar9 + 0x18) = uVar20;
              auVar27._8_8_ = uVar19;
              auVar27._0_8_ = uVar13;
              return auVar27;
            }
            *(undefined2 *)(lVar17 + 0x1c9) = 0;
            uVar13 = *(undefined8 *)(lVar17 + 0x1c0);
            *(undefined1 *)(lVar17 + 0x1cb) = 1;
            _memcpy(auStack_6a8,lVar17,0x1c0);
            lStack_4d8 = 1;
            lStack_4e0 = 1;
            lStack_4a8 = -0x7ffffffffffffffe;
            lStack_4b0 = 0;
            plVar15 = (long *)_malloc(0xa0);
            if (plVar15 == (long *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
LAB_100b8e9d8:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100b8e9dc);
              (*pcVar6)();
            }
            plVar15[0xd] = lStack_478;
            plVar15[0xc] = lStack_480;
            plVar15[0xf] = lStack_468;
            plVar15[0xe] = lStack_470;
            plVar15[0x11] = lStack_458;
            plVar15[0x10] = lStack_460;
            plVar15[0x13] = lStack_448;
            plVar15[0x12] = lStack_450;
            plVar15[5] = lStack_4b8;
            plVar15[4] = lStack_4c0;
            plVar15[7] = lStack_4a8;
            plVar15[6] = lStack_4b0;
            plVar15[9] = lStack_498;
            plVar15[8] = lStack_4a0;
            plVar15[0xb] = lStack_488;
            plVar15[10] = lStack_490;
            plVar15[1] = lStack_4d8;
            *plVar15 = lStack_4e0;
            plVar15[3] = lStack_4c8;
            plVar15[2] = lStack_4d0;
            lVar24 = *plVar15;
            *plVar15 = lVar24 + 1;
            if (lVar24 < 0) goto LAB_100b8e9d8;
            *(undefined2 *)(lVar17 + 0x1c9) = 0x101;
            *(long **)(lVar17 + 0x1d0) = plVar15;
            *(undefined1 *)(lVar17 + 0x1cb) = 0;
            plStack_4e8 = plVar15;
            _memcpy(&lStack_4e0,lVar17,0x1c0);
            lVar24 = _malloc(0x1c0);
            if (lVar24 == 0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1c0);
              goto LAB_100b8e9d8;
            }
            _memcpy(lVar24,lVar17,0x1c0);
            *(undefined1 *)(lVar17 + 0x1ca) = 0;
            *(undefined8 *)(lVar17 + 0x1d8) = 0x8000000000000000;
            *(long *)(lVar17 + 0x1e0) = lVar24;
            *(long **)(lVar17 + 0x1e8) = plVar15;
            *(undefined8 *)(lVar17 + 0x260) = uVar13;
            *(undefined1 *)(lVar17 + 0x370) = 0;
LAB_100b8e7e8:
            auVar27 = FUN_100fcf8d4(&lStack_4e0,lVar17 + 0x1d8,param_3);
            lVar24 = lStack_4e0;
            if (lStack_4e0 == -0x7ffffffffffffffa) {
              *plVar12 = -0x7ffffffffffffffe;
              uVar20 = 3;
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
            FUN_100d1cef4(lVar17 + 0x1d8);
            if (lVar24 == -0x7ffffffffffffffb) {
              *(undefined1 *)(lVar17 + 0x1c9) = 0;
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
            lStack_4e0 = lVar24;
            lVar16 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xb,&UNK_108cbf623,0x2a);
            auVar27 = FUN_100e08810(&lStack_4e0);
LAB_100b8e92c:
            if ((*(byte *)(lVar17 + 0x1c9) & 1) != 0) {
              auVar27 = FUN_100d9e13c(lVar17 + 0x1d0);
            }
            *(undefined1 *)(lVar17 + 0x1c9) = 0;
            lVar24 = -0x7fffffffffffffff;
          }
          else {
            if (bVar21 == 3) goto LAB_100b8e7e8;
LAB_100b8e85c:
            auVar27 = FUN_101402244(&lStack_4e0,lVar17 + 0x1d0,param_3);
            lVar16 = lStack_4d8;
            lVar24 = lStack_4e0;
            if (lStack_4e0 == -0x7ffffffffffffffd) {
              *plVar12 = -0x7ffffffffffffffe;
              uVar20 = 4;
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
            auVar27 = FUN_100d9e13c(lVar17 + 0x1d0);
            if (lVar24 == -0x7ffffffffffffffe) {
              auVar27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xb,&UNK_108cbf6a2,0x2b);
              lVar16 = auVar27._0_8_;
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
            *(undefined1 *)(lVar17 + 0x1c9) = 0;
          }
          *(undefined2 *)(lVar17 + 0x1ca) = 0;
          *plVar12 = lVar24;
          plVar12[1] = lVar16;
          plVar12[7] = lStack_218;
          plVar12[6] = lStack_220;
          plVar12[9] = lStack_208;
          plVar12[8] = lStack_210;
          plVar12[0xb] = lStack_1f8;
          plVar12[10] = lStack_200;
          plVar12[0xc] = lStack_1f0;
          uVar20 = 1;
          plVar12[3] = lStack_238;
          plVar12[2] = lStack_240;
          plVar12[5] = lStack_228;
          plVar12[4] = lStack_230;
LAB_100b8e998:
          *(undefined1 *)(lVar17 + 0x1c8) = uVar20;
          return auVar27;
        }
        *(undefined1 *)((long)puVar9 + 0x1b9) = 0;
        puVar9[0x29] = puVar9[0x11];
        puVar9[0x28] = puVar9[0x10];
        puVar9[0x2b] = puVar9[0x13];
        puVar9[0x2a] = puVar9[0x12];
        uVar13 = puVar9[0x15];
        puVar9[0x21] = puVar9[9];
        puVar9[0x20] = puVar9[8];
        puVar9[0x23] = puVar9[0xb];
        puVar9[0x22] = puVar9[10];
        puVar9[0x25] = puVar9[0xd];
        puVar9[0x24] = puVar9[0xc];
        puVar9[0x27] = puVar9[0xf];
        puVar9[0x26] = puVar9[0xe];
        puVar9[0x19] = puVar9[1];
        puVar9[0x18] = *puVar9;
        puVar9[0x1b] = puVar9[3];
        puVar9[0x1a] = puVar9[2];
        puVar9[0x1d] = puVar9[5];
        puVar9[0x1c] = puVar9[4];
        puVar9[0x1f] = puVar9[7];
        puVar9[0x1e] = puVar9[6];
        puVar9[0x2c] = puVar9[0x14];
        puVar9[0x2d] = puVar9[0x16];
        puVar9[0x2e] = puVar9[0x17];
        func_0x000100658d90(&ppppuStack_130,puVar9 + 0x18);
        ppppuVar3 = ppppuStack_120;
        unaff_x20 = (undefined8 *****)ppppuStack_128;
        ppppuVar2 = ppppuStack_130;
        if ((undefined8 *****)ppppuStack_130 != (undefined8 *****)0x8000000000000000) {
          *(undefined1 *)((long)puVar9 + 0x1b9) = 0;
          pppppuVar23 = unaff_x20;
          if (ppppuStack_120 == ppppuStack_130) {
            if ((undefined8 *****)ppppuStack_130 == (undefined8 *****)0x0) {
              puVar22 = &UNK_10b205a90;
              pppppuVar11 = (undefined8 *****)0x0;
              pppppuVar23 = (undefined8 *****)0x1;
            }
            else if (((ulong)ppppuStack_128 & 1) == 0) {
              puVar22 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
              pppppuVar11 = (undefined8 *****)((ulong)ppppuStack_128 | 1);
            }
            else {
              puVar22 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
              pppppuVar11 = (undefined8 *****)ppppuStack_128;
            }
          }
          else {
            pppppuVar11 = (undefined8 *****)_malloc(0x18);
            if (pppppuVar11 == (undefined8 *****)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
              goto LAB_100b8e5ac;
            }
            *pppppuVar11 = unaff_x20;
            pppppuVar11[1] = ppppuVar2;
            pppppuVar11[2] = (undefined8 ****)0x1;
            puVar22 = &UNK_10b205b08;
          }
          puVar9[0x2f] = 0;
          puVar9[0x30] = puVar22;
          puVar9[0x31] = pppppuVar23;
          puVar9[0x32] = ppppuVar3;
          puVar9[0x33] = pppppuVar11;
          puVar9[0x36] = uVar13;
          goto LAB_100b8e40c;
        }
        ppppuStack_168 = ppppuStack_128;
        puVar10 = (undefined8 *)_malloc(8);
        if (puVar10 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100b8e5ac;
        }
        *puVar10 = unaff_x20;
        puVar14 = (undefined8 *)_malloc(0x18);
        if (puVar14 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100b8e5ac;
        }
        *puVar14 = puVar10;
        puVar14[1] = &UNK_10b212f28;
        *(undefined1 *)(puVar14 + 2) = 0x28;
        *(undefined1 *)((long)puVar9 + 0x1b9) = 0;
        FUN_100e3d46c(puVar9 + 0x18);
        unaff_x20 = (undefined8 *****)((long)puVar14 + 1);
      }
      else {
        if (bVar21 != 3) goto LAB_100b8e5bc;
LAB_100b8e40c:
        FUN_101517acc(&ppppuStack_130,puVar9 + 0x2f,auVar27._8_8_);
        puVar5 = puStack_118;
        ppppuVar4 = ppppuStack_120;
        ppppuVar3 = ppppuStack_128;
        ppppuVar2 = ppppuStack_130;
        if ((undefined8 *****)ppppuStack_130 == (undefined8 *****)0x16) {
          *(undefined1 *)(puVar9 + 0x37) = 3;
          uVar13 = 1;
          goto LAB_100b8e53c;
        }
        if ((puVar9[0x2f] != 6) && ((puVar9[0x2f] != 4 || (*(short *)(puVar9 + 0x34) != 0x12)))) {
          (**(code **)(puVar9[0x30] + 0x20))(puVar9 + 0x33,puVar9[0x31],puVar9[0x32]);
        }
        if ((undefined8 *****)ppppuVar2 == (undefined8 *****)0x15) {
          unaff_x20 = (undefined8 *****)0x0;
        }
        else {
          ppppuStack_130 = (undefined8 ****)(puVar9 + 0x2d);
          ppppuStack_168 = ppppuVar2;
          ppppuStack_158 = ppppuVar4;
          ppppuStack_160 = ppppuVar3;
          puStack_150 = puVar5;
          ppppuStack_128 = (undefined8 ****)&DAT_100c7b3a0;
          ppppuStack_120 = &ppppuStack_168;
          puStack_118 = &
                        __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&uStack_148,s__failed_to_write_websocket_messa_108ad106d,&ppppuStack_130);
          puVar10 = (undefined8 *)_malloc(0x18);
          if (puVar10 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100b8e5ac:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100b8e5b0);
            (*pcVar6)();
          }
          *puVar10 = uStack_148;
          puVar10[1] = uStack_140;
          puVar10[2] = uStack_138;
          plVar12 = (long *)_malloc(0x18);
          if (plVar12 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100b8e5ac;
          }
          *plVar12 = (long)puVar10;
          plVar12[1] = (long)&UNK_10b209118;
          *(undefined1 *)(plVar12 + 2) = 0x28;
          FUN_100de8b24(&ppppuStack_168);
          unaff_x20 = (undefined8 *****)((long)plVar12 + 1);
        }
        *(undefined1 *)((long)puVar9 + 0x1b9) = 0;
        FUN_100e3d46c(puVar9 + 0x18);
      }
      uVar13 = 0;
      *(undefined1 *)(puVar9 + 0x37) = 1;
LAB_100b8e53c:
      auVar28._8_8_ = unaff_x20;
      auVar28._0_8_ = uVar13;
      return auVar28;
    }
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    param_1[0x29] = param_1[0x11];
    param_1[0x28] = param_1[0x10];
    param_1[0x2b] = param_1[0x13];
    param_1[0x2a] = param_1[0x12];
    uVar13 = param_1[0x15];
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
      pppppuVar23 = unaff_x20;
      if (ppppuStack_60 == ppppuStack_70) {
        if ((undefined8 *****)ppppuStack_70 == (undefined8 *****)0x0) {
          puVar22 = &UNK_10b205a90;
          pppppuVar11 = (undefined8 *****)0x0;
          pppppuVar23 = (undefined8 *****)0x1;
        }
        else if (((ulong)ppppuStack_68 & 1) == 0) {
          puVar22 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          pppppuVar11 = (undefined8 *****)((ulong)ppppuStack_68 | 1);
        }
        else {
          puVar22 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          pppppuVar11 = (undefined8 *****)ppppuStack_68;
        }
      }
      else {
        pppppuVar11 = (undefined8 *****)_malloc(0x18);
        if (pppppuVar11 == (undefined8 *****)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100b8e198;
        }
        *pppppuVar11 = unaff_x20;
        pppppuVar11[1] = ppppuVar2;
        pppppuVar11[2] = (undefined8 ****)0x1;
        puVar22 = &UNK_10b205b08;
      }
      param_1[0x2f] = 0;
      param_1[0x30] = puVar22;
      param_1[0x31] = pppppuVar23;
      param_1[0x32] = ppppuVar3;
      param_1[0x33] = pppppuVar11;
      param_1[0x36] = uVar13;
      goto LAB_100b8dff8;
    }
    ppppuStack_a8 = ppppuStack_68;
    puVar9 = (undefined8 *)_malloc(8);
    if (puVar9 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100b8e198;
    }
    *puVar9 = unaff_x20;
    puVar10 = (undefined8 *)_malloc(0x18);
    if (puVar10 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100b8e198;
    }
    *puVar10 = puVar9;
    puVar10[1] = &UNK_10b212f28;
    *(undefined1 *)(puVar10 + 2) = 0x28;
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    FUN_100e3d46c(param_1 + 0x18);
    unaff_x20 = (undefined8 *****)((long)puVar10 + 1);
  }
  else {
    if (bVar21 != 3) goto LAB_100b8e1a8;
LAB_100b8dff8:
    FUN_1015179ac(&ppppuStack_70,param_1 + 0x2f,param_2);
    puVar5 = puStack_58;
    ppppuVar4 = ppppuStack_60;
    ppppuVar3 = ppppuStack_68;
    ppppuVar2 = ppppuStack_70;
    if ((undefined8 *****)ppppuStack_70 == (undefined8 *****)0x16) {
      *(undefined1 *)(param_1 + 0x37) = 3;
      uVar13 = 1;
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
      puStack_90 = puVar5;
      ppppuStack_68 = (undefined8 ****)&DAT_100c7b3a0;
      ppppuStack_60 = &ppppuStack_a8;
      puStack_58 = &
                   __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_88,s__failed_to_write_websocket_messa_108ad106d,&ppppuStack_70);
      puVar9 = (undefined8 *)_malloc(0x18);
      if (puVar9 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100b8e198:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100b8e19c);
        (*pcVar6)();
      }
      *puVar9 = uStack_88;
      puVar9[1] = uStack_80;
      puVar9[2] = uStack_78;
      plVar12 = (long *)_malloc(0x18);
      if (plVar12 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100b8e198;
      }
      *plVar12 = (long)puVar9;
      plVar12[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar12 + 2) = 0x28;
      FUN_100de8b24(&ppppuStack_a8);
      unaff_x20 = (undefined8 *****)((long)plVar12 + 1);
    }
    *(undefined1 *)((long)param_1 + 0x1b9) = 0;
    FUN_100e3d46c(param_1 + 0x18);
  }
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
LAB_100b8e128:
  auVar26._8_8_ = unaff_x20;
  auVar26._0_8_ = uVar13;
  return auVar26;
}

