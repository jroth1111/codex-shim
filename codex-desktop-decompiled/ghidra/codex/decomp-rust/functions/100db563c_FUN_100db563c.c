
void FUN_100db563c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      plVar4 = (long *)*param_1;
      plVar5 = plVar4 + 1;
      lVar7 = *plVar4;
      uVar6 = CONCAT17(-(-1 < lVar7),
                       CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
              0x8080808080808080;
      do {
        while (uVar6 == 0) {
          lVar7 = *plVar5;
          plVar4 = plVar4 + -0x20;
          plVar5 = plVar5 + 1;
          uVar6 = CONCAT17(-(-1 < lVar7),
                           CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar7
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        lVar3 = lVar3 + -1;
        FUN_100da18c4((long)plVar4 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -4 + -0x20);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x21 != -0x29) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*param_1 + lVar2 * -0x20 + -0x20);
      return;
    }
  }
  return;
}

