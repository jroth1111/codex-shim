
void FUN_103da23f0(ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong in_xzr;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if (*param_1 != 2) {
    uVar5 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar5,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = param_1[4], uVar5 != 0)) {
    uStack_70 = *(undefined8 *)(uVar5 + 0x10);
    uStack_68 = *(undefined8 *)(uVar5 + 0x18);
    puStack_58 = &DAT_103d8be04;
    puStack_60 = (undefined1 *)&uStack_70;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_60);
  }
  cVar2 = (char)param_1[0x4a];
  if (cVar2 == '\0') {
    func_0x000103dbd7a0(param_1 + 5);
    func_0x000103d9afd4(param_1 + 0x19);
    func_0x000103d96a34(param_1 + 0x1a);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x1b);
    lVar4 = *(long *)param_1[0x1b];
    *(long *)param_1[0x1b] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x1b);
    }
    uVar5 = param_1[0x1d];
    if (uVar5 != 0) {
      uVar7 = param_1[0x1f];
      if (uVar7 != 0) {
        plVar9 = (long *)param_1[0x1c];
        plVar10 = plVar9 + 1;
        lVar4 = *plVar9;
        uVar11 = CONCAT17(-(-1 < lVar4),
                          CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar4 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar4 = *plVar10;
            plVar9 = plVar9 + -0x18;
            plVar10 = plVar10 + 1;
            uVar11 = CONCAT17(-(-1 < lVar4),
                              CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          func_0x000103d9a600(plVar9 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 * 0x19 != -0x21) {
        _free(param_1[0x1c] + uVar5 * -0x18 + -0x18);
      }
    }
    uVar5 = param_1[0x23];
    if (uVar5 != 0) {
      uVar7 = param_1[0x25];
      if (uVar7 != 0) {
        plVar9 = (long *)param_1[0x22];
        plVar10 = plVar9 + 1;
        lVar4 = *plVar9;
        uVar11 = CONCAT17(-(-1 < lVar4),
                          CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar4 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar4 = *plVar10;
            plVar9 = plVar9 + -0x18;
            plVar10 = plVar10 + 1;
            uVar11 = CONCAT17(-(-1 < lVar4),
                              CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          func_0x000103d91338(plVar9 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 * 0x19 != -0x21) {
        _free(param_1[0x22] + uVar5 * -0x18 + -0x18);
      }
    }
    lVar4 = *(long *)param_1[0x28];
    *(long *)param_1[0x28] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x28);
    }
    plVar9 = (long *)param_1[0x29];
    LOAcquire();
    lVar4 = plVar9[0x3e];
    plVar9[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar9[0x11];
      plVar9[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e337f0(plVar9 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6910) = *(ulong *)(lVar4 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar9[0x21]);
        }
      }
    }
    lVar4 = *plVar9;
    *plVar9 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(param_1 + 0x29);
    }
  }
  else {
    if (cVar2 == '\x03') {
      func_0x000103dbe63c(param_1 + 0x4d);
    }
    else {
      if (cVar2 != '\x04') goto LAB_103da2924;
      func_0x000103d9c2bc(param_1 + 0x4b);
      if ((1 < param_1[0x68]) && (uVar5 = param_1[0x6a], uVar5 != 0)) {
        puVar8 = (undefined8 *)param_1[0x6b];
        pcVar6 = (code *)*puVar8;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar5);
        }
        if (puVar8[1] != 0) {
          _free(uVar5);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x252) = 0;
    func_0x000103d953c0(param_1 + 0x48);
    func_0x000103d9b75c(param_1 + 0x44);
    func_0x000103dbd7a0(param_1 + 0x30);
    func_0x000103d9afd4(param_1 + 0x19);
    func_0x000103d96a34(param_1 + 0x1a);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x1b);
    lVar4 = *(long *)param_1[0x1b];
    *(long *)param_1[0x1b] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x1b);
    }
    uVar5 = param_1[0x1d];
    if (uVar5 != 0) {
      uVar7 = param_1[0x1f];
      if (uVar7 != 0) {
        plVar9 = (long *)param_1[0x1c];
        plVar10 = plVar9 + 1;
        lVar4 = *plVar9;
        uVar11 = CONCAT17(-(-1 < lVar4),
                          CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar4 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar4 = *plVar10;
            plVar9 = plVar9 + -0x18;
            plVar10 = plVar10 + 1;
            uVar11 = CONCAT17(-(-1 < lVar4),
                              CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          func_0x000103d9a600(plVar9 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 * 0x19 != -0x21) {
        _free(param_1[0x1c] + uVar5 * -0x18 + -0x18);
      }
    }
    uVar5 = param_1[0x23];
    if (uVar5 != 0) {
      uVar7 = param_1[0x25];
      if (uVar7 != 0) {
        plVar9 = (long *)param_1[0x22];
        plVar10 = plVar9 + 1;
        lVar4 = *plVar9;
        uVar11 = CONCAT17(-(-1 < lVar4),
                          CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar4 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                 0x8080808080808080;
        do {
          while (uVar11 == 0) {
            lVar4 = *plVar10;
            plVar9 = plVar9 + -0x18;
            plVar10 = plVar10 + 1;
            uVar11 = CONCAT17(-(-1 < lVar4),
                              CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                     0x8080808080808080;
          }
          uVar3 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          func_0x000103d91338(plVar9 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar5 * 0x19 != -0x21) {
        _free(param_1[0x22] + uVar5 * -0x18 + -0x18);
      }
    }
    lVar4 = *(long *)param_1[0x28];
    *(long *)param_1[0x28] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x28);
    }
    plVar9 = (long *)param_1[0x29];
    LOAcquire();
    lVar4 = plVar9[0x3e];
    plVar9[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar9[0x11];
      plVar9[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e337f0(plVar9 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6910) = *(ulong *)(lVar4 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar9 + 0x22);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = plVar9[0x20];
        plVar9[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar9[0x21]);
        }
      }
    }
    lVar4 = *plVar9;
    *plVar9 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(param_1 + 0x29);
    }
  }
  func_0x000103dbd204(param_1 + 0x2a);
LAB_103da2924:
  if (*param_1 != 2) {
    uVar5 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar5,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = param_1[4], uVar5 != 0)) {
    uStack_70 = *(undefined8 *)(uVar5 + 0x10);
    uStack_68 = *(undefined8 *)(uVar5 + 0x18);
    puStack_58 = &DAT_103d8be04;
    puStack_60 = (undefined1 *)&uStack_70;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_60);
  }
  func_0x000103da7b74(param_1);
  return;
}

