
undefined1  [16] FUN_101191efc(undefined8 param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  long *plStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  char cStack0000000000000030;
  undefined4 uStack0000000000000031;
  undefined3 uStack0000000000000035;
  
  *(char **)(unaff_x29 + -0xa0) = s_error_shutting_down_IO__108ac8b54;
  *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00000230;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b208fd0;
  plStack0000000000000018 = (long *)(unaff_x29 + -0xb8);
  puStack0000000000000010 = (undefined8 *)0x1;
  uStack0000000000000020 = 1;
  uStack0000000000000028 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar10 = *(undefined8 *)(unaff_x29 + -0x78);
  puVar9 = (undefined8 *)FUN_100f410dc(0x18,8);
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 2) = 10;
  puStack0000000000000010 = puVar9;
  uVar10 = FUN_100f15038(uVar10);
  FUN_100d3911c(puVar9);
  *puVar9 = uVar10;
  puVar9[1] = &UNK_10b212e38;
  cVar1 = *(char *)(unaff_x19 + 0x1e0);
  *(undefined1 *)(unaff_x19 + 0x1e0) = 3;
  if (cVar1 == '\x03') {
LAB_1011916b4:
    puStack0000000000000010 = (undefined8 *)0x3;
    plStack0000000000000018 = puVar9;
    uVar8 = FUN_10086bca8(unaff_x19 + 0x1e8,&stack0x00000010);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    return auVar2 << 0x40;
  }
  plStack0000000000000018 = *(long **)(unaff_x19 + 0x1c8);
  puStack0000000000000010 = *(undefined8 **)(unaff_x19 + 0x1c0);
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x1d8);
  uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x1d0);
  uStack0000000000000035 = (undefined3)((uint)*(undefined4 *)(unaff_x19 + 0x1e4) >> 8);
  uStack0000000000000031 = *(undefined4 *)(unaff_x19 + 0x1e1);
  cStack0000000000000030 = cVar1;
  puVar5 = (undefined8 *)_malloc(0x18);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 2) = 8;
    puVar6 = (undefined8 *)_malloc(0x10);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x10);
    }
    else {
      puVar6[1] = 0x726f727265206e6f;
      *puVar6 = 0x697463656e6e6f63;
      puVar7 = (undefined8 *)_malloc(0x18);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x10;
        puVar7[1] = puVar6;
        puVar7[2] = 0x10;
        *puVar5 = puVar7;
        puVar5[1] = &UNK_10b209118;
        __ZN14rama_http_core4body8incoming6Sender10send_error17h3f7db1c00cf8f35eE
                  (&stack0x00000010,puVar5);
        lVar4 = *plStack0000000000000018;
        *plStack0000000000000018 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9f476c5001a43c0cE
                    ((ulong)&stack0x00000010 | 8);
        }
        FUN_100d1c36c(&stack0x00000020);
        FUN_100cdc388(&stack0x00000010);
        goto LAB_1011916b4;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10119204c);
  (*pcVar3)();
}

