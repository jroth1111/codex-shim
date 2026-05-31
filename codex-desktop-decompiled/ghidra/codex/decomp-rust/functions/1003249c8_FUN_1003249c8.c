
/* WARNING: Removing unreachable block (ram,0x0001003254a4) */
/* WARNING: Removing unreachable block (ram,0x000100325398) */
/* WARNING: Removing unreachable block (ram,0x000100325380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003249c8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar15;
  undefined8 *puVar16;
  long unaff_x24;
  long lVar17;
  long *unaff_x28;
  long unaff_x29;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  long in_stack_00000028;
  undefined *in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  long in_stack_000000a0;
  undefined1 *puStack00000000000000b0;
  undefined *puStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  char *pcStack00000000000000d8;
  undefined *puStack00000000000000e0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined *in_stack_00000120;
  undefined1 *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  puStack00000000000000e0 = (undefined *)(unaff_x29 + -0xd0);
  pcStack00000000000000d8 = s_received_data__108abaf53;
  puStack00000000000000b0 = (undefined1 *)&stack0x000000d8;
  puStack00000000000000b8 = &UNK_10b1f8a98;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xb8) = &stack0x000000b0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xc0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar17 = *(long *)(unaff_x24 + 0x7c8);
    uVar15 = *(undefined8 *)(lVar17 + 0x20);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xf0) = 5;
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar15;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar13;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,unaff_x29 + -0xf0);
    if (iVar9 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar17,puVar4,puVar3,unaff_x29 + -0xf0,unaff_x29 + -0xc0);
    }
  }
  lVar17 = in_stack_000000a0;
  FUN_10030214c(unaff_x20 + 0x78);
  uVar14 = *(ulong *)(unaff_x20 + 0x138);
  if (uVar14 == 0) {
    *(long *)(unaff_x20 + 0x98) = lVar17;
    *(undefined1 *)(unaff_x20 + 0xa0) = 3;
    *(undefined8 *)(unaff_x20 + 0x138) = 1;
  }
  else {
    if (10 < uVar14) {
      FUN_107c05cd0(uVar14 - 1,10,&UNK_10b1fde78);
      goto LAB_100325510;
    }
    plVar1 = (long *)(unaff_x20 + 0x98 + (uVar14 - 1) * 0x10);
    *(undefined1 *)(plVar1 + 1) = 3;
    *plVar1 = *plVar1 + lVar17;
  }
  func_0x0001003022d4();
  puVar19 = (undefined8 *)unaff_x28[1];
  lVar18 = *unaff_x28;
  in_stack_00000028 = unaff_x28[3];
  puVar20 = (undefined8 *)unaff_x28[2];
  lVar17 = *(long *)*(undefined1 (*) [16])(unaff_x20 + 0x1b0);
  auVar23 = *(undefined1 (*) [16])(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  if (lVar17 == 0) {
    auVar23 = (**(code **)(*(long *)(unaff_x20 + 0x198) + 0x20))
                        (*(long *)(unaff_x20 + 400) +
                         (*(long *)(*(long *)(unaff_x20 + 0x198) + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,*(undefined8 *)(unaff_x20 + 0x148),
                         *(undefined4 *)(unaff_x20 + 0x150));
  }
  puVar16 = auVar23._8_8_;
  uVar15 = auVar23._0_8_;
  iVar9 = (*(code *)puVar16[3])(uVar15);
  if (iVar9 == 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6257a8 - 1 < 2 ||
         ((bRam000000010b6257a8 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
                             ), cVar8 != '\0')))) &&
        (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
                           ),
        lVar17 = 
        ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
        , iVar9 != 0)))) {
      lVar12 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
               + 0x30;
      in_stack_00000090 = (undefined8 *)&UNK_108c7ec89;
      in_stack_00000098 = (undefined *)0x59;
      *(undefined8 ***)(unaff_x29 + -0xf0) = &stack0x00000090;
      *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xf0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 1;
      *(long *)(unaff_x29 + -0xa8) = lVar12;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,unaff_x29 + -0xc0);
      lVar17 = 
      ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000038 =
             *(undefined1 **)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
              + 0x20);
        in_stack_00000040 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
              + 0x28);
        in_stack_00000030 = (undefined *)0x5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000030);
        if (iVar9 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar4,puVar3,&stack0x00000030,unaff_x29 + -0xc0);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000000c8 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
              + 0x20);
        in_stack_000000d0 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
              + 0x28);
        in_stack_000000c0 = 5;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000000c0);
        if (iVar9 != 0) {
          in_stack_00000048 =
               ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h59fabe2abbba8d08E
               + 0x30;
          *(undefined **)(unaff_x29 + -0xd0) = &UNK_108c7ec89;
          *(undefined8 *)(unaff_x29 + -200) = 0x59;
          pcStack00000000000000d8 = (char *)(unaff_x29 + -0xd0);
          puStack00000000000000e0 = &UNK_10b1f8a98;
          in_stack_00000038 = (undefined1 *)&stack0x000000d8;
          in_stack_00000030 = (undefined *)0x1;
          in_stack_00000040 = 1;
          in_stack_000001b8 = in_stack_000000c8;
          in_stack_000001b0 = in_stack_000000c0;
          *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000000d0;
          lVar12 = *(long *)(lVar17 + 0x60);
          uVar21 = *(undefined8 *)(lVar17 + 0x68);
          lVar7 = *(long *)(lVar17 + 0x50);
          uVar22 = *(undefined8 *)(lVar17 + 0x58);
          uVar13 = 1;
          if (lVar7 == 0) {
            uVar13 = 2;
          }
          uVar5 = *(undefined4 *)(lVar17 + 8);
          uVar6 = *(undefined4 *)(lVar17 + 0xc);
          *(undefined ***)(unaff_x29 + -0xf0) = &stack0x00000030;
          *(undefined1 *)(unaff_x29 + -0xe8) = 1;
          in_stack_00000090 = (undefined8 *)(unaff_x29 + -0xf0);
          in_stack_00000098 = &DAT_1061c2098;
          uVar2 = 1;
          if (lVar12 == 0) {
            uVar2 = 2;
          }
          *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
          *(undefined8 ***)(unaff_x29 + -0x68) = &stack0x00000090;
          *(undefined8 *)(unaff_x29 + -0xc0) = uVar13;
          *(long *)(unaff_x29 + -0xb8) = lVar7;
          *(undefined8 *)(unaff_x29 + -0xb0) = uVar22;
          *(undefined8 *)(unaff_x29 + -0xa8) = uVar2;
          *(long *)(unaff_x29 + -0xa0) = lVar12;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar21;
          *(undefined4 *)(unaff_x29 + -0x78) = uVar5;
          *(undefined4 *)(unaff_x29 + -0x74) = uVar6;
          (**(code **)(puVar3 + 0x20))(puVar4,unaff_x29 + -0xc0);
        }
      }
    }
    auVar23 = (**(code **)(*(long *)(unaff_x20 + 0x198) + 0x20))
                        (*(long *)(unaff_x20 + 400) +
                         (*(long *)(*(long *)(unaff_x20 + 0x198) + 0x10) - 1U & 0xfffffffffffffff0)
                         + 0x10,*(undefined8 *)(unaff_x20 + 0x148),
                         *(undefined4 *)(unaff_x20 + 0x150));
    if ((code *)*puVar16 != (code *)0x0) {
      (*(code *)*puVar16)(uVar15);
    }
    if (puVar16[1] != 0) {
      _free(uVar15);
    }
    (**(code **)(*(long *)*unaff_x21 + 0x10))(((long *)*unaff_x21)[1]);
    lVar17 = *(long *)(unaff_x20 + 0x1b0);
    puVar16 = *(undefined8 **)(unaff_x20 + 0x1b8);
    *(undefined1 (*) [16])(unaff_x20 + 0x1b0) = auVar23;
    if (lVar17 != 0) {
      pcVar11 = (code *)*puVar16;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(lVar17);
      }
      if (puVar16[1] != 0) {
        _free(lVar17);
      }
    }
  }
  else {
    *(undefined1 (*) [16])(unaff_x20 + 0x1b0) = auVar23;
  }
  __ZN18aws_smithy_runtime6client4http4body18minimum_throughput10throughput14ThroughputLogs6report17h6755d961d0940654E
            (&stack0x000000e8,unaff_x20 + 0x78);
  in_stack_00000038 = *(undefined1 **)(unaff_x20 + 0x160);
  in_stack_00000030 = *(undefined **)(unaff_x20 + 0x158);
  in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x168);
  __ZN200__LT_aws_smithy_runtime__client__http__body__minimum_throughput__throughput__ThroughputReport_u20_as_u20_aws_smithy_runtime__client__http__body__minimum_throughput__http_body_0_4_x__DownloadReport_GT_27minimum_throughput_violated17h2e0c2c8713cadfccE
            (unaff_x29 + -0xc0,&stack0x000000e8,&stack0x00000030);
  in_stack_00000108 = in_stack_00000190;
  in_stack_00000100 = in_stack_00000188;
  in_stack_00000110 = *(undefined8 *)(unaff_x29 + -0xa8);
  lVar17 = *(long *)(unaff_x20 + 0x1c0);
  if ((*(byte *)(unaff_x29 + -0xc0) & 1) == 0) {
    if (lVar17 == 0) goto LAB_1003247cc;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b625790 - 1 < 2 ||
         ((bRam000000010b625790 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
                             ), cVar8 != '\0')))))) &&
       (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
                          ),
       lVar17 = 
       ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
       , iVar9 != 0)) {
      lVar12 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
               + 0x30;
      in_stack_00000090 = (undefined8 *)&UNK_108c7ecb5;
      in_stack_00000098 = (undefined *)0x55;
      *(undefined8 ***)(unaff_x29 + -0xf0) = &stack0x00000090;
      *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
      *(undefined8 *)(unaff_x29 + -0xc0) = 1;
      *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xf0;
      *(undefined8 *)(unaff_x29 + -0xb0) = 1;
      *(long *)(unaff_x29 + -0xa8) = lVar12;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,unaff_x29 + -0xc0);
      lVar17 = 
      ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000038 =
             *(undefined1 **)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
              + 0x20);
        in_stack_00000040 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
              + 0x28);
        in_stack_00000030 = (undefined *)0x4;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000030);
        if (iVar9 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar4,puVar3,&stack0x00000030,unaff_x29 + -0xc0);
        }
      }
    }
    else {
      lVar17 = 
      ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000140 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
              + 0x20);
        in_stack_00000148 =
             *(undefined8 *)
              (
              ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
              + 0x28);
        in_stack_00000138 = 4;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000138);
        if (iVar9 != 0) {
          lVar12 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17h4c168de70552e36dE
                   + 0x30;
          in_stack_00000030 = &UNK_108c7ecb5;
          in_stack_00000038 = (undefined1 *)0x55;
          in_stack_00000090 = &stack0x00000030;
          in_stack_00000098 = &UNK_10b1f8a98;
          *(undefined8 *)(unaff_x29 + -0xc0) = 1;
          *(undefined8 ***)(unaff_x29 + -0xb8) = &stack0x00000090;
          *(undefined8 *)(unaff_x29 + -0xb0) = 1;
          *(long *)(unaff_x29 + -0xa8) = lVar12;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar17,puVar4,puVar3,&stack0x00000138,unaff_x29 + -0xc0);
        }
      }
    }
    lVar17 = *(long *)(unaff_x20 + 0x1c0);
    puVar16 = *(undefined8 **)(unaff_x20 + 0x1c8);
    *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
    if (lVar17 == 0) goto LAB_1003247cc;
    pcVar11 = (code *)*puVar16;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(lVar17);
    }
    lVar12 = puVar16[1];
  }
  else {
    if (lVar17 == 0) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b6257c0 - 1 < 2 ||
           ((bRam000000010b6257c0 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                               ), cVar8 != '\0')))))) &&
         (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                            ),
         lVar17 = 
         ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
         , iVar9 != 0)) {
        lVar12 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                 + 0x30;
        in_stack_00000090 = (undefined8 *)&UNK_108c7ecdf;
        in_stack_00000098 = (undefined *)0x51;
        *(undefined8 ***)(unaff_x29 + -0xf0) = &stack0x00000090;
        *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xf0;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar12;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar17,unaff_x29 + -0xc0);
        lVar17 = 
        ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000038 =
               *(undefined1 **)
                (
                ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                + 0x20);
          in_stack_00000040 =
               *(undefined8 *)
                (
                ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                + 0x28);
          in_stack_00000030 = (undefined *)0x4;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000030);
          if (iVar9 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar17,puVar4,puVar3,&stack0x00000030,unaff_x29 + -0xc0);
          }
        }
      }
      else {
        lVar17 = 
        ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000128 =
               *(undefined1 **)
                (
                ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                + 0x20);
          in_stack_00000130 =
               *(undefined8 *)
                (
                ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                + 0x28);
          in_stack_00000120 = (undefined *)0x4;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000120);
          if (iVar9 != 0) {
            lVar12 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x144__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__MinimumThroughputDownloadBody_LT_B_GT__GT_9poll_data10__CALLSITE17hd8410b0a34f446d2E
                     + 0x30;
            in_stack_00000090 = (undefined8 *)&UNK_108c7ecdf;
            in_stack_00000098 = (undefined *)0x51;
            *(undefined8 ***)(unaff_x29 + -0xf0) = &stack0x00000090;
            *(undefined **)(unaff_x29 + -0xe8) = &UNK_10b1f8a98;
            *(undefined8 *)(unaff_x29 + -0xc0) = 1;
            *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xf0;
            *(undefined8 *)(unaff_x29 + -0xb0) = 1;
            *(long *)(unaff_x29 + -0xa8) = lVar12;
            in_stack_00000038 = in_stack_00000128;
            in_stack_00000030 = in_stack_00000120;
            in_stack_00000040 = in_stack_00000130;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar17,puVar4,puVar3,&stack0x00000030,unaff_x29 + -0xc0);
          }
        }
      }
      lVar17 = *(long *)*(undefined1 (*) [16])(unaff_x20 + 0x1c0);
      auVar23 = *(undefined1 (*) [16])(unaff_x20 + 0x1c0);
      *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
      if (lVar17 == 0) {
        auVar23 = (**(code **)(*(long *)(unaff_x20 + 0x198) + 0x20))
                            (*(long *)(unaff_x20 + 400) +
                             (*(long *)(*(long *)(unaff_x20 + 0x198) + 0x10) - 1U &
                             0xfffffffffffffff0) + 0x10,*(undefined8 *)(unaff_x20 + 0x170),
                             *(undefined4 *)(unaff_x20 + 0x178));
      }
    }
    else {
      auVar23._8_8_ = *(undefined8 *)(unaff_x20 + 0x1c8);
      auVar23._0_8_ = lVar17;
      *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
    }
    puVar16 = auVar23._8_8_;
    uVar15 = auVar23._0_8_;
    iVar9 = (*(code *)puVar16[3])(uVar15);
    if (iVar9 == 0) {
      in_stack_00000188 = *(undefined8 *)(unaff_x20 + 0x160);
      in_stack_00000180 = *(undefined8 *)(unaff_x20 + 0x158);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x168);
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000108;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000100;
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar13;
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000110;
      puVar10 = (undefined8 *)_malloc(0x30);
      if (puVar10 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
LAB_100325510:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100325514);
        (*pcVar11)();
      }
      uVar13 = *(undefined8 *)(unaff_x29 + -0xc0);
      uVar22 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar21 = *(undefined8 *)(unaff_x29 + -0xb0);
      puVar10[1] = *(undefined8 *)(unaff_x29 + -0xb8);
      *puVar10 = uVar13;
      puVar10[3] = uVar22;
      puVar10[2] = uVar21;
      uVar13 = *(undefined8 *)(unaff_x29 + -0xa0);
      puVar10[5] = *(undefined8 *)(unaff_x29 + -0x98);
      puVar10[4] = uVar13;
      lVar17 = extraout_x11;
      if ((code *)*puVar16 != (code *)0x0) {
        (*(code *)*puVar16)(uVar15);
        lVar17 = extraout_x11_00;
      }
      if (puVar16[1] != 0) {
        _free(uVar15);
        lVar17 = extraout_x11_01;
      }
      if (lVar18 == 0) {
        if ((code *)*puVar20 != (code *)0x0) {
          (*(code *)*puVar20)(puVar19);
          lVar17 = extraout_x11_03;
        }
        if (puVar20[1] != 0) {
          _free(puVar19);
          lVar17 = extraout_x11_04;
        }
      }
      else {
        (**(code **)(lVar18 + 0x20))(&stack0x00000028,puVar19,puVar20);
        lVar17 = extraout_x11_02;
      }
      lVar18 = 0;
      puVar20 = (undefined8 *)&UNK_10b1f8e78;
      in_stack_00000028 = lVar17;
      puVar19 = puVar10;
      goto LAB_1003247cc;
    }
    lVar17 = *(long *)(unaff_x20 + 0x1c0);
    puVar16 = *(undefined8 **)(unaff_x20 + 0x1c8);
    *(undefined1 (*) [16])(unaff_x20 + 0x1c0) = auVar23;
    if (lVar17 == 0) goto LAB_1003247cc;
    pcVar11 = (code *)*puVar16;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(lVar17);
    }
    lVar12 = puVar16[1];
  }
  if (lVar12 != 0) {
    _free(lVar17);
  }
LAB_1003247cc:
  if (lVar18 == 0) {
    *unaff_x19 = 1;
    unaff_x19[1] = 0;
    unaff_x19[2] = puVar19;
    unaff_x19[3] = puVar20;
  }
  else {
    *unaff_x19 = 1;
    unaff_x19[1] = lVar18;
    unaff_x19[2] = puVar19;
    unaff_x19[3] = puVar20;
    unaff_x19[4] = in_stack_00000028;
  }
  return;
}

