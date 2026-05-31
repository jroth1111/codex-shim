
void FUN_101775d3c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x29;
  undefined1 *puStack0000000000000078;
  undefined *puStack0000000000000080;
  char *pcStack00000000000000a0;
  long lStack00000000000000a8;
  
  lStack00000000000000a8 = unaff_x29 + -0x80;
  pcStack00000000000000a0 = s_Bansi_to_tui_NomError_docs_claim_108adc7a2;
  puStack0000000000000078 = (undefined1 *)&stack0x000000a0;
  puStack0000000000000080 = &UNK_10b258760;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined1 ***)(unaff_x29 + -0x98) = &stack0x00000078;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce2424,0xe,&UNK_10b258780);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101775da0);
  (*pcVar1)();
}

