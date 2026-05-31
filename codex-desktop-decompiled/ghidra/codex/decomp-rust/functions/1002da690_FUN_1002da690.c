
void FUN_1002da690(void)

{
  code *pcVar1;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__cannot_advance_past__remaining__108aba12e,&stack0x00000018,&UNK_10b1f6860);
  __ZN5bytes13panic_advance17h894eeb3b0f978370E(&stack0x00000018);
  __ZN5bytes13panic_advance17h894eeb3b0f978370E(&stack0x00000040);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002da6c4);
  (*pcVar1)();
}

