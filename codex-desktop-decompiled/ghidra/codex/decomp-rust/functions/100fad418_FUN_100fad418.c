
void FUN_100fad418(void)

{
  code *pcVar1;
  long in_stack_0000e3d0;
  undefined8 in_stack_0000e3d8;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_Logged_in_using_an_API_key___108ad9b93,&stack0x00000100);
  if (in_stack_0000e3d0 != 0) {
    _free(in_stack_0000e3d8);
  }
  __ZN3std7process4exit17h656c4fcb5bd11385E(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb1ca8);
  (*pcVar1)();
}

