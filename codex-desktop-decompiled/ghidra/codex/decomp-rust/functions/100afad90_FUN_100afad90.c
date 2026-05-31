
/* WARNING: Removing unreachable block (ram,0x000100afb768) */
/* WARNING: Removing unreachable block (ram,0x000100afb210) */
/* WARNING: Removing unreachable block (ram,0x000100afb41c) */
/* WARNING: Removing unreachable block (ram,0x000100afb4dc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100afad90(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  undefined *puVar25;
  byte bVar26;
  byte bVar27;
  undefined1 uVar28;
  long *plVar29;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  undefined8 in_x9;
  ulong *puVar33;
  undefined8 uVar34;
  long *plVar35;
  byte bVar36;
  byte bVar37;
  undefined8 unaff_x21;
  undefined8 *puVar38;
  ulong *unaff_x22;
  ulong uVar39;
  ulong *puVar40;
  long unaff_x27;
  ulong *puVar41;
  undefined8 *unaff_x28;
  long lVar42;
  long *plVar43;
  long unaff_x29;
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  ulong *puStack0000000000000010;
  ulong *in_stack_000000a0;
  long *in_stack_000006a0;
  long *plVar46;
  ulong *in_stack_000006a8;
  ulong *in_stack_000006b0;
  undefined8 in_stack_00001500;
  ulong in_stack_00001570;
  uint7 uVar47;
  ulong in_stack_00001578;
  
  *(char **)(unaff_x29 + -0xa0) = s__CONNECT_upstream_dial_establish_108ad0288;
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000230;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_x9;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00001500;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  _memcpy(&stack0x000006a0,&stack0x00001020,0x4c8);
  *(undefined1 *)(unaff_x27 + 0x255) = 1;
  _memcpy(&stack0x00000230,&stack0x000006a0,0x470);
  func_0x000100dfd554(&stack0x00000b10);
  *(undefined1 *)(unaff_x27 + 0x253) = 0;
  *(undefined1 *)(unaff_x27 + 0x255) = 0;
  _memcpy(&stack0x00001020,&stack0x00000230,0x470);
  *(undefined1 *)(unaff_x27 + 0x254) = 1;
  if ((*unaff_x22 < 3) &&
     (((bRam000000010b62e9c0 - 1 < 2 ||
       ((bRam000000010b62e9c0 != 0 &&
        (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c00ce64a3246f5fE
                            ), cVar15 != '\0')))) &&
      (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c00ce64a3246f5fE
                          ), (uVar18 & 1) != 0)))) {
    *(long *)(unaff_x29 + -0xd0) = unaff_x27 + 0x138;
    *(undefined **)(unaff_x29 + -200) =
         &
         __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
    ;
    *(char **)(unaff_x29 + -0x90) = s__CONNECT_tunnel_forwarding_start_108ad02c6;
    *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0xd0;
    *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
    in_stack_000006a8 = (ulong *)(unaff_x29 + -0x100);
    in_stack_000006a0 = (long *)0x1;
    in_stack_000006b0 = (ulong *)0x1;
    FUN_100afd9ec(&stack0x000006a0);
  }
  else {
    lVar12 = 
    ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c00ce64a3246f5fE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar18 = *(ulong *)(
                         ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c00ce64a3246f5fE
                         + 0x20);
      uVar34 = *(undefined8 *)
                (
                ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c00ce64a3246f5fE
                + 0x28);
      puVar25 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar25 = &UNK_10b3c24c8;
      }
      unaff_x22 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x22 = (ulong *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(puVar25 + 0x18))(unaff_x22,&stack0x00001520);
      if (iVar16 != 0) {
        *(long *)(unaff_x29 + -0x90) = unaff_x27 + 0x138;
        *(undefined **)(unaff_x29 + -0x88) =
             &
             __ZN86__LT_rama_net__address__host_with_port__HostWithPort_u20_as_u20_core__fmt__Display_GT_3fmt17h2d971d6c0a5f333cE
        ;
        *(char **)(unaff_x29 + -0x100) = s__CONNECT_tunnel_forwarding_start_108ad02c6;
        *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x90;
        *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x100;
        *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
        in_stack_000006a8 = (ulong *)(unaff_x29 + -0xa0);
        in_stack_000006a0 = (long *)0x1;
        in_stack_000006b0 = (ulong *)0x1;
        in_stack_00001570 = 3;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar34;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,unaff_x22,puVar25,unaff_x29 + -0xd0,&stack0x000006a0);
        in_stack_00001578 = uVar18;
      }
    }
  }
  auVar45 = func_0x000106032954(8);
  *(undefined1 (*) [12])(unaff_x27 + 0x260) = auVar45;
  lVar12 = unaff_x27 + 0x270;
  *(undefined1 *)(unaff_x27 + 0x254) = 0;
  _memcpy(lVar12,&stack0x00001020,0x4b8);
  *(undefined8 *)(unaff_x27 + 0x728) = unaff_x21;
  *(undefined1 *)(unaff_x27 + 0xcf8) = 0;
  lVar30 = unaff_x27 + 0x730;
  *(undefined8 *)(unaff_x27 + 0x748) = *(undefined8 *)(unaff_x27 + 0x6f8);
  *(undefined8 *)(unaff_x27 + 0x740) = *(undefined8 *)(unaff_x27 + 0x6f0);
  *(undefined8 *)(unaff_x27 + 0x758) = *(undefined8 *)(unaff_x27 + 0x708);
  *(undefined8 *)(unaff_x27 + 0x750) = *(undefined8 *)(unaff_x27 + 0x700);
  *(undefined8 *)(unaff_x27 + 0x768) = *(undefined8 *)(unaff_x27 + 0x718);
  *(undefined8 *)(unaff_x27 + 0x760) = *(undefined8 *)(unaff_x27 + 0x710);
  *(undefined8 *)(unaff_x27 + 0x770) = *(undefined8 *)(unaff_x27 + 0x720);
  *(undefined8 *)(unaff_x27 + 0x738) = *(undefined8 *)(unaff_x27 + 0x6e8);
  *(undefined8 *)(unaff_x27 + 0x730) = *(undefined8 *)(unaff_x27 + 0x6e0);
  plVar1 = (long *)(unaff_x27 + 0x778);
  _memcpy(plVar1,lVar12,0x470);
  *(long *)(unaff_x27 + 0xbe8) = lVar30;
  *(long **)(unaff_x27 + 0xbf0) = plVar1;
  *(undefined1 *)(unaff_x27 + 0xcf0) = 0;
  lVar19 = _calloc(0x2000,1);
  if (lVar19 == 0) {
    func_0x0001087c9084(1,0x2000);
  }
  else {
    lVar20 = _calloc(0x2000,1);
    if (lVar20 != 0) {
      *(long *)(unaff_x27 + 0xc78) = lVar30;
      *(long **)(unaff_x27 + 0xc80) = plVar1;
      *(long *)(unaff_x27 + 0xc88) = lVar19;
      *(undefined8 *)(unaff_x27 + 0xc90) = 0x2000;
      *(undefined8 *)(unaff_x27 + 0xc98) = 0;
      *(undefined8 *)(unaff_x27 + 0xca8) = 0;
      *(undefined8 *)(unaff_x27 + 0xca0) = 0;
      *(undefined2 *)(unaff_x27 + 0xcb0) = 0;
      *(long *)(unaff_x27 + 0xcb8) = lVar20;
      *(undefined8 *)(unaff_x27 + 0xcc0) = 0x2000;
      *(undefined8 *)(unaff_x27 + 0xcc8) = 0;
      *(undefined8 *)(unaff_x27 + 0xcd8) = 0;
      *(undefined8 *)(unaff_x27 + 0xcd0) = 0;
      *(undefined2 *)(unaff_x27 + 0xce0) = 0;
      *(undefined1 *)(unaff_x27 + 0xce8) = 0;
      plVar2 = (long *)(unaff_x27 + 0xc18);
      *(undefined8 *)(unaff_x27 + 0xc20) = *(undefined8 *)(unaff_x27 + 0xc90);
      *plVar2 = *(long *)(unaff_x27 + 0xc88);
      *(undefined8 *)(unaff_x27 + 0xc30) = *(undefined8 *)(unaff_x27 + 0xca0);
      *(undefined8 *)(unaff_x27 + 0xc28) = *(undefined8 *)(unaff_x27 + 0xc98);
      *(undefined8 *)(unaff_x27 + 0xc40) = *(undefined8 *)(unaff_x27 + 0xcb0);
      *(undefined8 *)(unaff_x27 + 0xc38) = *(undefined8 *)(unaff_x27 + 0xca8);
      *(undefined8 *)(unaff_x27 + 0xc50) = *(undefined8 *)(unaff_x27 + 0xcc0);
      *(undefined8 *)(unaff_x27 + 0xc48) = *(undefined8 *)(unaff_x27 + 0xcb8);
      *(undefined8 *)(unaff_x27 + 0xc60) = *(undefined8 *)(unaff_x27 + 0xcd0);
      *(undefined8 *)(unaff_x27 + 0xc58) = *(undefined8 *)(unaff_x27 + 0xcc8);
      *(undefined8 *)(unaff_x27 + 0xc70) = *(undefined8 *)(unaff_x27 + 0xce0);
      *(undefined8 *)(unaff_x27 + 0xc68) = *(undefined8 *)(unaff_x27 + 0xcd8);
      *(long **)(unaff_x27 + 0xbf8) = plVar2;
      *(long *)(unaff_x27 + 0xc00) = lVar30;
      *(long **)(unaff_x27 + 0xc08) = plVar1;
      *(undefined8 **)(unaff_x27 + 0xc10) = (undefined8 *)(unaff_x27 + 0xc48);
      uVar18 = (ulong)*(byte *)(unaff_x27 + 0xc41);
      plVar3 = (long *)(unaff_x27 + 0xb98);
      plVar43 = (long *)(unaff_x27 + 0x780);
      lVar19 = (*
               ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
               )();
      plVar35 = *(long **)(unaff_x27 + 0xc38);
      bVar37 = *(byte *)(unaff_x27 + 0xc40);
      puStack0000000000000010 = (ulong *)0x14;
      do {
        while( true ) {
          iVar16 = (int)in_stack_000006a0;
          lVar20 = uVar18 - 1;
          if ((uVar18 & 0xfe) == 0) {
            lVar20 = 0;
          }
          if (lVar20 != 0) break;
          if (*(char *)(lVar19 + 0x48) == '\x01') {
LAB_100afb52c:
            bVar36 = *(byte *)(lVar19 + 0x44);
            cVar15 = *(char *)(lVar19 + 0x45);
            cVar14 = cVar15;
            if (bVar36 == 1) {
              if (cVar15 == '\0') {
                FUN_10610bbb4(*(undefined8 *)*in_stack_000000a0,
                              ((undefined8 *)*in_stack_000000a0)[1]);
                plVar46 = (long *)((ulong)in_stack_000006a0 & 0xffffffffff000000);
                __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                          ((ulong)&stack0x000006a0 | 1);
                goto LAB_100afba10;
              }
              cVar14 = cVar15 + -1;
            }
            *(char *)(lVar19 + 0x45) = cVar14;
          }
          else {
            if (*(char *)(lVar19 + 0x48) != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar19,&DAT_100c35d48);
              *(undefined1 *)(lVar19 + 0x48) = 1;
              goto LAB_100afb52c;
            }
            bVar36 = 0;
            cVar15 = '\0';
          }
          in_stack_00001570 = CONCAT62((int6)(in_stack_00001570 >> 0x10),CONCAT11(cVar15,bVar36));
          plVar46 = (long *)*plVar2;
          puVar24 = *(ulong **)(unaff_x27 + 0xc20);
          puVar22 = *(ulong **)(unaff_x27 + 0xc28);
          puVar33 = *(ulong **)(unaff_x27 + 0xc30);
          bVar26 = bVar37;
          do {
            bVar27 = bVar26;
            if ((puVar33 < puVar24) && ((bVar26 & 1) == 0)) {
              auVar44 = __ZN85__LT_rama_http__io__upgrade__Upgraded_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17h9089c170e1e10652E
                                  (lVar30,in_stack_000000a0,&stack0x000006a0);
              unaff_x22 = auVar44._8_8_;
              if (((auVar44._0_8_ & 1) == 0) && (unaff_x22 == (ulong *)0x0)) {
                if (puVar24 < puVar33) {
LAB_100afd008:
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (0,puVar33,puVar24,&UNK_10b209248);
                  goto LAB_100afd244;
                }
                bVar37 = 1;
                *(undefined1 *)(unaff_x27 + 0xc40) = 1;
                *(ulong **)(unaff_x27 + 0xc30) = puVar33;
                bVar27 = 1;
              }
              else {
                if ((auVar44._0_8_ & 1) != 0) {
                  if (puVar22 != puVar33) {
                    in_stack_000006a0 = plVar46;
                    in_stack_000006a8 = puVar24;
                    in_stack_000006b0 = puVar33;
                    bVar27 = 0;
                    goto LAB_100afb62c;
                  }
                  in_stack_000006a0 = plVar46;
                  in_stack_000006a8 = puVar24;
                  in_stack_000006b0 = puVar33;
                  if ((uVar18 & 1) == 0) goto joined_r0x000100afb940;
                  if (*plVar1 != 2) goto LAB_100afce80;
                  goto LAB_100afce5c;
                }
                if (unaff_x22 != (ulong *)0x0) goto LAB_100afbdb0;
                bVar27 = 0;
              }
              bVar36 = 0;
              in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
              in_stack_000006a0 = plVar46;
              in_stack_000006a8 = puVar24;
              in_stack_000006b0 = puVar33;
            }
LAB_100afb62c:
            if (puVar22 < puVar33) {
              puVar41 = puVar22;
              if (puVar24 < puVar33) {
                puVar25 = &UNK_10b23a520;
LAB_100afcfe8:
                __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (puVar22,puVar33,puVar24,puVar25);
                goto LAB_100afd244;
              }
              do {
                puVar40 = (ulong *)((long)puVar33 - (long)puVar41);
                puVar4 = (undefined1 *)((long)plVar46 + (long)puVar41);
                if (*plVar1 == 2) {
                  if (*plVar43 < -0x7ffffffffffffffe) {
                    auVar44 = func_0x0001060f8f1c(unaff_x27 + 0x788,in_stack_000000a0,puVar4,puVar40
                                                 );
                  }
                  else {
                    auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x7a0) + 0x20))
                                        (*(undefined8 *)(unaff_x27 + 0x798),in_stack_000000a0,puVar4
                                         ,puVar40);
                  }
joined_r0x000100afb7f8:
                  if (auVar44._0_8_ == 2) {
                    unaff_x22 = auVar44._8_8_;
                    if ((bVar37 & 1) != 0 || puVar24 <= puVar33) goto joined_r0x000100afb940;
                    auVar44 = __ZN85__LT_rama_http__io__upgrade__Upgraded_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17h9089c170e1e10652E
                                        (lVar30,in_stack_000000a0,&stack0x000006a0);
                    puVar22 = auVar44._8_8_;
                    unaff_x22 = puVar22;
                    if (((auVar44._0_8_ & 1) == 0) && (puVar22 == (ulong *)0x0)) {
                      if (puVar24 < puVar33) goto LAB_100afd008;
                      *(undefined1 *)(unaff_x27 + 0xc40) = 1;
                      *(ulong **)(unaff_x27 + 0xc30) = puVar33;
                      in_stack_000006a0 = plVar46;
                      in_stack_000006a8 = puVar24;
                      in_stack_000006b0 = puVar33;
                    }
                    else {
                      in_stack_000006a0 = plVar46;
                      in_stack_000006a8 = puVar24;
                      in_stack_000006b0 = puVar33;
                      if ((auVar44._0_8_ & 1) == 0 && puVar22 != (ulong *)0x0) goto LAB_100afbd64;
                    }
                    goto joined_r0x000100afb940;
                  }
                }
                else {
                  puVar22 = (ulong *)0x0;
                  do {
                    in_stack_000006b0 = (ulong *)((long)puVar40 - (long)puVar22);
                    if (puVar40 < puVar22) {
                      puVar25 = &UNK_10b24ea80;
                      puVar24 = puVar40;
                      puVar33 = puVar40;
                      goto LAB_100afcfe8;
                    }
                    in_stack_000006a8 = (ulong *)(puVar4 + (long)puVar22);
                    lVar20 = __ZN6rustls12common_state11CommonState16buffer_plaintext17h2406345ecef1dad4E
                                       (plVar1,&stack0x000006a0,unaff_x27 + 0xb40);
                    cVar14 = *(char *)(unaff_x27 + 0xab7);
                    *(undefined1 *)(unaff_x27 + 0xab7) = 0;
                    if (cVar14 == '\x01') {
                      if (*(char *)(unaff_x27 + 0xaf8) == '\x16') {
                        (**(code **)(*(long *)(unaff_x27 + 0xb08) + 0x30))
                                  (&stack0x000006a0,*(undefined8 *)(unaff_x27 + 0xb00),plVar1);
                      }
                      else {
                        FUN_100f31090(&stack0x000006a0,unaff_x27 + 0xaf8);
                      }
                      FUN_100de0370(&stack0x000006a0);
                    }
                    puVar22 = (ulong *)(lVar20 + (long)puVar22);
                    in_stack_000006a0 = (long *)0x0;
LAB_100afb714:
                    if (*(long *)(unaff_x27 + 0x828) != 0) {
                      auVar44 = __ZN6rustls6vecbuf14ChunkVecBuffer8write_to17h57071789928213f2E
                                          (unaff_x27 + 0x800,&stack0x000006a0,&UNK_10b209628);
                      uVar18 = auVar44._8_8_;
                      in_stack_000006a0 = plVar3;
                      in_stack_000006a8 = in_stack_000000a0;
                      if ((auVar44._0_8_ & 1) == 0) goto code_r0x000100afb744;
                      cVar14 = FUN_100c355d4(uVar18);
                      if (cVar14 == '\r') {
                        if ((uVar18 & 3) == 1) {
                          uVar34 = *(undefined8 *)(uVar18 - 1);
                          puVar38 = *(undefined8 **)(uVar18 + 7);
                          pcVar31 = (code *)*puVar38;
                          if (pcVar31 != (code *)0x0) {
                            (*pcVar31)(uVar34);
                          }
                          if (puVar38[1] != 0) {
                            _free(uVar34);
                          }
                          _free((undefined8 *)(uVar18 - 1));
                        }
                        goto LAB_100afb7e4;
                      }
                      auVar44._8_8_ = uVar18;
                      auVar44._0_8_ = 1;
                      goto LAB_100afb814;
                    }
                  } while (puVar22 != puVar40);
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = puVar40;
                  auVar44 = auVar11 << 0x40;
                }
LAB_100afb814:
                puVar22 = auVar44._8_8_;
                if ((auVar44._0_8_ & 1) != 0) goto LAB_100afbd64;
                in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
                if (puVar22 == (ulong *)0x0) {
                  unaff_x22 = (ulong *)__ZN3std2io5error5Error3new17h949302c01fe11b24E
                                                 (0x17,&UNK_108cc994b,0x1b);
                  plVar46 = in_stack_000006a0;
                  puVar24 = in_stack_000006a8;
                  puVar33 = in_stack_000006b0;
                  goto LAB_100afbdb0;
                }
                bVar36 = 0;
                puVar41 = (ulong *)((long)puVar41 + (long)puVar22);
                *(ulong **)(unaff_x27 + 0xc28) = puVar41;
                plVar35 = (long *)((long)plVar35 + (long)puVar22);
                *(long **)(unaff_x27 + 0xc38) = plVar35;
                uVar18 = 1;
                *(undefined1 *)(unaff_x27 + 0xc41) = 1;
                unaff_x22 = puVar22;
              } while (puVar41 < puVar33);
            }
            puVar22 = (ulong *)0x0;
            bVar26 = 0;
            puVar33 = (ulong *)0x0;
            *(undefined8 *)(unaff_x27 + 0xc28) = 0;
            *(undefined8 *)(unaff_x27 + 0xc30) = 0;
          } while ((bVar27 & 1) == 0);
          if (*plVar1 == 2) {
            lVar20 = *plVar43;
            plVar29 = plVar43;
          }
          else {
            while (*(long *)(unaff_x27 + 0x828) != 0) {
              auVar44 = FUN_1007523f4(plVar3,plVar1,in_stack_000000a0);
              puVar22 = auVar44._8_8_;
              if (auVar44._0_8_ == 2) {
                __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                          (unaff_x29 + -0xd0);
                plVar46 = in_stack_000006a0;
                goto LAB_100afba10;
              }
              if ((auVar44._0_8_ & 1) != 0) goto LAB_100afbd64;
              unaff_x22 = puVar22;
              if (puVar22 == (ulong *)0x0) goto LAB_100afceac;
            }
            lVar20 = *plVar3;
            plVar29 = plVar3;
          }
          puVar22 = unaff_x22;
          if (-0x7fffffffffffffff < lVar20) {
            auVar44 = (**(code **)(plVar29[4] + 0x28))(plVar29[3],in_stack_000000a0);
            puVar22 = auVar44._8_8_;
            if ((auVar44._0_8_ & 1) != 0) goto joined_r0x000100afb940;
            if (puVar22 != (ulong *)0x0) goto LAB_100afbd64;
          }
          in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
          __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                    (unaff_x29 + -0xd0);
          if ((puVar24 != (ulong *)0x0) && ((uint)uVar18 < 2)) {
            _free(plVar46);
          }
          *plVar2 = (long)plVar35;
          uVar18 = 2;
          *(undefined1 *)(unaff_x27 + 0xc41) = 2;
          unaff_x22 = puVar22;
        }
        if (lVar20 != 1) {
          bVar13 = false;
          unaff_x22 = (ulong *)*plVar2;
          goto LAB_100afba1c;
        }
        if (*plVar1 == 2) {
          if (*plVar43 < -0x7ffffffffffffffe) {
            if (*(int *)(unaff_x27 + 0x7a0) == -1) {
LAB_100afd0a4:
              func_0x000108a07a20(&UNK_10b4cd2b8);
              goto LAB_100afd244;
            }
            iVar16 = _shutdown(*(int *)(unaff_x27 + 0x7a0),1);
            if (iVar16 == -1) {
              puVar21 = (uint *)___error();
              puVar24 = (ulong *)((ulong)*puVar21 << 0x20 | 2);
              cVar15 = FUN_1060eda1c(puVar24);
              unaff_x22 = (ulong *)0x0;
              if (cVar15 != '\a') {
                unaff_x22 = puVar24;
              }
            }
            else {
LAB_100afb204:
              unaff_x22 = (ulong *)0x0;
            }
          }
          else {
            auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x7a0) + 0x30))
                                (*(undefined8 *)(unaff_x27 + 0x798),in_stack_000000a0);
            unaff_x22 = auVar44._8_8_;
            if ((auVar44._0_8_ & 1) != 0) goto LAB_100afc920;
          }
        }
        else {
          bVar36 = *(byte *)(unaff_x27 + 0xbe1);
          if (bVar36 < 2) {
            if ((*(byte *)(unaff_x27 + 0xab1) & 1) == 0) {
              if (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
                *(undefined **)(unaff_x29 + -0xd0) = &UNK_109b94303;
                *(undefined1 **)(unaff_x29 + -200) =
                     &
                     __ZN68__LT_rustls__enums__AlertDescription_u20_as_u20_core__fmt__Debug_GT_3fmt17h49cd08749eb8f22aE
                ;
                in_stack_000006a8 = (ulong *)&UNK_109b96a39;
                puVar25 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar25 = &UNK_10b3c24c8;
                }
                puVar24 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar24 = (ulong *)&UNK_109adfc03;
                }
                (**(code **)(puVar25 + 0x20))(puVar24,&stack0x000006a0);
                in_stack_000006b0 = puStack0000000000000010;
              }
              *(undefined2 *)(unaff_x27 + 0xab1) = 0x101;
              in_stack_000006a0 = (long *)0x8000000000000001;
              in_stack_000006a8 = (ulong *)((ulong)in_stack_000006a8 & 0xffffffff00000000);
              __ZN6rustls12common_state11CommonState8send_msg17he7b5eb2b43baa157E
                        (plVar1,&stack0x000006a0,*(char *)(unaff_x27 + 0x7c1) == '\x02');
              bVar36 = *(byte *)(unaff_x27 + 0xbe1);
            }
            *(byte *)(unaff_x27 + 0xbe1) = bVar36 | 2;
          }
          do {
            iVar16 = (int)in_stack_000006a0;
            if (*(long *)(unaff_x27 + 0x828) == 0) {
              if (*plVar3 < -0x7ffffffffffffffe) {
                if (*(int *)(unaff_x27 + 3000) == -1) goto LAB_100afd0a4;
                iVar16 = _shutdown(*(int *)(unaff_x27 + 3000),1);
                if (iVar16 == -1) {
                  puVar21 = (uint *)___error();
                  puVar24 = (ulong *)((ulong)*puVar21 << 0x20 | 2);
                  cVar15 = FUN_1060eda1c(puVar24);
                  unaff_x22 = (ulong *)0x0;
                  if (cVar15 != '\a') {
                    unaff_x22 = puVar24;
                  }
                }
                else {
                  unaff_x22 = (ulong *)0x0;
                }
              }
              else {
                auVar44 = (**(code **)(*(long *)(unaff_x27 + 3000) + 0x30))
                                    (*(undefined8 *)(unaff_x27 + 0xbb0),in_stack_000000a0);
                unaff_x22 = auVar44._8_8_;
                if ((auVar44._0_8_ & 1) != 0) goto LAB_100afc920;
              }
              if ((unaff_x22 == (ulong *)0x0) || (cVar15 = FUN_100c355d4(unaff_x22), cVar15 != '\a')
                 ) goto LAB_100afb4e8;
              if (((ulong)unaff_x22 & 3) != 1) goto LAB_100afb204;
              uVar34 = *(undefined8 *)((long)unaff_x22 + -1);
              puVar38 = *(undefined8 **)((long)unaff_x22 + 7);
              pcVar31 = (code *)*puVar38;
              if (pcVar31 != (code *)0x0) {
                (*pcVar31)(uVar34);
              }
              if (puVar38[1] != 0) {
                _free(uVar34);
              }
              _free((undefined8 *)((long)unaff_x22 + -1));
              unaff_x22 = (ulong *)0x0;
              goto LAB_100afb4e8;
            }
            auVar44 = FUN_1007523f4(plVar3,plVar1,in_stack_000000a0);
            if (auVar44._0_8_ == 2) {
              bVar13 = true;
              goto LAB_100afb3dc;
            }
            unaff_x22 = auVar44._8_8_;
            if ((auVar44._0_8_ & 1) != 0) goto LAB_100afb4e8;
          } while (auVar44._8_8_ != (ulong *)0x0);
          bVar13 = false;
LAB_100afb3dc:
          unaff_x22 = (ulong *)0x1700000003;
          if (bVar13) {
LAB_100afc920:
            bVar13 = true;
            goto LAB_100afba1c;
          }
        }
LAB_100afb4e8:
        plVar46 = in_stack_000006a0;
        puVar24 = in_stack_000006a8;
        puVar33 = in_stack_000006b0;
        if (unaff_x22 != (ulong *)0x0) goto LAB_100afbdb0;
        if (((uint)uVar18 < 2) && (*(long *)(unaff_x27 + 0xc20) != 0)) {
          _free(*plVar2);
        }
        uVar18 = 3;
        *(undefined1 *)(unaff_x27 + 0xc41) = 3;
      } while( true );
    }
    func_0x0001087c9084(1,0x2000);
  }
  goto LAB_100afd244;
LAB_100afce5c:
  puVar22 = unaff_x22;
  if (-0x7fffffffffffffff < *plVar43) {
    auVar44 = (**(code **)(plVar43[4] + 0x28))(plVar43[3],in_stack_000000a0);
    puVar22 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
joined_r0x000100afb940:
      plVar46 = in_stack_000006a0;
      if ((bVar36 & 1) != 0) {
        if (*(char *)(lVar19 + 0x48) != '\x01') {
          if (*(char *)(lVar19 + 0x48) == '\x02') goto LAB_100afba10;
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar19,&DAT_1060edbcc);
          *(undefined1 *)(lVar19 + 0x48) = 1;
        }
        *(undefined1 *)(lVar19 + 0x44) = 1;
        *(char *)(lVar19 + 0x45) = cVar15;
      }
      goto LAB_100afba10;
    }
    if (puVar22 != (ulong *)0x0) goto LAB_100afbd64;
  }
  *(undefined1 *)(unaff_x27 + 0xc41) = 0;
  unaff_x22 = puVar22;
LAB_100afba10:
  iVar16 = (int)plVar46;
  bVar13 = true;
LAB_100afba1c:
  plVar35 = *(long **)(unaff_x27 + 0xc10);
  uVar18 = (ulong)*(byte *)((long)plVar35 + 0x29);
LAB_100afba24:
  while( true ) {
    lVar30 = uVar18 - 1;
    if ((uint)uVar18 < 2) {
      lVar30 = 0;
    }
    puVar24 = in_stack_000006a8;
    puVar33 = in_stack_000006b0;
    if (lVar30 != 0) break;
    if (*(char *)(lVar19 + 0x48) == '\x01') {
LAB_100afbadc:
      bVar37 = *(byte *)(lVar19 + 0x44);
      cVar15 = *(char *)(lVar19 + 0x45);
      cVar14 = cVar15;
      if (bVar37 == 1) {
        if (cVar15 == '\0') {
          FUN_10610bbb4(*(undefined8 *)*in_stack_000000a0,((undefined8 *)*in_stack_000000a0)[1]);
          __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                    ((ulong)&stack0x000006a0 | 1);
          goto LAB_100afcf4c;
        }
        cVar14 = cVar15 + -1;
      }
      *(char *)(lVar19 + 0x45) = cVar14;
    }
    else {
      if (*(char *)(lVar19 + 0x48) != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar19,&DAT_100c35d48);
        *(undefined1 *)(lVar19 + 0x48) = 1;
        goto LAB_100afbadc;
      }
      bVar37 = 0;
      cVar15 = '\0';
    }
    in_stack_00001570 = CONCAT62((int6)(in_stack_00001570 >> 0x10),CONCAT11(cVar15,bVar37));
    uVar18 = plVar35[3];
    bVar36 = *(byte *)(plVar35 + 5);
    bVar26 = bVar37;
    do {
      if ((uVar18 < (ulong)plVar35[1]) && ((bVar36 & 1) == 0)) {
        auVar44 = FUN_100fc3398(plVar35,in_stack_000000a0,plVar1);
        puVar22 = auVar44._8_8_;
        if ((auVar44._0_8_ & 1) != 0) {
          uVar18 = plVar35[3];
          if (plVar35[2] != uVar18) goto LAB_100afbb80;
          if (*(char *)((long)plVar35 + 0x29) != '\x01') goto LAB_100afcf04;
          auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x750) + 0x28))
                              (*(undefined8 *)(unaff_x27 + 0x748),in_stack_000000a0);
          puVar22 = auVar44._8_8_;
          if ((auVar44._0_8_ & 1) != 0) goto LAB_100afcf04;
          if (puVar22 != (ulong *)0x0) goto joined_r0x000100afcc38;
          *(undefined1 *)((long)plVar35 + 0x29) = 0;
          goto LAB_100afcf4c;
        }
        if (puVar22 != (ulong *)0x0) goto LAB_100afbd3c;
        bVar37 = 0;
        bVar26 = 0;
        in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
        uVar32 = plVar35[2];
        uVar18 = plVar35[3];
        lVar30 = uVar18 - uVar32;
        bVar36 = 0;
        if (uVar32 <= uVar18 && lVar30 != 0) goto LAB_100afbb8c;
      }
      else {
LAB_100afbb80:
        uVar32 = plVar35[2];
        lVar30 = uVar18 - uVar32;
        bVar36 = bVar37;
        if (uVar32 <= uVar18 && lVar30 != 0) {
LAB_100afbb8c:
          uVar39 = plVar35[1];
          if (uVar39 < uVar18) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (uVar32,uVar18,uVar39,&UNK_10b23a520);
            goto LAB_100afd244;
          }
          lVar20 = *plVar35;
          lVar42 = plVar35[4];
          auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x750) + 0x20))
                              (*(undefined8 *)(unaff_x27 + 0x748),in_stack_000000a0,uVar32 + lVar20,
                               lVar30);
          puVar22 = auVar44._8_8_;
          uVar47 = (uint7)(in_stack_00001570 >> 8);
          if (auVar44._0_8_ == 2) {
            in_stack_00001570 = CONCAT71(uVar47,bVar37);
joined_r0x000100afcc10:
            if ((uVar39 <= uVar18) || ((*(byte *)(plVar35 + 5) & 1) != 0)) goto LAB_100afcf04;
            auVar44 = FUN_100fc3398(plVar35,in_stack_000000a0,plVar1);
            puVar22 = auVar44._8_8_;
            if (((auVar44._0_8_ & 1) != 0) || (puVar22 == (ulong *)0x0)) goto LAB_100afcf04;
            goto joined_r0x000100afcc38;
          }
          if ((auVar44._0_8_ & 1) != 0) {
            in_stack_00001570 = CONCAT71(uVar47,bVar37);
            goto joined_r0x000100afcc38;
          }
          if (puVar22 == (ulong *)0x0) {
LAB_100afbcb8:
            in_stack_00001570 = (ulong)uVar47 << 8;
            puVar22 = (ulong *)__ZN3std2io5error5Error3new17h949302c01fe11b24E
                                         (0x17,&UNK_108cc994b,0x1b);
            goto LAB_100afbd3c;
          }
          uVar32 = uVar32 + (long)puVar22;
          plVar35[2] = uVar32;
          puVar4 = (undefined1 *)(lVar42 + (long)puVar22);
          plVar35[4] = (long)puVar4;
          *(undefined1 *)((long)plVar35 + 0x29) = 1;
          while (uVar32 < uVar18) {
            auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x750) + 0x20))
                                (*(undefined8 *)(unaff_x27 + 0x748),in_stack_000000a0,
                                 uVar32 + lVar20,uVar18 - uVar32);
            puVar22 = auVar44._8_8_;
            if (auVar44._0_8_ == 2) {
              bVar26 = 0;
              in_stack_00001570 = (ulong)uVar47 << 8;
              goto joined_r0x000100afcc10;
            }
            if ((auVar44._0_8_ & 1) != 0) goto LAB_100afbd3c;
            if (puVar22 == (ulong *)0x0) goto LAB_100afbcb8;
            uVar32 = uVar32 + (long)puVar22;
            plVar35[2] = uVar32;
            puVar4 = puVar4 + (long)puVar22;
            plVar35[4] = (long)puVar4;
            *(undefined1 *)((long)plVar35 + 0x29) = 1;
          }
          bVar26 = 0;
          in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
          bVar36 = 0;
        }
      }
      bVar37 = bVar36;
      bVar36 = 0;
      uVar18 = 0;
      plVar35[2] = 0;
      plVar35[3] = 0;
    } while ((*(byte *)(plVar35 + 5) & 1) == 0);
    auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x750) + 0x28))
                        (*(undefined8 *)(unaff_x27 + 0x748),in_stack_000000a0);
    puVar22 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
LAB_100afcf04:
      if ((bVar26 & 1) != 0) {
        if (*(char *)(lVar19 + 0x48) != '\x01') {
          if (*(char *)(lVar19 + 0x48) == '\x02') goto LAB_100afcf4c;
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar19,&DAT_1060edbcc);
          *(undefined1 *)(lVar19 + 0x48) = 1;
        }
        *(undefined1 *)(lVar19 + 0x44) = 1;
        *(char *)(lVar19 + 0x45) = cVar15;
      }
      goto LAB_100afcf4c;
    }
    if (puVar22 != (ulong *)0x0) goto joined_r0x000100afcc38;
    in_stack_00001570 = in_stack_00001570 & 0xffffffffffffff00;
    lVar30 = plVar35[4];
    __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
              (unaff_x29 + -0xd0);
    if ((*(byte *)((long)plVar35 + 0x29) < 2) && (plVar35[1] != 0)) {
      _free(*plVar35);
    }
    *plVar35 = lVar30;
    uVar18 = 2;
    *(undefined1 *)((long)plVar35 + 0x29) = 2;
  }
  if (lVar30 == 1) {
    auVar44 = (**(code **)(*(long *)(unaff_x27 + 0x750) + 0x30))
                        (*(undefined8 *)(unaff_x27 + 0x748),in_stack_000000a0);
    puVar22 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) == 0) {
      if (puVar22 != (ulong *)0x0) goto LAB_100afbd3c;
      if ((uint)uVar18 < 2) {
        if (plVar35[1] == 0) {
          uVar18 = 3;
          *(undefined1 *)((long)plVar35 + 0x29) = 3;
        }
        else {
          _free(*plVar35);
          uVar18 = 3;
          *(undefined1 *)((long)plVar35 + 0x29) = 3;
        }
      }
      else {
        uVar18 = 3;
        *(undefined1 *)((long)plVar35 + 0x29) = 3;
      }
      goto LAB_100afba24;
    }
  }
  else if (!bVar13) {
    bVar13 = false;
    plVar35 = (long *)*plVar35;
    bVar37 = *(byte *)(unaff_x27 + 0xc71);
    goto joined_r0x000100afcca4;
  }
LAB_100afcf4c:
  *(undefined1 *)(unaff_x27 + 0xce8) = 3;
  *(undefined1 *)(unaff_x27 + 0xcf0) = 3;
  *(undefined1 *)(unaff_x27 + 0xcf8) = 3;
  *unaff_x28 = 1;
  uVar28 = 4;
  goto LAB_100afc8e8;
code_r0x000100afb744:
  if (uVar18 == 0) {
LAB_100afb7e4:
    uVar34 = 2;
    if (puVar22 != (ulong *)0x0) {
      uVar34 = 0;
    }
    auVar44._8_8_ = puVar22;
    auVar44._0_8_ = uVar34;
    goto joined_r0x000100afb7f8;
  }
  goto LAB_100afb714;
joined_r0x000100afcc38:
  if ((bVar26 & 1) != 0) {
    if (*(char *)(lVar19 + 0x48) != '\x01') {
      if (*(char *)(lVar19 + 0x48) == '\x02') goto LAB_100afbd3c;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar19,&DAT_1060edbcc);
      *(undefined1 *)(lVar19 + 0x48) = 1;
    }
    *(undefined1 *)(lVar19 + 0x44) = 1;
    *(char *)(lVar19 + 0x45) = cVar15;
  }
LAB_100afbd3c:
  bVar37 = *(byte *)(unaff_x27 + 0xc71);
  unaff_x22 = puVar22;
  goto joined_r0x000100afbd4c;
  while( true ) {
    auVar44 = FUN_1007523f4(plVar3,plVar1,in_stack_000000a0);
    puVar22 = auVar44._8_8_;
    if (auVar44._0_8_ == 2) {
      __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                (unaff_x29 + -0xd0);
      goto LAB_100afba10;
    }
    if ((auVar44._0_8_ & 1) != 0) goto LAB_100afbd64;
    unaff_x22 = puVar22;
    if (puVar22 == (ulong *)0x0) break;
LAB_100afce80:
    plVar43 = plVar3;
    if (*(long *)(unaff_x27 + 0x828) == 0) goto LAB_100afce5c;
  }
LAB_100afceac:
  puVar22 = (ulong *)0x1700000003;
LAB_100afbd64:
  unaff_x22 = puVar22;
  plVar46 = in_stack_000006a0;
  puVar24 = in_stack_000006a8;
  puVar33 = in_stack_000006b0;
  if ((bVar36 & 1) != 0) {
    if (*(char *)(lVar19 + 0x48) != '\x01') {
      if (*(char *)(lVar19 + 0x48) == '\x02') goto LAB_100afbdb0;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar19,&DAT_1060edbcc);
      *(undefined1 *)(lVar19 + 0x48) = 1;
    }
    *(undefined1 *)(lVar19 + 0x44) = 1;
    *(char *)(lVar19 + 0x45) = cVar15;
  }
LAB_100afbdb0:
  iVar16 = (int)plVar46;
  bVar37 = *(byte *)(unaff_x27 + 0xc71);
joined_r0x000100afbd4c:
  bVar13 = true;
joined_r0x000100afcca4:
  if ((bVar37 < 2) && (*(long *)(unaff_x27 + 0xc50) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xc48));
  }
  if ((*(byte *)(unaff_x27 + 0xc41) < 2) && (*(long *)(unaff_x27 + 0xc20) != 0)) {
    _free(*(undefined8 *)(unaff_x27 + 0xc18));
  }
  *(undefined1 *)(unaff_x27 + 0xce8) = 1;
  if (*(char *)(unaff_x27 + 0xce8) == '\0') {
    if (*(long *)(unaff_x27 + 0xc90) != 0) {
      _free(*(undefined8 *)(unaff_x27 + 0xc88));
    }
    if (*(long *)(unaff_x27 + 0xcc0) != 0) {
      puVar38 = (undefined8 *)(unaff_x27 + 0xcb8);
LAB_100afbe70:
      _free(*puVar38);
    }
  }
  else if (*(char *)(unaff_x27 + 0xce8) == '\x03') {
    if ((*(byte *)(unaff_x27 + 0xc71) < 2) && (*(long *)(unaff_x27 + 0xc50) != 0)) {
      _free(*(undefined8 *)(unaff_x27 + 0xc48));
    }
    if ((*(byte *)(unaff_x27 + 0xc41) < 2) && (*(long *)(unaff_x27 + 0xc20) != 0)) {
      puVar38 = (undefined8 *)(unaff_x27 + 0xc18);
      goto LAB_100afbe70;
    }
  }
  *(undefined1 *)(unaff_x27 + 0xcf0) = 1;
  if (bVar13) {
    uVar18 = (ulong)unaff_x22 & 3;
    if (uVar18 < 2) {
      lVar30 = 0x10;
      if (uVar18 != 0) {
        lVar30 = 0xf;
      }
      if ((*(byte *)((long)unaff_x22 + lVar30) < 0x26) &&
         ((1L << ((ulong)*(byte *)((long)unaff_x22 + lVar30) & 0x3f) & 0x28000008ccU) != 0)) {
        if (uVar18 == 1) {
          uVar34 = *(undefined8 *)((long)unaff_x22 + -1);
          puVar38 = *(undefined8 **)((long)unaff_x22 + 7);
          pcVar31 = (code *)*puVar38;
          if (pcVar31 != (code *)0x0) {
            (*pcVar31)(uVar34);
          }
          if (puVar38[1] != 0) {
            _free(uVar34);
          }
          _free((undefined8 *)((long)unaff_x22 + -1));
        }
        goto LAB_100afc178;
      }
    }
    else if (uVar18 == 2) {
      if (((uint)((ulong)unaff_x22 >> 0x20) < 0x3e) &&
         ((1L << ((ulong)unaff_x22 >> 0x20 & 0x3f) & 0x2260000100000010U) != 0)) goto LAB_100afc178;
    }
    else {
      puVar38 = (undefined8 *)0x0;
      if ((1L << ((ulong)unaff_x22 >> 0x20 & 0x3f) & 0x3d7fffff733U) == 0) goto LAB_100afc17c;
    }
    iVar16 = 0x8cb16a7;
    puVar24 = (ulong *)0x1c;
    puVar38 = (undefined8 *)_malloc(0x18);
    if (puVar38 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_100afd244;
    }
    puVar38[1] = 0x1c;
    *puVar38 = &UNK_108cb16a7;
    puVar38[2] = unaff_x22;
    puVar33 = unaff_x22;
  }
  else {
    *(long **)(unaff_x29 + -0xe0) = plVar35;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6392c0 - 1 < 2 ||
         ((bRam000000010b6392c0 != 0 &&
          (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                              ), cVar15 != '\0')))) &&
        (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                            ),
        lVar30 = 
        ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
        , (uVar18 & 1) != 0)))) {
      lVar19 = ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
               + 0x30;
      iVar16 = (int)&stack0x00001538;
      puVar24 = (ulong *)&
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      puVar33 = (ulong *)(unaff_x29 + -0xe0);
      *(char **)(unaff_x29 + -0xa0) = s_4_proxy__I_O_stream_forwarder_fi_108ac92d8;
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006a0;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = lVar19;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar30,unaff_x29 + -0xd0);
      lVar30 = 
      ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar34 = *(undefined8 *)
                  (
                  ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                  + 0x20);
        uVar5 = *(undefined8 *)
                 (
                 ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x90) = 5;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar34;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
        puVar25 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_10b3c24c8;
        }
        puVar22 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = (ulong *)&UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar25 + 0x18))(puVar22,unaff_x29 + -0x90);
        if (iVar17 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar30,puVar22,puVar25,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    else {
      lVar30 = 
      ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar34 = *(undefined8 *)
                  (
                  ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                  + 0x20);
        uVar5 = *(undefined8 *)
                 (
                 ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x100) = 5;
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar34;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar5;
        puVar25 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_10b3c24c8;
        }
        puVar22 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = (ulong *)&UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar25 + 0x18))(puVar22,unaff_x29 + -0x100);
        if (iVar17 != 0) {
          lVar19 = ___ZN158__LT_rama_net__proxy__forward__StreamForwardService_u20_as_u20_rama_core__service__svc__Service_LT_rama_net__proxy__request__ProxyRequest_LT_S_C_T_GT__GT__GT_5serve28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h932e24b462dec095E
                   + 0x30;
          iVar16 = (int)&stack0x00001538;
          puVar24 = (ulong *)&
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          puVar33 = (ulong *)(unaff_x29 + -0xe0);
          *(char **)(unaff_x29 + -0x90) = s_4_proxy__I_O_stream_forwarder_fi_108ac92d8;
          *(undefined1 **)(unaff_x29 + -0x88) = &stack0x000006a0;
          *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = lVar19;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar30,puVar22,puVar25,unaff_x29 + -0x100,unaff_x29 + -0xd0);
        }
      }
    }
LAB_100afc178:
    puVar38 = (undefined8 *)0x0;
  }
LAB_100afc17c:
  if (*(long *)(unaff_x27 + 0x778) == 2) {
    FUN_100d48140(unaff_x27 + 0x780);
  }
  else {
    FUN_100d48140(unaff_x27 + 0xb98);
    func_0x000100cbe9f8(unaff_x27 + 0x778);
  }
  FUN_100df8150(unaff_x27 + 0x730);
  *(undefined1 *)(unaff_x27 + 0xcf8) = 1;
  FUN_100de2ff8(lVar12);
  if (puVar38 == (undefined8 *)0x0) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
        ((bRam000000010b62e9d8 - 1 < 2 ||
         ((bRam000000010b62e9d8 != 0 &&
          (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                              ), cVar15 != '\0')))))) &&
       (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                           ),
       lVar12 = 
       ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
       , iVar17 != 0)) {
      auVar45 = func_0x000106032954(8);
      uVar34 = *(undefined8 *)(unaff_x27 + 0x260);
      uVar6 = *(undefined4 *)(unaff_x27 + 0x268);
      *(undefined1 (*) [12])(unaff_x29 + -0x90) = auVar45;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar34;
      *(undefined4 *)(unaff_x29 + -200) = uVar6;
      func_0x000106032878(&stack0x000006a0,unaff_x29 + -0x90,unaff_x29 + -0xd0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = puVar24;
      lVar30 = SUB168(auVar8 * ZEXT816(1000),8);
      uVar18 = ((ulong)puVar33 & 0xffffffff) / 1000000;
      if (CARRY8((long)puVar24 * 1000,uVar18)) {
        lVar30 = lVar30 + 1;
      }
      lVar19 = 0;
      if (iVar16 == 0) {
        lVar19 = lVar30;
      }
      lVar30 = 0;
      if (iVar16 == 0) {
        lVar30 = (long)puVar24 * 1000 + uVar18;
      }
      *(long *)(unaff_x29 + -0x100) = lVar30;
      *(long *)(unaff_x29 + -0xf8) = lVar19;
      *(char **)(unaff_x29 + -0xa0) = s__CONNECT_tunnel_forwarding_compl_108ad034d;
      *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006a0;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
      *(undefined8 *)(unaff_x29 + -0xd0) = 1;
      *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = lVar12 + 0x30;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                 ,unaff_x29 + -0xd0);
      lVar12 = 
      ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar34 = *(undefined8 *)
                  (
                  ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                  + 0x20);
        uVar5 = *(undefined8 *)
                 (
                 ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x90) = 3;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar34;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
        puVar25 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_10b3c24c8;
        }
        puVar24 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar24 = (ulong *)&UNK_109adfc03;
        }
        iVar16 = (**(code **)(puVar25 + 0x18))(puVar24,unaff_x29 + -0x90);
        if (iVar16 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar24,puVar25,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    else {
      lVar12 = 
      ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar34 = *(undefined8 *)
                  (
                  ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                  + 0x20);
        uVar5 = *(undefined8 *)
                 (
                 ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
                 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x90) = 3;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar34;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
        puVar25 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_10b3c24c8;
        }
        puVar24 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar24 = (ulong *)&UNK_109adfc03;
        }
        iVar16 = (**(code **)(puVar25 + 0x18))(puVar24,unaff_x29 + -0x90);
        lVar30 = 
        ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h313547605f157301E
        ;
        if (iVar16 != 0) {
          auVar44 = __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x27 + 0x260);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar44._0_8_;
          lVar19 = SUB168(auVar10 * ZEXT816(1000),8);
          uVar32 = auVar44._0_8_ * 1000;
          uVar18 = (auVar44._8_8_ & 0xffffffff) / 1000000;
          if (CARRY8(uVar32,uVar18)) {
            lVar19 = lVar19 + 1;
          }
          *(ulong *)(unaff_x29 + -0x100) = uVar32 + uVar18;
          *(long *)(unaff_x29 + -0xf8) = lVar19;
          *(char **)(unaff_x29 + -0xa0) = s__CONNECT_tunnel_forwarding_compl_108ad034d;
          *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006a0;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0xd0) = 1;
          *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = lVar30 + 0x30;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar24,puVar25,unaff_x29 + -0x90,unaff_x29 + -0xd0);
        }
      }
    }
    puVar24 = (ulong *)0x0;
LAB_100afc880:
    *(undefined2 *)(unaff_x27 + 0x254) = 0;
    FUN_100dbf624(unaff_x27 + 0x170);
    *(undefined4 *)(unaff_x27 + 0x256) = 0;
    if ((*(byte *)(unaff_x27 + 0x138) != 0x1a) && (0x18 < *(byte *)(unaff_x27 + 0x138))) {
      lVar12 = **(long **)(unaff_x27 + 0x140);
      **(long **)(unaff_x27 + 0x140) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x27 + 0x140);
      }
    }
    *(undefined1 *)(unaff_x27 + 0x251) = 0;
    *(undefined1 *)(unaff_x27 + 0x252) = 0;
    *(undefined1 *)(unaff_x27 + 0x253) = 0;
    unaff_x28[1] = puVar24;
    unaff_x28[2] = &UNK_10b2240d0;
    uVar28 = 1;
    *unaff_x28 = 0;
LAB_100afc8e8:
    *(undefined1 *)(unaff_x27 + 0x250) = uVar28;
    return;
  }
  *(undefined8 **)(unaff_x29 + -0xe0) = puVar38;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b2372e8;
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
      ((bRam000000010b62e9f0 - 1 < 2 ||
       ((bRam000000010b62e9f0 != 0 &&
        (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
                            ), cVar15 != '\0')))))) &&
     (iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
                         ),
     lVar12 = 
     ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
     , iVar17 != 0)) {
    auVar45 = func_0x000106032954(8);
    uVar34 = *(undefined8 *)(unaff_x27 + 0x260);
    uVar6 = *(undefined4 *)(unaff_x27 + 0x268);
    *(undefined1 (*) [12])(unaff_x29 + -0x90) = auVar45;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar34;
    *(undefined4 *)(unaff_x29 + -200) = uVar6;
    func_0x000106032878(&stack0x000006a0,unaff_x29 + -0x90,unaff_x29 + -0xd0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = puVar24;
    lVar30 = SUB168(auVar7 * ZEXT816(1000),8);
    uVar18 = ((ulong)puVar33 & 0xffffffff) / 1000000;
    if (CARRY8((long)puVar24 * 1000,uVar18)) {
      lVar30 = lVar30 + 1;
    }
    lVar19 = 0;
    if (iVar16 == 0) {
      lVar19 = lVar30;
    }
    lVar30 = 0;
    if (iVar16 == 0) {
      lVar30 = (long)puVar24 * 1000 + uVar18;
    }
    *(long *)(unaff_x29 + -0x100) = lVar30;
    *(long *)(unaff_x29 + -0xf8) = lVar19;
    *(char **)(unaff_x29 + -0xa0) = s__CONNECT_tunnel_forwarding_faile_108ad038d;
    *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006a0;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
    *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
    *(undefined8 *)(unaff_x29 + -0xd0) = 1;
    *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(long *)(unaff_x29 + -0xb8) = lVar12 + 0x30;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
               ,unaff_x29 + -0xd0);
    lVar12 = 
    ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar34 = *(undefined8 *)
                (
                ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
                + 0x20);
      uVar5 = *(undefined8 *)
               (
               ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0x90) = 2;
      *(undefined8 *)(unaff_x29 + -0x88) = uVar34;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
      puVar25 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar25 = &UNK_10b3c24c8;
      }
      puVar24 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar24 = (ulong *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(puVar25 + 0x18))(puVar24,unaff_x29 + -0x90);
      if (iVar16 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar24,puVar25,unaff_x29 + -0x90,unaff_x29 + -0xd0);
      }
    }
  }
  else {
    lVar12 = 
    ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uVar34 = *(undefined8 *)
                (
                ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
                + 0x20);
      uVar5 = *(undefined8 *)
               (
               ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
               + 0x28);
      *(undefined8 *)(unaff_x29 + -0x90) = 2;
      *(undefined8 *)(unaff_x29 + -0x88) = uVar34;
      *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
      puVar25 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar25 = &UNK_10b3c24c8;
      }
      puVar24 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar24 = (ulong *)&UNK_109adfc03;
      }
      iVar16 = (**(code **)(puVar25 + 0x18))(puVar24,unaff_x29 + -0x90);
      lVar30 = 
      ___ZN19codex_network_proxy10http_proxy22forward_connect_tunnel28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h432fd4a9fad83b6bE
      ;
      if (iVar16 != 0) {
        auVar44 = __ZN3std4time7Instant7elapsed17hd8a84ef162118389E(unaff_x27 + 0x260);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = auVar44._0_8_;
        lVar19 = SUB168(auVar9 * ZEXT816(1000),8);
        uVar32 = auVar44._0_8_ * 1000;
        uVar18 = (auVar44._8_8_ & 0xffffffff) / 1000000;
        if (CARRY8(uVar32,uVar18)) {
          lVar19 = lVar19 + 1;
        }
        *(ulong *)(unaff_x29 + -0x100) = uVar32 + uVar18;
        *(long *)(unaff_x29 + -0xf8) = lVar19;
        *(char **)(unaff_x29 + -0xa0) = s__CONNECT_tunnel_forwarding_faile_108ad038d;
        *(undefined1 **)(unaff_x29 + -0x98) = &stack0x000006a0;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
        *(undefined8 *)(unaff_x29 + -0xd0) = 1;
        *(long *)(unaff_x29 + -200) = unaff_x29 + -0xb0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(long *)(unaff_x29 + -0xb8) = lVar30 + 0x30;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar24,puVar25,unaff_x29 + -0x90,unaff_x29 + -0xd0);
      }
    }
  }
  puVar23 = (undefined8 *)_malloc(0x10);
  if (puVar23 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
  }
  else {
    *puVar23 = puVar38;
    puVar23[1] = &UNK_10b2372e8;
    *(undefined8 **)(unaff_x29 + -0x100) = puVar23;
    *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b2099a8;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (unaff_x29 + -0xd0,s_forward_CONNECT_tunnel_to_108ad03ca,&stack0x000006a0);
    uVar18 = *(ulong *)(unaff_x29 + -0xc0);
    puVar24 = (ulong *)_malloc(0x28);
    if (puVar24 != (ulong *)0x0) {
      puVar24[1] = in_stack_00001578;
      *puVar24 = in_stack_00001570;
      puVar24[3] = (ulong)puVar23;
      puVar24[2] = uVar18;
      puVar24[4] = (ulong)&UNK_10b2099a8;
      goto LAB_100afc880;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
  }
LAB_100afd244:
                    /* WARNING: Does not return */
  pcVar31 = (code *)SoftwareBreakpoint(1,0x100afd248);
  (*pcVar31)();
}

