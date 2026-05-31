
/* WARNING: Type propagation algorithm not settling */

void __ZN18codex_core_plugins6loader37materialize_marketplace_plugin_source17h65de9d70559fdffeE
               (long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *puVar19;
  undefined8 *******pppppppuVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  long lStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 ******appppppuStack_190 [4];
  undefined8 *******pppppppuStack_170;
  undefined8 *******pppppppuStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  
  auVar23._8_8_ = param_3;
  auVar23._0_8_ = param_2;
  if (*param_4 == -0x8000000000000000) {
    lVar1 = param_4[2];
    lVar3 = param_4[3];
    if (lVar3 == 0) {
      lVar12 = 1;
LAB_1038e2dcc:
      _memcpy(lVar12,lVar1,lVar3);
      *param_1 = lVar3;
      param_1[1] = lVar12;
      param_1[2] = lVar3;
      *(undefined1 *)(param_1 + 5) = 2;
      return;
    }
    lVar12 = _malloc(lVar3);
    if (lVar12 != 0) goto LAB_1038e2dcc;
    auVar23 = func_0x0001087c9084(1,lVar3);
  }
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
            (&lStack_1e8,auVar23._0_8_,auVar23._8_8_,&UNK_108d987fc,0x2a);
  pppppppuStack_f0 = (undefined8 *******)CONCAT53(pppppppuStack_f0._3_5_,0x101ff);
  ppppppuVar13 = (undefined8 ******)
                 __ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E
                           (&pppppppuStack_f0,pppppppuStack_1e0,pppppppuStack_1d8);
  if (ppppppuVar13 != (undefined8 ******)0x0) {
    pppppppuStack_90 = pppppppuStack_1e0;
    pppppppuStack_88 = pppppppuStack_1d8;
    pppppppuStack_f0 = &pppppppuStack_90;
    pppppppuStack_e8 =
         (undefined8 *******)
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    pppppppuStack_e0 = appppppuStack_190;
    pppppppuStack_d8 =
         (undefined8 *******)
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    appppppuStack_190[0] = ppppppuVar13;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pppppppuStack_110,s__failed_to_create_marketplace_pl_108afa1f5,&pppppppuStack_f0);
    pppppppuStack_160 = pppppppuStack_108;
    pppppppuStack_158 = pppppppuStack_100;
    if (((ulong)appppppuStack_190[0] & 3) == 1) {
      puVar19 = (undefined8 *)((long)appppppuStack_190[0] - 1);
      uVar21 = *puVar19;
      puVar22 = *(undefined8 **)((long)appppppuStack_190[0] + 7);
      pcVar16 = (code *)*puVar22;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar21);
      }
      if (puVar22[1] != 0) {
        _free(uVar21);
      }
      _free(puVar19);
      pppppppuStack_160 = pppppppuStack_108;
      pppppppuStack_158 = pppppppuStack_100;
    }
    pppppppuStack_108 = pppppppuStack_160;
    pppppppuStack_100 = pppppppuStack_158;
    if (pppppppuStack_110 != (undefined8 *******)0x8000000000000000) {
      param_1[3] = (long)pppppppuStack_158;
      param_1[2] = (long)pppppppuStack_160;
      *param_1 = -0x8000000000000000;
      param_1[1] = (long)pppppppuStack_110;
      goto joined_r0x0001038e32d4;
    }
  }
  pppppppuStack_e0 = (undefined8 *******)0x1;
  pppppppuStack_d0 = (undefined8 *******)0x6;
  pppppppuStack_d8 = (undefined8 *******)0x0;
  pppppppuStack_c8._0_6_ = (uint6)(uint)pppppppuStack_c8;
  pppppppuStack_c8 = (undefined8 *******)((ulong)pppppppuStack_c8 & 0xffffffffffff0000);
  pppppppuStack_f0 = (undefined8 *******)&UNK_108d98826;
  pppppppuStack_e8 = (undefined8 *******)0x1a;
  func_0x0001039a7668(&pppppppuStack_160,&pppppppuStack_f0,pppppppuStack_1e0,pppppppuStack_1d8);
  pppppppuVar8 = pppppppuStack_158;
  pppppppuVar7 = pppppppuStack_160;
  if ((char)pppppppuStack_150 == '\x02') {
    pppppppuStack_128 = pppppppuStack_160;
    pppppppuStack_120 = pppppppuStack_1e0;
    pppppppuStack_118 = pppppppuStack_1d8;
    pppppppuStack_110 = &pppppppuStack_120;
    pppppppuStack_108 =
         (undefined8 *******)
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    pppppppuStack_100 = &pppppppuStack_128;
    pcStack_f8 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pppppppuStack_90,s__failed_to_create_marketplace_pl_108afa1ae,&pppppppuStack_110);
    if (((ulong)pppppppuStack_128 & 3) == 1) {
      puVar19 = (undefined8 *)((long)pppppppuStack_128 + -1);
      uVar21 = *puVar19;
      puVar22 = *(undefined8 **)((long)pppppppuStack_128 + 7);
      pcVar16 = (code *)*puVar22;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar21);
      }
      if (puVar22[1] != 0) {
        _free(uVar21);
      }
      _free(puVar19);
    }
    param_1[2] = (long)pppppppuStack_88;
    param_1[1] = (long)pppppppuStack_90;
    param_1[3] = (long)pppppppuStack_80;
    *param_1 = -0x8000000000000000;
    pppppppuStack_1b0 = pppppppuStack_90;
    pppppppuStack_1a8 = pppppppuStack_88;
    goto joined_r0x0001038e32d4;
  }
  pppppppuStack_1a8 = pppppppuStack_158;
  pppppppuStack_1b0 = pppppppuStack_160;
  pppppppuStack_1c8 = pppppppuStack_158;
  pppppppuStack_1d0 = pppppppuStack_160;
  pppppppuStack_1c0 = pppppppuStack_150;
  pppppppuVar20 = (undefined8 *******)param_4[1];
  pppppppuVar4 = (undefined8 *******)param_4[2];
  pppppppuVar17 = (undefined8 *******)param_4[8];
  pppppppuVar2 = (undefined8 *******)param_4[5];
  lVar1 = param_4[6];
  pppppppuVar14 = (undefined8 *******)0x0;
  if (lVar1 != -0x8000000000000000) {
    pppppppuVar14 = (undefined8 *******)param_4[7];
  }
  lVar3 = param_4[9];
  pppppppuVar5 = (undefined8 *******)param_4[10];
  pppppppuVar18 = (undefined8 *******)param_4[0xb];
  lVar12 = param_4[3];
  pppppppuVar6 = (undefined8 *******)param_4[4];
  if (lVar12 == -0x8000000000000000) {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
              (&pppppppuStack_110,pppppppuStack_160,pppppppuStack_158);
    pppppppuVar10 = pppppppuStack_108;
    pppppppuVar9 = pppppppuStack_110;
    pppppppuStack_f0 = (undefined8 *******)&UNK_108d96ce6;
    pppppppuStack_e8 = (undefined8 *******)0x5;
    pppppppuStack_d0 = pppppppuStack_108;
    pppppppuStack_c8 = pppppppuStack_100;
    pppppppuStack_e0 = pppppppuVar20;
    pppppppuStack_d8 = pppppppuVar4;
    func_0x0001038e6350(&pppppppuStack_90,&pppppppuStack_f0,3,0);
    pppppppuVar20 = pppppppuStack_90;
    if (pppppppuStack_90 != (undefined8 *******)0x8000000000000000) {
      pppppppuStack_168 = pppppppuStack_80;
      pppppppuStack_170 = pppppppuStack_88;
      pppppppuVar4 = pppppppuStack_170;
      pppppppuVar11 = pppppppuStack_168;
      if (((ulong)pppppppuVar9 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuVar10);
        pppppppuVar4 = pppppppuStack_170;
        pppppppuVar11 = pppppppuStack_168;
      }
      goto LAB_1038e3174;
    }
    if (((ulong)pppppppuVar9 & 0x7fffffffffffffff) != 0) {
      _free(pppppppuVar10);
    }
    if (lVar3 != -0x8000000000000000) {
      pppppppuVar14 = pppppppuVar5;
      pppppppuVar17 = pppppppuVar18;
    }
    if ((lVar1 == -0x8000000000000000) && (lVar3 == -0x8000000000000000)) {
LAB_1038e3148:
      if (pppppppuVar8 == (undefined8 *******)0x0) {
        pppppppuVar14 = (undefined8 *******)0x1;
      }
      else {
        pppppppuVar14 = (undefined8 *******)_malloc(pppppppuVar8);
        if (pppppppuVar14 == (undefined8 *******)0x0) {
          func_0x0001087c9084(1,pppppppuVar8);
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1038e316c);
          (*pcVar16)();
        }
      }
      _memcpy(pppppppuVar14,pppppppuVar7,pppppppuVar8);
      pppppppuStack_f0 = pppppppuVar8;
      pppppppuStack_e0 = pppppppuVar8;
      pppppppuStack_e8 = pppppppuVar14;
      FUN_105561214(&pppppppuStack_110,&pppppppuStack_f0);
      if (pppppppuStack_110 != (undefined8 *******)0x8000000000000000) {
LAB_1038e3298:
        param_1[1] = (long)pppppppuStack_108;
        *param_1 = (long)pppppppuStack_110;
        param_1[3] = (long)pppppppuStack_1d0;
        param_1[2] = (long)pppppppuStack_100;
        param_1[5] = (long)pppppppuStack_1c0;
        param_1[4] = (long)pppppppuStack_1c8;
        pppppppuStack_c8 = pppppppuStack_1c0;
        pppppppuStack_e0 = pppppppuStack_100;
        pppppppuStack_d8 = pppppppuStack_1d0;
        pppppppuStack_d0 = pppppppuStack_1c8;
        goto joined_r0x0001038e32d4;
      }
      func_0x0001038e33f8(&pppppppuStack_f0,pppppppuStack_108);
    }
    else {
LAB_1038e3100:
      pppppppuStack_f0 = (undefined8 *******)&UNK_108d958e8;
      pppppppuStack_e8 = (undefined8 *******)0x8;
      pppppppuStack_e0 = pppppppuVar14;
      pppppppuStack_d8 = pppppppuVar17;
      func_0x0001038e6350(&pppppppuStack_110,&pppppppuStack_f0,2,pppppppuVar7,pppppppuVar8);
      pppppppuVar20 = pppppppuStack_110;
      pppppppuVar4 = pppppppuStack_108;
      pppppppuVar11 = pppppppuStack_100;
      if (pppppppuStack_110 != (undefined8 *******)0x8000000000000000) goto LAB_1038e3174;
      if (lVar12 == -0x8000000000000000) goto LAB_1038e3148;
LAB_1038e31e4:
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&pppppppuStack_f0,pppppppuVar7,pppppppuVar8,pppppppuVar6,pppppppuVar2);
      FUN_105561214(&pppppppuStack_110,&pppppppuStack_f0);
      if (pppppppuStack_110 != (undefined8 *******)0x8000000000000000) goto LAB_1038e3298;
      func_0x0001038e33f8(&pppppppuStack_f0,pppppppuStack_108);
    }
    param_1[2] = (long)pppppppuStack_e8;
    param_1[1] = (long)pppppppuStack_f0;
    param_1[3] = (long)pppppppuStack_e0;
    *param_1 = -0x8000000000000000;
    pppppppuStack_160 = pppppppuStack_f0;
    pppppppuStack_158 = pppppppuStack_e8;
    pppppppuStack_150 = pppppppuStack_e0;
  }
  else {
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
              (&pppppppuStack_110,pppppppuStack_160,pppppppuStack_158);
    pppppppuVar10 = pppppppuStack_108;
    pppppppuVar9 = pppppppuStack_110;
    pppppppuStack_f0 = (undefined8 *******)&UNK_108d96ce6;
    pppppppuStack_e8 = (undefined8 *******)0x5;
    pppppppuStack_e0 = (undefined8 *******)&UNK_108d97703;
    pppppppuStack_d8 = (undefined8 *******)0x12;
    pppppppuStack_d0 = (undefined8 *******)&UNK_108d95900;
    pppppppuStack_c8 = (undefined8 *******)0x8;
    puStack_c0 = &UNK_108d97715;
    uStack_b8 = 0xd;
    pppppppuStack_a0 = pppppppuStack_108;
    pppppppuStack_98 = pppppppuStack_100;
    pppppppuStack_b0 = pppppppuVar20;
    pppppppuStack_a8 = pppppppuVar4;
    func_0x0001038e6350(&pppppppuStack_90,&pppppppuStack_f0,6,0);
    pppppppuVar20 = pppppppuStack_90;
    if (pppppppuStack_90 == (undefined8 *******)0x8000000000000000) {
      if (((ulong)pppppppuVar9 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuVar10);
      }
      pppppppuStack_f0 = (undefined8 *******)&UNK_108d97722;
      pppppppuStack_e8 = (undefined8 *******)0xf;
      pppppppuStack_e0 = (undefined8 *******)&UNK_108d97731;
      pppppppuStack_d8 = (undefined8 *******)0x3;
      pppppppuStack_d0 = (undefined8 *******)&UNK_108d98415;
      pppppppuStack_c8 = (undefined8 *******)0x9;
      puStack_c0 = &UNK_108d9841e;
      uStack_b8 = 2;
      pppppppuStack_b0 = pppppppuVar6;
      pppppppuStack_a8 = pppppppuVar2;
      func_0x0001038e6350(&pppppppuStack_110,&pppppppuStack_f0,5,pppppppuVar7,pppppppuVar8);
      pppppppuVar20 = pppppppuStack_110;
      pppppppuVar4 = pppppppuStack_108;
      pppppppuVar11 = pppppppuStack_100;
      if (pppppppuStack_110 == (undefined8 *******)0x8000000000000000) {
        if (lVar3 != -0x8000000000000000) {
          pppppppuVar14 = pppppppuVar5;
          pppppppuVar17 = pppppppuVar18;
        }
        if ((lVar1 != -0x8000000000000000) || (lVar3 != -0x8000000000000000)) goto LAB_1038e3100;
        func_0x0001038e6350(&pppppppuStack_f0,&UNK_10b2d80a8,1,pppppppuVar7,pppppppuVar8);
        pppppppuVar20 = pppppppuStack_f0;
        pppppppuVar4 = pppppppuStack_e8;
        pppppppuVar11 = pppppppuStack_e0;
        if (pppppppuStack_f0 == (undefined8 *******)0x8000000000000000) goto LAB_1038e31e4;
      }
    }
    else {
      pppppppuStack_168 = pppppppuStack_80;
      pppppppuStack_170 = pppppppuStack_88;
      pppppppuVar4 = pppppppuStack_170;
      pppppppuVar11 = pppppppuStack_168;
      if (((ulong)pppppppuVar9 & 0x7fffffffffffffff) != 0) {
        _free(pppppppuVar10);
        pppppppuVar4 = pppppppuStack_170;
        pppppppuVar11 = pppppppuStack_168;
      }
    }
LAB_1038e3174:
    pppppppuStack_168 = pppppppuVar11;
    pppppppuStack_170 = pppppppuVar4;
    param_1[3] = (long)pppppppuStack_168;
    param_1[2] = (long)pppppppuStack_170;
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)pppppppuVar20;
  }
  if ((((ulong)pppppppuStack_1c0 & 1) == 0) &&
     (uVar15 = __ZN3std3sys2fs14remove_dir_all17hdb59b8bf4e7e6c95E(pppppppuVar7,pppppppuVar8),
     (uVar15 & 3) == 1)) {
    uVar21 = *(undefined8 *)(uVar15 - 1);
    puVar19 = *(undefined8 **)(uVar15 + 7);
    pcVar16 = (code *)*puVar19;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar21);
    }
    if (puVar19[1] != 0) {
      _free(uVar21);
    }
    _free((undefined8 *)(uVar15 - 1));
  }
  if (pppppppuVar8 != (undefined8 *******)0x0) {
    _free(pppppppuVar7);
  }
joined_r0x0001038e32d4:
  if (lStack_1e8 != 0) {
    _free(pppppppuStack_1e0);
  }
  return;
}

