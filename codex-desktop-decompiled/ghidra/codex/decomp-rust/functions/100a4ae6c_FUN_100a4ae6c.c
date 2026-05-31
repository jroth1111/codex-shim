
/* WARNING: Removing unreachable block (ram,0x000100a4afb4) */

void FUN_100a4ae6c(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *unaff_x28;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 in_stack_00000098;
  long in_stack_00000410;
  long in_stack_00000418;
  long in_stack_00000420;
  long in_stack_00000428;
  long in_stack_00000430;
  long in_stack_00000438;
  long in_stack_00000440;
  long in_stack_00000448;
  long in_stack_00000450;
  long in_stack_00000458;
  long in_stack_00000460;
  long in_stack_00000468;
  long in_stack_00000470;
  long in_stack_00000478;
  long *in_stack_00000710;
  long in_stack_000012b0;
  long in_stack_000012b8;
  long in_stack_000012c0;
  long in_stack_000012c8;
  long in_stack_000012d0;
  long in_stack_000012d8;
  long in_stack_000017a0;
  long in_stack_000017a8;
  long in_stack_000017b0;
  long in_stack_000017b8;
  long in_stack_000017c0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar6 = __ZN9rama_http2io7upgrade9OnUpgrade19has_handled_upgrade17hd3a4a4766f4a6a8aE
                    (&stack0x00000710);
  if ((uVar6 & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x2e8) = 0;
    *(long **)(unaff_x19 + 0x2f0) = in_stack_00000710;
    *(undefined1 *)(unaff_x19 + 0x300) = 0;
LAB_100a4af88:
    *(long **)(unaff_x19 + 0x2f8) = in_stack_00000710;
    puVar13 = (undefined8 *)(unaff_x19 + 0x2f8);
    __ZN82__LT_rama_http__io__upgrade__OnUpgrade_u20_as_u20_core__future__future__Future_GT_4poll17h826fd1cf3c4d22e7E
              (&stack0x00001780,puVar13,in_stack_00000098);
    lVar3 = *(long *)*puVar13;
    *(long *)*puVar13 = lVar3 + -1;
    LORelease();
    puVar7 = (undefined8 *)&stack0x00000488;
    puVar8 = (undefined8 *)0x1;
    lVar4 = 1;
    in_stack_000012b0 = param_1;
    in_stack_000012b8 = in_stack_000017a0;
    in_stack_000012c0 = in_stack_000017a8;
    in_stack_000012c8 = in_stack_000017b0;
    in_stack_000012d0 = in_stack_000017b8;
    in_stack_000012d8 = in_stack_000017c0;
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h70a20729cb521f7bE(puVar13);
      puVar8 = (undefined8 *)0x1;
      lVar4 = 1;
    }
  }
  else {
    puVar7 = (undefined8 *)_malloc(0x10);
    if (puVar7 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_100a4b814;
    }
    *puVar7 = &UNK_108cd9610;
    puVar7[1] = 0x21;
    lVar4 = *in_stack_00000710;
    *in_stack_00000710 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h70a20729cb521f7bE(&stack0x00000710);
    }
    in_stack_00000710 = (long *)&UNK_10b209930;
    *(undefined8 **)(unaff_x19 + 0x2e8) = puVar7;
    *(undefined **)(unaff_x19 + 0x2f0) = &UNK_10b209930;
    *(undefined1 *)(unaff_x19 + 0x300) = 0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_100a4af88;
    puVar8 = (undefined8 *)&UNK_10b209930;
    lVar4 = -0x8000000000000000;
  }
  *(undefined1 *)(unaff_x19 + 0x300) = 1;
  FUN_100d2a208(unaff_x19 + 0x2e8);
  *(undefined1 *)(unaff_x19 + 0x239) = 0;
  lVar12 = *(long *)(unaff_x19 + 0x288);
  lVar10 = *(long *)(unaff_x19 + 0x280);
  lVar18 = *(long *)(unaff_x19 + 0x298);
  lVar15 = *(long *)(unaff_x19 + 0x290);
  puVar13 = *(undefined8 **)(unaff_x19 + 0x248);
  lVar3 = *(long *)(unaff_x19 + 0x240);
  puVar19 = *(undefined **)(unaff_x19 + 600);
  puVar16 = *(undefined8 **)(unaff_x19 + 0x250);
  lVar20 = *(long *)(unaff_x19 + 0x268);
  lVar17 = *(long *)(unaff_x19 + 0x260);
  lVar14 = *(long *)(unaff_x19 + 0x278);
  lVar11 = *(long *)(unaff_x19 + 0x270);
  if (lVar4 == -0x8000000000000000) {
    FUN_100def764(&stack0x00000de0);
    func_0x000100e3c8d4(&stack0x00000e40);
    FUN_100e10ca8(&stack0x00000e60);
    puVar13 = puVar7;
    puVar16 = puVar8;
  }
  else {
    FUN_100e10ca8(&stack0x00001800);
    func_0x000100e3c8d4(&stack0x00001310);
    if (lVar3 != 3) {
      bVar1 = *(byte *)(unaff_x19 + 0x239);
      in_stack_00000460 = lVar10;
      in_stack_00000468 = lVar12;
      puVar9 = puVar13;
      in_stack_00000450 = lVar11;
      in_stack_00000458 = lVar14;
      in_stack_00000470 = lVar15;
      in_stack_00000478 = lVar18;
      puVar5 = puVar16;
      in_stack_00000440 = lVar17;
      in_stack_00000448 = lVar20;
      in_stack_00000410 = in_stack_000012b0;
      in_stack_00000418 = in_stack_000012b8;
      in_stack_00000420 = in_stack_000012c0;
      in_stack_00000428 = in_stack_000012c8;
      in_stack_00000430 = in_stack_000012d0;
      in_stack_00000438 = in_stack_000012d8;
      goto joined_r0x000100a4b280;
    }
  }
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
LAB_100a4b814:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4b818);
    (*pcVar2)();
  }
  puVar9 = (undefined8 *)0x8000000000000002;
  *puVar5 = puVar13;
  puVar5[1] = puVar16;
  puVar19 = &UNK_10b2099a8;
  lVar3 = 3;
  bVar1 = *(byte *)(unaff_x19 + 0x239);
joined_r0x000100a4b280:
  if ((bVar1 & 1) != 0) {
    FUN_100def764(unaff_x19 + 0x240);
    func_0x000100e3c8d4(unaff_x19 + 0x2a0);
    FUN_100e10ca8(unaff_x19 + 0x2c0);
  }
  *(undefined2 *)(unaff_x19 + 0x239) = 0;
  *(undefined1 *)(unaff_x19 + 0x23b) = 0;
  *unaff_x28 = lVar3;
  unaff_x28[1] = (long)puVar9;
  unaff_x28[2] = (long)puVar5;
  unaff_x28[3] = (long)puVar19;
  unaff_x28[5] = in_stack_00000448;
  unaff_x28[4] = in_stack_00000440;
  unaff_x28[7] = in_stack_00000458;
  unaff_x28[6] = in_stack_00000450;
  unaff_x28[9] = in_stack_00000468;
  unaff_x28[8] = in_stack_00000460;
  unaff_x28[0xb] = in_stack_00000478;
  unaff_x28[10] = in_stack_00000470;
  unaff_x28[0xc] = lVar4;
  unaff_x28[0xd] = (long)puVar7;
  unaff_x28[0xe] = (long)puVar8;
  unaff_x28[0x14] = in_stack_00000438;
  unaff_x28[0x13] = in_stack_00000430;
  unaff_x28[0x12] = in_stack_00000428;
  unaff_x28[0x11] = in_stack_00000420;
  unaff_x28[0x10] = in_stack_00000418;
  unaff_x28[0xf] = in_stack_00000410;
  *(undefined1 *)(unaff_x19 + 0x238) = 1;
  return;
}

