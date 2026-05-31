
void FUN_100cdb7dc(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((char)param_1[0x7c] == '\0') {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return;
    }
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      plVar5 = (long *)*param_1;
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
          plVar5 = plVar5 + -0x58;
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
        if (plVar5[(long)-iVar2 * 0xb + -0xb] != 0) {
          _free(plVar5[(long)-iVar2 * 0xb + -10]);
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar4 = lVar4 + -1;
        FUN_100e16ec0(plVar5 + (long)-iVar2 * 0xb + -8);
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x59 == -0x61) {
      return;
    }
    lVar3 = *param_1 + lVar3 * -0x58 + -0x58;
    goto code_r0x000108aa97c4;
  }
  if ((char)param_1[0x7c] != '\x03') {
    return;
  }
  if (*(char *)((long)param_1 + 0x1f9) == '\x04') {
    func_0x000100ca357c(param_1 + 0x40);
    FUN_100e061d8(param_1 + 0x5c);
LAB_100cdb854:
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  else if (*(char *)((long)param_1 + 0x1f9) == '\x03') {
    if ((char)param_1[0x43] == '\x03') {
      FUN_100dca0dc(param_1 + 0x41);
    }
    goto LAB_100cdb854;
  }
  FUN_100e16ec0(param_1 + 0x16);
  lVar3 = param_1[0xd];
  if (lVar3 != 0) {
    lVar4 = param_1[9];
    uVar7 = param_1[10];
    plVar5 = (long *)param_1[0xb];
    do {
      plVar6 = plVar5;
      if (uVar7 == 0) {
        do {
          plVar5 = plVar6 + 1;
          lVar8 = *plVar6;
          lVar4 = lVar4 + -0x2c0;
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
          plVar6 = plVar5;
        } while (uVar7 == 0);
        param_1[0xb] = (long)plVar5;
        param_1[9] = lVar4;
      }
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      param_1[10] = uVar7;
      lVar8 = lVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x58;
      lVar3 = lVar3 + -1;
      param_1[0xd] = lVar3;
      if (*(long *)(lVar8 + -0x58) != 0) {
        _free(*(undefined8 *)(lVar8 + -0x50));
      }
      FUN_100e16ec0(lVar8 + -0x40);
    } while (lVar3 != 0);
  }
  if (param_1[6] == 0 || param_1[7] == 0) {
    return;
  }
  lVar3 = param_1[8];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

