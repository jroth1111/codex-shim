
void FUN_100d50bc0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(char *)((long)param_1 + 0xe1) == '\0') {
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      lVar4 = param_1[9];
      if (lVar4 != 0) {
        plVar5 = (long *)param_1[6];
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
            plVar5 = plVar5 + -0x18;
            plVar6 = plVar6 + 1;
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
          }
          uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
          if (plVar5[(long)-iVar2 * 3 + -3] != 0) {
            _free(plVar5[(long)-iVar2 * 3 + -2]);
          }
          uVar7 = uVar7 - 1 & uVar7;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar3 * 0x19 != -0x21) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(param_1[6] + lVar3 * -0x18 + -0x18);
        return;
      }
    }
  }
  else if (*(char *)((long)param_1 + 0xe1) == '\x03') {
    if ((((char)param_1[0x1a] == '\x03') && ((char)param_1[0x19] == '\x03')) &&
       ((char)param_1[0x10] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x11);
      if (param_1[0x12] != 0) {
        (**(code **)(param_1[0x12] + 0x18))(param_1[0x13]);
      }
    }
    lVar3 = param_1[1];
    if (lVar3 != 0) {
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
            plVar5 = plVar5 + -0x18;
            plVar6 = plVar6 + 1;
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
          }
          uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
          if (plVar5[(long)-iVar2 * 3 + -3] != 0) {
            _free(plVar5[(long)-iVar2 * 3 + -2]);
          }
          uVar7 = uVar7 - 1 & uVar7;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar3 * 0x19 != -0x21) {
        _free(*param_1 + lVar3 * -0x18 + -0x18);
      }
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}

