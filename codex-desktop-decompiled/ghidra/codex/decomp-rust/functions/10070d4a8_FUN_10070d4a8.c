
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070d4a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  long lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 extraout_x10;
  ulong uVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  char *unaff_x25;
  ulong *unaff_x26;
  long unaff_x29;
  undefined1 auVar11 [12];
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  long lStack00000000000000e0;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  
  *(char **)(unaff_x29 + -0x88) = s_retry_sse_stream_error__108ac50ab;
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000003f0;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x88;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  lStack00000000000000d0 = unaff_x29 + -0xb0;
  uStack00000000000000c8 = 1;
  uStack00000000000000d8 = 1;
  lStack00000000000000e0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  unaff_x20[9] = unaff_x20[9] + 1;
  auVar11 = (**(code **)(unaff_x20[0x1d] + 0x20))
                      (unaff_x20[0x1c] +
                       (*(long *)(unaff_x20[0x1d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  if (auVar11._8_4_ == 1000000000) {
    if ((*unaff_x26 < 5) &&
       (((bRam000000010b639c50 - 1 < 2 ||
         ((bRam000000010b639c50 != 0 &&
          (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
                             ), cVar7 != '\0')))) &&
        (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
                           ), iVar8 != 0)))) {
      lStack00000000000000e0 =
           ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
           + 0x30;
      *(undefined1 **)(unaff_x29 + -0x88) = &stack0x000003f0;
      *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
      lStack00000000000000d0 = unaff_x29 + -0x88;
      uStack00000000000000c8 = 1;
      uStack00000000000000d8 = 1;
      FUN_10070f77c(&stack0x000000c8);
    }
    else {
      lVar5 = 
      ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
      ;
      if ((*unaff_x25 == '\0') && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004c8);
        if (iVar8 != 0) {
          lStack00000000000000e0 =
               ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
               + 0x30;
          *(undefined1 **)(unaff_x29 + -0x88) = &stack0x000003f0;
          *(undefined **)(unaff_x29 + -0x80) = &UNK_10b208fd0;
          lStack00000000000000d0 = unaff_x29 + -0x88;
          uStack00000000000000c8 = 1;
          uStack00000000000000d8 = 1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar5,puVar2,puVar1,&stack0x000004c8,&stack0x000000c8);
        }
      }
    }
    FUN_100df2508();
    *unaff_x20 = 5;
    unaff_x19[2] = in_stack_00000078;
    unaff_x19[1] = in_stack_00000070;
    unaff_x19[4] = in_stack_00000088;
    unaff_x19[3] = in_stack_00000080;
    unaff_x19[6] = in_stack_00000098;
    unaff_x19[5] = in_stack_00000090;
    unaff_x19[8] = in_stack_000000a8;
    unaff_x19[7] = in_stack_000000a0;
    *unaff_x19 = 0x15;
  }
  else {
    uVar3 = *(uint *)(unaff_x20 + 0x13);
    if (uVar3 == 1000000000) {
      auVar4._8_4_ = 1000000000;
      auVar4._0_8_ = extraout_x10;
    }
    else {
      uVar9 = unaff_x20[0x12];
      auVar4._8_4_ = uVar3;
      auVar4._0_8_ = uVar9;
      bVar6 = auVar11._8_4_ < uVar3;
      if (auVar11._0_8_ != uVar9) {
        bVar6 = auVar11._0_8_ < uVar9;
      }
      if (!bVar6) {
        auVar4 = auVar11;
      }
    }
    if (auVar4._8_4_ != 1000000000) {
      auVar11 = auVar4;
    }
    __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
              (&stack0x00000458,auVar11._0_8_,auVar11._8_4_,&UNK_10b21f158);
    uVar10 = unaff_x20[9];
    FUN_100d66e74(&stack0x00000070);
    FUN_100df2508();
    *unaff_x20 = in_stack_00000458;
    unaff_x20[1] = in_stack_00000460;
    unaff_x20[2] = in_stack_00000468;
    unaff_x20[4] = in_stack_00000478;
    unaff_x20[3] = in_stack_00000470;
    unaff_x20[6] = in_stack_00000488;
    unaff_x20[5] = in_stack_00000480;
    unaff_x20[8] = in_stack_00000498;
    unaff_x20[7] = in_stack_00000490;
    unaff_x20[9] = in_stack_000004a0;
    unaff_x20[0xb] = in_stack_000004b0;
    unaff_x20[10] = in_stack_000004a8;
    unaff_x20[0xd] = in_stack_000004c0;
    unaff_x20[0xc] = in_stack_000004b8;
    unaff_x20[0xe] = uVar10;
    FUN_10070cd54();
  }
  return;
}

