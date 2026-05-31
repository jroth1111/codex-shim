
void FUN_101846218(void)

{
  code *pcVar1;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108add0bf,&stack0x00000008,&UNK_10b269168);
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,1);
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xfa8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10184624c);
  (*pcVar1)();
}

