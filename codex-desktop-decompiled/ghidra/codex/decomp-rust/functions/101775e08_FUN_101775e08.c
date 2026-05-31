
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101775e08(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long unaff_x29;
  char *pcStack0000000000000048;
  long lStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char *pcStack00000000000000a0;
  undefined *puStack00000000000000a8;
  
  lStack0000000000000050 = unaff_x29 + -0xa0;
  pcStack0000000000000048 = s_Utf8Error__108adc803;
  pcStack00000000000000a0 = (char *)&stack0x00000048;
  puStack00000000000000a8 = &UNK_10b258760;
  *(undefined8 *)(unaff_x29 + -0x80) = 1;
  *(char ***)(unaff_x29 + -0x78) = &stack0x000000a0;
  *(undefined8 *)(unaff_x29 + -0x70) = 1;
  *(undefined8 *)(unaff_x29 + -0x68) = param_1;
  FUN_101775f88(unaff_x29 + -0x80);
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2424,0xe,&UNK_10b258798);
  lVar7 = lRam000000010b626d68;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    unaff_x22 = 0x10b626000;
    in_stack_00000090 = *(undefined8 *)(lRam000000010b626d68 + 0x20);
    in_stack_00000098 = *(undefined8 *)(lRam000000010b626d68 + 0x28);
    in_stack_00000088 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000088);
    if (iVar5 != 0) {
      lVar6 = lRam000000010b626d68 + 0x30;
      *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x31;
      *(undefined **)(unaff_x29 + -0x98) =
           &
           __ZN65__LT_simdutf8__basic__Utf8Error_u20_as_u20_core__fmt__Display_GT_3fmt17h4021558dd4602050E
      ;
      lStack0000000000000050 = unaff_x29 + -0xa0;
      pcStack0000000000000048 = s_Utf8Error__108adc803;
      pcStack00000000000000a0 = (char *)&stack0x00000048;
      puStack00000000000000a8 = &UNK_10b258760;
      *(undefined8 *)(unaff_x29 + -0x80) = 1;
      *(char ***)(unaff_x29 + -0x78) = &stack0x000000a0;
      *(undefined8 *)(unaff_x29 + -0x70) = 1;
      *(long *)(unaff_x29 + -0x68) = lVar6;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar7,puVar2,puVar1,&stack0x00000088,unaff_x29 + -0x80);
    }
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2424,0xe,&UNK_10b258798);
  cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE(0x10b626d50);
  if ((cVar4 == '\0') ||
     (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (*(undefined8 *)(unaff_x22 + 0xd50)), iVar5 == 0)) {
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      lVar7 = *(long *)(unaff_x22 + 0xd50);
      in_stack_00000068 = *(undefined8 *)(lVar7 + 0x20);
      in_stack_00000070 = *(undefined8 *)(lVar7 + 0x28);
      in_stack_00000060 = 1;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000060);
      if (iVar5 != 0) {
        lVar6 = *(long *)(unaff_x22 + 0xd50);
        *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000008;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_101776bbc;
        *(char ***)(unaff_x29 + -0x70) = &stack0x00000048;
        *(undefined **)(unaff_x29 + -0x68) = &DAT_101776d10;
        puStack00000000000000a8 = (undefined *)(unaff_x29 + -0x80);
        pcStack00000000000000a0 = s_Bansi_to_tui_NomError_docs_claim_108adc7a2;
        in_stack_00000078 = (undefined1 *)&stack0x000000a0;
        in_stack_00000080 = &UNK_10b258760;
        *(undefined8 *)(unaff_x29 + -0xa0) = 1;
        *(undefined1 ***)(unaff_x29 + -0x98) = &stack0x00000078;
        *(undefined8 *)(unaff_x29 + -0x90) = 1;
        *(long *)(unaff_x29 + -0x88) = lVar6 + 0x30;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar7,puVar2,puVar1,&stack0x00000060,unaff_x29 + -0xa0);
      }
    }
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0xd50);
    *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000008;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_101776bbc;
    *(char ***)(unaff_x29 + -0x70) = &stack0x00000048;
    *(undefined **)(unaff_x29 + -0x68) = &DAT_101776d10;
    puStack00000000000000a8 = (undefined *)(unaff_x29 + -0x80);
    pcStack00000000000000a0 = s_Bansi_to_tui_NomError_docs_claim_108adc7a2;
    in_stack_00000078 = (undefined1 *)&stack0x000000a0;
    in_stack_00000080 = &UNK_10b258760;
    *(undefined8 *)(unaff_x29 + -0xa0) = 1;
    *(undefined1 ***)(unaff_x29 + -0x98) = &stack0x00000078;
    *(undefined8 *)(unaff_x29 + -0x90) = 1;
    *(long *)(unaff_x29 + -0x88) = lVar7 + 0x30;
    FUN_1017760c4(unaff_x29 + -0xa0);
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2424,0xe,&UNK_10b258780);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101775da0);
  (*pcVar3)();
}

