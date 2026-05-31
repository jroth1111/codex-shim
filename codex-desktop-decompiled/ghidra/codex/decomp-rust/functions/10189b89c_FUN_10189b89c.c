
void FUN_10189b89c(void)

{
  code *pcVar1;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108add0bf);
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x5810);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10189bc40);
  (*pcVar1)();
}

