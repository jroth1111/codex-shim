
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b9d58(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *unaff_x19;
  byte *unaff_x20;
  long *plVar17;
  long unaff_x22;
  long unaff_x23;
  ulong uVar18;
  long lVar19;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000068;
  undefined1 *puStack0000000000000070;
  long lStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  char *pcStack00000000000000d8;
  long lStack00000000000000e0;
  
  puStack0000000000000070 = &stack0x00000078;
  pcStack0000000000000068 = s_checkout_dropped_for_108aba3c5;
  puStack0000000000000058 = (undefined1 *)&stack0x00000068;
  puStack0000000000000060 = &UNK_10b1f3630;
  puStack0000000000000040 = (undefined1 *)&stack0x00000058;
  uStack0000000000000038 = 1;
  uStack0000000000000048 = 1;
  uStack00000000000000c0 = in_stack_00000028;
  uStack00000000000000b8 = in_stack_00000020;
  uStack00000000000000c8 = in_stack_00000030;
  lStack00000000000000a8 = *(long *)(unaff_x23 + 0x60);
  uStack00000000000000b0 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000090 = *(long *)(unaff_x23 + 0x50);
  uStack0000000000000098 = *(undefined8 *)(unaff_x23 + 0x58);
  lStack0000000000000088 = 1;
  if (lStack0000000000000090 == 0) {
    lStack0000000000000088 = 2;
  }
  uStack00000000000000d0 = *(undefined4 *)(unaff_x23 + 8);
  uStack00000000000000d4 = *(undefined4 *)(unaff_x23 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x78) = &stack0x00000038;
  *(undefined1 *)(unaff_x29 + -0x70) = 1;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x60) = &DAT_1061c2098;
  uStack00000000000000a0 = 1;
  if (lStack00000000000000a8 == 0) {
    uStack00000000000000a0 = 2;
  }
  lStack00000000000000e0 = unaff_x29 + -0x68;
  pcStack00000000000000d8 = s__108b39f4f;
  uStack0000000000000050 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  lVar19 = *(long *)(unaff_x20 + 0x30);
  if (lVar19 == 0) goto LAB_1002ba134;
  if (*(long *)(lVar19 + 0x10) == 0) {
    thunk_FUN_1087d4f48(lVar19 + 0x10);
  }
  iVar3 = _pthread_mutex_lock();
  if (iVar3 != 0) {
    thunk_FUN_108a81ad4();
    goto LAB_1002ba2fc;
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    if (*(char *)(lVar19 + 0x18) == '\0') {
      uVar4 = 0;
      goto LAB_1002b9f60;
    }
LAB_1002b9f48:
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) goto LAB_1002ba12c;
    uVar5 = FUN_107c05e34();
    goto LAB_1002ba2d8;
  }
  uVar4 = FUN_107c05e34();
  if (*(char *)(lVar19 + 0x18) == '\0') {
    uVar4 = uVar4 ^ 1;
LAB_1002b9f60:
    puVar6 = (ulong *)FUN_1002e4194(lVar19 + 0x90);
    if (puVar6 != (ulong *)0x0) {
      uVar12 = puVar6[3];
      uVar5 = 0;
      if (uVar12 == 0) {
        uVar14 = 0;
        goto LAB_1002ba0e0;
      }
      puVar9 = &UNK_10b1f5db0;
      do {
        if (puVar6[3] <= uVar5) goto LAB_1002ba28c;
        uVar13 = 0;
        if (*puVar6 <= uVar5 + puVar6[2]) {
          uVar13 = *puVar6;
        }
        uVar14 = uVar5 + 1;
        if (*(char *)(*(long *)(puVar6[1] + (uVar5 + (puVar6[2] - uVar13)) * 8) + 0x80) != '\0') {
          if (uVar12 <= uVar14) goto LAB_1002ba0e0;
          puVar9 = &UNK_10b1f5dc8;
          goto LAB_1002ba038;
        }
        uVar5 = uVar14;
      } while (uVar12 != uVar14);
      goto LAB_1002ba0e8;
    }
    goto LAB_1002ba11c;
  }
  if (uVar4 != 0) goto LAB_1002b9f48;
  goto LAB_1002ba12c;
LAB_1002ba28c:
  FUN_107c05cac(&UNK_108c762cd,0x14,puVar9);
LAB_1002ba2fc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ba300);
  (*pcVar2)();
  while( true ) {
    uVar13 = 0;
    if (*puVar6 <= uVar14 + puVar6[2]) {
      uVar13 = *puVar6;
    }
    if (*(char *)(*(long *)(puVar6[1] + (uVar14 + (puVar6[2] - uVar13)) * 8) + 0x80) == '\0') {
      puVar8 = &UNK_108c762e1;
      puVar11 = &UNK_10b1f5de0;
      if ((puVar6[3] <= uVar5) ||
         (puVar8 = &UNK_108c76301, puVar11 = &UNK_10b1f5df8, puVar6[3] <= uVar14)) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar8,0x20,puVar11);
        goto LAB_1002ba2fc;
      }
      uVar18 = puVar6[1];
      uVar1 = puVar6[2];
      uVar15 = *puVar6;
      uVar13 = 0;
      if (uVar15 <= uVar1 + uVar5) {
        uVar13 = uVar15;
      }
      lVar10 = (uVar1 + uVar5) - uVar13;
      uVar13 = 0;
      if (uVar15 <= uVar1 + uVar14) {
        uVar13 = uVar15;
      }
      lVar7 = (uVar1 - uVar13) + uVar14;
      uVar16 = *(undefined8 *)(uVar18 + lVar10 * 8);
      *(undefined8 *)(uVar18 + lVar10 * 8) = *(undefined8 *)(uVar18 + lVar7 * 8);
      *(undefined8 *)(uVar18 + lVar7 * 8) = uVar16;
      uVar5 = uVar5 + 1;
    }
    uVar14 = uVar14 + 1;
    if (uVar12 <= uVar14) break;
LAB_1002ba038:
    if (puVar6[3] <= uVar14) goto LAB_1002ba28c;
  }
LAB_1002ba0e0:
  if (uVar14 == uVar5) {
LAB_1002ba0e8:
    uVar12 = puVar6[3];
  }
  else {
    uVar12 = puVar6[3];
    if (uVar5 < uVar12) {
      uVar18 = puVar6[1];
      uVar13 = *puVar6;
      uVar14 = 0;
      if (uVar13 <= puVar6[2]) {
        uVar14 = uVar13;
      }
      lVar10 = puVar6[2] - uVar14;
      if (uVar12 <= uVar13 - lVar10) {
        uVar13 = lVar10 + uVar12;
      }
      puVar6[3] = uVar5;
      uVar13 = uVar13 - lVar10;
      if (uVar5 < uVar13 || uVar5 - uVar13 == 0) {
        lVar7 = (uVar13 - uVar5) + 1;
        lVar10 = uVar18 + lVar10 * 8 + uVar5 * 8;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_1002b67d8(lVar10);
          lVar10 = lVar10 + 8;
        }
        lVar10 = (uVar12 - uVar13) + 1;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_1002b67d8(uVar18);
          uVar18 = uVar18 + 8;
        }
      }
      else {
        lVar10 = (uVar12 - uVar5) + 1;
        lVar7 = uVar18 + (uVar5 - uVar13) * 8;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_1002b67d8(lVar7);
          lVar7 = lVar7 + 8;
        }
      }
      goto LAB_1002ba0e8;
    }
  }
  if ((uVar12 == 0) &&
     (FUN_1002e3e88(&stack0x00000088,lVar19 + 0x90), lStack0000000000000088 != -0x8000000000000000))
  {
    FUN_1002b831c(&stack0x00000088);
  }
LAB_1002ba11c:
  if (((uVar4 & 1) == 0) &&
     ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) != 0)) {
    uVar5 = FUN_107c05e34();
LAB_1002ba2d8:
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(lVar19 + 0x18) = 1;
    }
  }
LAB_1002ba12c:
  _pthread_mutex_unlock(*(undefined8 *)(lVar19 + 0x10));
LAB_1002ba134:
  if (1 < *unaff_x20) {
    plVar17 = *(long **)(unaff_x20 + 8);
    (**(code **)(*plVar17 + 0x20))(plVar17 + 3,plVar17[1],plVar17[2]);
    _free(plVar17);
  }
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x20))
            (unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  plVar17 = *(long **)(unaff_x20 + 0x30);
  if (plVar17 != (long *)0x0) {
    lVar19 = *plVar17;
    *plVar17 = lVar19 + -1;
    LORelease();
    if (lVar19 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca0bc(unaff_x20 + 0x30);
    }
  }
  if (*unaff_x19 != 0) {
    FUN_1002b69d8();
  }
  return;
}

