
/* WARNING: Removing unreachable block (ram,0x000100958f5c) */
/* WARNING: Removing unreachable block (ram,0x000100958f78) */
/* WARNING: Removing unreachable block (ram,0x000100958fa0) */
/* WARNING: Removing unreachable block (ram,0x000100958fb4) */
/* WARNING: Removing unreachable block (ram,0x000100958fb8) */
/* WARNING: Removing unreachable block (ram,0x000100958fc0) */
/* WARNING: Removing unreachable block (ram,0x000100958fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100957f88(void)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *unaff_x19;
  long unaff_x20;
  int iVar13;
  long *unaff_x21;
  undefined1 uVar14;
  long *plVar15;
  undefined1 uVar16;
  undefined8 unaff_x23;
  undefined8 *puVar17;
  undefined1 uVar18;
  long *plVar19;
  undefined1 uVar20;
  bool bVar21;
  long unaff_x25;
  undefined8 uVar22;
  long lVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  long unaff_x27;
  long *plVar26;
  int *piVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  undefined1 auVar31 [16];
  long *in_stack_00000088;
  undefined1 *puStack0000000000000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  long *plStack00000000000000b0;
  long *plStack00000000000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long *in_stack_00000180;
  undefined1 uStack0000000000000188;
  undefined1 uStack0000000000000190;
  undefined1 uStack0000000000000198;
  undefined4 uStack0000000000000199;
  undefined1 uStack00000000000001a0;
  long *in_stack_000001a8;
  long *in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  undefined7 uVar32;
  long in_stack_00004d00;
  long in_stack_00004d08;
  long in_stack_00004d10;
  long in_stack_00004d18;
  long in_stack_00004d20;
  ulong in_stack_00004d30;
  long in_stack_000060a0;
  long in_stack_000060a8;
  long in_stack_000060b0;
  long in_stack_000060b8;
  long in_stack_000060c0;
  long *in_stack_000060e0;
  long *in_stack_000060e8;
  long *in_stack_00006ad0;
  long *in_stack_00006ad8;
  long *in_stack_00006ae0;
  long *in_stack_000074c8;
  long *in_stack_000074d0;
  uint7 uVar33;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000180,s_0failed_to_list_installed_and_su_108acc3d8,&stack0x000060e0);
  plVar26 = _uStack0000000000000190;
  plVar19 = _uStack0000000000000188;
  plVar9 = in_stack_00000180;
  plStack00000000000000b8 = _uStack0000000000000188;
  if (in_stack_00006ad8 != (long *)0x0) {
    if ((code *)*in_stack_00006ae0 != (code *)0x0) {
      (*(code *)*in_stack_00006ae0)(in_stack_00006ad8);
    }
    if (in_stack_00006ae0[1] != 0) {
      _free(in_stack_00006ad8);
    }
  }
  plStack00000000000000b0 = (long *)(unaff_x25 + -0xf);
  puStack0000000000000090 = (undefined1 *)0xffffffffffff80a5;
  *(undefined4 *)(unaff_x19 + 0x79) = 0;
  unaff_x19[0x7d] = 0;
  unaff_x19[0x78] = 1;
  if (plVar9 == (long *)0x8000000000000001) {
    *unaff_x19 = 6;
  }
  else {
    FUN_100d69f4c();
    if (plVar9 == (long *)0x8000000000000000) {
      *(long **)(unaff_x20 + 0x3078) = plVar19;
      *(long **)(unaff_x20 + 0x3080) = plVar26;
      *(long **)(unaff_x20 + 0x3088) = plStack00000000000000b0;
      *(long **)(unaff_x20 + 0x3090) = in_stack_000000a8;
      *(long **)(unaff_x20 + 0x3098) = in_stack_00000098;
      *(long **)(unaff_x20 + 0x30a0) = in_stack_000000a0;
      *(undefined8 *)(unaff_x20 + 0x30a8) = unaff_x23;
      plVar19 = *(long **)(unaff_x20 + 0x70);
      unaff_x19[3] = 0;
      lVar12 = *(long *)(unaff_x20 + 0xa8);
      uVar22 = *(undefined8 *)(unaff_x20 + 0x3060);
      uVar25 = *(undefined8 *)(unaff_x20 + 0x3068);
      plVar9 = (long *)0x0;
      if (*(long *)(unaff_x20 + 0x2640) != -0x7ffffffffffffffd) {
        plVar9 = (long *)(unaff_x20 + 0x2640);
      }
      *(long **)(unaff_x20 + 0x30b0) = plVar19;
      *(long *)(unaff_x20 + 0x30b8) = lVar12;
      *(long *)(unaff_x20 + 0x30c0) = unaff_x20 + 0x26d8;
      *(undefined8 *)(unaff_x20 + 0x30c8) = uVar22;
      *(undefined8 *)(unaff_x20 + 0x30d0) = uVar25;
      *(long **)(unaff_x20 + 0x30d8) = plVar9;
      unaff_x19[0xe00] = 0;
      *(long *)(unaff_x20 + 0x30e0) = lVar12;
      __ZN18codex_core_plugins7manager14PluginsManager53build_remote_installed_plugin_marketplaces_from_cache17ha939daf797e60e05E
                (&stack0x00000180,lVar12 + 0x10,uVar22,uVar25);
      if (in_stack_00000180 == (long *)0x8000000000000000) {
        lVar12 = *(long *)(unaff_x20 + 0x30e0);
        auVar31 = __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor34effective_plugins_changed_callback17h19a3600341d4b877E
                            (plVar19);
        lVar12 = lVar12 + 0x10;
        *(undefined1 (*) [16])(unaff_x20 + 0x30e8) = auVar31;
        *(undefined8 *)(unaff_x20 + 0x3118) = uVar22;
        *(undefined8 *)(unaff_x20 + 0x3120) = uVar25;
        *(long **)(unaff_x20 + 0x3128) = plVar9;
        *(long *)(unaff_x20 + 0x3e58) = lVar12;
        *(long *)(unaff_x20 + 0x3e60) = unaff_x20 + 0x26d8;
        unaff_x19[0xdf9] = 0;
        *(long *)(unaff_x20 + 0x3130) = lVar12;
        *(undefined8 *)(unaff_x20 + 0x30f8) = uVar22;
        *(undefined8 *)(unaff_x20 + 0x3100) = uVar25;
        lVar12 = 1;
        unaff_x19[0xdf8] = 1;
        *(undefined1 (*) [16])(unaff_x20 + 0x3108) = auVar31;
        plVar26 = *(long **)(unaff_x20 + 0x3040);
        lVar23 = *(long *)(unaff_x20 + 0x3048);
        if ((lVar23 != 0) && (lVar12 = _malloc(lVar23), lVar12 == 0)) {
          func_0x0001087c9084(1,lVar23);
          goto LAB_100957d64;
        }
        _memcpy(lVar12,plVar26,lVar23);
        *(long *)(unaff_x20 + 0x3138) = lVar23;
        *(long *)(unaff_x20 + 0x3140) = lVar12;
        *(long *)(unaff_x20 + 0x3148) = lVar23;
        *(long **)(unaff_x20 + 0x3e40) = plVar9;
        *(long *)(unaff_x20 + 0x3e48) = unaff_x20 + 0x3138;
        puStack0000000000000090 = unaff_x19 + 0xde1;
        unaff_x19[0xde1] = 0;
        unaff_x19[0xde0] = 0;
        plVar19 = unaff_x21;
        if (plVar9 == (long *)0x0) {
          plVar29 = (long *)0x8000000000000000;
LAB_100958480:
          *puStack0000000000000090 = 1;
          plVar15 = plVar9;
          plVar28 = plVar26;
        }
        else {
          if ((*plVar9 < 0) && (2 < *plVar9 + 0x7fffffffffffffffU)) {
            plVar29 = (long *)0x8000000000000001;
            goto LAB_100958480;
          }
          unaff_x19[0xde0] = 0;
          _memcpy((long)&stack0x00000180 + 4,&stack0x00006ad0,0x668);
          *(undefined4 *)(unaff_x20 + 0x3150) = 0;
          *(long *)(unaff_x20 + 0x37a8) = unaff_x20 + 0x3138;
          *(long **)(unaff_x20 + 0x37b0) = plVar9;
          unaff_x19[0x749] = 0;
          *(undefined4 *)(unaff_x20 + 0x37c0) = 0;
          _memcpy(unaff_x20 + 0x37c4,&stack0x00000180,0x66c);
          iVar7 = 0;
          *(long *)(unaff_x20 + 0x3e30) = unaff_x20 + 0x3150;
          *(undefined4 *)(unaff_x20 + 0x3e38) = 0;
          bVar21 = false;
          *(undefined4 *)(unaff_x20 + 0x3e38) = 1;
          iVar13 = 2;
LAB_100958638:
          do {
            for (; iVar7 != 1; iVar7 = iVar7 + -2) {
              if (iVar7 == 0) {
                if (iVar13 == 0) goto LAB_100958bd0;
                iVar13 = iVar13 + -1;
                piVar27 = *(int **)(unaff_x20 + 0x3e30);
                if (*piVar27 != 0) {
                  if (*piVar27 != 1) goto LAB_100959590;
                  plVar29 = *(long **)(piVar27 + 2);
joined_r0x000100958668:
                  if (plVar29 == (long *)0x8000000000000014) break;
                  *piVar27 = 2;
                  plVar15 = *(long **)(piVar27 + 4);
                  in_stack_00000088 = *(long **)(piVar27 + 6);
                  plVar26 = *(long **)(piVar27 + 8);
                  plVar9 = *(long **)(piVar27 + 10);
                  bVar21 = true;
                  plVar19 = *(long **)(piVar27 + 0xc);
                  plVar28 = *(long **)(piVar27 + 0xe);
                  goto LAB_100958cfc;
                }
                bVar2 = *(byte *)((long)piVar27 + 0x669);
                puVar10 = &UNK_10b22bde0;
                if (1 < bVar2) {
                  if (bVar2 == 3) goto LAB_1009586a8;
LAB_1009596d4:
                  FUN_107c05cc4(puVar10);
                  goto LAB_100957d64;
                }
                if (bVar2 != 0) goto LAB_1009596dc;
                *(undefined1 *)(piVar27 + 0x19a) = 0;
                *(undefined8 *)(piVar27 + 0x192) = *(undefined8 *)(piVar27 + 0x198);
                *(undefined8 *)(piVar27 + 400) = *(undefined8 *)(piVar27 + 0x196);
                *(undefined2 *)(piVar27 + 0x194) = 0;
LAB_1009586a8:
                FUN_100a73bd0(&stack0x00000180,piVar27 + 2,in_stack_00000088);
                plVar11 = in_stack_000001b0;
                plVar28 = in_stack_000001a8;
                plVar15 = _uStack00000000000001a0;
                plVar26 = _uStack0000000000000198;
                plVar19 = _uStack0000000000000190;
                plVar9 = _uStack0000000000000188;
                plVar29 = in_stack_00000180;
                if (in_stack_00000180 != (long *)0x8000000000000015) {
                  uVar14 = uStack0000000000000188;
                  uVar24 = uStack0000000000000190;
                  uVar20 = uStack0000000000000198;
                  uVar4 = uStack0000000000000199;
                  uVar16 = uStack00000000000001a0;
                  if ((char)piVar27[0x194] == '\x03') {
                    FUN_100d0391c(piVar27 + 2);
                  }
                  uVar33 = (uint7)((ulong)plVar9 >> 8);
                  if (plVar29 == (long *)0x8000000000000014) {
                    uVar8 = (ulong)plVar19 >> 8;
                    uVar32 = (undefined7)((ulong)plVar26 >> 8);
                    uVar18 = (char)piVar27[0x19a];
                    plVar28 = in_stack_000060e0;
                    plVar11 = in_stack_000060e8;
                    uVar16 = uVar20;
                  }
                  else {
                    uVar32 = (undefined7)((ulong)plVar15 >> 8);
                    in_stack_00004d30 = (ulong)uVar33;
                    uVar33 = (uint7)((ulong)plVar19 >> 8);
                    uVar8 = CONCAT44((uint)((ulong)plVar26 >> 0x28),uVar4);
                    uVar18 = uVar14;
                    uVar14 = uVar24;
                    uVar24 = uVar20;
                  }
                  *(undefined1 *)((long)piVar27 + 0x669) = 1;
                  FUN_100d82318(piVar27);
                  *piVar27 = 1;
                  *(long **)(piVar27 + 2) = plVar29;
                  *(undefined1 *)(piVar27 + 4) = uVar18;
                  *(int *)((long)piVar27 + 0x11) = (int)in_stack_00004d30;
                  piVar27[5] = (int)(in_stack_00004d30 >> 0x18);
                  *(undefined1 *)(piVar27 + 6) = uVar14;
                  *(int *)((long)piVar27 + 0x19) = (int)uVar33;
                  piVar27[7] = (int)(uVar33 >> 0x18);
                  *(undefined1 *)(piVar27 + 8) = uVar24;
                  *(int *)((long)piVar27 + 0x21) = (int)uVar8;
                  piVar27[9] = (int)(uVar8 >> 0x18);
                  *(undefined1 *)(piVar27 + 10) = uVar16;
                  piVar27[0xb] = (int)((uint7)uVar32 >> 0x18);
                  *(int *)((long)piVar27 + 0x29) = (int)uVar32;
                  *(long **)(piVar27 + 0xe) = plVar11;
                  *(long **)(piVar27 + 0xc) = plVar28;
                  in_stack_000060e0 = plVar28;
                  in_stack_000060e8 = plVar11;
                  goto joined_r0x000100958668;
                }
                *(undefined1 *)((long)piVar27 + 0x669) = 3;
                if (iVar13 != 0) {
                  iVar13 = 0;
                  bVar21 = true;
                  iVar7 = piVar27[0x19c];
                  if (iVar7 == 0) goto LAB_1009586e8;
                  goto LAB_100958b90;
                }
LAB_100958bd8:
                *puStack0000000000000090 = 3;
                goto LAB_100958d34;
              }
            }
            if (iVar13 == 0) {
LAB_100958bd0:
              if (bVar21) goto LAB_100958bd8;
              piVar27 = *(int **)(unaff_x20 + 0x3e30);
              if (*piVar27 == 1) {
                plVar9 = *(long **)(piVar27 + 2);
                *piVar27 = 2;
                if ((long *)0x8000000000000014 < plVar9) {
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b23ac48);
                  goto LAB_100957d64;
                }
                plVar15 = *(long **)(piVar27 + 6);
                plVar29 = *(long **)(piVar27 + 4);
                _uStack00000000000001a0 = *(long **)(piVar27 + 10);
                _uStack0000000000000198 = *(long **)(piVar27 + 8);
                in_stack_000001b0 = *(long **)(piVar27 + 0xe);
                in_stack_000001a8 = *(long **)(piVar27 + 0xc);
                in_stack_00000180 = plVar9;
                _uStack0000000000000188 = plVar29;
                _uStack0000000000000190 = plVar15;
                if (plVar9 == (long *)0x8000000000000014) {
                  if (plVar15 != (long *)0x8000000000000000) {
                    plVar26 = *(long **)(piVar27 + 10);
                    in_stack_00000088 = *(long **)(piVar27 + 8);
                    if (piVar27[0x19c] == 1) {
                      in_stack_00000180 = *(long **)(piVar27 + 0x19e);
                      piVar27[0x19c] = 2;
                      if ((long *)0x8000000000000014 < in_stack_00000180) {
                        in_stack_00000180 = plVar9;
                        __ZN4core9panicking5panic17h30f5ec71e3af4326E
                                  (&UNK_108ca1a1b,0x28,&UNK_10b23ac48);
                        goto LAB_100957d64;
                      }
                      plVar19 = *(long **)(piVar27 + 0x1a2);
                      plVar9 = *(long **)(piVar27 + 0x1a0);
                      _uStack00000000000001a0 = *(long **)(piVar27 + 0x1a6);
                      _uStack0000000000000198 = *(long **)(piVar27 + 0x1a4);
                      in_stack_000001b0 = *(long **)(piVar27 + 0x1aa);
                      in_stack_000001a8 = *(long **)(piVar27 + 0x1a8);
                      _uStack0000000000000188 = plVar9;
                      _uStack0000000000000190 = plVar19;
                      if (in_stack_00000180 == (long *)0x8000000000000014) {
                        if (plVar19 != (long *)0x8000000000000000) {
                          bVar21 = false;
                          plVar28 = *(long **)(piVar27 + 0x1a4);
                          in_stack_000060e0 = plVar29;
                          goto LAB_100958cfc;
                        }
                      }
                      else {
                        func_0x000100e35234(&stack0x00000180);
                      }
                      puVar10 = &UNK_108cb6a9c;
                      uVar22 = 0xe;
                    }
                    else {
                      puVar10 = &UNK_108ca6984;
                      uVar22 = 0x19;
                    }
                    FUN_107c05cac(puVar10,uVar22,&UNK_10b22bdc8);
                    goto LAB_100957d64;
                  }
                }
                else {
                  func_0x000100e35234(&stack0x00000180);
                }
                puVar10 = &UNK_108cb6a9c;
                uVar22 = 0xe;
              }
              else {
                puVar10 = &UNK_108ca6984;
                uVar22 = 0x19;
              }
              FUN_107c05cac(puVar10,uVar22,&UNK_10b22bdc8);
              goto LAB_100957d64;
            }
            piVar27 = *(int **)(unaff_x20 + 0x3e30);
            iVar13 = iVar13 + -1;
            iVar7 = piVar27[0x19c];
            if (iVar7 != 0) {
LAB_100958b90:
              if (iVar7 != 1) {
LAB_100959590:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108ca1ba4,0x45,&UNK_10b24e878);
                goto LAB_100957d64;
              }
              plVar29 = *(long **)(piVar27 + 0x19e);
              iVar7 = 0;
              if (plVar29 != (long *)0x8000000000000014) break;
              goto LAB_100958638;
            }
LAB_1009586e8:
            bVar2 = *(byte *)((long)piVar27 + 0xcd9);
            puVar10 = &UNK_10b22bdf8;
            if (bVar2 < 2) {
              if (bVar2 != 0) {
LAB_1009596dc:
                FUN_107c05cc0();
                goto LAB_100957d64;
              }
              *(undefined1 *)(piVar27 + 0x336) = 1;
              *(undefined8 *)(piVar27 + 0x32e) = *(undefined8 *)(piVar27 + 0x334);
              *(undefined8 *)(piVar27 + 0x32c) = *(undefined8 *)(piVar27 + 0x332);
              *(undefined2 *)(piVar27 + 0x330) = 0x100;
            }
            else if (bVar2 != 3) goto LAB_1009596d4;
            FUN_100a73bd0(&stack0x00000180,piVar27 + 0x19e,in_stack_00000088);
            plVar11 = in_stack_000001b0;
            plVar28 = in_stack_000001a8;
            plVar15 = _uStack00000000000001a0;
            plVar26 = _uStack0000000000000198;
            plVar19 = _uStack0000000000000190;
            plVar9 = _uStack0000000000000188;
            plVar29 = in_stack_00000180;
            if (in_stack_00000180 == (long *)0x8000000000000015) {
              iVar7 = 0;
              *(undefined1 *)((long)piVar27 + 0xcd9) = 3;
              bVar21 = true;
              goto LAB_100958638;
            }
            uVar24 = uStack0000000000000188;
            uVar16 = uStack0000000000000190;
            uVar14 = uStack0000000000000198;
            uVar4 = uStack0000000000000199;
            uVar20 = uStack00000000000001a0;
            if ((char)piVar27[0x330] == '\x03') {
              FUN_100d0391c(piVar27 + 0x19e);
            }
            uVar33 = (uint7)((ulong)plVar9 >> 8);
            if (plVar29 == (long *)0x8000000000000014) {
              uVar8 = (ulong)plVar19 >> 8;
              uVar32 = (undefined7)((ulong)plVar26 >> 8);
              uVar18 = uVar24;
              uVar20 = uVar14;
              uVar24 = (char)piVar27[0x336];
            }
            else {
              uVar32 = (undefined7)((ulong)plVar15 >> 8);
              in_stack_00004d30 = (ulong)uVar33;
              uVar33 = (uint7)((ulong)plVar19 >> 8);
              uVar8 = CONCAT44((uint)((ulong)plVar26 >> 0x28),uVar4);
              uVar18 = uVar16;
              uVar16 = uVar14;
              in_stack_000060e0 = plVar28;
              in_stack_000060e8 = plVar11;
            }
            *(undefined1 *)((long)piVar27 + 0xcd9) = 1;
            FUN_100d82318(piVar27 + 0x19c);
            piVar27[0x19c] = 1;
            *(long **)(piVar27 + 0x19e) = plVar29;
            *(undefined1 *)(piVar27 + 0x1a0) = uVar24;
            piVar27[0x1a1] = (int)(in_stack_00004d30 >> 0x18);
            *(int *)((long)piVar27 + 0x681) = (int)in_stack_00004d30;
            *(undefined1 *)(piVar27 + 0x1a2) = uVar18;
            piVar27[0x1a3] = (int)(uVar33 >> 0x18);
            *(int *)((long)piVar27 + 0x689) = (int)uVar33;
            *(undefined1 *)(piVar27 + 0x1a4) = uVar16;
            piVar27[0x1a5] = (int)(uVar8 >> 0x18);
            *(int *)((long)piVar27 + 0x691) = (int)uVar8;
            *(undefined1 *)(piVar27 + 0x1a6) = uVar20;
            piVar27[0x1a7] = (int)((uint7)uVar32 >> 0x18);
            *(int *)((long)piVar27 + 0x699) = (int)uVar32;
            *(long **)(piVar27 + 0x1aa) = in_stack_000060e8;
            *(long **)(piVar27 + 0x1a8) = in_stack_000060e0;
            iVar7 = 0;
          } while (plVar29 == (long *)0x8000000000000014);
          piVar27[0x19c] = 2;
          plVar15 = *(long **)(piVar27 + 0x1a0);
          in_stack_00000088 = *(long **)(piVar27 + 0x1a2);
          plVar26 = *(long **)(piVar27 + 0x1a4);
          plVar9 = *(long **)(piVar27 + 0x1a6);
          plVar19 = *(long **)(piVar27 + 0x1a8);
          bVar21 = true;
          plVar28 = *(long **)(piVar27 + 0x1aa);
LAB_100958cfc:
          FUN_100d82318(unaff_x20 + 0x3150);
          FUN_100d82318(unaff_x20 + 0x37c0);
          if (!bVar21) {
            FUN_10042b1fc(&stack0x000060e0,&stack0x00004d30);
            if (in_stack_000060e0 == (long *)0x8000000000000000) {
              FUN_100e3a7c4(&stack0x00004d30);
              plVar26 = (long *)0x0;
              in_stack_00000088 = (long *)0x8;
              plVar9 = (long *)0x0;
            }
            else {
              in_stack_00000088 = (long *)_malloc(0x800);
              if (in_stack_00000088 == (long *)0x0) {
                func_0x0001087c9084(8,0x800);
                goto LAB_100957d64;
              }
              lVar12 = 0x200;
              _memcpy(in_stack_00000088,&stack0x000060e0,0x200);
              plVar26 = (long *)0x1;
              while (FUN_10042b1fc(&stack0x00000180,&stack0x000056b0),
                    in_stack_00000180 != (long *)0x8000000000000000) {
                if (plVar26 == (long *)0x4) {
                  FUN_108855060(&stack0x000060a0,4,1,8,0x200);
                }
                _memcpy((long)in_stack_00000088 + lVar12,&stack0x00000180,0x200);
                plVar26 = (long *)((long)plVar26 + 1);
                lVar12 = lVar12 + 0x200;
              }
              FUN_100e3a7c4(&stack0x000056b0);
              plVar9 = (long *)0x4;
              in_stack_00000180 = (long *)&stack0x000060e0;
              if (plVar26 < (long *)0x2) {
                plVar26 = (long *)0x1;
                plVar9 = (long *)0x4;
              }
              else if (plVar26 < (long *)0x15) {
                FUN_100e94b68(in_stack_00000088,plVar26);
              }
              else {
                __ZN4core5slice4sort6stable14driftsort_main17h8327118381420963E
                          (in_stack_00000088,plVar26,&stack0x00000180);
              }
            }
            unaff_x19[0xde0] = 0;
            plVar29 = (long *)0x8000000000000014;
            goto LAB_100958480;
          }
          unaff_x19[0xde0] = 0;
          unaff_x19[0xde1] = 1;
          if (plVar29 == (long *)0x8000000000000015) {
LAB_100958d34:
            unaff_x25 = -0x7fffffffffffffec;
            unaff_x19[0xdf9] = 3;
            unaff_x19[0xe00] = 3;
            *unaff_x19 = 7;
            goto LAB_1009594cc;
          }
        }
        if (plVar29 == (long *)0x8000000000000014) {
          if (*(long *)(unaff_x20 + 0x3138) != 0) {
            _free(*(undefined8 *)(unaff_x20 + 0x3140));
          }
          __ZN18codex_core_plugins6remote46group_remote_installed_plugins_by_marketplaces17had27686268729aa5E
                    (&stack0x00006ad0,in_stack_00000088,plVar26,*(undefined8 *)(unaff_x20 + 0x30f8),
                     *(undefined8 *)(unaff_x20 + 0x3100));
          plVar29 = (long *)0x8000000000000014;
          in_stack_00000180 = plVar15;
          _uStack0000000000000188 = in_stack_00000088;
          _uStack0000000000000190 = plVar26;
          uVar8 = __ZN18codex_core_plugins7manager14PluginsManager36write_remote_installed_plugins_cache17hd35493d1a4891d75E
                            (*(undefined8 *)(unaff_x20 + 0x3130),&stack0x00000180);
          if (((uVar8 & 1) != 0) &&
             (plVar26 = *(long **)(unaff_x20 + 0x3108), plVar26 != (long *)0x0)) {
            unaff_x19[0xdf8] = 0;
            _uStack0000000000000188 = *(long **)(unaff_x20 + 0x3110);
            in_stack_00000180 = plVar26;
            (*(code *)_uStack0000000000000188[5])
                      ((long)plVar26 + (_uStack0000000000000188[2] - 1U & 0xfffffffffffffff0) + 0x10
                      );
            lVar12 = *plVar26;
            *plVar26 = lVar12 + -1;
            LORelease();
            if (lVar12 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001060f673c(&stack0x00000180);
            }
          }
          plVar26 = *(long **)(unaff_x20 + 0x3108);
          if ((plVar26 != (long *)0x0) && (unaff_x19[0xdf8] == '\x01')) {
            lVar12 = *plVar26;
            *plVar26 = lVar12 + -1;
            LORelease();
            if (lVar12 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001060f673c(unaff_x20 + 0x3108);
            }
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0x3138) != 0) {
            _free(*(undefined8 *)(unaff_x20 + 0x3140));
          }
          plVar11 = *(long **)(unaff_x20 + 0x3108);
          in_stack_00006ad0 = plVar15;
          in_stack_00006ae0 = plVar26;
          in_stack_00006ad8 = in_stack_00000088;
          if (plVar11 != (long *)0x0) {
            lVar12 = *plVar11;
            *plVar11 = lVar12 + -1;
            LORelease();
            if (lVar12 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001060f673c(unaff_x20 + 0x3108);
            }
          }
        }
        *(undefined2 *)(unaff_x19 + 0xdf8) = 0x100;
        FUN_100d3e968(unaff_x20 + 0x30e8);
        in_stack_000074c8 = in_stack_00006ad0;
        in_stack_000074d0 = in_stack_00006ad8;
        if (plVar29 == (long *)0x8000000000000014) goto LAB_10095904c;
        if ((long)plVar29 < -0x7ffffffffffffffe) {
          func_0x000100e35234(&stack0x000074c0);
        }
        else {
          in_stack_00000180 = plVar29;
          _uStack0000000000000188 = in_stack_00006ad0;
          _uStack0000000000000190 = in_stack_00006ad8;
          _uStack0000000000000198 = in_stack_00006ae0;
          _uStack00000000000001a0 = plVar9;
          in_stack_000001a8 = plVar19;
          in_stack_000001b0 = plVar28;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bRam000000010b627e88 - 1 < 2 ||
               ((bRam000000010b627e88 != 0 &&
                (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29load_remote_installed_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1e5cac907fa9be49E
                                   ), cVar6 != '\0')))) &&
              (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29load_remote_installed_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1e5cac907fa9be49E
                                 ), (uVar8 & 1) != 0)))) {
            FUN_100976b0c(&stack0x000060e0);
          }
          else {
            uVar22 = 
            ___ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor29load_remote_installed_plugins28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1e5cac907fa9be49E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar10 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar10 = &UNK_10b3c24c8;
              }
              puVar1 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(puVar10 + 0x18))(puVar1,&stack0x00007500);
              if (iVar7 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (uVar22,puVar1,puVar10,&stack0x00007500,&stack0x000060e0);
              }
            }
          }
          func_0x000100e35234(&stack0x00000180);
        }
        uVar8 = 0;
        in_stack_00006ae0 = (long *)0x0;
        plVar9 = (long *)0x8;
        lVar12 = **(long **)(unaff_x20 + 0x30e0);
        **(long **)(unaff_x20 + 0x30e0) = lVar12 + -1;
        LORelease();
      }
      else {
        *(long **)(unaff_x27 + 0x10) = _uStack0000000000000188;
        *(long **)(unaff_x27 + 8) = in_stack_00000180;
        in_stack_00006ae0 = _uStack0000000000000190;
LAB_10095904c:
        if ((long *)0x155555555555555 < in_stack_00006ae0) {
          uVar22 = 0;
LAB_10095906c:
          func_0x0001087c9084(uVar22,plVar19);
LAB_100957d64:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100957d68);
          (*pcVar5)();
        }
        if (in_stack_00006ae0 == (long *)0x0) {
          uVar8 = 0;
          plVar9 = (long *)0x8;
        }
        else {
          plVar19 = (long *)((long)in_stack_00006ae0 * 0x60);
          plVar9 = (long *)_malloc(plVar19);
          if (plVar9 == (long *)0x0) {
            uVar22 = 8;
            goto LAB_10095906c;
          }
          uVar8 = 0;
          lVar12 = (long)in_stack_00006ae0 * 0x48;
          plVar19 = plVar9;
          do {
            __ZN16codex_app_server18request_processors7plugins26remote_marketplace_to_info17hd66e5b9a60d6616bE
                      (&stack0x00000180,&stack0x00006ad0);
            plVar19[5] = (long)in_stack_000001a8;
            plVar19[4] = (long)_uStack00000000000001a0;
            plVar19[7] = in_stack_000001b8;
            plVar19[6] = (long)in_stack_000001b0;
            plVar19[9] = in_stack_000001c8;
            plVar19[8] = in_stack_000001c0;
            plVar19[0xb] = in_stack_000001d8;
            plVar19[10] = in_stack_000001d0;
            uVar8 = uVar8 + 1;
            plVar19[1] = (long)_uStack0000000000000188;
            *plVar19 = (long)in_stack_00000180;
            plVar19[3] = (long)_uStack0000000000000198;
            plVar19[2] = (long)_uStack0000000000000190;
            lVar12 = lVar12 + -0x48;
            plVar19 = plVar19 + 0xc;
          } while (lVar12 != 0);
        }
        if (in_stack_000074c8 != (long *)0x0) {
          _free(in_stack_000074d0);
        }
        lVar12 = **(long **)(unaff_x20 + 0x30e0);
        **(long **)(unaff_x20 + 0x30e0) = lVar12 + -1;
        LORelease();
      }
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x20 + 0x30e0);
      }
      unaff_x19[0xe00] = 1;
      plVar19 = *(long **)(unaff_x20 + 0x30a8);
      _uStack0000000000000198 = plVar9 + uVar8 * 0xc;
      lVar12 = plVar19[2];
      in_stack_00000180 = plVar9;
      _uStack0000000000000188 = plVar9;
      _uStack0000000000000190 = in_stack_00006ae0;
      if ((ulong)(*plVar19 - lVar12) < uVar8) {
        FUN_108855060(plVar19,lVar12,uVar8,8,0x60);
        lVar12 = plVar19[2];
      }
      _memcpy(plVar19[1] + lVar12 * 0x60,plVar9,uVar8 * 0x60);
      plVar19[2] = lVar12 + uVar8;
      if (in_stack_00006ae0 != (long *)0x0) {
        _free(plVar9);
      }
      plStack00000000000000b8 = *(long **)(unaff_x20 + 0x3078);
      plVar26 = *(long **)(unaff_x20 + 0x3080);
      plStack00000000000000b0 = *(long **)(unaff_x20 + 0x3088);
      in_stack_000000a8 = *(long **)(unaff_x20 + 0x3090);
      in_stack_00000098 = *(long **)(unaff_x20 + 0x3098);
      in_stack_000000a0 = *(long **)(unaff_x20 + 0x30a0);
      if (*(long *)(unaff_x20 + 0x3058) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x3060));
      }
      FUN_100e05b5c(unaff_x20 + 0x26d8);
      unaff_x25 = -0x7fffffffffffffec;
      if (*(long *)(unaff_x20 + 0x3038) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x3040));
      }
      if (*(long *)(unaff_x20 + 0x2640) != -0x7ffffffffffffffd) {
        FUN_100e0609c(unaff_x20 + 0x2640);
      }
      FUN_100de93d0(unaff_x20 + 0xf8);
      *(undefined2 *)(unaff_x19 + 1) = 0;
      unaff_x19[4] = 0;
      plVar9 = (long *)0x8000000000000000;
      in_stack_000060a0 = in_stack_00004d00;
      in_stack_000060a8 = in_stack_00004d08;
      in_stack_000060b0 = in_stack_00004d10;
      in_stack_000060b8 = in_stack_00004d18;
      in_stack_000060c0 = in_stack_00004d20;
    }
    else {
      if (*(long *)(unaff_x20 + 0x3058) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x3060));
      }
      FUN_100e05b5c(unaff_x20 + 0x26d8);
      if (*(long *)(unaff_x20 + 0x3038) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x3040));
      }
      if (*(long *)(unaff_x20 + 0x2640) != -0x7ffffffffffffffd) {
        FUN_100e0609c(unaff_x20 + 0x2640);
      }
      FUN_100de93d0(unaff_x20 + 0xf8);
      if (((unaff_x19[1] & 1) != 0) && (lVar12 = *(long *)(unaff_x20 + 0xd0), lVar12 != 0)) {
        lVar23 = *(long *)(unaff_x20 + 0xe0);
        if (lVar23 != 0) {
          plVar19 = *(long **)(unaff_x20 + 200);
          plVar29 = plVar19 + 1;
          lVar30 = *plVar19;
          uVar8 = CONCAT17(-(-1 < lVar30),
                           CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar30 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar30
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar30 >> 8)),-(-1 < (char)lVar30)))))))) &
                  0x8080808080808080;
          do {
            while (uVar8 == 0) {
              lVar30 = *plVar29;
              plVar19 = plVar19 + -0x18;
              plVar29 = plVar29 + 1;
              uVar8 = CONCAT17(-(-1 < lVar30),
                               CONCAT16(-(-1 < (char)((ulong)lVar30 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar30 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar30 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar30 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar30 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar30 >> 8)),
                                                           -(-1 < (char)lVar30)))))))) &
                      0x8080808080808080;
            }
            uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            iVar7 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
            if (plVar19[(long)-iVar7 * 3 + -3] != 0) {
              _free(plVar19[(long)-iVar7 * 3 + -2]);
            }
            uVar8 = uVar8 - 1 & uVar8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        unaff_x25 = -0x7fffffffffffffec;
        if (lVar12 * 0x19 != -0x21) {
          _free(*(long *)(unaff_x20 + 200) + lVar12 * -0x18 + -0x18);
        }
      }
      unaff_x19[1] = 0;
      if ((unaff_x19[2] & 1) != 0) {
        lVar12 = *(long *)(unaff_x20 + 0xb8);
        lVar23 = *(long *)(unaff_x20 + 0xc0);
        if (lVar23 != 0) {
          puVar17 = (undefined8 *)(lVar12 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (*(long *)(unaff_x20 + 0xb0) != 0) {
          _free(lVar12);
        }
      }
      unaff_x19[2] = 0;
      unaff_x19[4] = 0;
      lVar12 = **(long **)(unaff_x20 + 0xa8);
      **(long **)(unaff_x20 + 0xa8) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E();
      }
    }
    unaff_x19[3] = 0;
    *(undefined2 *)(unaff_x19 + 5) = 0;
    *unaff_x19 = 1;
    if (plVar9 != (long *)0x8000000000000001) {
      FUN_100d37884(in_stack_000000c0);
      if (plVar9 == (long *)0x8000000000000000) {
        lVar12 = unaff_x25 + 0xe;
        plVar19 = plVar26;
        plVar29 = in_stack_000000a8;
        in_stack_000000a8 = in_stack_00000098;
        in_stack_00000098 = in_stack_000000a0;
        plVar9 = plStack00000000000000b8;
        plVar26 = plStack00000000000000b0;
      }
      else {
        lVar12 = unaff_x25 + 0x5c;
        plVar19 = plStack00000000000000b8;
        plVar29 = plStack00000000000000b0;
        in_stack_00000130 = in_stack_000060a0;
        in_stack_00000138 = in_stack_000060a8;
        in_stack_00000140 = in_stack_000060b0;
        in_stack_00000148 = in_stack_000060b8;
        in_stack_00000150 = in_stack_000060c0;
      }
      *unaff_x21 = lVar12;
      unaff_x21[1] = (long)plVar9;
      unaff_x21[2] = (long)plVar19;
      unaff_x21[3] = (long)plVar26;
      unaff_x21[4] = (long)plVar29;
      unaff_x21[5] = (long)in_stack_000000a8;
      unaff_x21[6] = (long)in_stack_00000098;
      unaff_x21[7] = (long)in_stack_000000a0;
      unaff_x21[9] = in_stack_00000138;
      unaff_x21[8] = in_stack_00000130;
      unaff_x21[0xb] = in_stack_00000148;
      unaff_x21[10] = in_stack_00000140;
      uVar24 = 1;
      unaff_x21[0xc] = in_stack_00000150;
      unaff_x21[0xd] = (long)puStack0000000000000090;
      goto LAB_1009594d8;
    }
  }
LAB_1009594cc:
  *unaff_x21 = unaff_x25 + 0x5d;
  uVar24 = 3;
LAB_1009594d8:
  *(undefined1 *)(in_stack_000000c8 + 8) = uVar24;
  return;
}

