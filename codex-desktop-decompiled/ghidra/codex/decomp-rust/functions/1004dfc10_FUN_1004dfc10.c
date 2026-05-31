
/* WARNING: Removing unreachable block (ram,0x0001004deea0) */
/* WARNING: Removing unreachable block (ram,0x0001004def14) */
/* WARNING: Removing unreachable block (ram,0x0001004def7c) */
/* WARNING: Removing unreachable block (ram,0x0001004deed0) */
/* WARNING: Removing unreachable block (ram,0x0001004def84) */
/* WARNING: Removing unreachable block (ram,0x0001004defa8) */
/* WARNING: Removing unreachable block (ram,0x0001004defe8) */
/* WARNING: Removing unreachable block (ram,0x0001004deff0) */
/* WARNING: Removing unreachable block (ram,0x0001004df000) */
/* WARNING: Removing unreachable block (ram,0x0001004df010) */
/* WARNING: Removing unreachable block (ram,0x0001004df018) */
/* WARNING: Removing unreachable block (ram,0x0001004deedc) */
/* WARNING: Removing unreachable block (ram,0x0001004df01c) */
/* WARNING: Removing unreachable block (ram,0x0001004df068) */
/* WARNING: Removing unreachable block (ram,0x0001004df070) */
/* WARNING: Removing unreachable block (ram,0x0001004df090) */
/* WARNING: Removing unreachable block (ram,0x0001004df074) */
/* WARNING: Removing unreachable block (ram,0x0001004df258) */
/* WARNING: Removing unreachable block (ram,0x0001004dfaec) */
/* WARNING: Removing unreachable block (ram,0x0001004dfafc) */
/* WARNING: Removing unreachable block (ram,0x0001004df080) */
/* WARNING: Removing unreachable block (ram,0x0001004dfab0) */
/* WARNING: Removing unreachable block (ram,0x0001004df084) */

void FUN_1004dfc10(void)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint unaff_w27;
  int unaff_w28;
  long unaff_x29;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000460;
  long in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined *in_stack_00000478;
  long in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_00000560;
  long in_stack_00000620;
  long in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined *in_stack_00000638;
  long in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  char cVar7;
  long in_stack_00000720;
  undefined *in_stack_00000738;
  long in_stack_00000740;
  long in_stack_000007e0;
  long in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined *in_stack_000007f8;
  long in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  long in_stack_00000898;
  long in_stack_000008b0;
  long in_stack_000008b8;
  long *in_stack_00000a60;
  
  thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000008e0);
  if ((in_stack_00000898 != -0x7fffffffffffffff) && (in_stack_00000898 != -0x8000000000000000)) {
    if ((in_stack_000008b8 != 0) && (in_stack_000008b8 * 9 != -0x11)) {
      _free(in_stack_000008b0 + in_stack_000008b8 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000898);
  }
  FUN_100e0d658(&stack0x00000720);
  FUN_100ca3e30(&stack0x00000220);
  if (unaff_w28 == 0x14) {
    if (in_stack_00000218 == 0) {
      thunk_FUN_1087e422c(0,&UNK_10b22e858,&UNK_10b20a590);
      goto LAB_1004df298;
    }
    lVar5 = FUN_1013d7ef0(in_stack_00000210);
    if (lVar5 != 0) goto LAB_1004df298;
    if (in_stack_00000218 - 1U != 0) {
      thunk_FUN_1087e422c((in_stack_00000218 - 1U & 0x7ffffffffffffff) + 1,&stack0x00000720,
                          &UNK_10b23a1b0);
      in_stack_00000720 = 1;
      goto LAB_1004df298;
    }
    lVar5 = 0;
    lVar6 = -0x7ffffffffffffffe;
  }
  else {
    if (unaff_w28 == 0x15) {
      in_stack_00000738 = (undefined *)0x0;
      FUN_100f23ae4(&stack0x00000560,&stack0x00000720);
      in_stack_00000720 = in_stack_00000210;
      if ((char)in_stack_00000560 != '\x01') {
        if ((char)((ulong)in_stack_00000560 >> 8) != '\x02') {
LAB_1004dee84:
          FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b209338);
          goto LAB_1004dfb6c;
        }
        thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000560);
      }
    }
    else {
      thunk_FUN_108855c40(&stack0x00000200,unaff_x29 + -0x61,&UNK_10b214488);
    }
LAB_1004df298:
    FUN_100ca3e30(&stack0x000008e0);
    if (unaff_w28 == 0x14) {
      if (in_stack_00000218 == 0) {
        uVar4 = 0;
LAB_1004df484:
        thunk_FUN_1087e422c(uVar4,&UNK_10b22e8f8,&UNK_10b20a590);
LAB_1004df544:
        lVar5 = -0x7fffffffffffffff;
        in_stack_000007e8 = in_stack_00000468;
        in_stack_000007f0 = in_stack_00000470;
        in_stack_00000808 = in_stack_00000488;
        in_stack_00000810 = in_stack_00000490;
        in_stack_00000818 = in_stack_00000498;
        in_stack_00000820 = in_stack_000004a0;
      }
      else {
        lVar5 = FUN_101350724(in_stack_00000210);
        if (lVar5 != 0) goto LAB_1004df544;
        if (in_stack_00000218 == 1) {
          uVar4 = 1;
          goto LAB_1004df484;
        }
        FUN_1012404b0(&stack0x00000720,in_stack_00000210 + 0x20);
        if (in_stack_00000720 == -0x7fffffffffffffff) {
          lVar5 = -0x7fffffffffffffff;
          in_stack_000007e8 = in_stack_00000468;
          in_stack_000007f0 = in_stack_00000470;
          in_stack_00000808 = in_stack_00000488;
          in_stack_00000810 = in_stack_00000490;
          in_stack_00000818 = in_stack_00000498;
          in_stack_00000820 = in_stack_000004a0;
        }
        else {
          _memcpy(&stack0x00000720,&stack0x000003a0,0x108);
          lVar5 = in_stack_00000720;
          in_stack_00000460 = in_stack_000007e0;
          in_stack_00000478 = in_stack_000007f8;
          in_stack_00000480 = in_stack_00000800;
          if (in_stack_00000218 != 2) {
            thunk_FUN_1087e422c((in_stack_00000218 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                &stack0x00000560,&UNK_10b23a1b0);
            if ((in_stack_000007e0 != -0x7fffffffffffffff) &&
               (in_stack_000007e0 != -0x8000000000000000)) {
              if ((in_stack_00000800 != 0) && (in_stack_00000800 * 9 != -0x11)) {
                _free(in_stack_000007f8 + in_stack_00000800 * -8 + -8);
              }
              func_0x000100cd7284(&stack0x000007e0);
            }
            FUN_100e1a6c0(&stack0x000003a0);
            in_stack_00000468 = in_stack_000007e8;
            in_stack_00000470 = in_stack_000007f0;
            in_stack_00000488 = in_stack_00000808;
            in_stack_00000490 = in_stack_00000810;
            in_stack_00000498 = in_stack_00000818;
            in_stack_000004a0 = in_stack_00000820;
            goto LAB_1004df544;
          }
        }
      }
LAB_1004df548:
      if (lVar5 != -0x7fffffffffffffff) {
        if (in_stack_00000460 == -0x8000000000000000) {
          in_stack_00000740 = 0;
          in_stack_00000738 = &UNK_108c56c70;
          in_stack_00000720 = 0;
          FUN_1011a27dc(&stack0x00000720);
          in_stack_00000460 = 0;
          in_stack_00000478 = &UNK_108c56c70;
          in_stack_000007f0 = 0;
          in_stack_00000808 = 0;
          in_stack_00000480 = 0;
          in_stack_00000810 = 0;
          in_stack_00000820 = *(undefined8 *)(in_stack_000007e8 + 0x40);
          in_stack_00000818 = *(undefined8 *)(in_stack_000007e8 + 0x38);
          in_stack_000007e8 = 8;
LAB_1004df738:
          *(long *)(unaff_x29 + -0xe0) = in_stack_00000460;
          *(long *)(unaff_x29 + -0xd8) = in_stack_000007e8;
          *(undefined **)(unaff_x29 + -200) = in_stack_00000478;
          *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_000007f0;
          *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000808;
          *(long *)(unaff_x29 + -0xc0) = in_stack_00000480;
          *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000810;
          *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000820;
          *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000818;
          FUN_100ecd2fc(&stack0x00000720,&stack0x000003a0,unaff_x29 + -0xe0);
          if (in_stack_00000720 != -0x8000000000000000) {
            if ((in_stack_00000740 != 0) && (in_stack_00000740 * 9 != -0x11)) {
              _free(in_stack_00000738 + in_stack_00000740 * -8 + -8);
            }
            func_0x000100cd7284(&stack0x00000720);
          }
        }
        else if (in_stack_00000460 != -0x7fffffffffffffff) goto LAB_1004df738;
        lVar6 = -0x7ffffffffffffffd;
        _memcpy(&stack0x00000090,&stack0x000008f0,0x170);
        goto LAB_1004df820;
      }
    }
    else {
      if (unaff_w28 == 0x15) {
        bVar2 = false;
        *(long *)(unaff_x29 + -0x98) = in_stack_00000210;
        *(long *)(unaff_x29 + -0x90) = in_stack_00000210 + in_stack_00000218 * 0x40;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        lVar5 = -0x7fffffffffffffff;
LAB_1004df2f8:
        do {
          FUN_100f23138(&stack0x00000720,unaff_x29 + -0x98);
          if ((char)in_stack_00000720 == '\x01') {
joined_r0x0001004df424:
            if (lVar5 != -0x7fffffffffffffff) {
joined_r0x0001004dfcf0:
              if ((in_stack_00000620 != -0x7fffffffffffffff) &&
                 (in_stack_00000620 != -0x8000000000000000)) {
                if ((in_stack_00000640 != 0) && (in_stack_00000640 * 9 != -0x11)) {
                  _free(in_stack_00000638 + in_stack_00000640 * -8 + -8);
                }
                func_0x000100cd7284(&stack0x00000620);
              }
              FUN_100e1a6c0(&stack0x00000560);
            }
            goto LAB_1004df544;
          }
          cVar7 = (char)((ulong)in_stack_00000720 >> 8);
          if (cVar7 != '\x02') {
            if (cVar7 == '\0') {
              if (bVar2) {
                *(undefined **)(unaff_x29 + -0x78) = &UNK_108cb495d;
                *(undefined8 *)(unaff_x29 + -0x70) = 6;
                thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000720);
LAB_1004df4d4:
                in_stack_00000720 = unaff_x29 + -0x78;
                goto joined_r0x0001004df424;
              }
              lVar6 = *(long *)(unaff_x29 + -0x88);
              *(undefined8 *)(unaff_x29 + -0x88) = 0;
              if (lVar6 == 0) break;
              lVar6 = FUN_101350724();
              bVar2 = true;
              if (lVar6 != 0) goto joined_r0x0001004df424;
            }
            else {
              if (cVar7 != '\x01') {
                if (!bVar2) {
                  *(undefined **)(unaff_x29 + -0x78) = &UNK_108cb495d;
                  *(undefined8 *)(unaff_x29 + -0x70) = 6;
                  thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000720);
                  goto LAB_1004df4d4;
                }
                if (lVar5 == -0x7fffffffffffffff) {
                  *(undefined **)(unaff_x29 + -0x78) = &UNK_108cb9606;
                  *(undefined8 *)(unaff_x29 + -0x70) = 6;
                  in_stack_00000720 = unaff_x29 + -0x78;
                  thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000720);
                }
                else {
                  _memcpy(&stack0x00000720,&stack0x000003a0,0x108);
                  uVar1 = *(long *)(unaff_x29 + -0x90) - *(long *)(unaff_x29 + -0x98);
                  in_stack_00000460 = in_stack_00000620;
                  in_stack_000007e8 = in_stack_00000628;
                  in_stack_000007f0 = in_stack_00000630;
                  in_stack_00000478 = in_stack_00000638;
                  in_stack_00000480 = in_stack_00000640;
                  in_stack_00000808 = in_stack_00000648;
                  in_stack_00000810 = in_stack_00000650;
                  in_stack_00000818 = in_stack_00000658;
                  in_stack_00000820 = in_stack_00000660;
                  if (uVar1 == 0) goto LAB_1004df548;
                  thunk_FUN_1087e422c(*(long *)(unaff_x29 + -0x80) + (uVar1 >> 6),&stack0x00000560,
                                      &UNK_10b23a190);
                  if ((in_stack_000007e0 != -0x7fffffffffffffff) &&
                     (in_stack_000007e0 != -0x8000000000000000)) {
                    if ((in_stack_00000800 != 0) && (in_stack_00000800 * 9 != -0x11)) {
                      _free(in_stack_000007f8 + in_stack_00000800 * -8 + -8);
                    }
                    func_0x000100cd7284(&stack0x000007e0);
                  }
                  FUN_100e1a6c0(&stack0x000003a0);
                  in_stack_00000468 = in_stack_00000628;
                  in_stack_00000470 = in_stack_00000630;
                  in_stack_00000488 = in_stack_00000648;
                  in_stack_00000490 = in_stack_00000650;
                  in_stack_00000498 = in_stack_00000658;
                  in_stack_000004a0 = in_stack_00000660;
                }
                goto LAB_1004df544;
              }
              if (lVar5 != -0x7fffffffffffffff) {
                *(undefined **)(unaff_x29 + -0x78) = &UNK_108cb9606;
                *(undefined8 *)(unaff_x29 + -0x70) = 6;
                in_stack_00000720 = unaff_x29 + -0x78;
                thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000720);
                goto joined_r0x0001004dfcf0;
              }
              lVar5 = *(long *)(unaff_x29 + -0x88);
              *(undefined8 *)(unaff_x29 + -0x88) = 0;
              if (lVar5 == 0) goto LAB_1004dee84;
              FUN_1012404b0(&stack0x00000720);
              lVar5 = in_stack_00000720;
              in_stack_00000620 = in_stack_000007e0;
              in_stack_00000628 = in_stack_000007e8;
              in_stack_00000630 = in_stack_000007f0;
              in_stack_00000638 = in_stack_000007f8;
              in_stack_00000640 = in_stack_00000800;
              in_stack_00000648 = in_stack_00000808;
              in_stack_00000650 = in_stack_00000810;
              in_stack_00000658 = in_stack_00000818;
              in_stack_00000660 = in_stack_00000820;
              if (in_stack_00000720 == -0x7fffffffffffffff) goto LAB_1004df544;
            }
            goto LAB_1004df2f8;
          }
          lVar6 = *(long *)(unaff_x29 + -0x88);
          *(undefined8 *)(unaff_x29 + -0x88) = 0;
        } while (lVar6 != 0);
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1004dfb6c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004dfb70);
        (*pcVar3)();
      }
      thunk_FUN_108855c40(&stack0x00000200,unaff_x29 + -0x61,&UNK_10b214108);
    }
    lVar5 = in_stack_00000720;
    FUN_100ca3e30(&stack0x000008e0);
    FUN_100ea70fc(&stack0x00000720,&stack0x00000200);
    if (lVar5 == -0x8000000000000000) {
      FUN_100ca3e30(&stack0x000008e0);
      lVar5 = thunk_FUN_1088561c0(&UNK_108cc4ae5,0x3d);
      FUN_100e077ec(&stack0x00000200);
      *in_stack_00000008 = -0x7ffffffffffffffb;
      in_stack_00000008[1] = lVar5;
      if (in_stack_00000080 != (long *)0x0) {
        lVar5 = *in_stack_00000080;
        *in_stack_00000080 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000080);
        }
      }
      FUN_100d5c778(&stack0x00000048);
      if ((((unaff_w27 ^ 1) & in_stack_00000030) == 1) && (in_stack_00000038 != (long *)0x0)) {
        lVar5 = *in_stack_00000038;
        *in_stack_00000038 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000038);
        }
      }
      goto LAB_1004de920;
    }
    _memcpy(&stack0x00000090,&stack0x000008f0,0x170);
    lVar6 = -0x7ffffffffffffffc;
  }
LAB_1004df820:
  FUN_100e077ec(&stack0x00000200);
  _memcpy(in_stack_00000008 + 2,&stack0x00000090,0x170);
  in_stack_00000008[0x31] = in_stack_00000088;
  in_stack_00000008[0x30] = (long)in_stack_00000080;
  *in_stack_00000008 = lVar6;
  in_stack_00000008[1] = lVar5;
  FUN_100d5c778(&stack0x00000048);
LAB_1004de920:
  if (*in_stack_00000008 != -0x7ffffffffffffffb) {
    _memcpy(&stack0x000008e0,in_stack_00000008,400);
    if (in_stack_00000018 - in_stack_00000010 != 0) {
      lVar5 = thunk_FUN_1087e422c(in_stack_00000028 +
                                  ((ulong)(in_stack_00000018 - in_stack_00000010) >> 6),
                                  &stack0x00000720,&UNK_10b23a190);
      *in_stack_00000008 = -0x7ffffffffffffffb;
      in_stack_00000008[1] = lVar5;
      if (in_stack_00000a60 != (long *)0x0) {
        lVar5 = *in_stack_00000a60;
        *in_stack_00000a60 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000a60);
        }
      }
      FUN_100deb298(&stack0x000008e0);
    }
  }
  return;
}

