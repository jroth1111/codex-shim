
/* WARNING: Removing unreachable block (ram,0x000100844098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842124(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar15;
  long unaff_x19;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long unaff_x25;
  undefined1 *unaff_x26;
  short *psVar24;
  uint uVar25;
  undefined8 *unaff_x28;
  long lVar26;
  char in_wzr;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  long *in_stack_00000090;
  undefined8 *in_stack_000000a0;
  undefined4 uStack00000000000000b0;
  undefined1 *puStack00000000000000c0;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000140;
  undefined1 uStack0000000000000148;
  undefined1 uStack0000000000000149;
  undefined2 uStack000000000000014a;
  undefined4 uStack000000000000014c;
  long *in_stack_00000150;
  undefined1 *in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000168;
  long in_stack_000006a0;
  long in_stack_000006c8;
  long in_stack_000006d0;
  long *in_stack_00000738;
  undefined1 *in_stack_00000740;
  undefined2 uVar31;
  undefined4 uVar32;
  undefined1 uVar33;
  undefined2 uVar34;
  undefined4 uVar35;
  undefined2 uVar36;
  undefined6 uVar37;
  undefined2 uVar38;
  undefined6 uVar39;
  undefined2 in_stack_000018d0;
  undefined6 in_stack_000018d2;
  long in_stack_000018e8;
  undefined1 *in_stack_00001ef0;
  byte bVar40;
  byte bVar41;
  uint uVar42;
  long in_stack_00002478;
  long *in_stack_00002560;
  long *in_stack_00002568;
  undefined1 *in_stack_00002570;
  undefined8 in_stack_00002578;
  long *in_stack_00002580;
  undefined8 *in_stack_00002588;
  ulong in_stack_00002590;
  undefined8 in_stack_00002598;
  undefined8 in_stack_000025a0;
  undefined8 in_stack_000025a8;
  undefined8 in_stack_000025b0;
  undefined8 in_stack_000025b8;
  undefined8 in_stack_000025c0;
  undefined8 in_stack_000025c8;
  undefined8 in_stack_000025d0;
  undefined8 in_stack_000025d8;
  undefined8 in_stack_000025e0;
  long in_stack_000025e8;
  undefined8 in_stack_000025f0;
  undefined8 in_stack_000025f8;
  undefined8 in_stack_00002600;
  undefined8 in_stack_00002608;
  undefined8 in_stack_00002610;
  undefined8 in_stack_00002618;
  undefined8 in_stack_00002620;
  undefined8 in_stack_00002628;
  undefined8 in_stack_00002630;
  undefined8 in_stack_00002638;
  undefined1 *in_stack_000027d0;
  short in_stack_00002a70;
  undefined1 *in_stack_00002b38;
  long *in_stack_00002c70;
  long *in_stack_00002c78;
  long *plVar43;
  undefined1 *in_stack_00002c80;
  undefined1 *puVar44;
  undefined6 in_stack_00002c88;
  undefined6 uVar45;
  undefined2 in_stack_00002c8e;
  uint6 in_stack_00002c90;
  undefined2 in_stack_00002c96;
  uint6 in_stack_00002c98;
  undefined2 in_stack_00002c9e;
  undefined8 in_stack_00002cc0;
  long *in_stack_00002cd8;
  byte in_stack_00002ce8;
  char *pcVar46;
  long *in_stack_00003140;
  undefined1 *in_stack_00003148;
  undefined8 in_stack_00003150;
  undefined1 *in_stack_00003220;
  char *pcVar47;
  long *plVar48;
  undefined1 *in_stack_00003320;
  undefined8 in_stack_00003328;
  undefined8 *in_stack_00003330;
  
  pcVar47 = &stack0x00002a30;
  plVar48 = (long *)&UNK_10b208fd0;
  uVar31 = 0;
  uVar32 = 0;
  uVar15 = SUB81(&stack0x00003310,0);
  uVar33 = (undefined1)((ulong)&stack0x00003310 >> 8);
  uVar34 = (undefined2)((ulong)&stack0x00003310 >> 0x10);
  uVar35 = (undefined4)((ulong)&stack0x00003310 >> 0x20);
  uVar36 = 1;
  uVar37 = 0;
  uVar38 = (undefined2)param_1;
  uVar39 = (undefined6)((ulong)param_1 >> 0x10);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (*(int *)(unaff_x19 + 0x510) != 2) {
    *(undefined1 *)(unaff_x19 + 0x5f3) = 0;
    uVar21 = *(undefined8 *)(unaff_x19 + 0x550);
    uVar27 = *(undefined8 *)(unaff_x19 + 0x560);
    uVar9 = *(ulong *)(unaff_x19 + 0x578);
    uVar28 = *(undefined8 *)(unaff_x19 + 0x518);
    lVar18 = *(long *)(unaff_x19 + 0x510);
    uVar15 = (undefined1)uVar28;
    uVar33 = (undefined1)((ulong)uVar28 >> 8);
    uVar34 = (undefined2)((ulong)uVar28 >> 0x10);
    uVar35 = (undefined4)((ulong)uVar28 >> 0x20);
    uVar31 = (undefined2)((ulong)lVar18 >> 0x10);
    uVar32 = (undefined4)((ulong)lVar18 >> 0x20);
    uVar38 = (undefined2)*(undefined8 *)(unaff_x19 + 0x528);
    uVar39 = (undefined6)((ulong)*(undefined8 *)(unaff_x19 + 0x528) >> 0x10);
    uVar36 = (undefined2)*(undefined8 *)(unaff_x19 + 0x520);
    uVar37 = (undefined6)((ulong)*(undefined8 *)(unaff_x19 + 0x520) >> 0x10);
    in_stack_000018e8 = *(long *)(unaff_x19 + 0x548);
    in_stack_000018d0 = (undefined2)*(undefined8 *)(unaff_x19 + 0x530);
    in_stack_000018d2 = (undefined6)((ulong)*(undefined8 *)(unaff_x19 + 0x530) >> 0x10);
    if ((*(byte *)(unaff_x19 + 0x5c0) & 1) == 0) {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        if (1 < bRam000000010b6371d0 - 1) {
          if (bRam000000010b6371d0 != 0) {
            cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5958a1dc731de88eE
                              );
            unaff_x26 = &stack0x00002598;
            if (cVar5 != '\0') goto LAB_100842a78;
          }
          goto LAB_1008426c0;
        }
LAB_100842a78:
        uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5958a1dc731de88eE
                           );
        if ((uVar14 & 1) == 0) goto LAB_1008426c0;
        in_stack_00001ef0 = &stack0x000018b0;
        pcVar47 = &stack0x00002a30;
        plVar48 = (long *)&UNK_10b208fd0;
        in_stack_00002b38 = (undefined1 *)0x0;
        FUN_100812dc0(&stack0x00002bf0);
      }
      else {
LAB_1008426c0:
        uVar28 = 
        ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5958a1dc731de88eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00002b58);
          if (iVar6 != 0) {
            in_stack_00001ef0 = &stack0x000018b0;
            plVar48 = (long *)&stack0x00001ef0;
            pcVar47 = s_overwrites_P_from_builder_have_b_108ac8692;
            in_stack_00002b38 = (undefined1 *)0x0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar28,puVar2,puVar1,&stack0x00002a30,&stack0x00002bf0);
          }
        }
      }
      if (((short)uVar21 != 2) && (8 < uVar9)) {
        _free(uVar27);
      }
    }
    else {
      in_stack_00001ef0 = *(undefined1 **)(unaff_x19 + 0x510);
      __ZN15rama_http_types5proto2h25frame7setting14SettingsConfig5merge17h4bdb6178d1a52c0dE
                (&stack0x00002c70,&stack0x00001ef0);
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        if (bRam000000010b637188 - 1 < 2) {
LAB_1008429d8:
          uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h18ce71fca14efdafE
                            );
          if ((uVar9 & 1) != 0) {
            pcVar47 = &stack0x00002a30;
            plVar48 = (long *)&UNK_10b208fd0;
            in_stack_00001ef0 = (undefined1 *)0x0;
            FUN_100812b48(&stack0x00001ef0);
            goto LAB_100842b2c;
          }
        }
        else if (bRam000000010b637188 != 0) {
          cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h18ce71fca14efdafE
                            );
          unaff_x26 = &stack0x00002598;
          if (cVar5 != '\0') goto LAB_1008429d8;
        }
      }
      lVar18 = 
      ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h18ce71fca14efdafE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar12 = *(undefined1 **)
                   (
                   ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h18ce71fca14efdafE
                   + 0x28);
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00002b40);
        if (iVar6 != 0) {
          plVar48 = (long *)&stack0x00002a30;
          pcVar47 = s_Xoverwrites_from_builder_have_be_108ac86f2;
          in_stack_00001ef0 = (undefined1 *)0x0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar18,puVar2,puVar1,&stack0x00002bf0,&stack0x00001ef0);
          in_stack_00002b38 = puVar12;
        }
      }
    }
  }
LAB_100842b2c:
  uVar21 = CONCAT26(in_stack_00002c8e,in_stack_00002c88);
  uVar25 = (uint)*(ushort *)(unaff_x25 + 0x40);
  *(ushort *)(unaff_x26 + 0x4d8) = *(ushort *)(unaff_x25 + 0x40);
  uVar42 = (uint)(CONCAT26(in_stack_00002c96,in_stack_00002c90) >> 0x20);
  if (((in_stack_00002c90 & 1) != 0) &&
     (in_stack_00003220 = (undefined1 *)(ulong)uVar42, in_stack_000027d0 = in_stack_00003220,
     0xffbfff < uVar42 - 0x4000)) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb0600,0x5e,&UNK_10b223260);
    goto LAB_1008447d0;
  }
  in_stack_000000d0 = CONCAT44(in_stack_000000d0._4_4_,uVar25);
  puStack00000000000000c0 = in_stack_00003220;
  if (((in_stack_00002c98 & 1) != 0) &&
     (puStack00000000000000c0 =
           (undefined1 *)(CONCAT26(in_stack_00002c9e,in_stack_00002c98) >> 0x20),
     in_stack_000027d0 == (undefined1 *)0x0)) {
    FUN_107c05cb8(&UNK_10b3fb540);
    goto LAB_1008447d0;
  }
  in_stack_000000a0 = (undefined8 *)CONCAT44(in_stack_000000a0._4_4_,(int)in_stack_00002c90);
  puVar22 = (undefined8 *)((ulong)in_stack_00002c70 & 0xffffffff);
  in_stack_00000090 = (long *)CONCAT44(in_stack_00000090._4_4_,(uint)in_stack_00002ce8);
  plVar13 = in_stack_00002c70;
  plVar43 = in_stack_00002c78;
  puVar12 = in_stack_00002c80;
  uVar45 = in_stack_00002c88;
  if (uVar25 != 2) {
    FUN_101144b20(&stack0x000018b0,&stack0x00002a70);
    plVar13 = (long *)CONCAT17(uVar33,CONCAT16(uVar15,CONCAT42(uVar32,uVar31)));
    plVar43 = (long *)CONCAT26(uVar36,CONCAT42(uVar35,uVar34));
    puVar12 = (undefined1 *)CONCAT26(uVar38,uVar37);
    uVar45 = uVar39;
    in_stack_00002c8e = in_stack_000018d0;
  }
  uVar37 = SUB86(plVar43,0);
  uVar21 = CONCAT44((int)((ulong)uVar21 >> 0x20),(int)in_stack_00002c88);
  puVar11 = (undefined8 *)CONCAT44(uVar42,(int)in_stack_00002c90);
  lVar18 = CONCAT44((int)puStack00000000000000c0,(int)in_stack_00002c98);
  plVar19 = (long *)CONCAT71((int7)((ulong)in_stack_00001ef0 >> 8),4);
  puVar7 = (undefined1 *)FUN_1007efd48(&stack0x00002678,&stack0x00001ef0);
  if (((uint)puVar7 & 0xff) == 0xf) {
    _memcpy(&stack0x00001ef0,&stack0x00002640,0x3f0);
    uVar28 = *(undefined8 *)(unaff_x19 + 0x4d0);
    lVar26 = *(long *)(unaff_x19 + 0x4c8);
    uVar9 = *(ulong *)(unaff_x19 + 0x4e0);
    *(undefined1 *)(unaff_x19 + 0x5f2) = 0;
    pcVar46 = (char *)unaff_x28[0x3e];
    __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new14streams_config17hd93fa91267f1dfbbE
              (&stack0x00003220,&stack0x00003030);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      lVar20 = lVar18 << 5;
      lVar8 = _malloc(lVar20);
      if (lVar8 == 0) {
        func_0x0001087c9084(8,lVar20);
        goto LAB_1008447d0;
      }
      lVar17 = 0;
      puVar22 = puVar11;
      puVar23 = (undefined8 *)(lVar8 + 0x10);
      do {
        if (lVar20 == 0) break;
        auVar29 = (**(code **)(puVar22[1] + 0x30))(*puVar22);
        lVar17 = lVar17 + 1;
        *(undefined1 (*) [16])(puVar23 + -2) = auVar29;
        puVar3 = puVar22 + 3;
        uVar27 = puVar22[2];
        puVar22 = puVar22 + 4;
        puVar23[1] = *puVar3;
        *puVar23 = uVar27;
        lVar20 = lVar20 + -0x20;
        puVar23 = puVar23 + 4;
      } while (lVar18 != lVar17);
    }
    puVar22 = (undefined8 *)&stack0x00001ef0;
    __ZN14rama_http_core2h25proto7streams7streams5Inner7try_new17hea367c8fb18f10b4E
              (&stack0x00003310,0,&stack0x00003340,&stack0x000032d0);
    bVar40 = (byte)pcVar47;
    if (bVar40 != 4) {
      bVar41 = (byte)((ulong)pcVar47 >> 8);
      _uStack00000000000000b0 = (long *)((ulong)pcVar47 >> 0x20);
      if ((in_stack_00002a70 != 2) && ((long *)0x8 < in_stack_00002cd8)) {
        _free(in_stack_00002cc0);
      }
      if ((lVar26 != 0) && (5 < uVar9)) {
        _free(uVar28);
      }
      FUN_100e71724(&stack0x00003068);
      FUN_100dc2b64(&stack0x00001ef0);
      in_stack_00002cd8 = plVar48;
      in_stack_000000a0 = in_stack_00003330;
      puStack00000000000000c0 = in_stack_00003320;
      in_stack_000000d0 = in_stack_00003328;
LAB_10084419c:
      uVar25 = (uint)bVar40;
      puVar7 = (undefined1 *)(ulong)bVar41;
      if (uVar25 == 1 || bVar40 == 0) {
        plVar48 = plVar13;
        if (uVar25 == 0) {
          in_stack_00002cd8 = (long *)((ulong)in_stack_00002cd8 & 0xffffffff);
        }
      }
      else {
        plVar48 = plVar13;
        if (uVar25 == 2) {
          if (in_stack_00002cd8 == (long *)0x8000000000000000) {
            in_stack_00002cd8 = (long *)((long)puVar7 << 0x20 | 3);
          }
          else {
            in_stack_00002cd8 =
                 (long *)__ZN3std2io5error5Error3new17h29bf53227769a2d6E(puVar7,&stack0x00001ef0);
          }
          uVar25 = 4;
        }
      }
      goto LAB_100843498;
    }
    plVar16 = (long *)0x1;
    puVar7 = (undefined1 *)0x0;
    plVar10 = (long *)_malloc(0x40);
    if (plVar10 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
      goto LAB_1008447d0;
    }
    plVar10[1] = 1;
    *plVar10 = 1;
    plVar10[3] = 0;
    plVar10[2] = 0;
    plVar10[5] = 0;
    plVar10[4] = 8;
    plVar10[7] = 0;
    plVar10[6] = 0;
    __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x000032d0);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b636840 - 1 < 2 ||
         ((bRam000000010b636840 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new10__CALLSITE17h06cb061659e8cbf2E
                             ), cVar5 != '\0')))))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new10__CALLSITE17h06cb061659e8cbf2E
                          ), iVar6 != 0)) {
      FUN_10075259c(&stack0x00003310,&stack0x00003220);
      plVar16 = plVar48;
      puVar7 = in_stack_00003320;
    }
    else {
      pcVar47 = (char *)0x2;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00003340,&stack0x00003220);
      }
    }
    if (pcVar47 == (char *)0x2) {
      FUN_100dddd8c(&stack0x00003220);
    }
    else {
      FUN_1061c1edc(&stack0x00003340);
      if (lVar18 != 2) {
        (**(code **)(puVar7 + 0x48))(plVar16,&stack0x00003328,&stack0x00003340);
      }
    }
    bVar40 = (byte)in_stack_00002c70;
    bVar41 = (byte)((ulong)in_stack_00002c70 >> 8);
    uVar42 = (uint)((ulong)in_stack_00002c70 >> 0x20);
    _uStack00000000000000b0 = (long *)(ulong)uVar42;
    _memcpy(&stack0x00002c70,&stack0x00001f20,0x3c0);
    puVar22 = (undefined8 *)&stack0x00003030;
    if ((lVar26 != 0) && (5 < uVar9)) {
      _free(uVar28);
    }
    FUN_100e71724(&stack0x00003068);
    in_stack_00002cd8 = in_stack_00002c78;
    in_stack_00000090 = plVar48;
    in_stack_000000a0 = puVar11;
    puStack00000000000000c0 = in_stack_00002c80;
    in_stack_000000d0 = uVar21;
    in_stack_00002b38 = in_stack_00002c80;
    if (plVar19 == (long *)0x2) goto LAB_10084419c;
    _memcpy(&stack0x000018e0,&stack0x00002c70,0x3c0);
    in_stack_000018d0 = (undefined2)in_stack_00002c88;
    in_stack_000018d2 = (undefined6)((ulong)uVar21 >> 0x10);
    plVar43 = plVar48 + 2;
    if ((char)*plVar43 == '\0') {
      *(char *)plVar43 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (plVar43,extraout_x1,1000000000);
    }
    plVar48[0x53] = plVar48[0x53] + 1;
    if ((char)*plVar43 == '\x01') {
      *(char *)plVar43 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar43,0);
    }
    lVar18 = *plVar48;
    *plVar48 = lVar18 + 1;
    if ((lVar18 < 0) || (lVar18 = *plVar10, *plVar10 = lVar18 + 1, lVar18 < 0)) goto LAB_1008447d0;
    puVar44 = (undefined1 *)0x0;
    plVar16 = (long *)&stack0x00001ef0;
    _memcpy(&stack0x00001ef0,&stack0x000018b0,0x5c0);
    plVar43 = plVar10;
    puVar12 = puVar44;
    if (*(int *)(unaff_x19 + 0x508) == 1) {
      iVar6 = *(int *)(unaff_x19 + 0x50c);
      if (iVar6 < 0) {
        uVar25 = 3;
      }
      else {
        pcVar47 = (char *)(in_stack_00002478 + 0x10);
        if (*pcVar47 == '\0') {
          *pcVar47 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar47,extraout_x1_00,1000000000);
        }
        auVar30 = __ZN14rama_http_core2h25proto7streams4recv4Recv28set_target_connection_window17h0b93032c248265a8E
                            (in_stack_00002478 + 0xb8,iVar6,in_stack_00002478 + 0x180);
        _uStack00000000000000b0 = (long *)(ulong)auVar30._8_4_;
        if (*pcVar47 == '\x01') {
          *pcVar47 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar47,0);
        }
        if ((auVar30._0_8_ & 1) == 0) goto LAB_100844408;
        uVar25 = 2;
      }
      FUN_100d615cc(&stack0x00001ef0);
      FUN_100d04b78(&stack0x00002c70);
      in_stack_00002cd8 = (long *)&stack0x00001ef0;
      puVar7 = (undefined1 *)0xd;
      goto LAB_100843498;
    }
LAB_100844408:
    in_stack_00003150 = CONCAT26(in_stack_00002c8e,uVar45);
    uVar25 = (uint)bVar40;
    puVar7 = (undefined1 *)((ulong)in_stack_00002c70 >> 8 & 0xff);
    uVar31 = (undefined2)((ulong)in_stack_00002c70 >> 0x10);
    _uStack00000000000000b0 = (long *)(ulong)uVar42;
    _memcpy(&stack0x00000140,&stack0x00001f20,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f5) = 0;
    *(undefined4 *)(unaff_x19 + 0x5f1) = 0;
    _memcpy(&stack0x00000730,&stack0x00000140,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f0) = 1;
    if (plVar19 == (long *)0x3) {
      *in_stack_000000e8 = 4;
      uVar15 = 3;
      goto LAB_100843e88;
    }
  }
  else {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b637200 - 1 < 2 ||
         ((bRam000000010b637200 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                             ), cVar5 != '\0')))) &&
        (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                           ), (uVar9 & 1) != 0)))) {
      plVar43 = (long *)&
                        __ZN82__LT_rama_http_core__h2__codec__error__UserError_u20_as_u20_core__fmt__Display_GT_3fmt17h6902e26fbc02cc12E
      ;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                 ,&stack0x00001ef0);
      puVar11 = 
      ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
      ;
      plVar48 = (long *)&stack0x00002ba7;
      pcVar46 = s_5h2_client__invalid_SETTINGS_fra_108ac87f6;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000018b0);
        puVar22 = puVar11;
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar11,puVar2,puVar1,&stack0x000018b0,&stack0x00001ef0);
        }
      }
    }
    else {
      puVar11 = 
      ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
      ;
      plVar48 = plVar13;
      pcVar46 = (char *)in_stack_00002c70;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00002ba8);
        puVar22 = puVar11;
        if (iVar6 != 0) {
          plVar48 = (long *)&stack0x00002ba7;
          plVar43 = (long *)&
                            __ZN82__LT_rama_http_core__h2__codec__error__UserError_u20_as_u20_core__fmt__Display_GT_3fmt17h6902e26fbc02cc12E
          ;
          pcVar46 = s_5h2_client__invalid_SETTINGS_fra_108ac87f6;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar11,puVar2,puVar1,&stack0x000018b0,&stack0x00001ef0);
        }
      }
    }
    FUN_100e71724(&stack0x00002ab0);
    if ((uVar25 != 2) && ((long *)0x8 < in_stack_00002cd8)) {
      _free(in_stack_00002cc0);
    }
    FUN_100dc2b64(&stack0x00002640);
    uVar25 = 3;
    _uStack00000000000000b0 = in_stack_00002cd8;
LAB_100843498:
    if (((((*(byte *)((long)unaff_x28 + 0x329) & 1) != 0) && (*(int *)(unaff_x19 + 0x510) != 2)) &&
        (*(char *)(unaff_x19 + 0x5f3) == '\x01')) &&
       ((*(short *)(unaff_x19 + 0x550) != 2 && (8 < *(ulong *)(unaff_x19 + 0x578))))) {
      _free(*(undefined8 *)(unaff_x19 + 0x560));
    }
    *(undefined1 *)(unaff_x19 + 0x5f1) = 0;
    if ((((*(byte *)(unaff_x19 + 0x5f2) & 1) != 0) && (*(long *)(unaff_x19 + 0x4c8) != 0)) &&
       (5 < *(ulong *)(unaff_x19 + 0x4e0))) {
      _free(*(undefined8 *)(unaff_x19 + 0x4d0));
    }
    plVar16 = (long *)((long)unaff_x28 + 0x329);
    lVar18 = *(long *)(unaff_x19 + 0x4f0);
    if ((lVar18 != -0x8000000000000000) && ((*(byte *)(unaff_x19 + 0x5f4) & 1) != 0)) {
      lVar8 = *(long *)(unaff_x19 + 0x4f8);
      lVar26 = *(long *)(unaff_x19 + 0x500);
      if (lVar26 != 0) {
        psVar24 = (short *)(lVar8 + 0x40);
        do {
          if (((*(uint *)(psVar24 + -0x20) < 2) && (*psVar24 != 2)) &&
             (8 < *(ulong *)(psVar24 + 0x14))) {
            _free(*(undefined8 *)(psVar24 + 8));
          }
          psVar24 = psVar24 + 0x40;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      puVar22 = unaff_x28;
      if (lVar18 != 0) {
        _free(lVar8);
      }
    }
    uVar31 = SUB82(puVar22,0);
    *(undefined4 *)plVar16 = 0;
    if ((*(byte *)(unaff_x19 + 0x5f5) & 1) != 0) {
      FUN_100deb62c(unaff_x19 + 0x480);
      func_0x000100e3c8d4(unaff_x19 + 0x4a0);
    }
    *(undefined1 *)(unaff_x19 + 0x5f5) = 0;
    _memcpy(&stack0x00000730,&stack0x00000140,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f0) = 1;
    plVar19 = (long *)0x2;
    in_stack_00002c78 = in_stack_00002cd8;
    plVar10 = in_stack_00003140;
    puVar44 = in_stack_00003148;
    in_stack_00002c80 = in_stack_00002b38;
  }
  _memcpy(&stack0x00000ce0,&stack0x00000730,0x590);
  FUN_100d90f60(in_stack_000000f0);
  if (plVar19 == (long *)0x2) {
    if (uVar25 - 4 < 2) {
      in_stack_00000140 = in_stack_00002c78;
      plVar48 = (long *)_malloc(0x18);
      if (plVar48 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1008447d0;
      }
      *plVar48 = 0;
      *(undefined1 *)(plVar48 + 2) = 6;
      puVar22 = (undefined8 *)_malloc(8);
      if (puVar22 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_1008447d0;
      }
      *puVar22 = in_stack_00002c78;
      *plVar48 = (long)puVar22;
      plVar48[1] = (long)&UNK_10b212e38;
      lVar18 = *(long *)(unaff_x19 + 0x2e0);
      puStack00000000000000c0 = puVar7;
    }
    else {
      plVar16 = (long *)((ulong)_uStack00000000000000b0 & 0xffffffff);
      plVar48 = (long *)_malloc(0x18);
      if (plVar48 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1008447d0;
      }
      *plVar48 = 0;
      *(undefined1 *)(plVar48 + 2) = 0xb;
      in_stack_00000140 = plVar48;
      puVar12 = (undefined1 *)_malloc(0x28);
      if (puVar12 == (undefined1 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        goto LAB_1008447d0;
      }
      *puVar12 = (char)uVar25;
      puVar12[1] = (char)puVar7;
      *(undefined2 *)(puVar12 + 2) = uVar31;
      *(undefined4 *)(puVar12 + 4) = uStack00000000000000b0;
      *(long **)(puVar12 + 8) = in_stack_00002c78;
      *(undefined1 **)(puVar12 + 0x10) = puStack00000000000000c0;
      *(undefined8 *)(puVar12 + 0x18) = in_stack_000000d0;
      *(undefined8 **)(puVar12 + 0x20) = in_stack_000000a0;
      *plVar48 = (long)puVar12;
      plVar48[1] = (long)&UNK_10b238a78;
      lVar18 = *(long *)(unaff_x19 + 0x2e0);
    }
joined_r0x000100843970:
    if (lVar18 != 4) {
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                (unaff_x19 + 0x2e0);
    }
    FUN_100d89ef4(unaff_x19 + 0x2c8);
    uVar21 = 3;
    plVar10 = in_stack_00002568;
    puVar44 = in_stack_00002570;
    in_stack_00003150 = in_stack_00002578;
    plVar19 = in_stack_00002580;
    puVar11 = in_stack_00002588;
    uVar9 = in_stack_00002590;
  }
  else {
    uStack000000000000014c = uStack00000000000000b0;
    in_stack_00000158 = puStack00000000000000c0;
    in_stack_00000160 = in_stack_000000d0;
    in_stack_00000168 = in_stack_000000a0;
    uStack0000000000000148 = (char)uVar25;
    uStack0000000000000149 = (char)puVar7;
    uStack000000000000014a = uVar31;
    in_stack_00000150 = in_stack_00002c78;
    _memcpy(&stack0x00000170,&stack0x00000ce0,0x590);
    in_stack_00000140 = plVar19;
    puVar22 = (undefined8 *)_malloc(8);
    if (puVar22 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
LAB_1008447d0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008447d4);
      (*pcVar4)();
    }
    *puVar22 = 0;
    lVar18 = _calloc(0x10,1);
    if (lVar18 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_1008447d0;
    }
    plVar19 = (long *)_malloc(0x60);
    if (plVar19 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x60);
      goto LAB_1008447d0;
    }
    plVar19[5] = lVar18;
    plVar19[4] = lVar18;
    plVar19[7] = -0x8000000000000000;
    plVar19[6] = 1;
    plVar19[9] = 0;
    plVar19[8] = 1;
    plVar19[0xb] = 0;
    plVar19[10] = CONCAT62(uVar37,(short)((ulong)plVar13 >> 0x30));
    plVar19[1] = 1;
    *plVar19 = 1;
    plVar19[3] = (long)puVar22;
    plVar19[2] = (long)puVar22;
    lVar26 = *plVar19;
    *plVar19 = lVar26 + 1;
    if (lVar26 < 0) goto LAB_1008447d0;
    puStack00000000000000c0 = &stack0x00001ef0;
    puVar11 = (undefined8 *)_malloc(0x38);
    if (puVar11 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_1008447d0;
    }
    puVar11[1] = 1;
    *puVar11 = 1;
    puVar11[3] = (ulong)puVar22 & 0xffffffffffffff00;
    puVar11[2] = 0;
    puVar11[5] = lVar18;
    puVar11[4] = 0;
    puVar11[6] = 0;
    uVar9 = (ulong)in_stack_00002c80 & 0xffffffffffffff00;
    plVar16 = (long *)_malloc(0x48);
    if (plVar16 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
      goto LAB_1008447d0;
    }
    plVar16[5] = 0;
    plVar16[4] = 0;
    plVar16[7] = -0x8000000000000000;
    plVar16[6] = 0;
    plVar16[8] = 0;
    plVar16[1] = 1;
    *plVar16 = 1;
    plVar16[3] = (ulong)puVar22 & 0xffffffffffffff00;
    plVar16[2] = 0;
    lVar18 = *plVar16;
    *plVar16 = lVar18 + 1;
    if (lVar18 < 0) goto LAB_1008447d0;
    if ((*(char *)(*(long *)(unaff_x19 + 0x2d8) + 0xb8) == '\0') &&
       (*(int *)(*(long *)(unaff_x19 + 0x2d8) + 0x60) == 1000000000)) {
      _memcpy(&stack0x00001ef0,&stack0x00000140,0x5c0);
      puStack00000000000000c0 = (undefined1 *)0x0;
    }
    else {
      if (in_stack_000006a0 != 0) {
        plVar48 = (long *)_malloc(0x18);
        if (plVar48 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1008447d0;
        }
        *plVar48 = 0;
        *(undefined2 *)(plVar48 + 2) = 0xc00;
        puVar22 = (undefined8 *)_malloc(0x10);
        if (puVar22 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_1008447d0;
        }
        *puVar22 = &UNK_108cb131f;
        puVar22[1] = 0x5c;
        *plVar48 = (long)puVar22;
        plVar48[1] = (long)&UNK_10b209930;
        FUN_100e633f0(&stack0x00003310);
        FUN_100e5aa64(&stack0x000032d0);
        FUN_100e572d0(&stack0x00002ab0);
        FUN_100e50a70(&stack0x00002bf0);
        FUN_10081075c(in_stack_000006c8 + 0x10,in_stack_000006d0 + 0x10,1);
        plVar16 = (long *)&stack0x00000140;
        FUN_100dc2b64(&stack0x00000140);
        FUN_100d803d8(&stack0x00000530);
        FUN_100d04b78(&stack0x00003220);
        lVar18 = *(long *)(unaff_x19 + 0x2e0);
        goto joined_r0x000100843970;
      }
      plVar13 = (long *)_malloc(0x48);
      if (plVar13 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
        goto LAB_1008447d0;
      }
      plVar13[5] = 0;
      plVar13[4] = CONCAT62(in_stack_000018d2,in_stack_000018d0);
      plVar13[7] = in_stack_000018e8;
      plVar13[6] = 0;
      plVar13[8] = 0;
      plVar13[1] = 1;
      *plVar13 = 1;
      plVar13[3] = 0;
      plVar13[2] = 0;
      lVar18 = *plVar13;
      *plVar13 = lVar18 + 1;
      if (lVar18 < 0) goto LAB_1008447d0;
      __ZN14rama_http_core5proto2h24ping7channel17he8214c6d5ff94b35E
                (&stack0x000018b0,plVar13,&stack0x00002640);
      puStack00000000000000c0 = (undefined1 *)0x1;
      in_stack_00000740 = (undefined1 *)CONCAT62(in_stack_000018d2,in_stack_000018d0);
      in_stack_00000738 = (long *)0x0;
      _memcpy(&stack0x00001288,&stack0x00000148,0x5b8);
      _memcpy(&stack0x00001ef0,&stack0x00001288,0x5c0);
    }
    _memcpy(&stack0x000018b8,&stack0x00001ef0,0x5c0);
    __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x00003030);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b637a28 - 1 < 2 ||
         ((bRam000000010b637a28 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h26client22handshake_with_builder28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb94939c6d9da9b9dE
                             ), cVar5 != '\0')))))) &&
       (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h26client22handshake_with_builder28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb94939c6d9da9b9dE
                           ), (uVar14 & 1) != 0)) {
      FUN_10075259c(&stack0x00002c70,&stack0x00003340);
      in_stack_00000738 = plVar43;
      in_stack_00000740 = puVar12;
    }
    else {
      plVar48 = (long *)0x2;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00000730,&stack0x00003340);
      }
    }
    if (plVar48 == (long *)0x2) {
      FUN_100dddd8c(&stack0x00000730);
    }
    else {
      FUN_1061c1edc(&stack0x00001ef0);
      if ((long *)pcVar46 != (long *)0x2) {
        if (((ulong)plVar48 & 1) != 0) {
          in_stack_00000738 =
               (long *)((long)in_stack_00000738 +
                       (*(long *)(in_stack_00000740 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(in_stack_00000740 + 0x48))(in_stack_00000738,&stack0x00002c88,&stack0x00001ef0)
        ;
      }
    }
    plVar48 = (long *)(unaff_x19 + 0x2e0);
    _memcpy(&stack0x00001f18,&stack0x000018b0,0x638);
    plVar13 = (long *)FUN_1016eb6ac(plVar48,&stack0x00001ef0);
    if (*plVar13 == 0xcc) {
      *plVar13 = 0x84;
    }
    else {
      (**(code **)(plVar13[2] + 0x20))();
    }
    in_stack_00002610 = *(undefined8 *)(unaff_x19 + 0x308);
    in_stack_00002608 = *(undefined8 *)(unaff_x19 + 0x300);
    in_stack_00002620 = *(undefined8 *)(unaff_x19 + 0x318);
    in_stack_00002618 = *(undefined8 *)(unaff_x19 + 0x310);
    in_stack_00002630 = *(undefined8 *)(unaff_x19 + 0x328);
    in_stack_00002628 = *(undefined8 *)(unaff_x19 + 800);
    in_stack_00002638 = *(undefined8 *)(unaff_x19 + 0x330);
    in_stack_000025f0 = *(undefined8 *)(unaff_x19 + 0x2e8);
    in_stack_000025e8 = *plVar48;
    in_stack_00002600 = *(undefined8 *)(unaff_x19 + 0x2f8);
    in_stack_000025f8 = *(undefined8 *)(unaff_x19 + 0x2f0);
    uVar21 = 2;
    in_stack_000000f8 = unaff_x28[1];
    in_stack_000000f0 = *unaff_x28;
    in_stack_00002560 = in_stack_00000090;
  }
  func_0x000100e00ca0(unaff_x19 + 0x1b8);
  in_stack_000000e8[0x13] = in_stack_00002620;
  in_stack_000000e8[0x12] = in_stack_00002618;
  in_stack_000000e8[0x15] = in_stack_00002630;
  in_stack_000000e8[0x14] = in_stack_00002628;
  in_stack_000000e8[0xb] = in_stack_000025e0;
  in_stack_000000e8[10] = in_stack_000025d8;
  in_stack_000000e8[0xd] = in_stack_000025f0;
  in_stack_000000e8[0xc] = in_stack_000025e8;
  in_stack_000000e8[0xf] = in_stack_00002600;
  in_stack_000000e8[0xe] = in_stack_000025f8;
  in_stack_000000e8[0x11] = in_stack_00002610;
  in_stack_000000e8[0x10] = in_stack_00002608;
  in_stack_000000e8[3] = in_stack_000025a0;
  in_stack_000000e8[2] = in_stack_00002598;
  in_stack_000000e8[5] = in_stack_000025b0;
  in_stack_000000e8[4] = in_stack_000025a8;
  in_stack_000000e8[7] = in_stack_000025c0;
  in_stack_000000e8[6] = in_stack_000025b8;
  in_stack_000000e8[9] = in_stack_000025d0;
  in_stack_000000e8[8] = in_stack_000025c8;
  in_stack_000000e8[0x18] = puVar11;
  in_stack_000000e8[0x17] = plVar19;
  in_stack_000000e8[0x1c] = plVar10;
  in_stack_000000e8[0x1b] = in_stack_00002560;
  *in_stack_000000e8 = uVar21;
  in_stack_000000e8[1] = plVar48;
  in_stack_000000e8[0x16] = in_stack_00002638;
  in_stack_000000e8[0x19] = uVar9;
  in_stack_000000e8[0x1a] = plVar16;
  in_stack_000000e8[0x1e] = in_stack_00003150;
  in_stack_000000e8[0x1d] = puVar44;
  in_stack_000000e8[0x20] = in_stack_000000f8;
  in_stack_000000e8[0x1f] = in_stack_000000f0;
  uVar15 = 1;
  in_stack_000000e8[0x21] = puStack00000000000000c0;
LAB_100843e88:
  *(undefined1 *)(unaff_x19 + 0x5f8) = uVar15;
  return;
}

