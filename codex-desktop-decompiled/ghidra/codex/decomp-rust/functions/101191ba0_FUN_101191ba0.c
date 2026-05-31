
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101191ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  long *plStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  char cStack0000000000000030;
  undefined4 uStack0000000000000031;
  undefined3 uStack0000000000000035;
  
  *(char **)(unaff_x29 + -0xb8) = s_error_shutting_down_IO__108ac8b54;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
  plStack0000000000000018 = (long *)&stack0x00000220;
  puStack0000000000000010 = (undefined8 *)0x1;
  uStack0000000000000020 = 1;
  uStack0000000000000028 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000010);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar13 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000230);
    if (iVar7 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar13,puVar2,puVar1,&stack0x00000230,&stack0x00000010);
    }
  }
  uVar13 = *(undefined8 *)(unaff_x29 + -0x78);
  puVar12 = (undefined8 *)FUN_100f410dc(0x18,8);
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 2) = 10;
  puStack0000000000000010 = puVar12;
  uVar13 = FUN_100f15038(uVar13);
  FUN_100d3911c(puVar12);
  *puVar12 = uVar13;
  puVar12[1] = &UNK_10b212e38;
  cVar3 = *(char *)(unaff_x19 + 0x1e0);
  *(undefined1 *)(unaff_x19 + 0x1e0) = 3;
  if (cVar3 != '\x03') {
    plStack0000000000000018 = *(long **)(unaff_x19 + 0x1c8);
    puStack0000000000000010 = *(undefined8 **)(unaff_x19 + 0x1c0);
    uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x1d8);
    uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x1d0);
    uStack0000000000000035 = (undefined3)((uint)*(undefined4 *)(unaff_x19 + 0x1e4) >> 8);
    uStack0000000000000031 = *(undefined4 *)(unaff_x19 + 0x1e1);
    cStack0000000000000030 = cVar3;
    puVar8 = (undefined8 *)_malloc(0x18);
    if (puVar8 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 2) = 8;
      puVar9 = (undefined8 *)_malloc(0x10);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x10);
      }
      else {
        puVar9[1] = 0x726f727265206e6f;
        *puVar9 = 0x697463656e6e6f63;
        puVar10 = (undefined8 *)_malloc(0x18);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0x10;
          puVar10[1] = puVar9;
          puVar10[2] = 0x10;
          *puVar8 = puVar10;
          puVar8[1] = &UNK_10b209118;
          __ZN14rama_http_core4body8incoming6Sender10send_error17h3f7db1c00cf8f35eE
                    (&stack0x00000010,puVar8);
          lVar6 = *plStack0000000000000018;
          *plStack0000000000000018 = lVar6 + -1;
          LORelease();
          if (lVar6 == 1) {
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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10119204c);
    (*pcVar5)();
  }
LAB_1011916b4:
  puStack0000000000000010 = (undefined8 *)0x3;
  plStack0000000000000018 = puVar12;
  uVar11 = FUN_10086bca8(unaff_x19 + 0x1e8,&stack0x00000010);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  return auVar4 << 0x40;
}

