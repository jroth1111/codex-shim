
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN3std3sys9backtrace26__rust_end_short_backtrace17h179837de08e394a0E(void)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108a829f0();
  puVar3 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  uVar4 = *puVar3;
  if (uVar4 < 3) {
    if (uVar4 != 2) {
      plVar6 = (long *)func_0x000108a82aa8();
      goto LAB_108a82804;
    }
    plVar6 = (long *)(*___ZN3std6thread7current2id2ID17hf33fc0a13e09aaafE)();
    lVar2 = *plVar6;
    if (lVar2 != 0) {
LAB_108a827ec:
      uStack_60 = 0x8000000000000000;
      plVar6 = (long *)__ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(lVar2,&uStack_60);
      goto LAB_108a82804;
    }
    if (lRam000000010b66feb0 != -1) {
      lVar2 = lRam000000010b66feb0 + 1;
      lRam000000010b66feb0 = lVar2;
      *plVar6 = lVar2;
      goto LAB_108a827ec;
    }
    FUN_108a82a30();
  }
  else {
    plVar6 = (long *)(uVar4 - 0x10);
    lVar2 = *plVar6;
    *plVar6 = lVar2 + 1;
    if (lVar2 < 0) goto LAB_108a82798;
LAB_108a82804:
    uStack_38 = (*
                ___ZN3std4sync4mpmc5waker17current_thread_id5DUMMY29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17he41a2878e4e0a276E
                )();
    uStack_58 = 1;
    uStack_60 = 1;
    uStack_48 = 0;
    uStack_40 = 0;
    plStack_50 = plVar6;
    puVar5 = (undefined8 *)_malloc(0x30);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = uStack_58;
      *puVar5 = uStack_60;
      puVar5[3] = uStack_48;
      puVar5[2] = plStack_50;
      puVar5[5] = uStack_38;
      puVar5[4] = uStack_40;
      return;
    }
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
LAB_108a82798:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108a8279c);
  (*pcVar1)();
}

