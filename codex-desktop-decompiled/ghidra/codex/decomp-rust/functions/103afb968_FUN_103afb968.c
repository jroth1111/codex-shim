
void FUN_103afb968(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      plVar6 = (long *)*param_1;
      plVar7 = plVar6 + 1;
      lVar9 = *plVar6;
      uVar8 = CONCAT17(-(-1 < lVar9),
                       CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
              0x8080808080808080;
      do {
        while (uVar8 == 0) {
          lVar9 = *plVar7;
          plVar6 = plVar6 + -0x20;
          plVar7 = plVar7 + 1;
          uVar8 = CONCAT17(-(-1 < lVar9),
                           CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar9
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)plVar6 + uVar1 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar6 + uVar1 * -4 + -0x18));
        }
        puVar3 = (undefined8 *)((long)plVar6 + uVar1 * -4 + -8);
        plVar2 = (long *)*puVar3;
        lVar9 = *plVar2;
        *plVar2 = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h81f873d6dcb2525bE(puVar3);
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x21 != -0x29) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*param_1 + lVar4 * -0x20 + -0x20);
      return;
    }
  }
  return;
}

