
/* WARNING: Removing unreachable block (ram,0x00010085e810) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000490 : 0x00010086183c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_10085e924(void)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  long lVar21;
  code *pcVar22;
  code *pcVar23;
  ulong uVar24;
  uint uVar25;
  byte bVar26;
  byte *pbVar27;
  uint uVar28;
  long unaff_x19;
  bool bVar29;
  undefined1 *puVar30;
  code *pcVar31;
  undefined8 *puVar32;
  long *plVar33;
  long *plVar34;
  long unaff_x24;
  code *pcVar35;
  long lVar36;
  long *plVar37;
  undefined1 *unaff_x27;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  code *in_stack_00000080;
  code *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  code *in_stack_00000480;
  code *in_stack_00000488;
  code *in_stack_00000490;
  code *in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  long *in_stack_00000588;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  long *in_stack_00000c98;
  
  auVar40._8_8_ = in_stack_00000488;
  auVar40._0_8_ = in_stack_00000480;
  auVar41._8_8_ = in_stack_00000488;
  auVar41._0_8_ = in_stack_00000480;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000008a0,s_Ollama___is_too_old__Codex_requi_108ac5ef5,&stack0x00000b90);
  puVar12 = (undefined8 *)_malloc(0x18);
  if (puVar12 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_100861774;
  }
  *puVar12 = in_stack_000008a0;
  puVar12[1] = in_stack_000008a8;
  puVar12[2] = in_stack_000008b0;
  pcVar13 = (code *)func_0x000106029c30(0x28,puVar12,&UNK_10b209118);
  __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
            (&stack0x00000480);
  __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
            (&stack0x00000488);
  __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
            (&stack0x00000080);
  __ZN72__LT_semver__identifier__Identifier_u20_as_u20_core__ops__drop__Drop_GT_4drop17h5a09dfb6eaca4355E
            (unaff_x24 + 8);
  lVar7 = **(long **)(unaff_x19 + 0x50);
  **(long **)(unaff_x19 + 0x50) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x40));
  }
  *unaff_x27 = 1;
  FUN_100e68d90();
  if (pcVar13 == (code *)0x0) {
    plVar37 = (long *)(unaff_x19 + 0x28);
    *plVar37 = *(long *)(unaff_x19 + 0x18);
    puVar19 = (undefined1 *)(unaff_x19 + 0x80);
    *puVar19 = 0;
    lVar7 = *plVar37;
    if (*(long *)(lVar7 + 0x1ea0) == -0x8000000000000000) {
      puVar20 = &UNK_108cac99e;
      uVar15 = 0xb;
    }
    else {
      puVar20 = *(undefined **)(lVar7 + 0x1ea8);
      uVar15 = *(undefined8 *)(lVar7 + 0x1eb0);
    }
    puVar30 = (undefined1 *)(unaff_x19 + 0xf0);
    *puVar30 = 0;
    *(undefined **)(unaff_x19 + 0x30) = puVar20;
    *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
    *(long *)(unaff_x19 + 0x88) = lVar7;
    if (*(long *)(lVar7 + 0x24c8) != 0) {
      uVar10 = FUN_100e8e738(*(undefined8 *)(lVar7 + 0x24d0),*(undefined8 *)(lVar7 + 0x24d8),
                             &UNK_108ca754e,6);
      lVar21 = 0;
      uVar24 = *(ulong *)(lVar7 + 0x24b8);
      lVar7 = *(long *)(lVar7 + 0x24b0);
      bVar26 = (byte)(uVar10 >> 0x39);
      uVar10 = uVar10 & uVar24;
      uVar15 = *(undefined8 *)(lVar7 + uVar10);
      uVar11 = CONCAT17(-((byte)((ulong)uVar15 >> 0x38) == bVar26),
                        CONCAT16(-((byte)((ulong)uVar15 >> 0x30) == bVar26),
                                 CONCAT15(-((byte)((ulong)uVar15 >> 0x28) == bVar26),
                                          CONCAT14(-((byte)((ulong)uVar15 >> 0x20) == bVar26),
                                                   CONCAT13(-((byte)((ulong)uVar15 >> 0x18) ==
                                                             bVar26),CONCAT12(-((byte)((ulong)uVar15
                                                                                      >> 0x10) ==
                                                                               bVar26),CONCAT11(-((
                                                  byte)((ulong)uVar15 >> 8) == bVar26),
                                                  -((byte)uVar15 == bVar26)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
          uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          lVar36 = lVar7 + (uVar10 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar24)
                           * -0x1f0;
          if ((*(long *)(lVar36 + -0x1e0) == 6) &&
             (**(int **)(lVar36 + -0x1e8) == 0x616c6c6f &&
              (short)(*(int **)(lVar36 + -0x1e8))[1] == 0x616d)) {
            *(long *)(unaff_x19 + 0xe0) = lVar36 + -0x1d8;
            *(undefined1 *)(unaff_x19 + 0xe9) = 0;
            FUN_10074b8ec(&stack0x00000480,unaff_x19 + 0x90);
            if (in_stack_00000480 == (code *)0x8000000000000001) {
              uVar18 = 3;
              *puVar30 = 3;
              goto LAB_10086154c;
            }
            in_stack_00000080 = in_stack_00000490;
            in_stack_00000088 = in_stack_00000498;
            in_stack_00000090 = in_stack_000004a0;
            func_0x000100ca74dc(unaff_x19 + 0x90);
            *puVar30 = 1;
            if (in_stack_00000480 == (code *)0x8000000000000000) goto LAB_10085d380;
            *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000480;
            *(code **)(unaff_x19 + 0x48) = in_stack_00000488;
            *(code **)(unaff_x19 + 0x58) = in_stack_00000088;
            *(code **)(unaff_x19 + 0x50) = in_stack_00000080;
            *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000090;
            *(undefined8 **)(unaff_x19 + 0x88) = (undefined8 *)(unaff_x19 + 0x40);
            *(undefined1 *)(unaff_x19 + 0x91) = 0;
            *(undefined1 *)(unaff_x19 + 0x90) = 0;
            lVar21 = *(long *)(unaff_x19 + 0x88);
            lVar7 = *(long *)(lVar21 + 0x10);
            goto LAB_10085e0dc;
          }
        }
        bVar38 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar15 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar15 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar15 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar15 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar15
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar15 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) == -1),
                                                           -((char)uVar15 == -1)))))))),1);
        if ((bVar38 & 1) != 0) break;
        lVar21 = lVar21 + 8;
        uVar10 = uVar10 + lVar21 & uVar24;
        uVar15 = *(undefined8 *)(lVar7 + uVar10);
        uVar11 = CONCAT17(-((byte)((ulong)uVar15 >> 0x38) == bVar26),
                          CONCAT16(-((byte)((ulong)uVar15 >> 0x30) == bVar26),
                                   CONCAT15(-((byte)((ulong)uVar15 >> 0x28) == bVar26),
                                            CONCAT14(-((byte)((ulong)uVar15 >> 0x20) == bVar26),
                                                     CONCAT13(-((byte)((ulong)uVar15 >> 0x18) ==
                                                               bVar26),CONCAT12(-((byte)((ulong)
                                                  uVar15 >> 0x10) == bVar26),
                                                  CONCAT11(-((byte)((ulong)uVar15 >> 8) == bVar26),
                                                           -((byte)uVar15 == bVar26)))))))) &
                 0x8080808080808080;
      }
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000480,s_Built_in_provider_not_found_108ac6058,&stack0x000008a0);
    in_stack_00000488 = (code *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0,&stack0x00000480);
    *puVar30 = 1;
    auVar40 = auVar41;
LAB_10085d380:
    *puVar19 = 1;
    goto LAB_10086155c;
  }
  goto LAB_10086161c;
  while( true ) {
    lVar7 = *(long *)(lVar21 + 8) + lVar7;
    pbVar27 = (byte *)(lVar7 + -1);
    uVar25 = (uint)(char)*pbVar27;
    if ((int)uVar25 < 0) {
      pbVar27 = (byte *)(lVar7 + -2);
      bVar26 = *pbVar27;
      if ((char)bVar26 < -0x40) {
        pbVar27 = (byte *)(lVar7 + -3);
        bVar38 = *pbVar27;
        if ((char)bVar38 < -0x40) {
          pbVar27 = (byte *)(lVar7 + -4);
          uVar28 = bVar38 & 0x3f | (*pbVar27 & 7) << 6;
        }
        else {
          uVar28 = (int)(char)bVar38 & 0xf;
        }
        uVar28 = bVar26 & 0x3f | uVar28 << 6;
      }
      else {
        uVar28 = (int)(char)bVar26 & 0x1f;
      }
      uVar25 = uVar25 & 0x3f | uVar28 << 6;
    }
    lVar7 = (long)pbVar27 - *(long *)(lVar21 + 8);
    if (uVar25 != 0x2f) break;
LAB_10085e0dc:
    if (lVar7 == 0) break;
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000480,s__api_tags_108ac5f2f,&stack0x00000b90);
  FUN_1011d5524(&stack0x00000480,*(undefined8 *)(lVar21 + 0x18),&UNK_108ca1660,&stack0x00000990);
  if (in_stack_00000480 == (code *)0x2) {
    puVar20 = (undefined *)0x1;
    pcVar13 = in_stack_00000488;
  }
  else {
    auVar40 = FUN_105c4eee0(in_stack_00000588,&stack0x00000480);
    pcVar13 = auVar40._8_8_;
    puVar20 = auVar40._0_8_;
  }
  lVar7 = *in_stack_00000588;
  *in_stack_00000588 = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000588);
  }
  *(undefined **)(unaff_x19 + 0x98) = puVar20;
  *(code **)(unaff_x19 + 0xa0) = pcVar13;
  if (((ulong)puVar20 & 1) == 0) {
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000480,pcVar13);
    if (in_stack_00000480 != (code *)0x4) {
      uVar15 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar17 = *(undefined8 *)(unaff_x19 + 0xa0);
      pcVar35 = in_stack_00000480;
      pcVar13 = in_stack_00000488;
      goto LAB_10085e258;
    }
    uVar18 = 3;
LAB_10085e390:
    *(undefined1 *)(unaff_x19 + 0x91) = uVar18;
LAB_10085e394:
    uVar18 = 4;
LAB_10086154c:
    *puVar19 = uVar18;
    *(undefined1 *)(unaff_x19 + 0x20) = 5;
    uVar15 = 1;
    goto LAB_100861628;
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  if (pcVar13 == (code *)0x0) {
    FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
    goto LAB_100861774;
  }
  uVar17 = 0;
  uVar15 = 1;
  pcVar35 = (code *)0x3;
LAB_10085e258:
  in_stack_00000080 = in_stack_00000490;
  in_stack_00000088 = in_stack_00000498;
  in_stack_00000090 = in_stack_000004a0;
  in_stack_00000098 = in_stack_000004a8;
  in_stack_000000a0 = in_stack_000004b0;
  in_stack_000000a8 = in_stack_000004b8;
  in_stack_000000b0 = in_stack_000004c0;
  in_stack_000000b8 = in_stack_000004c8;
  in_stack_000000c0 = in_stack_000004d0;
  in_stack_000000c8 = in_stack_000004d8;
  in_stack_000000d0 = in_stack_000004e0;
  in_stack_000000d8 = in_stack_000004e8;
  in_stack_000000e0 = in_stack_000004f0;
  in_stack_000000e8 = in_stack_000004f8;
  in_stack_000000f0 = in_stack_00000500;
  FUN_100e03d7c(uVar15,uVar17);
  if (pcVar35 == (code *)0x3) {
    puVar12 = (undefined8 *)_malloc(8);
    if (puVar12 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      goto LAB_100861774;
    }
    *puVar12 = pcVar13;
    uVar11 = func_0x000106029c30(0x28,puVar12,&UNK_10b21e380);
    in_stack_00000480 = pcVar13;
LAB_10085e2c4:
    *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
    *(undefined8 *)(unaff_x19 + 0x68) = 0x8000000000000000;
    *(ulong *)(unaff_x19 + 0x70) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
LAB_10085e844:
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b62ee88 - 1 < 2 ||
         ((bRam000000010b62ee88 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                             ), cVar8 != '\0')))) &&
        (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
                            ), (uVar10 & 1) != 0)))) {
      in_stack_00000080 = (code *)&stack0x00000990;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      in_stack_00000488 = (code *)&stack0x000008a0;
      in_stack_00000480 = (code *)0x1;
      in_stack_00000490 = (code *)0x1;
      FUN_10074b674(&stack0x00000480);
    }
    else {
      uVar15 = 
      ___ZN12codex_ollama16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he7b193c0bc41e8cbE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar20 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar20 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar20 + 0x18))(puVar2,&stack0x00000aa8);
        if (iVar9 != 0) {
          in_stack_00000080 = (code *)&stack0x00000990;
          in_stack_00000088 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          in_stack_00000488 = (code *)&stack0x000008a0;
          in_stack_00000480 = (code *)0x1;
          in_stack_00000490 = (code *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar15,puVar2,puVar20,&stack0x00000aa8,&stack0x00000480);
        }
      }
    }
    auVar40._8_8_ = in_stack_00000488;
    auVar40._0_8_ = in_stack_00000480;
    if ((uVar11 & 3) == 1) {
      puVar12 = (undefined8 *)(uVar11 - 1);
      uVar15 = *puVar12;
      puVar32 = *(undefined8 **)(uVar11 + 7);
      pcVar13 = (code *)*puVar32;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar15);
      }
      if (puVar32[1] != 0) {
        _free(uVar15);
      }
LAB_10086171c:
      _free(puVar12);
    }
  }
  else {
    *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000000c0;
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_000000d0;
    *(code **)(unaff_x19 + 0xb0) = in_stack_00000088;
    *(code **)(unaff_x19 + 0xa8) = in_stack_00000080;
    *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000098;
    *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000090;
    *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_000000a8;
    *(undefined8 *)(unaff_x19 + 200) = in_stack_000000a0;
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    *(code **)(unaff_x19 + 0x98) = pcVar35;
    *(code **)(unaff_x19 + 0xa0) = pcVar13;
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000f0;
    *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_000000b8;
    *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_000000b0;
    *(undefined8 *)(unaff_x19 + 0x110) = in_stack_000000e8;
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_000000e0;
    if (*(ushort *)(unaff_x19 + 0x100) - 200 < 100) {
      *(undefined1 *)(unaff_x19 + 0x90) = 0;
      *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x19 + 0x110);
      *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x108);
      *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x19 + 0x118);
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 200);
      *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x19 + 0xf0);
      *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined1 *)(unaff_x19 + 0x350) = 0;
      FUN_1011d682c(&stack0x00000480,unaff_x19 + 0x120);
      pcVar13 = in_stack_00000480;
      if (in_stack_00000480 == (code *)0x8000000000000006) {
        uVar18 = 4;
        goto LAB_10085e390;
      }
      FUN_100cfddd4(unaff_x19 + 0x120);
      if (in_stack_00000480 == (code *)0x8000000000000005) {
        puVar12 = (undefined8 *)_malloc(8);
        if (puVar12 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100861774;
        }
        *puVar12 = in_stack_00000488;
        uVar11 = func_0x000106029c30(0x28,puVar12,&UNK_10b21e380);
        in_stack_00000480 = in_stack_00000488;
        if ((*(byte *)(unaff_x19 + 0x90) & 1) == 0) goto LAB_10085e2c4;
        uVar15 = 0x8000000000000000;
        bVar29 = true;
        goto LAB_10085e824;
      }
      plVar33 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                  (&UNK_108cac9a9,6,&stack0x00000b90);
      if ((plVar33 == (long *)0x0) || (*plVar33 != -0x7ffffffffffffffc)) {
        pcVar31 = (code *)0x0;
        pcVar35 = (code *)0x0;
        pcVar23 = (code *)0x8;
      }
      else {
        pcVar13 = (code *)plVar33[2];
        lVar7 = plVar33[3];
        lVar21 = lVar7 * 0x48;
        pcVar1 = pcVar13 + lVar7 * 0x48;
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          puVar20 = &UNK_108c61018;
          do {
            if (-1 < *(long *)pcVar13) {
              auVar40 = FUN_105dc9750(pcVar13,&UNK_108c61018,4);
              uVar11 = auVar40._8_8_;
              if ((auVar40._0_8_ & 1) != 0) {
                if (*(ulong *)(pcVar13 + 0x10) <= uVar11) {
                  FUN_107c05cd0(uVar11,*(ulong *)(pcVar13 + 0x10),&UNK_10b46a548);
                  goto LAB_100861774;
                }
                lVar36 = *(long *)(pcVar13 + 8) + uVar11 * 0x68;
                if (*(long *)(lVar36 + 0x18) == -0x7ffffffffffffffd) {
                  lVar7 = *(long *)(lVar36 + 0x28);
                  puVar20 = *(undefined **)(lVar36 + 0x30);
                  pcVar13 = pcVar13 + 0x48;
                  goto LAB_10085f264;
                }
              }
            }
            lVar21 = lVar21 + -0x48;
            pcVar13 = pcVar13 + 0x48;
          } while (lVar21 != 0);
          lVar7 = 0;
          pcVar13 = pcVar1;
        }
LAB_10085f264:
        if (lVar7 != 0) {
          if (puVar20 == (undefined *)0x0) {
            lVar21 = 1;
          }
          else {
            lVar21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(puVar20,1);
            if (lVar21 == 0) {
              func_0x0001087c9084(1,puVar20);
              goto LAB_100861774;
            }
            _memcpy(lVar21,lVar7,puVar20);
            if (puVar20 == (undefined *)0x8000000000000000) goto LAB_10085f298;
          }
          pcVar23 = (code *)_malloc(0x60);
          if (pcVar23 != (code *)0x0) {
            *(undefined **)pcVar23 = puVar20;
            *(long *)(pcVar23 + 8) = lVar21;
            *(undefined **)(pcVar23 + 0x10) = puVar20;
            pcVar31 = (code *)0x4;
            pcVar35 = (code *)0x1;
            do {
              lVar7 = 0x68;
              do {
                do {
                  do {
                    pcVar22 = pcVar13;
                    if (pcVar22 == pcVar1) {
                      lVar36 = 0;
                      pcVar13 = pcVar1;
                      goto LAB_10085f4bc;
                    }
                    pcVar13 = pcVar22 + 0x48;
                  } while (*(long *)pcVar22 < 0);
                  auVar40 = FUN_105dc9750(pcVar22,&UNK_108c61018,4);
                  uVar11 = auVar40._8_8_;
                } while ((auVar40._0_8_ & 1) == 0);
                if (*(ulong *)(pcVar22 + 0x10) <= uVar11) {
                  FUN_107c05cd0(uVar11,*(ulong *)(pcVar22 + 0x10),&UNK_10b46a548);
                  goto LAB_100861774;
                }
                lVar21 = *(long *)(pcVar22 + 8) + uVar11 * 0x68;
              } while (*(long *)(lVar21 + 0x18) != -0x7ffffffffffffffd);
              lVar36 = *(long *)(lVar21 + 0x28);
              lVar7 = *(long *)(lVar21 + 0x30);
              pcVar13 = pcVar22 + 0x48;
LAB_10085f4bc:
              in_stack_00000480 = pcVar31;
              in_stack_00000488 = pcVar23;
              in_stack_00000490 = pcVar35;
              if (lVar36 == 0) goto LAB_10085f548;
              if (lVar7 == 0) {
                lVar21 = 1;
              }
              else {
                lVar21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar7,1);
                if (lVar21 == 0) {
                  func_0x0001087c9084(1,lVar7);
                  goto LAB_100861774;
                }
                _memcpy(lVar21,lVar36,lVar7);
                if (lVar7 == -0x8000000000000000) goto LAB_10085f548;
              }
              if (pcVar35 == (code *)0x4) {
                FUN_108855060(&stack0x00000480,4,1,8,0x18);
              }
              pcVar22 = pcVar23 + (long)pcVar35 * 0x18;
              *(long *)pcVar22 = lVar7;
              *(long *)(pcVar22 + 8) = lVar21;
              *(long *)(pcVar22 + 0x10) = lVar7;
              pcVar35 = pcVar35 + 1;
            } while( true );
          }
          func_0x0001087c9084(8,0x60);
          goto LAB_100861774;
        }
LAB_10085f298:
        pcVar31 = (code *)0x0;
        pcVar35 = (code *)0x0;
        pcVar23 = (code *)0x8;
      }
LAB_10085f548:
      FUN_100de6690(&stack0x00000b90);
      *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
      if (pcVar31 == (code *)0x8000000000000001) goto LAB_10085e394;
      *(code **)(unaff_x19 + 0x68) = pcVar31;
      *(code **)(unaff_x19 + 0x70) = pcVar23;
      *(code **)(unaff_x19 + 0x78) = pcVar35;
    }
    else {
      bVar29 = false;
      uVar15 = 0;
      uVar11 = 8;
LAB_10085e824:
      FUN_100e0d524(unaff_x19 + 0x98);
      *(undefined2 *)(unaff_x19 + 0x90) = 0x100;
      *(undefined8 *)(unaff_x19 + 0x68) = uVar15;
      *(ulong *)(unaff_x19 + 0x70) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      if (bVar29) goto LAB_10085e844;
    }
    auVar40._8_8_ = in_stack_00000488;
    auVar40._0_8_ = in_stack_00000480;
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x68);
    lVar7 = *(long *)(unaff_x19 + 0x98);
    if (lVar7 != 0) {
      puVar12 = *(undefined8 **)(unaff_x19 + 0x90);
      lVar36 = lVar7 * 0x18;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x30);
      lVar21 = *(long *)(unaff_x19 + 0x38);
      plVar33 = puVar12 + 2;
      do {
        if ((*plVar33 == lVar21) && (iVar9 = _memcmp(plVar33[-1],uVar15,lVar21), iVar9 == 0))
        goto LAB_1008616e8;
        plVar33 = plVar33 + 3;
        lVar36 = lVar36 + -0x18;
      } while (lVar36 != 0);
    }
    pcVar13 = (code *)(unaff_x19 + 0xa0);
    func_0x000104861724(pcVar13);
    *(long *)(unaff_x19 + 0xf8) = unaff_x19 + 0x40;
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x38);
    *(code **)(unaff_x19 + 0x110) = pcVar13;
    *(undefined **)(unaff_x19 + 0x118) = &UNK_10b220e90;
    puVar30 = (undefined1 *)(unaff_x19 + 0x140);
    *puVar30 = 0;
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0x38);
    *(code **)(unaff_x19 + 0x130) = pcVar13;
    *(undefined **)(unaff_x19 + 0x138) = &UNK_10b220e90;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000080,s_Pulling_model_____108ac6033,&stack0x00000b90);
    in_stack_00000490 = in_stack_00000088;
    pcVar23 = in_stack_00000080;
    auVar5._8_8_ = in_stack_00000080;
    auVar5._0_8_ = 2;
    auVar4._8_8_ = in_stack_00000080;
    auVar4._0_8_ = 2;
    auVar40._8_8_ = in_stack_00000080;
    auVar40._0_8_ = 2;
    in_stack_00000488 =
         (code *)(*(code *)&
                           __ZN100__LT_codex_ollama__pull__CliProgressReporter_u20_as_u20_codex_ollama__pull__PullProgressReporter_GT_8on_event17h6c01a8f2159ee144E
                 )(pcVar13,&stack0x00000480);
    pcVar35 = in_stack_00000490;
    if (in_stack_00000488 == (code *)0x0) {
      if (pcVar23 != (code *)0x0) {
        _free(in_stack_00000490);
      }
      *(long *)(unaff_x19 + 0x148) = unaff_x19 + 0x40;
      *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0x120);
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x128);
      pcVar13 = (code *)(unaff_x19 + 0x1c8);
      *(undefined1 *)(unaff_x19 + 0x1c8) = 0;
      *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x120);
      *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x128);
      lVar7 = *(long *)(unaff_x19 + 0x50);
      do {
        lVar21 = lVar7;
        if (lVar21 == 0) break;
        lVar7 = *(long *)(unaff_x19 + 0x48) + lVar21;
        pbVar27 = (byte *)(lVar7 + -1);
        uVar25 = (uint)(char)*pbVar27;
        if ((int)uVar25 < 0) {
          pbVar27 = (byte *)(lVar7 + -2);
          bVar26 = *pbVar27;
          if ((char)bVar26 < -0x40) {
            pbVar27 = (byte *)(lVar7 + -3);
            bVar38 = *pbVar27;
            if ((char)bVar38 < -0x40) {
              pbVar27 = (byte *)(lVar7 + -4);
              uVar28 = bVar38 & 0x3f | (*pbVar27 & 7) << 6;
            }
            else {
              uVar28 = (int)(char)bVar38 & 0xf;
            }
            uVar28 = bVar26 & 0x3f | uVar28 << 6;
          }
          else {
            uVar28 = (int)(char)bVar26 & 0x1f;
          }
          uVar25 = uVar25 & 0x3f | uVar28 << 6;
        }
        lVar7 = (long)pbVar27 - *(long *)(unaff_x19 + 0x48);
      } while (uVar25 == 0x2f);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000080,s__api_pull_108ac6009,&stack0x00000b90);
      FUN_1011d5524(&stack0x00000080,*(undefined8 *)(unaff_x19 + 0x58),&UNK_108cab1d8,
                    &stack0x00000af0);
      pauVar16 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar16[1][0] == '\x01') {
        auVar41 = *pauVar16;
      }
      else {
        auVar41 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auVar41._8_8_;
        pauVar16[1][0] = 1;
      }
      *(long *)*pauVar16 = auVar41._0_8_ + 1;
      puVar14 = (undefined4 *)_malloc(5);
      if (puVar14 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,5);
        goto LAB_100861774;
      }
      *(undefined1 *)(puVar14 + 1) = 0x6c;
      *puVar14 = 0x65646f6d;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x160);
      lVar7 = *(long *)(unaff_x19 + 0x168);
      if (lVar7 == 0) {
        lVar36 = 1;
      }
      else {
        lVar36 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar7,1);
        if (lVar36 == 0) {
          func_0x0001087c9084(1,lVar7);
          goto LAB_100861774;
        }
      }
      _memcpy(lVar36,uVar15,lVar7);
      FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
      if (lVar21 != -0x7ffffffffffffffb) {
        FUN_100de6690(&stack0x00000d40);
      }
      puVar14 = (undefined4 *)_malloc(6);
      if (puVar14 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
        goto LAB_100861774;
      }
      *(undefined2 *)(puVar14 + 1) = 0x6d61;
      *puVar14 = 0x65727473;
      FUN_101497a9c(&stack0x00000990,&stack0x00000cf0,&stack0x00000d90,&stack0x00000db0);
      if (lVar21 != -0x7ffffffffffffffb) {
        FUN_100de6690(&stack0x00000d40);
      }
      *(undefined8 *)(unaff_x19 + 0x198) = 0;
      *(undefined8 *)(unaff_x19 + 400) = 0;
      *(long *)(unaff_x19 + 0x1a8) = auVar41._0_8_;
      *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
      *(long *)(unaff_x19 + 0x1b0) = auVar41._8_8_;
      *(undefined8 *)(unaff_x19 + 0x178) = 8;
      *(undefined8 *)(unaff_x19 + 0x170) = 0;
      *(undefined **)(unaff_x19 + 0x188) = &UNK_108c56c70;
      *(undefined8 *)(unaff_x19 + 0x180) = 0;
      FUN_1011d5a74(&stack0x00000b90,&stack0x00000080,unaff_x19 + 0x170);
      if (&stack0x00000000 == (undefined1 *)0xfffffffffffff672) {
        auVar39._8_8_ = &DAT_100c7b3a0;
        auVar39._0_8_ = 1;
      }
      else {
        auVar39 = FUN_105c4eee0(in_stack_00000c98,&stack0x00000b90);
      }
      in_stack_00000488 = auVar39._8_8_;
      lVar7 = *in_stack_00000c98;
      *in_stack_00000c98 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(&stack0x00000c98);
      }
      *(undefined1 (*) [16])(unaff_x19 + 0x1b8) = auVar39;
      if ((auVar39._0_8_ & 1) != 0) {
        *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
        if (in_stack_00000488 == (code *)0x0) {
          FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
          goto LAB_100861774;
        }
        uVar17 = 0;
        uVar15 = 1;
        pcVar35 = (code *)0x3;
LAB_10085fa74:
        uVar6 = in_stack_000000e8;
        FUN_100e03d7c(uVar15,uVar17);
        if (pcVar35 == (code *)0x3) {
          in_stack_00000080 = in_stack_00000488;
          puVar12 = (undefined8 *)_malloc(8);
          if (puVar12 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
            goto LAB_100861774;
          }
          *puVar12 = in_stack_00000488;
          in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar12,&UNK_10b21e380);
          FUN_100de6690(unaff_x19 + 0x170);
        }
        else {
          FUN_100de6690(unaff_x19 + 0x170);
          if ((ushort)uVar6 - 200 < 100) {
            auVar40 = __ZN7reqwest10async_impl8response8Response12bytes_stream17h5a874101c98e8fa6E
                                (&stack0x00000b08);
            lVar7 = auVar40._8_8_;
            uVar11 = auVar40._0_8_;
            in_stack_00000090 = 0;
            in_stack_00000098 = 0;
            in_stack_00000080 = (code *)0x0;
            in_stack_00000088 = (code *)0x8;
            in_stack_00000490 = (code *)0x1;
            in_stack_00000488 = (code *)_malloc(0x1f8);
            if (in_stack_00000488 == (code *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1f8);
              goto LAB_100861774;
            }
            _memcpy(in_stack_00000488,&stack0x00000480,0x1f8);
            FUN_100e816dc(&stack0x00000080);
            *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
            *(code **)(unaff_x19 + 0x150) = in_stack_00000488;
            *(undefined **)(unaff_x19 + 0x158) = &UNK_10b220f28;
            while( true ) {
              *(undefined8 **)(unaff_x19 + 0x148) = (undefined8 *)(unaff_x19 + 0x150);
              (**(code **)(*(long *)(unaff_x19 + 0x158) + 0x18))
                        (&stack0x00000480,*(undefined8 *)(unaff_x19 + 0x150));
              if (uVar11 == 7) break;
              if (uVar11 == 6) {
                in_stack_00000488 = (code *)FUN_100c35750(&UNK_108caca7b,0x2f);
                pcVar13 = *(code **)(unaff_x19 + 0x150);
                puVar12 = *(undefined8 **)(unaff_x19 + 0x158);
                if ((code *)*puVar12 != (code *)0x0) {
                  (*(code *)*puVar12)(pcVar13);
                }
LAB_100861980:
                pcVar23 = (code *)puVar12[1];
                pcVar35 = pcVar13;
                auVar4 = auVar40;
                goto joined_r0x000100861984;
              }
              pcVar13 = (code *)&stack0x00000480;
              in_stack_00000488 =
                   (code *)(**(code **)(*(long *)(unaff_x19 + 0x138) + 0x18))
                                     (*(undefined8 *)(unaff_x19 + 0x130),&stack0x00000480);
              if (in_stack_00000488 != (code *)0x0) {
LAB_1008618a4:
                if (uVar11 != 5) {
LAB_100861938:
                  lVar21 = uVar11 - 2;
                  if (uVar11 < 2) {
                    lVar21 = 1;
                  }
                  if (lVar21 != 0) goto LAB_10086196c;
                }
                if (lVar7 != 0) {
                  _free(1);
                }
LAB_10086196c:
                pcVar13 = *(code **)(unaff_x19 + 0x150);
                puVar12 = *(undefined8 **)(unaff_x19 + 0x158);
                if ((code *)*puVar12 != (code *)0x0) {
                  (*(code *)*puVar12)(pcVar13);
                }
                goto LAB_100861980;
              }
              uVar10 = uVar11 - 2;
              if (uVar11 < 2) {
                uVar10 = 1;
              }
              if (1 < uVar10) {
                if (uVar10 == 2) goto LAB_1008618a4;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&stack0x00000080,s_Pull_failed__108ac6048,&stack0x000008a0);
                uVar15 = in_stack_00000090;
                pcVar35 = in_stack_00000088;
                pcVar13 = in_stack_00000080;
                puVar12 = (undefined8 *)_malloc(0x18);
                if (puVar12 != (undefined8 *)0x0) {
                  *puVar12 = pcVar13;
                  puVar12[1] = pcVar35;
                  puVar12[2] = uVar15;
                  in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar12,&UNK_10b209118);
                  if (lVar7 != 0) {
                    _free(1);
                  }
                  if (uVar11 != 5) goto LAB_100861938;
                  goto LAB_10086196c;
                }
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                goto LAB_100861774;
              }
              if (((uVar11 != 5) && (uVar10 == 0)) && (lVar7 != 0)) {
                _free(1);
              }
            }
            uVar18 = 4;
            goto LAB_100861864;
          }
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000080,s_failed_to_start_pull__HTTP_108ac6015,&stack0x00000b90);
          uVar15 = in_stack_00000090;
          pcVar23 = in_stack_00000088;
          pcVar35 = in_stack_00000080;
          puVar12 = (undefined8 *)_malloc(0x18);
          if (puVar12 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100861774;
          }
          *puVar12 = pcVar35;
          puVar12[1] = pcVar23;
          puVar12[2] = uVar15;
          in_stack_00000488 = (code *)func_0x000106029c30(0x28,puVar12,&UNK_10b209118);
          FUN_100e0d524(&stack0x00000b08);
        }
        *pcVar13 = (code)0x1;
        auVar40 = auVar5;
        goto LAB_100861990;
      }
      __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
                (&stack0x00000080,in_stack_00000488);
      if (in_stack_00000080 != (code *)0x4) {
        uVar15 = *(undefined8 *)(unaff_x19 + 0x1b8);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x1c0);
        pcVar35 = in_stack_00000080;
        in_stack_00000488 = in_stack_00000088;
        goto LAB_10085fa74;
      }
      uVar18 = 3;
      *pcVar13 = (code)0x3;
LAB_100861864:
      *puVar30 = uVar18;
      bVar29 = true;
    }
    else {
joined_r0x000100861984:
      auVar40 = auVar4;
      if (pcVar23 != (code *)0x0) {
        _free(pcVar35);
      }
LAB_100861990:
      bVar29 = false;
      *puVar30 = 1;
    }
    if (bVar29) {
      uVar18 = 5;
      goto LAB_10086154c;
    }
    FUN_100cab938((long *)(unaff_x19 + 0xf8));
    lVar7 = *(long *)(unaff_x19 + 0xb8);
    if (lVar7 != 0) {
      lVar21 = *(long *)(unaff_x19 + 200);
      if (lVar21 != 0) {
        plVar33 = *(long **)(unaff_x19 + 0xb0);
        plVar34 = plVar33 + 1;
        lVar36 = *plVar33;
        uVar11 = CONCAT17(-(-1 < lVar36),
                          CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar36 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar36
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar36 >> 8)),-(-1 < (char)lVar36)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar36 = *plVar34;
            plVar33 = plVar33 + -0x28;
            plVar34 = plVar34 + 1;
            uVar11 = CONCAT17(-(-1 < lVar36),
                              CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar36 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                     0x8080808080808080;
          }
          uVar10 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          iVar9 = (int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
          if (plVar33[(long)-iVar9 * 5 + -5] != 0) {
            _free(plVar33[(long)-iVar9 * 5 + -4]);
          }
          uVar11 = uVar11 - 1 & uVar11;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (lVar7 * 0x29 != -0x31) {
        _free(*(long *)(unaff_x19 + 0xb0) + lVar7 * -0x28 + -0x28);
      }
    }
    if (in_stack_00000488 != (code *)0x0) {
      lVar7 = *(long *)(unaff_x19 + 0x90);
      lVar21 = *(long *)(unaff_x19 + 0x98);
      if (lVar21 != 0) {
        puVar12 = (undefined8 *)(lVar7 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        _free(lVar7);
      }
      lVar7 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_10085d380;
      _free(*(undefined8 *)(unaff_x19 + 0x48));
      *puVar19 = 1;
      goto LAB_10086155c;
    }
    puVar12 = *(undefined8 **)(unaff_x19 + 0x90);
    lVar7 = *(long *)(unaff_x19 + 0x98);
LAB_1008616e8:
    if (lVar7 != 0) {
      puVar32 = puVar12 + 1;
      do {
        if (puVar32[-1] != 0) {
          _free(*puVar32);
        }
        puVar32 = puVar32 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(long *)(unaff_x19 + 0x88) != 0) goto LAB_10086171c;
  }
  lVar7 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  in_stack_00000488 = (code *)0x0;
  *puVar19 = 1;
LAB_10086155c:
  func_0x000100e48c8c(plVar37);
  if (in_stack_00000488 == (code *)0x0) {
    pcVar13 = (code *)0x0;
  }
  else {
    in_stack_00000080 = (code *)&stack0x00000b90;
    in_stack_00000088 =
         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
    pauVar16 = (undefined1 (*) [16])_malloc(0x18);
    if (pauVar16 == (undefined1 (*) [16])0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100861774:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100861778);
      (*pcVar13)();
    }
    *pauVar16 = auVar40;
    *(code **)pauVar16[1] = in_stack_00000490;
    puVar12 = (undefined8 *)_malloc(0x18);
    if (puVar12 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100861774;
    }
    *puVar12 = pauVar16;
    puVar12[1] = &UNK_10b209118;
    *(undefined1 *)(puVar12 + 2) = 0x28;
    if (((ulong)in_stack_00000488 & 3) == 1) {
      uVar15 = *(undefined8 *)(in_stack_00000488 + -1);
      puVar32 = *(undefined8 **)(in_stack_00000488 + 7);
      pcVar13 = (code *)*puVar32;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar15);
      }
      if (puVar32[1] != 0) {
        _free(uVar15);
      }
      _free(in_stack_00000488 + -1);
    }
    pcVar13 = (code *)((long)puVar12 + 1);
  }
LAB_10086161c:
  uVar15 = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
LAB_100861628:
  auVar42._8_8_ = pcVar13;
  auVar42._0_8_ = uVar15;
  return auVar42;
}

