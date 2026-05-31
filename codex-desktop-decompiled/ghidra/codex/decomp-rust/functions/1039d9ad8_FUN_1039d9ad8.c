
void FUN_1039d9ad8(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_2 != 0) {
    plVar3 = param_1 + 1;
    lVar7 = *param_1;
    uVar4 = CONCAT17(-(-1 < lVar7),
                     CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar7 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
            0x8080808080808080;
    do {
      while (uVar4 == 0) {
        lVar7 = *plVar3;
        param_1 = param_1 + -200;
        plVar3 = plVar3 + 1;
        uVar4 = CONCAT17(-(-1 < lVar7),
                         CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                0x8080808080808080;
      }
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      lVar7 = param_1[(long)-iVar2 * 0x19 + -0x18];
      lVar5 = param_1[(long)-iVar2 * 0x19 + -0x17];
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0x28);
        do {
          if (puVar6[-5] != 0) {
            _free(puVar6[-4]);
          }
          if ((puVar6[-1] & 0x7fffffffffffffff) != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 7;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (param_1[(long)-iVar2 * 0x19 + -0x19] != 0) {
        _free(lVar7);
      }
      lVar7 = param_1[(long)-iVar2 * 0x19 + -0x15];
      lVar5 = param_1[(long)-iVar2 * 0x19 + -0x14];
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0x10);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 5;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (param_1[(long)-iVar2 * 0x19 + -0x16] != 0) {
        _free(lVar7);
      }
      uVar4 = uVar4 - 1 & uVar4;
      param_2 = param_2 + -1;
      FUN_1039cde80(param_1 + (long)-iVar2 * 0x19 + -0x13);
    } while (param_2 != 0);
  }
  return;
}

