
void __ZN25codex_utils_stream_parser14assistant_text25AssistantTextStreamParser8push_str17hcf72055160ec1867E
               (long *param_1,long param_2)

{
  bool bVar1;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000105594474(&lStack_c0);
  if (*(char *)(param_2 + 0x90) == '\x01') {
    __ZN137__LT_codex_utils_stream_parser__proposed_plan__ProposedPlanParser_u20_as_u20_codex_utils_stream_parser__stream_text__StreamTextParser_GT_8push_str17he703a1e085c48493E
              (&lStack_90,param_2 + 0x58,lStack_b8,lStack_b0);
    bVar1 = lStack_c0 != 0;
    lStack_b0 = lStack_80;
    lStack_c0 = lStack_90;
    if (bVar1) {
      _free(lStack_b8);
    }
  }
  else {
    lStack_78 = 0;
    lStack_68 = 0;
    lStack_70 = 8;
    lStack_88 = lStack_b8;
  }
  *param_1 = lStack_c0;
  param_1[1] = lStack_88;
  param_1[2] = lStack_b0;
  param_1[4] = lStack_a0;
  param_1[3] = lStack_a8;
  param_1[5] = lStack_98;
  param_1[6] = lStack_78;
  param_1[7] = lStack_70;
  param_1[8] = lStack_68;
  return;
}

