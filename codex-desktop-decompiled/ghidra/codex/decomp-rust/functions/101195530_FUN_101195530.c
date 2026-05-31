
undefined8 FUN_101195530(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00002580;
  undefined8 in_stack_00002588;
  undefined8 in_stack_00002590;
  undefined8 in_stack_000071d0;
  undefined8 in_stack_000071d8;
  undefined8 in_stack_000071e0;
  undefined8 in_stack_000071e8;
  undefined8 in_stack_000071f0;
  undefined8 in_stack_000071f8;
  undefined8 in_stack_00007200;
  undefined8 in_stack_00007208;
  undefined8 in_stack_00007218;
  undefined8 in_stack_00007220;
  undefined8 in_stack_00007228;
  undefined8 in_stack_00007230;
  undefined8 in_stack_00007238;
  undefined8 in_stack_00007240;
  undefined8 in_stack_00007248;
  undefined8 in_stack_00007250;
  undefined7 in_stack_00007259;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002580,s_Failed_to_start_Codex_session__108accf1a,&stack0x00007260);
  unaff_x23[2] = in_stack_00002588;
  unaff_x23[1] = in_stack_00002580;
  *unaff_x23 = 0;
  unaff_x23[3] = in_stack_00002590;
  unaff_x23[4] = 0x8000000000000000;
  unaff_x23[0x1d] = 0x8000000000000001;
  *(undefined1 *)(unaff_x19 + 0x327) = 1;
  lVar4 = *(long *)(unaff_x20 + 0x7080);
  plVar3 = *(long **)(unaff_x20 + 0x4b10);
  if ((plVar3 != (long *)0x0) && (lVar2 = *plVar3, *plVar3 = lVar2 + 1, lVar2 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119630c);
    (*pcVar1)();
  }
  *(undefined8 *)(unaff_x20 + 0x77f8) = in_stack_00007228;
  *(undefined8 *)(unaff_x20 + 0x77f0) = in_stack_00007220;
  *(undefined8 *)(unaff_x20 + 0x7808) = in_stack_00007238;
  *(undefined8 *)(unaff_x20 + 0x7800) = in_stack_00007230;
  *(undefined8 *)(unaff_x20 + 0x7818) = in_stack_00007248;
  *(undefined8 *)(unaff_x20 + 0x7810) = in_stack_00007240;
  *(ulong *)(unaff_x20 + 0x7828) = CONCAT71(in_stack_00007259,1);
  *(undefined8 *)(unaff_x20 + 0x7820) = in_stack_00007250;
  *(undefined8 *)(unaff_x20 + 0x77b8) = in_stack_000071e8;
  *(undefined8 *)(unaff_x20 + 0x77b0) = in_stack_000071e0;
  *(undefined8 *)(unaff_x20 + 0x77c8) = in_stack_000071f8;
  *(undefined8 *)(unaff_x20 + 0x77c0) = in_stack_000071f0;
  *(undefined8 *)(unaff_x20 + 0x77d8) = in_stack_00007208;
  *(undefined8 *)(unaff_x20 + 0x77d0) = in_stack_00007200;
  *(undefined8 *)(unaff_x20 + 0x77e8) = in_stack_00007218;
  *(undefined8 *)(unaff_x20 + 0x77e0) = 0x8000000000000005;
  *(undefined8 **)(unaff_x20 + 0x7788) = unaff_x23;
  *(undefined8 *)(unaff_x20 + 0x7780) = 1;
  *(undefined8 *)(unaff_x20 + 0x7798) = 0x8000000000000000;
  *(undefined8 *)(unaff_x20 + 0x7790) = 1;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x4b18);
  *(undefined1 *)(unaff_x19 + 0x327) = 0;
  *(undefined8 *)(unaff_x20 + 0x77a8) = in_stack_000071d8;
  *(undefined8 *)(unaff_x20 + 0x77a0) = in_stack_000071d0;
  *(long *)(unaff_x20 + 0x7830) = lVar4 + 0x10;
  *(long **)(unaff_x20 + 0x7838) = plVar3;
  *(undefined8 *)(unaff_x20 + 0x7840) = uVar5;
  *(undefined1 *)(unaff_x19 + 0x560) = 0;
  func_0x0001009b7030(unaff_x20 + 0x7780);
  FUN_100d5ee48(unaff_x20 + 0x7780);
  *(undefined1 *)(unaff_x19 + 0x327) = 0;
  FUN_100df5738(unaff_x20 + 0x76e8);
  lVar4 = **(long **)(unaff_x20 + 0x7090);
  **(long **)(unaff_x20 + 0x7090) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E(unaff_x20 + 0x7090);
  }
  *(undefined1 *)(unaff_x19 + 0x322) = 0;
  lVar4 = **(long **)(unaff_x20 + 0x7088);
  **(long **)(unaff_x20 + 0x7088) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(unaff_x20 + 0x7088);
  }
  lVar4 = **(long **)(unaff_x20 + 0x7080);
  **(long **)(unaff_x20 + 0x7080) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x20 + 0x7080);
  }
  *(undefined1 *)(unaff_x19 + 0x323) = 0;
  FUN_100de93d0(unaff_x20 + 0x4b38);
  if (*(long *)(unaff_x20 + 0x4b20) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x4b28));
  }
  plVar3 = *(long **)(unaff_x20 + 0x4b10);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    *plVar3 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x20 + 0x4b10);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x324) = 0;
  *(undefined1 *)(unaff_x19 + 800) = 1;
  func_0x000100cc1538(in_stack_00000018);
  *(undefined1 *)(unaff_x21 + 0x18) = 1;
  return 0;
}

