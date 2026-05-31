
/* WARNING: Removing unreachable block (ram,0x00010055107c) */
/* WARNING: Removing unreachable block (ram,0x000100551094) */
/* WARNING: Removing unreachable block (ram,0x000100551098) */
/* WARNING: Removing unreachable block (ram,0x0001005510a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_100550ccc(void)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar15;
  long lVar16;
  long *unaff_x22;
  undefined2 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000058;
  uint in_stack_00000060;
  long in_stack_00000560;
  undefined8 in_stack_00000568;
  ulong in_stack_00000570;
  undefined8 *in_stack_000006e0;
  undefined8 *in_stack_000006e8;
  undefined8 *in_stack_000006f0;
  undefined8 *in_stack_00000810;
  undefined8 in_stack_00000818;
  long in_stack_00000820;
  undefined8 in_stack_00000828;
  ulong in_stack_00000830;
  undefined8 *in_stack_00000838;
  undefined8 *in_stack_00000840;
  long in_stack_00000848;
  undefined8 in_stack_00000850;
  undefined8 *in_stack_00000858;
  undefined8 *in_stack_00000860;
  undefined8 *in_stack_00000868;
  undefined8 *in_stack_00000870;
  undefined8 *in_stack_00000878;
  undefined6 uVar21;
  undefined8 in_stack_00000880;
  undefined4 uVar22;
  undefined2 uVar23;
  undefined8 *in_stack_00000888;
  undefined8 *in_stack_00000890;
  undefined8 *in_stack_00003bd0;
  undefined8 *in_stack_00003bd8;
  undefined8 *puVar24;
  undefined8 *in_stack_00003be0;
  undefined8 *in_stack_00003be8;
  undefined8 *in_stack_00003bf0;
  undefined8 *in_stack_00003bf8;
  undefined8 in_stack_00003c00;
  long in_stack_00003c08;
  undefined8 in_stack_00003c10;
  ulong in_stack_00003c18;
  undefined8 *in_stack_00003c20;
  undefined8 *in_stack_00003c28;
  long in_stack_00003c30;
  undefined8 in_stack_00003c38;
  undefined8 *in_stack_00003c40;
  undefined8 *in_stack_00003c48;
  undefined8 *in_stack_00003c50;
  undefined8 *in_stack_00003c58;
  undefined8 *in_stack_00003c60;
  undefined8 *in_stack_00006f40;
  undefined8 *in_stack_00006f48;
  undefined8 *in_stack_00006f50;
  uint7 uVar26;
  undefined8 *puVar25;
  undefined8 *in_stack_00006f60;
  undefined8 *in_stack_00006f68;
  undefined8 in_stack_00006f70;
  long in_stack_00006f78;
  undefined8 in_stack_00006f80;
  ulong in_stack_00006f88;
  undefined8 *in_stack_00006f90;
  undefined8 *in_stack_00006f98;
  long in_stack_00006fa0;
  undefined8 in_stack_00006fa8;
  undefined8 *in_stack_00006fb0;
  undefined8 *in_stack_00006fb8;
  undefined8 *in_stack_00006fc0;
  undefined8 *in_stack_00006fc8;
  undefined8 *in_stack_00006fd0;
  undefined8 *in_stack_0000a2b0;
  undefined8 *in_stack_0000a2b8;
  long in_stack_0000a2c0;
  long in_stack_0000a2c8;
  undefined8 in_stack_0000a2d0;
  long in_stack_0000a2e0;
  undefined8 in_stack_0000a2e8;
  long in_stack_0000a2f8;
  undefined8 in_stack_0000a300;
  undefined4 in_stack_0000a43c;
  undefined8 in_stack_0000a440;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00006f40,s_raw_payload__108ad0b1d,&stack0x00003bd0);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003bd0,s____json_108ad0b2c,&stack0x00006f40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb8);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x0000a2b0,s__json_108ad0b37,&stack0x00006f40);
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
            (&stack0x00000560,uVar3,uVar4,in_stack_0000a2b8,in_stack_0000a2c0);
  if (in_stack_0000a2b0 != (undefined8 *)0x0) {
    _free(in_stack_0000a2b8);
  }
  if (in_stack_00000570 < 0x180) {
    _memcpy(&stack0x00006f40,in_stack_00000568,in_stack_00000570);
    (&stack0x00006f40)[in_stack_00000570] = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (&stack0x00003bd0,&stack0x00006f40,in_stack_00000570 + 1);
    if ((int)in_stack_00003bd0 == 1) {
      in_stack_00000888 = (undefined8 *)&UNK_10b4add80;
      in_stack_00000880 = CONCAT44((int)((ulong)in_stack_00000880 >> 0x20),1);
    }
    else {
      FUN_10602e6c4(&stack0x00000880,in_stack_00003bd8,&stack0x0000a430);
    }
  }
  else {
    thunk_FUN_108a81cfc(&stack0x00000880,in_stack_00000568,in_stack_00000570,&stack0x0000a430);
  }
  if ((int)in_stack_00000880 == 1) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000880,s_create_108ad0b3f,&stack0x00006f40);
    __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00006f40);
    puVar9 = (undefined8 *)thunk_FUN_108857510(&stack0x00006f40,&stack0x00003bd0);
    in_stack_00003be0 = unaff_x24;
    in_stack_00003be8 = unaff_x21;
    puVar25 = in_stack_00000888;
    in_stack_00003bf0 = in_stack_00006f60;
LAB_100551268:
    puVar24 = (undefined8 *)
              &
              __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    if (in_stack_00000560 != 0) {
      _free(in_stack_00000568);
    }
    if (in_stack_00003bd0 != (undefined8 *)0x0) {
      _free(in_stack_00003bd8);
    }
    if (in_stack_00006f40 != (undefined8 *)0x0) {
      _free(in_stack_00006f48);
    }
    if ((((in_stack_00000060 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + 0x18) = 1;
    }
    _pthread_mutex_unlock(*(undefined8 *)(unaff_x20 + 0x10));
    in_stack_00006f48 = puVar9;
    in_stack_00003bd0 = (undefined8 *)&stack0x00003bd0;
    in_stack_00003bf8 = in_stack_00006f68;
    puVar9 = in_stack_00000888;
    puVar10 = in_stack_00000890;
    puVar12 = in_stack_00003bf0;
LAB_1005512c0:
    (**(code **)*in_stack_00006f48)(in_stack_00006f48);
    in_stack_00006f40 = in_stack_00003bd0;
    in_stack_00006f48 = puVar24;
    in_stack_00006f50 = in_stack_00003be0;
    in_stack_00003bd0 = in_stack_00003be8;
    in_stack_00003bd8 = in_stack_00003bf0;
    in_stack_00003be0 = in_stack_00003bf8;
    in_stack_000006e0 = puVar9;
    in_stack_000006e8 = puVar10;
    in_stack_000006f0 = puVar25;
    in_stack_0000a440 = in_stack_00006f70;
    in_stack_00000560 = in_stack_00006f78;
    in_stack_00000568 = in_stack_00006f80;
    in_stack_00000570 = in_stack_00006f88;
    in_stack_00000880 = in_stack_00006fa8;
    in_stack_00000888 = in_stack_00006fb0;
    in_stack_00000890 = in_stack_00006fb8;
  }
  else {
    uVar22 = (undefined4)((ulong)in_stack_00000880 >> 0x20);
    puVar12 = (undefined8 *)CONCAT44((int)((ulong)in_stack_00006f60 >> 0x20),uVar22);
    puVar9 = (undefined8 *)0x2;
    uVar26 = (uint7)((ulong)unaff_x21 >> 8);
    uVar23 = (undefined2)((ulong)in_stack_00000880 >> 0x30);
    uVar21 = (undefined6)((ulong)in_stack_00003bd0 >> 0x10);
    puVar24 = in_stack_00003bd8;
    if (*unaff_x22 == -0x8000000000000000) {
      lVar19 = unaff_x19[0x16a];
      lVar17 = unaff_x19[0x16b];
      puVar25 = (undefined8 *)((ulong)uVar26 << 8);
      lVar16 = FUN_100c34aa4(uVar22,&UNK_108ca7634,1);
      if (lVar16 != 0) {
        puVar10 = (undefined8 *)func_0x000107c05db8();
        goto LAB_1005511c8;
      }
      *unaff_x23 = 0x100;
      puVar24 = (undefined8 *)&stack0x00006f40;
      puVar10 = (undefined8 *)FUN_1014d3a78(&stack0x00003bd0,&UNK_108cd6faa,0x12);
      if (puVar10 != (undefined8 *)0x0) goto LAB_1005511c8;
      in_stack_00000880 = CONCAT26(uVar23,uVar21);
      if ((char)in_stack_00003bd0 == '\x02') {
LAB_100551168:
        puVar10 = (undefined8 *)&stack0x00006f40;
        in_stack_00000880 = CONCAT26(uVar23,uVar21);
        unaff_x23 = (undefined2 *)&stack0x00003bd0;
        puVar24 = puVar10;
        goto LAB_1005511c8;
      }
      unaff_x23 = (undefined2 *)&stack0x00003bd0;
      puVar10 = (undefined8 *)FUN_1014bd07c(&stack0x00003bd0,&UNK_108caeb8a,0xb,lVar19,lVar17);
      if (puVar10 != (undefined8 *)0x0) goto LAB_1005511c8;
      if (((ulong)in_stack_00003bd0 & 1) == 0) {
        unaff_x23 = (undefined2 *)&stack0x00003bd0;
        if ((char)((ulong)in_stack_00003bd0 >> 8) != '\0') {
          lVar16 = FUN_100c34aa4(uVar22,&UNK_108ca2104,1);
          if (lVar16 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            puVar10 = (undefined8 *)func_0x000107c05db8();
          }
        }
        goto LAB_1005511c8;
      }
      unaff_x23 = (undefined2 *)&stack0x00003bd0;
      _close(uVar22);
    }
    else {
      lVar20 = unaff_x19[0x16d];
      lVar18 = unaff_x19[0x17a];
      lVar15 = unaff_x19[0x17d];
      lVar17 = unaff_x19[0x180];
      lVar14 = unaff_x19[0x183];
      cVar8 = *(char *)((long)unaff_x19 + 0xcbd);
      lVar19 = unaff_x19[0x191];
      puVar25 = (undefined8 *)((ulong)uVar26 << 8);
      lVar16 = FUN_100c34aa4(uVar22,&UNK_108ca7634,1);
      if (lVar16 == 0) {
        *unaff_x23 = 0x100;
        puVar10 = (undefined8 *)FUN_1014d3a78(&stack0x00003bd0,&UNK_108cd6f9b,0xf);
        puVar24 = (undefined8 *)&stack0x00006f40;
        if (puVar10 == (undefined8 *)0x0) {
          in_stack_00000880 = CONCAT26(uVar23,uVar21);
          if ((char)in_stack_00003bd0 == '\x02') goto LAB_100551168;
          unaff_x23 = (undefined2 *)&stack0x00003bd0;
          puVar10 = (undefined8 *)
                    FUN_1014bd07c(&stack0x00003bd0,&UNK_108ca1efe,5,unaff_x19[0x169],
                                  unaff_x19[0x16a]);
          if ((((((puVar10 == (undefined8 *)0x0) &&
                 ((lVar20 == 0 ||
                  (puVar10 = (undefined8 *)
                             FUN_1014bd07c(&stack0x00003bd0,&UNK_108ca26b2,0xc,unaff_x19[0x16c],
                                           lVar20), puVar10 == (undefined8 *)0x0)))) &&
                ((lVar18 == -0x8000000000000000 ||
                 (puVar10 = (undefined8 *)
                            FUN_1014b40e4(&stack0x00003bd0,&UNK_108cd6fd7,0x14,unaff_x19 + 0x17a),
                 puVar10 == (undefined8 *)0x0)))) &&
               (((((((puVar10 = (undefined8 *)
                                FUN_1014d4f00(&stack0x00003bd0,unaff_x19[0x16f],unaff_x19[0x170]),
                     puVar10 == (undefined8 *)0x0 &&
                     (puVar10 = (undefined8 *)FUN_1014beaa0(&stack0x00003bd0,unaff_x19 + 0x171),
                     puVar10 == (undefined8 *)0x0)) &&
                    (puVar10 = (undefined8 *)
                               FUN_1014bd07c(&stack0x00003bd0,&UNK_108ca26d9,0xb,unaff_x19[0x175],
                                             unaff_x19[0x176]), puVar10 == (undefined8 *)0x0)) &&
                   ((puVar10 = (undefined8 *)
                               FUN_1014d8890(&stack0x00003bd0,&UNK_108ca3002,0x13,
                                             *(undefined1 *)((long)unaff_x19 + 0xcba)),
                    puVar10 == (undefined8 *)0x0 &&
                    (puVar10 = (undefined8 *)
                               FUN_1014d69f0(&stack0x00003bd0,(char)unaff_x19[0x197],
                                             *(undefined1 *)((long)unaff_x19 + 0xcb9)),
                    puVar10 == (undefined8 *)0x0)))) &&
                  (puVar10 = (undefined8 *)
                             FUN_1014d8890(&stack0x00003bd0,&UNK_108cd6fbc,5,
                                           *(undefined1 *)((long)unaff_x19 + 0xcbb)),
                  puVar10 == (undefined8 *)0x0)) &&
                 (((puVar10 = (undefined8 *)
                              FUN_1014d8890(&stack0x00003bd0,&UNK_108caca54,6,
                                            *(undefined1 *)((long)unaff_x19 + 0xcbc)),
                   puVar10 == (undefined8 *)0x0 &&
                   (puVar10 = (undefined8 *)
                              FUN_1014c06f8(&stack0x00003bd0,&UNK_108cd6fc1,unaff_x19[0x178],
                                            unaff_x19[0x179]), puVar10 == (undefined8 *)0x0)) &&
                  ((lVar15 == -0x8000000000000000 ||
                   (puVar10 = (undefined8 *)
                              FUN_1014b40e4(&stack0x00003bd0,&UNK_108ca1f11,0xc,unaff_x19 + 0x17d),
                   puVar10 == (undefined8 *)0x0)))))) &&
                ((lVar17 == -0x8000000000000000 ||
                 (puVar10 = (undefined8 *)
                            FUN_1014b40e4(&stack0x00003bd0,&UNK_108cde2d0,0x10,unaff_x19 + 0x180),
                 puVar10 == (undefined8 *)0x0)))))) &&
              ((lVar14 == -0x7fffffffffffffff ||
               (puVar10 = (undefined8 *)FUN_1014af5dc(&stack0x00003bd0,unaff_x19 + 0x183),
               puVar10 == (undefined8 *)0x0)))) &&
             (((cVar8 == '\x02' ||
               (puVar10 = (undefined8 *)FUN_1014b1808(&stack0x00003bd0,cVar8),
               puVar10 == (undefined8 *)0x0)) &&
              ((lVar19 == 0 ||
               (puVar10 = (undefined8 *)
                          func_0x0001014c09d4(&stack0x00003bd0,&UNK_108cd6fc8,0xf,lVar19,
                                              unaff_x19[0x194]), puVar10 == (undefined8 *)0x0))))))
          {
            puVar10 = (undefined8 *)FUN_1014dfbe0(&stack0x00003bd0);
          }
        }
      }
      else {
        puVar10 = (undefined8 *)func_0x000107c05db8();
      }
LAB_1005511c8:
      _close(uVar22);
      if (puVar10 != (undefined8 *)0x0) {
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000880,s_write_JSON_108ad0b49,&stack0x00006f40);
        __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x00006f40);
        in_stack_00003be0 = (undefined8 *)0x1;
        puVar9 = (undefined8 *)thunk_FUN_108857ac8(&stack0x00006f40,&stack0x00003bd0);
        in_stack_00003be8 = puVar25;
        puVar25 = puVar10;
        in_stack_00003bf0 = puVar12;
        goto LAB_100551268;
      }
    }
    puVar10 = (undefined8 *)0x1;
    if (in_stack_00000560 != 0) {
      _free(in_stack_00000568);
    }
    if ((((in_stack_00000060 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar11 = FUN_107c05e34(), (uVar11 & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + 0x18) = 1;
    }
    _pthread_mutex_unlock(*(undefined8 *)(unaff_x20 + 0x10));
    if (in_stack_00006f40 == (undefined8 *)0x8000000000000000) goto LAB_1005512c0;
    *(undefined1 *)(unaff_x23 + 0x18) = 0;
    func_0x000100025ae8(&stack0x000006e0,unaff_x19 + 0xf6);
    func_0x000100025ae8(&stack0x0000a430,unaff_x27);
    func_0x000100025ae8(&stack0x00000560,unaff_x19 + 0xec);
    func_0x000100025ae8(&stack0x0000a2b0,unaff_x19 + 0xef);
    func_0x000100025ae8(&stack0x00000880,unaff_x19 + 0xf2);
    in_stack_00006f68 = (undefined8 *)CONCAT44(in_stack_0000a43c,0x10100);
    puVar12 = (undefined8 *)0x10001b600000000;
    __ZN19codex_rollout_trace9inference31append_with_context_best_effort17h14cd5bb007244684E
              (unaff_x27,&stack0x00006f40);
    in_stack_00006f90 = in_stack_0000a2b0;
    in_stack_00006f98 = in_stack_0000a2b8;
    in_stack_00006fa0 = in_stack_0000a2c0;
    in_stack_00006fc0 = in_stack_00006f40;
    in_stack_00006fc8 = in_stack_00006f48;
    in_stack_00006fd0 = in_stack_00006f50;
  }
  lVar16 = unaff_x19[9];
  if (*(long *)(lVar16 + 0x178) != -0x7fffffffffffffff) {
    in_stack_00006f48 = (undefined8 *)(lVar16 + 0x178);
LAB_100551368:
    *(undefined1 *)((long)unaff_x19 + 0x73d) = 0;
    _memcpy(&stack0x00006f40);
    uVar7 = __ZN10codex_core6client16WebsocketSession17connection_reused17h3e811a8f1bcbe6b8E(lVar16)
    ;
    _memcpy(&stack0x00000560,&stack0x00006f40,0x180);
    plVar13 = unaff_x19 + 0xfa;
    _memcpy(plVar13,&stack0x00000560,0x180);
    unaff_x19[0x12a] = (long)in_stack_00006f48;
    *(undefined1 *)(unaff_x19 + 0x130) = uVar7;
    *(undefined1 *)((long)unaff_x19 + 0x981) = 0;
    *(undefined2 *)((long)unaff_x19 + 0x982) = 0;
    *(undefined1 *)((long)unaff_x19 + 0x984) = 1;
    _memcpy(&stack0x0000a2b0,plVar13,0x180);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
       (((bRam000000010b627000 - 1 < 2 ||
         ((bRam000000010b627000 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection14stream_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34033c4c04a2d2d7E
                             ), cVar8 != '\0')))) &&
        (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection14stream_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34033c4c04a2d2d7E
                            ), (uVar11 & 1) != 0)))) {
      in_stack_000006f0 =
           ___ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection14stream_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34033c4c04a2d2d7E
           + 6;
      in_stack_00006f40 = (undefined8 *)0x1;
      in_stack_000006e0 = (undefined8 *)&UNK_10b24fa78;
      in_stack_000006e8 = (undefined8 *)0x2;
      __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                (unaff_x19 + 299,
                 ___ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection14stream_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34033c4c04a2d2d7E
                 ,&stack0x00006f40);
      *(undefined1 *)((long)unaff_x19 + 0x982) = 1;
    }
    else {
      puVar12 = 
      ___ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection14stream_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h34033c4c04a2d2d7E
      ;
      in_stack_00006f40 = (undefined8 *)0x2;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00006f40,&stack0x00003bd0);
      }
      *(undefined1 *)((long)unaff_x19 + 0x982) = 1;
      unaff_x19[0x12f] = (long)puVar12;
      unaff_x19[300] = (long)in_stack_000006e0;
      unaff_x19[299] = 2;
      unaff_x19[0x12e] = (long)in_stack_000006f0;
      unaff_x19[0x12d] = (long)in_stack_000006e8;
    }
    *(undefined2 *)((long)unaff_x19 + 0x983) = 1;
    _memcpy(&stack0x00000880,&stack0x0000a2b0,0x180);
    if (unaff_x19[299] == 2) {
      *(undefined1 *)((long)unaff_x19 + 0x983) = 0;
      _memcpy(unaff_x19 + 0x131,&stack0x00000880,400);
      plVar1 = unaff_x19 + 0x131;
      FUN_1016220fc(&stack0x00006f40,plVar1);
      if (in_stack_00006f40 != (undefined8 *)0x13) {
        if (*(char *)((long)unaff_x19 + 0xb11) == '\0') {
          if (*plVar1 == -0x8000000000000000) {
            if (unaff_x19[0x132] != 0) {
              _free(unaff_x19[0x133]);
            }
          }
          else {
            func_0x000100e15954(plVar1);
          }
        }
LAB_10055182c:
        *(undefined1 *)((long)unaff_x19 + 0x983) = 0;
        if ((*(byte *)((long)unaff_x19 + 0x982) & 1) != 0) {
          FUN_100dddd8c(unaff_x19 + 299);
        }
        *(undefined1 *)((long)unaff_x19 + 0x982) = 0;
        *(undefined1 *)((long)unaff_x19 + 0x984) = 0;
        *(undefined1 *)((long)unaff_x19 + 0x981) = 1;
        FUN_100d19980(plVar13);
        if (in_stack_00006f40 != (undefined8 *)0x12) {
          if (in_stack_00006f40 < (undefined8 *)0x8) {
            __ZN28codex_response_debug_context30extract_response_debug_context17hf8d787bb58fd4849E
                      (&stack0x0000a2b0,&stack0x00003bd0);
          }
          else {
            in_stack_0000a2b0 = (undefined8 *)0x8000000000000000;
            in_stack_0000a2c8 = -0x8000000000000000;
            in_stack_0000a2e0 = -0x8000000000000000;
            in_stack_0000a2f8 = -0x8000000000000000;
          }
          __ZN9codex_api10api_bridge13map_api_error17h397674ad8ce00b36E
                    (&stack0x00006f40,&stack0x00000778);
          puVar24 = (undefined8 *)0x0;
          if (in_stack_0000a2b0 != (undefined8 *)0x8000000000000000) {
            puVar24 = in_stack_0000a2b8;
          }
          FUN_100b19bd4(unaff_x19 + 0xe9,&stack0x00006f40,puVar24,in_stack_0000a2c0);
          if (((ulong)in_stack_0000a2b0 & 0x7fffffffffffffff) != 0) {
            _free(in_stack_0000a2b8);
          }
          if ((in_stack_0000a2c8 != -0x8000000000000000) && (in_stack_0000a2c8 != 0)) {
            _free(in_stack_0000a2d0);
          }
          if ((in_stack_0000a2e0 != -0x8000000000000000) && (in_stack_0000a2e0 != 0)) {
            _free(in_stack_0000a2e8);
          }
          if ((in_stack_0000a2f8 != -0x8000000000000000) && (in_stack_0000a2f8 != 0)) {
            _free(in_stack_0000a300);
          }
          if (in_stack_00006f40 != (undefined8 *)0x8000000000000020) {
            bVar5 = *(byte *)((long)unaff_x19 + 0x73c);
            in_stack_0000a2b0 = in_stack_000006e0;
            in_stack_0000a2b8 = in_stack_000006e8;
            in_stack_00000810 = in_stack_00006f68;
            in_stack_00000818 = in_stack_0000a440;
            in_stack_00000820 = in_stack_00000560;
            in_stack_00000828 = in_stack_00000568;
            in_stack_00000830 = in_stack_00000570;
            in_stack_00000838 = in_stack_00006f90;
            in_stack_00000840 = in_stack_00006f98;
            in_stack_00000848 = in_stack_00006fa0;
            in_stack_00000850 = in_stack_00000880;
            in_stack_00000858 = in_stack_00000888;
            in_stack_00000860 = in_stack_00000890;
            in_stack_00000868 = in_stack_00006fc0;
            in_stack_00000870 = in_stack_00006fc8;
            in_stack_00000878 = in_stack_00006fd0;
            goto joined_r0x000100551bcc;
          }
        }
        FUN_101506a80(&stack0x00006f40,unaff_x19[0xc]);
        *(undefined1 *)((long)unaff_x19 + 0x73c) = 0;
        __ZN10codex_core6client19map_response_stream17h21105620e7154f33E
                  (&stack0x0000a2b0,&stack0x00000880,&stack0x00006f40,&stack0x00003bd0);
        plVar13 = (long *)unaff_x19[9];
        if (*plVar13 != 0) {
          FUN_100e6bf90(plVar13 + 1);
          plVar13 = (long *)unaff_x19[9];
        }
        *plVar13 = 1;
        plVar13[1] = in_stack_0000a2c0;
        in_stack_00006f40 = (undefined8 *)0x8000000000000020;
        bVar5 = *(byte *)((long)unaff_x19 + 0x73c);
        goto joined_r0x000100551bcc;
      }
      uVar7 = 4;
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x983) = 0;
      _memcpy(&stack0x00006f68,&stack0x00000880,400);
      *(undefined1 *)((long)unaff_x19 + 0x982) = 0;
      in_stack_000006e0 = (undefined8 *)unaff_x19[300];
      in_stack_00006f40 = (undefined8 *)unaff_x19[299];
      in_stack_000006f0 = (undefined8 *)unaff_x19[0x12e];
      in_stack_000006e8 = (undefined8 *)unaff_x19[0x12d];
      puVar12 = (undefined8 *)unaff_x19[0x12f];
      _memcpy(&stack0x00003bd0,&stack0x00006f40,0x1b8);
      _memcpy(unaff_x19 + 0x131,&stack0x00003bd0,0x1b8);
      puVar2 = (ulong *)(unaff_x19 + 0x131);
      if (unaff_x19[0x131] != 2) {
        lVar16 = unaff_x19[0x132];
        if ((unaff_x19[0x131] & 1U) != 0) {
          lVar16 = lVar16 + (*(long *)(unaff_x19[0x133] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(unaff_x19[0x133] + 0x60))(lVar16,unaff_x19 + 0x134);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (unaff_x19[0x135] != 0)) {
        FUN_1011d7d74(puVar2,&UNK_108cd3ef5,0x15,s__>___108ab67cd,unaff_x29 + -0x70);
      }
      FUN_1016220fc(&stack0x00006f40,unaff_x19 + 0x136);
      if (*puVar2 != 2) {
        lVar16 = unaff_x19[0x132];
        if ((*puVar2 & 1) != 0) {
          lVar16 = lVar16 + (*(long *)(unaff_x19[0x133] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(unaff_x19[0x133] + 0x68))(lVar16,unaff_x19 + 0x134);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (unaff_x19[0x135] != 0)) {
        FUN_1011d7d74(puVar2,&UNK_108cd3ef5,0x15,s_<____108ab67c5,unaff_x29 + -0x70);
      }
      if (in_stack_00006f40 != (undefined8 *)0x13) {
        FUN_100d945c4(puVar2);
        goto LAB_10055182c;
      }
      uVar7 = 3;
    }
    *(undefined1 *)((long)unaff_x19 + 0x981) = uVar7;
    *in_stack_00000058 = 0x8000000000000021;
    uVar7 = 7;
    goto LAB_100551e0c;
  }
  in_stack_000006e8 = (undefined8 *)_malloc(0x23);
  if (in_stack_000006e8 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x23);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005522ec);
    (*pcVar6)();
  }
  *(undefined4 *)((long)in_stack_000006e8 + 0x1f) = 0x656c6261;
  in_stack_000006e8[1] = 0x63656e6e6f632074;
  *in_stack_000006e8 = 0x656b636f73626577;
  in_stack_000006e8[3] = 0x616c696176616e75;
  in_stack_000006e8[2] = 0x207369206e6f6974;
  in_stack_000006f0 = (undefined8 *)0x23;
  in_stack_000006e0 = (undefined8 *)0x23;
  __ZN9codex_api10api_bridge13map_api_error17h397674ad8ce00b36E(&stack0x00003bd0,&stack0x00006f40);
  if (in_stack_00006f40 == (undefined8 *)0x8000000000000020) {
    lVar16 = unaff_x19[9];
    goto LAB_100551368;
  }
  bVar5 = *(byte *)((long)unaff_x19 + 0x73c);
  in_stack_000006f0 = in_stack_00003bd0;
  puVar12 = in_stack_00003bd8;
  in_stack_0000a2b0 = in_stack_00006f48;
  in_stack_0000a2b8 = in_stack_00006f50;
  in_stack_00000810 = in_stack_00003be0;
  in_stack_00000818 = in_stack_00003c00;
  in_stack_00000820 = in_stack_00003c08;
  in_stack_00000828 = in_stack_00003c10;
  in_stack_00000830 = in_stack_00003c18;
  in_stack_00000838 = in_stack_00003c20;
  in_stack_00000840 = in_stack_00003c28;
  in_stack_00000848 = in_stack_00003c30;
  in_stack_00000850 = in_stack_00003c38;
  in_stack_00000858 = in_stack_00003c40;
  in_stack_00000860 = in_stack_00003c48;
  in_stack_00000868 = in_stack_00003c50;
  in_stack_00000870 = in_stack_00003c58;
  in_stack_00000878 = in_stack_00003c60;
joined_r0x000100551bcc:
  if ((((bVar5 & 1) != 0) && (unaff_x19[0xe9] != -0x8000000000000000)) &&
     (FUN_100e4ba20(unaff_x19 + 0xe9), unaff_x19[0xf6] != 0)) {
    _free(unaff_x19[0xf7]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x73c) = 0;
  if ((*(byte *)((long)unaff_x19 + 0x73d) & 1) == 0) {
LAB_100551c3c:
    *(undefined1 *)((long)unaff_x19 + 0x73d) = 0;
    bVar5 = *(byte *)(unaff_x19 + 0xe8);
  }
  else {
    if (unaff_x19[0x168] != -0x8000000000000000) {
      func_0x000100e15954(unaff_x19 + 0x168);
      goto LAB_100551c3c;
    }
    if (unaff_x19[0x169] == 0) goto LAB_100551c3c;
    _free(unaff_x19[0x16a]);
    *(undefined1 *)((long)unaff_x19 + 0x73d) = 0;
    bVar5 = *(byte *)(unaff_x19 + 0xe8);
  }
  if ((bVar5 & 1) != 0) {
    func_0x000100e15954(unaff_x19 + 0xa4);
  }
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if ((*(byte *)((long)unaff_x19 + 0x741) & 1) != 0) {
    func_0x000100e0820c(unaff_x19 + 0x77);
  }
  *(undefined1 *)((long)unaff_x19 + 0x741) = 0;
  func_0x000100e25c50(unaff_x19 + 0x57);
  if (unaff_x19[0x39] != -0x7ffffffffffffffd) {
    FUN_100e0609c(unaff_x19 + 0x39);
  }
  if ((*(byte *)((long)unaff_x19 + 0x743) & 1) != 0) {
    if (unaff_x19[0x27] != 0) {
      _free(unaff_x19[0x28]);
    }
    if (unaff_x19[0x2a] != 0) {
      _free(unaff_x19[0x2b]);
    }
    if (unaff_x19[0x33] != 0) {
      FUN_100cb56bc(unaff_x19 + 0x33);
    }
    FUN_100def764(unaff_x19 + 0x1b);
  }
  if ((*(byte *)((long)unaff_x19 + 0x742) & 1) != 0) {
    lVar16 = *(long *)unaff_x19[0x4c];
    *(long *)unaff_x19[0x4c] = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001046b10a8(unaff_x19 + 0x4c);
    }
  }
  *(undefined2 *)((long)unaff_x19 + 0x742) = 0;
  if (unaff_x19[0x11] != -0x7fffffffffffffff) {
    lVar16 = *(long *)unaff_x19[0x14];
    *(long *)unaff_x19[0x14] = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
    if ((unaff_x19[0x11] != -0x8000000000000000) && (unaff_x19[0x11] != 0)) {
      _free(unaff_x19[0x12]);
    }
  }
  plVar13 = (long *)unaff_x19[0x10];
  if (plVar13 != (long *)0x0) {
    lVar16 = *plVar13;
    *plVar13 = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
  }
  if ((*unaff_x19 != -0x8000000000000000) && (*unaff_x19 != 0)) {
    _free(unaff_x19[1]);
  }
  lVar16 = unaff_x19[3];
  if (lVar16 != -0x7fffffffffffffff) {
    if ((lVar16 != -0x8000000000000000) && (lVar16 != 0)) {
      _free(unaff_x19[4]);
    }
    if ((unaff_x19[6] != -0x8000000000000000) && (unaff_x19[6] != 0)) {
      _free(unaff_x19[7]);
    }
  }
  in_stack_00000058[0xc] = in_stack_00000848;
  in_stack_00000058[0xb] = in_stack_00000840;
  in_stack_00000058[0xe] = in_stack_00000858;
  in_stack_00000058[0xd] = in_stack_00000850;
  in_stack_00000058[0x10] = in_stack_00000868;
  in_stack_00000058[0xf] = in_stack_00000860;
  in_stack_00000058[0x12] = in_stack_00000878;
  in_stack_00000058[0x11] = in_stack_00000870;
  in_stack_00000058[6] = in_stack_00000818;
  in_stack_00000058[5] = in_stack_00000810;
  in_stack_00000058[8] = in_stack_00000828;
  in_stack_00000058[7] = in_stack_00000820;
  *in_stack_00000058 = in_stack_00006f40;
  in_stack_00000058[1] = in_stack_0000a2b0;
  in_stack_00000058[2] = in_stack_0000a2b8;
  in_stack_00000058[3] = in_stack_000006f0;
  in_stack_00000058[4] = puVar12;
  uVar7 = 1;
  in_stack_00000058[10] = in_stack_00000838;
  in_stack_00000058[9] = in_stack_00000830;
LAB_100551e0c:
  *(undefined1 *)((long)unaff_x19 + 0x73b) = uVar7;
  return;
}

