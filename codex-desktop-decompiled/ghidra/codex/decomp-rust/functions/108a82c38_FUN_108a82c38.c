
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108a82c38(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE + 1;
  bVar1 = -1 < ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE = lVar3;
  if ((bVar1) &&
     (auVar5 = (*pcRam000000010b66cd10)(), param_2 = auVar5._8_8_, plVar4 = auVar5._0_8_,
     param_1 = extraout_x8, (*(byte *)(plVar4 + 1) & 1) == 0)) {
    *plVar4 = *plVar4 + 1;
    *(undefined1 *)(plVar4 + 1) = 0;
  }
  uStack_40 = param_1;
  uStack_38 = param_2;
  __RNvCshXwFllX56pT_7___rustc10rust_panic(&uStack_40,&UNK_10b4ae4d0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108a82ca4);
  (*pcVar2)();
}

