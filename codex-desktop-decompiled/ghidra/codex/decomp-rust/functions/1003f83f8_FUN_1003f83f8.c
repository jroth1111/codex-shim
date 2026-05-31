
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1003f83f8(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  undefined8 uVar16;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar17;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined1 *puVar18;
  long *plVar19;
  undefined *puVar20;
  undefined *unaff_x19;
  long *plVar21;
  long unaff_x20;
  undefined1 uVar22;
  long *unaff_x21;
  long lVar23;
  bool bVar24;
  undefined *puVar25;
  char *unaff_x24;
  long unaff_x26;
  uint uVar26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  char in_wzr;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined *in_stack_00000008;
  undefined4 *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined3 uStack0000000000000049;
  int iStack0000000000000074;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000090;
  char *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined *in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000c8;
  char *in_stack_000000d0;
  long *in_stack_000000d8;
  char *in_stack_000000e0;
  int iStack00000000000000e8;
  char *in_stack_000000f0;
  long *in_stack_000000f8;
  char *in_stack_00000100;
  long *in_stack_00000108;
  char *in_stack_00000110;
  long *in_stack_00000118;
  undefined *in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char *in_stack_00000140;
  undefined1 *in_stack_00000148;
  char *pcStack0000000000000150;
  long *plStack0000000000000158;
  char *in_stack_00000160;
  long *in_stack_00000168;
  char *in_stack_00000170;
  long *in_stack_00000178;
  undefined *in_stack_00000180;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  char *in_stack_000001a0;
  undefined1 *in_stack_000001a8;
  char *in_stack_000001b0;
  long *in_stack_000001b8;
  char *in_stack_000001c0;
  long *in_stack_000001c8;
  char *in_stack_000001d0;
  long *in_stack_000001d8;
  undefined *in_stack_000001e0;
  long in_stack_000001e8;
  undefined6 in_stack_00000262;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined6 in_stack_0000028a;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined *puVar29;
  char *in_stack_00000358;
  long *in_stack_00000360;
  undefined *in_stack_00000368;
  long in_stack_00000370;
  long *plVar30;
  char *pcVar31;
  long *plVar32;
  
code_r0x0001003f83f8:
  uVar5 = in_stack_000000b8;
  lVar23 = in_stack_000000b0;
  puVar20 = in_stack_000000a8;
  pcVar3 = *(char **)(unaff_x26 + 0x60);
  plVar4 = *(long **)(unaff_x26 + 0x68);
  pcVar31 = *(char **)(unaff_x26 + 0x58);
  uVar17 = *(undefined8 *)(unaff_x26 + 8);
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x000002c0;
  cVar10 = (char)unaff_x21;
  *(char *)(unaff_x29 + -0x70) = cVar10;
  pcStack0000000000000150 = (char *)(unaff_x29 + -0x78);
  plStack0000000000000158 = (long *)&DAT_1061c2098;
  plVar32 = unaff_x21;
  if (pcVar3 == (char *)0x0) {
    plVar32 = (long *)((long)unaff_x21 + 1);
  }
  (**(code **)(unaff_x19 + 0x20))(in_stack_00000008,&stack0x000004e0);
LAB_1003f861c:
  in_stack_000000d0 = in_stack_000000f0;
  in_stack_000000c8 = (long *)_iStack00000000000000e8;
  in_stack_000000e0 = in_stack_00000100;
  in_stack_000000d8 = in_stack_000000f8;
  in_stack_000000c0 = 0;
  cVar9 = FUN_10080f468();
  if (cVar9 == '\x0f') {
    if ((in_stack_000000a0._7_1_ & 1) != 0) {
LAB_1003f9200:
      plVar21 = (long *)0x0;
      unaff_x21 = (long *)0x0;
      goto LAB_1003f8acc;
    }
    if (*in_stack_00000030 == '\0') {
      *in_stack_00000030 = cVar10;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (in_stack_00000030,extraout_x1_01,1000000000);
    }
    uVar26 = (uint)unaff_x27;
    plVar30 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar26);
    func_0x000105a812ac(unaff_x28 + 0x198,1,&stack0x000004e0,unaff_x28 + 0x18);
    if (*in_stack_00000030 == '\x01') {
      *in_stack_00000030 = in_wzr;
      uVar16 = extraout_x1_02;
      if (*in_stack_00000030 != '\0') goto LAB_1003f8224;
      *in_stack_00000030 = cVar10;
LAB_1003f86e4:
      if (unaff_x27 < *(ulong *)(unaff_x28 + 0x210)) goto LAB_1003f86f8;
LAB_1003f99ac:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&stack0x000004e0,&UNK_10b3fa588);
      goto LAB_1003f9a90;
    }
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000030,0);
    uVar16 = extraout_x1;
    if (*in_stack_00000030 == '\0') {
      *in_stack_00000030 = cVar10;
      goto LAB_1003f86e4;
    }
LAB_1003f8224:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (in_stack_00000030,uVar16,1000000000);
    if (*(ulong *)(unaff_x28 + 0x210) <= unaff_x27) goto LAB_1003f99ac;
LAB_1003f86f8:
    cVar9 = (char)unaff_x27;
    puVar29 = (undefined *)CONCAT44(in_stack_00000028._4_4_,uVar26);
    plVar19 = (long *)(*(long *)(unaff_x28 + 0x208) + (unaff_x27 & 0xffffffff) * 0x158);
    if ((*plVar19 == 2) || (*(int *)((long)plVar19 + 0x13c) != in_stack_00000028._4_4_))
    goto LAB_1003f99ac;
    plVar21 = (long *)plVar19[0x14];
    uVar1 = *(uint *)((long)plVar19 + 0x9c) &
            ((int)*(uint *)((long)plVar19 + 0x9c) >> 0x1f ^ 0xffffffffU);
    uVar2 = *(uint *)(unaff_x28 + 0x1ec);
    if (uVar1 <= *(uint *)(unaff_x28 + 0x1ec)) {
      uVar2 = uVar1;
    }
    if (*(char *)(unaff_x28 + 0x10) == '\x01') {
      *(char *)(unaff_x28 + 0x10) = in_wzr;
      if ((long *)(ulong)uVar2 <= plVar21) goto LAB_1003f8260;
LAB_1003f874c:
      FUN_10080f13c(&stack0x00000350);
      if ((uVar26 & 0xff) != 6) {
        if ((uVar26 & 0xff) == 5) {
          iStack0000000000000074 = in_stack_00000028._4_4_;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
             (((bVar11 = bRam000000010b636288, bRam000000010b636288 - 1 < 2 ||
               ((bRam000000010b636288 != 0 &&
                (bVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h4025e2051cb73ebaE
                                    ), bVar11 != 0)))) &&
              (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h4025e2051cb73ebaE
                                   ,bVar11), iVar12 != 0)))) {
            puVar29 = (undefined *)&stack0x00000074;
            in_stack_00000358 =
                 &
                 __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
            ;
            _iStack00000000000000e8 = &stack0x000002c0;
            in_stack_000000f0 = "";
            FUN_1003f9df0(&stack0x000004e0);
          }
          else {
            lVar23 = 
            ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h4025e2051cb73ebaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000080 =
                   *(undefined8 *)
                    (
                    ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h4025e2051cb73ebaE
                    + 0x20);
              in_stack_00000088 =
                   *(undefined8 *)
                    (
                    ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17h4025e2051cb73ebaE
                    + 0x28);
              in_stack_00000078 = 4;
              puVar20 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar20 = &UNK_10b3c24c8;
              }
              puVar25 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar25 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar20 + 0x18))(puVar25,&stack0x00000078);
              if (iVar12 != 0) {
                puVar29 = (undefined *)&stack0x00000074;
                in_stack_00000358 =
                     &
                     __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
                ;
                _iStack00000000000000e8 = &stack0x000002c0;
                in_stack_000000f0 = "";
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar23,puVar25,puVar20,&stack0x00000078,&stack0x000004e0);
              }
            }
          }
          puVar29 = (undefined *)
                    CONCAT44(iStack0000000000000074,(int)CONCAT71((int7)((ulong)puVar29 >> 8),2));
          plVar21 = (long *)_malloc(0x18);
          if (plVar21 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_1003f9a90;
          }
          *plVar21 = 0;
          *(undefined1 *)(plVar21 + 2) = 9;
          puVar15 = (undefined8 *)_malloc(0x28);
          if (puVar15 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
            goto LAB_1003f9a90;
          }
        }
        else {
          plVar21 = (long *)_malloc(0x18);
          if (plVar21 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_1003f9a90;
          }
          *plVar21 = 0;
          *(undefined1 *)(plVar21 + 2) = 9;
          puVar15 = (undefined8 *)_malloc(0x28);
          if (puVar15 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
            goto LAB_1003f9a90;
          }
        }
        puVar15[1] = in_stack_00000358;
        *puVar15 = puVar29;
        puVar15[3] = in_stack_00000368;
        puVar15[2] = in_stack_00000360;
LAB_1003f8920:
        puVar15[4] = in_stack_00000370;
        puVar20 = &UNK_10b238a78;
LAB_1003f892c:
        unaff_x21 = (long *)0x0;
        *plVar21 = (long)puVar15;
        plVar21[1] = (long)puVar20;
        goto LAB_1003f8acc;
      }
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000030,0);
      if (plVar21 < (long *)(ulong)uVar2) goto LAB_1003f874c;
LAB_1003f8260:
      do {
        FUN_100812358(&stack0x00000350);
        if (cVar9 == '\a') goto LAB_1003f8acc;
        if (cVar9 != '\x05') {
          if (cVar9 == '\x06') {
            plVar21 = (long *)_malloc(0x18);
            if (plVar21 != (long *)0x0) {
              *plVar21 = 0;
              *(undefined1 *)(plVar21 + 2) = 9;
              puVar13 = (undefined8 *)_malloc(0x28);
              if (puVar13 == (undefined8 *)0x0) {
                FUN_107c03c64(1,0x28);
                goto LAB_1003f9a90;
              }
              puVar13[1] = 0x61706163206d6165;
              *puVar13 = 0x72747320646e6573;
              puVar13[3] = 0x6c64657463657078;
              puVar13[2] = 0x656e752079746963;
              puVar13[4] = 0x6465736f6c632079;
              puVar15 = (undefined8 *)_malloc(0x18);
              if (puVar15 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                goto LAB_1003f9a90;
              }
              *puVar15 = 0x28;
              puVar15[1] = puVar13;
              puVar15[2] = 0x28;
              puVar20 = &UNK_10b209118;
              goto LAB_1003f892c;
            }
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          }
          else {
            uStack0000000000000049 = (undefined3)*in_stack_00000020;
            uVar6 = *(undefined4 *)((long)in_stack_00000020 + 3);
            plVar21 = (long *)_malloc(0x18);
            if (plVar21 != (long *)0x0) {
              *plVar21 = 0;
              *(undefined1 *)(plVar21 + 2) = 9;
              puVar15 = (undefined8 *)_malloc(0x28);
              if (puVar15 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                goto LAB_1003f9a90;
              }
              puVar15[1] = in_stack_00000358;
              *puVar15 = CONCAT44(uVar6,CONCAT31(uStack0000000000000049,cVar9));
              puVar15[3] = in_stack_00000368;
              puVar15[2] = in_stack_00000360;
              goto LAB_1003f8920;
            }
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1003f9a90;
        }
      } while (in_stack_00000358 == (char *)0x0);
    }
    (**(code **)(in_stack_00000038 + 0x18))(&stack0x000004e0,in_stack_00000040);
    if (unaff_x24 == (char *)0x4) {
      puVar15 = (undefined8 *)_malloc(0x18);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = 0;
        *(undefined2 *)(puVar15 + 2) = 1;
        puVar13 = (undefined8 *)_malloc(0x10);
        if (puVar13 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_1003f9a90;
        }
        *puVar13 = plVar30;
        puVar13[1] = pcVar31;
        *puVar15 = puVar13;
        puVar15[1] = &UNK_10b2099a8;
        *(undefined8 **)(unaff_x29 + -0x78) = puVar15;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
            ((bRam000000010b6364f8 - 1 < 2 ||
             ((bRam000000010b6364f8 != 0 &&
              (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_11on_user_err10__CALLSITE17hc1aa2a6dd50bc44bE
                                  ), cVar10 != '\0')))))) &&
           (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_11on_user_err10__CALLSITE17hc1aa2a6dd50bc44bE
                               ), iVar12 != 0)) {
          in_stack_000000f0 = &stack0x000002c0;
          _iStack00000000000000e8 = s_send_body_user_stream_error__108ac767c;
          pcStack0000000000000150 = (char *)&stack0x000000e8;
          plStack0000000000000158 = (long *)&UNK_10b208fd0;
          pcVar31 = (char *)&stack0x00000150;
          plVar30 = (long *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_11on_user_err10__CALLSITE17hc1aa2a6dd50bc44bE
                     ,&stack0x000004e0);
          uVar17 = 
          ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_11on_user_err10__CALLSITE17hc1aa2a6dd50bc44bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar29 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar29 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar20 + 0x18))(puVar29,&stack0x00000350);
            if (iVar12 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar17,puVar29,puVar20,&stack0x00000350,&stack0x000004e0);
            }
          }
        }
        else {
          uVar17 = 
          ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_11on_user_err10__CALLSITE17hc1aa2a6dd50bc44bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar20 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar20 = &UNK_10b3c24c8;
            }
            puVar29 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar29 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar20 + 0x18))(puVar29,&stack0x00000350);
            if (iVar12 != 0) {
              in_stack_000000f0 = &stack0x000002c0;
              _iStack00000000000000e8 = s_send_body_user_stream_error__108ac767c;
              pcStack0000000000000150 = (char *)&stack0x000000e8;
              plStack0000000000000158 = (long *)&UNK_10b208fd0;
              pcVar31 = (char *)&stack0x00000150;
              plVar30 = (long *)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar17,puVar29,puVar20,&stack0x00000350,&stack0x000004e0);
            }
          }
        }
        lVar23 = **(long **)(unaff_x29 + -0x78);
        if (lVar23 == 0) goto LAB_1003f9410;
        auVar28._8_8_ = (*(long **)(unaff_x29 + -0x78))[1];
        auVar28._0_8_ = lVar23;
        goto LAB_1003f93ac;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1003f9a90;
    }
    if (unaff_x24 == (char *)0x6) {
      unaff_x21 = (long *)0x1;
      goto LAB_1003f8acc;
    }
    if (unaff_x24 == (char *)0x5) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bVar11 = bRam000000010b636510, bRam000000010b636510 - 1 < 2 ||
           ((bRam000000010b636510 != 0 &&
            (bVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
                                ), bVar11 != 0)))))) &&
         (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
                              ,bVar11), iVar12 != 0)) {
        _iStack00000000000000e8 = &stack0x000002c0;
        in_stack_000000f0 = "";
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
                   ,&stack0x000004e0);
        lVar23 = 
        ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000358 =
               *(char **)(
                         ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
                         + 0x20);
          in_stack_00000360 =
               *(long **)(
                         ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
                         + 0x28);
          puVar29 = (undefined *)0x0;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar25 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar25 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar20 + 0x18))(puVar25,&stack0x00000350);
          if (iVar12 != 0) {
            puVar18 = &stack0x00000350;
LAB_1003f8be4:
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar23,puVar25,puVar20,puVar18,&stack0x000004e0);
          }
        }
      }
      else {
        lVar23 = 
        ___ZN149__LT_rama_http_core__h2__share__SendStream_LT_rama_http_core__proto__h2__SendBuf_LT_B_GT__GT__u20_as_u20_rama_http_core__proto__h2__SendStreamExt_GT_14send_eos_frame10__CALLSITE17h5158f20703341b5cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar25 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar25 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar20 + 0x18))(puVar25,&stack0x000002c0);
          if (iVar12 != 0) {
            puVar29 = &UNK_108cad62a;
            in_stack_00000358 = (char *)0x1b;
            _iStack00000000000000e8 = &stack0x00000350;
            in_stack_000000f0 = "";
            puVar18 = &stack0x000002c0;
            goto LAB_1003f8be4;
          }
        }
      }
      cVar10 = FUN_10080f468();
      if (cVar10 == '\x0f') goto LAB_1003f9200;
      plVar21 = (long *)_malloc(0x18);
      if (plVar21 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1003f9a90;
      }
      *plVar21 = 0;
      *(undefined1 *)(plVar21 + 2) = 9;
      _iStack00000000000000e8 = (char *)plVar21;
      plVar32 = (long *)_malloc(0x28);
      if (plVar32 != (long *)0x0) {
        plVar32[1] = (long)in_stack_00000358;
        *plVar32 = CONCAT62((int6)((ulong)puVar29 >> 0x10),CONCAT11(cVar10,3));
        plVar32[3] = (long)in_stack_00000368;
        plVar32[2] = (long)in_stack_00000360;
        plVar32[4] = in_stack_00000370;
        *plVar21 = (long)plVar32;
        plVar21[1] = (long)&UNK_10b238a78;
        unaff_x21 = (long *)0x0;
        goto LAB_1003f8acc;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
LAB_1003f9a90:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1003f9a94);
      (*pcVar8)();
    }
    in_stack_00000090 = plVar32;
    in_stack_00000098 = pcVar3;
    if (unaff_x24 == (char *)0x3) {
      _iStack00000000000000e8 = (char *)plVar30;
      in_stack_000000f0 = pcVar31;
      in_stack_000000f8 = plVar32;
      in_stack_00000100 = pcVar3;
      in_stack_000000a0._7_1_ = (**(code **)(in_stack_00000038 + 0x20))(in_stack_00000040);
      in_stack_00000370 = lVar23;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b6362a0 - 1 < 2 ||
           ((bRam000000010b6362a0 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
                               ), cVar9 != '\0')))) &&
          (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
                              ),
          lVar7 = 
          ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
          , iVar12 != 0)))) {
        in_stack_00000368 =
             (undefined *)
             (
             ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
             + 0x30);
        pcVar31 = (char *)((long)&stack0x000000a0 + 7);
        plVar32 = (long *)&__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E
        ;
        pcStack0000000000000150 = s_send_body_chunk__bytes__eos__108abf2c1;
        *(char ***)(unaff_x29 + -0x78) = &stack0x00000150;
        *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
        in_stack_00000358 = (char *)(unaff_x29 + -0x78);
        plStack0000000000000158 = (long *)&stack0x000004e0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar7,&stack0x00000350);
        lVar7 = 
        ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
        ;
        in_stack_00000360 = unaff_x21;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar29 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar29 = &UNK_10b3c24c8;
          }
          puVar25 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar25 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar29 + 0x18))(puVar25,&stack0x000002c0);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar25,puVar29,&stack0x000002c0,&stack0x00000350);
          }
        }
        goto LAB_1003f861c;
      }
      unaff_x26 = 
      ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
      ;
      in_stack_00000358 = pcVar3;
      in_stack_00000360 = plVar4;
      in_stack_00000368 = puVar20;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_1003f861c;
      in_stack_000000b0 =
           *(long *)(
                    ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
                    + 0x20);
      in_stack_000000b8 =
           *(undefined8 *)
            (
            ___ZN101__LT_rama_http_core__proto__h2__PipeToSendStream_LT_S_GT__u20_as_u20_core__future__future__Future_GT_4poll10__CALLSITE17hbe5aa1edcb724036E
            + 0x28);
      in_stack_000000a8 = (undefined *)0x5;
      unaff_x19 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        unaff_x19 = &UNK_10b3c24c8;
      }
      in_stack_00000008 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        in_stack_00000008 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(unaff_x19 + 0x18))(in_stack_00000008,&stack0x000000a8);
      if (iVar12 == 0) goto LAB_1003f861c;
      in_stack_00000358 =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      in_stack_00000360 = (long *)((long)&stack0x000000a0 + 7);
      in_stack_00000368 = &__ZN43__LT_bool_u20_as_u20_core__fmt__Display_GT_3fmt17hb06155631e45bcc1E
      ;
      goto code_r0x0001003f83f8;
    }
    _iStack00000000000000e8 = (char *)0x0;
    in_stack_000000f0 = unaff_x24;
    in_stack_000000f8 = plVar30;
    in_stack_00000100 = pcVar31;
    in_stack_00000108 = plVar32;
    in_stack_00000110 = pcVar3;
    in_stack_00000118 = plVar4;
    in_stack_00000120 = puVar20;
    in_stack_00000128 = lVar23;
    in_stack_00000130 = uVar5;
    in_stack_00000138 = uVar17;
    in_stack_00000140 = s__108b39f4f;
    in_stack_00000148 = (undefined1 *)&stack0x00000150;
    pcStack0000000000000150 = unaff_x24;
    plStack0000000000000158 = plVar30;
    in_stack_00000160 = pcVar31;
    in_stack_00000168 = plVar32;
    in_stack_00000170 = pcVar3;
    in_stack_00000178 = plVar4;
    in_stack_00000180 = puVar20;
    in_stack_00000188 = lVar23;
    in_stack_00000190 = uVar5;
    in_stack_00000198 = uVar17;
    in_stack_000001a0 = s__108b39f4f;
    in_stack_000001a8 = (undefined1 *)&stack0x00000150;
    if (*in_stack_00000030 == '\0') {
      *in_stack_00000030 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (in_stack_00000030,extraout_x1_00,1000000000);
    }
    func_0x000105a812ac(unaff_x28 + 0x198,0,&stack0x000004e0,unaff_x28 + 0x18);
    if (*in_stack_00000030 == '\x01') {
      *in_stack_00000030 = in_wzr;
      uVar17 = extraout_x1_03;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000030,0);
      uVar17 = extraout_x1_04;
    }
    in_stack_000001d8 = in_stack_00000178;
    in_stack_000001d0 = in_stack_00000170;
    in_stack_000001e8 = in_stack_00000188;
    in_stack_000001e0 = in_stack_00000180;
    in_stack_000001b8 = plStack0000000000000158;
    in_stack_000001b0 = pcStack0000000000000150;
    in_stack_000001c8 = in_stack_00000168;
    in_stack_000001c0 = in_stack_00000160;
    if (*in_stack_00000030 == '\0') {
      *in_stack_00000030 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (in_stack_00000030,uVar17,1000000000);
      uVar17 = extraout_x1_05;
    }
    lVar23 = *(long *)(unaff_x20 + 0x10);
    pcVar31 = (char *)(lVar23 + 0x10);
    if (*pcVar31 == '\0') {
      *pcVar31 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar31,uVar17,1000000000);
    }
    if (((*(ulong *)(unaff_x24 + 0x10) <= (unaff_x27 & 0xffffffff)) ||
        (plVar32 = (long *)(*(long *)(unaff_x24 + 8) + (unaff_x27 & 0xffffffff) * 0x158),
        *plVar32 == 2)) || (*(int *)((long)plVar32 + 0x13c) != in_stack_00000028._4_4_)) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&stack0x000004e0,&UNK_10b3fa588);
      goto LAB_1003f9a90;
    }
    lVar7 = plVar32[0xc];
    FUN_105ace28c(&stack0x000001b0);
    *(uint *)(unaff_x29 + -0x78) = uVar26;
    *(int *)(unaff_x29 + -0x74) = in_stack_00000028._4_4_;
    if (((*(ulong *)(unaff_x24 + 0x10) <= (unaff_x27 & 0xffffffff)) ||
        (plVar32 = (long *)(*(long *)(unaff_x24 + 8) + (unaff_x27 & 0xffffffff) * 0x158),
        *plVar32 == 2)) || (*(int *)((long)plVar32 + 0x13c) != in_stack_00000028._4_4_)) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&stack0x000004e0,&UNK_10b3fa588);
      goto LAB_1003f9a90;
    }
    cVar10 = *(byte *)(plVar32 + 0xd) - 7;
    if (*(byte *)(plVar32 + 0xd) < 7) {
      cVar10 = '\x06';
    }
    if (((cVar10 == '\x05') || (cVar10 == '\x03')) && ((*(byte *)((long)plVar32 + 0x69) & 1) != 0))
    {
      lVar14 = __ZN93__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__DerefMut_GT_9deref_mut17hb1fd44ec5271e264E
                         (&stack0x000002b0);
      __ZN14rama_http_core2h25proto7streams5state5State10send_close17hc3f40adbf787e2bbE
                (lVar14 + 0x68);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b636cd8 - 1 < 2 ||
           ((bRam000000010b636cd8 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                                ), cVar10 != '\0')))))) &&
         (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                             ), iVar12 != 0)) {
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                   ,&stack0x000004e0);
        lVar14 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar17 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                    + 0x20);
          uVar5 = *(undefined8 *)
                   (
                   ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0x78) = 5;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar17;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar29 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar29 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar20 + 0x18))(puVar29,unaff_x29 + -0x78);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar14,puVar29,puVar20,unaff_x29 + -0x78,&stack0x000004e0);
          }
        }
      }
      else {
        lVar14 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar17 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                    + 0x20);
          uVar5 = *(undefined8 *)
                   (
                   ___ZN14rama_http_core2h25proto7streams4send4Send13send_trailers10__CALLSITE17hacc153e5417b8741E
                   + 0x28);
          *(undefined8 *)(unaff_x29 + -0x78) = 5;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar17;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
          puVar20 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar20 = &UNK_10b3c24c8;
          }
          puVar29 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar29 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar20 + 0x18))(puVar29,unaff_x29 + -0x78);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar14,puVar29,puVar20,unaff_x29 + -0x78,&stack0x000004e0);
          }
        }
      }
      _memcpy(&stack0x000004e8,&stack0x00000350,0x158);
      FUN_100805848(unaff_x28 + 0x198,&stack0x000004e0,lVar23 + 0x18,&stack0x000002b0,
                    unaff_x28 + 0x180);
      func_0x000105a812ac(unaff_x28 + 0x198,0,&stack0x000002b0,unaff_x28 + 0x18);
      uVar22 = 0xf;
      bVar24 = true;
    }
    else {
      FUN_100e3fdac(&stack0x00000350);
      bVar24 = false;
      uVar22 = 1;
    }
    __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
              (unaff_x28 + 0x18,&stack0x000004e0,(int)lVar7 != 1000000000);
    if (*pcVar31 == '\x01') {
      *pcVar31 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar31,0);
    }
    if (*in_stack_00000030 == '\x01') {
      *in_stack_00000030 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000030,0);
    }
    if (bVar24) {
      plVar21 = (long *)0x0;
    }
    else {
      plVar21 = (long *)_malloc(0x18);
      if (plVar21 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1003f9a90;
      }
      *plVar21 = 0;
      *(undefined1 *)(plVar21 + 2) = 9;
      puVar15 = (undefined8 *)_malloc(0x28);
      if (puVar15 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        goto LAB_1003f9a90;
      }
      puVar15[1] = in_stack_00000290;
      *puVar15 = CONCAT62(in_stack_0000028a,CONCAT11(uVar22,3));
      puVar15[3] = in_stack_000002a0;
      puVar15[2] = in_stack_00000298;
      puVar15[4] = in_stack_000002a8;
      *plVar21 = (long)puVar15;
      plVar21[1] = (long)&UNK_10b238a78;
    }
    if (iStack00000000000000e8 != 1) goto LAB_1003f9818;
    if (in_stack_000000f0 != (char *)0x3) {
      FUN_100def764(&stack0x000000f0);
      unaff_x21 = (long *)0x0;
      goto LAB_1003f8acc;
    }
    (*(code *)in_stack_000000f8[4])(&stack0x00000110,in_stack_00000100,in_stack_00000108);
  }
  else {
    plVar21 = (long *)_malloc(0x18);
    if (plVar21 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1003f9a90;
    }
    *plVar21 = 0;
    *(undefined1 *)(plVar21 + 2) = 9;
    puVar15 = (undefined8 *)_malloc(0x28);
    if (puVar15 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
      goto LAB_1003f9a90;
    }
    puVar15[1] = in_stack_00000268;
    *puVar15 = CONCAT62(in_stack_00000262,CONCAT11(cVar9,3));
    puVar15[3] = in_stack_00000278;
    puVar15[2] = in_stack_00000270;
    puVar15[4] = in_stack_00000280;
    *plVar21 = (long)puVar15;
    plVar21[1] = (long)&UNK_10b238a78;
  }
LAB_1003f9818:
  unaff_x21 = (long *)0x0;
  goto LAB_1003f8acc;
  while (auVar28 = (**(code **)(auVar28._8_8_ + 0x30))(auVar28._0_8_), auVar28._0_8_ != 0) {
LAB_1003f93ac:
    (**(code **)(auVar28._8_8_ + 0x38))(&stack0x000004e0,auVar28._0_8_);
    if (pcVar31 == (char *)0x440bb52c42120a07 && plVar30 == (long *)0xd68e285c860d0a2e) break;
  }
LAB_1003f9410:
  FUN_10080f2a0();
  unaff_x21 = (long *)0x0;
  plVar21 = *(long **)(unaff_x29 + -0x78);
LAB_1003f8acc:
  auVar27._8_8_ = plVar21;
  auVar27._0_8_ = unaff_x21;
  return auVar27;
}

