
void FUN_100e0edbc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = *param_1;
  if (lVar4 != -1) {
    lVar2 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      _free(lVar4);
    }
  }
  plVar5 = (long *)param_1[1];
  lVar4 = *plVar5;
  *plVar5 = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar4 = param_1[1];
  lVar2 = *(long *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if (lVar2 != 0) {
    iVar3 = _pthread_mutex_trylock(lVar2);
    if (iVar3 == 0) {
      _pthread_mutex_unlock(lVar2);
      _pthread_mutex_destroy(lVar2);
      _free(lVar2);
    }
    lVar2 = *(long *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    if (lVar2 != 0) {
      _pthread_mutex_destroy(lVar2);
      _free(lVar2);
    }
  }
  lVar2 = *(long *)(lVar4 + 0x28);
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar4 + 0x38);
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar4 + 0x20);
      plVar7 = plVar5 + 1;
      lVar9 = *plVar5;
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
          plVar5 = plVar5 + -0x90;
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
        iVar3 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar5[(long)-iVar3 * 0x12 + -0x12] != 0) {
          _free(plVar5[(long)-iVar3 * 0x12 + -0x11]);
        }
        if ((plVar5[(long)-iVar3 * 0x12 + -0xf] & 0x7fffffffffffffffU) == 0) {
          if (plVar5[(long)-iVar3 * 0x12 + -0xc] != -0x8000000000000000 &&
              plVar5[(long)-iVar3 * 0x12 + -0xc] != 0) goto LAB_1034c50d8;
LAB_1034c509c:
          if (plVar5[(long)-iVar3 * 0x12 + -9] != -0x8000000000000000 &&
              plVar5[(long)-iVar3 * 0x12 + -9] != 0) goto LAB_1034c50f0;
LAB_1034c50ac:
          if (plVar5[(long)-iVar3 * 0x12 + -6] != -0x8000000000000000 &&
              plVar5[(long)-iVar3 * 0x12 + -6] != 0) {
LAB_1034c5108:
            _free(plVar5[(long)-iVar3 * 0x12 + -5]);
          }
        }
        else {
          _free(plVar5[(long)-iVar3 * 0x12 + -0xe]);
          if (plVar5[(long)-iVar3 * 0x12 + -0xc] == -0x8000000000000000 ||
              plVar5[(long)-iVar3 * 0x12 + -0xc] == 0) goto LAB_1034c509c;
LAB_1034c50d8:
          _free(plVar5[(long)-iVar3 * 0x12 + -0xb]);
          if (plVar5[(long)-iVar3 * 0x12 + -9] == -0x8000000000000000 ||
              plVar5[(long)-iVar3 * 0x12 + -9] == 0) goto LAB_1034c50ac;
LAB_1034c50f0:
          _free(plVar5[(long)-iVar3 * 0x12 + -8]);
          if (plVar5[(long)-iVar3 * 0x12 + -6] != -0x8000000000000000 &&
              plVar5[(long)-iVar3 * 0x12 + -6] != 0) goto LAB_1034c5108;
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar2 * 0x91 != -0x99) {
      _free(*(long *)(lVar4 + 0x20) + lVar2 * -0x90 + -0x90);
    }
  }
  lVar2 = *(long *)(lVar4 + 0x58);
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar4 + 0x68);
    if (lVar6 != 0) {
      plVar5 = *(long **)(lVar4 + 0x50);
      plVar7 = plVar5 + 1;
      lVar9 = *plVar5;
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
          plVar5 = plVar5 + -0x18;
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
        iVar3 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar5[(long)-iVar3 * 3 + -3] != 0) {
          _free(plVar5[(long)-iVar3 * 3 + -2]);
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar2 * 0x19 != -0x21) {
      _free(*(long *)(lVar4 + 0x50) + lVar2 * -0x18 + -0x18);
    }
  }
  if (lVar4 != -1) {
    lVar2 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  return;
}

