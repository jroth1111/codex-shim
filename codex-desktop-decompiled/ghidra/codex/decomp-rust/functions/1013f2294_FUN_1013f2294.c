
void FUN_1013f2294(void)

{
  code *pcVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x50,&UNK_10b21f750);
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  in_stack_00000058 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000018;
  in_stack_00000060 = in_stack_00000028;
  *(undefined1 **)(unaff_x29 + -0x50) = &stack0x00000030;
  *(undefined **)(unaff_x29 + -0x48) = &DAT_100c7b3a0;
  *(undefined8 **)(unaff_x29 + -0x40) = &stack0x00000040;
  *(undefined **)(unaff_x29 + -0x38) =
       &
       __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x50,&UNK_10b21f750);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013f22fc);
  (*pcVar1)();
}

