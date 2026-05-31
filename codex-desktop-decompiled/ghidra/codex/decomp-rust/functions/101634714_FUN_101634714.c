
void FUN_101634714(void)

{
  code *pcVar1;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_Error_parsing__c_overrides__108ac26ad,&stack0x00000040);
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101634760);
  (*pcVar1)();
}

