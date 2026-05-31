
void FUN_100e659a4(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    puVar7 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar7[-1] != 0) {
        _free(*puVar7);
      }
      puVar7 = puVar7 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _free(lVar4);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _free(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  plVar3 = (long *)(param_1 + 0x68);
  if (*plVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (lVar5 != 0) {
      plVar6 = (long *)*plVar3;
      plVar8 = plVar6 + 1;
      lVar10 = *plVar6;
      uVar9 = CONCAT17(-(-1 < lVar10),
                       CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
              0x8080808080808080;
      do {
        while (uVar9 == 0) {
          lVar10 = *plVar8;
          plVar6 = plVar6 + -0x30;
          plVar8 = plVar8 + 1;
          uVar9 = CONCAT17(-(-1 < lVar10),
                           CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar10
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar6[(long)-iVar2 * 6 + -6] != 0) {
          _free(plVar6[(long)-iVar2 * 6 + -5]);
        }
        if (plVar6[(long)-iVar2 * 6 + -3] != -0x8000000000000000 &&
            plVar6[(long)-iVar2 * 6 + -3] != 0) {
          _free(plVar6[(long)-iVar2 * 6 + -2]);
        }
        uVar9 = uVar9 - 1 & uVar9;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x31 != -0x39) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*plVar3 + lVar4 * -0x30 + -0x30);
      return;
    }
  }
  return;
}

