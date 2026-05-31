
undefined8 FUN_1016936e0(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x19;
  int unaff_w21;
  long lVar7;
  ulong unaff_x26;
  ulong in_xzr;
  byte in_stack_000001e0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_000001e0 & 1) != 0) {
    FUN_100cdd078(&stack0x000001e0);
  }
  if (unaff_w21 == 6) {
    if ((unaff_x26 & 1) == 0) {
      __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_31apply_side_parent_status_change17h3073c1d2802ff8e2E
                (*(undefined8 *)(unaff_x19 + 0x210),&stack0x00001800);
    }
  }
  else {
    __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_22set_side_parent_status17he95a9c2129256965E
              (*(undefined8 *)(unaff_x19 + 0x210),&stack0x00001800);
  }
  *(undefined8 *)(unaff_x19 + 0x6d0) = *(undefined8 *)(unaff_x19 + 0x210);
  *(undefined1 *)(unaff_x19 + 0x6eb) = 0;
  uVar3 = FUN_101696164(unaff_x19 + 0x5e8);
  if ((uVar3 & 1) == 0) {
    FUN_100d51964(unaff_x19 + 0x5e8);
    lVar2 = **(long **)(unaff_x19 + 0x5d8);
    **(long **)(unaff_x19 + 0x5d8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE(unaff_x19 + 0x5d8);
    }
    if ((*(byte *)(unaff_x19 + 0x5e1) & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x5d0);
      LOAcquire();
      lVar2 = *(long *)(lVar7 + 0x1f0);
      *(long *)(lVar7 + 0x1f0) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        LOAcquire();
        lVar2 = *(long *)(lVar7 + 0x88);
        *(long *)(lVar7 + 0x88) = lVar2 + 1;
        lVar2 = FUN_100fca4a4(lVar7 + 0x80,lVar2);
        *(ulong *)(lVar2 + 0x3f10) = *(ulong *)(lVar2 + 0x3f10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar7 + 0x110);
        LOAcquire();
        uVar3 = *puVar1;
        *puVar1 = uVar3 | 2;
        LORelease();
        if (uVar3 == 0) {
          lVar2 = *(long *)(lVar7 + 0x100);
          *(undefined8 *)(lVar7 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar2 != 0) {
            (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x108));
          }
        }
      }
      plVar6 = *(long **)(unaff_x19 + 0x5d0);
      lVar2 = *plVar6;
      *plVar6 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E
                  ((undefined8 *)(unaff_x19 + 0x5d0));
      }
    }
    *(undefined1 *)(unaff_x19 + 0x5e1) = 0;
    if ((*(long *)(unaff_x19 + 0x420) != 2) && ((*(byte *)(unaff_x19 + 0x5e2) & 1) != 0)) {
      FUN_100e1d37c(unaff_x19 + 0x420);
    }
    *(undefined1 *)(unaff_x19 + 0x5e2) = 0;
    if ((*(byte *)(unaff_x19 + 0x5e3) & 1) != 0) {
      FUN_100e5286c(unaff_x19 + 0x228);
    }
    uVar4 = 0;
    *(undefined1 *)(unaff_x19 + 0x5e3) = 0;
    uVar5 = 1;
  }
  else {
    uVar5 = 6;
    uVar4 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x5e0) = uVar5;
  return uVar4;
}

