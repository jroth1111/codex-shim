
/* WARNING: Removing unreachable block (ram,0x000100763cbc) */
/* WARNING: Removing unreachable block (ram,0x000100763c6c) */
/* WARNING: Removing unreachable block (ram,0x000100763af4) */

void FUN_100762fd0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined1 uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  ulong uVar14;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *extraout_x9_08;
  long *extraout_x9_09;
  long *extraout_x9_10;
  long *extraout_x9_11;
  long *extraout_x9_12;
  long *extraout_x9_13;
  long *extraout_x9_14;
  long *extraout_x9_15;
  long *extraout_x9_16;
  long *extraout_x9_17;
  long *extraout_x9_18;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long *extraout_x10_06;
  long *extraout_x10_07;
  long *extraout_x10_08;
  long *extraout_x10_09;
  long *extraout_x10_10;
  long *extraout_x10_11;
  long *extraout_x10_12;
  long *extraout_x10_13;
  long *extraout_x10_14;
  long *extraout_x10_15;
  long *extraout_x10_16;
  long *extraout_x10_17;
  long *plVar15;
  long *extraout_x10_18;
  long *extraout_x10_19;
  long *extraout_x10_20;
  long *extraout_x10_21;
  long *extraout_x10_22;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long unaff_x29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long *in_stack_00000000;
  long *plStack0000000000000008;
  long *in_stack_00000010;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined1 in_stack_000001e8;
  undefined3 uStack00000000000001e9;
  undefined1 uStack00000000000001ec;
  undefined3 uStack00000000000001ed;
  char cVar24;
  char cVar25;
  long *in_stack_00000200;
  long *in_stack_00000208;
  long *in_stack_00000210;
  undefined4 in_stack_00000329;
  undefined3 in_stack_0000032d;
  long *in_stack_00000338;
  long in_stack_00000340;
  long in_stack_00000348;
  long *in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined1 in_stack_00000378;
  undefined7 in_stack_00000379;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000200,s___108ab8993,&stack0x00000340);
  *(long **)(unaff_x19 + 0x130) = in_stack_00000208;
  *(long **)(unaff_x19 + 0x128) = in_stack_00000200;
  *(long **)(unaff_x19 + 0x138) = in_stack_00000210;
  uVar18 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x130);
  if (in_stack_00000210 == (long *)0x0) {
    lVar7 = 1;
  }
  else {
    lVar7 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00000210,1);
    if (lVar7 == 0) {
      FUN_107c03c64(1,in_stack_00000210);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007640d4);
      (*pcVar5)();
    }
  }
  _memcpy(lVar7,uVar19,in_stack_00000210);
  *(undefined1 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  FUN_1011d51fc(&stack0x00000560,uVar18,unaff_x29 + -0xd0,*(undefined8 *)(unaff_x19 + 0x130),
                *(undefined8 *)(unaff_x19 + 0x138));
  _memcpy(&stack0x00000340,&stack0x00000560,0x110);
  auVar23 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE();
  *(undefined1 (*) [16])(unaff_x29 + -0xd0) = auVar23;
  (**(code **)(auVar23._8_8_ + 0x20))
            (&stack0x00000560,
             auVar23._0_8_ + (*(long *)(auVar23._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  __ZN12codex_client14default_client19CodexRequestBuilder7headers17h601ccdbb0a4d4e69E
            (&stack0x00000200,&stack0x00000340,&stack0x00000560);
  _memcpy(&stack0x00000340,&stack0x00000200,0x110);
  FUN_1011d5650(&stack0x00000560,&stack0x00000340,&UNK_108cad010,0xf,&UNK_108cad01f,5);
  *(uint *)(unaff_x29 + -0xfd) = CONCAT31(in_stack_0000032d,(char)((uint)in_stack_00000329 >> 0x18))
  ;
  *(undefined4 *)(unaff_x29 + -0x100) = in_stack_00000329;
  _memcpy(&stack0x00000340,&stack0x00000560,0x110);
  FUN_1011d5650(&stack0x00000200,&stack0x00000340,&UNK_108ca7be3,0xc,&UNK_108c57210,0x10);
  uStack00000000000001e9 = (undefined3)*(undefined4 *)(unaff_x29 + -0x100);
  uStack00000000000001ec = (undefined1)*(undefined4 *)(unaff_x29 + -0xfd);
  uStack00000000000001ed = (undefined3)((uint)*(undefined4 *)(unaff_x29 + -0xfd) >> 8);
  _memcpy(&stack0x000000c0,&stack0x00000200,0x110);
  *(undefined1 *)(unaff_x19 + 0x1ca) = 1;
  lVar7 = **(long **)(unaff_x29 + -0xd0);
  **(long **)(unaff_x29 + -0xd0) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001046b10a8(unaff_x29 + -0xd0);
  }
  if (*(int *)(unaff_x19 + 0x70) != 1000000000) {
    *(undefined1 *)(unaff_x19 + 0x1ca) = 0;
    __ZN12codex_client14default_client19CodexRequestBuilder7timeout17h26aea1b2176d3533E
              (&stack0x00000340,&stack0x000000c0,*(undefined8 *)(unaff_x19 + 0x68));
    *(undefined1 *)(unaff_x19 + 0x1ca) = 1;
    _memcpy(&stack0x000000c0,&stack0x00000340,0x140);
  }
  *(undefined1 *)(unaff_x19 + 0x1ca) = 0;
  _memcpy(unaff_x19 + 0x1d0,&stack0x000000c0,0x140);
  *(undefined1 *)(unaff_x19 + 0x460) = 0;
  puVar1 = (undefined8 *)(unaff_x19 + 0x1d0);
  FUN_10072d0a8(&stack0x00000340,puVar1);
  if (in_stack_00000340 == 4) {
    uVar9 = 5;
    goto LAB_100762d20;
  }
  FUN_100cadf84(puVar1);
  if (in_stack_00000340 == 3) {
    in_stack_00000350 = (long *)thunk_FUN_108854894(in_stack_00000348,&UNK_108cad094,0x16);
    goto LAB_100763d5c;
  }
  *(undefined1 *)(unaff_x19 + 0x1c9) = 1;
  *(long *)(unaff_x19 + 0x140) = in_stack_00000340;
  *(long *)(unaff_x19 + 0x148) = in_stack_00000348;
  *(undefined8 *)(unaff_x19 + 0x198) = in_stack_00000398;
  *(undefined8 *)(unaff_x19 + 400) = in_stack_00000390;
  *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_000003a8;
  *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_000003a0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_000003b8;
  *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_000003b0;
  *(undefined8 *)(unaff_x19 + 0x1c0) = in_stack_000003c0;
  *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000358;
  *(long **)(unaff_x19 + 0x150) = in_stack_00000350;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000368;
  *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000360;
  *(ulong *)(unaff_x19 + 0x178) = CONCAT71(in_stack_00000379,in_stack_00000378);
  *(undefined8 *)(unaff_x19 + 0x170) = in_stack_00000370;
  *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000388;
  *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000380;
  if (*(ushort *)(unaff_x19 + 0x1a8) - 200 < 100) {
    *(undefined1 *)(unaff_x19 + 0x1c9) = 0;
    *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x1a8);
    *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x1a0);
    *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x1b8);
    *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x1b0);
    *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x1c0);
    *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x168);
    *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x160);
    *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x170);
    *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x188);
    *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x180);
    *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 0x198);
    *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 400);
    *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x19 + 0x148);
    *puVar1 = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x158);
    *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x150);
    plVar2 = (long *)(unaff_x19 + 0x400);
    *(undefined1 *)(unaff_x19 + 0x400) = 0;
    *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x238);
    *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x19 + 0x248);
    *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x19 + 0x240);
    *(undefined8 *)(unaff_x19 + 0x2d8) = *(undefined8 *)(unaff_x19 + 0x250);
    *(undefined8 *)(unaff_x19 + 0x280) = *(undefined8 *)(unaff_x19 + 0x1f8);
    *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x19 + 0x1f0);
    *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + 0x200);
    *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x210);
    *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x228);
    *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x1d8);
    *(undefined8 *)(unaff_x19 + 600) = *puVar1;
    *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x1e8);
    *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x1e0);
    *(undefined1 *)(unaff_x19 + 0x3f8) = 0;
    FUN_1011d7320(&stack0x00000340,unaff_x19 + 600);
    if ((int)in_stack_00000340 == 1) {
      *(undefined1 *)plVar2 = 3;
      uVar9 = 6;
      goto LAB_100762d20;
    }
    *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_00000360;
    *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000358;
    if (*(char *)(unaff_x19 + 0x3f8) == '\x03') {
      FUN_100da9d08(unaff_x19 + 0x368);
      plVar17 = *(long **)(unaff_x19 + 0x360);
      if (*plVar17 != 0) {
        _free(plVar17[1]);
      }
      _free(plVar17);
    }
    else if (*(char *)(unaff_x19 + 0x3f8) == '\0') {
      FUN_100e0d524(unaff_x19 + 600);
    }
    if (in_stack_00000348 != 0) {
      *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xe0);
      *(long *)(unaff_x29 + -0x100) = in_stack_00000348;
      *(long **)(unaff_x29 + -0xf8) = in_stack_00000350;
      uVar11 = *(ulong *)(unaff_x29 + -0xf0);
      if (uVar11 != 0) {
        uVar14 = 0;
        do {
          bVar3 = *(byte *)((long)in_stack_00000350 + uVar14);
          if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
            cVar24 = (char)in_stack_00000200;
            cVar25 = (char)((ulong)in_stack_00000200 >> 8);
            plVar17 = plVar2;
            if (bVar3 == 0x5b) {
              *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000340;
              *(undefined1 *)(unaff_x29 + -0x90) = 1;
              FUN_1011de2a4(&stack0x00000200,unaff_x29 + -0x98);
              if (cVar24 == '\x01') {
                in_stack_00000200 = extraout_x9_01;
                in_stack_00000210 = extraout_x10_04;
                plVar20 = (long *)0x8000000000000000;
              }
              else if (cVar25 == '\x01') {
                FUN_10136fd4c(&stack0x00000200,*(undefined8 *)(unaff_x29 + -0x98));
                if (in_stack_00000200 == (long *)0x8000000000000000) {
                  in_stack_00000200 = extraout_x9_03;
                  in_stack_00000210 = extraout_x10_06;
                  plVar20 = (long *)0x8000000000000000;
                }
                else {
                  *(long **)(unaff_x29 + -0x80) = in_stack_00000200;
                  *(long **)(unaff_x29 + -0x78) = in_stack_00000208;
                  *(long **)(unaff_x29 + -0x70) = in_stack_00000210;
                  FUN_1011de2a4(&stack0x00000200,unaff_x29 + -0x98);
                  plVar20 = extraout_x9_09;
                  plVar8 = extraout_x10_12;
                  plVar16 = in_stack_00000208;
                  plVar15 = in_stack_00000210;
                  plVar17 = in_stack_00000210;
                  in_stack_00000338 = in_stack_00000208;
                  if ((cVar24 == '\x01') ||
                     (FUN_101608ce4(&stack0x00000200,*(undefined8 *)(unaff_x29 + -0x98)),
                     plVar20 = in_stack_00000200, plVar8 = extraout_x10_13,
                     in_stack_00000200 == (long *)0x8000000000000001)) {
                    for (; in_stack_00000210 = plVar8, plVar15 != (long *)0x0;
                        plVar15 = (long *)((long)plVar15 + -1)) {
                      FUN_100df2e20(plVar16);
                      plVar20 = extraout_x9_10;
                      plVar8 = extraout_x10_14;
                      plVar16 = plVar16 + 0x4a;
                      plVar17 = (long *)0x0;
                    }
                    if (in_stack_00000200 != (long *)0x0) {
                      _free(in_stack_00000208);
                      plVar20 = extraout_x9_11;
                      in_stack_00000210 = extraout_x10_15;
                    }
                    in_stack_00000200 = plVar20;
                    plVar20 = (long *)0x8000000000000000;
                  }
                }
              }
              else {
                in_stack_00000208 = (long *)thunk_FUN_1087e422c(0,&UNK_10b22b618,&UNK_10b20a590);
                in_stack_00000200 = extraout_x9_04;
                in_stack_00000210 = extraout_x10_07;
                plVar20 = (long *)0x8000000000000000;
              }
              in_stack_00000010 = (long *)FUN_100654840(&stack0x00000340);
              if (plVar20 != (long *)0x8000000000000000) {
                plStack0000000000000008 = in_stack_00000200;
                plVar16 = in_stack_00000208;
                if (in_stack_00000010 != (long *)0x0) {
                  for (; plVar15 = in_stack_00000010, plVar17 != (long *)0x0;
                      plVar17 = (long *)((long)plVar17 + -1)) {
                    FUN_100df2e20(plVar16);
                    plVar16 = plVar16 + 0x4a;
                  }
                  goto LAB_100763bd0;
                }
                goto LAB_100763bfc;
              }
              if (in_stack_00000010 != (long *)0x0) {
                lVar7 = *in_stack_00000010;
                if (lVar7 != 1) goto LAB_100763b98;
                FUN_100de21d4(in_stack_00000010 + 1);
                goto LAB_100763c94;
              }
              goto LAB_100763c98;
            }
            if (bVar3 != 0x7b) {
              in_stack_00000208 =
                   (long *)thunk_FUN_108831eec(&stack0x00000340,unaff_x29 + -0x61,&UNK_10b24ee78);
              goto LAB_100763c98;
            }
            *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000340;
            *(undefined1 *)(unaff_x29 + -0xa0) = 1;
            plStack0000000000000008 = (long *)0x8000000000000001;
            plVar20 = (long *)0x8000000000000000;
            plVar16 = in_stack_00000350;
            goto LAB_1007634e4;
          }
          uVar14 = uVar14 + 1;
        } while (uVar11 != uVar14);
      }
      uVar18 = thunk_FUN_108831e2c(&stack0x00000340,&stack0x00000200);
      goto LAB_100763cb4;
    }
    uVar19 = *(undefined8 *)(unaff_x29 + -200);
    uVar18 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar22 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar21 = *(undefined8 *)(unaff_x29 + -0xc0);
    *(undefined1 *)plVar2 = 1;
    plVar20 = (long *)0x8000000000000000;
    goto LAB_100763d20;
  }
  *(ushort *)(unaff_x19 + 0x1d0) = *(ushort *)(unaff_x19 + 0x1a8);
  *(undefined1 *)(unaff_x19 + 0x1c9) = 0;
  *(undefined8 *)(unaff_x19 + 0x240) = *(undefined8 *)(unaff_x19 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x238) = *(undefined8 *)(unaff_x19 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x1b8);
  *(undefined8 *)(unaff_x19 + 0x248) = *(undefined8 *)(unaff_x19 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x1c0);
  *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x160);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x178);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x220) = *(undefined8 *)(unaff_x19 + 0x188);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x180);
  *(undefined8 *)(unaff_x19 + 0x230) = *(undefined8 *)(unaff_x19 + 0x198);
  *(undefined8 *)(unaff_x19 + 0x228) = *(undefined8 *)(unaff_x19 + 400);
  *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x19 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined1 *)(unaff_x19 + 0x590) = 0;
  FUN_1011d6b78(&stack0x00000340,unaff_x19 + 0x1d8);
  if (in_stack_00000340 != -0x7fffffffffffffff) {
    if (*(char *)(unaff_x19 + 0x590) == '\x03') {
      FUN_100cbe7c8(unaff_x19 + 0x260);
    }
    else if (*(char *)(unaff_x19 + 0x590) == '\0') {
      FUN_100e0d524(unaff_x19 + 0x1d8);
    }
    if (in_stack_00000340 == -0x8000000000000000) {
      in_stack_00000340 = 0;
      FUN_100de20f8(in_stack_00000348);
      _free(in_stack_00000348);
      in_stack_00000348 = 1;
    }
    in_stack_00000350 =
         (long *)thunk_FUN_108858fa8(s_Request_failed_with_status___108ac696a,&stack0x00000340);
    if (in_stack_00000340 != 0) {
      _free(in_stack_00000348);
    }
    goto LAB_100763d5c;
  }
  uVar9 = 7;
  goto LAB_100762d20;
code_r0x000100763c50:
  uVar14 = uVar14 + 1;
  if (uVar11 == uVar14) goto LAB_100763c74;
  goto LAB_100763c38;
LAB_1007634e4:
  do {
    FUN_1011dda68(&stack0x00000200,unaff_x29 + -0xa8);
    if (cVar24 == '\x01') {
      *(long **)(unaff_x29 + -0x90) = plVar16;
      *(long **)(unaff_x29 + -0x88) = plVar17;
      *(long **)(unaff_x29 + -0x98) = plVar20;
      in_stack_00000338 = extraout_x9;
      plVar15 = extraout_x10;
      goto LAB_100763934;
    }
    if (cVar25 != '\x01') {
      *(long **)(unaff_x29 + -0x90) = plVar16;
      *(long **)(unaff_x29 + -0x88) = plVar17;
      *(long **)(unaff_x29 + -0x98) = plVar20;
      if (plVar20 != (long *)0x8000000000000000) {
        in_stack_00000338 = in_stack_00000010;
        plVar15 = (long *)0x8000000000000000;
        in_stack_00000210 = in_stack_00000000;
        if (plStack0000000000000008 != (long *)0x8000000000000001) {
          plVar15 = plStack0000000000000008;
        }
        goto LAB_1007639a4;
      }
      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cde3ac;
      *(undefined8 *)(unaff_x29 + -0x78) = 4;
      plVar20 = (long *)0x8000000000000000;
      in_stack_00000208 =
           (long *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000200);
      in_stack_00000338 = extraout_x9_08;
      plVar15 = extraout_x10_11;
      goto LAB_100763934;
    }
    lVar7 = *(long *)(unaff_x29 + -0xa8);
    *(long *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + 1;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
              (&stack0x00000200,lVar7 + 0x18,lVar7);
    plVar8 = in_stack_00000208;
    in_stack_00000338 = in_stack_00000200;
    plVar15 = extraout_x10_00;
    if (in_stack_00000200 == (long *)0x2) break;
    if (in_stack_00000210 == (long *)0xa) {
      uVar13 = *(ushort *)(in_stack_00000208 + 1);
      bVar6 = *in_stack_00000208 == 0x6b6f745f7478656e;
      uVar10 = 0x6e65;
LAB_1007635b4:
      if (bVar6 && uVar13 == uVar10) {
        if (plStack0000000000000008 != (long *)0x8000000000000001) {
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(long **)(unaff_x29 + -0x98) = plVar20;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb4708;
          *(undefined8 *)(unaff_x29 + -0x78) = 10;
          in_stack_00000208 =
               (long *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000200);
          plStack0000000000000008 = (long *)((ulong)plStack0000000000000008 & 0x7fffffffffffffff);
          in_stack_00000338 = extraout_x9_15;
          plVar15 = extraout_x10_19;
          goto joined_r0x000100764010;
        }
        uVar12 = *(ulong *)(lVar7 + 0x28);
        if (*(ulong *)(lVar7 + 0x20) <= uVar12) {
LAB_100763efc:
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(long **)(unaff_x29 + -0x98) = plVar20;
          in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
          in_stack_00000338 = extraout_x9_12;
          plVar15 = extraout_x10_16;
          goto LAB_100763958;
        }
        while( true ) {
          bVar3 = *(byte *)(*(long *)(lVar7 + 0x18) + uVar12);
          if (0x3a < bVar3) goto LAB_100764018;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
          uVar12 = uVar12 + 1;
          *(ulong *)(lVar7 + 0x28) = uVar12;
          if (*(ulong *)(lVar7 + 0x20) == uVar12) goto LAB_100763efc;
        }
        if ((ulong)bVar3 != 0x3a) {
LAB_100764018:
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(long **)(unaff_x29 + -0x98) = plVar20;
          in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
          in_stack_00000338 = extraout_x9_16;
          plVar15 = extraout_x10_20;
          goto LAB_100763958;
        }
        *(ulong *)(lVar7 + 0x28) = uVar12 + 1;
        FUN_101608ce4(unaff_x29 + -0x80,lVar7);
        plStack0000000000000008 = *(long **)(unaff_x29 + -0x80);
        in_stack_00000338 = (long *)0x8000000000000001;
        if (plStack0000000000000008 == (long *)0x8000000000000001) {
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(long **)(unaff_x29 + -0x98) = plVar20;
          in_stack_00000208 = *(long **)(unaff_x29 + -0x78);
          plVar15 = extraout_x10_02;
          goto LAB_100763958;
        }
        in_stack_00000010 = *(long **)(unaff_x29 + -0x78);
        in_stack_00000000 = *(long **)(unaff_x29 + -0x70);
        goto LAB_1007634e4;
      }
    }
    else {
      if (in_stack_00000210 == (long *)0x9) {
        uVar13 = (ushort)*(byte *)(in_stack_00000208 + 1);
        bVar6 = *in_stack_00000208 == 0x656b6f547478656e;
        uVar10 = 0x6e;
        goto LAB_1007635b4;
      }
      if ((in_stack_00000210 == (long *)0x4) && ((int)*in_stack_00000208 == 0x73707061)) {
        if (plVar20 != (long *)0x8000000000000000) {
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(long **)(unaff_x29 + -0x98) = plVar20;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_108cde3ac;
          *(undefined8 *)(unaff_x29 + -0x78) = 4;
          in_stack_00000208 =
               (long *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000200);
          in_stack_00000338 = extraout_x9_17;
          plVar15 = extraout_x10_21;
          goto LAB_100763934;
        }
        uVar12 = *(ulong *)(lVar7 + 0x28);
        if (uVar12 < *(ulong *)(lVar7 + 0x20)) {
          while( true ) {
            bVar3 = *(byte *)(*(long *)(lVar7 + 0x18) + uVar12);
            if (0x3a < bVar3) goto LAB_10076409c;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
            uVar12 = uVar12 + 1;
            *(ulong *)(lVar7 + 0x28) = uVar12;
            if (*(ulong *)(lVar7 + 0x20) == uVar12) goto LAB_100763f20;
          }
          if ((ulong)bVar3 == 0x3a) {
            *(ulong *)(lVar7 + 0x28) = uVar12 + 1;
            FUN_10136fd4c(unaff_x29 + -0x80,lVar7);
            plVar20 = *(long **)(unaff_x29 + -0x80);
            if (plVar20 != (long *)0x8000000000000000) {
              plVar16 = *(long **)(unaff_x29 + -0x78);
              plVar17 = *(long **)(unaff_x29 + -0x70);
              goto LAB_1007634e4;
            }
            *(long **)(unaff_x29 + -0x90) = plVar16;
            *(long **)(unaff_x29 + -0x88) = plVar17;
            *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000000;
            in_stack_00000208 = *(long **)(unaff_x29 + -0x78);
            in_stack_00000338 = plStack0000000000000008;
            plVar15 = extraout_x10_03;
          }
          else {
LAB_10076409c:
            *(long **)(unaff_x29 + -0x90) = plVar16;
            *(long **)(unaff_x29 + -0x88) = plVar17;
            *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000000;
            in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
            in_stack_00000338 = extraout_x9_18;
            plVar15 = extraout_x10_22;
          }
        }
        else {
LAB_100763f20:
          *(long **)(unaff_x29 + -0x90) = plVar16;
          *(long **)(unaff_x29 + -0x88) = plVar17;
          *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000000;
          in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
          in_stack_00000338 = extraout_x9_13;
          plVar15 = extraout_x10_17;
        }
        plVar20 = (long *)0x8000000000000000;
        goto LAB_100763934;
      }
    }
    uVar12 = *(ulong *)(lVar7 + 0x28);
    if (*(ulong *)(lVar7 + 0x20) <= uVar12) {
LAB_10076389c:
      *(long **)(unaff_x29 + -0x90) = plVar16;
      *(long **)(unaff_x29 + -0x88) = plVar17;
      *(long **)(unaff_x29 + -0x98) = plVar20;
      in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
      in_stack_00000338 = extraout_x9_02;
      plVar15 = extraout_x10_05;
      goto LAB_100763934;
    }
    while( true ) {
      bVar3 = *(byte *)(*(long *)(lVar7 + 0x18) + uVar12);
      if (0x3a < bVar3) goto LAB_100763f50;
      if ((1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) break;
      uVar12 = uVar12 + 1;
      *(ulong *)(lVar7 + 0x28) = uVar12;
      if (*(ulong *)(lVar7 + 0x20) == uVar12) goto LAB_10076389c;
    }
    if ((ulong)bVar3 != 0x3a) {
LAB_100763f50:
      *(long **)(unaff_x29 + -0x90) = plVar16;
      *(long **)(unaff_x29 + -0x88) = plVar17;
      *(long **)(unaff_x29 + -0x98) = plVar20;
      in_stack_00000208 = (long *)thunk_FUN_108831e2c(lVar7,&stack0x00000200);
      in_stack_00000338 = extraout_x9_14;
      plVar15 = extraout_x10_18;
      goto LAB_100763934;
    }
    *(ulong *)(lVar7 + 0x28) = uVar12 + 1;
    plVar8 = (long *)FUN_100651420(lVar7);
    in_stack_00000338 = extraout_x9_00;
    plVar15 = extraout_x10_01;
  } while (plVar8 == (long *)0x0);
  in_stack_00000208 = plVar8;
  *(long **)(unaff_x29 + -0x90) = plVar16;
  *(long **)(unaff_x29 + -0x88) = plVar17;
  *(long **)(unaff_x29 + -0x98) = plVar20;
LAB_100763934:
  if (-0x7fffffffffffffff < (long)plStack0000000000000008) {
joined_r0x000100764010:
    if (plStack0000000000000008 != (long *)0x0) {
      _free(in_stack_00000010);
      in_stack_00000338 = extraout_x9_05;
      plVar15 = extraout_x10_08;
    }
  }
LAB_100763958:
  plVar8 = plVar17;
  plVar4 = plVar16;
  if (plVar20 == (long *)0x8000000000000000) {
    plVar20 = (long *)0x8000000000000000;
    plVar16 = in_stack_00000208;
    in_stack_00000210 = (long *)0x1;
  }
  else {
    for (; plVar8 != (long *)0x0; plVar8 = (long *)((long)plVar8 + -1)) {
      FUN_100df2e20(plVar4);
      plVar17 = (long *)0x0;
      in_stack_00000338 = extraout_x9_06;
      plVar15 = extraout_x10_09;
      plVar4 = plVar4 + 0x4a;
    }
    if (plVar20 != (long *)0x0) {
      _free(plVar16);
      in_stack_00000338 = extraout_x9_07;
      plVar15 = extraout_x10_10;
    }
    plVar20 = (long *)0x8000000000000000;
    plVar16 = in_stack_00000208;
    in_stack_00000210 = in_stack_00000208;
  }
LAB_1007639a4:
  in_stack_00000010 = (long *)FUN_1006546a8(&stack0x00000340);
  in_stack_00000208 = plVar16;
  if (plVar20 == (long *)0x8000000000000000) {
    if (in_stack_00000010 != (long *)0x0) {
      lVar7 = *in_stack_00000010;
      if (lVar7 == 1) {
        FUN_100de21d4(in_stack_00000010 + 1);
      }
      else {
LAB_100763b98:
        if ((lVar7 == 0) && (in_stack_00000010[2] != 0)) {
          _free(in_stack_00000010[1]);
        }
      }
LAB_100763c94:
      _free(in_stack_00000010);
    }
LAB_100763c98:
    uVar18 = thunk_FUN_108832dfc(in_stack_00000208,&stack0x00000340);
LAB_100763cb4:
    in_stack_00000208 = (long *)FUN_1011d7b00(&stack0x00000340,uVar18);
    plVar20 = (long *)0x8000000000000000;
  }
  else {
    plStack0000000000000008 = plVar15;
    if (in_stack_00000010 != (long *)0x0) {
      for (; plVar15 = in_stack_00000010, plVar17 != (long *)0x0;
          plVar17 = (long *)((long)plVar17 + -1)) {
        FUN_100df2e20(plVar16);
        plVar16 = plVar16 + 0x4a;
      }
LAB_100763bd0:
      in_stack_00000010 = in_stack_00000338;
      if (plVar20 != (long *)0x0) {
        _free(in_stack_00000208);
      }
      in_stack_00000208 = plVar15;
      if (((ulong)plStack0000000000000008 & 0x7fffffffffffffff) != 0) goto LAB_100763c94;
      goto LAB_100763c98;
    }
LAB_100763bfc:
    in_stack_00000010 = in_stack_00000338;
    uVar14 = uVar14 + 1;
    if (uVar14 < uVar11) {
LAB_100763c38:
      if (*(byte *)((long)in_stack_00000350 + uVar14) < 0x21 &&
          (1L << ((ulong)*(byte *)((long)in_stack_00000350 + uVar14) & 0x3f) & 0x100002600U) != 0)
      goto code_r0x000100763c50;
      uVar18 = thunk_FUN_108831e2c(&stack0x00000340,&stack0x00000200);
      plVar16 = in_stack_00000208;
      for (; plVar17 != (long *)0x0; plVar17 = (long *)((long)plVar17 + -1)) {
        FUN_100df2e20(plVar16);
        plVar16 = plVar16 + 0x4a;
      }
      if (plVar20 != (long *)0x0) {
        _free(in_stack_00000208);
      }
      if (((ulong)plStack0000000000000008 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000010);
      }
      goto LAB_100763cb4;
    }
LAB_100763c74:
    *(long **)(unaff_x29 + -200) = plStack0000000000000008;
    *(long **)(unaff_x29 + -0xd0) = plVar17;
    *(long **)(unaff_x29 + -0xb8) = in_stack_00000210;
    *(long **)(unaff_x29 + -0xc0) = in_stack_00000010;
  }
  (**(code **)(*(long *)(unaff_x29 + -0x100) + 0x20))
            (unaff_x29 + -0xe8,*(undefined8 *)(unaff_x29 + -0xf8),*(undefined8 *)(unaff_x29 + -0xf0)
            );
  uVar19 = *(undefined8 *)(unaff_x29 + -200);
  uVar18 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar22 = *(undefined8 *)(unaff_x29 + -0xb8);
  uVar21 = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined1 *)plVar2 = 1;
  in_stack_00000350 = in_stack_00000208;
  if (plVar20 != (long *)0x8000000000000001) {
LAB_100763d20:
    FUN_100cfddd4(puVar1);
    if (plVar20 == (long *)0x8000000000000000) {
      in_stack_00000350 = (long *)thunk_FUN_108854894(in_stack_00000350,&UNK_108cad0aa,0x1d);
LAB_100763d5c:
      *(undefined2 *)(unaff_x19 + 0x1c9) = 0;
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x130));
      }
      lVar7 = **(long **)(unaff_x19 + 0x120);
      **(long **)(unaff_x19 + 0x120) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(unaff_x19 + 0x120);
      }
      FUN_100e0609c(unaff_x19 + 0x88);
      lVar7 = **(long **)(unaff_x19 + 0x80);
      **(long **)(unaff_x19 + 0x80) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
      }
      lVar7 = *(long *)(unaff_x19 + 0x50);
      plVar20 = (long *)0x8000000000000000;
    }
    else {
      *(undefined2 *)(unaff_x19 + 0x1c9) = 0;
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x130));
      }
      lVar7 = **(long **)(unaff_x19 + 0x120);
      **(long **)(unaff_x19 + 0x120) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(unaff_x19 + 0x120);
      }
      FUN_100e0609c(unaff_x19 + 0x88);
      lVar7 = **(long **)(unaff_x19 + 0x80);
      **(long **)(unaff_x19 + 0x80) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
      }
      lVar7 = *(long *)(unaff_x19 + 0x50);
      in_stack_00000540 = uVar18;
      in_stack_00000548 = uVar19;
      in_stack_00000550 = uVar21;
      in_stack_00000558 = uVar22;
    }
    if (lVar7 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x58));
    }
    *unaff_x21 = plVar20;
    unaff_x21[1] = in_stack_00000350;
    unaff_x21[3] = in_stack_00000548;
    unaff_x21[2] = in_stack_00000540;
    unaff_x21[5] = in_stack_00000558;
    unaff_x21[4] = in_stack_00000550;
    uVar9 = 1;
    *in_stack_00000028 = 1;
    FUN_100d643ac(unaff_x20);
    goto LAB_100763df4;
  }
  uVar9 = 6;
LAB_100762d20:
  *in_stack_00000028 = uVar9;
  *unaff_x21 = 0x8000000000000001;
  uVar9 = 3;
LAB_100763df4:
  *(undefined1 *)(unaff_x19 + 0x1158) = uVar9;
  return;
}

