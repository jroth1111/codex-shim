
void FUN_100facca8(void)

{
  code *pcVar1;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_Error_logging_out__108ad9b7b,&stack0x00000880);
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
  (*pcVar1)();
}

