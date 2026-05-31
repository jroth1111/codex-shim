
void FUN_10071f798(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x23;
  long unaff_x28;
  ulong in_xzr;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  uint uStack0000000000000074;
  undefined8 in_stack_00003860;
  undefined8 in_stack_00003868;
  ushort in_stack_00003870;
  uint in_stack_00003872;
  undefined2 in_stack_00003876;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003860,s_expect_accepted__got_108ad3906,&stack0x00002e80);
  uStack0000000000000074 = (uint)in_stack_00003870;
  FUN_100e638bc(&stack0x00001600);
  if (((*(byte *)(unaff_x28 + 0xeea) & 1) != 0) &&
     (plVar7 = *(long **)(unaff_x19 + 0x990), plVar7 != (long *)0x0)) {
    uVar5 = plVar7[0xe];
    do {
      uVar6 = uVar5;
      if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_100721df0;
      uVar5 = plVar7[0xe];
    } while (uVar5 != uVar6);
    plVar7[0xe] = uVar6 | 2;
LAB_100721df0:
    if ((uVar6 & 5) == 1) {
      (**(code **)(plVar7[0xc] + 0x10))(plVar7[0xd]);
    }
    lVar4 = *plVar7;
    *plVar7 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h58c44e6a1288b00fE(unaff_x19 + 0x990);
    }
  }
  *(undefined1 *)(unaff_x28 + 0xeea) = 0;
  *(undefined1 *)(unaff_x28 + 0xef5) = 0;
  if (*(long *)(unaff_x19 + 0x588) != 3) {
    FUN_100e62894(unaff_x19 + 0x588);
    lVar4 = **(long **)(unaff_x19 + 0x608);
    **(long **)(unaff_x19 + 0x608) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE(unaff_x19 + 0x608);
    }
    lVar4 = **(long **)(unaff_x19 + 0x610);
    **(long **)(unaff_x19 + 0x610) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x610);
    }
    lVar4 = **(long **)(unaff_x19 + 0x620);
    **(long **)(unaff_x19 + 0x620) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x620);
    }
    if ((*(long *)(unaff_x19 + 0x630) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x630) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x638));
    }
  }
  *(undefined4 *)(unaff_x28 + 0xeed) = 0;
  plVar7 = *(long **)(unaff_x19 + 0x578);
  if (plVar7 == (long *)0x0) {
    *(undefined1 *)(unaff_x28 + 0xef6) = 0;
    bVar3 = *(byte *)(unaff_x28 + 0xeeb);
  }
  else {
    lVar4 = *plVar7;
    *plVar7 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x578);
      *(undefined1 *)(unaff_x28 + 0xef6) = 0;
      bVar3 = *(byte *)(unaff_x28 + 0xeeb);
    }
    else {
      *(undefined1 *)(unaff_x28 + 0xef6) = 0;
      bVar3 = *(byte *)(unaff_x28 + 0xeeb);
    }
  }
  if ((bVar3 & 1) != 0) {
    FUN_100d3437c(&stack0x000006e8);
  }
  *(undefined1 *)(unaff_x28 + 0xeeb) = 0;
  *(undefined1 *)(unaff_x28 + 0xef8) = 0;
  *(undefined1 *)(unaff_x28 + 0xef1) = 0;
  FUN_100e3bcd4(unaff_x19 + 0x230);
  puVar1 = (undefined8 *)(unaff_x19 + 0x228);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar4 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  FUN_100e84360(unaff_x19 + 0x1e0);
  FUN_100d88cd8(unaff_x19 + 0x1d8);
  lVar8 = *(long *)(unaff_x19 + 0x1d0);
  LOAcquire();
  lVar4 = *(long *)(lVar8 + 0x1f0);
  *(long *)(lVar8 + 0x1f0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    LOAcquire();
    lVar4 = *(long *)(lVar8 + 0x88);
    *(long *)(lVar8 + 0x88) = lVar4 + 1;
    lVar4 = func_0x000100fcaa8c(lVar8 + 0x80,lVar4);
    *(ulong *)(lVar4 + 0x6210) = *(ulong *)(lVar4 + 0x6210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(lVar8 + 0x110);
    LOAcquire();
    uVar5 = *puVar2;
    *puVar2 = uVar5 | 2;
    LORelease();
    if (uVar5 == 0) {
      lVar4 = *(long *)(lVar8 + 0x100);
      *(undefined8 *)(lVar8 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar8 + 0x108));
      }
    }
  }
  lVar4 = **(long **)(unaff_x19 + 0x1d0);
  **(long **)(unaff_x19 + 0x1d0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(unaff_x19 + 0x1d0);
  }
  FUN_100dac4b8(unaff_x19 + 0x1b8);
  FUN_100e62894(unaff_x19 + 0xe8);
  lVar4 = **(long **)(unaff_x19 + 0x168);
  **(long **)(unaff_x19 + 0x168) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE(unaff_x19 + 0x168);
  }
  lVar4 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x188);
  }
  lVar4 = **(long **)(unaff_x19 + 0x198);
  **(long **)(unaff_x19 + 0x198) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(unaff_x19 + 0x198);
  }
  if ((((*(byte *)(unaff_x28 + 0xeec) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x170) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x170) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x178));
  }
  *(undefined1 *)(unaff_x28 + 0xeec) = 0;
  *unaff_x23 = 0x8000000000000000;
  unaff_x23[1] = &UNK_108caafba;
  unaff_x23[2] = 0x29;
  *(undefined2 *)(unaff_x23 + 3) = 0x15;
  *(int *)((long)unaff_x23 + 0x1a) = (int)in_stack_00000038;
  *(short *)((long)unaff_x23 + 0x1e) = (short)((ulong)in_stack_00000038 >> 0x20);
  unaff_x23[4] = in_stack_00003860;
  unaff_x23[5] = in_stack_00003868;
  *(short *)(unaff_x23 + 6) = (short)uStack0000000000000074;
  *(uint *)((long)unaff_x23 + 0x32) = in_stack_00003872;
  *(undefined2 *)((long)unaff_x23 + 0x36) = in_stack_00003876;
  unaff_x23[7] = in_stack_00000068;
  unaff_x23[8] = (ulong)in_stack_00003872;
  *(undefined2 *)(unaff_x23 + 9) = in_stack_00003876;
  *(int *)((long)unaff_x23 + 0x4a) = (int)in_stack_00000040;
  *(short *)((long)unaff_x23 + 0x4e) = (short)((ulong)in_stack_00000040 >> 0x20);
  unaff_x23[10] = in_stack_00000050;
  *(undefined1 *)(unaff_x28 + 0xee8) = 1;
  return;
}

