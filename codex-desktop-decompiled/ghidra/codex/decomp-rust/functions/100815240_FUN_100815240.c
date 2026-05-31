
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100815240(long param_1,undefined8 param_2,undefined8 param_3,char ***param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char **ppcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  char **extraout_x1;
  char **ppcVar16;
  char **ppcVar17;
  char **extraout_x8;
  code *pcVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined2 uStack_208;
  undefined1 uStack_206;
  char **ppcStack_200;
  char ***pppcStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined1 uStack_1e6;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_161 [17];
  long lStack_e8;
  char **ppcStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  char **ppcStack_c8;
  char *****pppppcStack_c0;
  undefined *puStack_b8;
  char **ppcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char **ppcStack_98;
  ulong *****pppppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong ****ppppuStack_78;
  char ****ppppcStack_70;
  ulong ***pppuStack_68;
  char ***pppcStack_60;
  ulong **ppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_1 + 0xc1) = 0;
  lVar20 = *(long *)(param_1 + 0xa8);
  lVar13 = *(long *)(param_1 + 0xb0);
  if ((ulong)(lVar13 - lVar20) < *(ulong *)(param_1 + 0x68)) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
              (param_1 + 0xa0,*(ulong *)(param_1 + 0x68),1);
    lVar20 = *(long *)(param_1 + 0xa8);
    lVar13 = *(long *)(param_1 + 0xb0);
  }
  if (lVar13 == lVar20) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(param_1 + 0xa0,0x40,1);
    lVar20 = *(long *)(param_1 + 0xa8);
    lVar13 = *(long *)(param_1 + 0xb0);
  }
  lStack_e8 = *(long *)(param_1 + 0xa0) + lVar20;
  ppcStack_e0 = (char **)(lVar13 - lVar20);
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = 0;
  auVar29 = FUN_10150a63c(param_1 + 0x78,param_2,&lStack_e8);
  ppcVar16 = ppcStack_d8;
  if ((auVar29._0_8_ & 1) != 0) {
    *(undefined1 *)(param_1 + 0xc1) = 1;
    return 2;
  }
  if (auVar29._8_8_ != 0) {
    return 1;
  }
  ppcVar17 = ppcStack_e0;
  if (ppcStack_e0 < ppcStack_d8) {
    param_4 = (char ***)&UNK_10b209248;
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0);
    ppcVar16 = extraout_x1;
    pppppuStack_90 = (ulong *****)extraout_x8;
  }
  else {
    ppcStack_c8 = ppcStack_d8;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar11 = bRam000000010b6372f0, bRam000000010b6372f0 - 1 < 2 ||
         ((bRam000000010b6372f0 != 0 &&
          (bVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                              ), bVar11 != 0)))) &&
        (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                             ,bVar11), iVar12 != 0)))) {
      lStack_80 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                  + 0x30;
      pppuStack_68 = (ulong ***)&ppcStack_c8;
      pppcStack_60 = (char ***)
                     &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppcStack_70 = (char ****)&pppuStack_68;
      ppppuStack_78 = (ulong ****)s_received_bytes_108ac89ff;
      pppppcStack_c0 = (char *****)&ppppuStack_78;
      puStack_b8 = &UNK_10b208fd0;
      pppppuStack_90 = (ulong *****)&pppppcStack_c0;
      ppcStack_98 = (char **)0x1;
      uStack_88 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                 ,&ppcStack_98);
      lVar20 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_50 = *(undefined **)
                      (
                      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x20);
        uStack_48 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x28);
        ppuStack_58 = (ulong **)0x5;
        ppcVar3 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppcVar3 = (char **)&UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar12 = (*(code *)ppcVar3[3])(puVar23,&ppuStack_58);
        if (iVar12 != 0) {
          param_4 = (char ***)&ppuStack_58;
          ppcVar17 = ppcVar3;
LAB_1008153e8:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar20,puVar23,ppcVar17,param_4,&ppcStack_98);
        }
      }
    }
    else {
      lVar20 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_a8 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x20);
        uStack_a0 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x28);
        ppcStack_b0 = (char **)0x5;
        ppcVar3 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppcVar3 = (char **)&UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar12 = (*(code *)ppcVar3[3])(puVar23,&ppcStack_b0);
        if (iVar12 != 0) {
          lStack_80 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x30;
          ppuStack_58 = (ulong **)&ppcStack_c8;
          puStack_50 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_60 = (char ***)&ppuStack_58;
          pppuStack_68 = (ulong ***)s_received_bytes_108ac89ff;
          ppppuStack_78 = &pppuStack_68;
          ppppcStack_70 = (char ****)&UNK_10b208fd0;
          pppppuStack_90 = &ppppuStack_78;
          ppcStack_98 = (char **)0x1;
          uStack_88 = 1;
          param_4 = &ppcStack_b0;
          ppcVar17 = ppcVar3;
          goto LAB_1008153e8;
        }
      }
    }
    pppppuStack_90 = (ulong *****)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8));
    if (ppcVar16 <= pppppuStack_90) {
      *(undefined **)(param_1 + 0xa8) = (undefined *)((long)ppcVar16 + *(long *)(param_1 + 0xa8));
      if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
        return 0;
      }
      ppcVar17 = *(char ***)(param_1 + 0x68);
      if (ppcVar16 < ppcVar17) {
        ppcVar17 = (char **)((0xffffffffffffffffU >> ((ulong)((int)LZCOUNT(ppcVar17) + 2) & 0x3f)) +
                            1);
        if (ppcVar17 <= ppcVar16) goto LAB_100815590;
        if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          return 0;
        }
        if (ppcVar17 < (char **)0x2001) {
          ppcVar17 = (char **)0x2000;
        }
      }
      else {
        ppcVar16 = (char **)0xffffffffffffffff;
        if (((ulong)ppcVar17 & 0x8000000000000000) == 0) {
          ppcVar16 = (char **)((long)ppcVar17 << 1);
        }
        ppcVar17 = *(char ***)(param_1 + 0x70);
        if (ppcVar16 <= *(char ***)(param_1 + 0x70)) {
          ppcVar17 = ppcVar16;
        }
      }
      *(char ***)(param_1 + 0x68) = ppcVar17;
LAB_100815590:
      *(undefined1 *)(param_1 + 0x61) = 0;
      return 0;
    }
  }
  ppcStack_98 = ppcVar16;
  auVar29 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&ppcStack_98);
  puVar25 = auVar29._8_8_;
  lVar20 = auVar29._0_8_;
  if (*(char *)(lVar20 + 0x1bf) == '\x02') {
    if (*(char *)(lVar20 + 0x1be) == '\x02') {
      uStack_1a8 = 0x14;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      puStack_190 = &UNK_10b209220;
      puStack_188 = &UNK_108caac8e;
      uStack_178 = 0;
      uStack_180 = 5;
      uStack_170 = 0;
      FUN_100ea1868(&puStack_270,puVar25,&uStack_1b0,&puStack_190);
      if ((char)uStack_250 == '\x03') {
LAB_100815b90:
        FUN_107c05cb4(&UNK_108caab02,0x17,auStack_161,&UNK_10b234e80,&UNK_10b223528);
        goto LAB_100815bb4;
      }
      puStack_1d8 = puStack_268;
      puStack_1e0 = puStack_270;
      uStack_1c8 = uStack_258;
      uStack_1d0 = uStack_260;
      uStack_1c0 = uStack_250;
      if (((uint)uStack_250 & 0xff) != 2) {
        (**(code **)(puStack_270 + 0x20))(&uStack_1c8,puStack_268,uStack_260);
      }
    }
  }
  else if (*(char *)(lVar20 + 0x1bf) == '\x01') {
    puStack_268 = (undefined *)0x14;
    puStack_270 = (undefined *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    lVar13 = FUN_100ea2edc(puVar25,&puStack_270);
    if ((lVar13 == 0) ||
       (uVar14 = __ZN14rama_http_core7headers21connection_keep_alive17h785ae4f9267edc20E(),
       (uVar14 & 1) == 0)) {
      if (*(char *)((long)puVar25 + 0x7a) == '\x02') {
        if (*(char *)(lVar20 + 0x1be) != '\x02') {
          uStack_1a8 = 0x14;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          puStack_190 = &UNK_10b209220;
          puStack_188 = &UNK_108cb0cad;
          uStack_178 = 0;
          uStack_180 = 10;
          uStack_170 = 0;
          FUN_100ea1868(&puStack_270,puVar25,&uStack_1b0,&puStack_190);
          if ((char)uStack_250 == '\x03') goto LAB_100815b90;
          puStack_1d8 = puStack_268;
          puStack_1e0 = puStack_270;
          uStack_1c8 = uStack_258;
          uStack_1d0 = uStack_260;
          uStack_1c0 = uStack_250;
          if (((uint)uStack_250 & 0xff) != 2) {
            (**(code **)(puStack_270 + 0x20))(&uStack_1c8,puStack_268,uStack_260);
          }
        }
      }
      else if (*(char *)((long)puVar25 + 0x7a) == '\x01') {
        *(undefined1 *)(lVar20 + 0x1be) = 2;
      }
    }
    *(undefined1 *)((long)puVar25 + 0x7a) = 1;
  }
  uStack_206 = *(undefined1 *)((long)puVar25 + 0x7a);
  uStack_208 = *(undefined2 *)(puVar25 + 0xf);
  uStack_248 = puVar25[5];
  uStack_250 = puVar25[4];
  uStack_238 = puVar25[7];
  uStack_240 = puVar25[6];
  uStack_228 = puVar25[9];
  uStack_230 = puVar25[8];
  uStack_218 = puVar25[0xb];
  uStack_220 = puVar25[10];
  puStack_268 = (undefined *)puVar25[1];
  puStack_270 = (undefined *)*puVar25;
  uStack_258 = puVar25[3];
  uStack_260 = puVar25[2];
  puVar2 = puVar25 + 0xc;
  uStack_1e8 = *(char *)(lVar20 + 0x1be) != '\x02';
  lStack_1f0 = lVar20 + 0x178;
  uStack_1e7 = *(undefined1 *)(lVar20 + 0x1ba);
  uStack_1e6 = *(undefined1 *)(lVar20 + 0x1b9);
  puStack_210 = puVar2;
  ppcStack_200 = ppcVar17;
  pppcStack_1f8 = param_4;
  lVar13 = FUN_10081ca84(&puStack_190,&puStack_270,lVar20 + 0x10);
  puVar23 = puStack_188;
  if (puStack_190 == (undefined *)0x8000000000000003) {
    plVar24 = *(long **)(lVar20 + 400);
    if (plVar24 != (long *)0x0) {
      lVar13 = *plVar24;
      if (lVar13 != 0) {
        puVar25 = (undefined8 *)plVar24[1];
        pcVar18 = (code *)*puVar25;
        if (pcVar18 != (code *)0x0) {
          (*pcVar18)(lVar13);
        }
        if (puVar25[1] != 0) {
          _free(lVar13);
        }
      }
      _free(plVar24);
    }
    *(undefined **)(lVar20 + 400) = puVar23;
    uVar14 = *(ulong *)(lVar20 + 0x148);
    if (uVar14 < 0x8000000000000003) {
      uVar26 = uVar14;
      if (uVar14 < 0x8000000000000001) {
        uVar26 = 0;
      }
      if (((uVar26 & 0x7fffffffffffffff) == 0) && (uVar14 != 0x8000000000000000)) {
        lVar21 = *(long *)(lVar20 + 0x150);
        lVar13 = *(long *)(lVar20 + 0x158) + 1;
        lVar22 = lVar21 + 0x18;
        while (lVar13 = lVar13 + -1, lVar13 != 0) {
          (**(code **)(*(long *)(lVar22 + -0x18) + 0x20))
                    (lVar22,*(undefined8 *)(lVar22 + -0x10),*(undefined8 *)(lVar22 + -8));
          lVar22 = lVar22 + 0x28;
        }
        if (uVar14 != 0) {
          _free(lVar21);
        }
      }
    }
    *(undefined8 *)(lVar20 + 0x148) = 0x8000000000000006;
    lVar13 = func_0x000100e3c8d4(puVar2);
  }
  else {
    puStack_268 = puStack_188;
    puStack_270 = puStack_190;
    uStack_258 = uStack_178;
    uStack_260 = uStack_180;
    lVar22 = puVar25[0xd] + puVar25[0xe] * 0x20;
    lVar21 = puVar25[0xe] * -0x20;
    uVar27 = 0;
    uVar28 = 0;
    plVar24 = (long *)(lVar22 + 8);
    do {
      plVar19 = plVar24;
      if (lVar21 == 0) goto LAB_10081598c;
      plVar1 = (long *)(lVar22 + -0x10);
      plVar7 = (long *)(lVar22 + -8);
      lVar22 = lVar22 + -0x20;
      plVar24 = plVar19 + -4;
      lVar21 = lVar21 + 0x20;
    } while (*plVar7 != 0x31f88567a83b579f || *plVar1 != 0x4ae2d8bd8b83c780);
    auVar29 = (**(code **)(*plVar24 + 0x38))(plVar19[-5]);
    puVar15 = auVar29._0_8_;
    lVar13 = (**(code **)(auVar29._8_8_ + 0x18))(&puStack_1e0);
    uVar27 = 0;
    uVar28 = 0;
    if ((puVar15 != (undefined8 *)0x0) &&
       (puStack_1d8 == (undefined *)0x31f88567a83b579f &&
        puStack_1e0 == (undefined *)0x4ae2d8bd8b83c780)) {
      lVar21 = *(long *)*puVar15;
      *(long *)*puVar15 = lVar21 + 1;
      if (lVar21 < 0) {
LAB_100815bb4:
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100815bb8);
        (*pcVar18)();
      }
      uVar28 = puVar15[1];
      uVar27 = *puVar15;
    }
LAB_10081598c:
    plVar24 = *(long **)(lVar20 + 0x1a0);
    if (plVar24 != (long *)0x0) {
      lVar21 = *plVar24;
      *plVar24 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        lVar13 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(lVar20 + 0x1a0);
      }
    }
    *(undefined8 *)(lVar20 + 0x1a8) = uVar28;
    *(undefined8 *)(lVar20 + 0x1a0) = uVar27;
    puStack_1d8 = (undefined *)puVar25[0xd];
    puStack_1e0 = (undefined *)*puVar2;
    uStack_1d0 = puVar25[0xe];
    if (*(long *)(lVar20 + 0x130) != -0x8000000000000000) {
      lVar13 = func_0x000100e3c8d4(lVar20 + 0x130);
    }
    uVar14 = uStack_258;
    uVar27 = uStack_260;
    puVar8 = puStack_268;
    puVar23 = puStack_270;
    *(undefined **)(lVar20 + 0x138) = puStack_1d8;
    *(undefined **)(lVar20 + 0x130) = puStack_1e0;
    *(undefined8 *)(lVar20 + 0x140) = uStack_1d0;
    uVar9 = (undefined1)uStack_258;
    uVar10 = uStack_258._1_4_;
    if (puStack_270 != (undefined *)0x8000000000000003) {
      puVar4 = puStack_270;
      if (puStack_270 < (undefined *)0x8000000000000001) {
        puVar4 = (undefined *)0x0;
      }
      if ((((ulong)puVar4 & 0x7fffffffffffffff) == 1) && (puStack_268 == (undefined *)0x0)) {
        lVar21 = 1;
        if ((uStack_258 & 1) != 0) {
          lVar21 = 2;
        }
        uVar14 = *(ulong *)(lVar20 + 0x148);
        if (uVar14 < 0x8000000000000003) {
          uVar26 = uVar14;
          if (uVar14 < 0x8000000000000001) {
            uVar26 = 0;
          }
          if (((uVar26 & 0x7fffffffffffffff) == 0) && (uVar14 != 0x8000000000000000)) {
            lVar6 = *(long *)(lVar20 + 0x150);
            lVar22 = *(long *)(lVar20 + 0x158) + 1;
            lVar13 = lVar6 + 0x18;
            while (lVar22 = lVar22 + -1, lVar22 != 0) {
              (**(code **)(*(long *)(lVar13 + -0x18) + 0x20))
                        (lVar13,*(undefined8 *)(lVar13 + -0x10),*(undefined8 *)(lVar13 + -8));
              lVar13 = lVar13 + 0x28;
            }
            if (uVar14 != 0) {
              lVar13 = _free(lVar6);
            }
          }
        }
        *(long *)(lVar20 + 0x148) = lVar21 + -0x7ffffffffffffffc;
      }
      else {
        uVar26 = *(ulong *)(lVar20 + 0x148);
        if (uVar26 < 0x8000000000000003) {
          uVar5 = uVar26;
          if (uVar26 < 0x8000000000000001) {
            uVar5 = 0;
          }
          if (((uVar5 & 0x7fffffffffffffff) == 0) && (uVar26 != 0x8000000000000000)) {
            lVar22 = *(long *)(lVar20 + 0x150);
            lVar21 = *(long *)(lVar20 + 0x158) + 1;
            lVar13 = lVar22 + 0x18;
            while (lVar21 = lVar21 + -1, lVar21 != 0) {
              (**(code **)(*(long *)(lVar13 + -0x18) + 0x20))
                        (lVar13,*(undefined8 *)(lVar13 + -0x10),*(undefined8 *)(lVar13 + -8));
              lVar13 = lVar13 + 0x28;
            }
            if (uVar26 != 0) {
              lVar13 = _free(lVar22);
            }
          }
        }
        *(undefined **)(lVar20 + 0x148) = puVar23;
        *(undefined **)(lVar20 + 0x150) = puVar8;
        *(undefined8 *)(lVar20 + 0x158) = uVar27;
        *(undefined1 *)(lVar20 + 0x160) = uVar9;
        *(int *)(lVar20 + 0x164) = (int)(uVar14 >> 0x20);
        *(undefined4 *)(lVar20 + 0x161) = uVar10;
      }
    }
  }
  return lVar13;
}

