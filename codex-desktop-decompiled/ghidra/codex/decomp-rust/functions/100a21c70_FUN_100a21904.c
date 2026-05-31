
/* WARNING: Removing unreachable block (ram,0x000100a23cc4) */
/* WARNING: Removing unreachable block (ram,0x000100a23ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a21904(long param_1)

{
  char *pcVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  code *pcVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar17;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar18;
  undefined *puVar19;
  char cVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *puVar24;
  byte *extraout_x9;
  long lVar25;
  long unaff_x19;
  long lVar26;
  long *unaff_x21;
  long lVar27;
  char cVar28;
  undefined8 uVar29;
  long lVar30;
  long *unaff_x24;
  undefined8 *unaff_x25;
  byte *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  ulong in_xzr;
  byte bVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined1 auVar41 [16];
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  long *in_stack_00000170;
  undefined *in_stack_00000178;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  undefined1 in_stack_000007f0;
  byte bVar42;
  undefined6 in_stack_000007f1;
  undefined6 uVar43;
  undefined1 in_stack_000007f7;
  undefined1 uVar44;
  undefined7 in_stack_000007f8;
  undefined1 in_stack_000007ff;
  long in_stack_00000800;
  long in_stack_00000808;
  long in_stack_00000810;
  long in_stack_00000818;
  long in_stack_00000820;
  long in_stack_00000828;
  long in_stack_00000830;
  long in_stack_00000838;
  long in_stack_00000840;
  long in_stack_00000848;
  long in_stack_00000850;
  undefined7 in_stack_00000858;
  undefined1 in_stack_0000085f;
  undefined7 in_stack_00000860;
  long *plVar45;
  undefined7 uVar46;
  undefined1 uVar47;
  undefined7 uVar48;
  undefined1 uVar49;
  undefined7 uVar50;
  
code_r0x000100a21904:
  plVar45 = (long *)0x1;
  uVar21 = 1;
  uVar46 = 0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000a80);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar27 = *unaff_x21;
    in_stack_00000800 = *(long *)(lVar27 + 0x28);
    in_stack_000007f0 = 2;
    in_stack_000007f1 = 0;
    in_stack_000007f7 = 0;
    in_stack_000007f8 = (undefined7)*(undefined8 *)(lVar27 + 0x20);
    in_stack_000007ff = (undefined1)((ulong)*(undefined8 *)(lVar27 + 0x20) >> 0x38);
    puVar19 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar19 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x000007f0);
    if (iVar13 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar27,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
    }
  }
LAB_100a2213c:
  *(undefined1 *)(unaff_x19 + 0x3bd) = 0;
  uVar22 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar18 = *(undefined8 *)unaff_x26;
  *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x26 + 8);
  *(undefined8 *)(unaff_x19 + 0x3e0) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x3f0) = uVar22;
  *(long *)(unaff_x19 + 0x3f8) = unaff_x27;
  *(undefined8 *)(unaff_x19 + 0x448) = 0x8000000000000000;
  *(undefined8 *)(unaff_x19 + 0x440) = 0xffffffffffff80a8;
  *(undefined8 *)(unaff_x19 + 0x450) = 0xffffffffffffffff;
  *(long *)(unaff_x19 + 0x460) = unaff_x19 + 0xf8;
  *(undefined1 *)(unaff_x19 + 0x568) = 0;
  FUN_100fce618(&stack0x00000a80,unaff_x19 + 0x3e0,unaff_x25);
  if (plVar45 != (long *)(unaff_x27 + -1)) {
    lVar27 = unaff_x24[8];
    lVar25 = unaff_x24[0xb];
    lVar26 = unaff_x24[10];
    unaff_x28[9] = unaff_x24[9];
    unaff_x28[8] = lVar27;
    unaff_x28[0xb] = lVar25;
    unaff_x28[10] = lVar26;
    lVar27 = unaff_x24[0xc];
    lVar25 = unaff_x24[0xf];
    lVar26 = unaff_x24[0xe];
    unaff_x28[0xd] = unaff_x24[0xd];
    unaff_x28[0xc] = lVar27;
    unaff_x28[0xf] = lVar25;
    unaff_x28[0xe] = lVar26;
    lVar27 = *unaff_x24;
    lVar25 = unaff_x24[3];
    lVar26 = unaff_x24[2];
    unaff_x28[1] = unaff_x24[1];
    *unaff_x28 = lVar27;
    unaff_x28[3] = lVar25;
    unaff_x28[2] = lVar26;
    lVar27 = unaff_x24[4];
    lVar25 = unaff_x24[7];
    lVar26 = unaff_x24[6];
    unaff_x28[5] = unaff_x24[5];
    unaff_x28[4] = lVar27;
    unaff_x28[7] = lVar25;
    unaff_x28[6] = lVar26;
    FUN_100d39b10(unaff_x19 + 0x3e0);
    if (CONCAT17(in_stack_000007f7,CONCAT61(in_stack_000007f1,in_stack_000007f0)) ==
        -0x7ffffffffffffffd) {
      *(undefined1 *)(unaff_x19 + 0x3bd) = 0;
LAB_100a21644:
      do {
        *(undefined2 *)(unaff_x19 + 0x3b4) = 0;
        *(undefined1 *)(unaff_x19 + 0x3b6) = 0;
        plVar23 = (long *)(unaff_x19 + 0xc0);
        *(long **)(unaff_x19 + 0x3c8) = plVar23;
        *(undefined1 *)(unaff_x19 + 0x3d8) = 0;
        *(long **)(unaff_x19 + 0x3d0) = plVar23;
        lVar27 = (*
                 ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                 )();
        if (*(char *)(lVar27 + 0x48) == '\x01') {
LAB_100a216b0:
          cVar10 = *(char *)(lVar27 + 0x44);
          cVar28 = *(char *)(lVar27 + 0x45);
          cVar20 = cVar28;
          if (cVar10 != '\x01') {
LAB_100a216d0:
            *(char *)(lVar27 + 0x45) = cVar20;
            goto LAB_100a216d4;
          }
          if (cVar28 != '\0') {
            cVar20 = cVar28 + -1;
            goto LAB_100a216d0;
          }
          FUN_10610bbb4(*(undefined8 *)*unaff_x25,((undefined8 *)*unaff_x25)[1]);
          __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                    ((ulong)&stack0x00000a80 | 1);
          goto LAB_100a22a04;
        }
        cVar10 = '\0';
        cVar28 = '\0';
        if (*(char *)(lVar27 + 0x48) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar27,&DAT_100c35d48);
          *(undefined1 *)(lVar27 + 0x48) = 1;
          unaff_x24 = (long *)&stack0x00000a80;
          goto LAB_100a216b0;
        }
LAB_100a216d4:
        lVar26 = *plVar23;
        FUN_100fc6578(&stack0x000007f0,lVar26 + 0x1a0,lVar26 + 0x80);
        plVar23 = (long *)CONCAT17(in_stack_000007f7,CONCAT61(in_stack_000007f1,in_stack_000007f0));
        if (plVar23 == (long *)0x8000000000000006) {
          __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                    (lVar26 + 0x100,*unaff_x25);
          FUN_100fc6578(&stack0x00000a80,lVar26 + 0x1a0,lVar26 + 0x80);
          if (plVar45 == (long *)0x8000000000000005) {
            if (*(ulong *)(lVar26 + 0x1e8) == *(ulong *)(lVar26 + 0x1e0) >> 1) {
LAB_100a223c8:
              *(undefined1 *)(unaff_x19 + 0x3d8) = 1;
              *(undefined8 *)(unaff_x19 + 0x110) = 0x8000000000000005;
              *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000108;
              *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000100;
              *(undefined8 *)(unaff_x19 + 400) = in_stack_00000118;
              *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000110;
              *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000128;
              *(undefined8 *)(unaff_x19 + 0x198) = in_stack_00000120;
              *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000138;
              *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000130;
              *(undefined8 *)(unaff_x19 + 0x140) = in_stack_000000c8;
              *(undefined8 *)(unaff_x19 + 0x138) = in_stack_000000c0;
              *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000d8;
              *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000d0;
              *(undefined8 *)(unaff_x19 + 0x160) = in_stack_000000e8;
              *(undefined8 *)(unaff_x19 + 0x158) = in_stack_000000e0;
              *(undefined8 *)(unaff_x19 + 0x170) = in_stack_000000f8;
              *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000000f0;
              *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000a8;
              *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000a0;
              *(undefined8 *)(unaff_x19 + 0x130) = in_stack_000000b8;
              *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000b0;
              unaff_x28 = (long *)&stack0x000007f0;
              goto LAB_100a22690;
            }
            puVar19 = &UNK_10b23a6b8;
LAB_100a235ac:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar19);
            goto LAB_100a23be0;
          }
          if (plVar45 != (long *)0x8000000000000006) {
            pcVar1 = (char *)(lVar26 + 0x1c0);
            if (*pcVar1 == '\0') {
              *pcVar1 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar1,extraout_x1_02,1000000000);
            }
            FUN_1060fa678(pcVar1,1,pcVar1);
            puVar24 = in_stack_00000038;
            plVar23 = plVar45;
            goto LAB_100a217b0;
          }
          if ((*(char *)(lVar26 + 0x1b8) == '\x01') &&
             (*(ulong *)(lVar26 + 0x1e8) == *(ulong *)(lVar26 + 0x1e0) >> 1)) goto LAB_100a223c8;
          if (cVar10 != '\0') {
            if (*(char *)(lVar27 + 0x48) != '\x01') {
              if (*(char *)(lVar27 + 0x48) == '\x02') goto LAB_100a22a04;
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar27,&DAT_1060edbcc);
              *(undefined1 *)(lVar27 + 0x48) = 1;
            }
            *(undefined1 *)(lVar27 + 0x44) = 1;
            *(char *)(lVar27 + 0x45) = cVar28;
          }
LAB_100a22a04:
          uVar21 = 3;
          *(undefined1 *)(unaff_x19 + 0x3d8) = 3;
          uVar22 = 1;
          goto LAB_100a23be8;
        }
        if (plVar23 == (long *)0x8000000000000005) {
          if (*(ulong *)(lVar26 + 0x1e8) == *(ulong *)(lVar26 + 0x1e0) >> 1) goto LAB_100a223c8;
          puVar19 = &UNK_10b23a6d0;
          goto LAB_100a235ac;
        }
        pcVar1 = (char *)(lVar26 + 0x1c0);
        if (*pcVar1 == '\0') {
          *pcVar1 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar1,extraout_x1_01,1000000000);
        }
        FUN_1060fa678(pcVar1,1,pcVar1);
        puVar24 = in_stack_00000040;
LAB_100a217b0:
        in_stack_00000108 = puVar24[0xd];
        in_stack_00000100 = puVar24[0xc];
        in_stack_00000118 = puVar24[0xf];
        in_stack_00000110 = puVar24[0xe];
        in_stack_00000128 = puVar24[0x11];
        in_stack_00000120 = puVar24[0x10];
        in_stack_00000138 = puVar24[0x13];
        in_stack_00000130 = puVar24[0x12];
        in_stack_000000c8 = puVar24[5];
        in_stack_000000c0 = puVar24[4];
        in_stack_000000d8 = puVar24[7];
        in_stack_000000d0 = puVar24[6];
        in_stack_000000e8 = puVar24[9];
        in_stack_000000e0 = puVar24[8];
        in_stack_000000f8 = puVar24[0xb];
        in_stack_000000f0 = puVar24[10];
        in_stack_000000a8 = puVar24[1];
        in_stack_000000a0 = *puVar24;
        in_stack_000000b8 = puVar24[3];
        in_stack_000000b0 = puVar24[2];
        *(undefined1 *)(unaff_x19 + 0x3d8) = 1;
        *(long **)(unaff_x19 + 0x110) = plVar23;
        *(undefined8 *)(unaff_x19 + 0x140) = in_stack_000000c8;
        *(undefined8 *)(unaff_x19 + 0x138) = in_stack_000000c0;
        *(undefined8 *)(unaff_x19 + 0x150) = in_stack_000000d8;
        *(undefined8 *)(unaff_x19 + 0x148) = in_stack_000000d0;
        *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000108;
        *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000100;
        *(undefined8 *)(unaff_x19 + 400) = in_stack_00000118;
        *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000110;
        *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000128;
        *(undefined8 *)(unaff_x19 + 0x198) = in_stack_00000120;
        *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000138;
        *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000130;
        *(undefined8 *)(unaff_x19 + 0x160) = in_stack_000000e8;
        *(undefined8 *)(unaff_x19 + 0x158) = in_stack_000000e0;
        *(undefined8 *)(unaff_x19 + 0x170) = in_stack_000000f8;
        *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000000f0;
        *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000a8;
        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000a0;
        *(undefined8 *)(unaff_x19 + 0x130) = in_stack_000000b8;
        *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000b0;
        *(undefined2 *)(unaff_x19 + 0x3b4) = 0x101;
        *(undefined1 *)(unaff_x19 + 0x3b6) = 1;
        puVar16 = (ulong *)(unaff_x19 + 0x1b8);
        *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x198);
        *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 400);
        *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x1a8);
        *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x1a0);
        *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x1b0);
        *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x158);
        *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x150);
        *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x168);
        *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x160);
        *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x178);
        *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x170);
        *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x188);
        *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x180);
        *(undefined8 *)(unaff_x19 + 0x1c0) = *(undefined8 *)(unaff_x19 + 0x118);
        *puVar16 = *(ulong *)(unaff_x19 + 0x110);
        *(undefined8 *)(unaff_x19 + 0x1d0) = *(undefined8 *)(unaff_x19 + 0x128);
        *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x19 + 0x120);
        *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x138);
        *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x19 + 0x130);
        *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x148);
        *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x140);
        iVar13 = __ZN17codex_exec_server6server7handler17ExecServerHandler19is_session_attached17hc8d5282df402d087E
                           (*(long *)(unaff_x19 + 0x100) + 0x10);
        unaff_x28 = (long *)&stack0x000007f0;
        unaff_x27 = -0x7ffffffffffffffb;
        if (iVar13 == 0) {
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            if (bRam000000010b62c610 - 1 < 2) {
LAB_100a222d4:
              unaff_x28 = (long *)&stack0x000007f0;
              uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h67b58125cac2fbd4E
                                 );
              if ((uVar14 & 1) != 0) {
                FUN_100a24c90(&stack0x00000a80);
                goto LAB_100a22624;
              }
            }
            else if (bRam000000010b62c610 != 0) {
              cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h67b58125cac2fbd4E
                                 );
              unaff_x24 = (long *)&stack0x00000a80;
              if (cVar10 != '\0') goto LAB_100a222d4;
            }
          }
          lVar27 = 
          ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h67b58125cac2fbd4E
          ;
          unaff_x28 = (long *)&stack0x000007f0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_00000148 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h67b58125cac2fbd4E
                  + 0x20);
            in_stack_00000150 =
                 *(undefined8 *)
                  (
                  ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h67b58125cac2fbd4E
                  + 0x28);
            in_stack_00000140 = 4;
            puVar19 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar19 = &UNK_10b3c24c8;
            }
            puVar6 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar6 = &UNK_109adfc03;
            }
            iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000140);
            if (iVar13 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar27,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
            }
          }
          goto LAB_100a22624;
        }
        lVar26 = 0;
        if (0x8000000000000001 < *puVar16) {
          lVar26 = *puVar16 + 0x7ffffffffffffffe;
        }
        if (lVar26 != 0) goto code_r0x000100a2188c;
        *(undefined1 *)(unaff_x19 + 0x3b5) = 0;
        *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x19 + 0x240);
        *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x238);
        *(undefined8 *)(unaff_x19 + 0x2f8) = *(undefined8 *)(unaff_x19 + 0x250);
        *(undefined8 *)(unaff_x19 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x248);
        *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x19 + 600);
        *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x200);
        *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x1f8);
        *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x210);
        *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x208);
        *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x19 + 0x220);
        *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x218);
        *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x230);
        *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x19 + 0x228);
        *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x1c0);
        *(ulong *)(unaff_x19 + 0x260) = *puVar16;
        *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x19 + 0x1d0);
        *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x1c8);
        uVar14 = *(long *)(unaff_x19 + 0x260) + 0x8000000000000001U &
                 *(long *)(unaff_x19 + 0x260) >> 0x3f;
        *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + 0x1e0);
        *(undefined8 *)(unaff_x19 + 0x280) = *(undefined8 *)(unaff_x19 + 0x1d8);
        *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x1f0);
        *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x1e8);
        if (0 < (long)uVar14) {
          if (uVar14 != 1) {
            if (uVar14 == 2) {
              lVar27 = *(long *)(unaff_x19 + 0x1e0);
              lVar25 = *(long *)(unaff_x19 + 0x1f8);
              lVar26 = *(long *)(unaff_x19 + 0x1f0);
              unaff_x24[5] = *(long *)(unaff_x19 + 0x1e8);
              unaff_x24[4] = lVar27;
              unaff_x24[7] = lVar25;
              unaff_x24[6] = lVar26;
              lVar27 = *(long *)(unaff_x19 + 0x200);
              lVar25 = *(long *)(unaff_x19 + 0x218);
              lVar26 = *(long *)(unaff_x19 + 0x210);
              unaff_x24[9] = *(long *)(unaff_x19 + 0x208);
              unaff_x24[8] = lVar27;
              unaff_x24[0xb] = lVar25;
              unaff_x24[10] = lVar26;
              lVar27 = *(long *)(unaff_x19 + 0x1c0);
              lVar25 = *(long *)(unaff_x19 + 0x1d8);
              lVar26 = *(long *)(unaff_x19 + 0x1d0);
              unaff_x24[1] = *(long *)(unaff_x19 + 0x1c8);
              *unaff_x24 = lVar27;
              unaff_x24[3] = lVar25;
              unaff_x24[2] = lVar26;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                if (1 < bRam000000010b62c658 - 1) {
                  if (bRam000000010b62c658 != 0) {
                    cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha8fbef6b84b04efdE
                                       );
                    unaff_x24 = (long *)&stack0x00000a80;
                    if (cVar10 != '\0') goto LAB_100a22970;
                  }
                  goto LAB_100a22d14;
                }
LAB_100a22970:
                uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha8fbef6b84b04efdE
                                   );
                if ((uVar14 & 1) == 0) goto LAB_100a22d14;
                FUN_100a25180(&stack0x000007f0);
              }
              else {
LAB_100a22d14:
                uVar22 = 
                ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha8fbef6b84b04efdE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000290);
                  if (iVar13 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (uVar22,puVar6,puVar19,&stack0x00000560,&stack0x000007f0);
                  }
                }
              }
              unaff_x28 = (long *)&stack0x000007f0;
              FUN_100e40a74(&stack0x00000a80);
            }
            else {
              lVar27 = *(long *)(unaff_x19 + 0x200);
              lVar25 = *(long *)(unaff_x19 + 0x218);
              lVar26 = *(long *)(unaff_x19 + 0x210);
              unaff_x24[9] = *(long *)(unaff_x19 + 0x208);
              unaff_x24[8] = lVar27;
              unaff_x24[0xb] = lVar25;
              unaff_x24[10] = lVar26;
              lVar27 = *(long *)(unaff_x19 + 0x220);
              lVar25 = *(long *)(unaff_x19 + 0x238);
              lVar26 = *(long *)(unaff_x19 + 0x230);
              unaff_x24[0xd] = *(long *)(unaff_x19 + 0x228);
              unaff_x24[0xc] = lVar27;
              unaff_x24[0xf] = lVar25;
              unaff_x24[0xe] = lVar26;
              lVar27 = *(long *)(unaff_x19 + 0x1c0);
              lVar25 = *(long *)(unaff_x19 + 0x1d8);
              lVar26 = *(long *)(unaff_x19 + 0x1d0);
              unaff_x24[1] = *(long *)(unaff_x19 + 0x1c8);
              *unaff_x24 = lVar27;
              unaff_x24[3] = lVar25;
              unaff_x24[2] = lVar26;
              lVar27 = *(long *)(unaff_x19 + 0x1e0);
              lVar25 = *(long *)(unaff_x19 + 0x1f8);
              lVar26 = *(long *)(unaff_x19 + 0x1f0);
              unaff_x24[5] = *(long *)(unaff_x19 + 0x1e8);
              unaff_x24[4] = lVar27;
              unaff_x24[7] = lVar25;
              unaff_x24[6] = lVar26;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                if (1 < bRam000000010b62c6d0 - 1) {
                  if (bRam000000010b62c6d0 != 0) {
                    cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf69e6e389aa66ab6E
                                       );
                    unaff_x24 = (long *)&stack0x00000a80;
                    if (cVar10 != '\0') goto LAB_100a22a60;
                  }
                  goto LAB_100a22e44;
                }
LAB_100a22a60:
                uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf69e6e389aa66ab6E
                                   );
                if ((uVar14 & 1) == 0) goto LAB_100a22e44;
                FUN_100a24f08(&stack0x000007f0);
              }
              else {
LAB_100a22e44:
                uVar22 = 
                ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf69e6e389aa66ab6E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x000002a8);
                  if (iVar13 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (uVar22,puVar6,puVar19,&stack0x00000560,&stack0x000007f0);
                  }
                }
              }
              unaff_x28 = (long *)&stack0x000007f0;
              FUN_100e37c3c(&stack0x00000a80);
            }
            goto LAB_100a22624;
          }
          *(undefined1 *)(unaff_x19 + 0x3b3) = 1;
          *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(unaff_x19 + 0x1c8);
          *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x1c0);
          *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x1d8);
          *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 0x1d0);
          *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x208);
          *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x200);
          *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x218);
          *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x210);
          *(undefined8 *)(unaff_x19 + 0x490) = *(undefined8 *)(unaff_x19 + 0x1e8);
          *(undefined8 *)(unaff_x19 + 0x488) = *(undefined8 *)(unaff_x19 + 0x1e0);
          *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x1f8);
          *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x1f0);
          lVar26 = *(long *)(unaff_x19 + 0xb8);
          if (*(long *)(lVar26 + 0x58) == 0) {
LAB_100a21e5c:
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
              if (1 < bRam000000010b62c670 - 1) {
                if (bRam000000010b62c670 != 0) {
                  cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd353a6a08722a6a1E
                                     );
                  unaff_x24 = (long *)&stack0x00000a80;
                  if (cVar10 != '\0') goto LAB_100a21e90;
                }
                goto LAB_100a224d8;
              }
LAB_100a21e90:
              uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd353a6a08722a6a1E
                                 );
              if ((uVar14 & 1) == 0) goto LAB_100a224d8;
              FUN_100a24b54(&stack0x00000a80);
            }
            else {
LAB_100a224d8:
              uVar22 = 
              ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd353a6a08722a6a1E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar19 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar19 = &UNK_10b3c24c8;
                }
                puVar6 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar6 = &UNK_109adfc03;
                }
                iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000238);
                if (iVar13 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar22,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
                }
              }
            }
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x19 + 0x470);
            lVar30 = *(long *)(unaff_x19 + 0x478);
            uVar15 = FUN_100e8e738(*(undefined8 *)(lVar26 + 0x60),*(undefined8 *)(lVar26 + 0x68),
                                   uVar18,lVar30);
            lVar25 = 0;
            lVar32 = *(long *)(lVar26 + 0x40);
            uVar17 = *(ulong *)(lVar26 + 0x48);
            bVar42 = (byte)(uVar15 >> 0x39);
            uVar15 = uVar15 & uVar17;
            uVar22 = *(undefined8 *)(lVar32 + uVar15);
            uVar14 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar42),
                              CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar42),
                                       CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar42),
                                                CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar42),
                                                         CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                                   bVar42),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar42),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar42),
                                                           -((byte)uVar22 == bVar42)))))))) &
                     0x8080808080808080;
            while( true ) {
              while (uVar14 == 0) {
                bVar31 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar22 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar22 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar22 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar22 >> 8) ==
                                                                     -1),-((char)uVar22 == -1)))))))
                                            ),1);
                if ((bVar31 & 1) != 0) goto LAB_100a21e5c;
                lVar25 = lVar25 + 8;
                uVar15 = uVar15 + lVar25 & uVar17;
                uVar22 = *(undefined8 *)(lVar32 + uVar15);
                uVar14 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar42),
                                  CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar42),
                                           CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar42),
                                                    CONCAT14(-((byte)((ulong)uVar22 >> 0x20) ==
                                                              bVar42),CONCAT13(-((byte)((ulong)
                                                  uVar22 >> 0x18) == bVar42),
                                                  CONCAT12(-((byte)((ulong)uVar22 >> 0x10) == bVar42
                                                            ),CONCAT11(-((byte)((ulong)uVar22 >> 8)
                                                                        == bVar42),
                                                                       -((byte)uVar22 == bVar42)))))
                                                  ))) & 0x8080808080808080;
              }
              uVar8 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              lVar26 = lVar32 + (uVar15 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
                                uVar17) * -0x20;
              if ((lVar30 == *(long *)(lVar26 + -0x18)) &&
                 (iVar13 = _memcmp(uVar18,*(undefined8 *)(lVar26 + -0x20),lVar30), iVar13 == 0))
              break;
              uVar14 = uVar14 - 1 & uVar14;
              unaff_x24 = (long *)&stack0x00000a80;
            }
            *(undefined1 *)(unaff_x19 + 0x3c8) = 0;
            plVar45 = *(long **)(unaff_x19 + 0x100);
            lVar25 = *plVar45;
            *plVar45 = lVar25 + 1;
            if (lVar25 < 0) goto LAB_100a23be0;
            uVar22 = *(undefined8 *)(unaff_x19 + 0x468);
            uVar21 = (undefined1)*(undefined8 *)(unaff_x19 + 0x470);
            uVar46 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0x470) >> 8);
            *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
            auVar41 = (**(code **)(*(long *)(lVar26 + -8) + 0x28))
                                (*(undefined8 *)(lVar26 + -0x10),plVar45,&stack0x00000a88);
            puVar24 = (undefined8 *)(unaff_x19 + 0x3d0);
            *(undefined1 (*) [16])(unaff_x19 + 0x3d0) = auVar41;
            *(long *)(unaff_x19 + 0x3e0) = unaff_x19 + 200;
            *(undefined1 *)(unaff_x19 + 0x450) = 0;
            *(byte **)(unaff_x19 + 0x458) = extraout_x9;
            *(undefined8 **)(unaff_x19 + 0x460) = puVar24;
            unaff_x24 = (long *)&stack0x00000a80;
            if (*(char *)(lVar27 + 0x48) == '\x01') {
              if (*(char *)(lVar27 + 0x44) != '\x01' || *(char *)(lVar27 + 0x45) != '\0')
              goto LAB_100a206e8;
LAB_100a1ffc8:
              FUN_10610bbb4(*(undefined8 *)*unaff_x25,((undefined8 *)*unaff_x25)[1]);
LAB_100a208b4:
              uVar22 = 1;
              uVar21 = 8;
              goto LAB_100a23be8;
            }
            if (*(char *)(lVar27 + 0x48) != '\x02') {
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar27,&DAT_100c35d48);
              *(undefined1 *)(lVar27 + 0x48) = 1;
              if (*(char *)(lVar27 + 0x44) == '\x01' && *(char *)(lVar27 + 0x45) == '\0')
              goto LAB_100a1ffc8;
            }
LAB_100a206e8:
            lVar27 = (*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
            if (*(char *)(lVar27 + 0x48) != '\x01') {
              if (*(char *)(lVar27 + 0x48) == '\x02') {
                FUN_107c05e20(&UNK_10b4cce20);
                goto LAB_100a23be0;
              }
              __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                        (lVar27,&DAT_1060edbcc);
              *(undefined1 *)(lVar27 + 0x48) = 1;
            }
            if ((*(uint *)(lVar27 + 0x38) & 1) == 0) {
              uVar11 = FUN_1060fcce0();
              uVar14 = extraout_x1;
            }
            else {
              uVar11 = *(uint *)(lVar27 + 0x3c);
              uVar14 = (ulong)*(uint *)(lVar27 + 0x40);
            }
            uVar11 = uVar11 ^ uVar11 << 0x11;
            uVar12 = (uint)uVar14;
            uVar11 = (uint)(uVar14 >> 0x10) & 0xffff ^ uVar11 >> 7 ^ uVar12 ^ uVar11;
            *(undefined4 *)(lVar27 + 0x38) = 1;
            *(uint *)(lVar27 + 0x3c) = uVar12;
            *(uint *)(lVar27 + 0x40) = uVar11;
            bVar42 = *extraout_x9;
            if ((int)(uVar11 + uVar12) < 0) {
              bVar31 = bVar42 & 2;
              if ((bVar42 >> 1 & 1) == 0) {
                uVar12 = FUN_100fd4ba0(unaff_x19 + 0x3e0,unaff_x25);
                uVar11 = uVar12 & 0xff;
                if ((uVar12 & 0xff) == 2) {
                  bVar42 = *extraout_x9;
                  goto LAB_100a207a0;
                }
LAB_100a2081c:
                uStack0000000000000010 = uVar11;
                *extraout_x9 = *extraout_x9 | 2;
                plVar23 = (long *)0x8000000000000001;
              }
              else {
LAB_100a207a0:
                if ((bVar42 & 1) == 0) {
                  (**(code **)(*(long *)(unaff_x19 + 0x3d8) + 0x18))
                            (&stack0x00000a80,*puVar24,unaff_x25);
                  if (plVar45 != (long *)0x8000000000000001) goto LAB_100a20888;
                  goto LAB_100a208b4;
                }
LAB_100a20834:
                plVar23 = (long *)0x8000000000000002;
                if (bVar31 == 0) goto LAB_100a208b4;
              }
            }
            else {
              bVar31 = bVar42 & 1;
              if ((bVar42 & 1) != 0) {
LAB_100a20800:
                if ((bVar42 >> 1 & 1) != 0) goto LAB_100a20834;
                uVar12 = FUN_100fd4ba0(unaff_x19 + 0x3e0,unaff_x25);
                uVar11 = uVar12 & 0xff;
                if ((uVar12 & 0xff) != 2) goto LAB_100a2081c;
                goto LAB_100a208b4;
              }
              (**(code **)(*(long *)(unaff_x19 + 0x3d8) + 0x18))
                        (&stack0x00000a80,*puVar24,unaff_x25);
              if (plVar45 == (long *)0x8000000000000001) {
                bVar42 = *extraout_x9;
                goto LAB_100a20800;
              }
LAB_100a20888:
              uStack0000000000000010 = (uint)(byte)uVar22;
              in_stack_000007f0 = (undefined1)((ulong)uVar22 >> 8);
              in_stack_000007f1 = (undefined6)((ulong)uVar22 >> 0x10);
              *extraout_x9 = *extraout_x9 | 1;
              plVar23 = plVar45;
              in_stack_000007f7 = uVar21;
              in_stack_000007f8 = uVar46;
              if (plVar45 == (long *)0x8000000000000003) goto LAB_100a208b4;
            }
            FUN_100dc5560(unaff_x19 + 0x3d0);
            plVar5 = plVar23;
            if (plVar23 < (long *)0x8000000000000001) {
              plVar5 = (long *)0x0;
            }
            if (((ulong)plVar5 & 0x7fffffffffffffff) == 0) {
              if (plVar23 == (long *)0x8000000000000000) {
                *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
                goto LAB_100a21644;
              }
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                 (((bRam000000010b62c628 - 1 < 2 ||
                   ((bRam000000010b62c628 != 0 &&
                    (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89ac1e0dff464909E
                                        ), cVar10 != '\0')))) &&
                  (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89ac1e0dff464909E
                                      ), (uVar14 & 1) != 0)))) {
                FUN_100a24a18(&stack0x00000a80);
              }
              else {
                uVar22 = 
                ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h89ac1e0dff464909E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000278);
                  if (iVar13 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (uVar22,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
                  }
                }
              }
              unaff_x24 = (long *)&stack0x00000a80;
              if (plVar23 != (long *)0x0) {
                _free(CONCAT71(CONCAT61(in_stack_000007f1,in_stack_000007f0),
                               (char)uStack0000000000000010));
              }
            }
            else {
              if (((ulong)plVar5 & 0x7fffffffffffffff) != 1) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca2bde,0x6b,&UNK_10b22a9a0);
                goto LAB_100a23be0;
              }
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                 ((bRam000000010b62c6b8 - 1 < 2 ||
                  ((bRam000000010b62c6b8 != 0 &&
                   (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf6476cd098068b41E
                                       ), cVar10 != '\0')))))) {
                unaff_x24 = (long *)&stack0x00000a80;
                uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf6476cd098068b41E
                                   );
                if ((uVar14 & 1) != 0) {
                  FUN_100a25044(&stack0x00000a80);
                  goto LAB_100a225ec;
                }
              }
              uVar22 = 
              ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf6476cd098068b41E
              ;
              unaff_x24 = (long *)&stack0x00000a80;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar19 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar19 = &UNK_10b3c24c8;
                }
                puVar6 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar6 = &UNK_109adfc03;
                }
                iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000260);
                if (iVar13 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar22,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
                }
              }
            }
          }
LAB_100a225ec:
          unaff_x28 = (long *)&stack0x000007f0;
          if ((*(byte *)(unaff_x19 + 0x3b3) & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x468) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x470));
            }
            if (*(long *)(unaff_x19 + 0x480) != -0x7ffffffffffffffb) {
              FUN_100de6690(unaff_x19 + 0x480);
            }
          }
          *(undefined1 *)(unaff_x19 + 0x3b3) = 0;
          goto LAB_100a22624;
        }
        *(undefined1 *)(unaff_x19 + 0x3b2) = 1;
        *(undefined1 *)(unaff_x19 + 0x3bc) = 1;
        *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x200);
        *(undefined8 *)(unaff_x19 + 0x348) = *(undefined8 *)(unaff_x19 + 0x1f8);
        *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x19 + 0x210);
        *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x208);
        *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 600);
        *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x240);
        *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x19 + 0x238);
        *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x250);
        *(undefined8 *)(unaff_x19 + 0x398) = *(undefined8 *)(unaff_x19 + 0x248);
        *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x19 + 0x220);
        *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 0x218);
        *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x230);
        *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x19 + 0x228);
        *(undefined8 *)(unaff_x19 + 0x310) = *(undefined8 *)(unaff_x19 + 0x1c0);
        *(ulong *)(unaff_x19 + 0x308) = *puVar16;
        *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x1d0);
        *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x1c8);
        *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x1e0);
        *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x1d8);
        *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x1f0);
        *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x1e8);
        lVar26 = *(long *)(unaff_x19 + 0xb8);
        if (*(long *)(lVar26 + 0x28) != 0) {
          uVar18 = *(undefined8 *)(unaff_x19 + 0x310);
          lVar30 = *(long *)(unaff_x19 + 0x318);
          uVar15 = FUN_100e8e738(*(undefined8 *)(lVar26 + 0x30),*(undefined8 *)(lVar26 + 0x38),
                                 uVar18,lVar30);
          lVar25 = 0;
          lVar32 = *(long *)(lVar26 + 0x10);
          uVar17 = *(ulong *)(lVar26 + 0x18);
          bVar42 = (byte)(uVar15 >> 0x39);
          uVar15 = uVar15 & uVar17;
          uVar22 = *(undefined8 *)(lVar32 + uVar15);
          uVar14 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar42),
                            CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar42),
                                     CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar42),
                                              CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar42),
                                                       CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                                 bVar42),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar42),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar42),
                                                           -((byte)uVar22 == bVar42)))))))) &
                   0x8080808080808080;
          do {
            for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
              uVar8 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              lVar26 = lVar32 + (uVar15 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) &
                                uVar17) * -0x20;
              if ((lVar30 == *(long *)(lVar26 + -0x18)) &&
                 (iVar13 = _memcmp(uVar18,*(undefined8 *)(lVar26 + -0x20),lVar30), iVar13 == 0)) {
                *(undefined1 *)(unaff_x19 + 0x3b1) = 0;
                plVar45 = *(long **)(unaff_x19 + 0x100);
                lVar25 = *plVar45;
                *plVar45 = lVar25 + 1;
                if (lVar25 < 0) goto LAB_100a23be0;
                uVar29 = *(undefined8 *)(unaff_x19 + 0x370);
                uVar18 = *(undefined8 *)(unaff_x19 + 0x368);
                uVar22 = *(undefined8 *)(unaff_x19 + 0x378);
                unaff_x24 = (long *)&stack0x00000a80;
                lVar38 = *(long *)(unaff_x19 + 0x330);
                lVar37 = *(long *)(unaff_x19 + 0x328);
                lVar30 = *(long *)(unaff_x19 + 0x340);
                lVar25 = *(long *)(unaff_x19 + 0x338);
                lVar33 = *(long *)(unaff_x19 + 0x350);
                lVar32 = *(long *)(unaff_x19 + 0x348);
                lVar40 = *(long *)(unaff_x19 + 0x360);
                lVar39 = *(long *)(unaff_x19 + 0x358);
                lVar34 = *(long *)(unaff_x19 + 0x310);
                uVar14 = *(ulong *)(unaff_x19 + 0x308);
                lVar36 = *(long *)(unaff_x19 + 800);
                lVar35 = *(long *)(unaff_x19 + 0x318);
                uVar21 = (undefined1)lVar34;
                uVar46 = (undefined7)((ulong)lVar34 >> 8);
                *(undefined1 *)(unaff_x19 + 0x3b2) = 0;
                *(undefined1 *)(unaff_x19 + 0x3bc) = 0;
                auVar41 = (**(code **)(*(long *)(lVar26 + -8) + 0x28))
                                    (*(undefined8 *)(lVar26 + -0x10),plVar45,&stack0x00000a88);
                pbVar2 = (byte *)(unaff_x19 + 0x3b1);
                *(undefined1 (*) [16])(unaff_x19 + 0x3c8) = auVar41;
                *(long *)(unaff_x19 + 0x3d8) = unaff_x19 + 200;
                *(undefined1 *)(unaff_x19 + 0x448) = 0;
                *(byte **)(unaff_x19 + 0x450) = pbVar2;
                *(byte **)(unaff_x19 + 0x458) = extraout_x9;
                if (*(char *)(lVar27 + 0x48) == '\x01') {
                  if (*(char *)(lVar27 + 0x44) != '\x01' || *(char *)(lVar27 + 0x45) != '\0')
                  goto LAB_100a20d34;
LAB_100a20038:
                  FUN_10610bbb4(*(undefined8 *)*unaff_x25,((undefined8 *)*unaff_x25)[1]);
LAB_100a21008:
                  uVar22 = 1;
                  uVar21 = 5;
                  goto LAB_100a23be8;
                }
                if (*(char *)(lVar27 + 0x48) != '\x02') {
                  __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                            (lVar27,&DAT_100c35d48);
                  *(undefined1 *)(lVar27 + 0x48) = 1;
                  if (*(char *)(lVar27 + 0x44) == '\x01' && *(char *)(lVar27 + 0x45) == '\0')
                  goto LAB_100a20038;
                }
LAB_100a20d34:
                lVar27 = (*
                         ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                         )();
                if (*(char *)(lVar27 + 0x48) != '\x01') {
                  if (*(char *)(lVar27 + 0x48) == '\x02') {
                    FUN_107c05e20(&UNK_10b4cce20);
                    goto LAB_100a23be0;
                  }
                  __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                            (lVar27,&DAT_1060edbcc);
                  *(undefined1 *)(lVar27 + 0x48) = 1;
                }
                if ((*(uint *)(lVar27 + 0x38) & 1) == 0) {
                  uVar11 = FUN_1060fcce0();
                  uVar17 = extraout_x1_00;
                }
                else {
                  uVar11 = *(uint *)(lVar27 + 0x3c);
                  uVar17 = (ulong)*(uint *)(lVar27 + 0x40);
                }
                uVar11 = uVar11 ^ uVar11 << 0x11;
                uVar12 = (uint)uVar17;
                uVar11 = (uint)(uVar17 >> 0x10) & 0xffff ^ uVar11 >> 7 ^ uVar12 ^ uVar11;
                *(undefined4 *)(lVar27 + 0x38) = 1;
                *(uint *)(lVar27 + 0x3c) = uVar12;
                *(uint *)(lVar27 + 0x40) = uVar11;
                bVar42 = *pbVar2;
                if ((int)(uVar11 + uVar12) < 0) {
                  bVar31 = bVar42 & 2;
                  if ((bVar42 >> 1 & 1) == 0) {
                    uVar11 = FUN_100fd4ba0(extraout_x9 + 0x10,unaff_x25);
                    uVar11 = uVar11 & 0xff;
                    if (uVar11 == 2) {
                      bVar42 = *pbVar2;
                      goto LAB_100a20dec;
                    }
LAB_100a20e68:
                    *pbVar2 = *pbVar2 | 2;
                    plVar23 = (long *)0x8000000000000004;
                    uStack0000000000000014 = uVar11;
                  }
                  else {
LAB_100a20dec:
                    if ((bVar42 & 1) == 0) {
                      (**(code **)(*(long *)(extraout_x9 + 8) + 0x18))
                                (&stack0x00000a80,*(undefined8 *)extraout_x9,unaff_x25);
                      if (plVar45 != (long *)0x8000000000000004) goto LAB_100a20fb4;
                      goto LAB_100a21008;
                    }
LAB_100a20e80:
                    plVar23 = (long *)0x8000000000000005;
                    if (bVar31 == 0) goto LAB_100a21008;
                  }
                }
                else {
                  bVar31 = bVar42 & 1;
                  if ((bVar42 & 1) != 0) {
LAB_100a20e4c:
                    if ((bVar42 >> 1 & 1) != 0) goto LAB_100a20e80;
                    uVar11 = FUN_100fd4ba0(extraout_x9 + 0x10,unaff_x25);
                    uVar11 = uVar11 & 0xff;
                    if (uVar11 != 2) goto LAB_100a20e68;
                    goto LAB_100a21008;
                  }
                  (**(code **)(*(long *)(extraout_x9 + 8) + 0x18))
                            (&stack0x00000a80,*(undefined8 *)extraout_x9,unaff_x25);
                  if (plVar45 == (long *)0x8000000000000004) {
                    bVar42 = *pbVar2;
                    goto LAB_100a20e4c;
                  }
LAB_100a20fb4:
                  in_stack_00000838 = CONCAT17((char)lVar39,(int7)((ulong)lVar33 >> 8));
                  in_stack_00000830 = CONCAT17((char)lVar33,(int7)((ulong)lVar32 >> 8));
                  in_stack_00000848 = CONCAT17((char)uVar18,(int7)((ulong)lVar40 >> 8));
                  in_stack_00000840 = CONCAT17((char)lVar40,(int7)((ulong)lVar39 >> 8));
                  in_stack_00000850 = CONCAT17((char)uVar29,(int7)((ulong)uVar18 >> 8));
                  in_stack_00000808 = CONCAT17((char)lVar37,(int7)((ulong)lVar36 >> 8));
                  in_stack_00000800 = CONCAT17((char)lVar36,(int7)((ulong)lVar35 >> 8));
                  in_stack_000007f0 = (undefined1)(uVar14 >> 8);
                  in_stack_000007f1 = (undefined6)(uVar14 >> 0x10);
                  in_stack_00000818 = CONCAT17((char)lVar25,(int7)((ulong)lVar38 >> 8));
                  in_stack_00000810 = CONCAT17((char)lVar38,(int7)((ulong)lVar37 >> 8));
                  in_stack_00000828 = CONCAT17((char)lVar32,(int7)((ulong)lVar30 >> 8));
                  in_stack_00000820 = CONCAT17((char)lVar30,(int7)((ulong)lVar25 >> 8));
                  *pbVar2 = *pbVar2 | 1;
                  plVar23 = plVar45;
                  uStack0000000000000014 = (uint)(byte)uVar14;
                  in_stack_000007f7 = uVar21;
                  in_stack_000007f8 = uVar46;
                  in_stack_000007ff = (char)lVar35;
                  in_stack_00000858 = (int7)((ulong)uVar29 >> 8);
                  in_stack_0000085f = (char)uVar22;
                  in_stack_00000860 = (int7)((ulong)uVar22 >> 8);
                  if (plVar45 == (long *)0x8000000000000006) goto LAB_100a21008;
                }
                in_stack_000001a8 = CONCAT17(in_stack_000007ff,in_stack_000007f8);
                in_stack_000001a0 =
                     CONCAT17(in_stack_000007f7,CONCAT61(in_stack_000007f1,in_stack_000007f0));
                in_stack_000001b0 = in_stack_00000800;
                in_stack_000001b8 = in_stack_00000808;
                in_stack_000001c0 = in_stack_00000810;
                in_stack_000001c8 = in_stack_00000818;
                in_stack_000001d0 = in_stack_00000820;
                in_stack_000001d8 = in_stack_00000828;
                in_stack_000001e0 = in_stack_00000830;
                in_stack_000001e8 = in_stack_00000838;
                FUN_100dc5560((undefined8 *)(unaff_x19 + 0x3c8));
                lVar27 = 0;
                if ((long *)0x8000000000000002 < plVar23) {
                  lVar27 = (long)plVar23 + 0x7ffffffffffffffd;
                }
                if (lVar27 == 0) {
                  *(long **)(unaff_x19 + 0x558) = plVar23;
                  *(char *)(unaff_x19 + 0x560) = (char)uStack0000000000000014;
                  *(ulong *)(unaff_x19 + 0x5d0) = CONCAT71(in_stack_00000860,in_stack_0000085f);
                  *(long *)(unaff_x19 + 0x5a9) = in_stack_000001e8;
                  *(long *)(unaff_x19 + 0x5a1) = in_stack_000001e0;
                  *(long *)(unaff_x19 + 0x5b9) = in_stack_00000848;
                  *(long *)(unaff_x19 + 0x5b1) = in_stack_00000840;
                  *(ulong *)(unaff_x19 + 0x5c9) = CONCAT17(in_stack_0000085f,in_stack_00000858);
                  *(long *)(unaff_x19 + 0x5c1) = in_stack_00000850;
                  *(undefined8 *)(unaff_x19 + 0x569) = in_stack_000001a8;
                  *(undefined8 *)(unaff_x19 + 0x561) = in_stack_000001a0;
                  *(long *)(unaff_x19 + 0x579) = in_stack_000001b8;
                  *(long *)(unaff_x19 + 0x571) = in_stack_000001b0;
                  *(long *)(unaff_x19 + 0x589) = in_stack_000001c8;
                  *(long *)(unaff_x19 + 0x581) = in_stack_000001c0;
                  *(long *)(unaff_x19 + 0x599) = in_stack_000001d8;
                  *(long *)(unaff_x19 + 0x591) = in_stack_000001d0;
                  if (plVar23 == (long *)0x8000000000000003) goto LAB_100a21d28;
                  *(undefined8 *)(unaff_x19 + 0x410) = *(undefined8 *)(unaff_x19 + 0x5a0);
                  *(undefined8 *)(unaff_x19 + 0x408) = *(undefined8 *)(unaff_x19 + 0x598);
                  *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x5b0);
                  *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x5a8);
                  *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(unaff_x19 + 0x5c0);
                  *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x5b8);
                  *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x5d0);
                  *(undefined8 *)(unaff_x19 + 0x438) = *(undefined8 *)(unaff_x19 + 0x5c8);
                  *(undefined8 *)(unaff_x19 + 0x3d0) = *(undefined8 *)(unaff_x19 + 0x560);
                  *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x558);
                  *(undefined8 *)(unaff_x19 + 0x3e0) = *(undefined8 *)(unaff_x19 + 0x570);
                  *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x568);
                  *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0x580);
                  *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x578);
                  *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x19 + 0x590);
                  *(undefined8 *)(unaff_x19 + 0x3f8) = *(undefined8 *)(unaff_x19 + 0x588);
                  *(long *)(unaff_x19 + 0x448) = unaff_x19 + 0xf8;
                  *(undefined1 *)(unaff_x19 + 0x550) = 0;
                  FUN_100fce618(&stack0x00000a80,unaff_x19 + 0x3c8,unaff_x25);
                  if (plVar45 == (long *)0x8000000000000004) {
                    uVar22 = 1;
                    uVar21 = 6;
                    goto LAB_100a23be8;
                  }
                  in_stack_00000858 = (undefined7)uVar18;
                  in_stack_0000085f = (undefined1)((ulong)uVar18 >> 0x38);
                  in_stack_00000860 = (undefined7)uVar29;
                  in_stack_000007f8 = (undefined7)uVar14;
                  in_stack_000007ff = (undefined1)(uVar14 >> 0x38);
                  in_stack_000007f0 = SUB81(plVar45,0);
                  in_stack_000007f1 = (undefined6)((ulong)plVar45 >> 8);
                  in_stack_000007f7 = (undefined1)((ulong)plVar45 >> 0x38);
                  FUN_100d39b10(unaff_x19 + 0x3c8);
                  in_stack_00000800 = lVar34;
                  in_stack_00000808 = lVar35;
                  in_stack_00000810 = lVar36;
                  in_stack_00000818 = lVar37;
                  in_stack_00000820 = lVar38;
                  in_stack_00000828 = lVar25;
                  in_stack_00000830 = lVar30;
                  in_stack_00000838 = lVar32;
                  in_stack_00000840 = lVar33;
                  in_stack_00000848 = lVar39;
                  in_stack_00000850 = lVar40;
                  if (plVar45 == (long *)0x8000000000000003) goto LAB_100a21d28;
                  func_0x000100e26adc(&stack0x000007f0);
                  goto LAB_100a22210;
                }
                if (lVar27 != 1) {
                  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                            (&UNK_108ca2bde,0x6b,&UNK_10b22a988);
                  goto LAB_100a23be0;
                }
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                   ((bRam000000010b62c688 - 1 < 2 ||
                    ((bRam000000010b62c688 != 0 &&
                     (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa33692dc2f74f9E
                                         ), cVar10 != '\0')))))) {
                  unaff_x24 = (long *)&stack0x00000a80;
                  uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa33692dc2f74f9E
                                     );
                  if ((uVar14 & 1) != 0) {
                    FUN_100a24dcc(&stack0x00000a80);
                    goto LAB_100a22210;
                  }
                }
                uVar22 = 
                ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdaa33692dc2f74f9E
                ;
                unaff_x24 = (long *)&stack0x00000a80;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puVar19 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar19 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000220);
                  if (iVar13 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (uVar22,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
                  }
                }
                goto LAB_100a22210;
              }
            }
            bVar31 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar22 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar22 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar22 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar22 >> 8) ==
                                                                     -1),-((char)uVar22 == -1)))))))
                                        ),1);
            unaff_x24 = (long *)&stack0x00000a80;
            if ((bVar31 & 1) != 0) break;
            lVar25 = lVar25 + 8;
            uVar15 = uVar15 + lVar25 & uVar17;
            uVar22 = *(undefined8 *)(lVar32 + uVar15);
            uVar14 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar42),
                              CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar42),
                                       CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar42),
                                                CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar42),
                                                         CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                                   bVar42),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar42),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar42),
                                                           -((byte)uVar22 == bVar42)))))))) &
                     0x8080808080808080;
          } while( true );
        }
        *(undefined1 *)(unaff_x19 + 0x3bc) = 0;
        uVar29 = *(undefined8 *)(unaff_x19 + 800);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x328);
        uVar22 = *(undefined8 *)(unaff_x19 + 0x330);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000a80,s__exec_server_stub_does_not_imple_108ace424,&stack0x000002d8);
        lVar26 = unaff_x24[1];
        lVar27 = *unaff_x24;
        *(ulong *)(extraout_x9 + 0x10) = CONCAT71(uVar46,uVar21);
        *(long *)(extraout_x9 + 8) = lVar26;
        *(long *)extraout_x9 = lVar27;
        *(undefined8 *)(unaff_x19 + 0x3e0) = 0x8000000000000005;
        *(undefined8 *)(unaff_x19 + 0x428) = 0xffffffffffff80a7;
        *(undefined8 *)(unaff_x19 + 0x430) = uVar29;
        *(undefined8 *)(unaff_x19 + 0x438) = uVar18;
        *(undefined8 *)(unaff_x19 + 0x440) = uVar22;
        *(long *)(unaff_x19 + 0x448) = unaff_x19 + 0xf8;
        *(undefined1 *)(unaff_x19 + 0x550) = 0;
        FUN_100fce618(&stack0x00000a80,unaff_x19 + 0x3c8,unaff_x25);
        if (plVar45 == (long *)0x8000000000000004) {
          uVar22 = 1;
          uVar21 = 7;
          goto LAB_100a23be8;
        }
        in_stack_00000838 = unaff_x24[9];
        in_stack_00000830 = unaff_x24[8];
        in_stack_00000848 = unaff_x24[0xb];
        in_stack_00000840 = unaff_x24[10];
        in_stack_00000850 = unaff_x24[0xc];
        in_stack_00000858 = (undefined7)unaff_x24[0xd];
        in_stack_0000085f = (undefined1)((ulong)unaff_x24[0xd] >> 0x38);
        in_stack_00000860 = (undefined7)unaff_x24[0xe];
        lVar27 = *unaff_x24;
        in_stack_00000808 = unaff_x24[3];
        in_stack_00000800 = unaff_x24[2];
        in_stack_000007f8 = (undefined7)unaff_x24[1];
        in_stack_000007ff = (undefined1)((ulong)unaff_x24[1] >> 0x38);
        in_stack_000007f0 = (undefined1)lVar27;
        in_stack_000007f1 = (undefined6)((ulong)lVar27 >> 8);
        in_stack_000007f7 = (undefined1)((ulong)lVar27 >> 0x38);
        in_stack_00000818 = unaff_x24[5];
        in_stack_00000810 = unaff_x24[4];
        in_stack_00000828 = unaff_x24[7];
        in_stack_00000820 = unaff_x24[6];
        FUN_100d39b10(unaff_x19 + 0x3c8);
        if (lVar27 != -0x7ffffffffffffffd) {
          func_0x000100e26adc(&stack0x000007f0);
LAB_100a22210:
          unaff_x28 = (long *)&stack0x000007f0;
          if ((((*(byte *)(unaff_x19 + 0x3b2) & 1) != 0) &&
              ((*(long *)(unaff_x19 + 0x308) == 0 ||
               (_free(*(undefined8 *)(unaff_x19 + 0x310)), (*(byte *)(unaff_x19 + 0x3b2) & 1) != 0))
              )) && (((*(long *)(unaff_x19 + 0x368) == -0x7ffffffffffffffb ||
                      (FUN_100de6690(unaff_x19 + 0x368), (*(byte *)(unaff_x19 + 0x3b2) & 1) != 0))
                     && (lVar27 = *(long *)(unaff_x19 + 0x338), lVar27 != -0x7fffffffffffffff)))) {
            if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x340));
            }
            if ((*(long *)(unaff_x19 + 0x350) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x350) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x358));
            }
          }
          *(undefined1 *)(unaff_x19 + 0x3b2) = 0;
          *(undefined1 *)(unaff_x19 + 0x3bc) = 0;
          goto LAB_100a22624;
        }
LAB_100a21d28:
        if (((((*(byte *)(unaff_x19 + 0x3b2) & 1) != 0) &&
             ((*(long *)(unaff_x19 + 0x308) == 0 ||
              (_free(*(undefined8 *)(unaff_x19 + 0x310)), (*(byte *)(unaff_x19 + 0x3b2) & 1) != 0)))
             ) && ((*(long *)(unaff_x19 + 0x368) == -0x7ffffffffffffffb ||
                   (FUN_100de6690(unaff_x19 + 0x368), (*(byte *)(unaff_x19 + 0x3b2) & 1) != 0)))) &&
           (lVar27 = *(long *)(unaff_x19 + 0x338), lVar27 != -0x7fffffffffffffff)) {
          if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x340));
          }
          if ((*(long *)(unaff_x19 + 0x350) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x350) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x358));
          }
        }
        *(undefined1 *)(unaff_x19 + 0x3b2) = 0;
        *(undefined1 *)(unaff_x19 + 0x3bc) = 0;
      } while( true );
    }
    func_0x000100e26adc(&stack0x000007f0);
    *(undefined1 *)(unaff_x19 + 0x3bd) = 0;
    goto LAB_100a22624;
  }
  uVar22 = 1;
  uVar21 = 4;
  goto LAB_100a23be8;
code_r0x000100a2188c:
  if (lVar26 != 1) goto LAB_100a2240c;
  *(undefined1 *)(unaff_x19 + 0x3b4) = 0;
  *(undefined1 *)(unaff_x19 + 0x3bd) = 1;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x1c8);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x1c0);
  *(undefined8 *)(extraout_x9 + 0x10) = *(undefined8 *)(unaff_x19 + 0x1d0);
  *(undefined8 *)(extraout_x9 + 8) = uVar18;
  *(undefined8 *)extraout_x9 = uVar22;
  unaff_x26 = extraout_x9;
  if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_100a21fc4;
  unaff_x21 = (long *)&
                      __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
  ;
  if (1 < bRam000000010b62c6a0 - 1) {
    if (bRam000000010b62c6a0 == 0) goto LAB_100a21fc4;
    cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                       (&
                        __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
                       );
    unaff_x24 = (long *)&stack0x00000a80;
    if (cVar10 == '\0') goto LAB_100a21fc4;
  }
  unaff_x28 = (long *)&stack0x000007f0;
  uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                     (
                     ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
                     );
  param_1 = 
  ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
  ;
  if ((uVar14 & 1) != 0) goto code_r0x000100a21904;
LAB_100a21fc4:
  lVar27 = 
  ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
  ;
  unaff_x28 = (long *)&stack0x000007f0;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000160 =
         *(long *)(
                  ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
                  + 0x20);
    in_stack_00000168 =
         *(undefined8 *)
          (
          ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
          + 0x28);
    in_stack_00000158 = 2;
    puVar19 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar19 = &UNK_10b3c24c8;
    }
    puVar6 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar6 = &UNK_109adfc03;
    }
    iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x00000158);
    if (iVar13 != 0) {
      in_stack_00000808 =
           ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he8de19dd92efec9bE
           + 0x30;
      in_stack_00000170 = (long *)&stack0x00001060;
      in_stack_00000178 = &UNK_10b208fd0;
      in_stack_000007f0 = 1;
      in_stack_000007f1 = 0;
      in_stack_000007f7 = 0;
      in_stack_000007f8 = SUB87(&stack0x00000170,0);
      in_stack_000007ff = (undefined1)((ulong)&stack0x00000170 >> 0x38);
      in_stack_00000800 = 1;
      unaff_x24[7] = in_stack_00000160;
      unaff_x24[6] = in_stack_00000158;
      uVar22 = *(undefined8 *)(lVar27 + 0x58);
      plVar45 = (long *)0x1;
      if (*(long *)(lVar27 + 0x50) == 0) {
        plVar45 = (long *)0x2;
      }
      uVar21 = (undefined1)uVar22;
      uVar46 = (undefined7)((ulong)uVar22 >> 8);
      (**(code **)(puVar19 + 0x20))(puVar6,&stack0x00000a80);
    }
  }
  goto LAB_100a2213c;
LAB_100a2240c:
  *(undefined1 *)(unaff_x19 + 0x3b6) = 0;
  lVar27 = *(long *)(unaff_x19 + 0x1c0);
  if (lVar27 != -0x8000000000000000) {
    uVar22 = *(undefined8 *)(unaff_x19 + 0x1c8);
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (1 < bRam000000010b62c640 - 1) {
        if (bRam000000010b62c640 != 0) {
          cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9562efea8ea242b9E
                             );
          unaff_x24 = (long *)&stack0x00000a80;
          if (cVar10 != '\0') goto LAB_100a22460;
        }
        goto LAB_100a22be0;
      }
LAB_100a22460:
      uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9562efea8ea242b9E
                         );
      if ((uVar14 & 1) == 0) goto LAB_100a22be0;
      FUN_100a23e3c(&stack0x00000a80);
    }
    else {
LAB_100a22be0:
      uVar18 = 
      ___ZN17codex_exec_server6server9processor14run_connection28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9562efea8ea242b9E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar19 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar19 + 0x18))(puVar6,&stack0x000002c0);
        if (iVar13 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar18,puVar6,puVar19,&stack0x000007f0,&stack0x00000a80);
        }
      }
    }
    unaff_x28 = (long *)&stack0x000007f0;
    if (lVar27 != 0) {
      _free(uVar22);
    }
  }
LAB_100a22624:
  lVar27 = 0;
  if (0x8000000000000001 < *(ulong *)(unaff_x19 + 0x1b8)) {
    lVar27 = *(ulong *)(unaff_x19 + 0x1b8) + 0x7ffffffffffffffe;
  }
  if (lVar27 == 0) {
    if ((*(byte *)(unaff_x19 + 0x3b5) & 1) != 0) {
      FUN_100e3d46c(unaff_x19 + 0x1b8);
    }
  }
  else if (lVar27 == 1) {
    if ((*(byte *)(unaff_x19 + 0x3b4) & 1) != 0) {
      uVar14 = *(ulong *)(unaff_x19 + 0x1c0);
joined_r0x000100a2267c:
      if (uVar14 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x1c8));
      }
    }
  }
  else if ((*(byte *)(unaff_x19 + 0x3b6) & 1) != 0) {
    uVar14 = *(ulong *)(unaff_x19 + 0x1c0) & 0x7fffffffffffffff;
    goto joined_r0x000100a2267c;
  }
  *(undefined2 *)(unaff_x19 + 0x3b4) = 0;
  *(undefined1 *)(unaff_x19 + 0x3b6) = 0;
LAB_100a22690:
  lVar27 = *(long *)(unaff_x19 + 0x100) + 0x10;
  *(long *)(unaff_x19 + 0x3c8) = lVar27;
  *(undefined1 *)(unaff_x19 + 0x3d8) = 0;
  *(long *)(unaff_x19 + 0x3d0) = lVar27;
  __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
            (*(long *)(unaff_x19 + 0x100) + 0x80);
  lVar27 = *(long *)(*(long *)(unaff_x19 + 0x3d0) + 0x78);
  puVar16 = (ulong *)(lVar27 + 0x30);
  LOAcquire();
  uVar14 = *puVar16;
  *puVar16 = uVar14 | 1;
  LORelease();
  if (uVar14 == 0) {
    __ZN10tokio_util4task12task_tracker16TaskTrackerInner10notify_now17hf0e4720e0b9d746dE
              (lVar27 + 0x10);
  }
  lVar27 = *(long *)(*(long *)(unaff_x19 + 0x3d0) + 0x78);
  puVar16 = (ulong *)(lVar27 + 0x10);
  uVar14 = *puVar16;
  puVar7 = (ulong *)0x0;
  if (*(long *)(lVar27 + 0x30) != 1) {
    puVar7 = puVar16;
  }
  lVar26 = unaff_x24[1];
  lVar27 = *unaff_x24;
  unaff_x28[1] = lVar26;
  *unaff_x28 = lVar27;
  *(ulong **)(unaff_x19 + 0x3e0) = puVar7;
  *(ulong **)(unaff_x19 + 1000) = puVar16;
  *(ulong *)(unaff_x19 + 0x3f0) = uVar14 >> 2;
  *(long *)(unaff_x19 + 0x400) = lVar26;
  *(long *)(unaff_x19 + 0x3f8) = lVar27;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  *(undefined8 *)(unaff_x19 + 0x418) = 0;
  *(undefined1 *)(unaff_x19 + 0x420) = 0;
  if (puVar7 != (ulong *)0x0) {
    if ((puVar7[4] != 1) && (uVar14 = FUN_1060fb82c(&stack0x00000a80,*unaff_x25), (uVar14 & 1) != 0)
       ) {
      *(undefined1 *)(unaff_x19 + 0x3d8) = 3;
      uVar22 = 1;
      uVar21 = 9;
      goto LAB_100a23be8;
    }
    *(undefined8 *)(unaff_x19 + 0x3e0) = 0;
  }
  plVar45 = (long *)(unaff_x19 + 0x3f0);
  uVar21 = (undefined1)(unaff_x19 + 0x420);
  uVar46 = (undefined7)((ulong)(unaff_x19 + 0x420) >> 8);
  uVar47 = SUB81(plVar45,0);
  uVar48 = (undefined7)((ulong)plVar45 >> 8);
  uVar49 = (undefined1)(unaff_x19 + 0x3f8);
  uVar50 = (undefined7)((ulong)(unaff_x19 + 0x3f8) >> 8);
  FUN_1060fb5d4(&stack0x00000a80);
  if (*(long *)(unaff_x19 + 0x408) != 0) {
    (**(code **)(*(long *)(unaff_x19 + 0x408) + 0x18))(*(undefined8 *)(unaff_x19 + 0x410));
  }
  __ZN17codex_exec_server6server7handler17ExecServerHandler7session17h01896cedd3421999E
            (plVar45,*(undefined8 *)(unaff_x19 + 0x3d0));
  if (*plVar45 == 0) goto LAB_100a232dc;
  *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x3f8);
  *(long *)(unaff_x19 + 0x410) = *plVar45;
  *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x408);
  *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x400);
  *(undefined8 **)(unaff_x19 + 0x3e0) = (undefined8 *)(unaff_x19 + 0x410);
  *(undefined1 *)(unaff_x19 + 1000) = 0;
  lVar27 = *(long *)(unaff_x19 + 0x418);
  lVar26 = *(long *)(unaff_x19 + 0x420);
  unaff_x24[1] = *(long *)(unaff_x19 + 0x428);
  *unaff_x24 = lVar26;
  iVar13 = __ZN17codex_exec_server6server16session_registry12SessionEntry6detach17hf21b633bd18dca2dE
                     (lVar27 + 0x10,&stack0x00000a80);
  if (iVar13 == 0) goto LAB_100a23298;
  __ZN17codex_exec_server6server15process_handler14ProcessHandler23set_notification_sender17h581729754f48ffe1E
            (*(long *)(unaff_x19 + 0x418) + 0x28,0);
  plVar45 = *(long **)(unaff_x19 + 0x410);
  lVar27 = *plVar45;
  *plVar45 = lVar27 + 1;
  if (lVar27 < 0) goto LAB_100a23be0;
  uVar22 = *(undefined8 *)(*(long *)(unaff_x19 + 0x418) + 0x18);
  lVar27 = *(long *)(*(long *)(unaff_x19 + 0x418) + 0x20);
  if (lVar27 == 0) {
    lVar26 = 1;
  }
  else {
    lVar26 = _malloc(lVar27);
    if (lVar26 == 0) {
      func_0x0001087c9084(1,lVar27);
      goto LAB_100a23be0;
    }
  }
  _memcpy(lVar26,uVar22,lVar27);
  do {
    lVar27 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar4 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar27;
  } while (bVar4);
  puVar16 = (ulong *)(*
                     ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                     )();
  if ((char)puVar16[9] == '\x01') {
LAB_100a22fc4:
    _memcpy(&stack0x00000560,&stack0x000002d8,0x158);
    if (0x7ffffffffffffffe < *puVar16) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100a23be0;
    }
    *puVar16 = *puVar16 + 1;
    uVar14 = puVar16[1];
    _memcpy(&stack0x000007f0,&stack0x000002d8,0x158);
    if (uVar14 != 2) {
      if ((uVar14 & 1) == 0) {
        plVar45 = (long *)puVar16[2];
        lVar27 = *plVar45;
        *plVar45 = lVar27 + 1;
        if ((-1 < lVar27) &&
           ((plVar23 = (long *)plVar45[0x5e], plVar23 == (long *)0x0 ||
            (lVar27 = *plVar23, *plVar23 = lVar27 + 1, -1 < lVar27)))) {
          _memcpy(&stack0x00000ddc,&stack0x00000570,0x148);
          uVar47 = 0x10;
          uVar48 = 0x10b23e1;
          _memcpy((ulong)&stack0x00000a80 | 0x34,&stack0x00000dd8,0x14c);
          in_stack_00000170 = (long *)0x0;
          iVar13 = _posix_memalign(&stack0x00000170,0x80,0x200);
          plVar23 = in_stack_00000170;
          if ((iVar13 == 0) && (in_stack_00000170 != (long *)0x0)) {
            _memcpy(in_stack_00000170,&stack0x00000a80,0x200);
            lVar27 = FUN_1010e2658(plVar45 + 0x2d,plVar23,plVar23);
            if (plVar45[0x5c] != 0) {
              (**(code **)(plVar45[0x5d] + 0x28))
                        (plVar45[0x5c] + (*(long *)(plVar45[0x5d] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00000a80);
            }
            if (lVar27 != 0) {
              __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                        (puVar16 + 2,lVar27);
            }
            goto LAB_100a23268;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
        }
      }
      else {
        plVar45 = (long *)puVar16[2];
        lVar27 = *plVar45;
        *plVar45 = lVar27 + 1;
        if ((-1 < lVar27) &&
           ((plVar23 = (long *)plVar45[0x4a], plVar23 == (long *)0x0 ||
            (lVar27 = *plVar23, *plVar23 = lVar27 + 1, -1 < lVar27)))) {
          _memcpy(&stack0x00000ddc,&stack0x00000570,0x148);
          uVar47 = 0xd0;
          uVar48 = 0x10b2416;
          _memcpy((ulong)&stack0x00000a80 | 0x34,&stack0x00000dd8,0x14c);
          in_stack_00000170 = (long *)0x0;
          iVar13 = _posix_memalign(&stack0x00000170,0x80,0x200);
          plVar23 = in_stack_00000170;
          if ((iVar13 == 0) && (in_stack_00000170 != (long *)0x0)) {
            _memcpy(in_stack_00000170,&stack0x00000a80,0x200);
            lVar27 = FUN_1010e2658(plVar45 + 0x11,plVar23,plVar23);
            if (plVar45[0x48] != 0) {
              (**(code **)(plVar45[0x49] + 0x28))
                        (plVar45[0x48] + (*(long *)(plVar45[0x49] + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,&stack0x00000a80);
            }
            if (lVar27 != 0) {
              FUN_10610fa38(plVar45 + 2,lVar27,0);
            }
LAB_100a23268:
            uVar50 = 0;
            uVar49 = 0;
            uVar46 = 0;
            uVar21 = 0;
            *puVar16 = *puVar16 - 1;
            if (*plVar23 == 0xcc) {
              *plVar23 = 0x84;
            }
            else {
              (**(code **)(plVar23[2] + 0x20))(plVar23);
            }
LAB_100a23298:
            *(undefined1 *)(unaff_x19 + 1000) = 1;
            lVar27 = **(long **)(unaff_x19 + 0x410);
            **(long **)(unaff_x19 + 0x410) = lVar27 + -1;
            LORelease();
            if (lVar27 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbf03dd8539bb07a4E(unaff_x19 + 0x410);
            }
            lVar27 = **(long **)(unaff_x19 + 0x418);
            **(long **)(unaff_x19 + 0x418) = lVar27 + -1;
            LORelease();
            if (lVar27 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2672a52da0645afdE(unaff_x19 + 0x418);
            }
LAB_100a232dc:
            *(undefined1 *)(unaff_x19 + 0x3d8) = 1;
            FUN_100ccea70(unaff_x19 + 0x3c8);
            *(undefined1 *)(unaff_x19 + 0x3b8) = 0;
            lVar27 = **(long **)(unaff_x19 + 0x100);
            **(long **)(unaff_x19 + 0x100) = lVar27 + -1;
            LORelease();
            if (lVar27 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbe3c0892b7ff0614E(&stack0x00000a80);
            }
            *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
            plVar45 = *(long **)(unaff_x19 + 0xf8);
            LOAcquire();
            lVar27 = plVar45[0x3e];
            plVar45[0x3e] = lVar27 + -1;
            LORelease();
            if (lVar27 == 1) {
              LOAcquire();
              lVar27 = plVar45[0x11];
              plVar45[0x11] = lVar27 + 1;
              lVar27 = func_0x000100fcb1e0(plVar45 + 0x10,lVar27);
              *(ulong *)(lVar27 + 0x1010) = *(ulong *)(lVar27 + 0x1010) | 0x200000000;
              LORelease();
              puVar16 = (ulong *)(plVar45 + 0x22);
              LOAcquire();
              uVar14 = *puVar16;
              *puVar16 = uVar14 | 2;
              LORelease();
              if (uVar14 == 0) {
                lVar27 = plVar45[0x20];
                plVar45[0x20] = 0;
                *puVar16 = in_xzr;
                LORelease();
                if (lVar27 != 0) {
                  (**(code **)(lVar27 + 8))(plVar45[0x21]);
                }
              }
            }
            lVar27 = *plVar45;
            *plVar45 = lVar27 + -1;
            LORelease();
            if (lVar27 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h28e64b2e5fbb6af4E(&stack0x00000a80);
            }
            *(undefined1 *)(unaff_x19 + 0x3ba) = 0;
            puVar24 = *(undefined8 **)(unaff_x19 + 0xe0);
            *(undefined8 **)(unaff_x19 + 0x3e0) = puVar24;
            *(undefined8 **)(unaff_x19 + 1000) = puVar24;
            *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0xd8);
            *(undefined8 **)(unaff_x19 + 0x3f8) = puVar24 + *(long *)(unaff_x19 + 0xe8);
            if (puVar24 != puVar24 + *(long *)(unaff_x19 + 0xe8)) {
              do {
                puVar16 = (ulong *)*puVar24;
                *(undefined8 **)(unaff_x19 + 1000) = puVar24 + 1;
                *(ulong **)(unaff_x19 + 0x3c8) = puVar16;
                *(undefined1 *)(unaff_x19 + 0x3bb) = 1;
                *(ulong **)(unaff_x19 + 0x3d0) = puVar16;
                uVar14 = *puVar16;
                do {
                  if ((uVar14 & 0x22) != 0) {
                    bVar4 = false;
                    plVar45 = (long *)0x0;
                    goto LAB_100a23ce8;
                  }
                  uVar44 = (undefined1)(uVar14 >> 0x38);
                  uVar43 = (undefined6)(uVar14 >> 8);
                  if ((uVar14 & 1) == 0) {
                    if (((uint)uVar14 >> 2 & 1) == 0) {
                      if ((long)uVar14 < 0) {
                        __ZN4core9panicking5panic17h30f5ec71e3af4326E
                                  (&UNK_109beb9fc,0x2f,&UNK_10b4cde08);
                        goto LAB_100a23be0;
                      }
                      lVar27 = uVar14 + 100;
                      bVar4 = true;
                      bVar42 = (byte)lVar27;
                      uVar43 = (undefined6)((ulong)lVar27 >> 8);
                      uVar44 = (undefined1)((ulong)lVar27 >> 0x38);
                    }
                    else {
                      bVar4 = false;
                      bVar42 = (byte)uVar14 | 0x20;
                    }
                  }
                  else {
                    bVar4 = false;
                    bVar42 = (byte)uVar14 | 0x24;
                  }
                  plVar45 = (long *)0x1;
                  bVar3 = *puVar16 != uVar14;
                  uVar14 = *puVar16;
                } while (bVar3);
                *puVar16 = CONCAT17(uVar44,CONCAT61(uVar43,bVar42));
LAB_100a23ce8:
                if (bVar4) {
                  (**(code **)(puVar16[2] + 8))();
                }
                *(undefined1 *)(unaff_x19 + 0x3bb) = 0;
                *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x3d0);
                FUN_10151bfcc(&stack0x00000a80,*(undefined8 *)(unaff_x19 + 0x3d0),*unaff_x25);
                if ((int)plVar45 == 1) {
                  uVar22 = 1;
                  uVar21 = 10;
                  goto LAB_100a23be8;
                }
                lVar27 = CONCAT71(uVar48,uVar47);
                plVar23 = *(long **)(unaff_x19 + 0x3d8);
                if (*plVar23 == 0xcc) {
                  *plVar23 = 0x84;
                }
                else {
                  (**(code **)(plVar23[2] + 0x20))();
                }
                if ((CONCAT71(uVar46,uVar21) != 0) && (lVar27 != 0)) {
                  pcVar9 = *(code **)CONCAT71(uVar50,uVar49);
                  if (pcVar9 != (code *)0x0) {
                    (*pcVar9)(lVar27);
                  }
                  if (((undefined8 *)CONCAT71(uVar50,uVar49))[1] != 0) {
                    _free(lVar27);
                  }
                }
                *(undefined1 *)(unaff_x19 + 0x3bb) = 0;
                puVar24 = *(undefined8 **)(unaff_x19 + 1000);
              } while (puVar24 != *(undefined8 **)(unaff_x19 + 0x3f8));
            }
            *(undefined8 *)(unaff_x19 + 0x3c8) = 0;
            FUN_100cd11ec(unaff_x19 + 0x3e0);
            *(undefined1 *)(unaff_x19 + 0x3b7) = 0;
            *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x108);
            FUN_10151bfcc(&stack0x00000a80,*(undefined8 *)(unaff_x19 + 0x108),*unaff_x25);
            if ((int)plVar45 == 1) {
              uVar22 = 1;
              uVar21 = 0xb;
            }
            else {
              lVar27 = CONCAT71(uVar48,uVar47);
              plVar45 = *(long **)(unaff_x19 + 0x3c8);
              if (*plVar45 == 0xcc) {
                *plVar45 = 0x84;
                uVar22 = extraout_x1_03;
              }
              else {
                (**(code **)(plVar45[2] + 0x20))();
                uVar22 = extraout_x1_04;
              }
              if ((CONCAT71(uVar46,uVar21) != 0) && (lVar27 != 0)) {
                pcVar9 = *(code **)CONCAT71(uVar50,uVar49);
                if (pcVar9 != (code *)0x0) {
                  (*pcVar9)(lVar27);
                  uVar22 = extraout_x1_05;
                }
                if (((undefined8 *)CONCAT71(uVar50,uVar49))[1] != 0) {
                  _free(lVar27);
                  uVar22 = extraout_x1_06;
                }
              }
              *(undefined2 *)(unaff_x19 + 0x3b7) = 0;
              *(undefined1 *)(unaff_x19 + 0x3be) = 0;
              plVar45 = *(long **)(unaff_x19 + 0xf0);
              *(undefined1 *)(unaff_x19 + 0x3b9) = 0;
              if (plVar45 != (long *)0x0) {
                lVar27 = *plVar45;
                *plVar45 = lVar27 + -1;
                LORelease();
                if (lVar27 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h59d0696b5cb6029eE();
                  uVar22 = extraout_x1_07;
                }
              }
              plVar45 = *(long **)(unaff_x19 + 200);
              *(undefined1 *)(unaff_x19 + 0x3ba) = 0;
              lVar27 = plVar45[0x29];
              plVar45[0x29] = lVar27 + -1;
              if (lVar27 == 1) {
                plVar23 = plVar45 + 0x23;
                if ((char)*plVar23 == '\0') {
                  *(char *)plVar23 = '\x01';
                }
                else {
                  __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                            (plVar23,uVar22,1000000000);
                }
                __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E
                          (&stack0x00000a80);
              }
              lVar27 = *plVar45;
              *plVar45 = lVar27 + -1;
              LORelease();
              if (lVar27 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE
                          ((undefined8 *)(unaff_x19 + 200));
              }
              FUN_100ce01b8(unaff_x19 + 0xc0);
              *(undefined1 *)(unaff_x19 + 0x3bf) = 0;
              lVar27 = **(long **)(unaff_x19 + 0xb8);
              **(long **)(unaff_x19 + 0xb8) = lVar27 + -1;
              LORelease();
              if (lVar27 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hef83ea3344b11f43E();
              }
              uVar22 = 0;
              *(undefined2 *)(unaff_x19 + 0x3c0) = 0;
              *(undefined1 *)(unaff_x19 + 0x3c6) = 0;
              *(undefined4 *)(unaff_x19 + 0x3c2) = 0;
              uVar21 = 1;
            }
LAB_100a23be8:
            *(undefined1 *)(unaff_x19 + 0x3b0) = uVar21;
            return uVar22;
          }
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x200);
        }
      }
      goto LAB_100a23be0;
    }
    FUN_100d360a8(&stack0x00000800);
    *puVar16 = *puVar16 - 1;
  }
  else {
    if ((char)puVar16[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar16,&DAT_100c35d48);
      *(undefined1 *)(puVar16 + 9) = 1;
      goto LAB_100a22fc4;
    }
    FUN_100d360a8(&stack0x000002e8);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00000a80,&UNK_10b22a8b0);
LAB_100a23be0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100a23be4);
  (*pcVar9)();
}

