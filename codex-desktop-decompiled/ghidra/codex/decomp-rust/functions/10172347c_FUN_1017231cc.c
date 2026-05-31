
/* WARNING: Removing unreachable block (ram,0x000101724658) */
/* WARNING: Removing unreachable block (ram,0x000101724674) */
/* WARNING: Removing unreachable block (ram,0x0001017253b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1017231cc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  byte bVar21;
  char cVar22;
  int iVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  undefined1 uVar31;
  bool bVar32;
  code *pcVar33;
  uint uVar34;
  byte *pbVar35;
  uint uVar36;
  long unaff_x19;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined1 *unaff_x21;
  undefined8 *puVar39;
  undefined8 unaff_x24;
  long lVar40;
  char *pcVar41;
  undefined *unaff_x26;
  long *plVar42;
  undefined8 unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  undefined8 *unaff_d8;
  undefined1 auVar46 [16];
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined1 uStack00000000000000f3;
  undefined4 uStack00000000000000f8;
  undefined3 uStack00000000000000fc;
  undefined *in_stack_00000100;
  long in_stack_00000108;
  long lStack0000000000000110;
  undefined8 *puStack0000000000000118;
  undefined8 *puStack0000000000000120;
  undefined8 *puStack0000000000000128;
  undefined8 *in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  char *in_stack_00000160;
  undefined1 *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  uint uVar47;
  undefined8 *in_stack_00000780;
  long lVar48;
  undefined *puVar49;
  undefined8 *in_stack_000008b0;
  undefined8 *in_stack_000008b8;
  undefined1 *puVar50;
  undefined *puVar51;
  long in_stack_000009f8;
  undefined8 in_stack_00000a00;
  undefined8 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  undefined8 in_stack_00000a28;
  undefined8 in_stack_00000a30;
  undefined8 in_stack_00000a38;
  undefined8 in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  undefined8 *in_stack_00000ab0;
  char *pcVar52;
  
  uVar47 = (uint)in_stack_00000780;
  pcVar52 = s__Failed_to_resolve_external_API_k_108ac36d0;
  puVar50 = &stack0x00000ad0;
  puVar51 = &UNK_10b256738;
  puStack0000000000000118 = (undefined8 *)&stack0x000009e8;
  lStack0000000000000110 = 1;
  puStack0000000000000120 = (undefined8 *)0x1;
  puStack0000000000000128 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar39 = in_stack_00000ab0;
  if (((ulong)in_stack_00000ab0 & 3) == 1) {
    puVar39 = (undefined8 *)((long)in_stack_00000ab0 + -1);
    unaff_x24 = *puVar39;
    puVar37 = *(undefined8 **)((long)in_stack_00000ab0 + 7);
    pcVar33 = (code *)*puVar37;
    if (pcVar33 != (code *)0x0) {
      (*pcVar33)(unaff_x24);
    }
    if (puVar37[1] != 0) {
      _free(unaff_x24);
    }
    _free(puVar39);
  }
  lVar20 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar20 + -1;
  LORelease();
  if (lVar20 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103d03378();
  }
  *unaff_x28 = 1;
  lVar20 = -0x7ffffffffffffffd;
  FUN_10174a084();
  __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
            (&stack0x00000110,*in_stack_00000020);
  puVar37 = in_stack_00000130;
  puVar38 = puStack0000000000000128;
  puVar29 = puStack0000000000000118;
  puVar45 = puVar39;
  if (lStack0000000000000110 == -0x7ffffffffffffffd) {
    lVar20 = -0x7ffffffffffffffd;
    unaff_d8 = in_stack_000008b0;
    goto LAB_101723848;
  }
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
  *(long *)(unaff_x19 + 0x78) = lStack0000000000000110;
  *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_00000180;
  *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000178;
  *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000190;
  *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00000188;
  *(undefined8 *)(unaff_x19 + 0x108) = in_stack_000001a0;
  *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000140;
  *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000150;
  *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000148;
  *(char **)(unaff_x19 + 200) = in_stack_00000160;
  *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000158;
  *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000170;
  *(undefined1 **)(unaff_x19 + 0xd0) = in_stack_00000168;
  *(undefined8 **)(unaff_x19 + 0x88) = puStack0000000000000120;
  *(undefined8 **)(unaff_x19 + 0x80) = puStack0000000000000118;
  *(undefined8 **)(unaff_x19 + 0x98) = in_stack_00000130;
  *(undefined8 **)(unaff_x19 + 0x90) = puStack0000000000000128;
  uVar30 = __ZN11codex_login4auth7manager11AuthManager30is_stale_for_proactive_refresh17h15b153dd23bae8ddE
                     ();
  in_stack_000008b8 = puVar37;
  if ((uVar30 & 1) == 0) {
LAB_101723830:
    unaff_d8 = puVar38;
    __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
              (&stack0x00000620,*in_stack_00000020);
    FUN_10174f598(unaff_x19 + 0x78);
LAB_101723848:
    *(undefined1 *)(unaff_x19 + 0x70) = 0;
    *unaff_x21 = 1;
    if (lVar20 != -0x7ffffffffffffffc) {
      if (lVar20 == -0x7ffffffffffffffd) {
LAB_101723960:
        lVar48 = *(long *)(unaff_x19 + 0x48);
        lVar20 = lVar48;
        for (lVar28 = *(long *)(unaff_x19 + 0x50); lVar28 != 0; lVar28 = lVar28 + -1) {
          FUN_101750764(lVar20);
          lVar20 = lVar20 + 0x238;
        }
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          _free(lVar48);
        }
      }
      else {
        *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000680;
        *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000678;
        *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000690;
        *(undefined8 *)(unaff_x19 + 200) = in_stack_00000688;
        *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_000006a0;
        *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000698;
        *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_000006b0;
        *(undefined8 *)(unaff_x19 + 0xe8) = in_stack_000006a8;
        *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000640;
        *(undefined8 **)(unaff_x19 + 0x78) = puVar45;
        *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000650;
        *(undefined8 *)(unaff_x19 + 0x88) = in_stack_00000648;
        *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000660;
        *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000658;
        *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000670;
        *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000668;
        *(long *)(unaff_x19 + 0x60) = lVar20;
        *(undefined8 *)(unaff_x19 + 0x70) = unaff_x24;
        *(undefined8 **)(unaff_x19 + 0x68) = puVar39;
        if ((lVar20 < 0) && (2 < lVar20 + 0x7fffffffffffffffU)) {
          FUN_10174f598(in_stack_00000020);
          goto LAB_101723960;
        }
        lVar20 = *(long *)(unaff_x19 + 0x30);
        lVar48 = *(long *)(unaff_x19 + 0x38);
        do {
          lVar28 = lVar48;
          if (lVar28 == 0) break;
          lVar48 = lVar20 + lVar28;
          pbVar35 = (byte *)(lVar48 + -1);
          uVar34 = (uint)(char)*pbVar35;
          if ((int)uVar34 < 0) {
            pbVar35 = (byte *)(lVar48 + -2);
            bVar21 = *pbVar35;
            if ((char)bVar21 < -0x40) {
              pbVar35 = (byte *)(lVar48 + -3);
              bVar7 = *pbVar35;
              if ((char)bVar7 < -0x40) {
                pbVar35 = (byte *)(lVar48 + -4);
                uVar36 = bVar7 & 0x3f | (*pbVar35 & 7) << 6;
              }
              else {
                uVar36 = (int)(char)bVar7 & 0xf;
              }
              uVar36 = bVar21 & 0x3f | uVar36 << 6;
            }
            else {
              uVar36 = (int)(char)bVar21 & 0x1f;
            }
            uVar34 = uVar34 & 0x3f | uVar36 << 6;
          }
          lVar48 = (long)pbVar35 - lVar20;
        } while (uVar34 == 0x2f);
        lVar48 = unaff_x19 + 0x128;
        *(long *)(unaff_x19 + 0x128) = lVar20;
        *(long *)(unaff_x19 + 0x130) = lVar28;
        puVar51 = &DAT_101744cb8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000110,s__codex_analytics_events_events_108adc6d5,&stack0x000008a0);
        *(undefined8 **)(unaff_x19 + 0x100) = puStack0000000000000118;
        *(long *)(unaff_x19 + 0xf8) = lStack0000000000000110;
        *(undefined8 **)(unaff_x19 + 0x108) = puStack0000000000000120;
        *(undefined1 *)(unaff_x19 + 0x59) = 0;
        puStack0000000000000118 = *(undefined8 **)(unaff_x19 + 0x48);
        lStack0000000000000110 = *(long *)(unaff_x19 + 0x40);
        puStack0000000000000120 = *(undefined8 **)(unaff_x19 + 0x50);
        __ZN15codex_analytics6client27track_event_request_batches17h482e987e9c23c619E
                  (&stack0x000008a0,&stack0x00000110);
        puVar39 = (undefined8 *)(&DAT_101744cb8 + (long)unaff_d8 * 0x18);
        *(undefined **)(unaff_x19 + 0x138) = &DAT_101744cb8;
        *(undefined **)(unaff_x19 + 0x140) = &DAT_101744cb8;
        *(long *)(unaff_x19 + 0x148) = lVar48;
        *(undefined8 **)(unaff_x19 + 0x150) = puVar39;
        puVar37 = (undefined8 *)&DAT_101744cb8;
        while (puVar37 != puVar39) {
          puVar38 = puVar37 + 3;
          *(undefined8 **)(unaff_x19 + 0x140) = puVar38;
          uVar26 = puVar37[2];
          uVar44 = *puVar37;
          *(undefined8 *)(unaff_x19 + 0x118) = puVar37[1];
          *(undefined8 *)(unaff_x19 + 0x110) = uVar44;
          *(undefined8 *)(unaff_x19 + 0x120) = uVar26;
          if (*(long *)(unaff_x19 + 0x110) == -0x8000000000000000) goto joined_r0x0001017252c0;
          uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar44 = *(undefined8 *)(unaff_x19 + 0x108);
          *(undefined1 *)(unaff_x19 + 0x5a) = 0;
          plVar42 = (long *)(unaff_x19 + 0x158);
          *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x118);
          *plVar42 = *(long *)(unaff_x19 + 0x110);
          *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x120);
          *(long *)(unaff_x19 + 0x170) = unaff_x19 + 0x60;
          *(undefined8 *)(unaff_x19 + 0x178) = uVar26;
          *(undefined8 *)(unaff_x19 + 0x180) = uVar44;
          *(undefined1 *)(unaff_x19 + 0x240) = 0;
          *(undefined4 *)(unaff_x19 + 0x241) = 0x1000000;
          *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x160);
          *(long *)(unaff_x19 + 0x188) = *plVar42;
          *(long *)(unaff_x19 + 0x198) = *(long *)(unaff_x19 + 0x168);
          if (*(long *)(unaff_x19 + 0x168) == 0) {
            if (*(long *)(unaff_x19 + 0x188) != 0) {
              lVar40 = *(long *)(unaff_x19 + 400);
LAB_1017251f4:
              _free(lVar40);
            }
          }
          else {
            *(undefined1 *)(unaff_x19 + 0x244) = 0;
            *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x160);
            *(long *)(unaff_x19 + 0x1a0) = *plVar42;
            *(undefined8 *)(unaff_x19 + 0x1b0) = *(undefined8 *)(unaff_x19 + 0x168);
            uVar27 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E
                               ();
            *(undefined8 *)(unaff_x19 + 0x248) = uVar27;
            FUN_10171fbdc(&stack0x000008a0,uVar27,uVar26,uVar44);
            _memcpy(&stack0x00000ad0,&stack0x000008a0,0x110);
            if (pcVar52 != (char *)0x2) {
              puVar39 = (undefined8 *)FUN_105c2adb0(&stack0x00000bc8);
              *puVar39 = 10;
              *(undefined4 *)(puVar39 + 1) = 0;
            }
            _memcpy(&stack0x00000760,&stack0x00000ad0,0x110);
            auVar46 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE
                                (unaff_x19 + 0x60);
            *(undefined1 (*) [16])(unaff_x19 + 0x4e8) = auVar46;
            (**(code **)(auVar46._8_8_ + 0x20))
                      (&stack0x000008a0,
                       auVar46._0_8_ + (*(long *)(auVar46._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10);
            __ZN12codex_client14default_client19CodexRequestBuilder7headers17h601ccdbb0a4d4e69E
                      (&stack0x00000620,&stack0x00000760,&stack0x000008a0);
            FUN_1017208dc(&stack0x000004e0,&stack0x00000620);
            lVar20 = *(long *)(unaff_x19 + 0x1a8);
            lVar28 = *(long *)(unaff_x19 + 0x1b0);
            _memcpy(&stack0x000008a0,&stack0x000004e0,0x110);
            puVar49 = puVar51;
            puVar37 = unaff_d8;
            puVar39 = in_stack_000008b8;
            if (lVar48 != 2) {
              puVar37 = (undefined8 *)_malloc(0x80);
              if (puVar37 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,0x80);
                goto LAB_101725448;
              }
              *(undefined1 *)puVar37 = 0x7b;
              func_0x000101714e3c(&stack0x00000760,&UNK_108ce06b6,6);
              *(undefined1 *)((long)puVar37 + 1) = 0x3a;
              lVar40 = lVar28 * 0x238;
              *(undefined1 *)((long)puVar37 + 2) = 0x5b;
              if (lVar28 == 0) {
                *(undefined1 *)((long)puVar37 + 3) = 0x5d;
                puVar38 = (undefined8 *)0x4;
                puVar39 = puVar38;
              }
              else {
                bVar32 = true;
                puVar38 = (undefined8 *)0x3;
                do {
                  if (!bVar32) {
                    if (puVar38 == (undefined8 *)0x80) {
                      FUN_108875fcc(&stack0x00000760,0x80,1,1,1);
                    }
                    *(undefined1 *)((long)puVar37 + (long)puVar38) = 0x2c;
                    puVar38 = (undefined8 *)((long)puVar38 + 1);
                  }
                  lVar28 = FUN_101729594(lVar20,&stack0x00000620);
                  if (lVar28 != 0) {
                    _free(puVar37);
                    puVar29 = (undefined8 *)FUN_101766bbc(&stack0x00000760,lVar28);
                    FUN_101748630(&stack0x000008a0);
                    lVar48 = 2;
                    puVar38 = in_stack_00000038;
                    puVar37 = unaff_d8;
                    goto LAB_1017248cc;
                  }
                  bVar32 = false;
                  lVar20 = lVar20 + 0x238;
                  lVar40 = lVar40 + -0x238;
                } while (lVar40 != 0);
                if (puVar38 == (undefined8 *)0x80) {
                  FUN_108875fcc(&stack0x00000760,0x80,1,1,1);
                }
                *(undefined1 *)((long)puVar37 + (long)puVar38) = 0x5d;
                puVar38 = (undefined8 *)((long)puVar38 + 1);
                puVar39 = (undefined8 *)0x3;
              }
              if (puVar38 == (undefined8 *)0x80) {
                FUN_108875fcc(&stack0x00000760,0x80,1,1,1);
                puVar38 = puVar39;
              }
              *(undefined1 *)((long)puVar37 + (long)puVar38) = 0x7d;
              uVar30 = FUN_10175eeb4(&stack0x000008c8,&stack0x00000760);
              if ((uVar30 & 1) == 0) {
                FUN_10175eac8(&stack0x00000760,&stack0x000008c8,&stack0x00000ab0,&stack0x00000620);
                if ((char)uVar47 == '\x03') {
                  func_0x000108a07a3c(&UNK_108ce173a,0x17,&stack0x00000ad0,&UNK_10b257508,
                                      &UNK_10b258108);
                  goto LAB_101725448;
                }
                pcVar52 = (char *)0x0;
                if ((uVar47 & 0xff) != 2) {
                  (*pcRam0000000000000020)(&stack0x00000ae8,0x1d,0);
                }
              }
              if (puVar39 == (undefined8 *)0x80) {
                puVar49 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
                puVar29 = puVar37;
                if (((ulong)puVar37 & 1) == 0) {
                  puVar49 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
                  puVar29 = (undefined8 *)((ulong)puVar37 | 1);
                }
              }
              else {
                puVar29 = (undefined8 *)_malloc(0x18);
                if (puVar29 == (undefined8 *)0x0) {
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                  goto LAB_101725448;
                }
                *puVar29 = puVar37;
                puVar29[1] = 0x80;
                puVar29[2] = 1;
                puVar49 = &UNK_10b205b08;
              }
              if (lVar48 != 0) {
                if (puVar51 == (undefined *)0x0) {
                  if ((code *)*in_stack_000008b8 != (code *)0x0) {
                    (*(code *)*in_stack_000008b8)(unaff_d8);
                  }
                  if (in_stack_000008b8[1] != 0) {
                    _free(unaff_d8);
                  }
                }
                else {
                  (**(code **)(puVar51 + 0x20))(&stack0x000008c0,unaff_d8,in_stack_000008b8);
                }
              }
              lVar48 = 1;
              puVar38 = in_stack_00000030;
LAB_1017248cc:
              *puVar38 = puVar29;
            }
            _memcpy(&stack0x000003a0,&stack0x000008a0,0x110);
            _memcpy(&stack0x00000110,&stack0x000003a0,0x140);
            _memcpy(unaff_x19 + 0x250,&stack0x00000110,0x290);
            *(undefined1 *)(unaff_x19 + 0x4e0) = 0;
            plVar3 = (long *)(unaff_x19 + 0x250);
            FUN_10171fda0(&stack0x000009e8,plVar3,unaff_x27);
            if (puVar50 == (undefined1 *)0x4) {
              uVar31 = 3;
LAB_1017252a8:
              *(undefined1 *)(unaff_x19 + 0x240) = uVar31;
              uVar26 = 1;
              uVar31 = 4;
              goto LAB_101725358;
            }
            *(undefined2 *)(unaff_x19 + 0x242) = 0x101;
            plVar4 = (long *)(unaff_x19 + 0x1b8);
            *(undefined8 *)(unaff_x19 + 0x238) = in_stack_00000a68;
            *(undefined8 *)(unaff_x19 + 0x220) = in_stack_00000a50;
            *(undefined8 *)(unaff_x19 + 0x218) = in_stack_00000a48;
            *(undefined8 *)(unaff_x19 + 0x230) = in_stack_00000a60;
            *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000a58;
            *(undefined8 *)(unaff_x19 + 0x1e0) = in_stack_00000a10;
            *(undefined8 *)(unaff_x19 + 0x1d8) = in_stack_00000a08;
            *(undefined8 *)(unaff_x19 + 0x1f0) = in_stack_00000a20;
            *(undefined8 *)(unaff_x19 + 0x1e8) = in_stack_00000a18;
            *(undefined8 *)(unaff_x19 + 0x200) = in_stack_00000a30;
            *(undefined8 *)(unaff_x19 + 0x1f8) = in_stack_00000a28;
            *(undefined8 *)(unaff_x19 + 0x210) = in_stack_00000a40;
            *(undefined8 *)(unaff_x19 + 0x208) = in_stack_00000a38;
            *(undefined **)(unaff_x19 + 0x1c0) = &UNK_10b256738;
            *plVar4 = (long)puVar50;
            *(undefined8 *)(unaff_x19 + 0x1d0) = in_stack_00000a00;
            *(long *)(unaff_x19 + 0x1c8) = in_stack_000009f8;
            FUN_101746f08(plVar3);
            lVar20 = **(long **)(unaff_x19 + 0x4e8);
            **(long **)(unaff_x19 + 0x4e8) = lVar20 + -1;
            LORelease();
            if (lVar20 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001046b10a8(unaff_x19 + 0x4e8);
            }
            lVar20 = **(long **)(unaff_x19 + 0x248);
            **(long **)(unaff_x19 + 0x248) = lVar20 + -1;
            LORelease();
            if (lVar20 == 1) {
              DataMemoryBarrier(2,1);
              func_0x000105c30fe4(unaff_x19 + 0x248);
            }
            if (*plVar4 == 3) {
              *(undefined1 *)(unaff_x19 + 0x243) = 0;
              uVar26 = *(undefined8 *)(unaff_x19 + 0x1c0);
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b626ce8 - 1 < 2 ||
                   ((bRam000000010b626ce8 != 0 &&
                    (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                                        ), cVar22 != '\0')))))) &&
                 (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                                     ), (uVar30 & 1) != 0)) {
                puVar39 = (undefined8 *)
                          (
                          ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                          + 0x30);
                pcVar52 = s_failed_to_send_events_request__108adc6f6;
                puVar49 = &stack0x00000ab0;
                lVar48 = 1;
                puVar37 = (undefined8 *)0x1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                           ,&stack0x000008a0);
                lVar20 = 
                ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar44 = *(undefined8 *)
                            (
                            ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                            + 0x20);
                  uVar27 = *(undefined8 *)
                            (
                            ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                            + 0x28);
                  puVar51 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar51 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar23 = (**(code **)(puVar51 + 0x18))(puVar6,&stack0x00000760);
                  if (iVar23 != 0) {
                    in_stack_00000130 = *(undefined8 **)(lVar20 + 0x60);
                    in_stack_00000138 = *(undefined8 *)(lVar20 + 0x68);
                    puStack0000000000000118 = *(undefined8 **)(lVar20 + 0x50);
                    puStack0000000000000120 = *(undefined8 **)(lVar20 + 0x58);
                    lStack0000000000000110 = 1;
                    if (puStack0000000000000118 == (undefined8 *)0x0) {
                      lStack0000000000000110 = 2;
                    }
                    in_stack_00000158 = *(undefined8 *)(lVar20 + 8);
                    puStack0000000000000128 = (undefined8 *)0x1;
                    if (in_stack_00000130 == (undefined8 *)0x0) {
                      puStack0000000000000128 = (undefined8 *)0x2;
                    }
                    in_stack_00000140 = 2;
                    in_stack_00000168 = &stack0x00000620;
                    in_stack_00000160 = s__108b39f4f;
                    in_stack_00000148 = uVar44;
                    in_stack_00000150 = uVar27;
                    (**(code **)(puVar51 + 0x20))(puVar6,&stack0x00000110);
                  }
                }
              }
              else {
                lVar20 = 
                ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uVar44 = *(undefined8 *)
                            (
                            ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                            + 0x20);
                  uVar27 = *(undefined8 *)
                            (
                            ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                            + 0x28);
                  puVar51 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar51 = &UNK_10b3c24c8;
                  }
                  puVar6 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar6 = &UNK_109adfc03;
                  }
                  iVar23 = (**(code **)(puVar51 + 0x18))(puVar6,&stack0x00000a98);
                  if (iVar23 != 0) {
                    puVar39 = (undefined8 *)
                              (
                              ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf8b042f6fc744991E
                              + 0x30);
                    pcVar52 = &stack0x000003a0;
                    puVar49 = &stack0x00000ad0;
                    lVar48 = 1;
                    puVar37 = (undefined8 *)0x1;
                    in_stack_00000130 = *(undefined8 **)(lVar20 + 0x60);
                    in_stack_00000138 = *(undefined8 *)(lVar20 + 0x68);
                    puStack0000000000000118 = *(undefined8 **)(lVar20 + 0x50);
                    puStack0000000000000120 = *(undefined8 **)(lVar20 + 0x58);
                    lStack0000000000000110 = 1;
                    if (puStack0000000000000118 == (undefined8 *)0x0) {
                      lStack0000000000000110 = 2;
                    }
                    in_stack_00000158 = *(undefined8 *)(lVar20 + 8);
                    puStack0000000000000128 = (undefined8 *)0x1;
                    if (in_stack_00000130 == (undefined8 *)0x0) {
                      puStack0000000000000128 = (undefined8 *)0x2;
                    }
                    in_stack_00000140 = 2;
                    in_stack_00000168 = &stack0x00000760;
                    in_stack_00000160 = s__108b39f4f;
                    in_stack_00000148 = uVar44;
                    in_stack_00000150 = uVar27;
                    (**(code **)(puVar51 + 0x20))(puVar6,&stack0x00000110);
                  }
                }
              }
              FUN_10174cd0c(uVar26);
              _free(uVar26);
              *(undefined2 *)(unaff_x19 + 0x242) = 0;
              lVar20 = *(long *)(unaff_x19 + 0x1a8);
              lVar28 = *(long *)(unaff_x19 + 0x1b0);
              lVar40 = lVar20;
              puVar51 = puVar49;
              unaff_d8 = puVar37;
              in_stack_000008b8 = puVar39;
            }
            else {
              if (*(ushort *)(unaff_x19 + 0x220) - 200 < 100) {
                *(undefined1 *)(unaff_x19 + 0x242) = 0;
                in_stack_00000178 = *(undefined8 *)(unaff_x19 + 0x220);
                in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0x218);
                in_stack_00000188 = *(undefined8 *)(unaff_x19 + 0x230);
                in_stack_00000180 = *(undefined8 *)(unaff_x19 + 0x228);
                in_stack_00000190 = *(undefined8 *)(unaff_x19 + 0x238);
                in_stack_00000138 = *(undefined8 *)(unaff_x19 + 0x1e0);
                in_stack_00000130 = *(undefined8 **)(unaff_x19 + 0x1d8);
                in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x1f0);
                in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x1e8);
                in_stack_00000158 = *(undefined8 *)(unaff_x19 + 0x200);
                in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x1f8);
                in_stack_00000168 = *(undefined1 **)(unaff_x19 + 0x210);
                in_stack_00000160 = *(char **)(unaff_x19 + 0x208);
                puStack0000000000000118 = *(undefined8 **)(unaff_x19 + 0x1c0);
                lStack0000000000000110 = *plVar4;
                puStack0000000000000128 = *(undefined8 **)(unaff_x19 + 0x1d0);
                puStack0000000000000120 = *(undefined8 **)(unaff_x19 + 0x1c8);
                FUN_10174fed4(&stack0x00000110);
              }
              else {
                *(undefined8 *)(unaff_x19 + 0x2b8) = *(undefined8 *)(unaff_x19 + 0x220);
                *(undefined8 *)(unaff_x19 + 0x2b0) = *(undefined8 *)(unaff_x19 + 0x218);
                *(undefined8 *)(unaff_x19 + 0x2c8) = *(undefined8 *)(unaff_x19 + 0x230);
                *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(unaff_x19 + 0x228);
                *(undefined8 *)(unaff_x19 + 0x278) = *(undefined8 *)(unaff_x19 + 0x1e0);
                *(undefined8 *)(unaff_x19 + 0x270) = *(undefined8 *)(unaff_x19 + 0x1d8);
                *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + 0x1f0);
                *(undefined8 *)(unaff_x19 + 0x280) = *(undefined8 *)(unaff_x19 + 0x1e8);
                *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x19 + 0x200);
                *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(unaff_x19 + 0x1f8);
                *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(unaff_x19 + 0x210);
                *(undefined8 *)(unaff_x19 + 0x2a0) = *(undefined8 *)(unaff_x19 + 0x208);
                *(undefined8 *)(unaff_x19 + 600) = *(undefined8 *)(unaff_x19 + 0x1c0);
                *plVar3 = *plVar4;
                *(undefined8 *)(unaff_x19 + 0x268) = *(undefined8 *)(unaff_x19 + 0x1d0);
                *(undefined8 *)(unaff_x19 + 0x260) = *(undefined8 *)(unaff_x19 + 0x1c8);
                *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(unaff_x19 + 0x220);
                *(undefined8 *)(unaff_x19 + 0x338) = *(undefined8 *)(unaff_x19 + 0x218);
                *(undefined8 *)(unaff_x19 + 0x350) = *(undefined8 *)(unaff_x19 + 0x230);
                *(undefined8 *)(unaff_x19 + 0x348) = *(undefined8 *)(unaff_x19 + 0x228);
                *(undefined8 *)(unaff_x19 + 0x300) = *(undefined8 *)(unaff_x19 + 0x1e0);
                *(undefined8 *)(unaff_x19 + 0x2f8) = *(undefined8 *)(unaff_x19 + 0x1d8);
                *(undefined8 *)(unaff_x19 + 0x310) = *(undefined8 *)(unaff_x19 + 0x1f0);
                *(undefined8 *)(unaff_x19 + 0x308) = *(undefined8 *)(unaff_x19 + 0x1e8);
                *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x200);
                *(undefined8 *)(unaff_x19 + 0x318) = *(undefined8 *)(unaff_x19 + 0x1f8);
                *(undefined8 *)(unaff_x19 + 0x330) = *(undefined8 *)(unaff_x19 + 0x210);
                *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x19 + 0x208);
                *(undefined8 *)(unaff_x19 + 0x2d0) = *(undefined8 *)(unaff_x19 + 0x238);
                *(undefined1 *)(unaff_x19 + 0x242) = 0;
                *(undefined2 *)(unaff_x19 + 0x248) = *(undefined2 *)(unaff_x19 + 0x2b8);
                *(undefined1 *)(unaff_x19 + 0x241) = 0;
                *(undefined8 *)(unaff_x19 + 0x358) = *(undefined8 *)(unaff_x19 + 0x238);
                *(undefined8 *)(unaff_x19 + 0x2e0) = *(undefined8 *)(unaff_x19 + 0x1c0);
                *(long *)(unaff_x19 + 0x2d8) = *plVar4;
                *(undefined8 *)(unaff_x19 + 0x2f0) = *(undefined8 *)(unaff_x19 + 0x1d0);
                *(undefined8 *)(unaff_x19 + 0x2e8) = *(undefined8 *)(unaff_x19 + 0x1c8);
                *(undefined1 *)(unaff_x19 + 0x690) = 0;
                FUN_101764fe0(&stack0x00000110,unaff_x19 + 0x2d8,unaff_x27);
                puVar38 = puStack0000000000000118;
                lVar20 = lStack0000000000000110;
                if (lStack0000000000000110 == -0x7fffffffffffffff) {
                  uVar31 = 4;
                  goto LAB_1017252a8;
                }
                if (*(char *)(unaff_x19 + 0x690) == '\x03') {
                  FUN_101747cf8(unaff_x19 + 0x360);
                }
                else if (*(char *)(unaff_x19 + 0x690) == '\0') {
                  FUN_10174fed4(unaff_x19 + 0x2d8);
                }
                if (lVar20 == -0x8000000000000000) {
                  lVar20 = 0;
                  puVar29 = (undefined8 *)0x1;
                  FUN_10174cd0c(puVar38);
                  _free(puVar38);
                  if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E)
                  goto LAB_101724ea4;
LAB_101724cf4:
                  if (((1 < bRam000000010b626cd0 - 1) &&
                      ((bRam000000010b626cd0 == 0 ||
                       (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                                           ), cVar22 == '\0')))) ||
                     (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                                         ), (uVar30 & 1) == 0)) goto LAB_101724ea4;
                  lVar48 = unaff_x19 + 0x248;
                  puVar49 = &
                            __ZN63__LT_http__status__StatusCode_u20_as_u20_core__fmt__Display_GT_3fmt17he0383041cfc0321eE
                  ;
                  puVar37 = (undefined8 *)&stack0x000004e0;
                  puVar39 = (undefined8 *)&DAT_101762220;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                             ,&stack0x00000760);
                  lVar28 = 
                  ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uVar26 = *(undefined8 *)
                              (
                              ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                              + 0x20);
                    uVar44 = *(undefined8 *)
                              (
                              ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                              + 0x28);
                    puVar51 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar51 = &UNK_10b3c24c8;
                    }
                    puVar6 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar6 = &UNK_109adfc03;
                    }
                    iVar23 = (**(code **)(puVar51 + 0x18))(puVar6,&stack0x00000620);
                    if (iVar23 != 0) {
                      in_stack_00000130 = *(undefined8 **)(lVar28 + 0x60);
                      in_stack_00000138 = *(undefined8 *)(lVar28 + 0x68);
                      puStack0000000000000118 = *(undefined8 **)(lVar28 + 0x50);
                      puStack0000000000000120 = *(undefined8 **)(lVar28 + 0x58);
                      lStack0000000000000110 = 1;
                      if (puStack0000000000000118 == (undefined8 *)0x0) {
                        lStack0000000000000110 = 2;
                      }
                      in_stack_00000158 = *(undefined8 *)(lVar28 + 8);
                      pcVar52 = &stack0x00000760;
                      puStack0000000000000128 = (undefined8 *)0x1;
                      if (in_stack_00000130 == (undefined8 *)0x0) {
                        puStack0000000000000128 = (undefined8 *)0x2;
                      }
                      in_stack_00000140 = 2;
                      in_stack_00000168 = &stack0x000003a0;
                      in_stack_00000160 = s__108b39f4f;
                      in_stack_00000148 = uVar26;
                      in_stack_00000150 = uVar44;
                      (**(code **)(puVar51 + 0x20))(puVar6,&stack0x00000110);
                    }
                  }
                }
                else {
                  puVar29 = puVar38;
                  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4)
                  goto LAB_101724cf4;
LAB_101724ea4:
                  lVar28 = 
                  ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    uVar26 = *(undefined8 *)
                              (
                              ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                              + 0x20);
                    uVar44 = *(undefined8 *)
                              (
                              ___ZN15codex_analytics6client25send_track_events_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8b110753ad3144c3E
                              + 0x28);
                    puVar51 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar51 = &UNK_10b3c24c8;
                    }
                    puVar6 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar6 = &UNK_109adfc03;
                    }
                    iVar23 = (**(code **)(puVar51 + 0x18))(puVar6,&stack0x00000a80);
                    if (iVar23 != 0) {
                      lVar48 = unaff_x19 + 0x248;
                      puVar49 = &
                                __ZN63__LT_http__status__StatusCode_u20_as_u20_core__fmt__Display_GT_3fmt17he0383041cfc0321eE
                      ;
                      puVar37 = (undefined8 *)&stack0x000004e0;
                      puVar39 = (undefined8 *)&DAT_101762220;
                      pcVar52 = s_events_failed_with_status___108adc718;
                      in_stack_00000130 = *(undefined8 **)(lVar28 + 0x60);
                      in_stack_00000138 = *(undefined8 *)(lVar28 + 0x68);
                      puStack0000000000000118 = *(undefined8 **)(lVar28 + 0x50);
                      puStack0000000000000120 = *(undefined8 **)(lVar28 + 0x58);
                      lStack0000000000000110 = 1;
                      if (puStack0000000000000118 == (undefined8 *)0x0) {
                        lStack0000000000000110 = 2;
                      }
                      in_stack_00000158 = *(undefined8 *)(lVar28 + 8);
                      puStack0000000000000128 = (undefined8 *)0x1;
                      if (in_stack_00000130 == (undefined8 *)0x0) {
                        puStack0000000000000128 = (undefined8 *)0x2;
                      }
                      in_stack_00000140 = 2;
                      in_stack_00000168 = &stack0x00000620;
                      in_stack_00000160 = s__108b39f4f;
                      in_stack_00000148 = uVar26;
                      in_stack_00000150 = uVar44;
                      (**(code **)(puVar51 + 0x20))(puVar6,&stack0x00000110);
                    }
                  }
                }
                if (lVar20 != 0) {
                  _free(puVar29);
                }
                *(undefined1 *)(unaff_x19 + 0x241) = 0;
              }
              *(undefined2 *)(unaff_x19 + 0x242) = 0;
              lVar20 = *(long *)(unaff_x19 + 0x1a8);
              lVar28 = *(long *)(unaff_x19 + 0x1b0);
              lVar40 = lVar20;
              puVar51 = puVar49;
              unaff_d8 = puVar37;
              in_stack_000008b8 = puVar39;
            }
            for (; lVar28 != 0; lVar28 = lVar28 + -1) {
              FUN_101750764(lVar20);
              lVar20 = lVar20 + 0x238;
            }
            if (*(long *)(unaff_x19 + 0x1a0) != 0) goto LAB_1017251f4;
          }
          *(undefined1 *)(unaff_x19 + 0x244) = 0;
          *(undefined1 *)(unaff_x19 + 0x240) = 1;
          FUN_101745458(plVar42);
          *(undefined1 *)(unaff_x19 + 0x5a) = 0;
          puVar39 = *(undefined8 **)(unaff_x19 + 0x150);
          puVar37 = *(undefined8 **)(unaff_x19 + 0x140);
        }
        *(undefined8 *)(unaff_x19 + 0x110) = 0x8000000000000000;
        puVar38 = puVar37;
joined_r0x0001017252c0:
        if ((long)puVar39 - (long)puVar38 != 0) {
          lVar20 = 0;
          do {
            plVar42 = puVar38 + lVar20 * 3;
            lVar28 = plVar42[1];
            lVar48 = lVar28;
            for (lVar40 = plVar42[2]; lVar40 != 0; lVar40 = lVar40 + -1) {
              FUN_101750764(lVar48);
              lVar48 = lVar48 + 0x238;
            }
            if (*plVar42 != 0) {
              _free(lVar28);
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 != ((ulong)((long)puVar39 - (long)puVar38) >> 3) * -0x5555555555555555);
        }
        if (*(long *)(unaff_x19 + 0x148) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x138));
        }
        if (*(long *)(unaff_x19 + 0xf8) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x100));
        }
        FUN_10174f598(unaff_x19 + 0x60);
      }
      uVar26 = 0;
      *(undefined1 *)(unaff_x19 + 0x59) = 0;
      uVar31 = 1;
      goto LAB_101725358;
    }
  }
  else {
    lVar48 = *(long *)(unaff_x19 + 0x60);
    *(long *)(unaff_x19 + 0x110) = lVar48;
    *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
    *(long *)(unaff_x19 + 0x118) = lVar48;
    lVar48 = lVar48 + 0x1b8;
    puVar24 = (undefined8 *)(unaff_x19 + 0x1e8);
    *(long *)(unaff_x19 + 0x1e8) = lVar48;
    *(undefined1 *)(unaff_x19 + 0x238) = 0;
    puStack0000000000000118 = (undefined8 *)0x0;
    puStack0000000000000120 = (undefined8 *)0x0;
    *(long *)(unaff_x19 + 0x1f0) = lVar48;
    *(long *)(unaff_x19 + 0x1f8) = lVar48;
    *(undefined8 *)(unaff_x19 + 0x200) = 0;
    *(undefined8 *)(unaff_x19 + 0x218) = 0;
    *(undefined8 *)(unaff_x19 + 0x210) = 0;
    *(long *)(unaff_x19 + 0x208) = lStack0000000000000110;
    *(undefined8 *)(unaff_x19 + 0x228) = 1;
    *(undefined8 *)(unaff_x19 + 0x220) = 1;
    *(undefined1 *)(unaff_x19 + 0x230) = 0;
    bVar21 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                       (unaff_x19 + 0x1f8);
    if (bVar21 != 2) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x1f8);
      if (*(long *)(unaff_x19 + 0x200) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x200) + 0x18))(*(undefined8 *)(unaff_x19 + 0x208));
      }
      if ((bVar21 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x238) = 1;
        *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0x1f0);
        *(undefined4 *)(unaff_x19 + 0x128) = 1;
        __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
                  (unaff_x19 + 0x130,*(undefined8 *)(unaff_x19 + 0x118));
        if (*(long *)(unaff_x19 + 0x130) == -0x7ffffffffffffffd) {
          uVar26 = 0x8000000000000000;
          *(undefined8 *)(unaff_x19 + 0x1c8) = 0x8000000000000000;
          lVar48 = 0;
        }
        else {
          if (*(long *)(unaff_x19 + 0x130) == -0x8000000000000000) {
            FUN_10174f598(unaff_x19 + 0x130);
            __ZN81__LT_tokio__sync__semaphore__SemaphorePermit_u20_as_u20_core__ops__drop__Drop_GT_4drop17h142a73916ead84f7E
                      (unaff_x19 + 0x120);
            lVar48 = -0x7fffffffffffffff;
            goto LAB_1017237ec;
          }
          __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                    (unaff_x19 + 0x1c8,unaff_x19 + 0x130);
          uVar26 = *(undefined8 *)(unaff_x19 + 0x1d8);
          lVar48 = 0;
          if (*(long *)(unaff_x19 + 0x1c8) != -0x8000000000000000) {
            lVar48 = *(long *)(unaff_x19 + 0x1d0);
          }
        }
        *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x19 + 0x118);
        *(long *)(unaff_x19 + 0x1f0) = lVar48;
        *(undefined8 *)(unaff_x19 + 0x1f8) = uVar26;
        puVar1 = (undefined1 *)(unaff_x19 + 0xd28);
        *(undefined1 *)(unaff_x19 + 0xd28) = 0;
        *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x1e8);
        if (lVar48 == 0) {
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
             (((bRam000000010b62d580 - 1 < 2 ||
               ((bRam000000010b62d580 != 0 &&
                (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80f30c3cd6efb546E
                                    ), cVar22 != '\0')))) &&
              (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80f30c3cd6efb546E
                                  ), (uVar30 & 1) != 0)))) {
            puStack0000000000000128 =
                 (undefined8 *)
                 (
                 ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80f30c3cd6efb546E
                 + 0x30);
            puStack0000000000000118 = (undefined8 *)&stack0x00000760;
            lStack0000000000000110 = 1;
            puStack0000000000000120 = (undefined8 *)0x1;
            FUN_101719da4(&stack0x00000110);
          }
          else {
            lVar48 = 
            ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80f30c3cd6efb546E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar51 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar51 = &UNK_10b3c24c8;
              }
              puVar49 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar49 = &UNK_109adfc03;
              }
              iVar23 = (**(code **)(puVar51 + 0x18))(puVar49,&stack0x00000ab0);
              if (iVar23 != 0) {
                puStack0000000000000128 =
                     (undefined8 *)
                     (
                     ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h80f30c3cd6efb546E
                     + 0x30);
                puStack0000000000000118 = (undefined8 *)&stack0x00000760;
                lStack0000000000000110 = 1;
                puStack0000000000000120 = (undefined8 *)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar48,puVar49,puVar51,&stack0x00000ab0,&stack0x00000110);
              }
            }
          }
LAB_1017234f8:
          *puVar1 = 1;
          auVar46 = _malloc(0x81);
          puVar29 = auVar46._0_8_;
          if (puVar29 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,0x81);
LAB_101725448:
                    /* WARNING: Does not return */
            pcVar33 = (code *)SoftwareBreakpoint(1,0x10172544c);
            (*pcVar33)();
          }
          *(undefined1 *)(puVar29 + 0x10) = 0x2e;
          puVar29[9] = 0x697320726f207475;
          puVar29[8] = 0x6f20646567676f6c;
          puVar29[0xb] = 0x68746f6e61206f74;
          puVar29[10] = 0x206e692064656e67;
          puVar29[0xd] = 0x61656c50202e746e;
          puVar29[0xc] = 0x756f636361207265;
          puVar29[0xf] = 0x6e69616761206e69;
          puVar29[0xe] = 0x206e676973206573;
          puVar29[1] = 0x656b6f7420737365;
          *puVar29 = 0x6363612072756f59;
          puVar29[3] = 0x7220656220746f6e;
          puVar29[2] = 0x20646c756f63206e;
          puVar29[5] = 0x6573756163656220;
          puVar29[4] = 0x6465687365726665;
          puVar29[7] = 0x2065636e69732065;
          puVar29[6] = 0x76616820756f7920;
          puVar51 = (undefined *)0x3;
          unaff_d8 = (undefined8 *)0x81;
          lVar48 = 0x81;
          uVar30 = *(ulong *)(unaff_x19 + 0x1c8);
joined_r0x000101723558:
          if ((uVar30 & 0x7fffffffffffffff) != 0) goto LAB_10172355c;
LAB_1017237a4:
          puVar29 = auVar46._0_8_;
          uVar47 = (uint)in_stack_00000780;
          lVar28 = *(long *)(unaff_x19 + 0x130);
          unaff_x26 = puVar51;
        }
        else {
          *(long *)(unaff_x19 + 0x208) = lVar48;
          *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x1f8);
          *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x19 + 0x1e8);
          *(undefined1 *)(unaff_x19 + 0xd20) = 0;
          FUN_10171934c(&stack0x00000110,unaff_x19 + 0x218);
          uVar19 = in_stack_000001a0;
          uVar18 = in_stack_00000198;
          uVar17 = in_stack_00000190;
          uVar16 = in_stack_00000188;
          uVar15 = in_stack_00000180;
          uVar14 = in_stack_00000178;
          uVar13 = in_stack_00000170;
          puVar12 = in_stack_00000168;
          pcVar41 = in_stack_00000160;
          uVar11 = in_stack_00000158;
          uVar10 = in_stack_00000150;
          uVar27 = in_stack_00000148;
          uVar44 = in_stack_00000140;
          uVar26 = in_stack_00000138;
          in_stack_00000780 = in_stack_00000130;
          puVar9 = puStack0000000000000128;
          puVar8 = puStack0000000000000120;
          puVar24 = puStack0000000000000118;
          lVar48 = lStack0000000000000110;
          if (lStack0000000000000110 == -0x7ffffffffffffffc) {
            *puVar1 = 3;
            uVar31 = 4;
            goto LAB_101722ae8;
          }
          if (*(char *)(unaff_x19 + 0xd20) == '\x03') {
            FUN_101758de4(unaff_x19 + 0x220);
          }
          if (lVar48 == -0x7ffffffffffffffd) {
            puVar50 = (undefined1 *)0x8000000000000000;
            puVar51 = &UNK_108ce013a;
            lVar28 = 7;
            puVar43 = (undefined1 *)0x0;
LAB_101723320:
            in_stack_00000100 = puVar51;
            in_stack_00000108 = lVar28;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
                ((bRam000000010b62d568 - 1 < 2 ||
                 ((bRam000000010b62d568 != 0 &&
                  (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e3416d36212a2e2E
                                      ), cVar22 != '\0')))))) &&
               (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e3416d36212a2e2E
                                   ), (uVar30 & 1) != 0)) {
              puVar37 = (undefined8 *)
                        (
                        ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e3416d36212a2e2E
                        + 0x30);
              puStack0000000000000118 = (undefined8 *)&DAT_101744cb8;
              puStack0000000000000120 = &stack0x00000100;
              puStack0000000000000128 = (undefined8 *)&DAT_101744cb8;
              puVar38 = (undefined8 *)0x1;
              lStack0000000000000110 = unaff_x19 + 0x208;
              FUN_101719ee0(&stack0x000008a0);
            }
            else {
              lVar28 = 
              ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e3416d36212a2e2E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pcVar52 = (char *)0x3;
                puVar51 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar51 = &UNK_10b3c24c8;
                }
                puVar49 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar49 = &UNK_109adfc03;
                }
                iVar23 = (**(code **)(puVar51 + 0x18))(puVar49,&stack0x00000ad0);
                if (iVar23 != 0) {
                  puVar37 = (undefined8 *)
                            (
                            ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4e3416d36212a2e2E
                            + 0x30);
                  puStack0000000000000118 = (undefined8 *)&DAT_101744cb8;
                  puStack0000000000000120 = &stack0x00000100;
                  puStack0000000000000128 = (undefined8 *)&DAT_101744cb8;
                  puVar38 = (undefined8 *)0x1;
                  lStack0000000000000110 = unaff_x19 + 0x208;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar28,puVar49,puVar51,&stack0x00000ad0,&stack0x000008a0);
                }
              }
            }
            if (((ulong)puVar43 & 0x7fffffffffffffff) != 0) {
              _free(unaff_x26);
            }
            if (lVar48 != -0x7ffffffffffffffd) {
              FUN_10174f598(&stack0x00000760);
            }
            goto LAB_1017234f8;
          }
          __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                    (&stack0x000009e8,&stack0x00000760);
          puVar2 = (undefined8 *)(unaff_x19 + 0x208);
          lVar28 = in_stack_000009f8;
          unaff_x26 = puVar51;
          puVar43 = puVar50;
          if ((puVar50 == (undefined1 *)0x8000000000000000) ||
             (in_stack_000009f8 != *(long *)(unaff_x19 + 0x210))) {
            if (puVar50 == (undefined1 *)0x8000000000000000) {
              puVar51 = &UNK_108ce013a;
              lVar28 = 7;
              unaff_x26 = &UNK_10b256738;
              puVar43 = (undefined1 *)0x0;
            }
            goto LAB_101723320;
          }
          iVar23 = _memcmp(&UNK_10b256738,*puVar2,in_stack_000009f8);
          if (iVar23 != 0) goto LAB_101723320;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
              ((bRam000000010b62d550 - 1 < 2 ||
               ((bRam000000010b62d550 != 0 &&
                (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4bf1db2350a7f0b6E
                                    ), cVar22 != '\0')))))) &&
             (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4bf1db2350a7f0b6E
                                 ), (uVar30 & 1) != 0)) {
            puStack0000000000000128 =
                 (undefined8 *)
                 (
                 ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4bf1db2350a7f0b6E
                 + 0x30);
            puStack0000000000000118 = (undefined8 *)&stack0x00000a70;
            lStack0000000000000110 = 1;
            puStack0000000000000120 = (undefined8 *)0x1;
            FUN_10171a01c(&stack0x00000110);
            puVar29 = puVar2;
          }
          else {
            lVar28 = 
            ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4bf1db2350a7f0b6E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar49 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar49 = &UNK_10b3c24c8;
              }
              puVar6 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar6 = &UNK_109adfc03;
              }
              iVar23 = (**(code **)(puVar49 + 0x18))(puVar6,&stack0x000003a0);
              if (iVar23 != 0) {
                puStack0000000000000128 =
                     (undefined8 *)
                     (
                     ___ZN11codex_login4auth7manager11AuthManager28reload_if_account_id_matches28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4bf1db2350a7f0b6E
                     + 0x30);
                puStack0000000000000118 = (undefined8 *)&stack0x00000a70;
                lStack0000000000000110 = 1;
                puStack0000000000000120 = (undefined8 *)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar28,puVar6,puVar49,&stack0x000003a0,&stack0x00000110);
                puVar29 = puVar2;
              }
            }
          }
          __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
                    (&stack0x000008a0,*(undefined8 *)(unaff_x19 + 0x200));
          puVar43 = (undefined1 *)0x0;
          if (puVar29 != (undefined8 *)0x8000000000000003) {
            puVar43 = &stack0x000008a0;
          }
          puVar5 = (undefined1 *)0x0;
          if (lVar48 != -0x7ffffffffffffffd) {
            puVar5 = &stack0x00000760;
          }
          uVar25 = __ZN11codex_login4auth7manager11AuthManager23auths_equal_for_refresh17h862ec9e6fadcc0d3E
                             (puVar43,puVar5);
          lStack0000000000000110 = lVar48;
          puStack0000000000000118 = puVar24;
          puStack0000000000000120 = puVar8;
          puStack0000000000000128 = puVar9;
          in_stack_00000130 = in_stack_00000780;
          in_stack_00000138 = uVar26;
          in_stack_00000140 = uVar44;
          in_stack_00000148 = uVar27;
          in_stack_00000150 = uVar10;
          in_stack_00000158 = uVar11;
          in_stack_00000160 = pcVar41;
          in_stack_00000168 = puVar12;
          in_stack_00000170 = uVar13;
          in_stack_00000178 = uVar14;
          in_stack_00000180 = uVar15;
          in_stack_00000188 = uVar16;
          in_stack_00000190 = uVar17;
          in_stack_00000198 = uVar18;
          in_stack_000001a0 = uVar19;
          __ZN11codex_login4auth7manager11AuthManager15set_cached_auth17hc05d8eeaf2b9240eE
                    (*(undefined8 *)(unaff_x19 + 0x200),&stack0x00000110);
          uVar30 = extraout_x1_00;
          if (puVar29 != (undefined8 *)0x8000000000000003) {
            FUN_10174f598(&stack0x000008a0);
            uVar30 = extraout_x1_01;
          }
          puVar29 = (undefined8 *)(ulong)(puVar29 == (undefined8 *)0x8000000000000003);
          if (puVar50 != (undefined1 *)0x0) {
            _free(&UNK_10b256738);
            uVar30 = extraout_x1_02;
          }
          *puVar1 = 1;
          if ((uVar25 & 1) == 0) {
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
              uVar30 = (ulong)bRam000000010b62d508;
              if (1 < bRam000000010b62d508 - 1) {
                if (bRam000000010b62d508 != 0) {
                  cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN11codex_login4auth7manager11AuthManager13refresh_token28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27ff09207d5e0bd7E
                                     );
                  if (cVar22 != '\0') goto LAB_101723d2c;
                  uVar30 = 0;
                }
                goto LAB_101723d88;
              }
LAB_101723d2c:
              auVar46 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN11codex_login4auth7manager11AuthManager13refresh_token28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27ff09207d5e0bd7E
                                  );
              uVar30 = auVar46._8_8_;
              if ((auVar46._0_8_ & 1) == 0) goto LAB_101723d88;
              puStack0000000000000128 =
                   ___ZN11codex_login4auth7manager11AuthManager13refresh_token28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27ff09207d5e0bd7E
                   + 6;
              puStack0000000000000118 = (undefined8 *)&stack0x00000760;
              lStack0000000000000110 = 1;
              puStack0000000000000120 = (undefined8 *)0x1;
              FUN_101719210(&stack0x00000110);
              uVar30 = extraout_x1_05;
            }
            else {
LAB_101723d88:
              puVar24 = 
              ___ZN11codex_login4auth7manager11AuthManager13refresh_token28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27ff09207d5e0bd7E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar49 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar49 = &UNK_10b3c24c8;
                }
                puVar6 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar6 = &UNK_109adfc03;
                }
                iVar23 = (**(code **)(puVar49 + 0x18))(puVar6,&stack0x00000a98);
                uVar30 = extraout_x1_06;
                puVar29 = puVar24;
                if (iVar23 != 0) {
                  puStack0000000000000128 =
                       ___ZN11codex_login4auth7manager11AuthManager13refresh_token28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h27ff09207d5e0bd7E
                       + 6;
                  puStack0000000000000118 = (undefined8 *)&stack0x00000760;
                  lStack0000000000000110 = 1;
                  puStack0000000000000120 = (undefined8 *)0x1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (puVar24,puVar6,puVar49,&stack0x00000a98,&stack0x00000110);
                  uVar30 = extraout_x1_07;
                }
              }
            }
            auVar46._8_8_ = uVar30;
            auVar46._0_8_ = puVar29;
            lVar48 = -0x7fffffffffffffff;
            uVar30 = *(ulong *)(unaff_x19 + 0x1c8);
            goto joined_r0x000101723558;
          }
          *(undefined8 *)(unaff_x19 + 800) = *(undefined8 *)(unaff_x19 + 0x118);
          *(undefined1 *)(unaff_x19 + 0x32a) = 0;
          FUN_10171a298(&stack0x00000110,unaff_x19 + 0x1e8);
          unaff_d8 = puStack0000000000000120;
          puVar29 = puStack0000000000000118;
          lVar48 = lStack0000000000000110;
          if (lStack0000000000000110 == -0x7ffffffffffffffe) {
            uVar31 = 5;
            goto LAB_101722ae8;
          }
          puVar51 = (undefined *)((ulong)puStack0000000000000128 & 0xff);
          uStack00000000000000f8 = puStack0000000000000128._1_4_;
          uStack00000000000000fc = (undefined3)((ulong)puStack0000000000000128 >> 0x28);
          FUN_10174a8a8(unaff_x19 + 0x1e8);
          auVar46._8_8_ = extraout_x1_03;
          auVar46._0_8_ = puVar29;
          if ((*(ulong *)(unaff_x19 + 0x1c8) & 0x7fffffffffffffff) == 0) goto LAB_1017237a4;
LAB_10172355c:
          uVar47 = (uint)in_stack_00000780;
          _free(*(undefined8 *)(unaff_x19 + 0x1d0));
          auVar46._8_8_ = extraout_x1;
          auVar46._0_8_ = puVar29;
          lVar28 = *(long *)(unaff_x19 + 0x130);
          unaff_x26 = puVar51;
        }
        if (lVar28 != -0x7ffffffffffffffd) {
          FUN_10174f598(unaff_x19 + 0x130);
          auVar46._8_8_ = extraout_x1_04;
          auVar46._0_8_ = puVar29;
        }
        puVar24 = auVar46._0_8_;
        iVar23 = *(int *)(unaff_x19 + 0x128);
        if (iVar23 != 0) {
          pcVar41 = *(char **)(unaff_x19 + 0x120);
          if (*pcVar41 == '\0') {
            *pcVar41 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar41,auVar46._8_8_,1000000000);
          }
          FUN_1060fa678(pcVar41,iVar23,pcVar41);
        }
      }
      else {
        *(undefined1 *)(unaff_x19 + 0x238) = 1;
        puVar24 = (undefined8 *)_malloc(0x4b);
        if (puVar24 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x4b);
          goto LAB_101725448;
        }
        puVar24[5] = 0x657361656c50202e;
        puVar24[4] = 0x6465687365726665;
        puVar24[7] = 0x67697320646e6120;
        puVar24[6] = 0x74756f20676f6c20;
        *(undefined8 *)((long)puVar24 + 0x43) = 0x2e6e69616761206e;
        *(undefined8 *)((long)puVar24 + 0x3b) = 0x69206e6769732064;
        puVar24[1] = 0x656b6f7420737365;
        *puVar24 = 0x6363612072756f59;
        puVar24[3] = 0x7220656220746f6e;
        puVar24[2] = 0x20646c756f63206e;
        unaff_d8 = (undefined8 *)0x4b;
        unaff_x26 = (undefined *)0x3;
        lVar48 = 0x4b;
      }
LAB_1017237ec:
      *(undefined1 *)(unaff_x19 + 0x1e0) = 1;
      FUN_101746a24(unaff_x19 + 0x110);
      in_stack_000008b8 = puVar37;
      if (lVar48 == -0x7fffffffffffffff) goto LAB_101723830;
      uStack00000000000000f3 = (undefined1)((uint)uStack00000000000000f8 >> 0x18);
      in_stack_000008b8 =
           (undefined8 *)
           CONCAT44(CONCAT31(uStack00000000000000fc,uStack00000000000000f3),
                    (int)CONCAT41(uStack00000000000000f8,(char)unaff_x26));
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
         (((bRam000000010b62d5c8 - 1 < 2 ||
           ((bRam000000010b62d5c8 != 0 &&
            (cVar22 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                                ), cVar22 != '\0')))) &&
          (uVar30 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                              ), (uVar30 & 1) != 0)))) {
        puStack0000000000000128 =
             (undefined8 *)
             (
             ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
             + 0x30);
        pcVar52 = &stack0x000003a0;
        puStack0000000000000118 = (undefined8 *)&stack0x00000ad0;
        lStack0000000000000110 = 1;
        puStack0000000000000120 = (undefined8 *)0x1;
        FUN_10171d588(&stack0x00000110);
      }
      else {
        lVar20 = 
        ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
          puVar51 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar51 = &UNK_10b3c24c8;
          }
          puVar49 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar49 = &UNK_109adfc03;
          }
          iVar23 = (**(code **)(puVar51 + 0x18))(puVar49,&stack0x00000a80);
          if (iVar23 != 0) {
            puStack0000000000000128 =
                 (undefined8 *)
                 (
                 ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                 + 0x30);
            pcVar52 = &stack0x000003a0;
            puStack0000000000000118 = (undefined8 *)&stack0x00000ad0;
            lStack0000000000000110 = 1;
            puStack0000000000000120 = (undefined8 *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar20,puVar49,puVar51,&stack0x00000a80,&stack0x00000110);
          }
        }
      }
      *(undefined1 *)(unaff_x19 + 0x70) = 0;
      in_stack_00000688 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000680 = *(undefined8 *)(unaff_x19 + 0xd8);
      in_stack_00000698 = *(undefined8 *)(unaff_x19 + 0xf0);
      in_stack_00000690 = *(undefined8 *)(unaff_x19 + 0xe8);
      in_stack_000006a8 = *(undefined8 *)(unaff_x19 + 0x100);
      in_stack_000006a0 = *(undefined8 *)(unaff_x19 + 0xf8);
      in_stack_000006b0 = *(undefined8 *)(unaff_x19 + 0x108);
      in_stack_00000648 = *(undefined8 *)(unaff_x19 + 0xa0);
      in_stack_00000640 = *(undefined8 *)(unaff_x19 + 0x98);
      in_stack_00000658 = *(undefined8 *)(unaff_x19 + 0xb0);
      in_stack_00000650 = *(undefined8 *)(unaff_x19 + 0xa8);
      in_stack_00000668 = *(undefined8 *)(unaff_x19 + 0xc0);
      in_stack_00000660 = *(undefined8 *)(unaff_x19 + 0xb8);
      in_stack_00000678 = *(undefined8 *)(unaff_x19 + 0xd0);
      in_stack_00000670 = *(undefined8 *)(unaff_x19 + 200);
      puVar39 = *(undefined8 **)(unaff_x19 + 0x80);
      lVar20 = *(long *)(unaff_x19 + 0x78);
      puVar45 = *(undefined8 **)(unaff_x19 + 0x90);
      unaff_x24 = *(undefined8 *)(unaff_x19 + 0x88);
      if (lVar48 == -0x8000000000000000) {
        if (((ulong)puVar24 & 3) == 1) {
          puVar37 = (undefined8 *)((long)puVar24 + -1);
          uVar26 = *puVar37;
          puVar38 = *(undefined8 **)((long)puVar24 + 7);
          pcVar33 = (code *)*puVar38;
          if (pcVar33 != (code *)0x0) {
            (*pcVar33)(uVar26);
          }
          if (puVar38[1] != 0) {
            _free(uVar26);
          }
          goto LAB_101723bd0;
        }
      }
      else {
        puVar37 = puVar24;
        if (lVar48 != 0) {
LAB_101723bd0:
          _free(puVar37);
        }
      }
      goto LAB_101723848;
    }
    uVar31 = 3;
    *(undefined1 *)(unaff_x19 + 0x238) = 3;
LAB_101722ae8:
    *(undefined1 *)(unaff_x19 + 0x1e0) = uVar31;
    *unaff_x21 = 4;
  }
  uVar26 = 1;
  uVar31 = 3;
LAB_101725358:
  *(undefined1 *)(unaff_x19 + 0x58) = uVar31;
  return uVar26;
}

