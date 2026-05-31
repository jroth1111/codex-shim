
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_app_server18request_processors16thread_processor25thread_from_stored_thread17h9999c464848c4bd4E
               (long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *******pppppppcVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  char ***pppcVar15;
  long lVar16;
  char *******pppppppcVar17;
  code *pcVar18;
  char cVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  char *******extraout_x14;
  char *******pppppppcVar28;
  char *******pppppppcVar29;
  long extraout_x16;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  int iVar33;
  undefined8 uVar34;
  undefined8 *******pppppppuVar35;
  long lVar36;
  long lVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined8 *******pppppppuVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  int iVar44;
  undefined8 *******pppppppuVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long *plStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  long lStack_2a0;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  ulong uStack_258;
  char *******pppppppcStack_250;
  ulong uStack_248;
  ulong uStack_230;
  char *******pppppppcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 ******ppppppuStack_1f0;
  char ***pppcStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  code *pcStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  long lStack_198;
  char *pcStack_190;
  undefined8 *******pppppppuStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  char *******pppppppcStack_160;
  char **ppcStack_158;
  undefined *puStack_150;
  char *pcStack_148;
  char *******pppppppcStack_140;
  undefined8 *******pppppppuStack_138;
  code *pcStack_130;
  char *******pppppppcStack_128;
  char *******pppppppcStack_120;
  long lStack_118;
  ulong uStack_110;
  char *******pppppppcStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  undefined8 *******pppppppuStack_d0;
  long lStack_c8;
  char *pcStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_a8;
  undefined *puStack_a0;
  undefined8 *******pppppppuStack_98;
  code *pcStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  
  lVar25 = *(long *)(param_2 + 0x160);
  if (lVar25 != -0x7fffffffffffffff) {
    if (lVar25 != -0x8000000000000000) {
      pppppppcStack_108 = *(char ********)(param_2 + 0x170);
      uStack_110 = *(ulong *)(param_2 + 0x168);
    }
    pppppppcStack_228 = pppppppcStack_108;
    uStack_230 = uStack_110;
    lStack_218 = *(long *)(param_2 + 0x180);
    lStack_220 = *(long *)(param_2 + 0x178);
    lStack_210 = *(long *)(param_2 + 0x188);
    lStack_200 = *(long *)(param_2 + 0x198);
    lStack_208 = *(long *)(param_2 + 400);
    lStack_1f8 = *(long *)(param_2 + 0x1a0);
  }
  lVar4 = *(long *)(param_2 + 0x90);
  lVar7 = *(long *)(param_2 + 0x98);
  lVar41 = *(long *)(param_2 + 0xa0);
  lVar36 = *(long *)(param_2 + 0x60);
  uVar34 = *(undefined8 *)(param_2 + 0x68);
  lVar37 = *(long *)(param_2 + 0x70);
  if (lVar37 == 0) {
    lVar21 = 1;
    _memcpy(1,uVar34,0);
  }
  else {
    lVar21 = _malloc(lVar37);
    if (lVar21 == 0) {
      func_0x0001087c9084(1,lVar37);
      goto LAB_101896e7c;
    }
    _memcpy(lVar21,uVar34,lVar37);
  }
  if (lVar36 != 0) {
    _free(uVar34);
  }
  __ZN3std3env11current_dir17he7f55ba519818f7aE(&uStack_110);
  uVar5 = uStack_100;
  pppppppcVar8 = pppppppcStack_108;
  uVar43 = uStack_110;
  if (uStack_110 == 0x8000000000000000) {
    pppppppcVar17 = pppppppcVar8;
    if (lVar37 != 0) {
      _free(lVar21);
    }
joined_r0x0001018961a4:
    pppppppcStack_160 = pppppppcVar17;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b627b28 - 1 < 2 ||
         ((bRam000000010b627b28 != 0 &&
          (cVar19 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b627b18), cVar19 != '\0')))) &&
        (iVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b627b18), iVar20 != 0)))) {
      uStack_f8 = lRam000000010b627b18 + 0x30;
      pppppppuStack_98 = &pppppppcStack_160;
      pcStack_90 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      pppppppcStack_120 = (char *******)&pppppppuStack_98;
      pppppppcStack_128 = (char *******)s_<failed_to_normalize_thread_cwd_w_108adda12;
      pppppppuStack_a8 = &pppppppcStack_128;
      puStack_a0 = &UNK_10b25d1e8;
      pppppppcStack_108 = (char *******)&pppppppuStack_a8;
      uStack_110 = 1;
      uStack_100 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b627b18,&uStack_110);
      lVar36 = lRam000000010b627b18;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppcStack_1e8 = *(char ****)(lRam000000010b627b18 + 0x20);
        uStack_1e0 = *(undefined8 *)(lRam000000010b627b18 + 0x28);
        ppppppuStack_1f0 = (undefined8 ******)0x2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar20 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppuStack_1f0);
        if (iVar20 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar36,puVar3,puVar2,&ppppppuStack_1f0,&uStack_110);
        }
      }
    }
    else {
      lVar36 = lRam000000010b627b18;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pcStack_90 = *(code **)(lRam000000010b627b18 + 0x20);
        pppppppuStack_88 = *(undefined8 ********)(lRam000000010b627b18 + 0x28);
        pppppppuStack_98 = (undefined8 *******)0x2;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar20 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppppuStack_98);
        if (iVar20 != 0) {
          lStack_1d8 = lRam000000010b627b18 + 0x30;
          pppppppuStack_138 = &pppppppcStack_160;
          pcStack_130 = 
          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          pppppppcStack_140 = (char *******)&pppppppuStack_138;
          pcStack_148 = s_<failed_to_normalize_thread_cwd_w_108adda12;
          ppcStack_158 = &pcStack_148;
          puStack_150 = &UNK_10b25d1e8;
          pppcStack_1e8 = &ppcStack_158;
          ppppppuStack_1f0 = (undefined8 ******)0x1;
          uStack_1e0 = 1;
          lStack_f0 = *(long *)(lVar36 + 0x60);
          uStack_e8 = *(ulong *)(lVar36 + 0x68);
          pppppppcStack_108 = *(char ********)(lVar36 + 0x50);
          uStack_100 = *(ulong *)(lVar36 + 0x58);
          uStack_110 = 1;
          if (pppppppcStack_108 == (char *******)0x0) {
            uStack_110 = 2;
          }
          lStack_c8 = *(long *)(lVar36 + 8);
          pppppppuStack_a8 = &ppppppuStack_1f0;
          puStack_a0 = (undefined *)CONCAT71(puStack_a0._1_7_,1);
          pppppppcStack_128 = (char *******)&pppppppuStack_a8;
          pppppppcStack_120 = (char *******)&DAT_1061c2098;
          uStack_f8 = 1;
          if (lStack_f0 == 0) {
            uStack_f8 = 2;
          }
          pcStack_d8 = pcStack_90;
          pppppppuStack_e0 = pppppppuStack_98;
          pppppppuStack_d0 = pppppppuStack_88;
          pppppppuStack_b8 = &pppppppcStack_128;
          pcStack_c0 = s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&uStack_110);
        }
      }
    }
    uVar34 = *(undefined8 *)(param_5 + 8);
    uStack_258 = *(ulong *)(param_5 + 0x10);
    if (uStack_258 == 0) {
      pppppppcStack_250 = (char *******)0x1;
    }
    else {
      pppppppcStack_250 = (char *******)_malloc(uStack_258);
      if (pppppppcStack_250 == (char *******)0x0) {
        func_0x0001087c9084(1,uStack_258);
        goto LAB_101896e7c;
      }
    }
    _memcpy(pppppppcStack_250,uVar34,uStack_258);
    uStack_248 = uStack_258;
    if (((ulong)pppppppcStack_160 & 3) == 1) {
      puVar31 = (undefined8 *)((long)pppppppcStack_160 + -1);
      uVar34 = *puVar31;
      puVar38 = *(undefined8 **)((long)pppppppcStack_160 + 7);
      pcVar18 = (code *)*puVar38;
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(uVar34);
      }
      if (puVar38[1] != 0) {
        _free(uVar34);
      }
      _free(puVar31);
    }
  }
  else {
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&ppppppuStack_1f0,lVar21,lVar37);
    pppcVar15 = pppcStack_1e8;
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&uStack_110,pppcStack_1e8,uStack_1e0,pppppppcVar8,uVar5);
    pppppppcVar17 = pppppppcStack_108;
    uVar5 = uStack_110;
    pppppppcStack_250 = pppppppcStack_108;
    uStack_248 = uStack_110;
    uStack_258 = uStack_100;
    if (ppppppuStack_1f0 != (undefined8 ******)0x0) {
      _free(pppcVar15);
    }
    if (uVar43 != 0) {
      _free(pppppppcVar8);
    }
    if (lVar37 != 0) {
      _free(lVar21);
    }
    if (uVar5 == 0x8000000000000000) goto joined_r0x0001018961a4;
  }
  uVar43 = *(ulong *)(param_2 + 0x1c8);
  pppppppcVar8 = *(char ********)(param_2 + 0x1d0);
  uVar5 = *(ulong *)(param_2 + 0x1d8);
  uVar39 = *(ulong *)(param_2 + 0x1e0);
  lVar36 = *(long *)(param_2 + 0x1e8);
  uStack_290 = *(ulong *)(param_2 + 0x1f0);
  pppppppuVar40 = *(undefined8 ********)(param_2 + 0x1f8);
  pcVar18 = *(code **)(param_2 + 0x200);
  pppppppuVar45 = *(undefined8 ********)(param_2 + 0x208);
  uVar10 = *(undefined4 *)(param_2 + 0x220);
  pppppppuVar35 = (undefined8 *******)0x8000000000000000;
  lVar37 = *(long *)(param_2 + 0xd8);
  if (lVar37 == -0x8000000000000000) {
    uVar32 = 0x8000000000000000;
    lStack_280 = *(long *)(param_2 + 0xf0);
    if (lStack_280 == -0x8000000000000000) goto LAB_1018964fc;
LAB_101896580:
    uVar34 = *(undefined8 *)(param_2 + 0xf8);
    pppppppuVar35 = *(undefined8 ********)(param_2 + 0x100);
    if (pppppppuVar35 == (undefined8 *******)0x0) {
      pcStack_2c8 = (code *)0x1;
    }
    else {
      pcStack_2c8 = (code *)_malloc(pppppppuVar35);
      if (pcStack_2c8 == (code *)0x0) {
        func_0x0001087c9084(1,pppppppuVar35);
        goto LAB_101896e7c;
      }
    }
    _memcpy(pcStack_2c8,uVar34,pppppppuVar35);
    if (uVar32 == 0x8000000000000000) goto LAB_1018965ec;
LAB_101896614:
    if ((uVar43 < 0x8000000000000006) && (uVar43 < 0x8000000000000001)) {
      lStack_288 = lStack_2c0;
      if (uVar32 == 0x8000000000000000) {
joined_r0x000101896724:
        lStack_288 = lVar36;
        uVar32 = uVar39;
        if (pppppppuVar35 == (undefined8 *******)0x8000000000000000) goto LAB_101896728;
LAB_101896654:
        if (((ulong)pppppppuVar40 & 0x7fffffffffffffff) != 0) {
          _free();
        }
        pcVar18 = pcStack_2c8;
        pppppppuVar40 = pppppppuVar35;
        pppppppuVar45 = pppppppuVar35;
      }
      else {
        uStack_290 = uVar32;
        if ((uVar39 & 0x7fffffffffffffff) != 0) {
          _free(lVar36);
          uVar39 = uVar32;
          lVar36 = lStack_2c0;
          goto joined_r0x000101896724;
        }
        if (pppppppuVar35 != (undefined8 *******)0x8000000000000000) goto LAB_101896654;
LAB_101896728:
      }
      pcStack_c0 = *(char **)(param_2 + 0x218);
      lStack_c8 = *(long *)(param_2 + 0x210);
      lStack_f0 = lStack_288;
      uStack_e8 = uStack_290;
      pppppppuStack_b8 = (undefined8 *******)CONCAT44(pppppppuStack_b8._4_4_,uVar10);
      uStack_110 = uVar43;
      pppppppcStack_108 = pppppppcVar8;
      uStack_100 = uVar5;
      uStack_f8 = uVar32;
      pppppppuStack_e0 = pppppppuVar40;
      pcStack_d8 = pcVar18;
      pppppppuStack_d0 = pppppppuVar45;
    }
    else {
      uStack_e8 = *(ulong *)(param_2 + 0x1f0);
      lStack_f0 = *(long *)(param_2 + 0x1e8);
      pcStack_d8 = *(code **)(param_2 + 0x200);
      pppppppuStack_e0 = *(undefined8 ********)(param_2 + 0x1f8);
      lStack_c8 = *(long *)(param_2 + 0x210);
      pppppppuStack_d0 = *(undefined8 ********)(param_2 + 0x208);
      pppppppuStack_b8 = *(undefined8 ********)(param_2 + 0x220);
      pcStack_c0 = *(char **)(param_2 + 0x218);
      pppppppcStack_108 = *(char ********)(param_2 + 0x1d0);
      uStack_110 = *(ulong *)(param_2 + 0x1c8);
      uStack_f8 = *(ulong *)(param_2 + 0x1e0);
      uStack_100 = *(ulong *)(param_2 + 0x1d8);
      if (((ulong)pppppppuVar35 & 0x7fffffffffffffff) != 0) {
        _free(pcStack_2c8);
      }
      if ((uVar32 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2c0);
      }
    }
  }
  else {
    uVar34 = *(undefined8 *)(param_2 + 0xe0);
    uVar32 = *(ulong *)(param_2 + 0xe8);
    if (uVar32 == 0) {
      lStack_2c0 = 1;
    }
    else {
      lStack_2c0 = _malloc();
      if (lStack_2c0 == 0) {
        func_0x0001087c9084(1,uVar32);
        goto LAB_101896e7c;
      }
    }
    _memcpy(lStack_2c0,uVar34,uVar32);
    lStack_280 = *(long *)(param_2 + 0xf0);
    if (lStack_280 != -0x8000000000000000) goto LAB_101896580;
LAB_1018964fc:
    if (uVar32 != 0x8000000000000000) goto LAB_101896614;
LAB_1018965ec:
    if (pppppppuVar35 != (undefined8 *******)0x8000000000000000) goto LAB_101896614;
    uStack_e8 = *(ulong *)(param_2 + 0x1f0);
    lStack_f0 = *(long *)(param_2 + 0x1e8);
    pcStack_d8 = *(code **)(param_2 + 0x200);
    pppppppuStack_e0 = *(undefined8 ********)(param_2 + 0x1f8);
    lStack_c8 = *(long *)(param_2 + 0x210);
    pppppppuStack_d0 = *(undefined8 ********)(param_2 + 0x208);
    pppppppuStack_b8 = *(undefined8 ********)(param_2 + 0x220);
    pcStack_c0 = *(char **)(param_2 + 0x218);
    pppppppcStack_108 = *(char ********)(param_2 + 0x1d0);
    uStack_110 = *(ulong *)(param_2 + 0x1c8);
    uStack_f8 = *(ulong *)(param_2 + 0x1e0);
    uStack_100 = *(ulong *)(param_2 + 0x1d8);
  }
  uStack_1d0 = *(undefined8 *)(param_2 + 0x158);
  pppcStack_1e8 = *(char ****)(param_2 + 0x140);
  ppppppuStack_1f0 = *(undefined8 *******)(param_2 + 0x138);
  lStack_1d8 = *(long *)(param_2 + 0x150);
  uStack_1e0 = *(undefined8 *)(param_2 + 0x148);
  pppppppcStack_128 = (char *******)0x0;
  pppppppcStack_120 = (char *******)0x1;
  lStack_118 = 0;
  FUN_10624142c(&pppppppuStack_98,param_2 + 0x228,0);
  FUN_1088bb36c(&pppppppcStack_128,0,0x24,1,1);
  pppppppcVar17 = pppppppcStack_120;
  pppppppcVar8 = pppppppcStack_128;
  puVar1 = (ulong *)((long)pppppppcStack_120 + lStack_118);
  puVar1[1] = (ulong)pcStack_90;
  *puVar1 = (ulong)pppppppuStack_98;
  puVar1[3] = uStack_80;
  puVar1[2] = (ulong)pppppppuStack_88;
  *(undefined4 *)(puVar1 + 4) = uStack_78;
  lVar36 = lStack_118 + 0x24;
  lVar21 = _malloc(lVar36);
  if (lVar21 == 0) {
    func_0x0001087c9084(1,lVar36);
    goto LAB_101896e7c;
  }
  _memcpy(lVar21,pppppppcVar17,lVar36);
  if ((*(byte *)(param_2 + 0x25c) & 1) == 0) {
    pppppppcVar29 = (char *******)0x8000000000000000;
    pppppppcVar28 = extraout_x14;
    lVar30 = extraout_x16;
  }
  else {
    pppppppcStack_128 = (char *******)0x0;
    pppppppcStack_120 = (char *******)0x1;
    lStack_118 = 0;
    FUN_10624142c(&pppppppuStack_98,param_2 + 0x25d,0);
    FUN_1088bb36c(&pppppppcStack_128,0,0x24,1,1);
    puVar1 = (ulong *)((long)pppppppcStack_120 + lStack_118);
    puVar1[1] = (ulong)pcStack_90;
    *puVar1 = (ulong)pppppppuStack_98;
    puVar1[3] = uStack_80;
    puVar1[2] = (ulong)pppppppuStack_88;
    *(undefined4 *)(puVar1 + 4) = uStack_78;
    lVar30 = lStack_118 + 0x24;
    pppppppcVar28 = pppppppcStack_120;
    pppppppcVar29 = pppppppcStack_128;
  }
  lVar47 = *(long *)(param_2 + 0x30);
  lVar48 = *(long *)(param_2 + 0x38);
  lVar46 = *(long *)(param_2 + 0x40);
  lVar42 = *(long *)(param_2 + 0x58);
  pcStack_2c8 = (code *)CONCAT44(pcStack_2c8._4_4_,(uint)(lVar42 == 0));
  if (lVar42 == 0) {
    if (param_4 == 0) {
      lVar22 = 1;
    }
    else {
      lVar22 = _malloc(param_4);
      if (lVar22 == 0) {
        func_0x0001087c9084(1,param_4);
        goto LAB_101896e7c;
      }
    }
    _memcpy(lVar22,param_3,param_4);
    uVar27 = *(uint *)(param_2 + 0x238);
    iVar20 = (int)uVar27 >> 0xd;
    iVar44 = iVar20 + -1;
    lStack_2a0 = param_4;
    if (iVar20 < 1) goto LAB_101896924;
LAB_1018968a4:
    iVar20 = 0;
  }
  else {
    param_4 = *(long *)(param_2 + 0x48);
    lVar22 = *(long *)(param_2 + 0x50);
    uVar27 = *(uint *)(param_2 + 0x238);
    iVar20 = (int)uVar27 >> 0xd;
    iVar44 = iVar20 + -1;
    lStack_2a0 = lVar42;
    if (0 < iVar20) goto LAB_1018968a4;
LAB_101896924:
    iVar20 = (1U - iVar20) / 400 + 1;
    iVar44 = iVar44 + iVar20 * 400;
    iVar20 = iVar20 * -0x23ab1;
  }
  uVar5 = uStack_e8;
  lVar16 = lStack_f0;
  uVar43 = uStack_110;
  uVar11 = *(uint *)(param_2 + 0x244);
  iVar24 = (int)uVar11 >> 0xd;
  iVar33 = iVar24 + -1;
  if (iVar24 < 1) {
    iVar24 = (1U - iVar24) / 400 + 1;
    iVar33 = iVar33 + iVar24 * 400;
    iVar24 = iVar24 * -0x23ab1;
  }
  else {
    iVar24 = 0;
  }
  uVar12 = *(uint *)(param_2 + 0x23c);
  uVar13 = *(uint *)(param_2 + 0x248);
  lVar6 = *(long *)(param_2 + 0x78);
  lVar9 = *(long *)(param_2 + 0x80);
  lVar23 = *(long *)(param_2 + 0x88);
  if (uStack_110 < 0x8000000000000006) {
    uVar39 = 0x8000000000000000;
    if (uStack_110 < 0x8000000000000001) {
      pcVar18 = pcStack_d8;
      pppppppuVar40 = pppppppuStack_d0;
      if (uStack_f8 != 0x8000000000000000) {
        if (uStack_e8 == 0) {
          plStack_2d0 = (long *)0x1;
        }
        else {
          plStack_2d0 = (long *)_malloc(uStack_e8);
          if (plStack_2d0 == (long *)0x0) {
            func_0x0001087c9084(1,uVar5);
            goto LAB_101896e7c;
          }
        }
        _memcpy(plStack_2d0,lVar16,uVar5);
        uVar39 = uVar5;
        pcVar18 = pcStack_d8;
        pppppppuVar40 = pppppppuStack_d0;
      }
      pcStack_d8 = pcVar18;
      pppppppuStack_d0 = pppppppuVar40;
      if (pppppppuStack_e0 == (undefined8 *******)0x8000000000000000) {
        pppppppuVar40 = (undefined8 *******)0x8000000000000000;
      }
      else {
        if (pppppppuVar40 == (undefined8 *******)0x0) {
          pcStack_2c8 = (code *)0x1;
        }
        else {
          pcStack_2c8 = (code *)_malloc(pppppppuVar40);
          if (pcStack_2c8 == (code *)0x0) {
            func_0x0001087c9084(1,pppppppuVar40);
LAB_101896e7c:
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x101896e80);
            (*pcVar18)();
          }
        }
        _memcpy(pcStack_2c8,pcVar18,pppppppuVar40);
      }
    }
    else {
      pppppppuVar40 = (undefined8 *******)0x8000000000000000;
    }
    plVar26 = (long *)((ulong)&uStack_110 | 8);
LAB_101896ba0:
    lStack_178 = plVar26[1];
    lStack_180 = *plVar26;
    lStack_170 = plVar26[2];
    uStack_1b8 = uStack_e8;
    lStack_1c0 = lStack_f0;
    pcStack_1a8 = pcStack_d8;
    pppppppuStack_1b0 = pppppppuStack_e0;
    lStack_198 = lStack_c8;
    pppppppuStack_1a0 = pppppppuStack_d0;
    pppppppuStack_188 = pppppppuStack_b8;
    pcStack_190 = pcStack_c0;
    plVar26 = plStack_2d0;
  }
  else {
    pppppppuVar40 = (undefined8 *******)0x8000000000000000;
    plVar26 = (long *)0x8000000000000009;
    if ((long)uStack_110 < -0x7ffffffffffffff6) {
      uVar39 = 0x8000000000000000;
      goto LAB_101896bc8;
    }
    plVar26 = (long *)((ulong)&uStack_110 | 8);
    if ((long)uStack_110 < -0x7ffffffffffffff4) {
      if (uStack_110 == 0x800000000000000a) {
        lStack_178 = plVar26[1];
        lStack_180 = *plVar26;
        lStack_170 = plVar26[2];
        plVar26 = (long *)0x800000000000000c;
        uVar43 = 0x800000000000000a;
        uVar39 = 0x8000000000000000;
        goto LAB_101896bc8;
      }
    }
    else {
      uVar39 = 0x8000000000000000;
      if (uStack_110 == 0x800000000000000c) goto LAB_101896ba0;
    }
    uVar39 = 0x8000000000000000;
    uVar43 = 0x800000000000000c;
  }
LAB_101896bc8:
  param_1[0x1c] = (long)plVar26;
  param_1[4] = (long)pppppppcVar17;
  param_1[6] = lVar47;
  param_1[7] = lVar48;
  param_1[8] = lVar46;
  param_1[9] = param_4;
  param_1[10] = lVar22;
  param_1[0xb] = lStack_2a0;
  param_1[0xc] = uStack_248;
  param_1[0xd] = (long)pppppppcStack_250;
  param_1[0x29] = lStack_210;
  param_1[0x28] = lStack_218;
  param_1[0x2b] = lStack_200;
  param_1[0x2a] = lStack_208;
  param_1[0x25] = uStack_230;
  param_1[0x24] = lVar25;
  param_1[0x27] = lStack_220;
  param_1[0x26] = (long)pppppppcStack_228;
  lVar25 = *(long *)(param_2 + 0xa8);
  param_1[0x22] = *(long *)(param_2 + 0xb0);
  param_1[0x21] = lVar25;
  lVar25 = *(long *)(param_2 + 0x138);
  lVar48 = *(long *)(param_2 + 0x150);
  lVar47 = *(long *)(param_2 + 0x148);
  param_1[0x40] = *(long *)(param_2 + 0x140);
  param_1[0x3f] = lVar25;
  param_1[0x42] = lVar48;
  param_1[0x41] = lVar47;
  param_1[0x32] = lStack_178;
  param_1[0x31] = lStack_180;
  param_1[0x35] = uStack_1b8;
  param_1[0x34] = lStack_1c0;
  param_1[0x37] = (long)pcStack_1a8;
  param_1[0x36] = (long)pppppppuStack_1b0;
  uVar14 = *(undefined1 *)(param_2 + 0x26d);
  param_1[0x23] = *(long *)(param_2 + 0xb8);
  *param_1 = lVar36;
  param_1[1] = lVar21;
  param_1[0x1d] = uVar39;
  param_1[0x1e] = (long)pppppppuVar40;
  param_1[0x1f] = (long)pcStack_2c8;
  param_1[0x20] = (long)pppppppuVar40;
  param_1[0x43] = *(long *)(param_2 + 0x158);
  param_1[2] = lVar36;
  param_1[3] = (long)pppppppcVar8;
  param_1[5] = lVar36;
  param_1[0xe] = uStack_258;
  param_1[0xf] = lVar6;
  param_1[0x10] = lVar9;
  param_1[0x11] = lVar23;
  param_1[0x12] = 0;
  param_1[0x13] = 8;
  param_1[0x14] = 0;
  param_1[0x15] = (long)pppppppcVar29;
  param_1[0x16] = (long)pppppppcVar28;
  param_1[0x17] = lVar30;
  param_1[0x18] = lVar4;
  param_1[0x19] = lVar7;
  param_1[0x1a] = lVar41;
  param_1[0x1b] = uVar39;
  param_1[0x2c] = lStack_1f8;
  param_1[0x2d] = -0x8000000000000000;
  param_1[0x30] = uVar43;
  param_1[0x33] = lStack_170;
  param_1[0x39] = lStack_198;
  param_1[0x38] = (long)pppppppuStack_1a0;
  param_1[0x3b] = (long)pppppppuStack_188;
  param_1[0x3a] = (long)pcStack_190;
  param_1[0x3c] =
       (ulong)uVar12 +
       (long)(int)((((uVar27 >> 4 & 0x1ff) + iVar20 + -0xaf93b) - iVar44 / 100) +
                   (iVar44 * 0x5b5 >> 2) + (iVar44 / 100 >> 2)) * 0x15180;
  param_1[0x3d] =
       (ulong)uVar13 +
       (long)(int)((((uVar11 >> 4 & 0x1ff) + iVar24 + -0xaf93b) - iVar33 / 100) +
                   (iVar33 * 0x5b5 >> 2) + (iVar33 / 100 >> 2)) * 0x15180;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((long)param_1 + 0x1f1) = uVar14;
  if ((lVar42 == 0) && (*(long *)(param_2 + 0x48) != 0)) {
    _free(*(undefined8 *)(param_2 + 0x50));
  }
  if ((*(long *)(param_2 + 0xc0) != -0x8000000000000000) && (*(long *)(param_2 + 0xc0) != 0)) {
    _free(*(undefined8 *)(param_2 + 200));
  }
  if ((lVar37 != -0x8000000000000000) && (lVar37 != 0)) {
    _free(*(undefined8 *)(param_2 + 0xe0));
  }
  if ((lStack_280 != -0x8000000000000000) && (lStack_280 != 0)) {
    _free(*(undefined8 *)(param_2 + 0xf8));
  }
  if ((*(long *)(param_2 + 0x108) != -0x8000000000000000) && (*(long *)(param_2 + 0x108) != 0)) {
    _free(*(undefined8 *)(param_2 + 0x110));
  }
  lVar25 = *(long *)(param_2 + 0x1a8);
  if (-0x7ffffffffffffffe < lVar25) {
    lVar4 = *(long *)(param_2 + 0x1b0);
    lVar36 = *(long *)(param_2 + 0x1b8);
    if (lVar36 != 0) {
      puVar31 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar31[-1] != 0) {
          _free(*puVar31);
        }
        puVar31 = puVar31 + 3;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    if (lVar25 != 0) {
      _free(lVar4);
    }
  }
  if (*(long *)(param_2 + 0x120) != -0x8000000000000000 && *(long *)(param_2 + 0x120) != 0) {
    _free(*(undefined8 *)(param_2 + 0x128));
  }
  return;
}

