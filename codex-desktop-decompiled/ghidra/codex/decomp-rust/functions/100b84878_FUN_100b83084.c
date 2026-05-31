
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b83084(void)

{
  byte *pbVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint7 uVar5;
  undefined1 uVar6;
  uint7 uVar7;
  uint7 uVar8;
  undefined1 uVar9;
  uint7 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  ulong extraout_x1;
  byte bVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar32;
  undefined8 *puVar33;
  undefined8 unaff_x22;
  long *plVar34;
  long *plVar35;
  bool bVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long *plVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  long lStack0000000000000008;
  ulong uStack0000000000000018;
  undefined8 *puStack0000000000000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long *in_stack_00000080;
  long *in_stack_00000088;
  long *in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000c0;
  uint7 uStack00000000000000c8;
  undefined1 uStack00000000000000cf;
  uint7 uStack00000000000000d0;
  undefined1 uStack00000000000000d7;
  uint7 uStack00000000000000d8;
  undefined1 uStack00000000000000df;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  long *in_stack_000000f0;
  long *in_stack_000000f8;
  long *in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  long *in_stack_00000118;
  undefined8 in_stack_00000120;
  ulong in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long *in_stack_00000170;
  uint7 uStack0000000000000178;
  undefined1 uStack000000000000017f;
  uint7 uStack0000000000000180;
  undefined1 uStack0000000000000187;
  uint7 uStack0000000000000188;
  undefined1 uStack000000000000018f;
  short sStack0000000000000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  long *in_stack_000001c8;
  undefined8 in_stack_000001d0;
  ulong in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  long *in_stack_000004e0;
  undefined *in_stack_000004e8;
  undefined7 uVar45;
  undefined1 uVar46;
  uint7 uVar47;
  undefined4 uVar48;
  undefined4 in_stack_00000530;
  undefined4 uVar49;
  undefined4 in_stack_00000534;
  uint7 in_stack_00000538;
  undefined1 in_stack_0000053f;
  long *in_stack_00000540;
  long *in_stack_00000548;
  long *in_stack_00000550;
  long *in_stack_00000558;
  long *in_stack_00000560;
  long *in_stack_00000568;
  long *in_stack_00000570;
  long *in_stack_00000578;
  undefined8 in_stack_00000580;
  ulong in_stack_00000588;
  long in_stack_00000590;
  long in_stack_00000598;
  undefined8 in_stack_000005a0;
  
  plVar35 = (long *)CONCAT44(in_stack_00000534,in_stack_00000530);
code_r0x000100b83084:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000c0,s__duplicate_remote_app_server_req_108ad0f27,&stack0x000004e0);
  uVar18 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x00000500);
  uVar47 = (uint7)uVar18;
  uVar27 = (undefined1)((ulong)uVar18 >> 0x38);
  uVar45 = 1;
  uVar46 = 0x80;
  FUN_100fd6328(&stack0x00000170,unaff_x22,&stack0x00000520);
  FUN_100d98294(&stack0x00000170);
  if ((*unaff_x21 != -0x8000000000000000) && (*unaff_x21 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x3b8));
  }
  *(undefined1 *)(unaff_x19 + 0x3a3) = 0;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x3a8);
  FUN_100e44f40(uVar18);
  do {
    _free(uVar18);
    *(undefined1 *)(unaff_x19 + 0x3a4) = 0;
LAB_100b82580:
    pbVar1 = (byte *)(unaff_x19 + 0x399);
    *(undefined1 *)(unaff_x19 + 0x399) = 0;
    lVar22 = unaff_x19 + 0x3b8;
    *(long *)(unaff_x19 + 0x3b8) = unaff_x19 + 0x1a0;
    *(undefined1 *)(unaff_x19 + 0x3c8) = 0;
    *(long *)(unaff_x19 + 0x3d0) = unaff_x19;
    *(byte **)(unaff_x19 + 0x3a8) = pbVar1;
    *(long *)(unaff_x19 + 0x3b0) = lVar22;
    unaff_x21 = (long *)(unaff_x19 + 0x3b0);
    lVar17 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    if (*(char *)(lVar17 + 0x48) != '\x01') {
      if (*(char *)(lVar17 + 0x48) == '\x02') {
        func_0x000108a82a50(&UNK_10b4cce20);
        goto LAB_100b84f94;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar17,&DAT_100c35d48);
      *(undefined1 *)(lVar17 + 0x48) = 1;
    }
    if (*(char *)(lVar17 + 0x44) == '\x01' && *(char *)(lVar17 + 0x45) == '\0') {
      FUN_10610bbb4(*(undefined8 *)*unaff_x20,((undefined8 *)*unaff_x20)[1]);
LAB_100b83120:
      uVar18 = 1;
      uVar27 = 3;
      goto LAB_100b84754;
    }
    if ((*(uint *)(lVar17 + 0x38) & 1) == 0) {
      uVar15 = FUN_1060fcce0();
      uVar23 = extraout_x1;
    }
    else {
      uVar15 = *(uint *)(lVar17 + 0x3c);
      uVar23 = (ulong)*(uint *)(lVar17 + 0x40);
    }
    uVar15 = uVar15 ^ uVar15 << 0x11;
    uVar20 = (uint)uVar23;
    uVar15 = (uint)(uVar23 >> 0x10) & 0xffff ^ uVar15 >> 7 ^ uVar20 ^ uVar15;
    *(undefined4 *)(lVar17 + 0x38) = 1;
    *(uint *)(lVar17 + 0x3c) = uVar20;
    *(uint *)(lVar17 + 0x40) = uVar15;
    bVar21 = *pbVar1;
    if ((int)(uVar15 + uVar20) < 0) {
      bVar43 = bVar21 & 2;
      if ((bVar21 >> 1 & 1) == 0) {
        func_0x000101500c50(&stack0x00000520,*(undefined8 *)(unaff_x19 + 0x3d0));
        if (CONCAT17(uVar46,uVar45) == 8) {
          bVar21 = *pbVar1;
          goto LAB_100b82660;
        }
LAB_100b826d8:
        in_stack_00000088 = (long *)CONCAT17(uVar27,uVar47);
        in_stack_00000080 = (long *)CONCAT17(uVar46,uVar45);
        in_stack_00000098 = (long *)CONCAT17(in_stack_0000053f,in_stack_00000538);
        *pbVar1 = *pbVar1 | 2;
        uVar23 = 0x8000000000000006;
        in_stack_00000090 = plVar35;
        in_stack_000000a0 = in_stack_00000540;
        in_stack_000000a8 = in_stack_00000548;
        in_stack_000000b0 = in_stack_00000550;
      }
      else {
LAB_100b82660:
        if ((bVar21 & 1) == 0) {
          func_0x000100fd1ee8(&stack0x00000520,lVar22,*unaff_x20);
          if (CONCAT17(uVar46,uVar45) != -0x7ffffffffffffffa) goto LAB_100b82714;
          goto LAB_100b83120;
        }
LAB_100b82708:
        uVar23 = 0x8000000000000007;
        if (bVar43 == 0) goto LAB_100b83120;
      }
    }
    else {
      bVar43 = bVar21 & 1;
      if ((bVar21 & 1) != 0) {
LAB_100b826b8:
        if ((bVar21 >> 1 & 1) != 0) goto LAB_100b82708;
        func_0x000101500c50(&stack0x00000520,*(undefined8 *)(unaff_x19 + 0x3d0));
        if (CONCAT17(uVar46,uVar45) != 8) goto LAB_100b826d8;
        goto LAB_100b83120;
      }
      func_0x000100fd1ee8(&stack0x00000520,lVar22,*unaff_x20);
      if (CONCAT17(uVar46,uVar45) == -0x7ffffffffffffffa) {
        bVar21 = *pbVar1;
        goto LAB_100b826b8;
      }
LAB_100b82714:
      uVar23 = CONCAT17(uVar46,uVar45);
      in_stack_00000080 = (long *)CONCAT17(uVar27,uVar47);
      *pbVar1 = *pbVar1 | 1;
      in_stack_00000030 = in_stack_00000560;
      in_stack_00000038 = in_stack_00000568;
      in_stack_00000040 = in_stack_00000570;
      in_stack_00000048 = in_stack_00000578;
      in_stack_00000050 = in_stack_00000580;
      in_stack_00000058 = in_stack_00000588;
      in_stack_00000060 = in_stack_00000590;
      in_stack_00000068 = in_stack_00000598;
      in_stack_00000070 = in_stack_000005a0;
      in_stack_00000088 = plVar35;
      in_stack_00000090 = (long *)CONCAT17(in_stack_0000053f,in_stack_00000538);
      in_stack_00000098 = in_stack_00000540;
      in_stack_000000a0 = in_stack_00000548;
      in_stack_000000a8 = in_stack_00000550;
      in_stack_000000b0 = in_stack_00000558;
      if (uVar23 == 0x8000000000000008) goto LAB_100b83120;
    }
    uVar11 = uStack000000000000018f;
    uVar10 = uStack0000000000000188;
    uVar9 = uStack0000000000000187;
    uVar8 = uStack0000000000000180;
    uVar28 = uStack000000000000017f;
    uVar7 = uStack0000000000000178;
    *(ulong *)(unaff_x19 + 0x200) = uVar23;
    *(long **)(unaff_x19 + 0x238) = in_stack_000000b0;
    *(long **)(unaff_x19 + 0x210) = in_stack_00000088;
    *(long **)(unaff_x19 + 0x208) = in_stack_00000080;
    *(long **)(unaff_x19 + 0x220) = in_stack_00000098;
    *(long **)(unaff_x19 + 0x218) = in_stack_00000090;
    *(long **)(unaff_x19 + 0x230) = in_stack_000000a8;
    *(long **)(unaff_x19 + 0x228) = in_stack_000000a0;
    *(ulong *)(unaff_x19 + 0x268) = in_stack_00000058;
    *(undefined8 *)(unaff_x19 + 0x260) = in_stack_00000050;
    *(long *)(unaff_x19 + 0x278) = in_stack_00000068;
    *(long *)(unaff_x19 + 0x270) = in_stack_00000060;
    *(undefined8 *)(unaff_x19 + 0x280) = in_stack_00000070;
    lVar22 = 0;
    if (0x8000000000000004 < uVar23) {
      lVar22 = uVar23 + 0x7ffffffffffffffb;
    }
    *(long **)(unaff_x19 + 0x248) = in_stack_00000038;
    *(long **)(unaff_x19 + 0x240) = in_stack_00000030;
    *(long **)(unaff_x19 + 600) = in_stack_00000048;
    *(long **)(unaff_x19 + 0x250) = in_stack_00000040;
    uStack0000000000000187 = (undefined1)((ulong)plVar35 >> 0x38);
    uVar6 = uStack0000000000000187;
    uStack000000000000017f = (undefined1)((ulong)in_stack_00000090 >> 0x38);
    uStack0000000000000178 = (uint7)in_stack_00000090;
    uStack0000000000000180 = (uint7)plVar35;
    uVar5 = uStack0000000000000180;
    uStack0000000000000187 = uVar9;
    uStack0000000000000180 = uVar8;
    if (lVar22 != 0) {
      if (lVar22 != 1) {
        uStack0000000000000178 = uVar7;
        uStack000000000000017f = uVar28;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b230be0);
        goto LAB_100b84f94;
      }
      *(undefined2 *)(unaff_x19 + 0x39c) = 0x101;
      *(long **)(unaff_x19 + 0x3b0) = in_stack_00000088;
      *(long **)(unaff_x19 + 0x3a8) = in_stack_00000080;
      *(long **)(unaff_x19 + 0x3c0) = in_stack_00000098;
      *(long **)(unaff_x19 + 0x3b8) = in_stack_00000090;
      *(long **)(unaff_x19 + 0x3d0) = in_stack_000000a8;
      *(long **)(unaff_x19 + 0x3c8) = in_stack_000000a0;
      *(long **)(unaff_x19 + 0x3d8) = in_stack_000000b0;
      lVar22 = *(long *)(unaff_x19 + 0x3a8);
      if (lVar22 < 4) {
        if (lVar22 - 1U < 3) goto LAB_100b81f98;
        *(long **)(unaff_x19 + 0x558) = in_stack_00000090;
        *(long **)(unaff_x19 + 0x550) = in_stack_00000088;
        *(long **)(unaff_x19 + 0x568) = in_stack_000000a0;
        *(long **)(unaff_x19 + 0x560) = in_stack_00000098;
        uStack0000000000000178 = uVar7;
        uStack000000000000017f = uVar28;
        FUN_10065698c((undefined8 *)(unaff_x19 + 0x3e0),*(undefined8 *)(unaff_x19 + 0x558),
                      *(undefined8 *)(unaff_x19 + 0x560));
        *(undefined1 *)(unaff_x19 + 0x39b) = 1;
        lVar22 = *(long *)(unaff_x19 + 0x3e0);
        if (lVar22 == -0x7ffffffffffffffd) {
          FUN_100f3f484(&stack0x00000170,s_remote_app_server_at_____sent_in_108ad0fb1,
                        &stack0x00000520);
          uStack00000000000000c8 = uStack0000000000000178;
          uStack00000000000000cf = uStack000000000000017f;
          in_stack_000000c0 = in_stack_00000170;
          uStack00000000000000d0 = uStack0000000000000180;
          uStack00000000000000d7 = uStack0000000000000187;
          func_0x000100025ae8(&stack0x00000170,&stack0x000000c0);
          lVar22 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                             (unaff_x19 + 0x1a8,&stack0x00000520);
          if (lVar22 != 0) {
            FUN_100de21d4(&stack0x00000500);
          }
          uStack000000000000017f = (undefined1)uStack00000000000000c8;
          uStack0000000000000178 = (uint7)((ulong)in_stack_000000c0 >> 8);
          uStack0000000000000187 = (undefined1)uStack00000000000000d0;
          uStack0000000000000188 =
               (uint7)(CONCAT17(uStack00000000000000d7,uStack00000000000000d0) >> 8);
          in_stack_00000170 = (long *)CONCAT17((char)in_stack_000000c0,0x44);
          uStack0000000000000180 =
               (uint7)(CONCAT35((int3)(CONCAT17(uStack00000000000000cf,uStack00000000000000c8) >>
                                      0x28),(int5)uStack00000000000000c8) >> 8);
          if ((*(ulong *)(unaff_x19 + 0x1e8) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x1f0));
          }
          *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
          *(undefined1 *)(unaff_x19 + 0x1e0) = 0x15;
          *(ulong *)(unaff_x19 + 0x1f8) = CONCAT71(uStack0000000000000188,uStack0000000000000187);
          *(ulong *)(unaff_x19 + 0x1f0) = CONCAT71(uStack0000000000000180,uStack000000000000017f);
          *(ulong *)(unaff_x19 + 0x1e9) = CONCAT17(uStack000000000000017f,uStack0000000000000178);
          *(long **)(unaff_x19 + 0x1e1) = in_stack_00000170;
          FUN_100de65d4(&stack0x000004e0);
LAB_100b821f8:
          if (*(long *)(unaff_x19 + 0x3e0) != -0x7ffffffffffffffd) {
            *(undefined1 *)(unaff_x19 + 0x39b) = 0;
          }
          *(undefined1 *)(unaff_x19 + 0x39b) = 0;
          (**(code **)(*(long *)(unaff_x19 + 0x550) + 0x20))
                    (unaff_x19 + 0x568,*(undefined8 *)(unaff_x19 + 0x558),
                     *(undefined8 *)(unaff_x19 + 0x560));
          goto LAB_100b82228;
        }
        uVar23 = lVar22 + 0x8000000000000001U & lVar22 >> 0x3f;
        lVar17 = in_stack_00000590;
        if (1 < (long)uVar23) {
          if (uVar23 != 2) {
            in_stack_00000568 = *(long **)(unaff_x19 + 0x430);
            in_stack_00000560 = *(long **)(unaff_x19 + 0x428);
            in_stack_00000578 = *(long **)(unaff_x19 + 0x440);
            in_stack_00000570 = *(long **)(unaff_x19 + 0x438);
            in_stack_00000588 = *(ulong *)(unaff_x19 + 0x450);
            in_stack_00000580 = *(undefined8 *)(unaff_x19 + 0x448);
            in_stack_00000598 = *(long *)(unaff_x19 + 0x460);
            lVar17 = *(long *)(unaff_x19 + 0x458);
            uVar18 = *(undefined8 *)(unaff_x19 + 0x3f0);
            lVar42 = *(long *)(unaff_x19 + 1000);
            lVar24 = *(long *)(unaff_x19 + 0x400);
            plVar35 = *(long **)(unaff_x19 + 0x3f8);
            uVar47 = (uint7)uVar18;
            uVar27 = (undefined1)((ulong)uVar18 >> 0x38);
            uVar45 = (undefined7)lVar42;
            uVar46 = (undefined1)((ulong)lVar42 >> 0x38);
            in_stack_00000538 = (uint7)lVar24;
            in_stack_0000053f = (undefined1)((ulong)lVar24 >> 0x38);
            in_stack_00000548 = *(long **)(unaff_x19 + 0x410);
            in_stack_00000540 = *(long **)(unaff_x19 + 0x408);
            in_stack_00000558 = *(long **)(unaff_x19 + 0x420);
            in_stack_00000550 = *(long **)(unaff_x19 + 0x418);
            uVar19 = FUN_100e8e2bc(*(undefined8 *)(unaff_x19 + 0x1d0),
                                   *(undefined8 *)(unaff_x19 + 0x1d8),&stack0x00000588);
            lVar22 = *(long *)(unaff_x19 + 0x1b0);
            uVar23 = *(ulong *)(unaff_x19 + 0x1b8);
            bVar21 = (byte)(uVar19 >> 0x39);
            if (in_stack_00000588 == 0x8000000000000000) {
              lVar31 = 0;
              uVar19 = uVar19 & uVar23;
              uVar38 = *(undefined8 *)(lVar22 + uVar19);
              uVar16 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar21),
                                CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar21),
                                         CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar21),
                                                  CONCAT14(-((byte)((ulong)uVar38 >> 0x20) == bVar21
                                                            ),CONCAT13(-((byte)((ulong)uVar38 >>
                                                                               0x18) == bVar21),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar38 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar38 >> 8) == bVar21),
                                                           -((byte)uVar38 == bVar21)))))))) &
                       0x8080808080808080;
              while( true ) {
                for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                  uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  uVar29 = uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) & uVar23;
                  lVar25 = lVar22 + uVar29 * -0x20;
                  if ((*(long *)(lVar25 + -0x20) == -0x8000000000000000) &&
                     (*(long *)(lVar25 + -0x18) == lVar17)) goto LAB_100b84034;
                }
                bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar38 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar38 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar38 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar38 >> 8) ==
                                                                     -1),-((char)uVar38 == -1)))))))
                                            ),1);
                if ((bVar43 & 1) != 0) break;
                lVar31 = lVar31 + 8;
                uVar19 = uVar19 + lVar31 & uVar23;
                uVar38 = *(undefined8 *)(lVar22 + uVar19);
                uVar16 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar21),
                                  CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar21),
                                           CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar21),
                                                    CONCAT14(-((byte)((ulong)uVar38 >> 0x20) ==
                                                              bVar21),CONCAT13(-((byte)((ulong)
                                                  uVar38 >> 0x18) == bVar21),
                                                  CONCAT12(-((byte)((ulong)uVar38 >> 0x10) == bVar21
                                                            ),CONCAT11(-((byte)((ulong)uVar38 >> 8)
                                                                        == bVar21),
                                                                       -((byte)uVar38 == bVar21)))))
                                                  ))) & 0x8080808080808080;
              }
            }
            else {
              lVar31 = 0;
              uVar19 = uVar19 & uVar23;
              uVar38 = *(undefined8 *)(lVar22 + uVar19);
              uVar16 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar21),
                                CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar21),
                                         CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar21),
                                                  CONCAT14(-((byte)((ulong)uVar38 >> 0x20) == bVar21
                                                            ),CONCAT13(-((byte)((ulong)uVar38 >>
                                                                               0x18) == bVar21),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar38 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar38 >> 8) == bVar21),
                                                           -((byte)uVar38 == bVar21)))))))) &
                       0x8080808080808080;
              while( true ) {
                for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                  uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  uVar29 = uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) & uVar23;
                  lVar25 = lVar22 + uVar29 * -0x20;
                  if (((*(long *)(lVar25 + -0x20) != -0x8000000000000000) &&
                      (in_stack_00000598 == *(long *)(lVar25 + -0x10))) &&
                     (iVar14 = _memcmp(lVar17,*(undefined8 *)(lVar25 + -0x18),in_stack_00000598),
                     iVar14 == 0)) goto LAB_100b84034;
                }
                bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar38 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar38 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar38 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar38 >> 8) ==
                                                                     -1),-((char)uVar38 == -1)))))))
                                            ),1);
                if ((bVar43 & 1) != 0) break;
                lVar31 = lVar31 + 8;
                uVar19 = uVar19 + lVar31 & uVar23;
                uVar38 = *(undefined8 *)(lVar22 + uVar19);
                uVar16 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar21),
                                  CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar21),
                                           CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar21),
                                                    CONCAT14(-((byte)((ulong)uVar38 >> 0x20) ==
                                                              bVar21),CONCAT13(-((byte)((ulong)
                                                  uVar38 >> 0x18) == bVar21),
                                                  CONCAT12(-((byte)((ulong)uVar38 >> 0x10) == bVar21
                                                            ),CONCAT11(-((byte)((ulong)uVar38 >> 8)
                                                                        == bVar21),
                                                                       -((byte)uVar38 == bVar21)))))
                                                  ))) & 0x8080808080808080;
              }
            }
            goto LAB_100b84108;
          }
          in_stack_000000e8 = *(long **)(unaff_x19 + 0x410);
          in_stack_000000e0 = *(long **)(unaff_x19 + 0x408);
          in_stack_000000f8 = *(long **)(unaff_x19 + 0x420);
          in_stack_000000f0 = *(long **)(unaff_x19 + 0x418);
          in_stack_00000108 = *(long **)(unaff_x19 + 0x430);
          in_stack_00000100 = *(long **)(unaff_x19 + 0x428);
          in_stack_00000118 = *(long **)(unaff_x19 + 0x440);
          in_stack_00000110 = *(long **)(unaff_x19 + 0x438);
          in_stack_000000c0 = *(long **)(unaff_x19 + 1000);
          uStack00000000000000c8 = (uint7)*(undefined8 *)(unaff_x19 + 0x3f0);
          uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x3f0) >> 0x38);
          uStack00000000000000d8 = (uint7)*(undefined8 *)(unaff_x19 + 0x400);
          uStack00000000000000df = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x400) >> 0x38);
          uStack00000000000000d0 = (uint7)*(undefined8 *)(unaff_x19 + 0x3f8);
          uStack00000000000000d7 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x3f8) >> 0x38);
          uVar19 = FUN_100e8e2bc(*(undefined8 *)(unaff_x19 + 0x1d0),
                                 *(undefined8 *)(unaff_x19 + 0x1d8),&stack0x000000c0);
          plVar34 = in_stack_000000c0;
          lVar22 = *(long *)(unaff_x19 + 0x1b0);
          uVar23 = *(ulong *)(unaff_x19 + 0x1b8);
          bVar21 = (byte)(uVar19 >> 0x39);
          lVar42 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
          if (in_stack_000000c0 == (long *)0x8000000000000000) {
            lVar24 = 0;
            uVar19 = uVar19 & uVar23;
            uVar18 = *(undefined8 *)(lVar22 + uVar19);
            uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                              CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                       CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                                CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                         CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                                   bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
                uVar29 = uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) & uVar23;
                lVar31 = lVar22 + uVar29 * -0x20;
                if ((*(long *)(lVar31 + -0x20) == -0x8000000000000000) &&
                   (*(long *)(lVar31 + -0x18) == lVar42)) goto LAB_100b83f24;
              }
              bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar18 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                          ),1);
              if ((bVar43 & 1) != 0) break;
              lVar24 = lVar24 + 8;
              uVar19 = uVar19 + lVar24 & uVar23;
              uVar18 = *(undefined8 *)(lVar22 + uVar19);
              uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                                CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                         CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                                  CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21
                                                            ),CONCAT13(-((byte)((ulong)uVar18 >>
                                                                               0x18) == bVar21),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                       0x8080808080808080;
            }
          }
          else {
            lVar24 = 0;
            lVar31 = CONCAT17(uStack00000000000000d7,uStack00000000000000d0);
            uVar19 = uVar19 & uVar23;
            uVar18 = *(undefined8 *)(lVar22 + uVar19);
            uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                              CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                       CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                                CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                         CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                                   bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
                uVar29 = uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) & uVar23;
                lVar25 = lVar22 + uVar29 * -0x20;
                if (((*(long *)(lVar25 + -0x20) != -0x8000000000000000) &&
                    (lVar31 == *(long *)(lVar25 + -0x10))) &&
                   (iVar14 = _memcmp(lVar42,*(undefined8 *)(lVar25 + -0x18),lVar31), iVar14 == 0))
                goto LAB_100b83f24;
              }
              bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar18 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                          ),1);
              if ((bVar43 & 1) != 0) break;
              lVar24 = lVar24 + 8;
              uVar19 = uVar19 + lVar24 & uVar23;
              uVar18 = *(undefined8 *)(lVar22 + uVar19);
              uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                                CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                         CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                                  CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21
                                                            ),CONCAT13(-((byte)((ulong)uVar18 >>
                                                                               0x18) == bVar21),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                       0x8080808080808080;
            }
          }
          bVar36 = true;
          goto LAB_100b84264;
        }
        if (uVar23 != 0) {
          __ZN174__LT_codex_app_server_protocol__protocol__common__ServerNotification_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCNotification_GT__GT_8try_from17h988f0ff0bafe3135E
                    (&stack0x00000520,&stack0x00000240);
          if (CONCAT17(uVar46,uVar45) != -0x7fffffffffffffbf) {
            _memcpy(&stack0x000002a8,&stack0x00000528,0x1f0);
            lVar22 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                               (unaff_x19 + 0x1a8,&stack0x000002a0);
            if (lVar22 != 0) {
              if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                 (((bRam000000010b628500 - 1 < 2 ||
                   ((bRam000000010b628500 != 0 &&
                    (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                                        ), cVar13 != '\0')))) &&
                  (uVar23 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                      (
                                      ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                                      ), (uVar23 & 1) != 0)))) {
                in_stack_000000c0 = (long *)&UNK_108cbf5e9;
                uStack00000000000000c8 = 0x53;
                uStack00000000000000cf = 0;
                in_stack_00000170 = (long *)0x1;
                uStack0000000000000178 = (uint7)&stack0x00000520;
                uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
                uStack0000000000000180 = 2;
                uStack0000000000000187 = 0;
                uStack0000000000000188 =
                     (uint7)(
                            ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                            + 0x30);
                uStack000000000000018f =
                     (undefined1)
                     ((ulong)(
                             ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                             + 0x30) >> 0x38);
                FUN_100b85774(&stack0x00000170);
              }
              else {
                lVar22 = 
                ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar18 = *(undefined8 *)
                            (
                            ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                            + 0x20);
                  uVar38 = *(undefined8 *)
                            (
                            ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                            + 0x28);
                  puVar3 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_10b3c24c8;
                  }
                  puVar4 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar4 = &UNK_109adfc03;
                  }
                  iVar14 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000498);
                  if (iVar14 != 0) {
                    in_stack_00000170 = (long *)0x1;
                    uStack0000000000000178 = (uint7)&stack0x00000520;
                    uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
                    uStack0000000000000180 = 2;
                    uStack0000000000000187 = 0;
                    uStack0000000000000188 =
                         (uint7)(
                                ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                                + 0x30);
                    uStack000000000000018f =
                         (undefined1)
                         ((ulong)(
                                 ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c747cf652b8f3f5E
                                 + 0x30) >> 0x38);
                    uStack00000000000000c8 = (uint7)uVar18;
                    uStack00000000000000cf = (undefined1)((ulong)uVar18 >> 0x38);
                    in_stack_000000c0 = (long *)0x2;
                    uStack00000000000000d0 = (uint7)uVar38;
                    uStack00000000000000d7 = (undefined1)((ulong)uVar38 >> 0x38);
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar22,puVar4,puVar3,&stack0x000000c0,&stack0x00000170);
                  }
                }
              }
              FUN_100de21d4(&stack0x000004f8);
              goto LAB_100b821f8;
            }
            goto LAB_100b81f64;
          }
          lVar17 = CONCAT17(uVar27,uVar47);
          FUN_101bbf470(lVar17);
          goto LAB_100b84144;
        }
        *(undefined1 *)(unaff_x19 + 0x39e) = 1;
        *(undefined8 *)(unaff_x19 + 0x510) = *(undefined8 *)(unaff_x19 + 0x468);
        *(undefined8 *)(unaff_x19 + 0x508) = *(undefined8 *)(unaff_x19 + 0x460);
        *(undefined8 *)(unaff_x19 + 0x520) = *(undefined8 *)(unaff_x19 + 0x478);
        *(undefined8 *)(unaff_x19 + 0x518) = *(undefined8 *)(unaff_x19 + 0x470);
        *(undefined8 *)(unaff_x19 + 0x528) = *(undefined8 *)(unaff_x19 + 0x480);
        *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 0x428);
        *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x420);
        *(undefined8 *)(unaff_x19 + 0x4e0) = *(undefined8 *)(unaff_x19 + 0x438);
        *(undefined8 *)(unaff_x19 + 0x4d8) = *(undefined8 *)(unaff_x19 + 0x430);
        *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0x448);
        *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x440);
        *(undefined8 *)(unaff_x19 + 0x500) = *(undefined8 *)(unaff_x19 + 0x458);
        *(undefined8 *)(unaff_x19 + 0x4f8) = *(undefined8 *)(unaff_x19 + 0x450);
        *(undefined8 *)(unaff_x19 + 0x490) = *(undefined8 *)(unaff_x19 + 1000);
        *(undefined8 *)(unaff_x19 + 0x488) = *(undefined8 *)(unaff_x19 + 0x3e0);
        *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x3f8);
        *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x3f0);
        *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x408);
        *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x400);
        *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x418);
        *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x410);
        if (*(long *)(unaff_x19 + 0x4a0) == -0x8000000000000000) {
          uVar23 = *(ulong *)(unaff_x19 + 0x3f8);
          puStack0000000000000028 = *(undefined8 **)(unaff_x19 + 0x400);
          uStack0000000000000018 = *(ulong *)(unaff_x19 + 0x408);
        }
        else {
          uVar18 = *(undefined8 *)(unaff_x19 + 0x4a8);
          uVar23 = *(ulong *)(unaff_x19 + 0x4b0);
          puStack0000000000000028 = (undefined8 *)0x1;
          if ((uVar23 != 0) &&
             (puStack0000000000000028 = (undefined8 *)_malloc(uVar23),
             puStack0000000000000028 == (undefined8 *)0x0)) {
            func_0x0001087c9084(1,uVar23);
            goto LAB_100b84f94;
          }
          _memcpy(puStack0000000000000028,uVar18,uVar23);
          uStack0000000000000018 = uVar23;
        }
        lVar22 = 1;
        *(undefined1 *)(unaff_x19 + 0x39a) = 1;
        plVar34 = (long *)(unaff_x19 + 0x530);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x490);
        lVar17 = *(long *)(unaff_x19 + 0x498);
        if ((lVar17 != 0) && (lVar22 = _malloc(lVar17), lVar22 == 0)) {
          func_0x0001087c9084(1,lVar17);
          goto LAB_100b84f94;
        }
        _memcpy(lVar22,uVar18,lVar17);
        *(long *)(unaff_x19 + 0x530) = lVar17;
        *(long *)(unaff_x19 + 0x538) = lVar22;
        *(long *)(unaff_x19 + 0x540) = lVar17;
        *(undefined1 *)(unaff_x19 + 0x39e) = 0;
        in_stack_000005a0 = *(undefined8 *)(unaff_x19 + 0x508);
        in_stack_00000568 = *(long **)(unaff_x19 + 0x4d0);
        in_stack_00000560 = *(long **)(unaff_x19 + 0x4c8);
        in_stack_00000578 = *(long **)(unaff_x19 + 0x4e0);
        in_stack_00000570 = *(long **)(unaff_x19 + 0x4d8);
        in_stack_00000588 = *(ulong *)(unaff_x19 + 0x4f0);
        in_stack_00000580 = *(undefined8 *)(unaff_x19 + 0x4e8);
        in_stack_00000598 = *(long *)(unaff_x19 + 0x500);
        lVar17 = *(long *)(unaff_x19 + 0x4f8);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x488);
        plVar35 = *(long **)(unaff_x19 + 0x498);
        uVar47 = (uint7)*(undefined8 *)(unaff_x19 + 0x490);
        uVar27 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x490) >> 0x38);
        uVar45 = (undefined7)uVar18;
        uVar46 = (undefined1)((ulong)uVar18 >> 0x38);
        in_stack_00000538 = (uint7)*(undefined8 *)(unaff_x19 + 0x4a0);
        in_stack_0000053f = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x4a0) >> 0x38);
        in_stack_00000548 = *(long **)(unaff_x19 + 0x4b0);
        in_stack_00000540 = *(long **)(unaff_x19 + 0x4a8);
        in_stack_00000558 = *(long **)(unaff_x19 + 0x4c0);
        in_stack_00000550 = *(long **)(unaff_x19 + 0x4b8);
        plVar39 = (long *)(unaff_x19 + 0x570);
        __ZN164__LT_codex_app_server_protocol__protocol__common__ServerRequest_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCRequest_GT__GT_8try_from17h9c69cd3485566ad3E
                  (plVar39,&stack0x00000520);
        if (*plVar39 == -0x7ffffffffffffff7) {
          *(undefined8 *)(unaff_x19 + 0x548) = *(undefined8 *)(unaff_x19 + 0x578);
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b6284e8 - 1 < 2 ||
               ((bRam000000010b6284e8 != 0 &&
                (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                                    ), cVar13 != '\0')))))) &&
             (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                                 ), (uVar19 & 1) != 0)) {
            in_stack_000000c0 = (long *)&UNK_108cbf5be;
            uStack00000000000000c8 = 0x57;
            uStack00000000000000cf = 0;
            uVar45 = SUB87(&stack0x000000c0,0);
            uVar46 = (undefined1)((ulong)&stack0x000000c0 >> 0x38);
            uVar47 = 0x10b208fd0;
            uVar27 = 0;
            plVar35 = (long *)&stack0x00000500;
            in_stack_00000538 = 0x10b218e98;
            in_stack_0000053f = 0;
            in_stack_00000548 = (long *)&UNK_10b2170c0;
            in_stack_00000170 = (long *)0x1;
            uStack0000000000000178 = (uint7)&stack0x00000520;
            uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
            uStack0000000000000180 = 3;
            uStack0000000000000187 = 0;
            uStack0000000000000188 =
                 (uint7)(
                        ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                        + 0x30);
            uStack000000000000018f =
                 (undefined1)
                 ((ulong)(
                         ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                         + 0x30) >> 0x38);
            FUN_100b858b0(&stack0x00000170);
            in_stack_00000540 = plVar34;
          }
          else {
            lVar22 = 
            ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uVar18 = *(undefined8 *)
                        (
                        ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                        + 0x20);
              uVar38 = *(undefined8 *)
                        (
                        ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                        + 0x28);
              puVar3 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              iVar14 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000004c8);
              if (iVar14 != 0) {
                uVar45 = SUB87(&stack0x00000500,0);
                uVar46 = (undefined1)((ulong)&stack0x00000500 >> 0x38);
                uVar47 = 0x10b208fd0;
                uVar27 = 0;
                plVar35 = (long *)&stack0x000004e0;
                in_stack_00000538 = 0x10b218e98;
                in_stack_0000053f = 0;
                in_stack_00000548 = (long *)&UNK_10b2170c0;
                in_stack_00000170 = (long *)0x1;
                uStack0000000000000178 = (uint7)&stack0x00000520;
                uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
                uStack0000000000000180 = 3;
                uStack0000000000000187 = 0;
                uStack0000000000000188 =
                     (uint7)(
                            ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                            + 0x30);
                uStack000000000000018f =
                     (undefined1)
                     ((ulong)(
                             ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1019407f1db2ee72E
                             + 0x30) >> 0x38);
                uStack00000000000000c8 = (uint7)uVar18;
                uStack00000000000000cf = (undefined1)((ulong)uVar18 >> 0x38);
                in_stack_000000c0 = (long *)0x2;
                uStack00000000000000d0 = (uint7)uVar38;
                uStack00000000000000d7 = (undefined1)((ulong)uVar38 >> 0x38);
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar22,puVar4,puVar3,&stack0x000000c0,&stack0x00000170);
                in_stack_000004e0 = (long *)(unaff_x19 + 0x548);
                in_stack_00000540 = plVar34;
              }
            }
          }
          uStack0000000000000178 = 0x10112965c;
          uStack000000000000017f = 0;
          in_stack_00000170 = plVar34;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000520,s__unsupported_remote_app_server_r_108ad0f85,&stack0x00000170)
          ;
          *(undefined1 *)(unaff_x19 + 0x39a) = 0;
          *(undefined8 *)(unaff_x19 + 0x710) = 0x8000000000000002;
          *(ulong *)(unaff_x19 + 0x720) = CONCAT17(uVar27,uVar47);
          *(ulong *)(unaff_x19 + 0x718) = CONCAT17(uVar46,uVar45);
          *(long **)(unaff_x19 + 0x728) = plVar35;
          *(undefined8 *)(unaff_x19 + 0x730) = 0x8000000000000005;
          *(undefined8 *)(unaff_x19 + 0x778) = 0xffffffffffff80a7;
          *(ulong *)(unaff_x19 + 0x780) = uVar23;
          *(undefined8 **)(unaff_x19 + 0x788) = puStack0000000000000028;
          *(ulong *)(unaff_x19 + 0x790) = uStack0000000000000018;
          *(long *)(unaff_x19 + 0x7b8) = unaff_x19;
          *(undefined8 *)(unaff_x19 + 0x7c0) = *(undefined8 *)(unaff_x19 + 400);
          *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x198);
          *(undefined1 *)(unaff_x19 + 0x8c8) = 0;
          lVar22 = unaff_x19 + 0x710;
          auVar44 = func_0x000100b8e2a4(lVar22);
          uVar19 = auVar44._8_8_;
          if ((auVar44._0_8_ & 1) != 0) {
            uVar18 = 1;
            uVar27 = 10;
            goto LAB_100b84754;
          }
          if (*(char *)(unaff_x19 + 0x8c8) == '\x03') {
            if ((*(long *)(unaff_x19 + 0x888) != 6) &&
               ((*(long *)(unaff_x19 + 0x888) != 4 || (*(short *)(unaff_x19 + 0x8b0) != 0x12)))) {
              (**(code **)(*(long *)(unaff_x19 + 0x890) + 0x20))
                        (unaff_x19 + 0x8a8,*(undefined8 *)(unaff_x19 + 0x898),
                         *(undefined8 *)(unaff_x19 + 0x8a0));
            }
            *(undefined1 *)(unaff_x19 + 0x8c9) = 0;
            lVar22 = unaff_x19 + 2000;
LAB_100b81ee4:
            FUN_100e3d46c(lVar22);
          }
          else if (*(char *)(unaff_x19 + 0x8c8) == '\0') goto LAB_100b81ee4;
          if (uVar19 != 0) {
            in_stack_00000170 = (long *)0x0;
            uStack0000000000000178 = 1;
            uStack000000000000017f = 0;
            uStack0000000000000180 = 0;
            uStack0000000000000187 = 0;
            iVar14 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                               (&stack0x000004e0,&stack0x00000520);
            if (iVar14 != 0) {
              func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004f8,&UNK_10b235000,&UNK_10b2346c0
                                 );
              goto LAB_100b84f94;
            }
            uStack00000000000000c8 = uStack0000000000000178;
            uStack00000000000000cf = uStack000000000000017f;
            in_stack_000000c0 = in_stack_00000170;
            uStack00000000000000d0 = uStack0000000000000180;
            uStack00000000000000d7 = uStack0000000000000187;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000170,s_remote_app_server_at_____write_f_108ad0efc,
                       &stack0x00000520);
            plVar35 = in_stack_00000170;
            uVar18 = CONCAT17(uStack000000000000017f,uStack0000000000000178);
            lVar22 = CONCAT17(uStack0000000000000187,uStack0000000000000180);
            if (lVar22 == 0) {
              lVar17 = 1;
            }
            else {
              lVar17 = _malloc(lVar22);
              if (lVar17 == 0) {
                func_0x0001087c9084(1,lVar22);
                goto LAB_100b84f94;
              }
            }
            _memcpy(lVar17,uVar18,lVar22);
            uVar16 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                               (unaff_x19 + 0x1a8,&stack0x00000520);
            if ((uVar16 & 3) == 1) {
              uVar38 = *(undefined8 *)(uVar16 - 1);
              puVar33 = *(undefined8 **)(uVar16 + 7);
              pcVar12 = (code *)*puVar33;
              if (pcVar12 != (code *)0x0) {
                (*pcVar12)(uVar38);
              }
              if (puVar33[1] != 0) {
                _free(uVar38);
              }
              _free((undefined8 *)(uVar16 - 1));
              uVar16 = *(ulong *)(unaff_x19 + 0x1e8);
            }
            else {
              uVar16 = *(ulong *)(unaff_x19 + 0x1e8);
            }
            if ((uVar16 & 0x7fffffffffffffff) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x1f0));
            }
            *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
            *(undefined1 *)(unaff_x19 + 0x1e0) = 0xb;
            *(long **)(unaff_x19 + 0x1e8) = plVar35;
            *(undefined8 *)(unaff_x19 + 0x1f0) = uVar18;
            *(long *)(unaff_x19 + 0x1f8) = lVar22;
            if (in_stack_000000c0 != (long *)0x0) {
              _free(CONCAT17(uStack00000000000000cf,uStack00000000000000c8));
            }
            if ((uVar19 & 3) == 1) {
              uVar18 = *(undefined8 *)(uVar19 - 1);
              puVar33 = *(undefined8 **)(uVar19 + 7);
              pcVar12 = (code *)*puVar33;
              if (pcVar12 != (code *)0x0) {
                (*pcVar12)(uVar18);
              }
              if (puVar33[1] != 0) {
                _free(uVar18);
              }
              _free((undefined8 *)(uVar19 - 1));
            }
            plVar35 = *(long **)(unaff_x19 + 0x548);
            if (*plVar35 == 1) {
              uVar19 = plVar35[1];
              if ((uVar19 & 3) == 1) {
                puVar37 = (undefined8 *)(uVar19 - 1);
                uVar18 = *puVar37;
                puVar33 = *(undefined8 **)(uVar19 + 7);
                pcVar12 = (code *)*puVar33;
                if (pcVar12 != (code *)0x0) {
                  (*pcVar12)(uVar18);
                }
                if (puVar33[1] != 0) {
                  _free(uVar18);
                }
                goto LAB_100b821a4;
              }
            }
            else if ((*plVar35 == 0) && (plVar35[2] != 0)) {
              puVar37 = (undefined8 *)plVar35[1];
LAB_100b821a4:
              _free(puVar37);
            }
            _free(plVar35);
LAB_100b821c8:
            if (*(long *)(unaff_x19 + 0x530) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x538));
            }
            if (((*(byte *)(unaff_x19 + 0x39a) & 1) != 0) && ((uVar23 & 0x7fffffffffffffff) != 0)) {
              _free(puStack0000000000000028);
            }
            *(undefined1 *)(unaff_x19 + 0x39a) = 0;
            *(undefined1 *)(unaff_x19 + 0x39e) = 0;
            goto LAB_100b821f8;
          }
          plVar34 = *(long **)(unaff_x19 + 0x548);
          if (*plVar34 == 1) {
            uVar19 = plVar34[1];
            if ((uVar19 & 3) == 1) {
              puVar37 = (undefined8 *)(uVar19 - 1);
              uVar18 = *puVar37;
              puVar33 = *(undefined8 **)(uVar19 + 7);
              pcVar12 = (code *)*puVar33;
              if (pcVar12 != (code *)0x0) {
                (*pcVar12)(uVar18);
              }
              if (puVar33[1] != 0) {
                _free(uVar18);
              }
              goto LAB_100b81f10;
            }
          }
          else if ((*plVar34 == 0) && (plVar34[2] != 0)) {
            puVar37 = (undefined8 *)plVar34[1];
LAB_100b81f10:
            _free(puVar37);
          }
          _free(plVar34);
        }
        else {
          _memcpy(&stack0x00000528,plVar39,0x1a0);
          uVar45 = 0x43;
          uVar46 = 0x80;
          lVar22 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                             (unaff_x19 + 0x1a8,&stack0x00000520);
          if (lVar22 != 0) {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b628518 - 1 < 2 ||
                 ((bRam000000010b628518 != 0 &&
                  (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                                      ), cVar13 != '\0')))))) &&
               (uVar19 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                                   ), (uVar19 & 1) != 0)) {
              in_stack_000000c0 = (long *)&UNK_108cbf58c;
              uStack00000000000000c8 = 0x65;
              uStack00000000000000cf = 0;
              in_stack_00000170 = (long *)0x1;
              uStack0000000000000178 = (uint7)&stack0x00000520;
              uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
              uStack0000000000000180 = 2;
              uStack0000000000000187 = 0;
              uStack0000000000000188 =
                   (uint7)(
                          ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                          + 0x30);
              uStack000000000000018f =
                   (undefined1)
                   ((ulong)(
                           ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                           + 0x30) >> 0x38);
              FUN_100b85638(&stack0x00000170);
            }
            else {
              lVar22 = 
              ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar18 = *(undefined8 *)
                          (
                          ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                          + 0x20);
                uVar38 = *(undefined8 *)
                          (
                          ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                          + 0x28);
                puVar3 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar14 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000004b0);
                if (iVar14 != 0) {
                  in_stack_00000170 = (long *)0x1;
                  uStack0000000000000178 = (uint7)&stack0x00000520;
                  uStack000000000000017f = (undefined1)((ulong)&stack0x00000520 >> 0x38);
                  uStack0000000000000180 = 2;
                  uStack0000000000000187 = 0;
                  uStack0000000000000188 =
                       (uint7)(
                              ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                              + 0x30);
                  uStack000000000000018f =
                       (undefined1)
                       ((ulong)(
                               ___ZN23codex_app_server_client6remote21RemoteAppServerClient19connect_with_stream28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6bcdfd1e8833c8E
                               + 0x30) >> 0x38);
                  uStack00000000000000c8 = (uint7)uVar18;
                  uStack00000000000000cf = (undefined1)((ulong)uVar18 >> 0x38);
                  in_stack_000000c0 = (long *)0x2;
                  uStack00000000000000d0 = (uint7)uVar38;
                  uStack00000000000000d7 = (undefined1)((ulong)uVar38 >> 0x38);
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar22,puVar4,puVar3,&stack0x000000c0,&stack0x00000170);
                }
              }
            }
            FUN_100de21d4(&stack0x000004f8);
            goto LAB_100b821c8;
          }
        }
        if (*(long *)(unaff_x19 + 0x530) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x538));
        }
        if (((*(byte *)(unaff_x19 + 0x39a) & 1) != 0) && ((uVar23 & 0x7fffffffffffffff) != 0)) {
          _free(puStack0000000000000028);
        }
        *(undefined1 *)(unaff_x19 + 0x39a) = 0;
        *(undefined1 *)(unaff_x19 + 0x39e) = 0;
        goto LAB_100b81f64;
      }
      uStack0000000000000187 = (undefined1)((ulong)in_stack_00000098 >> 0x38);
      uStack0000000000000180 = (uint7)in_stack_00000098;
      uStack000000000000018f = (undefined1)((ulong)in_stack_000000a0 >> 0x38);
      uStack0000000000000188 = (uint7)in_stack_000000a0;
      if (lVar22 < 6) {
        if (lVar22 == 5) goto LAB_100b81f98;
        in_stack_00000170 = in_stack_00000088;
        _sStack0000000000000190 = in_stack_000000a8;
        puVar33 = (undefined8 *)0x0;
        if (((uint)in_stack_000000a8 & 0xffff) != 0x12) {
          puVar33 = &stack0x00000170;
        }
        FUN_100e9cdc0(&stack0x00000520,puVar33);
        lVar22 = CONCAT17(uVar46,uVar45);
        if (lVar22 == -0x8000000000000000) {
          in_stack_000000c0 = (long *)0x8000000000000000;
          lVar22 = (long)in_stack_000000c0;
          uVar47 = uStack00000000000000c8;
          uVar27 = uStack00000000000000cf;
          uVar5 = uStack00000000000000d0;
          uVar6 = uStack00000000000000d7;
        }
        else if (plVar35 == (long *)0x0) {
          if (lVar22 != 0) {
            _free();
          }
          in_stack_000000c0 = (long *)0x8000000000000000;
          lVar22 = (long)in_stack_000000c0;
          uVar47 = uStack00000000000000c8;
          uVar27 = uStack00000000000000cf;
          uVar5 = uStack00000000000000d0;
          uVar6 = uStack00000000000000d7;
        }
        uStack00000000000000d7 = uVar6;
        uStack00000000000000d0 = uVar5;
        uStack00000000000000cf = uVar27;
        uStack00000000000000c8 = uVar47;
        in_stack_000000c0 = (long *)lVar22;
        FUN_100e9c5b4(&stack0x000004e0,&stack0x000000c0);
        FUN_100f3f484(&stack0x000000c0,s_remote_app_server_at_____disconn_108ad0fe5,&stack0x00000520
                     );
        uVar7 = uStack00000000000000d0;
        uVar47 = uStack00000000000000c8;
        lVar22 = (long)in_stack_000000c0;
        uVar18 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
        uVar38 = CONCAT17(uStack00000000000000d7,uStack00000000000000d0);
        func_0x000100025ae8(&stack0x000000c0,&stack0x00000500);
        lVar17 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                           (unaff_x19 + 0x1a8,&stack0x00000520);
        if (lVar17 != 0) {
          FUN_100de21d4(&stack0x000004f8);
        }
        uStack00000000000000cf = (undefined1)uVar47;
        uStack00000000000000c8 = (uint7)((ulong)lVar22 >> 8);
        uStack00000000000000d7 = (undefined1)uVar7;
        uStack00000000000000d8 = (uint7)((ulong)uVar38 >> 8);
        in_stack_000000c0 = (long *)CONCAT17((char)lVar22,0x44);
        uStack00000000000000d0 = (uint7)(CONCAT35((int3)((ulong)uVar18 >> 0x28),(int5)uVar47) >> 8);
        if ((*(ulong *)(unaff_x19 + 0x1e8) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x1f0));
        }
        *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
        *(undefined1 *)(unaff_x19 + 0x1e0) = 6;
        *(ulong *)(unaff_x19 + 0x1f8) = CONCAT71(uStack00000000000000d8,uStack00000000000000d7);
        *(ulong *)(unaff_x19 + 0x1f0) = CONCAT71(uStack00000000000000d0,uStack00000000000000cf);
        *(ulong *)(unaff_x19 + 0x1e9) = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
        *(long **)(unaff_x19 + 0x1e1) = in_stack_000000c0;
        if (in_stack_000004e0 != (long *)0x0) {
          _free(in_stack_000004e8);
        }
        if (sStack0000000000000190 != 0x12) {
          (*(code *)in_stack_00000170[4])
                    (&stack0x00000188,CONCAT17(uStack000000000000017f,uStack0000000000000178),
                     CONCAT17(uStack0000000000000187,uStack0000000000000180));
        }
      }
      else if (lVar22 == 6) {
        in_stack_00000170 = in_stack_00000088;
        FUN_100f3f484(&stack0x000000c0,s_remote_app_server_at_____transpo_108ad1010,&stack0x00000520
                     );
        uVar7 = uStack00000000000000d0;
        uVar47 = uStack00000000000000c8;
        plVar35 = in_stack_000000c0;
        uVar18 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
        uVar38 = CONCAT17(uStack00000000000000d7,uStack00000000000000d0);
        func_0x000100025ae8(&stack0x000000c0,&stack0x00000500);
        lVar22 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                           (unaff_x19 + 0x1a8,&stack0x00000520);
        if (lVar22 != 0) {
          FUN_100de21d4(&stack0x000004e0);
        }
        uStack00000000000000cf = (undefined1)uVar47;
        uStack00000000000000c8 = (uint7)((ulong)plVar35 >> 8);
        uStack00000000000000d7 = (undefined1)uVar7;
        uStack00000000000000d8 = (uint7)((ulong)uVar38 >> 8);
        in_stack_000000c0 = (long *)CONCAT17((char)plVar35,0x44);
        uStack00000000000000d0 = (uint7)(CONCAT35((int3)((ulong)uVar18 >> 0x28),(int5)uVar47) >> 8);
        if ((*(ulong *)(unaff_x19 + 0x1e8) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x1f0));
        }
        *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
        *(undefined1 *)(unaff_x19 + 0x1e0) = 0x15;
        *(ulong *)(unaff_x19 + 0x1f8) = CONCAT71(uStack00000000000000d8,uStack00000000000000d7);
        *(ulong *)(unaff_x19 + 0x1f0) = CONCAT71(uStack00000000000000d0,uStack00000000000000cf);
        *(ulong *)(unaff_x19 + 0x1e9) = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
        *(long **)(unaff_x19 + 0x1e1) = in_stack_000000c0;
        FUN_100de8b24(&stack0x00000170);
      }
      else {
        in_stack_00000170 = (long *)(unaff_x19 + 0x188);
        uStack0000000000000178 = 0x10112965c;
        uStack000000000000017f = 0;
        uStack0000000000000180 = uVar8;
        uStack0000000000000187 = uVar9;
        uStack0000000000000188 = uVar10;
        uStack000000000000018f = uVar11;
        FUN_100f3f484(&stack0x00000520,s_remote_app_server_at_____closed_t_108ad0f54,
                      &stack0x00000170);
        in_stack_000000c0 = (long *)CONCAT17(uVar46,uVar45);
        uStack00000000000000c8 = uVar47;
        uStack00000000000000cf = uVar27;
        uStack00000000000000d0 = uVar5;
        uStack00000000000000d7 = uVar6;
        func_0x000100025ae8(&stack0x00000170,&stack0x000000c0);
        lVar22 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                           (unaff_x19 + 0x1a8,&stack0x00000520);
        if (lVar22 != 0) {
          FUN_100de21d4(&stack0x00000500);
        }
        uStack000000000000017f = (undefined1)uStack00000000000000c8;
        uStack0000000000000178 = (uint7)((ulong)in_stack_000000c0 >> 8);
        uStack0000000000000187 = (undefined1)uStack00000000000000d0;
        uStack0000000000000188 =
             (uint7)(CONCAT17(uStack00000000000000d7,uStack00000000000000d0) >> 8);
        in_stack_00000170 = (long *)CONCAT17((char)in_stack_000000c0,0x44);
        uStack0000000000000180 =
             (uint7)(CONCAT35((int3)(CONCAT17(uStack00000000000000cf,uStack00000000000000c8) >> 0x28
                                    ),(int5)uStack00000000000000c8) >> 8);
        if ((*(ulong *)(unaff_x19 + 0x1e8) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x1f0));
        }
        *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
        *(undefined1 *)(unaff_x19 + 0x1e0) = 0x25;
        *(ulong *)(unaff_x19 + 0x1f8) = CONCAT71(uStack0000000000000188,uStack0000000000000187);
        *(ulong *)(unaff_x19 + 0x1f0) = CONCAT71(uStack0000000000000180,uStack000000000000017f);
        *(ulong *)(unaff_x19 + 0x1e9) = CONCAT17(uStack000000000000017f,uStack0000000000000178);
        *(long **)(unaff_x19 + 0x1e1) = in_stack_00000170;
      }
LAB_100b82228:
      uVar23 = *(ulong *)(unaff_x19 + 0x3a8);
      if (uVar23 != 7) {
        if ((uVar23 != 6) && ((*(byte *)(unaff_x19 + 0x39c) & 1) != 0)) {
          if ((((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) && ((uVar23 & 3) != 0)) &&
             ((uVar23 != 4 || (*(short *)(unaff_x19 + 0x3d0) != 0x12)))) {
            (**(code **)(*(long *)(unaff_x19 + 0x3b0) + 0x20))
                      (unaff_x19 + 0x3c8,*(undefined8 *)(unaff_x19 + 0x3b8),
                       *(undefined8 *)(unaff_x19 + 0x3c0));
          }
          *(undefined1 *)(unaff_x19 + 0x39d) = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x39c) = 0;
      }
      *(undefined2 *)(unaff_x19 + 0x39c) = 0;
      *(undefined1 *)(unaff_x19 + 0x3a5) = 0;
      uStack0000000000000018 = *(long *)(unaff_x19 + 0x1e8);
      goto joined_r0x000100b82270;
    }
    puVar33 = (undefined8 *)(unaff_x19 + 0x200);
    *(undefined8 *)(unaff_x19 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x268);
    *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x19 + 0x260);
    *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x19 + 0x278);
    *(undefined8 *)(unaff_x19 + 0x2f8) = *(undefined8 *)(unaff_x19 + 0x270);
    *(undefined8 *)(unaff_x19 + 0x308) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x228);
    *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x238);
    *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x19 + 0x248);
    *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x19 + 0x240);
    *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 600);
    *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x250);
    *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x288) = *puVar33;
    *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x210);
    if (*(long *)(unaff_x19 + 0x288) == -0x7ffffffffffffffb) {
      *(long *)(unaff_x19 + 1000) = unaff_x19;
      *(undefined2 *)(unaff_x19 + 0x410) = 0x12;
      *(undefined1 *)(unaff_x19 + 0x418) = 0;
      plVar35 = (long *)(unaff_x19 + 0x3a8);
      uStack0000000000000178 = uVar7;
      uStack000000000000017f = uVar28;
      func_0x000100a4c754(&stack0x00000520,plVar35);
      if (CONCAT17(uVar46,uVar45) == 0x16) {
        uVar18 = 1;
        uVar27 = 4;
        goto LAB_100b84754;
      }
      in_stack_00000170 = (long *)CONCAT17(uVar46,uVar45);
      if (*(char *)(unaff_x19 + 0x418) == '\0') {
        uStack0000000000000178 = uVar47;
        uStack000000000000017f = uVar27;
        uStack0000000000000180 = uVar5;
        uStack0000000000000187 = uVar6;
        uStack0000000000000188 = in_stack_00000538;
        uStack000000000000018f = in_stack_0000053f;
        if (*(short *)(unaff_x19 + 0x410) != 0x12) {
          lVar22 = 0x58;
          lVar42 = 0x50;
          lVar17 = 0x60;
          lVar24 = 0x3f0;
LAB_100b83314:
          uStack0000000000000178 = uVar47;
          uStack000000000000017f = uVar27;
          uStack0000000000000180 = uVar5;
          uStack0000000000000187 = uVar6;
          uStack0000000000000188 = in_stack_00000538;
          uStack000000000000018f = in_stack_0000053f;
          (**(code **)(*(long *)(unaff_x19 + lVar24) + 0x20))
                    ((long)plVar35 + lVar17,*(undefined8 *)((long)plVar35 + lVar42),
                     *(undefined8 *)((long)plVar35 + lVar22));
        }
      }
      else {
        uStack0000000000000178 = uVar47;
        uStack000000000000017f = uVar27;
        uStack0000000000000180 = uVar5;
        uStack0000000000000187 = uVar6;
        uStack0000000000000188 = in_stack_00000538;
        uStack000000000000018f = in_stack_0000053f;
        if ((*(char *)(unaff_x19 + 0x418) == '\x03') && (*plVar35 != 6)) {
          lVar22 = 0x18;
          lVar42 = 0x10;
          lVar17 = 0x20;
          lVar24 = 0x3b0;
          if ((*plVar35 != 4) || (*(short *)(unaff_x19 + 0x3d0) != 0x12)) goto LAB_100b83314;
        }
      }
      if (in_stack_00000170 != (long *)0x15) {
        FUN_100de8b24(&stack0x00000170);
      }
      *(undefined1 *)(unaff_x19 + 0x3a5) = 0;
      uStack0000000000000018 = *(long *)(unaff_x19 + 0x1e8);
      goto joined_r0x000100b82270;
    }
    *(undefined8 *)(unaff_x19 + 0x378) = *(undefined8 *)(unaff_x19 + 0x268);
    *(undefined8 *)(unaff_x19 + 0x370) = *(undefined8 *)(unaff_x19 + 0x260);
    *(undefined8 *)(unaff_x19 + 0x388) = *(undefined8 *)(unaff_x19 + 0x278);
    *(undefined8 *)(unaff_x19 + 0x380) = *(undefined8 *)(unaff_x19 + 0x270);
    *(undefined8 *)(unaff_x19 + 0x390) = *(undefined8 *)(unaff_x19 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x228);
    *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x19 + 0x348) = *(undefined8 *)(unaff_x19 + 0x238);
    *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x248);
    *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x240);
    *(undefined8 *)(unaff_x19 + 0x368) = *(undefined8 *)(unaff_x19 + 600);
    *(undefined8 *)(unaff_x19 + 0x360) = *(undefined8 *)(unaff_x19 + 0x250);
    *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x310) = *puVar33;
    *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x210);
    uVar23 = *(ulong *)(unaff_x19 + 0x310) ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)(unaff_x19 + 0x310)) {
      uVar23 = 3;
    }
    if (1 < (long)uVar23) {
      if (uVar23 == 2) {
        uVar47 = (uint7)in_stack_00000088;
        uVar27 = (undefined1)((ulong)in_stack_00000088 >> 0x38);
        uVar45 = SUB87(in_stack_00000080,0);
        uVar46 = (undefined1)((ulong)in_stack_00000080 >> 0x38);
        in_stack_00000560 = *(long **)(unaff_x19 + 0x248);
        in_stack_00000558 = *(long **)(unaff_x19 + 0x240);
        in_stack_00000570 = *(long **)(unaff_x19 + 600);
        in_stack_00000568 = *(long **)(unaff_x19 + 0x250);
        in_stack_00000578 = *(long **)(unaff_x19 + 0x260);
        in_stack_00000540 = *(long **)(unaff_x19 + 0x228);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x220);
        in_stack_00000550 = *(long **)(unaff_x19 + 0x238);
        in_stack_00000548 = *(long **)(unaff_x19 + 0x230);
        in_stack_00000538 = (uint7)uVar18;
        in_stack_0000053f = (undefined1)((ulong)uVar18 >> 0x38);
        *(undefined1 *)(unaff_x19 + 0x3a1) = 1;
        *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x378);
        in_stack_00000170 = in_stack_00000080;
        *(undefined8 *)(unaff_x19 + 0x3b0) = 0x8000000000000001;
        *(long **)(unaff_x19 + 0x3e0) = in_stack_00000548;
        *(long **)(unaff_x19 + 0x3d8) = in_stack_00000540;
        *(long **)(unaff_x19 + 0x3f0) = in_stack_00000558;
        *(long **)(unaff_x19 + 1000) = in_stack_00000550;
        *(long **)(unaff_x19 + 0x400) = in_stack_00000568;
        *(long **)(unaff_x19 + 0x3f8) = in_stack_00000560;
        *(long **)(unaff_x19 + 0x410) = in_stack_00000578;
        *(long **)(unaff_x19 + 0x408) = in_stack_00000570;
        *(long **)(unaff_x19 + 0x3c0) = in_stack_00000088;
        *(long **)(unaff_x19 + 0x3b8) = in_stack_00000080;
        *(undefined8 *)(unaff_x19 + 0x3d0) = uVar18;
        *(long **)(unaff_x19 + 0x3c8) = in_stack_00000090;
        *(long *)(unaff_x19 + 0x458) = unaff_x19;
        *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 400);
        *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x198);
        *(undefined1 *)(unaff_x19 + 0x568) = 0;
        lVar22 = unaff_x19 + 0x3b0;
        uStack0000000000000187 = uStack000000000000017f;
        uStack0000000000000180 = uStack0000000000000178;
        uStack0000000000000178 = uVar47;
        uStack000000000000017f = uVar27;
        uStack0000000000000188 = in_stack_00000538;
        uStack000000000000018f = in_stack_0000053f;
        _sStack0000000000000190 = in_stack_00000540;
        in_stack_00000198 = in_stack_00000548;
        in_stack_000001a0 = in_stack_00000550;
        in_stack_000001a8 = in_stack_00000558;
        in_stack_000001b0 = in_stack_00000560;
        in_stack_000001b8 = in_stack_00000568;
        in_stack_000001c0 = in_stack_00000570;
        in_stack_000001c8 = in_stack_00000578;
        auVar44 = func_0x000100b8e2a4(lVar22);
        if ((auVar44._0_8_ & 1) != 0) {
          uVar18 = 1;
          uVar27 = 7;
          goto LAB_100b84754;
        }
        if (*(char *)(unaff_x19 + 0x568) == '\x03') {
          if ((*(long *)(unaff_x19 + 0x528) != 6) &&
             ((*(long *)(unaff_x19 + 0x528) != 4 || (*(short *)(unaff_x19 + 0x550) != 0x12)))) {
            (**(code **)(*(long *)(unaff_x19 + 0x530) + 0x20))
                      (unaff_x19 + 0x548,*(undefined8 *)(unaff_x19 + 0x538),
                       *(undefined8 *)(unaff_x19 + 0x540));
          }
          *(undefined1 *)(unaff_x19 + 0x569) = 0;
          lVar22 = unaff_x19 + 0x470;
LAB_100b82de0:
          FUN_100e3d46c(lVar22);
        }
        else if (*(char *)(unaff_x19 + 0x568) == '\0') goto LAB_100b82de0;
        *(undefined1 *)(unaff_x19 + 0x3a1) = 0;
        auVar44 = FUN_100fd601c(*(undefined8 *)(unaff_x19 + 0x3a8),auVar44._8_8_);
        uVar23 = auVar44._8_8_;
        if ((auVar44._0_8_ != 0) && ((uVar23 & 3) == 1)) {
          uVar18 = *(undefined8 *)(uVar23 - 1);
          puVar33 = *(undefined8 **)(uVar23 + 7);
          pcVar12 = (code *)*puVar33;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(uVar18);
          }
          if (puVar33[1] != 0) {
            _free(uVar18);
          }
          _free((undefined8 *)(uVar23 - 1));
        }
        *(undefined1 *)(unaff_x19 + 0x3a1) = 0;
        plVar35 = in_stack_00000090;
      }
      else {
        if (uVar23 != 3) {
          *(undefined1 *)(unaff_x19 + 0x39f) = 1;
          *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x318);
          *(long *)(unaff_x19 + 0x3f0) = unaff_x19;
          *(undefined2 *)(unaff_x19 + 0x418) = 0x12;
          *(undefined1 *)(unaff_x19 + 0x420) = 0;
          plVar35 = (long *)(unaff_x19 + 0x3b0);
          uStack0000000000000178 = uVar7;
          uStack000000000000017f = uVar28;
          func_0x000100a4c754(&stack0x00000520,plVar35);
          plVar34 = (long *)CONCAT17(uVar46,uVar45);
          if (plVar34 == (long *)0x16) {
            uVar18 = 1;
            uVar27 = 9;
            goto LAB_100b84754;
          }
          if (*(char *)(unaff_x19 + 0x420) == '\0') {
            if (*(short *)(unaff_x19 + 0x418) != 0x12) {
              lVar22 = 0x58;
              lVar42 = 0x50;
              lVar17 = 0x60;
              lVar24 = 0x3f8;
LAB_100b84344:
              (**(code **)(*(long *)(unaff_x19 + lVar24) + 0x20))
                        ((long)plVar35 + lVar17,*(undefined8 *)((long)plVar35 + lVar42),
                         *(undefined8 *)((long)plVar35 + lVar22));
            }
          }
          else if ((*(char *)(unaff_x19 + 0x420) == '\x03') && (*plVar35 != 6)) {
            lVar22 = 0x18;
            lVar42 = 0x10;
            lVar17 = 0x20;
            lVar24 = 0x3b8;
            if ((*plVar35 != 4) || (*(short *)(unaff_x19 + 0x3d8) != 0x12)) goto LAB_100b84344;
          }
          if (plVar34 == (long *)0x15) {
            uVar18 = 0;
          }
          else {
            puVar3 = (undefined *)0x9;
            if ((long *)0x8 < plVar34) {
              puVar3 = (undefined *)((long)plVar34 + -9);
            }
            in_stack_00000170 = plVar34;
            if (puVar3 < (undefined *)0x2) {
LAB_100b84394:
              uVar18 = 0;
              uStack0000000000000178 = uVar47;
              uStack000000000000017f = uVar27;
              uStack0000000000000180 = uVar5;
              uStack0000000000000187 = uVar6;
              uStack0000000000000188 = in_stack_00000538;
              uStack000000000000018f = in_stack_0000053f;
            }
            else {
              if (puVar3 == (undefined *)0x2) {
                if (((ulong)uVar47 & 3) < 2) {
                  lVar22 = 0x10;
                  if ((uVar47 & 3) != 0) {
                    lVar22 = 0xf;
                  }
                  bVar21 = *(byte *)(CONCAT17(uVar27,uVar47) + lVar22);
                  if ((bVar21 < 0xc) && ((1 << (ulong)(bVar21 & 0x1f) & 0x888U) != 0))
                  goto LAB_100b84394;
                }
                else {
                  uVar15 = (uint)((ulong)CONCAT17(uVar27,uVar47) >> 0x20);
                  if (((ulong)uVar47 & 3) == 2) {
                    if ((uVar15 < 0x3a) &&
                       ((1L << (((ulong)uVar47 & 0x3f00000000) >> 0x20) & 0x240000100000000U) != 0))
                    goto LAB_100b84394;
                  }
                  else if ((0x1d < uVar15 - 0xc) &&
                          (uVar18 = 0, uStack0000000000000178 = uVar47,
                          uStack000000000000017f = uVar27, uStack0000000000000180 = uVar5,
                          uStack0000000000000187 = uVar6, uStack0000000000000188 = in_stack_00000538
                          , uStack000000000000018f = in_stack_0000053f,
                          (1 << (ulong)(uVar15 & 0x1f) & 0x777U) == 0)) goto LAB_100b844a8;
                }
              }
              uStack0000000000000178 = uVar47;
              uStack000000000000017f = uVar27;
              uStack0000000000000180 = uVar5;
              uStack0000000000000187 = uVar6;
              uStack0000000000000188 = in_stack_00000538;
              uStack000000000000018f = in_stack_0000053f;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x000000c0,s__failed_to_close_websocket_app_s_108ad103f,
                         &stack0x00000520);
              plVar35 = in_stack_000000c0;
              uVar18 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
              uVar38 = CONCAT17(uStack00000000000000d7,uStack00000000000000d0);
              puVar33 = (undefined8 *)_malloc(0x18);
              if (puVar33 == (undefined8 *)0x0) {
                func_0x0001087c906c(8,0x18);
                goto LAB_100b84f94;
              }
              *puVar33 = plVar35;
              puVar33[1] = uVar18;
              puVar33[2] = uVar38;
              uVar18 = func_0x000106029c30(0x28,puVar33,&UNK_10b209118);
            }
LAB_100b844a8:
            FUN_100de8b24(&stack0x00000170);
          }
          *(undefined1 *)(unaff_x19 + 0x39f) = 0;
          auVar44 = FUN_100fd601c(*(undefined8 *)(unaff_x19 + 0x3a8),uVar18);
          uVar23 = auVar44._8_8_;
          if ((auVar44._0_8_ != 0) && ((uVar23 & 3) == 1)) {
            uVar18 = *(undefined8 *)(uVar23 - 1);
            puVar33 = *(undefined8 **)(uVar23 + 7);
            pcVar12 = (code *)*puVar33;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar18);
            }
            if (puVar33[1] != 0) {
              _free(uVar18);
            }
            _free((undefined8 *)(uVar23 - 1));
          }
          *(undefined1 *)(unaff_x19 + 0x39f) = 0;
          *(undefined1 *)(unaff_x19 + 0x3a5) = 0;
          uStack0000000000000018 = *(long *)(unaff_x19 + 0x1e8);
          goto joined_r0x000100b82270;
        }
        in_stack_00000568 = *(long **)(unaff_x19 + 0x248);
        in_stack_00000560 = *(long **)(unaff_x19 + 0x240);
        in_stack_00000578 = *(long **)(unaff_x19 + 600);
        in_stack_00000570 = *(long **)(unaff_x19 + 0x250);
        in_stack_00000580 = *(undefined8 *)(unaff_x19 + 0x260);
        uVar18 = *(undefined8 *)(unaff_x19 + 0x208);
        in_stack_00000170 = (long *)*puVar33;
        uVar38 = *(undefined8 *)(unaff_x19 + 0x218);
        plVar35 = *(long **)(unaff_x19 + 0x210);
        uVar47 = (uint7)uVar18;
        uVar27 = (undefined1)((ulong)uVar18 >> 0x38);
        uVar45 = SUB87(in_stack_00000170,0);
        uVar46 = (undefined1)((ulong)in_stack_00000170 >> 0x38);
        in_stack_00000538 = (uint7)uVar38;
        in_stack_0000053f = (undefined1)((ulong)uVar38 >> 0x38);
        in_stack_00000548 = *(long **)(unaff_x19 + 0x228);
        in_stack_00000540 = *(long **)(unaff_x19 + 0x220);
        in_stack_00000558 = *(long **)(unaff_x19 + 0x238);
        in_stack_00000550 = *(long **)(unaff_x19 + 0x230);
        *(undefined1 *)(unaff_x19 + 0x3a0) = 1;
        *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x390);
        in_stack_000001d8 = in_stack_00000058;
        in_stack_000001e8 = in_stack_00000068;
        in_stack_000001e0 = in_stack_00000060;
        uStack0000000000000180 = (uint7)plVar35;
        uStack0000000000000187 = (undefined1)((ulong)plVar35 >> 0x38);
        *(undefined8 *)(unaff_x19 + 0x3b0) = 0x8000000000000002;
        *(long **)(unaff_x19 + 0x400) = in_stack_00000568;
        *(long **)(unaff_x19 + 0x3f8) = in_stack_00000560;
        *(long **)(unaff_x19 + 0x410) = in_stack_00000578;
        *(long **)(unaff_x19 + 0x408) = in_stack_00000570;
        *(ulong *)(unaff_x19 + 0x420) = in_stack_00000058;
        *(undefined8 *)(unaff_x19 + 0x418) = in_stack_00000580;
        *(long *)(unaff_x19 + 0x430) = in_stack_00000068;
        *(long *)(unaff_x19 + 0x428) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x3c0) = uVar18;
        *(long **)(unaff_x19 + 0x3b8) = in_stack_00000170;
        *(undefined8 *)(unaff_x19 + 0x3d0) = uVar38;
        *(long **)(unaff_x19 + 0x3c8) = plVar35;
        *(long **)(unaff_x19 + 0x3e0) = in_stack_00000548;
        *(long **)(unaff_x19 + 0x3d8) = in_stack_00000540;
        *(long **)(unaff_x19 + 0x3f0) = in_stack_00000558;
        *(long **)(unaff_x19 + 1000) = in_stack_00000550;
        *(long *)(unaff_x19 + 0x458) = unaff_x19;
        *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 400);
        *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x198);
        *(undefined1 *)(unaff_x19 + 0x568) = 0;
        lVar22 = unaff_x19 + 0x3b0;
        uStack0000000000000178 = uVar47;
        uStack000000000000017f = uVar27;
        uStack0000000000000188 = in_stack_00000538;
        uStack000000000000018f = in_stack_0000053f;
        _sStack0000000000000190 = in_stack_00000540;
        in_stack_00000198 = in_stack_00000548;
        in_stack_000001a0 = in_stack_00000550;
        in_stack_000001a8 = in_stack_00000558;
        in_stack_000001b0 = in_stack_00000560;
        in_stack_000001b8 = in_stack_00000568;
        in_stack_000001c0 = in_stack_00000570;
        in_stack_000001c8 = in_stack_00000578;
        in_stack_000001d0 = in_stack_00000580;
        auVar44 = func_0x000100b8e2a4(lVar22);
        if ((auVar44._0_8_ & 1) != 0) {
          uVar18 = 1;
          uVar27 = 8;
          goto LAB_100b84754;
        }
        if (*(char *)(unaff_x19 + 0x568) == '\x03') {
          if ((*(long *)(unaff_x19 + 0x528) != 6) &&
             ((*(long *)(unaff_x19 + 0x528) != 4 || (*(short *)(unaff_x19 + 0x550) != 0x12)))) {
            (**(code **)(*(long *)(unaff_x19 + 0x530) + 0x20))
                      (unaff_x19 + 0x548,*(undefined8 *)(unaff_x19 + 0x538),
                       *(undefined8 *)(unaff_x19 + 0x540));
          }
          *(undefined1 *)(unaff_x19 + 0x569) = 0;
          lVar22 = unaff_x19 + 0x470;
LAB_100b82a64:
          FUN_100e3d46c(lVar22);
        }
        else if (*(char *)(unaff_x19 + 0x568) == '\0') goto LAB_100b82a64;
        *(undefined1 *)(unaff_x19 + 0x3a0) = 0;
        auVar44 = FUN_100fd601c(*(undefined8 *)(unaff_x19 + 0x3a8),auVar44._8_8_);
        uVar23 = auVar44._8_8_;
        if ((auVar44._0_8_ != 0) && ((uVar23 & 3) == 1)) {
          uVar18 = *(undefined8 *)(uVar23 - 1);
          puVar33 = *(undefined8 **)(uVar23 + 7);
          pcVar12 = (code *)*puVar33;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(uVar18);
          }
          if (puVar33[1] != 0) {
            _free(uVar18);
          }
          _free((undefined8 *)(uVar23 - 1));
        }
        *(undefined1 *)(unaff_x19 + 0x3a0) = 0;
        in_stack_00000588 = in_stack_00000058;
        in_stack_00000590 = in_stack_00000060;
        in_stack_00000598 = in_stack_00000068;
      }
      goto LAB_100b82580;
    }
    if (uVar23 != 0) {
      *(undefined1 *)(unaff_x19 + 0x3a2) = 1;
      *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x318);
      uStack0000000000000178 = uVar7;
      uStack000000000000017f = uVar28;
      __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
                (&stack0x00000520);
      in_stack_00000170 = (long *)CONCAT17(uVar46,uVar45);
      *(undefined8 *)(unaff_x19 + 0x3b0) = 0x8000000000000000;
      *(long **)(unaff_x19 + 0x3e0) = in_stack_00000548;
      *(long **)(unaff_x19 + 0x3d8) = in_stack_00000540;
      *(long **)(unaff_x19 + 0x3f0) = in_stack_00000558;
      *(long **)(unaff_x19 + 1000) = in_stack_00000550;
      *(long **)(unaff_x19 + 0x400) = in_stack_00000568;
      *(long **)(unaff_x19 + 0x3f8) = in_stack_00000560;
      *(long **)(unaff_x19 + 0x410) = in_stack_00000578;
      *(long **)(unaff_x19 + 0x408) = in_stack_00000570;
      *(ulong *)(unaff_x19 + 0x3c0) = CONCAT17(uVar27,uVar47);
      *(long **)(unaff_x19 + 0x3b8) = in_stack_00000170;
      *(ulong *)(unaff_x19 + 0x3d0) = CONCAT17(in_stack_0000053f,in_stack_00000538);
      *(long **)(unaff_x19 + 0x3c8) = plVar35;
      *(long *)(unaff_x19 + 0x458) = unaff_x19;
      *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 400);
      *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x198);
      *(undefined1 *)(unaff_x19 + 0x568) = 0;
      lVar22 = unaff_x19 + 0x3b0;
      uStack0000000000000178 = uVar47;
      uStack000000000000017f = uVar27;
      uStack0000000000000180 = uVar5;
      uStack0000000000000187 = uVar6;
      uStack0000000000000188 = in_stack_00000538;
      uStack000000000000018f = in_stack_0000053f;
      _sStack0000000000000190 = in_stack_00000540;
      in_stack_00000198 = in_stack_00000548;
      in_stack_000001a0 = in_stack_00000550;
      in_stack_000001a8 = in_stack_00000558;
      in_stack_000001b0 = in_stack_00000560;
      in_stack_000001b8 = in_stack_00000568;
      in_stack_000001c0 = in_stack_00000570;
      in_stack_000001c8 = in_stack_00000578;
      auVar44 = func_0x000100b8e2a4(lVar22);
      if ((auVar44._0_8_ & 1) != 0) {
        uVar18 = 1;
        uVar27 = 6;
        goto LAB_100b84754;
      }
      if (*(char *)(unaff_x19 + 0x568) == '\x03') {
        if ((*(long *)(unaff_x19 + 0x528) != 6) &&
           ((*(long *)(unaff_x19 + 0x528) != 4 || (*(short *)(unaff_x19 + 0x550) != 0x12)))) {
          (**(code **)(*(long *)(unaff_x19 + 0x530) + 0x20))
                    (unaff_x19 + 0x548,*(undefined8 *)(unaff_x19 + 0x538),
                     *(undefined8 *)(unaff_x19 + 0x540));
        }
        *(undefined1 *)(unaff_x19 + 0x569) = 0;
        lVar22 = unaff_x19 + 0x470;
LAB_100b82c88:
        FUN_100e3d46c(lVar22);
      }
      else if (*(char *)(unaff_x19 + 0x568) == '\0') goto LAB_100b82c88;
      *(undefined1 *)(unaff_x19 + 0x3a2) = 0;
      auVar44 = FUN_100fd601c(*(undefined8 *)(unaff_x19 + 0x3a8),auVar44._8_8_);
      uVar23 = auVar44._8_8_;
      if ((auVar44._0_8_ != 0) && ((uVar23 & 3) == 1)) {
        uVar18 = *(undefined8 *)(uVar23 - 1);
        puVar33 = *(undefined8 **)(uVar23 + 7);
        pcVar12 = (code *)*puVar33;
        if (pcVar12 != (code *)0x0) {
          (*pcVar12)(uVar18);
        }
        if (puVar33[1] != 0) {
          _free(uVar18);
        }
        _free((undefined8 *)(uVar23 - 1));
      }
      *(undefined1 *)(unaff_x19 + 0x3a2) = 0;
      goto LAB_100b82580;
    }
    *(undefined1 *)(unaff_x19 + 0x3a4) = 1;
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x318);
    *(undefined1 *)(unaff_x19 + 0x3a3) = 1;
    unaff_x22 = *(undefined8 *)(unaff_x19 + 800);
    uStack0000000000000178 = uVar7;
    uStack000000000000017f = uVar28;
    __ZN23codex_app_server_client6remote30request_id_from_client_request17hed8a2a4667abff7cE
              (unaff_x21);
    if (*(long *)(unaff_x19 + 0x1c8) == 0) {
      lVar22 = *unaff_x21;
    }
    else {
      uVar19 = FUN_100e8e2bc(*(undefined8 *)(unaff_x19 + 0x1d0),*(undefined8 *)(unaff_x19 + 0x1d8),
                             unaff_x21);
      lVar17 = *(long *)(unaff_x19 + 0x1b0);
      uVar23 = *(ulong *)(unaff_x19 + 0x1b8);
      bVar21 = (byte)(uVar19 >> 0x39);
      lVar22 = *(long *)(unaff_x19 + 0x3b0);
      lVar42 = *(long *)(unaff_x19 + 0x3b8);
      if (lVar22 == -0x8000000000000000) {
        lVar24 = 0;
        uVar19 = uVar19 & uVar23;
        uVar18 = *(undefined8 *)(lVar17 + uVar19);
        uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                          CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                   CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                            CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                     CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                               bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
            uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            lVar31 = lVar17 + (uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                              uVar23) * -0x20;
            if ((*(long *)(lVar31 + -0x20) == -0x8000000000000000) &&
               (*(long *)(lVar31 + -0x18) == lVar42)) goto LAB_100b8306c;
          }
          bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                      ),1);
          if ((bVar43 & 1) != 0) break;
          lVar24 = lVar24 + 8;
          uVar19 = uVar19 + lVar24 & uVar23;
          uVar18 = *(undefined8 *)(lVar17 + uVar19);
          uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                            CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                     CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                              CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                       CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                                 bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                   0x8080808080808080;
        }
      }
      else {
        lVar24 = 0;
        lVar31 = *(long *)(unaff_x19 + 0x3c0);
        uVar19 = uVar19 & uVar23;
        uVar18 = *(undefined8 *)(lVar17 + uVar19);
        uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                          CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                   CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                            CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                     CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                               bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                 0x8080808080808080;
        while( true ) {
          for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
            uVar29 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            lVar25 = lVar17 + (uVar19 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                              uVar23) * -0x20;
            if (((*(long *)(lVar25 + -0x20) != -0x8000000000000000) &&
                (lVar31 == *(long *)(lVar25 + -0x10))) &&
               (iVar14 = _memcmp(lVar42,*(undefined8 *)(lVar25 + -0x18),lVar31), iVar14 == 0))
            goto LAB_100b8306c;
          }
          bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar18 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar18 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar18 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar18 >> 8) ==
                                                                     -1),-((char)uVar18 == -1)))))))
                                      ),1);
          if ((bVar43 & 1) != 0) break;
          lVar24 = lVar24 + 8;
          uVar19 = uVar19 + lVar24 & uVar23;
          uVar18 = *(undefined8 *)(lVar17 + uVar19);
          uVar16 = CONCAT17(-((byte)((ulong)uVar18 >> 0x38) == bVar21),
                            CONCAT16(-((byte)((ulong)uVar18 >> 0x30) == bVar21),
                                     CONCAT15(-((byte)((ulong)uVar18 >> 0x28) == bVar21),
                                              CONCAT14(-((byte)((ulong)uVar18 >> 0x20) == bVar21),
                                                       CONCAT13(-((byte)((ulong)uVar18 >> 0x18) ==
                                                                 bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar18 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar18 >> 8) == bVar21),
                                                           -((byte)uVar18 == bVar21)))))))) &
                   0x8080808080808080;
        }
      }
    }
    if (lVar22 == -0x8000000000000000) {
      uVar47 = (uint7)*(undefined8 *)(unaff_x19 + 0x3b8);
      uVar27 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x3b8) >> 0x38);
      uVar45 = (undefined7)*unaff_x21;
      uVar46 = (undefined1)((ulong)*unaff_x21 >> 0x38);
      uVar48 = (undefined4)*(undefined8 *)(unaff_x19 + 0x3c0);
      uVar49 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x3c0) >> 0x20);
    }
    else {
      uVar18 = *(undefined8 *)(unaff_x19 + 0x3b8);
      lVar17 = *(long *)(unaff_x19 + 0x3c0);
      lVar22 = 1;
      if ((lVar17 != 0) && (lVar22 = _malloc(lVar17), lVar22 == 0)) {
        func_0x0001087c9084(1,lVar17);
        goto LAB_100b84f94;
      }
      _memcpy(lVar22,uVar18,lVar17);
      uVar45 = (undefined7)lVar17;
      uVar46 = (undefined1)((ulong)lVar17 >> 0x38);
      uVar47 = (uint7)lVar22;
      uVar27 = (undefined1)((ulong)lVar22 >> 0x38);
      uVar48 = (undefined4)lVar17;
      uVar49 = (undefined4)((ulong)lVar17 >> 0x20);
    }
    plVar35 = (long *)CONCAT44(uVar49,uVar48);
    *(undefined1 *)(unaff_x19 + 0x3a3) = 0;
    auVar44 = FUN_100c30480(unaff_x19 + 0x1b0,&stack0x00000520,unaff_x22);
    plVar34 = auVar44._8_8_;
    in_stack_00000170 = auVar44._0_8_;
    uStack0000000000000178 = auVar44._8_7_;
    uStack000000000000017f = auVar44[0xf];
    if ((in_stack_00000170 != (long *)0x0) && (plVar34 != (long *)0x0)) {
      uVar23 = plVar34[6];
      do {
        uVar19 = uVar23;
        if (((uint)uVar19 >> 2 & 1) != 0) goto LAB_100b83430;
        uVar23 = plVar34[6];
      } while (uVar23 != uVar19);
      plVar34[6] = uVar19 | 2;
LAB_100b83430:
      if ((uVar19 & 5) == 1) {
        (**(code **)(plVar34[4] + 0x10))(plVar34[5]);
      }
      lVar22 = *plVar34;
      *plVar34 = lVar22 + -1;
      LORelease();
      if (lVar22 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105203f8c(&stack0x00000178);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x3a4) = 0;
    _memcpy(&stack0x00000520,*(undefined8 *)(unaff_x19 + 0x3a8),0x1c0);
    __ZN23codex_app_server_client6remote35jsonrpc_request_from_client_request17ha39cc78d0fbdff88E
              (&stack0x00000170,&stack0x00000520);
    in_stack_00000108 = in_stack_000001b8;
    in_stack_00000100 = in_stack_000001b0;
    in_stack_00000118 = in_stack_000001c8;
    in_stack_00000110 = in_stack_000001c0;
    in_stack_00000128 = in_stack_000001d8;
    in_stack_00000120 = in_stack_000001d0;
    in_stack_00000138 = in_stack_000001e8;
    in_stack_00000130 = in_stack_000001e0;
    uStack00000000000000c8 = uStack0000000000000178;
    uStack00000000000000cf = uStack000000000000017f;
    in_stack_000000c0 = in_stack_00000170;
    uStack00000000000000d8 = uStack0000000000000188;
    uStack00000000000000df = uStack000000000000018f;
    uStack00000000000000d0 = uStack0000000000000180;
    uStack00000000000000d7 = uStack0000000000000187;
    in_stack_000000e8 = in_stack_00000198;
    in_stack_000000e0 = _sStack0000000000000190;
    in_stack_000000f8 = in_stack_000001a8;
    in_stack_000000f0 = in_stack_000001a0;
    *(undefined8 *)(unaff_x19 + 0x450) = in_stack_000001f8;
    *(undefined8 *)(unaff_x19 + 0x448) = in_stack_000001f0;
    *(undefined8 *)(unaff_x19 + 0x460) = in_stack_00000208;
    *(undefined8 *)(unaff_x19 + 0x458) = in_stack_00000200;
    *(undefined8 *)(unaff_x19 + 0x468) = in_stack_00000210;
    *(long **)(unaff_x19 + 0x410) = in_stack_000001b8;
    *(long **)(unaff_x19 + 0x408) = in_stack_000001b0;
    *(long **)(unaff_x19 + 0x420) = in_stack_000001c8;
    *(long **)(unaff_x19 + 0x418) = in_stack_000001c0;
    *(ulong *)(unaff_x19 + 0x430) = in_stack_000001d8;
    *(undefined8 *)(unaff_x19 + 0x428) = in_stack_000001d0;
    *(long *)(unaff_x19 + 0x440) = in_stack_000001e8;
    *(long *)(unaff_x19 + 0x438) = in_stack_000001e0;
    *(ulong *)(unaff_x19 + 0x3d0) = CONCAT17(uStack000000000000017f,uStack0000000000000178);
    *(long **)(unaff_x19 + 0x3c8) = in_stack_00000170;
    *(ulong *)(unaff_x19 + 0x3e0) = CONCAT17(uStack000000000000018f,uStack0000000000000188);
    *(ulong *)(unaff_x19 + 0x3d8) = CONCAT17(uStack0000000000000187,uStack0000000000000180);
    *(long **)(unaff_x19 + 0x3f0) = in_stack_00000198;
    *(long **)(unaff_x19 + 1000) = _sStack0000000000000190;
    *(long **)(unaff_x19 + 0x400) = in_stack_000001a8;
    *(long **)(unaff_x19 + 0x3f8) = in_stack_000001a0;
    *(long *)(unaff_x19 + 0x470) = unaff_x19;
    *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 400);
    *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x198);
    *(undefined1 *)(unaff_x19 + 0x580) = 0;
    lVar22 = unaff_x19 + 0x3c8;
    in_stack_00000140 = in_stack_000001f0;
    in_stack_00000148 = in_stack_000001f8;
    in_stack_00000150 = in_stack_00000200;
    in_stack_00000158 = in_stack_00000208;
    in_stack_00000160 = in_stack_00000210;
    auVar44 = func_0x000100b8e2a4(lVar22);
    uVar23 = auVar44._8_8_;
    if ((auVar44._0_8_ & 1) != 0) {
      uVar18 = 1;
      uVar27 = 5;
      goto LAB_100b84754;
    }
    if (*(char *)(unaff_x19 + 0x580) == '\x03') {
      if ((*(long *)(unaff_x19 + 0x540) != 6) &&
         ((*(long *)(unaff_x19 + 0x540) != 4 || (*(short *)(unaff_x19 + 0x568) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x548) + 0x20))
                  (unaff_x19 + 0x560,*(undefined8 *)(unaff_x19 + 0x550),
                   *(undefined8 *)(unaff_x19 + 0x558));
      }
      *(undefined1 *)(unaff_x19 + 0x581) = 0;
      lVar22 = unaff_x19 + 0x488;
LAB_100b8356c:
      FUN_100e3d46c(lVar22);
    }
    else if (*(char *)(unaff_x19 + 0x580) == '\0') goto LAB_100b8356c;
    if (uVar23 != 0) {
      in_stack_00000170 = (long *)0x0;
      uStack0000000000000178 = 1;
      uStack000000000000017f = 0;
      uStack0000000000000180 = 0;
      uStack0000000000000187 = 0;
      iVar14 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                         (&stack0x000004e0,&stack0x00000520);
      plVar35 = in_stack_00000170;
      if (iVar14 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004f8,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_100b84f94;
      }
      uVar18 = CONCAT17(uStack000000000000017f,uStack0000000000000178);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000170,s_remote_app_server_at_____write_f_108ad0efc,&stack0x00000520);
      plVar39 = in_stack_00000170;
      uVar38 = CONCAT17(uStack000000000000017f,uStack0000000000000178);
      lVar17 = CONCAT17(uStack0000000000000187,uStack0000000000000180);
      plVar34 = (long *)(unaff_x19 + 0x3b0);
      uVar16 = FUN_100e8e2bc(*(undefined8 *)(unaff_x19 + 0x1d0),*(undefined8 *)(unaff_x19 + 0x1d8),
                             plVar34);
      lVar22 = *(long *)(unaff_x19 + 0x1b0);
      uVar19 = *(ulong *)(unaff_x19 + 0x1b8);
      bVar21 = (byte)(uVar16 >> 0x39);
      lVar42 = *(long *)(unaff_x19 + 0x3b8);
      if (*(long *)(unaff_x19 + 0x3b0) == -0x8000000000000000) {
        lVar24 = 0;
        uVar16 = uVar16 & uVar19;
        uVar41 = *(undefined8 *)(lVar22 + uVar16);
        uVar29 = CONCAT17(-((byte)((ulong)uVar41 >> 0x38) == bVar21),
                          CONCAT16(-((byte)((ulong)uVar41 >> 0x30) == bVar21),
                                   CONCAT15(-((byte)((ulong)uVar41 >> 0x28) == bVar21),
                                            CONCAT14(-((byte)((ulong)uVar41 >> 0x20) == bVar21),
                                                     CONCAT13(-((byte)((ulong)uVar41 >> 0x18) ==
                                                               bVar21),CONCAT12(-((byte)((ulong)
                                                  uVar41 >> 0x10) == bVar21),
                                                  CONCAT11(-((byte)((ulong)uVar41 >> 8) == bVar21),
                                                           -((byte)uVar41 == bVar21)))))))) &
                 0x8080808080808080;
        goto joined_r0x000100b836b0;
      }
      lVar24 = 0;
      lVar31 = *(long *)(unaff_x19 + 0x3c0);
      uVar16 = uVar16 & uVar19;
      uVar41 = *(undefined8 *)(lVar22 + uVar16);
      uVar29 = CONCAT17(-((byte)((ulong)uVar41 >> 0x38) == bVar21),
                        CONCAT16(-((byte)((ulong)uVar41 >> 0x30) == bVar21),
                                 CONCAT15(-((byte)((ulong)uVar41 >> 0x28) == bVar21),
                                          CONCAT14(-((byte)((ulong)uVar41 >> 0x20) == bVar21),
                                                   CONCAT13(-((byte)((ulong)uVar41 >> 0x18) ==
                                                             bVar21),CONCAT12(-((byte)((ulong)uVar41
                                                                                      >> 0x10) ==
                                                                               bVar21),CONCAT11(-((
                                                  byte)((ulong)uVar41 >> 8) == bVar21),
                                                  -((byte)uVar41 == bVar21)))))))) &
               0x8080808080808080;
      goto joined_r0x000100b83744;
    }
    if ((*(long *)(unaff_x19 + 0x3b0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x3b0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x3b8));
    }
    *(undefined1 *)(unaff_x19 + 0x3a3) = 0;
    uVar18 = *(undefined8 *)(unaff_x19 + 0x3a8);
  } while( true );
LAB_100b84034:
  lVar31 = lVar22 + uVar29 * -0x20;
  lVar25 = (long)(uVar29 * 0x20) >> 5;
  puVar33 = (undefined8 *)(lVar22 + (uVar23 & lVar25 - 8U));
  uVar38 = *puVar33;
  uVar41 = *(undefined8 *)(lVar22 + lVar25);
  uVar23 = CONCAT17(-((char)((ulong)uVar41 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar41 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar41 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar41 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar41 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar41 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar41 >> 8) == -1),-((char)uVar41 == -1))))))));
  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
  uVar28 = 0x80;
  if (((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar38 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar38 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar38 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar38 >> 8) == -1),
                                                           -((char)uVar38 == -1))))))))) >> 3) < 8)
  {
    *(long *)(unaff_x19 + 0x1c0) = *(long *)(unaff_x19 + 0x1c0) + 1;
    uVar28 = 0xff;
  }
  *(undefined1 *)(lVar22 + lVar25) = uVar28;
  *(undefined1 *)(puVar33 + 1) = uVar28;
  *(long *)(unaff_x19 + 0x1c8) = *(long *)(unaff_x19 + 0x1c8) + -1;
  lVar22 = *(long *)(lVar31 + -0x20);
  uVar38 = *(undefined8 *)(lVar31 + -8);
  if (lVar22 == -0x8000000000000000) {
LAB_100b840f0:
    FUN_100fd6328(&stack0x00000170,uVar38,&stack0x00000520);
    FUN_100d98294(&stack0x00000170);
  }
  else {
    if (lVar22 != -0x7fffffffffffffff) {
      if (lVar22 != 0) {
        _free(*(undefined8 *)(lVar31 + -0x18),uVar38);
      }
      goto LAB_100b840f0;
    }
LAB_100b84108:
    if (lVar24 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x00000538);
    }
    if (lVar42 != 0) {
      _free(uVar18);
    }
  }
  in_stack_00000590 = lVar17;
  if ((in_stack_00000588 & 0x7fffffffffffffff) != 0) {
LAB_100b84144:
    _free(lVar17);
    lVar17 = in_stack_00000590;
  }
  goto LAB_100b81f64;
LAB_100b83f24:
  lVar24 = lVar22 + uVar29 * -0x20;
  lVar31 = (long)(uVar29 * 0x20) >> 5;
  puVar33 = (undefined8 *)(lVar22 + (uVar23 & lVar31 - 8U));
  uVar18 = *puVar33;
  uVar38 = *(undefined8 *)(lVar22 + lVar31);
  uVar23 = CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar38 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar38 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar38 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar38 >> 8) == -1),-((char)uVar38 == -1))))))));
  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
  uVar28 = 0x80;
  if (((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar18 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar18 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar18 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar18 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar18 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) == -1),
                                                           -((char)uVar18 == -1))))))))) >> 3) < 8)
  {
    *(long *)(unaff_x19 + 0x1c0) = *(long *)(unaff_x19 + 0x1c0) + 1;
    uVar28 = 0xff;
  }
  *(undefined1 *)(lVar22 + lVar31) = uVar28;
  *(undefined1 *)(puVar33 + 1) = uVar28;
  *(long *)(unaff_x19 + 0x1c8) = *(long *)(unaff_x19 + 0x1c8) + -1;
  lVar22 = *(long *)(lVar24 + -0x20);
  uVar18 = *(undefined8 *)(lVar24 + -8);
  if (lVar22 == -0x8000000000000000) {
LAB_100b83fe4:
    in_stack_00000568 = in_stack_00000118;
    in_stack_00000560 = in_stack_00000110;
    in_stack_00000558 = in_stack_00000108;
    in_stack_00000550 = in_stack_00000100;
    in_stack_00000548 = in_stack_000000f8;
    in_stack_00000540 = in_stack_000000f0;
    plVar35 = in_stack_000000e0;
    uVar27 = uStack00000000000000df;
    uVar47 = uStack00000000000000d8;
    in_stack_00000538 = (uint7)in_stack_000000e8;
    in_stack_0000053f = (undefined1)((ulong)in_stack_000000e8 >> 0x38);
    uVar45 = 0;
    uVar46 = 0x80;
    FUN_100fd6328(&stack0x00000170,uVar18,&stack0x00000520);
    FUN_100d98294(&stack0x00000170);
    bVar36 = false;
  }
  else {
    bVar36 = true;
    if (lVar22 != -0x7fffffffffffffff) {
      if (lVar22 != 0) {
        _free(*(undefined8 *)(lVar24 + -0x18),uVar18);
      }
      goto LAB_100b83fe4;
    }
  }
LAB_100b84264:
  if (((ulong)plVar34 & 0x7fffffffffffffff) != 0) {
    _free(lVar42);
  }
  if (bVar36) {
    FUN_100de6690(&stack0x000000d8);
  }
LAB_100b81f64:
  if (*(long *)(unaff_x19 + 0x3e0) != -0x7ffffffffffffffd) {
    *(undefined1 *)(unaff_x19 + 0x39b) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x39b) = 0;
  (**(code **)(*(long *)(unaff_x19 + 0x550) + 0x20))
            (unaff_x19 + 0x568,*(undefined8 *)(unaff_x19 + 0x558),*(undefined8 *)(unaff_x19 + 0x560)
            );
  lVar22 = *(long *)(unaff_x19 + 0x3a8);
  uVar7 = uStack0000000000000178;
  uVar28 = uStack000000000000017f;
  uVar8 = uStack0000000000000180;
  uVar9 = uStack0000000000000187;
  uVar10 = uStack0000000000000188;
  uVar11 = uStack000000000000018f;
  in_stack_00000590 = lVar17;
LAB_100b81f98:
  uStack000000000000018f = uVar11;
  uStack0000000000000188 = uVar10;
  uStack0000000000000187 = uVar9;
  uStack0000000000000180 = uVar8;
  uStack000000000000017f = uVar28;
  uStack0000000000000178 = uVar7;
  if (lVar22 < 6) {
    if ((lVar22 != 0) && (lVar22 != 4)) goto LAB_100b81fc8;
  }
  else {
    if (lVar22 == 6) goto LAB_100b81fe4;
    if (lVar22 == 7) {
      *(undefined2 *)(unaff_x19 + 0x39c) = 0;
      goto LAB_100b82580;
    }
LAB_100b81fc8:
    (**(code **)(*(long *)(unaff_x19 + 0x3b0) + 0x20))
              (unaff_x19 + 0x3c8,*(undefined8 *)(unaff_x19 + 0x3b8),
               *(undefined8 *)(unaff_x19 + 0x3c0));
  }
  *(undefined1 *)(unaff_x19 + 0x39d) = 0;
LAB_100b81fe4:
  *(undefined1 *)(unaff_x19 + 0x39c) = 0;
  *(undefined2 *)(unaff_x19 + 0x39c) = 0;
  goto LAB_100b82580;
joined_r0x000100b83744:
  if (uVar29 != 0) {
    uVar30 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
    uVar30 = uVar16 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) & uVar19;
    lVar25 = lVar22 + uVar30 * -0x20;
    if (((*(long *)(lVar25 + -0x20) != -0x8000000000000000) && (lVar31 == *(long *)(lVar25 + -0x10))
        ) && (iVar14 = _memcmp(lVar42,*(undefined8 *)(lVar25 + -0x18),lVar31), iVar14 == 0))
    goto LAB_100b837ec;
    uVar29 = uVar29 - 1 & uVar29;
    goto joined_r0x000100b83744;
  }
  bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar41 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar41 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar41 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar41 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar41 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar41 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar41 >> 8) == -1),
                                                           -((char)uVar41 == -1)))))))),1);
  if ((bVar43 & 1) != 0) goto LAB_100b838d0;
  lVar24 = lVar24 + 8;
  uVar16 = uVar16 + lVar24 & uVar19;
  uVar41 = *(undefined8 *)(lVar22 + uVar16);
  uVar29 = CONCAT17(-((byte)((ulong)uVar41 >> 0x38) == bVar21),
                    CONCAT16(-((byte)((ulong)uVar41 >> 0x30) == bVar21),
                             CONCAT15(-((byte)((ulong)uVar41 >> 0x28) == bVar21),
                                      CONCAT14(-((byte)((ulong)uVar41 >> 0x20) == bVar21),
                                               CONCAT13(-((byte)((ulong)uVar41 >> 0x18) == bVar21),
                                                        CONCAT12(-((byte)((ulong)uVar41 >> 0x10) ==
                                                                  bVar21),CONCAT11(-((byte)((ulong)
                                                  uVar41 >> 8) == bVar21),-((byte)uVar41 == bVar21))
                                                  )))))) & 0x8080808080808080;
  goto joined_r0x000100b83744;
LAB_100b838d0:
  bVar36 = true;
  goto LAB_100b838d8;
joined_r0x000100b836b0:
  if (uVar29 != 0) {
    uVar30 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
    uVar30 = uVar16 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) & uVar19;
    lVar31 = lVar22 + uVar30 * -0x20;
    if ((*(long *)(lVar31 + -0x20) == -0x8000000000000000) && (*(long *)(lVar31 + -0x18) == lVar42))
    goto LAB_100b837ec;
    uVar29 = uVar29 - 1 & uVar29;
    goto joined_r0x000100b836b0;
  }
  bVar43 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar41 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar41 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar41 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar41 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar41 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar41 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar41 >> 8) == -1),
                                                           -((char)uVar41 == -1)))))))),1);
  if ((bVar43 & 1) != 0) goto LAB_100b838c8;
  lVar24 = lVar24 + 8;
  uVar16 = uVar16 + lVar24 & uVar19;
  uVar41 = *(undefined8 *)(lVar22 + uVar16);
  uVar29 = CONCAT17(-((byte)((ulong)uVar41 >> 0x38) == bVar21),
                    CONCAT16(-((byte)((ulong)uVar41 >> 0x30) == bVar21),
                             CONCAT15(-((byte)((ulong)uVar41 >> 0x28) == bVar21),
                                      CONCAT14(-((byte)((ulong)uVar41 >> 0x20) == bVar21),
                                               CONCAT13(-((byte)((ulong)uVar41 >> 0x18) == bVar21),
                                                        CONCAT12(-((byte)((ulong)uVar41 >> 0x10) ==
                                                                  bVar21),CONCAT11(-((byte)((ulong)
                                                  uVar41 >> 8) == bVar21),-((byte)uVar41 == bVar21))
                                                  )))))) & 0x8080808080808080;
  goto joined_r0x000100b836b0;
LAB_100b837ec:
  lVar42 = lVar22 + uVar30 * -0x20;
  lVar24 = (long)(uVar30 * 0x20) >> 5;
  puVar33 = (undefined8 *)(lVar22 + (uVar19 & lVar24 - 8U));
  uVar41 = *puVar33;
  uVar40 = *(undefined8 *)(lVar22 + lVar24);
  uVar19 = CONCAT17(-((char)((ulong)uVar40 >> 0x38) == -1),
                    CONCAT16(-((char)((ulong)uVar40 >> 0x30) == -1),
                             CONCAT15(-((char)((ulong)uVar40 >> 0x28) == -1),
                                      CONCAT14(-((char)((ulong)uVar40 >> 0x20) == -1),
                                               CONCAT13(-((char)((ulong)uVar40 >> 0x18) == -1),
                                                        CONCAT12(-((char)((ulong)uVar40 >> 0x10) ==
                                                                  -1),CONCAT11(-((char)((ulong)
                                                  uVar40 >> 8) == -1),-((char)uVar40 == -1))))))));
  uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
  uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  if (((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) +
      ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar41 >> 0x38) == -1),
                               CONCAT16(-((char)((ulong)uVar41 >> 0x30) == -1),
                                        CONCAT15(-((char)((ulong)uVar41 >> 0x28) == -1),
                                                 CONCAT14(-((char)((ulong)uVar41 >> 0x20) == -1),
                                                          CONCAT13(-((char)((ulong)uVar41 >> 0x18)
                                                                    == -1),CONCAT12(-((char)((ulong)
                                                  uVar41 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar41 >> 8) == -1),
                                                           -((char)uVar41 == -1))))))))) >> 3) < 8)
  {
    *(long *)(unaff_x19 + 0x1c0) = *(long *)(unaff_x19 + 0x1c0) + 1;
    uVar27 = 0xff;
  }
  else {
    uVar27 = 0x80;
  }
  *(undefined1 *)(lVar22 + lVar24) = uVar27;
  *(undefined1 *)(puVar33 + 1) = uVar27;
  *(long *)(unaff_x19 + 0x1c8) = *(long *)(unaff_x19 + 0x1c8) + -1;
  lVar22 = *(long *)(lVar42 + -0x20);
  uVar41 = *(undefined8 *)(lVar42 + -8);
  if (lVar22 != -0x8000000000000000) {
    if (lVar22 == -0x7fffffffffffffff) {
LAB_100b838c8:
      bVar36 = true;
      goto LAB_100b838d8;
    }
    if (lVar22 != 0) {
      _free(*(undefined8 *)(lVar42 + -0x18),uVar41);
    }
  }
  FUN_100fd6328(&stack0x00000170,uVar41,&stack0x00000520);
  FUN_100d98294(&stack0x00000170);
  bVar36 = false;
LAB_100b838d8:
  if (lVar17 == 0) {
    lVar22 = 1;
  }
  else {
    lVar22 = _malloc(lVar17);
    if (lVar22 == 0) {
      func_0x0001087c9084(1,lVar17);
      goto LAB_100b84f94;
    }
  }
  _memcpy(lVar22,uVar38,lVar17);
  uVar19 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                     (unaff_x19 + 0x1a8,&stack0x00000520);
  if ((uVar19 & 3) == 1) {
    uVar41 = *(undefined8 *)(uVar19 - 1);
    puVar33 = *(undefined8 **)(uVar19 + 7);
    pcVar12 = (code *)*puVar33;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar41);
    }
    if (puVar33[1] != 0) {
      _free(uVar41);
    }
    _free((undefined8 *)(uVar19 - 1));
    uVar19 = *(ulong *)(unaff_x19 + 0x1e8);
  }
  else {
    uVar19 = *(ulong *)(unaff_x19 + 0x1e8);
  }
  if ((uVar19 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1f0));
  }
  *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0xb;
  *(long **)(unaff_x19 + 0x1e8) = plVar39;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar38;
  *(long *)(unaff_x19 + 0x1f8) = lVar17;
  if (plVar35 != (long *)0x0) {
    _free(uVar18);
  }
  bVar2 = false;
  if ((uVar23 & 3) == 1) {
    bVar2 = bVar36;
  }
  if (bVar2) {
    uVar18 = *(undefined8 *)(uVar23 - 1);
    puVar33 = *(undefined8 **)(uVar23 + 7);
    pcVar12 = (code *)*puVar33;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar18);
    }
    if (puVar33[1] != 0) {
      _free(uVar18);
    }
    _free((undefined8 *)(uVar23 - 1));
    lVar22 = *plVar34;
  }
  else {
    lVar22 = *plVar34;
  }
  if ((lVar22 != -0x8000000000000000) && (lVar22 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x3b8));
  }
  *(undefined1 *)(unaff_x19 + 0x3a3) = 0;
  _free(*(undefined8 *)(unaff_x19 + 0x3a8));
  *(undefined2 *)(unaff_x19 + 0x3a4) = 0;
  uStack0000000000000018 = *(long *)(unaff_x19 + 0x1e8);
joined_r0x000100b82270:
  if (uStack0000000000000018 == -0x8000000000000000) {
    puStack0000000000000028 = (undefined8 *)_malloc(0x2a);
    if (puStack0000000000000028 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x2a);
LAB_100b84f94:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100b84f98);
      (*pcVar12)();
    }
    puStack0000000000000028[1] = 0x65767265732d7070;
    *puStack0000000000000028 = 0x612065746f6d6572;
    puStack0000000000000028[3] = 0x6c656e6e61686320;
    puStack0000000000000028[2] = 0x72656b726f772072;
    *(undefined8 *)((long)puStack0000000000000028 + 0x22) = 0x6465736f6c632073;
    *(undefined8 *)((long)puStack0000000000000028 + 0x1a) = 0x69206c656e6e6168;
    uVar27 = 0xb;
    uStack0000000000000018 = 0x2a;
    lVar22 = 0x2a;
  }
  else {
    uVar27 = *(undefined1 *)(unaff_x19 + 0x1e0);
    puStack0000000000000028 = *(undefined8 **)(unaff_x19 + 0x1f0);
    lVar22 = *(long *)(unaff_x19 + 0x1f8);
  }
  *(undefined1 *)(unaff_x19 + 0x3a6) = 0;
  plVar34 = *(long **)(unaff_x19 + 0x1b0);
  lVar17 = *(long *)(unaff_x19 + 0x1b8);
  plVar39 = *(long **)(unaff_x19 + 0x1c8);
  lVar42 = *plVar34;
  plVar35 = (long *)0x0;
  lStack0000000000000008 = 0;
  if (lVar17 != 0) {
    plVar35 = plVar34 + lVar17 * -4 + -4;
    lStack0000000000000008 = lVar17 * 0x21 + 0x29;
  }
  plVar26 = (long *)0x0;
  if (lVar17 != 0) {
    plVar26 = (long *)0x8;
  }
  plVar32 = (long *)(CONCAT17(-(-1 < lVar42),
                              CONCAT16(-(-1 < (char)((ulong)lVar42 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar42 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar42 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar42 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar42 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar42 >> 8)),
                                                           -(-1 < (char)lVar42)))))))) &
                    0x8080808080808080);
  uStack00000000000000c8 = (uint7)lStack0000000000000008;
  uStack00000000000000cf = (undefined1)((ulong)lStack0000000000000008 >> 0x38);
  in_stack_000000e8 = plVar34 + 1;
  in_stack_000000f0 = (long *)((long)plVar34 + lVar17 + 1);
  uStack00000000000000d0 = (uint7)plVar35;
  uStack00000000000000d7 = (undefined1)((ulong)plVar35 >> 0x38);
  uStack00000000000000d8 = (uint7)plVar34;
  uStack00000000000000df = (undefined1)((ulong)plVar34 >> 0x38);
  in_stack_000000f8 = plVar39;
  in_stack_000000e0 = plVar32;
  plVar35 = in_stack_000000e8;
  in_stack_000000c0 = plVar26;
  do {
    if (plVar39 == (long *)0x0) {
LAB_100b846f0:
      if ((plVar26 != (long *)0x0) && (lStack0000000000000008 != 0)) {
        _free(CONCAT17(uStack00000000000000d7,uStack00000000000000d0));
      }
      if (uStack0000000000000018 != 0) {
        _free(puStack0000000000000028);
      }
      *(undefined2 *)(unaff_x19 + 0x3a5) = 0;
      FUN_100cdcde0(unaff_x19 + 0x1a0);
      FUN_100e57728();
      FUN_100e0df24(unaff_x19 + 0x30);
      if (*(long *)(unaff_x19 + 0x188) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 400));
      }
      FUN_100cd0888(unaff_x19 + 0x1a8);
      uVar18 = 0;
      uVar27 = 1;
LAB_100b84754:
      *(undefined1 *)(unaff_x19 + 0x398) = uVar27;
      return uVar18;
    }
    while (plVar32 == (long *)0x0) {
      lVar17 = *plVar35;
      plVar34 = plVar34 + -0x20;
      plVar35 = plVar35 + 1;
      plVar32 = (long *)(CONCAT17(-(-1 < lVar17),
                                  CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar17 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar17 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar17 >> 8)),
                                                           -(-1 < (char)lVar17)))))))) &
                        0x8080808080808080);
    }
    uVar23 = ((ulong)plVar32 >> 7 & 0xff00ff00ff00ff00) >> 8 |
             ((ulong)plVar32 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    plVar32 = (long *)((ulong)((long)plVar32 + -1) & (ulong)plVar32);
    uVar23 = LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) & 0x78;
    plVar39 = (long *)((long)plVar39 + -1);
    uVar19 = *(ulong *)((long)plVar34 + uVar23 * -4 + -0x20);
    if (uVar19 == 0x8000000000000001) {
      uStack00000000000000d8 = (uint7)plVar34;
      uStack00000000000000df = (undefined1)((ulong)plVar34 >> 0x38);
      in_stack_000000e0 = plVar32;
      in_stack_000000e8 = plVar35;
      in_stack_000000f8 = plVar39;
      if (plVar39 != (long *)0x0) {
        do {
          plVar26 = plVar35;
          if (plVar32 == (long *)0x0) {
            do {
              plVar35 = plVar26 + 1;
              lVar22 = *plVar26;
              plVar34 = plVar34 + -0x20;
              plVar32 = (long *)(CONCAT17(-(-1 < lVar22),
                                          CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                                   CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                            CONCAT14(-(-1 < (char)((ulong)lVar22 >>
                                                                                  0x20)),
                                                                     CONCAT13(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar22 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar22)))))))) &
                                0x8080808080808080);
              plVar26 = plVar35;
            } while (plVar32 == (long *)0x0);
            uStack00000000000000d8 = (uint7)plVar34;
            uStack00000000000000df = (undefined1)((ulong)plVar34 >> 0x38);
            in_stack_000000e8 = plVar35;
          }
          uVar23 = ((ulong)plVar32 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)plVar32 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          plVar32 = (long *)((ulong)((long)plVar32 + -1) & (ulong)plVar32);
          plVar39 = (long *)((long)plVar39 + -1);
          in_stack_000000e0 = plVar32;
          in_stack_000000f8 = plVar39;
          FUN_100dbb884((long)plVar34 +
                        (LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) & 0x78U) * -4 + -0x20);
        } while (plVar39 != (long *)0x0);
        lStack0000000000000008 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
        plVar26 = in_stack_000000c0;
      }
      goto LAB_100b846f0;
    }
    uVar18 = *(undefined8 *)((long)plVar34 + uVar23 * -4 + -0x18);
    uVar38 = *(undefined8 *)((long)plVar34 + uVar23 * -4 + -8);
    if (lVar22 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = _malloc(lVar22);
      if (lVar17 == 0) {
        func_0x0001087c9084(1,lVar22);
        goto LAB_100b84f94;
      }
    }
    _memcpy(lVar17,puStack0000000000000028,lVar22);
    __ZN3std2io5error5Error3new17h002dced88496ea8bE(uVar27,&stack0x00000500);
    FUN_100fd6328(&stack0x00000170,uVar38,&stack0x00000520);
    FUN_100d98294(&stack0x00000170);
    if ((uVar19 & 0x7fffffffffffffff) != 0) {
      _free(uVar18);
    }
  } while( true );
LAB_100b8306c:
  *(undefined1 *)(unaff_x19 + 0x3a3) = 0;
  in_stack_000004e8 =
       &
       __ZN89__LT_codex_app_server_protocol__jsonrpc_lite__RequestId_u20_as_u20_core__fmt__Display_GT_3fmt17h2a310322f9514619E
  ;
  in_stack_000004e0 = unaff_x21;
  goto code_r0x000100b83084;
}

