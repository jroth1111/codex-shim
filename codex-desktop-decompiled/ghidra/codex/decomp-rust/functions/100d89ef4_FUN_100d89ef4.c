
void FUN_100d89ef4(long param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 in_wzr;
  ulong uStack_38;
  ulong *puStack_30;
  undefined *puStack_28;
  
  plVar5 = (long *)(param_1 + 8);
  lVar4 = *plVar5;
  LOAcquire();
  uStack_38 = *(ulong *)(lVar4 + 0x10);
  *(ulong *)(lVar4 + 0x10) = 3;
  LORelease();
  if (1 < uStack_38) {
    if (uStack_38 == 2) {
      do {
        LOAcquire();
        cVar1 = *(char *)(lVar4 + 0x28);
        *(char *)(lVar4 + 0x28) = '\x01';
        LORelease();
      } while (cVar1 != '\0');
      lVar3 = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined1 *)(lVar4 + 0x28) = in_wzr;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar4 + 0x20));
      }
    }
    else if (uStack_38 != 3) {
      puStack_30 = &uStack_38;
      puStack_28 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_9internal_error__entered_unreach_108b3cbc2,&puStack_30,&UNK_10b4dc678);
      goto LAB_100d89fe0;
    }
  }
  func_0x000100da90f4(param_1);
  lVar4 = *plVar5;
  LOAcquire();
  uStack_38 = *(ulong *)(lVar4 + 0x10);
  *(ulong *)(lVar4 + 0x10) = 3;
  LORelease();
  if (1 < uStack_38) {
    if (uStack_38 == 2) {
      do {
        LOAcquire();
        cVar1 = *(char *)(lVar4 + 0x28);
        *(char *)(lVar4 + 0x28) = '\x01';
        LORelease();
      } while (cVar1 != '\0');
      lVar3 = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined1 *)(lVar4 + 0x28) = in_wzr;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar4 + 0x20));
      }
    }
    else if (uStack_38 != 3) {
      puStack_30 = &uStack_38;
      puStack_28 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_9internal_error__entered_unreach_108b3cbc2,&puStack_30,&UNK_10b4dc678);
LAB_100d89fe0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100d89fe4);
      (*pcVar2)();
    }
  }
  lVar4 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar4 = *plVar5;
  if (*(long *)(lVar4 + 0x18) != 0) {
    (**(code **)(*(long *)(lVar4 + 0x18) + 0x18))(*(undefined8 *)(lVar4 + 0x20));
  }
  if (lVar4 != -1) {
    lVar3 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  return;
}

