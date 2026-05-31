
/* WARNING: Removing unreachable block (ram,0x00010041bd60) */
/* WARNING: Removing unreachable block (ram,0x00010041bd94) */
/* WARNING: Removing unreachable block (ram,0x00010041bdbc) */
/* WARNING: Removing unreachable block (ram,0x00010041bdc0) */
/* WARNING: Removing unreachable block (ram,0x00010041bc4c) */
/* WARNING: Removing unreachable block (ram,0x00010041bc80) */
/* WARNING: Removing unreachable block (ram,0x00010041bca8) */
/* WARNING: Removing unreachable block (ram,0x00010041bcac) */
/* WARNING: Removing unreachable block (ram,0x00010041bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010041bde8) */
/* WARNING: Removing unreachable block (ram,0x00010041bdf4) */
/* WARNING: Removing unreachable block (ram,0x00010041be04) */
/* WARNING: Removing unreachable block (ram,0x00010041be18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10041ab0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  long lVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  int extraout_w1;
  undefined8 *puVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  int extraout_w9;
  undefined1 uVar37;
  long extraout_x10;
  undefined8 *puVar38;
  ulong uVar39;
  ulong uVar40;
  long unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong uVar41;
  undefined *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  ulong unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  byte bVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  long lVar48;
  undefined8 uVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  undefined8 unaff_d8;
  char cVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 *in_stack_00000028;
  undefined *in_stack_00000040;
  undefined8 in_stack_00000090;
  long *in_stack_000000a0;
  undefined *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  long *in_stack_000000f0;
  ulong *in_stack_000000f8;
  ulong in_stack_00001080;
  undefined *in_stack_00001088;
  undefined *puVar60;
  ulong in_stack_00001090;
  undefined *in_stack_00001098;
  ulong in_stack_000010a0;
  ulong in_stack_000010a8;
  ulong in_stack_000010b0;
  ulong in_stack_000010b8;
  undefined8 in_stack_000010c0;
  undefined8 in_stack_000010c8;
  undefined8 in_stack_000010d0;
  undefined8 in_stack_000010d8;
  undefined8 in_stack_000010e0;
  undefined8 in_stack_000010e8;
  undefined8 in_stack_000010f0;
  undefined8 in_stack_000010f8;
  undefined8 in_stack_00001100;
  undefined8 in_stack_00001108;
  undefined8 in_stack_00001110;
  undefined8 in_stack_00001118;
  undefined8 in_stack_00001120;
  undefined8 in_stack_00001128;
  undefined8 in_stack_00001130;
  undefined8 in_stack_00001138;
  undefined8 in_stack_00001140;
  undefined8 in_stack_00001148;
  long *in_stack_00001150;
  undefined8 in_stack_00001158;
  undefined6 uVar61;
  undefined2 uVar62;
  undefined6 uVar63;
  undefined *puVar64;
  ulong in_stack_00002020;
  ulong in_stack_00002028;
  undefined8 in_stack_00002030;
  undefined8 in_stack_00002038;
  undefined8 in_stack_00002040;
  undefined8 in_stack_00002048;
  undefined8 in_stack_00002050;
  undefined8 in_stack_00002058;
  undefined8 in_stack_00002060;
  undefined8 in_stack_00002068;
  undefined8 in_stack_00002070;
  undefined8 in_stack_00002078;
  undefined8 in_stack_00002080;
  undefined8 in_stack_00002088;
  undefined8 in_stack_00002090;
  undefined8 in_stack_00002098;
  undefined8 in_stack_000020a0;
  char in_stack_000020a8;
  undefined7 in_stack_000020a9;
  undefined8 in_stack_000020b0;
  undefined8 in_stack_000020b8;
  long *in_stack_000020c0;
  undefined8 in_stack_000020c8;
  
code_r0x00010041ab0c:
  puVar64 = &stack0x00001080;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
            (unaff_x22,in_stack_00000040,in_stack_000000b0,&stack0x000015f0,&stack0x000019d0);
LAB_10041ad58:
  unaff_x25[0x48] = unaff_x25[0x48] + 1;
  if (((unaff_x26 < (ulong)unaff_x25[0x3c]) &&
      (plVar34 = (long *)(unaff_x25[0x3b] + (unaff_x26 & 0xffffffff) * 0x140), *plVar34 != 2)) &&
     (*(int *)((long)plVar34 + 0x124) == unaff_w24)) {
    if (((*(byte *)(plVar34 + 10) < 6) && (*(byte *)(plVar34 + 10) == 0)) &&
       (*(char *)((long)plVar34 + 0x51) == '\x02')) {
      if (unaff_x25[0xd] == 0) {
LAB_10041c2a4:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a71b49,0x33,&UNK_10b3aade8);
        goto LAB_10041c44c;
      }
      unaff_x25[0xd] = unaff_x25[0xd] + -1;
    }
    lVar25 = *unaff_x25;
    *unaff_x25 = lVar25 + unaff_x21;
    if (-1 < lVar25) {
      __ZN2h25proto7streams7streams15OpaqueStreamRef3new17h25789e99c7fe5e1aE
                (&stack0x00001080,unaff_x25,&stack0x00002300);
      lVar25 = **(long **)(unaff_x19 + 0x4d0);
      **(long **)(unaff_x19 + 0x4d0) = lVar25 + unaff_x21;
      uVar41 = in_stack_00001080;
      uVar3 = in_stack_000010b0;
      uVar4 = in_stack_000010b8;
      uVar5 = in_stack_000010c0;
      uVar6 = in_stack_000010c8;
      uVar7 = in_stack_000010d0;
      uVar8 = in_stack_000010d8;
      uVar9 = in_stack_000010e0;
      uVar10 = in_stack_000010e8;
      uVar11 = in_stack_000010f0;
      uVar12 = in_stack_000010f8;
      uVar13 = in_stack_00001100;
      uVar14 = in_stack_00001108;
      uVar15 = in_stack_00001110;
      uVar16 = in_stack_00001118;
      uVar17 = in_stack_00001120;
      uVar18 = in_stack_00001128;
      uVar19 = in_stack_00001130;
      uVar20 = in_stack_00001138;
      uVar21 = in_stack_00001140;
      uVar22 = in_stack_00001148;
      plVar34 = in_stack_00001150;
      uVar23 = in_stack_00001158;
      if (-1 < lVar25) {
        do {
          if ((((unaff_w20 & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar30 = FUN_107c05e34(), (uVar30 & 1) == 0)) {
            *(char *)(unaff_x25 + 3) = (char)unaff_x21;
          }
          _pthread_mutex_unlock(*unaff_x28);
          if (uVar41 == 0) {
LAB_10041bfb4:
            *in_stack_00000028 = 3;
            return;
          }
          uVar30 = unaff_x21;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
             (((bRam000000010b632a08 - 1 < 2 ||
               ((bRam000000010b632a08 != 0 &&
                (cVar26 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E
                                    ), cVar26 != '\0')))) &&
              (iVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E
                                  ), iVar27 != 0)))) {
            in_stack_00001098 =
                 (undefined *)
                 (
                 ___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E
                 + 0x30);
            puVar64 = (undefined *)0x0;
            puVar60 = &stack0x00002100;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E
                       ,&stack0x00001080);
            lVar25 = 
            ___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E;
            in_stack_00001090 = unaff_x21;
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
              iVar27 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000019d0);
              if (iVar27 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar25,puVar2,puVar1,&stack0x000019d0,&stack0x00001080);
              }
            }
          }
          else {
            lVar25 = 
            ___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E;
            uVar30 = in_stack_00001080;
            puVar60 = in_stack_00001088;
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
              iVar27 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000021f0);
              if (iVar27 != 0) {
                in_stack_00001098 =
                     (undefined *)
                     (
                     ___ZN2h26server23Connection_LT_T_C_B_GT_11poll_accept10__CALLSITE17h0e04ee55606bc605E
                     + 0x30);
                puVar64 = &UNK_10b208fd0;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar25,puVar2,puVar1,&stack0x000021f0,&stack0x00001080);
                uVar30 = unaff_x21;
                puVar60 = unaff_x23;
                in_stack_00001090 = unaff_x21;
              }
            }
          }
          if (*(long *)(uVar41 + 0x10) == 0) {
            thunk_FUN_108854158((undefined8 *)(uVar41 + 0x10));
          }
          iVar27 = _pthread_mutex_lock();
          if (iVar27 != 0) {
            thunk_FUN_108a81ad4();
            break;
          }
          if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
              0x7fffffffffffffff) == 0) {
            uVar28 = 0;
            cVar26 = *(char *)(uVar41 + 0x18);
          }
          else {
            uVar28 = FUN_107c05e34();
            uVar28 = uVar28 ^ 1;
            cVar26 = *(char *)(uVar41 + 0x18);
          }
          if (cVar26 != '\0') {
            FUN_107c05cb4(&UNK_108cc408f,0x2b,&stack0x00001080,&UNK_10b235160,&UNK_10b2338d8);
            break;
          }
          __ZN2h25proto7streams4recv4Recv12take_request17hc2bed79b2d870231E
                    (&stack0x00001080,uVar41 + 0x80,&stack0x000019d0);
          if ((((uVar28 & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar31 = FUN_107c05e34(), (uVar31 & 1) == 0)) {
            *(char *)(uVar41 + 0x18) = (char)unaff_x21;
          }
          _pthread_mutex_unlock(*(undefined8 *)(uVar41 + 0x10));
          uVar62 = (undefined2)in_stack_000010a8;
          uVar61 = (undefined6)(in_stack_000010a0 >> 0x10);
          __ZN83__LT_h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__clone__Clone_GT_5clone17ha677a560d4908892E
                    (&stack0x00001080,&stack0x000015f0);
          puVar38 = (undefined8 *)((ulong)puVar60 >> 8 & 0xff);
          uVar47 = CONCAT26((short)in_stack_00001098,(int6)(in_stack_00001090 >> 0x10));
          uVar43 = CONCAT26((short)in_stack_00001090,(int6)((ulong)puVar60 >> 0x10));
          uVar49 = CONCAT26((short)in_stack_000010a0,(int6)((ulong)in_stack_00001098 >> 0x10));
          uVar63 = (undefined6)(in_stack_000010a8 >> 0x10);
          uVar41 = uVar30;
          in_stack_000010b0 = uVar3;
          in_stack_000010b8 = uVar4;
          in_stack_000010c0 = uVar5;
          in_stack_000010c8 = uVar6;
          in_stack_000010d0 = uVar7;
          in_stack_000010d8 = uVar8;
          in_stack_000010e0 = uVar9;
          in_stack_000010e8 = uVar10;
          in_stack_000010f0 = uVar11;
          in_stack_000010f8 = uVar12;
          in_stack_00001100 = uVar13;
          in_stack_00001108 = uVar14;
          in_stack_00001110 = uVar15;
          in_stack_00001118 = uVar16;
          in_stack_00001120 = uVar17;
          in_stack_00001128 = uVar18;
          in_stack_00001130 = uVar19;
          in_stack_00001138 = uVar20;
          in_stack_00001140 = uVar21;
          in_stack_00001148 = uVar22;
          in_stack_00001150 = plVar34;
          in_stack_00001158 = uVar23;
          cVar26 = (char)puVar60;
          if (uVar30 == 5) goto LAB_10041bfb4;
LAB_10041b2f4:
          if (uVar41 == 3) {
            puVar32 = &stack0x00002418;
LAB_10041c008:
            lVar25 = __ZN5hyper5error5Error6new_h217hf6ea1918d9b2e865E(puVar32);
LAB_10041c00c:
            *in_stack_00000028 = 2;
            in_stack_00000028[1] = lVar25;
            return;
          }
          if (uVar41 == 4) {
            if ((*(int *)(unaff_x19 + 0x510) == 0x3b9aca01) ||
               (lVar25 = __ZN5hyper5proto2h24ping8Recorder20ensure_not_timed_out17h686ac72dd3e1738bE
                                   (in_stack_000000b8), lVar25 == 0)) {
LAB_10041c13c:
              *in_stack_00000028 = 0;
              return;
            }
            goto LAB_10041c00c;
          }
          puVar64 = (undefined *)
                    CONCAT62((int6)((ulong)puVar64 >> 0x10),CONCAT11((char)puVar38,cVar26));
          auVar59._8_8_ = puVar64;
          auVar59._0_8_ = uVar41;
          auVar58._8_8_ = puVar64;
          auVar58._0_8_ = uVar41;
          *(undefined8 *)(unaff_x23 + 0x12) = uVar47;
          *(undefined8 *)(unaff_x23 + 10) = uVar43;
          *(ulong *)(unaff_x23 + 0x22) = CONCAT26(uVar62,uVar61);
          *(undefined8 *)(unaff_x23 + 0x1a) = uVar49;
          *(ulong *)(unaff_x23 + 0x28) = CONCAT62(uVar63,uVar62);
          *(undefined8 *)(unaff_x23 + 0xb8) = uVar20;
          *(undefined8 *)(unaff_x23 + 0xb0) = uVar19;
          *(undefined8 *)(unaff_x23 + 200) = uVar22;
          *(undefined8 *)(unaff_x23 + 0xc0) = uVar21;
          *(undefined8 *)(unaff_x23 + 0xd8) = uVar23;
          *(long **)(unaff_x23 + 0xd0) = plVar34;
          *(undefined **)(unaff_x23 + 0xe8) = puVar60;
          *(ulong *)(unaff_x23 + 0xe0) = uVar30;
          *(undefined8 *)(unaff_x23 + 0x78) = uVar12;
          *(undefined8 *)(unaff_x23 + 0x70) = uVar11;
          *(undefined8 *)(unaff_x23 + 0x88) = uVar14;
          *(undefined8 *)(unaff_x23 + 0x80) = uVar13;
          *(undefined8 *)(unaff_x23 + 0x98) = uVar16;
          *(undefined8 *)(unaff_x23 + 0x90) = uVar15;
          *(undefined8 *)(unaff_x23 + 0xa8) = uVar18;
          *(undefined8 *)(unaff_x23 + 0xa0) = uVar17;
          *(ulong *)(unaff_x23 + 0x38) = uVar4;
          *(ulong *)(unaff_x23 + 0x30) = uVar3;
          *(undefined8 *)(unaff_x23 + 0x48) = uVar6;
          *(undefined8 *)(unaff_x23 + 0x40) = uVar5;
          *(undefined8 *)(unaff_x23 + 0x58) = uVar8;
          *(undefined8 *)(unaff_x23 + 0x50) = uVar7;
          *(undefined8 *)(unaff_x23 + 0x68) = uVar10;
          *(undefined8 *)(unaff_x23 + 0x60) = uVar9;
          auVar57 = __ZN5hyper7headers24content_length_parse_all17h81541aec8e145d35E
                              (&stack0x00001ff0);
          uVar41 = auVar57._8_8_;
          if (*(int *)(unaff_x19 + 0x510) == 0x3b9aca01) {
            plVar35 = (long *)0x0;
          }
          else {
            plVar36 = (long *)*in_stack_000000b8;
            plVar35 = (long *)0x0;
            if (plVar36 != (long *)0x0) {
              lVar25 = *plVar36;
              *plVar36 = lVar25 + unaff_x21;
              if (lVar25 < 0) break;
              plVar35 = (long *)*in_stack_000000b8;
            }
          }
          __ZN5hyper5proto2h24ping8Recorder15record_non_data17hffe7dec57e38d333E(&stack0x000019b0);
          if (in_stack_000020a8 == '\a') {
            if (((auVar57._0_8_ & 1) != 0) && (uVar41 != 0)) {
              FUN_100c27f80(&stack0x000020e0,2);
              func_0x000100de1ee0(&stack0x000021e0);
              FUN_100de01d8(&stack0x00002100);
              if (plVar35 != (long *)0x0) {
                lVar25 = *plVar35;
                *plVar35 = lVar25 + -1;
                LORelease();
                if (lVar25 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h8637da121dc559e8E(&stack0x000019b0);
                }
              }
              FUN_100ce249c(&stack0x000020e0);
              goto LAB_10041c13c;
            }
            __ZN5hyper7upgrade7pending17h7f5eef5ed42f502bE();
            auVar58 = FUN_100ea0398(&stack0x000021d0);
            plVar35 = auVar58._8_8_;
            if ((auVar58._0_8_ != 0) && (plVar35 != (long *)0x0)) {
              lVar25 = *plVar35;
              *plVar35 = lVar25 + -1;
              LORelease();
              if (lVar25 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2114fb496cb19f26E(&stack0x00001088);
              }
            }
          }
          else {
            in_stack_00001138 = CONCAT71(in_stack_000020a9,in_stack_000020a8);
            if (0xfffffffffffffffd < uVar41) {
              uVar41 = 0xfffffffffffffffe;
            }
            if ((auVar57._0_8_ & 1) == 0) {
              uVar41 = 0xfffffffffffffffe;
            }
            in_stack_000010b0 = in_stack_00002020;
            in_stack_000010b8 = in_stack_00002028;
            in_stack_000010c0 = in_stack_00002030;
            in_stack_000010c8 = in_stack_00002038;
            in_stack_000010d0 = in_stack_00002040;
            in_stack_000010d8 = in_stack_00002048;
            in_stack_000010e0 = in_stack_00002050;
            in_stack_000010e8 = in_stack_00002058;
            in_stack_000010f0 = in_stack_00002060;
            in_stack_000010f8 = in_stack_00002068;
            in_stack_00001100 = in_stack_00002070;
            in_stack_00001108 = in_stack_00002078;
            in_stack_00001110 = in_stack_00002080;
            in_stack_00001118 = in_stack_00002088;
            in_stack_00001120 = in_stack_00002090;
            in_stack_00001128 = in_stack_00002098;
            in_stack_00001130 = in_stack_000020a0;
            in_stack_00001140 = in_stack_000020b0;
            in_stack_00001148 = in_stack_000020b8;
            in_stack_00001150 = in_stack_000020c0;
            in_stack_00001158 = in_stack_000020c8;
            if (0xfffffffffffffffd < uVar41) {
              __ZN2h25share10RecvStream13is_end_stream17h32e681c0ed42d08bE(&stack0x000019d0);
              auVar58 = auVar59;
            }
          }
          if (in_stack_000020c0 != (long *)0x0) {
            lVar25 = 0;
            lVar29 = *in_stack_000020c0;
            uVar31 = in_stack_000020c0[1];
            uVar40 = uVar31 & 0x93253620ee2ed28a;
            uVar44 = *(undefined8 *)(lVar29 + uVar40);
            cVar50 = (char)((ulong)unaff_d8 >> 8);
            cVar51 = (char)((ulong)unaff_d8 >> 0x10);
            cVar52 = (char)((ulong)unaff_d8 >> 0x18);
            cVar53 = (char)((ulong)unaff_d8 >> 0x20);
            cVar54 = (char)((ulong)unaff_d8 >> 0x28);
            cVar55 = (char)((ulong)unaff_d8 >> 0x30);
            cVar56 = (char)((ulong)unaff_d8 >> 0x38);
            uVar41 = CONCAT17(-((char)((ulong)uVar44 >> 0x38) == cVar56),
                              CONCAT16(-((char)((ulong)uVar44 >> 0x30) == cVar55),
                                       CONCAT15(-((char)((ulong)uVar44 >> 0x28) == cVar54),
                                                CONCAT14(-((char)((ulong)uVar44 >> 0x20) == cVar53),
                                                         CONCAT13(-((char)((ulong)uVar44 >> 0x18) ==
                                                                   cVar52),CONCAT12(-((char)((ulong)
                                                  uVar44 >> 0x10) == cVar51),
                                                  CONCAT11(-((char)((ulong)uVar44 >> 8) == cVar50),
                                                           -((char)uVar44 == (char)unaff_d8))))))))
                     & 0x8080808080808080;
            while( true ) {
              while (uVar41 == 0) {
                bVar42 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar44 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar44 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar44 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar44 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar44 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar44 >> 8) ==
                                                                     -1),-((char)uVar44 == -1)))))))
                                            ),1);
                if ((bVar42 & 1) != 0) goto LAB_10041ba54;
                lVar25 = lVar25 + 8;
                uVar40 = uVar40 + lVar25 & uVar31;
                uVar44 = *(undefined8 *)(lVar29 + uVar40);
                uVar41 = CONCAT17(-((char)((ulong)uVar44 >> 0x38) == cVar56),
                                  CONCAT16(-((char)((ulong)uVar44 >> 0x30) == cVar55),
                                           CONCAT15(-((char)((ulong)uVar44 >> 0x28) == cVar54),
                                                    CONCAT14(-((char)((ulong)uVar44 >> 0x20) ==
                                                              cVar53),CONCAT13(-((char)((ulong)
                                                  uVar44 >> 0x18) == cVar52),
                                                  CONCAT12(-((char)((ulong)uVar44 >> 0x10) == cVar51
                                                            ),CONCAT11(-((char)((ulong)uVar44 >> 8)
                                                                        == cVar50),
                                                                       -((char)uVar44 ==
                                                                        (char)unaff_d8)))))))) &
                         0x8080808080808080;
              }
              uVar39 = (uVar41 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar41 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
              uVar39 = uVar40 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3) & uVar31;
              plVar35 = (long *)(lVar29 + -0x20 + uVar39 * -0x20);
              if (plVar35[1] == -0x6cdac9df11d12d76 && *plVar35 == -0xde46932433c31bb) break;
              uVar41 = uVar41 - 1 & uVar41;
            }
            puVar33 = (undefined8 *)(lVar29 + (uVar39 - 8 & uVar31));
            uVar44 = *puVar33;
            uVar45 = *(undefined8 *)(lVar29 + uVar39);
            uVar41 = CONCAT17(-((char)((ulong)uVar45 >> 0x38) == -1),
                              CONCAT16(-((char)((ulong)uVar45 >> 0x30) == -1),
                                       CONCAT15(-((char)((ulong)uVar45 >> 0x28) == -1),
                                                CONCAT14(-((char)((ulong)uVar45 >> 0x20) == -1),
                                                         CONCAT13(-((char)((ulong)uVar45 >> 0x18) ==
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar45 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar45 >> 8) == -1),
                                                           -((char)uVar45 == -1))))))));
            uVar41 = (uVar41 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar41 & 0x5555555555555555) << 1;
            uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
            uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
            uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
            if (((ulong)LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) >> 3) +
                ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar44 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar44 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar44 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar44 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar44 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar44 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar44 >> 8) ==
                                                                     -1),-((char)uVar44 == -1)))))))
                                        )) >> 3) < 8) {
              in_stack_000020c0[2] = in_stack_000020c0[2] + 1;
              uVar37 = 0xff;
            }
            else {
              uVar37 = 0x80;
            }
            *(undefined1 *)(lVar29 + uVar39) = uVar37;
            lVar29 = lVar29 + uVar39 * -0x20;
            *(undefined1 *)(puVar33 + 1) = uVar37;
            in_stack_000020c0[3] = in_stack_000020c0[3] + -1;
            if (*(long *)(lVar29 + -0x10) != 0) {
              auVar59 = (**(code **)(*(long *)(lVar29 + -8) + 0x38))();
              puVar33 = auVar59._8_8_;
              plVar36 = auVar59._0_8_;
              (*(code *)puVar33[3])(&stack0x00001080);
              plVar35 = plVar36;
              if (auVar58._0_8_ != -0xde46932433c31bb || auVar58._8_8_ != -0x6cdac9df11d12d76) {
                plVar35 = (long *)0x0;
                if ((code *)*puVar33 != (code *)0x0) {
                  (*(code *)*puVar33)(plVar36);
                }
                if (puVar33[1] != 0) {
                  _free(plVar36);
                }
              }
              if (plVar35 != (long *)0x0) {
                lVar29 = *plVar36;
                lVar48 = plVar36[2];
                lVar46 = plVar36[1];
                lVar25 = plVar36[3];
                _free(plVar35);
                if (lVar29 != 0) {
                  plVar35 = (long *)_malloc(0x20);
                  if (plVar35 == (long *)0x0) goto LAB_10041c27c;
                  *plVar35 = lVar29;
                  plVar35[2] = lVar48;
                  plVar35[1] = lVar46;
                  plVar35[3] = lVar25;
                  auVar58 = FUN_1016e77cc(in_stack_000020c0,&UNK_108cdd310,plVar35,&UNK_10b2345e8);
                  if (auVar58._0_8_ != 0) {
                    auVar58 = (**(code **)(auVar58._8_8_ + 0x38))();
                    puVar33 = auVar58._8_8_;
                    plVar36 = auVar58._0_8_;
                    (*(code *)puVar33[3])(&stack0x00001080);
                    plVar35 = plVar36;
                    if (lVar29 != 0x217492a65240f613 || lVar46 != -0x1da48ff665b092f8) {
                      plVar35 = (long *)0x0;
                      if ((code *)*puVar33 != (code *)0x0) {
                        (*(code *)*puVar33)(plVar36);
                      }
                      if (puVar33[1] != 0) {
                        _free(plVar36);
                      }
                    }
                    if (plVar35 != (long *)0x0) {
                      lVar29 = plVar36[1];
                      lVar25 = *plVar36;
                      lVar46 = plVar36[2];
                      _free(plVar35);
                      if (lVar25 != 0) {
                        (**(code **)(lVar25 + 0x20))(&stack0x000019e8,lVar29,lVar46);
                      }
                    }
                  }
                }
              }
            }
          }
LAB_10041ba54:
          lVar25 = *in_stack_000000f0;
          *in_stack_000000f0 = lVar25 + unaff_x21;
          if (lVar25 < 0) break;
          do {
            lVar25 = *unaff_x27;
            *unaff_x27 = lVar25 + unaff_x21;
          } while (lVar25 == 0);
          _memcpy(&stack0x00000b18,&stack0x000021f0,0x108);
          if ((char)in_stack_000000f8[9] == '\x01') {
LAB_10041bb08:
            _memcpy(&stack0x00000610,&stack0x00000b10,400);
            if (0x7ffffffffffffffe < *in_stack_000000f8) {
              FUN_107c05c9c(&UNK_10b2435a0);
              break;
            }
            *in_stack_000000f8 = *in_stack_000000f8 + 1;
            uVar41 = in_stack_000000f8[1];
            _memcpy(&stack0x000019d0,&stack0x00000b10,400);
            if (uVar41 != 2) {
              if ((uVar41 & 1) == 0) {
                plVar34 = (long *)in_stack_000000f8[2];
                lVar25 = *plVar34;
                *plVar34 = lVar25 + unaff_x21;
                if (lVar25 < 0) break;
                plVar35 = (long *)plVar34[0x5e];
                if (plVar35 == (long *)0x0) {
                  lVar25 = 0;
                  lVar29 = 0;
                }
                else {
                  lVar25 = *plVar35;
                  *plVar35 = lVar25 + unaff_x21;
                  if (lVar25 < 0) break;
                  lVar29 = plVar34[0x5f];
                  lVar25 = plVar34[0x5e];
                }
                _memcpy(&stack0x000015f4,&stack0x00000610,0x180);
                _memcpy((ulong)&stack0x00001080 | 0x34,&stack0x000015f0,0x184);
                in_stack_000000a0[1] = lVar29;
                *in_stack_000000a0 = lVar25;
                _posix_memalign(&stack0x00001ed0,0x80,0x200);
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
              }
              else {
                plVar34 = (long *)in_stack_000000f8[2];
                lVar25 = *plVar34;
                *plVar34 = lVar25 + unaff_x21;
                if (lVar25 < 0) break;
                plVar35 = (long *)plVar34[0x4a];
                if (plVar35 == (long *)0x0) {
                  lVar25 = 0;
                  lVar29 = 0;
                }
                else {
                  lVar25 = *plVar35;
                  *plVar35 = lVar25 + unaff_x21;
                  if (lVar25 < 0) break;
                  lVar29 = plVar34[0x4b];
                  lVar25 = plVar34[0x4a];
                }
                _memcpy(&stack0x000015f4,&stack0x00000610,0x180);
                _memcpy((ulong)&stack0x00001080 | 0x34,&stack0x000015f0,0x184);
                in_stack_000000a0[1] = lVar29;
                *in_stack_000000a0 = lVar25;
                _posix_memalign(&stack0x00001ed0,0x80,0x200);
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
              }
              break;
            }
            FUN_100ce249c(&stack0x00001b30);
            FUN_100e49d48(&stack0x000019d0);
            *in_stack_000000f8 = *in_stack_000000f8 - 1;
          }
          else {
            if ((char)in_stack_000000f8[9] != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (in_stack_000000f8,&DAT_100c35d48);
              *(char *)(in_stack_000000f8 + 9) = (char)unaff_x21;
              goto LAB_10041bb08;
            }
            FUN_100ce249c(&stack0x00000c70);
            FUN_100e49d48(&stack0x00000b10);
          }
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__108b1bd74,&stack0x00001080,&UNK_10b24c7c0);
          in_stack_00001088 = (undefined *)(unaff_x19 + 1000);
          in_stack_00001080 = unaff_x19 + 0x4c0;
          in_stack_00001090 = unaff_x19 + 0x4d8;
          in_stack_00001098 = (undefined *)(unaff_x19 + 0x4a0);
          in_stack_000010a0 = *(long *)((long)puVar38 + 0x16) + 0x10;
          in_stack_000010a8 = *(long *)((long)puVar38 + 0x1e) + 0x10;
          unaff_x23[0xc0] = 1;
          FUN_100c1abf0(&stack0x00001080,0x7fffffff);
          if (*(char *)(unaff_x19 + 0x4b1) != '\x02') {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a72a35,0x2d,&UNK_10b3abc40);
LAB_10041c27c:
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
            break;
          }
          *(undefined1 *)(unaff_x19 + 0x4b1) = 0;
          *puVar38 = 0x54fe9b8bf0a27b0b;
          if (*(long *)(unaff_x19 + 0x590) != 0) {
            FUN_100c2b46c(&stack0x00001080);
            if (unaff_x23[0x90] == '\x05') {
              lVar25 = *(long *)(unaff_x19 + 0x590);
              *(undefined8 *)(unaff_x19 + 0x590) = 0;
              if (lVar25 != 0) goto LAB_10041c00c;
              FUN_107c05cac(&UNK_108cc98ab,0x12,&UNK_10b23a048);
            }
            else if (unaff_x23[0x90] == '\x06') goto LAB_10041bfb4;
            puVar32 = &stack0x00002440;
            goto LAB_10041c008;
          }
          puVar33 = (undefined8 *)((ulong)&stack0x00001080 | 2);
          unaff_x23 = &stack0x00001ff0;
          in_stack_000000b8 = (undefined8 *)(unaff_x19 + 0x500);
          in_stack_000000f0 = *(long **)(unaff_x19 + 0x5c0);
          in_stack_000000f8 =
               (ulong *)(*
                        ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                        )();
          in_stack_000000a0 = (long *)(extraout_x10 + 0x1d8);
          if ((*(int *)(unaff_x19 + 0x510) != extraout_w9) &&
             (uVar28 = __ZN5hyper5proto2h24ping6Ponger4poll17h90b9cf223fed5cadE
                                 (unaff_x19 + 0x508,in_stack_00000090), uVar28 != 2)) {
            if ((uVar28 & 1) == 0) {
              FUN_100c2dcd0(*(undefined8 *)((long)puVar38 + 0x16));
              if (extraout_w1 < 0) {
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc3ad4,0x30,&UNK_10b233db8);
                goto LAB_10041c2a4;
              }
              in_stack_000010b8 = in_stack_000010b8 & 0xffffffffffffff00;
              in_stack_00001080 = in_stack_00001080 & 0xffffffff00000000;
              in_stack_00001088 = (undefined *)((ulong)in_stack_00001088 & 0xffffffff00000000);
              in_stack_000010a8 = in_stack_000010a8 & 0xffffffff00000000;
              in_stack_000010b0 = in_stack_000010b0 & 0xffffffff00000000;
              in_stack_00001090 = in_stack_00001090 & 0xffffffff00000000;
              in_stack_000010a0 = in_stack_000010a0 & 0xffffffff00000000;
              in_stack_00001098 = (undefined *)CONCAT44(extraout_w1,1);
              func_0x00010570e74c(unaff_x19 + 0x420,&stack0x00001080);
            }
            else {
              in_stack_000010a0 = *(long *)((long)puVar38 + 0x16) + 0x10;
              in_stack_000010a8 = *(long *)((long)puVar38 + 0x1e) + 0x10;
              in_stack_000010b0 = CONCAT71((int7)(in_stack_000010b0 >> 8),1);
              FUN_100c29984(&stack0x000010a0);
              *(undefined1 *)(unaff_x19 + 0x41d) = 1;
              __ZN2h25proto7go_away6GoAway11go_away_now17h55c1634ea022ebedE
                        ((undefined *)(unaff_x19 + 1000),&stack0x00000610);
              FUN_100c29538(&stack0x000010a0,&stack0x000019d0);
              in_stack_00001080 = unaff_x19 + 0x4c0;
              in_stack_00001088 = (undefined *)(unaff_x19 + 1000);
              in_stack_00001090 = unaff_x19 + 0x4d8;
              in_stack_00001098 = (undefined *)(unaff_x19 + 0x4a0);
            }
          }
          unaff_d8 = 0x4949494949494949;
          unaff_x27 = (long *)&__ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
          unaff_x21 = 1;
          FUN_100c2b46c(&stack0x00001080);
          cVar50 = (char)in_stack_00001080;
          if (cVar50 == '\x05') {
            uVar41 = 4;
            goto LAB_10041b2f4;
          }
          if (cVar50 != '\x06') {
            puVar38 = (undefined8 *)(in_stack_00001080 >> 8 & 0xff);
            uVar47 = puVar33[1];
            uVar43 = *puVar33;
            uVar49 = puVar33[2];
            uVar61 = (undefined6)puVar33[3];
            uVar62 = (undefined2)*(undefined8 *)((long)puVar33 + 0x1e);
            uVar63 = (undefined6)((ulong)*(undefined8 *)((long)puVar33 + 0x1e) >> 0x10);
            uVar41 = 3;
            cVar26 = cVar50;
            goto LAB_10041b2f4;
          }
          unaff_x25 = *(long **)((long)puVar38 + 0x16);
          unaff_x28 = unaff_x25 + 2;
          if (unaff_x25[2] == 0) {
            thunk_FUN_108854158(unaff_x28);
            iVar27 = _pthread_mutex_lock();
            if (iVar27 == 0) goto LAB_10041a9b4;
LAB_10041c1e8:
            thunk_FUN_108a81ad4();
LAB_10041c1ec:
            FUN_107c05cb4(&UNK_108cc408f,0x2b,&stack0x00001080,&UNK_10b235160,&UNK_10b233ae8);
            break;
          }
          iVar27 = _pthread_mutex_lock();
          if (iVar27 != 0) goto LAB_10041c1e8;
LAB_10041a9b4:
          if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
              0x7fffffffffffffff) == 0) {
            unaff_w20 = 0;
            cVar26 = (char)unaff_x25[3];
          }
          else {
            uVar28 = FUN_107c05e34();
            unaff_w20 = uVar28 ^ 1;
            cVar26 = (char)unaff_x25[3];
          }
          if (cVar26 != '\0') goto LAB_10041c1ec;
          func_0x000105709748(&stack0x00001080,(long)unaff_x25 + 0xe4,unaff_x25 + 0x3a);
          if (in_stack_00001080 != 0) goto code_r0x00010041a9f4;
          uVar41 = 0;
          uVar3 = in_stack_000010b0;
          uVar4 = in_stack_000010b8;
          uVar5 = in_stack_000010c0;
          uVar6 = in_stack_000010c8;
          uVar7 = in_stack_000010d0;
          uVar8 = in_stack_000010d8;
          uVar9 = in_stack_000010e0;
          uVar10 = in_stack_000010e8;
          uVar11 = in_stack_000010f0;
          uVar12 = in_stack_000010f8;
          uVar13 = in_stack_00001100;
          uVar14 = in_stack_00001108;
          uVar15 = in_stack_00001110;
          uVar16 = in_stack_00001118;
          uVar17 = in_stack_00001120;
          uVar18 = in_stack_00001128;
          uVar19 = in_stack_00001130;
          uVar20 = in_stack_00001138;
          uVar21 = in_stack_00001140;
          uVar22 = in_stack_00001148;
          plVar34 = in_stack_00001150;
          uVar23 = in_stack_00001158;
        } while( true );
      }
    }
  }
  else {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&stack0x00001080,&UNK_10b3a3ca8);
  }
LAB_10041c44c:
                    /* WARNING: Does not return */
  pcVar24 = (code *)SoftwareBreakpoint(1,0x10041c450);
  (*pcVar24)();
code_r0x00010041a9f4:
  unaff_x26 = (ulong)in_stack_00001088 & 0xffffffff;
  unaff_w24 = (int)((ulong)in_stack_00001088 >> 0x20);
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bRam000000010b632780 - 1 < 2 ||
       ((bRam000000010b632780 != 0 &&
        (cVar26 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25proto7streams7streams20Streams_LT_B_C_P_GT_13next_incoming28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6b802cdbd4db999cE
                            ), cVar26 != '\0')))))) &&
     (iVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN2h25proto7streams7streams20Streams_LT_B_C_P_GT_13next_incoming28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6b802cdbd4db999cE
                         ), iVar27 != 0)) {
    lVar25 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                       (&stack0x00002300);
    lVar29 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                       (&stack0x00002300);
    in_stack_00001080 = lVar25 + 0x124;
    in_stack_00001090 = lVar29 + 0x50;
    in_stack_00001088 = &DAT_10114d844;
    in_stack_00001098 =
         &
         __ZN69__LT_h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17hadd9a30687b67127E
    ;
    puVar64 = &stack0x00001080;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN2h25proto7streams7streams20Streams_LT_B_C_P_GT_13next_incoming28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6b802cdbd4db999cE
               ,&stack0x000019d0);
    uVar5 = 
    ___ZN2h25proto7streams7streams20Streams_LT_B_C_P_GT_13next_incoming28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6b802cdbd4db999cE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar60 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar60 = &UNK_10b3c24c8;
      }
      puVar1 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_109adfc03;
      }
      iVar27 = (**(code **)(puVar60 + 0x18))(puVar1,&stack0x000015f0);
      if (iVar27 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar5,puVar1,puVar60,&stack0x000015f0,&stack0x000019d0);
      }
    }
    goto LAB_10041ad58;
  }
  unaff_x22 = 
  ___ZN2h25proto7streams7streams20Streams_LT_B_C_P_GT_13next_incoming28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6b802cdbd4db999cE
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5)) goto LAB_10041ad58;
  in_stack_000000b0 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    in_stack_000000b0 = &UNK_10b3c24c8;
  }
  in_stack_00000040 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    in_stack_00000040 = &UNK_109adfc03;
  }
  iVar27 = (**(code **)(in_stack_000000b0 + 0x18))(in_stack_00000040,&stack0x000015f0);
  if (iVar27 == 0) goto LAB_10041ad58;
  lVar25 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                     (&stack0x00002300);
  lVar29 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                     (&stack0x00002300);
  in_stack_00001080 = lVar25 + 0x124;
  in_stack_00001090 = lVar29 + 0x50;
  in_stack_00001088 = &DAT_10114d844;
  in_stack_00001098 =
       &
       __ZN69__LT_h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17hadd9a30687b67127E
  ;
  goto code_r0x00010041ab0c;
}

