
void FUN_100d487e8(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x922) != '\0') {
    if (*(char *)(param_1 + 0x922) != '\x03') {
      return;
    }
    FUN_100e6b604(param_1);
    FUN_100e0ea40(param_1 + 0x540);
    *(undefined1 *)(param_1 + 0x920) = 0;
    if (*(long *)(param_1 + 0x8f8) != 0) {
      _free(*(undefined8 *)(param_1 + 0x900));
    }
    *(undefined1 *)(param_1 + 0x921) = 0;
    lVar3 = *(long *)(param_1 + 0x538);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x518);
      uVar7 = *(ulong *)(param_1 + 0x520);
      plVar5 = *(long **)(param_1 + 0x528);
      do {
        plVar6 = plVar5;
        if (uVar7 == 0) {
          do {
            plVar5 = plVar6 + 1;
            lVar8 = *plVar6;
            lVar4 = lVar4 + -0xe40;
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
          *(long **)(param_1 + 0x528) = plVar5;
          *(long *)(param_1 + 0x518) = lVar4;
        }
        uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 - 1 & uVar7;
        *(ulong *)(param_1 + 0x520) = uVar7;
        lVar8 = lVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x1c8;
        lVar3 = lVar3 + -1;
        *(long *)(param_1 + 0x538) = lVar3;
        if (*(long *)(lVar8 + -0x1c8) != 0) {
          _free(*(undefined8 *)(lVar8 + -0x1c0));
        }
        FUN_100e0ea40(lVar8 + -0x1b0);
      } while (lVar3 != 0);
    }
    if (*(long *)(param_1 + 0x500) == 0 || *(long *)(param_1 + 0x508) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x510);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar3);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x6f8);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x708);
    if (lVar4 != 0) {
      plVar5 = *(long **)(param_1 + 0x6f0);
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
          plVar5 = plVar5 + -0x1c8;
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
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar5[(long)-iVar2 * 0x39 + -0x39] != 0) {
          _free(plVar5[(long)-iVar2 * 0x39 + -0x38]);
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar4 = lVar4 + -1;
        FUN_100e0ea40(plVar5 + (long)-iVar2 * 0x39 + -0x36);
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x1c9 != -0x1d1) {
      lVar3 = *(long *)(param_1 + 0x6f0) + lVar3 * -0x1c8 + -0x1c8;
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

