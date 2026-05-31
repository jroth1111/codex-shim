
undefined8 FUN_1006f3b58(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *puVar6;
  undefined8 unaff_x25;
  long unaff_x29;
  undefined1 auVar7 [16];
  undefined8 *puStack0000000000000090;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  
  *(char **)(unaff_x29 + -0x90) = s_4write_socks5_server_reply_w__Ip_108ac446c;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  lStack0000000000000098 = unaff_x29 + -0xa0;
  puStack0000000000000090 = (undefined8 *)0x1;
  uStack00000000000000a0 = 1;
  uStack00000000000000a8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar6 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar6 = 0;
  *(undefined2 *)(unaff_x19 + 0x28) = 0;
  lStack0000000000000098 = 10;
  puStack0000000000000090 = puVar6;
  FUN_1006f32a4();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x25;
  *(undefined8 **)(unaff_x19 + 0x38) = puVar6;
  lVar5 = 10;
  *(undefined8 *)(unaff_x19 + 0x40) = 10;
  do {
    if (lVar5 == 0) break;
    auVar7 = func_0x0001060f8f1c(*(undefined8 *)(unaff_x19 + 0x30));
    uVar4 = auVar7._8_8_;
    if (auVar7._0_8_ == 2) {
      *(undefined1 *)(unaff_x19 + 0x18) = 3;
      return 1;
    }
    if ((auVar7._0_8_ & 1) != 0) break;
    lVar1 = *(long *)(unaff_x19 + 0x38);
    uVar2 = *(ulong *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x38) = 1;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    lVar5 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006f4320);
      (*pcVar3)();
    }
    *(ulong *)(unaff_x19 + 0x38) = lVar1 + uVar4;
    *(long *)(unaff_x19 + 0x40) = lVar5;
  } while (uVar4 != 0);
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return 0;
}

