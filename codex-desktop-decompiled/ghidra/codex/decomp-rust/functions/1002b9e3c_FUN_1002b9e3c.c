
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b9e3c(undefined8 param_1,undefined8 param_2)

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
  long *unaff_x21;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long lStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  *(char **)(unaff_x29 + -0x68) = s_checkout_dropped_for_108aba3c5;
  *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000020;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x68;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b1f3630;
  lStack0000000000000090 = unaff_x29 + -0x78;
  lStack0000000000000088 = 1;
  uStack0000000000000098 = 1;
  uStack00000000000000a0 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000088);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar17 = *unaff_x21;
    in_stack_00000040 = *(undefined8 *)(lVar17 + 0x20);
    in_stack_00000048 = *(undefined8 *)(lVar17 + 0x28);
    in_stack_00000038 = 5;
    puVar9 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar9 = &UNK_10b3c24c8;
    }
    puVar8 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar8 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar9 + 0x18))(puVar8,&stack0x00000038);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar17,puVar8,puVar9,&stack0x00000038,&stack0x00000088);
    }
  }
  lVar17 = *(long *)(unaff_x20 + 0x30);
  if (lVar17 == 0) goto LAB_1002ba134;
  if (*(long *)(lVar17 + 0x10) == 0) {
    thunk_FUN_1087d4f48(lVar17 + 0x10);
  }
  iVar3 = _pthread_mutex_lock();
  if (iVar3 != 0) {
    thunk_FUN_108a81ad4();
    goto LAB_1002ba2fc;
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) == 0) {
    if (*(char *)(lVar17 + 0x18) == '\0') {
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
  if (*(char *)(lVar17 + 0x18) == '\0') {
    uVar4 = uVar4 ^ 1;
LAB_1002b9f60:
    puVar6 = (ulong *)FUN_1002e4194(lVar17 + 0x90);
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
      uVar19 = puVar6[1];
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
      uVar16 = *(undefined8 *)(uVar19 + lVar10 * 8);
      *(undefined8 *)(uVar19 + lVar10 * 8) = *(undefined8 *)(uVar19 + lVar7 * 8);
      *(undefined8 *)(uVar19 + lVar7 * 8) = uVar16;
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
      uVar19 = puVar6[1];
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
        lVar10 = uVar19 + lVar10 * 8 + uVar5 * 8;
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
          FUN_1002b67d8(lVar10);
          lVar10 = lVar10 + 8;
        }
        lVar10 = (uVar12 - uVar13) + 1;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_1002b67d8(uVar19);
          uVar19 = uVar19 + 8;
        }
      }
      else {
        lVar10 = (uVar12 - uVar5) + 1;
        lVar7 = uVar19 + (uVar5 - uVar13) * 8;
        while (lVar10 = lVar10 + -1, lVar10 != 0) {
          FUN_1002b67d8(lVar7);
          lVar7 = lVar7 + 8;
        }
      }
      goto LAB_1002ba0e8;
    }
  }
  if ((uVar12 == 0) &&
     (FUN_1002e3e88(&stack0x00000088,lVar17 + 0x90), lStack0000000000000088 != -0x8000000000000000))
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
      *(undefined1 *)(lVar17 + 0x18) = 1;
    }
  }
LAB_1002ba12c:
  _pthread_mutex_unlock(*(undefined8 *)(lVar17 + 0x10));
LAB_1002ba134:
  if (1 < *unaff_x20) {
    plVar18 = *(long **)(unaff_x20 + 8);
    (**(code **)(*plVar18 + 0x20))(plVar18 + 3,plVar18[1],plVar18[2]);
    _free(plVar18);
  }
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x20))
            (unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  plVar18 = *(long **)(unaff_x20 + 0x30);
  if (plVar18 != (long *)0x0) {
    lVar17 = *plVar18;
    *plVar18 = lVar17 + -1;
    LORelease();
    if (lVar17 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca0bc(unaff_x20 + 0x30);
    }
  }
  if (*unaff_x19 != 0) {
    FUN_1002b69d8();
  }
  return;
}

