
void FUN_100c9d288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  bVar2 = *(byte *)(param_1 + 0x1a2);
  if (bVar2 < 6) {
    if (bVar2 != 3) {
      if (bVar2 == 4) {
        if ((*(char *)(param_1 + 0x200) == '\x03') && (*(char *)(param_1 + 0x1f8) == '\x03')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 0x1b8);
          if (*(long *)(param_1 + 0x1c0) != 0) {
            (**(code **)(*(long *)(param_1 + 0x1c0) + 0x18))(*(undefined8 *)(param_1 + 0x1c8));
          }
        }
      }
      else {
        if (bVar2 != 5) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x1a8);
        puVar9 = *(undefined8 **)(param_1 + 0x1b0);
        pcVar4 = (code *)*puVar9;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar1);
          param_2 = extraout_x1;
        }
        if (puVar9[1] != 0) {
          _free(uVar1);
          param_2 = extraout_x1_00;
        }
        pcVar5 = *(char **)(param_1 + 0x40);
        if (*pcVar5 == '\0') {
          *pcVar5 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar5,param_2,1000000000);
        }
        FUN_1060fa678(pcVar5,1,pcVar5);
      }
      goto LAB_100c9d664;
    }
    if ((*(char *)(param_1 + 0xe88) == '\x03') && (*(char *)(param_1 + 0xe82) == '\x03')) {
      FUN_100cb9114(param_1 + 0x1d8);
      if (*(long *)(param_1 + 0x1c0) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1c8));
      }
      *(undefined1 *)(param_1 + 0xe81) = 0;
    }
    FUN_100e05b5c(param_1 + 0xe90);
    if (*(long *)(param_1 + 0x17f0) == 0) goto LAB_100c9d6f4;
    lVar7 = *(long *)(param_1 + 0x17f8);
  }
  else {
    if (bVar2 == 6) {
      FUN_100cfc79c(param_1 + 0x1a8);
    }
    else if (bVar2 == 7) {
      FUN_100ca2228(param_1 + 0x1a8);
    }
    else {
      if (bVar2 != 8) {
        return;
      }
      FUN_100d1ddbc(param_1 + 0x1d8);
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      uVar6 = *(long *)(param_1 + 0x1ae0) - *(long *)(param_1 + 0x1ad0);
      if (uVar6 != 0) {
        uVar6 = uVar6 / 0x18;
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x1ad0) + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (*(long *)(param_1 + 0x1ad8) != 0) {
        _free(*(undefined8 *)(param_1 + 0x1ac8));
      }
      *(undefined1 *)(param_1 + 0x1a1) = 0;
      lVar8 = *(long *)(param_1 + 0x1b0);
      lVar7 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != 0) {
        puVar9 = (undefined8 *)(lVar8 + 0x20);
        do {
          if (puVar9[-4] != 0) {
            _free(puVar9[-3]);
          }
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          if (puVar9[2] != 0) {
            _free(puVar9[3]);
          }
          puVar9 = puVar9 + 9;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(long *)(param_1 + 0x1a8) != 0) {
        _free(lVar8);
      }
    }
    lVar7 = *(long *)(param_1 + 0x178);
    lVar8 = lVar7;
    for (lVar12 = *(long *)(param_1 + 0x180); lVar12 != 0; lVar12 = lVar12 + -1) {
      FUN_100e0c08c(lVar8);
      lVar8 = lVar8 + 0x148;
    }
    if (*(long *)(param_1 + 0x170) != 0) {
      _free(lVar7);
    }
    lVar8 = *(long *)(param_1 + 0x88);
    if (lVar8 != 0) {
      lVar7 = *(long *)(param_1 + 0x98);
      if (lVar7 != 0) {
        plVar10 = *(long **)(param_1 + 0x80);
        plVar11 = plVar10 + 1;
        lVar12 = *plVar10;
        uVar6 = CONCAT17(-(-1 < lVar12),
                         CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                0x8080808080808080;
        do {
          while (uVar6 == 0) {
            lVar12 = *plVar11;
            plVar10 = plVar10 + -0x20;
            plVar11 = plVar11 + 1;
            uVar6 = CONCAT17(-(-1 < lVar12),
                             CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                    0x8080808080808080;
          }
          uVar3 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
          if (*(long *)((long)plVar10 + uVar3 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar10 + uVar3 * -4 + -0x18));
          }
          uVar6 = uVar6 - 1 & uVar6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar8 * 0x21 != -0x29) {
        _free(*(long *)(param_1 + 0x80) + lVar8 * -0x20 + -0x20);
      }
    }
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      lVar7 = *(long *)(param_1 + 0x68);
      if (lVar7 != 0) {
        plVar10 = *(long **)(param_1 + 0x50);
        plVar11 = plVar10 + 1;
        lVar12 = *plVar10;
        uVar6 = CONCAT17(-(-1 < lVar12),
                         CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar12 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                0x8080808080808080;
        do {
          while (uVar6 == 0) {
            lVar12 = *plVar11;
            plVar10 = plVar10 + -0x20;
            plVar11 = plVar11 + 1;
            uVar6 = CONCAT17(-(-1 < lVar12),
                             CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                    0x8080808080808080;
          }
          uVar3 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
          if (*(long *)((long)plVar10 + uVar3 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar10 + uVar3 * -4 + -0x18));
          }
          uVar6 = uVar6 - 1 & uVar6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar8 * 0x21 != -0x29) {
        _free(*(long *)(param_1 + 0x50) + lVar8 * -0x20 + -0x20);
      }
    }
    lVar7 = *(long *)(param_1 + 0x158);
    lVar8 = lVar7;
    for (lVar12 = *(long *)(param_1 + 0x160); lVar12 != 0; lVar12 = lVar12 + -1) {
      FUN_100e3b46c(lVar8);
      lVar8 = lVar8 + 0x270;
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      _free(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x140);
    lVar8 = *(long *)(param_1 + 0x148) + 1;
    lVar12 = lVar7;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100dea5d4(lVar12);
      lVar12 = lVar12 + 0x1a8;
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      _free(lVar7);
    }
LAB_100c9d664:
    lVar7 = *(long *)(param_1 + 0x128);
    lVar8 = lVar7;
    for (lVar12 = *(long *)(param_1 + 0x130); lVar12 != 0; lVar12 = lVar12 + -1) {
      FUN_100e0649c(lVar8);
      lVar8 = lVar8 + 0x80;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      _free(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = lVar7;
    for (lVar12 = *(long *)(param_1 + 0x20); lVar12 != 0; lVar12 = lVar12 + -1) {
      FUN_100cc1c58(lVar8);
      lVar8 = lVar8 + 0x140;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _free(lVar7);
    }
    lVar7 = *(long *)(param_1 + 0x30);
    lVar8 = lVar7;
    for (lVar12 = *(long *)(param_1 + 0x38); lVar12 != 0; lVar12 = lVar12 + -1) {
      FUN_100e0649c(lVar8);
      lVar8 = lVar8 + 0x80;
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_100c9d6f4;
  }
  _free(lVar7);
LAB_100c9d6f4:
  if (*(long *)(param_1 + 0xd8) != 0) {
    _free(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    _free(*(undefined8 *)(param_1 + 0xf8));
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_1 + 0x110));
  return;
}

