
void FUN_1003259b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x29;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  long lStack00000000000000c8;
  undefined *puStack00000000000000d0;
  
  *(char **)(unaff_x29 + -0x60) = s_stream_completed__108abaf65;
  *(undefined1 **)(unaff_x29 + -0x58) = &stack0x000000d8;
  lStack00000000000000c8 = unaff_x29 + -0x60;
  puStack00000000000000d0 = &UNK_10b1f8a98;
  puStack00000000000000a8 = (undefined1 *)&stack0x000000c8;
  uStack00000000000000a0 = 1;
  uStack00000000000000b0 = 1;
  uStack00000000000000b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (*(ulong *)(unaff_x29 + -0xc0) == 2) {
    *unaff_x19 = 2;
  }
  else if ((*(ulong *)(unaff_x29 + -0xc0) & 1) == 0) {
    *unaff_x19 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x29 + -0xb0);
    lVar3 = *(long *)(unaff_x29 + -0xb8);
    uVar1 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar2 = *(undefined8 *)(unaff_x29 + -0xa0);
    if (lVar3 == 0) {
      *unaff_x19 = 1;
      unaff_x19[1] = 0;
      unaff_x19[2] = uVar4;
      unaff_x19[3] = uVar1;
    }
    else {
      *unaff_x19 = 1;
      unaff_x19[2] = uVar4;
      unaff_x19[1] = lVar3;
      unaff_x19[3] = uVar1;
      unaff_x19[4] = uVar2;
    }
  }
  return;
}

