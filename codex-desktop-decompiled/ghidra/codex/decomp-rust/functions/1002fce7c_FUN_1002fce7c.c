
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fce7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  int iVar17;
  long *plVar18;
  long in_x10;
  long unaff_x19;
  long unaff_x22;
  long lVar19;
  undefined8 unaff_x25;
  undefined8 *puVar20;
  long unaff_x26;
  long unaff_x29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *in_stack_00000008;
  long in_stack_00000010;
  char *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *plStack0000000000000050;
  long lStack0000000000000058;
  long *plStack0000000000000060;
  long lStack0000000000000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  char *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined1 *puStack00000000000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000e8;
  char *in_stack_000000f0;
  undefined *in_stack_000000f8;
  char *in_stack_00000100;
  undefined8 *in_stack_00000108;
  undefined8 *puStack0000000000000118;
  undefined *puStack0000000000000120;
  undefined8 *in_stack_00000128;
  undefined *in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  auVar10._8_8_ = unaff_x25;
  auVar10._0_8_ = in_stack_00000028;
  *(char **)(unaff_x29 + -0x70) = s_running____read_before_execution_108abad80;
  *(long **)(unaff_x29 + -0x68) = &stack0x00000088;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b1f8a98;
  lStack0000000000000068 = in_x10 + 0x30;
  lStack0000000000000058 = unaff_x29 + -0xe0;
  plStack0000000000000050 = (long *)0x1;
  plStack0000000000000060 = (long *)0x1;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000030;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000040;
  lVar19 = *(long *)(unaff_x26 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x26 + 0x68);
  lVar14 = *(long *)(unaff_x26 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x26 + 0x58);
  uVar1 = 1;
  if (lVar14 == 0) {
    uVar1 = 2;
  }
  uVar5 = *(undefined4 *)(unaff_x26 + 8);
  uVar6 = *(undefined4 *)(unaff_x26 + 0xc);
  puStack00000000000000d0 = (undefined1 *)&stack0x00000050;
  in_stack_000000d8 = (undefined8 *)CONCAT71(in_stack_000000d8._1_7_,1);
  puStack0000000000000118 = &stack0x000000d0;
  puStack0000000000000120 = &DAT_1061c2098;
  uVar2 = 1;
  if (lVar19 == 0) {
    uVar2 = 2;
  }
  *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
  *(undefined8 ***)(unaff_x29 + -0x78) = &stack0x00000118;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
  *(long *)(unaff_x29 + -200) = lVar14;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
  *(long *)(unaff_x29 + -0xb0) = lVar19;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
  *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
  *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
  (**(code **)(unaff_x19 + 0x20))();
  if (unaff_x22 != in_stack_00000010) {
    lVar19 = 0;
    do {
      puVar20 = auVar10._8_8_;
      in_stack_00000028 = auVar10._0_8_;
      auVar11._8_8_ = unaff_x26;
      auVar11._0_8_ = lVar19;
      auVar22._8_8_ = unaff_x26;
      auVar22._0_8_ = lVar19;
      plVar18 = *(long **)(unaff_x22 + 0x10);
      lVar14 = *plVar18;
      *plVar18 = lVar14 + 1;
      if (lVar14 < 0) goto LAB_1002fd55c;
      lVar14 = *(long *)(unaff_x22 + 0x18);
      plVar9 = *(long **)(unaff_x22 + 0x20);
      if (plVar9 == (long *)0x0) {
        in_stack_00000070 = *(undefined4 *)(unaff_x22 + 0x30);
        plStack0000000000000060 = (long *)0x0;
        plStack0000000000000050 = plVar18;
        lStack0000000000000058 = lVar14;
LAB_1002fd0f4:
        auVar21 = (**(code **)(lStack0000000000000058 + 0x28))
                            ((long)plStack0000000000000050 +
                             (*(long *)(lStack0000000000000058 + 0x10) - 1U & 0xfffffffffffffff0) +
                             0x10,&stack0x00000048);
        auVar22 = auVar11;
        if (auVar21._0_8_ != 0) {
          _in_stack_00000078 = auVar21;
          if (lVar19 != 0) {
            in_stack_00000098 = in_stack_00000028;
            in_stack_00000088 = lVar19;
            in_stack_00000090 = unaff_x26;
            in_stack_000000a0 = puVar20;
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
              puStack0000000000000118 = &stack0x00000088;
              in_stack_00000128 = &stack0x00000100;
              puStack0000000000000120 = &DAT_100312d90;
              in_stack_00000130 = &DAT_1002e9814;
              in_stack_000000f8 = (undefined *)&stack0x00000118;
              in_stack_000000f0 = s___read_before_execution__108abadb1;
              in_stack_000000a8 = &stack0x000000f0;
              in_stack_000000b0 = &UNK_10b1f8a98;
              in_stack_000000d8 = &stack0x000000a8;
              puStack00000000000000d0 = (undefined1 *)0x1;
              in_stack_000000e0 = 1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (lRam000000010b625af8,&stack0x000000d0);
              lVar19 = lRam000000010b625af8;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar1 = *(undefined8 *)(lRam000000010b625af8 + 0x20);
                uVar7 = *(undefined8 *)(lRam000000010b625af8 + 0x28);
                *(undefined8 *)(unaff_x29 + -0xf8) = 4;
                *(undefined8 *)(unaff_x29 + -0xf0) = uVar1;
                *(undefined8 *)(unaff_x29 + -0xe8) = uVar7;
                puVar3 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xf8);
                if (iVar17 != 0) {
                  lVar14 = *(long *)(lVar19 + 0x60);
                  uVar7 = *(undefined8 *)(lVar19 + 0x68);
                  lVar15 = *(long *)(lVar19 + 0x50);
                  uVar8 = *(undefined8 *)(lVar19 + 0x58);
                  uVar1 = 1;
                  if (lVar15 == 0) {
                    uVar1 = 2;
                  }
                  uVar5 = *(undefined4 *)(lVar19 + 8);
                  uVar6 = *(undefined4 *)(lVar19 + 0xc);
                  *(undefined1 ***)(unaff_x29 + -0xe0) = &stack0x000000d0;
                  *(undefined1 *)(unaff_x29 + -0xd8) = 1;
                  *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xe0;
                  *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
                  uVar2 = 1;
                  if (lVar14 == 0) {
                    uVar2 = 2;
                  }
                  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000140;
                  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000138;
                  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xe8);
                  *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
                  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
                  *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
                  *(long *)(unaff_x29 + -200) = lVar15;
                  *(undefined8 *)(unaff_x29 + -0xc0) = uVar8;
                  *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
                  *(long *)(unaff_x29 + -0xb0) = lVar14;
                  *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
                  *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
                  *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
                  (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xd0);
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
                puVar3 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar17 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000b8);
                if (iVar17 != 0) {
                  in_stack_000000e8 = lRam000000010b625af8 + 0x30;
                  *(undefined8 **)(unaff_x29 + -0xd8) = in_stack_000000a0;
                  *(char **)(unaff_x29 + -0xe0) = in_stack_00000098;
                  puStack0000000000000118 = &stack0x00000088;
                  in_stack_00000128 = (undefined8 *)(unaff_x29 + -0xe0);
                  puStack0000000000000120 = &DAT_100312d90;
                  in_stack_00000130 = &DAT_1002e9814;
                  in_stack_00000108 = &stack0x00000118;
                  in_stack_00000100 = s___read_before_execution__108abadb1;
                  in_stack_000000f0 = (char *)&stack0x00000100;
                  in_stack_000000f8 = &UNK_10b1f8a98;
                  in_stack_000000d8 = &stack0x000000f0;
                  puStack00000000000000d0 = (undefined1 *)0x1;
                  in_stack_000000e0 = 1;
                  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_000000c0;
                  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_000000b8;
                  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_000000c8;
                  lVar14 = *(long *)(lVar19 + 0x60);
                  uVar7 = *(undefined8 *)(lVar19 + 0x68);
                  lVar15 = *(long *)(lVar19 + 0x50);
                  uVar8 = *(undefined8 *)(lVar19 + 0x58);
                  uVar1 = 1;
                  if (lVar15 == 0) {
                    uVar1 = 2;
                  }
                  uVar5 = *(undefined4 *)(lVar19 + 8);
                  uVar6 = *(undefined4 *)(lVar19 + 0xc);
                  *(undefined1 ***)(unaff_x29 + -0x70) = &stack0x000000d0;
                  *(undefined1 *)(unaff_x29 + -0x68) = 1;
                  *(long *)(unaff_x29 + -0xf8) = unaff_x29 + -0x70;
                  *(undefined **)(unaff_x29 + -0xf0) = &DAT_1061c2098;
                  uVar2 = 1;
                  if (lVar14 == 0) {
                    uVar2 = 2;
                  }
                  *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
                  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0xf8;
                  *(undefined8 *)(unaff_x29 + -0xd0) = uVar1;
                  *(long *)(unaff_x29 + -200) = lVar15;
                  *(undefined8 *)(unaff_x29 + -0xc0) = uVar8;
                  *(undefined8 *)(unaff_x29 + -0xb8) = uVar2;
                  *(long *)(unaff_x29 + -0xb0) = lVar14;
                  *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
                  *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
                  *(undefined4 *)(unaff_x29 + -0x84) = uVar6;
                  (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xd0);
                }
              }
            }
            puVar20 = in_stack_000000a0;
            pcVar12 = in_stack_00000098;
            if ((code *)*in_stack_000000a0 != (code *)0x0) {
              (*(code *)*in_stack_000000a0)(in_stack_00000098);
            }
            if (puVar20[1] != 0) {
              _free(pcVar12);
            }
          }
          auVar22 = (**(code **)(lStack0000000000000058 + 0x20))
                              ((long)plStack0000000000000050 +
                               (*(long *)(lStack0000000000000058 + 0x10) - 1U & 0xfffffffffffffff0)
                               + 0x10);
          auVar10 = auVar21;
        }
      }
      else {
        lVar15 = *plVar9;
        *plVar9 = lVar15 + 1;
        if (lVar15 < 0) goto LAB_1002fd55c;
        lStack0000000000000068 = *(long *)(unaff_x22 + 0x28);
        in_stack_00000070 = *(undefined4 *)(unaff_x22 + 0x30);
        plStack0000000000000050 = plVar18;
        lStack0000000000000058 = lVar14;
        plStack0000000000000060 = plVar9;
        iVar17 = (**(code **)(lStack0000000000000068 + 0x28))
                           ((long)plVar9 +
                            (*(long *)(lStack0000000000000068 + 0x10) - 1U & 0xfffffffffffffff0) +
                            0x10);
        if (iVar17 != 0) goto LAB_1002fd0f4;
      }
      unaff_x26 = auVar22._8_8_;
      lVar19 = auVar22._0_8_;
      lVar14 = *plStack0000000000000050;
      *plStack0000000000000050 = lVar14 + -1;
      LORelease();
      if (lVar14 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000050);
      }
      if (plStack0000000000000060 != (long *)0x0) {
        lVar14 = *plStack0000000000000060;
        *plStack0000000000000060 = lVar14 + -1;
        LORelease();
        if (lVar14 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000060);
        }
      }
      unaff_x22 = unaff_x22 + 0x38;
    } while (unaff_x22 != in_stack_00000010);
    if (lVar19 != 0) {
      *(undefined1 (*) [16])(unaff_x29 + -0xd0) = auVar10;
      if (unaff_x26 == 0) {
        lVar14 = 1;
      }
      else {
        lVar14 = _malloc(unaff_x26);
        if (lVar14 == 0) {
          FUN_107c03c64(1,unaff_x26);
LAB_1002fd55c:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1002fd560);
          (*pcVar13)();
        }
      }
      _memcpy(lVar14,lVar19,unaff_x26);
      *in_stack_00000008 = unaff_x26;
      in_stack_00000008[1] = lVar14;
      in_stack_00000008[2] = unaff_x26;
      *(undefined1 (*) [16])(in_stack_00000008 + 3) = auVar10;
      *(undefined1 *)(in_stack_00000008 + 5) = 0;
      return;
    }
  }
  *in_stack_00000008 = -0x7fffffffffffffff;
  return;
}

