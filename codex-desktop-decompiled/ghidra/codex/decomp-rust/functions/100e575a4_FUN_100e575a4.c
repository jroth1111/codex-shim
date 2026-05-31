
void FUN_100e575a4(ulong *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar4 = *param_1;
  lVar5 = uVar4 - 2;
  if (uVar4 < 2) {
    lVar5 = 1;
  }
  if (lVar5 == 1) {
    if ((uVar4 != 0) && (param_1[1] != 0)) {
      (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
    }
    cVar1 = (char)param_1[0x28];
    if (((cVar1 != '\x04') && (func_0x000100e6cd20(param_1 + 0x20), cVar1 != '\x03')) &&
       (cVar1 != '\x02')) {
      (**(code **)(param_1[0x24] + 0x20))(param_1 + 0x27,param_1[0x25],param_1[0x26]);
    }
    func_0x000100d90440(param_1 + 0x18);
    FUN_100e635a0();
    uVar4 = param_1[0xe];
    if (uVar4 != 3 && uVar4 != 2) {
      if ((uVar4 != 0) && (param_1[0xf] != 0)) {
        (**(code **)(param_1[0xf] + 0x20))(param_1 + 0x12,param_1[0x10],param_1[0x11]);
      }
                    /* WARNING: Could not recover jumptable at 0x000100d1be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x13] + 0x20))(param_1 + 0x16,param_1[0x14],param_1[0x15]);
      return;
    }
    return;
  }
  if (lVar5 != 0) {
    return;
  }
  FUN_100e646f0(param_1[0x16],param_1[0x18] - param_1[0x16] >> 6);
  if (param_1[0x17] != 0) {
    _free(param_1[0x15]);
  }
  FUN_100def764(param_1 + 1);
  plVar6 = (long *)param_1[0xd];
  if ((plVar6 != (long *)0x0) && (uVar4 = param_1[0xe], uVar4 != 0)) {
    uVar7 = param_1[0x10];
    if (uVar7 != 0) {
      plVar8 = plVar6 + 1;
      lVar5 = *plVar6;
      uVar9 = CONCAT17(-(-1 < lVar5),
                       CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
              0x8080808080808080;
      plVar3 = plVar6;
      do {
        while (uVar9 == 0) {
          lVar5 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar3 = plVar3 + -0x40;
          uVar9 = CONCAT17(-(-1 < lVar5),
                           CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                  0x8080808080808080;
        }
        uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        if (plVar3[-8 - uVar2] != 0) {
          (**(code **)(plVar3[-8 - uVar2] + 0x20))
                    (plVar3 + (-5 - uVar2),plVar3[-7 - uVar2],plVar3[-6 - uVar2]);
        }
        uVar9 = uVar9 - 1 & uVar9;
        uVar7 = uVar7 - 1;
        func_0x000100e6cd20(plVar3 + (-4 - uVar2));
      } while (uVar7 != 0);
    }
    if (uVar4 * 0x41 != -0x49) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar6 + uVar4 * -8 + -8);
      return;
    }
  }
  return;
}

