
void FUN_100719944(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  undefined8 unaff_x26;
  undefined2 unaff_w27;
  long unaff_x28;
  ulong in_xzr;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 *in_stack_000000a8;
  undefined8 in_stack_00003810;
  undefined8 in_stack_00003818;
  undefined2 in_stack_00003820;
  undefined4 in_stack_00003822;
  undefined2 in_stack_00003826;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003810,s_expect_accepted__got_108ad3906,&stack0x00002e40);
  FUN_100e638bc(&stack0x00001600);
  if (((*(byte *)(unaff_x28 + 0xee2) & 1) != 0) &&
     (plVar6 = *(long **)(unaff_x19 + 0x978), plVar6 != (long *)0x0)) {
    uVar4 = plVar6[0xe];
    do {
      uVar5 = uVar4;
      if (((uint)uVar5 >> 2 & 1) != 0) goto LAB_10071c214;
      uVar4 = plVar6[0xe];
    } while (uVar4 != uVar5);
    plVar6[0xe] = uVar5 | 2;
LAB_10071c214:
    if ((uVar5 & 5) == 1) {
      (**(code **)(plVar6[0xc] + 0x10))(plVar6[0xd]);
    }
    lVar3 = *plVar6;
    *plVar6 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h58c44e6a1288b00fE(unaff_x19 + 0x978);
    }
  }
  *(undefined1 *)(unaff_x28 + 0xee2) = 0;
  *(undefined1 *)(unaff_x28 + 0xeed) = 0;
  if (*(long *)(unaff_x19 + 0x578) != 3) {
    FUN_100e62894(unaff_x19 + 0x578);
    lVar3 = **(long **)(unaff_x19 + 0x5f8);
    **(long **)(unaff_x19 + 0x5f8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x5f8);
    }
    lVar3 = **(long **)(unaff_x19 + 0x608);
    **(long **)(unaff_x19 + 0x608) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x608);
    }
    if ((*(long *)(unaff_x19 + 0x618) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x618) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x620));
    }
  }
  *(undefined4 *)(unaff_x28 + 0xee5) = 0;
  plVar6 = *(long **)(unaff_x19 + 0x568);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    *plVar6 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x568);
    }
  }
  *(undefined1 *)(unaff_x28 + 0xeee) = 0;
  if ((*(byte *)(unaff_x28 + 0xee3) & 1) != 0) {
    FUN_100d3437c(&stack0x000006e8);
  }
  *(undefined1 *)(unaff_x28 + 0xee3) = 0;
  *(undefined1 *)(unaff_x28 + 0xef0) = 0;
  *(undefined1 *)(unaff_x28 + 0xee9) = 0;
  FUN_100e3bcd4(unaff_x19 + 0x220);
  puVar1 = (undefined8 *)(unaff_x19 + 0x218);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar3 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  FUN_100e84360(unaff_x19 + 0x1d0);
  FUN_100d88cd8(unaff_x19 + 0x1c8);
  lVar7 = *(long *)(unaff_x19 + 0x1c0);
  LOAcquire();
  lVar3 = *(long *)(lVar7 + 0x1f0);
  *(long *)(lVar7 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcaa8c(lVar7 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x6210) = *(ulong *)(lVar3 + 0x6210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(lVar7 + 0x110);
    LOAcquire();
    uVar4 = *puVar2;
    *puVar2 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar7 + 0x100);
      *(undefined8 *)(lVar7 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x108));
      }
    }
  }
  lVar3 = **(long **)(unaff_x19 + 0x1c0);
  **(long **)(unaff_x19 + 0x1c0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(unaff_x19 + 0x1c0);
  }
  FUN_100d95344(unaff_x19 + 0x1a8);
  FUN_100e62894(unaff_x19 + 0xe0);
  lVar3 = **(long **)(unaff_x19 + 0x178);
  **(long **)(unaff_x19 + 0x178) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x178);
  }
  lVar3 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(unaff_x19 + 0x188);
  }
  if ((((*(byte *)(unaff_x28 + 0xee4) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x160) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x160) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x168));
  }
  *(undefined1 *)(unaff_x28 + 0xee4) = 0;
  *in_stack_000000a8 = 0x8000000000000000;
  in_stack_000000a8[1] = &UNK_108caafba;
  in_stack_000000a8[2] = 0x29;
  *(undefined2 *)(in_stack_000000a8 + 3) = 0x15;
  *(int *)((long)in_stack_000000a8 + 0x1a) = (int)in_stack_00000058;
  *(short *)((long)in_stack_000000a8 + 0x1e) = (short)((ulong)in_stack_00000058 >> 0x20);
  in_stack_000000a8[4] = in_stack_00003810;
  in_stack_000000a8[5] = in_stack_00003818;
  *(undefined2 *)(in_stack_000000a8 + 6) = in_stack_00003820;
  *(undefined4 *)((long)in_stack_000000a8 + 0x32) = in_stack_00003822;
  *(undefined2 *)((long)in_stack_000000a8 + 0x36) = in_stack_00003826;
  in_stack_000000a8[7] = in_stack_00000090;
  in_stack_000000a8[8] = in_stack_00000080;
  *(undefined2 *)(in_stack_000000a8 + 9) = unaff_w27;
  *(int *)((long)in_stack_000000a8 + 0x4a) = (int)unaff_x26;
  *(short *)((long)in_stack_000000a8 + 0x4e) = (short)((ulong)unaff_x26 >> 0x20);
  in_stack_000000a8[10] = in_stack_00000050;
  *(undefined1 *)(unaff_x28 + 0xee0) = 1;
  return;
}

