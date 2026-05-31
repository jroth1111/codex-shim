
void __ZN18codex_core_plugins5store11PluginStore20install_with_version17haf352589f6b3775dE
               (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 ****param_4,
               long *param_5)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 ****ppppuVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 ****ppppuVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long lStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 ***pppuStack_5f8;
  undefined8 **ppuStack_5f0;
  long lStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 **ppuStack_5a8;
  undefined8 ***pppuStack_5a0;
  undefined8 ***pppuStack_598;
  long lStack_590;
  undefined8 ***pppuStack_588;
  undefined8 **ppuStack_580;
  undefined8 ***pppuStack_578;
  undefined8 **ppuStack_570;
  undefined8 ***pppuStack_568;
  undefined8 ***pppuStack_560;
  undefined8 **ppuStack_558;
  undefined1 auStack_550 [64];
  undefined8 ***pppuStack_510;
  undefined8 **ppuStack_508;
  undefined8 ***pppuStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  long alStack_4b0 [42];
  undefined8 ***pppuStack_360;
  undefined8 **ppuStack_358;
  undefined8 ***pppuStack_350;
  undefined8 ***pppuStack_348;
  undefined8 **ppuStack_340;
  undefined8 **ppuStack_338;
  long *plStack_330;
  code *pcStack_328;
  long lStack_320;
  undefined8 ***pppuStack_148;
  undefined8 **ppuStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 ***pppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_78;
  
  ppppuVar1 = (undefined8 ****)param_3[1];
  pppuVar2 = (undefined8 ***)param_3[2];
  uVar9 = __ZN3std4path4Path6is_dir17h70f322681d113b19E(ppppuVar1,pppuVar2);
  if ((uVar9 & 1) == 0) {
    pppuStack_360 = &pppuStack_578;
    ppuStack_358 = (undefined8 **)
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    pppuStack_578 = ppppuVar1;
    ppuStack_570 = pppuVar2;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&lStack_610,s__plugin_source_path_is_not_a_dir_108af9e5d,&pppuStack_360);
    param_1[4] = uStack_600;
    param_1[1] = 1;
    *param_1 = 0x8000000000000000;
    param_1[3] = uStack_608;
    param_1[2] = lStack_610;
LAB_1038d8840:
    if (*param_5 != 0) {
      _free(param_5[1]);
    }
    if (*param_4 != (undefined8 ***)0x0) {
      _free(param_4[1]);
    }
    if (param_4[3] == (undefined8 ***)0x0) goto LAB_1038d8870;
    pppuVar10 = param_4[4];
  }
  else {
    __ZN18codex_core_plugins8manifest20load_plugin_manifest17hf558c55998e288a4E
              (&pppuStack_360,ppppuVar1,pppuVar2);
    ppuVar5 = ppuStack_340;
    pppuVar4 = pppuStack_348;
    pppuVar10 = pppuStack_360;
    if ((undefined8 ****)pppuStack_360 == (undefined8 ****)0x3) {
      pppuVar10 = (undefined8 ***)_malloc(0x1e);
      if (pppuVar10 == (undefined8 ***)0x0) {
        func_0x0001087c9084(1,0x1e);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1038d9040);
        (*pcVar7)();
      }
      pppuVar10[1] = (undefined8 **)0x6c61766e6920726f;
      *pppuVar10 = (undefined8 **)0x20676e697373696d;
      *(undefined8 *)((long)pppuVar10 + 0x16) = 0x6e6f736a2e6e6967;
      *(undefined8 *)((long)pppuVar10 + 0xe) = 0x756c702064696c61;
      ppppuVar16 = (undefined8 ****)0x1e;
      uVar18 = 1;
      ppppuVar19 = (undefined8 ****)0x1e;
LAB_1038d882c:
      param_1[2] = ppppuVar16;
      param_1[3] = pppuVar10;
      param_1[4] = ppppuVar19;
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar18;
      goto LAB_1038d8840;
    }
    _memcpy(auStack_550,&ppuStack_338,0x1f0);
    pppuStack_578 = pppuVar10;
    pppuStack_568 = pppuStack_350;
    ppuStack_570 = ppuStack_358;
    pppuStack_560 = pppuVar4;
    ppuStack_558 = ppuVar5;
    __ZN12codex_plugin9plugin_id23validate_plugin_segment17heda2aac225796e69E
              (&pppuStack_360,ppuStack_508,pppuStack_500,&UNK_108d98008,0xb);
    ppppuVar19 = (undefined8 ****)pppuStack_350;
    pppuVar10 = (undefined8 ***)ppuStack_358;
    pppuVar4 = pppuStack_360;
    if ((undefined8 ****)pppuStack_360 == (undefined8 ****)0x8000000000000000) {
      uVar18 = 2;
      pppuVar10 = (undefined8 ***)ppuStack_508;
      ppppuVar16 = (undefined8 ****)pppuStack_510;
      ppppuVar19 = (undefined8 ****)pppuStack_500;
    }
    else {
      if ((undefined8 ****)pppuStack_510 != (undefined8 ****)0x0) {
        _free(ppuStack_508);
      }
      uVar18 = 1;
      ppppuVar16 = (undefined8 ****)pppuVar4;
    }
    if ((uStack_4e0 & 0x7fffffffffffffff) != 0) {
      _free(uStack_4d8);
    }
    if ((uStack_4c8 & 0x7fffffffffffffff) != 0) {
      _free(uStack_4c0);
    }
    if (lStack_4e8 != 0) {
      puVar17 = (undefined8 *)(lStack_4f0 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        lStack_4e8 = lStack_4e8 + -1;
      } while (lStack_4e8 != 0);
    }
    if (lStack_4f8 != 0) {
      _free(lStack_4f0);
    }
    FUN_10393ec54(&pppuStack_578);
    if (alStack_4b0[0] != -0x8000000000000000) {
      FUN_103940464(alStack_4b0);
    }
    if ((undefined8 ****)pppuVar4 != (undefined8 ****)0x8000000000000000) goto LAB_1038d882c;
    pppuStack_5f8 = ppppuVar16;
    ppuStack_5f0 = pppuVar10;
    if ((ppppuVar19 != (undefined8 ****)param_4[2]) ||
       (iVar8 = _memcmp(pppuVar10,param_4[1],ppppuVar19), iVar8 != 0)) {
      pppuStack_360 = &pppuStack_5f8;
      ppuStack_358 = (undefined8 **)&DAT_103972de0;
      pppuStack_348 = (undefined8 ***)&DAT_103972de0;
      pppuStack_350 = param_4;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_5e0,s_plugin_json_name______does_not_m_108af9e87,&pppuStack_360);
      param_1[4] = uStack_5d0;
      param_1[1] = 1;
      *param_1 = 0x8000000000000000;
      param_1[3] = uStack_5d8;
      param_1[2] = lStack_5e0;
      ppppuVar16 = (undefined8 ****)pppuStack_5f8;
LAB_1038d8810:
      if (ppppuVar16 != (undefined8 ****)0x0) {
        _free(ppuStack_5f0);
      }
      goto LAB_1038d8840;
    }
    lVar14 = param_5[1];
    lVar3 = param_5[2];
    func_0x0001038db3bc(&pppuStack_360,lVar14,lVar3);
    if ((undefined8 ****)pppuStack_360 != (undefined8 ****)0x8000000000000000) {
      param_1[4] = pppuStack_350;
      param_1[1] = 1;
      *param_1 = 0x8000000000000000;
      param_1[3] = ppuStack_358;
      param_1[2] = pppuStack_360;
      goto LAB_1038d8810;
    }
    __ZN18codex_core_plugins5store11PluginStore11plugin_root17hcb8cebea94cc52ddE
              (&lStack_5c8,param_2,param_4,lVar14,lVar3);
    __ZN18codex_core_plugins5store11PluginStore16plugin_base_root17h95242e0097c3d31aE
              (&lStack_590,param_2,param_4);
    auVar22 = __ZN3std4path4Path6parent17h900a31c17f1e1e5bE();
    uVar18 = auVar22._8_8_;
    lVar11 = auVar22._0_8_;
    if (lVar11 == 0) {
      pppuStack_578 = pppuStack_588;
      ppuStack_570 = ppuStack_580;
      pppuStack_360 = &pppuStack_578;
      ppuStack_358 = (undefined8 **)
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppuStack_5a8,s__plugin_cache_path_has_no_parent_108af9ffa,&pppuStack_360);
LAB_1038d8998:
      ppppuVar19 = (undefined8 ****)0x1;
LAB_1038d899c:
      param_1[3] = pppuStack_5a0;
      param_1[2] = ppuStack_5a8;
      param_1[4] = pppuStack_598;
      *param_1 = 0x8000000000000000;
      param_1[1] = ppppuVar19;
      if (lStack_590 != 0) {
        _free(pppuStack_588);
      }
      if (lStack_5c8 != 0) {
        _free(uStack_5c0);
      }
      goto LAB_1038d8810;
    }
    pppuStack_360 = (undefined8 ***)CONCAT53(pppuStack_360._3_5_,0x101ff);
    ppppuVar19 = (undefined8 ****)
                 __ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E(&pppuStack_360,lVar11,uVar18);
    if (ppppuVar19 != (undefined8 ****)0x0) {
      ppuStack_5a8 = (undefined8 **)&UNK_108d9805d;
      pppuStack_5a0 = (undefined8 ****)0x27;
      pppuStack_598 = ppppuVar19;
LAB_1038d893c:
      ppppuVar19 = (undefined8 ****)0x0;
      goto LAB_1038d899c;
    }
    auVar22 = __ZN3std4path4Path9file_name17h4ab5db2cd370dd44E(pppuStack_588,ppuStack_580);
    uVar15 = auVar22._8_8_;
    lVar12 = auVar22._0_8_;
    if (lVar12 == 0) {
      pppuStack_578 = pppuStack_588;
      ppuStack_570 = ppuStack_580;
      pppuStack_360 = &pppuStack_578;
      ppuStack_358 = (undefined8 **)
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppuStack_5a8,s__plugin_cache_path_has_no_direct_108af9fce,&pppuStack_360);
      goto LAB_1038d8998;
    }
    pppuStack_350 = (undefined8 ****)0x1;
    ppuStack_340 = (undefined8 ***)0x6;
    pppuStack_348 = (undefined8 ****)0x0;
    ppuStack_338._0_6_ = (uint6)(uint)ppuStack_338;
    ppuStack_338 = (undefined8 **)((ulong)ppuStack_338 & 0xffffffffffff0000);
    pppuStack_360 = (undefined8 ***)&UNK_108d98084;
    ppuStack_358 = (undefined8 ***)0xf;
    func_0x0001039a7270(&pppuStack_578,&pppuStack_360,lVar11,uVar18);
    ppuVar5 = ppuStack_570;
    pppuVar4 = pppuStack_578;
    if ((char)pppuStack_568 == '\x02') {
      ppuStack_5a8 = (undefined8 **)&UNK_108d98093;
      pppuStack_5a0 = (undefined8 ****)0x31;
      pppuStack_598 = pppuStack_578;
      goto LAB_1038d893c;
    }
    pppuStack_148 = pppuStack_578;
    ppuStack_140 = ppuStack_570;
    pppuStack_138 = pppuStack_568;
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
              (&lStack_130,pppuStack_578,ppuStack_570,lVar12,uVar15);
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&lStack_118,uStack_128,uStack_120,lVar14,lVar3);
    func_0x0001038d9bd0(&pppuStack_360,ppppuVar1,pppuVar2);
    if ((undefined8 ****)pppuStack_360 == (undefined8 ****)0x2) {
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&lStack_100,pppuStack_588,ppuStack_580,lVar14,lVar3);
      func_0x00010602f5bc(&pppuStack_360,pppuStack_588,ppuStack_580);
      uVar21 = uStack_f8;
      if (((ulong)pppuStack_360 & 1) == 0) {
        func_0x00010602f5bc(&pppuStack_360,uStack_f8);
        if (((ulong)pppuStack_360 & 1) == 0) goto LAB_1038d8c00;
        pppuStack_578 = (undefined8 ****)0x1;
        ppuStack_570 = ppuStack_358;
        FUN_103938a30(&ppuStack_570);
        ppppuVar13 = (undefined8 ****)func_0x00010602ecac(uStack_110,uStack_108,uVar21,uStack_f0);
        if (ppppuVar13 != (undefined8 ****)0x0) {
          ppuStack_5a8 = (undefined8 **)&UNK_108d980c4;
          pppuStack_5a0 = (undefined8 ****)0x2f;
          goto LAB_1038d8cec;
        }
        func_0x0001038dae6c(&pppuStack_360,pppuStack_588,ppuStack_580,lVar14,lVar3);
        ppppuVar19 = (undefined8 ****)pppuStack_360;
        if ((undefined8 ****)pppuStack_360 != (undefined8 ****)0x2) {
          pppuStack_5a0 = pppuStack_350;
          ppuStack_5a8 = ppuStack_358;
          pppuStack_598 = pppuStack_348;
        }
LAB_1038d8cf4:
        if (lStack_100 != 0) {
          _free(uStack_f8);
        }
        goto LAB_1038d8d04;
      }
      if (((ulong)ppuStack_358 & 3) == 1) {
        puVar20 = (undefined8 *)((long)ppuStack_358 + -1);
        uVar21 = *puVar20;
        puVar17 = *(undefined8 **)((long)ppuStack_358 + 7);
        pcVar7 = (code *)*puVar17;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar21);
        }
        if (puVar17[1] != 0) {
          _free(uVar21);
        }
        _free(puVar20);
      }
LAB_1038d8c00:
      func_0x00010602f5bc(&pppuStack_360,pppuStack_588,ppuStack_580);
      if (((ulong)pppuStack_360 & 1) == 0) {
        pppuStack_350 = (undefined8 ****)0x1;
        ppuStack_340 = (undefined8 ***)0x6;
        pppuStack_348 = (undefined8 ****)0x0;
        ppuStack_338._0_6_ = (uint6)(uint)ppuStack_338;
        ppuStack_338 = (undefined8 **)((ulong)ppuStack_338 & 0xffffffffffff0000);
        pppuStack_360 = (undefined8 ***)&UNK_108d98118;
        ppuStack_358 = (undefined8 ***)0xe;
        func_0x0001039a7270(&pppuStack_578,&pppuStack_360,lVar11,uVar18);
        if ((char)pppuStack_568 == '\x02') {
          ppuStack_5a8 = (undefined8 **)&UNK_108d98126;
          pppuStack_5a0 = (undefined8 ****)0x2e;
          ppppuVar13 = (undefined8 ****)pppuStack_578;
          goto LAB_1038d8cec;
        }
        pppuStack_e8 = pppuStack_578;
        ppuStack_e0 = ppuStack_570;
        pppuStack_d8 = pppuStack_568;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (&lStack_d0,pppuStack_578,ppuStack_570,lVar12,uVar15);
        ppppuVar19 = (undefined8 ****)
                     func_0x00010602ecac(pppuStack_588,ppuStack_580,uStack_c8,uStack_c0);
        if (ppppuVar19 == (undefined8 ****)0x0) {
          ppppuVar19 = (undefined8 ****)
                       func_0x00010602ecac(uStack_128,uStack_120,pppuStack_588,ppuStack_580);
          if (ppppuVar19 == (undefined8 ****)0x0) {
            if (lStack_d0 != 0) {
              _free(uStack_c8);
            }
            func_0x000103938db4(&pppuStack_e8);
            goto LAB_1038d8fa4;
          }
          pppuStack_b8 = ppppuVar19;
          lVar14 = func_0x00010602ecac(uStack_c8,uStack_c0,pppuStack_588,ppuStack_580);
          ppuVar6 = ppuStack_e0;
          pppuVar2 = pppuStack_e8;
          if (lVar14 == 0) {
            ppppuVar19 = (undefined8 ****)0x0;
            ppuStack_5a8 = (undefined8 **)&UNK_108d98178;
            pppuStack_5a0 = (undefined8 ****)0x2d;
            pppuStack_598 = pppuStack_b8;
          }
          else {
            pppuStack_350 = (undefined8 ***)CONCAT71((int7)((ulong)pppuStack_d8 >> 8),1);
            pppuStack_360 = (undefined8 ***)0x1;
            ppuStack_358 = (undefined8 **)0x0;
            lStack_b0 = lVar14;
            __ZN64__LT_tempfile__dir__TempDir_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3560df96776ed712E
                      (&pppuStack_360);
            __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                      (&pppuStack_578,pppuVar2,ppuVar6,lVar12,uVar15);
            if ((undefined8 ***)ppuVar6 != (undefined8 ***)0x0) {
              _free(pppuVar2);
            }
            ppuVar6 = ppuStack_570;
            pppuStack_90 = pppuStack_588;
            ppuStack_88 = ppuStack_580;
            ppuStack_80 = ppuStack_570;
            pppuStack_78 = pppuStack_568;
            pppuStack_360 = &pppuStack_90;
            ppuStack_358 = (undefined8 **)
                           &
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            pppuStack_350 = &pppuStack_b8;
            pppuStack_348 =
                 (undefined8 ***)
                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            ppuStack_340 = &ppuStack_80;
            ppuStack_338 = (undefined8 **)
                           &
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            plStack_330 = &lStack_b0;
            pcStack_328 = 
            __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            FUN_103962aa0(&ppuStack_a8,s_1failed_to_activate_updated_plug_108af9f5d,&pppuStack_360);
            pppuStack_5a0 = pppuStack_a0;
            ppuStack_5a8 = ppuStack_a8;
            pppuStack_598 = pppuStack_98;
            if ((undefined8 ****)pppuStack_578 != (undefined8 ****)0x0) {
              _free(ppuVar6);
            }
            FUN_103938a30(&lStack_b0);
            FUN_103938a30(&pppuStack_b8);
            ppppuVar19 = (undefined8 ****)0x1;
          }
          if (lStack_d0 != 0) {
            _free(uStack_c8);
          }
          if (lVar14 != 0) goto LAB_1038d8cf4;
        }
        else {
          ppuStack_5a8 = (undefined8 **)&UNK_108d98154;
          pppuStack_5a0 = (undefined8 ****)0x24;
          pppuStack_598 = ppppuVar19;
          if (lStack_d0 != 0) {
            _free(uStack_c8);
          }
          ppppuVar19 = (undefined8 ****)0x0;
        }
        func_0x000103938db4(&pppuStack_e8);
        goto LAB_1038d8cf4;
      }
      if (((ulong)ppuStack_358 & 3) == 1) {
        puVar20 = (undefined8 *)((long)ppuStack_358 + -1);
        uVar18 = *puVar20;
        puVar17 = *(undefined8 **)((long)ppuStack_358 + 7);
        pcVar7 = (code *)*puVar17;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar18);
        }
        if (puVar17[1] != 0) {
          _free(uVar18);
        }
        _free(puVar20);
      }
      ppppuVar13 = (undefined8 ****)
                   func_0x00010602ecac(uStack_128,uStack_120,pppuStack_588,ppuStack_580);
      if (ppppuVar13 != (undefined8 ****)0x0) {
        ppuStack_5a8 = (undefined8 **)&UNK_108d980f3;
        pppuStack_5a0 = (undefined8 ****)0x25;
LAB_1038d8cec:
        ppppuVar19 = (undefined8 ****)0x0;
        pppuStack_598 = ppppuVar13;
        goto LAB_1038d8cf4;
      }
LAB_1038d8fa4:
      if (lStack_100 != 0) {
        _free(uStack_f8);
      }
      if (lStack_118 != 0) {
        _free(uStack_110);
      }
      if (lStack_130 != 0) {
        _free(uStack_128);
      }
      func_0x000103938db4(&pppuStack_148);
    }
    else {
      pppuStack_5a0 = pppuStack_350;
      ppuStack_5a8 = ppuStack_358;
      pppuStack_598 = pppuStack_348;
      ppppuVar19 = (undefined8 ****)pppuStack_360;
LAB_1038d8d04:
      if (lStack_118 != 0) {
        _free(uStack_110);
      }
      if (lStack_130 != 0) {
        _free(uStack_128);
      }
      __ZN64__LT_tempfile__dir__TempDir_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3560df96776ed712E
                (&pppuStack_148);
      if ((undefined8 ***)ppuVar5 != (undefined8 ***)0x0) {
        _free(pppuVar4);
      }
      if (ppppuVar19 != (undefined8 ****)0x2) goto LAB_1038d899c;
    }
    if (lStack_590 != 0) {
      _free(pppuStack_588);
    }
    ppuStack_358 = param_4[1];
    pppuStack_360 = *param_4;
    pppuStack_348 = param_4[3];
    pppuStack_350 = param_4[2];
    ppuStack_338 = param_4[5];
    ppuStack_340 = param_4[4];
    lStack_320 = param_5[2];
    pcStack_328 = (code *)param_5[1];
    plStack_330 = (long *)*param_5;
    param_1[1] = ppuStack_358;
    *param_1 = pppuStack_360;
    param_1[3] = pppuStack_348;
    param_1[2] = pppuStack_350;
    param_1[9] = lStack_5c8;
    param_1[8] = lStack_320;
    param_1[0xb] = uStack_5b8;
    param_1[10] = uStack_5c0;
    param_1[5] = ppuStack_338;
    param_1[4] = ppuStack_340;
    param_1[7] = pcStack_328;
    param_1[6] = plStack_330;
    if (ppppuVar16 == (undefined8 ****)0x0) goto LAB_1038d8870;
  }
  _free(pppuVar10);
LAB_1038d8870:
  if (*param_3 != 0) {
    _free(ppppuVar1);
  }
  return;
}

