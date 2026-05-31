
void FUN_10393ce9c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar3 = *param_1;
  if (lVar3 != -0x8000000000000000) {
    lVar2 = param_1[1];
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar2);
    }
  }
  lVar3 = param_1[3];
  if (lVar3 != -0x8000000000000000) {
    lVar2 = param_1[4];
    lVar8 = param_1[5];
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar3 != 0) {
      _free(lVar2);
    }
  }
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    lVar2 = param_1[9];
    if (lVar2 != 0) {
      plVar4 = (long *)param_1[6];
      plVar6 = plVar4 + 1;
      lVar8 = *plVar4;
      uVar7 = CONCAT17(-(-1 < lVar8),
                       CONCAT16(-(-1 < (char)((ulong)lVar8 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar8 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar8 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar8 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar8 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar8 >> 8)),-(-1 < (char)lVar8)))))))) &
              0x8080808080808080;
      do {
        while (uVar7 == 0) {
          lVar8 = *plVar6;
          plVar4 = plVar4 + -0x20;
          plVar6 = plVar6 + 1;
          uVar7 = CONCAT17(-(-1 < lVar8),
                           CONCAT16(-(-1 < (char)((ulong)lVar8 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar8 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar8 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar8 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar8
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar8 >> 8)),-(-1 < (char)lVar8)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)plVar4 + uVar1 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar4 + uVar1 * -4 + -0x18));
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar3 * 0x21 != -0x29) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[6] + lVar3 * -0x20 + -0x20);
      return;
    }
  }
  return;
}

