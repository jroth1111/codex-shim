
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10087f2a4(ulong param_1)

{
  byte *pbVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  bool bVar8;
  byte bVar9;
  code *pcVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  char *pcVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ulong extraout_x1_05;
  undefined8 extraout_x1_06;
  byte bVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined1 uVar24;
  long unaff_x19;
  char cVar25;
  long *plVar26;
  long *unaff_x20;
  undefined *puVar27;
  undefined *puVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  undefined8 uVar36;
  char cVar37;
  long lVar38;
  undefined8 uVar39;
  undefined8 *unaff_x28;
  long unaff_x29;
  ulong in_xzr;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined3 uStack0000000000000054;
  undefined1 *in_stack_00000058;
  undefined *in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  char *in_stack_00000250;
  undefined *in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  byte in_stack_00001aa0;
  undefined1 in_stack_00001aa1;
  undefined1 in_stack_00001aa2;
  undefined1 in_stack_00001aa3;
  undefined4 in_stack_00001aa4;
  undefined1 in_stack_00001aa8;
  undefined7 in_stack_00001aa9;
  undefined1 in_stack_00001ab0;
  undefined7 in_stack_00001ab1;
  long in_stack_00001ab8;
  long in_stack_00001ac0;
  undefined8 in_stack_00001ac8;
  undefined1 *in_stack_00001ad0;
  undefined *in_stack_00001ad8;
  undefined8 in_stack_00001ae0;
  undefined8 in_stack_00001ae8;
  char *in_stack_00001af0;
  undefined8 *in_stack_00001af8;
  undefined8 in_stack_00001b00;
  undefined8 in_stack_00001b08;
  undefined8 in_stack_00001b10;
  undefined *in_stack_00003448;
  undefined *in_stack_00003450;
  undefined8 in_stack_00003458;
  undefined8 in_stack_00003460;
  undefined8 in_stack_00003468;
  undefined8 in_stack_00003470;
  undefined8 in_stack_00003478;
  undefined8 in_stack_00003480;
  undefined8 in_stack_00003488;
  undefined8 in_stack_00003490;
  undefined8 in_stack_00003498;
  undefined8 in_stack_000034a0;
  undefined8 in_stack_000034a8;
  undefined8 in_stack_000034b0;
  undefined8 in_stack_000034b8;
  
code_r0x00010087f2a4:
  if ((param_1 < 3) &&
     (((*(byte *)(unaff_x20 + 2) - 1 < 2 ||
       ((*(byte *)(unaff_x20 + 2) != 0 &&
        (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN16codex_app_server17message_processor16MessageProcessor27process_client_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha18eda631fbfc169E
                            ), cVar11 != '\0')))) &&
      (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x20),
      (uVar17 & 1) != 0)))) {
    in_stack_00000258 = &stack0x000002b0;
    in_stack_00000250 = s_<__typed_notification:_108aca13c;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x20,&stack0x00000330);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar32 = *unaff_x20;
      puVar28 = *(undefined **)(lVar32 + 0x20);
      uVar36 = *(undefined8 *)(lVar32 + 0x28);
      puVar27 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar27 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar13 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00003210);
      if (iVar13 != 0) {
        in_stack_00001ac0 = *(long *)(lVar32 + 0x60);
        in_stack_00001ac8 = *(undefined8 *)(lVar32 + 0x68);
        lVar38 = *(long *)(lVar32 + 0x50);
        in_stack_00001aa0 = 1;
        if (lVar38 == 0) {
          in_stack_00001aa0 = 2;
        }
        in_stack_00001ae8 = *(undefined8 *)(lVar32 + 8);
        in_stack_00003448 = &stack0x000033d0;
        in_stack_00003450 = &DAT_1061c2098;
        in_stack_00001ab8 = 1;
        if (in_stack_00001ac0 == 0) {
          in_stack_00001ab8 = 2;
        }
        in_stack_00001af8 = (undefined8 *)&stack0x00003448;
        in_stack_00001af0 = s__108b39f4f;
        in_stack_00001aa1 = 0;
        in_stack_00001aa2 = 0;
        in_stack_00001aa3 = 0;
        in_stack_00001aa4 = 0;
        in_stack_00001aa8 = (undefined1)lVar38;
        in_stack_00001aa9 = (undefined7)((ulong)lVar38 >> 8);
        in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar32 + 0x58);
        in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar32 + 0x58) >> 8);
        (**(code **)(puVar27 + 0x20))(puVar4,&stack0x00001aa0);
        in_stack_00001ad0 = (undefined1 *)0x3;
        in_stack_00001ad8 = puVar28;
        in_stack_00001ae0 = uVar36;
      }
    }
  }
  else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
          (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar32 = *unaff_x20;
    in_stack_00000060 = *(undefined **)(lVar32 + 0x20);
    in_stack_00000068 = *(undefined8 *)(lVar32 + 0x28);
    in_stack_00000058 = (undefined1 *)0x3;
    puVar27 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar27 = &UNK_10b3c24c8;
    }
    puVar28 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar28 = &UNK_109adfc03;
    }
    iVar13 = (**(code **)(puVar27 + 0x18))(puVar28,&stack0x00000058);
    uVar36 = in_stack_00000068;
    puVar4 = in_stack_00000060;
    puVar16 = in_stack_00000058;
    if (iVar13 != 0) {
      in_stack_00000250 = &stack0x000002b0;
      in_stack_00000258 = &UNK_10b208fd0;
      in_stack_00001ac0 = *(long *)(lVar32 + 0x60);
      in_stack_00001ac8 = *(undefined8 *)(lVar32 + 0x68);
      lVar38 = *(long *)(lVar32 + 0x50);
      in_stack_00001aa0 = 1;
      if (lVar38 == 0) {
        in_stack_00001aa0 = 2;
      }
      in_stack_00001ae8 = *(undefined8 *)(lVar32 + 8);
      in_stack_00003448 = &stack0x00000330;
      in_stack_00003450 = (undefined *)CONCAT71((int7)((ulong)in_stack_00003450 >> 8),1);
      in_stack_00001ab8 = 1;
      if (in_stack_00001ac0 == 0) {
        in_stack_00001ab8 = 2;
      }
      in_stack_00001af8 = (undefined8 *)&stack0x00003210;
      in_stack_00001af0 = s__108b39f4f;
      in_stack_00001aa1 = 0;
      in_stack_00001aa2 = 0;
      in_stack_00001aa3 = 0;
      in_stack_00001aa4 = 0;
      in_stack_00001aa8 = (undefined1)lVar38;
      in_stack_00001aa9 = (undefined7)((ulong)lVar38 >> 8);
      in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar32 + 0x58);
      in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar32 + 0x58) >> 8);
      (**(code **)(puVar27 + 0x20))(puVar28,&stack0x00001aa0);
      in_stack_00001ad0 = puVar16;
      in_stack_00001ad8 = puVar4;
      in_stack_00001ae0 = uVar36;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x308) = 1;
LAB_10087dec8:
  pbVar1 = (byte *)(unaff_x19 + 0x2ea);
  *(byte *)(unaff_x19 + 0x2ea) = *(char *)(unaff_x19 + 0x2e9) << 1 ^ 2;
  *(long *)(unaff_x19 + 0x300) = unaff_x19 + 600;
  puVar2 = (ulong *)(unaff_x19 + 0x300);
  *(undefined1 *)(unaff_x19 + 0x310) = 0;
  *(long *)(unaff_x19 + 0x318) = unaff_x19 + 0x2a0;
  *(undefined1 *)(unaff_x19 + 0x350) = 0;
  *(byte **)(unaff_x19 + 0x358) = pbVar1;
  *(ulong **)(unaff_x19 + 0x360) = puVar2;
  lVar32 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar32 + 0x48) != '\x01') {
    if (*(char *)(lVar32 + 0x48) == '\x02') {
      FUN_107c05e20(&UNK_10b4cce20);
      goto LAB_100880394;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar32,&DAT_100c35d48)
    ;
    *(undefined1 *)(lVar32 + 0x48) = 1;
  }
  if (*(char *)(lVar32 + 0x44) == '\x01' && *(char *)(lVar32 + 0x45) == '\0') {
    FUN_10610bbb4(*(undefined8 *)*unaff_x28,((undefined8 *)*unaff_x28)[1]);
LAB_10087e43c:
    uVar36 = 1;
    uVar24 = 3;
    goto LAB_1008810ac;
  }
  if ((*(uint *)(lVar32 + 0x38) & 1) == 0) {
    uVar12 = FUN_1060fcce0();
    uVar17 = extraout_x1_05;
  }
  else {
    uVar12 = *(uint *)(lVar32 + 0x3c);
    uVar17 = (ulong)*(uint *)(lVar32 + 0x40);
  }
  uVar12 = uVar12 ^ uVar12 << 0x11;
  uVar14 = (uint)uVar17;
  uVar12 = (uint)(uVar17 >> 0x10) & 0xffff ^ uVar12 >> 7 ^ uVar14 ^ uVar12;
  *(undefined4 *)(lVar32 + 0x38) = 1;
  *(uint *)(lVar32 + 0x3c) = uVar14;
  *(uint *)(lVar32 + 0x40) = uVar12;
  bVar20 = *pbVar1;
  if ((int)(uVar12 + uVar14) < 0) {
    plVar26 = (long *)&stack0x00001aa0;
    bVar9 = bVar20 & 2;
    if ((bVar20 >> 1 & 1) == 0) {
      FUN_100fd702c(&stack0x00001aa0,unaff_x19 + 0x318,*unaff_x28);
      if (in_stack_00001aa0 == 2) {
        bVar20 = *pbVar1;
        goto LAB_10087dfe4;
      }
LAB_10087e400:
      uStack0000000000000050._3_1_ = (undefined1)in_stack_00001aa4;
      uStack0000000000000050 =
           CONCAT13(uStack0000000000000050._3_1_,
                    CONCAT12(in_stack_00001aa3,CONCAT11(in_stack_00001aa2,in_stack_00001aa1)));
      uStack0000000000000054 = (undefined3)((uint)in_stack_00001aa4 >> 8);
      in_stack_00000010 = CONCAT71(in_stack_00001aa9,in_stack_00001aa8);
      in_stack_00000008 = (long *)CONCAT71(in_stack_00001ab1,in_stack_00001ab0);
      *pbVar1 = *pbVar1 | 2;
      bVar20 = in_stack_00001aa0;
      if (in_stack_00001aa0 == 5) goto LAB_10087e43c;
      goto LAB_10087e494;
    }
LAB_10087dfe4:
    if ((bVar20 & 1) != 0) goto LAB_10087e430;
    bVar20 = *(byte *)(unaff_x19 + 0x310);
    if (1 < bVar20) {
      if (bVar20 != 3) goto LAB_100880358;
      plVar35 = *(long **)(unaff_x19 + 0x308);
      cVar11 = *(char *)(lVar32 + 0x48);
      if (cVar11 != '\x01') goto LAB_10087e1a4;
      goto LAB_10087e1d0;
    }
    if (bVar20 != 0) goto LAB_100880368;
    plVar35 = (long *)*puVar2;
    *(long **)(unaff_x19 + 0x308) = plVar35;
    cVar11 = *(char *)(lVar32 + 0x48);
    if (cVar11 == '\x01') {
LAB_10087e1d0:
      cVar37 = *(char *)(lVar32 + 0x44);
      cVar25 = *(char *)(lVar32 + 0x45);
      cVar11 = cVar25;
      if (cVar37 != '\x01') {
LAB_10087e1ec:
        *(char *)(lVar32 + 0x45) = cVar11;
        goto LAB_10087e1f0;
      }
      if (cVar25 != '\0') {
        cVar11 = cVar25 + -1;
        goto LAB_10087e1ec;
      }
      FUN_10610bbb4(*(undefined8 *)*unaff_x28,((undefined8 *)*unaff_x28)[1]);
      __ZN77__LT_tokio__task__coop__RestoreOnPending_u20_as_u20_core__ops__drop__Drop_GT_4drop17h13c7af1e56643a68E
                ((ulong)plVar26 | 1);
      goto LAB_10087fe38;
    }
LAB_10087e1a4:
    cVar37 = '\0';
    cVar25 = '\0';
    if (cVar11 != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar32,&DAT_100c35d48);
      *(undefined1 *)(lVar32 + 0x48) = 1;
      unaff_x28 = in_stack_00000030;
      goto LAB_10087e1d0;
    }
LAB_10087e1f0:
    lVar38 = *plVar35;
    auVar50 = func_0x000100fc8480(lVar38 + 0x1a0,lVar38 + 0x80);
    plVar35 = plVar26;
    if (auVar50._0_8_ == 2) {
      __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
                (lVar38 + 0x100,*in_stack_00000030);
      auVar50 = func_0x000100fc8480(lVar38 + 0x1a0,lVar38 + 0x80);
      if (auVar50._0_8_ == 2) {
        if ((*(char *)(lVar38 + 0x1b8) == '\x01') &&
           (uVar36 = 0, *(ulong *)(lVar38 + 0x1e8) == *(ulong *)(lVar38 + 0x1e0) >> 1))
        goto LAB_10087e478;
        if (cVar37 != '\0') {
          if (*(char *)(lVar32 + 0x48) != '\x01') {
            if (*(char *)(lVar32 + 0x48) == '\x02') goto LAB_10087fe38;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar32,&DAT_1060edbcc);
            *(undefined1 *)(lVar32 + 0x48) = 1;
          }
          *(undefined1 *)(lVar32 + 0x44) = 1;
          *(char *)(lVar32 + 0x45) = cVar25;
        }
LAB_10087fe38:
        uVar24 = 3;
        *(undefined1 *)(unaff_x19 + 0x310) = 3;
        uVar36 = 1;
        goto LAB_1008810ac;
      }
      if ((auVar50._0_8_ & 1) != 0) {
        uVar17 = *(ulong *)(lVar38 + 0x1e0);
        uVar30 = *(ulong *)(lVar38 + 0x1e8);
        goto LAB_10087e354;
      }
      pcVar19 = (char *)(lVar38 + 0x1c0);
      if (*pcVar19 == '\0') {
        *pcVar19 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar19,auVar50._8_8_,1000000000);
      }
      uVar36 = 1;
      FUN_1060fa678(pcVar19,1,pcVar19);
      plVar35 = auVar50._8_8_;
    }
    else if ((auVar50._0_8_ & 1) == 0) {
      pcVar19 = (char *)(lVar38 + 0x1c0);
      if (*pcVar19 == '\0') {
        *pcVar19 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar19,auVar50._8_8_,1000000000);
      }
      uVar36 = 1;
      FUN_1060fa678(pcVar19,1,pcVar19);
      plVar35 = auVar50._8_8_;
    }
    else {
      uVar36 = 0;
      if (*(ulong *)(lVar38 + 0x1e8) != *(ulong *)(lVar38 + 0x1e0) >> 1) goto LAB_10087e2b4;
    }
  }
  else {
    bVar9 = bVar20 & 1;
    if ((bVar20 & 1) != 0) {
LAB_10087e3d0:
      if ((*pbVar1 >> 1 & 1) == 0) {
        FUN_100fd702c(&stack0x00001aa0,unaff_x19 + 0x318,*unaff_x28);
        if (in_stack_00001aa0 != 2) goto LAB_10087e400;
        goto LAB_10087e43c;
      }
LAB_10087e430:
      bVar20 = 4;
      if (bVar9 == 0) goto LAB_10087e43c;
      goto LAB_10087e494;
    }
    bVar20 = *(byte *)(unaff_x19 + 0x310);
    if (bVar20 < 2) {
      if (bVar20 == 0) {
        plVar26 = (long *)*puVar2;
        *(long **)(unaff_x19 + 0x308) = plVar26;
        cVar11 = *(char *)(lVar32 + 0x48);
        if (cVar11 != '\x01') goto LAB_10087e040;
LAB_10087e09c:
        cVar25 = *(char *)(lVar32 + 0x44);
        cVar37 = *(char *)(lVar32 + 0x45);
        cVar11 = cVar37;
        if (cVar25 == '\x01') goto LAB_10087e0b0;
        goto LAB_10087e0b8;
      }
LAB_100880368:
      FUN_107c05cc0(&UNK_10b23a760);
      goto LAB_100880394;
    }
    if (bVar20 != 3) {
LAB_100880358:
      FUN_107c05cc4(&UNK_10b23a760);
      goto LAB_100880394;
    }
    plVar26 = *(long **)(unaff_x19 + 0x308);
    cVar11 = *(char *)(lVar32 + 0x48);
    if (cVar11 == '\x01') goto LAB_10087e09c;
LAB_10087e040:
    cVar25 = '\0';
    cVar37 = '\0';
    if (cVar11 != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar32,&DAT_100c35d48);
      *(undefined1 *)(lVar32 + 0x48) = 1;
      cVar25 = *(char *)(lVar32 + 0x44);
      cVar37 = *(char *)(lVar32 + 0x45);
      unaff_x28 = in_stack_00000030;
      cVar11 = cVar37;
      if (cVar25 != '\x01') {
LAB_10087e0b8:
        *(char *)(lVar32 + 0x45) = cVar11;
        goto LAB_10087e0bc;
      }
LAB_10087e0b0:
      cVar25 = '\x01';
      if (cVar37 != '\0') {
        cVar11 = cVar37 + -1;
        goto LAB_10087e0b8;
      }
      FUN_10610bbb4(*(undefined8 *)*unaff_x28,((undefined8 *)*unaff_x28)[1]);
      goto LAB_10087e3c8;
    }
LAB_10087e0bc:
    lVar38 = *plVar26;
    auVar50 = func_0x000100fc8480(lVar38 + 0x1a0,lVar38 + 0x80);
    plVar35 = auVar50._8_8_;
    if (auVar50._0_8_ != 2) {
      if ((auVar50._0_8_ & 1) == 0) {
        pcVar19 = (char *)(lVar38 + 0x1c0);
        if (*pcVar19 == '\0') {
          *pcVar19 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar19,plVar35,1000000000);
        }
        uVar36 = 1;
        FUN_1060fa678(pcVar19,1,pcVar19);
        goto LAB_10087e478;
      }
      uVar36 = 0;
      plVar35 = plVar26;
      if (*(ulong *)(lVar38 + 0x1e8) == *(ulong *)(lVar38 + 0x1e0) >> 1) goto LAB_10087e478;
LAB_10087e2b4:
      puVar27 = &UNK_10b23a6d0;
LAB_10087e364:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar27);
      goto LAB_100880394;
    }
    __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
              (lVar38 + 0x100,*in_stack_00000030);
    auVar50 = func_0x000100fc8480(lVar38 + 0x1a0,lVar38 + 0x80);
    if (auVar50._0_8_ == 2) {
      if ((*(char *)(lVar38 + 0x1b8) != '\x01') ||
         (uVar36 = 0, plVar35 = plVar26,
         *(ulong *)(lVar38 + 0x1e8) != *(ulong *)(lVar38 + 0x1e0) >> 1)) {
        unaff_x28 = in_stack_00000030;
        if (cVar25 != '\0') {
          if (*(char *)(lVar32 + 0x48) != '\x01') {
            if (*(char *)(lVar32 + 0x48) == '\x02') goto LAB_10087e3c8;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar32,&DAT_1060edbcc);
            *(undefined1 *)(lVar32 + 0x48) = 1;
          }
          *(undefined1 *)(lVar32 + 0x44) = 1;
          *(char *)(lVar32 + 0x45) = cVar37;
        }
LAB_10087e3c8:
        *(undefined1 *)(unaff_x19 + 0x310) = 3;
        goto LAB_10087e3d0;
      }
    }
    else {
      if ((auVar50._0_8_ & 1) == 0) {
        pcVar19 = (char *)(lVar38 + 0x1c0);
        if (*pcVar19 == '\0') {
          *pcVar19 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar19,auVar50._8_8_,1000000000);
        }
        uVar36 = 1;
        FUN_1060fa678(pcVar19,1,pcVar19);
        plVar35 = auVar50._8_8_;
        goto LAB_10087e478;
      }
      uVar17 = *(ulong *)(lVar38 + 0x1e0);
      uVar30 = *(ulong *)(lVar38 + 0x1e8);
LAB_10087e354:
      uVar36 = 0;
      plVar35 = plVar26;
      if (uVar30 != uVar17 >> 1) {
        puVar27 = &UNK_10b23a6b8;
        goto LAB_10087e364;
      }
    }
  }
LAB_10087e478:
  *(undefined1 *)(unaff_x19 + 0x310) = 1;
  *pbVar1 = *pbVar1 | 1;
  in_stack_00000008 = plVar35;
  in_stack_00000010 = uVar36;
  unaff_x28 = in_stack_00000030;
  bVar20 = 2;
LAB_10087e494:
  *(byte *)(unaff_x19 + 0x2b8) = bVar20;
  *(uint *)(unaff_x19 + 700) = CONCAT31(uStack0000000000000054,uStack0000000000000050._3_1_);
  *(undefined4 *)(unaff_x19 + 0x2b9) = uStack0000000000000050;
  *(undefined8 *)(unaff_x19 + 0x2c0) = in_stack_00000010;
  *(long **)(unaff_x19 + 0x2c8) = in_stack_00000008;
  puVar29 = (undefined8 *)(unaff_x19 + 0x300);
  if (*(char *)(unaff_x19 + 0x350) == '\x03') {
    FUN_100cf46ec(unaff_x19 + 800);
    bVar20 = *(byte *)(unaff_x19 + 0x2b8);
  }
  cVar11 = bVar20 - 2;
  if (bVar20 < 2) {
    cVar11 = '\x01';
  }
  if (cVar11 != '\0') {
    if (cVar11 != '\x01') {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b224610);
      goto LAB_100880394;
    }
    uVar17 = *(ulong *)(unaff_x19 + 0x2c0);
    if ((bVar20 & 1) == 0) {
      uVar36 = 0;
      uVar5 = *(undefined4 *)(unaff_x19 + 0x2b9);
      uVar6 = *(undefined4 *)(unaff_x19 + 700);
      uVar24 = *(undefined1 *)(unaff_x19 + 0x2c8);
      puVar29 = (undefined8 *)0x8;
      if (*(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18) == 0) {
        puVar29 = (undefined8 *)_malloc(8);
        if (puVar29 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
          goto LAB_100880394;
        }
        *puVar29 = 0;
        uVar36 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x2ed) = 0;
      *(undefined8 *)(unaff_x19 + 0x300) = uVar36;
      *(undefined8 **)(unaff_x19 + 0x308) = puVar29;
      *(undefined8 *)(unaff_x19 + 0x310) = uVar36;
      *(long *)(unaff_x19 + 0x318) = *(long *)(unaff_x19 + 0x298) + 0x10;
      *(uint *)(unaff_x19 + 800) = CONCAT13((char)uVar6,(int3)uVar5);
      *(undefined4 *)(unaff_x19 + 0x323) = uVar6;
      *(ulong *)(in_stack_00000038 + 0x38) = uVar17;
      *(undefined1 *)(unaff_x19 + 0x32f) = uVar24;
      in_stack_00000048[0xf8] = 0;
      iVar13 = FUN_1008a6988((long *)(unaff_x19 + 0x300),unaff_x28);
      if (iVar13 != 0) {
        uVar36 = 1;
        uVar24 = 7;
        goto LAB_1008810ac;
      }
      if (in_stack_00000048[0xf8] == '\x03') {
        FUN_100d5b988(unaff_x19 + 0x330);
      }
      else if ((in_stack_00000048[0xf8] == '\0') && (*(long *)(unaff_x19 + 0x300) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x308));
        *(undefined1 *)(unaff_x19 + 0x2ed) = 0;
        goto LAB_10087dec8;
      }
      *(undefined1 *)(unaff_x19 + 0x2ed) = 0;
      goto LAB_10087dec8;
    }
    if ((uVar17 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x2e9) = 0;
    }
    else if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             ((bRam000000010b627318 - 1 < 2 ||
              ((bRam000000010b627318 != 0 &&
               (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
                                   ), unaff_x28 = in_stack_00000030, cVar11 != '\0')))))) &&
            (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
                                ), (uVar17 & 1) != 0)) {
      in_stack_00001ab8 =
           ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
           + 0x30;
      in_stack_00000058 = &stack0x00003210;
      in_stack_00000060 = &UNK_10b208fd0;
      in_stack_00001aa0 = 1;
      in_stack_00001aa1 = 0;
      in_stack_00001aa2 = 0;
      in_stack_00001aa3 = 0;
      in_stack_00001aa4 = 0;
      in_stack_00001aa8 = SUB81(&stack0x00000058,0);
      in_stack_00001aa9 = (undefined7)((ulong)&stack0x00000058 >> 8);
      in_stack_00001ab0 = 1;
      in_stack_00001ab1 = 0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
                 ,&stack0x00001aa0);
      lVar32 = 
      ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar27 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar27 = &UNK_10b3c24c8;
        }
        puVar28 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar28 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar27 + 0x18))(puVar28,&stack0x00000330);
        if (iVar13 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar32,puVar28,puVar27,&stack0x00000330,&stack0x00001aa0);
        }
      }
    }
    else {
      lVar32 = 
      ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar28 = *(undefined **)
                   (
                   ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
                   + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hee10736ae25de1bfE
                  + 0x28);
        puVar27 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar27 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00000238);
        if (iVar13 != 0) {
          in_stack_00003448 = &UNK_108cb1f83;
          in_stack_00003450 = (undefined *)0x5f;
          in_stack_00001ad0 = (undefined1 *)0x2;
          in_stack_00001ac0 = *(long *)(lVar32 + 0x60);
          in_stack_00001ac8 = *(undefined8 *)(lVar32 + 0x68);
          lVar38 = *(long *)(lVar32 + 0x50);
          in_stack_00001aa0 = 1;
          if (lVar38 == 0) {
            in_stack_00001aa0 = 2;
          }
          in_stack_00001ae8 = *(undefined8 *)(lVar32 + 8);
          in_stack_00000058 = &stack0x00000330;
          in_stack_00000060 = (undefined *)CONCAT71(in_stack_00000060._1_7_,1);
          in_stack_00001ab8 = 1;
          if (in_stack_00001ac0 == 0) {
            in_stack_00001ab8 = 2;
          }
          in_stack_00001af8 = (undefined8 *)&stack0x00003210;
          in_stack_00001af0 = s__108b39f4f;
          in_stack_00001aa1 = 0;
          in_stack_00001aa2 = 0;
          in_stack_00001aa3 = 0;
          in_stack_00001aa4 = 0;
          in_stack_00001aa8 = (undefined1)lVar38;
          in_stack_00001aa9 = (undefined7)((ulong)lVar38 >> 8);
          in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar32 + 0x58);
          in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar32 + 0x58) >> 8);
          (**(code **)(puVar27 + 0x20))(puVar4,&stack0x00001aa0);
          in_stack_00001ad8 = puVar28;
          in_stack_00001ae0 = uVar36;
        }
      }
    }
    goto LAB_10087dec8;
  }
  lVar32 = *(long *)(unaff_x19 + 0x2c8);
  *(ulong *)(unaff_x19 + 0x2d0) = *(ulong *)(unaff_x19 + 0x2c0);
  *(long *)(unaff_x19 + 0x2d8) = lVar32;
  if ((*(ulong *)(unaff_x19 + 0x2c0) & 1) == 0) {
    lVar32 = *(long *)(unaff_x19 + 0x298);
    __ZN11codex_login4auth7manager11AuthManager19clear_external_auth17h1fd444b867dd81c9E
              (*(long *)(lVar32 + 0x148) + 0x10);
    __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
              (lVar32 + 0x2c8);
    __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
              (*(long *)(lVar32 + 0x1488) + 0x20);
    lVar32 = *(long *)(unaff_x19 + 0x298) + 0x10;
    *(long *)(unaff_x19 + 0x300) = lVar32;
    *(undefined1 *)(unaff_x19 + 0x390) = 0;
    *(long *)(unaff_x19 + 0x308) = lVar32;
    *(undefined1 *)(unaff_x19 + 0x388) = 0;
    *(long *)(unaff_x19 + 0x310) = *(long *)(*(long *)(unaff_x19 + 0x298) + 0x168) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x380) = 0;
    auVar50 = FUN_100fd3e50(unaff_x19 + 0x310,unaff_x28);
    uVar36 = auVar50._8_8_;
    pcVar19 = auVar50._0_8_;
    if (pcVar19 == (char *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x388) = 3;
      *(undefined1 *)(unaff_x19 + 0x390) = 3;
      uVar36 = 1;
      uVar24 = 8;
      goto LAB_1008810ac;
    }
    if (((*(char *)(unaff_x19 + 0x380) == '\x03') && (*(char *)(unaff_x19 + 0x378) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x330) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x338);
      uVar36 = extraout_x1;
      if (*(long *)(unaff_x19 + 0x340) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x340) + 0x18))(*(undefined8 *)(unaff_x19 + 0x348));
        uVar36 = extraout_x1_00;
      }
    }
    bVar20 = pcVar19[0x28];
    pcVar19[0x28] = '\x02';
    if (bVar20 != 2) {
      uVar36 = *(undefined8 *)(pcVar19 + 0x29);
      in_stack_00001aa1 = (undefined1)uVar36;
      in_stack_00001aa2 = (undefined1)((ulong)uVar36 >> 8);
      in_stack_00001aa3 = (undefined1)((ulong)uVar36 >> 0x10);
      in_stack_00001aa4 = (undefined4)((ulong)uVar36 >> 0x18);
      FUN_100e65408(&stack0x00001aa0);
      uVar36 = extraout_x1_01;
      in_stack_00001aa0 = bVar20;
    }
    if (*pcVar19 == '\0') {
      *pcVar19 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar19,uVar36,1000000000);
    }
    FUN_1060fa678(pcVar19,1,pcVar19);
    *(undefined1 *)(unaff_x19 + 0x388) = 1;
    *(undefined1 *)(unaff_x19 + 0x390) = 1;
    *(long *)(unaff_x19 + 0x300) = *(long *)(unaff_x19 + 0x298) + 0x10;
    *(long *)(unaff_x19 + 0x308) = *(long *)(unaff_x19 + 0x2b0) + 0x10;
    *(undefined8 *)(unaff_x19 + 0x310) = 0;
    *(undefined1 *)(unaff_x19 + 0x328) = 0;
    uVar17 = FUN_1008a0454(unaff_x19 + 0x300,unaff_x28);
    if ((uVar17 & 1) != 0) {
      uVar36 = 1;
      uVar24 = 9;
      goto LAB_1008810ac;
    }
    FUN_100ced468(unaff_x19 + 0x300);
    lVar32 = *(long *)(unaff_x19 + 0x298);
    *(long *)(unaff_x19 + 0x300) = lVar32 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x3f0) = 0;
    *(long *)(unaff_x19 + 0x308) = lVar32 + 0xe90;
    *(undefined1 *)(unaff_x19 + 1000) = 0;
    *(long **)(unaff_x19 + 0x310) = (long *)(lVar32 + 0x1048);
    *(undefined1 *)(unaff_x19 + 0x318) = 0;
    *(long *)(unaff_x19 + 800) = *(long *)(lVar32 + 0x1048) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x390) = 0;
    auVar50 = FUN_100fd3e50(unaff_x19 + 800,unaff_x28);
    uVar36 = auVar50._8_8_;
    pcVar19 = auVar50._0_8_;
    if (pcVar19 != (char *)0x0) {
      if (((*(char *)(unaff_x19 + 0x390) == '\x03') && (*(char *)(unaff_x19 + 0x388) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x340) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x348);
        uVar36 = extraout_x1_02;
        if (*(long *)(unaff_x19 + 0x350) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x350) + 0x18))(*(undefined8 *)(unaff_x19 + 0x358));
          uVar36 = extraout_x1_03;
        }
      }
      uVar17 = *(ulong *)(pcVar19 + 0x70);
      if (uVar17 == 0) {
        uVar30 = 0;
        auVar50._8_8_ = uVar36;
        auVar50._0_8_ = 8;
      }
      else {
        plVar26 = *(long **)(pcVar19 + 0x58);
        lVar32 = *plVar26;
        uVar31 = CONCAT17(-(-1 < lVar32),
                          CONCAT16(-(-1 < (char)((ulong)lVar32 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar32 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar32 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar32 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar32
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar32 >> 8)),-(-1 < (char)lVar32))))))));
        plVar35 = plVar26;
        while( true ) {
          uVar31 = uVar31 & 0x8080808080808080;
          plVar35 = plVar35 + 1;
          if (uVar31 != 0) break;
          lVar32 = *plVar35;
          uVar31 = CONCAT17(-(-1 < lVar32),
                            CONCAT16(-(-1 < (char)((ulong)lVar32 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar32 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar32 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar32 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar32 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar32 >> 8)),
                                                           -(-1 < (char)lVar32))))))));
          plVar26 = plVar26 + -0x50;
        }
        uVar30 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        iVar13 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
        plVar15 = (long *)plVar26[(long)-iVar13 * 10 + -8];
        lVar32 = *plVar15;
        *plVar15 = lVar32 + 1;
        if (lVar32 < 0) goto LAB_100880394;
        lVar38 = plVar26[(long)-iVar13 * 10 + -9];
        lVar32 = plVar26[(long)-iVar13 * 10 + -10];
        in_stack_00001aa0 = (byte)lVar32;
        in_stack_00001aa1 = (undefined1)((ulong)lVar32 >> 8);
        in_stack_00001aa2 = (undefined1)((ulong)lVar32 >> 0x10);
        in_stack_00001aa3 = (undefined1)((ulong)lVar32 >> 0x18);
        in_stack_00001aa4 = (undefined4)((ulong)lVar32 >> 0x20);
        uVar30 = uVar17;
        if (uVar17 < 5) {
          uVar30 = 4;
        }
        lVar23 = uVar30 * 0x18;
        if (0x555555555555555 < uVar17) {
          uVar36 = 0;
LAB_10087d824:
          func_0x0001087c9084(uVar36,lVar23);
LAB_100880394:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100880398);
          (*pcVar10)();
        }
        if (lVar23 == 0) {
          uVar30 = 0;
          auVar50 = ZEXT816(8);
        }
        else {
          auVar50 = _malloc(lVar23);
          if (auVar50._0_8_ == 0) {
            uVar36 = 8;
            goto LAB_10087d824;
          }
        }
        uVar36 = auVar50._8_8_;
        plVar33 = auVar50._0_8_;
        plVar33[2] = (long)plVar15;
        plVar33[1] = lVar38;
        *plVar33 = lVar32;
        lVar32 = uVar17 - 1;
        if (lVar32 != 0) {
          uVar31 = uVar31 - 1 & uVar31;
          uVar34 = 1;
          do {
            while (uVar31 == 0) {
              lVar38 = *plVar35;
              plVar26 = plVar26 + -0x50;
              plVar35 = plVar35 + 1;
              uVar31 = CONCAT17(-(-1 < lVar38),
                                CONCAT16(-(-1 < (char)((ulong)lVar38 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar38 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar38 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar38 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar38 >> 8)),
                                                           -(-1 < (char)lVar38)))))))) &
                       0x8080808080808080;
            }
            uVar7 = (uVar31 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar31 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            iVar13 = (int)((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
            plVar15 = (long *)plVar26[(long)-iVar13 * 10 + -8];
            lVar38 = *plVar15;
            *plVar15 = lVar38 + 1;
            if (lVar38 < 0) goto LAB_100880394;
            lVar23 = plVar26[(long)-iVar13 * 10 + -9];
            lVar38 = plVar26[(long)-iVar13 * 10 + -10];
            in_stack_00001aa0 = (byte)lVar38;
            in_stack_00001aa1 = (undefined1)((ulong)lVar38 >> 8);
            in_stack_00001aa2 = (undefined1)((ulong)lVar38 >> 0x10);
            in_stack_00001aa3 = (undefined1)((ulong)lVar38 >> 0x18);
            in_stack_00001aa4 = (undefined4)((ulong)lVar38 >> 0x20);
            if (uVar34 == uVar30) {
              FUN_108855060(&stack0x00000330,uVar34,lVar32,8,0x18);
              uVar36 = extraout_x1_04;
            }
            auVar50._8_8_ = uVar36;
            auVar50._0_8_ = plVar33;
            uVar31 = uVar31 - 1 & uVar31;
            plVar21 = plVar33 + uVar34 * 3;
            plVar21[2] = (long)plVar15;
            plVar21[1] = lVar23;
            *plVar21 = lVar38;
            uVar34 = uVar34 + 1;
            lVar32 = lVar32 + -1;
            unaff_x28 = in_stack_00000030;
          } while (lVar32 != 0);
        }
      }
      puVar29 = auVar50._0_8_;
      if (*pcVar19 == '\0') {
        *pcVar19 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar19,auVar50._8_8_,1000000000);
      }
      FUN_1060fa678(pcVar19,1,pcVar19);
      *(undefined8 **)(unaff_x19 + 0x3c8) = puVar29;
      *(undefined8 **)(unaff_x19 + 0x3d0) = puVar29;
      *(ulong *)(unaff_x19 + 0x3d8) = uVar30;
      *(undefined8 **)(unaff_x19 + 0x3e0) = puVar29 + uVar17 * 3;
      if (puVar29 == puVar29 + uVar17 * 3) {
LAB_10087da44:
        *(undefined8 *)(unaff_x19 + 0x330) = 0;
      }
      else {
        while( true ) {
          *(undefined8 **)(unaff_x19 + 0x3d0) = puVar29 + 3;
          lVar32 = puVar29[2];
          uVar36 = *puVar29;
          *(undefined8 *)(unaff_x19 + 0x328) = puVar29[1];
          *(undefined8 *)(unaff_x19 + 800) = uVar36;
          *(long *)(unaff_x19 + 0x330) = lVar32;
          if (lVar32 == 0) break;
          uVar36 = *puVar29;
          *(undefined8 *)(unaff_x19 + 0x3c0) = puVar29[1];
          *(undefined8 *)(unaff_x19 + 0x3b8) = uVar36;
          *(long *)(unaff_x19 + 0x338) = lVar32;
          *(long *)(unaff_x19 + 0x340) = lVar32 + 0x10;
          *(undefined1 *)(unaff_x19 + 0x3b0) = 0;
          pcVar19 = (char *)FUN_100fd3e50(unaff_x19 + 0x340,unaff_x28);
          if (pcVar19 == (char *)0x0) {
            uVar24 = 4;
LAB_100881090:
            *(undefined1 *)(unaff_x19 + 0x318) = uVar24;
            *(undefined1 *)(unaff_x19 + 1000) = 3;
            *(undefined1 *)(unaff_x19 + 0x3f0) = 3;
            uVar36 = 1;
            uVar24 = 10;
            goto LAB_1008810ac;
          }
          if (((*(char *)(unaff_x19 + 0x3b0) == '\x03') && (*(char *)(unaff_x19 + 0x3a8) == '\x03'))
             && (*(char *)(unaff_x19 + 0x360) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x368);
            if (*(long *)(unaff_x19 + 0x370) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x370) + 0x18))(*(undefined8 *)(unaff_x19 + 0x378))
              ;
            }
          }
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
              ((bRam000000010b6273f0 - 1 < 2 ||
               ((bRam000000010b6273f0 != 0 &&
                (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
                                    ), cVar11 != '\0')))))) &&
             (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
                                 ), (uVar17 & 1) != 0)) {
            __ZN25codex_app_server_protocol8protocol14thread_history20ThreadHistoryBuilder20active_turn_snapshot17h8fa69dfbd4e19610E
                      (&stack0x00001aa0,pcVar19 + 0xb0);
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
                       ,&stack0x00003210);
            lVar32 = 
            ___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              in_stack_00000060 =
                   *(undefined **)
                    (
                    ___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
                    + 0x20);
              in_stack_00000068 =
                   *(undefined8 *)
                    (
                    ___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
                    + 0x28);
              in_stack_00000058 = (undefined1 *)0x4;
              puVar27 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar27 = &UNK_10b3c24c8;
              }
              puVar28 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar28 = &UNK_109adfc03;
              }
              iVar13 = (**(code **)(puVar27 + 0x18))(puVar28,&stack0x00000058);
              if (iVar13 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar32,puVar28,puVar27,&stack0x00000058,&stack0x00003210);
              }
            }
            if (CONCAT44(in_stack_00001aa4,
                         CONCAT13(in_stack_00001aa3,
                                  CONCAT12(in_stack_00001aa2,
                                           CONCAT11(in_stack_00001aa1,in_stack_00001aa0)))) != 2) {
              FUN_100e4623c(&stack0x00001aa0);
            }
          }
          else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                  (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar27 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar27 = &UNK_10b3c24c8;
            }
            puVar28 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar28 = &UNK_109adfc03;
            }
            iVar13 = (**(code **)(puVar27 + 0x18))(puVar28,&stack0x00003448);
            lVar32 = 
            ___ZN16codex_app_server12thread_state18ThreadStateManager19clear_all_listeners28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2321f879fd193546E
            ;
            if (iVar13 != 0) {
              __ZN25codex_app_server_protocol8protocol14thread_history20ThreadHistoryBuilder20active_turn_snapshot17h8fa69dfbd4e19610E
                        (&stack0x00001aa0,pcVar19 + 0xb0);
              in_stack_00000070 = lVar32 + 0x30;
              in_stack_00000060 = &stack0x00003210;
              in_stack_00000058 = (undefined1 *)0x1;
              in_stack_00000068 = 5;
              (**(code **)(puVar27 + 0x20))(puVar28,&stack0x00000330);
              if (CONCAT44(in_stack_00001aa4,
                           CONCAT13(in_stack_00001aa3,
                                    CONCAT12(in_stack_00001aa2,
                                             CONCAT11(in_stack_00001aa1,in_stack_00001aa0)))) != 2)
              {
                FUN_100e4623c(&stack0x00001aa0);
              }
            }
          }
          __ZN16codex_app_server12thread_state11ThreadState14clear_listener17hc75eda210718d102E
                    (pcVar19 + 0x28);
          if (*pcVar19 == '\0') {
            *pcVar19 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar19,extraout_x1_06,1000000000);
          }
          FUN_1060fa678(pcVar19,1,pcVar19);
          lVar32 = **(long **)(unaff_x19 + 0x338);
          **(long **)(unaff_x19 + 0x338) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x338);
          }
          puVar29 = *(undefined8 **)(unaff_x19 + 0x3d0);
          if (puVar29 == *(undefined8 **)(unaff_x19 + 0x3e0)) goto LAB_10087da44;
        }
      }
      FUN_100d93f8c(unaff_x19 + 0x3c8);
      *(undefined1 *)(unaff_x19 + 0x318) = 1;
      FUN_100ce9d8c(unaff_x19 + 0x310);
      *(undefined1 *)(unaff_x19 + 1000) = 1;
      *(undefined1 *)(unaff_x19 + 0x3f0) = 1;
      *(long *)(unaff_x19 + 0x300) = *(long *)(unaff_x19 + 0x298) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x3d0) = 0;
      uVar17 = FUN_1008a627c(unaff_x19 + 0x300,unaff_x28);
      if ((uVar17 & 1) == 0) {
        FUN_100cfc1d8(unaff_x19 + 0x300);
        *(long *)(unaff_x19 + 0x300) = *(long *)(unaff_x19 + 0x298) + 0x10;
        *(undefined1 *)(unaff_x19 + 0x410) = 0;
        uVar17 = FUN_10089e57c(unaff_x19 + 0x300,unaff_x28);
        if ((uVar17 & 1) == 0) {
          if ((*(char *)(unaff_x19 + 0x410) == '\x03') && (*(char *)(unaff_x19 + 0x408) == '\x03'))
          {
            FUN_100ceb284(unaff_x19 + 0x310);
          }
          lVar32 = **(long **)(unaff_x19 + 0x2b0);
          **(long **)(unaff_x19 + 0x2b0) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(unaff_x19 + 0x2b0);
          }
          FUN_100e8103c(unaff_x19 + 0x2a0);
          lVar32 = **(long **)(unaff_x19 + 0x298);
          **(long **)(unaff_x19 + 0x298) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h02bacbb834c35091E(unaff_x19 + 0x298);
          }
          lVar32 = **(long **)(unaff_x19 + 0x230);
          **(long **)(unaff_x19 + 0x230) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x230);
          }
          FUN_100cc9a5c(unaff_x19 + 600);
          lVar32 = **(long **)(unaff_x19 + 0x260);
          **(long **)(unaff_x19 + 0x260) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001060e2224(unaff_x19 + 0x260);
          }
          lVar32 = **(long **)(unaff_x19 + 0x268);
          **(long **)(unaff_x19 + 0x268) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h994c9943b8d53ba2E(unaff_x19 + 0x268);
          }
          lVar32 = **(long **)(unaff_x19 + 0x270);
          **(long **)(unaff_x19 + 0x270) = lVar32 + -1;
          LORelease();
          if (lVar32 == 1) {
            DataMemoryBarrier(2,1);
            func_0x0001060e2224(unaff_x19 + 0x270);
          }
          uVar36 = 0;
          uVar24 = 1;
        }
        else {
          uVar36 = 1;
          uVar24 = 0xc;
        }
      }
      else {
        uVar36 = 1;
        uVar24 = 0xb;
      }
LAB_1008810ac:
      *(undefined1 *)(unaff_x19 + 0x2e8) = uVar24;
      return uVar36;
    }
    uVar24 = 3;
    goto LAB_100881090;
  }
  if (lVar32 != 0) {
    *(undefined1 *)(unaff_x19 + 0x2ee) = 1;
    *(long *)(unaff_x19 + 0x2e0) = lVar32;
    *(bool *)(unaff_x19 + 0x2eb) = *(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18) == 0;
    *(undefined1 *)(unaff_x19 + 0x2ee) = 0;
    _memcpy(&stack0x00001aa0,*(undefined8 *)(unaff_x19 + 0x2e0),0x1c0);
    plVar26 = *(long **)(unaff_x19 + 0x2b0);
    lVar32 = *plVar26;
    *plVar26 = lVar32 + 1;
    if (lVar32 < 0) goto LAB_100880394;
    plVar35 = (long *)(unaff_x19 + 0x298);
    lVar32 = *(long *)(unaff_x19 + 0x260) + 0x10;
    _memcpy(&stack0x00000058,&stack0x00001aa0,0x1c0);
    _memcpy(puVar29,&stack0x00000058,0x1c0);
    *(long **)(unaff_x19 + 0x4c0) = plVar35;
    *(long **)(unaff_x19 + 0x4c8) = plVar26;
    *(long *)(unaff_x19 + 0x4d0) = lVar32;
    *(undefined8 *)(unaff_x19 + 0x4d8) = 0;
    in_stack_00000040[8] = 0;
    *(undefined2 *)(in_stack_00000040 + 9) = 0x100;
    *(undefined8 *)(unaff_x19 + 0x4e0) = 0;
    _memcpy(unaff_x19 + 0x4e8,puVar29,0x1c0);
    *(long **)(unaff_x19 + 0x6a8) = plVar26;
    plVar15 = (long *)__ZN25codex_app_server_protocol8protocol6common13ClientRequest2id17h5a3c9c98108cc9e2E
                                (unaff_x19 + 0x4e8);
    if (*plVar15 == -0x8000000000000000) {
      lVar38 = plVar15[1];
      lVar22 = -0x8000000000000000;
      uVar36 = 0;
      lVar23 = plVar15[2];
    }
    else {
      lVar23 = plVar15[1];
      lVar22 = plVar15[2];
      lVar38 = 1;
      if ((lVar22 != 0) && (lVar38 = _malloc(lVar22), lVar38 == 0)) {
        func_0x0001087c9084(1,lVar22);
        goto LAB_100880394;
      }
      _memcpy(lVar38,lVar23,lVar22);
      uVar36 = *(undefined8 *)(unaff_x19 + 0x4e0);
      plVar26 = *(long **)(unaff_x19 + 0x6a8);
      lVar23 = lVar22;
    }
    *(undefined8 *)(unaff_x19 + 0x6c8) = 0;
    *(long *)(unaff_x19 + 0x6b0) = lVar22;
    *(long *)(unaff_x19 + 0x6b8) = lVar38;
    *(long *)(unaff_x19 + 0x6c0) = lVar23;
    __ZN16codex_app_server18app_server_tracing18typed_request_span17hedf940497cc8e5d1E
              (&stack0x00000250,unaff_x19 + 0x4e8,uVar36,plVar26 + 2);
    in_stack_00000040[9] = 1;
    puVar27 = *(undefined **)(unaff_x19 + 0x6c8);
    if (*(long *)(unaff_x19 + 0x6b0) == -0x8000000000000000) {
      lVar38 = *(long *)(unaff_x19 + 0x6b8);
      lVar23 = -0x8000000000000000;
      lVar22 = *(long *)(unaff_x19 + 0x6c0);
    }
    else {
      uVar36 = *(undefined8 *)(unaff_x19 + 0x6b8);
      lVar23 = *(long *)(unaff_x19 + 0x6c0);
      lVar38 = 1;
      if ((lVar23 != 0) && (lVar38 = _malloc(lVar23), lVar38 == 0)) {
        func_0x0001087c9084(1,lVar23);
        goto LAB_100880394;
      }
      _memcpy(lVar38,uVar36,lVar23);
      lVar22 = lVar23;
    }
    *(undefined **)(unaff_x19 + 0x6d8) = in_stack_00000258;
    *(char **)(unaff_x19 + 0x6d0) = in_stack_00000250;
    in_stack_00000040[9] = 0;
    *(long *)(unaff_x19 + 0x6f8) = lVar23;
    *(long *)(unaff_x19 + 0x700) = lVar38;
    *(long *)(unaff_x19 + 0x708) = lVar22;
    *(undefined **)(unaff_x19 + 0x710) = puVar27;
    *(undefined8 *)(unaff_x19 + 0x6e8) = in_stack_00000268;
    *(undefined8 *)(unaff_x19 + 0x6e0) = in_stack_00000260;
    *(undefined8 *)(unaff_x19 + 0x6f0) = in_stack_00000270;
    *(undefined8 *)(unaff_x19 + 0x718) = 0x8000000000000001;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      puVar28 = &
                __ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
      ;
      puVar27 = &
                __ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
      ;
      if (((1 < bRam000000010b627768 - 1) &&
          ((bRam000000010b627768 == 0 ||
           (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
                               ), cVar11 == '\0')))) ||
         (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
                             ), (uVar17 & 1) == 0)) goto LAB_10087e838;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
                 ,&stack0x00003210);
      lVar38 = 
      ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00003450 =
             *(undefined **)
              (
              ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
              + 0x20);
        in_stack_00003458 =
             *(undefined8 *)
              (
              ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
              + 0x28);
        in_stack_00003448 = (undefined *)0x5;
        puVar28 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar28 = &UNK_10b3c24c8;
        }
        puVar27 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar27 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar28 + 0x18))(puVar27,&stack0x00003448);
        if (iVar13 != 0) {
          in_stack_00001ac0 = *(long *)(lVar38 + 0x60);
          in_stack_00001ac8 = *(undefined8 *)(lVar38 + 0x68);
          lVar23 = *(long *)(lVar38 + 0x50);
          in_stack_00001aa0 = 1;
          if (lVar23 == 0) {
            in_stack_00001aa0 = 2;
          }
          in_stack_00001ae8 = *(undefined8 *)(lVar38 + 8);
          in_stack_00001ab8 = 1;
          if (in_stack_00001ac0 == 0) {
            in_stack_00001ab8 = 2;
          }
          in_stack_00001ad0 = (undefined1 *)0x5;
          in_stack_00001af8 = (undefined8 *)&stack0x000033d0;
          in_stack_00001af0 = s__108b39f4f;
          in_stack_00001aa1 = 0;
          in_stack_00001aa2 = 0;
          in_stack_00001aa3 = 0;
          in_stack_00001aa4 = 0;
          in_stack_00001aa8 = (undefined1)lVar23;
          in_stack_00001aa9 = (undefined7)((ulong)lVar23 >> 8);
          in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar38 + 0x58);
          in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar38 + 0x58) >> 8);
          (**(code **)(puVar28 + 0x20))(puVar27,&stack0x00001aa0);
          in_stack_00001ad8 = in_stack_00003450;
          in_stack_00001ae0 = in_stack_00003458;
        }
      }
    }
    else {
LAB_10087e838:
      puVar28 = puVar27;
      lVar38 = 
      ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar27 = *(undefined **)
                   (
                   ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
                   + 0x20);
        uVar36 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server17message_processor16MessageProcessor22process_client_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17heccdbb030fb00cd2E
                  + 0x28);
        puVar28 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar28 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar13 = (**(code **)(puVar28 + 0x18))(puVar4,&stack0x00000290);
        if (iVar13 != 0) {
          in_stack_00001ad0 = (undefined1 *)0x5;
          in_stack_00001ac0 = *(long *)(lVar38 + 0x60);
          in_stack_00001ac8 = *(undefined8 *)(lVar38 + 0x68);
          lVar23 = *(long *)(lVar38 + 0x50);
          in_stack_00001aa0 = 1;
          if (lVar23 == 0) {
            in_stack_00001aa0 = 2;
          }
          in_stack_00001ae8 = *(undefined8 *)(lVar38 + 8);
          in_stack_00003448 = &stack0x000033d0;
          in_stack_00003450 = &DAT_1061c2098;
          in_stack_00001ab8 = 1;
          if (in_stack_00001ac0 == 0) {
            in_stack_00001ab8 = 2;
          }
          in_stack_00001af8 = (undefined8 *)&stack0x00003448;
          in_stack_00001af0 = s__108b39f4f;
          in_stack_00001aa1 = 0;
          in_stack_00001aa2 = 0;
          in_stack_00001aa3 = 0;
          in_stack_00001aa4 = 0;
          in_stack_00001aa8 = (undefined1)lVar23;
          in_stack_00001aa9 = (undefined7)((ulong)lVar23 >> 8);
          in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar38 + 0x58);
          in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar38 + 0x58) >> 8);
          (**(code **)(puVar28 + 0x20))(puVar4,&stack0x00001aa0);
          in_stack_00001ad8 = puVar27;
          in_stack_00001ae0 = uVar36;
        }
      }
    }
    plVar26 = *(long **)(*plVar35 + 0x1480);
    lVar38 = *plVar26;
    *plVar26 = lVar38 + 1;
    if (lVar38 < 0) goto LAB_100880394;
    FUN_101404304(&stack0x00001aa0,unaff_x19 + 0x6d0);
    in_stack_00000040[10] = 0;
    plVar15 = (long *)(unaff_x19 + 0x748);
    *(undefined8 *)(unaff_x19 + 0x790) = in_stack_00001ae8;
    *(undefined8 *)(unaff_x19 + 0x788) = in_stack_00001ae0;
    *(undefined8 **)(unaff_x19 + 0x7a0) = in_stack_00001af8;
    *(char **)(unaff_x19 + 0x798) = in_stack_00001af0;
    *(undefined8 *)(unaff_x19 + 0x7b0) = in_stack_00001b08;
    *(undefined8 *)(unaff_x19 + 0x7a8) = in_stack_00001b00;
    *(undefined8 *)(unaff_x19 + 0x7b8) = in_stack_00001b10;
    *(ulong *)(unaff_x19 + 0x750) = CONCAT71(in_stack_00001aa9,in_stack_00001aa8);
    *plVar15 = CONCAT44(in_stack_00001aa4,
                        CONCAT13(in_stack_00001aa3,
                                 CONCAT12(in_stack_00001aa2,
                                          CONCAT11(in_stack_00001aa1,in_stack_00001aa0))));
    *(long *)(unaff_x19 + 0x760) = in_stack_00001ab8;
    *(ulong *)(unaff_x19 + 0x758) = CONCAT71(in_stack_00001ab1,in_stack_00001ab0);
    *(undefined8 *)(unaff_x19 + 0x770) = in_stack_00001ac8;
    *(long *)(unaff_x19 + 0x768) = in_stack_00001ac0;
    *(undefined **)(unaff_x19 + 0x780) = in_stack_00001ad8;
    *(undefined1 **)(unaff_x19 + 0x778) = in_stack_00001ad0;
    *(long **)(unaff_x19 + 0x7c0) = plVar26;
    _memcpy(unaff_x19 + 0x7c8,unaff_x19 + 0x4e8,0x1c0);
    *(long **)(unaff_x19 + 0x988) = plVar35;
    *(long *)(unaff_x19 + 0x990) = unaff_x19 + 0x6b0;
    *(undefined8 **)(unaff_x19 + 0x998) = (undefined8 *)(unaff_x19 + 0x6a8);
    *(long *)(unaff_x19 + 0x9a0) = lVar32;
    *(long *)(unaff_x19 + 0x9a8) = unaff_x19 + 0x6d0;
    *(undefined1 *)(unaff_x19 + 0xa18) = 0;
    *in_stack_00000048 = 0;
    *(long **)(unaff_x19 + 0x1f30) = plVar26;
    plVar35 = (long *)(unaff_x19 + 0x1f38);
    *(undefined8 *)(unaff_x19 + 0x1fa8) = *(undefined8 *)(unaff_x19 + 0x7b8);
    *(undefined8 *)(unaff_x19 + 0x1f80) = *(undefined8 *)(unaff_x19 + 0x790);
    *(undefined8 *)(unaff_x19 + 0x1f78) = *(undefined8 *)(unaff_x19 + 0x788);
    *(undefined8 *)(unaff_x19 + 0x1f90) = *(undefined8 *)(unaff_x19 + 0x7a0);
    *(undefined8 *)(unaff_x19 + 0x1f88) = *(undefined8 *)(unaff_x19 + 0x798);
    *(undefined8 *)(unaff_x19 + 0x1fa0) = *(undefined8 *)(unaff_x19 + 0x7b0);
    *(undefined8 *)(unaff_x19 + 0x1f98) = *(undefined8 *)(unaff_x19 + 0x7a8);
    *(undefined8 *)(unaff_x19 + 8000) = *(undefined8 *)(unaff_x19 + 0x750);
    *plVar35 = *plVar15;
    *(undefined8 *)(unaff_x19 + 0x1f50) = *(undefined8 *)(unaff_x19 + 0x760);
    *(undefined8 *)(unaff_x19 + 0x1f48) = *(undefined8 *)(unaff_x19 + 0x758);
    uVar39 = *(undefined8 *)(unaff_x19 + 0x770);
    uVar36 = *(undefined8 *)(unaff_x19 + 0x768);
    uVar42 = *(undefined8 *)(unaff_x19 + 0x780);
    uVar41 = *(undefined8 *)(unaff_x19 + 0x778);
    in_stack_00000048[1] = 1;
    *(undefined8 *)(unaff_x19 + 0x1f60) = uVar39;
    *(undefined8 *)(unaff_x19 + 0x1f58) = uVar36;
    *(undefined8 *)(unaff_x19 + 0x1f70) = uVar42;
    *(undefined8 *)(unaff_x19 + 0x1f68) = uVar41;
    _memcpy(unaff_x19 + 0x1fb8,unaff_x19 + 0x7c8,0x1768);
    FUN_101404304(&stack0x00001aa0,plVar35);
    *(undefined8 *)(unaff_x19 + 0x3768) = in_stack_00001ae8;
    *(undefined8 *)(unaff_x19 + 0x3760) = in_stack_00001ae0;
    *(undefined8 **)(unaff_x19 + 0x3778) = in_stack_00001af8;
    *(char **)(unaff_x19 + 0x3770) = in_stack_00001af0;
    *(undefined8 *)(unaff_x19 + 0x3788) = in_stack_00001b08;
    *(undefined8 *)(unaff_x19 + 0x3780) = in_stack_00001b00;
    *(undefined8 *)(unaff_x19 + 0x3790) = in_stack_00001b10;
    *(ulong *)(unaff_x19 + 0x3728) = CONCAT71(in_stack_00001aa9,in_stack_00001aa8);
    *(ulong *)(unaff_x19 + 0x3720) =
         CONCAT44(in_stack_00001aa4,
                  CONCAT13(in_stack_00001aa3,
                           CONCAT12(in_stack_00001aa2,CONCAT11(in_stack_00001aa1,in_stack_00001aa0))
                          ));
    *(long *)(unaff_x19 + 0x3738) = in_stack_00001ab8;
    *(ulong *)(unaff_x19 + 0x3730) = CONCAT71(in_stack_00001ab1,in_stack_00001ab0);
    *(undefined8 *)(unaff_x19 + 0x3748) = in_stack_00001ac8;
    *(long *)(unaff_x19 + 0x3740) = in_stack_00001ac0;
    *(undefined **)(unaff_x19 + 0x3758) = in_stack_00001ad8;
    *(undefined1 **)(unaff_x19 + 0x3750) = in_stack_00001ad0;
    *(long **)(unaff_x19 + 0x3798) = plVar26 + 2;
    *in_stack_00000040 = 0;
    iVar13 = func_0x000100895984(unaff_x19 + 0x3720,in_stack_00000030);
    if (iVar13 == 0) {
      FUN_100d0e89c(unaff_x19 + 0x3720);
      in_stack_00000048[1] = 0;
      _memcpy(&stack0x00001aa0,unaff_x19 + 0x1fb8,0x1768);
      uVar17 = 2;
      puVar16 = in_stack_00000048;
      if (*(ulong *)(unaff_x19 + 0x1f38) != 2) {
        plVar35 = *(long **)(unaff_x19 + 8000);
        puVar28 = *(undefined **)(unaff_x19 + 0x1f48);
        if ((*(ulong *)(unaff_x19 + 0x1f38) & 1) == 0) {
          puVar16 = (undefined1 *)(**(code **)(puVar28 + 0x70))(plVar35,unaff_x19 + 0x1f50);
          uVar17 = 0;
        }
        else {
          puVar16 = (undefined1 *)
                    (**(code **)(puVar28 + 0x70))
                              ((long)plVar35 +
                               (*(long *)(puVar28 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                               unaff_x19 + 0x1f50);
          uVar17 = 1;
          lVar32 = *plVar35;
          *plVar35 = lVar32 + 1;
          if (lVar32 < 0) goto LAB_100880394;
        }
      }
      uVar36 = *(undefined8 *)(unaff_x19 + 0x1f58);
      _memcpy(&stack0x00000330,&stack0x00001aa0,0x1768);
      *(ulong *)(unaff_x19 + 0x1fb8) = uVar17;
      *(long **)(unaff_x19 + 0x1fc0) = plVar35;
      *(undefined **)(unaff_x19 + 0x1fc8) = puVar28;
      *(undefined1 **)(unaff_x19 + 0x1fd0) = puVar16;
      *(undefined8 *)(unaff_x19 + 0x1fd8) = uVar36;
      _memcpy(unaff_x19 + 0x1fe0,&stack0x00000330,0x1768);
      if (uVar17 != 2) {
        lVar32 = *(long *)(unaff_x19 + 0x1fc0);
        if ((uVar17 & 1) != 0) {
          lVar32 = lVar32 + (*(long *)(*(long *)(unaff_x19 + 0x1fc8) + 0x10) - 1U &
                            0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(*(long *)(unaff_x19 + 0x1fc8) + 0x60))(lVar32,unaff_x19 + 0x1fd0);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (*(long *)(unaff_x19 + 0x1fd8) != 0)) {
        in_stack_00001aa0 = (byte)&stack0x00003210;
        in_stack_00001aa1 = (undefined1)((ulong)&stack0x00003210 >> 8);
        in_stack_00001aa2 = (undefined1)((ulong)&stack0x00003210 >> 0x10);
        in_stack_00001aa3 = (undefined1)((ulong)&stack0x00003210 >> 0x18);
        in_stack_00001aa4 = (undefined4)((ulong)&stack0x00003210 >> 0x20);
        in_stack_00001aa8 = 0xa0;
        in_stack_00001aa9 = 0x100c7b3;
        FUN_1011d7d74(unaff_x19 + 0x1fb8,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&stack0x00001aa0);
      }
      bVar20 = in_stack_00000048[0x280];
      if (bVar20 < 3) {
        if (bVar20 != 0) {
          if (bVar20 == 1) {
            FUN_107c05cc0(&UNK_10b2250d0);
          }
          else {
            FUN_107c05cc4(&UNK_10b2250d0);
          }
          goto LAB_100880394;
        }
        *(undefined2 *)(in_stack_00000048 + 0x281) = 0x100;
        uVar36 = *(undefined8 *)(unaff_x19 + 0x21a0);
        plVar26 = *(long **)(unaff_x19 + 0x21a8);
        lVar32 = plVar26[3];
        if (*plVar26 == -0x8000000000000000) {
          lVar38 = plVar26[1];
          lVar22 = plVar26[2];
          lVar23 = -0x8000000000000000;
        }
        else {
          lVar23 = plVar26[1];
          lVar22 = plVar26[2];
          lVar38 = 1;
          if ((lVar22 != 0) && (lVar38 = _malloc(lVar22), lVar38 == 0)) {
            func_0x0001087c9084(1,lVar22);
            goto LAB_100880394;
          }
          _memcpy(lVar38,lVar23,lVar22);
          lVar23 = lVar22;
        }
        in_stack_00000048[0x282] = 0;
        _memcpy(&stack0x00001aa0,unaff_x19 + 0x1fe0,0x1c0);
        plVar26 = (long *)**(undefined8 **)(unaff_x19 + 0x21b0);
        lVar40 = *plVar26;
        *plVar26 = lVar40 + 1;
        if (lVar40 < 0) goto LAB_100880394;
        uVar39 = *(undefined8 *)(unaff_x19 + 0x21b8);
        FUN_101404304(&stack0x00003448,*(undefined8 *)(unaff_x19 + 0x21c0));
        _memcpy(&stack0x00003210,&stack0x00001aa0,0x1c0);
        *(undefined8 *)(unaff_x19 + 0x2280) = in_stack_00003490;
        *(undefined8 *)(unaff_x19 + 0x2278) = in_stack_00003488;
        *(undefined8 *)(unaff_x19 + 0x2290) = in_stack_000034a0;
        *(undefined8 *)(unaff_x19 + 0x2288) = in_stack_00003498;
        *(undefined8 *)(unaff_x19 + 0x22a0) = in_stack_000034b0;
        *(undefined8 *)(unaff_x19 + 0x2298) = in_stack_000034a8;
        *(undefined8 *)(unaff_x19 + 0x22a8) = in_stack_000034b8;
        *(undefined **)(unaff_x19 + 0x2240) = in_stack_00003450;
        *(undefined **)(unaff_x19 + 0x2238) = in_stack_00003448;
        *(undefined8 *)(unaff_x19 + 0x2250) = in_stack_00003460;
        *(undefined8 *)(unaff_x19 + 0x2248) = in_stack_00003458;
        *(undefined8 *)(unaff_x19 + 0x2260) = in_stack_00003470;
        *(undefined8 *)(unaff_x19 + 0x2258) = in_stack_00003468;
        *(undefined8 *)(unaff_x19 + 0x2270) = in_stack_00003480;
        *(undefined8 *)(unaff_x19 + 0x2268) = in_stack_00003478;
        *(long *)(unaff_x19 + 0x22b0) = lVar23;
        *(long *)(unaff_x19 + 0x22b8) = lVar38;
        *(long *)(unaff_x19 + 0x22c0) = lVar22;
        *(long *)(unaff_x19 + 0x22c8) = lVar32;
        _memcpy(unaff_x19 + 0x22d0,&stack0x00003210,0x1c0);
        *(undefined8 *)(unaff_x19 + 0x2490) = uVar36;
        *(long **)(unaff_x19 + 0x2498) = plVar26;
        *(undefined8 *)(unaff_x19 + 0x24a0) = uVar39;
        in_stack_00000048[0x768] = 0;
LAB_10087f09c:
        puVar3 = (undefined8 *)(unaff_x19 + 0x2238);
        FUN_1008a29b4(&stack0x00001aa0,puVar3,in_stack_00000030);
        if (CONCAT44(in_stack_00001aa4,
                     CONCAT13(in_stack_00001aa3,
                              CONCAT12(in_stack_00001aa2,
                                       CONCAT11(in_stack_00001aa1,in_stack_00001aa0)))) ==
            -0x7fffffffffffffff) {
          bVar8 = true;
          uVar24 = 3;
        }
        else {
          plVar26 = (long *)(unaff_x19 + 0x21c8);
          *(undefined8 *)(unaff_x19 + 0x2228) = in_stack_00001b00;
          *(undefined8 *)(unaff_x19 + 0x2210) = in_stack_00001ae8;
          *(undefined8 *)(unaff_x19 + 0x2208) = in_stack_00001ae0;
          *(undefined8 **)(unaff_x19 + 0x2220) = in_stack_00001af8;
          *(char **)(unaff_x19 + 0x2218) = in_stack_00001af0;
          *(ulong *)(unaff_x19 + 0x21d0) = CONCAT71(in_stack_00001aa9,in_stack_00001aa8);
          *plVar26 = CONCAT44(in_stack_00001aa4,
                              CONCAT13(in_stack_00001aa3,
                                       CONCAT12(in_stack_00001aa2,
                                                CONCAT11(in_stack_00001aa1,in_stack_00001aa0))));
          *(long *)(unaff_x19 + 0x21e0) = in_stack_00001ab8;
          *(ulong *)(unaff_x19 + 0x21d8) = CONCAT71(in_stack_00001ab1,in_stack_00001ab0);
          *(undefined8 *)(unaff_x19 + 0x21f0) = in_stack_00001ac8;
          *(long *)(unaff_x19 + 0x21e8) = in_stack_00001ac0;
          *(undefined **)(unaff_x19 + 0x2200) = in_stack_00001ad8;
          *(undefined1 **)(unaff_x19 + 0x21f8) = in_stack_00001ad0;
          FUN_100cf9f4c(puVar3);
          bVar8 = false;
          uVar24 = 1;
          if (*plVar26 != -0x8000000000000000) {
            in_stack_00000048[0x281] = 1;
            uVar36 = *(undefined8 *)(unaff_x19 + 0x2208);
            uVar41 = *(undefined8 *)(unaff_x19 + 0x2220);
            uVar39 = *(undefined8 *)(unaff_x19 + 0x2218);
            *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x19 + 0x2210);
            *(undefined8 *)(unaff_x29 + -0x90) = uVar36;
            *(undefined8 *)(unaff_x29 + -0x78) = uVar41;
            *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
            *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x19 + 0x2228);
            lVar32 = *plVar26;
            uVar39 = *(undefined8 *)(unaff_x19 + 0x21e0);
            uVar36 = *(undefined8 *)(unaff_x19 + 0x21d8);
            *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x19 + 0x21d0);
            *(long *)(unaff_x29 + -0xd0) = lVar32;
            *(undefined8 *)(unaff_x29 + -0xb8) = uVar39;
            *(undefined8 *)(unaff_x29 + -0xc0) = uVar36;
            uVar41 = *(undefined8 *)(unaff_x19 + 0x21e8);
            uVar39 = *(undefined8 *)(unaff_x19 + 0x2200);
            uVar36 = *(undefined8 *)(unaff_x19 + 0x21f8);
            *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x19 + 0x21f0);
            *(undefined8 *)(unaff_x29 + -0xb0) = uVar41;
            *(undefined8 *)(unaff_x29 + -0x98) = uVar39;
            *(undefined8 *)(unaff_x29 + -0xa0) = uVar36;
            lVar32 = *(long *)(**(long **)(unaff_x19 + 0x21a0) + 0x1480);
            plVar26 = *(long **)(unaff_x19 + 0x21a8);
            lVar38 = plVar26[3];
            if (*plVar26 == -0x8000000000000000) {
              lVar23 = plVar26[1];
              lVar40 = plVar26[2];
              lVar22 = -0x8000000000000000;
            }
            else {
              lVar22 = plVar26[1];
              lVar40 = plVar26[2];
              lVar23 = 1;
              if ((lVar40 != 0) && (lVar23 = _malloc(lVar40), lVar23 == 0)) {
                func_0x0001087c9084(1,lVar40);
                goto LAB_100880394;
              }
              _memcpy(lVar23,lVar22,lVar40);
              lVar22 = lVar40;
            }
            in_stack_00000048[0x281] = 0;
            uVar36 = *(undefined8 *)(unaff_x29 + -0x90);
            uVar41 = *(undefined8 *)(unaff_x29 + -0x78);
            uVar39 = *(undefined8 *)(unaff_x29 + -0x80);
            *(undefined8 *)(unaff_x19 + 0x2280) = *(undefined8 *)(unaff_x29 + -0x88);
            *(undefined8 *)(unaff_x19 + 0x2278) = uVar36;
            *(undefined8 *)(unaff_x19 + 0x2290) = uVar41;
            *(undefined8 *)(unaff_x19 + 0x2288) = uVar39;
            *(undefined8 *)(unaff_x19 + 0x2298) = *(undefined8 *)(unaff_x29 + -0x70);
            uVar36 = *(undefined8 *)(unaff_x29 + -0xd0);
            uVar41 = *(undefined8 *)(unaff_x29 + -0xb8);
            uVar39 = *(undefined8 *)(unaff_x29 + -0xc0);
            *(undefined8 *)(unaff_x19 + 0x2240) = *(undefined8 *)(unaff_x29 + -200);
            *puVar3 = uVar36;
            *(undefined8 *)(unaff_x19 + 0x2250) = uVar41;
            *(undefined8 *)(unaff_x19 + 0x2248) = uVar39;
            uVar41 = *(undefined8 *)(unaff_x29 + -0xb0);
            uVar39 = *(undefined8 *)(unaff_x29 + -0x98);
            uVar36 = *(undefined8 *)(unaff_x29 + -0xa0);
            *(undefined8 *)(unaff_x19 + 0x2260) = *(undefined8 *)(unaff_x29 + -0xa8);
            *(undefined8 *)(unaff_x19 + 0x2258) = uVar41;
            *(undefined8 *)(unaff_x19 + 0x2270) = uVar39;
            *(undefined8 *)(unaff_x19 + 0x2268) = uVar36;
            *(long *)(unaff_x19 + 0x22a0) = lVar22;
            *(long *)(unaff_x19 + 0x22a8) = lVar23;
            *(long *)(unaff_x19 + 0x22b0) = lVar40;
            *(long *)(unaff_x19 + 0x22b8) = lVar38;
            *(long *)(unaff_x19 + 0x22c0) = lVar32 + 0x10;
            in_stack_00000048[0x340] = 0;
            goto LAB_10087f660;
          }
        }
      }
      else {
        if (bVar20 == 3) goto LAB_10087f09c;
LAB_10087f660:
        uVar17 = FUN_1008927b8(unaff_x19 + 0x2238,in_stack_00000030);
        bVar8 = true;
        uVar24 = 4;
        if ((uVar17 & 1) == 0) {
          FUN_100d84c5c(unaff_x19 + 0x2238);
          bVar8 = false;
          in_stack_00000048[0x281] = 0;
          uVar24 = 1;
        }
      }
      in_stack_00000048[0x280] = uVar24;
      if (*(ulong *)(unaff_x19 + 0x1fb8) != 2) {
        lVar32 = *(long *)(unaff_x19 + 0x1fc0);
        if ((*(ulong *)(unaff_x19 + 0x1fb8) & 1) != 0) {
          lVar32 = lVar32 + (*(long *)(*(long *)(unaff_x19 + 0x1fc8) + 0x10) - 1U &
                            0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(*(long *)(unaff_x19 + 0x1fc8) + 0x68))(lVar32,unaff_x19 + 0x1fd0);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (*(long *)(unaff_x19 + 0x1fd8) != 0)) {
        in_stack_00001aa0 = (byte)&stack0x00003210;
        in_stack_00001aa1 = (undefined1)((ulong)&stack0x00003210 >> 8);
        in_stack_00001aa2 = (undefined1)((ulong)&stack0x00003210 >> 0x10);
        in_stack_00001aa3 = (undefined1)((ulong)&stack0x00003210 >> 0x18);
        in_stack_00001aa4 = (undefined4)((ulong)&stack0x00003210 >> 0x20);
        in_stack_00001aa8 = 0xa0;
        in_stack_00001aa9 = 0x100c7b3;
        FUN_1011d7d74(unaff_x19 + 0x1fb8,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&stack0x00001aa0);
      }
      if (!bVar8) {
        FUN_100d90058(unaff_x19 + 0x1fb8);
        in_stack_00000048[1] = 0;
        func_0x000100e2ce28(unaff_x19 + 0x1f38);
        lVar32 = **(long **)(unaff_x19 + 0x1f30);
        **(long **)(unaff_x19 + 0x1f30) = lVar32 + -1;
        LORelease();
        if (lVar32 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x19 + 0x1f30);
        }
        *in_stack_00000048 = 1;
        FUN_100db7610(plVar15);
        func_0x000100e2ce28(unaff_x19 + 0x6d0);
        in_stack_00000040[9] = 0;
        if ((*(ulong *)(unaff_x19 + 0x6b0) & 0x7fffffffffffffff) == 0) {
          lVar32 = **(long **)(unaff_x19 + 0x6a8);
          **(long **)(unaff_x19 + 0x6a8) = lVar32 + -1;
          LORelease();
        }
        else {
          _free(*(undefined8 *)(unaff_x19 + 0x6b8));
          lVar32 = **(long **)(unaff_x19 + 0x6a8);
          **(long **)(unaff_x19 + 0x6a8) = lVar32 + -1;
          LORelease();
        }
        if (lVar32 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(unaff_x19 + 0x6a8);
        }
        in_stack_00000040[10] = 0;
        in_stack_00000040[8] = 1;
        FUN_100cfc294(puVar29);
        if (*(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18) == 0) {
          FUN_1019e5768(puVar29,*(long *)(unaff_x19 + 0x2b0) + 0x50);
        }
        else {
          pauVar18 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar18[1][0] == '\x01') {
            auVar50 = *pauVar18;
          }
          else {
            auVar50 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar18 + 8) = auVar50._8_8_;
            pauVar18[1][0] = 1;
          }
          *(long *)*pauVar18 = auVar50._0_8_ + 1;
          *(undefined8 *)(unaff_x19 + 0x308) = 0;
          *puVar29 = &UNK_108cea360;
          *(undefined8 *)(unaff_x19 + 0x318) = 0;
          *(undefined8 *)(unaff_x19 + 0x310) = 0;
          *(undefined1 (*) [16])(unaff_x19 + 800) = auVar50;
        }
        bVar20 = 0;
        *(undefined1 *)(unaff_x19 + 0x2ec) = 1;
        if (*(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18) == 0) {
          bVar20 = *(byte *)(*(long *)(unaff_x19 + 0x2b0) + 0x80);
        }
        lVar32 = *(long *)(*(long *)(unaff_x19 + 0x2b0) + 0x18);
        lVar38 = *(long *)(unaff_x19 + 0x268);
        puVar2 = (ulong *)(lVar38 + 0x10);
        LOAcquire();
        uVar17 = *puVar2;
        *puVar2 = uVar17 | 1;
        if ((uVar17 & 1) != 0) {
          FUN_107c05e00(puVar2,1);
        }
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) {
          uVar12 = 0;
          if (*(char *)(lVar38 + 0x18) != '\0') {
LAB_10087f8bc:
            if (((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                 0x7fffffffffffffff) != 0) && (uVar17 = FUN_107c05e34(), (uVar17 & 1) == 0)) {
              *(undefined1 *)(lVar38 + 0x18) = 1;
            }
            goto LAB_10087f8c8;
          }
LAB_10087fe74:
          *(undefined1 *)(unaff_x19 + 0x2ec) = 0;
          uVar39 = *(undefined8 *)(unaff_x19 + 0x308);
          uVar36 = *puVar29;
          in_stack_00001ab8 = *(long *)(unaff_x19 + 0x318);
          uVar41 = *(undefined8 *)(unaff_x19 + 0x310);
          in_stack_00001ac8 = *(undefined8 *)(unaff_x19 + 0x328);
          in_stack_00001ac0 = *(long *)(unaff_x19 + 800);
          in_stack_00001ab0 = (undefined1)uVar41;
          in_stack_00001ab1 = (undefined7)((ulong)uVar41 >> 8);
          in_stack_00001aa8 = (undefined1)uVar39;
          in_stack_00001aa9 = (undefined7)((ulong)uVar39 >> 8);
          in_stack_00001aa0 = (byte)uVar36;
          in_stack_00001aa1 = (undefined1)((ulong)uVar36 >> 8);
          in_stack_00001aa2 = (undefined1)((ulong)uVar36 >> 0x10);
          in_stack_00001aa3 = (undefined1)((ulong)uVar36 >> 0x18);
          in_stack_00001aa4 = (undefined4)((ulong)uVar36 >> 0x20);
          lVar23 = *(long *)(lVar38 + 0x28);
          if (lVar23 != 0) {
            lVar22 = *(long *)(lVar38 + 0x38);
            if (lVar22 != 0) {
              plVar26 = *(long **)(lVar38 + 0x20);
              plVar35 = plVar26 + 1;
              lVar40 = *plVar26;
              uVar17 = CONCAT17(-(-1 < lVar40),
                                CONCAT16(-(-1 < (char)((ulong)lVar40 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar40 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar40 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar40 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar40 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar40 >> 8)),
                                                           -(-1 < (char)lVar40)))))))) &
                       0x8080808080808080;
              do {
                while (uVar17 == 0) {
                  lVar40 = *plVar35;
                  plVar26 = plVar26 + -0x18;
                  plVar35 = plVar35 + 1;
                  uVar17 = CONCAT17(-(-1 < lVar40),
                                    CONCAT16(-(-1 < (char)((ulong)lVar40 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar40 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar40 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar40
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar40 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar40 >> 8)),
                                                           -(-1 < (char)lVar40)))))))) &
                           0x8080808080808080;
                }
                uVar30 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
                iVar13 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                if (plVar26[(long)-iVar13 * 3 + -3] != 0) {
                  _free(plVar26[(long)-iVar13 * 3 + -2]);
                }
                uVar17 = uVar17 - 1 & uVar17;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            if (lVar23 * 0x19 != -0x21) {
              _free(*(long *)(lVar38 + 0x20) + lVar23 * -0x18 + -0x18);
            }
          }
          *(undefined8 *)(lVar38 + 0x28) = uVar39;
          *(undefined8 *)(lVar38 + 0x20) = uVar36;
          *(long *)(lVar38 + 0x38) = in_stack_00001ab8;
          *(undefined8 *)(lVar38 + 0x30) = uVar41;
          *(undefined8 *)(lVar38 + 0x48) = in_stack_00001ac8;
          *(long *)(lVar38 + 0x40) = in_stack_00001ac0;
          if ((((uVar12 & 1) == 0) &&
              ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
               0x7fffffffffffffff) != 0)) && (uVar17 = FUN_107c05e34(), (uVar17 & 1) == 0)) {
            *(undefined1 *)(lVar38 + 0x18) = 1;
          }
          if (*puVar2 == 1) {
            *puVar2 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar2);
          }
        }
        else {
          uVar14 = FUN_107c05e34();
          uVar12 = uVar14 ^ 1;
          if (*(char *)(lVar38 + 0x18) == '\0') goto LAB_10087fe74;
          if (uVar14 != 0) goto LAB_10087f8bc;
LAB_10087f8c8:
          if (*puVar2 == 1) {
            *puVar2 = in_xzr;
          }
          else {
            __ZN3std3sys4sync6rwlock5queue6RwLock16unlock_contended17h5028e77bc6335836E(puVar2);
          }
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b627300 - 1 < 2 ||
               ((bRam000000010b627300 != 0 &&
                (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                                    ), cVar11 != '\0')))))) &&
             (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                                 ), (uVar17 & 1) != 0)) {
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                       ,&stack0x00000330);
            lVar38 = 
            ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar28 = *(undefined **)
                         (
                         ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                         + 0x20);
              uVar36 = *(undefined8 *)
                        (
                        ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                        + 0x28);
              puVar27 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar27 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar13 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00003210);
              if (iVar13 != 0) {
                in_stack_00001ac0 = *(long *)(lVar38 + 0x60);
                in_stack_00001ac8 = *(undefined8 *)(lVar38 + 0x68);
                lVar23 = *(long *)(lVar38 + 0x50);
                in_stack_00001aa0 = 1;
                if (lVar23 == 0) {
                  in_stack_00001aa0 = 2;
                }
                in_stack_00001ae8 = *(undefined8 *)(lVar38 + 8);
                in_stack_00003448 = &stack0x00000330;
                in_stack_00003450 = (undefined *)CONCAT71((int7)((ulong)in_stack_00003450 >> 8),1);
                in_stack_00000058 = &stack0x00003448;
                in_stack_00000060 = &DAT_1061c2098;
                in_stack_00001ab8 = 1;
                if (in_stack_00001ac0 == 0) {
                  in_stack_00001ab8 = 2;
                }
                in_stack_00001ad0 = (undefined1 *)0x2;
                in_stack_00001af8 = &stack0x00000058;
                in_stack_00001af0 = s__108b39f4f;
                in_stack_00001aa1 = 0;
                in_stack_00001aa2 = 0;
                in_stack_00001aa3 = 0;
                in_stack_00001aa4 = 0;
                in_stack_00001aa8 = (undefined1)lVar23;
                in_stack_00001aa9 = (undefined7)((ulong)lVar23 >> 8);
                in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar38 + 0x58);
                in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar38 + 0x58) >> 8);
                (**(code **)(puVar27 + 0x20))(puVar4,&stack0x00001aa0);
                in_stack_00001ad8 = puVar28;
                in_stack_00001ae0 = uVar36;
              }
            }
          }
          else {
            lVar38 = 
            ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar28 = *(undefined **)
                         (
                         ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                         + 0x20);
              uVar36 = *(undefined8 *)
                        (
                        ___ZN16codex_app_server10in_process19start_uninitialized28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h923df968fffab505E
                        + 0x28);
              puVar27 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar27 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar13 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00000218);
              if (iVar13 != 0) {
                in_stack_00003448 = &UNK_108cb1f52;
                in_stack_00003450 = (undefined *)0x63;
                in_stack_00001ad0 = (undefined1 *)0x2;
                in_stack_00001ac0 = *(long *)(lVar38 + 0x60);
                in_stack_00001ac8 = *(undefined8 *)(lVar38 + 0x68);
                lVar23 = *(long *)(lVar38 + 0x50);
                in_stack_00001aa0 = 1;
                if (lVar23 == 0) {
                  in_stack_00001aa0 = 2;
                }
                in_stack_00001ae8 = *(undefined8 *)(lVar38 + 8);
                in_stack_00000058 = &stack0x00000330;
                in_stack_00000060 = (undefined *)CONCAT71(in_stack_00000060._1_7_,1);
                in_stack_00001ab8 = 1;
                if (in_stack_00001ac0 == 0) {
                  in_stack_00001ab8 = 2;
                }
                in_stack_00001af8 = (undefined8 *)&stack0x00003210;
                in_stack_00001af0 = s__108b39f4f;
                in_stack_00001aa1 = 0;
                in_stack_00001aa2 = 0;
                in_stack_00001aa3 = 0;
                in_stack_00001aa4 = 0;
                in_stack_00001aa8 = (undefined1)lVar23;
                in_stack_00001aa9 = (undefined7)((ulong)lVar23 >> 8);
                in_stack_00001ab0 = (undefined1)*(undefined8 *)(lVar38 + 0x58);
                in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(lVar38 + 0x58) >> 8);
                (**(code **)(puVar27 + 0x20))(puVar4,&stack0x00001aa0);
                in_stack_00001ad8 = puVar28;
                in_stack_00001ae0 = uVar36;
              }
            }
          }
        }
        *(byte *)(*(long *)(unaff_x19 + 0x270) + 0x10) = bVar20 & 1;
        if ((lVar32 == 0) && ((*(byte *)(unaff_x19 + 0x2eb) & 1) == 0)) {
          lVar38 = *(long *)(unaff_x19 + 0x298);
          *(long *)(unaff_x19 + 0x330) = lVar38 + 0x10;
          *(undefined1 *)(in_stack_00000038 + 0xdb9) = 0;
          *(long *)(unaff_x19 + 0x1098) = lVar38 + 0x1448;
          *(undefined1 *)(in_stack_00000038 + 0xdb2) = 0;
          *(undefined1 *)(in_stack_00000038 + 0xdb1) = 0;
          *(long *)(unaff_x19 + 0x3b8) = lVar38 + 0x1448;
          lVar32 = *(long *)(*(long *)(lVar38 + 0x1458) + 0x18);
          lVar38 = lVar32 + *(long *)(*(long *)(lVar38 + 0x1458) + 0x20) * 0x70;
          *(long *)(unaff_x19 + 0x338) = lVar32;
          *(long *)(unaff_x19 + 0x340) = lVar38;
          if (lVar32 != lVar38) {
            do {
              plVar26 = (long *)(unaff_x19 + 0x348);
              *(long *)(unaff_x19 + 0x338) = lVar32 + 0x70;
              FUN_100692440(plVar26);
              if (*plVar26 == 2) goto LAB_100880104;
              uVar39 = *(undefined8 *)(unaff_x19 + 0x380);
              uVar36 = *(undefined8 *)(unaff_x19 + 0x378);
              in_stack_00001ae8 = *(undefined8 *)(unaff_x19 + 0x390);
              in_stack_00001ae0 = *(undefined8 *)(unaff_x19 + 0x388);
              uVar44 = *(undefined8 *)(unaff_x19 + 0x390);
              uVar43 = *(undefined8 *)(unaff_x19 + 0x388);
              in_stack_00001af8 = *(undefined8 **)(unaff_x19 + 0x3a0);
              in_stack_00001af0 = *(char **)(unaff_x19 + 0x398);
              uVar42 = *(undefined8 *)(unaff_x19 + 0x3a0);
              uVar41 = *(undefined8 *)(unaff_x19 + 0x398);
              in_stack_00001b08 = *(undefined8 *)(unaff_x19 + 0x3b0);
              in_stack_00001b00 = *(undefined8 *)(unaff_x19 + 0x3a8);
              lVar32 = *plVar26;
              in_stack_00001ab8 = *(long *)(unaff_x19 + 0x360);
              in_stack_00001aa8 = (undefined1)*(undefined8 *)(unaff_x19 + 0x350);
              in_stack_00001aa9 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0x350) >> 8);
              in_stack_00001aa0 = (byte)lVar32;
              in_stack_00001aa1 = (undefined1)((ulong)lVar32 >> 8);
              in_stack_00001aa2 = (undefined1)((ulong)lVar32 >> 0x10);
              in_stack_00001aa3 = (undefined1)((ulong)lVar32 >> 0x18);
              in_stack_00001aa4 = (undefined4)((ulong)lVar32 >> 0x20);
              in_stack_00001ab0 = (undefined1)*(undefined8 *)(unaff_x19 + 0x358);
              in_stack_00001ab1 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0x358) >> 8);
              in_stack_00001ac8 = *(undefined8 *)(unaff_x19 + 0x370);
              in_stack_00001ac0 = *(long *)(unaff_x19 + 0x368);
              in_stack_00001ad8 = *(undefined **)(unaff_x19 + 0x380);
              in_stack_00001ad0 = *(undefined1 **)(unaff_x19 + 0x378);
              uVar47 = *(undefined8 *)(unaff_x19 + 0x350);
              lVar38 = *plVar26;
              uVar46 = *(undefined8 *)(unaff_x19 + 0x360);
              uVar45 = *(undefined8 *)(unaff_x19 + 0x358);
              uVar49 = *(undefined8 *)(unaff_x19 + 0x370);
              uVar48 = *(undefined8 *)(unaff_x19 + 0x368);
              *(undefined1 *)(in_stack_00000038 + 0xdb1) = 1;
              lVar32 = **(long **)(unaff_x19 + 0x3b8);
              *(undefined8 *)(unaff_x19 + 0x410) = uVar44;
              *(undefined8 *)(unaff_x19 + 0x408) = uVar43;
              *(undefined8 *)(unaff_x19 + 0x420) = uVar42;
              *(undefined8 *)(unaff_x19 + 0x418) = uVar41;
              *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(unaff_x19 + 0x3b0);
              *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x3a8);
              *(undefined8 *)(unaff_x19 + 0x3d0) = uVar47;
              *(long *)(unaff_x19 + 0x3c8) = lVar38;
              *(undefined8 *)(unaff_x19 + 0x3e0) = uVar46;
              *(undefined8 *)(unaff_x19 + 0x3d8) = uVar45;
              lVar32 = lVar32 + 0x10;
              *(undefined1 *)(in_stack_00000038 + 0xdb1) = 0;
              *(undefined8 *)(unaff_x19 + 0x3c0) = 0x8000000000000033;
              *(undefined8 *)(unaff_x19 + 0x3f0) = uVar49;
              *(undefined8 *)(unaff_x19 + 1000) = uVar48;
              *(undefined8 *)(unaff_x19 + 0x400) = uVar39;
              *(undefined8 *)(unaff_x19 + 0x3f8) = uVar36;
              *(long *)(unaff_x19 + 0x5b8) = lVar32;
              *(undefined1 *)(in_stack_00000038 + 0xda1) = 0;
              _memcpy(unaff_x19 + 0x5c0,unaff_x19 + 0x3c0,0x1f8);
              *(long *)(unaff_x19 + 0x7b8) = lVar32;
              *(undefined8 *)(unaff_x19 + 0x7c0) = 8;
              *(undefined8 *)(unaff_x19 + 0x7c8) = 0;
              *(undefined1 *)(unaff_x19 + 0x9d0) = 0;
              uVar17 = FUN_100897c70(unaff_x19 + 0x5c0,in_stack_00000030);
              if ((uVar17 & 1) != 0) {
                *(undefined1 *)(in_stack_00000038 + 0xda1) = 3;
                *(undefined1 *)(in_stack_00000038 + 0xdb2) = 3;
                *(undefined1 *)(in_stack_00000038 + 0xdb9) = 3;
                uVar36 = 1;
                uVar24 = 5;
                goto LAB_1008810ac;
              }
              FUN_100d40d08(unaff_x19 + 0x5c0);
              *(undefined1 *)(in_stack_00000038 + 0xda1) = 1;
              *(undefined1 *)(in_stack_00000038 + 0xdb1) = 0;
              lVar32 = *(long *)(unaff_x19 + 0x338);
            } while (lVar32 != *(long *)(unaff_x19 + 0x340));
          }
          *(undefined8 *)(unaff_x19 + 0x348) = 2;
LAB_100880104:
          *(undefined1 *)(in_stack_00000038 + 0xdb2) = 1;
          *(undefined1 *)(in_stack_00000038 + 0xdb9) = 1;
        }
        if (((*(byte *)(unaff_x19 + 0x2ec) & 1) != 0) &&
           (lVar32 = *(long *)(unaff_x19 + 0x308), lVar32 != 0)) {
          lVar38 = *(long *)(unaff_x19 + 0x318);
          if (lVar38 != 0) {
            plVar26 = *(long **)(unaff_x19 + 0x300);
            plVar35 = plVar26 + 1;
            lVar23 = *plVar26;
            uVar17 = CONCAT17(-(-1 < lVar23),
                              CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar23 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar23 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar23 >> 8)),
                                                           -(-1 < (char)lVar23)))))))) &
                     0x8080808080808080;
            do {
              while (uVar17 == 0) {
                lVar23 = *plVar35;
                plVar26 = plVar26 + -0x18;
                plVar35 = plVar35 + 1;
                uVar17 = CONCAT17(-(-1 < lVar23),
                                  CONCAT16(-(-1 < (char)((ulong)lVar23 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar23 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar23 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar23 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar23 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar23 >> 8)),
                                                           -(-1 < (char)lVar23)))))))) &
                         0x8080808080808080;
              }
              uVar30 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
              iVar13 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
              if (plVar26[(long)-iVar13 * 3 + -3] != 0) {
                _free(plVar26[(long)-iVar13 * 3 + -2]);
              }
              uVar17 = uVar17 - 1 & uVar17;
              lVar38 = lVar38 + -1;
            } while (lVar38 != 0);
          }
          if (lVar32 * 0x19 != -0x21) {
            _free(*(long *)(unaff_x19 + 0x300) + lVar32 * -0x18 + -0x18);
          }
        }
        *(undefined1 *)(unaff_x19 + 0x2ec) = 0;
        _free(*(undefined8 *)(unaff_x19 + 0x2e0));
        *(undefined1 *)(unaff_x19 + 0x2ee) = 0;
        unaff_x28 = in_stack_00000030;
        goto LAB_10087dec8;
      }
      uVar24 = 4;
    }
    else {
      uVar24 = 3;
    }
    *in_stack_00000048 = uVar24;
    in_stack_00000040[8] = 3;
    uVar36 = 1;
    uVar24 = 4;
    goto LAB_1008810ac;
  }
  *(long *)(unaff_x19 + 0x300) = *(long *)(unaff_x19 + 0x298) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x308) = 0;
  unaff_x20 = (long *)&
                      __ZN16codex_app_server17message_processor16MessageProcessor27process_client_notification28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha18eda631fbfc169E
  ;
  param_1 = ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
  goto code_r0x00010087f2a4;
}

