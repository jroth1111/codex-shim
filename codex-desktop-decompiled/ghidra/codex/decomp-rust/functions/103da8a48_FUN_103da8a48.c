
void FUN_103da8a48(ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong in_xzr;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  
  if (*param_1 != 2) {
    uVar6 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar6 = uVar6 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar6,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar6 = param_1[4], uVar6 != 0)) {
    uStack_80 = *(undefined8 *)(uVar6 + 0x10);
    uStack_78 = *(undefined8 *)(uVar6 + 0x18);
    puStack_68 = (ulong *)&DAT_103d8be04;
    puStack_70 = (undefined1 *)&uStack_80;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_70);
  }
  cVar2 = *(char *)((long)param_1 + 0x162);
  if (cVar2 == '\0') {
    func_0x000103d9c914(param_1 + 0x22);
    func_0x000103d9afd4(param_1 + 0x27);
    func_0x000103d96a34(param_1 + 0x28);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x29);
    lVar4 = *(long *)param_1[0x29];
    *(long *)param_1[0x29] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x29);
    }
    uVar6 = param_1[0xc];
    if (uVar6 != 0) {
      uVar8 = param_1[0xe];
      if (uVar8 != 0) {
        plVar5 = (long *)param_1[0xb];
        plVar10 = plVar5 + 1;
        lVar4 = *plVar5;
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
            plVar5 = plVar5 + -0x18;
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
          func_0x000103d9a600(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar6 * 0x19 != -0x21) {
        _free(param_1[0xb] + uVar6 * -0x18 + -0x18);
      }
    }
    uVar6 = param_1[0x12];
    if (uVar6 != 0) {
      uVar8 = param_1[0x14];
      if (uVar8 != 0) {
        plVar5 = (long *)param_1[0x11];
        plVar10 = plVar5 + 1;
        lVar4 = *plVar5;
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
            plVar5 = plVar5 + -0x18;
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
          func_0x000103d91338(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar6 * 0x19 != -0x21) {
        _free(param_1[0x11] + uVar6 * -0x18 + -0x18);
      }
    }
    lVar4 = *(long *)param_1[0x2a];
    *(long *)param_1[0x2a] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x2a);
    }
    plVar5 = (long *)param_1[0x2b];
    LOAcquire();
    lVar4 = plVar5[0x3e];
    plVar5[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar5[0x11];
      plVar5[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e337f0(plVar5 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6910) = *(ulong *)(lVar4 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar5 + 0x22);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar4 = plVar5[0x20];
        plVar5[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar5[0x21]);
        }
      }
    }
    lVar4 = *plVar5;
    *plVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(param_1 + 0x2b);
    }
  }
  else {
    if (cVar2 == '\x03') {
      puStack_70 = (undefined1 *)param_1[0x3c];
      puStack_68 = param_1 + 0x43;
      puStack_60 = param_1 + 0x3d;
      puStack_58 = param_1 + 0x3e;
      FUN_1060fb5d4(&puStack_70);
      if (param_1[0x40] != 0) {
        (**(code **)(param_1[0x40] + 0x18))(param_1[0x41]);
      }
    }
    else {
      if (cVar2 != '\x04') goto LAB_103da8fd4;
      if (*(char *)((long)param_1 + 0x1a1) == '\x03') {
        plVar5 = (long *)param_1[0x32];
        if (*plVar5 == 0xcc) {
          *plVar5 = 0x84;
        }
        else {
          (**(code **)(plVar5[2] + 0x20))();
        }
        *(undefined1 *)(param_1 + 0x34) = 0;
      }
      if ((1 < param_1[0x2d]) && (uVar6 = param_1[0x2f], uVar6 != 0)) {
        puVar9 = (undefined8 *)param_1[0x30];
        pcVar7 = (code *)*puVar9;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar6);
        }
        if (puVar9[1] != 0) {
          _free(uVar6);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x161) = 0;
    func_0x000103d953c0(param_1 + 9);
    func_0x000103d9b75c(param_1 + 5);
    func_0x000103d9c914(param_1 + 0x1d);
    func_0x000103d9afd4(param_1 + 0x27);
    func_0x000103d96a34(param_1 + 0x28);
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1 + 0x29);
    lVar4 = *(long *)param_1[0x29];
    *(long *)param_1[0x29] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x29);
    }
    uVar6 = param_1[0xc];
    if (uVar6 != 0) {
      uVar8 = param_1[0xe];
      if (uVar8 != 0) {
        plVar5 = (long *)param_1[0xb];
        plVar10 = plVar5 + 1;
        lVar4 = *plVar5;
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
            plVar5 = plVar5 + -0x18;
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
          func_0x000103d9a600(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar6 * 0x19 != -0x21) {
        _free(param_1[0xb] + uVar6 * -0x18 + -0x18);
      }
    }
    uVar6 = param_1[0x12];
    if (uVar6 != 0) {
      uVar8 = param_1[0x14];
      if (uVar8 != 0) {
        plVar5 = (long *)param_1[0x11];
        plVar10 = plVar5 + 1;
        lVar4 = *plVar5;
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
            plVar5 = plVar5 + -0x18;
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
          func_0x000103d91338(plVar5 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >>
                                                   3) * 3 + -3);
          uVar11 = uVar11 - 1 & uVar11;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar6 * 0x19 != -0x21) {
        _free(param_1[0x11] + uVar6 * -0x18 + -0x18);
      }
    }
    lVar4 = *(long *)param_1[0x2a];
    *(long *)param_1[0x2a] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x2a);
    }
    plVar5 = (long *)param_1[0x2b];
    LOAcquire();
    lVar4 = plVar5[0x3e];
    plVar5[0x3e] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = plVar5[0x11];
      plVar5[0x11] = lVar4 + 1;
      lVar4 = func_0x000103e337f0(plVar5 + 0x10,lVar4);
      *(ulong *)(lVar4 + 0x6910) = *(ulong *)(lVar4 + 0x6910) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(plVar5 + 0x22);
      LOAcquire();
      uVar6 = *puVar1;
      *puVar1 = uVar6 | 2;
      LORelease();
      if (uVar6 == 0) {
        lVar4 = plVar5[0x20];
        plVar5[0x20] = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(plVar5[0x21]);
        }
      }
    }
    lVar4 = *plVar5;
    *plVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17habd5cadfed2cfecbE(param_1 + 0x2b);
    }
  }
  func_0x000103dbd204(param_1 + 0x17);
LAB_103da8fd4:
  if (*param_1 != 2) {
    uVar6 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar6 = uVar6 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar6,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar6 = param_1[4], uVar6 != 0)) {
    uStack_80 = *(undefined8 *)(uVar6 + 0x10);
    uStack_78 = *(undefined8 *)(uVar6 + 0x18);
    puStack_68 = (ulong *)&DAT_103d8be04;
    puStack_70 = (undefined1 *)&uStack_80;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_70);
  }
  FUN_103da7b74(param_1);
  return;
}

