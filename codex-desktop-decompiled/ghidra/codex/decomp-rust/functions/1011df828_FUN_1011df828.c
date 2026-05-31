
void FUN_1011df828(void)

{
  code *pcVar1;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x78,&UNK_10b21f750);
  in_stack_00000078 = in_stack_00000040;
  in_stack_00000070 = in_stack_00000038;
  in_stack_00000088 = in_stack_00000050;
  in_stack_00000080 = in_stack_00000048;
  in_stack_00000090 = in_stack_00000058;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000060;
  *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
  *(undefined8 **)(unaff_x29 + -0x68) = &stack0x00000070;
  *(undefined **)(unaff_x29 + -0x60) =
       &
       __ZN80__LT_clap_builder__parser__error__MatchesError_u20_as_u20_core__fmt__Display_GT_3fmt17h4df871ff5894b778E
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x78,&UNK_10b21f750);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011df980);
  (*pcVar1)();
}

