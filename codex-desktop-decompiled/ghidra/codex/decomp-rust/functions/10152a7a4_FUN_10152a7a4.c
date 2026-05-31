
void FUN_10152a7a4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined8 **ppuVar32;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *puVar33;
  undefined8 *extraout_x1_03;
  byte bVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *extraout_x12_01;
  undefined8 *extraout_x12_02;
  undefined8 *puVar39;
  undefined8 *extraout_x12_03;
  undefined8 *extraout_x13;
  undefined8 *extraout_x13_00;
  undefined8 *extraout_x13_01;
  undefined8 *extraout_x13_02;
  undefined8 *puVar40;
  undefined8 *extraout_x13_03;
  undefined8 *puVar41;
  undefined8 *extraout_x14;
  undefined8 *extraout_x14_00;
  undefined8 *extraout_x14_01;
  undefined8 *extraout_x14_02;
  undefined8 *puVar42;
  undefined8 *extraout_x14_03;
  undefined8 *puVar43;
  long lVar44;
  undefined8 *extraout_d0;
  undefined8 *extraout_d0_00;
  undefined8 *extraout_d0_01;
  undefined8 *extraout_d0_02;
  undefined8 uVar45;
  undefined8 *puVar46;
  undefined8 *extraout_d0_03;
  undefined8 *extraout_var;
  undefined8 *extraout_var_00;
  undefined8 *extraout_var_01;
  undefined8 *extraout_var_02;
  undefined8 *puVar47;
  undefined8 *extraout_var_03;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  
  lStack_268 = param_2 + param_3 * 0x40;
  uStack_290 = CONCAT71(uStack_290._1_7_,0x16);
  puStack_260 = &UNK_10b22ca08;
  uStack_258 = 10;
  puStack_250 = (undefined8 *)0x8000000000000000;
  puStack_230 = (undefined8 *)0x8000000000000000;
  puStack_210 = (undefined8 *)0x8000000000000000;
  puStack_1f0 = (undefined8 *)0x8000000000000000;
  puStack_1d0 = (undefined8 *)0x8000000000000000;
  puStack_1b0 = (undefined8 *)0x8000000000000000;
  puStack_190 = (undefined8 *)0x8000000000000000;
  puStack_170 = (undefined8 *)0x8000000000000000;
  puStack_150 = (undefined8 *)0x8000000000000000;
  puStack_130 = (undefined8 *)0x8000000000000000;
  lVar1 = param_2;
  if (param_3 != 0) {
    puStack_298 = (undefined8 *)((ulong)&uStack_290 | 1);
    puStack_2a0 = (undefined8 *)((ulong)&puStack_d0 | 1);
    lStack_270 = param_2;
    uVar45 = uStack_258;
    puVar16 = puStack_260;
    lVar44 = lStack_268;
LAB_10152a834:
    do {
      lVar1 = param_2 + 0x40;
      __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
                (&uStack_110,param_2,puVar16,uVar45);
      bVar34 = (byte)uStack_110;
      if ((byte)uStack_110 != 0x16) {
        lStack_270 = param_2 + 0x40;
        if ((byte)uStack_290 != '\x16') {
          FUN_100e077ec(&uStack_290);
        }
        puVar38 = puStack_100;
        puVar35 = puStack_108;
        uStack_288 = uStack_e8;
        uStack_290 = uStack_f0;
        uStack_278 = uStack_d8;
        uStack_280 = uStack_e0;
        if (bVar34 < 0xd) {
          if (bVar34 == 1) {
            bStack_c8 = uStack_110._1_1_;
            if (9 < uStack_110._1_1_) {
              bStack_c8 = 10;
            }
LAB_10152a934:
            puStack_d0 = (undefined8 *)0x2;
            goto LAB_10152a950;
          }
          if (bVar34 == 4) {
            if ((undefined8 *)0x9 < puStack_108) {
              puVar35 = (undefined8 *)0xa;
            }
            bStack_c8 = (byte)puVar35;
            goto LAB_10152a934;
          }
          if (bVar34 != 0xc) {
LAB_10152ad0c:
            ppuVar32 = &puStack_d0;
            puVar33 = &uStack_110;
            goto code_r0x00010152ad18;
          }
          ppuVar32 = (undefined8 **)func_0x000100b1c890(&puStack_d0,puStack_100);
          puVar33 = extraout_x1;
          puVar39 = extraout_x12;
          puVar40 = extraout_x13;
          puVar42 = extraout_x14;
          puVar46 = extraout_d0;
          puVar47 = extraout_var;
joined_r0x00010152a914:
          if (puVar35 != (undefined8 *)0x0) {
            ppuVar32 = (undefined8 **)_free(puVar38);
            puVar33 = extraout_x1_01;
            puVar39 = extraout_x12_01;
            puVar40 = extraout_x13_01;
            puVar42 = extraout_x14_01;
            puVar46 = extraout_d0_01;
            puVar47 = extraout_var_01;
          }
        }
        else {
          if (bVar34 == 0xd) {
            func_0x000100b1c890(&puStack_d0,puStack_108,puStack_100);
          }
          else {
            if (bVar34 == 0xe) {
              ppuVar32 = (undefined8 **)func_0x000100b1c268(&puStack_d0,puStack_100,uStack_f8);
              puVar33 = extraout_x1_00;
              puVar39 = extraout_x12_00;
              puVar40 = extraout_x13_00;
              puVar42 = extraout_x14_00;
              puVar46 = extraout_d0_00;
              puVar47 = extraout_var_00;
              goto joined_r0x00010152a914;
            }
            if (bVar34 != 0xf) goto LAB_10152ad0c;
            func_0x000100b1c268(&puStack_d0,puStack_108,puStack_100);
          }
LAB_10152a950:
          ppuVar32 = (undefined8 **)FUN_100e077ec(&uStack_110);
          puVar33 = extraout_x1_02;
          puVar39 = extraout_x12_02;
          puVar40 = extraout_x13_02;
          puVar42 = extraout_x14_02;
          puVar46 = extraout_d0_02;
          puVar47 = extraout_var_02;
        }
LAB_10152a958:
        puVar35 = (undefined8 *)(ulong)bStack_c8;
        if (puStack_d0 != (undefined8 *)0x2) {
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_a8,uStack_af);
          *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_b0,uStack_b7);
          *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_98,uStack_9f);
          *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_a0,uStack_a7);
          *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_88,uStack_8f);
          *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_90,uStack_97);
          param_1[0xb] = uStack_80;
          param_1[10] = CONCAT71(uStack_87,uStack_88);
          *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_b8,uStack_bf);
          *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_c0,uStack_c7);
          *(byte *)(param_1 + 2) = bStack_c8;
          *param_1 = 0x8000000000000000;
          param_1[1] = puStack_d0;
          goto LAB_10152af14;
        }
        puVar38 = (undefined8 *)&UNK_108ca09ac;
        puVar37 = (undefined8 *)(ulong)*(byte *)((long)puVar35 + 0x108ca09ac);
        puVar36 = (undefined8 *)(&UNK_10152a980 + (long)puVar37 * 4);
        bVar29 = true;
        bVar28 = true;
        bVar27 = true;
        bVar26 = true;
        bVar25 = true;
        bVar24 = true;
        bVar23 = true;
        bVar22 = true;
        bVar21 = true;
        bVar20 = true;
        bVar19 = true;
        bVar18 = true;
        bVar30 = true;
        bVar31 = true;
        puVar41 = puVar40;
        puVar43 = puVar42;
        lVar1 = lStack_270;
        bVar34 = bStack_c8;
        switch(bStack_c8) {
        case 1:
          puVar35 = puStack_230;
        case 0x66:
          if (puVar35 != (undefined8 *)0x8000000000000000) {
            FUN_1087e4364(&puStack_d0,&UNK_108cabf39,0x11);
            goto code_r0x00010152b3fc;
          }
          func_0x00010062760c(&puStack_d0,&uStack_290);
          puVar35 = puStack_d0;
code_r0x00010152ab94:
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
code_r0x00010152ab9c:
          puVar36 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
code_r0x00010152aba0:
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          puStack_100 = puVar36;
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152abb0:
          puStack_220 = puStack_100;
          param_2 = lStack_270;
          puStack_230 = puVar46;
          puStack_228 = puVar47;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
code_r0x00010152abc8:
          lVar1 = lStack_270;
          goto LAB_10152ad2c;
        case 2:
          puVar35 = puStack_210;
        case 0x1d:
          bVar24 = puVar35 == (undefined8 *)0x8000000000000000;
code_r0x00010152aa84:
          if (!bVar24) {
            FUN_1087e4364(&puStack_d0,&UNK_108cabf4a,0xb);
            goto code_r0x00010152b3fc;
          }
          ppuVar32 = &puStack_d0;
          puVar33 = &uStack_290;
code_r0x00010152aa90:
          func_0x00010062760c(ppuVar32,puVar33);
          puVar35 = puStack_d0;
code_r0x00010152aa98:
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
code_r0x00010152aaa0:
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152aab4:
          puVar35 = puStack_100;
          puStack_210 = puVar46;
          puStack_208 = puVar47;
code_r0x00010152aabc:
          param_2 = lStack_270;
          puStack_200 = puVar35;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
code_r0x00010152aacc:
          lVar1 = lStack_270;
          goto LAB_10152ad2c;
        case 3:
        case 0x24:
          bVar25 = puStack_1f0 == (undefined8 *)0x8000000000000000;
        case 0x4e:
        case 0xce:
          if (!bVar25) {
            FUN_1087e4364(&puStack_d0,&UNK_108cabf55,10);
            goto code_r0x00010152b3fc;
          }
code_r0x00010152aadc:
          func_0x00010062760c(&puStack_d0,&uStack_290);
code_r0x00010152aae8:
          puVar35 = puStack_d0;
code_r0x00010152aaec:
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
code_r0x00010152aaf4:
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152ab08:
          puVar35 = puStack_100;
          puStack_1f0 = puVar46;
          puStack_1e8 = puVar47;
code_r0x00010152ab10:
          param_2 = lStack_270;
          puStack_1e0 = puVar35;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
code_r0x00010152ab20:
          lVar1 = lStack_270;
          goto LAB_10152ad2c;
        case 4:
          if (puStack_1d0 == (undefined8 *)0x8000000000000000) goto code_r0x00010152a9e0;
          FUN_1087e4364(&puStack_d0,&UNK_108cabf5f,0xb);
          goto code_r0x00010152b3fc;
        case 5:
        case 0xf6:
          if (puStack_1b0 == (undefined8 *)0x8000000000000000) goto code_r0x00010152abd8;
          FUN_1087e4364(&puStack_d0,&UNK_108ca7bd7,0xc);
          goto code_r0x00010152b3fc;
        case 6:
          bVar28 = puStack_190 == (undefined8 *)0x8000000000000000;
        case 0x90:
        case 0xb0:
          if (!bVar28) {
            FUN_1087e4364(&puStack_d0,&UNK_108cdc930,0x10);
            goto code_r0x00010152b3fc;
          }
          func_0x00010062760c(&puStack_d0,&uStack_290);
code_r0x00010152ac38:
          puVar47 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          puVar46 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
          puVar35 = puStack_d0;
code_r0x00010152ac40:
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          bVar29 = puVar35 == (undefined8 *)0x2;
          uStack_110 = puVar46;
          puStack_108 = puVar47;
code_r0x00010152ac50:
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          if (!bVar29) goto code_r0x00010152aee0;
code_r0x00010152ac58:
          puStack_180 = puStack_100;
          param_2 = lStack_270;
          lVar1 = lStack_270;
          puStack_190 = puVar46;
          puStack_188 = puVar47;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 7:
        case 0xda:
          if (puStack_170 == (undefined8 *)0x8000000000000000) {
            ppuVar32 = &puStack_d0;
            puVar33 = &uStack_290;
            goto code_r0x00010152ab38;
          }
          FUN_1087e4364(&puStack_d0,&UNK_108ca7b49,0xd);
          goto code_r0x00010152b3fc;
        case 8:
          if (puStack_150 == (undefined8 *)0x8000000000000000) {
            ppuVar32 = &puStack_d0;
            puVar33 = &uStack_290;
            goto code_r0x00010152accc;
          }
          FUN_1087e4364(&puStack_d0,&UNK_108ca7b56,0xc);
          goto code_r0x00010152b3fc;
        case 9:
        case 0x21:
        case 0x32:
          puVar35 = puStack_130;
        case 0xf0:
          bVar22 = puVar35 == (undefined8 *)0x8000000000000000;
code_r0x00010152aa30:
          if (!bVar22) {
            FUN_1087e4364(&puStack_d0,&UNK_108cde388,4);
            goto code_r0x00010152b3fc;
          }
          ppuVar32 = &puStack_d0;
code_r0x00010152aa38:
          func_0x00010062760c(ppuVar32,&uStack_290);
code_r0x00010152aa40:
          puVar47 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          puVar46 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
          puVar35 = puStack_d0;
code_r0x00010152aa48:
          puVar36 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uStack_110 = puVar46;
          puStack_108 = puVar47;
code_r0x00010152aa50:
          puStack_100 = puVar36;
code_r0x00010152aa54:
          bVar23 = puVar35 == (undefined8 *)0x2;
code_r0x00010152aa58:
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          if (!bVar23) goto code_r0x00010152aee0;
code_r0x00010152aa60:
          puStack_130 = puVar46;
          puStack_128 = puVar47;
code_r0x00010152aa64:
          puStack_120 = puStack_100;
code_r0x00010152aa6c:
          lVar44 = lStack_268;
          param_2 = lStack_270;
code_r0x00010152aa70:
          lVar1 = lStack_270;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          if (param_2 != lVar44) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 10:
          bVar34 = (byte)uStack_290;
          uStack_290 = CONCAT71(uStack_290._1_7_,0x16);
          if (bVar34 != 0x16) goto code_r0x00010152ac88;
          puVar35 = (undefined8 *)_malloc(0x10);
          if (puVar35 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x10);
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10152b440);
            (*pcVar17)();
          }
          puVar35[1] = 0x676e697373696d20;
          *puVar35 = 0x73692065756c6176;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[4] = 0x10;
          param_1[5] = puVar35;
          param_1[7] = 0;
          param_1[6] = 0x10;
          param_1[8] = 8;
          param_1[1] = 0;
          *param_1 = 0x8000000000000000;
          goto LAB_10152af14;
        case 0xc:
        case 0xfa:
          goto code_r0x00010152aa30;
        case 0xd:
        case 0x30:
        case 0x60:
          goto code_r0x00010152a9f0;
        case 0xe:
          goto code_r0x00010152aa10;
        case 0xf:
        case 0x82:
          goto code_r0x00010152a9c0;
        case 0x10:
          goto code_r0x00010152aa50;
        case 0x11:
          goto code_r0x00010152aa70;
        case 0x12:
          goto code_r0x00010152aa20;
        case 0x13:
        case 0xdc:
          goto code_r0x00010152aaa0;
        case 0x14:
code_r0x00010152a9e0:
          ppuVar32 = &puStack_d0;
          puVar33 = &uStack_290;
code_r0x00010152a9e8:
          func_0x00010062760c(ppuVar32,puVar33);
          puVar35 = puStack_d0;
code_r0x00010152a9f0:
          puVar47 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          puVar46 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
code_r0x00010152a9f4:
          puVar36 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uStack_110 = puVar46;
          puStack_108 = puVar47;
code_r0x00010152a9fc:
          puStack_100 = puVar36;
code_r0x00010152aa00:
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152aa08:
          puStack_1c8 = puStack_108;
          puStack_1d0 = uStack_110;
code_r0x00010152aa10:
          puStack_1c0 = puStack_100;
          bVar21 = lStack_270 == lStack_268;
          lVar44 = lStack_268;
          param_2 = lStack_270;
code_r0x00010152aa20:
joined_r0x00010152ab70:
          lVar1 = lStack_270;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          if (!bVar21) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 0x15:
        case 0x46:
          goto code_r0x00010152aa90;
        case 0x16:
        case 0x28:
          goto code_r0x00010152a9b0;
        case 0x17:
          goto code_r0x00010152a9d0;
        case 0x18:
        case 0x25:
        case 0x3a:
        case 0x74:
          goto code_r0x00010152aa60;
        case 0x19:
        case 0x75:
        case 0x79:
          goto code_r0x00010152a9a0;
        case 0x1a:
        case 0x54:
          goto code_r0x00010152aa00;
        case 0x1b:
          goto code_r0x00010152a990;
        case 0x1c:
        case 0x89:
        case 0xa9:
          goto code_r0x00010152aa40;
        case 0x1f:
        case 0xa0:
        case 0xc0:
code_r0x00010152ab38:
          func_0x00010062760c(ppuVar32,puVar33);
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          bVar26 = puStack_d0 == (undefined8 *)0x2;
          puVar35 = puStack_d0;
code_r0x00010152ab54:
          puVar46 = uStack_110;
          puVar47 = puStack_108;
          if (bVar26) {
code_r0x00010152ab5c:
            puStack_160 = puStack_100;
            puStack_170 = puVar46;
            puStack_168 = puVar47;
code_r0x00010152ab68:
            lVar44 = lStack_268;
            param_2 = lStack_270;
code_r0x00010152ab6c:
            bVar27 = param_2 == lVar44;
code_r0x00010152ab70:
            bVar21 = bVar27;
            goto joined_r0x00010152ab70;
          }
          goto code_r0x00010152aee0;
        case 0x20:
          goto code_r0x00010152ab08;
        case 0x22:
          goto code_r0x00010152aba0;
        case 0x23:
          goto code_r0x00010152aa98;
        case 0x26:
        case 0x4c:
          goto code_r0x00010152ab68;
        case 0x27:
          goto code_r0x00010152a9e8;
        case 0x29:
code_r0x00010152abd8:
          func_0x00010062760c(&puStack_d0,&uStack_290);
code_r0x00010152abe4:
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          puVar35 = puStack_d0;
code_r0x00010152abf8:
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152ac00:
          puVar46 = uStack_110;
          puVar47 = puStack_108;
code_r0x00010152ac04:
          puVar35 = puStack_100;
          puStack_1b0 = puVar46;
          puStack_1a8 = puVar47;
code_r0x00010152ac0c:
          puStack_1a0 = puVar35;
code_r0x00010152ac10:
          param_2 = lStack_270;
          lVar1 = lStack_270;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 0x2a:
          goto code_r0x00010152ac58;
        case 0x2e:
        case 0x8d:
        case 0xad:
          goto code_r0x00010152aa84;
        case 0x34:
          goto code_r0x00010152a9b8;
        case 0x36:
          goto code_r0x00010152aabc;
        case 0x38:
          goto code_r0x00010152aaf4;
        case 0x3c:
        case 0x8c:
        case 0xac:
          goto code_r0x00010152ab54;
        case 0x3e:
        case 0x5d:
        case 0x61:
        case 99:
        case 0x95:
        case 0x97:
        case 0x99:
        case 0x9d:
        case 0xa1:
        case 0xb5:
        case 0xb7:
        case 0xb9:
        case 0xbd:
        case 0xc1:
        case 0xd1:
        case 0xd3:
        case 0xd7:
        case 0xdb:
        case 0xe1:
        case 0xeb:
        case 0xed:
        case 0xef:
        case 0xf1:
        case 0xf3:
        case 0xf5:
        case 0xff:
          goto code_r0x00010152a984;
        case 0x3f:
          goto code_r0x00010152a98c;
        case 0x42:
          goto code_r0x00010152ac40;
        case 0x44:
          goto code_r0x00010152abb0;
        case 0x48:
          goto code_r0x00010152acd0;
        case 0x4a:
          goto code_r0x00010152ab20;
        case 0x50:
code_r0x00010152ac88:
          uVar45 = *puStack_298;
          puStack_2a0[1] = puStack_298[1];
          *puStack_2a0 = uVar45;
          puVar47 = *(undefined8 **)((long)puStack_298 + 0x17);
          puVar46 = *(undefined8 **)((long)puStack_298 + 0xf);
          puVar37 = puStack_2a0;
code_r0x00010152ac98:
          *(undefined8 **)((long)puVar37 + 0x17) = puVar47;
          *(undefined8 **)((long)puVar37 + 0xf) = puVar46;
          puStack_d0 = (undefined8 *)(ulong)bVar34;
          ppuVar32 = &puStack_d0;
code_r0x00010152aca4:
          FUN_100e077ec(ppuVar32);
code_r0x00010152aca8:
          param_2 = lStack_270;
          lVar1 = lStack_270;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 0x52:
        case 0x80:
          goto code_r0x00010152aa48;
        case 0x56:
code_r0x00010152ad18:
          ppuVar32 = (undefined8 **)func_0x000108855b7c(ppuVar32,puVar33);
          puVar33 = extraout_x1_03;
          puVar39 = extraout_x12_03;
          puVar40 = extraout_x13_03;
          puVar42 = extraout_x14_03;
          puVar46 = extraout_d0_03;
          puVar47 = extraout_var_03;
          goto code_r0x00010152ad24;
        case 0x58:
          goto code_r0x00010152abf8;
        case 0x5a:
        case 0xfc:
          goto code_r0x00010152a9c8;
        case 0x5c:
          goto code_r0x00010152a9a8;
        case 0x5e:
          goto code_r0x00010152ad60;
        case 0x62:
          goto code_r0x00010152aa38;
        case 0x67:
        case 0x6b:
        case 0x6f:
        case 0x71:
        case 0x73:
        case 0x7f:
        case 0x83:
          goto code_r0x00010152a99c;
        case 0x68:
          goto LAB_10152ad2c;
        case 0x69:
        case 0x6d:
        case 0x77:
        case 0x7b:
        case 0x7d:
        case 0x81:
        case 0x85:
          goto code_r0x00010152a998;
        case 0x6a:
          goto code_r0x00010152aa54;
        case 0x6c:
          goto code_r0x00010152ab70;
        case 0x6e:
          goto code_r0x00010152ac10;
        case 0x70:
          goto code_r0x00010152ad38;
        case 0x72:
          goto code_r0x00010152aae8;
        case 0x76:
          goto code_r0x00010152ac98;
        case 0x78:
          goto code_r0x00010152a9cc;
        case 0x7a:
          goto code_r0x00010152aadc;
        case 0x7c:
        case 0x9a:
        case 0xba:
        case 0xca:
          goto code_r0x00010152ac04;
        case 0x7e:
          goto code_r0x00010152aca4;
        case 0x84:
          goto code_r0x00010152a9b4;
        case 0x87:
        case 0xa7:
        case 0xde:
          goto code_r0x00010152ab10;
        case 0x88:
        case 0xa8:
          goto code_r0x00010152a9fc;
        case 0x8a:
        case 0xaa:
          goto code_r0x00010152abe4;
        case 0x8b:
        case 0xab:
          goto code_r0x00010152aacc;
        case 0x8e:
        case 0xae:
          goto code_r0x00010152ab9c;
        case 0x8f:
        case 0xaf:
          goto code_r0x00010152a9c4;
        case 0x94:
        case 0xb4:
          goto code_r0x00010152ac0c;
        case 0x96:
        case 0x9e:
        case 0xb6:
        case 0xbe:
          goto code_r0x00010152a9a4;
        case 0x98:
        case 0xa2:
        case 0xb8:
        case 0xc2:
          goto code_r0x00010152aa6c;
        case 0x9c:
        case 0xbc:
          goto code_r0x00010152acd4;
        case 0x9f:
        case 0xa3:
        case 0xbf:
        case 0xc3:
        case 0xfb:
          goto code_r0x00010152a988;
        case 0xa4:
        case 0xc4:
code_r0x00010152accc:
          func_0x00010062760c(ppuVar32,puVar33);
code_r0x00010152acd0:
          puVar35 = puStack_d0;
code_r0x00010152acd4:
          puStack_108 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          uStack_110 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
          puStack_100 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          if (puVar35 != (undefined8 *)0x2) goto code_r0x00010152aee0;
code_r0x00010152acec:
          puStack_148 = puStack_108;
          puStack_150 = uStack_110;
          puStack_140 = puStack_100;
          param_2 = lStack_270;
          lVar1 = lStack_270;
          uVar45 = uStack_258;
          puVar16 = puStack_260;
          lVar44 = lStack_268;
          if (lStack_270 != lStack_268) goto LAB_10152a834;
          goto LAB_10152ad2c;
        case 200:
          goto code_r0x00010152ad24;
        case 0xcc:
          goto code_r0x00010152aca8;
        case 0xd0:
          goto code_r0x00010152a9f4;
        case 0xd2:
          goto code_r0x00010152aab4;
        case 0xd4:
        case 0xfe:
          goto code_r0x00010152acec;
        case 0xd6:
          goto code_r0x00010152ab6c;
        case 0xd8:
          goto code_r0x00010152ab5c;
        case 0xe0:
          goto code_r0x00010152aa64;
        case 0xe2:
          goto code_r0x00010152aa58;
        case 0xe4:
          goto code_r0x00010152ac50;
        case 0xe6:
          goto code_r0x00010152aa08;
        case 0xe8:
          goto code_r0x00010152ad6c;
        case 0xea:
          goto code_r0x00010152aaec;
        case 0xec:
          goto code_r0x00010152ac00;
        case 0xee:
          goto code_r0x00010152a9bc;
        case 0xf2:
          goto code_r0x00010152abc8;
        case 0xf4:
          goto code_r0x00010152ac38;
        case 0xf8:
          goto code_r0x00010152ab94;
        }
        puVar35 = puStack_250;
code_r0x00010152a984:
        bVar18 = puVar35 == (undefined8 *)0x8000000000000000;
code_r0x00010152a988:
        if (bVar18) {
code_r0x00010152a98c:
          ppuVar32 = &puStack_d0;
code_r0x00010152a990:
          func_0x00010062760c(ppuVar32,&uStack_290);
code_r0x00010152a998:
          puVar35 = puStack_d0;
code_r0x00010152a99c:
          puVar47 = (undefined8 *)CONCAT71(uStack_bf,uStack_c0);
          puVar46 = (undefined8 *)CONCAT71(uStack_c7,bStack_c8);
code_r0x00010152a9a0:
          uStack_110 = puVar46;
          puStack_108 = puVar47;
code_r0x00010152a9a4:
          puVar36 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
code_r0x00010152a9a8:
          bVar19 = puVar35 == (undefined8 *)0x2;
          puStack_100 = puVar36;
code_r0x00010152a9b0:
          if (bVar19) {
code_r0x00010152a9b4:
            puVar46 = uStack_110;
            puVar47 = puStack_108;
code_r0x00010152a9b8:
            puStack_250 = puVar46;
            puStack_248 = puVar47;
code_r0x00010152a9bc:
            puVar35 = puStack_100;
code_r0x00010152a9c0:
            puStack_240 = puVar35;
code_r0x00010152a9c4:
            lVar44 = lStack_268;
            param_2 = lStack_270;
code_r0x00010152a9c8:
            bVar20 = param_2 == lVar44;
code_r0x00010152a9cc:
            uVar45 = uStack_258;
            puVar16 = puStack_260;
            if (bVar20) {
code_r0x00010152a9d0:
              lVar1 = lStack_270;
              break;
            }
            goto LAB_10152a834;
          }
code_r0x00010152aee0:
          param_1[6] = CONCAT71(uStack_a7,uStack_a8);
          param_1[5] = CONCAT71(uStack_af,uStack_b0);
          param_1[8] = CONCAT71(uStack_97,uStack_98);
          param_1[7] = CONCAT71(uStack_9f,uStack_a0);
          param_1[10] = CONCAT71(uStack_87,uStack_88);
          param_1[9] = CONCAT71(uStack_8f,uStack_90);
          param_1[0xb] = uStack_80;
          param_1[3] = puStack_108;
          param_1[2] = uStack_110;
          param_1[4] = puStack_100;
          *param_1 = 0x8000000000000000;
          param_1[1] = puVar35;
        }
        else {
          FUN_1087e4364(&puStack_d0,&UNK_108cabf2f,10);
code_r0x00010152b3fc:
          param_1[6] = CONCAT71(uStack_a7,uStack_a8);
          param_1[5] = CONCAT71(uStack_af,uStack_b0);
          param_1[8] = CONCAT71(uStack_97,uStack_98);
          param_1[7] = CONCAT71(uStack_9f,uStack_a0);
          param_1[10] = CONCAT71(uStack_87,uStack_88);
          param_1[9] = CONCAT71(uStack_8f,uStack_90);
          param_1[0xb] = uStack_80;
          param_1[2] = CONCAT71(uStack_c7,bStack_c8);
          param_1[1] = puStack_d0;
          param_1[4] = CONCAT71(uStack_b7,uStack_b8);
          param_1[3] = CONCAT71(uStack_bf,uStack_c0);
          *param_1 = 0x8000000000000000;
        }
LAB_10152af14:
        puVar39 = puStack_128;
        puVar33 = puStack_130;
        puVar35 = puStack_128;
        puVar38 = puStack_120;
        if (puStack_130 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_148;
        puVar33 = puStack_150;
        puVar35 = puStack_148;
        puVar38 = puStack_140;
        if (puStack_150 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_168;
        puVar33 = puStack_170;
        puVar35 = puStack_168;
        puVar38 = puStack_160;
        if (puStack_170 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_188;
        puVar33 = puStack_190;
        puVar35 = puStack_188;
        puVar38 = puStack_180;
        if (puStack_190 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_1a8;
        puVar33 = puStack_1b0;
        puVar35 = puStack_1a8;
        puVar38 = puStack_1a0;
        if (puStack_1b0 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_1c8;
        puVar33 = puStack_1d0;
        puVar35 = puStack_1c8;
        puVar38 = puStack_1c0;
        if (puStack_1d0 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_1e8;
        puVar33 = puStack_1f0;
        puVar35 = puStack_1e8;
        puVar38 = puStack_1e0;
        if (puStack_1f0 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_208;
        puVar33 = puStack_210;
        puVar35 = puStack_208;
        puVar38 = puStack_200;
        if (puStack_210 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_228;
        puVar33 = puStack_230;
        puVar35 = puStack_228;
        puVar38 = puStack_220;
        if (puStack_230 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        puVar39 = puStack_248;
        puVar33 = puStack_250;
        puVar35 = puStack_248;
        puVar38 = puStack_240;
        if (puStack_250 != (undefined8 *)0x8000000000000000) {
          for (; puVar38 != (undefined8 *)0x0; puVar38 = (undefined8 *)((long)puVar38 + -1)) {
            if (puVar35[3] != -0x8000000000000000 && puVar35[3] != 0) {
              _free(puVar35[4]);
            }
            FUN_100cd109c(puVar35);
            puVar35 = puVar35 + 6;
          }
          if (puVar33 != (undefined8 *)0x0) {
            _free(puVar39);
          }
        }
        goto LAB_10152ae74;
      }
      param_2 = lVar1;
    } while (lVar1 != lVar44);
  }
LAB_10152ad2c:
  lStack_270 = lVar1;
  bVar30 = puStack_250 == (undefined8 *)0x8000000000000000;
  puVar35 = puStack_240;
  puVar36 = puStack_248;
  puVar38 = puStack_250;
code_r0x00010152ad38:
  puStack_298 = (undefined8 *)0x0;
  if (!bVar30) {
    puStack_298 = puVar35;
  }
  puVar37 = (undefined8 *)0x8;
  puStack_2a0 = (undefined8 *)0x8;
  if (!bVar30) {
    puStack_2a0 = puVar36;
  }
  puStack_2a8 = (undefined8 *)0x0;
  if (!bVar30) {
    puStack_2a8 = puVar38;
  }
  bVar31 = puStack_230 == (undefined8 *)0x8000000000000000;
  puVar39 = puStack_220;
  puVar40 = puStack_228;
  puVar42 = puStack_230;
code_r0x00010152ad60:
  puVar41 = puVar37;
  puVar35 = (undefined8 *)0x0;
  if (!bVar31) {
    puVar41 = puVar40;
    puVar35 = puVar39;
  }
  puVar39 = puVar35;
  puVar43 = (undefined8 *)0x0;
  if (!bVar31) {
    puVar43 = puVar42;
  }
code_r0x00010152ad6c:
  puVar35 = puVar37;
  puVar38 = (undefined8 *)0x0;
  if (puStack_210 != (undefined8 *)0x8000000000000000) {
    puVar35 = puStack_208;
    puVar38 = puStack_200;
  }
  puVar33 = (undefined8 *)0x0;
  if (puStack_210 != (undefined8 *)0x8000000000000000) {
    puVar33 = puStack_210;
  }
  puVar46 = puVar37;
  puVar47 = (undefined8 *)0x0;
  if (puStack_1f0 != (undefined8 *)0x8000000000000000) {
    puVar46 = puStack_1e8;
    puVar47 = puStack_1e0;
  }
  puVar40 = (undefined8 *)0x0;
  if (puStack_1f0 != (undefined8 *)0x8000000000000000) {
    puVar40 = puStack_1f0;
  }
  puVar42 = puVar37;
  puVar36 = (undefined8 *)0x0;
  if (puStack_1d0 != (undefined8 *)0x8000000000000000) {
    puVar42 = puStack_1c8;
    puVar36 = puStack_1c0;
  }
  puVar2 = (undefined8 *)0x0;
  if (puStack_1d0 != (undefined8 *)0x8000000000000000) {
    puVar2 = puStack_1d0;
  }
  puVar3 = puVar37;
  puVar11 = (undefined8 *)0x0;
  if (puStack_1b0 != (undefined8 *)0x8000000000000000) {
    puVar3 = puStack_1a8;
    puVar11 = puStack_1a0;
  }
  puVar4 = (undefined8 *)0x0;
  if (puStack_1b0 != (undefined8 *)0x8000000000000000) {
    puVar4 = puStack_1b0;
  }
  puVar5 = puVar37;
  puVar12 = (undefined8 *)0x0;
  if (puStack_190 != (undefined8 *)0x8000000000000000) {
    puVar5 = puStack_188;
    puVar12 = puStack_180;
  }
  puVar6 = (undefined8 *)0x0;
  if (puStack_190 != (undefined8 *)0x8000000000000000) {
    puVar6 = puStack_190;
  }
  puVar7 = puVar37;
  puVar13 = (undefined8 *)0x0;
  if (puStack_170 != (undefined8 *)0x8000000000000000) {
    puVar7 = puStack_168;
    puVar13 = puStack_160;
  }
  puVar8 = (undefined8 *)0x0;
  if (puStack_170 != (undefined8 *)0x8000000000000000) {
    puVar8 = puStack_170;
  }
  puVar9 = puVar37;
  puVar14 = (undefined8 *)0x0;
  if (puStack_150 != (undefined8 *)0x8000000000000000) {
    puVar9 = puStack_148;
    puVar14 = puStack_140;
  }
  puVar10 = (undefined8 *)0x0;
  if (puStack_150 != (undefined8 *)0x8000000000000000) {
    puVar10 = puStack_150;
  }
  puVar15 = (undefined8 *)0x0;
  if (puStack_130 != (undefined8 *)0x8000000000000000) {
    puVar37 = puStack_128;
    puVar15 = puStack_130;
  }
  *param_1 = puStack_2a8;
  param_1[1] = puStack_2a0;
  param_1[2] = puStack_298;
  param_1[3] = puVar43;
  param_1[4] = puVar41;
  param_1[5] = puVar39;
  param_1[6] = puVar33;
  param_1[7] = puVar35;
  param_1[8] = puVar38;
  param_1[9] = puVar40;
  param_1[10] = puVar46;
  param_1[0xb] = puVar47;
  param_1[0xc] = puVar2;
  param_1[0xd] = puVar42;
  param_1[0xe] = puVar36;
  param_1[0xf] = puVar4;
  param_1[0x10] = puVar3;
  param_1[0x11] = puVar11;
  param_1[0x12] = puVar6;
  param_1[0x13] = puVar5;
  param_1[0x14] = puVar12;
  param_1[0x15] = puVar8;
  param_1[0x16] = puVar7;
  param_1[0x17] = puVar13;
  param_1[0x18] = puVar10;
  param_1[0x19] = puVar9;
  param_1[0x1a] = puVar14;
  param_1[0x1b] = puVar15;
  puVar35 = (undefined8 *)0x0;
  if (puStack_130 != (undefined8 *)0x8000000000000000) {
    puVar35 = puStack_120;
  }
  param_1[0x1c] = puVar37;
  param_1[0x1d] = puVar35;
LAB_10152ae74:
  if ((byte)uStack_290 != '\x16') {
    FUN_100e077ec(&uStack_290);
  }
  return;
code_r0x00010152ad24:
  goto LAB_10152a958;
}

