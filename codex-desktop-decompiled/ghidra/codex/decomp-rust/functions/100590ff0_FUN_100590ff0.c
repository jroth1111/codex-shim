
void FUN_100590ff0(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *in_stack_00000180;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 *in_stack_0000c900;
  
  FUN_10059e100(&stack0x00007f40);
  (**(code **)*in_stack_0000c900)();
  FUN_100df5738(unaff_x19 + 0xac8);
  if ((((*(byte *)(unaff_x19 + 0xabb) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x8a0) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x8a0) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x8a8));
  }
  *(undefined2 *)(unaff_x19 + 0xaba) = 0;
  if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x7f0) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x7f8));
  }
  lVar5 = *(long *)(unaff_x19 + 0x7e0);
  lVar4 = *(long *)(unaff_x19 + 0x7e8) + 1;
  lVar6 = lVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e02a24(lVar6);
    lVar6 = lVar6 + 0xc0;
  }
  if (*(long *)(unaff_x19 + 0x7d8) != 0) {
    _free(lVar5);
  }
  lVar4 = **(long **)(unaff_x19 + 0x620);
  **(long **)(unaff_x19 + 0x620) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(unaff_x19 + 0x620);
  }
  if (*(long *)(unaff_x19 + 0x608) != -0x8000000000000000 && *(long *)(unaff_x19 + 0x608) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x610));
  }
  *(undefined1 *)(unaff_x19 + 0xac0) = 0;
  lVar4 = *(long *)(unaff_x19 + 0x518);
  if (lVar4 != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x528);
    if (lVar6 != 0) {
      plVar7 = *(long **)(unaff_x19 + 0x510);
      plVar8 = plVar7 + 1;
      lVar5 = *plVar7;
      uVar9 = CONCAT17(-(-1 < lVar5),
                       CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
              0x8080808080808080;
      do {
        while (uVar9 == 0) {
          lVar5 = *plVar8;
          plVar7 = plVar7 + -0x18;
          plVar8 = plVar8 + 1;
          uVar9 = CONCAT17(-(-1 < lVar5),
                           CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                  0x8080808080808080;
        }
        uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        if (plVar7[(long)-iVar3 * 3 + -3] != 0) {
          _free(plVar7[(long)-iVar3 * 3 + -2]);
        }
        uVar9 = uVar9 - 1 & uVar9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 * 0x19 != -0x21) {
      _free(*(long *)(unaff_x19 + 0x510) + lVar4 * -0x18 + -0x18);
    }
  }
  if ((*(byte *)(unaff_x19 + 0xabc) & 1) != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x500);
    lVar4 = *(long *)(unaff_x19 + 0x508) + 1;
    lVar6 = lVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e02a24(lVar6);
      lVar6 = lVar6 + 0xc0;
    }
    if (*(long *)(unaff_x19 + 0x4f8) != 0) {
      _free(lVar5);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xabc) = 0;
  FUN_100e08e20(unaff_x19 + 0x268);
  puVar1 = (undefined8 *)(unaff_x19 + 0x260);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar4 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  lVar5 = *(long *)(unaff_x19 + 0x250);
  lVar4 = lVar5;
  for (lVar6 = *(long *)(unaff_x19 + 600); lVar6 != 0; lVar6 = lVar6 + -1) {
    FUN_100e06c08(lVar4);
    lVar4 = lVar4 + 0x38;
  }
  if (*(long *)(unaff_x19 + 0x248) != 0) {
    _free(lVar5);
  }
  lVar4 = **(long **)(unaff_x19 + 0x240);
  **(long **)(unaff_x19 + 0x240) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x240);
  }
  lVar4 = **(long **)(unaff_x19 + 0x238);
  **(long **)(unaff_x19 + 0x238) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x238);
  }
  lVar4 = **(long **)(unaff_x19 + 0x230);
  **(long **)(unaff_x19 + 0x230) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(unaff_x19 + 0x230);
  }
  *in_stack_00000180 = 0x8000000000000000;
  in_stack_00000180[2] = in_stack_00000508;
  in_stack_00000180[1] = in_stack_00000500;
  *(undefined1 *)(unaff_x19 + 0xab0) = 1;
  return;
}

