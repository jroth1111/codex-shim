
/* WARNING: Possible PIC construction at 0x000100638f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100638f5c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_101486eb8(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  code *pcVar2;
  ulong **ppuVar3;
  long lVar4;
  ulong *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x1;
  ulong *puVar9;
  ulong *puVar10;
  bool bVar11;
  byte bVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong uVar17;
  long lVar18;
  ulong *unaff_x24;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  ulong *puStack_340;
  long lStack_338;
  long lStack_330;
  undefined2 uStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  undefined8 *******pppppppuStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong *puStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ******ppppppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    puVar7 = (undefined8 *)func_0x000108a4a0f8(&stack0xffffffffffffffd8,0,0);
    return puVar7;
  }
  if (*param_1 == -0x8000000000000000) {
    puVar5 = (ulong *)&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    puVar23 = param_4;
  }
  else {
    puVar5 = param_3;
    puVar23 = param_4;
    lVar4 = _malloc(param_3);
    unaff_x20 = param_3;
    unaff_x21 = param_4;
    unaff_x23 = param_2;
    if (lVar4 != 0) {
      _memcpy(lVar4,param_2,param_3);
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = lVar4;
      param_1[0xb] = (long)param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
      uStack_e0 = (ulong)param_4 & 0xff;
      uStack_e8 = 0x8000000000000000;
      if (((uint)param_4 & 0xff) != 2) {
        uStack_e8 = 0x8000000000000001;
      }
      puStack_100 = param_3;
      FUN_101497a9c(auStack_a0,param_1,&puStack_100,&uStack_e8);
      uStack_148 = uStack_90;
      lStack_150 = lStack_98;
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_110 = uStack_58;
      if (lStack_98 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_150);
      }
      return (undefined8 *)0x0;
    }
  }
  auVar28 = FUN_107c03c64(1,unaff_x20);
  plVar13 = auVar28._0_8_;
  uStack_158 = 0x100638604;
  ppppppuStack_160 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (*plVar13 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    puVar9 = puVar23;
    puVar10 = param_5;
  }
  else {
    puVar9 = puVar23;
    puVar10 = param_5;
    lVar4 = _malloc(puVar5);
    unaff_x20 = param_5;
    unaff_x21 = puVar23;
    unaff_x22 = puVar5;
    unaff_x24 = auVar28._8_8_;
    if (lVar4 != 0) {
      _memcpy(lVar4,auVar28._8_8_,puVar5);
      if (plVar13[9] != -0x8000000000000000 && plVar13[9] != 0) {
        _free(plVar13[10]);
      }
      plVar13[10] = lVar4;
      plVar13[0xb] = (long)puVar5;
      plVar13[9] = -0x8000000000000000;
      lStack_240 = plVar13[0xb];
      lStack_248 = plVar13[10];
      puStack_250 = puVar5;
      func_0x000100633f00(&lStack_238,puVar23,param_5);
      if (lStack_238 == -0x7ffffffffffffffb) {
        _free(lStack_248);
      }
      else {
        FUN_101497a9c(auStack_1f0,plVar13,&puStack_250,&lStack_238);
        uStack_298 = uStack_1e0;
        lStack_2a0 = lStack_1e8;
        uStack_288 = uStack_1d0;
        uStack_290 = uStack_1d8;
        uStack_278 = uStack_1c0;
        uStack_280 = uStack_1c8;
        uStack_268 = uStack_1b0;
        uStack_270 = uStack_1b8;
        uStack_260 = uStack_1a8;
        if (lStack_1e8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_2a0);
        }
        puStack_230 = (undefined8 *)0x0;
      }
      return puStack_230;
    }
  }
  puVar5 = (ulong *)FUN_107c03c64(1,unaff_x22);
  _free(lStack_248);
  auVar28 = __Unwind_Resume(puVar5);
  plVar13 = auVar28._8_8_;
  pcVar6 = auVar28._0_8_;
  ppuVar3 = &puStack_340;
  uStack_2a8 = 0x10063876c;
  pppppppuVar24 = &pppppppuStack_2b0;
  pppppppuStack_2b0 = &ppppppuStack_160;
  puVar7 = (undefined8 *)FUN_1013fde34(pcVar6,&UNK_108cb1c3d,5);
  if (puVar7 != (undefined8 *)0x0) {
    return puVar7;
  }
  if (*pcVar6 == '\x01') {
LAB_100639098:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
LAB_1006390b0:
    puStack_318 = unaff_x24;
    puStack_310 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
LAB_1006390bc:
    puStack_318 = unaff_x21;
    puStack_310 = unaff_x23;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
LAB_1006390c8:
    puStack_310 = auVar28._8_8_;
    puVar20 = auVar28._0_8_;
    puStack_318 = unaff_x24;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
LAB_1006390d4:
    puStack_318 = puVar20;
    puStack_310 = unaff_x22;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
  }
  else {
    puVar23 = *(ulong **)(pcVar6 + 8);
    plVar15 = (long *)*puVar23;
    auVar28._8_8_ = plVar13;
    auVar28._0_8_ = plVar15;
    unaff_x22 = (ulong *)plVar15[1];
    unaff_x21 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x23 = (ulong *)(plVar15[2] - (long)unaff_x22);
    unaff_x24 = unaff_x22;
    if (unaff_x23 < unaff_x21) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar15,unaff_x21,1);
      unaff_x23 = (ulong *)(plVar15[2] - plVar15[1]);
      unaff_x24 = (ulong *)plVar15[1];
    }
    _memset(*plVar15 + (long)unaff_x24,0x3a,unaff_x21);
    if (unaff_x23 < unaff_x21) goto LAB_1006390bc;
    plVar15[1] = (long)((long)unaff_x24 + (long)unaff_x21);
    if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100639014;
    if (*plVar13 == -0x8000000000000000) {
      plVar13 = (long *)*puVar23;
      lVar4 = plVar13[2];
      puVar8 = &UNK_108c78dd4;
      puVar23 = (ulong *)0x4;
      uVar17 = plVar13[1];
      while( true ) {
        unaff_x21 = puVar23;
        if ((ulong *)(uVar17 ^ 0x7fffffffffffffff) <= puVar23) {
          unaff_x21 = (ulong *)(uVar17 ^ 0x7fffffffffffffff);
        }
        puVar20 = (ulong *)(lVar4 - uVar17);
        uVar22 = uVar17;
        if (puVar20 < unaff_x21) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar13,unaff_x21,1);
          uVar22 = plVar13[1];
          lVar4 = plVar13[2];
          puVar20 = (ulong *)(lVar4 - uVar22);
        }
        _memcpy(*plVar13 + uVar22,puVar8,unaff_x21);
        if (puVar20 < unaff_x21) break;
        plVar13[1] = uVar22 + (long)unaff_x21;
        if (uVar17 == 0x7fffffffffffffff) goto LAB_100639014;
        puVar8 = puVar8 + (long)unaff_x21;
        puVar23 = (ulong *)((long)puVar23 - (long)unaff_x21);
        uVar17 = uVar22 + (long)unaff_x21;
        if (puVar23 == (ulong *)0x0) {
          return (undefined8 *)0x0;
        }
      }
LAB_10063904c:
      puStack_318 = unaff_x21;
      puStack_310 = puVar20;
      __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
LAB_100639058:
      puStack_318 = (ulong *)0xa;
      puVar7 = (undefined8 *)FUN_107c05dbc(&puStack_318,0,0);
      return puVar7;
    }
    lVar4 = plVar13[1];
    unaff_x21 = (ulong *)plVar13[2];
    plVar13 = (long *)*puVar23;
    lVar1 = plVar13[1];
    puVar20 = (ulong *)(ulong)(lVar1 != 0x7fffffffffffffff);
    unaff_x22 = (ulong *)(plVar13[2] - lVar1);
    lVar18 = lVar1;
    if (unaff_x22 < puVar20) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar13,puVar20,1);
      unaff_x22 = (ulong *)(plVar13[2] - plVar13[1]);
      lVar18 = plVar13[1];
    }
    _memset(*plVar13 + lVar18,0x5b,puVar20);
    if (unaff_x22 < puVar20) goto LAB_1006390d4;
    unaff_x22 = (ulong *)(lVar18 + (long)puVar20);
    plVar13[1] = (long)unaff_x22;
    if (lVar1 == 0x7fffffffffffffff) goto LAB_100639014;
    if (unaff_x21 != (ulong *)0x0) {
      lStack_338 = lVar4 + (long)unaff_x21 * 0x48;
      bVar11 = true;
      unaff_x21 = (ulong *)0x7fffffffffffffff;
      puStack_340 = puVar23;
LAB_100638968:
      unaff_x23 = (ulong *)*puVar23;
      if (!bVar11) {
        puVar14 = (ulong *)unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(puVar14 != (ulong *)0x7fffffffffffffff);
        puVar16 = (ulong *)(unaff_x23[2] - (long)puVar14);
        unaff_x22 = puVar14;
        if (puVar16 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar16 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          unaff_x22 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)unaff_x22,0x2c,unaff_x24);
        if (unaff_x24 <= puVar16) {
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar14 != (ulong *)0x7fffffffffffffff) {
            unaff_x23 = (ulong *)*puVar23;
            goto LAB_1006389d8;
          }
          goto LAB_100639014;
        }
LAB_10063908c:
        auVar28._8_8_ = puVar14;
        auVar28._0_8_ = puVar16;
        puStack_318 = unaff_x24;
        puStack_310 = puVar16;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
        goto LAB_100639098;
      }
LAB_1006389d8:
      unaff_x24 = (ulong *)(lVar4 + 0x18);
      puVar16 = (ulong *)*unaff_x24;
      puVar14 = *(ulong **)(lVar4 + 0x30);
      auVar28._8_8_ = puVar14;
      auVar28._0_8_ = puVar16;
      unaff_x22 = (ulong *)unaff_x23[1];
      puVar19 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
      puVar21 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
      puVar20 = unaff_x22;
      lStack_330 = lVar4;
      if (puVar21 < puVar19) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar19,1);
        puVar21 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar20 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar20,0x7b,puVar19);
      lVar4 = lStack_330;
      if (puVar21 < puVar19) {
LAB_100639080:
        puStack_318 = puVar19;
        puStack_310 = puVar21;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
        goto LAB_10063908c;
      }
      unaff_x23[1] = (long)puVar20 + (long)puVar19;
      if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
      uStack_328 = 0x100;
      puVar9 = *(ulong **)(lStack_330 + 8);
      puVar10 = *(ulong **)(lStack_330 + 0x10);
      puStack_320 = puVar23;
      puVar7 = (undefined8 *)func_0x0001006435cc(&uStack_328,&UNK_108cb16c3,3,puVar9,puVar10);
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
      if (puVar16 != (ulong *)0x8000000000000000) {
        if ((byte)uStack_328 == '\x01') goto LAB_100639058;
        puVar9 = unaff_x24;
        puVar7 = (undefined8 *)FUN_10064099c(&uStack_328,&UNK_108c98350,8,unaff_x24);
        if (puVar7 != (undefined8 *)0x0) {
          return puVar7;
        }
      }
      bVar12 = (byte)uStack_328;
      if (puVar14 == (ulong *)0x8000000000000000) {
LAB_100638ed8:
        if (((bVar12 & 1) == 0) && (uStack_328._1_1_ != '\0')) {
          unaff_x23 = (ulong *)*puStack_320;
          puVar14 = (ulong *)unaff_x23[1];
          unaff_x24 = (ulong *)(ulong)(puVar14 != (ulong *)0x7fffffffffffffff);
          puVar16 = (ulong *)(unaff_x23[2] - (long)puVar14);
          unaff_x22 = puVar14;
          if (puVar16 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar16 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
            unaff_x22 = (ulong *)unaff_x23[1];
          }
          _memset(*unaff_x23 + (long)unaff_x22,0x7d,unaff_x24);
          if (puVar16 < unaff_x24) goto LAB_10063908c;
          unaff_x23[1] = (long)unaff_x22 + (long)unaff_x24;
          if (puVar14 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        }
        bVar11 = false;
        lVar4 = lVar4 + 0x48;
        if (lVar4 == lStack_338) goto LAB_100638fec;
        goto LAB_100638968;
      }
      if ((uStack_328 & 1) != 0) goto LAB_100639058;
      puVar7 = (undefined8 *)FUN_1013fde34(&uStack_328,&UNK_108cb16c6,5);
      puVar14 = puStack_320;
      if (puVar7 != (undefined8 *)0x0) {
        return puVar7;
      }
      if ((byte)uStack_328 == '\x01') goto LAB_100639098;
      unaff_x23 = (ulong *)*puStack_320;
      puVar16 = (ulong *)unaff_x23[1];
      auVar28._8_8_ = puStack_320;
      auVar28._0_8_ = puVar16;
      unaff_x24 = (ulong *)(ulong)(puVar16 != (ulong *)0x7fffffffffffffff);
      unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar16);
      puVar20 = puVar16;
      if (unaff_x22 < unaff_x24) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
        puVar20 = (ulong *)unaff_x23[1];
      }
      _memset(*unaff_x23 + (long)puVar20,0x3a,unaff_x24);
      if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
      unaff_x23[1] = (long)puVar20 + (long)unaff_x24;
      if (puVar16 != (ulong *)0x7fffffffffffffff) {
        unaff_x23 = (ulong *)*puVar14;
        puVar14 = *(ulong **)(lVar4 + 0x38);
        puVar16 = *(ulong **)(lVar4 + 0x40);
        auVar28._8_8_ = puVar14;
        auVar28._0_8_ = puVar16;
        uVar17 = unaff_x23[1];
        unaff_x24 = (ulong *)(ulong)(uVar17 != 0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - uVar17);
        uVar22 = uVar17;
        if (unaff_x22 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
          uVar22 = unaff_x23[1];
        }
        _memset(*unaff_x23 + uVar22,0x5b,unaff_x24);
        if (unaff_x22 < unaff_x24) goto LAB_1006390b0;
        unaff_x22 = (ulong *)(uVar22 + (long)unaff_x24);
        unaff_x23[1] = (ulong)unaff_x22;
        if (uVar17 == 0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar16 == (ulong *)0x0) {
          unaff_x24 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
          puVar14 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
          puVar16 = unaff_x22;
          if (puVar14 < unaff_x24) {
            __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
            puVar16 = (ulong *)unaff_x23[1];
            puVar14 = (ulong *)(unaff_x23[2] - (long)puVar16);
          }
          auVar28._8_8_ = puVar14;
          auVar28._0_8_ = puVar16;
          _memset(*unaff_x23 + (long)puVar16,0x5d,unaff_x24);
          if (unaff_x24 <= puVar14) {
            unaff_x23[1] = (long)puVar16 + (long)unaff_x24;
            if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
              bVar12 = 0;
              lVar4 = lStack_330;
              goto LAB_100638ed8;
            }
            goto LAB_100638f50;
          }
          goto LAB_1006390c8;
        }
        uVar17 = puVar14[1];
        uVar22 = puVar14[2];
        puVar20 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
        puVar19 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
        puVar23 = unaff_x22;
        if (puVar19 < puVar20) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar20,1);
          puVar23 = (ulong *)unaff_x23[1];
          puVar19 = (ulong *)(unaff_x23[2] - (long)puVar23);
        }
        _memset(*unaff_x23 + (long)puVar23,0x22,puVar20);
        if (puVar19 < puVar20) {
LAB_10063903c:
          puStack_318 = (ulong *)0x1;
          puStack_310 = (ulong *)0x0;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
          goto LAB_10063904c;
        }
        unaff_x23[1] = (long)puVar23 + (long)puVar20;
        if (unaff_x22 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        puVar8 = (undefined *)FUN_1006572d8(unaff_x23,uVar17,uVar22);
        if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
        puVar23 = (ulong *)unaff_x23[1];
        puVar19 = (ulong *)(ulong)(puVar23 != (ulong *)0x7fffffffffffffff);
        unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar23);
        puVar20 = puVar23;
        if (unaff_x22 < puVar19) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar19,1);
          unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
          puVar20 = (ulong *)unaff_x23[1];
        }
        _memset(*unaff_x23 + (long)puVar20,0x22,puVar19);
        if (unaff_x22 < puVar19) goto LAB_10063903c;
        puVar20 = (ulong *)((long)puVar20 + (long)puVar19);
        unaff_x23[1] = (ulong)puVar20;
        if (puVar23 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
        if (puVar16 != (ulong *)0x1) {
          lVar4 = (long)puVar16 * 0x18;
          puVar16 = puVar14 + 5;
          puVar14 = (ulong *)(lVar4 + -0x18);
          do {
            unaff_x24 = (ulong *)puVar16[-1];
            puVar19 = (ulong *)*puVar16;
            puVar21 = (ulong *)(ulong)(puVar20 != (ulong *)0x7fffffffffffffff);
            puVar23 = (ulong *)(unaff_x23[2] - (long)puVar20);
            unaff_x22 = puVar20;
            if (puVar23 < puVar21) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar21,1);
              unaff_x22 = (ulong *)unaff_x23[1];
              puVar23 = (ulong *)(unaff_x23[2] - (long)unaff_x22);
            }
            _memset(*unaff_x23 + (long)unaff_x22,0x2c,puVar21);
            if (puVar23 < puVar21) {
              puStack_318 = puVar21;
              puStack_310 = puVar23;
              __ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
              goto LAB_100639080;
            }
            uVar17 = (long)unaff_x22 + (long)puVar21;
            unaff_x23[1] = uVar17;
            if (puVar20 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar20 = (ulong *)(ulong)(uVar17 != 0x7fffffffffffffff);
            puVar23 = (ulong *)(unaff_x23[2] - uVar17);
            uVar22 = uVar17;
            if (puVar23 < puVar20) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar20,1);
              puVar23 = (ulong *)(unaff_x23[2] - unaff_x23[1]);
              uVar22 = unaff_x23[1];
            }
            _memset(*unaff_x23 + uVar22,0x22,puVar20);
            if (puVar23 < puVar20) goto LAB_10063903c;
            unaff_x23[1] = uVar22 + (long)puVar20;
            if (uVar17 == 0x7fffffffffffffff) goto LAB_100638f50;
            puVar8 = (undefined *)FUN_1006572d8(unaff_x23,unaff_x24,puVar19);
            if (puVar8 != (undefined *)0x0) goto LAB_100638f58;
            puVar23 = (ulong *)unaff_x23[1];
            puVar19 = (ulong *)(ulong)(puVar23 != (ulong *)0x7fffffffffffffff);
            unaff_x22 = (ulong *)(unaff_x23[2] - (long)puVar23);
            puVar20 = puVar23;
            if (unaff_x22 < puVar19) {
              __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,puVar19,1);
              unaff_x22 = (ulong *)(unaff_x23[2] - (long)unaff_x23[1]);
              puVar20 = (ulong *)unaff_x23[1];
            }
            _memset(*unaff_x23 + (long)puVar20,0x22,puVar19);
            if (unaff_x22 < puVar19) goto LAB_10063903c;
            puVar20 = (ulong *)((long)puVar20 + (long)puVar19);
            unaff_x23[1] = (ulong)puVar20;
            if (puVar23 == (ulong *)0x7fffffffffffffff) goto LAB_100638f50;
            puVar16 = puVar16 + 3;
            puVar14 = puVar14 + -3;
          } while (puVar14 != (ulong *)0x0);
        }
        unaff_x24 = (ulong *)(ulong)(puVar20 != (ulong *)0x7fffffffffffffff);
        puVar14 = (ulong *)(unaff_x23[2] - (long)puVar20);
        puVar16 = puVar20;
        if (puVar14 < unaff_x24) {
          __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(unaff_x23,unaff_x24,1);
          puVar16 = (ulong *)unaff_x23[1];
          puVar14 = (ulong *)(unaff_x23[2] - (long)puVar16);
        }
        auVar28._8_8_ = puVar14;
        auVar28._0_8_ = puVar16;
        _memset(*unaff_x23 + (long)puVar16,0x5d,unaff_x24);
        if (puVar14 < unaff_x24) goto LAB_1006390c8;
        unaff_x23[1] = (long)puVar16 + (long)unaff_x24;
        if (puVar20 != (ulong *)0x7fffffffffffffff) {
          bVar12 = 0;
          lVar4 = lStack_330;
          puVar23 = puStack_340;
          goto LAB_100638ed8;
        }
      }
LAB_100638f50:
      puVar8 = &UNK_10b233fc8;
LAB_100638f58:
      uVar25 = 0x100638f5c;
      goto SUB_107c05db8;
    }
    puVar20 = (ulong *)(ulong)(unaff_x22 != (ulong *)0x7fffffffffffffff);
    unaff_x21 = (ulong *)(plVar13[2] - (long)unaff_x22);
    puVar23 = unaff_x22;
    if (unaff_x21 < puVar20) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(plVar13,puVar20,1);
      unaff_x21 = (ulong *)(plVar13[2] - plVar13[1]);
      puVar23 = (ulong *)plVar13[1];
    }
    _memset((undefined *)(*plVar13 + (long)puVar23),0x5d,puVar20);
    if (puVar20 <= unaff_x21) {
      plVar13[1] = (long)((long)puVar23 + (long)puVar20);
      goto joined_r0x000100638fc4;
    }
  }
  puStack_318 = puVar20;
  puStack_310 = unaff_x21;
  plVar13 = (long *)__ZN5bytes13panic_advance17h894eeb3b0f978370E(&puStack_318);
  FUN_1013fe3ec();
  if ((char)*plVar13 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar4 = extraout_x1;
  }
  else {
    unaff_x22 = (ulong *)plVar13[1];
    plVar13 = (long *)*unaff_x22;
    lVar4 = plVar13[2];
    if (*plVar13 != lVar4) goto LAB_100639130;
  }
  thunk_FUN_108855060(plVar13,lVar4,1,1,1);
  lVar4 = plVar13[2];
LAB_100639130:
  *(undefined1 *)(plVar13[1] + lVar4) = 0x3a;
  plVar13[2] = lVar4 + 1;
  plVar13 = (long *)*unaff_x22;
  lVar4 = plVar13[2];
  if (*plVar13 == lVar4) {
    thunk_FUN_108855060(plVar13,lVar4,1,1,1);
    lVar4 = plVar13[2];
  }
  *(undefined1 *)(plVar13[1] + lVar4) = 0x22;
  plVar13[2] = lVar4 + 1;
  puVar7 = (undefined8 *)FUN_100657654(plVar13,puVar9,puVar10);
  lVar4 = plVar13[2];
  if (*plVar13 == lVar4) {
    puVar7 = (undefined8 *)thunk_FUN_108855060(plVar13,lVar4,1,1,1);
    lVar4 = plVar13[2];
  }
  *(undefined1 *)(plVar13[1] + lVar4) = 0x22;
  plVar13[2] = lVar4 + 1;
  return puVar7;
LAB_100638fec:
  unaff_x22 = *(ulong **)(*puVar23 + 8);
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (*puVar23,&UNK_108ca7637,unaff_x22 != (ulong *)0x7fffffffffffffff);
joined_r0x000100638fc4:
  if (unaff_x22 != (ulong *)0x7fffffffffffffff) {
    return (undefined8 *)0x0;
  }
LAB_100639014:
  puVar8 = &UNK_10b233fc8;
  ppuVar3 = (ulong **)&lStack_2a0;
  puVar14 = puVar5;
  puVar16 = unaff_x20;
  pppppppuVar24 = pppppppuStack_2b0;
  uVar25 = uStack_2a8;
SUB_107c05db8:
  *(ulong **)((long)ppuVar3 + -0x20) = puVar16;
  *(ulong **)((long)ppuVar3 + -0x18) = puVar14;
  *(undefined8 ********)((long)ppuVar3 + -0x10) = pppppppuVar24;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar25;
  *(undefined8 *)((long)ppuVar3 + -0x48) = 1;
  *(undefined **)((long)ppuVar3 + -0x40) = puVar8;
  *(undefined8 *)((long)ppuVar3 + -0x30) = 0;
  *(undefined8 *)((long)ppuVar3 + -0x28) = 0;
  puVar7 = (undefined8 *)_malloc(0x28);
  if (puVar7 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar2)();
  }
  uVar25 = *(undefined8 *)((long)ppuVar3 + -0x48);
  uVar27 = *(undefined8 *)((long)ppuVar3 + -0x30);
  uVar26 = *(undefined8 *)((long)ppuVar3 + -0x38);
  puVar7[1] = *(undefined8 *)((long)ppuVar3 + -0x40);
  *puVar7 = uVar25;
  puVar7[3] = uVar27;
  puVar7[2] = uVar26;
  puVar7[4] = *(undefined8 *)((long)ppuVar3 + -0x28);
  return puVar7;
}

