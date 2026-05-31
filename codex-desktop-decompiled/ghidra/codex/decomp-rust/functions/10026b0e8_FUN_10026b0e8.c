
void FUN_10026b0e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar7;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000070;
  undefined *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  char *pcStack00000000000000c0;
  long lStack00000000000000c8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s_reuse_idle_connection_for_108ab8ca2;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b1f3630;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  lStack0000000000000090 = *(long *)(unaff_x24 + 0x60);
  uStack0000000000000098 = *(undefined8 *)(unaff_x24 + 0x68);
  puStack0000000000000078 = *(undefined **)(unaff_x24 + 0x50);
  uStack0000000000000080 = *(undefined8 *)(unaff_x24 + 0x58);
  puStack0000000000000070 = (undefined *)0x1;
  if (puStack0000000000000078 == (undefined *)0x0) {
    puStack0000000000000070 = (undefined *)0x2;
  }
  uStack00000000000000b8 = *(undefined4 *)(unaff_x24 + 8);
  uStack00000000000000bc = *(undefined4 *)(unaff_x24 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x60) = &stack0x00000020;
  *(undefined1 *)(unaff_x29 + -0x58) = 1;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
  *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
  uStack0000000000000088 = 1;
  if (lStack0000000000000090 == 0) {
    uStack0000000000000088 = 2;
  }
  uStack00000000000000a8 = in_stack_00000010;
  uStack00000000000000a0 = in_stack_00000008;
  uStack00000000000000b0 = in_stack_00000018;
  lStack00000000000000c8 = unaff_x29 + -0x50;
  pcStack00000000000000c0 = s__108b39f4f;
  uStack0000000000000038 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  lVar7 = *unaff_x21;
  if (*(char *)(unaff_x19 + 2) == '\x02' || lVar7 == 0) {
    lVar7 = 0;
LAB_10026b1dc:
    FUN_1002c5710(&stack0x00000070,in_stack_00000000);
    *(undefined1 *)(unaff_x20 + 0xe) = 1;
    uVar9 = unaff_x19[1];
    uVar8 = *unaff_x19;
    uVar6 = unaff_x19[2];
    uVar11 = unaff_x19[5];
    uVar10 = unaff_x19[4];
    unaff_x20[9] = unaff_x19[3];
    unaff_x20[8] = uVar6;
    unaff_x20[0xb] = uVar11;
    unaff_x20[10] = uVar10;
    uVar6 = unaff_x19[6];
    unaff_x20[1] = puStack0000000000000078;
    *unaff_x20 = puStack0000000000000070;
    unaff_x20[3] = uStack0000000000000088;
    unaff_x20[2] = uStack0000000000000080;
    unaff_x20[5] = uStack0000000000000098;
    unaff_x20[4] = lStack0000000000000090;
    unaff_x20[7] = uVar9;
    unaff_x20[6] = uVar8;
    unaff_x20[0xc] = uVar6;
    unaff_x20[0xd] = lVar7;
    return;
  }
  do {
    lVar5 = *(long *)(lVar7 + 8);
    while (lVar5 != -1) {
      if (lVar5 < 0) {
        puStack0000000000000070 = &UNK_10b1f5e10;
        puStack0000000000000078 = &DAT_1002b2088;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__108b1bd74,&stack0x00000070,&UNK_10b1f5e20);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10026b264);
        (*pcVar4)();
      }
      lVar1 = lVar5 + 1;
      lVar2 = *(long *)(lVar7 + 8);
      bVar3 = lVar2 == lVar5;
      lVar5 = lVar2;
      if (bVar3) {
        *(long *)(lVar7 + 8) = lVar1;
        goto LAB_10026b1dc;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}

