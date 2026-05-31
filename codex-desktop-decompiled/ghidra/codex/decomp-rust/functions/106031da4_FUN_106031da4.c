
long FUN_106031da4(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long alStack_60 [2];
  ulong uStack_50;
  ulong uStack_48;
  ulong *puStack_40;
  undefined *puStack_38;
  
  if (cRam000000010b6fde68 != '\0') {
    if ((param_1 & 1) == 0) {
      uVar3 = _pthread_self();
      lVar4 = _pthread_get_stackaddr_np();
      lVar5 = _pthread_get_stacksize_np(uVar3);
      FUN_106030dc0((lVar4 - lVar5) - lRam000000010b6fde98);
    }
    alStack_60[0] = 0;
    alStack_60[1] = 0;
    uStack_50 = 0;
    _sigaltstack(0,alStack_60);
    lVar4 = lRam000000010b6fde98;
    if (((byte)uStack_50 >> 2 & 1) != 0) {
      lVar5 = _mmap(0,lRam000000010b6fde98 + 0x20000,3,0x1002,0xffffffff,0);
      if (lVar5 == -1) {
        puVar6 = (uint *)___error();
        uStack_48 = (ulong)*puVar6 << 0x20 | 2;
        puStack_40 = &uStack_48;
        puStack_38 = &
                     __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__failed_to_allocate_an_alternati_108b347cc,&puStack_40,&UNK_10b4adc60);
      }
      else {
        iVar2 = _mprotect(lVar5,lVar4,0);
        if (iVar2 == 0) {
          alStack_60[0] = lVar5 + lVar4;
          alStack_60[1] = 0x20000;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          _sigaltstack(alStack_60,0);
          return alStack_60[0];
        }
        puVar6 = (uint *)___error();
        uStack_48 = (ulong)*puVar6 << 0x20 | 2;
        puStack_40 = &uStack_48;
        puStack_38 = &
                     __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__failed_to_set_up_alternative_st_108b3479a,&puStack_40,&UNK_10b4adc48);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x106031f10);
      (*pcVar1)();
    }
  }
  return 0;
}

