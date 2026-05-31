
void __ZN136__LT_codex_tui__onboarding__onboarding_screen__OnboardingScreen_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_12handle_paste17hda3ebd9672715c85E
               (long param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  char *pcVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  byte unaff_w24;
  long lVar21;
  ulong in_xzr;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2[2] != 0) {
    FUN_1053d7780(&lStack_58,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (lStack_48 == 0) {
      puVar17 = (ulong *)0x0;
    }
    else {
      puVar17 = *(ulong **)(lStack_50 + lStack_48 * 8 + -8);
    }
    if (lStack_58 != 0) {
      _free();
    }
    if (puVar17 != (ulong *)0x0) {
      uVar12 = *puVar17 ^ 0x8000000000000000;
      if (-1 < (long)*puVar17) {
        uVar12 = 2;
      }
      if ((uVar12 == 0) || (uVar12 != 1)) {
        if (*param_2 != 0) {
          _free(param_2[1]);
        }
      }
      else {
        __ZN121__LT_codex_tui__onboarding__auth__AuthModeWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_12handle_paste17h2edc3ffee7ce0721E
                  (puVar17 + 1,param_2);
      }
      auVar24 = func_0x000106032954(8);
      param_2 = auVar24._0_8_;
      lVar19 = *(long *)(param_1 + 0x18);
      uVar12 = *(ulong *)(lVar19 + 0x1c0);
      while( true ) {
        if ((uVar12 & 1) != 0) {
          return;
        }
        if (uVar12 == 0xfffffffffffffffe) break;
        uVar20 = uVar12 + 2;
        uVar15 = *(ulong *)(lVar19 + 0x1c0);
        bVar4 = uVar15 == uVar12;
        uVar12 = uVar15;
        if (bVar4) {
          *(ulong *)(lVar19 + 0x1c0) = uVar20;
          LOAcquire();
          uVar12 = *(ulong *)(lVar19 + 0x88);
          *(ulong *)(lVar19 + 0x88) = uVar12 + 1;
          lVar8 = func_0x000105217788(lVar19 + 0x80,uVar12);
          *(undefined1 (*) [12])(lVar8 + (uVar12 & 0x1f) * 0x10) = auVar24;
          *(ulong *)(lVar8 + 0x210) = *(ulong *)(lVar8 + 0x210) | 1L << (uVar12 & 0x1f);
          LORelease();
          puVar17 = (ulong *)(lVar19 + 0x110);
          LOAcquire();
          uVar12 = *puVar17;
          *puVar17 = uVar12 | 2;
          LORelease();
          if (uVar12 != 0) {
            return;
          }
          lVar8 = *(long *)(lVar19 + 0x100);
          *(undefined8 *)(lVar19 + 0x100) = 0;
          uVar12 = *puVar17;
          *puVar17 = in_xzr;
          LORelease();
          if (lVar8 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001050c632c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 8))(uVar12,*(undefined8 *)(lVar19 + 0x108));
          return;
        }
      }
LAB_1050c641c:
      uVar9 = __ZN3std7process5abort17hdc01e45e25b715e8E();
      if (*param_2 != 0) {
        _free(param_2[1]);
      }
      auVar22 = __Unwind_Resume(uVar9);
      lVar19 = auVar22._0_8_;
      bVar5 = *(byte *)(auVar22._8_8_ + 10);
      auVar23[8] = bVar5;
      auVar23._0_8_ = auVar22._8_8_;
      auVar23._9_7_ = 0;
      if (1 < bVar5) {
        return;
      }
      puVar17 = (ulong *)(*(long *)(lVar19 + 8) + -0x40);
      lVar8 = *(long *)(lVar19 + 0x10) * 0x68;
      do {
        if (lVar8 == 0) {
          uVar12 = 0;
          goto LAB_1050c6644;
        }
        puVar1 = puVar17 + 8;
        puVar17 = puVar17 + 0xd;
        lVar8 = lVar8 + -0x68;
      } while (*puVar1 != 0x8000000000000001);
      uVar20 = *puVar17;
      uVar12 = *(ulong *)(uVar20 + 0x10);
      do {
        if (((0xffffffffffffffef < uVar12) || (uVar12 == 1)) || (((uint)uVar12 >> 1 & 1) != 0)) {
          func_0x000108a82360(uVar20 + 0x10,0);
          cVar6 = *(char *)(uVar20 + 0x18);
          goto joined_r0x0001050c6534;
        }
        uVar13 = uVar12 | 1;
        uVar15 = *(ulong *)(uVar20 + 0x10);
        bVar4 = uVar15 != uVar12;
        uVar12 = uVar15;
      } while (bVar4);
      *(ulong *)(uVar20 + 0x10) = uVar13 + 0x10;
      cVar6 = *(char *)(uVar20 + 0x18);
joined_r0x0001050c6534:
      if (cVar6 == '\0') {
        lVar8 = *(long *)(uVar20 + 0x20);
        uVar12 = *(ulong *)(uVar20 + 0x10);
        do {
          if (((uint)uVar12 >> 1 & 1) == 0) {
            uVar15 = 0;
            if (uVar12 - 0x11 != 0) {
              uVar15 = uVar12 - 0x11 | 1;
            }
          }
          else {
            if (((uint)uVar12 >> 3 & 1) == 0) {
              func_0x000108a82590(uVar20 + 0x10);
              goto LAB_1050c659c;
            }
            uVar15 = uVar12 & 0xfffffffffffffff6;
          }
          uVar13 = *(ulong *)(uVar20 + 0x10);
          bVar4 = uVar13 != uVar12;
          uVar12 = uVar13;
        } while (bVar4);
        *(ulong *)(uVar20 + 0x10) = uVar15;
LAB_1050c659c:
        uVar12 = (ulong)(lVar8 == -0x7ffffffffffffffb);
      }
      else {
        uVar12 = *(ulong *)(uVar20 + 0x10);
        do {
          if (((uint)uVar12 >> 1 & 1) == 0) {
            uVar15 = 0;
            if (uVar12 - 0x11 != 0) {
              uVar15 = uVar12 - 0x11 | 1;
            }
          }
          else {
            if (((uint)uVar12 >> 3 & 1) == 0) {
              func_0x000108a82590(uVar20 + 0x10);
              goto LAB_1050c658c;
            }
            uVar15 = uVar12 & 0xfffffffffffffff6;
          }
          uVar13 = *(ulong *)(uVar20 + 0x10);
          bVar4 = uVar13 != uVar12;
          uVar12 = uVar13;
        } while (bVar4);
        *(ulong *)(uVar20 + 0x10) = uVar15;
LAB_1050c658c:
        uVar12 = 0;
      }
      puVar17 = (ulong *)*puVar17;
      uVar20 = puVar17[2];
      do {
        if (((0xffffffffffffffef < uVar20) || (uVar20 == 1)) || (((uint)uVar20 >> 1 & 1) != 0)) {
          func_0x000108a82360(puVar17 + 2,0);
          cVar6 = (char)puVar17[3];
          goto joined_r0x0001050c690c;
        }
        uVar13 = uVar20 | 1;
        uVar15 = puVar17[2];
        bVar4 = uVar15 != uVar20;
        uVar20 = uVar15;
      } while (bVar4);
      puVar17[2] = uVar13 + 0x10;
      cVar6 = (char)puVar17[3];
joined_r0x0001050c690c:
      if (cVar6 == '\0') {
        if (puVar17[4] == 0x8000000000000005) {
          unaff_w24 = puVar17[7] != 0;
        }
        else {
          unaff_w24 = false;
        }
        uVar20 = puVar17[2];
        do {
          if (((uint)uVar20 >> 1 & 1) == 0) {
            uVar15 = 0;
            if (uVar20 - 0x11 != 0) {
              uVar15 = uVar20 - 0x11 | 1;
            }
          }
          else {
            if (((uint)uVar20 >> 3 & 1) == 0) goto LAB_1050c6984;
            uVar15 = uVar20 & 0xfffffffffffffff6;
          }
          uVar13 = puVar17[2];
          bVar4 = uVar13 != uVar20;
          uVar20 = uVar13;
        } while (bVar4);
        puVar17[2] = uVar15;
      }
      else {
        uVar20 = puVar17[2];
        do {
          while (((uint)uVar20 >> 1 & 1) == 0) {
            uVar15 = 0;
            if (uVar20 - 0x11 != 0) {
              uVar15 = uVar20 - 0x11 | 1;
            }
            uVar13 = puVar17[2];
            bVar4 = uVar13 == uVar20;
            uVar20 = uVar13;
            if (bVar4) {
              puVar17[2] = uVar15;
              goto LAB_1050c6640;
            }
          }
          if (((uint)uVar20 >> 3 & 1) == 0) goto LAB_1050c6980;
          uVar13 = uVar20 & 0xfffffffffffffff6;
          uVar15 = puVar17[2];
          bVar4 = uVar15 != uVar20;
          uVar20 = uVar15;
        } while (bVar4);
        puVar17[2] = uVar13;
LAB_1050c6640:
        unaff_w24 = 0;
      }
LAB_1050c6644:
      pcVar16 = auVar23._0_8_;
      if ((auVar23._8_4_ == 0) &&
         ((((uVar20 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                                (&UNK_108ee5530,pcVar16), (uVar20 & 1) != 0 ||
            (uVar20 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                                (&UNK_108ee553c,pcVar16), (uVar20 & 1) != 0)) ||
           (iVar7 = __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE
                              (&UNK_108ee5548,pcVar16), iVar7 != 0)) &&
          (((((uVar12 & 1) == 0 || ((unaff_w24 & 1) == 0)) || (*pcVar16 != '\x0f')) ||
           ((pcVar16[8] & 6U) != 0)))))) {
        if (*(long *)(lVar19 + 0x10) != 0) {
          lVar11 = *(long *)(lVar19 + 8);
          lVar18 = *(long *)(lVar19 + 0x10) * 0x68;
          lVar8 = lVar11 + 8;
          puVar17 = (ulong *)0x8000000000000001;
          lVar21 = lVar18;
LAB_1050c676c:
          if ((*(long *)(lVar8 + -8) != -0x7fffffffffffffff) ||
             (cVar6 = __ZN123__LT_codex_tui__onboarding__auth__AuthModeWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__StepStateProvider_GT_14get_step_state17h9799fc6f2bbf7ec4E
                                (lVar8), cVar6 != '\x01')) goto LAB_1050c6760;
          lVar11 = lVar11 + 8;
          do {
            if (*(long *)(lVar11 + -8) == -0x7fffffffffffffff) {
              FUN_1053da564(lVar11);
            }
            lVar11 = lVar11 + 0x68;
            lVar18 = lVar18 + -0x68;
          } while (lVar18 != 0);
          goto LAB_1050c6804;
        }
        goto LAB_1050c680c;
      }
      plVar14 = *(long **)(lVar19 + 8);
      lVar8 = *(long *)(lVar19 + 0x10);
      plVar10 = plVar14 + -0xc;
      lVar11 = lVar8 * 0x68;
      do {
        if (lVar11 == 0) goto LAB_1050c667c;
        plVar2 = plVar10 + 0xc;
        plVar10 = plVar10 + 0xd;
        lVar11 = lVar11 + -0x68;
      } while (*plVar2 != -0x8000000000000000);
      __ZN123__LT_codex_tui__onboarding__welcome__WelcomeWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_16handle_key_event17h66e1d9720ab94331E
                (plVar10,pcVar16);
LAB_1050c667c:
      FUN_1053d7780(&lStack_c8,plVar14,lVar8);
      if (lStack_b8 == 0) {
        puVar17 = (ulong *)0x0;
      }
      else {
        puVar17 = *(ulong **)(lStack_c0 + lStack_b8 * 8 + -8);
      }
      if (lStack_c8 != 0) {
        _free();
      }
      if (puVar17 != (ulong *)0x0) {
        uVar12 = *puVar17 ^ 0x8000000000000000;
        if (-1 < (long)*puVar17) {
          uVar12 = 2;
        }
        if (uVar12 == 0) {
          __ZN123__LT_codex_tui__onboarding__welcome__WelcomeWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_16handle_key_event17h66e1d9720ab94331E
                    (puVar17 + 1,pcVar16);
        }
        else if (uVar12 == 1) {
          __ZN121__LT_codex_tui__onboarding__auth__AuthModeWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_16handle_key_event17h4c5f6c2cbf4d2102E
                    (puVar17 + 1,pcVar16);
        }
        else {
          __ZN138__LT_codex_tui__onboarding__trust_directory__TrustDirectoryWidget_u20_as_u20_codex_tui__onboarding__onboarding_screen__KeyboardHandler_GT_16handle_key_event17hd5814ac6e8061cd2E
                    (puVar17,pcVar16);
        }
      }
      if (lVar8 != 0) {
        lVar8 = lVar8 * 0x68;
        do {
          if ((-1 < *plVar14) && ((*(byte *)((long)plVar14 + 0x61) & 1) != 0)) goto LAB_1050c6804;
          lVar8 = lVar8 + -0x68;
          plVar14 = plVar14 + 0xd;
        } while (lVar8 != 0);
      }
      goto LAB_1050c6814;
    }
    auVar24 = func_0x000106032954(8);
    lVar19 = *(long *)(param_1 + 0x18);
    uVar12 = *(ulong *)(lVar19 + 0x1c0);
    do {
      if ((uVar12 & 1) != 0) goto LAB_1050c63e0;
      if (uVar12 == 0xfffffffffffffffe) goto LAB_1050c641c;
      uVar20 = uVar12 + 2;
      uVar15 = *(ulong *)(lVar19 + 0x1c0);
      bVar4 = uVar15 != uVar12;
      uVar12 = uVar15;
    } while (bVar4);
    *(ulong *)(lVar19 + 0x1c0) = uVar20;
    LOAcquire();
    uVar12 = *(ulong *)(lVar19 + 0x88);
    *(ulong *)(lVar19 + 0x88) = uVar12 + 1;
    lVar8 = func_0x000105217788(lVar19 + 0x80,uVar12);
    *(undefined1 (*) [12])(lVar8 + (uVar12 & 0x1f) * 0x10) = auVar24;
    *(ulong *)(lVar8 + 0x210) = *(ulong *)(lVar8 + 0x210) | 1L << (uVar12 & 0x1f);
    LORelease();
    puVar17 = (ulong *)(lVar19 + 0x110);
    LOAcquire();
    uVar12 = *puVar17;
    *puVar17 = uVar12 | 2;
    LORelease();
    if (uVar12 == 0) {
      lVar8 = *(long *)(lVar19 + 0x100);
      *(undefined8 *)(lVar19 + 0x100) = 0;
      *puVar17 = in_xzr;
      LORelease();
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar19 + 0x108));
      }
    }
  }
LAB_1050c63e0:
  if (*param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_2[1]);
  return;
LAB_1050c6760:
  lVar8 = lVar8 + 0x68;
  lVar21 = lVar21 + -0x68;
  if (lVar21 == 0) goto LAB_1050c680c;
  goto LAB_1050c676c;
LAB_1050c6804:
  *(undefined1 *)(lVar19 + 0x21) = 1;
LAB_1050c680c:
  *(undefined1 *)(lVar19 + 0x20) = 1;
LAB_1050c6814:
  auVar23 = func_0x000106032954(8);
  uVar12 = *(ulong *)(lVar19 + 0x18);
  uVar20 = *(ulong *)(uVar12 + 0x1c0);
  while( true ) {
    if ((uVar20 & 1) != 0) {
      return;
    }
    if (uVar20 == 0xfffffffffffffffe) break;
    uVar15 = uVar20 + 2;
    uVar13 = *(ulong *)(uVar12 + 0x1c0);
    bVar4 = uVar13 == uVar20;
    uVar20 = uVar13;
    if (bVar4) {
      *(ulong *)(uVar12 + 0x1c0) = uVar15;
      LOAcquire();
      uVar20 = *(ulong *)(uVar12 + 0x88);
      *(ulong *)(uVar12 + 0x88) = uVar20 + 1;
      lVar19 = func_0x000105217788(uVar12 + 0x80,uVar20);
      puVar3 = (undefined8 *)(lVar19 + (uVar20 & 0x1f) * 0x10);
      *puVar3 = auVar23._0_8_;
      *(int *)(puVar3 + 1) = auVar23._8_4_;
      *(ulong *)(lVar19 + 0x210) = *(ulong *)(lVar19 + 0x210) | 1L << (uVar20 & 0x1f);
      LORelease();
      puVar17 = (ulong *)(uVar12 + 0x110);
      LOAcquire();
      uVar20 = *puVar17;
      *puVar17 = uVar20 | 2;
      LORelease();
      if (uVar20 != 0) {
        return;
      }
      lVar19 = *(long *)(uVar12 + 0x100);
      *(undefined8 *)(uVar12 + 0x100) = 0;
      uVar20 = *puVar17;
      *puVar17 = in_xzr;
      LORelease();
      if (lVar19 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001050c68e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))(uVar20,*(undefined8 *)(uVar12 + 0x108));
      return;
    }
  }
  __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_1050c6980:
  unaff_w24 = false;
LAB_1050c6984:
  func_0x000108a82590(puVar17 + 2);
  goto LAB_1050c6644;
}

