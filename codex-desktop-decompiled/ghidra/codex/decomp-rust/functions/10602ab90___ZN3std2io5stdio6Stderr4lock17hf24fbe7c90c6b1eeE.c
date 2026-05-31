
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN3std2io5stdio6Stderr4lock17hf24fbe7c90c6b1eeE(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  long *plStack_50;
  code *pcStack_48;
  long lStack_40;
  long *plStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar4 = (long *)*param_1;
  plVar3 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    if (lRam000000010b66feb0 != -1) {
      lVar5 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar5;
      *plVar3 = lVar5;
      if (lVar5 != plVar4[1]) goto LAB_10602ab34;
      goto LAB_10602aae0;
    }
    FUN_108a82a30();
LAB_10602ab64:
    func_0x000108a079f0(&UNK_109bd65d7,0x26,&UNK_10b4ae130);
LAB_10602ab7c:
    FUN_108a825d0(plVar4);
    iVar2 = _pthread_mutex_lock();
  }
  else {
    if (lVar5 == plVar4[1]) {
LAB_10602aae0:
      if ((int)plVar4[2] != -1) {
        iVar2 = (int)plVar4[2] + 1;
        goto LAB_10602ab4c;
      }
      goto LAB_10602ab64;
    }
LAB_10602ab34:
    if (*plVar4 == 0) goto LAB_10602ab7c;
    iVar2 = _pthread_mutex_lock();
  }
  if (iVar2 != 0) {
    auVar6 = FUN_108a81ad4();
    uStack_28 = 0x10602ab90;
    puStack_80 = &UNK_109bd5c37;
    uStack_78 = 6;
    lStack_40 = lVar5;
    plStack_38 = plVar4;
    puStack_30 = &stack0xfffffffffffffff0;
    plVar3 = (long *)FUN_10602a754();
    if (((ulong)plVar3 & 1) == 0) {
      if (lRam000000010b63d138 != 0) {
        FUN_108a828bc();
      }
      uStack_70 = 0x10b63d0f8;
      puStack_60 = &uStack_70;
      lStack_68 = __ZN61__LT__RF_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_fmt17h9a360548a49380aaE
                            (&puStack_60,auVar6._0_8_,auVar6._8_8_);
      plVar3 = (long *)0x0;
      if (lStack_68 != 0) {
        plStack_50 = &lStack_68;
        puStack_58 = &DAT_10603bec4;
        pcStack_48 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        puStack_60 = &puStack_80;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s_failed_printing_to___108b34508,&puStack_60,&UNK_10b4ad960);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10602ac50);
        (*pcVar1)();
      }
    }
    return plVar3;
  }
  plVar4[1] = lVar5;
  iVar2 = 1;
LAB_10602ab4c:
  *(int *)(plVar4 + 2) = iVar2;
  return plVar4;
}

