
void FUN_100690e7c(void)

{
  code *pcVar1;
  undefined8 extraout_x1;
  
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__cannot_advance_past__remaining__108aba12e,&stack0x00000020,&UNK_10b2494c8);
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E();
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,extraout_x1,0,&UNK_10b21d990);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100690eb8);
  (*pcVar1)();
}

