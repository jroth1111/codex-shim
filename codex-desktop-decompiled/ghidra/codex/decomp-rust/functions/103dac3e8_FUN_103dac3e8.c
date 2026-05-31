
void FUN_103dac3e8(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  lVar7 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar7 = 1;
  }
  lVar6 = 8;
  switch(lVar7) {
  case 0:
    goto SUB_103da4abc;
  case 1:
    FUN_103db1dfc(param_1);
    lVar6 = 0x330;
    goto SUB_103da4abc;
  case 2:
    func_0x000103db0bc0(param_1 + 1);
    lVar6 = 0xe8;
    goto SUB_103da4abc;
  case 3:
    if (param_1[1] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    lVar6 = 0x58;
    goto SUB_103da4abc;
  case 4:
    func_0x000103db14f0(param_1 + 1);
    lVar6 = 0xb0;
    goto SUB_103da4abc;
  case 5:
    if (param_1[1] == 0x8000000000000001) goto LAB_103dac64c;
    if (param_1[1] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
code_r0x000103dac5f0:
    if ((param_1[10] & 0x7fffffffffffffff) == 0) goto LAB_103dac64c;
    lVar7 = 0x58;
    goto code_r0x000103dac644;
  case 6:
    if (param_1[1] != 0x8000000000000001) {
      if (param_1[1] != 0x8000000000000000) {
        func_0x000103dc1800();
      }
      goto code_r0x000103dac5f0;
    }
    goto LAB_103dac64c;
  case 7:
    if (param_1[1] != 0x8000000000000001) {
      if (param_1[1] != 0x8000000000000000) {
        func_0x000103dc1800();
      }
      goto code_r0x000103dac5f0;
    }
    goto LAB_103dac64c;
  case 8:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  case 9:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  case 10:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  case 0xb:
    func_0x000103db0ac4(param_1 + 1);
    lVar6 = 0xf8;
    goto SUB_103da4abc;
  case 0xc:
    if (param_1[1] != 0x8000000000000001) {
      if (param_1[1] != 0x8000000000000000) {
        func_0x000103dc1800();
      }
      goto code_r0x000103dac5f0;
    }
    goto LAB_103dac64c;
  case 0xd:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  case 0xe:
    if (param_1[1] != 0x8000000000000001) {
      if (param_1[1] != 0x8000000000000000) {
        func_0x000103dc1800();
      }
      goto code_r0x000103dac5f0;
    }
    goto LAB_103dac64c;
  case 0xf:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  case 0x10:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    break;
  default:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0x8000000000000005) {
      func_0x000103daac44();
    }
    goto LAB_103dac64c;
  }
  if (param_1[1] != 0) {
    lVar7 = 0x10;
code_r0x000103dac644:
    _free(*(undefined8 *)((long)param_1 + lVar7));
  }
LAB_103dac64c:
  lVar6 = 0x68;
SUB_103da4abc:
  plVar4 = *(long **)((long)param_1 + lVar6);
  if (plVar4 != (long *)0x0) {
    lVar7 = plVar4[1];
    if (lVar7 != 0) {
      lVar6 = plVar4[3];
      if (lVar6 != 0) {
        plVar8 = (long *)*plVar4;
        plVar9 = plVar8 + 1;
        lVar11 = *plVar8;
        uVar10 = CONCAT17(-(-1 < lVar11),
                          CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar11
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
                 0x8080808080808080;
        do {
          while (uVar10 == 0) {
            lVar11 = *plVar9;
            plVar8 = plVar8 + -0x20;
            plVar9 = plVar9 + 1;
            uVar10 = CONCAT17(-(-1 < lVar11),
                              CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar11 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar11 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar11 >> 8)),
                                                           -(-1 < (char)lVar11)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
          uVar1 = *(undefined8 *)((long)plVar8 + uVar3 * -4 + -0x10);
          puVar2 = *(undefined8 **)((long)plVar8 + uVar3 * -4 + -8);
          pcVar5 = (code *)*puVar2;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar1);
          }
          if (puVar2[1] != 0) {
            _free(uVar1);
          }
          uVar10 = uVar10 - 1 & uVar10;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar7 * 0x21 != -0x29) {
        _free(*plVar4 + lVar7 * -0x20 + -0x20);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar4);
    return;
  }
  return;
}

