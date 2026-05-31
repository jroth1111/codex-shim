
void FUN_100f46af4(void)

{
  code *pcVar1;
  long unaff_x29;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_ERROR__108ad43c7,unaff_x29 + -0x78);
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f46b10);
  (*pcVar1)();
}

