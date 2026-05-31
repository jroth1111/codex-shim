
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10063fe00(undefined1 (*param_1) [16],undefined8 param_2,undefined1 (*param_3) [16],
             undefined8 param_4,ulong param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long extraout_x1;
  undefined1 (*pauVar10) [16];
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  long *plVar14;
  undefined1 (*unaff_x22) [16];
  undefined8 unaff_x24;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 **ppuStack_3c0;
  undefined *puStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *puStack_2e0;
  ulong uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  undefined8 *puStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 *puStack_220;
  ulong uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 (*pauStack_100) [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
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
  
  if (*(long *)*param_1 == -0x8000000000000000) {
    pauVar10 = (undefined1 (*) [16])&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    uVar13 = param_5;
  }
  else {
    pauVar10 = param_3;
    uVar13 = param_5;
    lVar5 = _malloc(param_3);
    unaff_x20 = param_1;
    unaff_x21 = param_4;
    unaff_x22 = param_3;
    unaff_x24 = param_2;
    if (lVar5 != 0) {
      _memcpy(lVar5,param_2,param_3);
      if (*(long *)(param_1[4] + 8) == -0x8000000000000000 || *(long *)(param_1[4] + 8) == 0) {
        *(long *)param_1[5] = lVar5;
        *(undefined1 (**) [16])(param_1[5] + 8) = param_3;
        *(undefined8 *)(param_1[4] + 8) = 0x8000000000000000;
        uStack_f0 = *(undefined8 *)(param_1[5] + 8);
        uStack_f8 = *(undefined8 *)param_1[5];
      }
      else {
        _free(*(undefined8 *)param_1[5]);
        *(long *)param_1[5] = lVar5;
        *(undefined1 (**) [16])(param_1[5] + 8) = param_3;
        *(undefined8 *)(param_1[4] + 8) = 0x8000000000000000;
        uStack_f0 = *(undefined8 *)(param_1[5] + 8);
        uStack_f8 = *(undefined8 *)param_1[5];
      }
      pauStack_100 = param_3;
      if (param_5 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(param_5);
        if (lVar5 == 0) {
          FUN_107c03c64(1,param_5);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10063fea8);
          (*pcVar3)();
        }
      }
      _memcpy(lVar5,param_4,param_5);
      uStack_e8 = 0x8000000000000003;
      uStack_e0 = param_5;
      lStack_d8 = lVar5;
      uStack_d0 = param_5;
      FUN_101497a9c(auStack_a0,param_1,&pauStack_100,&uStack_e8);
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
  auVar17._8_8_ = unaff_x21;
  auVar17._0_8_ = unaff_x24;
  uVar6 = FUN_107c03c64(1,unaff_x22);
  _free(uStack_f8);
  auVar16 = __Unwind_Resume(uVar6);
  plVar14 = auVar16._0_8_;
  if (*plVar14 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    auVar16 = auVar17;
  }
  else {
    puVar7 = (undefined8 *)_malloc(0x16);
    if (puVar7 == (undefined8 *)0x0) {
      uVar6 = FUN_107c03c64(1,0x16);
      _free(lStack_340);
      uVar6 = __Unwind_Resume(uVar6);
      FUN_100e040f0(&puStack_330);
      _free(lStack_340);
      __Unwind_Resume(uVar6);
      auVar16 = FUN_107c05ccc();
      plVar9 = auVar16._8_8_;
      plVar8 = auVar16._0_8_;
      plStack_3b0 = plVar14;
      puVar7 = (undefined8 *)FUN_10160d630();
      if (*plVar8 != -0x7ffffffffffffffc) {
        return puVar7;
      }
      puVar12 = (undefined8 *)plVar9[8];
      plVar9[8] = -0x8000000000000000;
      if (puVar12 == (undefined8 *)0x8000000000000000) {
        FUN_107c05cac(&UNK_108cd581e,0x23,&UNK_10b24f4d8);
        lVar5 = extraout_x1;
LAB_1006405fc:
        thunk_FUN_108855060(plVar9,lVar5,1,1,1);
        lVar5 = plVar9[2];
LAB_1006404cc:
        *(undefined1 *)(plVar9[1] + lVar5) = 0x20;
        lVar5 = lVar5 + 1;
        plVar9[2] = lVar5;
        if (*plVar9 == lVar5) {
          thunk_FUN_108855060(plVar9,lVar5,1,1,1);
          lVar5 = plVar9[2];
        }
        *(undefined1 *)(plVar9[1] + lVar5) = 0x3d;
        lVar5 = lVar5 + 1;
        plVar9[2] = lVar5;
        if (*plVar9 == lVar5) {
          thunk_FUN_108855060(plVar9,lVar5,1,1,1);
          lVar5 = plVar9[2];
        }
        *(undefined1 *)(plVar9[1] + lVar5) = 0x20;
        plVar9[2] = lVar5 + 1;
        puStack_3c8 = &uStack_3d0;
        ppuStack_3c0 = &puStack_3c8;
        puStack_3b8 = &DAT_10611f828;
        uStack_3d0 = param_6;
        puVar7 = (undefined8 *)
                 __ZN4core3fmt5write17h64810b21425781ecE
                           (plVar9,&UNK_10b4cf200,s__108b38569,&ppuStack_3c0);
        if ((int)puVar7 == 0) {
          lVar5 = plVar9[2];
          if (*plVar9 == lVar5) {
            puVar7 = (undefined8 *)thunk_FUN_108855060(plVar9,lVar5,1,1,1);
            lVar5 = plVar9[2];
          }
          *(undefined1 *)(plVar9[1] + lVar5) = 10;
          plVar9[2] = lVar5 + 1;
LAB_1006405bc:
          *plVar8 = -0x7ffffffffffffffc;
          goto joined_r0x0001006405c0;
        }
      }
      else {
        lStack_3d8 = plVar9[10];
        lStack_3e0 = plVar9[9];
        puStack_3e8 = puVar12;
        if ((uVar13 & 1) == 0) goto LAB_1006405bc;
        ppuStack_3c0 = &puStack_3e8;
        puStack_3b8 = &DAT_10112965c;
        iVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                          (plVar9,&UNK_10b209290,s__108b1bd74,&ppuStack_3c0);
        if (iVar4 == 0) {
          lVar5 = plVar9[2];
          if (*plVar9 == lVar5) goto LAB_1006405fc;
          goto LAB_1006404cc;
        }
      }
      puVar7 = (undefined8 *)_malloc(0x26);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0x26);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10064067c);
        (*pcVar3)();
      }
      puVar7[1] = 0x6572727563636f20;
      *puVar7 = 0x726f727265206e61;
      puVar7[3] = 0x6120676e69746972;
      puVar7[2] = 0x77206e6568772064;
      *(undefined8 *)((long)puVar7 + 0x1e) = 0x65756c6176206120;
      *plVar8 = 0x26;
      plVar8[1] = (long)puVar7;
      plVar8[2] = 0x26;
joined_r0x0001006405c0:
      if (puStack_3e8 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)_free(lStack_3e0);
      }
      return puVar7;
    }
    puVar7[1] = 0x696c6962616c6961;
    *puVar7 = 0x76615f6c65646f6d;
    *(undefined8 *)((long)puVar7 + 0xe) = 0x78756e5f7974696c;
    if (plVar14[9] != -0x8000000000000000 && plVar14[9] != 0) {
      _free(plVar14[10]);
    }
    plVar14[10] = (long)puVar7;
    plVar14[0xb] = 0x16;
    plVar14[9] = -0x8000000000000000;
    lStack_338 = plVar14[0xb];
    lStack_340 = plVar14[10];
    uStack_348 = 0x16;
    unaff_x22 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
    unaff_x20 = pauVar10;
    if (unaff_x22[1][0] == '\x01') {
      auVar17 = *unaff_x22;
      goto LAB_100640058;
    }
  }
  auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
  *(long *)(*unaff_x22 + 8) = auVar17._8_8_;
  unaff_x22[1][0] = 1;
LAB_100640058:
  plVar14 = auVar16._8_8_;
  *(long *)*unaff_x22 = auVar17._0_8_ + 1;
  FUN_105dc99f8(&puStack_2d0,0,auVar17._0_8_,auVar17._8_8_);
  uStack_288 = 0x8000000000000000;
  puVar7 = puStack_2c8;
  if (puStack_2d0 != (undefined8 *)0x8000000000000001) {
    uStack_2f8 = uStack_298;
    uStack_300 = uStack_2a0;
    uStack_2e8 = 0x8000000000000000;
    uStack_2f0 = uStack_290;
    uStack_2d8 = uStack_278;
    puStack_2e0 = puStack_280;
    uStack_318 = uStack_2b8;
    uStack_320 = uStack_2c0;
    uStack_308 = uStack_2a8;
    uStack_310 = uStack_2b0;
    puStack_330 = puStack_2d0;
    puStack_328 = puStack_2c8;
    if (unaff_x20 != (undefined1 (*) [16])0x0) {
      plVar8 = plVar14 + 1;
      lVar5 = *plVar14;
      uVar13 = CONCAT17(-(-1 < lVar5),
                        CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
               0x8080808080808080;
      do {
        while (uVar13 == 0) {
          lVar5 = *plVar8;
          plVar14 = plVar14 + -0x20;
          plVar8 = plVar8 + 1;
          uVar13 = CONCAT17(-(-1 < lVar5),
                            CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18))
                                                                ,CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                       >> 0x10)),
                                                                          CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                   0x8080808080808080;
        }
        if (puStack_330 == (undefined8 *)0x8000000000000000) {
          puVar11 = &UNK_10b24c5c0;
LAB_100640340:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar11);
          goto LAB_1006403cc;
        }
        uVar2 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        uVar1 = *(uint *)((long)plVar14 + uVar2 * -4 + -8);
        uVar15 = *(ulong *)((long)plVar14 + uVar2 * -4 + -0x10);
        if (uVar15 == 0) {
          puVar7 = (undefined8 *)0x1;
        }
        else {
          uVar6 = *(undefined8 *)((long)plVar14 + uVar2 * -4 + -0x18);
          puVar7 = (undefined8 *)_malloc(uVar15);
          if (puVar7 == (undefined8 *)0x0) {
            FUN_107c03c64(1,uVar15);
            goto LAB_1006403cc;
          }
          _memcpy(puVar7,uVar6,uVar15);
          if (uVar15 == 0x8000000000000000) {
            FUN_100e040f0(&puStack_330);
            goto LAB_100640300;
          }
        }
        if (((uStack_2e8 != 0x8000000000000000) && (uStack_2e8 != 0)) &&
           (_free(puStack_2e0), puStack_330 == (undefined8 *)0x8000000000000000)) {
          puVar11 = &UNK_10b24c5f0;
          uStack_2e8 = uVar15;
          puStack_2e0 = puVar7;
          uStack_2d8 = uVar15;
          goto LAB_100640340;
        }
        uStack_2e8 = 0x8000000000000000;
        if (uVar15 == 0x8000000000000000) {
          puStack_2e0 = puVar7;
          uStack_2d8 = uVar15;
          FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
          goto LAB_1006403cc;
        }
        puStack_208 = (undefined8 *)0x0;
        puStack_210 = (undefined8 *)0x8000000000000002;
        puStack_2e0 = puVar7;
        uStack_2d8 = uVar15;
        uStack_228 = uVar15;
        puStack_220 = puVar7;
        uStack_218 = uVar15;
        uStack_200 = (ulong)uVar1;
        FUN_101497a9c(&puStack_2d0,&puStack_330,&uStack_228,&puStack_210);
        uStack_268 = uStack_2c0;
        puStack_270 = puStack_2c8;
        uStack_258 = uStack_2b0;
        uStack_260 = uStack_2b8;
        uStack_248 = uStack_2a0;
        uStack_250 = uStack_2a8;
        uStack_238 = uStack_290;
        uStack_240 = uStack_298;
        uStack_230 = uStack_288;
        if (puStack_2c8 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_270);
        }
        uVar13 = uVar13 - 1 & uVar13;
        unaff_x20 = (undefined1 (*) [16])(unaff_x20[-1] + 0xf);
      } while (unaff_x20 != (undefined1 (*) [16])0x0);
    }
    puStack_2c8 = puStack_328;
    puStack_2d0 = puStack_330;
    uStack_298 = uStack_2f8;
    uStack_2a0 = uStack_300;
    uStack_288 = uStack_2e8;
    uStack_290 = uStack_2f0;
    uStack_278 = uStack_2d8;
    puStack_280 = puStack_2e0;
    uStack_2b8 = uStack_318;
    uStack_2c0 = uStack_320;
    uStack_2a8 = uStack_308;
    uStack_2b0 = uStack_310;
    if (puStack_330 == (undefined8 *)0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_1006403cc:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006403d0);
      (*pcVar3)();
    }
    uStack_1e8 = uStack_308;
    uStack_1f0 = uStack_310;
    uStack_1d8 = uStack_2f8;
    uStack_1e0 = uStack_300;
    uStack_1d0 = uStack_2f0;
    puStack_208 = puStack_328;
    puStack_210 = puStack_330;
    uStack_1f8 = uStack_318;
    uStack_200 = uStack_320;
    puVar7 = puStack_328;
    if ((uStack_2e8 & 0x7fffffffffffffff) != 0) {
      _free(puStack_2e0);
      puVar7 = puStack_208;
    }
    puStack_208 = puVar7;
    if (puStack_210 != (undefined8 *)0x8000000000000005) {
      FUN_101497a9c(&puStack_2d0,auVar16._0_8_,&uStack_348,&puStack_210);
      puStack_328 = (undefined8 *)uStack_2c0;
      puStack_330 = puStack_2c8;
      uStack_318 = uStack_2b0;
      uStack_320 = uStack_2b8;
      uStack_308 = uStack_2a0;
      uStack_310 = uStack_2a8;
      uStack_2f8 = uStack_290;
      uStack_300 = uStack_298;
      uStack_2f0 = uStack_288;
      if (puStack_2c8 != (undefined8 *)0x8000000000000005) {
        FUN_100de6690(&puStack_330);
      }
      return (undefined8 *)0x0;
    }
    puStack_210 = (undefined8 *)0x8000000000000005;
  }
LAB_100640300:
  _free(lStack_340);
  return puVar7;
}

