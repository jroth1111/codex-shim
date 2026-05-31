
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003040b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  code *pcVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  long unaff_x21;
  long unaff_x22;
  undefined *unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar16 [16];
  undefined *in_stack_00000000;
  undefined8 *in_stack_00000008;
  long *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000038;
  undefined8 uStack000000000000003c;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *puStack0000000000000068;
  long lStack0000000000000078;
  undefined1 *puStack0000000000000080;
  undefined *puStack0000000000000088;
  char *pcStack0000000000000090;
  undefined8 *puStack0000000000000098;
  long in_stack_000000a0;
  undefined *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  auVar16._8_8_ = in_stack_000000a8;
  auVar16._0_8_ = in_stack_000000a0;
  do {
    puStack0000000000000098 = &stack0x000000b0;
    pcStack0000000000000090 = s_Classifier______set_the_result_o_108abaf7a;
    puStack0000000000000080 = (undefined1 *)&stack0x00000090;
    puStack0000000000000088 = &UNK_10b1f8a98;
    puStack0000000000000068 = (undefined *)&stack0x00000080;
    *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000050;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000048;
    *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000058;
    lVar13 = *(long *)(unaff_x28 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x68);
    lVar12 = *(long *)(unaff_x28 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x28 + 0x58);
    puVar1 = unaff_x25;
    if (lVar12 == 0) {
      puVar1 = (undefined8 *)((long)unaff_x25 + 1);
    }
    uVar5 = *(undefined4 *)(unaff_x28 + 8);
    uVar6 = *(undefined4 *)(unaff_x28 + 0xc);
    *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000060;
    *(char *)(unaff_x29 + -0x70) = (char)unaff_x25;
    *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
    *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
    puVar2 = unaff_x25;
    if (lVar13 == 0) {
      puVar2 = (undefined8 *)((long)unaff_x25 + 1);
    }
    *(char **)(unaff_x29 + -0x88) = s__108b39f4f;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x68;
    *(undefined8 **)(unaff_x29 + -0xd8) = puVar1;
    *(long *)(unaff_x29 + -0xd0) = lVar12;
    *(undefined8 *)(unaff_x29 + -200) = uVar9;
    *(undefined8 **)(unaff_x29 + -0xc0) = puVar2;
    *(long *)(unaff_x29 + -0xb8) = lVar13;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar8;
    *(undefined4 *)(unaff_x29 + -0x90) = uVar5;
    *(undefined4 *)(unaff_x29 + -0x8c) = uVar6;
    lStack0000000000000078 = param_1;
    _in_stack_000000a0 = auVar16;
    (**(code **)(unaff_x23 + 0x20))(in_stack_00000000,unaff_x29 + -0xd8);
LAB_1003042b8:
    do {
      do {
        uVar5 = uStack0000000000000044;
        uVar9 = uStack000000000000003c;
        iVar15 = iStack0000000000000038;
        uVar8 = in_stack_00000030;
        if (iStack0000000000000038 == unaff_w27 + 2) {
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
            if (bRam000000010b625838 - 1 < 2) {
LAB_100304474:
              iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                                 );
              lVar13 = 
              ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
              ;
              if (iVar15 != 0) {
                lVar12 = ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                         + 0x30;
                puStack0000000000000068 = (undefined *)0xab;
                *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000060;
                *(undefined **)(unaff_x29 + -0x60) = &UNK_10b1f8a98;
                *(undefined8 *)(unaff_x29 + -0xd8) = 1;
                *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x68;
                *(undefined8 *)(unaff_x29 + -200) = 1;
                *(long *)(unaff_x29 + -0xc0) = lVar12;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (lVar13,unaff_x29 + -0xd8);
                lVar13 = 
                ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  in_stack_000000b0 = (undefined8 *)0x5;
                  puVar3 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_10b3c24c8;
                  }
                  puVar4 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar4 = &UNK_109adfc03;
                  }
                  iVar15 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000b0);
                  if (iVar15 != 0) {
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar13,puVar4,puVar3,&stack0x000000b0,unaff_x29 + -0xd8);
                  }
                }
                goto LAB_100304564;
              }
            }
            else if (bRam000000010b625838 != 0) {
              cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                                 );
              if (cVar14 != '\0') goto LAB_100304474;
            }
          }
          lVar13 = 
          ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_000000d8 =
                 *(undefined8 *)
                  (
                  ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                  + 0x20);
            in_stack_000000e0 =
                 *(undefined8 *)
                  (
                  ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                  + 0x28);
            in_stack_000000d0 = 5;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000d0);
            if (iVar15 != 0) {
              lVar12 = ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h8cf99060b1ee609fE
                       + 0x30;
              in_stack_000000b0 = (undefined8 *)&UNK_108c7f2c9;
              puStack0000000000000068 = &UNK_10b1f8a98;
              *(undefined8 *)(unaff_x29 + -0xd8) = 1;
              *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000060;
              *(undefined8 *)(unaff_x29 + -200) = 1;
              *(long *)(unaff_x29 + -0xc0) = lVar12;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar4,puVar3,&stack0x000000d0,unaff_x29 + -0xd8);
            }
          }
LAB_100304564:
          lVar13 = *in_stack_00000020;
          *in_stack_00000020 = lVar13 + -1;
          LORelease();
          if (lVar13 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000020);
          }
          iVar15 = unaff_w27 + 2;
LAB_100304334:
          *in_stack_00000008 = uVar8;
          *(int *)(in_stack_00000008 + 1) = iVar15;
          *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar9;
          *(undefined4 *)((long)in_stack_00000008 + 0x14) = uVar5;
          return;
        }
        lVar12 = *in_stack_00000020;
        *in_stack_00000020 = lVar12 + unaff_x26;
        LORelease();
        lVar13 = unaff_x22;
        if (lVar12 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000020);
        }
        while( true ) {
          if (lVar13 == unaff_x21) goto LAB_100304334;
          unaff_x22 = lVar13 + 0x20;
          plVar7 = *(long **)(lVar13 + 0x10);
          lVar13 = *(long *)(lVar13 + 0x18);
          lVar12 = *plVar7;
          *plVar7 = (long)(lVar12 + (long)unaff_x25);
          if (lVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1003045ac);
            (*pcVar11)();
          }
          in_stack_00000020 = plVar7;
          in_stack_00000028 = lVar13;
          (**(code **)(lVar13 + 0x20))
                    (&stack0x00000030,
                     (long)plVar7 + (*(long *)(lVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
          if (iStack0000000000000038 != unaff_w27) break;
          lVar12 = *in_stack_00000020;
          *in_stack_00000020 = lVar12 + unaff_x26;
          LORelease();
          lVar13 = unaff_x22;
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(&stack0x00000020);
          }
        }
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          if (bRam000000010b625820 - 1 < 2) {
LAB_100304178:
            iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
                               );
            if (iVar15 != 0) {
              auVar16 = (**(code **)(in_stack_00000028 + 0x28))
                                  ((long)in_stack_00000020 +
                                   (*(long *)(in_stack_00000028 + 0x10) - 1U & 0xfffffffffffffff0) +
                                   0x10);
              *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar16;
              *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x68;
              *(undefined **)(unaff_x29 + -0xd0) = &DAT_100312d90;
              *(undefined8 **)(unaff_x29 + -200) = &stack0x00000030;
              *(undefined **)(unaff_x29 + -0xc0) =
                   &
                   __ZN104__LT_aws_smithy_runtime_api__client__retries__classifiers__RetryAction_u20_as_u20_core__fmt__Display_GT_3fmt17hf19e022fa361f795E
              ;
              *(char **)(unaff_x29 + -0x78) = s_Classifier______set_the_result_o_108abaf7a;
              *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xd8;
              in_stack_000000a0 = unaff_x29 + -0x78;
              in_stack_000000a8 = &UNK_10b1f8a98;
              in_stack_000000b0 = unaff_x25;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
                         ,&stack0x000000b0);
              lVar13 = 
              ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
              ;
              auVar10._8_8_ = in_stack_000000a8;
              auVar10._0_8_ = in_stack_000000a0;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (_in_stack_000000a0 = auVar10,
                 4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puStack0000000000000068 =
                     *(undefined **)
                      (
                      ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
                      + 0x20);
                puVar3 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar15 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000060);
                if (iVar15 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar13,puVar4,puVar3,&stack0x00000060,&stack0x000000b0);
                }
              }
              goto LAB_1003042b8;
            }
          }
          else if (bRam000000010b625820 != 0) {
            cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
                               );
            if (cVar14 != '\0') goto LAB_100304178;
          }
        }
        unaff_x28 = 
        ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
        ;
      } while ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
              (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5));
      in_stack_00000050 =
           *(undefined8 *)
            (
            ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
            + 0x20);
      in_stack_00000058 =
           *(undefined8 *)
            (
            ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
            + 0x28);
      in_stack_00000048 = 5;
      unaff_x23 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        unaff_x23 = &UNK_10b3c24c8;
      }
      in_stack_00000000 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        in_stack_00000000 = &UNK_109adfc03;
      }
      iVar15 = (**(code **)(unaff_x23 + 0x18))(in_stack_00000000,&stack0x00000048);
      param_1 = 
      ___ZN18aws_smithy_runtime6client7retries11classifiers22run_classifiers_on_ctx10__CALLSITE17h52e6e0ee5bee47a1E
      ;
    } while (iVar15 == 0);
    auVar16 = (**(code **)(in_stack_00000028 + 0x28))
                        ((long)in_stack_00000020 +
                         (*(long *)(in_stack_00000028 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    param_1 = param_1 + 0x30;
    in_stack_000000b0 = &stack0x000000a0;
  } while( true );
}

