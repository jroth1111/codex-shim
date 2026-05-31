
void FUN_100d78008(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if ((char)param_1[0x1de] == '\0') {
    lVar3 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    lVar3 = *(long *)param_1[4];
    *(long *)param_1[4] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
    plVar4 = (long *)param_1[8];
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      *plVar4 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    param_1 = param_1 + 5;
    lVar3 = *(long *)*param_1;
    *(long *)*param_1 = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
code_r0x000103ef3c1c:
    lVar3 = *param_1;
    lVar6 = *(long *)(lVar3 + 0x40);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar3 + 0x50);
      if (lVar7 != 0) {
        plVar4 = *(long **)(lVar3 + 0x38);
        plVar8 = plVar4 + 1;
        lVar10 = *plVar4;
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
            plVar4 = plVar4 + -0x20;
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
          plVar5 = *(long **)((long)plVar4 +
                             (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x20);
          if (plVar5 != (long *)0x0) {
            lVar10 = *plVar5;
            *plVar5 = lVar10 + -1;
            LORelease();
            if (lVar10 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
            }
          }
          uVar9 = uVar9 - 1 & uVar9;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar6 * 0x21 != -0x29) {
        _free(*(long *)(lVar3 + 0x38) + lVar6 * -0x20 + -0x20);
      }
    }
    if (lVar3 != -1) {
      lVar6 = *(long *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar3);
        return;
      }
    }
    return;
  }
  if ((char)param_1[0x1de] != '\x03') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x41);
  if (4 < bVar1) {
    if (bVar1 == 5) {
      FUN_100d5ee48(param_1 + 0x42);
    }
    else {
      if (bVar1 != 6) {
        if (bVar1 != 7) {
          return;
        }
        FUN_100cd4b0c(param_1 + 0x42);
        goto LAB_100cd5658;
      }
      if ((((char)param_1[0x50] == '\x03') && ((char)param_1[0x4f] == '\x03')) &&
         ((char)param_1[0x46] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x47);
        if (param_1[0x48] != 0) {
          (**(code **)(param_1[0x48] + 0x18))(param_1[0x49]);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x20e) = 0;
    FUN_100df5738(param_1 + 0x2e);
    if ((param_1[0x1b] == -0x7fffffffffffffe0) && (param_1[0x1c] != 0)) {
      _free(param_1[0x1d]);
    }
    goto LAB_100cd5658;
  }
  if (bVar1 == 0) {
    lVar3 = *(long *)param_1[0xd];
    *(long *)param_1[0xd] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    lVar3 = *(long *)param_1[0xe];
    *(long *)param_1[0xe] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
    plVar4 = (long *)param_1[0x12];
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      *plVar4 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    param_1 = param_1 + 0xf;
    lVar3 = *(long *)*param_1;
    *(long *)*param_1 = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    goto code_r0x000103ef3c1c;
  }
  if (bVar1 == 3) {
    if ((((char)param_1[0x53] == '\x03') && ((char)param_1[0x52] == '\x03')) &&
       ((char)param_1[0x49] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x4a);
      if (param_1[0x4b] != 0) {
        (**(code **)(param_1[0x4b] + 0x18))(param_1[0x4c]);
      }
    }
    goto LAB_100cd5658;
  }
  if (bVar1 != 4) {
    return;
  }
  if ((char)param_1[0x1dd] == '\0') {
    lVar3 = 0x1c0;
  }
  else {
    if ((char)param_1[0x1dd] != '\x03') goto LAB_100cd5658;
    if ((char)param_1[0x1dc] == '\x03') {
      FUN_100e7ab5c(param_1 + 0xbe);
      goto LAB_100cd5658;
    }
    if ((char)param_1[0x1dc] != '\0') goto LAB_100cd5658;
    lVar3 = 0x3b0;
  }
  FUN_100def028((long)(param_1 + 10) + lVar3);
LAB_100cd5658:
  if ((*(byte *)((long)param_1 + 0x209) & 1) != 0) {
    lVar3 = *(long *)param_1[0x1a];
    *(long *)param_1[0x1a] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E();
    }
  }
  *(undefined1 *)((long)param_1 + 0x209) = 0;
  if (((*(byte *)((long)param_1 + 0x20a) & 1) != 0) && (param_1[0x42] != 0)) {
    _free(param_1[0x43]);
  }
  *(undefined1 *)((long)param_1 + 0x20a) = 0;
  if (((*(byte *)((long)param_1 + 0x20b) & 1) != 0) &&
     (plVar4 = (long *)param_1[0x18], plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    *plVar4 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  *(undefined1 *)((long)param_1 + 0x20b) = 0;
  if ((*(byte *)((long)param_1 + 0x20c) & 1) != 0) {
    lVar3 = *(long *)param_1[0x17];
    *(long *)param_1[0x17] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
  }
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  if ((*(byte *)((long)param_1 + 0x20d) & 1) != 0) {
    lVar3 = *(long *)param_1[0x16];
    *(long *)param_1[0x16] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
  }
  *(undefined1 *)((long)param_1 + 0x20d) = 0;
  return;
}

