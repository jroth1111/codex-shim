
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009ab1d0(undefined1 *param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puVar10;
  long lVar11;
  byte bVar12;
  undefined1 uVar13;
  ulong uVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar15;
  long *unaff_x21;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long unaff_x25;
  ulong uVar22;
  char cVar23;
  char cVar24;
  long unaff_x29;
  undefined8 uVar25;
  long lVar26;
  undefined1 auVar27 [16];
  byte bVar28;
  undefined1 *in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  undefined1 *in_stack_00000260;
  undefined1 *in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  ulong uVar29;
  undefined1 *puVar30;
  long in_stack_000002b0;
  long in_stack_000002b8;
  long in_stack_000002c0;
  long in_stack_000002c8;
  ulong in_stack_000004a8;
  long in_stack_000004b0;
  undefined1 *in_stack_000004b8;
  undefined1 *in_stack_000004c0;
  undefined1 in_stack_000004c8 [16];
  
code_r0x0001009ab1d0:
  *(char **)(unaff_x29 + -0x70) = s_disconnecting_6_outbound_websock_108acc8eb;
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000260;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  lVar11 = unaff_x29 + -0x80;
  uVar29 = 1;
  puVar30 = (undefined1 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000290);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar16 = *unaff_x21;
    uVar9 = *(undefined8 *)(lVar16 + 0x20);
    uVar25 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xb8) = 3;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar9;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar25;
    puVar10 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar10 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar10 + 0x18))(puVar4,unaff_x29 + -0xb8);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar16,puVar4,puVar10,unaff_x29 + -0xb8,&stack0x00000290);
    }
  }
LAB_1009ab740:
  lVar16 = unaff_x19[3];
  if (lVar16 != 0) {
    plVar18 = (long *)*unaff_x19;
    plVar20 = plVar18 + 1;
    lVar26 = *plVar18;
    uVar22 = CONCAT17(-(-1 < lVar26),
                      CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar26 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar26 >> 8)),-(-1 < (char)lVar26)))))))) &
             0x8080808080808080;
    do {
      while (uVar22 == 0) {
        lVar26 = *plVar20;
        plVar18 = plVar18 + -0x30;
        plVar20 = plVar20 + 1;
        uVar22 = CONCAT17(-(-1 < lVar26),
                          CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar26
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar26 >> 8)),-(-1 < (char)lVar26)))))))) &
                 0x8080808080808080;
      }
      uVar19 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      if (plVar18[(long)-(int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) * 6 + -1] != 0)
      {
        __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE();
      }
      uVar22 = uVar22 - 1 & uVar22;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar16 = unaff_x19[3];
    if (lVar16 != 0) {
      plVar17 = (long *)*unaff_x19;
      plVar18 = plVar17 + 1;
      lVar26 = *plVar17;
      uVar22 = CONCAT17(-(-1 < lVar26),
                        CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar26 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar26 >> 8)),-(-1 < (char)lVar26)))))))) &
               0x8080808080808080;
      plVar20 = plVar17;
      do {
        while (uVar22 == 0) {
          lVar26 = *plVar18;
          plVar18 = plVar18 + 1;
          plVar20 = plVar20 + -0x30;
          uVar22 = CONCAT17(-(-1 < lVar26),
                            CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8)),
                                                           -(-1 < (char)lVar26)))))))) &
                   0x8080808080808080;
        }
        uVar19 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        FUN_100e34ae8(plVar20 + (long)-(int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) *
                                6 + -5);
        uVar22 = uVar22 - 1 & uVar22;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      uVar19 = unaff_x19[1];
      uVar22 = 0;
      if (uVar19 != 0) {
        _memset(plVar17,0xff,uVar19 + 9);
        uVar22 = uVar19;
        if (7 < uVar19) {
          uVar22 = (uVar19 + 1 >> 3) * 7;
        }
      }
      unaff_x19[2] = uVar22;
      unaff_x19[3] = 0;
    }
  }
LAB_1009aad40:
  pbVar1 = (byte *)(unaff_x19 + 0x4a);
  *(undefined1 *)(unaff_x19 + 0x4a) = 0;
  unaff_x19[0x4b] = (long)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x4d) = 0;
  unaff_x19[0x4e] = (long)(unaff_x19 + 0x49);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  unaff_x19[0x51] = (long)pbVar1;
  unaff_x19[0x52] = (long)(unaff_x19 + 0x4b);
  lVar16 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  cVar6 = *(char *)(lVar16 + 0x48);
  if (cVar6 == '\x01') {
LAB_1009aadac:
    cVar6 = '\x01';
    if (*(char *)(lVar16 + 0x44) != '\x01' || *(char *)(lVar16 + 0x45) != '\0') goto LAB_1009aadc4;
    FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
LAB_1009ab5b4:
    uVar9 = 1;
    uVar13 = 3;
    goto LAB_1009aba6c;
  }
  if (cVar6 != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar16,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar16 + 0x48) = 1;
    goto LAB_1009aadac;
  }
LAB_1009aadc4:
  uVar22 = uVar29;
  lVar26 = in_stack_000002c0;
  if ((*pbVar1 & 1) == 0) {
    bVar12 = *(byte *)(unaff_x19 + 0x4d);
    if (bVar12 < 2) {
      if (bVar12 != 0) {
        FUN_107c05cc0(&UNK_10b23a760);
        goto LAB_1009abb5c;
      }
      plVar18 = (long *)unaff_x19[0x4b];
      unaff_x19[0x4c] = (long)plVar18;
      cVar6 = *(char *)(lVar16 + 0x48);
      if (cVar6 != '\x01') goto LAB_1009aae38;
LAB_1009aadf4:
      cVar24 = *(char *)(lVar16 + 0x44);
      cVar23 = *(char *)(lVar16 + 0x45);
      cVar6 = cVar23;
      if (cVar24 == '\x01') goto LAB_1009aae08;
      goto LAB_1009aae10;
    }
    if (bVar12 != 3) {
      FUN_107c05cc4(&UNK_10b23a760);
      goto LAB_1009abb5c;
    }
    plVar18 = (long *)unaff_x19[0x4c];
    if (cVar6 == '\x01') goto LAB_1009aadf4;
LAB_1009aae38:
    cVar24 = '\0';
    cVar23 = '\0';
    if (cVar6 != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar16,&DAT_100c35d48);
      *(undefined1 *)(lVar16 + 0x48) = 1;
      cVar24 = *(char *)(lVar16 + 0x44);
      cVar23 = *(char *)(lVar16 + 0x45);
      cVar6 = cVar23;
      if (cVar24 != '\x01') {
LAB_1009aae10:
        *(char *)(lVar16 + 0x45) = cVar6;
        goto LAB_1009aae48;
      }
LAB_1009aae08:
      if (cVar23 != '\0') {
        cVar6 = cVar23 + -1;
        goto LAB_1009aae10;
      }
      FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
      goto LAB_1009ab03c;
    }
LAB_1009aae48:
    *(char *)(unaff_x29 + -0x70) = cVar24;
    *(char *)(unaff_x29 + -0x6f) = cVar23;
    lVar21 = *plVar18;
    func_0x000100fc8614(unaff_x29 + -0xb8,lVar21 + 0x1a0,lVar21 + 0x80);
    unaff_x25 = *(long *)(unaff_x29 + -0xb8);
    in_stack_000001d0 = in_stack_00000260;
    in_stack_000001d8 = in_stack_00000268;
    in_stack_000001e0 = in_stack_00000270;
    in_stack_000001e8 = in_stack_00000278;
    in_stack_000001f8 = in_stack_00000288;
    if (unaff_x25 == 3) {
      if (*(ulong *)(lVar21 + 0x1e8) != *(ulong *)(lVar21 + 0x1e0) >> 1) {
        puVar10 = &UNK_10b23a6d0;
LAB_1009aaf9c:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar10);
        goto LAB_1009abb5c;
      }
    }
    else if (unaff_x25 == 4) {
      __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                (lVar21 + 0x100,*unaff_x20);
      func_0x000100fc8614(unaff_x29 + -0xb8,lVar21 + 0x1a0,lVar21 + 0x80);
      unaff_x25 = *(long *)(unaff_x29 + -0xb8);
      if (unaff_x25 == 3) {
        if (*(ulong *)(lVar21 + 0x1e8) != *(ulong *)(lVar21 + 0x1e0) >> 1) {
          puVar10 = &UNK_10b23a6b8;
          goto LAB_1009aaf9c;
        }
      }
      else {
        if (unaff_x25 != 4) {
          lVar26 = *(long *)(unaff_x29 + -0x88);
          pcVar2 = (char *)(lVar21 + 0x1c0);
          if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar2,extraout_x1_00,1000000000);
          }
          FUN_1060fa678(pcVar2,1,pcVar2);
          goto LAB_1009aaff4;
        }
        if ((*(char *)(lVar21 + 0x1b8) != '\x01') ||
           (unaff_x25 = 3, *(ulong *)(lVar21 + 0x1e8) != *(ulong *)(lVar21 + 0x1e0) >> 1)) {
          if (cVar24 != '\0') {
            if (*(char *)(lVar16 + 0x48) != '\x01') {
              if (*(char *)(lVar16 + 0x48) == '\x02') goto LAB_1009ab03c;
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar16,&DAT_1060edbcc);
              *(undefined1 *)(lVar16 + 0x48) = 1;
            }
            *(undefined1 *)(lVar16 + 0x44) = 1;
            *(char *)(lVar16 + 0x45) = cVar23;
          }
LAB_1009ab03c:
          uVar13 = 3;
          *(undefined1 *)(unaff_x19 + 0x4d) = 3;
          if ((*pbVar1 >> 1 & 1) == 0) goto LAB_1009ab04c;
          uVar9 = 1;
          goto LAB_1009aba6c;
        }
      }
    }
    else {
      lVar26 = *(long *)(unaff_x29 + -0x88);
      pcVar2 = (char *)(lVar21 + 0x1c0);
      if (*pcVar2 == '\0') {
        *pcVar2 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar2,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar2,1,pcVar2);
LAB_1009aaff4:
      in_stack_000001d0 = *(undefined1 **)(unaff_x29 + -0xb0);
      in_stack_000001d8 = *(undefined1 **)(unaff_x29 + -0xa8);
      in_stack_000001e8 = *(long *)(unaff_x29 + -0x98);
      in_stack_000001e0 = *(long *)(unaff_x29 + -0xa0);
      in_stack_00000280 = *(long *)(unaff_x29 + -0x90);
      in_stack_000001f8 = *(long *)(unaff_x29 + -0x88);
      uVar22 = in_stack_000004a8;
      lVar11 = in_stack_000004b0;
      puVar30 = in_stack_000004b8;
      param_1 = in_stack_000004c0;
      in_stack_000002b0 = in_stack_000004c8._0_8_;
      in_stack_000002b8 = in_stack_000004c8._8_8_;
    }
    in_stack_000002c0 = in_stack_00000280;
    *(undefined1 *)(unaff_x19 + 0x4d) = 1;
    bVar12 = *pbVar1 | 1;
    uVar29 = 4;
    in_stack_00000260 = in_stack_000001d0;
    in_stack_00000268 = in_stack_000001d8;
    in_stack_00000270 = in_stack_000001e0;
    in_stack_00000278 = in_stack_000001e8;
    in_stack_00000280 = in_stack_000002c0;
    in_stack_00000288 = in_stack_000001f8;
LAB_1009ab098:
    *pbVar1 = bVar12;
    uVar19 = uVar29;
    in_stack_000001f0 = in_stack_000002c0;
    uVar29 = uVar22;
    in_stack_000002c0 = lVar26;
  }
  else {
    uVar19 = 6;
    if ((*pbVar1 >> 1 & 1) == 0) {
LAB_1009ab04c:
      FUN_100fd0af4(&stack0x00000290,unaff_x19 + 0x4e,*unaff_x20);
      if (uVar29 == 4) goto LAB_1009ab5b4;
      bVar12 = *pbVar1;
      _memcpy();
      bVar12 = bVar12 | 2;
      unaff_x25 = lVar11;
      in_stack_000001d0 = puVar30;
      in_stack_000001d8 = param_1;
      in_stack_000001e0 = in_stack_000002b0;
      in_stack_000001e8 = in_stack_000002b8;
      in_stack_000001f8 = in_stack_000002c8;
      goto LAB_1009ab098;
    }
  }
  puVar15 = (ulong *)(unaff_x19 + 6);
  *puVar15 = uVar19;
  unaff_x19[7] = unaff_x25;
  unaff_x19[9] = (long)in_stack_000001d8;
  unaff_x19[8] = (long)in_stack_000001d0;
  unaff_x19[0xb] = in_stack_000001e8;
  unaff_x19[10] = in_stack_000001e0;
  unaff_x19[0xd] = in_stack_000001f8;
  unaff_x19[0xc] = in_stack_000001f0;
  _memcpy(unaff_x19 + 0xe);
  if (uVar19 < 4) {
LAB_1009ab0dc:
    _memcpy(unaff_x19 + 0x4b,puVar15,0x210);
    if (unaff_x19[0x4b] == 3) goto LAB_1009ab40c;
    _memcpy(unaff_x19 + 0x8d,puVar15,0x210);
    unaff_x19[0xcf] = (long)unaff_x19;
    *(undefined1 *)(unaff_x19 + 0x113) = 0;
    iVar7 = FUN_1009b26dc(unaff_x19 + 0x8d);
    if (iVar7 != 0) {
      uVar9 = 1;
      uVar13 = 4;
      goto LAB_1009aba6c;
    }
    FUN_100ca1118(unaff_x19 + 0x8d);
    goto LAB_1009aad40;
  }
  if (uVar19 != 4) {
    if (uVar19 != 5) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b229588);
LAB_1009abb5c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009abb60);
      (*pcVar5)();
    }
    goto LAB_1009ab0dc;
  }
  if (unaff_x25 < 2) {
    lVar16 = unaff_x19[8];
    if (unaff_x25 == 0) {
      puVar30 = (undefined1 *)unaff_x19[0xd];
      uVar29 = unaff_x19[0xb];
      lVar11 = unaff_x19[0xc];
      auVar27 = NEON_ext(*(undefined1 (*) [16])(unaff_x19 + 9),*(undefined1 (*) [16])(unaff_x19 + 9)
                         ,8,1);
      in_stack_000002b0 = auVar27._8_8_;
      param_1 = auVar27._0_8_;
      FUN_100c309d0(unaff_x29 + -0xb8);
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_100e34ae8(unaff_x29 + -0xb8);
      }
    }
    else {
      uVar8 = FUN_100e8e058(unaff_x19[4],unaff_x19[5],lVar16);
      lVar26 = 0;
      lVar21 = *unaff_x19;
      uVar19 = unaff_x19[1];
      bVar12 = (byte)(uVar8 >> 0x39);
      uVar8 = uVar8 & uVar19;
      uVar9 = *(undefined8 *)(lVar21 + uVar8);
      uVar22 = CONCAT17(-((byte)((ulong)uVar9 >> 0x38) == bVar12),
                        CONCAT16(-((byte)((ulong)uVar9 >> 0x30) == bVar12),
                                 CONCAT15(-((byte)((ulong)uVar9 >> 0x28) == bVar12),
                                          CONCAT14(-((byte)((ulong)uVar9 >> 0x20) == bVar12),
                                                   CONCAT13(-((byte)((ulong)uVar9 >> 0x18) == bVar12
                                                             ),CONCAT12(-((byte)((ulong)uVar9 >>
                                                                                0x10) == bVar12),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar9 >> 8) == bVar12),-((byte)uVar9 == bVar12))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar22 == 0) {
          bVar28 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar9 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar9 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar9 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar9 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar9 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar9 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar9 >> 8) ==
                                                                     -1),-((char)uVar9 == -1))))))))
                              ,1);
          if ((bVar28 & 1) != 0) goto LAB_1009aad40;
          lVar26 = lVar26 + 8;
          uVar8 = uVar8 + lVar26 & uVar19;
          uVar9 = *(undefined8 *)(lVar21 + uVar8);
          uVar22 = CONCAT17(-((byte)((ulong)uVar9 >> 0x38) == bVar12),
                            CONCAT16(-((byte)((ulong)uVar9 >> 0x30) == bVar12),
                                     CONCAT15(-((byte)((ulong)uVar9 >> 0x28) == bVar12),
                                              CONCAT14(-((byte)((ulong)uVar9 >> 0x20) == bVar12),
                                                       CONCAT13(-((byte)((ulong)uVar9 >> 0x18) ==
                                                                 bVar12),CONCAT12(-((byte)((ulong)
                                                  uVar9 >> 0x10) == bVar12),
                                                  CONCAT11(-((byte)((ulong)uVar9 >> 8) == bVar12),
                                                           -((byte)uVar9 == bVar12)))))))) &
                   0x8080808080808080;
        }
        uVar14 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar8 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar19;
        if (lVar16 == *(long *)(lVar21 + -0x30 + uVar14 * -0x30)) break;
        uVar22 = uVar22 - 1 & uVar22;
      }
      lVar16 = lVar21 + uVar14 * -0x30;
      lVar26 = ((long)(uVar14 * 0x30) >> 4) * -0x5555555555555555;
      puVar3 = (undefined8 *)(lVar21 + (lVar26 - 8U & uVar19));
      uVar9 = *puVar3;
      uVar25 = *(undefined8 *)(lVar21 + lVar26);
      uVar22 = CONCAT17(-((char)((ulong)uVar25 >> 0x38) == -1),
                        CONCAT16(-((char)((ulong)uVar25 >> 0x30) == -1),
                                 CONCAT15(-((char)((ulong)uVar25 >> 0x28) == -1),
                                          CONCAT14(-((char)((ulong)uVar25 >> 0x20) == -1),
                                                   CONCAT13(-((char)((ulong)uVar25 >> 0x18) == -1),
                                                            CONCAT12(-((char)((ulong)uVar25 >> 0x10)
                                                                      == -1),CONCAT11(-((char)((
                                                  ulong)uVar25 >> 8) == -1),-((char)uVar25 == -1))))
                                                  ))));
      uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
      uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar13 = 0x80;
      if (((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar9 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar9 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar9 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar9 >> 0x20) == -1),
                                                              CONCAT13(-((char)((ulong)uVar9 >> 0x18
                                                                               ) == -1),
                                                                       CONCAT12(-((char)((ulong)
                                                  uVar9 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar9 >> 8) == -1),
                                                           -((char)uVar9 == -1))))))))) >> 3) < 8) {
        unaff_x19[2] = unaff_x19[2] + 1;
        uVar13 = 0xff;
      }
      *(undefined1 *)(lVar21 + lVar26) = uVar13;
      *(undefined1 *)(puVar3 + 1) = uVar13;
      unaff_x19[3] = unaff_x19[3] + -1;
      uVar22 = *(ulong *)(lVar16 + -0x28);
      if (uVar22 != 0) {
        in_stack_000002b0 = *(long *)(lVar16 + -8);
        param_1 = *(undefined1 **)(lVar16 + -0x10);
        puVar30 = SUB168(*(undefined1 (*) [16])(lVar16 + -0x20),8);
        lVar11 = SUB168(*(undefined1 (*) [16])(lVar16 + -0x20),0);
        FUN_100e34ae8(&stack0x00000290);
        uVar29 = uVar22;
      }
    }
    goto LAB_1009aad40;
  }
  if (unaff_x25 != 2) {
LAB_1009ab40c:
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
       (((bRam000000010b628278 - 1 < 2 ||
         ((bRam000000010b628278 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb18ee0af01b13f2cE
                             ), cVar6 != '\0')))) &&
        (uVar29 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb18ee0af01b13f2cE
                            ),
        lVar11 = 
        ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb18ee0af01b13f2cE
        , (uVar29 & 1) != 0)))) {
      lVar16 = ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb18ee0af01b13f2cE
               + 0x30;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000228;
      *(undefined8 *)(unaff_x29 + -0xa8) = 1;
      *(long *)(unaff_x29 + -0xa0) = lVar16;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar11,unaff_x29 + -0xb8);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar10 + 0x18))(puVar4,&stack0x00000260);
        if (iVar7 != 0) {
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xb8;
          *(undefined1 *)(unaff_x29 + -0x78) = 1;
          *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
          *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
          (**(code **)(puVar10 + 0x20))(puVar4,&stack0x00000290);
        }
      }
    }
    else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
            (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar10 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar10 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar10 + 0x18))(puVar4,&stack0x00000238);
      if (iVar7 != 0) {
        lVar11 = ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb18ee0af01b13f2cE
                 + 0x30;
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb4588;
        *(undefined8 *)(unaff_x29 + -0x78) = 0x59;
        *(undefined8 *)(unaff_x29 + -0xb8) = 1;
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000250;
        *(undefined8 *)(unaff_x29 + -0xa8) = 1;
        *(long *)(unaff_x29 + -0xa0) = lVar11;
        *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xb8;
        *(undefined1 *)(unaff_x29 + -0x68) = 1;
        (**(code **)(puVar10 + 0x20))(puVar4,&stack0x00000290);
      }
    }
    lVar11 = unaff_x19[1];
    if (lVar11 != 0) {
      lVar16 = unaff_x19[3];
      if (lVar16 != 0) {
        plVar18 = (long *)*unaff_x19;
        plVar20 = plVar18 + 1;
        lVar26 = *plVar18;
        uVar29 = CONCAT17(-(-1 < lVar26),
                          CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar26 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar26
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar26 >> 8)),-(-1 < (char)lVar26)))))))) &
                 0x8080808080808080;
        do {
          while (uVar29 == 0) {
            lVar26 = *plVar20;
            plVar18 = plVar18 + -0x30;
            plVar20 = plVar20 + 1;
            uVar29 = CONCAT17(-(-1 < lVar26),
                              CONCAT16(-(-1 < (char)((ulong)lVar26 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar26 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar26 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar26 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar26 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar26 >> 8)),
                                                           -(-1 < (char)lVar26)))))))) &
                     0x8080808080808080;
          }
          uVar22 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          FUN_100e34ae8(plVar18 + (long)-(int)((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3)
                                  * 6 + -5);
          uVar29 = uVar29 - 1 & uVar29;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (lVar11 * 0x31 != -0x39) {
        _free(*unaff_x19 + lVar11 * -0x30 + -0x30);
      }
    }
    FUN_100ca8e80(unaff_x19 + 0x48);
    FUN_100cdcba0(unaff_x19 + 0x49);
    uVar9 = 0;
    uVar13 = 1;
LAB_1009aba6c:
    *(undefined1 *)((long)unaff_x19 + 0x251) = uVar13;
    return uVar9;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
    unaff_x21 = (long *)&
                        __ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
    ;
    if (((bRam000000010b6281d0 - 1 < 2) ||
        ((bRam000000010b6281d0 != 0 &&
         (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
                            ), cVar6 != '\0')))) &&
       (uVar22 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
                           ), (uVar22 & 1) != 0)) goto code_r0x0001009ab1ac;
  }
  lVar16 = 
  ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar26 = *(long *)(
                      ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
                      + 0x20);
    puVar10 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar10 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar10 + 0x18))(puVar4,&stack0x00000208);
    if (iVar7 != 0) {
      lVar11 = ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
               + 0x30;
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000220;
      *(undefined1 **)(unaff_x29 + -0x78) =
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      *(undefined8 *)(unaff_x29 + -0xb8) = 1;
      *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000228;
      *(undefined8 *)(unaff_x29 + -0xa8) = 1;
      *(long *)(unaff_x29 + -0xa0) = lVar11;
      in_stack_000002c0 = 3;
      in_stack_000002b0 = *(long *)(lVar16 + 0x60);
      in_stack_000002b8 = *(long *)(lVar16 + 0x68);
      lVar11 = *(long *)(lVar16 + 0x50);
      puVar30 = *(undefined1 **)(lVar16 + 0x58);
      uVar29 = 1;
      if (lVar11 == 0) {
        uVar29 = 2;
      }
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xb8;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      in_stack_00000260 = (undefined1 *)(unaff_x29 + -0x70);
      in_stack_00000268 = &DAT_1061c2098;
      param_1 = (undefined1 *)0x1;
      if (in_stack_000002b0 == 0) {
        param_1 = (undefined1 *)0x2;
      }
      (**(code **)(puVar10 + 0x20))(puVar4,&stack0x00000290);
      in_stack_000002c8 = lVar26;
    }
  }
  goto LAB_1009ab740;
code_r0x0001009ab1ac:
  param_1 = (undefined1 *)
            (
            ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
            + 0x30);
  in_stack_00000260 = &stack0x00000250;
  in_stack_00000268 =
       &
       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
  ;
  param_2 = 
  ___ZN16codex_app_server31run_main_with_transport_options28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2697b96232d28289E
  ;
  goto code_r0x0001009ab1d0;
}

