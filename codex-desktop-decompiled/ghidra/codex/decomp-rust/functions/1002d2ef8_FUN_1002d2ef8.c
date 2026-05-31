
void FUN_1002d2ef8(void)

{
  code *pcVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_9internal_error__entered_unreach_108b3cbc2,&stack0x000002e0,&UNK_10b4dc678);
  if (unaff_x21 == 3) {
    unaff_x21 = 2;
  }
  else {
    _memcpy(&stack0x000002e0);
    if (unaff_x21 == 2) {
      FUN_107c05cac(&UNK_108c765ef,0x14,&UNK_10b1f63f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d2fec);
      (*pcVar1)();
    }
    _memcpy(&stack0x00000188);
    in_stack_00000178 = *(undefined8 *)(unaff_x22 + 0x168);
    in_stack_00000170 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_1002b7fa4(&stack0x000002e0);
  }
  _memcpy();
  *(long *)(unaff_x19 + 0x158) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000178;
  *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000170;
  return;
}

