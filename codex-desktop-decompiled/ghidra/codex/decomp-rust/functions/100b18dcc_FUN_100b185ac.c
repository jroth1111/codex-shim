
/* WARNING: Removing unreachable block (ram,0x000100b18408) */
/* WARNING: Removing unreachable block (ram,0x000100b17a34) */
/* WARNING: Removing unreachable block (ram,0x000100b17a50) */
/* WARNING: Removing unreachable block (ram,0x000100b195f0) */
/* WARNING: Removing unreachable block (ram,0x000100b19600) */
/* WARNING: Removing unreachable block (ram,0x000100b195d4) */
/* WARNING: Removing unreachable block (ram,0x000100b18d58) */
/* WARNING: Removing unreachable block (ram,0x000100b187a4) */
/* WARNING: Removing unreachable block (ram,0x000100b18240) */
/* WARNING: Removing unreachable block (ram,0x000100b18cd8) */
/* WARNING: Removing unreachable block (ram,0x000100b190a8) */
/* WARNING: Removing unreachable block (ram,0x000100b1914c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_100b185ac(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long extraout_x1;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong unaff_x19;
  undefined *unaff_x20;
  undefined1 *puVar21;
  undefined *unaff_x22;
  ulong uVar22;
  undefined *unaff_x24;
  ulong uVar23;
  undefined1 *unaff_x26;
  undefined *puVar24;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000030;
  undefined *in_stack_00000038;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined *in_stack_00000080;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  char cVar25;
  undefined1 *in_stack_000002f0;
  long *in_stack_000002f8;
  char *in_stack_00000300;
  long in_stack_00000408;
  undefined8 in_stack_00000410;
  long in_stack_00000420;
  undefined8 in_stack_00000428;
  long in_stack_00000438;
  undefined8 in_stack_00000440;
  long in_stack_00000478;
  undefined8 in_stack_00000480;
  ulong in_stack_000004a0;
  ulong in_stack_000004a8;
  ulong in_stack_000004b0;
  long in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined *in_stack_000007c0;
  char *in_stack_000007c8;
  char *pcVar26;
  char *in_stack_000007d0;
  long in_stack_00000910;
  undefined8 in_stack_00000918;
  long in_stack_00000928;
  undefined8 in_stack_00000930;
  long in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined1 *in_stack_00000be0;
  char *in_stack_00000bf0;
  undefined *in_stack_00000d68;
  undefined *in_stack_00000d70;
  
code_r0x000100b185ac:
  FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_100b186f8:
  puVar20 = (undefined *)0x0;
LAB_100b187f8:
  bVar12 = true;
  bVar11 = true;
  bVar10 = true;
LAB_100b18808:
  if (in_stack_00000be0 != (undefined1 *)0x1d) {
    FUN_100e35e0c(&stack0x00000be0);
  }
  bVar6 = false;
  if (in_stack_00000030 != (undefined *)0x8000000000000001) {
    bVar6 = bVar12;
  }
  if ((bVar6) && (((ulong)in_stack_00000030 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000080);
  }
  bVar12 = false;
  if (in_stack_00000038 != (undefined *)0x8000000000000001) {
    bVar12 = bVar11;
  }
  if ((bVar12) && (((ulong)in_stack_00000038 & 0x7fffffffffffffff) != 0)) {
    _free(unaff_x22);
    bVar11 = false;
    if (((ulong)puVar20 & 0x7fffffffffffffff) != 0) {
      bVar11 = bVar10;
    }
  }
  else {
    bVar11 = false;
    if (((ulong)puVar20 & 0x7fffffffffffffff) != 0) {
      bVar11 = bVar10;
    }
  }
  if (bVar11) {
    _free(unaff_x20);
  }
  in_stack_00000be0 = (undefined1 *)0x1d;
LAB_100b18888:
  _memcpy(&stack0x00000bf0,&stack0x00000ad8,0x108);
  plVar15 = (long *)FUN_100654604(&stack0x000007a8);
  _memcpy(&stack0x000002f0,&stack0x00000be0,0x178);
  if (in_stack_000002f0 != (undefined1 *)0x1d) {
    puVar21 = in_stack_000002f0;
    if (plVar15 == (long *)0x0) goto LAB_100b189b8;
    if (in_stack_00000408 != 0) {
      _free(in_stack_00000410);
    }
    if ((in_stack_00000420 != -0x8000000000000000) && (in_stack_00000420 != 0)) {
      _free(in_stack_00000428);
    }
    if ((in_stack_00000438 != -0x8000000000000000) && (in_stack_00000438 != 0)) {
      _free(in_stack_00000440);
    }
    FUN_100e35e0c(&stack0x000002f0);
    goto LAB_100b189ac;
  }
  if (plVar15 == (long *)0x0) goto LAB_100b18a00;
  lVar18 = *plVar15;
  if (lVar18 == 1) {
    FUN_100de21d4(plVar15 + 1);
    goto LAB_100b189f8;
  }
LAB_100b18944:
  if ((lVar18 == 0) && (plVar15[2] != 0)) {
    _free(plVar15[1]);
  }
LAB_100b189f8:
  _free(plVar15);
LAB_100b18a00:
  puVar21 = (undefined1 *)0x1d;
  plVar15 = in_stack_000002f8;
LAB_100b18a04:
  if (puVar21 == (undefined1 *)0x1d) goto LAB_100b18d48;
  _memcpy(&stack0x000004c8,&stack0x00000970,0x168);
  _memcpy(&stack0x00000808,&stack0x000004c8,0x168);
  if (in_stack_000007d0 < in_stack_000007c8) {
    do {
      if (0x20 < (byte)in_stack_000007d0[(long)in_stack_000007c0] ||
          (1L << ((ulong)(byte)in_stack_000007d0[(long)in_stack_000007c0] & 0x3f) & 0x100002600U) ==
          0) {
        in_stack_000002f0 = (undefined1 *)0x16;
        FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
        if (in_stack_00000910 != 0) {
          _free(in_stack_00000918);
        }
        if ((in_stack_00000928 != -0x8000000000000000) && (in_stack_00000928 != 0)) {
          _free(in_stack_00000930);
        }
        if ((in_stack_00000940 != -0x8000000000000000) && (in_stack_00000940 != 0)) {
          _free(in_stack_00000948);
        }
        FUN_100e35e0c(&stack0x000007f8);
        goto LAB_100b17b70;
      }
      in_stack_000007d0 = in_stack_000007d0 + 1;
    } while (in_stack_000007c8 != in_stack_000007d0);
  }
  if (in_stack_000007a8 != 0) goto LAB_100b17b7c;
LAB_100b17b84:
  if (puVar21 != (undefined1 *)0x1d) {
    _memcpy(&stack0x00000640,&stack0x000004c8,0x168);
    lVar18 = __ZN19codex_rollout_trace7reducer12TraceReducer11apply_event17hefe40ea90c2096bfE
                       (&stack0x000000b0,&stack0x00000630);
    uVar13 = in_stack_000004a0;
    if (lVar18 == 0) {
LAB_100b17bb8:
      if (unaff_x26 != (undefined1 *)0x0) {
        _free(unaff_x24);
      }
      puVar24 = (undefined *)0x0;
      in_stack_00000be0 = (undefined1 *)0x0;
      in_stack_00000bf0 = (char *)0x0;
      do {
        bVar10 = in_stack_000004a8 <= uVar13;
        uVar17 = in_stack_000004b0;
        uVar22 = uVar13;
        uVar13 = in_stack_000004a8;
        if (bVar10) {
          uVar13 = _read(in_stack_00000098._4_4_,in_stack_000000a8,0x2000);
          if (uVar13 == 0xffffffffffffffff) {
            puVar14 = (uint *)___error();
            uVar3 = *puVar14;
            while( true ) {
              if (uVar3 != 4) {
                in_stack_000004a0 = 0;
                puVar24 = (undefined *)((ulong)uVar3 << 0x20 | 2);
                bVar10 = true;
                in_stack_000004a8 = in_stack_000004a0;
                goto LAB_100b179f0;
              }
              uVar13 = _read(in_stack_00000098._4_4_,in_stack_000000a8,0x2000);
              if (uVar13 != 0xffffffffffffffff) break;
              uVar3 = *puVar14;
            }
          }
          uVar22 = 0;
          uVar17 = uVar13;
          if (uVar13 <= in_stack_000004b0) {
            uVar17 = in_stack_000004b0;
          }
        }
        uVar23 = uVar13 - uVar22;
        lVar18 = in_stack_000000a8 + uVar22;
        in_stack_000004a0 = uVar13;
        in_stack_000004b0 = uVar17;
        in_stack_000004a8 = uVar13;
        if (0xf < uVar23) {
          uVar5 = (lVar18 + 7U & 0xfffffffffffffff8) - lVar18;
          uVar17 = uVar5;
          if (uVar5 == 0) goto LAB_100b17908;
          uVar17 = 0;
          do {
            if (*(char *)(lVar18 + uVar17) == '\n') goto LAB_100b17964;
            uVar17 = uVar17 + 1;
          } while (uVar5 != uVar17);
          while (uVar17 = uVar5, uVar17 <= uVar23 - 0x10) {
LAB_100b17908:
            uVar5 = *(ulong *)(lVar18 + uVar17);
            uVar19 = ((ulong *)(lVar18 + uVar17))[1] ^ unaff_x19;
            if ((((unaff_x28 - (uVar5 ^ unaff_x19) | uVar5) & (unaff_x28 - uVar19 | uVar19) ^
                 0xffffffffffffffff) & 0x8080808080808080) != 0) break;
            uVar5 = uVar17 + 0x10;
          }
          do {
            if (uVar23 == uVar17) goto LAB_100b17830;
            if (*(char *)(lVar18 + uVar17) == '\n') goto LAB_100b17964;
            uVar17 = uVar17 + 1;
          } while( true );
        }
        if (uVar13 != uVar22) {
          uVar17 = 0;
          do {
            if (*(char *)(lVar18 + uVar17) == '\n') goto LAB_100b17964;
            uVar17 = uVar17 + 1;
          } while (uVar23 != uVar17);
        }
LAB_100b17830:
        if ((ulong)-(long)in_stack_00000bf0 < uVar23) {
          FUN_108855060(&stack0x00000be0,in_stack_00000bf0,uVar23,1,1);
        }
        _memcpy(in_stack_00000bf0 + 1,lVar18,uVar23);
        in_stack_00000bf0 = in_stack_00000bf0 + uVar23;
        puVar24 = puVar24 + uVar23;
      } while (uVar13 != uVar22);
      bVar10 = false;
      goto LAB_100b179f0;
    }
    goto LAB_100b1927c;
  }
  goto LAB_100b19204;
LAB_100b17964:
  if (uVar23 <= uVar17) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar17,uVar23,&UNK_10b233e00);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100b1968c);
    (*pcVar9)();
  }
  lVar1 = uVar17 + 1;
  if ((ulong)-(long)in_stack_00000bf0 <= uVar17) {
    FUN_108855060(&stack0x00000be0,in_stack_00000bf0,lVar1,1,1);
  }
  _memcpy(in_stack_00000bf0 + 1,lVar18,lVar1);
  bVar10 = false;
  in_stack_00000bf0 = in_stack_00000bf0 + lVar1;
  if (uVar22 + lVar1 <= uVar13) {
    in_stack_000004a0 = uVar22 + lVar1;
  }
  puVar24 = puVar24 + lVar1;
LAB_100b179f0:
  unaff_x24 = (undefined *)0x1;
  func_0x0001055bf348(&stack0x000002f0,1,in_stack_00000bf0);
  in_stack_000007c8 = in_stack_00000bf0;
  if (in_stack_000002f0 == (undefined1 *)0x0) {
    if (bVar10) {
      unaff_x26 = (undefined1 *)0x8000000000000000;
    }
    else {
      if (puVar24 != (undefined *)0x0) {
        unaff_x26 = in_stack_00000be0;
        if ((in_stack_00000bf0 != (char *)0x0) && (*in_stack_00000bf0 == '\n')) {
          pcVar26 = in_stack_00000bf0 + -1;
          if (pcVar26 == (char *)0x0) {
            in_stack_000007c8 = (char *)0x0;
            unaff_x24 = (undefined *)0x1;
          }
          else {
            in_stack_000007c8 = in_stack_00000bf0 + -2;
            if (*pcVar26 != '\r') {
              in_stack_000007c8 = pcVar26;
            }
          }
        }
        goto LAB_100b17acc;
      }
      unaff_x26 = (undefined1 *)0x8000000000000001;
    }
  }
  else {
    if (!bVar10) {
      puVar24 = &UNK_10b233e18;
    }
    unaff_x26 = (undefined1 *)0x8000000000000000;
  }
  unaff_x24 = puVar24;
  if (unaff_x26 == (undefined1 *)0x8000000000000001) {
    _free(in_stack_000000a8);
    _close(in_stack_00000098._4_4_);
    lVar18 = __ZN19codex_rollout_trace7reducer4tool6agents60__LT_impl_u20_codex_rollout_trace__reducer__TraceReducer_GT_36resolve_pending_spawn_edge_fallbacks17h120c14f5f9360477E
                       (&stack0x000000b0);
    if (lVar18 != 0) {
      *in_stack_00000058 = 2;
      in_stack_00000058[1] = lVar18;
      goto LAB_100b19374;
    }
    _memcpy(in_stack_00000058,&stack0x000000b0,0x188);
    if (in_stack_00000478 != 0) {
      _free(in_stack_00000480);
    }
    if (in_stack_00000238 != 0) {
      _free(in_stack_00000240);
    }
    FUN_100d1d094(&stack0x00000278);
    FUN_100d1d094(&stack0x00000290);
    FUN_100d36c38(&stack0x000002a8);
    FUN_100f3aba0(&stack0x00000be0,&stack0x000002f0);
    FUN_100d85790(&stack0x000002d8);
    goto LAB_100b19448;
  }
LAB_100b17acc:
  if (unaff_x26 == (undefined1 *)0x8000000000000000) {
    in_stack_00000be0 = &stack0x00000be0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000007f8,s_read_trace_event_line_108ad0b71,&stack0x000002f0);
    __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000002f0);
    uVar16 = FUN_108857510(&stack0x000002f0,&stack0x00000be0);
    *in_stack_00000058 = 2;
    in_stack_00000058[1] = uVar16;
    in_stack_00000bf0 = in_stack_00000300;
    goto LAB_100b19364;
  }
  FUN_100e8d6f8(unaff_x24,in_stack_000007c8);
  uVar13 = in_stack_000004a0;
  if (extraout_x1 != 0) goto code_r0x000100b17af0;
  goto LAB_100b17bb8;
code_r0x000100b17af0:
  pcVar26 = (char *)0x0;
  in_stack_000007a8 = 0;
  in_stack_000007b0 = 1;
  if (in_stack_000007c8 == (char *)0x0) {
LAB_100b17b58:
    in_stack_000002f0 = (undefined1 *)0x5;
    FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
LAB_100b17b70:
    if (in_stack_000007a8 == 0) {
LAB_100b19204:
      in_stack_00000be0 = &stack0x00000be0;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000007f8,s_parse_trace_event_line_108ad0b57,&stack0x000002f0);
      __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000002f0);
      lVar18 = FUN_108857ac8(&stack0x000002f0,&stack0x00000be0);
      in_stack_00000bf0 = in_stack_00000300;
LAB_100b1927c:
      *in_stack_00000058 = 2;
      in_stack_00000058[1] = lVar18;
      if (unaff_x26 != (undefined1 *)0x0) {
        _free(unaff_x24);
      }
LAB_100b19364:
      _free(in_stack_000000a8);
      _close(in_stack_00000098._4_4_);
LAB_100b19374:
      if (in_stack_00000478 != 0) {
        _free(in_stack_00000480);
      }
      FUN_100e0fd70(&stack0x000000b0);
      if (in_stack_00000238 != 0) {
        _free(in_stack_00000240);
      }
      FUN_100d1d094(&stack0x00000278);
      FUN_100d1d094(&stack0x00000290);
      FUN_100d36c38(&stack0x000002a8);
      while (FUN_100f3aba0(&stack0x00000be0,&stack0x000002f0),
            in_stack_00000be0 != (undefined1 *)0x0) {
        if (*(long *)(in_stack_00000be0 + (long)in_stack_00000bf0 * 0x18 + 0x6e8) != 0) {
          _free(*(undefined8 *)(in_stack_00000be0 + (long)in_stack_00000bf0 * 0x18 + 0x6f0));
        }
        FUN_100dcbaa8(in_stack_00000be0 + (long)in_stack_00000bf0 * 0xa0);
      }
      FUN_100d85790(&stack0x000002d8);
LAB_100b19448:
      FUN_100cd332c(&stack0x00000250);
      if (in_stack_00000078 != 0) {
        _free(in_stack_00000060);
      }
      if (in_stack_00000068 != 0) {
        _free(in_stack_00000070);
      }
      return;
    }
    puVar21 = (undefined1 *)0x1d;
LAB_100b17b7c:
    _free(in_stack_000007b0);
    goto LAB_100b17b84;
  }
LAB_100b17b28:
  bVar4 = pcVar26[(long)unaff_x24];
  if (bVar4 < 0x21 && (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) != 0) goto code_r0x000100b17b48;
  in_stack_000007c0 = unaff_x24;
  if (bVar4 != 0x5b) {
    if (bVar4 != 0x7b) {
      plVar15 = (long *)FUN_108832208(&stack0x000007a8,unaff_x29 + -0x61,&UNK_10b24f0b8);
LAB_100b18d48:
      FUN_108832da4(plVar15,&stack0x000007a8);
      goto LAB_100b17b70;
    }
    bVar10 = false;
    bVar11 = false;
    bVar12 = false;
    in_stack_000007d0 = pcVar26 + 1;
    in_stack_00000030 = (undefined *)0x8000000000000001;
    in_stack_00000038 = (undefined *)0x8000000000000001;
    puVar2 = (undefined *)0x8000000000000001;
    puVar7 = (undefined *)0x7f;
    puVar20 = (undefined *)0x8000000000000000;
    in_stack_00000be0 = (undefined1 *)0x1d;
    pcVar26 = in_stack_000007d0;
    goto LAB_100b17c14;
  }
  in_stack_000007d0 = pcVar26 + 1;
  FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8);
  cVar25 = (char)in_stack_000002f0;
  if (cVar25 == '\x01') {
LAB_100b18424:
    in_stack_00000be0 = (undefined1 *)0x1d;
  }
  else {
    if ((char)((ulong)in_stack_000002f0 >> 8) != '\x01') {
      FUN_1087e422c(0,&UNK_10b22e618,&UNK_10b20a590);
      goto LAB_100b18424;
    }
    FUN_101365e30(&stack0x000002f0,&stack0x000007a8);
    if ((((((int)in_stack_000002f0 == 1) ||
          (FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8), cVar25 == '\x01')) ||
         (uVar13 = FUN_10061636c(&stack0x000007a8), (uVar13 & 1) != 0)) ||
        ((FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8), cVar25 == '\x01' ||
         (uVar13 = FUN_1006154c8(&stack0x000007a8), (uVar13 & 1) != 0)))) ||
       ((FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8), cVar25 == '\x01' ||
        (FUN_10160c7b0(&stack0x000002f0,&stack0x000007a8),
        in_stack_000002f0 == (undefined1 *)0x8000000000000000)))) goto LAB_100b18424;
    FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8);
    if ((cVar25 == '\x01') ||
       (FUN_101608e44(&stack0x000002f0,&stack0x000007a8),
       in_stack_000002f0 == (undefined1 *)0x8000000000000001)) {
LAB_100b190c4:
      if (in_stack_000002f0 != (undefined1 *)0x0) {
        _free(in_stack_000002f8);
      }
      goto LAB_100b18424;
    }
    FUN_1011de3f0(&stack0x000002f0,&stack0x00000ad8);
    if ((cVar25 == '\x01') ||
       (FUN_101608e44(&stack0x000002f0,&stack0x000007a8),
       in_stack_000002f0 == (undefined1 *)0x8000000000000001)) {
LAB_100b19168:
      if (((ulong)in_stack_000002f0 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_000002f8);
      }
      goto LAB_100b190c4;
    }
    FUN_10062b9b4(&stack0x000002f0,&stack0x00000ad8);
    if (in_stack_000002f0 == (undefined1 *)0x1e) {
LAB_100b191f8:
      _free(in_stack_000002f8);
      goto LAB_100b19168;
    }
    _memcpy(&stack0x00000be0,&stack0x00000300,0x108);
    if (in_stack_000002f0 == (undefined1 *)0x1d) {
      FUN_1087e422c(6,&UNK_10b22e618,&UNK_10b20a590);
      goto LAB_100b191f8;
    }
    _memcpy(&stack0x00000d68,&stack0x00000be0,0x108);
    in_stack_00000be0 = in_stack_000002f0;
  }
  _memcpy(&stack0x00000bf0,&stack0x00000d68,0x108);
  plVar15 = (long *)FUN_10065474c(&stack0x000007a8);
  _memcpy(&stack0x000002f0,&stack0x00000be0,0x178);
  if (in_stack_000002f0 == (undefined1 *)0x1d) {
    if (plVar15 == (long *)0x0) goto LAB_100b18a00;
    lVar18 = *plVar15;
    if (lVar18 != 1) goto LAB_100b18944;
    FUN_100de21d4(plVar15 + 1);
    goto LAB_100b189f8;
  }
  puVar21 = in_stack_000002f0;
  if (plVar15 == (long *)0x0) {
LAB_100b189b8:
    _memcpy(&stack0x00000970,&stack0x00000300,0x168);
    plVar15 = in_stack_000002f8;
    in_stack_000002f0 = puVar21;
  }
  else {
    if (in_stack_00000408 != 0) {
      _free(in_stack_00000410);
    }
    if ((in_stack_00000420 != -0x8000000000000000) && (in_stack_00000420 != 0)) {
      _free(in_stack_00000428);
    }
    if ((in_stack_00000438 != -0x8000000000000000) && (in_stack_00000438 != 0)) {
      _free(in_stack_00000440);
    }
    FUN_100e35e0c(&stack0x000002f0);
LAB_100b189ac:
    puVar21 = (undefined1 *)0x1d;
  }
  goto LAB_100b18a04;
code_r0x000100b17b48:
  pcVar26 = pcVar26 + 1;
  if (in_stack_000007c8 == pcVar26) goto LAB_100b17b58;
  goto LAB_100b17b28;
LAB_100b17c14:
  unaff_x20 = puVar24;
  unaff_x22 = puVar7;
  in_stack_00000080 = puVar2;
  FUN_1011ddbc4(&stack0x000002f0,&stack0x00000d58);
  if ((char)in_stack_000002f0 == '\x01') {
LAB_100b185c8:
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    goto LAB_100b18808;
  }
  if ((char)((ulong)in_stack_000002f0 >> 8) != '\x01') goto LAB_100b18550;
  pcVar26 = pcVar26 + 1;
  __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
            (&stack0x000002f0,&stack0x000007c0,&stack0x000007a8);
  if (in_stack_000002f0 == (undefined1 *)0x2) goto LAB_100b185c8;
  puVar24 = unaff_x20;
  puVar2 = in_stack_00000080;
  puVar7 = unaff_x22;
  puVar8 = puVar20;
  if (9 < (long)in_stack_00000300) {
    if ((long)in_stack_00000300 < 0xe) {
      if (in_stack_00000300 != (char *)0xa) {
        if ((in_stack_00000300 != (char *)0xd) ||
           (*in_stack_000002f8 != 0x75745f7865646f63 ||
            *(long *)((long)in_stack_000002f8 + 5) != 0x64695f6e7275745f)) goto LAB_100b18030;
        if (in_stack_00000030 != (undefined *)0x8000000000000001) {
          in_stack_00000d68 = &UNK_108cb88bf;
          in_stack_00000d70 = (undefined *)0xd;
          FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
          goto LAB_100b187ec;
        }
        if (pcVar26 < in_stack_000007c8) {
          while( true ) {
            bVar4 = pcVar26[(long)unaff_x24];
            if (0x3a < bVar4) goto LAB_100b18fb4;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            pcVar26 = pcVar26 + 1;
            if (in_stack_000007c8 == pcVar26) goto LAB_100b18698;
          }
          if ((ulong)bVar4 == 0x3a) {
            pcVar26 = pcVar26 + 1;
            FUN_101608e44(&stack0x00000d68,&stack0x000007a8);
            puVar2 = in_stack_00000d70;
            in_stack_00000030 = in_stack_00000d68;
            if (in_stack_00000d68 == (undefined *)0x8000000000000001) {
              in_stack_00000030 = (undefined *)0x8000000000000001;
              goto LAB_100b18600;
            }
            goto LAB_100b17c14;
          }
LAB_100b18fb4:
          in_stack_000002f0 = (undefined1 *)0x6;
          FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
        }
        else {
LAB_100b18698:
          in_stack_000002f0 = (undefined1 *)0x3;
          FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
        }
        in_stack_00000030 = (undefined *)0x8000000000000001;
        goto LAB_100b187f8;
      }
      if (*in_stack_000002f8 != 0x5f74756f6c6c6f72 || (short)in_stack_000002f8[1] != 0x6469)
      goto LAB_100b18030;
      if (puVar20 != (undefined *)0x8000000000000000) {
        in_stack_00000d68 = &UNK_108cb89c0;
        in_stack_00000d70 = (undefined *)0xa;
        FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
        goto LAB_100b187ec;
      }
      if (in_stack_000007c8 <= pcVar26) {
LAB_100b186d8:
        in_stack_000002f0 = (undefined1 *)0x3;
        FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
        goto LAB_100b186f8;
      }
      while( true ) {
        bVar4 = pcVar26[(long)unaff_x24];
        if (0x3a < bVar4) goto LAB_100b18f90;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        pcVar26 = pcVar26 + 1;
        if (in_stack_000007c8 == pcVar26) goto LAB_100b186d8;
      }
      if ((ulong)bVar4 != 0x3a) {
LAB_100b18f90:
        in_stack_000002f0 = (undefined1 *)0x6;
        FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
        goto LAB_100b186f8;
      }
      pcVar26 = pcVar26 + 1;
      FUN_10160c7b0(&stack0x00000d68,&stack0x000007a8);
      puVar20 = in_stack_00000d68;
      puVar8 = (undefined *)0x0;
      puVar24 = in_stack_00000d70;
      if (in_stack_00000d68 != (undefined *)0x8000000000000000) goto LAB_100b17c14;
    }
    else {
      if (in_stack_00000300 == (char *)0x11) {
        if ((*in_stack_000002f8 == 0x6d69745f6c6c6177 && in_stack_000002f8[1] == 0x6d5f78696e755f65)
            && (char)in_stack_000002f8[2] == 's') {
          if (bVar10) {
            in_stack_00000d68 = &UNK_108cb9043;
            in_stack_00000d70 = (undefined *)0x11;
            FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
            goto LAB_100b187ec;
          }
          if (pcVar26 < in_stack_000007c8) {
            do {
              bVar4 = pcVar26[(long)unaff_x24];
              if (0x3a < bVar4) {
LAB_100b18310:
                in_stack_000002f0 = (undefined1 *)0x6;
                FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
                goto LAB_100b18004;
              }
              if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar4 != 0x3a) goto LAB_100b18310;
                pcVar26 = pcVar26 + 1;
                uVar13 = FUN_1006154c8(&stack0x000007a8);
                goto LAB_100b182d0;
              }
              pcVar26 = pcVar26 + 1;
            } while (in_stack_000007c8 != pcVar26);
          }
          in_stack_000002f0 = (undefined1 *)0x3;
          FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
LAB_100b18004:
          uVar13 = 1;
LAB_100b182d0:
          bVar10 = true;
          if ((uVar13 & 1) != 0) {
            bVar12 = true;
            bVar11 = true;
            goto LAB_100b18808;
          }
          goto LAB_100b17c14;
        }
      }
      else if ((in_stack_00000300 == (char *)0xe) &&
              (*in_stack_000002f8 == 0x765f616d65686373 &&
               *(long *)((long)in_stack_000002f8 + 6) == 0x6e6f69737265765f)) {
        if (bVar12) {
          in_stack_00000d68 = &UNK_108cb89b2;
          in_stack_00000d70 = (undefined *)0xe;
          FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
          goto LAB_100b187ec;
        }
        if (in_stack_000007c8 <= pcVar26) {
LAB_100b18734:
          in_stack_000002f0 = (undefined1 *)0x3;
          FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
          goto LAB_100b187f8;
        }
        while( true ) {
          bVar4 = pcVar26[(long)unaff_x24];
          if (0x3a < bVar4) goto LAB_100b19030;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          pcVar26 = pcVar26 + 1;
          if (in_stack_000007c8 == pcVar26) goto LAB_100b18734;
        }
        if ((ulong)bVar4 != 0x3a) {
LAB_100b19030:
          in_stack_000002f0 = (undefined1 *)0x6;
          FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
          goto LAB_100b187f8;
        }
        pcVar26 = pcVar26 + 1;
        FUN_101365e30(&stack0x00000d68,&stack0x000007a8);
        bVar12 = true;
        if (((ulong)in_stack_00000d68 & 1) != 0) {
          bVar11 = true;
          bVar10 = true;
          goto LAB_100b18808;
        }
        goto LAB_100b17c14;
      }
LAB_100b18030:
      uVar13 = FUN_10062a8ec(&stack0x000007a8);
joined_r0x000100b182ac:
      if (uVar13 == 0) goto LAB_100b17c14;
    }
LAB_100b18600:
    puVar20 = puVar8;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    goto LAB_100b18808;
  }
  if (in_stack_00000300 == (char *)0x3) {
    if ((short)*in_stack_000002f8 != 0x6573 || *(char *)((long)in_stack_000002f8 + 2) != 'q')
    goto LAB_100b18030;
    if (!bVar11) {
      if (pcVar26 < in_stack_000007c8) {
        do {
          bVar4 = pcVar26[(long)unaff_x24];
          if (0x3a < bVar4) {
LAB_100b182f4:
            in_stack_000002f0 = (undefined1 *)0x6;
            FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
            goto LAB_100b17ee4;
          }
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            if ((ulong)bVar4 != 0x3a) goto LAB_100b182f4;
            pcVar26 = pcVar26 + 1;
            uVar13 = FUN_10061636c(&stack0x000007a8);
            goto LAB_100b18290;
          }
          pcVar26 = pcVar26 + 1;
        } while (in_stack_000007c8 != pcVar26);
      }
      in_stack_000002f0 = (undefined1 *)0x3;
      FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
LAB_100b17ee4:
      uVar13 = 1;
LAB_100b18290:
      bVar11 = true;
      uVar13 = uVar13 & 1;
      goto joined_r0x000100b182ac;
    }
    in_stack_00000d68 = &UNK_108cb9040;
    in_stack_00000d70 = (undefined *)0x3;
    FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
    goto LAB_100b187ec;
  }
  if (in_stack_00000300 != (char *)0x7) {
    if ((in_stack_00000300 != (char *)0x9) ||
       (*in_stack_000002f8 != 0x695f646165726874 || (char)in_stack_000002f8[1] != 'd'))
    goto LAB_100b18030;
    if (in_stack_00000038 != (undefined *)0x8000000000000001) {
      in_stack_00000d68 = &UNK_108ca2143;
      in_stack_00000d70 = (undefined *)0x9;
      FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
      goto LAB_100b187ec;
    }
    if (pcVar26 < in_stack_000007c8) {
      while( true ) {
        bVar4 = pcVar26[(long)unaff_x24];
        if (0x3a < bVar4) goto LAB_100b19004;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        pcVar26 = pcVar26 + 1;
        if (in_stack_000007c8 == pcVar26) goto LAB_100b18760;
      }
      if ((ulong)bVar4 == 0x3a) {
        pcVar26 = pcVar26 + 1;
        FUN_101608e44(&stack0x00000d68,&stack0x000007a8);
        puVar7 = in_stack_00000d70;
        in_stack_00000038 = in_stack_00000d68;
        if (in_stack_00000d68 == (undefined *)0x8000000000000001) {
          in_stack_00000038 = (undefined *)0x8000000000000001;
          goto LAB_100b18600;
        }
        goto LAB_100b17c14;
      }
LAB_100b19004:
      in_stack_000002f0 = (undefined1 *)0x6;
      FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
    }
    else {
LAB_100b18760:
      in_stack_000002f0 = (undefined1 *)0x3;
      FUN_108831e8c(&stack0x000007a8,&stack0x000002f0);
    }
    in_stack_00000038 = (undefined *)0x8000000000000001;
    goto LAB_100b187f8;
  }
  if ((int)*in_stack_000002f8 != 0x6c796170 || *(int *)((long)in_stack_000002f8 + 3) != 0x64616f6c)
  goto LAB_100b18030;
  if (in_stack_00000be0 != (undefined1 *)0x1d) {
    in_stack_00000d68 = &UNK_108caf1ae;
    in_stack_00000d70 = (undefined *)0x7;
    FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002f0);
    goto LAB_100b187ec;
  }
  if (in_stack_000007c8 <= pcVar26) {
LAB_100b1870c:
    *(undefined8 *)(unaff_x29 + -0x80) = 3;
    FUN_108831e8c(&stack0x000007a8,unaff_x29 + -0x80);
    goto LAB_100b187f8;
  }
  while( true ) {
    bVar4 = pcVar26[(long)unaff_x24];
    if (0x3a < bVar4) goto LAB_100b18fe0;
    if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
    pcVar26 = pcVar26 + 1;
    if (in_stack_000007c8 == pcVar26) goto LAB_100b1870c;
  }
  if ((ulong)bVar4 != 0x3a) {
LAB_100b18fe0:
    *(undefined8 *)(unaff_x29 + -0x80) = 6;
    FUN_108831e8c(&stack0x000007a8,unaff_x29 + -0x80);
    goto LAB_100b187f8;
  }
  pcVar26 = pcVar26 + 1;
  FUN_1013b3680(&stack0x000002f0,&stack0x000007a8);
  if (in_stack_000002f0 == (undefined1 *)0x1d) goto LAB_100b187f8;
  _memcpy(&stack0x00000d68,&stack0x00000300,0x108);
  _memcpy(&stack0x00000bf0,&stack0x00000d68,0x108);
  in_stack_00000be0 = in_stack_000002f0;
  goto LAB_100b17c14;
LAB_100b18550:
  if (bVar12) {
    if (bVar11) {
      if (bVar10) {
        if (puVar20 == (undefined *)0x8000000000000000) {
          in_stack_00000d68 = &UNK_108cb89c0;
          in_stack_00000d70 = (undefined *)0xa;
          in_stack_000002f0 = &stack0x00000d68;
          in_stack_000002f8 = (long *)&DAT_100c7b3a0;
          param_2 = &stack0x000002f0;
          goto code_r0x000100b185ac;
        }
        bVar11 = in_stack_00000038 == (undefined *)0x8000000000000001;
        puVar24 = (undefined *)0x0;
        if (!bVar11) {
          puVar24 = in_stack_00000038;
        }
        bVar12 = in_stack_00000030 == (undefined *)0x8000000000000001;
        puVar2 = (undefined *)0x0;
        if (!bVar12) {
          puVar2 = in_stack_00000030;
        }
        if (in_stack_00000be0 == (undefined1 *)0x1d) goto code_r0x000100b18b6c;
        _memcpy(&stack0x00000ad8,&stack0x00000bf0,0x108);
        goto LAB_100b18888;
      }
      in_stack_00000d68 = &UNK_108cb9043;
      in_stack_00000d70 = (undefined *)0x11;
      FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
    }
    else {
      in_stack_00000d68 = &UNK_108cb9040;
      in_stack_00000d70 = (undefined *)0x3;
      FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
    }
  }
  else {
    in_stack_00000d68 = &UNK_108cb89b2;
    in_stack_00000d70 = (undefined *)0xe;
    FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
  }
LAB_100b187ec:
  in_stack_000002f0 = &stack0x00000d68;
  in_stack_000002f8 = (long *)&DAT_100c7b3a0;
  goto LAB_100b187f8;
code_r0x000100b18b6c:
  in_stack_00000d68 = &UNK_108caf1ae;
  in_stack_00000d70 = (undefined *)0x7;
  in_stack_000002f0 = &stack0x00000d68;
  in_stack_000002f8 = (long *)&DAT_100c7b3a0;
  FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f0);
  if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000080);
  }
  if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x22);
  }
  if (puVar20 != (undefined *)0x0) {
    _free(unaff_x20);
  }
  bVar10 = false;
  goto LAB_100b18808;
}

