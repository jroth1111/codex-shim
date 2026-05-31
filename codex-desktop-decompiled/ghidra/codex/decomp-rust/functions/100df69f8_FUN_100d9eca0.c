
/* WARNING: Possible PIC construction at 0x000100defabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e10f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df82d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3e00: Changing call to branch */

void FUN_100d9eca0(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong *unaff_x19;
  long *plVar5;
  ulong *unaff_x20;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x21;
  undefined8 *puVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x23;
  long *plVar11;
  undefined8 unaff_x24;
  long *plVar12;
  undefined1 *unaff_x29;
  undefined1 *unaff_x30;
  long lVar13;
  
  if (*param_1 == 0x15) {
    if (param_1[1] == 0) {
      return;
    }
    if (param_1[1] == 1) {
      plVar5 = (long *)param_1[2];
      if (*plVar5 == 1) {
        uVar7 = plVar5[1];
        if ((uVar7 & 3) != 1) goto code_r0x000108aa97c4;
        puVar6 = (undefined8 *)(uVar7 - 1);
        uVar9 = *puVar6;
        puVar8 = *(undefined8 **)(uVar7 + 7);
        pcVar3 = (code *)*puVar8;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar9);
        }
        if (puVar8[1] != 0) {
          _free(uVar9);
        }
      }
      else {
        if ((*plVar5 != 0) || (plVar5[2] == 0)) goto code_r0x000108aa97c4;
        puVar6 = (undefined8 *)plVar5[1];
      }
    }
    else {
      uVar7 = param_1[2];
      if ((uVar7 & 3) != 1) {
        return;
      }
      plVar5 = (long *)(uVar7 - 1);
      puVar6 = (undefined8 *)*plVar5;
      puVar8 = *(undefined8 **)(uVar7 + 7);
      pcVar3 = (code *)*puVar8;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(puVar6);
      }
      if (puVar8[1] == 0) goto code_r0x000108aa97c4;
    }
    _free(puVar6);
    goto code_r0x000108aa97c4;
  }
  lVar4 = *param_1 - 0x11;
  if (*param_1 < 0x11) {
    lVar4 = 1;
  }
  if (lVar4 == 0) {
    plVar5 = (long *)param_1[0x31];
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      *plVar5 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x31);
      }
    }
    puVar2 = param_1 + 1;
    uVar7 = *puVar2 ^ 0x8000000000000000;
    if (-1 < (long)*puVar2) {
      uVar7 = 1;
    }
    lVar4 = 8;
    if ((long)uVar7 < 2) {
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          FUN_100e0d658(puVar2);
          lVar4 = 0x178;
        }
        else {
LAB_100deb300:
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          if (param_1[5] != 0x8000000000000005) {
            FUN_100de6690();
          }
          lVar4 = 0x68;
        }
      }
    }
    else if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_100deb300;
      FUN_100e1a6c0(param_1 + 2);
      lVar4 = 200;
    }
    plVar5 = *(long **)((long)puVar2 + lVar4);
    goto LAB_100dccb50;
  }
  if (lVar4 != 1) {
    if (lVar4 == 2) {
      uVar7 = param_1[1];
      lVar4 = uVar7 + 0x7fffffffffffffff;
      if (uVar7 < 0x8000000000000001) {
        lVar4 = 2;
      }
      if (lVar4 < 4) {
        if (lVar4 < 2) {
          if (lVar4 == 0) {
            plVar5 = (long *)param_1[5];
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              *plVar5 = lVar4 + -1;
              LORelease();
              if (lVar4 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (param_1[2] != 0x8000000000000000 && param_1[2] != 0) {
              _free(param_1[3]);
            }
            plVar5 = (long *)param_1[7];
          }
          else {
            if (lVar4 != 1) goto LAB_100df6aa4;
            plVar5 = (long *)param_1[7];
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              *plVar5 = lVar4 + -1;
              LORelease();
              if (lVar4 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) {
              _free(param_1[5]);
            }
            plVar5 = (long *)param_1[10];
          }
        }
        else {
          if (lVar4 == 2) {
            if ((uVar7 != 0x8000000000000000) && (uVar7 != 0)) {
              _free(param_1[2]);
            }
            FUN_100de6690(param_1 + 4);
            goto LAB_100df6b0c;
          }
          if (lVar4 != 3) goto LAB_100df6aa4;
LAB_100df6a7c:
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          plVar5 = (long *)param_1[5];
        }
      }
      else {
        if (lVar4 < 6) {
          if ((lVar4 == 4) || (lVar4 == 5)) {
LAB_100df6ad4:
            plVar5 = (long *)param_1[2];
            goto LAB_100dccb50;
          }
        }
        else {
          if (lVar4 == 6) goto LAB_100df6ad4;
          if (lVar4 == 7) goto LAB_100df6a7c;
        }
LAB_100df6aa4:
        if (param_1[2] != 0) {
          _free(param_1[3]);
        }
        if (param_1[5] != 0x8000000000000005) {
          FUN_100de6690();
        }
LAB_100df6b0c:
        plVar5 = (long *)param_1[0xe];
      }
LAB_100dccb50:
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = plVar5[1];
      if (lVar4 != 0) {
        lVar10 = plVar5[3];
        if (lVar10 != 0) {
          plVar11 = (long *)*plVar5;
          plVar12 = plVar11 + 1;
          lVar13 = *plVar11;
          uVar7 = CONCAT17(-(-1 < lVar13),
                           CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar13 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar13
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar13 >> 8)),-(-1 < (char)lVar13)))))))) &
                  0x8080808080808080;
          do {
            while (uVar7 == 0) {
              lVar13 = *plVar12;
              plVar11 = plVar11 + -0x20;
              plVar12 = plVar12 + 1;
              uVar7 = CONCAT17(-(-1 < lVar13),
                               CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar13 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar13 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar13 >> 8)),
                                                           -(-1 < (char)lVar13)))))))) &
                      0x8080808080808080;
            }
            uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
            uVar9 = *(undefined8 *)((long)plVar11 + uVar1 * -4 + -0x10);
            puVar6 = *(undefined8 **)((long)plVar11 + uVar1 * -4 + -8);
            pcVar3 = (code *)*puVar6;
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(uVar9);
            }
            if (puVar6[1] != 0) {
              _free(uVar9);
            }
            uVar7 = uVar7 - 1 & uVar7;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar4 * 0x21 != -0x29) {
          _free(*plVar5 + lVar4 * -0x20 + -0x20);
        }
      }
      goto code_r0x000108aa97c4;
    }
    plVar5 = (long *)param_1[0xe];
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      *plVar5 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
      uVar7 = param_1[4];
    }
    else {
      _free(param_1[2]);
      uVar7 = param_1[4];
    }
    if (uVar7 == 0x8000000000000005) {
      return;
    }
    puVar2 = param_1 + 4;
    goto code_r0x000100de6690;
  }
  plVar5 = (long *)param_1[0x60];
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    *plVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x60);
    }
  }
  lVar4 = 0;
  if (*param_1 != 0) {
    lVar4 = *param_1 - 1;
  }
  switch(lVar4) {
  case 0:
    if (param_1[0x5a] != 0x8000000000000000 && param_1[0x5a] != 0) {
      _free(param_1[0x5b]);
    }
    func_0x000100e1f934(param_1);
    func_0x000100ded1dc(param_1 + 0x48);
    if (param_1[0x5d] == 0x8000000000000000 || param_1[0x5d] == 0) {
      return;
    }
    plVar5 = (long *)param_1[0x5e];
    goto code_r0x000108aa97c4;
  case 1:
    plVar5 = (long *)param_1[2];
    uVar7 = param_1[3];
    if (uVar7 != 0) {
      plVar11 = plVar5 + 1;
      do {
        if (plVar11[-1] != 0) {
          _free(*plVar11);
        }
        plVar11 = plVar11 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    goto code_r0x000100de8714;
  case 2:
    if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) {
      _free(param_1[5]);
    }
    plVar5 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar11 = plVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x000100e14aac(plVar11);
      plVar11 = plVar11 + 0x24;
    }
    goto code_r0x000100de8714;
  case 3:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar2 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar11 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        func_0x000100ded3bc(plVar11);
        plVar11 = plVar11 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar7 = param_1[8];
    if (uVar7 != 0 && uVar7 * 9 != -0x11) {
      _free(param_1[7] + uVar7 * -8 + -8);
    }
    unaff_x30 = &LAB_100df3e04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar2;
    break;
  case 4:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar2 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      func_0x000100cb0400(plVar5,param_1[3]);
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar7 = param_1[8];
    if (uVar7 != 0 && uVar7 * 9 != -0x11) {
      _free(param_1[7] + uVar7 * -8 + -8);
    }
    unaff_x30 = &LAB_100df82d4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x20 = puVar2;
    break;
  case 5:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar2 == 0x8000000000000000) {
      if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
        plVar11 = (long *)param_1[2];
        uVar7 = param_1[3];
        plVar5 = plVar11;
      }
      else {
        _free(param_1[0xe]);
        plVar11 = (long *)param_1[2];
        uVar7 = param_1[3];
        plVar5 = plVar11;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        func_0x000100e17918(plVar11);
        if (-0x7fffffffffffffff < plVar11[0x12] && plVar11[0x12] != 0) {
          _free(plVar11[0x13]);
        }
        plVar11 = plVar11 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar7 = param_1[8];
    if (uVar7 != 0 && uVar7 * 9 != -0x11) {
      _free(param_1[7] + uVar7 * -8 + -8);
    }
    unaff_x30 = &LAB_100e10f8c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar2;
    break;
  case 6:
    plVar5 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar11 = plVar5;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x000100e0dab4(plVar11);
      plVar11 = plVar11 + 0x13;
    }
code_r0x000100de8714:
    if (param_1[1] == 0) {
code_r0x000100de87dc:
      return;
    }
    goto code_r0x000108aa97c4;
  case 7:
    uVar7 = param_1[2];
    func_0x000100ca97fc(uVar7,param_1[3]);
    if (param_1[1] != 0) {
      _free(uVar7);
    }
    if (param_1[0xd] != 0x8000000000000005) {
      FUN_100de6690();
    }
    puVar2 = param_1 + 4;
    if (*puVar2 == 0x8000000000000000) {
      return;
    }
    uVar7 = param_1[8];
    if ((uVar7 != 0) && (uVar7 * 9 != -0x11)) {
      _free(param_1[7] + uVar7 * -8 + -8);
    }
    break;
  case 8:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar2 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar2 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar5 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar11 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de5590(plVar11);
        plVar11 = plVar11 + 0x1c;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar7 = param_1[8];
    if (uVar7 != 0 && uVar7 * 9 != -0x11) {
      _free(param_1[7] + uVar7 * -8 + -8);
    }
    unaff_x30 = &LAB_100defac0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar2;
    break;
  case 9:
    if (param_1[1] == 0x8000000000000005) {
      return;
    }
  default:
    puVar2 = param_1 + 1;
code_r0x000100de6690:
    uVar7 = *puVar2 ^ 0x8000000000000000;
    if (-1 < (long)*puVar2) {
      uVar7 = 5;
    }
    if (uVar7 < 3) {
      return;
    }
    if (uVar7 == 3) {
      if (puVar2[1] == 0) {
        return;
      }
      plVar5 = (long *)puVar2[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar7 == 4) {
      plVar5 = (long *)puVar2[2];
      lVar4 = puVar2[3] + 1;
      plVar11 = plVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690(plVar11);
        plVar11 = plVar11 + 9;
      }
      if (puVar2[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar7 = puVar2[4];
    if ((uVar7 != 0) && (uVar7 * 9 != -0x11)) {
      _free(puVar2[3] + uVar7 * -8 + -8);
    }
    break;
  case 10:
    goto code_r0x000100de87dc;
  case 0xb:
    goto code_r0x000100de8748;
  case 0xc:
    func_0x000100e2043c(param_1 + 3);
    if (param_1[6] == 0x8000000000000000 || param_1[6] == 0) {
      return;
    }
    plVar5 = (long *)param_1[7];
    goto code_r0x000108aa97c4;
  case 0xd:
    if (param_1[1] == 2) {
      return;
    }
    goto code_r0x000100de8748;
  case 0xe:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    FUN_100de6690(param_1 + 7);
    if (param_1[4] == 0x8000000000000000 || param_1[4] == 0) {
      return;
    }
    plVar5 = (long *)param_1[5];
    goto code_r0x000108aa97c4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined1 **)((long)register0x00000008 + -8) = unaff_x30;
  plVar5 = (long *)puVar2[1];
  lVar4 = puVar2[2] + 1;
  plVar11 = plVar5;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    if (*plVar11 != 0) {
      _free(plVar11[1]);
    }
    FUN_100de6690(plVar11 + 3);
    plVar11 = plVar11 + 0xd;
  }
  if (*puVar2 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar5);
  return;
code_r0x000100de8748:
  if (param_1[5] != 0) {
    _free(param_1[6]);
  }
  if (param_1[0xb] != 0x8000000000000000 && param_1[0xb] != 0) {
    _free(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    _free(param_1[9]);
  }
  if (param_1[0xe] == 0x8000000000000000) {
    return;
  }
  if (param_1[0xe] == 0) {
    return;
  }
  plVar5 = (long *)param_1[0xf];
  goto code_r0x000108aa97c4;
}

