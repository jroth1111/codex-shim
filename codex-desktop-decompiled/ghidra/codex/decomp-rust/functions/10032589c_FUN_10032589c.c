
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032589c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long lStack00000000000000c8;
  undefined *puStack00000000000000d0;
  undefined *in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  *(char **)(unaff_x29 + -0x60) = s_received_data__108abaf53;
  *(undefined ***)(unaff_x29 + -0x58) = &stack0x000000d8;
  lStack00000000000000c8 = unaff_x29 + -0x60;
  puStack00000000000000d0 = &UNK_10b1f8a98;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long **)(unaff_x29 + -0xb8) = &stack0x000000c8;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar5 = in_stack_000000b0;
  __ZN18aws_smithy_runtime6client4http4body18minimum_throughput16UploadThroughput22push_bytes_transferred17he9eecb9730c468a1E
            (unaff_x20 + 0x11);
  if (*unaff_x20 == 0) {
    if ((unaff_x20[1] != 0) && (unaff_x20[3] != 0)) goto LAB_100325f70;
  }
  else if (*unaff_x20 == 1) {
    lVar2 = 0x20;
    if ((int)unaff_x20[1] == 0) {
      lVar2 = 0x28;
    }
    uVar8 = (**(code **)(unaff_x20[3] + lVar2))(unaff_x20[2]);
    if ((uVar8 & 1) == 0) goto LAB_100325f70;
  }
  if ((*unaff_x26 == 0) &&
     (((bRam000000010b625748 - 1 < 2 ||
       ((bRam000000010b625748 != 0 &&
        (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
                           ), cVar6 != '\0')))) &&
      (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
                         ), iVar7 != 0)))) {
    lVar2 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
            + 0x30;
    in_stack_000000d8 = &UNK_108c7e900;
    in_stack_000000e0 = 0xaf;
    *(undefined ***)(unaff_x29 + -0x60) = &stack0x000000d8;
    *(undefined **)(unaff_x29 + -0x58) = &UNK_10b1f8a98;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x60;
    *(undefined8 *)(unaff_x29 + -0xb0) = 1;
    *(long *)(unaff_x29 + -0xa8) = lVar2;
    FUN_1003023fc(unaff_x29 + -0xc0);
  }
  else {
    lVar2 = 
    ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_00000050 =
           *(undefined8 *)
            (
            ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
            + 0x20);
      in_stack_00000058 =
           *(undefined8 *)
            (
            ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
            + 0x28);
      in_stack_00000048 = 5;
      puVar3 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar7 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000048);
      if (iVar7 != 0) {
        lVar1 = ___ZN18aws_smithy_runtime6client4http4body18minimum_throughput15http_body_0_4_x136__LT_impl_u20_http_body__Body_u20_for_u20_aws_smithy_runtime__client__http__body__minimum_throughput__ThroughputReadingBody_LT_B_GT__GT_9poll_data10__CALLSITE17hcb2bed1c14e717dcE
                + 0x30;
        in_stack_000000d8 = &UNK_108c7e900;
        in_stack_000000e0 = 0xaf;
        *(undefined ***)(unaff_x29 + -0x60) = &stack0x000000d8;
        *(undefined **)(unaff_x29 + -0x58) = &UNK_10b1f8a98;
        *(undefined8 *)(unaff_x29 + -0xc0) = 1;
        *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x60;
        *(undefined8 *)(unaff_x29 + -0xb0) = 1;
        *(long *)(unaff_x29 + -0xa8) = lVar1;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar2,puVar4,puVar3,&stack0x00000048,unaff_x29 + -0xc0);
      }
    }
  }
  __ZN18aws_smithy_runtime6client4http4body18minimum_throughput16UploadThroughput13mark_complete17h42456ddffe4ab5c8E
            (unaff_x20 + 0x11);
LAB_100325f70:
  if (in_stack_000000a0 == 0) {
    *unaff_x19 = 1;
    unaff_x19[1] = 0;
    unaff_x19[2] = in_stack_000000a8;
    unaff_x19[3] = uVar5;
  }
  else {
    *unaff_x19 = 1;
    unaff_x19[2] = in_stack_000000a8;
    unaff_x19[1] = in_stack_000000a0;
    unaff_x19[3] = uVar5;
    unaff_x19[4] = in_stack_000000b8;
  }
  return;
}

