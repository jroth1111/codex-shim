
undefined8 FUN_10068fab0(void)

{
  byte bVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
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
  char *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  char *pcStack00000000000001e0;
  undefined1 *puStack00000000000001e8;
  
  puStack00000000000001e8 = &stack0x00000300;
  pcStack00000000000001e0 = s_client_response_error__108abf895;
  FUN_1004d6248(&stack0x000003c0);
  pcVar2 = in_stack_000000e8;
  bVar1 = bStack00000000000000e0;
  if (bStack00000000000000e0 - 4 < 2) {
    pcStack00000000000001e0 = in_stack_000000e8;
    pcVar5 = (char *)_malloc(0x18);
    if (pcVar5 == (char *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      pcVar5[0x10] = '\x06';
      pbVar6 = (byte *)_malloc(8);
      if (pbVar6 != (byte *)0x0) {
        *(char **)pbVar6 = pcVar2;
        puVar7 = &UNK_10b212e38;
LAB_100690078:
        *(byte **)pcVar5 = pbVar6;
        *(undefined **)(pcVar5 + 8) = puVar7;
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
    pcVar5 = (char *)_malloc(0x18);
    if (pcVar5 == (char *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      pcVar5[0x10] = '\v';
      *(undefined4 *)((long)unaff_x24 + 0xc1) = *puVar8;
      unaff_x24[0x1b] = in_stack_000000f8;
      unaff_x24[0x1a] = in_stack_000000f0;
      pcStack00000000000001e0 = pcVar5;
      pbVar6 = (byte *)_malloc(0x28);
      if (pbVar6 != (byte *)0x0) {
        *pbVar6 = bVar1;
        *(undefined4 *)(pbVar6 + 1) = *puVar8;
        *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)((long)puVar8 + 3);
        *(char **)(pbVar6 + 8) = pcVar2;
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

