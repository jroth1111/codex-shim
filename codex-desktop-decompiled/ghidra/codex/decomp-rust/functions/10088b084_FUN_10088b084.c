
undefined8 FUN_10088b084(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *plVar4;
  long lVar5;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  *(char **)(unaff_x29 + -0x80) = s__failed_to_remove_pending_client_108ac9c49;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000020;
  *(long *)(unaff_x29 + -0x58) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x50) = &UNK_10b208fd0;
  lStack0000000000000090 = unaff_x29 + -0x58;
  uStack0000000000000088 = 1;
  uStack0000000000000098 = 1;
  uStack00000000000000a0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  plVar4 = (long *)(unaff_x19 + 0x28);
  lVar5 = *plVar4;
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x1c8);
  *(long *)(lVar5 + 0x1c8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcad74(lVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0xd10) = *(ulong *)(lVar2 + 0xd10) | 0x200000000;
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
  lVar2 = *(long *)*plVar4;
  *(long *)*plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2e5a794b0d3d0ffaE(plVar4);
  }
  *(undefined1 *)(unaff_x19 + 0x33) = 0;
  *(undefined2 *)(unaff_x19 + 0x31) = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  return 0;
}

