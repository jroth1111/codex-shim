
undefined8 FUN_1009b3768(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x24;
  ulong in_xzr;
  long in_stack_00000450;
  
  *(undefined8 *)(unaff_x24 + 0x438) = *(undefined8 *)(unaff_x24 + 0x648);
  *(undefined8 *)(unaff_x24 + 0x430) = *(undefined8 *)(unaff_x24 + 0x640);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar4 = __ZN16codex_app_server9transport21disconnect_connection17he85dd96553f59dd1E
                    (*(undefined8 *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x220));
  if (in_stack_00000450 != 2) {
    FUN_100e618cc(&stack0x00000458);
  }
  *(undefined1 *)(unaff_x19 + 0x8ca) = 0;
  lVar6 = *(long *)(unaff_x19 + 0x420);
  LOAcquire();
  lVar2 = *(long *)(lVar6 + 0x1f0);
  *(long *)(lVar6 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar6 + 0x88);
    *(long *)(lVar6 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcaed8(lVar6 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x4110) = *(ulong *)(lVar2 + 0x4110) | 0x200000000;
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
  plVar5 = *(long **)(unaff_x19 + 0x420);
  lVar2 = *plVar5;
  *plVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E
              ((undefined8 *)(unaff_x19 + 0x420));
  }
  *(undefined2 *)(unaff_x19 + 0x8cb) = 0;
  *(undefined1 *)(unaff_x19 + 0x8c9) = 0;
  *(undefined1 *)(unaff_x19 + 0x8c8) = 1;
  return uVar4;
}

