
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100be1214(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  uint uVar12;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar13;
  bool bVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined8 uVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong *puVar23;
  long *unaff_x19;
  undefined8 *puVar24;
  long lVar25;
  char cVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 uVar30;
  long unaff_x24;
  char cVar31;
  undefined8 *unaff_x28;
  char in_wzr;
  undefined7 in_register_000040f9;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  ulong in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined *in_stack_00000100;
  char *in_stack_00000108;
  undefined1 *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined2 uStack0000000000000130;
  undefined6 uStack0000000000000132;
  undefined *puStack0000000000000138;
  ulong in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long *in_stack_00000160;
  undefined1 in_stack_00000168;
  undefined8 *in_stack_00000e10;
  undefined8 *in_stack_00000e18;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long *in_stack_000014a0;
  undefined8 *in_stack_000014a8;
  ulong in_stack_000014b0;
  undefined8 in_stack_000014b8;
  undefined8 in_stack_000014c0;
  undefined4 in_stack_000014c8;
  undefined4 in_stack_000014cc;
  char *in_stack_000014d0;
  undefined1 *in_stack_000014d8;
  undefined8 in_stack_000014e0;
  undefined8 in_stack_000014e8;
  
code_r0x000100be1214:
  puStack0000000000000138 = &stack0x000007a0;
  _uStack0000000000000130 = s__recoverable_control_socket_acce_108ad1d51;
  puVar32 = (undefined8 *)0x1;
  puVar34 = (undefined8 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00001480);
  puVar33 = (undefined8 *)&stack0x00001b98;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar27 = *unaff_x19;
    in_stack_00000e18 = *(undefined8 **)(lVar27 + 0x20);
    in_stack_00000e10 = (undefined8 *)0x2;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000e10);
    if (iVar10 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar27,puVar5,puVar4,&stack0x00000e10,&stack0x00001480);
    }
  }
LAB_100be1854:
  uVar28 = *(ulong *)(unaff_x24 + 0xb8);
  if ((uVar28 & 3) == 1) {
    uVar30 = *(undefined8 *)(uVar28 - 1);
    puVar24 = *(undefined8 **)(uVar28 + 7);
    pcVar16 = (code *)*puVar24;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar30);
    }
    if (puVar24[1] != 0) {
      _free(uVar30);
    }
    _free((undefined8 *)(uVar28 - 1));
  }
LAB_100be0b68:
  pbVar22 = (byte *)(unaff_x24 + 0xb1);
  *pbVar22 = 0;
  puVar11 = (ulong *)(*(long *)(unaff_x24 + 0x70) + 0x10);
  uVar28 = *puVar11;
  plVar29 = (long *)(unaff_x24 + 200);
  *plVar29 = unaff_x24 + 0x70;
  *(ulong **)(unaff_x24 + 0xd0) = puVar11;
  *(ulong *)(unaff_x24 + 0xd8) = uVar28 >> 2;
  *(undefined8 *)(unaff_x24 + 0xe8) = 0;
  *(undefined8 *)(unaff_x24 + 0xf0) = 0;
  *(undefined8 *)(unaff_x24 + 0xe0) = 0;
  *(undefined8 *)(unaff_x24 + 0x100) = 0;
  *(undefined1 *)(unaff_x24 + 0x108) = 0;
  *(long *)(unaff_x24 + 0x110) = unaff_x24 + 0x48;
  *(undefined1 *)(unaff_x24 + 0x1e0) = 0;
  *(byte **)(unaff_x24 + 0xb8) = pbVar22;
  *(long **)(unaff_x24 + 0xc0) = plVar29;
  puVar11 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar11[9] != '\x01') {
    if ((char)puVar11[9] == '\x02') {
      func_0x000108a82a50(&UNK_10b4cce20);
      goto LAB_100be21f8;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar11,&DAT_100c35d48);
    *(undefined1 *)(puVar11 + 9) = 1;
  }
  if (*(char *)((long)puVar11 + 0x44) != '\x01' || *(char *)((long)puVar11 + 0x45) != '\0') {
    if ((puVar11[7] & 1) == 0) {
      uVar9 = FUN_1060fcce0();
      uVar28 = extraout_x1;
    }
    else {
      uVar9 = *(uint *)((long)puVar11 + 0x3c);
      uVar28 = (ulong)(uint)puVar11[8];
    }
    bVar14 = false;
    iVar10 = 0;
    uVar9 = uVar9 ^ uVar9 << 0x11;
    uVar12 = (uint)uVar28;
    uVar9 = (uint)(uVar28 >> 0x10) & 0xffff ^ uVar9 >> 7 ^ uVar12 ^ uVar9;
    *(undefined4 *)(puVar11 + 7) = 1;
    *(uint *)((long)puVar11 + 0x3c) = uVar12;
    *(uint *)(puVar11 + 8) = uVar9;
    plVar1 = (long *)(unaff_x24 + 0x188);
    bVar19 = true;
LAB_100be0ca0:
    if ((iVar10 - ((int)(uVar9 + uVar12) >> 0x1f) & 1U) == 0) {
      if ((*pbVar22 & 1) != 0) goto LAB_100be0c94;
      uVar28 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                         (plVar29,unaff_x28);
      if ((uVar28 & 1) == 0) {
        *pbVar22 = *pbVar22 | 1;
        puVar18 = (undefined8 *)0x3;
        goto LAB_100be114c;
      }
      bVar14 = true;
    }
    else if ((*pbVar22 >> 1 & 1) == 0) {
      bVar6 = *(byte *)(unaff_x24 + 0x1e0);
      if (bVar6 < 2) {
        if (bVar6 != 0) {
          func_0x000108a07af4(&UNK_10b2524d8);
          goto LAB_100be21f8;
        }
        uVar30 = *(undefined8 *)(unaff_x24 + 0x110);
        *(undefined8 *)(unaff_x24 + 0x118) = uVar30;
        *(undefined1 *)(unaff_x24 + 0x1d8) = 0;
LAB_100be0d0c:
        *(undefined8 *)(unaff_x24 + 0x120) = uVar30;
        *(undefined1 *)(unaff_x24 + 0x1d0) = 0;
      }
      else {
        if (bVar6 != 3) {
          func_0x000108a07b10(&UNK_10b2524d8);
          goto LAB_100be21f8;
        }
        bVar6 = *(byte *)(unaff_x24 + 0x1d8);
        if (bVar6 < 2) {
          if (bVar6 == 0) {
            uVar30 = *(undefined8 *)(unaff_x24 + 0x118);
            goto LAB_100be0d0c;
          }
          func_0x000108a07af4(&UNK_10b252598);
          goto LAB_100be21f8;
        }
        if (bVar6 != 3) {
          func_0x000108a07b10(&UNK_10b252598);
          goto LAB_100be21f8;
        }
        bVar6 = *(byte *)(unaff_x24 + 0x1d0);
        if (1 < bVar6) {
          if (bVar6 == 3) {
            bVar6 = *(byte *)(unaff_x24 + 0x158);
            if (2 < bVar6) {
              if (bVar6 == 3) goto LAB_100be0dd0;
              cVar8 = (char)puVar11[9];
              if (cVar8 != '\x01') goto LAB_100be0efc;
              goto LAB_100be0d80;
            }
            if (bVar6 == 0) {
              uVar30 = *(undefined8 *)(unaff_x24 + 0x130);
              uVar17 = *(undefined8 *)(unaff_x24 + 0x138);
              uVar20 = *(undefined8 *)(unaff_x24 + 0x128);
              goto LAB_100be0d2c;
            }
            if (bVar6 == 1) {
              func_0x000108a07af4(&UNK_10b23ad38);
            }
            else {
              func_0x000108a07b10(&UNK_10b23ad38);
            }
          }
          else {
            func_0x000108a07b10(&UNK_10b23a6a0);
          }
          goto LAB_100be21f8;
        }
        if (bVar6 != 0) {
          func_0x000108a07af4(&UNK_10b23a6a0);
          goto LAB_100be21f8;
        }
        uVar30 = *(undefined8 *)(unaff_x24 + 0x120);
      }
      *(undefined8 *)(unaff_x24 + 0x128) = uVar30;
      *(undefined8 *)(unaff_x24 + 0x130) = uVar30;
      *(undefined8 *)(unaff_x24 + 0x138) = 1;
      uVar17 = 1;
      *(undefined1 *)(unaff_x24 + 0x158) = 0;
      uVar20 = uVar30;
LAB_100be0d2c:
      *(undefined8 *)(unaff_x24 + 0x140) = uVar20;
      *(undefined8 *)(unaff_x24 + 0x148) = uVar17;
      *(undefined8 *)(unaff_x24 + 0x150) = uVar30;
      do {
        *(undefined8 *)(unaff_x24 + 0x160) = uVar20;
        *(undefined8 *)(unaff_x24 + 0x168) = uVar17;
        *(undefined1 *)(unaff_x24 + 0x1c8) = 0;
LAB_100be0dd0:
        func_0x000100fe7f7c(&stack0x00001480,unaff_x24 + 0x160,unaff_x28);
        cVar8 = (char)((ulong)puVar33 >> 8);
        if (cVar8 == '\x03') {
          uVar13 = 3;
          goto LAB_100be0c7c;
        }
        if ((*(char *)(unaff_x24 + 0x1c8) == '\x03') && (*(char *)(unaff_x24 + 0x1c0) == '\x03')) {
          lVar27 = *(long *)(unaff_x24 + 0x180);
          pcVar2 = (char *)(lVar27 + 0x18);
          if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar2,extraout_x1_00,1000000000);
          }
          if (*plVar1 == 0) {
            if (*(long **)(lVar27 + 0x20) == plVar1) {
              plVar15 = *(long **)(unaff_x24 + 400);
              *(long **)(lVar27 + 0x20) = plVar15;
              goto joined_r0x000100be0e88;
            }
          }
          else {
            plVar15 = *(long **)(unaff_x24 + 400);
            *(long **)(*plVar1 + 8) = plVar15;
joined_r0x000100be0e88:
            if (plVar15 == (long *)0x0) {
              if (*(long **)(lVar27 + 0x28) != plVar1) goto LAB_100be0e9c;
              *(long *)(lVar27 + 0x28) = *plVar1;
            }
            else {
              *plVar15 = *plVar1;
            }
            *plVar1 = 0;
            *(undefined8 *)(unaff_x24 + 400) = 0;
          }
LAB_100be0e9c:
          if (*pcVar2 == '\x01') {
            *pcVar2 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar2,0);
          }
          if (*(long *)(unaff_x24 + 0x198) != 0) {
            (**(code **)(*(long *)(unaff_x24 + 0x198) + 0x18))(*(undefined8 *)(unaff_x24 + 0x1a0));
          }
        }
        puVar24 = puVar32;
        if (cVar8 == '\x02') {
LAB_100be1114:
          *(undefined1 *)(unaff_x24 + 0x158) = 1;
LAB_100be1120:
          *(undefined1 *)(unaff_x24 + 0x1d0) = 1;
          puVar18 = (undefined8 *)0x2;
          in_stack_00000068 = puVar24;
          in_stack_000000b0 = in_stack_00000e10;
          in_stack_000000b8 = in_stack_00000e18;
LAB_100be112c:
          *(undefined1 *)(unaff_x24 + 0x1d8) = 1;
          *(undefined1 *)(unaff_x24 + 0x1e0) = 1;
          *pbVar22 = *pbVar22 | 2;
          in_stack_00000e10 = in_stack_000000b0;
          in_stack_00000e18 = in_stack_000000b8;
          goto LAB_100be114c;
        }
        *(undefined8 **)(unaff_x24 + 0x160) = puVar32;
        *(char *)(unaff_x24 + 0x168) = (char)puVar33;
        *(char *)(unaff_x24 + 0x169) = cVar8;
        *(int *)(unaff_x24 + 0x16a) = (int)((ulong)puVar33 >> 0x10);
        *(short *)(unaff_x24 + 0x16e) = (short)((ulong)puVar33 >> 0x30);
        cVar8 = (char)puVar11[9];
        if (cVar8 == '\x01') {
LAB_100be0d80:
          cVar31 = *(char *)((long)puVar11 + 0x44);
          cVar26 = *(char *)((long)puVar11 + 0x45);
joined_r0x000100be0d90:
          cVar8 = cVar26;
          if (cVar31 == '\x01') {
            cVar31 = '\x01';
            if (cVar26 == '\0') goto LAB_100be0da4;
            cVar8 = cVar26 + -1;
          }
          *(char *)((long)puVar11 + 0x45) = cVar8;
        }
        else {
LAB_100be0efc:
          cVar31 = '\0';
          cVar26 = '\0';
          if (cVar8 != '\x02') {
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (puVar11,&DAT_100c35d48);
            *(undefined1 *)(puVar11 + 9) = 1;
            cVar31 = *(char *)((long)puVar11 + 0x44);
            cVar26 = *(char *)((long)puVar11 + 0x45);
            goto joined_r0x000100be0d90;
          }
        }
        uStack0000000000000130 = CONCAT11(cVar26,cVar31);
        if (*(int *)(*(long *)(unaff_x24 + 0x150) + 0x18) == -1) {
          func_0x000108a07a20(&UNK_10b23a610);
          goto LAB_100be21f8;
        }
        __ZN3mio3net3uds8listener12UnixListener6accept17h72f9cdd601aff20cE(&stack0x00001480);
        puVar24 = puVar33;
        if ((int)puVar32 != 1) {
          *(undefined1 *)(unaff_x24 + 0x158) = 1;
          FUN_1060f7d54(&stack0x00001480,(int)((ulong)puVar32 >> 0x20),&UNK_10b4cd360);
          if (puVar32 == (undefined8 *)0x2) goto LAB_100be1120;
          *(undefined1 *)(unaff_x24 + 0x1d0) = 1;
          puVar18 = puVar32;
          in_stack_00000068 = puVar33;
          in_stack_000000b0 = puVar34;
          in_stack_000000b8 = param_1;
          goto LAB_100be112c;
        }
        cVar8 = FUN_100c355d4(puVar33);
        if (cVar8 != '\r') goto LAB_100be1114;
        lVar27 = *(long *)(*(long *)(unaff_x24 + 0x140) + 0x10);
        puVar23 = (ulong *)(lVar27 + 0x90);
        uVar28 = *(ulong *)(lVar27 + 0x90);
        do {
          if ((uint)*(byte *)(unaff_x24 + 0x168) != ((uint)(uVar28 >> 0x10) & 0xff))
          goto LAB_100be0fa4;
          uVar21 = uVar28 & (*(ulong *)(unaff_x24 + 0x160) & 0x23 ^ 0xff002f);
          uVar3 = *puVar23;
          bVar14 = uVar3 != uVar28;
          uVar28 = uVar3;
        } while (bVar14);
        *puVar23 = uVar21;
LAB_100be0fa4:
        if (cVar31 != '\0') {
          if ((char)puVar11[9] != '\x01') {
            if ((char)puVar11[9] == '\x02') goto joined_r0x000100be0fc4;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (puVar11,&DAT_1060edbcc);
            *(undefined1 *)(puVar11 + 9) = 1;
          }
          *(undefined1 *)((long)puVar11 + 0x44) = 1;
          *(char *)((long)puVar11 + 0x45) = cVar26;
        }
joined_r0x000100be0fc4:
        if (((ulong)puVar33 & 3) == 1) {
          uVar30 = *(undefined8 *)((long)puVar33 + -1);
          puVar24 = *(undefined8 **)((long)puVar33 + 7);
          pcVar16 = (code *)*puVar24;
          if (pcVar16 != (code *)0x0) {
            (*pcVar16)(uVar30);
          }
          if (puVar24[1] != 0) {
            _free(uVar30);
          }
          _free((undefined8 *)((long)puVar33 + -1));
        }
        uVar20 = *(undefined8 *)(unaff_x24 + 0x140);
        uVar17 = *(undefined8 *)(unaff_x24 + 0x148);
      } while( true );
    }
    goto LAB_100be0c94;
  }
  FUN_10610bbb4(*(undefined8 *)*unaff_x28,((undefined8 *)*unaff_x28)[1]);
  goto LAB_100be1684;
LAB_100be0da4:
  FUN_10610bbb4(*(undefined8 *)*unaff_x28,((undefined8 *)*unaff_x28)[1]);
  uVar13 = 4;
LAB_100be0c7c:
  *(undefined1 *)(unaff_x24 + 0x158) = uVar13;
  *(undefined1 *)(unaff_x24 + 0x1d0) = 3;
  *(undefined1 *)(unaff_x24 + 0x1d8) = 3;
  bVar14 = true;
  *(undefined1 *)(unaff_x24 + 0x1e0) = 3;
LAB_100be0c94:
  iVar10 = 1;
  bVar7 = !bVar19;
  bVar19 = false;
  if (bVar7) goto LAB_100be10a0;
  goto LAB_100be0ca0;
LAB_100be10a0:
  puVar18 = (undefined8 *)0x5;
  if (bVar14) {
LAB_100be1684:
    uVar30 = 1;
    uVar13 = 3;
    goto LAB_100be1be0;
  }
LAB_100be114c:
  puVar23 = (ulong *)(unaff_x24 + 0x90);
  *puVar23 = (ulong)puVar18;
  *(undefined8 **)(unaff_x24 + 0x98) = in_stack_00000068;
  *(undefined8 **)(unaff_x24 + 0xa8) = in_stack_000000b8;
  *(undefined8 **)(unaff_x24 + 0xa0) = in_stack_000000b0;
  FUN_100d57690(unaff_x24 + 200);
  lVar27 = *puVar23 - 3;
  if (*puVar23 < 3) {
    lVar27 = 1;
  }
  if (lVar27 != 1) {
    if (lVar27 == 0) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
         (((bRam000000010b628998 - 1 < 2 ||
           ((bRam000000010b628998 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
                               ), cVar8 != '\0')))) &&
          (uVar28 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
                              ), (uVar28 & 1) != 0)))) {
        _uStack0000000000000130 = &stack0x000007a0;
        puStack0000000000000138 = &UNK_10b208fd0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
                   ,&stack0x00001480);
        lVar27 = 
        ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000e10);
          if (iVar10 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar27,puVar5,puVar4,&stack0x00000e10,&stack0x00001480);
          }
        }
      }
      else {
        lVar27 = 
        ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000120 =
               *(undefined8 *)
                (
                ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
                + 0x20);
          in_stack_00000128 =
               *(undefined8 *)
                (
                ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56f706a99bd56a38E
                + 0x28);
          in_stack_00000118 = 3;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000118);
          if (iVar10 != 0) {
            _uStack0000000000000130 = &stack0x000007a0;
            puStack0000000000000138 = &UNK_10b208fd0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar27,puVar5,puVar4,&stack0x00000e10,&stack0x00001480);
          }
        }
      }
      __ZN116__LT_codex_app_server_transport__transport__unix_socket__ControlSocketFileGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h646f1a7fa41c2084E
                (unaff_x24 + 0x78);
      if (*(long *)(unaff_x24 + 0x78) != 0) {
        _free(*(undefined8 *)(unaff_x24 + 0x80));
      }
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (unaff_x24 + 0x70);
      lVar27 = **(long **)(unaff_x24 + 0x70);
      **(long **)(unaff_x24 + 0x70) = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x24 + 0x70);
      }
      plVar29 = (long *)(unaff_x24 + 0x68);
      lVar25 = *plVar29;
      LOAcquire();
      lVar27 = *(long *)(lVar25 + 0x1f0);
      *(long *)(lVar25 + 0x1f0) = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        LOAcquire();
        lVar27 = *(long *)(lVar25 + 0x88);
        *(long *)(lVar25 + 0x88) = lVar27 + 1;
        lVar27 = func_0x000100fcb05c(lVar25 + 0x80,lVar27);
        *(ulong *)(lVar27 + 0x1610) = *(ulong *)(lVar27 + 0x1610) | 0x200000000;
        LORelease();
        puVar11 = (ulong *)(lVar25 + 0x110);
        LOAcquire();
        uVar28 = *puVar11;
        *puVar11 = uVar28 | 2;
        LORelease();
        if (uVar28 == 0) {
          lVar27 = *(long *)(lVar25 + 0x100);
          *(undefined8 *)(lVar25 + 0x100) = 0;
          *puVar11 = CONCAT71(in_register_000040f9,in_wzr);
          LORelease();
          if (lVar27 != 0) {
            (**(code **)(lVar27 + 8))(*(undefined8 *)(lVar25 + 0x108));
          }
        }
      }
      lVar27 = *(long *)*plVar29;
      *(long *)*plVar29 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar29);
      }
      FUN_100de50a4(unaff_x24 + 0x48);
      uVar30 = 0;
      uVar13 = 1;
      goto LAB_100be1be0;
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b232a80);
LAB_100be21f8:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100be21fc);
    (*pcVar16)();
  }
  *(undefined8 *)(unaff_x24 + 0x138) = *(undefined8 *)(unaff_x24 + 0x98);
  *(ulong *)(unaff_x24 + 0x130) = *puVar23;
  *(undefined8 *)(unaff_x24 + 0x148) = *(undefined8 *)(unaff_x24 + 0xa8);
  *(undefined8 *)(unaff_x24 + 0x140) = *(undefined8 *)(unaff_x24 + 0xa0);
  if (*(long *)(unaff_x24 + 0x130) == 2) goto code_r0x000100be1194;
  uVar30 = *(undefined8 *)(unaff_x24 + 0x98);
  uVar28 = *puVar23;
  uVar17 = *(undefined8 *)(unaff_x24 + 0xa8);
  uVar20 = *(undefined8 *)(unaff_x24 + 0xa0);
  plVar29 = *(long **)(unaff_x24 + 0x68);
  plVar29[0x3e] = plVar29[0x3e] + 1;
  lVar27 = *plVar29;
  *plVar29 = lVar27 + 1;
  puVar32 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  if (lVar27 < 0) goto LAB_100be21f8;
  do {
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = puVar32;
    puVar32 = (undefined8 *)
              ((long)___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1);
  } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (undefined8 *)0x0);
  in_stack_000000f8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
  _uStack0000000000000130 = (char *)&stack0x000000f8;
  puStack0000000000000138 = &stack0x000021ff;
  in_stack_00000168 = 0;
  ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = puVar32;
  in_stack_00000140 = uVar28;
  in_stack_00000148 = uVar30;
  in_stack_00000150 = uVar20;
  in_stack_00000158 = uVar17;
  in_stack_00000160 = plVar29;
  if ((char)puVar11[9] != '\x01') {
    if ((char)puVar11[9] == '\x02') {
      FUN_100d60d38(&stack0x00000140);
      goto LAB_100be1384;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
              (puVar11,&DAT_100c35d48);
    *(undefined1 *)(puVar11 + 9) = 1;
  }
  _memcpy(&stack0x000007a0,&stack0x00000130,0x670);
  if (0x7ffffffffffffffe < *puVar11) {
    func_0x000108a07858(&UNK_10b2435a0);
    goto LAB_100be21f8;
  }
  *puVar11 = *puVar11 + 1;
  uVar28 = puVar11[1];
  _memcpy(&stack0x00000e10,&stack0x00000130,0x670);
  if (uVar28 != 2) {
    puVar32 = (undefined8 *)*in_stack_00000e10;
    if ((uVar28 & 1) == 0) {
      in_stack_000014a0 = (long *)puVar11[2];
      lVar27 = *in_stack_000014a0;
      *in_stack_000014a0 = lVar27 + 1;
      if ((lVar27 < 0) ||
         ((plVar29 = (long *)in_stack_000014a0[0x5e], plVar29 != (long *)0x0 &&
          (lVar27 = *plVar29, *plVar29 = lVar27 + 1, lVar27 < 0)))) goto LAB_100be21f8;
      _memcpy(&stack0x00001b9c,&stack0x000007b0,0x660);
      puVar34 = (undefined8 *)&UNK_10b2428a0;
      _memcpy((ulong)&stack0x00001480 | 0x34,&stack0x00001b98,0x664);
      in_stack_00000108 = (char *)0x0;
      iVar10 = _posix_memalign(&stack0x00000108,0x80,0x700);
      plVar29 = (long *)in_stack_00000108;
      if ((iVar10 != 0) || ((long *)in_stack_00000108 == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
        goto LAB_100be21f8;
      }
      _memcpy(in_stack_00000108,&stack0x00001480,0x700);
      lVar27 = FUN_1010e2658(in_stack_000014a0 + 0x2d,plVar29,plVar29);
      if (in_stack_000014a0[0x5c] != 0) {
        (**(code **)(in_stack_000014a0[0x5d] + 0x28))
                  (in_stack_000014a0[0x5c] +
                   (*(long *)(in_stack_000014a0[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   &stack0x00001480);
      }
      if (lVar27 != 0) {
        __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                  (puVar11 + 2,lVar27);
      }
    }
    else {
      in_stack_000014a0 = (long *)puVar11[2];
      lVar27 = *in_stack_000014a0;
      *in_stack_000014a0 = lVar27 + 1;
      if ((lVar27 < 0) ||
         ((plVar29 = (long *)in_stack_000014a0[0x4a], plVar29 != (long *)0x0 &&
          (lVar27 = *plVar29, *plVar29 = lVar27 + 1, lVar27 < 0)))) goto LAB_100be21f8;
      _memcpy(&stack0x00001b9c,&stack0x000007b0,0x660);
      puVar34 = (undefined8 *)&UNK_10b23e980;
      _memcpy((ulong)&stack0x00001480 | 0x34,&stack0x00001b98,0x664);
      in_stack_00000108 = (char *)0x0;
      iVar10 = _posix_memalign(&stack0x00000108,0x80,0x700);
      plVar29 = (long *)in_stack_00000108;
      if ((iVar10 != 0) || ((long *)in_stack_00000108 == (long *)0x0)) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
        goto LAB_100be21f8;
      }
      _memcpy(in_stack_00000108,&stack0x00001480,0x700);
      lVar27 = FUN_1010e2658(in_stack_000014a0 + 0x11,plVar29,plVar29);
      if (in_stack_000014a0[0x48] != 0) {
        (**(code **)(in_stack_000014a0[0x49] + 0x28))
                  (in_stack_000014a0[0x48] +
                   (*(long *)(in_stack_000014a0[0x49] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   &stack0x00001480);
      }
      if (lVar27 != 0) {
        FUN_10610fa38(in_stack_000014a0 + 2,lVar27,0);
      }
    }
    in_stack_000014b0 = in_stack_000014b0 & 0xffffffff00000000;
    param_1 = (undefined8 *)0x0;
    puVar33 = (undefined8 *)0x0;
    *puVar11 = *puVar11 - 1;
    in_stack_000014a8 = puVar32;
    if (*plVar29 == 0xcc) {
      *plVar29 = 0x84;
    }
    else {
      (**(code **)(plVar29[2] + 0x20))(plVar29);
    }
    goto LAB_100be0b68;
  }
  FUN_100d60d38(&stack0x00000e20);
  *puVar11 = *puVar11 - 1;
LAB_100be1384:
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00001480,&UNK_10b232a50);
  goto LAB_100be21f8;
code_r0x000100be1194:
  *(undefined8 *)(unaff_x24 + 0xb8) = *(undefined8 *)(unaff_x24 + 0x138);
  uVar9 = FUN_100c355d4();
  if ((0x23 < (uVar9 & 0xff)) || ((1L << ((ulong)(uVar9 & 0xff) & 0x3f) & 0x800000048U) == 0)) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b628980 - 1 < 2 ||
         ((bRam000000010b628980 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
                             ), cVar8 != '\0')))))) &&
       (uVar28 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
                           ), (uVar28 & 1) != 0)) {
      param_1 = (undefined8 *)
                (
                ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
                + 0x30);
      puStack0000000000000138 = &stack0x000007a0;
      _uStack0000000000000130 = s_control_socket_accept_error__108ad1d31;
      in_stack_00000e10 = (undefined8 *)0x1;
      puVar34 = (undefined8 *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
                 ,&stack0x00001480);
      lVar27 = 
      ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
      ;
      in_stack_00000e18 = (undefined8 *)&stack0x00001b98;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x00000e10);
        if (iVar10 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar27,puVar5,puVar4,&stack0x00000e10,&stack0x00001480);
        }
      }
    }
    else {
      lVar27 = 
      ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
      ;
      in_stack_00000e10 = puVar32;
      in_stack_00000e18 = puVar33;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        in_stack_000000e8 =
             *(undefined8 *)
              (
              ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
              + 0x20);
        in_stack_000000f0 =
             *(undefined8 *)
              (
              ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h268eef59ef49e148E
              + 0x28);
        in_stack_000000e0 = 1;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x000000e0);
        uVar20 = in_stack_000000f0;
        uVar30 = in_stack_000000e8;
        uVar28 = in_stack_000000e0;
        if (iVar10 != 0) {
          in_stack_00000110 = &stack0x00001b98;
          in_stack_00000108 = s_control_socket_accept_error__108ad1d31;
          in_stack_000000f8 = &stack0x00000108;
          in_stack_00000100 = &UNK_10b208fd0;
          in_stack_000014a0 = *(long **)(lVar27 + 0x60);
          in_stack_000014a8 = *(undefined8 **)(lVar27 + 0x68);
          in_stack_00000e18 = *(undefined8 **)(lVar27 + 0x50);
          puVar34 = *(undefined8 **)(lVar27 + 0x58);
          in_stack_00000e10 = (undefined8 *)0x1;
          if (in_stack_00000e18 == (undefined8 *)0x0) {
            in_stack_00000e10 = (undefined8 *)0x2;
          }
          in_stack_000014c8 = *(undefined4 *)(lVar27 + 8);
          in_stack_000014cc = *(undefined4 *)(lVar27 + 0xc);
          _uStack0000000000000130 = &stack0x00000e10;
          puStack0000000000000138 = (undefined *)CONCAT71(puStack0000000000000138._1_7_,1);
          param_1 = (undefined8 *)0x1;
          if (in_stack_000014a0 == (long *)0x0) {
            param_1 = (undefined8 *)0x2;
          }
          in_stack_000014d8 = &stack0x000007a0;
          in_stack_000014d0 = s__108b39f4f;
          (**(code **)(puVar4 + 0x20))(puVar5,&stack0x00001480);
          in_stack_000014b0 = uVar28;
          in_stack_000014b8 = uVar30;
          in_stack_000014c0 = uVar20;
        }
      }
    }
    __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&stack0x00001480,1,0,&UNK_10b232a68);
    *(ulong *)(unaff_x24 + 0x108) = CONCAT44(in_stack_000014cc,in_stack_000014c8);
    *(undefined8 *)(unaff_x24 + 0x100) = in_stack_000014c0;
    *(undefined1 **)(unaff_x24 + 0x118) = in_stack_000014d8;
    *(char **)(unaff_x24 + 0x110) = in_stack_000014d0;
    *(undefined8 *)(unaff_x24 + 0x128) = in_stack_000014e8;
    *(undefined8 *)(unaff_x24 + 0x120) = in_stack_000014e0;
    *(undefined8 **)(unaff_x24 + 200) = in_stack_00000e18;
    *(undefined8 **)(unaff_x24 + 0xc0) = in_stack_00000e10;
    *(undefined8 **)(unaff_x24 + 0xd8) = param_1;
    *(undefined8 **)(unaff_x24 + 0xd0) = puVar34;
    *(undefined8 **)(unaff_x24 + 0xe8) = in_stack_000014a8;
    *(long **)(unaff_x24 + 0xe0) = in_stack_000014a0;
    *(undefined8 *)(unaff_x24 + 0xf8) = in_stack_000014b8;
    *(ulong *)(unaff_x24 + 0xf0) = in_stack_000014b0;
    uVar28 = func_0x000106114748(unaff_x24 + 0xc0,unaff_x28);
    if ((uVar28 & 1) != 0) {
      uVar30 = 1;
      uVar13 = 4;
LAB_100be1be0:
      *(undefined1 *)(unaff_x24 + 0xb0) = uVar13;
      return uVar30;
    }
    FUN_100de8a5c(unaff_x24 + 0xc0);
    puVar32 = in_stack_00000e10;
    puVar33 = in_stack_00000e18;
    goto LAB_100be1854;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x19 = (long *)&
                        __ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
    ;
    if (((bRam000000010b6289b0 - 1 < 2) ||
        ((bRam000000010b6289b0 != 0 &&
         (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
                            ), cVar8 != '\0')))) &&
       (uVar28 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
                           ), (uVar28 & 1) != 0)) goto code_r0x000100be11fc;
  }
  lVar27 = 
  ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_000000d0 =
         *(undefined8 *)
          (
          ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
          + 0x20);
    in_stack_000000d8 =
         *(undefined8 *)
          (
          ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
          + 0x28);
    in_stack_000000c8 = 2;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar4 + 0x18))(puVar5,&stack0x000000c8);
    uVar20 = in_stack_000000d8;
    uVar30 = in_stack_000000d0;
    uVar28 = in_stack_000000c8;
    if (iVar10 != 0) {
      in_stack_00000110 = &stack0x00001b98;
      in_stack_00000108 = s__recoverable_control_socket_acce_108ad1d51;
      in_stack_000000f8 = &stack0x00000108;
      in_stack_00000100 = &UNK_10b208fd0;
      in_stack_00000e18 = &stack0x000000f8;
      in_stack_00000e10 = (undefined8 *)0x1;
      in_stack_000014a0 = *(long **)(lVar27 + 0x60);
      in_stack_000014a8 = *(undefined8 **)(lVar27 + 0x68);
      puVar33 = *(undefined8 **)(lVar27 + 0x50);
      puVar34 = *(undefined8 **)(lVar27 + 0x58);
      puVar32 = (undefined8 *)0x1;
      if (puVar33 == (undefined8 *)0x0) {
        puVar32 = (undefined8 *)0x2;
      }
      in_stack_000014c8 = *(undefined4 *)(lVar27 + 8);
      in_stack_000014cc = *(undefined4 *)(lVar27 + 0xc);
      _uStack0000000000000130 = &stack0x00000e10;
      puStack0000000000000138 = (undefined *)CONCAT71(puStack0000000000000138._1_7_,1);
      param_1 = (undefined8 *)0x1;
      if (in_stack_000014a0 == (long *)0x0) {
        param_1 = (undefined8 *)0x2;
      }
      in_stack_000014d8 = &stack0x000007a0;
      in_stack_000014d0 = s__108b39f4f;
      (**(code **)(puVar4 + 0x20))(puVar5,&stack0x00001480);
      in_stack_000014b0 = uVar28;
      in_stack_000014b8 = uVar30;
      in_stack_000014c0 = uVar20;
    }
  }
  goto LAB_100be1854;
code_r0x000100be11fc:
  param_1 = (undefined8 *)
            (
            ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
            + 0x30);
  param_2 = 
  ___ZN26codex_app_server_transport9transport11unix_socket27run_control_socket_acceptor28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcfb752765e5a3ffbE
  ;
  goto code_r0x000100be1214;
}

