
/* WARNING: Possible PIC construction at 0x000105a8177c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a91ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a91ec4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN14rama_http_core2h25proto7streams4send4Send13poll_capacity17hcddb1ea643c1fa45E
                 (long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  code *pcVar13;
  undefined1 *puVar14;
  char cVar15;
  int iVar17;
  long *plVar19;
  int ***pppiVar20;
  int ***pppiVar21;
  byte bVar16;
  int iVar18;
  undefined8 *puVar22;
  ulong uVar23;
  int **ppiVar24;
  uint uVar25;
  ulong uVar26;
  undefined4 uVar27;
  undefined *puVar28;
  long *extraout_x8;
  long lVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  undefined *unaff_x19;
  long unaff_x20;
  undefined *puVar35;
  ulong *puVar36;
  long *unaff_x21;
  long *unaff_x22;
  undefined *puVar37;
  undefined8 uVar38;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined *puVar39;
  long unaff_x27;
  undefined *puVar40;
  ulong unaff_x28;
  undefined1 ****ppppuVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_5b8 [420];
  uint uStack_414;
  undefined1 auStack_410 [8];
  int ***pppiStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined1 auStack_3e8 [8];
  int ***pppiStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  int **ppiStack_3c0;
  undefined *puStack_3b8;
  uint *puStack_3b0;
  undefined *puStack_3a8;
  long *plStack_3a0;
  undefined *puStack_398;
  long *plStack_390;
  undefined *puStack_388;
  int *piStack_380;
  long lStack_378;
  ulong uStack_370;
  ulong uStack_368;
  long lStack_360;
  undefined *puStack_358;
  long *plStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined1 ***pppuStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  char *******pppppppcStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  undefined *puStack_2b0;
  char *******pppppppcStack_2a8;
  char *******pppppppcStack_2a0;
  undefined8 *******pppppppuStack_298;
  undefined *puStack_290;
  long lStack_288;
  char *******pppppppcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  char *pcStack_238;
  char *******pppppppcStack_230;
  char *******pppppppcStack_228;
  char *******pppppppcStack_220;
  undefined8 *******pppppppuStack_218;
  undefined *puStack_210;
  ulong uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined *puStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined1 *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  int ***pppiStack_160;
  int **ppiStack_158;
  int **ppiStack_150;
  int *piStack_148;
  undefined *puStack_140;
  int ***pppiStack_138;
  undefined8 uStack_130;
  int **ppiStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  uint uStack_48;
  int iStack_44;
  int *piStack_40;
  undefined *puStack_38;
  
  lVar33 = *param_3;
  uStack_48 = *(uint *)(param_3 + 1);
  iStack_44 = *(int *)((long)param_3 + 0xc);
  if ((((ulong)uStack_48 < *(ulong *)(lVar33 + 0x10)) &&
      (unaff_x21 = (long *)(*(long *)(lVar33 + 8) + (ulong)uStack_48 * 0x158), *unaff_x21 != 2)) &&
     (*(int *)((long)unaff_x21 + 0x13c) == iStack_44)) {
    cVar15 = *(byte *)(unaff_x21 + 0xd) - 7;
    if (*(byte *)(unaff_x21 + 0xd) < 7) {
      cVar15 = '\x06';
    }
    if ((cVar15 != '\x05' && cVar15 != '\x03') || (*(char *)((long)unaff_x21 + 0x69) != '\x01')) {
      return (long *)0x2;
    }
    if ((*(byte *)((long)unaff_x21 + 0x14b) & 1) == 0) {
      auVar44 = (*(code *)**(undefined8 **)*param_2)(((undefined8 *)*param_2)[1]);
      if (unaff_x21[0x15] != 0) {
        (**(code **)(unaff_x21[0x15] + 0x18))(unaff_x21[0x16]);
      }
      *(undefined1 (*) [16])(unaff_x21 + 0x15) = auVar44;
      return (long *)0x3;
    }
    *(undefined1 *)((long)unaff_x21 + 0x14b) = 0;
    if ((((ulong)uStack_48 < *(ulong *)(lVar33 + 0x10)) &&
        (plVar31 = (long *)(*(long *)(lVar33 + 8) + (ulong)uStack_48 * 0x158), *plVar31 != 2)) &&
       (*(int *)((long)plVar31 + 0x13c) == iStack_44)) {
      uVar25 = *(uint *)((long)plVar31 + 0x9c) &
               ((int)*(uint *)((long)plVar31 + 0x9c) >> 0x1f ^ 0xffffffffU);
      uVar9 = *(uint *)(param_1 + 0x5c);
      if (uVar25 <= *(uint *)(param_1 + 0x5c)) {
        uVar9 = uVar25;
      }
      lVar33 = 0;
      if ((ulong)plVar31[0x14] <= (ulong)uVar9) {
        lVar33 = (ulong)uVar9 - plVar31[0x14];
      }
      return (long *)(lVar33 << 0x20);
    }
  }
  piStack_40 = &iStack_44;
  puStack_38 = &DAT_105abf048;
  uVar27 = 0xb3fa588;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b233d4,&piStack_40);
  unaff_x21[0x15] = unaff_x20;
  unaff_x21[0x16] = (long)unaff_x19;
  auVar44 = __Unwind_Resume();
  plVar19 = auVar44._8_8_;
  plVar31 = auVar44._0_8_;
  uStack_58 = 0x105a91b30;
  lVar33 = *plVar19;
  uVar25 = *(uint *)(plVar19 + 1);
  iVar17 = *(int *)((long)plVar19 + 0xc);
  puStack_60 = &stack0xfffffffffffffff0;
  if (((*(ulong *)(lVar33 + 0x10) <= (ulong)uVar25) ||
      (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 == 2)) ||
     (*(int *)((long)plVar34 + 0x13c) != iVar17)) {
LAB_105a91c74:
    puVar40 = &UNK_10b3fa588;
    puVar22 = (undefined8 *)
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__dangling_store_key_for_stream_i_108b233d4,&stack0xffffffffffffff70);
    plVar31 = &lStack_170;
    ppppuVar41 = (undefined1 ****)&stack0xffffffffffffff50;
    uVar23 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl10inc_window17h61842d2eab291982E
                       (puVar22 + 10,puVar40);
    if ((uVar23 & 1) == 0) {
      auStack_168._4_4_ = (int)puVar40;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bVar16 = bRam000000010b636960, bRam000000010b636960 - 1 < 2 ||
           ((bRam000000010b636960 != 0 &&
            (bVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                                ), bVar16 != 0)))) &&
          (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                               ,bVar16), iVar17 != 0)))) {
        puStack_120 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                      + 0x30;
        auStack_110 = (undefined1  [8])(auStack_168 + 4);
        puStack_108 = &UNK_10b3fcb70;
        uStack_130 = (int **)auStack_110;
        pppiStack_138 = (int ***)0x1;
        ppiStack_128 = (int **)0x1;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&pppiStack_160,
                   ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                   ,&pppiStack_138);
      }
      else {
        pppiStack_138 = (int ***)0x2;
        puStack_118 = 
        ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
        ;
        ppiStack_158 = uStack_130;
        ppiStack_150 = ppiStack_128;
        puStack_140 = 
        ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
        ;
        pppiStack_160 = pppiStack_138;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          auStack_110 = (undefined1  [8])(auStack_168 + 4);
          puStack_108 = &UNK_10b3fcb70;
          piStack_148 = (int *)(
                               ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                               + 0x30);
          ppiStack_158 = (int **)auStack_110;
          pppiStack_160 = (int ***)0x1;
          ppiStack_150 = (int **)0x1;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pppiStack_138,&pppiStack_160);
          ppiStack_158 = uStack_130;
          ppiStack_150 = ppiStack_128;
          puStack_140 = puStack_118;
          pppiStack_160 = pppiStack_138;
        }
      }
      if (pppiStack_160 != (int ***)0x2) {
        ppiVar24 = ppiStack_158;
        if (((ulong)pppiStack_160 & 1) != 0) {
          ppiVar24 = (int **)((long)ppiStack_158 +
                             ((long)ppiStack_150[2] - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (*(code *)ppiStack_150[0xc])(ppiVar24,&piStack_148);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (puStack_140 != (undefined *)0x0)) {
        auStack_110 = *(undefined1 (*) [8])(puStack_140 + 0x10);
        puStack_108 = *(undefined **)(puStack_140 + 0x18);
        pppiStack_138 = (int ***)auStack_110;
        uStack_130 = (int **)&DAT_105aabad0;
        FUN_105ab8ca4(&pppiStack_160,&UNK_109b161c0,0x15,s__>___108ab67cd,&pppiStack_138);
      }
      iVar17 = *(int *)((long)puVar22 + 0x54);
      if (!SCARRY4(iVar17,auStack_168._4_4_)) {
        *(int *)((long)puVar22 + 0x54) = iVar17 + auStack_168._4_4_;
        iVar17 = iVar17 + auStack_168._4_4_;
      }
      if (0 < iVar17) {
        pppiVar21 = (int ***)(auStack_110 + 4);
        uVar38 = 0x158;
        auVar44._8_8_ = 6;
        auVar44._0_8_ = param_4;
        uVar23 = 1000000000;
        do {
          func_0x000105a94630(&pppiStack_138,(undefined *)((long)puVar22 + 0x1c),param_4);
          if (pppiStack_138 == (int ***)0x0) {
            if (pppiStack_160 != (int ***)0x2) {
              if (((ulong)pppiStack_160 & 1) != 0) {
                ppiStack_158 = (int **)((long)ppiStack_158 +
                                       ((long)ppiStack_150[2] - 1U & 0xfffffffffffffff0) + 0x10);
              }
              (*(code *)ppiStack_150[0xd])(ppiStack_158,&piStack_148);
            }
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (puStack_140 != (undefined *)0x0)) {
              auStack_110 = *(undefined1 (*) [8])(puStack_140 + 0x10);
              puStack_108 = *(undefined **)(puStack_140 + 0x18);
              pppiStack_138 = (int ***)auStack_110;
              uStack_130 = (int **)&DAT_105aabad0;
              FUN_105ab8ca4(&pppiStack_160,&UNK_109b161c0,0x15,s_<____108ab67c5,&pppiStack_138);
            }
            goto LAB_105a92044;
          }
          auStack_110 = (undefined1  [8])uStack_130;
          if (((pppiStack_138[2] <= (int **)((ulong)uStack_130 & 0xffffffff)) ||
              (ppiVar24 = pppiStack_138[1] + ((ulong)uStack_130 & 0xffffffff) * 0x2b,
              *ppiVar24 == (int *)0x2)) || (*(int *)((long)ppiVar24 + 0x13c) != uStack_130._4_4_)) {
            uStack_130 = (int **)&DAT_105abf048;
            pppiStack_138 = pppiVar21;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&pppiStack_138,&UNK_10b3fa588);
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x105a920b8);
            (*pcVar13)();
          }
          cVar15 = *(byte *)(ppiVar24 + 0xd) - 7;
          if (*(byte *)(ppiVar24 + 0xd) < 7) {
            cVar15 = '\x06';
          }
          if (((cVar15 == '\x05' || cVar15 == '\x03') &&
              (*(char *)((long)ppiVar24 + 0x69) == '\x01')) || (ppiVar24[0x14] != (int *)0x0)) {
            puVar40 = (undefined *)(ulong)*(uint *)(ppiVar24 + 0xc);
            auVar43._8_8_ = &pppiStack_138;
            auVar43._0_8_ = puVar22 + 1;
            uVar42 = 0x105a91ec4;
            goto 
            __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize19try_assign_capacity17h6f4c07fd5171cf36E
            ;
          }
        } while (0 < *(int *)((long)puVar22 + 0x54));
      }
      if (pppiStack_160 != (int ***)0x2) {
        if (((ulong)pppiStack_160 & 1) != 0) {
          ppiStack_158 = (int **)((long)ppiStack_158 +
                                 ((long)ppiStack_150[2] - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (*(code *)ppiStack_150[0xd])(ppiStack_158,&piStack_148);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (puStack_140 != (undefined *)0x0)) {
        auStack_110 = *(undefined1 (*) [8])(puStack_140 + 0x10);
        puStack_108 = *(undefined **)(puStack_140 + 0x18);
        pppiStack_138 = (int ***)auStack_110;
        uStack_130 = (int **)&DAT_105aabad0;
        FUN_105ab8ca4(&pppiStack_160,&UNK_109b161c0,0x15,s_<____108ab67c5,&pppiStack_138);
      }
LAB_105a92044:
      FUN_105aada3c(&pppiStack_160);
      plVar31 = (long *)0x0;
    }
    else {
      plVar31 = (long *)0x1;
    }
    return plVar31;
  }
  if (*(byte *)(plVar34 + 0xd) < 7) {
    return plVar31;
  }
  *(undefined1 *)(plVar34 + 0xd) = 6;
  *(undefined4 *)((long)plVar34 + 0x6c) = uVar27;
  if (((*(ulong *)(lVar33 + 0x10) <= (ulong)uVar25) ||
      (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 == 2)) ||
     (*(int *)((long)plVar34 + 0x13c) != iVar17)) goto LAB_105a91c74;
  uVar9 = *(uint *)((long)plVar34 + 0x9c);
  uVar25 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  if ((ulong)plVar34[0x14] < (ulong)uVar25) {
    iVar17 = uVar25 - (int)plVar34[0x14];
    if (SBORROW4(uVar9,iVar17)) {
      param_4 = (undefined8 *)&UNK_10b406288;
      param_5 = (long *)&UNK_10b3fcfd0;
      func_0x000108a07a3c(&UNK_109b0a913,0x2b,&stack0xffffffffffffff70);
      goto LAB_105a91c74;
    }
    *(uint *)((long)plVar34 + 0x9c) = uVar9 - iVar17;
    FUN_105a83b58(plVar31 + 1,iVar17,plVar19);
  }
  plVar31 = plVar31 + 1;
  puVar37 = (undefined *)*plVar19;
  puVar1 = (uint *)(plVar19 + 1);
  uVar23 = (ulong)*puVar1;
  uVar25 = *(uint *)((long)plVar19 + 0xc);
  uVar38 = *(undefined8 *)puVar1;
  auStack_188 = *(undefined1 (*) [8])puVar1;
  uVar32 = (ulong)uVar25;
  if (((uVar23 < *(ulong *)(puVar37 + 0x10)) &&
      (plVar34 = (long *)(*(long *)(puVar37 + 8) + (ulong)*puVar1 * 0x158), *plVar34 != 2)) &&
     (*(uint *)((long)plVar34 + 0x13c) == uVar25)) {
    if ((*(byte *)((long)plVar34 + 0x14c) & 1) != 0) {
      return plVar31;
    }
    if (*(char *)((long)plVar34 + 0x14d) == '\x01') {
      return plVar31;
    }
    unaff_x22 = param_5;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       ((bVar16 = bRam000000010b6368e8, bRam000000010b6368e8 - 1 < 2 ||
        ((bRam000000010b6368e8 != 0 &&
         (bVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b6368d8), bVar16 != 0)))))) {
      unaff_x19 = (undefined *)0x10b636000;
      iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (lRam000000010b6368d8,bVar16);
      if (iVar17 != 0) {
        unaff_x24 = plVar31;
        unaff_x25 = plVar19;
        if (((uVar23 < *(ulong *)(puVar37 + 0x10)) &&
            (plVar34 = (long *)(*(long *)(puVar37 + 8) + uVar23 * 0x158), *plVar34 != 2)) &&
           (*(uint *)((long)plVar34 + 0x13c) == uVar25)) {
          puStack_120 = (undefined *)(lRam000000010b6368d8 + 0x30);
          piStack_148 = (int *)&stack0xffffffffffffff28;
          puStack_140 = &UNK_10b3f92b0;
          uStack_130 = &piStack_148;
          pppiStack_138 = (int ***)0x1;
          ppiStack_128 = (int **)0x1;
          auStack_188 = (undefined1  [8])uVar38;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b6368d8,&pppiStack_138);
          lVar33 = lRam000000010b6368d8;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_180 = *(undefined1 **)(lRam000000010b6368d8 + 0x20);
            uStack_178 = *(undefined8 *)(lRam000000010b6368d8 + 0x28);
            auStack_188 = (undefined1  [8])0x5;
            plVar34 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              plVar34 = (long *)&UNK_10b3c24c8;
            }
            puVar40 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar40 = &UNK_109adfc03;
            }
            iVar17 = (*(code *)plVar34[3])(puVar40,auStack_188);
            if (iVar17 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar33,puVar40,plVar34,auStack_188,&pppiStack_138);
            }
          }
          goto LAB_105a80b60;
        }
        goto LAB_105a80bcc;
      }
    }
    unaff_x27 = lRam000000010b6368d8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) {
LAB_105a80b60:
      func_0x000105a94a50(plVar31,plVar19);
      lVar33 = *param_5;
      plVar31 = (long *)param_5[1];
      *param_5 = 0;
      if (lVar33 != 0) {
        plVar31 = (long *)(**(code **)(lVar33 + 8))(plVar31);
      }
      return plVar31;
    }
    unaff_x28 = 0x10b636000;
    uStack_198 = *(undefined8 *)(lRam000000010b6368d8 + 0x20);
    uStack_190 = *(undefined8 *)(lRam000000010b6368d8 + 0x28);
    puStack_1a0 = (undefined *)0x5;
    unaff_x26 = plRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x26 = (long *)&UNK_10b3c24c8;
    }
    unaff_x19 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x19 = &UNK_109adfc03;
    }
    iVar17 = (*(code *)unaff_x26[3])(unaff_x19,&puStack_1a0);
    if (iVar17 == 0) goto LAB_105a80b60;
    unaff_x24 = plVar19;
    unaff_x25 = plVar31;
    if (((uVar23 < *(ulong *)(puVar37 + 0x10)) &&
        (plVar34 = (long *)(*(long *)(puVar37 + 8) + uVar23 * 0x158), *plVar34 != 2)) &&
       (*(uint *)((long)plVar34 + 0x13c) == uVar25)) {
      piStack_148 = (int *)((long)plVar34 + 0x13c);
      puStack_140 = &DAT_105abf048;
      lStack_170 = lRam000000010b6368d8 + 0x30;
      ppiStack_150 = &piStack_148;
      ppiStack_158 = (int **)s_schedule_send_w__stream_id__108b23646;
      auStack_168 = (undefined1  [8])&ppiStack_158;
      pppiStack_160 = (int ***)&UNK_10b3f92b0;
      puStack_180 = auStack_168;
      auStack_188 = (undefined1  [8])0x1;
      uStack_178 = 1;
      puStack_118 = *(undefined **)(unaff_x27 + 0x60);
      auStack_110 = *(undefined1 (*) [8])(unaff_x27 + 0x68);
      uStack_130 = *(int ***)(unaff_x27 + 0x50);
      ppiStack_128 = *(int ***)(unaff_x27 + 0x58);
      pppiStack_138 = (int ***)0x1;
      if (uStack_130 == (int **)0x0) {
        pppiStack_138 = (int ***)0x2;
      }
      puStack_120 = (undefined *)0x1;
      if (puStack_118 == (undefined *)0x0) {
        puStack_120 = (undefined *)0x2;
      }
      puStack_108 = puStack_1a0;
      (*(code *)unaff_x26[4])(unaff_x19,&pppiStack_138);
      goto LAB_105a80b60;
    }
  }
LAB_105a80bcc:
  auStack_188 = *(undefined1 (*) [8])puVar1;
  pppiStack_138 = (int ***)(auStack_188 + 4);
  uStack_130 = (int **)&DAT_105abf048;
  puVar28 = &UNK_10b3fa588;
  auVar44 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&pppiStack_138);
  puVar35 = auVar44._8_8_;
  plVar19 = auVar44._0_8_;
  pcStack_1a8 = 
  __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize16pop_pending_open17hd8a5b0534cb88878E
  ;
  puVar39 = &__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
  plVar31 = plVar19;
  plStack_320 = extraout_x8;
  uStack_200 = unaff_x28;
  lStack_1f8 = unaff_x27;
  plStack_1f0 = unaff_x26;
  plStack_1e8 = unaff_x25;
  plStack_1e0 = unaff_x24;
  puStack_1d8 = puVar37;
  plStack_1d0 = unaff_x22;
  uStack_1c8 = uVar23;
  uStack_1c0 = uVar32;
  puStack_1b8 = unaff_x19;
  ppuStack_1b0 = &puStack_60;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
    uVar25 = (uint)bRam000000010b6381a8;
    if (1 < bRam000000010b6381a8 - 1) {
      if (bRam000000010b6381a8 != 0) {
        plVar31 = (long *)__ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (0x10b638198);
        uVar25 = (uint)plVar31 & 0xff;
        if (((ulong)plVar31 & 0xff) != 0) goto LAB_105a80d8c;
      }
      goto LAB_105a80c40;
    }
LAB_105a80d8c:
    puVar37 = (undefined *)0x10b638000;
    plVar31 = (long *)__ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (puRam000000010b638198,uVar25);
    if ((int)plVar31 == 0) goto LAB_105a80c40;
    puStack_270 = puRam000000010b638198 + 0x30;
    pppppppuStack_218 = (undefined8 *******)&UNK_109b0a563;
    puStack_210 = (undefined *)0x2b;
    pppppppcStack_228 = (char *******)&pppppppuStack_218;
    pppppppcStack_220 = (char *******)&UNK_10b3f92b0;
    pppppppcStack_280 = (char *******)&pppppppcStack_228;
    lStack_288 = 1;
    uStack_278 = 1;
    plVar31 = (long *)__ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (puRam000000010b638198,&lStack_288);
    puVar40 = puRam000000010b638198;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppppcStack_2d0 = *(char ********)(puRam000000010b638198 + 0x20);
      uStack_2c8 = *(undefined8 *)(puRam000000010b638198 + 0x28);
      uStack_2d8 = (char ******)0x5;
      plVar34 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar34 = (long *)&UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      plVar31 = (long *)(*(code *)plVar34[3])(puVar3,&uStack_2d8);
      puVar37 = puVar40;
      if ((int)plVar31 != 0) {
        param_4 = &uStack_2d8;
        plVar31 = (long *)__ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                    (puVar40,puVar3,plVar34,param_4,&lStack_288);
      }
    }
  }
  else {
LAB_105a80c40:
    puVar40 = puRam000000010b638198;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_310 = *(undefined8 *)(puRam000000010b638198 + 0x20);
      uStack_308 = *(undefined8 *)(puRam000000010b638198 + 0x28);
      uStack_318 = 5;
      plVar34 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar34 = (long *)&UNK_10b3c24c8;
      }
      puVar37 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar37 = &UNK_109adfc03;
      }
      plVar31 = (long *)(*(code *)plVar34[3])(puVar37,&uStack_318);
      if ((int)plVar31 != 0) {
        puStack_2c0 = puRam000000010b638198 + 0x30;
        pppppppuStack_298 = (undefined8 *******)&UNK_109b0a563;
        puStack_290 = (undefined *)0x2b;
        pppppppcStack_2a8 = (char *******)&pppppppuStack_298;
        pppppppcStack_2a0 = (char *******)&UNK_10b3f92b0;
        pppppppcStack_2d0 = (char *******)&pppppppcStack_2a8;
        uStack_2d8 = (char ******)0x1;
        uStack_2c8 = 1;
        uStack_250 = uStack_310;
        uStack_258 = uStack_318;
        uStack_248 = uStack_308;
        lStack_268 = *(long *)(puVar40 + 0x60);
        uStack_260 = *(undefined8 *)(puVar40 + 0x68);
        pppppppcStack_280 = *(char ********)(puVar40 + 0x50);
        uStack_278 = *(undefined8 *)(puVar40 + 0x58);
        lStack_288 = 1;
        if (pppppppcStack_280 == (char *******)0x0) {
          lStack_288 = 2;
        }
        uStack_240 = *(undefined4 *)(puVar40 + 8);
        uStack_23c = *(undefined4 *)(puVar40 + 0xc);
        pppppppcStack_228 = (char *******)&uStack_2d8;
        pppppppcStack_220 = (char *******)CONCAT71(pppppppcStack_220._1_7_,1);
        pppppppuStack_218 = &pppppppcStack_228;
        puStack_210 = &DAT_1061c2098;
        puStack_270 = (undefined *)0x1;
        if (lStack_268 == 0) {
          puStack_270 = (undefined *)0x2;
        }
        pppppppcStack_230 = (char *******)&pppppppuStack_218;
        pcStack_238 = s__108b39f4f;
        plVar31 = (long *)(*(code *)plVar34[4])(puVar37,&lStack_288);
      }
    }
  }
  unaff_x28 = *(ulong *)(puVar28 + 0x18);
  if ((*(ulong *)(puVar28 + 0x10) <= unaff_x28) ||
     (plVar31 = (long *)func_0x000105a93de8(&lStack_300,plVar19 + 5,puVar35), lStack_300 == 0)) {
    *plStack_320 = 0;
    return plVar31;
  }
  uVar32 = (ulong)uStack_2f8;
  uVar23 = (ulong)uStack_2f4;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     ((bVar16 = bRam000000010b638190, bRam000000010b638190 - 1 < 2 ||
      ((bRam000000010b638190 != 0 &&
       (bVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b638180), bVar16 != 0)))))) {
    puVar35 = (undefined *)0x10b638000;
    iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                       (puRam000000010b638180,bVar16);
    if (iVar17 == 0) goto LAB_105a80ea4;
    puVar40 = &__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    if (((uVar32 < *(ulong *)(lStack_300 + 0x10)) &&
        (plVar31 = (long *)(*(long *)(lStack_300 + 8) + uVar32 * 0x158), *plVar31 != 2)) &&
       (puVar40 = puVar39, *(uint *)((long)plVar31 + 0x13c) == uStack_2f4)) {
      pppppppuStack_218 = (undefined8 *******)((long)plVar31 + 0x13c);
      puStack_210 = &DAT_105abf048;
      puStack_270 = puRam000000010b638180 + 0x30;
      pppppppcStack_220 = (char *******)&pppppppuStack_218;
      pppppppcStack_228 = (char *******)s_schedule_pending_open__stream__108b1642a;
      pppppppuStack_298 = &pppppppcStack_228;
      puStack_290 = &UNK_10b3f92b0;
      pppppppcStack_280 = (char *******)&pppppppuStack_298;
      lStack_288 = 1;
      uStack_278 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(puRam000000010b638180,&lStack_288)
      ;
      puVar40 = puRam000000010b638180;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_2d0 = *(char ********)(puRam000000010b638180 + 0x20);
        uStack_2c8 = *(undefined8 *)(puRam000000010b638180 + 0x28);
        uStack_2d8 = (char ******)0x5;
        plVar19 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar19 = (long *)&UNK_10b3c24c8;
        }
        puVar37 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_109adfc03;
        }
        iVar17 = (*(code *)plVar19[3])(puVar37,&uStack_2d8);
        puVar35 = puVar40;
        if (iVar17 != 0) {
          param_4 = &uStack_2d8;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar40,puVar37,plVar19,param_4,&lStack_288);
        }
      }
      goto LAB_105a81180;
    }
  }
  else {
LAB_105a80ea4:
    puVar3 = puRam000000010b638180;
    puVar39 = &__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar39 = (undefined *)0x10b638000;
      uStack_2e8 = *(undefined8 *)(puRam000000010b638180 + 0x20);
      uStack_2e0 = *(undefined8 *)(puRam000000010b638180 + 0x28);
      uStack_2f0 = 5;
      plVar19 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar19 = (long *)&UNK_10b3c24c8;
      }
      puVar35 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar35 = &UNK_109adfc03;
      }
      iVar17 = (*(code *)plVar19[3])(puVar35,&uStack_2f0);
      puVar37 = puVar3;
      if (iVar17 != 0) {
        puVar40 = puVar39;
        if (((*(ulong *)(lStack_300 + 0x10) <= uVar32) ||
            (plVar31 = (long *)(*(long *)(lStack_300 + 8) + (ulong)uStack_2f8 * 0x158),
            *plVar31 == 2)) || (*(uint *)((long)plVar31 + 0x13c) != uStack_2f4)) goto LAB_105a81280;
        pppppppuStack_298 = (undefined8 *******)((long)plVar31 + 0x13c);
        puStack_290 = &DAT_105abf048;
        puStack_2c0 = puRam000000010b638180 + 0x30;
        pppppppcStack_2a0 = (char *******)&pppppppuStack_298;
        pppppppcStack_2a8 = (char *******)s_schedule_pending_open__stream__108b1642a;
        pppppppuStack_2b8 = &pppppppcStack_2a8;
        puStack_2b0 = &UNK_10b3f92b0;
        pppppppcStack_2d0 = (char *******)&pppppppuStack_2b8;
        uStack_2d8 = (char ******)0x1;
        uStack_2c8 = 1;
        lStack_268 = *(long *)(puVar3 + 0x60);
        uStack_260 = *(undefined8 *)(puVar3 + 0x68);
        pppppppcStack_280 = *(char ********)(puVar3 + 0x50);
        uStack_278 = *(undefined8 *)(puVar3 + 0x58);
        lStack_288 = 1;
        if (pppppppcStack_280 == (char *******)0x0) {
          lStack_288 = 2;
        }
        uStack_240 = *(undefined4 *)(puVar3 + 8);
        uStack_23c = *(undefined4 *)(puVar3 + 0xc);
        pppppppcStack_228 = (char *******)&uStack_2d8;
        pppppppcStack_220 = (char *******)CONCAT71(pppppppcStack_220._1_7_,1);
        pppppppuStack_218 = &pppppppcStack_228;
        puStack_210 = &DAT_1061c2098;
        puStack_270 = (undefined *)0x1;
        if (lStack_268 == 0) {
          puStack_270 = (undefined *)0x2;
        }
        uStack_250 = uStack_2e8;
        uStack_258 = uStack_2f0;
        uStack_248 = uStack_2e0;
        pppppppcStack_230 = (char *******)&pppppppuStack_218;
        pcStack_238 = s__108b39f4f;
        (*(code *)plVar19[4])(puVar35,&lStack_288);
      }
    }
LAB_105a81180:
    *(ulong *)(puVar28 + 0x18) = unaff_x28 + 1;
    if (((((uVar32 < *(ulong *)(lStack_300 + 0x10)) &&
          (plVar31 = (long *)(*(long *)(lStack_300 + 8) + uVar32 * 0x158), *plVar31 != 2)) &&
         (*(uint *)((long)plVar31 + 0x13c) == uStack_2f4)) &&
        ((*(undefined1 *)(plVar31 + 0x29) = 1, uVar32 < *(ulong *)(lStack_300 + 0x10) &&
         (plVar31 = (long *)(*(long *)(lStack_300 + 8) + uVar32 * 0x158), *plVar31 != 2)))) &&
       (*(uint *)((long)plVar31 + 0x13c) == uStack_2f4)) {
      lVar33 = plVar31[0x15];
      plVar19 = (long *)plVar31[0x16];
      plVar31[0x15] = 0;
      if (lVar33 != 0) {
        plVar19 = (long *)(**(code **)(lVar33 + 8))(plVar19);
      }
      *plStack_320 = lStack_300;
      *(uint *)(plStack_320 + 1) = uStack_2f8;
      *(uint *)((long)plStack_320 + 0xc) = uStack_2f4;
      return plVar19;
    }
    lStack_288 = (long)&uStack_2d8 + 4;
    pppppppcStack_280 = (char *******)&DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&lStack_288,&UNK_10b3fa5a0);
    puVar40 = puVar39;
  }
LAB_105a81280:
  lStack_288 = (long)&uStack_2d8 + 4;
  pppppppcStack_280 = (char *******)&DAT_105abf048;
  param_5 = (long *)&UNK_10b3fa588;
  auVar44 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&lStack_288);
  uVar26 = auVar44._8_8_;
  uVar42 = auVar44._0_8_;
  auVar43._8_8_ = param_5;
  auVar43._0_8_ = uVar42;
  plVar31 = (long *)(auStack_5b8 + 0x198);
  uStack_370 = uVar23;
  uStack_368 = uVar32;
  lStack_360 = lStack_300;
  puStack_358 = puVar37;
  plStack_350 = plVar19;
  puStack_348 = puVar35;
  puStack_340 = puVar28;
  puStack_338 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
  pppuStack_330 = &ppuStack_1b0;
  uStack_328 = 0x105a812ac;
  ppppuVar41 = &pppuStack_330;
  pppiVar21 = &ppiStack_3c0;
  uStack_414 = auVar44._8_4_;
  uVar38 = 0x10b636000;
  puVar22 = param_4;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) ||
     (((bVar16 = bRam000000010b636900, 1 < bRam000000010b636900 - 1 &&
       ((bRam000000010b636900 == 0 ||
        (bVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (0x10b6368f0), uVar32 = uVar26, bVar16 == 0)))) ||
      (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b6368f0,bVar16), uVar32 = uVar26, iVar17 == 0)))) {
    auStack_3e8 = (undefined1  [8])0x2;
    lStack_3c8 = lRam000000010b6368f0;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      uVar25 = (uint)param_5[1];
      iVar17 = *(int *)((long)param_5 + 0xc);
      if (((((*(ulong *)(*param_5 + 0x10) <= (ulong)uVar25) ||
            (plVar31 = (long *)(*(long *)(*param_5 + 8) + (ulong)uVar25 * 0x158), *plVar31 == 2)) ||
           (*(int *)((long)plVar31 + 0x13c) != iVar17)) ||
          ((piStack_380 = (int *)((long)plVar31 + 0x13c), *plVar31 == 2 || (*piStack_380 != iVar17))
          )) || ((lStack_378 = plVar31[0x14] + (uVar26 & 0xffffffff), *plVar31 == 2 ||
                 (*piStack_380 != iVar17)))) {
        auStack_410 = (undefined1  [8])param_5[1];
        ppiStack_3c0 = (int **)(auStack_410 + 4);
        puStack_3b8 = &DAT_105abf048;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_3c0,&UNK_10b3fa588);
        goto LAB_105a81888;
      }
      ppiStack_3c0 = &piStack_380;
      puStack_3b8 = &UNK_10b3fcb50;
      lStack_3f8 = lRam000000010b6368f0 + 0x30;
      puStack_3b0 = &uStack_414;
      puStack_3a8 = &UNK_10b3fcb70;
      plStack_390 = plVar31 + 0x28;
      plStack_3a0 = &lStack_378;
      puStack_398 = &UNK_10b3fb180;
      puStack_388 = &UNK_10b3fcb70;
      pppiStack_408 = &ppiStack_3c0;
      auStack_410 = (undefined1  [8])0x1;
      lStack_400 = 4;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(auStack_3e8,auStack_410);
    }
    pppiStack_408 = pppiStack_3e0;
    auStack_410 = auStack_3e8;
    lStack_3f8 = lStack_3d0;
    lStack_400 = lStack_3d8;
    lStack_3f0 = lStack_3c8;
    uVar26 = uVar32;
joined_r0x000105a81410:
    if (auStack_410 != (undefined1  [8])0x2) {
      pppiVar20 = pppiStack_408;
      if (((ulong)auStack_410 & 1) != 0) {
        pppiVar20 = (int ***)((long)pppiStack_408 +
                             (*(long *)(lStack_400 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      }
      (**(code **)(lStack_400 + 0x60))(pppiVar20,&lStack_3f8);
    }
    auVar44._8_8_ = uVar26;
    auVar44._0_8_ = uVar42;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_3f0 != 0)) {
      auStack_3e8 = *(undefined1 (*) [8])(lStack_3f0 + 0x10);
      pppiStack_3e0 = *(int ****)(lStack_3f0 + 0x18);
      ppiStack_3c0 = (int **)auStack_3e8;
      puStack_3b8 = &DAT_105aabad0;
      FUN_105ab8ca4(auStack_410,&UNK_109b161c0,0x15,s__>___108ab67cd,&ppiStack_3c0);
    }
    lVar33 = *param_5;
    puVar36 = (ulong *)(param_5 + 1);
    uVar25 = (uint)*puVar36;
    iVar17 = *(int *)((long)param_5 + 0xc);
    piVar12 = (int *)*puVar36;
    auStack_3e8 = (undefined1  [8])*puVar36;
    if ((((ulong)uVar25 < *(ulong *)(lVar33 + 0x10)) &&
        (plVar31 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar31 != 2)) &&
       (*(int *)((long)plVar31 + 0x13c) == iVar17)) {
      uVar32 = plVar31[0x14] + (ulong)uStack_414;
      cVar15 = *(uint *)(plVar31 + 0x28) < uVar32;
      if (uVar32 < *(uint *)(plVar31 + 0x28)) {
        cVar15 = -1;
      }
      if (cVar15 == -1) {
        *(int *)(plVar31 + 0x28) = (int)uVar32;
        auStack_3e8 = (undefined1  [8])piVar12;
        if (((*(ulong *)(lVar33 + 0x10) <= (ulong)uVar25) ||
            (plVar31 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar31 == 2)) ||
           (*(int *)((long)plVar31 + 0x13c) != iVar17)) goto LAB_105a81824;
        uVar9 = *(uint *)((long)plVar31 + 0x9c);
        uVar25 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
        if (uVar32 < uVar25) {
          iVar17 = uVar25 - (int)uVar32;
          if (!SBORROW4(uVar9,iVar17)) {
            *(uint *)((long)plVar31 + 0x9c) = uVar9 - iVar17;
          }
          FUN_105a83b58(uVar42,iVar17,param_5,param_4);
        }
      }
      else if (cVar15 == '\x01') {
        uVar25 = *(byte *)(plVar31 + 0xd) - 7;
        if (*(byte *)(plVar31 + 0xd) < 7) {
          uVar25 = 6;
        }
        if ((uVar25 & 0xff) < 7 && (1 << (ulong)(uVar25 & 0x1f) & 0x54U) != 0) {
          if (auStack_410 != (undefined1  [8])0x2) {
            pppiVar21 = pppiStack_408;
            if (((ulong)auStack_410 & 1) != 0) {
              pppiVar21 = (int ***)((long)pppiStack_408 +
                                   (*(long *)(lStack_400 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
            }
            (**(code **)(lStack_400 + 0x68))(pppiVar21,&lStack_3f8);
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (lStack_3f0 != 0)) {
            auStack_3e8 = *(undefined1 (*) [8])(lStack_3f0 + 0x10);
            pppiStack_3e0 = *(int ****)(lStack_3f0 + 0x18);
            ppiStack_3c0 = (int **)auStack_3e8;
            puStack_3b8 = &DAT_105aabad0;
            FUN_105ab8ca4(auStack_410,&UNK_109b161c0,0x15,s_<____108ab67c5,&ppiStack_3c0);
          }
          goto LAB_105a81800;
        }
        if (0xfffffffe < uVar32) {
          uVar32 = 0xffffffff;
        }
        *(int *)(plVar31 + 0x28) = (int)uVar32;
        uVar42 = 0x105a81780;
        plVar31 = (long *)(auStack_5b8 + 0x198);
        goto 
        __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize19try_assign_capacity17h6f4c07fd5171cf36E
        ;
      }
      if (auStack_410 != (undefined1  [8])0x2) {
        pppiVar21 = pppiStack_408;
        if (((ulong)auStack_410 & 1) != 0) {
          pppiVar21 = (int ***)((long)pppiStack_408 +
                               (*(long *)(lStack_400 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(lStack_400 + 0x68))(pppiVar21,&lStack_3f8);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_3f0 != 0))
      {
        auStack_3e8 = *(undefined1 (*) [8])(lStack_3f0 + 0x10);
        pppiStack_3e0 = *(int ****)(lStack_3f0 + 0x18);
        ppiStack_3c0 = (int **)auStack_3e8;
        puStack_3b8 = &DAT_105aabad0;
        FUN_105ab8ca4(auStack_410,&UNK_109b161c0,0x15,s_<____108ab67c5,&ppiStack_3c0);
      }
LAB_105a81800:
      plVar31 = (long *)FUN_105aada3c(auStack_410);
      return plVar31;
    }
LAB_105a81824:
    ppiStack_3c0 = (int **)(auStack_3e8 + 4);
    puStack_3b8 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_3c0,&UNK_10b3fa588);
LAB_105a81888:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x105a8188c);
    (*pcVar13)();
  }
  uVar25 = (uint)param_5[1];
  iVar17 = *(int *)((long)param_5 + 0xc);
  if (((((ulong)uVar25 < *(ulong *)(*param_5 + 0x10)) &&
       (plVar19 = (long *)(*(long *)(*param_5 + 8) + (ulong)uVar25 * 0x158), *plVar19 != 2)) &&
      ((*(int *)((long)plVar19 + 0x13c) == iVar17 &&
       (((piStack_380 = (int *)((long)plVar19 + 0x13c), *plVar19 != 2 && (*piStack_380 == iVar17))
        && (lStack_378 = plVar19[0x14] + (uVar26 & 0xffffffff), *plVar19 != 2)))))) &&
     (*piStack_380 == iVar17)) {
    ppiStack_3c0 = &piStack_380;
    puStack_3b8 = &UNK_10b3fcb50;
    lStack_3d0 = lRam000000010b6368f0 + 0x30;
    puStack_3b0 = &uStack_414;
    puStack_3a8 = &UNK_10b3fcb70;
    plStack_390 = plVar19 + 0x28;
    plStack_3a0 = &lStack_378;
    puStack_398 = &UNK_10b3fb180;
    puStack_388 = &UNK_10b3fcb70;
    pppiStack_3e0 = &ppiStack_3c0;
    auStack_3e8 = (undefined1  [8])0x1;
    lStack_3d8 = 4;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E(auStack_410,lRam000000010b6368f0,auStack_3e8);
    goto joined_r0x000105a81410;
  }
  auStack_3e8 = (undefined1  [8])param_5[1];
  ppiStack_3c0 = (int **)(auStack_3e8 + 4);
  puStack_3b8 = &DAT_105abf048;
  param_5 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (s__dangling_store_key_for_stream_i_108b233d4,&ppiStack_3c0,
                               &UNK_10b3fa588);
  FUN_105aada3c(auStack_410);
  __Unwind_Resume(param_5);
  uVar42 = 0x105a818f0;
  auVar43 = func_0x000108a07bc4();

  __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize19try_assign_capacity17h6f4c07fd5171cf36E
  :
  plVar19 = auVar43._8_8_;
  *(ulong *)((long)plVar31 + -0x60) = unaff_x28;
  *(undefined **)((long)plVar31 + -0x58) = puVar40;
  *(ulong *)((long)plVar31 + -0x50) = uVar23;
  *(long *)((long)plVar31 + -0x48) = auVar44._8_8_;
  *(undefined8 *)((long)plVar31 + -0x40) = uVar38;
  *(int ****)((long)plVar31 + -0x38) = pppiVar21;
  *(char **)((long)plVar31 + -0x30) = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
  *(undefined8 **)((long)plVar31 + -0x28) = puVar22;
  *(long *)((long)plVar31 + -0x20) = auVar44._0_8_;
  *(long **)((long)plVar31 + -0x18) = param_5;
  *(undefined1 *****)((long)plVar31 + -0x10) = ppppuVar41;
  *(undefined8 *)((long)plVar31 + -8) = uVar42;
  *(long *)((long)plVar31 + -0x230) = auVar43._0_8_;
  lVar33 = *plVar19;
  uVar25 = *(uint *)(plVar19 + 1);
  uVar23 = (ulong)uVar25;
  iVar17 = *(int *)((long)plVar19 + 0xc);
  *(uint *)((long)plVar31 + -0x140) = uVar25;
  *(int *)((long)plVar31 + -0x13c) = iVar17;
  puVar14 = (undefined1 *)plVar31;
  if (((uVar23 < *(ulong *)(lVar33 + 0x10)) &&
      (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
     (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
    lVar29 = plVar34[0x28];
    *(int *)((long)plVar31 + -0x228) = (int)lVar29;
    *(uint *)((long)plVar31 + -0x140) = uVar25;
    *(int *)((long)plVar31 + -0x13c) = iVar17;
    if (*(int *)((long)plVar34 + 0x13c) != iVar17) goto LAB_105a83438;
    uVar9 = *(uint *)((long)plVar34 + 0x9c) &
            ((int)*(uint *)((long)plVar34 + 0x9c) >> 0x1f ^ 0xffffffffU);
    uVar11 = (int)lVar29 - uVar9;
    uVar9 = (*(uint *)(plVar34 + 0x13) & ((int)*(uint *)(plVar34 + 0x13) >> 0x1f ^ 0xffffffffU)) -
            uVar9;
    if (uVar11 <= uVar9) {
      uVar9 = uVar11;
    }
    *(uint *)((long)plVar31 + -0x224) = uVar9;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E - 1U < 5) ||
        ((bVar16 = bRam000000010b6381d8, 1 < bRam000000010b6381d8 - 1 &&
         ((bRam000000010b6381d8 == 0 ||
          (bVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b6381c8), bVar16 == 0)))))) ||
       (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b6381c8,bVar16), iVar18 == 0)) {
      *(undefined8 *)((long)plVar31 + -0xe0) = 2;
      *(long *)((long)plVar31 + -0xc0) = lRam000000010b6381c8;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        *(uint *)((long)plVar31 + -0x220) = uVar25;
        *(int *)((long)plVar31 + -0x21c) = iVar17;
        if (((*(ulong *)(lVar33 + 0x10) <= uVar23) ||
            (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 == 2)) ||
           (*(int *)((long)plVar34 + 0x13c) != iVar17)) {
          *(undefined1 **)((long)plVar31 + -0x140) = (undefined1 *)((long)plVar31 + -0x21c);
          *(undefined **)((long)plVar31 + -0x138) = &DAT_105abf048;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b233d4,
                     (undefined1 *)((long)plVar31 + -0x140),&UNK_10b3fa588);
          goto LAB_105a834a8;
        }
        *(long *)((long)plVar31 + -0x188) = (long)plVar34 + 0x13c;
        *(undefined1 **)((long)plVar31 + -0x220) = (undefined1 *)((long)plVar31 + -0x188);
        *(undefined **)((long)plVar31 + -0x218) = &UNK_10b3fcb50;
        *(undefined8 *)((long)plVar31 + -0x140) = 1;
        *(undefined1 **)((long)plVar31 + -0x138) = (undefined1 *)((long)plVar31 + -0x220);
        *(undefined8 *)((long)plVar31 + -0x130) = 1;
        *(long *)((long)plVar31 + -0x128) = lRam000000010b6381c8 + 0x30;
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                  ((undefined1 *)((long)plVar31 + -0xe0),(undefined1 *)((long)plVar31 + -0x140));
      }
      *(undefined8 *)((long)plVar31 + -0x218) = *(undefined8 *)((long)plVar31 + -0xd8);
      *(undefined8 *)((long)plVar31 + -0x220) = *(undefined8 *)((long)plVar31 + -0xe0);
      *(undefined8 *)((long)plVar31 + -0x208) = *(undefined8 *)((long)plVar31 + -200);
      *(undefined8 *)((long)plVar31 + -0x210) = *(undefined8 *)((long)plVar31 + -0xd0);
      *(undefined8 *)((long)plVar31 + -0x200) = *(undefined8 *)((long)plVar31 + -0xc0);
      uVar32 = *(ulong *)((long)plVar31 + -0x220);
    }
    else {
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      if (((*(ulong *)(lVar33 + 0x10) <= uVar23) ||
          (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 == 2)) ||
         (*(int *)((long)plVar34 + 0x13c) != iVar17)) goto LAB_105a83438;
      *(long *)((long)plVar31 + -0x188) = (long)plVar34 + 0x13c;
      *(undefined1 **)((long)plVar31 + -0x140) = (undefined1 *)((long)plVar31 + -0x188);
      *(undefined **)((long)plVar31 + -0x138) = &UNK_10b3fcb50;
      *(undefined8 *)((long)plVar31 + -0xe0) = 1;
      *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x140);
      *(undefined8 *)((long)plVar31 + -0xd0) = 1;
      *(long *)((long)plVar31 + -200) = lRam000000010b6381c8 + 0x30;
      __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                ((undefined1 *)((long)plVar31 + -0x220),lRam000000010b6381c8,
                 (undefined1 *)((long)plVar31 + -0xe0));
      uVar32 = *(ulong *)((long)plVar31 + -0x220);
    }
    if (uVar32 != 2) {
      lVar29 = *(long *)((long)plVar31 + -0x218);
      if ((uVar32 & 1) != 0) {
        lVar29 = lVar29 + (*(long *)(*(long *)((long)plVar31 + -0x210) + 0x10) - 1U &
                          0xfffffffffffffff0) + 0x10;
      }
      (**(code **)(*(long *)((long)plVar31 + -0x210) + 0x60))
                (lVar29,(undefined1 *)((long)plVar31 + -0x208));
    }
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (lVar29 = *(long *)((long)plVar31 + -0x200), lVar29 != 0)) {
      uVar38 = *(undefined8 *)(lVar29 + 0x18);
      *(undefined8 *)((long)plVar31 + -0x140) = *(undefined8 *)(lVar29 + 0x10);
      *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
      *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x140);
      *(undefined **)((long)plVar31 + -0xd8) = &DAT_105aabad0;
      FUN_105ab8ca4((undefined1 *)((long)plVar31 + -0x220),&UNK_109b161c0,0x15,s__>___108ab67cd,
                    (undefined1 *)((long)plVar31 + -0xe0));
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6381c0 - 1 < 2 ||
         ((bRam000000010b6381c0 != 0 &&
          (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b6381b0), cVar15 != '\0')))) &&
        (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b6381b0), iVar18 != 0)))) {
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      if (((uVar23 < *(ulong *)(lVar33 + 0x10)) &&
          (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
         (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
        *(uint *)((long)plVar31 + -0x158) =
             *(uint *)(plVar34 + 0x13) & ((int)*(uint *)(plVar34 + 0x13) >> 0x1f ^ 0xffffffffU);
        *(undefined4 *)((long)plVar31 + -0xf0) =
             *(undefined4 *)(*(long *)((long)plVar31 + -0x230) + 0x4c);
        *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x228);
        *(undefined **)((long)plVar31 + -0xd8) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(undefined1 **)((long)plVar31 + -0xd0) = (undefined1 *)((long)plVar31 + -0x224);
        *(undefined **)((long)plVar31 + -200) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(long **)((long)plVar31 + -0xc0) = plVar34 + 0x14;
        *(undefined **)((long)plVar31 + -0xb8) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(undefined1 **)((long)plVar31 + -0xb0) = (undefined1 *)((long)plVar31 + -0x158);
        *(undefined **)((long)plVar31 + -0xa8) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(undefined1 **)((long)plVar31 + -0xa0) = (undefined1 *)((long)plVar31 + -0xf0);
        *(undefined **)((long)plVar31 + -0x98) =
             &
             __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
        ;
        *(char **)((long)plVar31 + -0x1a0) = s_requested_____additional_____buf_108b23665;
        *(undefined1 **)((long)plVar31 + -0x198) = (undefined1 *)((long)plVar31 + -0xe0);
        *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
        *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
        *(undefined8 *)((long)plVar31 + -0x140) = 1;
        *(undefined1 **)((long)plVar31 + -0x138) = (undefined1 *)((long)plVar31 + -0x80);
        *(undefined8 *)((long)plVar31 + -0x130) = 1;
        *(long *)((long)plVar31 + -0x128) = lRam000000010b6381b0 + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b6381b0,(undefined1 *)((long)plVar31 + -0x140));
        lVar29 = lRam000000010b6381b0;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar38 = *(undefined8 *)(lRam000000010b6381b0 + 0x20);
          uVar42 = *(undefined8 *)(lRam000000010b6381b0 + 0x28);
          *(undefined8 *)((long)plVar31 + -0x188) = 5;
          *(undefined8 *)((long)plVar31 + -0x180) = uVar38;
          *(undefined8 *)((long)plVar31 + -0x178) = uVar42;
          plVar34 = plRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            plVar34 = (long *)&UNK_10b3c24c8;
          }
          puVar40 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar40 = &UNK_109adfc03;
          }
          iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x188));
          if (iVar18 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x188),
                       (undefined1 *)((long)plVar31 + -0x140));
          }
        }
        goto LAB_105a81ee0;
      }
      goto LAB_105a83404;
    }
    lVar29 = lRam000000010b6381b0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar38 = *(undefined8 *)(lRam000000010b6381b0 + 0x20);
      uVar42 = *(undefined8 *)(lRam000000010b6381b0 + 0x28);
      *(undefined8 *)((long)plVar31 + -0x1f8) = 5;
      *(undefined8 *)((long)plVar31 + -0x1f0) = uVar38;
      *(undefined8 *)((long)plVar31 + -0x1e8) = uVar42;
      plVar34 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar34 = (long *)&UNK_10b3c24c8;
      }
      puVar40 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar40 = &UNK_109adfc03;
      }
      iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x1f8));
      if (iVar18 != 0) {
        *(uint *)((long)plVar31 + -0x140) = uVar25;
        *(int *)((long)plVar31 + -0x13c) = iVar17;
        if (((*(ulong *)(lVar33 + 0x10) <= uVar23) ||
            (plVar30 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar30 == 2)) ||
           (*(int *)((long)plVar30 + 0x13c) != iVar17)) goto LAB_105a83404;
        *(uint *)((long)plVar31 + -0x144) =
             *(uint *)(plVar30 + 0x13) & ((int)*(uint *)(plVar30 + 0x13) >> 0x1f ^ 0xffffffffU);
        *(undefined4 *)((long)plVar31 + -0x168) =
             *(undefined4 *)(*(long *)((long)plVar31 + -0x230) + 0x4c);
        *(undefined1 **)((long)plVar31 + -0x140) = (undefined1 *)((long)plVar31 + -0x228);
        *(undefined **)((long)plVar31 + -0x138) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(undefined1 **)((long)plVar31 + -0x130) = (undefined1 *)((long)plVar31 + -0x224);
        *(undefined **)((long)plVar31 + -0x128) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(long **)((long)plVar31 + -0x120) = plVar30 + 0x14;
        *(undefined **)((long)plVar31 + -0x118) =
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        *(undefined1 **)((long)plVar31 + -0x110) = (undefined1 *)((long)plVar31 + -0x144);
        *(undefined **)((long)plVar31 + -0x108) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(undefined1 **)((long)plVar31 + -0x100) = (undefined1 *)((long)plVar31 + -0x168);
        *(undefined **)((long)plVar31 + -0xf8) =
             &
             __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
        ;
        *(char **)((long)plVar31 + -0xf0) = s_requested_____additional_____buf_108b23665;
        *(undefined1 **)((long)plVar31 + -0xe8) = (undefined1 *)((long)plVar31 + -0x140);
        *(undefined1 **)((long)plVar31 + -0x158) = (undefined1 *)((long)plVar31 + -0xf0);
        *(undefined **)((long)plVar31 + -0x150) = &UNK_10b3f92b0;
        *(undefined8 *)((long)plVar31 + -0x188) = 1;
        *(undefined1 **)((long)plVar31 + -0x180) = (undefined1 *)((long)plVar31 + -0x158);
        *(undefined8 *)((long)plVar31 + -0x178) = 1;
        *(long *)((long)plVar31 + -0x170) = lRam000000010b6381b0 + 0x30;
        *(undefined8 *)((long)plVar31 + -0xa8) = *(undefined8 *)((long)plVar31 + -0x1f0);
        *(undefined8 *)((long)plVar31 + -0xb0) = *(undefined8 *)((long)plVar31 + -0x1f8);
        *(undefined8 *)((long)plVar31 + -0xa0) = *(undefined8 *)((long)plVar31 + -0x1e8);
        lVar5 = *(long *)(lVar29 + 0x60);
        uVar42 = *(undefined8 *)(lVar29 + 0x68);
        lVar6 = *(long *)(lVar29 + 0x50);
        uVar7 = *(undefined8 *)(lVar29 + 0x58);
        uVar38 = 1;
        if (lVar6 == 0) {
          uVar38 = 2;
        }
        uVar27 = *(undefined4 *)(lVar29 + 8);
        uVar4 = *(undefined4 *)(lVar29 + 0xc);
        *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x188);
        *(undefined1 *)((long)plVar31 + -0x78) = 1;
        *(undefined1 **)((long)plVar31 + -0x1a0) = (undefined1 *)((long)plVar31 + -0x80);
        *(undefined **)((long)plVar31 + -0x198) = &DAT_1061c2098;
        uVar2 = 1;
        if (lVar5 == 0) {
          uVar2 = 2;
        }
        *(char **)((long)plVar31 + -0x90) = s__108b39f4f;
        *(undefined1 **)((long)plVar31 + -0x88) = (undefined1 *)((long)plVar31 + -0x1a0);
        *(undefined8 *)((long)plVar31 + -0xe0) = uVar38;
        *(long *)((long)plVar31 + -0xd8) = lVar6;
        *(undefined8 *)((long)plVar31 + -0xd0) = uVar7;
        *(undefined8 *)((long)plVar31 + -200) = uVar2;
        *(long *)((long)plVar31 + -0xc0) = lVar5;
        *(undefined8 *)((long)plVar31 + -0xb8) = uVar42;
        *(undefined4 *)((long)plVar31 + -0x98) = uVar27;
        *(undefined4 *)((long)plVar31 + -0x94) = uVar4;
        (*(code *)plVar34[4])(puVar40,(undefined1 *)((long)plVar31 + -0xe0));
      }
    }
LAB_105a81ee0:
    uVar9 = *(uint *)((long)plVar31 + -0x224);
    if (uVar9 == 0) {
      if (*(ulong *)((long)plVar31 + -0x220) != 2) {
        lVar33 = *(long *)((long)plVar31 + -0x218);
        if ((*(ulong *)((long)plVar31 + -0x220) & 1) != 0) {
          lVar33 = lVar33 + (*(long *)(*(long *)((long)plVar31 + -0x210) + 0x10) - 1U &
                            0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(*(long *)((long)plVar31 + -0x210) + 0x68))
                  (lVar33,(undefined1 *)((long)plVar31 + -0x208));
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (lVar33 = *(long *)((long)plVar31 + -0x200), lVar33 != 0)) {
        uVar38 = *(undefined8 *)(lVar33 + 0x18);
        *(undefined8 *)((long)plVar31 + -0x140) = *(undefined8 *)(lVar33 + 0x10);
        *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
        *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x140);
        *(undefined **)((long)plVar31 + -0xd8) = &DAT_105aabad0;
        FUN_105ab8ca4((undefined1 *)((long)plVar31 + -0x220),&UNK_109b161c0,0x15,s_<____108ab67c5,
                      (undefined1 *)((long)plVar31 + -0xe0));
      }
      goto LAB_105a83370;
    }
    uVar11 = *(uint *)(*(long *)((long)plVar31 + -0x230) + 0x4c);
    if (0 < (int)uVar11) {
      if (uVar11 <= uVar9) {
        uVar9 = uVar11;
      }
      *(uint *)((long)plVar31 + -0x1dc) = uVar9;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b638208 - 1 < 2 ||
           ((bRam000000010b638208 != 0 &&
            (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b6381f8), cVar15 != '\0')))))) &&
         (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (lRam000000010b6381f8), iVar18 != 0)) {
        *(undefined1 **)((long)plVar31 + -0x188) = (undefined1 *)((long)plVar31 + -0x1dc);
        *(undefined **)((long)plVar31 + -0x180) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        *(char **)((long)plVar31 + -0x1a0) = s_assigning__capacity___108b236ac;
        *(undefined1 **)((long)plVar31 + -0x198) = (undefined1 *)((long)plVar31 + -0x188);
        *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
        *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
        *(undefined8 *)((long)plVar31 + -0xe0) = 1;
        *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
        *(undefined8 *)((long)plVar31 + -0xd0) = 1;
        *(long *)((long)plVar31 + -200) = lRam000000010b6381f8 + 0x30;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b6381f8,(undefined1 *)((long)plVar31 + -0xe0));
        lVar29 = lRam000000010b6381f8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar38 = *(undefined8 *)(lRam000000010b6381f8 + 0x20);
          uVar42 = *(undefined8 *)(lRam000000010b6381f8 + 0x28);
          *(undefined8 *)((long)plVar31 + -0x140) = 5;
          *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
          *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
          plVar34 = plRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            plVar34 = (long *)&UNK_10b3c24c8;
          }
          puVar40 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar40 = &UNK_109adfc03;
          }
          iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
          if (iVar18 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                       (undefined1 *)((long)plVar31 + -0xe0));
          }
        }
      }
      else {
        lVar29 = lRam000000010b6381f8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar38 = *(undefined8 *)(lRam000000010b6381f8 + 0x20);
          uVar42 = *(undefined8 *)(lRam000000010b6381f8 + 0x28);
          *(undefined8 *)((long)plVar31 + -0x1d8) = 5;
          *(undefined8 *)((long)plVar31 + -0x1d0) = uVar38;
          *(undefined8 *)((long)plVar31 + -0x1c8) = uVar42;
          plVar34 = plRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            plVar34 = (long *)&UNK_10b3c24c8;
          }
          puVar40 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar40 = &UNK_109adfc03;
          }
          iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x1d8));
          if (iVar18 != 0) {
            *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1dc);
            *(undefined **)((long)plVar31 + -0x78) =
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            *(char **)((long)plVar31 + -0xf0) = s_assigning__capacity___108b236ac;
            *(undefined1 **)((long)plVar31 + -0xe8) = (undefined1 *)((long)plVar31 + -0x80);
            *(undefined1 **)((long)plVar31 + -0x158) = (undefined1 *)((long)plVar31 + -0xf0);
            *(undefined **)((long)plVar31 + -0x150) = &UNK_10b3f92b0;
            *(undefined8 *)((long)plVar31 + -0x140) = 1;
            *(undefined1 **)((long)plVar31 + -0x138) = (undefined1 *)((long)plVar31 + -0x158);
            *(undefined8 *)((long)plVar31 + -0x130) = 1;
            *(long *)((long)plVar31 + -0x128) = lRam000000010b6381f8 + 0x30;
            *(undefined8 *)((long)plVar31 + -0xa8) = *(undefined8 *)((long)plVar31 + -0x1d0);
            *(undefined8 *)((long)plVar31 + -0xb0) = *(undefined8 *)((long)plVar31 + -0x1d8);
            *(undefined8 *)((long)plVar31 + -0xa0) = *(undefined8 *)((long)plVar31 + -0x1c8);
            lVar5 = *(long *)(lVar29 + 0x60);
            uVar42 = *(undefined8 *)(lVar29 + 0x68);
            lVar6 = *(long *)(lVar29 + 0x50);
            uVar7 = *(undefined8 *)(lVar29 + 0x58);
            uVar38 = 1;
            if (lVar6 == 0) {
              uVar38 = 2;
            }
            uVar27 = *(undefined4 *)(lVar29 + 8);
            uVar4 = *(undefined4 *)(lVar29 + 0xc);
            *(undefined1 **)((long)plVar31 + -0x1a0) = (undefined1 *)((long)plVar31 + -0x140);
            *(undefined1 *)((long)plVar31 + -0x198) = 1;
            *(undefined1 **)((long)plVar31 + -0x188) = (undefined1 *)((long)plVar31 + -0x1a0);
            *(undefined **)((long)plVar31 + -0x180) = &DAT_1061c2098;
            uVar2 = 1;
            if (lVar5 == 0) {
              uVar2 = 2;
            }
            *(char **)((long)plVar31 + -0x90) = s__108b39f4f;
            *(undefined1 **)((long)plVar31 + -0x88) = (undefined1 *)((long)plVar31 + -0x188);
            *(undefined8 *)((long)plVar31 + -0xe0) = uVar38;
            *(long *)((long)plVar31 + -0xd8) = lVar6;
            *(undefined8 *)((long)plVar31 + -0xd0) = uVar7;
            *(undefined8 *)((long)plVar31 + -200) = uVar2;
            *(long *)((long)plVar31 + -0xc0) = lVar5;
            *(undefined8 *)((long)plVar31 + -0xb8) = uVar42;
            *(undefined4 *)((long)plVar31 + -0x98) = uVar27;
            *(undefined4 *)((long)plVar31 + -0x94) = uVar4;
            (*(code *)plVar34[4])(puVar40,(undefined1 *)((long)plVar31 + -0xe0));
          }
        }
      }
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      if (((uVar23 < *(ulong *)(lVar33 + 0x10)) &&
          (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
         (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
        uVar8 = *(uint *)(*(long *)((long)plVar31 + -0x230) + 0x54);
        *(uint *)((long)plVar31 + -0x1a8) = uVar8;
        puVar36 = (ulong *)(plVar34 + 0x14);
        uVar10 = *(uint *)((long)plVar34 + 0x9c);
        uVar9 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        iVar18 = 0;
        if (*puVar36 <= (ulong)uVar8) {
          iVar18 = uVar8 - (int)*puVar36;
        }
        *(int *)((long)plVar31 + -0x1a4) = iVar18;
        if (!SCARRY4(uVar10,*(int *)((long)plVar31 + -0x1dc))) {
          *(uint *)((long)plVar34 + 0x9c) = uVar10 + *(int *)((long)plVar31 + -0x1dc);
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b638700 - 1 < 2 ||
             ((bRam000000010b638700 != 0 &&
              (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (0x10b6386f0), cVar15 != '\0')))))) &&
           (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b6386f0), iVar18 != 0)) {
          *(undefined4 *)((long)plVar31 + -0xf0) = *(undefined4 *)((long)plVar34 + 0x9c);
          *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0xf0);
          *(undefined **)((long)plVar31 + -0xd8) =
               &
               __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
          ;
          *(ulong **)((long)plVar31 + -0xd0) = puVar36;
          *(undefined **)((long)plVar31 + -200) =
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          *(long *)((long)plVar31 + -0xc0) = (long)plVar34 + 0x13c;
          *(undefined **)((long)plVar31 + -0xb8) = &DAT_105abf048;
          *(undefined1 **)((long)plVar31 + -0xb0) = (undefined1 *)((long)plVar31 + -0x1a8);
          *(undefined **)((long)plVar31 + -0xa8) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          *(undefined1 **)((long)plVar31 + -0xa0) = (undefined1 *)((long)plVar31 + -0x1a4);
          *(undefined **)((long)plVar31 + -0x98) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          *(char **)((long)plVar31 + -0x1a0) = s___assigned_capacity_to_stream__a_108b173bb;
          *(undefined1 **)((long)plVar31 + -0x198) = (undefined1 *)((long)plVar31 + -0xe0);
          *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
          *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
          *(undefined8 *)((long)plVar31 + -0x140) = 1;
          *(undefined1 **)((long)plVar31 + -0x138) = (undefined1 *)((long)plVar31 + -0x80);
          *(undefined8 *)((long)plVar31 + -0x130) = 1;
          *(long *)((long)plVar31 + -0x128) = lRam000000010b6386f0 + 0x30;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b6386f0,(undefined1 *)((long)plVar31 + -0x140));
          lVar29 = lRam000000010b6386f0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar38 = *(undefined8 *)(lRam000000010b6386f0 + 0x20);
            uVar42 = *(undefined8 *)(lRam000000010b6386f0 + 0x28);
            *(undefined8 *)((long)plVar31 + -0x188) = 5;
            *(undefined8 *)((long)plVar31 + -0x180) = uVar38;
            *(undefined8 *)((long)plVar31 + -0x178) = uVar42;
            plVar30 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              plVar30 = (long *)&UNK_10b3c24c8;
            }
            puVar40 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar40 = &UNK_109adfc03;
            }
            iVar18 = (*(code *)plVar30[3])(puVar40,(undefined1 *)((long)plVar31 + -0x188));
            if (iVar18 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar29,puVar40,plVar30,(undefined1 *)((long)plVar31 + -0x188),
                         (undefined1 *)((long)plVar31 + -0x140));
            }
          }
        }
        else {
          lVar29 = lRam000000010b6386f0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar38 = *(undefined8 *)(lRam000000010b6386f0 + 0x20);
            uVar42 = *(undefined8 *)(lRam000000010b6386f0 + 0x28);
            *(undefined8 *)((long)plVar31 + -0x1a0) = 5;
            *(undefined8 *)((long)plVar31 + -0x198) = uVar38;
            *(undefined8 *)((long)plVar31 + -400) = uVar42;
            plVar30 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              plVar30 = (long *)&UNK_10b3c24c8;
            }
            puVar40 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar40 = &UNK_109adfc03;
            }
            pcVar13 = (code *)plVar30[3];
            *(undefined **)((long)plVar31 + -0x238) = puVar40;
            iVar18 = (*pcVar13)(puVar40,(undefined1 *)((long)plVar31 + -0x1a0));
            if (iVar18 != 0) {
              *(undefined4 *)((long)plVar31 + -0x144) = *(undefined4 *)((long)plVar34 + 0x9c);
              *(undefined1 **)((long)plVar31 + -0x140) = (undefined1 *)((long)plVar31 + -0x144);
              *(undefined **)((long)plVar31 + -0x138) =
                   &
                   __ZN95__LT_rama_http_core__h2__proto__streams__flow_control__Window_u20_as_u20_core__fmt__Display_GT_3fmt17h8f8373570c9b2abbE
              ;
              *(ulong **)((long)plVar31 + -0x130) = puVar36;
              *(undefined **)((long)plVar31 + -0x128) =
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              *(long *)((long)plVar31 + -0x120) = (long)plVar34 + 0x13c;
              *(undefined **)((long)plVar31 + -0x118) = &DAT_105abf048;
              *(undefined1 **)((long)plVar31 + -0x110) = (undefined1 *)((long)plVar31 + -0x1a8);
              *(undefined **)((long)plVar31 + -0x108) =
                   &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              *(undefined1 **)((long)plVar31 + -0x100) = (undefined1 *)((long)plVar31 + -0x1a4);
              *(undefined **)((long)plVar31 + -0xf8) =
                   &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              *(char **)((long)plVar31 + -0x158) = s___assigned_capacity_to_stream__a_108b173bb;
              *(undefined1 **)((long)plVar31 + -0x150) = (undefined1 *)((long)plVar31 + -0x140);
              *(undefined1 **)((long)plVar31 + -0x168) = (undefined1 *)((long)plVar31 + -0x158);
              *(undefined **)((long)plVar31 + -0x160) = &UNK_10b3f92b0;
              *(undefined8 *)((long)plVar31 + -0x188) = 1;
              *(undefined1 **)((long)plVar31 + -0x180) = (undefined1 *)((long)plVar31 + -0x168);
              *(undefined8 *)((long)plVar31 + -0x178) = 1;
              *(long *)((long)plVar31 + -0x170) = lRam000000010b6386f0 + 0x30;
              lVar5 = *(long *)(lVar29 + 0x60);
              uVar42 = *(undefined8 *)(lVar29 + 0x68);
              lVar6 = *(long *)(lVar29 + 0x50);
              uVar7 = *(undefined8 *)(lVar29 + 0x58);
              uVar38 = 1;
              if (lVar6 == 0) {
                uVar38 = 2;
              }
              uVar27 = *(undefined4 *)(lVar29 + 8);
              uVar4 = *(undefined4 *)(lVar29 + 0xc);
              *(undefined1 **)((long)plVar31 + -0xf0) = (undefined1 *)((long)plVar31 + -0x188);
              *(undefined1 *)((long)plVar31 + -0xe8) = 1;
              *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0xf0);
              *(undefined **)((long)plVar31 + -0x78) = &DAT_1061c2098;
              uVar2 = 1;
              if (lVar5 == 0) {
                uVar2 = 2;
              }
              *(undefined8 *)((long)plVar31 + -0xa8) = *(undefined8 *)((long)plVar31 + -0x198);
              *(undefined8 *)((long)plVar31 + -0xb0) = *(undefined8 *)((long)plVar31 + -0x1a0);
              *(undefined8 *)((long)plVar31 + -0xa0) = *(undefined8 *)((long)plVar31 + -400);
              *(char **)((long)plVar31 + -0x90) = s__108b39f4f;
              *(undefined1 **)((long)plVar31 + -0x88) = (undefined1 *)((long)plVar31 + -0x80);
              *(undefined8 *)((long)plVar31 + -0xe0) = uVar38;
              *(long *)((long)plVar31 + -0xd8) = lVar6;
              *(undefined8 *)((long)plVar31 + -0xd0) = uVar7;
              *(undefined8 *)((long)plVar31 + -200) = uVar2;
              *(long *)((long)plVar31 + -0xc0) = lVar5;
              *(undefined8 *)((long)plVar31 + -0xb8) = uVar42;
              *(undefined4 *)((long)plVar31 + -0x98) = uVar27;
              *(undefined4 *)((long)plVar31 + -0x94) = uVar4;
              (*(code *)plVar30[4])
                        (*(undefined8 *)((long)plVar31 + -0x238),
                         (undefined1 *)((long)plVar31 + -0xe0));
            }
          }
        }
        uVar9 = *(uint *)((long)plVar34 + 0x9c) &
                ((int)*(uint *)((long)plVar34 + 0x9c) >> 0x1f ^ 0xffffffffU);
        uVar8 = *(uint *)((long)plVar31 + -0x1a8);
        if (uVar9 <= *(uint *)((long)plVar31 + -0x1a8)) {
          uVar8 = uVar9;
        }
        uVar9 = 0;
        if ((ulong)plVar34[0x14] <= (ulong)uVar8) {
          uVar9 = uVar8 - (int)plVar34[0x14];
        }
        if (*(uint *)((long)plVar31 + -0x1a4) < uVar9) {
          FUN_105a97698(plVar34);
        }
        if (!SBORROW4(uVar11,*(int *)((long)plVar31 + -0x1dc))) {
          *(uint *)(*(long *)((long)plVar31 + -0x230) + 0x4c) =
               uVar11 - *(int *)((long)plVar31 + -0x1dc);
        }
        goto LAB_105a825a8;
      }
      goto LAB_105a83468;
    }
LAB_105a825a8:
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6381f0 - 1 < 2 ||
         ((bRam000000010b6381f0 != 0 &&
          (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b6381e0), cVar15 != '\0')))) &&
        (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b6381e0), iVar18 != 0)))) {
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      if (((uVar23 < *(ulong *)(lVar33 + 0x10)) &&
          (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
         (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
        *(undefined4 *)((long)plVar31 + -0xf0) = *(undefined4 *)((long)plVar34 + 0x9c);
        *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0xf0);
        *(uint *)((long)plVar31 + -0x140) = uVar25;
        *(int *)((long)plVar31 + -0x13c) = iVar17;
        if ((*plVar34 != 2) && (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
          uVar9 = *(uint *)(plVar34 + 0x13);
          *(bool *)((long)plVar31 + -0x158) =
               (uVar9 < 0x80000000 && uVar9 != *(uint *)((long)plVar34 + 0x9c)) &&
               ((int)uVar9 < 0 || (int)*(uint *)((long)plVar34 + 0x9c) <= (int)uVar9);
          *(undefined1 **)((long)plVar31 + -0x1a0) = (undefined1 *)((long)plVar31 + -0x158);
          *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x80);
          *(undefined **)((long)plVar31 + -0xd8) = &UNK_10b3fcea0;
          *(long **)((long)plVar31 + -0xd0) = plVar34 + 0x28;
          *(undefined **)((long)plVar31 + -200) = &UNK_10b3fcb70;
          *(long **)((long)plVar31 + -0xc0) = plVar34 + 0x14;
          *(undefined **)((long)plVar31 + -0xb8) = &UNK_10b3fb180;
          *(undefined1 **)((long)plVar31 + -0xb0) = (undefined1 *)((long)plVar31 + -0x1a0);
          *(undefined **)((long)plVar31 + -0xa8) = &UNK_10b3fcec0;
          *(undefined8 *)((long)plVar31 + -0x140) = 1;
          *(undefined1 **)((long)plVar31 + -0x138) = (undefined1 *)((long)plVar31 + -0xe0);
          *(undefined8 *)((long)plVar31 + -0x130) = 4;
          *(long *)((long)plVar31 + -0x128) = lRam000000010b6381e0 + 0x30;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b6381e0,(undefined1 *)((long)plVar31 + -0x140));
          lVar29 = lRam000000010b6381e0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar38 = *(undefined8 *)(lRam000000010b6381e0 + 0x20);
            uVar42 = *(undefined8 *)(lRam000000010b6381e0 + 0x28);
            *(undefined8 *)((long)plVar31 + -0x188) = 5;
            *(undefined8 *)((long)plVar31 + -0x180) = uVar38;
            *(undefined8 *)((long)plVar31 + -0x178) = uVar42;
            plVar34 = plRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              plVar34 = (long *)&UNK_10b3c24c8;
            }
            puVar40 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar40 = &UNK_109adfc03;
            }
            iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x188));
            if (iVar18 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x188),
                         (undefined1 *)((long)plVar31 + -0x140));
            }
          }
          goto LAB_105a82940;
        }
      }
      goto LAB_105a83404;
    }
    lVar29 = lRam000000010b6381e0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar38 = *(undefined8 *)(lRam000000010b6381e0 + 0x20);
      uVar42 = *(undefined8 *)(lRam000000010b6381e0 + 0x28);
      *(undefined8 *)((long)plVar31 + -0x1c0) = 5;
      *(undefined8 *)((long)plVar31 + -0x1b8) = uVar38;
      *(undefined8 *)((long)plVar31 + -0x1b0) = uVar42;
      plVar34 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar34 = (long *)&UNK_10b3c24c8;
      }
      puVar40 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar40 = &UNK_109adfc03;
      }
      iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x1c0));
      if (iVar18 == 0) goto LAB_105a82940;
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      if (((uVar23 < *(ulong *)(lVar33 + 0x10)) &&
          (plVar30 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar30 != 2)) &&
         (*(int *)((long)plVar30 + 0x13c) == iVar17)) {
        *(undefined4 *)((long)plVar31 + -0x168) = *(undefined4 *)((long)plVar30 + 0x9c);
        *(undefined1 **)((long)plVar31 + -0x158) = (undefined1 *)((long)plVar31 + -0x168);
        *(uint *)((long)plVar31 + -0x140) = uVar25;
        *(int *)((long)plVar31 + -0x13c) = iVar17;
        if ((*plVar30 != 2) && (*(int *)((long)plVar30 + 0x13c) == iVar17)) {
          uVar9 = *(uint *)(plVar30 + 0x13);
          *(bool *)((long)plVar31 + -0x144) =
               (uVar9 < 0x80000000 && uVar9 != *(uint *)((long)plVar30 + 0x9c)) &&
               ((int)uVar9 < 0 || (int)*(uint *)((long)plVar30 + 0x9c) <= (int)uVar9);
          *(undefined1 **)((long)plVar31 + -0xf0) = (undefined1 *)((long)plVar31 + -0x144);
          *(undefined1 **)((long)plVar31 + -0x140) = (undefined1 *)((long)plVar31 + -0x158);
          *(undefined **)((long)plVar31 + -0x138) = &UNK_10b3fcea0;
          *(long **)((long)plVar31 + -0x130) = plVar30 + 0x28;
          *(undefined **)((long)plVar31 + -0x128) = &UNK_10b3fcb70;
          *(long **)((long)plVar31 + -0x120) = plVar30 + 0x14;
          *(undefined **)((long)plVar31 + -0x118) = &UNK_10b3fb180;
          *(undefined1 **)((long)plVar31 + -0x110) = (undefined1 *)((long)plVar31 + -0xf0);
          *(undefined **)((long)plVar31 + -0x108) = &UNK_10b3fcec0;
          *(undefined8 *)((long)plVar31 + -0x188) = 1;
          *(undefined1 **)((long)plVar31 + -0x180) = (undefined1 *)((long)plVar31 + -0x140);
          *(undefined8 *)((long)plVar31 + -0x178) = 4;
          *(long *)((long)plVar31 + -0x170) = lRam000000010b6381e0 + 0x30;
          *(undefined8 *)((long)plVar31 + -0xa8) = *(undefined8 *)((long)plVar31 + -0x1b8);
          *(undefined8 *)((long)plVar31 + -0xb0) = *(undefined8 *)((long)plVar31 + -0x1c0);
          *(undefined8 *)((long)plVar31 + -0xa0) = *(undefined8 *)((long)plVar31 + -0x1b0);
          lVar5 = *(long *)(lVar29 + 0x60);
          uVar42 = *(undefined8 *)(lVar29 + 0x68);
          lVar6 = *(long *)(lVar29 + 0x50);
          uVar7 = *(undefined8 *)(lVar29 + 0x58);
          uVar38 = 1;
          if (lVar6 == 0) {
            uVar38 = 2;
          }
          uVar27 = *(undefined4 *)(lVar29 + 8);
          uVar4 = *(undefined4 *)(lVar29 + 0xc);
          *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x188);
          *(undefined1 *)((long)plVar31 + -0x78) = 1;
          *(undefined1 **)((long)plVar31 + -0x1a0) = (undefined1 *)((long)plVar31 + -0x80);
          *(undefined **)((long)plVar31 + -0x198) = &DAT_1061c2098;
          uVar2 = 1;
          if (lVar5 == 0) {
            uVar2 = 2;
          }
          *(char **)((long)plVar31 + -0x90) = s__108b39f4f;
          *(undefined1 **)((long)plVar31 + -0x88) = (undefined1 *)((long)plVar31 + -0x1a0);
          *(undefined8 *)((long)plVar31 + -0xe0) = uVar38;
          *(long *)((long)plVar31 + -0xd8) = lVar6;
          *(undefined8 *)((long)plVar31 + -0xd0) = uVar7;
          *(undefined8 *)((long)plVar31 + -200) = uVar2;
          *(long *)((long)plVar31 + -0xc0) = lVar5;
          *(undefined8 *)((long)plVar31 + -0xb8) = uVar42;
          *(undefined4 *)((long)plVar31 + -0x98) = uVar27;
          *(undefined4 *)((long)plVar31 + -0x94) = uVar4;
          (*(code *)plVar34[4])(puVar40,(undefined1 *)((long)plVar31 + -0xe0));
          goto LAB_105a82940;
        }
      }
    }
    else {
LAB_105a82940:
      *(uint *)((long)plVar31 + -0x140) = uVar25;
      *(int *)((long)plVar31 + -0x13c) = iVar17;
      uVar32 = *(ulong *)(lVar33 + 0x10);
      if (((uVar23 < uVar32) &&
          (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
         (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
        uVar9 = *(uint *)((long)plVar34 + 0x9c);
        if (((((int)uVar9 < 0) || (uVar9 < *(uint *)(plVar34 + 0x28))) && (-1 < (int)plVar34[0x13]))
           && ((int)uVar9 < (int)plVar34[0x13])) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b636e28 - 1 < 2 ||
               ((bRam000000010b636e28 != 0 &&
                (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                                    ), cVar15 != '\0')))))) &&
             (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                                 ), iVar18 != 0)) {
            *(undefined **)((long)plVar31 + -0x188) = &UNK_108c73cd0;
            *(undefined8 *)((long)plVar31 + -0x180) = 0x21;
            *(undefined1 **)((long)plVar31 + -0x1a0) = (undefined1 *)((long)plVar31 + -0x188);
            *(undefined **)((long)plVar31 + -0x198) = &UNK_10b3f92b0;
            *(undefined8 *)((long)plVar31 + -0xe0) = 1;
            *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x1a0);
            *(undefined8 *)((long)plVar31 + -0xd0) = 1;
            *(long *)((long)plVar31 + -200) =
                 ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                 + 0x30;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                       ,(undefined1 *)((long)plVar31 + -0xe0));
            lVar29 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar38 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                        + 0x20);
              uVar42 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                        + 0x28);
              *(undefined8 *)((long)plVar31 + -0x140) = 5;
              *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
              *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
              plVar34 = plRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                plVar34 = (long *)&UNK_10b3c24c8;
              }
              puVar40 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar40 = &UNK_109adfc03;
              }
              iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
              if (iVar18 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                           (undefined1 *)((long)plVar31 + -0xe0));
              }
            }
          }
          else {
            lVar29 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar38 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                        + 0x20);
              uVar42 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                        + 0x28);
              *(undefined8 *)((long)plVar31 + -0x188) = 5;
              *(undefined8 *)((long)plVar31 + -0x180) = uVar38;
              *(undefined8 *)((long)plVar31 + -0x178) = uVar42;
              plVar34 = plRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                plVar34 = (long *)&UNK_10b3c24c8;
              }
              puVar40 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar40 = &UNK_109adfc03;
              }
              iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x188));
              if (iVar18 != 0) {
                *(undefined **)((long)plVar31 + -0x1a0) = &UNK_108c73cd0;
                *(undefined8 *)((long)plVar31 + -0x198) = 0x21;
                *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
                *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                *(long *)((long)plVar31 + -200) =
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                     + 0x30;
                *(undefined8 *)((long)plVar31 + -0x138) = *(undefined8 *)((long)plVar31 + -0x180);
                *(undefined8 *)((long)plVar31 + -0x140) = *(undefined8 *)((long)plVar31 + -0x188);
                *(undefined8 *)((long)plVar31 + -0x130) = *(undefined8 *)((long)plVar31 + -0x178);
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                           (undefined1 *)((long)plVar31 + -0xe0));
              }
            }
          }
          *(uint *)((long)plVar31 + -0x140) = uVar25;
          *(int *)((long)plVar31 + -0x13c) = iVar17;
          if (((*(ulong *)(lVar33 + 0x10) <= uVar23) ||
              (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 == 2)) ||
             (*(int *)((long)plVar34 + 0x13c) != iVar17)) goto LAB_105a83404;
          if ((*(byte *)((long)plVar34 + 0x14a) & 1) == 0) {
            *(undefined1 *)((long)plVar34 + 0x14a) = 1;
            if (*(int *)(*(long *)((long)plVar31 + -0x230) + 0x14) == 1) {
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b636e10 - 1 < 2 ||
                   ((bRam000000010b636e10 != 0 &&
                    (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                                        ), cVar15 != '\0')))))) &&
                 (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                                     ), iVar18 != 0)) {
                *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e283;
                *(undefined8 *)((long)plVar31 + -0x198) = 0x29;
                *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
                *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                *(long *)((long)plVar31 + -200) =
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                     + 0x30;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                           ,(undefined1 *)((long)plVar31 + -0xe0));
                lVar29 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar38 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                            + 0x20);
                  uVar42 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                            + 0x28);
                  *(undefined8 *)((long)plVar31 + -0x140) = 5;
                  *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
                  *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  puVar40 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar40 = &UNK_109adfc03;
                  }
                  iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
                  if (iVar18 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                               (undefined1 *)((long)plVar31 + -0xe0));
                  }
                }
              }
              else {
                lVar29 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar38 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                            + 0x20);
                  uVar42 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                            + 0x28);
                  *(undefined8 *)((long)plVar31 + -0x140) = 5;
                  *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
                  *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  puVar40 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar40 = &UNK_109adfc03;
                  }
                  iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
                  if (iVar18 != 0) {
                    *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e283;
                    *(undefined8 *)((long)plVar31 + -0x198) = 0x29;
                    *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0)
                    ;
                    *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                    *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                    *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                    *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                    *(long *)((long)plVar31 + -200) =
                         ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                         + 0x30;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                               (undefined1 *)((long)plVar31 + -0xe0));
                  }
                }
              }
              uVar9 = *(uint *)(*(long *)((long)plVar31 + -0x230) + 0x20);
              iVar18 = *(int *)(*(long *)((long)plVar31 + -0x230) + 0x24);
              *(uint *)((long)plVar31 + -0x1a0) = uVar9;
              *(int *)((long)plVar31 + -0x19c) = iVar18;
              puVar14 = (undefined1 *)((long)plVar31 + -0x60);
              if (((*(ulong *)(lVar33 + 0x10) <= (ulong)uVar9) ||
                  (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar9 * 0x158),
                  puVar14 = (undefined1 *)((long)plVar31 + -0x60), *plVar34 == 2)) ||
                 (puVar14 = (undefined1 *)((long)plVar31 + -0x60),
                 *(int *)((long)plVar34 + 0x13c) != iVar18)) goto LAB_105a83468;
              *(undefined4 *)((long)plVar34 + 0xec) = 1;
              *(uint *)(plVar34 + 0x1e) = uVar25;
              *(int *)((long)plVar34 + 0xf4) = iVar17;
              lVar29 = *(long *)((long)plVar31 + -0x230);
              *(uint *)(lVar29 + 0x20) = uVar25;
              *(int *)(lVar29 + 0x24) = iVar17;
            }
            else {
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b636e40 - 1 < 2 ||
                   ((bRam000000010b636e40 != 0 &&
                    (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                                        ), cVar15 != '\0')))))) &&
                 (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                                     ), iVar18 != 0)) {
                *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e297;
                *(undefined8 *)((long)plVar31 + -0x198) = 0x1f;
                *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
                *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                *(long *)((long)plVar31 + -200) =
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                     + 0x30;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                           ,(undefined1 *)((long)plVar31 + -0xe0));
                lVar29 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar38 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            + 0x20);
                  uVar42 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            + 0x28);
                  *(undefined8 *)((long)plVar31 + -0x140) = 5;
                  *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
                  *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  puVar40 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar40 = &UNK_109adfc03;
                  }
                  iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
                  if (iVar18 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                               (undefined1 *)((long)plVar31 + -0xe0));
                  }
                }
              }
              else {
                lVar29 = 
                ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar38 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            + 0x20);
                  uVar42 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                            + 0x28);
                  *(undefined8 *)((long)plVar31 + -0x140) = 5;
                  *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
                  *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
                  plVar34 = plRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    plVar34 = (long *)&UNK_10b3c24c8;
                  }
                  puVar40 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar40 = &UNK_109adfc03;
                  }
                  iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
                  if (iVar18 != 0) {
                    *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e297;
                    *(undefined8 *)((long)plVar31 + -0x198) = 0x1f;
                    *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0)
                    ;
                    *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                    *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                    *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                    *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                    *(long *)((long)plVar31 + -200) =
                         ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                         + 0x30;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                               (undefined1 *)((long)plVar31 + -0xe0));
                  }
                }
              }
              lVar29 = *(long *)((long)plVar31 + -0x230);
              *(undefined4 *)(lVar29 + 0x14) = 1;
              *(uint *)(lVar29 + 0x18) = uVar25;
              *(int *)(lVar29 + 0x1c) = iVar17;
              *(uint *)(lVar29 + 0x20) = uVar25;
              *(int *)(lVar29 + 0x24) = iVar17;
            }
          }
          else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  (((bRam000000010b636e58 - 1 < 2 ||
                    ((bRam000000010b636e58 != 0 &&
                     (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                                         ), cVar15 != '\0')))) &&
                   (iVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (
                                       ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                                       ), iVar18 != 0)))) {
            *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e2a6;
            *(undefined8 *)((long)plVar31 + -0x198) = 0x25;
            *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
            *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
            *(undefined8 *)((long)plVar31 + -0xe0) = 1;
            *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
            *(undefined8 *)((long)plVar31 + -0xd0) = 1;
            *(long *)((long)plVar31 + -200) =
                 ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                 + 0x30;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                       ,(undefined1 *)((long)plVar31 + -0xe0));
            lVar29 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar38 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                        + 0x20);
              uVar42 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                        + 0x28);
              *(undefined8 *)((long)plVar31 + -0x140) = 5;
              *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
              *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
              plVar34 = plRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                plVar34 = (long *)&UNK_10b3c24c8;
              }
              puVar40 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar40 = &UNK_109adfc03;
              }
              iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
              if (iVar18 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                           (undefined1 *)((long)plVar31 + -0xe0));
              }
            }
          }
          else {
            lVar29 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar38 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                        + 0x20);
              uVar42 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                        + 0x28);
              *(undefined8 *)((long)plVar31 + -0x140) = 5;
              *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
              *(undefined8 *)((long)plVar31 + -0x130) = uVar42;
              plVar34 = plRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                plVar34 = (long *)&UNK_10b3c24c8;
              }
              puVar40 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar40 = &UNK_109adfc03;
              }
              iVar18 = (*(code *)plVar34[3])(puVar40,(undefined1 *)((long)plVar31 + -0x140));
              if (iVar18 != 0) {
                *(undefined **)((long)plVar31 + -0x1a0) = &UNK_109b0e2a6;
                *(undefined8 *)((long)plVar31 + -0x198) = 0x25;
                *(undefined1 **)((long)plVar31 + -0x80) = (undefined1 *)((long)plVar31 + -0x1a0);
                *(undefined **)((long)plVar31 + -0x78) = &UNK_10b3f92b0;
                *(undefined8 *)((long)plVar31 + -0xe0) = 1;
                *(undefined1 **)((long)plVar31 + -0xd8) = (undefined1 *)((long)plVar31 + -0x80);
                *(undefined8 *)((long)plVar31 + -0xd0) = 1;
                *(long *)((long)plVar31 + -200) =
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                     + 0x30;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar29,puVar40,plVar34,(undefined1 *)((long)plVar31 + -0x140),
                           (undefined1 *)((long)plVar31 + -0xe0));
              }
            }
          }
          uVar32 = *(ulong *)(lVar33 + 0x10);
        }
        *(uint *)((long)plVar31 + -0x140) = uVar25;
        *(int *)((long)plVar31 + -0x13c) = iVar17;
        if (((uVar23 < uVar32) &&
            (plVar34 = (long *)(*(long *)(lVar33 + 8) + (ulong)uVar25 * 0x158), *plVar34 != 2)) &&
           (*(int *)((long)plVar34 + 0x13c) == iVar17)) {
          if (((plVar34[0x14] != 0) && ((*(byte *)((long)plVar34 + 0x14c) & 1) == 0)) &&
             ((*(byte *)((long)plVar34 + 0x14d) & 1) == 0)) {
            func_0x000105a94a50(*(undefined8 *)((long)plVar31 + -0x230),plVar19);
          }
          if (*(ulong *)((long)plVar31 + -0x220) != 2) {
            lVar33 = *(long *)((long)plVar31 + -0x218);
            if ((*(ulong *)((long)plVar31 + -0x220) & 1) != 0) {
              lVar33 = lVar33 + (*(long *)(*(long *)((long)plVar31 + -0x210) + 0x10) - 1U &
                                0xfffffffffffffff0) + 0x10;
            }
            (**(code **)(*(long *)((long)plVar31 + -0x210) + 0x68))
                      (lVar33,(undefined1 *)((long)plVar31 + -0x208));
          }
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (lVar33 = *(long *)((long)plVar31 + -0x200), lVar33 != 0)) {
            uVar38 = *(undefined8 *)(lVar33 + 0x18);
            *(undefined8 *)((long)plVar31 + -0x140) = *(undefined8 *)(lVar33 + 0x10);
            *(undefined8 *)((long)plVar31 + -0x138) = uVar38;
            *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x140);
            *(undefined **)((long)plVar31 + -0xd8) = &DAT_105aabad0;
            FUN_105ab8ca4((undefined1 *)((long)plVar31 + -0x220),&UNK_109b161c0,0x15,
                          s_<____108ab67c5,(undefined1 *)((long)plVar31 + -0xe0));
          }
LAB_105a83370:
          plVar31 = (long *)FUN_105aada3c((undefined1 *)((long)plVar31 + -0x220));
          return plVar31;
        }
      }
    }
LAB_105a83404:
    *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x13c);
    puVar40 = &UNK_10b3fa588;
  }
  else {
LAB_105a83438:
    *(undefined1 **)((long)plVar31 + -0xe0) = (undefined1 *)((long)plVar31 + -0x13c);
    *(undefined **)((long)plVar31 + -0xd8) = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,(undefined1 *)((long)plVar31 + -0xe0),
               &UNK_10b3fa588);
LAB_105a83468:
    *(undefined1 **)((long)plVar31 + -0xe0) = puVar14 + -0x13c;
    puVar40 = &UNK_10b3fa5a0;
  }
  *(undefined **)((long)plVar31 + -0xd8) = &DAT_105abf048;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b233d4,(undefined1 *)((long)plVar31 + -0xe0),
             puVar40);
LAB_105a834a8:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x105a834ac);
  (*pcVar13)();
}

