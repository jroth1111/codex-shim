
bool FUN_10169064c(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  ulong in_xzr;
  ulong in_stack_000001f8;
  ulong in_stack_00000200;
  long in_stack_00000208;
  
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x000003f0;
  *(undefined **)(unaff_x29 + -0xe0) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = 0;
  if (0x800000000000003f < in_stack_000001f8) {
    lVar2 = in_stack_000001f8 + 0x7fffffffffffffc0;
  }
  if (lVar2 == 0) {
    FUN_100e5286c(&stack0x000001f8);
  }
  else if (lVar2 == 1) {
    func_0x000100e45ab8(unaff_x25 + 8);
  }
  else {
    if (lVar2 == 2) {
      if ((in_stack_00000200 & 0x7fffffffffffffff) == 0) goto LAB_101690314;
      puVar4 = (undefined8 *)&stack0x00000208;
    }
    else {
      if (in_stack_00000208 == 0) goto LAB_101690314;
      puVar4 = (undefined8 *)&stack0x00000210;
    }
    _free(*puVar4);
  }
LAB_101690314:
  lVar5 = *(long *)(unaff_x19 + 0x1f8);
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar2 + 1;
    lVar2 = FUN_100fca4a4(lVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x3f10) = *(ulong *)(lVar2 + 0x3f10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar2 = **(long **)(unaff_x19 + 0x1f8);
  **(long **)(unaff_x19 + 0x1f8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E(unaff_x19 + 0x1f8);
  }
  *(undefined1 *)(unaff_x19 + 0x690) = 1;
  return unaff_x23 == unaff_x24;
}

