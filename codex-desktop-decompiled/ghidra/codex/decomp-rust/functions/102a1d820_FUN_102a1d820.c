
void FUN_102a1d820(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (*param_1 == 0) {
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    lVar3 = param_1[0xe];
    lVar5 = param_1[0xf];
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[0xd] != 0) {
      _free(lVar3);
    }
    if (param_1[1] != 0) {
      FUN_102a052a4();
    }
    plVar6 = (long *)param_1[0x11];
    plVar4 = plVar6;
    for (lVar3 = param_1[0x12]; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (*plVar4 == -0x8000000000000000) {
        if (plVar4[1] != 0) {
          lVar5 = 0x10;
LAB_102a1d90c:
          _free(*(undefined8 *)((long)plVar4 + lVar5));
        }
      }
      else {
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        if ((plVar4[3] & 0x7fffffffffffffffU) != 0) {
          lVar5 = 0x20;
          goto LAB_102a1d90c;
        }
      }
      plVar4 = plVar4 + 6;
    }
    if (param_1[0x10] != 0) {
      _free(plVar6);
    }
    if ((param_1[7] != -0x8000000000000000) && (param_1[7] != 0)) {
      lVar3 = param_1[8];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  else {
    if (param_1[0x10] != 0) {
      _free(param_1[0x11]);
    }
    if (param_1[0xd] == -0x8000000000000000 || param_1[0xd] == 0) {
      lVar3 = param_1[1];
    }
    else {
      _free(param_1[0xe]);
      lVar3 = param_1[1];
    }
    if (lVar3 != 0) {
      FUN_102a052a4();
    }
    plVar4 = param_1 + 7;
    if (*plVar4 != 0) {
      lVar3 = param_1[8];
      if (lVar3 != 0) {
        lVar5 = param_1[10];
        if (lVar5 != 0) {
          plVar6 = (long *)*plVar4;
          plVar8 = plVar6 + 1;
          lVar10 = *plVar6;
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
          do {
            while (uVar9 == 0) {
              lVar10 = *plVar8;
              plVar6 = plVar6 + -0x30;
              plVar8 = plVar8 + 1;
              uVar9 = CONCAT17(-(-1 < lVar10),
                               CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar10 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                      0x8080808080808080;
            }
            uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
            if (plVar6[(long)-iVar2 * 6 + -6] != 0) {
              _free(plVar6[(long)-iVar2 * 6 + -5]);
            }
            if (plVar6[(long)-iVar2 * 6 + -3] != 0) {
              _free(plVar6[(long)-iVar2 * 6 + -2]);
            }
            uVar9 = uVar9 - 1 & uVar9;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar3 * 0x31 != -0x39) {
          lVar3 = *plVar4 + lVar3 * -0x30 + -0x30;
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
  }
  return;
}

