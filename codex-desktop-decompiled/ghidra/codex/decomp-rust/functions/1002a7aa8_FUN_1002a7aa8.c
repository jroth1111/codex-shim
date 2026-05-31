
void FUN_1002a7aa8(undefined8 param_1)

{
  char cVar1;
  char *unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x29;
  undefined8 uStack0000000000000018;
  undefined1 *puStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  char *pcStack0000000000000048;
  long lStack0000000000000050;
  
  lStack0000000000000050 = unaff_x29 + -0x50;
  puStack0000000000000038 = (undefined1 *)&stack0x00000048;
  puStack0000000000000040 = &UNK_10b1f3630;
  pcStack0000000000000048 = s__reset_on_recv_stream_err__local_108ac84e8;
  puStack0000000000000020 = (undefined1 *)&stack0x00000038;
  uStack0000000000000018 = 1;
  uStack0000000000000028 = 1;
  uStack0000000000000030 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *unaff_x20 = 0x101;
  *(undefined4 *)(unaff_x20 + 2) = 0xb;
  *(undefined **)(unaff_x20 + 4) = &UNK_10b1f34d8;
  *(undefined **)(unaff_x20 + 8) = &UNK_108c75460;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0xc) = 0x18;
  cVar1 = *unaff_x19;
  if ((cVar1 != '\x03') && (cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      (**(code **)(*(long *)(unaff_x19 + 8) + 0x20))
                (unaff_x19 + 0x20,*(undefined8 *)(unaff_x19 + 0x10),
                 *(undefined8 *)(unaff_x19 + 0x18));
    }
    else if ((*(ulong *)(unaff_x19 + 8) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x10));
    }
  }
  return;
}

