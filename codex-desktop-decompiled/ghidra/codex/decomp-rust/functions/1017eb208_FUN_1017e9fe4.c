
/* WARNING: Removing unreachable block (ram,0x0001017e965c) */
/* WARNING: Removing unreachable block (ram,0x0001017e9678) */
/* WARNING: Removing unreachable block (ram,0x0001017eb2e4) */
/* WARNING: Removing unreachable block (ram,0x0001017e9684) */
/* WARNING: Removing unreachable block (ram,0x0001017e962c) */
/* WARNING: Removing unreachable block (ram,0x0001017e95c8) */
/* WARNING: Removing unreachable block (ram,0x0001017e95d0) */
/* WARNING: Removing unreachable block (ram,0x0001017e9638) */
/* WARNING: Removing unreachable block (ram,0x0001017e9640) */
/* WARNING: Removing unreachable block (ram,0x0001017e9774) */
/* WARNING: Removing unreachable block (ram,0x0001017e9790) */
/* WARNING: Removing unreachable block (ram,0x0001017eb2f8) */
/* WARNING: Removing unreachable block (ram,0x0001017e979c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1017e9fe4(long param_1,long param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  byte bVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar21;
  byte bVar22;
  undefined1 uVar23;
  long *extraout_x10;
  code *extraout_x11;
  undefined8 *extraout_x11_00;
  long unaff_x19;
  long *plVar24;
  long lVar25;
  long unaff_x20;
  long lVar26;
  char *unaff_x24;
  char cVar27;
  undefined8 *unaff_x25;
  undefined *puVar28;
  undefined8 *unaff_x27;
  char cVar29;
  long unaff_x29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long *in_stack_00000010;
  code *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined2 uStack0000000000000060;
  undefined6 uStack0000000000000062;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined *in_stack_000000a8;
  char *in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  undefined8 *puStack00000000000000c0;
  undefined *puStack00000000000000c8;
  undefined *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000100;
  code *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long *in_stack_00000168;
  code *in_stack_00000170;
  long in_stack_00000178;
  long *in_stack_00000180;
  code *in_stack_00000188;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  char *in_stack_000001e0;
  code *in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  undefined *in_stack_00000220;
  long *in_stack_00000228;
  code *in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  
code_r0x0001017e9fe4:
  *(char **)(unaff_x29 + -0xe0) = s_realtime_websocket_send_failed__108adcfbe;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0xd0;
  puStack00000000000000c0 = (undefined8 *)(unaff_x29 + -0xe0);
  puStack00000000000000c8 = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 ***)(unaff_x29 + -0xb8) = &stack0x000000c0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(long *)(unaff_x29 + -0xa8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar26 = *(long *)(unaff_x20 + 0x170);
    in_stack_000001e8 = *(code **)(lVar26 + 0x20);
    in_stack_000001f0 = *(long *)(lVar26 + 0x28);
    in_stack_000001e0 = (char *)0x1;
    puVar28 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar28 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000001e0);
    if (iVar17 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar26,puVar5,puVar28,&stack0x000001e0,unaff_x29 + -0xc0);
    }
  }
LAB_1017ea0cc:
  do {
    *(undefined1 *)(unaff_x19 + 0xce8) = 0;
    uVar21 = *(undefined8 *)(unaff_x19 + 0xcf0);
    *(undefined8 **)(unaff_x29 + -0xb8) = in_stack_00000068;
    *(char **)(unaff_x29 + -0xc0) = _uStack0000000000000060;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000078;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000070;
    FUN_1017b001c(&stack0x000001e0,uVar21,unaff_x29 + -0xc0);
    if (1 < (long)in_stack_000001e0 - 0x15U) {
      FUN_1017a49cc(&stack0x000001e0);
    }
    *(undefined2 *)(unaff_x19 + 0xce8) = 0;
    if (unaff_x24 != (char *)0x15) {
joined_r0x0001017eaeec:
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
        if (1 < bRam000000010b6271f8 - 1) {
          if (bRam000000010b6271f8 != 0) {
            cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b6271e8);
            unaff_x25 = &stack0x000000e8;
            if (cVar15 != '\0') goto LAB_1017eaf04;
          }
          goto LAB_1017eaffc;
        }
LAB_1017eaf04:
        uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b6271e8);
        lVar26 = lRam000000010b6271e8;
        if ((uVar18 & 1) == 0) goto LAB_1017eaffc;
        lVar31 = lRam000000010b6271e8 + 0x30;
        in_stack_000001e0 = &UNK_108ce7c6a;
        in_stack_000001e8 = (code *)0x3f;
        _uStack0000000000000060 = (char *)&stack0x000001e0;
        in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar31;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar26,unaff_x29 + -0xc0);
        lVar26 = lRam000000010b6271e8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar28 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar28 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000220);
          if (iVar17 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
          }
        }
      }
      else {
LAB_1017eaffc:
        lVar26 = lRam000000010b6271e8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000001d0 = *(undefined8 *)(lRam000000010b6271e8 + 0x20);
          in_stack_000001d8 = *(undefined8 *)(lRam000000010b6271e8 + 0x28);
          in_stack_000001c8 = 3;
          puVar28 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar28 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000001c8);
          if (iVar17 != 0) {
            *(undefined **)(unaff_x29 + -0xd0) = &UNK_108ce7c6a;
            *(undefined8 *)(unaff_x29 + -200) = 0x3f;
            *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
            *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
            lVar31 = *(long *)(lVar26 + 0x60);
            uVar32 = *(undefined8 *)(lVar26 + 0x68);
            lVar33 = *(long *)(lVar26 + 0x50);
            uVar20 = *(undefined8 *)(lVar26 + 0x58);
            uVar21 = 1;
            if (lVar33 == 0) {
              uVar21 = 2;
            }
            uVar6 = *(undefined4 *)(lVar26 + 8);
            uVar7 = *(undefined4 *)(lVar26 + 0xc);
            _uStack0000000000000060 = &stack0x00000220;
            in_stack_00000068 = (undefined8 *)CONCAT71(in_stack_00000068._1_7_,1);
            in_stack_000001e0 = (char *)&stack0x00000060;
            in_stack_000001e8 = (code *)&DAT_1061c2098;
            uVar4 = 1;
            if (lVar31 == 0) {
              uVar4 = 2;
            }
            uVar30 = unaff_x25[0x1c];
            *(undefined8 *)(unaff_x29 + -0x88) = unaff_x25[0x1d];
            *(undefined8 *)(unaff_x29 + -0x90) = uVar30;
            *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001d8;
            *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
            *(char ***)(unaff_x29 + -0x68) = &stack0x000001e0;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar21;
            *(long *)(unaff_x29 + -0xb8) = lVar33;
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar20;
            *(undefined8 *)(unaff_x29 + -0xa8) = uVar4;
            *(long *)(unaff_x29 + -0xa0) = lVar31;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar32;
            *(undefined4 *)(unaff_x29 + -0x78) = uVar6;
            *(undefined4 *)(unaff_x29 + -0x74) = uVar7;
            (**(code **)(puVar28 + 0x20))(puVar5,unaff_x29 + -0xc0);
          }
        }
      }
      FUN_1017a23d0(unaff_x19 + 0x5c0);
      FUN_1017a1214(unaff_x19 + 0x5b0);
      func_0x0001017a1e2c(unaff_x19 + 0x5b8);
      uVar21 = 0;
      uVar23 = 1;
LAB_1017eb15c:
      *(undefined1 *)(unaff_x19 + 0xce0) = uVar23;
      return uVar21;
    }
LAB_1017e91e0:
    pbVar1 = (byte *)(unaff_x19 + 0xce1);
    *(undefined1 *)(unaff_x19 + 0xce1) = 0;
    *(long *)(unaff_x19 + 0xd00) = unaff_x19 + 0x5b0;
    puVar2 = (undefined8 *)(unaff_x19 + 0xd00);
    *(undefined1 *)(unaff_x19 + 0xd10) = 0;
    *(long *)(unaff_x19 + 0xd18) = unaff_x19 + 0x5c0;
    *(byte **)(unaff_x19 + 0xcf0) = pbVar1;
    *(undefined8 **)(unaff_x19 + 0xcf8) = puVar2;
    lVar26 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    if (*(char *)(lVar26 + 0x48) != '\x01') {
      if (*(char *)(lVar26 + 0x48) == '\x02') {
        func_0x000108a82a50(&UNK_10b4cce20);
        goto LAB_1017eb3e0;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar26,&DAT_1017981a0);
      *(undefined1 *)(lVar26 + 0x48) = 1;
    }
    if (*(char *)(lVar26 + 0x44) == '\x01' && *(char *)(lVar26 + 0x45) == '\0') {
      FUN_10610bbb4(*(undefined8 *)*unaff_x27,((undefined8 *)*unaff_x27)[1]);
LAB_1017e9704:
      uVar21 = 1;
      uVar23 = 3;
      goto LAB_1017eb15c;
    }
    if ((*(uint *)(lVar26 + 0x38) & 1) == 0) {
      uVar16 = FUN_1060fcce0();
      uVar18 = extraout_x1;
    }
    else {
      uVar16 = *(uint *)(lVar26 + 0x3c);
      uVar18 = (ulong)*(uint *)(lVar26 + 0x40);
    }
    uVar16 = uVar16 ^ uVar16 << 0x11;
    uVar19 = (uint)uVar18;
    uVar16 = (uint)(uVar18 >> 0x10) & 0xffff ^ uVar16 >> 7 ^ uVar19 ^ uVar16;
    *(undefined4 *)(lVar26 + 0x38) = 1;
    *(uint *)(lVar26 + 0x3c) = uVar19;
    *(uint *)(lVar26 + 0x40) = uVar16;
    bVar22 = *pbVar1;
    puVar28 = in_stack_00000220;
    lVar31 = in_stack_00000238;
    lVar33 = in_stack_00000240;
    lVar11 = in_stack_00000248;
    lVar12 = in_stack_00000250;
    if ((int)(uVar16 + uVar19) < 0) {
      bVar9 = bVar22 & 2;
      if ((bVar22 >> 1 & 1) == 0) {
        func_0x0001017caec8(unaff_x29 + -0xc0,*(undefined8 *)(unaff_x19 + 0xd18),unaff_x27);
        if (*(long *)(unaff_x29 + -0xc0) == 8) {
          bVar22 = *pbVar1;
          goto LAB_1017e92ec;
        }
LAB_1017e96d0:
        in_stack_00000018 = *(code **)(unaff_x29 + -0xb8);
        in_stack_00000010 = *(long **)(unaff_x29 + -0xc0);
        in_stack_00000028 = *(long *)(unaff_x29 + -0xa8);
        in_stack_00000020 = *(long *)(unaff_x29 + -0xb0);
        in_stack_00000038 = *(long *)(unaff_x29 + -0x98);
        in_stack_00000030 = *(long *)(unaff_x29 + -0xa0);
        in_stack_00000040 = *(long *)(unaff_x29 + -0x90);
        bVar22 = 2;
        puVar28 = (undefined *)0x8;
      }
      else {
LAB_1017e92ec:
        if ((bVar22 & 1) != 0) goto LAB_1017e96f8;
        bVar22 = *(byte *)(unaff_x19 + 0xd10);
        if (1 < bVar22) {
          if (bVar22 != 3) goto LAB_1017eb3c4;
          plVar24 = *(long **)(unaff_x19 + 0xd08);
          cVar15 = *(char *)(lVar26 + 0x48);
          if (cVar15 != '\x01') goto LAB_1017e94a8;
          goto LAB_1017e94d8;
        }
        if (bVar22 != 0) goto LAB_1017eb3d4;
        plVar24 = (long *)*puVar2;
        *(long **)(unaff_x19 + 0xd08) = plVar24;
        cVar15 = *(char *)(lVar26 + 0x48);
        if (cVar15 == '\x01') {
LAB_1017e94d8:
          cVar27 = *(char *)(lVar26 + 0x44);
          cVar29 = *(char *)(lVar26 + 0x45);
          cVar15 = cVar29;
          if (cVar27 != '\x01') {
LAB_1017e94f4:
            *(char *)(lVar26 + 0x45) = cVar15;
            goto LAB_1017e94fc;
          }
          if (cVar29 != '\0') {
            cVar15 = cVar29 + -1;
            goto LAB_1017e94f4;
          }
          FUN_10610bbb4(*(undefined8 *)*unaff_x27,((undefined8 *)*unaff_x27)[1]);
          *(undefined1 *)(unaff_x29 + -0xbe) = 0;
          *(undefined2 *)(unaff_x29 + -0xc0) = 0;
          __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                    (unaff_x29 - 0xc0U | 1);
          goto LAB_1017eada8;
        }
LAB_1017e94a8:
        cVar27 = '\0';
        cVar29 = '\0';
        if (cVar15 != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar26,&DAT_1017981a0);
          *(undefined1 *)(lVar26 + 0x48) = 1;
          goto LAB_1017e94d8;
        }
LAB_1017e94fc:
        uStack0000000000000060 = CONCAT11(cVar29,cVar27);
        lVar25 = *plVar24;
        func_0x0001017af414(&stack0x00000220,lVar25 + 0x1a0,lVar25 + 0x80);
        if (in_stack_00000220 == (undefined *)0x8) {
          __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                    (lVar25 + 0x100,*unaff_x27);
          func_0x0001017af414(&stack0x00000220,lVar25 + 0x1a0,lVar25 + 0x80);
          if ((*(char *)(lVar25 + 0x1b8) != '\x01') ||
             (puVar28 = (undefined *)0x7, lVar31 = in_stack_000001f0, lVar33 = in_stack_000001f8,
             lVar11 = in_stack_00000200, lVar12 = in_stack_00000208, lVar13 = in_stack_00000210,
             *(ulong *)(lVar25 + 0x1e8) != *(ulong *)(lVar25 + 0x1e0) >> 1)) {
            if (cVar27 != '\0') {
              if (*(char *)(lVar26 + 0x48) != '\x01') {
                if (*(char *)(lVar26 + 0x48) == '\x02') goto LAB_1017eada8;
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar26,&DAT_1060edbcc);
                *(undefined1 *)(lVar26 + 0x48) = 1;
              }
              *(undefined1 *)(lVar26 + 0x44) = 1;
              *(char *)(lVar26 + 0x45) = cVar29;
            }
LAB_1017eada8:
            uVar23 = 3;
            *(undefined1 *)(unaff_x19 + 0xd10) = 3;
            uVar21 = 1;
            goto LAB_1017eb15c;
          }
        }
        else if (in_stack_00000220 == (undefined *)0x7) {
          lVar31 = in_stack_000001f0;
          lVar33 = in_stack_000001f8;
          lVar11 = in_stack_00000200;
          lVar12 = in_stack_00000208;
          lVar13 = in_stack_00000210;
          if (*(ulong *)(lVar25 + 0x1e8) != *(ulong *)(lVar25 + 0x1e0) >> 1) goto LAB_1017e9558;
        }
        else {
          *(long **)(unaff_x29 + -0xb8) = in_stack_00000228;
          *(undefined **)(unaff_x29 + -0xc0) = in_stack_00000220;
          *(long *)(unaff_x29 + -0xa8) = in_stack_00000238;
          *(code **)(unaff_x29 + -0xb0) = in_stack_00000230;
          *(long *)(unaff_x29 + -0x98) = in_stack_00000248;
          *(long *)(unaff_x29 + -0xa0) = in_stack_00000240;
          *(long *)(unaff_x29 + -0x88) = in_stack_00000258;
          *(long *)(unaff_x29 + -0x90) = in_stack_00000250;
          pcVar3 = (char *)(lVar25 + 0x1c0);
          if (*pcVar3 == '\0') {
            *pcVar3 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar3,extraout_x1_01,1000000000);
          }
          FUN_1060fa678(pcVar3,1,pcVar3);
          in_stack_000001e0 = (char *)in_stack_00000228;
          in_stack_000001e8 = in_stack_00000230;
          lVar13 = in_stack_00000258;
        }
LAB_1017e97cc:
        in_stack_00000040 = lVar13;
        in_stack_00000038 = lVar12;
        in_stack_00000030 = lVar11;
        in_stack_00000028 = lVar33;
        in_stack_00000020 = lVar31;
        bVar22 = 1;
        *(undefined1 *)(unaff_x19 + 0xd10) = 1;
        in_stack_00000018 = in_stack_000001e8;
        in_stack_00000010 = (long *)in_stack_000001e0;
        in_stack_000001f0 = in_stack_00000020;
        in_stack_000001f8 = in_stack_00000028;
        in_stack_00000200 = in_stack_00000030;
        in_stack_00000208 = in_stack_00000038;
        in_stack_00000210 = in_stack_00000040;
      }
      *pbVar1 = *pbVar1 | bVar22;
    }
    else {
      bVar9 = bVar22 & 1;
      if ((bVar22 & 1) == 0) {
        bVar22 = *(byte *)(unaff_x19 + 0xd10);
        if (bVar22 < 2) {
          if (bVar22 == 0) {
            plVar24 = (long *)*puVar2;
            *(long **)(unaff_x19 + 0xd08) = plVar24;
            cVar15 = *(char *)(lVar26 + 0x48);
            if (cVar15 != '\x01') goto LAB_1017e9348;
LAB_1017e93a0:
            cVar29 = *(char *)(lVar26 + 0x44);
            cVar27 = *(char *)(lVar26 + 0x45);
            cVar15 = cVar27;
            if (cVar29 == '\x01') goto LAB_1017e93b4;
            goto LAB_1017e93bc;
          }
LAB_1017eb3d4:
          func_0x000108a07af4(&UNK_10b25a428);
          goto LAB_1017eb3e0;
        }
        if (bVar22 != 3) {
LAB_1017eb3c4:
          func_0x000108a07b10(&UNK_10b25a428);
          goto LAB_1017eb3e0;
        }
        plVar24 = *(long **)(unaff_x19 + 0xd08);
        cVar15 = *(char *)(lVar26 + 0x48);
        if (cVar15 == '\x01') goto LAB_1017e93a0;
LAB_1017e9348:
        cVar29 = '\0';
        cVar27 = '\0';
        if (cVar15 != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar26,&DAT_1017981a0);
          *(undefined1 *)(lVar26 + 0x48) = 1;
          cVar29 = *(char *)(lVar26 + 0x44);
          cVar27 = *(char *)(lVar26 + 0x45);
          cVar15 = cVar27;
          if (cVar29 != '\x01') {
LAB_1017e93bc:
            *(char *)(lVar26 + 0x45) = cVar15;
            goto LAB_1017e93c0;
          }
LAB_1017e93b4:
          if (cVar27 != '\0') {
            cVar15 = cVar27 + -1;
            goto LAB_1017e93bc;
          }
          FUN_10610bbb4(*(undefined8 *)*unaff_x27,((undefined8 *)*unaff_x27)[1]);
          goto LAB_1017e96a4;
        }
LAB_1017e93c0:
        uStack0000000000000060 = CONCAT11(cVar27,cVar29);
        lVar25 = *plVar24;
        func_0x0001017af414(&stack0x00000220,lVar25 + 0x1a0,lVar25 + 0x80);
        if (in_stack_00000220 == (undefined *)0x7) {
          lVar31 = in_stack_000001f0;
          lVar33 = in_stack_000001f8;
          lVar11 = in_stack_00000200;
          lVar12 = in_stack_00000208;
          lVar13 = in_stack_00000210;
          if (*(ulong *)(lVar25 + 0x1e8) == *(ulong *)(lVar25 + 0x1e0) >> 1) goto LAB_1017e97cc;
LAB_1017e9558:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce4be3,0x30,&UNK_10b25a3b0);
          goto LAB_1017eb3e0;
        }
        if (in_stack_00000220 == (undefined *)0x8) {
          __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                    (lVar25 + 0x100,*unaff_x27);
          func_0x0001017af414(&stack0x00000220,lVar25 + 0x1a0,lVar25 + 0x80);
          if ((*(char *)(lVar25 + 0x1b8) != '\x01') ||
             (puVar28 = (undefined *)0x7, lVar31 = in_stack_000001f0, lVar33 = in_stack_000001f8,
             lVar11 = in_stack_00000200, lVar12 = in_stack_00000208, lVar13 = in_stack_00000210,
             *(ulong *)(lVar25 + 0x1e8) != *(ulong *)(lVar25 + 0x1e0) >> 1)) {
            if (cVar29 != '\0') {
              if (*(char *)(lVar26 + 0x48) != '\x01') {
                if (*(char *)(lVar26 + 0x48) == '\x02') goto LAB_1017e96a4;
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (lVar26,&DAT_1060edbcc);
                *(undefined1 *)(lVar26 + 0x48) = 1;
              }
              *(undefined1 *)(lVar26 + 0x44) = 1;
              *(char *)(lVar26 + 0x45) = cVar27;
            }
LAB_1017e96a4:
            *(undefined1 *)(unaff_x19 + 0xd10) = 3;
            bVar22 = *pbVar1;
            goto LAB_1017e96b0;
          }
        }
        else {
          *(long **)(unaff_x29 + -0xb8) = in_stack_00000228;
          *(undefined **)(unaff_x29 + -0xc0) = in_stack_00000220;
          *(long *)(unaff_x29 + -0xa8) = in_stack_00000238;
          *(code **)(unaff_x29 + -0xb0) = in_stack_00000230;
          *(long *)(unaff_x29 + -0x98) = in_stack_00000248;
          *(long *)(unaff_x29 + -0xa0) = in_stack_00000240;
          *(long *)(unaff_x29 + -0x88) = in_stack_00000258;
          *(long *)(unaff_x29 + -0x90) = in_stack_00000250;
          pcVar3 = (char *)(lVar25 + 0x1c0);
          if (*pcVar3 == '\0') {
            *pcVar3 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar3,extraout_x1_00,1000000000);
          }
          FUN_1060fa678(pcVar3,1,pcVar3);
          in_stack_000001e0 = (char *)in_stack_00000228;
          in_stack_000001e8 = in_stack_00000230;
          lVar13 = in_stack_00000258;
        }
        goto LAB_1017e97cc;
      }
LAB_1017e96b0:
      if ((bVar22 >> 1 & 1) == 0) {
        func_0x0001017caec8(unaff_x29 + -0xc0,*(undefined8 *)(unaff_x19 + 0xd18),unaff_x27);
        if (*(long *)(unaff_x29 + -0xc0) != 8) goto LAB_1017e96d0;
        goto LAB_1017e9704;
      }
LAB_1017e96f8:
      puVar28 = (undefined *)0x9;
      if (bVar9 == 0) goto LAB_1017e9704;
    }
    *(undefined **)(unaff_x19 + 0xb70) = puVar28;
    *(long *)(unaff_x19 + 0xba8) = in_stack_00000040;
    *(code **)(unaff_x19 + 0xb80) = in_stack_00000018;
    *(long **)(unaff_x19 + 0xb78) = in_stack_00000010;
    *(long *)(unaff_x19 + 0xb90) = in_stack_00000028;
    *(long *)(unaff_x19 + 0xb88) = in_stack_00000020;
    *(long *)(unaff_x19 + 0xba0) = in_stack_00000038;
    *(long *)(unaff_x19 + 0xb98) = in_stack_00000030;
    puVar5 = (undefined *)0x0;
    if ((undefined *)0x6 < puVar28) {
      puVar5 = puVar28 + -7;
    }
    if (puVar5 != (undefined *)0x0) {
      unaff_x25 = &stack0x000000e8;
      if (puVar5 != (undefined *)0x1) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ce7c35,0x6b,&UNK_10b25c378);
LAB_1017eb3e0:
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1017eb3e4);
        (*pcVar14)();
      }
      *(code **)(unaff_x19 + 0xc38) = in_stack_00000018;
      *(long **)(unaff_x19 + 0xc30) = in_stack_00000010;
      *(long *)(unaff_x19 + 0xc48) = in_stack_00000028;
      *(long *)(unaff_x19 + 0xc40) = in_stack_00000020;
      *(long *)(unaff_x19 + 0xc58) = in_stack_00000038;
      *(long *)(unaff_x19 + 0xc50) = in_stack_00000030;
      *(long *)(unaff_x19 + 0xc60) = in_stack_00000040;
      if (*(long *)(unaff_x19 + 0xc30) == 7) goto joined_r0x0001017eaeec;
      *(undefined1 *)(unaff_x19 + 0xce2) = 1;
      *(long *)(unaff_x19 + 0xc98) = in_stack_00000040;
      *(code **)(unaff_x19 + 0xc70) = in_stack_00000018;
      *(long **)(unaff_x19 + 0xc68) = in_stack_00000010;
      *(long *)(unaff_x19 + 0xc80) = in_stack_00000028;
      *(long *)(unaff_x19 + 0xc78) = in_stack_00000020;
      *(long *)(unaff_x19 + 0xc90) = in_stack_00000038;
      *(long *)(unaff_x19 + 0xc88) = in_stack_00000030;
      uVar18 = *(ulong *)(unaff_x19 + 0xc68);
      if (2 < (long)uVar18) {
        if (uVar18 - 4 < 2) {
LAB_1017e9ae4:
          *(undefined1 *)(unaff_x19 + 0xce2) = 0;
          *(undefined1 *)(unaff_x19 + 0xce4) = 1;
          extraout_x10[1] = (long)in_stack_00000018;
          *extraout_x10 = (long)in_stack_00000010;
          extraout_x10[3] = in_stack_00000028;
          extraout_x10[2] = in_stack_00000020;
          extraout_x10[5] = in_stack_00000038;
          extraout_x10[4] = in_stack_00000030;
          extraout_x10[6] = in_stack_00000040;
          lVar26 = *(long *)(unaff_x19 + 0xcf8);
          *(bool *)(unaff_x19 + 0xcf0) = lVar26 == 4;
          if (lVar26 < 2) {
            if (lVar26 == 0) {
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                  ((bRam000000010b627198 - 1 < 2 ||
                   ((bRam000000010b627198 != 0 &&
                    (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (0x10b627188), cVar15 != '\0')))))) &&
                 (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (lRam000000010b627188), (uVar18 & 1) != 0)) {
                lVar26 = lRam000000010b627188 + 0x30;
                in_stack_000001e0 = &stack0x00000220;
                in_stack_000001e8 = (code *)&UNK_10b25b0a0;
                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                *(char ***)(unaff_x29 + -0xb8) = &stack0x000001e0;
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(long *)(unaff_x29 + -0xa8) = lVar26;
                FUN_1017ebbbc(unaff_x29 + -0xc0);
              }
              else {
                lVar26 = lRam000000010b627188;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000158 = *(undefined8 *)(lRam000000010b627188 + 0x20);
                  in_stack_00000160 = *(undefined8 *)(lRam000000010b627188 + 0x28);
                  in_stack_00000150 = 5;
                  puVar28 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar28 = &UNK_10b3c24c8;
                  }
                  puVar5 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar5 = &UNK_109adfc03;
                  }
                  iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000150);
                  if (iVar17 != 0) {
                    lVar31 = lRam000000010b627188 + 0x30;
                    in_stack_000001e0 = &UNK_108ce7bb7;
                    in_stack_000001e8 = (code *)0x4d;
                    _uStack0000000000000060 = (char *)&stack0x000001e0;
                    in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
                    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                    *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
                    *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                    *(long *)(unaff_x29 + -0xa8) = lVar31;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
                  }
                }
              }
            }
            else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
                    (((bRam000000010b627270 - 1 < 2 ||
                      ((bRam000000010b627270 != 0 &&
                       (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (0x10b627260), cVar15 != '\0')))) &&
                     (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (lRam000000010b627260), (uVar18 & 1) != 0)))) {
              in_stack_000001e0 = &UNK_108ce7bdd;
              in_stack_000001e8 = (code *)0x67;
              _uStack0000000000000060 = *(char **)(unaff_x19 + 0xd10);
              *(char ***)(unaff_x29 + -0xc0) = &stack0x000001e0;
              *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25b0a0;
              *(undefined2 **)(unaff_x29 + -0xb0) = &stack0x00000060;
              *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b25c358;
              FUN_1017eba80(&stack0x00000220);
            }
            else {
              lVar26 = lRam000000010b627260;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                in_stack_00000170 = *(code **)(lRam000000010b627260 + 0x20);
                in_stack_00000178 = *(long *)(lRam000000010b627260 + 0x28);
                in_stack_00000168 = (long *)0x1;
                puVar28 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar28 = &UNK_10b3c24c8;
                }
                puVar5 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000168);
                lVar31 = in_stack_00000178;
                if (iVar17 != 0) {
                  _uStack0000000000000060 =
                       "realtime websocket received unexpected binary framerealtime websocket received raw frameall branches are disabled and there is no else branchrealtime websocket pump exitingtranscriptionaudio/pcmSessionAudioInput"
                  ;
                  in_stack_00000068 = (undefined8 *)0x67;
                  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x19 + 0xd10);
                  *(undefined2 **)(unaff_x29 + -0xc0) = &stack0x00000060;
                  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25b0a0;
                  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xd0;
                  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b25c358;
                  in_stack_000001e8 = in_stack_00000170;
                  in_stack_000001e0 = (char *)in_stack_00000168;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar26,puVar5,puVar28,&stack0x000001e0,&stack0x00000220);
                  in_stack_000001f0 = lVar31;
                }
              }
            }
          }
          else if (1 < lVar26 - 2U) {
            if (lVar26 == 4) {
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
                 (((bRam000000010b627258 - 1 < 2 ||
                   ((bRam000000010b627258 != 0 &&
                    (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (0x10b627248), cVar15 != '\0')))) &&
                  (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (lRam000000010b627248), (uVar18 & 1) != 0)))) {
                sVar8 = *(short *)(unaff_x19 + 0xd20);
                if (sVar8 == 0x12) {
                  in_stack_000001e0 = (char *)0x0;
                  in_stack_000001e8 = extraout_x11;
                }
                else {
                  *(undefined2 *)(unaff_x29 + -0xde) = *(undefined2 *)(unaff_x19 + 0xd22);
                  in_stack_000001e0 = *(char **)(unaff_x19 + 0xd08);
                  in_stack_000001e8 = *(code **)(unaff_x19 + 0xd10);
                }
                *(short *)(unaff_x29 + -0xe0) = sVar8;
                *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xe0;
                *(undefined **)(unaff_x29 + -0xb8) = &DAT_1017b61e0;
                *(char ***)(unaff_x29 + -0xb0) = &stack0x000001e0;
                *(undefined **)(unaff_x29 + -0xa8) = &DAT_1017b606c;
                in_stack_00000068 = (undefined8 *)(unaff_x29 + -0xc0);
                _uStack0000000000000060 = s__realtime_websocket_received_clo_108add030;
                *(undefined2 **)(unaff_x29 + -0xd0) = &stack0x00000060;
                *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
                FUN_1017eb948(&stack0x00000220);
              }
              else {
                lVar26 = lRam000000010b627248;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_00000188 = *(code **)(lRam000000010b627248 + 0x20);
                  in_stack_00000190 = *(long *)(lRam000000010b627248 + 0x28);
                  in_stack_00000180 = (long *)0x3;
                  puVar28 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar28 = &UNK_10b3c24c8;
                  }
                  puVar5 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar5 = &UNK_109adfc03;
                  }
                  iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000180);
                  lVar31 = in_stack_00000190;
                  if (iVar17 != 0) {
                    if (*(short *)(unaff_x19 + 0xd20) == 0x12) {
                      _uStack0000000000000060 = (char *)0x0;
                      in_stack_00000068 = extraout_x11_00;
                    }
                    else {
                      puStack00000000000000c0 =
                           (undefined8 *)
                           ((ulong)CONCAT42(puStack00000000000000c0._4_4_,
                                            *(undefined2 *)(unaff_x19 + 0xd22)) << 0x10);
                      _uStack0000000000000060 = *(char **)(unaff_x19 + 0xd08);
                      in_stack_00000068 = *(undefined8 **)(unaff_x19 + 0xd10);
                    }
                    puStack00000000000000c0 =
                         (undefined8 *)
                         CONCAT62(puStack00000000000000c0._2_6_,*(short *)(unaff_x19 + 0xd20));
                    *(undefined8 ***)(unaff_x29 + -0xc0) = &stack0x000000c0;
                    *(undefined **)(unaff_x29 + -0xb8) = &DAT_1017b61e0;
                    *(undefined2 **)(unaff_x29 + -0xb0) = &stack0x00000060;
                    *(undefined **)(unaff_x29 + -0xa8) = &DAT_1017b606c;
                    *(char **)(unaff_x29 + -0xd0) = s__realtime_websocket_received_clo_108add030;
                    *(long *)(unaff_x29 + -200) = unaff_x29 + -0xc0;
                    *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
                    *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
                    in_stack_000001e8 = in_stack_00000188;
                    in_stack_000001e0 = (char *)in_stack_00000180;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar26,puVar5,puVar28,&stack0x000001e0,&stack0x00000220);
                    in_stack_000001f0 = lVar31;
                  }
                }
              }
            }
            else if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                     ((bRam000000010b6271e0 - 1 < 2 ||
                      ((bRam000000010b6271e0 != 0 &&
                       (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (0x10b6271d0), cVar15 != '\0')))))) &&
                    (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (lRam000000010b6271d0), (uVar18 & 1) != 0)) {
              lVar26 = lRam000000010b6271d0 + 0x30;
              in_stack_000001e0 = &stack0x00000220;
              in_stack_000001e8 = (code *)&UNK_10b25b0a0;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(char ***)(unaff_x29 + -0xb8) = &stack0x000001e0;
              *(undefined8 *)(unaff_x29 + -0xb0) = 1;
              *(long *)(unaff_x29 + -0xa8) = lVar26;
              FUN_1017ebf68(unaff_x29 + -0xc0);
            }
            else {
              lVar26 = lRam000000010b6271d0;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_000001a0 = *(undefined8 *)(lRam000000010b6271d0 + 0x20);
                in_stack_000001a8 = *(undefined8 *)(lRam000000010b6271d0 + 0x28);
                in_stack_00000198 = 5;
                puVar28 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar28 = &UNK_10b3c24c8;
                }
                puVar5 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000198);
                if (iVar17 != 0) {
                  lVar31 = lRam000000010b6271d0 + 0x30;
                  in_stack_000001e0 = &UNK_108ce7c10;
                  in_stack_000001e8 = (code *)0x4b;
                  _uStack0000000000000060 = (char *)&stack0x000001e0;
                  in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
                  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                  *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
                  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                  *(long *)(unaff_x29 + -0xa8) = lVar31;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
                }
              }
            }
          }
          *(undefined1 *)(unaff_x19 + 0xce4) = 0;
          lVar26 = *extraout_x10;
          lVar33 = extraout_x10[3];
          lVar31 = extraout_x10[2];
          *(long *)(unaff_x19 + 0xd38) = extraout_x10[1];
          *(long *)(unaff_x19 + 0xd30) = lVar26;
          *(long *)(unaff_x19 + 0xd48) = lVar33;
          *(long *)(unaff_x19 + 0xd40) = lVar31;
          lVar26 = extraout_x10[4];
          *(long *)(unaff_x19 + 0xd58) = extraout_x10[5];
          *(long *)(unaff_x19 + 0xd50) = lVar26;
          *(long *)(unaff_x19 + 0xd60) = extraout_x10[6];
          *(long *)(unaff_x19 + 0xd68) = unaff_x19 + 0x5b8;
          *(undefined8 *)(unaff_x19 + 0xd70) = 0;
          FUN_1017b7ee4(unaff_x29 + -0xc0,unaff_x19 + 0xd30,*unaff_x27);
          if (*(long *)(unaff_x29 + -0xc0) == 8) {
            uVar21 = 1;
            uVar23 = 8;
            goto LAB_1017eb15c;
          }
          in_stack_00000228 = *(long **)(unaff_x29 + -0xb8);
          lVar26 = *(long *)(unaff_x29 + -0xc0);
          in_stack_00000238 = *(long *)(unaff_x29 + -0xa8);
          in_stack_00000230 = *(code **)(unaff_x29 + -0xb0);
          in_stack_00000248 = *(long *)(unaff_x29 + -0x98);
          in_stack_00000240 = *(long *)(unaff_x29 + -0xa0);
          in_stack_00000250 = *(long *)(unaff_x29 + -0x90);
          FUN_1017a1b44(unaff_x19 + 0xd30);
          if (lVar26 == 7) {
            if ((*(byte *)(unaff_x19 + 0xcf0) & 1) == 0) {
              *(undefined1 *)(unaff_x19 + 0xce4) = 0;
              in_stack_00000220 = (undefined *)0x7;
              goto LAB_1017e9178;
            }
          }
          else if (lVar26 == 6) {
            FUN_1017a49cc((ulong)&stack0x00000220 | 8);
          }
          else if ((lVar26 != 4) || ((short)in_stack_00000248 != 0x12)) {
            (*(code *)in_stack_00000228[4])(&stack0x00000240,in_stack_00000230,in_stack_00000238);
          }
          *(undefined1 *)(unaff_x19 + 0xce4) = 0;
          lVar26 = *(long *)(unaff_x19 + 0xc68);
        }
        else {
          if (uVar18 == 3) goto LAB_1017e9178;
          *(undefined1 *)(unaff_x19 + 0xce3) = 1;
          plVar24 = (long *)(unaff_x19 + 0xd38);
          *(long *)(unaff_x19 + 0xd40) = in_stack_00000020;
          *plVar24 = (long)in_stack_00000018;
          *(long *)(unaff_x19 + 0xd50) = in_stack_00000030;
          *(long *)(unaff_x19 + 0xd48) = in_stack_00000028;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
              ((bRam000000010b6271b0 - 1 < 2 ||
               ((bRam000000010b6271b0 != 0 &&
                (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (0x10b6271a0), cVar15 != '\0')))))) &&
             (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (lRam000000010b6271a0), (uVar18 & 1) != 0)) {
            lVar26 = lRam000000010b6271a0 + 0x30;
            in_stack_000001e8 = (code *)&stack0x00000220;
            in_stack_000001e0 = s__realtime_websocket_receive_fail_108add06b;
            _uStack0000000000000060 = (char *)&stack0x000001e0;
            in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar26;
            FUN_1017ebcf4(unaff_x29 + -0xc0);
          }
          else {
            lVar26 = lRam000000010b6271a0;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              in_stack_000001b8 = *(undefined8 *)(lRam000000010b6271a0 + 0x20);
              in_stack_000001c0 = *(undefined8 *)(lRam000000010b6271a0 + 0x28);
              in_stack_000001b0 = 1;
              puVar28 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar28 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000001b0);
              if (iVar17 != 0) {
                lVar31 = lRam000000010b6271a0 + 0x30;
                in_stack_000001e8 =
                     __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
                ;
                in_stack_00000068 = &stack0x000001e0;
                _uStack0000000000000060 = s__realtime_websocket_receive_fail_108add06b;
                *(undefined2 **)(unaff_x29 + -0xd0) = &stack0x00000060;
                *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
                *(undefined8 *)(unaff_x29 + -0xc0) = 1;
                *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
                *(undefined8 *)(unaff_x29 + -0xb0) = 1;
                *(long *)(unaff_x29 + -0xa8) = lVar31;
                in_stack_000001e0 = (char *)plVar24;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
              }
            }
          }
          *(undefined1 *)(unaff_x19 + 0xce3) = 0;
          *(undefined8 *)(unaff_x19 + 0xcf0) = 6;
          lVar26 = *plVar24;
          lVar33 = *(long *)(unaff_x19 + 0xd50);
          lVar31 = *(long *)(unaff_x19 + 0xd48);
          extraout_x10[1] = *(long *)(unaff_x19 + 0xd40);
          *extraout_x10 = lVar26;
          extraout_x10[3] = lVar33;
          extraout_x10[2] = lVar31;
          *(long *)(unaff_x19 + 0xd28) = unaff_x19 + 0x5b8;
          *(undefined8 *)(unaff_x19 + 0xd30) = 0;
          FUN_1017b7ee4(unaff_x29 + -0xc0,unaff_x19 + 0xcf0,*unaff_x27);
          if (*(long *)(unaff_x29 + -0xc0) == 8) {
            uVar21 = 1;
            uVar23 = 9;
            goto LAB_1017eb15c;
          }
          lVar31 = *(long *)(unaff_x29 + -0xb8);
          lVar26 = *(long *)(unaff_x29 + -0xc0);
          uVar20 = *(undefined8 *)(unaff_x29 + -0xa8);
          uVar32 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar21 = *(undefined8 *)(unaff_x29 + -0x98);
          FUN_1017a1b44(unaff_x19 + 0xcf0);
          if (lVar26 != 7) {
            if (lVar26 == 6) {
              FUN_1017a49cc((ulong)&stack0x00000220 | 8);
            }
            else if ((lVar26 != 4) || ((short)uVar21 != 0x12)) {
              (**(code **)(lVar31 + 0x20))(&stack0x00000240,uVar32,uVar20);
            }
          }
          *(undefined1 *)(unaff_x19 + 0xce3) = 0;
          lVar26 = *(long *)(unaff_x19 + 0xc68);
        }
joined_r0x0001017ea818:
        if (lVar26 == 6) {
          unaff_x25 = &stack0x000000e8;
          *(undefined1 *)(unaff_x19 + 0xce2) = 0;
        }
        else {
          unaff_x25 = &stack0x000000e8;
          if (((lVar26 != 2) && ((*(byte *)(unaff_x19 + 0xce2) & 1) != 0)) &&
             ((lVar26 != 4 || (*(short *)(unaff_x19 + 0xc90) != 0x12)))) {
            (**(code **)(*(long *)(unaff_x19 + 0xc70) + 0x20))
                      (unaff_x19 + 0xc88,*(undefined8 *)(unaff_x19 + 0xc78),
                       *(undefined8 *)(unaff_x19 + 0xc80));
          }
          *(undefined1 *)(unaff_x19 + 0xce2) = 0;
          *(undefined1 *)(unaff_x19 + 0xce2) = 0;
        }
        goto joined_r0x0001017eaeec;
      }
      if (uVar18 < 2) goto LAB_1017e9ae4;
      *(undefined1 *)(unaff_x19 + 0xce6) = 1;
      *(long *)(unaff_x19 + 0xca8) = in_stack_00000020;
      *(code **)(unaff_x19 + 0xca0) = in_stack_00000018;
      *(long *)(unaff_x19 + 0xcb8) = in_stack_00000030;
      *(long *)(unaff_x19 + 0xcb0) = in_stack_00000028;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b627240 - 1 < 2 ||
           ((bRam000000010b627240 != 0 &&
            (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b627230), cVar15 != '\0')))) &&
          (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b627230), (uVar18 & 1) != 0)))) {
        in_stack_00000238 = lRam000000010b627230 + 0x30;
        in_stack_000001e0 = &UNK_108ce7b97;
        in_stack_000001e8 = (code *)0x41;
        _uStack0000000000000060 = *(char **)(unaff_x19 + 0xcb0);
        *(char ***)(unaff_x29 + -0xc0) = &stack0x000001e0;
        *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25b0a0;
        *(undefined2 **)(unaff_x29 + -0xb0) = &stack0x00000060;
        *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b25c358;
        in_stack_00000228 = (long *)(unaff_x29 + -0xc0);
        in_stack_00000220 = (undefined *)0x1;
        in_stack_00000230 = (code *)0x2;
        FUN_1017eb810(&stack0x00000220);
      }
      else {
        lVar26 = lRam000000010b627230;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000108 = *(code **)(lRam000000010b627230 + 0x20);
          in_stack_00000110 = *(long *)(lRam000000010b627230 + 0x28);
          in_stack_00000100 = (long *)0x5;
          puVar28 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar28 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000100);
          lVar31 = in_stack_00000110;
          if (iVar17 != 0) {
            in_stack_00000238 = lRam000000010b627230 + 0x30;
            _uStack0000000000000060 =
                 "realtime websocket received pingrealtime websocket received text framerealtime websocket received unexpected binary framerealtime websocket received raw frameall branches are disabled and there is no else branchrealtime websocket pump exitingtranscriptionaudio/pcmSessionAudioInput"
            ;
            in_stack_00000068 = (undefined8 *)0x41;
            *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x19 + 0xcb0);
            *(undefined2 **)(unaff_x29 + -0xc0) = &stack0x00000060;
            *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b25b0a0;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xd0;
            *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b25c358;
            in_stack_00000228 = (long *)(unaff_x29 + -0xc0);
            in_stack_00000220 = (undefined *)0x1;
            in_stack_00000230 = (code *)0x2;
            in_stack_000001e8 = in_stack_00000108;
            in_stack_000001e0 = (char *)in_stack_00000100;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar26,puVar5,puVar28,&stack0x000001e0,&stack0x00000220);
            in_stack_000001f0 = lVar31;
          }
        }
      }
      *(undefined1 *)(unaff_x19 + 0xce6) = 0;
      *(undefined8 *)(unaff_x19 + 0xcf0) = 3;
      lVar26 = *(long *)(unaff_x19 + 0xca0);
      lVar33 = *(long *)(unaff_x19 + 0xcb8);
      lVar31 = *(long *)(unaff_x19 + 0xcb0);
      extraout_x10[1] = *(long *)(unaff_x19 + 0xca8);
      *extraout_x10 = lVar26;
      extraout_x10[3] = lVar33;
      extraout_x10[2] = lVar31;
      *(long *)(unaff_x19 + 0xd28) = unaff_x19 + 0x5c0;
      FUN_1017cf34c(&stack0x00000118,unaff_x19 + 0xcf0,unaff_x27);
      if (in_stack_00000118 == 0x16) {
        uVar21 = 1;
        uVar23 = 6;
        goto LAB_1017eb15c;
      }
      *(undefined8 *)(unaff_x19 + 0xcc8) = in_stack_00000120;
      *(long *)(unaff_x19 + 0xcc0) = in_stack_00000118;
      *(undefined8 *)(unaff_x19 + 0xcd8) = in_stack_00000130;
      *(undefined8 *)(unaff_x19 + 0xcd0) = in_stack_00000128;
      if ((*(long *)(unaff_x19 + 0xcf0) != 6) &&
         ((*(long *)(unaff_x19 + 0xcf0) != 4 || (*(short *)(unaff_x19 + 0xd18) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0xcf8) + 0x20))
                  (unaff_x19 + 0xd10,*(undefined8 *)(unaff_x19 + 0xd00),
                   *(undefined8 *)(unaff_x19 + 0xd08));
      }
      if (*(long *)(unaff_x19 + 0xcc0) != 0x15) {
        *(undefined1 *)(unaff_x19 + 0xce5) = 1;
        plVar24 = (long *)(unaff_x19 + 0xd38);
        *(undefined8 *)(unaff_x19 + 0xd40) = *(undefined8 *)(unaff_x19 + 0xcc8);
        *plVar24 = *(long *)(unaff_x19 + 0xcc0);
        *(undefined8 *)(unaff_x19 + 0xd50) = *(undefined8 *)(unaff_x19 + 0xcd8);
        *(undefined8 *)(unaff_x19 + 0xd48) = *(undefined8 *)(unaff_x19 + 0xcd0);
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
            ((bRam000000010b627228 - 1 < 2 ||
             ((bRam000000010b627228 != 0 &&
              (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (0x10b627218), cVar15 != '\0')))))) &&
           (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b627218), (uVar18 & 1) != 0)) {
          lVar26 = lRam000000010b627218 + 0x30;
          in_stack_000001e8 = (code *)&stack0x00000220;
          in_stack_000001e0 = s__realtime_websocket_failed_to_se_108add005;
          _uStack0000000000000060 = (char *)&stack0x000001e0;
          in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(long *)(unaff_x29 + -0xa8) = lVar26;
          FUN_1017eb6d4(unaff_x29 + -0xc0);
        }
        else {
          lVar26 = lRam000000010b627218;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            in_stack_00000140 = *(undefined8 *)(lRam000000010b627218 + 0x20);
            in_stack_00000148 = *(undefined8 *)(lRam000000010b627218 + 0x28);
            in_stack_00000138 = 1;
            puVar28 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar28 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000138);
            if (iVar17 != 0) {
              lVar31 = lRam000000010b627218 + 0x30;
              in_stack_000001e8 =
                   __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
              ;
              in_stack_00000068 = &stack0x000001e0;
              _uStack0000000000000060 = s__realtime_websocket_failed_to_se_108add005;
              *(undefined2 **)(unaff_x29 + -0xd0) = &stack0x00000060;
              *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
              *(undefined8 *)(unaff_x29 + -0xb0) = 1;
              *(long *)(unaff_x29 + -0xa8) = lVar31;
              in_stack_000001e0 = (char *)plVar24;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
            }
          }
        }
        *(undefined1 *)(unaff_x19 + 0xce5) = 0;
        *(undefined8 *)(unaff_x19 + 0xcf0) = 6;
        *(undefined8 *)(unaff_x19 + 0xd00) = *(undefined8 *)(unaff_x19 + 0xd40);
        *(long *)(unaff_x19 + 0xcf8) = *plVar24;
        *(undefined8 *)(unaff_x19 + 0xd10) = *(undefined8 *)(unaff_x19 + 0xd50);
        *(undefined8 *)(unaff_x19 + 0xd08) = *(undefined8 *)(unaff_x19 + 0xd48);
        *(long *)(unaff_x19 + 0xd28) = unaff_x19 + 0x5b8;
        *(undefined8 *)(unaff_x19 + 0xd30) = 0;
        FUN_1017b7ee4(unaff_x29 + -0xc0,unaff_x19 + 0xcf0,*unaff_x27);
        if (*(long *)(unaff_x29 + -0xc0) != 8) {
          lVar31 = *(long *)(unaff_x29 + -0xb8);
          lVar26 = *(long *)(unaff_x29 + -0xc0);
          uVar20 = *(undefined8 *)(unaff_x29 + -0xa8);
          uVar32 = *(undefined8 *)(unaff_x29 + -0xb0);
          uVar21 = *(undefined8 *)(unaff_x29 + -0x98);
          FUN_1017a1b44(unaff_x19 + 0xcf0);
          if (lVar26 != 7) {
            if (lVar26 == 6) {
              FUN_1017a49cc((ulong)&stack0x00000220 | 8);
            }
            else if ((lVar26 != 4) || ((short)uVar21 != 0x12)) {
              (**(code **)(lVar31 + 0x20))(&stack0x00000240,uVar32,uVar20);
            }
          }
          *(undefined2 *)(unaff_x19 + 0xce5) = 0;
          lVar26 = *(long *)(unaff_x19 + 0xc68);
          goto joined_r0x0001017ea818;
        }
        uVar21 = 1;
        uVar23 = 7;
        goto LAB_1017eb15c;
      }
      *(undefined1 *)(unaff_x19 + 0xce6) = 0;
LAB_1017e9178:
      lVar26 = *(long *)(unaff_x19 + 0xc68);
      if (lVar26 == 6) {
        *(undefined1 *)(unaff_x19 + 0xce2) = 0;
      }
      else {
        if (((lVar26 != 2) && ((*(byte *)(unaff_x19 + 0xce2) & 1) != 0)) &&
           ((lVar26 != 4 || (*(short *)(unaff_x19 + 0xc90) != 0x12)))) {
          (**(code **)(*(long *)(unaff_x19 + 0xc70) + 0x20))
                    (unaff_x19 + 0xc88,*(undefined8 *)(unaff_x19 + 0xc78),
                     *(undefined8 *)(unaff_x19 + 0xc80));
        }
        *(undefined1 *)(unaff_x19 + 0xce2) = 0;
        *(undefined1 *)(unaff_x19 + 0xce2) = 0;
      }
      goto LAB_1017e91e0;
    }
    puVar2 = (undefined8 *)(unaff_x19 + 0xb70);
    *(undefined8 *)(unaff_x19 + 3000) = *(undefined8 *)(unaff_x19 + 0xb78);
    *(undefined8 *)(unaff_x19 + 0xbb0) = *puVar2;
    *(undefined8 *)(unaff_x19 + 0xbc8) = *(undefined8 *)(unaff_x19 + 0xb88);
    *(undefined8 *)(unaff_x19 + 0xbc0) = *(undefined8 *)(unaff_x19 + 0xb80);
    *(undefined8 *)(unaff_x19 + 0xbd8) = *(undefined8 *)(unaff_x19 + 0xb98);
    *(undefined8 *)(unaff_x19 + 0xbd0) = *(undefined8 *)(unaff_x19 + 0xb90);
    *(undefined8 *)(unaff_x19 + 0xbe8) = *(undefined8 *)(unaff_x19 + 0xba8);
    *(undefined8 *)(unaff_x19 + 0xbe0) = *(undefined8 *)(unaff_x19 + 0xba0);
    unaff_x25 = &stack0x000000e8;
    if (*(long *)(unaff_x19 + 0xbb0) == 7) goto joined_r0x0001017eaeec;
    *(undefined8 *)(unaff_x19 + 0xbf8) = *(undefined8 *)(unaff_x19 + 0xb78);
    *(undefined8 *)(unaff_x19 + 0xbf0) = *puVar2;
    *(undefined8 *)(unaff_x19 + 0xc08) = *(undefined8 *)(unaff_x19 + 0xb88);
    *(undefined8 *)(unaff_x19 + 0xc00) = *(undefined8 *)(unaff_x19 + 0xb80);
    *(undefined8 *)(unaff_x19 + 0xc18) = *(undefined8 *)(unaff_x19 + 0xb98);
    *(undefined8 *)(unaff_x19 + 0xc10) = *(undefined8 *)(unaff_x19 + 0xb90);
    *(undefined8 *)(unaff_x19 + 0xc28) = *(undefined8 *)(unaff_x19 + 0xba8);
    *(undefined8 *)(unaff_x19 + 0xc20) = *(undefined8 *)(unaff_x19 + 0xba0);
    if (*(long *)(unaff_x19 + 0xbf0) == 6) {
      *(undefined1 *)(unaff_x19 + 0xce7) = 1;
      *(undefined8 *)(unaff_x19 + 0xcf0) = *(undefined8 *)(unaff_x19 + 0xbf8);
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
         (((bRam000000010b627288 - 1 < 2 ||
           ((bRam000000010b627288 != 0 &&
            (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b627278), cVar15 != '\0')))) &&
          (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b627278), (uVar18 & 1) != 0)))) {
        lVar26 = lRam000000010b627278 + 0x30;
        in_stack_000001e0 = &stack0x00000220;
        in_stack_000001e8 = (code *)&UNK_10b25b0a0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(char ***)(unaff_x29 + -0xb8) = &stack0x000001e0;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar26;
        FUN_1017ebe30(unaff_x29 + -0xc0);
        in_stack_00000220 = &UNK_108ce7b77;
      }
      else {
        lVar26 = lRam000000010b627278;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_000000d8 = *(undefined8 *)(lRam000000010b627278 + 0x20);
          in_stack_000000e0 = *(undefined8 *)(lRam000000010b627278 + 0x28);
          in_stack_000000d0 = (undefined *)0x3;
          puVar28 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar28 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000000d0);
          puVar10 = in_stack_000000d0;
          if (iVar17 != 0) {
            lVar31 = lRam000000010b627278 + 0x30;
            in_stack_000001e0 = &UNK_108ce7b77;
            in_stack_000001e8 = (code *)0x41;
            _uStack0000000000000060 = (char *)&stack0x000001e0;
            in_stack_00000068 = (undefined8 *)&UNK_10b25b0a0;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(undefined2 **)(unaff_x29 + -0xb8) = &stack0x00000060;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar31;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
            in_stack_00000220 = puVar10;
          }
        }
      }
      *(long *)(unaff_x19 + 0xd38) = unaff_x19 + 0x5c0;
      *(undefined2 *)(unaff_x19 + 0xd60) = 0x12;
      *(undefined1 *)(unaff_x19 + 0xd68) = 0;
      *extraout_x10 = 4;
      *(undefined8 *)(unaff_x19 + 0xd08) = *(undefined8 *)(unaff_x19 + 0xd48);
      *(undefined8 *)(unaff_x19 + 0xd00) = *(undefined8 *)(unaff_x19 + 0xd40);
      *(undefined8 *)(unaff_x19 + 0xd18) = *(undefined8 *)(unaff_x19 + 0xd58);
      *(undefined8 *)(unaff_x19 + 0xd10) = *(undefined8 *)(unaff_x19 + 0xd50);
      *(undefined8 *)(unaff_x19 + 0xd20) = *(undefined8 *)(unaff_x19 + 0xd60);
      *(long *)(unaff_x19 + 0xd30) = unaff_x19 + 0x5c0;
      FUN_1017cf34c(unaff_x29 + -0xc0,extraout_x10,unaff_x27);
      if (*(long *)(unaff_x29 + -0xc0) == 0x16) {
        *(undefined1 *)(unaff_x19 + 0xd68) = 3;
        uVar21 = 1;
        uVar23 = 5;
        goto LAB_1017eb15c;
      }
      if ((*extraout_x10 != 6) && ((*extraout_x10 != 4 || (*(short *)(unaff_x19 + 0xd20) != 0x12))))
      {
        (**(code **)(*(long *)(unaff_x19 + 0xd00) + 0x20))
                  (unaff_x19 + 0xd18,*(undefined8 *)(unaff_x19 + 0xd08),
                   *(undefined8 *)(unaff_x19 + 0xd10));
      }
      *(undefined1 *)(unaff_x19 + 0xd68) = 1;
      in_stack_000001e8 = *(code **)(unaff_x29 + -0xb8);
      in_stack_000001e0 = *(char **)(unaff_x29 + -0xc0);
      uVar32 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar21 = *(undefined8 *)(unaff_x29 + -0xb0);
      if ((long *)in_stack_000001e0 != (long *)0x15) {
        puStack00000000000000c0 = &stack0x000001e0;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
            ((bRam000000010b627210 - 1 < 2 ||
             ((bRam000000010b627210 != 0 &&
              (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (0x10b627200), cVar15 != '\0')))))) &&
           (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b627200), (uVar18 & 1) != 0)) {
          lVar26 = lRam000000010b627200 + 0x30;
          in_stack_00000068 = (undefined8 *)&stack0x00000220;
          _uStack0000000000000060 = s__realtime_websocket_close_failed_108adcfe1;
          *(undefined2 **)(unaff_x29 + -0xd0) = &stack0x00000060;
          *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(long *)(unaff_x29 + -0xa8) = lVar26;
          FUN_1017ec0a0(unaff_x29 + -0xc0);
          in_stack_00000220 = (undefined *)&stack0x000000c0;
        }
        else {
          lVar26 = lRam000000010b627200;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            in_stack_000000f0 = *(undefined8 *)(lRam000000010b627200 + 0x20);
            in_stack_000000f8 = *(undefined8 *)(lRam000000010b627200 + 0x28);
            in_stack_000000e8 = (undefined *)0x1;
            puVar28 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar28 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000000e8);
            puVar10 = in_stack_000000e8;
            if (iVar17 != 0) {
              lVar31 = lRam000000010b627200 + 0x30;
              _uStack0000000000000060 = (char *)&stack0x000000c0;
              in_stack_00000068 = (undefined8 *)&DAT_10179e8e4;
              *(char **)(unaff_x29 + -0xd0) = s__realtime_websocket_close_failed_108adcfe1;
              *(undefined2 **)(unaff_x29 + -200) = &stack0x00000060;
              *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
              *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
              *(undefined8 *)(unaff_x29 + -0xc0) = 1;
              *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xe0;
              *(undefined8 *)(unaff_x29 + -0xb0) = 1;
              *(long *)(unaff_x29 + -0xa8) = lVar31;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar26,puVar5,puVar28,&stack0x00000220,unaff_x29 + -0xc0);
              in_stack_00000220 = puVar10;
            }
          }
        }
      }
      unaff_x25 = &stack0x000000e8;
      *(undefined1 *)(unaff_x19 + 0xce7) = 0;
      uVar20 = *(undefined8 *)(unaff_x19 + 0xcf0);
      *(code **)(unaff_x29 + -0xb8) = in_stack_000001e8;
      *(char **)(unaff_x29 + -0xc0) = in_stack_000001e0;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar32;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar21;
      FUN_1017b001c(&stack0x00000220,uVar20,unaff_x29 + -0xc0);
      if ((undefined *)0x1 < in_stack_00000220 + -0x15) {
        FUN_1017a49cc(&stack0x00000220);
      }
      *(undefined1 *)(unaff_x19 + 0xce7) = 0;
      goto joined_r0x0001017eaeec;
    }
    in_stack_00000228 = *(long **)(unaff_x19 + 0xb78);
    in_stack_00000220 = (undefined *)*puVar2;
    in_stack_00000238 = *(long *)(unaff_x19 + 0xb88);
    in_stack_00000230 = *(code **)(unaff_x19 + 0xb80);
    in_stack_00000248 = *(long *)(unaff_x19 + 0xb98);
    in_stack_00000240 = *(long *)(unaff_x19 + 0xb90);
    in_stack_00000250 = *(long *)(unaff_x19 + 0xba0);
    *(undefined2 *)(unaff_x19 + 0xce8) = 0x101;
    *(undefined8 *)(unaff_x19 + 0xcf0) = *(undefined8 *)(unaff_x19 + 0xc28);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b6271c8 - 1 < 2 ||
         ((bRam000000010b6271c8 != 0 &&
          (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (0x10b6271b8), cVar15 != '\0')))) &&
        (uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b6271b8), lVar26 = lRam000000010b6271b8, (uVar18 & 1) != 0
        )))) {
      lVar31 = lRam000000010b6271b8 + 0x30;
      _uStack0000000000000060 =
           "realtime websocket sending messagerealtime websocket sending closerealtime websocket received pingrealtime websocket received text framerealtime websocket received unexpected binary framerealtime websocket received raw frameall branches are disabled and there is no else branchrealtime websocket pump exitingtranscriptionaudio/pcmSessionAudioInput"
      ;
      in_stack_00000068 = (undefined8 *)0x45;
      *(undefined2 **)(unaff_x29 + -0xd0) = &stack0x00000060;
      *(undefined **)(unaff_x29 + -200) = &UNK_10b25b0a0;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 1;
      *(long *)(unaff_x29 + -0xa8) = lVar31;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar26,unaff_x29 + -0xc0);
      lVar26 = lRam000000010b6271b8;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000001e8 = *(code **)(lRam000000010b6271b8 + 0x20);
        in_stack_000001f0 = *(long *)(lRam000000010b6271b8 + 0x28);
        in_stack_000001e0 = (char *)0x4;
        puVar28 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar28 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x000001e0);
        if (iVar17 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar26,puVar5,puVar28,&stack0x000001e0,unaff_x29 + -0xc0);
        }
      }
    }
    else {
      lVar26 = lRam000000010b6271b8;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000050 = *(undefined8 *)(lRam000000010b6271b8 + 0x20);
        in_stack_00000058 = *(undefined8 *)(lRam000000010b6271b8 + 0x28);
        in_stack_00000048 = 4;
        puVar28 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar28 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000048);
        if (iVar17 != 0) {
          in_stack_000001f8 = lRam000000010b6271b8 + 0x30;
          *(undefined **)(unaff_x29 + -0xe0) = &UNK_108ce7b55;
          *(undefined8 *)(unaff_x29 + -0xd8) = 0x45;
          puStack00000000000000c0 = (undefined8 *)(unaff_x29 + -0xe0);
          puStack00000000000000c8 = &UNK_10b25b0a0;
          in_stack_000001e8 = (code *)&stack0x000000c0;
          in_stack_000001e0 = (char *)0x1;
          in_stack_000001f0 = 1;
          *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000050;
          *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000048;
          *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000058;
          lVar31 = *(long *)(lVar26 + 0x60);
          uVar32 = *(undefined8 *)(lVar26 + 0x68);
          lVar33 = *(long *)(lVar26 + 0x50);
          uVar20 = *(undefined8 *)(lVar26 + 0x58);
          uVar21 = 1;
          if (lVar33 == 0) {
            uVar21 = 2;
          }
          uVar6 = *(undefined4 *)(lVar26 + 8);
          uVar7 = *(undefined4 *)(lVar26 + 0xc);
          *(char ***)(unaff_x29 + -0xd0) = &stack0x000001e0;
          *(undefined1 *)(unaff_x29 + -200) = 1;
          _uStack0000000000000060 = (char *)(unaff_x29 + -0xd0);
          in_stack_00000068 = (undefined8 *)&DAT_1061c2098;
          uVar4 = 1;
          if (lVar31 == 0) {
            uVar4 = 2;
          }
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(undefined2 **)(unaff_x29 + -0x68) = &stack0x00000060;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar21;
          *(long *)(unaff_x29 + -0xb8) = lVar33;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar20;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar4;
          *(long *)(unaff_x29 + -0xa0) = lVar31;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar32;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar6;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar7;
          (**(code **)(puVar28 + 0x20))(puVar5,unaff_x29 + -0xc0);
        }
      }
    }
    unaff_x25 = &stack0x000000e8;
    *(undefined1 *)(unaff_x19 + 0xce9) = 0;
    extraout_x10[1] = (long)in_stack_00000228;
    *extraout_x10 = (long)in_stack_00000220;
    extraout_x10[3] = in_stack_00000238;
    extraout_x10[2] = (long)in_stack_00000230;
    extraout_x10[5] = in_stack_00000248;
    extraout_x10[4] = in_stack_00000240;
    extraout_x10[6] = in_stack_00000250;
    *(long *)(unaff_x19 + 0xd30) = unaff_x19 + 0x5c0;
    FUN_1017cf34c(unaff_x29 + -0xc0,(long *)(unaff_x19 + 0xcf8),unaff_x27);
    if (*(long *)(unaff_x29 + -0xc0) == 0x16) {
      uVar21 = 1;
      uVar23 = 4;
      goto LAB_1017eb15c;
    }
    in_stack_00000068 = *(undefined8 **)(unaff_x29 + -0xb8);
    _uStack0000000000000060 = *(char **)(unaff_x29 + -0xc0);
    in_stack_00000078 = *(undefined8 *)(unaff_x29 + -0xa8);
    in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0xb0);
    lVar26 = *(long *)(unaff_x19 + 0xcf8);
    if ((lVar26 != 6) && (lVar26 != 4 || *(short *)(unaff_x19 + 0xd20) != 0x12)) {
      (**(code **)(*(long *)(unaff_x19 + 0xd00) + 0x20))
                (unaff_x19 + 0xd18,*(undefined8 *)(unaff_x19 + 0xd08),
                 *(undefined8 *)(unaff_x19 + 0xd10));
    }
    unaff_x24 = _uStack0000000000000060;
  } while (_uStack0000000000000060 == (char *)0x15);
  in_stack_00000080 = (undefined8 *)&stack0x00000060;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     ((bRam000000010b627180 - 1 < 2 ||
      ((bRam000000010b627180 != 0 &&
       (cVar15 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b627170), cVar15 != '\0')))))) {
    unaff_x25 = &stack0x000000e8;
    unaff_x20 = 0x10b627000;
    uVar18 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b627170);
    param_2 = lRam000000010b627170;
    if ((uVar18 & 1) != 0) goto code_r0x0001017e9fcc;
  }
  lVar26 = lRam000000010b627170;
  unaff_x25 = &stack0x000000e8;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    in_stack_00000090 = *(undefined8 *)(lRam000000010b627170 + 0x20);
    in_stack_00000098 = *(undefined8 *)(lRam000000010b627170 + 0x28);
    in_stack_00000088 = 1;
    puVar28 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar28 = &UNK_10b3c24c8;
    }
    puVar5 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
    }
    iVar17 = (**(code **)(puVar28 + 0x18))(puVar5,&stack0x00000088);
    if (iVar17 != 0) {
      in_stack_000001f8 = lRam000000010b627170 + 0x30;
      puStack00000000000000c0 = &stack0x00000080;
      puStack00000000000000c8 = &DAT_10179e8e4;
      in_stack_000000b8 = (undefined1 *)&stack0x000000c0;
      in_stack_000000b0 = s_realtime_websocket_send_failed__108adcfbe;
      in_stack_000000a0 = &stack0x000000b0;
      in_stack_000000a8 = &UNK_10b25b0a0;
      in_stack_000001e8 = (code *)&stack0x000000a0;
      in_stack_000001e0 = (char *)0x1;
      in_stack_000001f0 = 1;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000090;
      *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000088;
      *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000098;
      lVar31 = *(long *)(lVar26 + 0x60);
      uVar32 = *(undefined8 *)(lVar26 + 0x68);
      lVar33 = *(long *)(lVar26 + 0x50);
      uVar20 = *(undefined8 *)(lVar26 + 0x58);
      uVar21 = 1;
      if (lVar33 == 0) {
        uVar21 = 2;
      }
      uVar6 = *(undefined4 *)(lVar26 + 8);
      uVar7 = *(undefined4 *)(lVar26 + 0xc);
      *(char ***)(unaff_x29 + -0xe0) = &stack0x000001e0;
      *(undefined1 *)(unaff_x29 + -0xd8) = 1;
      *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0xe0;
      *(undefined **)(unaff_x29 + -200) = &DAT_1061c2098;
      uVar4 = 1;
      if (lVar31 == 0) {
        uVar4 = 2;
      }
      *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0xd0;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar21;
      *(long *)(unaff_x29 + -0xb8) = lVar33;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar20;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar4;
      *(long *)(unaff_x29 + -0xa0) = lVar31;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar32;
      *(undefined4 *)(unaff_x29 + -0x78) = uVar6;
      *(undefined4 *)(unaff_x29 + -0x74) = uVar7;
      (**(code **)(puVar28 + 0x20))(puVar5,unaff_x29 + -0xc0);
    }
  }
  goto LAB_1017ea0cc;
code_r0x0001017e9fcc:
  param_1 = lRam000000010b627170 + 0x30;
  *(undefined8 ***)(unaff_x29 + -0xd0) = &stack0x00000080;
  *(undefined **)(unaff_x29 + -200) = &DAT_10179e8e4;
  goto code_r0x0001017e9fe4;
}

