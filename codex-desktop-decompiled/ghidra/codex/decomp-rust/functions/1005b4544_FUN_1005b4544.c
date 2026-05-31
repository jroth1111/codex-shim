
undefined8 FUN_1005b4544(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x29;
  char *pcStack0000000000000088;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  pcStack0000000000000088 = s_2No_pending_request_permissions_f_108ac1bb0;
  *(char ***)(unaff_x29 + -0x50) = &stack0x00000088;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
  lStack00000000000000a8 = unaff_x29 + -0x50;
  uStack00000000000000a0 = 1;
  uStack00000000000000b0 = 1;
  uStack00000000000000b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  plVar2 = *(long **)(unaff_x19 + 0xe8);
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6b4c();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x9c) = 0;
  if ((*(byte *)(unaff_x19 + 0x99) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x60) != -0x8000000000000000) {
      FUN_100e79780();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x99) = 0;
  *(undefined1 *)(unaff_x19 + 0x98) = 1;
  return 0;
}

