
void FUN_100d5bcd0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  if (*(char *)(param_1 + 0x9c48) == '\0') {
    plVar4 = *(long **)(param_1 + 0x2578);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      *plVar4 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x2578);
      }
    }
    if (*(long *)(param_1 + 0x2548) != 0) {
      _free(*(undefined8 *)(param_1 + 0x2550));
    }
    FUN_100de93d0(param_1);
    lVar3 = **(long **)(param_1 + 0x2560);
    **(long **)(param_1 + 0x2560) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(param_1 + 0x2560);
    }
    lVar3 = **(long **)(param_1 + 0x2568);
    **(long **)(param_1 + 0x2568) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x2568);
    }
    lVar3 = **(long **)(param_1 + 0x2570);
    **(long **)(param_1 + 0x2570) = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar4 = (long *)(param_1 + 0x2570);
code_r0x000103ef3c1c:
    lVar3 = *plVar4;
    lVar7 = *(long *)(lVar3 + 0x40);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar3 + 0x50);
      if (lVar8 != 0) {
        plVar4 = *(long **)(lVar3 + 0x38);
        plVar9 = plVar4 + 1;
        lVar11 = *plVar4;
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
            plVar4 = plVar4 + -0x20;
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
          uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          plVar5 = *(long **)((long)plVar4 +
                             (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x20);
          if (plVar5 != (long *)0x0) {
            lVar11 = *plVar5;
            *plVar5 = lVar11 + -1;
            LORelease();
            if (lVar11 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
            }
          }
          uVar10 = uVar10 - 1 & uVar10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (lVar7 * 0x21 != -0x29) {
        _free(*(long *)(lVar3 + 0x38) + lVar7 * -0x20 + -0x20);
      }
    }
    if (lVar3 != -1) {
      lVar7 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar3);
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x9c48) != '\x03') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x76e0);
  if (bVar1 < 6) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        plVar4 = *(long **)(param_1 + 0x4b00);
        if (plVar4 != (long *)0x0) {
          lVar3 = *plVar4;
          *plVar4 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x4b00);
          }
        }
        if (*(long *)(param_1 + 0x4ad0) != 0) {
          _free(*(undefined8 *)(param_1 + 0x4ad8));
        }
        FUN_100de93d0(param_1 + 0x2588);
        lVar3 = **(long **)(param_1 + 0x4ae8);
        **(long **)(param_1 + 0x4ae8) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(param_1 + 0x4ae8);
        }
        lVar3 = **(long **)(param_1 + 0x4af0);
        **(long **)(param_1 + 0x4af0) = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x4af0);
        }
        lVar3 = **(long **)(param_1 + 0x4af8);
        **(long **)(param_1 + 0x4af8) = lVar3 + -1;
        LORelease();
        if (lVar3 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        plVar4 = (long *)(param_1 + 0x4af8);
        goto code_r0x000103ef3c1c;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(char *)(param_1 + 40000) == '\x03') {
        uVar6 = *(undefined8 *)(param_1 + 0x9c38);
        FUN_100cd9170(uVar6);
        _free(uVar6);
        bVar1 = *(byte *)(param_1 + 0x76e2);
        goto joined_r0x000100cc173c;
      }
      if (*(char *)(param_1 + 40000) == '\0') {
        FUN_100de93d0(param_1 + 0x76e8);
      }
LAB_100cc1738:
      bVar1 = *(byte *)(param_1 + 0x76e2);
      goto joined_r0x000100cc173c;
    }
    if (bVar1 == 4) {
      FUN_100d5ee48(param_1 + 0x7780);
      *(undefined1 *)(param_1 + 0x76e7) = 0;
      FUN_100df5738(param_1 + 0x76e8);
      goto LAB_100cc1738;
    }
    if (bVar1 != 5) {
      return;
    }
    FUN_100d1867c(param_1 + 0x76e8);
  }
  else {
    if (bVar1 < 8) {
      if (bVar1 != 6) {
        if (bVar1 != 7) {
          return;
        }
        if (*(char *)(param_1 + 0x7fd0) == '\x03') {
          FUN_100e6ff0c(param_1 + 0x7920);
        }
        else if (*(char *)(param_1 + 0x7fd0) == '\0') {
          if (*(long *)(param_1 + 0x76e8) != 0) {
            _free(*(undefined8 *)(param_1 + 0x76f0));
          }
          FUN_100def028(param_1 + 0x7730);
          lVar3 = *(long *)(param_1 + 0x7700);
          if (lVar3 != -0x7fffffffffffffff) {
            if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
              _free(*(undefined8 *)(param_1 + 0x7708));
            }
            if ((*(long *)(param_1 + 0x7718) != -0x8000000000000000) &&
               (*(long *)(param_1 + 0x7718) != 0)) {
              _free(*(undefined8 *)(param_1 + 0x7720));
            }
          }
        }
        goto LAB_100cc17f0;
      }
      if (((*(char *)(param_1 + 0x7758) == '\x03') && (*(char *)(param_1 + 0x7750) == '\x03')) &&
         (*(char *)(param_1 + 0x7708) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x7710);
        if (*(long *)(param_1 + 0x7718) != 0) {
          (**(code **)(*(long *)(param_1 + 0x7718) + 0x18))(*(undefined8 *)(param_1 + 0x7720));
        }
      }
    }
    else {
      if (bVar1 == 8) {
        FUN_100d5ee48(param_1 + 0x76e8);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 != 10) {
            return;
          }
          FUN_100cd4b0c(param_1 + 0x76e8);
          goto LAB_100cc17f0;
        }
        if (((*(char *)(param_1 + 0x7758) == '\x03') && (*(char *)(param_1 + 0x7750) == '\x03')) &&
           (*(char *)(param_1 + 0x7708) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x7710);
          if (*(long *)(param_1 + 0x7718) != 0) {
            (**(code **)(*(long *)(param_1 + 0x7718) + 0x18))(*(undefined8 *)(param_1 + 0x7720));
          }
        }
      }
      *(undefined1 *)(param_1 + 0x76e5) = 0;
      FUN_100df5738(param_1 + 0x7648);
LAB_100cc17f0:
      *(undefined1 *)(param_1 + 0x76e6) = 0;
    }
    if (*(long *)(param_1 + 0x7598) != 0) {
      _free(*(undefined8 *)(param_1 + 0x75a0));
    }
  }
  if (*(long *)(param_1 + 0x73a8) != 0) {
    _free(*(undefined8 *)(param_1 + 0x73b0));
  }
  func_0x000100dfc74c(param_1 + 0x73c0);
  FUN_100e26e4c(param_1 + 0x70b0);
  if ((*(byte *)(param_1 + 0x76e1) & 1) != 0) {
    lVar3 = **(long **)(param_1 + 0x70a8);
    **(long **)(param_1 + 0x70a8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(param_1 + 0x70a8);
    }
  }
  *(undefined1 *)(param_1 + 0x76e1) = 0;
  bVar1 = *(byte *)(param_1 + 0x76e2);
joined_r0x000100cc173c:
  if ((bVar1 & 1) != 0) {
    lVar3 = **(long **)(param_1 + 0x7090);
    **(long **)(param_1 + 0x7090) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E(param_1 + 0x7090);
    }
  }
  *(undefined1 *)(param_1 + 0x76e2) = 0;
  lVar3 = **(long **)(param_1 + 0x7088);
  **(long **)(param_1 + 0x7088) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x7088);
  }
  if ((*(byte *)(param_1 + 0x76e3) & 1) != 0) {
    lVar3 = **(long **)(param_1 + 0x7080);
    **(long **)(param_1 + 0x7080) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(param_1 + 0x7080);
    }
  }
  *(undefined1 *)(param_1 + 0x76e3) = 0;
  FUN_100de93d0(param_1 + 0x4b38);
  if (*(long *)(param_1 + 0x4b20) != 0) {
    _free(*(undefined8 *)(param_1 + 0x4b28));
  }
  if (((*(byte *)(param_1 + 0x76e4) & 1) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x4b10), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    *plVar4 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x4b10);
    }
  }
  *(undefined1 *)(param_1 + 0x76e4) = 0;
  return;
}

