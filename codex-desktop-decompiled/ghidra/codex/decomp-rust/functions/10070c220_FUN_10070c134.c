
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070c134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 extraout_x10;
  ulong uVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  undefined8 *unaff_x26;
  char *unaff_x27;
  ulong *unaff_x28;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
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
  undefined8 in_stack_000004c8;
  
  *(char **)(unaff_x29 + -0xb0) = s_retry_sse_stream_error__108ac50ab;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(long *)(unaff_x20 + 0xd8) = *(long *)(unaff_x20 + 0xd8) + 1;
  auVar12 = (**(code **)(*(long *)(unaff_x20 + 0x168) + 0x20))
                      (*(long *)(unaff_x20 + 0x160) +
                       (*(long *)(*(long *)(unaff_x20 + 0x168) + 0x10) - 1U & 0xfffffffffffffff0) +
                       0x10);
  if (auVar12._8_4_ == 1000000000) {
    if ((*unaff_x28 < 5) &&
       (((bRam000000010b639c50 - 1 < 2 ||
         ((bRam000000010b639c50 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
                             ), cVar6 != '\0')))) &&
        (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
                           ), iVar7 != 0)))) {
      *(char **)(unaff_x29 + -0x88) = s_sse_stream_error____max_retry_ti_108ac513d;
      *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000003f0;
      *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x88;
      *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
      FUN_10070f77c(&stack0x000004e8);
    }
    else {
      uVar9 = 
      ___ZN122__LT_rmcp__transport__common__client_side_sse__SseAutoReconnectStream_LT_R_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17h9eccf86d0e930150E
      ;
      if ((*unaff_x27 == '\0') && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000004d0);
        if (iVar7 != 0) {
          *(char **)(unaff_x29 + -0x88) = s_sse_stream_error____max_retry_ti_108ac513d;
          *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000003f0;
          *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x88;
          *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar9,puVar2,puVar1,&stack0x000004d0,&stack0x000004e8);
        }
      }
    }
    FUN_100e0af0c();
    *unaff_x22 = 5;
    uVar9 = *unaff_x26;
    uVar11 = unaff_x26[3];
    uVar10 = unaff_x26[2];
    unaff_x19[2] = unaff_x26[1];
    unaff_x19[1] = uVar9;
    unaff_x19[4] = uVar11;
    unaff_x19[3] = uVar10;
    uVar9 = unaff_x26[4];
    uVar11 = unaff_x26[7];
    uVar10 = unaff_x26[6];
    unaff_x19[6] = unaff_x26[5];
    unaff_x19[5] = uVar9;
    unaff_x19[8] = uVar11;
    unaff_x19[7] = uVar10;
    *unaff_x19 = 0x15;
  }
  else {
    uVar3 = *(uint *)(unaff_x20 + 0x158);
    if (uVar3 == 1000000000) {
      auVar4._8_4_ = 1000000000;
      auVar4._0_8_ = extraout_x10;
    }
    else {
      uVar8 = *(ulong *)(unaff_x20 + 0x150);
      auVar4._8_4_ = uVar3;
      auVar4._0_8_ = uVar8;
      bVar5 = auVar12._8_4_ < uVar3;
      if (auVar12._0_8_ != uVar8) {
        bVar5 = auVar12._0_8_ < uVar8;
      }
      if (!bVar5) {
        auVar4 = auVar12;
      }
    }
    if (auVar4._8_4_ != 1000000000) {
      auVar12 = auVar4;
    }
    __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E
              (&stack0x00000460,auVar12._0_8_,auVar12._8_4_,&UNK_10b21f158);
    uVar9 = *(undefined8 *)(unaff_x20 + 0xd8);
    FUN_100d66e74(&stack0x000000c8);
    FUN_100e0af0c();
    *(undefined8 *)(unaff_x20 + 0xc0) = in_stack_00000460;
    *(undefined8 *)(unaff_x20 + 200) = in_stack_00000468;
    *(undefined8 *)(unaff_x20 + 0xd0) = in_stack_00000470;
    *(undefined8 *)(unaff_x20 + 0xd8) = in_stack_00000478;
    *(undefined8 *)(unaff_x20 + 0x108) = in_stack_000004a8;
    *(undefined8 *)(unaff_x20 + 0x100) = in_stack_000004a0;
    *(undefined8 *)(unaff_x20 + 0x118) = in_stack_000004b8;
    *(undefined8 *)(unaff_x20 + 0x110) = in_stack_000004b0;
    *(undefined8 *)(unaff_x20 + 0x128) = in_stack_000004c8;
    *(undefined8 *)(unaff_x20 + 0x120) = in_stack_000004c0;
    *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000488;
    *(undefined8 *)(unaff_x20 + 0xe0) = in_stack_00000480;
    *(undefined8 *)(unaff_x20 + 0xf8) = in_stack_00000498;
    *(undefined8 *)(unaff_x20 + 0xf0) = in_stack_00000490;
    *(undefined8 *)(unaff_x20 + 0x130) = uVar9;
    FUN_10070bab8();
  }
  return;
}

