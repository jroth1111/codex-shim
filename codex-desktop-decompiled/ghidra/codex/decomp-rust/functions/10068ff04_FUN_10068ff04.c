
undefined8 FUN_10068ff04(void)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  byte bStack00000000000000e0;
  undefined7 uStack00000000000000e1;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined1 *puStack0000000000000170;
  undefined *puStack0000000000000178;
  undefined8 *in_stack_000001e0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  
  puStack0000000000000170 = &stack0x000002e0;
  puStack0000000000000178 = &UNK_10b208fd0;
  unaff_x24[1] = in_stack_000003b0;
  *unaff_x24 = in_stack_000003a8;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar2 = in_stack_000000e8;
  bVar1 = bStack00000000000000e0;
  if (bStack00000000000000e0 - 4 < 2) {
    in_stack_000001e0 = in_stack_000000e8;
    puVar5 = (undefined8 *)_malloc(0x18);
    if (puVar5 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 2) = 6;
      pbVar6 = (byte *)_malloc(8);
      if (pbVar6 != (byte *)0x0) {
        *(undefined8 **)pbVar6 = puVar2;
        puVar7 = &UNK_10b212e38;
LAB_100690078:
        *puVar5 = pbVar6;
        puVar5[1] = puVar7;
        if (in_stack_000000c0 != 0) {
          FUN_100d33fbc(&stack0x000000c0);
        }
        if (in_stack_000000b8 != (long *)0x0) {
          lVar4 = *in_stack_000000b8;
          *in_stack_000000b8 = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9cdd98fed5209d92E(&stack0x000000b8);
          }
        }
        uVar11 = unaff_x24[0xd];
        uVar10 = unaff_x24[0xc];
        uVar9 = unaff_x24[0xe];
        *(undefined8 *)(unaff_x25 + 0x80) = unaff_x24[0xf];
        *(undefined8 *)(unaff_x25 + 0x78) = uVar9;
        uVar9 = unaff_x24[0x10];
        uVar13 = unaff_x24[0x13];
        uVar12 = unaff_x24[0x12];
        *(undefined8 *)(unaff_x25 + 0x90) = unaff_x24[0x11];
        *(undefined8 *)(unaff_x25 + 0x88) = uVar9;
        *(undefined8 *)(unaff_x25 + 0xa0) = uVar13;
        *(undefined8 *)(unaff_x25 + 0x98) = uVar12;
        uVar13 = unaff_x24[5];
        uVar12 = unaff_x24[4];
        uVar9 = unaff_x24[6];
        *(undefined8 *)(unaff_x25 + 0x40) = unaff_x24[7];
        *(undefined8 *)(unaff_x25 + 0x38) = uVar9;
        uVar9 = unaff_x24[8];
        uVar15 = unaff_x24[0xb];
        uVar14 = unaff_x24[10];
        *(undefined8 *)(unaff_x25 + 0x50) = unaff_x24[9];
        *(undefined8 *)(unaff_x25 + 0x48) = uVar9;
        *(undefined8 *)(unaff_x25 + 0x60) = uVar15;
        *(undefined8 *)(unaff_x25 + 0x58) = uVar14;
        *(undefined8 *)(unaff_x25 + 0x70) = uVar11;
        *(undefined8 *)(unaff_x25 + 0x68) = uVar10;
        uVar9 = *unaff_x24;
        uVar11 = unaff_x24[3];
        uVar10 = unaff_x24[2];
        *(undefined8 *)(unaff_x25 + 0x10) = unaff_x24[1];
        *(undefined8 *)(unaff_x25 + 8) = uVar9;
        *(undefined8 *)(unaff_x25 + 0x20) = uVar11;
        *(undefined8 *)(unaff_x25 + 0x18) = uVar10;
        *(undefined8 *)(unaff_x25 + 0x30) = uVar13;
        *(undefined8 *)(unaff_x25 + 0x28) = uVar12;
        *(undefined8 *)(unaff_x26 + 200) = in_stack_00000010;
        *(undefined8 *)(unaff_x26 + 0xc0) = in_stack_00000008;
        in_stack_000000f0 = CONCAT71((int7)((ulong)in_stack_00000018 >> 8),1);
        FUN_10084e7d8(CONCAT71(uStack00000000000000e1,bStack00000000000000e0),in_stack_000000e8,
                      &stack0x000003c0);
        return 0;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
    }
  }
  else {
    puVar8 = (undefined4 *)((ulong)&stack0x000000e0 | 1);
    *(undefined4 *)((long)unaff_x24 + 1) = *puVar8;
    unaff_x24[3] = in_stack_000000f8;
    unaff_x24[2] = in_stack_000000f0;
    puVar5 = (undefined8 *)_malloc(0x18);
    if (puVar5 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 2) = 0xb;
      *(undefined4 *)((long)unaff_x24 + 0xc1) = *puVar8;
      unaff_x24[0x1b] = in_stack_000000f8;
      unaff_x24[0x1a] = in_stack_000000f0;
      in_stack_000001e0 = puVar5;
      pbVar6 = (byte *)_malloc(0x28);
      if (pbVar6 != (byte *)0x0) {
        *pbVar6 = bVar1;
        *(undefined4 *)(pbVar6 + 1) = *puVar8;
        *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)((long)puVar8 + 3);
        *(undefined8 **)(pbVar6 + 8) = puVar2;
        *(undefined8 *)(pbVar6 + 0x18) = in_stack_000000f8;
        *(undefined8 *)(pbVar6 + 0x10) = in_stack_000000f0;
        *(undefined8 *)(pbVar6 + 0x20) = in_stack_00000100;
        puVar7 = &UNK_10b238a78;
        goto LAB_100690078;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100690774);
  (*pcVar3)();
}

