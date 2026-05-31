
void FUN_100d5d2d4(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  cVar1 = *(char *)(param_1 + 0x248);
  if (cVar1 == '\0') {
    FUN_100cdcba0(param_1);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      plVar5 = *(long **)(param_1 + 8);
      plVar6 = plVar5 + 1;
      lVar8 = *plVar5;
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
          plVar5 = plVar5 + -0x30;
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
        uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 - 1 & uVar7;
        lVar3 = lVar3 + -1;
        FUN_100e34ae8(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 6
                               + -5);
      } while (lVar3 != 0);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_100ca1118(param_1 + 0x250);
    }
    FUN_100cdcba0(param_1);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      plVar5 = *(long **)(param_1 + 8);
      plVar6 = plVar5 + 1;
      lVar8 = *plVar5;
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
          plVar5 = plVar5 + -0x30;
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
        uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 - 1 & uVar7;
        lVar3 = lVar3 + -1;
        FUN_100e34ae8(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 6
                               + -5);
      } while (lVar3 != 0);
    }
  }
  if (lVar4 * 0x31 == -0x39) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(long *)(param_1 + 8) + lVar4 * -0x30 + -0x30);
  return;
}

