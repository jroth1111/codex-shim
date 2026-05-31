
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fcf8c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char *pcVar13;
  code *pcVar14;
  long lVar15;
  char cVar16;
  int iVar17;
  long *plVar18;
  long unaff_x19;
  char *unaff_x21;
  long unaff_x22;
  long lVar19;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  long unaff_x29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *in_stack_00000008;
  long in_stack_00000010;
  char *in_stack_00000028;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  char *pcStack0000000000000088;
  undefined8 *puStack0000000000000090;
  char *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  char *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  char *in_stack_00000100;
  undefined8 *in_stack_00000108;
  undefined1 *in_stack_00000118;
  undefined *in_stack_00000120;
  undefined8 *in_stack_00000128;
  undefined *in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  puStack0000000000000090 = &stack0x00000118;
  pcStack0000000000000088 = s_running____read_before_execution_108abad80;
  *(char ***)(unaff_x29 + -0xf8) = &stack0x00000088;
  *(undefined **)(unaff_x29 + -0xf0) = &UNK_10b1f8a98;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xf8;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = param_1 + 0x30;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,unaff_x29 + -0xd0);
  if ((*unaff_x21 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar19 = *(long *)(unaff_x19 + 0xb10);
    in_stack_00000058 = *(long *)(lVar19 + 0x20);
    in_stack_00000060 = *(long **)(lVar19 + 0x28);
    in_stack_00000050 = (long *)0x5;
    unaff_x25 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x25 = (undefined8 *)&UNK_10b3c24c8;
    }
    unaff_x26 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x26 = &UNK_109adfc03;
    }
    iVar17 = (*(code *)unaff_x25[3])(unaff_x26,&stack0x00000050);
    if (iVar17 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar19,unaff_x26,unaff_x25,&stack0x00000050,unaff_x29 + -0xd0);
    }
  }
  if (unaff_x22 != in_stack_00000010) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = unaff_x26;
    auVar21 = auVar21 << 0x40;
    do {
      auVar12._8_8_ = unaff_x25;
      auVar12._0_8_ = in_stack_00000028;
      auVar11._8_8_ = unaff_x25;
      auVar11._0_8_ = in_stack_00000028;
      plVar18 = *(long **)(unaff_x22 + 0x10);
      lVar19 = *plVar18;
      *plVar18 = lVar19 + 1;
      if (lVar19 < 0) goto LAB_1002fd55c;
      lVar19 = *(long *)(unaff_x22 + 0x18);
      plVar8 = *(long **)(unaff_x22 + 0x20);
      if (plVar8 == (long *)0x0) {
        in_stack_00000070 = *(undefined4 *)(unaff_x22 + 0x30);
        in_stack_00000060 = (long *)0x0;
        in_stack_00000050 = plVar18;
        in_stack_00000058 = lVar19;
LAB_1002fd0f4:
        auVar20 = (**(code **)(in_stack_00000058 + 0x28))
                            ((long)in_stack_00000050 +
                             (*(long *)(in_stack_00000058 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                             &stack0x00000048);
        auVar11 = auVar12;
        if (auVar20._0_8_ != 0) {
          _in_stack_00000078 = auVar20;
          if (auVar21._0_8_ != 0) {
            in_stack_00000098 = in_stack_00000028;
            in_stack_000000a0 = unaff_x25;
            _pcStack0000000000000088 = auVar21;
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
              if (1 < bRam000000010b625b08 - 1) {
                if (bRam000000010b625b08 != 0) {
                  cVar16 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (0x10b625af8);
                  if (cVar16 != '\0') goto LAB_1002fd170;
                }
                goto LAB_1002fd304;
              }
LAB_1002fd170:
              iVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (lRam000000010b625af8);
              if (iVar17 == 0) goto LAB_1002fd304;
              in_stack_000000e8 = lRam000000010b625af8 + 0x30;
              in_stack_00000108 = in_stack_000000a0;
              in_stack_00000100 = in_stack_00000098;
              in_stack_00000118 = (undefined1 *)&stack0x00000088;
              in_stack_00000128 = &stack0x00000100;
              in_stack_00000120 = &DAT_100312d90;
              in_stack_00000130 = &DAT_1002e9814;
              in_stack_000000f8 = &stack0x00000118;
              in_stack_000000f0 = s___read_before_execution__108abadb1;
              in_stack_000000a8 = &stack0x000000f0;
              in_stack_000000b0 = &UNK_10b1f8a98;
              in_stack_000000d8 = &stack0x000000a8;
              in_stack_000000d0 = 1;
              in_stack_000000e0 = 1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (lRam000000010b625af8,&stack0x000000d0);
              lVar19 = lRam000000010b625af8;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar6 = *(undefined8 *)(lRam000000010b625af8 + 0x20);
                uVar9 = *(undefined8 *)(lRam000000010b625af8 + 0x28);
                *(undefined8 *)(unaff_x29 + -0xf8) = 4;
                *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
                *(undefined8 *)(unaff_x29 + -0xe8) = uVar9;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = (undefined8 *)&UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar17 = (*(code *)puVar2[3])(puVar3,unaff_x29 + -0xf8);
                if (iVar17 != 0) {
                  lVar15 = *(long *)(lVar19 + 0x60);
                  uVar9 = *(undefined8 *)(lVar19 + 0x68);
                  lVar7 = *(long *)(lVar19 + 0x50);
                  uVar10 = *(undefined8 *)(lVar19 + 0x58);
                  uVar6 = 1;
                  if (lVar7 == 0) {
                    uVar6 = 2;
                  }
                  uVar4 = *(undefined4 *)(lVar19 + 8);
                  uVar5 = *(undefined4 *)(lVar19 + 0xc);
                  *(undefined8 **)(unaff_x29 + -0xe0) = &stack0x000000d0;
                  *(undefined1 *)(unaff_x29 + -0xd8) = 1;
                  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xe0;
                  *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
                  uVar1 = 1;
                  if (lVar15 == 0) {
                    uVar1 = 2;
                  }
                  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000140;
                  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000138;
                  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xe8);
                  *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
                  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
                  *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
                  *(long *)(unaff_x29 + -200) = lVar7;
                  *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
                  *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
                  *(long *)(unaff_x29 + -0xb0) = lVar15;
                  *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
                  *(undefined4 *)(unaff_x29 + -0x88) = uVar4;
                  *(undefined4 *)(unaff_x29 + -0x84) = uVar5;
                  (*(code *)puVar2[4])(puVar3,unaff_x29 + -0xd0);
                }
              }
            }
            else {
LAB_1002fd304:
              lVar19 = lRam000000010b625af8;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_000000c0 = *(undefined8 *)(lRam000000010b625af8 + 0x20);
                in_stack_000000c8 = *(undefined8 *)(lRam000000010b625af8 + 0x28);
                in_stack_000000b8 = 4;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = (undefined8 *)&UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar17 = (*(code *)puVar2[3])(puVar3,&stack0x000000b8);
                if (iVar17 != 0) {
                  in_stack_000000e8 = lRam000000010b625af8 + 0x30;
                  *(undefined8 **)(unaff_x29 + -0xd8) = in_stack_000000a0;
                  *(char **)(unaff_x29 + -0xe0) = in_stack_00000098;
                  in_stack_00000118 = (undefined1 *)&stack0x00000088;
                  in_stack_00000128 = (undefined8 *)(unaff_x29 + -0xe0);
                  in_stack_00000120 = &DAT_100312d90;
                  in_stack_00000130 = &DAT_1002e9814;
                  in_stack_00000108 = &stack0x00000118;
                  in_stack_00000100 = s___read_before_execution__108abadb1;
                  in_stack_000000f0 = (char *)&stack0x00000100;
                  in_stack_000000f8 = (undefined8 *)&UNK_10b1f8a98;
                  in_stack_000000d8 = &stack0x000000f0;
                  in_stack_000000d0 = 1;
                  in_stack_000000e0 = 1;
                  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000000c0;
                  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000b8;
                  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000c8;
                  lVar15 = *(long *)(lVar19 + 0x60);
                  uVar9 = *(undefined8 *)(lVar19 + 0x68);
                  lVar7 = *(long *)(lVar19 + 0x50);
                  uVar10 = *(undefined8 *)(lVar19 + 0x58);
                  uVar6 = 1;
                  if (lVar7 == 0) {
                    uVar6 = 2;
                  }
                  uVar4 = *(undefined4 *)(lVar19 + 8);
                  uVar5 = *(undefined4 *)(lVar19 + 0xc);
                  *(undefined8 **)(unaff_x29 + -0x70) = &stack0x000000d0;
                  *(undefined1 *)(unaff_x29 + -0x68) = 1;
                  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x70;
                  *(undefined **)(unaff_x29 + -0xf0) = &DAT_1061c2098;
                  uVar1 = 1;
                  if (lVar15 == 0) {
                    uVar1 = 2;
                  }
                  *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
                  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xf8;
                  *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
                  *(long *)(unaff_x29 + -200) = lVar7;
                  *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
                  *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
                  *(long *)(unaff_x29 + -0xb0) = lVar15;
                  *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
                  *(undefined4 *)(unaff_x29 + -0x88) = uVar4;
                  *(undefined4 *)(unaff_x29 + -0x84) = uVar5;
                  (*(code *)puVar2[4])(puVar3,unaff_x29 + -0xd0);
                }
              }
            }
            puVar2 = in_stack_000000a0;
            pcVar13 = in_stack_00000098;
            if ((code *)*in_stack_000000a0 != (code *)0x0) {
              (*(code *)*in_stack_000000a0)(in_stack_00000098);
            }
            if (puVar2[1] != 0) {
              _free(pcVar13);
            }
          }
          auVar21 = (**(code **)(in_stack_00000058 + 0x20))
                              ((long)in_stack_00000050 +
                               (*(long *)(in_stack_00000058 + 0x10) - 1U & 0xfffffffffffffff0) +
                               0x10);
          auVar11 = auVar20;
        }
      }
      else {
        lVar15 = *plVar8;
        *plVar8 = lVar15 + 1;
        if (lVar15 < 0) goto LAB_1002fd55c;
        in_stack_00000068 = *(long *)(unaff_x22 + 0x28);
        in_stack_00000070 = *(undefined4 *)(unaff_x22 + 0x30);
        in_stack_00000050 = plVar18;
        in_stack_00000058 = lVar19;
        in_stack_00000060 = plVar8;
        iVar17 = (**(code **)(in_stack_00000068 + 0x28))
                           ((long)plVar8 +
                            (*(long *)(in_stack_00000068 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        if (iVar17 != 0) goto LAB_1002fd0f4;
      }
      lVar15 = auVar21._8_8_;
      unaff_x25 = auVar11._8_8_;
      in_stack_00000028 = auVar11._0_8_;
      lVar19 = *in_stack_00000050;
      *in_stack_00000050 = lVar19 + -1;
      LORelease();
      if (lVar19 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000050);
      }
      if (in_stack_00000060 != (long *)0x0) {
        lVar19 = *in_stack_00000060;
        *in_stack_00000060 = lVar19 + -1;
        LORelease();
        if (lVar19 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000060);
        }
      }
      unaff_x22 = unaff_x22 + 0x38;
    } while (unaff_x22 != in_stack_00000010);
    if (auVar21._0_8_ != 0) {
      *(undefined1 (*) [16])(unaff_x29 + -0xd0) = auVar11;
      if (lVar15 == 0) {
        lVar19 = 1;
      }
      else {
        lVar19 = _malloc(lVar15);
        if (lVar19 == 0) {
          FUN_107c03c64(1,lVar15);
LAB_1002fd55c:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1002fd560);
          (*pcVar14)();
        }
      }
      _memcpy(lVar19,auVar21._0_8_,lVar15);
      *in_stack_00000008 = lVar15;
      in_stack_00000008[1] = lVar19;
      in_stack_00000008[2] = lVar15;
      *(undefined1 (*) [16])(in_stack_00000008 + 3) = auVar11;
      *(undefined1 *)(in_stack_00000008 + 5) = 0;
      return;
    }
  }
  *in_stack_00000008 = -0x7fffffffffffffff;
  return;
}

