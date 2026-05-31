
void FUN_100d8a7d8(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0xc10) == '\0') {
    func_0x000100e25c50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xc10) != '\x03') {
      return;
    }
    FUN_100d547a8(param_1 + 0x390);
    uVar3 = *(ulong *)(param_1 + 0x288);
    if (uVar3 != 0x800000000000000e) {
      lVar4 = uVar3 + 0x7ffffffffffffffa;
      if (uVar3 < 0x8000000000000006) {
        lVar4 = 6;
      }
      if (lVar4 == 6) {
        FUN_100e0fca4(param_1 + 0x288);
      }
      else if ((lVar4 == 4) && (*(long *)(param_1 + 0x290) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x298));
      }
    }
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    _free(*(undefined8 *)(param_1 + 0x108));
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    _free(*(undefined8 *)(param_1 + 0x120));
  }
  lVar5 = *(long *)(param_1 + 0x138);
  lVar4 = *(long *)(param_1 + 0x140) + 1;
  lVar9 = lVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e02a24(lVar9);
    lVar9 = lVar9 + 0xc0;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    _free(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x150);
  lVar4 = *(long *)(param_1 + 0x158) + 1;
  lVar9 = lVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100de6690(lVar9);
    lVar9 = lVar9 + 0x48;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    _free(lVar5);
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    _free(*(undefined8 *)(param_1 + 0x168));
  }
  lVar4 = *(long *)(param_1 + 0x180);
  lVar5 = *(long *)(param_1 + 0x188);
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
  if (*(long *)(param_1 + 0x178) != 0) {
    _free(lVar4);
  }
  if (*(long *)(param_1 + 400) == -0x8000000000000000 || *(long *)(param_1 + 400) == 0) {
    lVar4 = *(long *)(param_1 + 0x1a8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x198));
    lVar4 = *(long *)(param_1 + 0x1a8);
  }
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1b0));
  }
  lVar4 = *(long *)(param_1 + 0x1c0);
  if (((lVar4 != -0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) &&
     (FUN_100de6690(param_1 + 0x1d8), lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x1c8));
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    lVar4 = *(long *)(param_1 + 0x238);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x248);
      if (lVar5 != 0) {
        plVar6 = *(long **)(param_1 + 0x230);
        plVar8 = plVar6 + 1;
        lVar9 = *plVar6;
        uVar3 = CONCAT17(-(-1 < lVar9),
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
          while (uVar3 == 0) {
            lVar9 = *plVar8;
            plVar6 = plVar6 + -0x30;
            plVar8 = plVar8 + 1;
            uVar3 = CONCAT17(-(-1 < lVar9),
                             CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)
                                                                  ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar9 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar9 >> 8)),
                                                           -(-1 < (char)lVar9)))))))) &
                    0x8080808080808080;
          }
          uVar1 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
          if (plVar6[(long)-iVar2 * 6 + -6] != 0) {
            _free(plVar6[(long)-iVar2 * 6 + -5]);
          }
          if (plVar6[(long)-iVar2 * 6 + -3] != 0) {
            _free(plVar6[(long)-iVar2 * 6 + -2]);
          }
          uVar3 = uVar3 - 1 & uVar3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar4 * 0x31 != -0x39) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(*(long *)(param_1 + 0x230) + lVar4 * -0x30 + -0x30);
        return;
      }
    }
    return;
  }
  return;
}

