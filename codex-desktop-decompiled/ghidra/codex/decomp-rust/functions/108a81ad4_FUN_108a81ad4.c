
void FUN_108a81ad4(long param_1)

{
  code *pcVar1;
  ulong uStack_48;
  ulong *puStack_40;
  undefined *puStack_38;
  
  uStack_48 = param_1 << 0x20 | 2;
  puStack_40 = &uStack_48;
  puStack_38 = &
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_failed_to_lock_mutex__108b34871,&puStack_40,&UNK_10b4add08);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a81b20);
  (*pcVar1)();
}

