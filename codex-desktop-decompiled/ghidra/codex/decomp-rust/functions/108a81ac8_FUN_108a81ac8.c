
void FUN_108a81ac8(void)

{
  code *pcVar1;
  long lVar2;
  ulong uStack_58;
  ulong *puStack_50;
  undefined *puStack_48;
  
  lVar2 = _abort();
  uStack_58 = lVar2 << 0x20 | 2;
  puStack_50 = &uStack_58;
  puStack_48 = &
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
  ;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s_failed_to_lock_mutex__108b34871,&puStack_50,&UNK_10b4add08);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a81b20);
  (*pcVar1)();
}

