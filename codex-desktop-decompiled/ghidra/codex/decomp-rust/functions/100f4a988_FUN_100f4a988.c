
uint FUN_100f4a988(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  code *pcVar4;
  long *unaff_x19;
  uint unaff_w20;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long in_xzr;
  ulong in_stack_00000008;
  
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
            (s_failed_to_listen_for_Ctrl_C__108ad469b,&stack0x00000010);
  if ((in_stack_00000008 & 3) == 1) {
    uVar6 = *(undefined8 *)(in_stack_00000008 - 1);
    puVar7 = *(undefined8 **)(in_stack_00000008 + 7);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      _free(uVar6);
    }
    _free((undefined8 *)(in_stack_00000008 - 1));
    lVar5 = *unaff_x19;
    lVar3 = *(long *)(lVar5 + 0x148);
    uVar6 = extraout_x1_00;
  }
  else {
    lVar5 = *unaff_x19;
    lVar3 = *(long *)(lVar5 + 0x148);
    uVar6 = extraout_x1;
  }
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar5 + 0x130);
    if (*plVar1 == 0) {
      *plVar1 = 8;
    }
    else {
      __ZN11parking_lot10raw_rwlock9RawRwLock19lock_exclusive_slow17h52751bf05e1f824dE
                (plVar1,uVar6,1000000000);
    }
    *(undefined1 *)(lVar5 + 0x138) = 1;
    *(long *)(lVar5 + 0x140) = *(long *)(lVar5 + 0x140) + 2;
    LORelease();
    if (*plVar1 == 8) {
      *plVar1 = in_xzr;
    }
    else {
      func_0x000108a291a8(plVar1,0);
    }
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar5 + 0x10);
    lVar5 = *unaff_x19;
  }
  LOAcquire();
  lVar3 = *(long *)(lVar5 + 0x150);
  *(long *)(lVar5 + 0x150) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    uVar2 = *(ulong *)(lVar5 + 0x140);
    *(ulong *)(lVar5 + 0x140) = uVar2 | 1;
    LORelease();
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE
              (uVar2,lVar5 + 0x10);
  }
  lVar5 = *(long *)*unaff_x19;
  *(long *)*unaff_x19 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE();
  }
  *(undefined1 *)(unaff_x19 + 0xb) = 1;
  return unaff_w20 & 1;
}

