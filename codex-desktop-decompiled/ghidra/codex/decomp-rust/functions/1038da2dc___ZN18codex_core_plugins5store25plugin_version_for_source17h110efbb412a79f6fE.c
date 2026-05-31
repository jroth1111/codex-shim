
/* WARNING: Type propagation algorithm not settling */

void __ZN18codex_core_plugins5store25plugin_version_for_source17h110efbb412a79f6fE(long *param_1)

{
  byte bVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  code *pcVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long *****ppppplVar9;
  long *******ppppppplVar10;
  long *******unaff_x23;
  long lVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  undefined8 uStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  char cStack_1f8;
  long *******ppppppplStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *******ppppppplStack_128;
  undefined1 uStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *******ppppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long ******pppppplStack_90;
  undefined8 uStack_88;
  undefined1 auStack_71 [17];
  
  __ZN19codex_utils_plugins16plugin_namespace25find_plugin_manifest_path17h911e1004599c80acE
            (&uStack_1b0);
  ppppppplVar4 = ppppppplStack_1a8;
  ppppppplVar2 = uStack_1b0;
  if (uStack_1b0 != (long *******)0x8000000000000000) {
    __ZN3std2fs14read_to_string5inner17hf9491275bc43618cE
              (&uStack_1b0,ppppppplStack_1a8,ppppppplStack_1a0);
    ppppppplVar5 = ppppppplStack_1a8;
    ppppppplVar3 = uStack_1b0;
    if (uStack_1b0 != (long *******)0x8000000000000000) {
      ppppppplStack_220 = ppppppplStack_1a0;
      ppppppplStack_218 = (long *******)0x0;
      uStack_210 = 0;
      ppppppplStack_208 = ppppppplStack_1a8;
      ppppppplStack_200 = ppppppplStack_1a0;
      ppppppplStack_240 = (long *******)0x0;
      ppppppplStack_238 = (long *******)0x1;
      ppppppplStack_230 = (long *******)0x0;
      ppppppplStack_228 = ppppppplStack_1a8;
      cStack_1f8 = -0x80;
      if (ppppppplStack_1a0 != (long *******)0x0) {
        do {
          bVar1 = *(byte *)((long)ppppppplStack_1a8 + (long)ppppppplStack_218);
          if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
            if (bVar1 != 0x5b) {
              if (bVar1 == 0x7b) {
                ppppppplStack_218 = (long *******)((long)ppppppplStack_218 + 1);
                cStack_1f8 = '\x7f';
                ppppppplStack_128 = (long *******)&ppppppplStack_240;
                uStack_120 = 1;
                ppppppplVar10 = (long *******)0x8000000000000006;
                goto LAB_1038da6a0;
              }
              ppppppplVar10 =
                   (long *******)FUN_10894fd58(&ppppppplStack_240,auStack_71,&UNK_10b2dc818);
              goto LAB_1038dac5c;
            }
            cStack_1f8 = '\x7f';
            ppppppplStack_218 = (long *******)((long)ppppppplStack_218 + 1);
            ppppppplStack_118 = (long *******)&ppppppplStack_240;
            ppppppplStack_110 = (long *******)CONCAT71(ppppppplStack_110._1_7_,1);
            FUN_103982584(&uStack_1b0,&ppppppplStack_118);
            if ((char)uStack_1b0 == '\x01') {
LAB_1038da854:
              uStack_1b0 = (long *******)0x8000000000000006;
              ppppppplVar10 = ppppppplStack_1a8;
            }
            else {
              ppppppplVar10 = (long *******)(ulong)uStack_1b0._1_1_;
              if (uStack_1b0._1_1_ == 1) {
                func_0x000103992e08(&uStack_1b0,ppppppplStack_118);
                if (uStack_1b0 == (long *******)0x8000000000000006) goto LAB_1038da854;
                uStack_158 = uStack_198;
                ppppppplStack_160 = ppppppplStack_1a0;
                uStack_148 = uStack_188;
                uStack_150 = uStack_190;
                uStack_138 = uStack_178;
                uStack_140 = uStack_180;
                uStack_130 = uStack_170;
                ppppppplVar10 = ppppppplStack_1a8;
              }
              else {
                uStack_1b0 = (long *******)0x8000000000000005;
              }
            }
            cStack_1f8 = cStack_1f8 + '\x01';
            uStack_100 = uStack_158;
            ppppppplStack_108 = ppppppplStack_160;
            uStack_f0 = uStack_148;
            uStack_f8 = uStack_150;
            uStack_e0 = uStack_138;
            uStack_e8 = uStack_140;
            uStack_d8 = uStack_130;
            ppppppplStack_118 = uStack_1b0;
            ppppppplStack_110 = ppppppplVar10;
            ppppppplVar10 = (long *******)FUN_103893e74(&ppppppplStack_240);
            ppppppplVar14 = ppppppplStack_110;
            ppppppplStack_1a8 = ppppppplStack_110;
            uStack_1b0 = ppppppplStack_118;
            uStack_198 = uStack_100;
            ppppppplStack_1a0 = ppppppplStack_108;
            uStack_188 = uStack_f0;
            uStack_190 = uStack_f8;
            uStack_178 = uStack_e0;
            uStack_180 = uStack_e8;
            uStack_170 = uStack_d8;
            unaff_x23 = ppppppplVar10;
            ppppppplStack_168 = ppppppplVar10;
            if (ppppppplStack_118 == (long *******)0x8000000000000006) {
              if (ppppppplVar10 == (long *******)0x0) goto LAB_1038dab4c;
              pppppplVar13 = *ppppppplVar10;
              if (pppppplVar13 != (long ******)0x1) goto LAB_1038daac8;
              FUN_103938a30(ppppppplVar10 + 1);
              goto LAB_1038dab44;
            }
            if (ppppppplVar10 == (long *******)0x0) goto LAB_1038dab00;
            if (ppppppplStack_118 == (long *******)0x8000000000000005) goto LAB_1038daaf0;
            FUN_1039391f0(&uStack_1b0);
            ppppppplVar14 = (long *******)0x8000000000000006;
            goto LAB_1038dab54;
          }
          ppppppplStack_218 = (long *******)((long)ppppppplStack_218 + 1);
        } while (ppppppplStack_1a0 != ppppppplStack_218);
      }
      uStack_1b0 = (long *******)0x5;
      ppppppplVar10 = (long *******)FUN_10894f97c(&ppppppplStack_240,&uStack_1b0);
      goto LAB_1038da410;
    }
    lVar11 = 0;
    ppppppplVar14 = (long *******)&UNK_108d982da;
    unaff_x23 = (long *******)0x1a;
    uVar8 = extraout_x1;
    ppppppplVar10 = ppppppplStack_1a8;
    goto LAB_1038da518;
  }
  unaff_x23 = (long *******)_malloc(0x13);
  if (unaff_x23 != (long *******)0x0) {
    *(undefined4 *)((long)unaff_x23 + 0xf) = 0x6e6f736a;
    unaff_x23[1] = (long ******)0x6a2e6e6967756c70;
    *unaff_x23 = (long ******)0x20676e697373696d;
    ppppppplVar14 = (long *******)0x13;
    lVar11 = 1;
    ppppppplVar10 = (long *******)0x13;
    goto LAB_1038da598;
  }
  func_0x0001087c9084(1,0x13);
  goto LAB_1038dacf0;
  while (unaff_x23 = (long *******)FUN_103891e88(ppppppplVar6), ppppppplVar14 = unaff_x23,
        unaff_x23 == (long *******)0x0) {
LAB_1038da6a0:
    FUN_103982194(&uStack_1b0,&ppppppplStack_128);
    ppppppplVar6 = ppppppplStack_128;
    ppppppplVar14 = ppppppplStack_1a8;
    ppppppplStack_118 = ppppppplVar10;
    ppppppplStack_110 = ppppppplStack_2b0;
    if ((char)uStack_1b0 == '\x01') break;
    if (uStack_1b0._1_1_ != '\x01') {
      if (ppppppplVar10 == (long *******)0x8000000000000006) {
        ppppppplVar10 = (long *******)0x8000000000000005;
      }
      else {
        uStack_c8 = uStack_100;
        ppppppplStack_d0 = ppppppplStack_108;
        uStack_b8 = uStack_f0;
        uStack_c0 = uStack_f8;
        uStack_a8 = uStack_e0;
        uStack_b0 = uStack_e8;
        uStack_a0 = uStack_d8;
        unaff_x23 = ppppppplStack_2b0;
      }
      goto LAB_1038daa30;
    }
    ppppppplStack_128[5] = (long ******)((long)ppppppplStack_128[5] + 1);
    ppppppplVar6[2] = (long ******)0x0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_1b0,ppppppplVar6 + 3,ppppppplVar6);
    unaff_x23 = ppppppplStack_1a8;
    ppppppplVar14 = ppppppplStack_1a8;
    if (uStack_1b0 == (long *******)0x2) break;
    if ((ppppppplStack_1a0 == (long *******)0x7) &&
       (*(int *)ppppppplStack_1a8 == 0x73726576 &&
        *(int *)((long)ppppppplStack_1a8 + 3) == 0x6e6f6973)) {
      if (ppppppplVar10 != (long *******)0x8000000000000006) {
        pppppplStack_90 = (long ******)&UNK_108d97453;
        uStack_88 = 7;
        uStack_1b0 = &pppppplStack_90;
        ppppppplStack_1a8 = (long *******)&DAT_103925cd0;
        ppppppplVar14 = (long *******)FUN_1089510d0(s_duplicate_field_____108ac2973,&uStack_1b0);
        break;
      }
      pppppplVar13 = ppppppplVar6[5];
      if (pppppplVar13 < ppppppplVar6[4]) {
        while( true ) {
          bVar1 = *(byte *)((long)ppppppplVar6[3] + (long)pppppplVar13);
          if (0x3a < bVar1) goto LAB_1038dacc4;
          if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
          pppppplVar13 = (long ******)((long)pppppplVar13 + 1);
          ppppppplVar6[5] = pppppplVar13;
          if (ppppppplVar6[4] == pppppplVar13) goto LAB_1038dac00;
        }
        if ((ulong)bVar1 == 0x3a) {
          ppppppplVar6[5] = (long ******)((long)pppppplVar13 + 1);
          func_0x000103992e08(&uStack_1b0,ppppppplVar6);
          if (uStack_1b0 == (long *******)0x8000000000000006) {
            ppppppplVar10 = (long *******)0x8000000000000006;
            unaff_x23 = ppppppplStack_1a8;
            goto LAB_1038daa30;
          }
          ppppppplStack_2b0 = ppppppplStack_1a8;
          uStack_100 = uStack_198;
          ppppppplStack_108 = ppppppplStack_1a0;
          uStack_f0 = uStack_188;
          uStack_f8 = uStack_190;
          uStack_e0 = uStack_178;
          uStack_e8 = uStack_180;
          uStack_d8 = uStack_170;
          ppppppplVar10 = uStack_1b0;
          goto LAB_1038da6a0;
        }
LAB_1038dacc4:
        pppppplStack_90 = (long ******)0x6;
        unaff_x23 = (long *******)FUN_10894f97c(ppppppplVar6,&pppppplStack_90);
      }
      else {
LAB_1038dac00:
        pppppplStack_90 = (long ******)0x3;
        unaff_x23 = (long *******)FUN_10894f97c(ppppppplVar6,&pppppplStack_90);
      }
      ppppppplVar10 = (long *******)0x8000000000000006;
      goto LAB_1038daa30;
    }
  }
  if ((ulong)((long)ppppppplVar10 + 0x7ffffffffffffffb) < (undefined *)0x2) {
    ppppppplVar10 = (long *******)0x8000000000000006;
    unaff_x23 = ppppppplVar14;
  }
  else {
    FUN_1039391f0(&ppppppplStack_118);
    ppppppplVar10 = (long *******)0x8000000000000006;
    unaff_x23 = ppppppplVar14;
  }
LAB_1038daa30:
  cStack_1f8 = cStack_1f8 + '\x01';
  uStack_100 = uStack_c8;
  ppppppplStack_108 = ppppppplStack_d0;
  uStack_f0 = uStack_b8;
  uStack_f8 = uStack_c0;
  uStack_e0 = uStack_a8;
  uStack_e8 = uStack_b0;
  uStack_d8 = uStack_a0;
  ppppppplStack_118 = ppppppplVar10;
  ppppppplStack_110 = unaff_x23;
  ppppppplVar10 = (long *******)FUN_103893cdc(&ppppppplStack_240);
  ppppppplVar14 = ppppppplStack_110;
  ppppppplStack_1a8 = ppppppplStack_110;
  uStack_1b0 = ppppppplStack_118;
  uStack_198 = uStack_100;
  ppppppplStack_1a0 = ppppppplStack_108;
  uStack_188 = uStack_f0;
  uStack_190 = uStack_f8;
  uStack_178 = uStack_e0;
  uStack_180 = uStack_e8;
  uStack_170 = uStack_d8;
  unaff_x23 = ppppppplVar10;
  ppppppplStack_168 = ppppppplVar10;
  if (ppppppplStack_118 == (long *******)0x8000000000000006) {
    if (ppppppplVar10 != (long *******)0x0) {
      pppppplVar13 = *ppppppplVar10;
      if (pppppplVar13 == (long ******)0x1) {
        FUN_103938a30(ppppppplVar10 + 1);
      }
      else {
LAB_1038daac8:
        ppppppplVar14 = ppppppplStack_110;
        uStack_1b0 = ppppppplStack_118;
        ppppppplStack_1a8 = ppppppplStack_110;
        ppppppplStack_1a0 = ppppppplStack_108;
        uStack_198 = uStack_100;
        uStack_190 = uStack_f8;
        uStack_188 = uStack_f0;
        uStack_180 = uStack_e8;
        uStack_178 = uStack_e0;
        uStack_170 = uStack_d8;
        ppppppplStack_168 = ppppppplVar10;
        if ((pppppplVar13 == (long ******)0x0) && (ppppppplVar10[2] != (long ******)0x0)) {
          _free(ppppppplVar10[1]);
        }
      }
LAB_1038dab44:
      _free(ppppppplVar10);
      unaff_x23 = ppppppplVar10;
    }
LAB_1038dab4c:
    ppppppplVar10 = ppppppplVar14;
    ppppppplVar14 = (long *******)0x8000000000000006;
  }
  else if (ppppppplVar10 == (long *******)0x0) {
LAB_1038dab00:
    uStack_1e8 = uStack_100;
    ppppppplStack_1f0 = ppppppplStack_108;
    uStack_1d8 = uStack_f0;
    uStack_1e0 = uStack_f8;
    uStack_1c8 = uStack_e0;
    uStack_1d0 = uStack_e8;
    uStack_1c0 = uStack_d8;
    ppppppplVar10 = ppppppplStack_110;
    unaff_x23 = ppppppplStack_168;
    ppppppplVar14 = ppppppplStack_118;
    uStack_1b0 = ppppppplStack_118;
    ppppppplStack_1a8 = ppppppplStack_110;
    ppppppplStack_1a0 = ppppppplStack_108;
    uStack_198 = uStack_100;
    uStack_190 = uStack_f8;
    uStack_188 = uStack_f0;
    uStack_180 = uStack_e8;
    uStack_178 = uStack_e0;
    uStack_170 = uStack_d8;
  }
  else if (ppppppplStack_118 == (long *******)0x8000000000000005) {
LAB_1038daaf0:
    unaff_x23 = ppppppplVar10;
    ppppppplVar14 = (long *******)0x8000000000000006;
    uStack_1b0 = ppppppplStack_118;
    ppppppplStack_1a8 = ppppppplStack_110;
    ppppppplStack_1a0 = ppppppplStack_108;
    uStack_198 = uStack_100;
    uStack_190 = uStack_f8;
    uStack_188 = uStack_f0;
    uStack_180 = uStack_e8;
    uStack_178 = uStack_e0;
    uStack_170 = uStack_d8;
    ppppppplStack_168 = ppppppplVar10;
  }
  else {
    FUN_1039391f0(&uStack_1b0);
    ppppppplVar14 = (long *******)0x8000000000000006;
  }
LAB_1038dab54:
  if (ppppppplVar14 == (long *******)0x8000000000000006) {
LAB_1038dac5c:
    ppppppplVar10 = (long *******)FUN_108950124(ppppppplVar10,&ppppppplStack_240);
LAB_1038da410:
    if (ppppppplStack_240 != (long *******)0x0) {
      ppppppplVar14 = (long *******)0x8000000000000006;
LAB_1038da420:
      _free(ppppppplStack_238);
      goto LAB_1038da428;
    }
LAB_1038da430:
    ppppppplStack_240 = (long *******)&ppppppplStack_118;
    ppppppplStack_238 =
         (long *******)
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    ppppppplStack_118 = ppppppplVar10;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_1b0,s_failed_to_parse_plugin_json__108afa01e,&ppppppplStack_240);
    ppppppplVar6 = ppppppplStack_118;
    ppppppplVar10 = ppppppplStack_1a0;
    unaff_x23 = ppppppplStack_1a8;
    ppppppplVar14 = uStack_1b0;
    if (*ppppppplStack_118 == (long ******)0x1) {
      pppppplVar13 = ppppppplStack_118[1];
      if (((ulong)pppppplVar13 & 3) == 1) {
        pppppplVar12 = (long ******)((long)pppppplVar13 + -1);
        ppppplVar9 = *pppppplVar12;
        puVar15 = *(undefined8 **)((long)pppppplVar13 + 7);
        pcVar7 = (code *)*puVar15;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(ppppplVar9);
        }
        if (puVar15[1] != 0) {
          _free(ppppplVar9);
        }
        goto LAB_1038da4f4;
      }
    }
    else if ((*ppppppplStack_118 == (long ******)0x0) && (ppppppplStack_118[2] != (long ******)0x0))
    {
      pppppplVar12 = ppppppplStack_118[1];
LAB_1038da4f4:
      _free(pppppplVar12);
    }
    _free(ppppppplVar6);
    lVar11 = 1;
    uVar8 = extraout_x1_00;
    if (ppppppplVar3 != (long *******)0x0) {
LAB_1038da510:
      _free(ppppppplVar5);
      uVar8 = extraout_x1_01;
    }
LAB_1038da518:
    if (ppppppplVar2 != (long *******)0x0) {
      _free(ppppppplVar4);
      uVar8 = extraout_x1_02;
    }
    if (lVar11 != 2) {
LAB_1038da598:
      *param_1 = lVar11;
      param_1[1] = (long)ppppppplVar14;
      param_1[2] = (long)unaff_x23;
      param_1[3] = (long)ppppppplVar10;
      return;
    }
  }
  else {
    uStack_290 = uStack_1e8;
    ppppppplStack_298 = ppppppplStack_1f0;
    uStack_280 = uStack_1d8;
    uStack_288 = uStack_1e0;
    uStack_270 = uStack_1c8;
    uStack_278 = uStack_1d0;
    uStack_268 = uStack_1c0;
    ppppppplStack_2a8 = ppppppplVar14;
    ppppppplStack_2a0 = ppppppplVar10;
    if (ppppppplStack_218 < ppppppplStack_220) {
      do {
        if (0x20 < *(byte *)((long)ppppppplStack_228 + (long)ppppppplStack_218) ||
            (1L << ((ulong)*(byte *)((long)ppppppplStack_228 + (long)ppppppplStack_218) & 0x3f) &
            0x100002600U) == 0) {
          uStack_1b0 = (long *******)0x16;
          ppppppplVar10 = (long *******)FUN_10894f97c(&ppppppplStack_240,&uStack_1b0);
          if (ppppppplVar14 != (long *******)0x8000000000000005) {
            FUN_1039391f0(&ppppppplStack_2a8);
          }
          goto LAB_1038da410;
        }
        ppppppplStack_218 = (long *******)((long)ppppppplStack_218 + 1);
      } while (ppppppplStack_220 != ppppppplStack_218);
    }
    if (ppppppplStack_240 != (long *******)0x0) goto LAB_1038da420;
LAB_1038da428:
    if (ppppppplVar14 == (long *******)0x8000000000000006) goto LAB_1038da430;
    uStack_258 = uStack_278;
    uStack_260 = uStack_280;
    uStack_248 = uStack_268;
    uStack_250 = uStack_270;
    if (ppppppplVar14 == (long *******)0x8000000000000005) {
      ppppppplVar14 = (long *******)0x8000000000000000;
      lVar11 = 2;
      uVar8 = uStack_290;
joined_r0x0001038da4ac:
      if (ppppppplVar3 == (long *******)0x0) goto LAB_1038da518;
      goto LAB_1038da510;
    }
    ppppppplStack_1a0 = ppppppplStack_298;
    uStack_190 = uStack_288;
    uStack_198 = uStack_290;
    uStack_180 = uStack_278;
    uStack_188 = uStack_280;
    uStack_170 = uStack_268;
    uStack_178 = uStack_270;
    uStack_1b0 = ppppppplVar14;
    ppppppplStack_1a8 = ppppppplVar10;
    if (ppppppplVar14 != (long *******)0x8000000000000003) {
      unaff_x23 = (long *******)_malloc(0x36,uStack_290);
      if (unaff_x23 == (long *******)0x0) goto LAB_1038dacfc;
      unaff_x23[1] = (long ******)0x76206e6967756c70;
      *unaff_x23 = (long ******)0x2064696c61766e69;
      unaff_x23[3] = (long ******)0x6e6967756c70206e;
      unaff_x23[2] = (long ******)0x69206e6f69737265;
      unaff_x23[5] = (long ******)0x2064657463657078;
      unaff_x23[4] = (long ******)0x65203a6e6f736a2e;
      *(undefined8 *)((long)unaff_x23 + 0x2e) = 0x676e697274732064;
      ppppppplVar10 = (long *******)0x36;
      ppppppplVar14 = (long *******)0x36;
LAB_1038da8c4:
      FUN_1039391f0(&uStack_1b0);
      lVar11 = 1;
      uVar8 = extraout_x1_06;
      goto joined_r0x0001038da4ac;
    }
    auVar16 = FUN_1039467ac();
    if (auVar16._8_8_ == 0) {
      func_0x0001039a0d60(&ppppppplStack_240,&UNK_108d9826c,0x38);
      ppppppplVar10 = ppppppplStack_230;
      unaff_x23 = ppppppplStack_238;
      ppppppplVar14 = ppppppplStack_240;
      goto LAB_1038da8c4;
    }
    func_0x0001039a0d60(&ppppppplStack_240,auVar16._0_8_,auVar16._8_8_);
    ppppppplVar10 = ppppppplStack_230;
    unaff_x23 = ppppppplStack_238;
    ppppppplVar14 = ppppppplStack_240;
    FUN_1039391f0(&uStack_1b0);
    uVar8 = extraout_x1_03;
    if (ppppppplVar3 != (long *******)0x0) {
      _free(ppppppplVar5);
      uVar8 = extraout_x1_04;
    }
    if (ppppppplVar2 != (long *******)0x0) {
      _free(ppppppplVar4);
      uVar8 = extraout_x1_05;
    }
  }
  if (ppppppplVar14 != (long *******)0x8000000000000000) {
LAB_1038da568:
    func_0x0001038db3bc(&uStack_1b0,unaff_x23,ppppppplVar10);
    if (uStack_1b0 == (long *******)0x8000000000000000) {
      param_1[2] = (long)unaff_x23;
      param_1[3] = (long)ppppppplVar10;
      *param_1 = 2;
      param_1[1] = (long)ppppppplVar14;
    }
    else {
      param_1[2] = (long)ppppppplStack_1a8;
      param_1[1] = (long)uStack_1b0;
      param_1[3] = (long)ppppppplStack_1a0;
      *param_1 = 1;
      if (ppppppplVar14 != (long *******)0x0) {
        _free(unaff_x23);
      }
    }
    return;
  }
  unaff_x23 = (long *******)_malloc(5,uVar8);
  if (unaff_x23 != (long *******)0x0) {
    *(undefined1 *)((long)unaff_x23 + 4) = 0x6c;
    *(int *)unaff_x23 = 0x61636f6c;
    ppppppplVar10 = (long *******)0x5;
    ppppppplVar14 = (long *******)0x5;
    goto LAB_1038da568;
  }
LAB_1038dacf0:
  func_0x0001087c9084(1,5);
LAB_1038dacfc:
  func_0x0001087c9084(1,0x36);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1038dad0c);
  (*pcVar7)();
}

