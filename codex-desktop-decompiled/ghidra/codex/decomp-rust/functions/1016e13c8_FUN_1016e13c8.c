
void FUN_1016e13c8(void)

{
  code *pcVar1;
  long *unaff_x22;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_Error_loading_config_toml__108ac26ce,&stack0x0000dc90);
  if (*unaff_x22 != 0) {
    _free(unaff_x22[1]);
  }
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e14c0);
  (*pcVar1)();
}

