
void FUN_100e48c8c(long param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 200) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xc1) == '\x03') {
      if (*(char *)(param_1 + 0xb0) == '\x03') {
        FUN_100e03d7c(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
      }
      lVar4 = **(long **)(param_1 + 0x80);
      **(long **)(param_1 + 0x80) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        _free(*(undefined8 *)(param_1 + 0x70));
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x69) == '\x04') {
      FUN_100cfddd4(param_1 + 0xf8);
    }
    else {
      if (*(char *)(param_1 + 0x69) != '\x03') goto LAB_100e48df8;
      FUN_100e03d7c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
    lVar4 = **(long **)(param_1 + 0x30);
    **(long **)(param_1 + 0x30) = lVar4 + -1;
    LORelease();
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_100cab938(param_1 + 0xd0);
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0xa0);
      if (lVar5 != 0) {
        plVar6 = *(long **)(param_1 + 0x88);
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
            plVar6 = plVar6 + -0x28;
            plVar8 = plVar8 + 1;
            uVar9 = CONCAT17(-(-1 < lVar10),
                             CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                    0x8080808080808080;
          }
          uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
          if (plVar6[(long)-iVar3 * 5 + -5] != 0) {
            _free(plVar6[(long)-iVar3 * 5 + -4]);
          }
          uVar9 = uVar9 - 1 & uVar9;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (lVar4 * 0x29 != -0x31) {
        _free(*(long *)(param_1 + 0x88) + lVar4 * -0x28 + -0x28);
      }
    }
    lVar4 = *(long *)(param_1 + 0x68);
    lVar5 = *(long *)(param_1 + 0x70);
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
    if (*(long *)(param_1 + 0x60) != 0) {
      _free(lVar4);
    }
LAB_100e48df8:
    lVar4 = **(long **)(param_1 + 0x30);
    **(long **)(param_1 + 0x30) = lVar4 + -1;
    LORelease();
  }
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x20));
  return;
}

