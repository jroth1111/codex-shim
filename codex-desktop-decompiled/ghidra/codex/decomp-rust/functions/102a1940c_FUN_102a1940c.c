
void FUN_102a1940c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  func_0x000102a1d820();
  if (*(long *)(param_1 + 0x98) != -0x8000000000000000 && *(long *)(param_1 + 0x98) != 0) {
    _free(*(undefined8 *)(param_1 + 0xa0));
  }
  uVar1 = *(ulong *)(param_1 + 0x128);
  if (uVar1 != 0x8000000000000007 && uVar1 != 0x8000000000000006) {
    uVar2 = uVar1 ^ 0x8000000000000000;
    if (-1 < (long)uVar1) {
      uVar2 = 1;
    }
    if (uVar2 == 1) {
      if (uVar1 != 0) {
        _free(*(undefined8 *)(param_1 + 0x130));
      }
      if (*(long *)(param_1 + 0x140) == 0) goto LAB_102a19464;
      lVar4 = 0x20;
    }
    else {
      if (((uVar2 != 3) && (uVar2 != 4)) || (*(long *)(param_1 + 0x130) == 0)) goto LAB_102a19464;
      lVar4 = 0x10;
    }
    _free(*(undefined8 *)(param_1 + 0x128 + lVar4));
  }
LAB_102a19464:
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != -0x8000000000000000) {
    lVar3 = *(long *)(param_1 + 0xb8);
    lVar8 = *(long *)(param_1 + 0xc0);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar3);
    }
  }
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 != -0x8000000000000000) {
    lVar3 = *(long *)(param_1 + 0xd0);
    lVar8 = *(long *)(param_1 + 0xd8);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar3);
    }
  }
  lVar4 = *(long *)(param_1 + 0xe0);
  if (lVar4 != -0x8000000000000000) {
    lVar3 = *(long *)(param_1 + 0xe8);
    lVar8 = *(long *)(param_1 + 0xf0);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar3);
    }
  }
  if (*(long *)(param_1 + 0x110) < -0x7ffffffffffffffe || *(long *)(param_1 + 0x110) == 0) {
    lVar4 = *(long *)(param_1 + 0xf8);
  }
  else {
    _free(*(undefined8 *)(param_1 + 0x118));
    lVar4 = *(long *)(param_1 + 0xf8);
  }
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(*(undefined8 *)(param_1 + 0x100));
  }
  lVar4 = *(long *)(param_1 + 0x180);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 400);
    if (lVar3 != 0) {
      plVar5 = *(long **)(param_1 + 0x178);
      plVar7 = plVar5 + 1;
      lVar8 = *plVar5;
      uVar1 = CONCAT17(-(-1 < lVar8),
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
        while (uVar1 == 0) {
          lVar8 = *plVar7;
          plVar5 = plVar5 + -0x20;
          plVar7 = plVar7 + 1;
          uVar1 = CONCAT17(-(-1 < lVar8),
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
        uVar2 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        if (*(long *)((long)plVar5 + uVar2 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar5 + uVar2 * -4 + -0x18));
        }
        uVar1 = uVar1 - 1 & uVar1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 * 0x21 != -0x29) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(*(long *)(param_1 + 0x178) + lVar4 * -0x20 + -0x20);
      return;
    }
  }
  return;
}

