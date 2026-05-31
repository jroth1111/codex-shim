
/* WARNING: Removing unreachable block (ram,0x0001007f879c) */
/* WARNING: Removing unreachable block (ram,0x0001007f94fc) */
/* WARNING: Removing unreachable block (ram,0x0001007f87ec) */
/* WARNING: Removing unreachable block (ram,0x0001007f8800) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a88) */
/* WARNING: Removing unreachable block (ram,0x0001007fa1d0) */
/* WARNING: Removing unreachable block (ram,0x0001007fa1e4) */
/* WARNING: Removing unreachable block (ram,0x0001007f8818) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a8c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9a9c) */
/* WARNING: Removing unreachable block (ram,0x0001007f9ab0) */
/* WARNING: Removing unreachable block (ram,0x0001007f9af8) */
/* WARNING: Removing unreachable block (ram,0x0001007f9b04) */
/* WARNING: Removing unreachable block (ram,0x0001007f9b1c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8824) */
/* WARNING: Removing unreachable block (ram,0x0001007f88ac) */
/* WARNING: Removing unreachable block (ram,0x0001007f88c0) */
/* WARNING: Removing unreachable block (ram,0x0001007f8900) */
/* WARNING: Removing unreachable block (ram,0x0001007f890c) */
/* WARNING: Removing unreachable block (ram,0x0001007f8924) */
/* WARNING: Removing unreachable block (ram,0x0001007f9ba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6d54(void)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  char *unaff_x21;
  char *unaff_x22;
  uint uVar18;
  char *unaff_x24;
  char *pcVar19;
  long unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  char in_wzr;
  byte bVar20;
  undefined8 uVar21;
  undefined4 *in_stack_00000018;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  uint in_stack_00000540;
  undefined1 uVar23;
  undefined2 uVar24;
  undefined1 *puVar22;
  char *pcVar25;
  ulong *in_stack_000008d0;
  ulong *puVar26;
  byte in_stack_00000cf4;
  long in_stack_00000cf8;
  undefined8 in_stack_00000d00;
  
  puVar22 = &stack0x00000a40;
  pcVar25 = "";
  pcVar19 = &stack0x000008c0;
  puVar26 = (ulong *)0x1;
  FUN_1007fad10(&stack0x00000ba0);
  _memcpy(&stack0x000001a0,&stack0x00000020,0x158);
  pcVar17 = *(char **)(unaff_x21 + 0x20);
  if (*pcVar17 == '\0') {
    *pcVar17 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (pcVar17,extraout_x1,1000000000);
  }
  bVar3 = unaff_x21[0x30];
  pcVar16 = *(char **)(unaff_x21 + 0x28);
  _memcpy(&stack0x000003f0,&stack0x000001a0,0x158);
  if (in_stack_00000540 <= *(uint *)(pcVar17 + 0x140)) {
    unaff_x22 = pcVar17 + 0xa8;
    unaff_x24 = pcVar17 + 0x1f0;
    unaff_x21 = pcVar17 + 0x218;
    uVar8 = FUN_105ab0488(*(undefined8 *)(pcVar17 + 0x250),*(undefined8 *)(pcVar17 + 600),
                          &stack0x00000ba0);
    lVar13 = 0;
    uVar14 = *(ulong *)(pcVar17 + 0x238);
    lVar15 = *(long *)(pcVar17 + 0x230);
    bVar9 = (byte)(uVar8 >> 0x39);
    uVar8 = uVar8 & uVar14;
    uVar21 = *(undefined8 *)(lVar15 + uVar8);
    uVar1 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar9),
                     CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar9),
                              CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar9),
                                       CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar9),
                                                CONCAT13(-((byte)((ulong)uVar21 >> 0x18) == bVar9),
                                                         CONCAT12(-((byte)((ulong)uVar21 >> 0x10) ==
                                                                   bVar9),CONCAT11(-((byte)((ulong)
                                                  uVar21 >> 8) == bVar9),-((byte)uVar21 == bVar9))))
                                               )))) & 0x8080808080808080;
    do {
      for (; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
        uVar11 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = *(ulong *)(lVar15 + -8 +
                           (uVar8 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar14)
                           * -8);
        if (*(ulong *)(pcVar17 + 0x228) <= uVar11) {
          FUN_107c05cd0(uVar11,*(ulong *)(pcVar17 + 0x228),&UNK_10b4074f0);
LAB_1007fa260:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007fa264);
          (*pcVar4)();
        }
        if (in_stack_00000540 == *(uint *)(*(long *)(pcVar17 + 0x220) + uVar11 * 0x10 + 8)) {
          uVar18 = func_0x000105a93994(&stack0x00000558);
          if (((*(ulong *)(pcVar17 + 0x200) <= (ulong)uVar18) ||
              (plVar12 = (long *)(*(long *)(pcVar17 + 0x1f8) + (ulong)uVar18 * 0x158), *plVar12 == 2
              )) || (*(int *)((long)plVar12 + 0x13c) != (int)extraout_x1_00)) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&stack0x00000ba0,&UNK_10b3fa588)
            ;
            goto LAB_1007fa260;
          }
          bVar9 = *(byte *)(plVar12 + 0xd);
          if (bVar9 < 7) {
            uVar18 = bVar9 - 4;
            if (bVar9 < 4) {
              uVar18 = 1;
            }
            if ((uVar18 != 0) &&
               (((uVar18 & 0xff) != 1 || 1 < bVar9 || (*(byte *)((long)plVar12 + 0x69) < 2)))) {
              if (((*unaff_x28 == 0) &&
                  ((bRam000000010b636f90 - 1 < 2 ||
                   ((bRam000000010b636f90 != 0 &&
                    (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h83500e4571e8d32bE
                                       ), cVar5 != '\0')))))) &&
                 (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h83500e4571e8d32bE
                                    ), iVar6 != 0)) {
                __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                          (&stack0x000006e0);
                FUN_100811410(&stack0x00000ba0);
              }
              else {
                pcVar19 = 
                ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h83500e4571e8d32bE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  unaff_x22 = pcRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    unaff_x22 = "";
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar6 = (**(code **)(unaff_x22 + 0x18))(puVar2,&stack0x000006f0);
                  unaff_x21 = pcVar19;
                  if (iVar6 != 0) {
                    __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                              (&stack0x000006e0);
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (pcVar19,puVar2,unaff_x22,&stack0x000006f0,&stack0x00000ba0);
                  }
                }
              }
              goto LAB_1007f8a28;
            }
          }
          if (*pcVar16 == '\0') {
            *pcVar16 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar16,extraout_x1_00,1000000000);
          }
          _memcpy(&stack0x000006f0,&stack0x000003f0,0x158);
          lVar13 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                             (&stack0x000006e0);
          iVar6 = *(int *)(lVar13 + 0x60);
          _memcpy(&stack0x00000ba0,&stack0x000006f0,0x168);
          if ((*unaff_x28 == 0) &&
             (((bRam000000010b636fd8 - 1 < 2 ||
               ((bRam000000010b636fd8 != 0 &&
                (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad569cfbb20ecb9E
                                   ), cVar5 != '\0')))) &&
              (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad569cfbb20ecb9E
                                 ), iVar7 != 0)))) {
            __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                      (&stack0x00000860);
            __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                      (&stack0x00000860);
            pcVar25 = &stack0x00000a30;
            puVar22 = (undefined1 *)0x1;
            in_stack_000008d0 = (ulong *)0x1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad569cfbb20ecb9E
                       ,&stack0x000008c0);
            uVar21 = 
            ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad569cfbb20ecb9E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar19 = pcRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                pcVar19 = "";
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(pcVar19 + 0x18))(puVar2,&stack0x00000890);
              if (iVar7 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (uVar21,puVar2,pcVar19,&stack0x00000890,&stack0x000008c0);
              }
            }
          }
          else {
            uVar21 = 
            ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcad569cfbb20ecb9E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pcVar19 = pcRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                pcVar19 = "";
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(pcVar19 + 0x18))(puVar2,&stack0x00000878);
              if (iVar7 != 0) {
                __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                          (&stack0x00000860);
                __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                          (&stack0x00000860);
                pcVar25 = &stack0x00000a20;
                puVar22 = (undefined1 *)0x1;
                in_stack_000008d0 = (ulong *)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (uVar21,puVar2,pcVar19,&stack0x00000890,&stack0x000008c0);
              }
            }
          }
          lVar13 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                             (&stack0x00000860);
          bVar3 = *(byte *)(lVar13 + 0x68) - 7;
          if (*(byte *)(lVar13 + 0x68) < 7) {
            bVar3 = 6;
          }
          if (bVar3 < 3) {
            if ((bVar3 == 0) || (bVar3 == 2)) goto LAB_1007f9024;
LAB_1007f8ed8:
            if ((in_stack_00000cf4 & 1) != 0) {
              _memcpy(&stack0x00000a40,&stack0x00000ba0,0x158);
              __ZN14rama_http_core2h25proto7streams4recv4Recv13recv_trailers17hf750379813cea8faE
                        (&stack0x00000890,in_stack_00000cf8,&stack0x00000a40,&stack0x00000860);
              goto LAB_1007f9144;
            }
            uVar10 = (undefined4)((ulong)pcVar25 >> 0x20);
            if (((*unaff_x28 < 2) &&
                ((bRam000000010b636ff0 - 1 < 2 ||
                 ((bRam000000010b636ff0 != 0 &&
                  (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                                     ), cVar5 != '\0')))))) &&
               (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                                  ), iVar7 != 0)) {
              __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (&stack0x00000860);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                         ,&stack0x00000a40);
              lVar13 = 
              ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar10 = (undefined4)
                         ((ulong)*(undefined8 *)
                                  (
                                  ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                                  + 0x20) >> 0x20);
                in_stack_000008d0 =
                     *(ulong **)
                      (
                      ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                      + 0x28);
                puVar22 = (undefined1 *)0x0;
                pcVar19 = pcRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  pcVar19 = "";
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(pcVar19 + 0x18))(puVar2,&stack0x000008c0);
                if (iVar7 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar13,puVar2,pcVar19,&stack0x000008c0,&stack0x00000a40);
                }
              }
            }
            else {
              lVar13 = 
              ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pcVar19 = pcRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  pcVar19 = "";
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(pcVar19 + 0x18))(puVar2,&stack0x00000890);
                if (iVar7 != 0) {
                  lVar15 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                                     (&stack0x00000860);
                  puVar22 = (undefined1 *)(lVar15 + 0x13c);
                  uVar10 = 1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar13,puVar2,pcVar19,&stack0x00000890,&stack0x00000a40);
                }
              }
            }
            lVar13 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                               (&stack0x00000860);
            puVar22 = (undefined1 *)
                      CONCAT44(*(undefined4 *)(lVar13 + 0x13c),
                               (int)CONCAT62((int6)((ulong)puVar22 >> 0x10),0x100));
            FUN_100e3fdac(&stack0x00000ba0);
            pcVar19 = (char *)CONCAT44(uVar10,1);
            puVar26 = in_stack_000008d0;
          }
          else {
            if (bVar3 == 3) {
              lVar15 = 0x6a;
            }
            else {
              if (bVar3 != 4) goto LAB_1007f8ed8;
              lVar15 = 0x69;
            }
            if (*(char *)(lVar13 + lVar15) == '\x01') goto LAB_1007f8ed8;
LAB_1007f9024:
            _memcpy(&stack0x00000a40,&stack0x00000ba0,0x158);
            func_0x000105a85b30(&stack0x000008c0,in_stack_00000cf8,&stack0x00000a40,&stack0x00000860
                                ,pcVar17 + 8);
            if (puVar22 == (undefined1 *)0x3) {
              __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (&stack0x00000860);
            }
            else if ((puVar22 != (undefined1 *)0x4) && (puVar22 != (undefined1 *)0x5)) {
              _memcpy(&stack0x00000a48,&stack0x000008c8,0x150);
              func_0x00010080a640(in_stack_00000cf8 + 0xd8,&stack0x00000a40,in_stack_00000d00,
                                  &stack0x00000860,pcVar17[0x60],in_stack_00000cf8 + 200);
              func_0x000105a91b30(in_stack_00000cf8 + 0xd8,&stack0x00000860,1,pcVar17 + 8,
                                  in_stack_00000cf8 + 200);
              func_0x000105a8c434(in_stack_00000cf8,&stack0x00000860,pcVar17 + 8);
            }
LAB_1007f9144:
            FUN_100811c18(&stack0x000008c0,in_stack_00000cf8,in_stack_00000d00,&stack0x00000860,
                          pcVar17 + 8,&stack0x00000890);
            pcVar19 = pcVar25;
            puVar26 = in_stack_000008d0;
          }
          __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                    (pcVar17 + 8,&stack0x00000ba0,iVar6 != 1000000000);
          uVar18 = (uint)(byte)puVar22;
          uVar23 = (undefined1)((ulong)puVar22 >> 8);
          uVar24 = (undefined2)((ulong)puVar22 >> 0x10);
          in_stack_00000540 = (uint)((ulong)puVar22 >> 0x20);
          in_stack_00000198 = *(undefined8 *)(unaff_x26 + 0x68);
          in_stack_00000190 = *(undefined8 *)(unaff_x26 + 0x60);
          if (*pcVar16 == '\x01') {
            *pcVar16 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar16,0);
          }
          goto LAB_1007f91b8;
        }
      }
      bVar20 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar21 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar21 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar21 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar21 >> 8) == -1),
                                                           -((char)uVar21 == -1)))))))),1);
      if ((bVar20 & 1) != 0) goto LAB_1007f7e40;
      lVar13 = lVar13 + 8;
      uVar8 = uVar8 + lVar13 & uVar14;
      uVar21 = *(undefined8 *)(lVar15 + uVar8);
      uVar1 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar9),
                       CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar9),
                                CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar9),
                                         CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar9),
                                                  CONCAT13(-((byte)((ulong)uVar21 >> 0x18) == bVar9)
                                                           ,CONCAT12(-((byte)((ulong)uVar21 >> 0x10)
                                                                      == bVar9),
                                                                     CONCAT11(-((byte)((ulong)uVar21
                                                                                      >> 8) == bVar9
                                                                               ),-((byte)uVar21 ==
                                                                                  bVar9)))))))) &
              0x8080808080808080;
    } while( true );
  }
  if (*unaff_x28 == 0) {
    unaff_x21 = &
                __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
    ;
    if (((bRam000000010b636f78 - 1 < 2) ||
        ((bRam000000010b636f78 != 0 &&
         (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
                            ), cVar5 != '\0')))) &&
       (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
                          ), iVar6 != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
                 ,&stack0x000006f0);
      pcVar19 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        unaff_x22 = pcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = "";
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(unaff_x22 + 0x18))(puVar2,&stack0x00000a40);
        unaff_x21 = pcVar19;
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (pcVar19,puVar2,unaff_x22,&stack0x00000a40,&stack0x000006f0);
        }
      }
      goto LAB_1007f8a28;
    }
  }
  pcVar19 = 
  ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h55df570d0937c7d6E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    unaff_x22 = pcRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x22 = "";
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(unaff_x22 + 0x18))(puVar2,&stack0x00000a40);
    unaff_x21 = pcVar19;
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (pcVar19,puVar2,unaff_x22,&stack0x00000a40,&stack0x000006f0);
    }
  }
LAB_1007f8a28:
  pcVar19 = unaff_x24;
  in_stack_00000540 = (uint)bVar3;
  uVar24 = SUB82(unaff_x22,0);
  uVar23 = SUB81(unaff_x21,0);
  uVar18 = 4;
  puVar26 = unaff_x28;
LAB_1007f8a2c:
  FUN_100e3fdac(&stack0x000003f0);
LAB_1007f91b8:
  if (*pcVar17 == '\x01') {
    *pcVar17 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar17,0);
  }
  if (uVar18 == 4) {
    uVar10 = 2;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 10) = in_stack_00000198;
    *(undefined8 *)(in_stack_00000018 + 8) = in_stack_00000190;
    *(char *)(in_stack_00000018 + 2) = (char)uVar18;
    *(undefined1 *)((long)in_stack_00000018 + 9) = uVar23;
    *(undefined2 *)((long)in_stack_00000018 + 10) = uVar24;
    in_stack_00000018[3] = in_stack_00000540;
    *(char **)(in_stack_00000018 + 4) = pcVar19;
    *(ulong **)(in_stack_00000018 + 6) = puVar26;
    uVar10 = 4;
  }
  *in_stack_00000018 = uVar10;
  return;
LAB_1007f7e40:
  if ((in_stack_00000540 != 0) && ((bVar3 & 1) == 0)) {
    if ((in_stack_00000540 & 1) == 0) {
      if ((*(uint *)(pcVar17 + 0xd0) & 1) == 0) {
        lVar13 = 0x2c;
LAB_1007f86c8:
        if (*(uint *)(unaff_x22 + lVar13) <= in_stack_00000540) goto LAB_1007f876c;
      }
    }
    else if ((*(uint *)(pcVar17 + 0x180) & 1) == 0) {
      lVar13 = 0xdc;
      goto LAB_1007f86c8;
    }
    if ((*unaff_x28 < 2) &&
       (((bRam000000010b636fa8 - 1 < 2 ||
         ((bRam000000010b636fa8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h8d7a24b266568292E
                             ), cVar5 != '\0')))) &&
        (iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h8d7a24b266568292E
                           ), iVar6 != 0)))) {
      FUN_1008112d4(&stack0x00000ba0);
    }
    else {
      uVar21 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers10__CALLSITE17h8d7a24b266568292E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        unaff_x22 = pcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = "";
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(unaff_x22 + 0x18))(puVar2,&stack0x000006f0);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar21,puVar2,unaff_x22,&stack0x000006f0,&stack0x00000ba0);
        }
      }
    }
    uVar24 = SUB82(unaff_x22,0);
    uVar18 = 0;
    uVar23 = 1;
    pcVar19 = (char *)0x5;
    puVar26 = unaff_x28;
    goto LAB_1007f8a2c;
  }
LAB_1007f876c:
  func_0x000105a8e268(&stack0x00000ba0,unaff_x22,in_stack_00000540,1,pcVar17 + 8);
  uVar18 = in_stack_00000540 & 0xff;
  if ((char)in_stack_00000540 != '\x04') {
    uVar23 = (undefined1)(in_stack_00000540 >> 8);
    uVar24 = (undefined2)(in_stack_00000540 >> 0x10);
    in_stack_00000540 = 0;
    in_stack_00000198 = *(undefined8 *)(unaff_x27 + 0x20);
    in_stack_00000190 = *(undefined8 *)(unaff_x27 + 0x18);
    goto LAB_1007f8a2c;
  }
  goto LAB_1007f8a28;
}

