
void FUN_100ce6c3c(long param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  cVar1 = *(char *)(param_1 + 0x71);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x19f0) != '\x03') {
      return;
    }
    if ((*(char *)(param_1 + 0x19e8) == '\x03') && (*(char *)(param_1 + 0x19e2) == '\x03')) {
      FUN_100cb9114(param_1 + 0xd38);
      if (*(long *)(param_1 + 0xd20) != 0) {
        _free(*(undefined8 *)(param_1 + 0xd28));
      }
      *(undefined1 *)(param_1 + 0x19e1) = 0;
    }
    FUN_100e1955c(param_1 + 0xa08);
    FUN_100e05b5c(param_1 + 0x88);
    if (*(long *)(param_1 + 0x9e8) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x9f0);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar4);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_100d01ae0(param_1 + 0x78);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_100cf2b8c(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x22a8);
    uVar5 = *(long *)(param_1 + 0x22b8) - lVar4;
    if (uVar5 != 0) {
      uVar5 = uVar5 / 0x270;
      do {
        FUN_100e3b46c(lVar4);
        lVar4 = lVar4 + 0x270;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (*(long *)(param_1 + 0x22b0) != 0) {
      _free(*(undefined8 *)(param_1 + 0x22a0));
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      plVar7 = *(long **)(param_1 + 0x10);
      plVar8 = plVar7 + 1;
      lVar9 = *plVar7;
      uVar5 = CONCAT17(-(-1 < lVar9),
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
        while (uVar5 == 0) {
          lVar9 = *plVar8;
          plVar7 = plVar7 + -0x18;
          plVar8 = plVar8 + 1;
          uVar5 = CONCAT17(-(-1 < lVar9),
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
        uVar2 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        if (plVar7[(long)-iVar3 * 3 + -3] != 0) {
          _free(plVar7[(long)-iVar3 * 3 + -2]);
        }
        uVar5 = uVar5 - 1 & uVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 * 0x19 != -0x21) {
      lVar4 = *(long *)(param_1 + 0x10) + lVar4 * -0x18 + -0x18;
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

