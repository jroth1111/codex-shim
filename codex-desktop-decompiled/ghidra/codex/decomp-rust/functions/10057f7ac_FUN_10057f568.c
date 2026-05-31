
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057f568(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined1 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x19;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *unaff_x21;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  ulong *unaff_x24;
  ulong *unaff_x25;
  long *plVar28;
  ulong unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined1 auVar29 [12];
  ulong *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined4 *in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  ulong *in_stack_00000100;
  code *in_stack_00000108;
  ulong *in_stack_00000110;
  long in_stack_00000118;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  long *in_stack_00000130;
  long *in_stack_00000138;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 *in_stack_00000160;
  ulong *in_stack_00000168;
  ulong *in_stack_00000170;
  ulong in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong *in_stack_00000190;
  ulong *in_stack_00000198;
  ulong in_stack_000001a0;
  char *in_stack_000001a8;
  undefined8 *in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  ulong in_stack_000001d0;
  ulong in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  ulong in_stack_00000210;
  ulong in_stack_00000218;
  ulong in_stack_00000220;
  ulong in_stack_00000228;
  ulong in_stack_00000230;
  ulong in_stack_00000238;
  ulong in_stack_00000240;
  ulong in_stack_00000248;
  ulong in_stack_00000250;
  ulong in_stack_00000258;
  ulong in_stack_00000260;
  ulong in_stack_00000268;
  ulong in_stack_00000270;
  ulong in_stack_00000278;
  ulong in_stack_00000280;
  ulong in_stack_00000288;
  ulong in_stack_00000290;
  ulong *puVar30;
  undefined4 in_stack_000073c0;
  undefined4 in_stack_000073c4;
  undefined4 in_stack_000073c8;
  undefined4 in_stack_000073cc;
  undefined4 in_stack_000073d0;
  undefined4 in_stack_000073d4;
  undefined4 in_stack_000073d8;
  undefined4 in_stack_000073dc;
  ulong in_stack_000073e0;
  ulong in_stack_000073e8;
  ulong in_stack_000073f0;
  ulong *in_stack_000073f8;
  ulong *in_stack_00007400;
  ulong in_stack_00007408;
  char *in_stack_00007410;
  undefined8 *in_stack_00007418;
  ulong in_stack_00007420;
  ulong in_stack_00007428;
  ulong in_stack_00007430;
  ulong in_stack_00007438;
  ulong in_stack_00007440;
  ulong in_stack_00007448;
  ulong in_stack_00007450;
  ulong in_stack_00007458;
  ulong in_stack_00007460;
  undefined8 *in_stack_0000ac40;
  ulong *in_stack_0000ac48;
  ulong *in_stack_0000ac50;
  
  puVar15 = (undefined8 *)CONCAT44(in_stack_000073c4,in_stack_000073c0);
  puVar4 = (ulong *)CONCAT44(in_stack_000073d4,in_stack_000073d0);
code_r0x00010057f568:
  puVar18 = (undefined *)(unaff_x29 + -0x80);
  puVar30 = (ulong *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000002f0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar25 = *unaff_x21;
    in_stack_0000ac48 = *(ulong **)(lVar25 + 0x20);
    in_stack_0000ac50 = *(ulong **)(lVar25 + 0x28);
    in_stack_0000ac40 = (undefined8 *)0x2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x0000ac40);
    if (iVar9 != 0) {
      in_stack_000073e0 = *(ulong *)(lVar25 + 0x60);
      in_stack_000073e8 = *(ulong *)(lVar25 + 0x68);
      lVar23 = *(long *)(lVar25 + 0x50);
      puVar4 = *(ulong **)(lVar25 + 0x58);
      puVar15 = (undefined8 *)0x1;
      if (lVar23 == 0) {
        puVar15 = (undefined8 *)0x2;
      }
      in_stack_00007408 = *(ulong *)(lVar25 + 8);
      in_stack_00000100 = (ulong *)&stack0x000002a0;
      in_stack_00000108 = (code *)&DAT_1061c2098;
      in_stack_000073d8 = 1;
      if (in_stack_000073e0 == 0) {
        in_stack_000073d8 = 2;
      }
      in_stack_000073f0 = 2;
      in_stack_00007410 = s__108b39f4f;
      in_stack_00007418 = &stack0x00000100;
      in_stack_000073c8 = (undefined4)lVar23;
      in_stack_000073cc = (undefined4)((ulong)lVar23 >> 0x20);
      in_stack_000073dc = 0;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000073c0);
      in_stack_000073f8 = in_stack_0000ac48;
      in_stack_00007400 = in_stack_0000ac50;
    }
  }
LAB_10057f890:
  if (*unaff_x28 < 2) {
    lVar23 = *(long *)(unaff_x19[3] + 0x400);
    lVar25 = (**(code **)(*(long *)(lVar23 + 200) + 0x20))
                       (*(long *)(lVar23 + 0xc0) +
                        (*(long *)(*(long *)(lVar23 + 200) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                       );
    if (((*(byte *)(lVar25 + 0x1d1) & 1) == 0) ||
       (puVar6 = puVar15, *(char *)(lVar23 + 0x304) != '\0')) goto LAB_10057f8d8;
  }
  else {
LAB_10057f8d8:
    lVar23 = unaff_x19[4];
    lVar25 = unaff_x19[3];
    puVar18 = &
              __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x0000ac40,s_Reconnecting______108ac135f,&stack0x000002f0);
    in_stack_000073c8 = SUB84(in_stack_0000ac48,0);
    in_stack_000073cc = (undefined4)((ulong)in_stack_0000ac48 >> 0x20);
    *(undefined1 *)((long)unaff_x19 + 0x2b1) = 0;
    in_stack_00007440 = unaff_x24[0xd];
    in_stack_00007438 = unaff_x24[0xc];
    in_stack_00007450 = unaff_x24[0xf];
    in_stack_00007448 = unaff_x24[0xe];
    in_stack_00007460 = unaff_x24[0x11];
    in_stack_00007458 = unaff_x24[0x10];
    uVar16 = unaff_x24[0x12];
    in_stack_00007400 = (ulong *)unaff_x24[5];
    in_stack_000073f8 = (ulong *)unaff_x24[4];
    in_stack_00007410 = (char *)unaff_x24[7];
    in_stack_00007408 = unaff_x24[6];
    in_stack_00007420 = unaff_x24[9];
    in_stack_00007418 = (undefined8 *)unaff_x24[8];
    in_stack_00007430 = unaff_x24[0xb];
    in_stack_00007428 = unaff_x24[10];
    in_stack_000073e0 = unaff_x24[1];
    uVar27 = *unaff_x24;
    in_stack_000073f0 = unaff_x24[3];
    in_stack_000073e8 = unaff_x24[2];
    in_stack_000073d8 = (undefined4)uVar27;
    in_stack_000073dc = (undefined4)(uVar27 >> 0x20);
    in_stack_00000030[3] = uVar27;
    in_stack_00000030[2] = (long)in_stack_0000ac50;
    in_stack_00000030[5] = in_stack_000073e8;
    in_stack_00000030[4] = in_stack_000073e0;
    in_stack_00000030[1] = (long)in_stack_0000ac48;
    *in_stack_00000030 = (long)in_stack_0000ac40;
    in_stack_00000030[0xb] = (long)in_stack_00007418;
    in_stack_00000030[10] = (long)in_stack_00007410;
    in_stack_00000030[0xd] = in_stack_00007428;
    in_stack_00000030[0xc] = in_stack_00007420;
    in_stack_00000030[7] = (long)in_stack_000073f8;
    in_stack_00000030[6] = in_stack_000073f0;
    in_stack_00000030[9] = in_stack_00007408;
    in_stack_00000030[8] = (long)in_stack_00007400;
    in_stack_00000030[0x13] = in_stack_00007458;
    in_stack_00000030[0x12] = in_stack_00007450;
    in_stack_00000030[0x15] = uVar16;
    in_stack_00000030[0x14] = in_stack_00007460;
    in_stack_00000030[0xf] = in_stack_00007438;
    in_stack_00000030[0xe] = in_stack_00007430;
    in_stack_00000030[0x11] = in_stack_00007448;
    in_stack_00000030[0x10] = in_stack_00007440;
    *(long *)((long)in_stack_00000028 + 0x16) = lVar23 + 0x10;
    *(long *)((long)in_stack_00000028 + 0xe) = lVar25 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x3a0) = 0;
    iVar9 = FUN_1005a7138(unaff_x19 + 0x57,in_stack_00000020);
    if (iVar9 != 0) {
      *in_stack_00000008 = unaff_x27;
      uVar10 = 0xb;
      goto LAB_10057ff54;
    }
    FUN_100d7ca28(unaff_x19 + 0x57);
    puVar30 = unaff_x25;
    puVar6 = in_stack_0000ac40;
    puVar4 = in_stack_0000ac50;
  }
  __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
            (&stack0x000073c0,unaff_x19[0x54],(int)unaff_x19[0x55],&UNK_10b217d60);
  unaff_x19[0x60] = in_stack_00007408;
  unaff_x19[0x5f] = (long)in_stack_00007400;
  unaff_x19[0x62] = (long)in_stack_00007418;
  unaff_x19[0x61] = (long)in_stack_00007410;
  unaff_x19[100] = in_stack_00007428;
  unaff_x19[99] = in_stack_00007420;
  unaff_x19[0x58] = CONCAT44(in_stack_000073cc,in_stack_000073c8);
  unaff_x19[0x57] = (long)puVar6;
  unaff_x19[0x5a] = CONCAT44(in_stack_000073dc,in_stack_000073d8);
  unaff_x19[0x59] = (long)puVar4;
  unaff_x19[0x5c] = in_stack_000073e8;
  unaff_x19[0x5b] = in_stack_000073e0;
  unaff_x19[0x5e] = (long)in_stack_000073f8;
  unaff_x19[0x5d] = in_stack_000073f0;
  iVar9 = func_0x000106114748(unaff_x19 + 0x57,in_stack_00000020);
  if (iVar9 == 0) {
    FUN_100de8a5c(unaff_x19 + 0x57);
    if ((*(byte *)((long)unaff_x19 + 0x2b1) & 1) != 0) {
      FUN_100df5738(unaff_x19 + 0x2d);
    }
    do {
      *(undefined1 *)((long)unaff_x19 + 0x2b1) = 0;
      FUN_100df93d8(unaff_x19 + 0x1a);
      lVar25 = unaff_x19[0x17];
      unaff_x19[0x17] = -0x8000000000000000;
      if (lVar25 == -0x8000000000000000) {
        unaff_x19[0x57] = unaff_x19[3] + 0x10;
        *(undefined1 *)(unaff_x19 + 0x67) = 0;
        FUN_1005a3614(&stack0x000073c0,unaff_x19 + 0x57,in_stack_00000020);
        if (puVar6 == (undefined8 *)0x3) {
          *in_stack_00000008 = unaff_x27;
          uVar10 = 6;
          goto LAB_10057ff54;
        }
        _memcpy(&stack0x00003b40,&stack0x000073c0,0x1f0);
        if (((((char)unaff_x19[0x67] == '\x03') && ((char)unaff_x19[0x66] == '\x03')) &&
            ((char)unaff_x19[0x65] == '\x03')) && ((char)unaff_x19[0x5c] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x5d);
          if (unaff_x19[0x5e] != 0) {
            (**(code **)(unaff_x19[0x5e] + 0x18))(unaff_x19[0x5f]);
          }
        }
        __ZN10codex_core15context_manager7history14ContextManager10for_prompt17h603b73efa9c20fb3E
                  (&stack0x000000e8,&stack0x00003b40,*(undefined8 *)(unaff_x19[4] + 0xf0),
                   *(undefined8 *)(unaff_x19[4] + 0xf8));
        lVar21 = unaff_x19[0xb];
        lVar24 = unaff_x19[4];
        lVar23 = unaff_x19[0xd];
        in_stack_0000ac48 = (ulong *)unaff_x19[0xe];
      }
      else {
        in_stack_000000f8 = unaff_x19[0x19];
        in_stack_000000f0 = unaff_x19[0x18];
        lVar21 = unaff_x19[0xb];
        lVar24 = unaff_x19[4];
        lVar23 = unaff_x19[0xd];
        in_stack_0000ac48 = (ulong *)unaff_x19[0xe];
        in_stack_000000e8 = lVar25;
      }
      pcVar7 = (code *)0x1;
      if ((in_stack_0000ac48 != (ulong *)0x0) &&
         (pcVar7 = (code *)_malloc(in_stack_0000ac48), pcVar7 == (code *)0x0)) {
        FUN_107c03c64(1,in_stack_0000ac48);
        goto LAB_10057ffb8;
      }
      _memcpy(pcVar7,lVar23,in_stack_0000ac48);
      in_stack_000073c8 = SUB84(pcVar7,0);
      in_stack_000073cc = (undefined4)((ulong)pcVar7 >> 0x20);
      __ZN10codex_core7session4turn12build_prompt17h0eb514f25bd23114E
                (unaff_x19 + 0x1a,&stack0x000000e8,lVar21 + 0x10,lVar24 + 0x10,&stack0x000073c0);
      plVar11 = (long *)unaff_x19[0xf];
      lVar25 = *plVar11;
      *plVar11 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar13 = (long *)unaff_x19[0x10];
      lVar25 = *plVar13;
      *plVar13 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar17 = (long *)unaff_x19[0x11];
      lVar25 = *plVar17;
      *plVar17 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar19 = (long *)unaff_x19[0x12];
      lVar25 = *plVar19;
      *plVar19 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar20 = (long *)unaff_x19[0x13];
      lVar25 = *plVar20;
      *plVar20 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar28 = (long *)unaff_x19[3];
      lVar25 = *plVar28;
      *plVar28 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar26 = (long *)unaff_x19[4];
      lVar25 = *plVar26;
      *plVar26 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      plVar22 = (long *)unaff_x19[7];
      lVar25 = *plVar22;
      *plVar22 = lVar25 + 1;
      if (lVar25 < 0) goto LAB_10057ffb8;
      lVar25 = unaff_x19[8];
      lVar23 = unaff_x19[9];
      lVar24 = unaff_x19[10];
      plVar12 = (long *)unaff_x19[6];
      lVar21 = *plVar12;
      *plVar12 = lVar21 + 1;
      if (lVar21 < 0) goto LAB_10057ffb8;
      uVar16 = __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                         (unaff_x19 + 5);
      in_stack_00000118 = CONCAT44(in_stack_000073dc,in_stack_000073d8);
      in_stack_00000030 = unaff_x19 + 0x57;
      unaff_x19[0x57] = lVar23;
      unaff_x19[0x58] = lVar24;
      unaff_x19[0x5e] = in_stack_000073e8;
      unaff_x19[0x5d] = in_stack_000073e0;
      unaff_x19[0x60] = (long)plVar13;
      unaff_x19[0x5f] = (long)plVar11;
      unaff_x19[0x62] = (long)plVar19;
      unaff_x19[0x61] = (long)plVar17;
      unaff_x19[99] = (long)plVar20;
      unaff_x19[0x5a] = (long)pcVar7;
      unaff_x19[0x59] = (long)in_stack_0000ac48;
      unaff_x19[0x5c] = in_stack_00000118;
      unaff_x19[0x5b] = (long)in_stack_0000ac48;
      unaff_x19[100] = (long)plVar28;
      unaff_x19[0x65] = (long)plVar26;
      unaff_x19[0x66] = (long)plVar22;
      unaff_x19[0x67] = lVar25;
      unaff_x19[0x68] = (long)plVar12;
      unaff_x19[0x69] = (long)(unaff_x19 + 0x1a);
      unaff_x19[0x6a] = uVar16;
      *(undefined1 *)(unaff_x19 + 0x6c) = 0;
      unaff_x19[0x6b] = 0x101010101010000;
      unaff_x19[0x59] = (long)plVar26;
      in_stack_00000100 = in_stack_0000ac48;
      in_stack_00000108 = pcVar7;
      in_stack_00000110 = in_stack_0000ac48;
      in_stack_00000120 = in_stack_000073e0;
      in_stack_00000128 = in_stack_000073e8;
      in_stack_00000130 = plVar11;
      in_stack_00000138 = plVar13;
      in_stack_00000140 = plVar17;
      in_stack_00000148 = plVar19;
      in_stack_00000150 = plVar20;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b62aa98 - 1 < 2 ||
           ((bRam000000010b62aa98 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session4turn24try_run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h725546f2bdfe7460E
                               ), cVar8 != '\0')))) &&
          (uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_core7session4turn24try_run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h725546f2bdfe7460E
                              ), (uVar27 & 1) != 0)))) {
        plVar12 = (long *)(unaff_x19[0x59] + 0x40);
        puVar15 = (undefined8 *)(unaff_x29 + -0x70);
        in_stack_000073c8 = 0xb215b00;
        in_stack_000073cc = 1;
        in_stack_0000ac48 = (ulong *)&stack0x000002f0;
        in_stack_000073d8 = 0xb215b00;
        in_stack_000073dc = 1;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (unaff_x19 + 0x5a,
                   ___ZN10codex_core7session4turn24try_run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h725546f2bdfe7460E
                   ,&stack0x00003b40);
        *(undefined1 *)(unaff_x19 + 0x6b) = 1;
      }
      else {
        in_stack_000073e0 =
             ___ZN10codex_core7session4turn24try_run_sampling_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h725546f2bdfe7460E
        ;
        puVar15 = (undefined8 *)0x2;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          puVar18 = &stack0x00003b40;
          plVar12 = (long *)0x1;
          puVar30 = (ulong *)0x2;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x000073c0,&stack0x000002f0);
        }
        *(undefined1 *)(unaff_x19 + 0x6b) = 1;
        unaff_x19[0x5b] = (long)pcVar7;
        unaff_x19[0x5a] = 2;
        unaff_x19[0x5d] = CONCAT44(in_stack_000073dc,in_stack_000073d8);
        unaff_x19[0x5c] = (long)in_stack_0000ac48;
        unaff_x19[0x5e] = in_stack_000073e0;
      }
      *(undefined2 *)((long)unaff_x19 + 0x35e) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x35a) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x359) = 1;
      if (unaff_x19[0x5a] == 2) {
        *(undefined1 *)((long)unaff_x19 + 0x359) = 0;
        _memcpy(unaff_x19 + 0x6d,&stack0x000002f0,0x3850);
        FUN_1005853a0(&stack0x000073c0,unaff_x19 + 0x6d,in_stack_00000020);
        if (puVar15 == (undefined8 *)0x8000000000000021) {
          uVar10 = 4;
LAB_10057fd50:
          *(undefined1 *)(unaff_x19 + 0x6c) = uVar10;
          *in_stack_00000008 = 0x8000000000000021;
          uVar10 = 7;
          goto LAB_10057ff54;
        }
        in_stack_0000ac50 = (ulong *)CONCAT44(in_stack_000073dc,in_stack_000073d8);
        in_stack_0000ac40 = (undefined8 *)CONCAT44(in_stack_000073cc,in_stack_000073c8);
        FUN_100d05fa0(unaff_x19 + 0x6d);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x359) = 0;
        _memcpy(&stack0x000073e8,&stack0x000002f0,0x3850);
        *(undefined1 *)(unaff_x19 + 0x6b) = 0;
        in_stack_0000ac40 = (undefined8 *)unaff_x19[0x5b];
        puVar15 = (undefined8 *)unaff_x19[0x5a];
        in_stack_0000ac50 = (ulong *)unaff_x19[0x5d];
        in_stack_0000ac48 = (ulong *)unaff_x19[0x5c];
        in_stack_000073c8 = SUB84(in_stack_0000ac40,0);
        in_stack_000073cc = (undefined4)((ulong)in_stack_0000ac40 >> 0x20);
        in_stack_000073d8 = SUB84(in_stack_0000ac50,0);
        in_stack_000073dc = (undefined4)((ulong)in_stack_0000ac50 >> 0x20);
        in_stack_000073e0 = unaff_x19[0x5e];
        _memcpy(&stack0x00003b40,&stack0x000073c0,0x3878);
        _memcpy(unaff_x19 + 0x6d,&stack0x00003b40,0x3878);
        puVar4 = (ulong *)(unaff_x19 + 0x6d);
        if (unaff_x19[0x6d] != 2) {
          lVar25 = unaff_x19[0x6e];
          if ((unaff_x19[0x6d] & 1U) != 0) {
            lVar25 = lVar25 + (*(long *)(unaff_x19[0x6f] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(unaff_x19[0x6f] + 0x60))(lVar25,unaff_x19 + 0x70);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (unaff_x19[0x71] != 0)) {
          FUN_1011d7d74(puVar4,&UNK_108cd3ef5,0x15,s__>___108ab67cd,unaff_x29 + -0x70);
        }
        FUN_1005853a0(&stack0x000073c0,unaff_x19 + 0x72,in_stack_00000020);
        if (*puVar4 != 2) {
          lVar25 = unaff_x19[0x6e];
          if ((*puVar4 & 1) != 0) {
            lVar25 = lVar25 + (*(long *)(unaff_x19[0x6f] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(unaff_x19[0x6f] + 0x68))(lVar25,unaff_x19 + 0x70);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (unaff_x19[0x71] != 0)) {
          FUN_1011d7d74(puVar4,&UNK_108cd3ef5,0x15,s_<____108ab67c5,unaff_x29 + -0x70);
        }
        if (puVar15 == (undefined8 *)0x8000000000000021) {
          uVar10 = 3;
          goto LAB_10057fd50;
        }
        FUN_100d79834(puVar4);
      }
      unaff_x27 = 0x8000000000000021;
      *(undefined1 *)((long)unaff_x19 + 0x359) = 0;
      if ((*(byte *)(unaff_x19 + 0x6b) & 1) != 0) {
        FUN_100dddd8c(unaff_x19 + 0x5a);
      }
      *(undefined1 *)(unaff_x19 + 0x6b) = 0;
      *in_stack_00000028 = 0;
      *(undefined2 *)((long)unaff_x19 + 0x35e) = 0;
      *(undefined1 *)(unaff_x19 + 0x6c) = 1;
      *(undefined1 *)((long)unaff_x19 + 0x2b2) = 1;
      unaff_x19[0x40] = (long)puVar15;
      unaff_x19[0x4e] = in_stack_00007430;
      unaff_x19[0x4d] = in_stack_00007428;
      unaff_x19[0x50] = in_stack_00007440;
      unaff_x19[0x4f] = in_stack_00007438;
      unaff_x19[0x52] = in_stack_00007450;
      unaff_x19[0x51] = in_stack_00007448;
      unaff_x19[0x46] = in_stack_000073f0;
      unaff_x19[0x45] = in_stack_000073e8;
      unaff_x19[0x48] = (long)in_stack_00007400;
      unaff_x19[0x47] = (long)in_stack_000073f8;
      unaff_x19[0x4a] = (long)in_stack_00007410;
      unaff_x19[0x49] = in_stack_00007408;
      unaff_x19[0x4c] = in_stack_00007420;
      unaff_x19[0x4b] = (long)in_stack_00007418;
      unaff_x19[0x42] = (long)in_stack_0000ac48;
      unaff_x19[0x41] = (long)in_stack_0000ac40;
      unaff_x19[0x44] = in_stack_000073e0;
      unaff_x19[0x43] = (long)in_stack_0000ac50;
      in_stack_00000160 = in_stack_0000ac40;
      in_stack_00000168 = in_stack_0000ac48;
      in_stack_00000170 = in_stack_0000ac50;
      in_stack_00000178 = in_stack_000073e0;
      in_stack_00000180 = in_stack_000073e8;
      in_stack_00000188 = in_stack_000073f0;
      in_stack_00000190 = in_stack_000073f8;
      in_stack_00000198 = in_stack_00007400;
      in_stack_000001a0 = in_stack_00007408;
      in_stack_000001a8 = in_stack_00007410;
      in_stack_000001b0 = in_stack_00007418;
      in_stack_000001b8 = in_stack_00007420;
      in_stack_000001c0 = in_stack_00007428;
      in_stack_000001c8 = in_stack_00007430;
      in_stack_000001d0 = in_stack_00007438;
      in_stack_000001d8 = in_stack_00007440;
      in_stack_000001e0 = in_stack_00007448;
      in_stack_000001e8 = in_stack_00007450;
      FUN_100c9d908(in_stack_00000030);
      uVar14 = unaff_x19[0x40];
      uVar27 = 0x8000000000000020;
      if (uVar14 == 0x8000000000000020) {
        uVar16 = unaff_x19[0x41];
        in_stack_00000218 = unaff_x19[0x43];
        in_stack_00000210 = unaff_x19[0x42];
        in_stack_00000220 = unaff_x19[0x44];
        lVar25 = unaff_x19[0x40];
joined_r0x00010057fba0:
        if (lVar25 != -0x7fffffffffffffe0) {
          if (((*(byte *)((long)unaff_x19 + 0x2b2) & 1) != 0) && (lVar25 != -0x7ffffffffffffff3)) {
            FUN_100df5738(unaff_x19 + 0x40);
          }
          *(undefined1 *)((long)unaff_x19 + 0x2b2) = 0;
        }
        *(undefined1 *)((long)unaff_x19 + 0x2b2) = 0;
        goto LAB_10057fdbc;
      }
      uVar27 = uVar14 ^ 0x8000000000000000;
      if (-1 < (long)uVar14) {
        uVar27 = 10;
      }
      if (uVar27 == 2) {
        unaff_x19[0x57] = unaff_x19[3] + 0x10;
        unaff_x19[0x58] = unaff_x19[4] + 0x10;
        *(undefined1 *)(unaff_x19 + 0x5b) = 0;
        iVar9 = func_0x0001005ad068(unaff_x19 + 0x57,in_stack_00000020);
        if (iVar9 == 0) {
          FUN_100d4294c(unaff_x19 + 0x57);
          uVar27 = 0x8000000000000002;
          lVar25 = unaff_x19[0x40];
          goto joined_r0x00010057fba0;
        }
        *in_stack_00000008 = 0x8000000000000021;
        uVar10 = 8;
        goto LAB_10057ff54;
      }
      if (uVar27 == 0xd) {
        *(undefined1 *)((long)unaff_x19 + 0x2b5) = 1;
        unaff_x19[0x58] = unaff_x19[0x42];
        *in_stack_00000030 = unaff_x19[0x41];
        unaff_x19[0x5f] = unaff_x19[0x49];
        unaff_x19[0x5c] = unaff_x19[0x46];
        unaff_x19[0x5b] = unaff_x19[0x45];
        unaff_x19[0x5e] = unaff_x19[0x48];
        unaff_x19[0x5d] = unaff_x19[0x47];
        unaff_x19[0x5a] = unaff_x19[0x44];
        unaff_x19[0x59] = unaff_x19[0x43];
        lVar25 = unaff_x19[0x5d];
        if (lVar25 == 0) {
          unaff_x19[0x60] = 0;
        }
        else {
          plVar11 = (long *)_malloc(0xa8);
          if (plVar11 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa8);
LAB_10057ffb8:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10057ffbc);
            (*pcVar7)();
          }
          FUN_1011e8148(&stack0x000073c0,lVar25);
          plVar11[0x11] = in_stack_00007448;
          plVar11[0x10] = in_stack_00007440;
          plVar11[0x13] = in_stack_00007458;
          plVar11[0x12] = in_stack_00007450;
          plVar11[0x14] = in_stack_00007460;
          plVar11[9] = in_stack_00007408;
          plVar11[8] = (long)in_stack_00007400;
          plVar11[0xb] = (long)in_stack_00007418;
          plVar11[10] = (long)in_stack_00007410;
          plVar11[0xd] = in_stack_00007428;
          plVar11[0xc] = in_stack_00007420;
          plVar11[0xf] = in_stack_00007438;
          plVar11[0xe] = in_stack_00007430;
          plVar11[1] = CONCAT44(in_stack_000073cc,in_stack_000073c8);
          *plVar11 = (long)puVar15;
          plVar11[3] = CONCAT44(in_stack_000073dc,in_stack_000073d8);
          plVar11[2] = (long)in_stack_0000ac48;
          plVar11[5] = in_stack_000073e8;
          plVar11[4] = in_stack_000073e0;
          plVar11[7] = (long)in_stack_000073f8;
          plVar11[6] = in_stack_000073f0;
          unaff_x19[0x60] = (long)plVar11;
          unaff_x19[0x61] = (long)plVar11;
          *(undefined1 *)((long)unaff_x19 + 0x2b4) = 0;
          lVar25 = plVar11[0x10];
          lVar21 = plVar11[0x13];
          lVar23 = plVar11[0x12];
          unaff_x19[0x73] = plVar11[0x11];
          unaff_x19[0x72] = lVar25;
          unaff_x19[0x75] = lVar21;
          unaff_x19[0x74] = lVar23;
          unaff_x19[0x76] = in_stack_00007460;
          lVar25 = plVar11[8];
          lVar21 = plVar11[0xb];
          lVar23 = plVar11[10];
          unaff_x19[0x6b] = plVar11[9];
          unaff_x19[0x6a] = lVar25;
          unaff_x19[0x6d] = lVar21;
          unaff_x19[0x6c] = lVar23;
          lVar21 = plVar11[0xc];
          lVar23 = plVar11[0xf];
          lVar25 = plVar11[0xe];
          unaff_x19[0x6f] = plVar11[0xd];
          unaff_x19[0x6e] = lVar21;
          unaff_x19[0x71] = lVar23;
          unaff_x19[0x70] = lVar25;
          lVar25 = *plVar11;
          lVar21 = plVar11[3];
          lVar23 = plVar11[2];
          unaff_x19[99] = plVar11[1];
          unaff_x19[0x62] = lVar25;
          unaff_x19[0x65] = lVar21;
          unaff_x19[100] = lVar23;
          lVar21 = plVar11[4];
          lVar23 = plVar11[7];
          lVar25 = plVar11[6];
          unaff_x19[0x67] = plVar11[5];
          unaff_x19[0x66] = lVar21;
          unaff_x19[0x69] = lVar23;
          unaff_x19[0x68] = lVar25;
          lVar25 = unaff_x19[3];
          *(long *)((long)in_stack_00000028 + 0x66) = unaff_x19[4] + 0x10;
          *(long *)((long)in_stack_00000028 + 0x5e) = lVar25 + 0x10;
          *(undefined1 *)(unaff_x19 + 0x7b) = 0;
          iVar9 = FUN_1005a6f6c(unaff_x19 + 0x62,in_stack_00000020);
          if (iVar9 != 0) {
            *in_stack_00000008 = 0x8000000000000021;
            uVar10 = 9;
            goto LAB_10057ff54;
          }
          FUN_100d35c78(unaff_x19 + 0x62);
          _free(unaff_x19[0x61]);
          *(undefined1 *)((long)unaff_x19 + 0x2b4) = 0;
        }
        uVar16 = unaff_x19[0x57];
        in_stack_00000218 = unaff_x19[0x59];
        in_stack_00000210 = unaff_x19[0x58];
        in_stack_00000228 = unaff_x19[0x5b];
        in_stack_00000220 = unaff_x19[0x5a];
        in_stack_00000238 = unaff_x19[0x5d];
        in_stack_00000230 = unaff_x19[0x5c];
        in_stack_00000248 = unaff_x19[0x5f];
        in_stack_00000240 = unaff_x19[0x5e];
        *(undefined1 *)((long)unaff_x19 + 0x2b5) = 0;
        uVar27 = 0x800000000000000d;
        lVar25 = unaff_x19[0x40];
        goto joined_r0x00010057fba0;
      }
      *(undefined1 *)((long)unaff_x19 + 0x2b1) = 1;
      unaff_x24 = (ulong *)(unaff_x19 + 0x2d);
      unaff_x19[0x3a] = unaff_x19[0x4d];
      unaff_x19[0x39] = unaff_x19[0x4c];
      unaff_x19[0x3c] = unaff_x19[0x4f];
      unaff_x19[0x3b] = unaff_x19[0x4e];
      unaff_x19[0x3e] = unaff_x19[0x51];
      unaff_x19[0x3d] = unaff_x19[0x50];
      unaff_x19[0x3f] = unaff_x19[0x52];
      unaff_x19[0x32] = unaff_x19[0x45];
      unaff_x19[0x31] = unaff_x19[0x44];
      unaff_x19[0x34] = unaff_x19[0x47];
      unaff_x19[0x33] = unaff_x19[0x46];
      unaff_x19[0x36] = unaff_x19[0x49];
      unaff_x19[0x35] = unaff_x19[0x48];
      unaff_x19[0x38] = unaff_x19[0x4b];
      unaff_x19[0x37] = unaff_x19[0x4a];
      unaff_x19[0x2e] = unaff_x19[0x41];
      *unaff_x24 = unaff_x19[0x40];
      unaff_x19[0x30] = unaff_x19[0x43];
      unaff_x19[0x2f] = unaff_x19[0x42];
      uVar27 = unaff_x19[0x2d];
      uVar16 = uVar27;
      if (-1 < (long)uVar27) {
        uVar16 = 10;
      }
      *(undefined1 *)((long)unaff_x19 + 0x2b2) = 0;
      if ((1L << (uVar16 & 0x3f) & 0x705304c2U) == 0) {
        *(undefined1 *)((long)unaff_x19 + 0x2b1) = 0;
        uVar16 = unaff_x19[0x2e];
        in_stack_00000278 = unaff_x19[0x4f];
        in_stack_00000270 = unaff_x19[0x4e];
        in_stack_00000288 = unaff_x19[0x51];
        in_stack_00000280 = unaff_x19[0x50];
        in_stack_00000290 = unaff_x19[0x52];
        in_stack_00000238 = unaff_x19[0x47];
        in_stack_00000230 = unaff_x19[0x46];
        in_stack_00000248 = unaff_x19[0x49];
        in_stack_00000240 = unaff_x19[0x48];
        in_stack_00000258 = unaff_x19[0x4b];
        in_stack_00000250 = unaff_x19[0x4a];
        in_stack_00000268 = unaff_x19[0x4d];
        in_stack_00000260 = unaff_x19[0x4c];
        in_stack_00000218 = unaff_x19[0x43];
        in_stack_00000210 = unaff_x19[0x42];
        in_stack_00000228 = unaff_x19[0x45];
        in_stack_00000220 = unaff_x19[0x44];
        goto LAB_10057fdbc;
      }
      lVar25 = *(long *)(unaff_x19[4] + 0x7a8);
      lVar25 = (**(code **)(lVar25 + 0x20))
                         (*(long *)(unaff_x19[4] + 0x7a0) +
                          (*(long *)(lVar25 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      unaff_x28 = (ulong *)(unaff_x19 + 0x16);
      uVar27 = *unaff_x28;
      unaff_x25 = (ulong *)(unaff_x19 + 0x53);
      uVar16 = *(ulong *)(lVar25 + 0x18);
      if (99 < uVar16) {
        uVar16 = 100;
      }
      if (*(int *)(lVar25 + 0x10) == 0) {
        uVar16 = 5;
      }
      unaff_x19[0x53] = uVar16;
      if (uVar27 < uVar16) goto LAB_10057f40c;
      uVar16 = __ZN10codex_core6client18ModelClientSession29try_switch_fallback_transport17h91e21c6bf52e1522E
                         (unaff_x19[8],unaff_x19[4] + 600,unaff_x19[4] + 0x10);
      if ((uVar16 & 1) == 0) goto LAB_10057f404;
      lVar23 = unaff_x19[4];
      lVar25 = unaff_x19[3];
      in_stack_00000108 =
           __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
      ;
      in_stack_00000100 = unaff_x24;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000002f0,&UNK_108ca63ff,&stack0x00000100);
      puVar6 = (undefined8 *)CONCAT44((int)plVar12,(int)puVar15);
      in_stack_000073d8 = (undefined4)((ulong)puVar30 >> 0x20);
      *(undefined4 *)(unaff_x19 + 0x57) = 1;
      *(ulong *)((long)unaff_x19 + 0x2c4) = CONCAT44((int)puVar18,(int)((ulong)plVar12 >> 0x20));
      *(ulong *)((long)unaff_x19 + 700) = CONCAT44((int)plVar12,(int)puVar15);
      unaff_x19[0x5a] = (long)puVar30;
      unaff_x19[0x59] = (long)puVar18;
      unaff_x19[0x93] = lVar23 + 0x10;
      unaff_x19[0x92] = lVar25 + 0x10;
      *(undefined1 *)(unaff_x19 + 0x10c) = 0;
      iVar9 = FUN_10059e898(unaff_x19 + 0x57,in_stack_00000020);
      if (iVar9 != 0) {
        *in_stack_00000008 = 0x8000000000000021;
        uVar10 = 10;
        goto LAB_10057ff54;
      }
      FUN_100d1ddbc(unaff_x19 + 0x57);
      unaff_x19[0x16] = 0;
      FUN_100df5738(unaff_x19 + 0x2d);
    } while( true );
  }
  *in_stack_00000008 = unaff_x27;
  uVar10 = 0xc;
  goto LAB_10057ff54;
LAB_10057f404:
  uVar27 = *unaff_x28;
  uVar16 = *unaff_x25;
LAB_10057f40c:
  if (uVar16 <= uVar27) {
    *(undefined1 *)((long)unaff_x19 + 0x2b1) = 0;
    uVar27 = unaff_x19[0x2d];
    uVar16 = unaff_x19[0x2e];
    in_stack_00000290 = unaff_x19[0x3f];
    in_stack_00000278 = unaff_x19[0x3c];
    in_stack_00000270 = unaff_x19[0x3b];
    in_stack_00000288 = unaff_x19[0x3e];
    in_stack_00000280 = unaff_x19[0x3d];
    in_stack_00000238 = unaff_x19[0x34];
    in_stack_00000230 = unaff_x19[0x33];
    in_stack_00000248 = unaff_x19[0x36];
    in_stack_00000240 = unaff_x19[0x35];
    in_stack_00000258 = unaff_x19[0x38];
    in_stack_00000250 = unaff_x19[0x37];
    in_stack_00000268 = unaff_x19[0x3a];
    in_stack_00000260 = unaff_x19[0x39];
    in_stack_00000218 = unaff_x19[0x30];
    in_stack_00000210 = unaff_x19[0x2f];
    in_stack_00000228 = unaff_x19[0x32];
    in_stack_00000220 = unaff_x19[0x31];
LAB_10057fdbc:
    *(undefined1 *)((long)unaff_x19 + 0x2b1) = 0;
    FUN_100df93d8(unaff_x19 + 0x1a);
    lVar25 = unaff_x19[0x17];
    if (lVar25 != -0x8000000000000000) {
      lVar21 = unaff_x19[0x18];
      lVar23 = unaff_x19[0x19] + 1;
      lVar24 = lVar21;
      while (lVar23 = lVar23 + -1, lVar23 != 0) {
        FUN_100e02a24(lVar24);
        lVar24 = lVar24 + 0xc0;
      }
      if (lVar25 != 0) {
        _free(lVar21);
      }
    }
    FUN_100e753c0(unaff_x19 + 0x14);
    FUN_100e1c748(unaff_x19 + 0xf);
    if (unaff_x19[0xc] != 0) {
      _free(unaff_x19[0xd]);
    }
    lVar25 = *(long *)unaff_x19[0xb];
    *(long *)unaff_x19[0xb] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h008c187bd1972bcfE();
    }
    lVar25 = *(long *)unaff_x19[3];
    *(long *)unaff_x19[3] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
    }
    lVar25 = *(long *)unaff_x19[4];
    *(long *)unaff_x19[4] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (unaff_x19 + 5);
    lVar25 = *(long *)unaff_x19[5];
    *(long *)unaff_x19[5] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 5);
    }
    lVar25 = *(long *)unaff_x19[6];
    *(long *)unaff_x19[6] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E();
    }
    if ((*(byte *)((long)unaff_x19 + 0x2b3) & 1) != 0) {
      lVar23 = unaff_x19[1];
      lVar25 = unaff_x19[2] + 1;
      lVar21 = lVar23;
      while (lVar25 = lVar25 + -1, lVar25 != 0) {
        FUN_100e02a24(lVar21);
        lVar21 = lVar21 + 0xc0;
      }
      if (*unaff_x19 != 0) {
        _free(lVar23);
      }
    }
    lVar25 = *(long *)unaff_x19[7];
    *(long *)unaff_x19[7] = lVar25 + -1;
    LORelease();
    if (lVar25 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E();
    }
    *in_stack_00000008 = uVar27;
    in_stack_00000008[1] = uVar16;
    in_stack_00000008[0xf] = in_stack_00000278;
    in_stack_00000008[0xe] = in_stack_00000270;
    in_stack_00000008[0x11] = in_stack_00000288;
    in_stack_00000008[0x10] = in_stack_00000280;
    in_stack_00000008[0x12] = in_stack_00000290;
    in_stack_00000008[7] = in_stack_00000238;
    in_stack_00000008[6] = in_stack_00000230;
    in_stack_00000008[9] = in_stack_00000248;
    in_stack_00000008[8] = in_stack_00000240;
    in_stack_00000008[0xb] = in_stack_00000258;
    in_stack_00000008[10] = in_stack_00000250;
    in_stack_00000008[0xd] = in_stack_00000268;
    in_stack_00000008[0xc] = in_stack_00000260;
    uVar10 = 1;
    in_stack_00000008[3] = in_stack_00000218;
    in_stack_00000008[2] = in_stack_00000210;
    in_stack_00000008[5] = in_stack_00000228;
    in_stack_00000008[4] = in_stack_00000220;
LAB_10057ff54:
    *(undefined1 *)(unaff_x19 + 0x56) = uVar10;
    return;
  }
  *unaff_x28 = uVar27 + 1;
  if (*unaff_x24 == 0x8000000000000001) {
    if ((int)unaff_x19[0x32] == 1000000000) {
      auVar29 = __ZN10codex_core4util7backoff17h9de4df84c83a8211E();
    }
    else {
      auVar29._8_4_ = (int)unaff_x19[0x32];
      auVar29._0_8_ = unaff_x19[0x31];
    }
  }
  else {
    auVar29 = __ZN10codex_core4util7backoff17h9de4df84c83a8211E();
  }
  *(undefined1 (*) [12])(unaff_x19 + 0x54) = auVar29;
  puVar4 = in_stack_0000ac48;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
    unaff_x21 = (long *)&
                        __ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
    ;
    if (((bRam000000010b62aa80 - 1 < 2) ||
        ((bRam000000010b62aa80 != 0 &&
         (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
                            ), cVar8 != '\0')))) &&
       (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
                           ),
       param_1 = 
       ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
       , (uVar16 & 1) != 0)) goto code_r0x00010057f568;
  }
  lVar25 = 
  ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puVar3 = *(ulong **)
              (
              ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
              + 0x20);
    puVar5 = *(ulong **)
              (
              ___ZN10codex_core7session4turn20run_sampling_request28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09276d3f1f6067ecE
              + 0x28);
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000001f8);
    if (iVar9 != 0) {
      puVar18 = (undefined *)(unaff_x29 + -0x70);
      puVar30 = (ulong *)0x1;
      in_stack_000073f0 = 2;
      in_stack_000073e0 = *(ulong *)(lVar25 + 0x60);
      in_stack_000073e8 = *(ulong *)(lVar25 + 0x68);
      lVar23 = *(long *)(lVar25 + 0x50);
      puVar4 = *(ulong **)(lVar25 + 0x58);
      puVar15 = (undefined8 *)0x1;
      if (lVar23 == 0) {
        puVar15 = (undefined8 *)0x2;
      }
      in_stack_00007408 = *(ulong *)(lVar25 + 8);
      in_stack_00000100 = (ulong *)&stack0x000002f0;
      in_stack_00000108 = (code *)CONCAT71(in_stack_00000108._1_7_,1);
      in_stack_0000ac40 = &stack0x00000100;
      in_stack_0000ac48 = (ulong *)&DAT_1061c2098;
      in_stack_000073d8 = 1;
      if (in_stack_000073e0 == 0) {
        in_stack_000073d8 = 2;
      }
      in_stack_00007418 = (undefined8 *)&stack0x0000ac40;
      in_stack_00007410 = s__108b39f4f;
      in_stack_000073c8 = (undefined4)lVar23;
      in_stack_000073cc = (undefined4)((ulong)lVar23 >> 0x20);
      in_stack_000073dc = 0;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000073c0);
      in_stack_000073f8 = puVar3;
      in_stack_00007400 = puVar5;
    }
  }
  goto LAB_10057f890;
}

