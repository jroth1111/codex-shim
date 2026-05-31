
void FUN_100d90440(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = *param_1;
  if (lVar2 != -0x7fffffffffffffff) {
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      lVar4 = param_1[3];
      uVar7 = param_1[4];
      plVar5 = (long *)param_1[5];
      do {
        plVar6 = plVar5;
        if (uVar7 == 0) {
          do {
            plVar5 = plVar6 + 1;
            lVar8 = *plVar6;
            lVar4 = lVar4 + -0x200;
            uVar7 = CONCAT17(-(-1 < lVar8),
                             CONCAT16(-(-1 < (char)((ulong)lVar8 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar8 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar8 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar8 >> 0x18)
                                                                  ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar8 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar8 >> 8)),
                                                           -(-1 < (char)lVar8)))))))) &
                    0x8080808080808080;
            plVar6 = plVar5;
          } while (uVar7 == 0);
          param_1[5] = (long)plVar5;
          param_1[3] = lVar4;
        }
        uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 - 1 & uVar7;
        param_1[4] = uVar7;
        lVar8 = lVar4 + (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78U) * -8;
        lVar3 = lVar3 + -1;
        param_1[7] = lVar3;
        if (*(long *)(lVar8 + -0x40) != 0) {
          (**(code **)(*(long *)(lVar8 + -0x40) + 0x20))
                    (lVar8 + -0x28,*(undefined8 *)(lVar8 + -0x38),*(undefined8 *)(lVar8 + -0x30));
        }
        func_0x000100e6cd20(lVar8 + -0x20);
      } while (lVar3 != 0);
    }
    if (lVar2 != 0 && param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[2]);
      return;
    }
  }
  return;
}

