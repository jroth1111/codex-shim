
undefined1  [16] FUN_10168f95c(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  int unaff_w24;
  int unaff_w25;
  ulong in_xzr;
  undefined1 auVar7 [16];
  byte in_stack_00000150;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000150 & 1) != 0) {
    FUN_100cdd078(&stack0x00000150);
  }
  if (unaff_w24 != 6) {
    unaff_w25 = unaff_w24;
  }
  if (unaff_w25 != 6) {
    __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_22set_side_parent_status17he95a9c2129256965E
              (*(undefined8 *)(unaff_x19 + 0x1b8),&stack0x00001880);
  }
  *(undefined8 *)(unaff_x19 + 0x570) = *(undefined8 *)(unaff_x19 + 0x1b8);
  *(undefined1 *)(unaff_x19 + 0x58b) = 0;
  uVar3 = FUN_101696164(unaff_x19 + 0x488);
  if ((uVar3 & 1) == 0) {
    FUN_100d51964(unaff_x19 + 0x488);
    lVar2 = **(long **)(unaff_x19 + 0x478);
    **(long **)(unaff_x19 + 0x478) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE(unaff_x19 + 0x478);
    }
    if ((*(byte *)(unaff_x19 + 0x481) & 1) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x470);
      LOAcquire();
      lVar2 = *(long *)(lVar6 + 0x1f0);
      *(long *)(lVar6 + 0x1f0) = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        LOAcquire();
        lVar2 = *(long *)(lVar6 + 0x88);
        *(long *)(lVar6 + 0x88) = lVar2 + 1;
        lVar2 = FUN_100fca4a4(lVar6 + 0x80,lVar2);
        *(ulong *)(lVar2 + 0x3f10) = *(ulong *)(lVar2 + 0x3f10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar6 + 0x110);
        LOAcquire();
        uVar3 = *puVar1;
        *puVar1 = uVar3 | 2;
        LORelease();
        if (uVar3 == 0) {
          lVar2 = *(long *)(lVar6 + 0x100);
          *(undefined8 *)(lVar6 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar2 != 0) {
            (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar6 + 0x108));
          }
        }
      }
      plVar5 = *(long **)(unaff_x19 + 0x470);
      lVar2 = *plVar5;
      *plVar5 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E
                  ((undefined8 *)(unaff_x19 + 0x470));
      }
    }
    *(undefined1 *)(unaff_x19 + 0x481) = 0;
    if ((*(long *)(unaff_x19 + 0x370) != -0x7ffffffffffffffa) &&
       ((*(byte *)(unaff_x19 + 0x482) & 1) != 0)) {
      FUN_100e1066c(unaff_x19 + 0x370);
    }
    *(undefined1 *)(unaff_x19 + 0x482) = 0;
    if ((*(byte *)(unaff_x19 + 0x483) & 1) != 0) {
      func_0x000100e45ab8(unaff_x19 + 0x1d0);
    }
    uVar3 = 0;
    *(undefined1 *)(unaff_x19 + 0x483) = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 5;
    uVar3 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x480) = uVar4;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

