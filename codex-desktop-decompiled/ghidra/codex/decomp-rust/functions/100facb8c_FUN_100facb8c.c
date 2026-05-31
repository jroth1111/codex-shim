
void FUN_100facb8c(void)

{
  code *pcVar1;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s__Error_logging_in_with_access_to_108ad9c62,&stack0x00010910);
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
  (*pcVar1)();
}

