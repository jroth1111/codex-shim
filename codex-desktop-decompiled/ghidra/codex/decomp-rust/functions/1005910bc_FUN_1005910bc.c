
void FUN_1005910bc(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *in_stack_00000180;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 *in_stack_0000c900;
  
  FUN_10059e4b8(&stack0x00007f40);
  (**(code **)*in_stack_0000c900)();
  __ZN14codex_protocol5error8CodexErr14to_error_event17h359003e86a4af94dE
            (&stack0x00004330,unaff_x19 + 0xa18,&stack0x00000750);
  *(undefined1 *)(unaff_x19 + 0xabe) = 0;
  _memcpy(unaff_x19 + 0xac8,&stack0x00007f40,0x1d8);
  *(long *)(unaff_x19 + 0xca8) = *(long *)(unaff_x19 + 0x238) + 0x10;
  *(long *)(unaff_x19 + 0xca0) = *(long *)(unaff_x19 + 0x230) + 0x10;
  *(undefined1 *)(in_stack_000001a0 + 0x5b7) = 0;
  iVar4 = FUN_10059e898(unaff_x19 + 0xac8,in_stack_000001a8);
  if (iVar4 == 0) {
    FUN_100d1ddbc(unaff_x19 + 0xac8);
    *(undefined1 *)(unaff_x19 + 0xabe) = 0;
    FUN_100df5738(unaff_x19 + 0xa18);
    if ((*(long *)(unaff_x19 + 0x808) != -0x7fffffffffffffe0) &&
       ((*(byte *)(unaff_x19 + 0xaba) & 1) != 0)) {
      FUN_100df5738(unaff_x19 + 0x808);
    }
    *(undefined1 *)(unaff_x19 + 0xaba) = 0;
    if ((*(long *)(unaff_x19 + 0x7f0) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x7f0) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x7f8));
    }
    lVar6 = *(long *)(unaff_x19 + 0x7e0);
    lVar3 = *(long *)(unaff_x19 + 0x7e8) + 1;
    lVar7 = lVar6;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      FUN_100e02a24(lVar7);
      lVar7 = lVar7 + 0xc0;
    }
    if (*(long *)(unaff_x19 + 0x7d8) != 0) {
      _free(lVar6);
    }
    *(undefined1 *)(unaff_x19 + 0xac0) = 0;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x608);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x618);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x610);
    lVar3 = **(long **)(unaff_x19 + 0x620);
    **(long **)(unaff_x19 + 0x620) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(unaff_x19 + 0x620);
    }
    *(undefined1 *)(unaff_x19 + 0xac0) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x518);
    if (lVar3 != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x528);
      if (lVar7 != 0) {
        plVar9 = *(long **)(unaff_x19 + 0x510);
        plVar10 = plVar9 + 1;
        lVar6 = *plVar9;
        uVar11 = CONCAT17(-(-1 < lVar6),
                          CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar6 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar6 >> 8)),-(-1 < (char)lVar6)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar6 = *plVar10;
            plVar9 = plVar9 + -0x18;
            plVar10 = plVar10 + 1;
            uVar11 = CONCAT17(-(-1 < lVar6),
                              CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar6 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar6 >> 8)),
                                                           -(-1 < (char)lVar6)))))))) &
                     0x8080808080808080;
          }
          uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          iVar4 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
          if (plVar9[(long)-iVar4 * 3 + -3] != 0) {
            _free(plVar9[(long)-iVar4 * 3 + -2]);
          }
          uVar11 = uVar11 - 1 & uVar11;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar3 * 0x19 != -0x21) {
        _free(*(long *)(unaff_x19 + 0x510) + lVar3 * -0x18 + -0x18);
      }
    }
    *(undefined1 *)(unaff_x19 + 0xabc) = 0;
    FUN_100e08e20(unaff_x19 + 0x268);
    puVar1 = (undefined8 *)(unaff_x19 + 0x260);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (puVar1);
    lVar3 = *(long *)*puVar1;
    *(long *)*puVar1 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
    }
    lVar6 = *(long *)(unaff_x19 + 0x250);
    lVar3 = lVar6;
    for (lVar7 = *(long *)(unaff_x19 + 600); lVar7 != 0; lVar7 = lVar7 + -1) {
      FUN_100e06c08(lVar3);
      lVar3 = lVar3 + 0x38;
    }
    if (*(long *)(unaff_x19 + 0x248) != 0) {
      _free(lVar6);
    }
    lVar3 = **(long **)(unaff_x19 + 0x240);
    **(long **)(unaff_x19 + 0x240) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(unaff_x19 + 0x240);
    }
    lVar3 = **(long **)(unaff_x19 + 0x238);
    **(long **)(unaff_x19 + 0x238) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x238);
    }
    lVar3 = **(long **)(unaff_x19 + 0x230);
    **(long **)(unaff_x19 + 0x230) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(unaff_x19 + 0x230);
    }
    *in_stack_00000180 = uVar8;
    in_stack_00000180[2] = uVar13;
    in_stack_00000180[1] = uVar12;
    uVar5 = 1;
  }
  else {
    *in_stack_00000180 = 0x8000000000000001;
    uVar5 = 0x22;
  }
  *(undefined1 *)(unaff_x19 + 0xab0) = uVar5;
  return;
}

