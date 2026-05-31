
/* WARNING: Possible PIC construction at 0x000100defabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e10f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df82d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100df3e00: Changing call to branch */

void FUN_100e1db10(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  long *plVar10;
  undefined8 unaff_x23;
  long *plVar11;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lVar12;
  
  uVar8 = *param_1;
  lVar4 = 0;
  if (0x14 < uVar8) {
    lVar4 = uVar8 - 0x15;
  }
  if (2 < lVar4) {
    if (lVar4 == 3) {
      if (param_1[1] == 0) {
        return;
      }
      plVar7 = (long *)param_1[2];
      goto code_r0x000108aa97c4;
    }
    if (lVar4 == 4) {
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        uVar8 = param_1[4];
        puVar2 = (undefined8 *)param_1[5];
        pcVar6 = (code *)*puVar2;
      }
      else {
        _free(param_1[2]);
        uVar8 = param_1[4];
        puVar2 = (undefined8 *)param_1[5];
        pcVar6 = (code *)*puVar2;
      }
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar8);
      }
      if (puVar2[1] != 0) {
        _free(uVar8);
      }
      if (param_1[8] == 0x8000000000000000) {
        return;
      }
      if (param_1[8] == 0) {
        return;
      }
      plVar7 = (long *)param_1[9];
      goto code_r0x000108aa97c4;
    }
    if (lVar4 != 5) {
      return;
    }
    if ((param_1[1] != 0x8000000000000000) && (param_1[1] != 0)) {
      _free(param_1[2]);
    }
    puVar5 = param_1 + 4;
    if (*puVar5 == 0x8000000000000005) {
      return;
    }
    goto code_r0x000100de6690;
  }
  if (lVar4 == 0) {
    if (uVar8 == 0x15) {
      return;
    }
    lVar4 = *param_1 - 0x11;
    if (*param_1 < 0x11) {
      lVar4 = 1;
    }
    if (lVar4 == 0) {
      plVar7 = (long *)param_1[0x31];
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        *plVar7 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x31);
        }
      }
      puVar5 = param_1 + 1;
      uVar8 = *puVar5 ^ 0x8000000000000000;
      if (-1 < (long)*puVar5) {
        uVar8 = 1;
      }
      lVar4 = 8;
      if ((long)uVar8 < 2) {
        if (uVar8 != 0) {
          if (uVar8 == 1) {
            FUN_100e0d658(puVar5);
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
      else if (uVar8 != 2) {
        if (uVar8 != 3) goto LAB_100deb300;
        FUN_100e1a6c0(param_1 + 2);
        lVar4 = 200;
      }
      plVar7 = *(long **)((long)puVar5 + lVar4);
      goto SUB_100dccb50;
    }
    if (lVar4 != 1) {
      if (lVar4 != 2) {
        plVar7 = (long *)param_1[0xe];
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          *plVar7 = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
          uVar8 = param_1[4];
        }
        else {
          _free(param_1[2]);
          uVar8 = param_1[4];
        }
        if (uVar8 == 0x8000000000000005) {
          return;
        }
        puVar5 = param_1 + 4;
        goto code_r0x000100de6690;
      }
      uVar8 = param_1[1];
      lVar4 = uVar8 + 0x7fffffffffffffff;
      if (uVar8 < 0x8000000000000001) {
        lVar4 = 2;
      }
      if (lVar4 < 4) {
        if (lVar4 < 2) {
          if (lVar4 == 0) {
            plVar7 = (long *)param_1[5];
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              *plVar7 = lVar4 + -1;
              LORelease();
              if (lVar4 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (param_1[2] != 0x8000000000000000 && param_1[2] != 0) {
              _free(param_1[3]);
            }
            plVar7 = (long *)param_1[7];
          }
          else {
            if (lVar4 != 1) goto LAB_100df6aa4;
            plVar7 = (long *)param_1[7];
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              *plVar7 = lVar4 + -1;
              LORelease();
              if (lVar4 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) {
              _free(param_1[5]);
            }
            plVar7 = (long *)param_1[10];
          }
        }
        else {
          if (lVar4 == 2) {
            if ((uVar8 != 0x8000000000000000) && (uVar8 != 0)) {
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
          plVar7 = (long *)param_1[5];
        }
      }
      else {
        if (lVar4 < 6) {
          if ((lVar4 == 4) || (lVar4 == 5)) {
LAB_100df6ad4:
            plVar7 = (long *)param_1[2];
            goto SUB_100dccb50;
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
        plVar7 = (long *)param_1[0xe];
      }
SUB_100dccb50:
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar4 = plVar7[1];
      if (lVar4 != 0) {
        lVar9 = plVar7[3];
        if (lVar9 != 0) {
          plVar10 = (long *)*plVar7;
          plVar11 = plVar10 + 1;
          lVar12 = *plVar10;
          uVar8 = CONCAT17(-(-1 < lVar12),
                           CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar12
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                  0x8080808080808080;
          do {
            while (uVar8 == 0) {
              lVar12 = *plVar11;
              plVar10 = plVar10 + -0x20;
              plVar11 = plVar11 + 1;
              uVar8 = CONCAT17(-(-1 < lVar12),
                               CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar12 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                      0x8080808080808080;
            }
            uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
            uVar1 = *(undefined8 *)((long)plVar10 + uVar3 * -4 + -0x10);
            puVar2 = *(undefined8 **)((long)plVar10 + uVar3 * -4 + -8);
            pcVar6 = (code *)*puVar2;
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(uVar1);
            }
            if (puVar2[1] != 0) {
              _free(uVar1);
            }
            uVar8 = uVar8 - 1 & uVar8;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (lVar4 * 0x21 != -0x29) {
          _free(*plVar7 + lVar4 * -0x20 + -0x20);
        }
      }
      goto code_r0x000108aa97c4;
    }
    plVar7 = (long *)param_1[0x60];
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      *plVar7 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x60);
      }
    }
  }
  else {
    if (lVar4 != 1) {
      if (lVar4 == 2) {
        plVar7 = (long *)param_1[1];
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          *plVar7 = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        plVar7 = (long *)param_1[3];
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          *plVar7 = lVar4 + -1;
          LORelease();
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            plVar7 = (long *)param_1[3];
            if (plVar7 != (long *)0xffffffffffffffff) {
              uVar8 = param_1[4];
              lVar4 = plVar7[1];
              plVar7[1] = lVar4 + -1;
              LORelease();
              if ((lVar4 == 1) && (DataMemoryBarrier(2,1), 7 < uVar8 + 0x17))
              goto code_r0x000108aa97c4;
            }
            return;
          }
        }
      }
      return;
    }
    param_1 = param_1 + 1;
    if (*param_1 == 0x11) {
      return;
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
    FUN_100e1f934(param_1);
    FUN_100ded1dc(param_1 + 0x48);
    if (param_1[0x5d] == 0x8000000000000000 || param_1[0x5d] == 0) {
      return;
    }
    plVar7 = (long *)param_1[0x5e];
    goto code_r0x000108aa97c4;
  case 1:
    plVar7 = (long *)param_1[2];
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      plVar10 = plVar7 + 1;
      do {
        if (plVar10[-1] != 0) {
          _free(*plVar10);
        }
        plVar10 = plVar10 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    goto code_r0x000100de8714;
  case 2:
    if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) {
      _free(param_1[5]);
    }
    plVar7 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar10 = plVar7;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e14aac(plVar10);
      plVar10 = plVar10 + 0x24;
    }
    goto code_r0x000100de8714;
  case 3:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar5 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar5 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar7 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar10 = plVar7;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100ded3bc(plVar10);
        plVar10 = plVar10 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar8 = param_1[8];
    if (uVar8 != 0 && uVar8 * 9 != -0x11) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = 0x100df3e04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar5;
    break;
  case 4:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar5 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar5 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar7 = (long *)param_1[2];
      FUN_100cb0400(plVar7,param_1[3]);
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar8 = param_1[8];
    if (uVar8 != 0 && uVar8 * 9 != -0x11) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = 0x100df82d4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x20 = puVar5;
    break;
  case 5:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar5 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar5 == 0x8000000000000000) {
      if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) {
        plVar10 = (long *)param_1[2];
        uVar8 = param_1[3];
        plVar7 = plVar10;
      }
      else {
        _free(param_1[0xe]);
        plVar10 = (long *)param_1[2];
        uVar8 = param_1[3];
        plVar7 = plVar10;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        FUN_100e17918(plVar10);
        if (-0x7fffffffffffffff < plVar10[0x12] && plVar10[0x12] != 0) {
          _free(plVar10[0x13]);
        }
        plVar10 = plVar10 + 0x18;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar8 = param_1[8];
    if (uVar8 != 0 && uVar8 * 9 != -0x11) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = 0x100e10f8c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar5;
    break;
  case 6:
    plVar7 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar10 = plVar7;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x000100e0dab4(plVar10);
      plVar10 = plVar10 + 0x13;
    }
code_r0x000100de8714:
    if (param_1[1] == 0) {
code_r0x000100de87dc:
      return;
    }
    goto code_r0x000108aa97c4;
  case 7:
    uVar8 = param_1[2];
    FUN_100ca97fc(uVar8,param_1[3]);
    if (param_1[1] != 0) {
      _free(uVar8);
    }
    if (param_1[0xd] != 0x8000000000000005) {
      FUN_100de6690();
    }
    puVar5 = param_1 + 4;
    if (*puVar5 == 0x8000000000000000) {
      return;
    }
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    break;
  case 8:
    unaff_x19 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar5 = param_1 + 4;
    unaff_x21 = 0x8000000000000000;
    if (*puVar5 == 0x8000000000000000) {
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) {
        _free(param_1[0xe]);
      }
      plVar7 = (long *)param_1[2];
      lVar4 = param_1[3] + 1;
      plVar10 = plVar7;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de5590(plVar10);
        plVar10 = plVar10 + 0x1c;
      }
      if (*unaff_x19 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar8 = param_1[8];
    if (uVar8 != 0 && uVar8 * 9 != -0x11) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = 0x100defac0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x20 = puVar5;
    break;
  case 9:
    if (param_1[1] == 0x8000000000000005) {
      return;
    }
  default:
    puVar5 = param_1 + 1;
code_r0x000100de6690:
    uVar8 = *puVar5 ^ 0x8000000000000000;
    if (-1 < (long)*puVar5) {
      uVar8 = 5;
    }
    if (uVar8 < 3) {
      return;
    }
    if (uVar8 == 3) {
      if (puVar5[1] == 0) {
        return;
      }
      plVar7 = (long *)puVar5[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar8 == 4) {
      plVar7 = (long *)puVar5[2];
      lVar4 = puVar5[3] + 1;
      plVar10 = plVar7;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690(plVar10);
        plVar10 = plVar10 + 9;
      }
      if (puVar5[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    uVar8 = puVar5[4];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(puVar5[3] + uVar8 * -8 + -8);
    }
    break;
  case 10:
    goto code_r0x000100de87dc;
  case 0xb:
    goto code_r0x000100de8748;
  case 0xc:
    FUN_100e2043c(param_1 + 3);
    if (param_1[6] == 0x8000000000000000 || param_1[6] == 0) {
      return;
    }
    plVar7 = (long *)param_1[7];
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
    plVar7 = (long *)param_1[5];
    goto code_r0x000108aa97c4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar7 = (long *)puVar5[1];
  lVar4 = puVar5[2] + 1;
  plVar10 = plVar7;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    if (*plVar10 != 0) {
      _free(plVar10[1]);
    }
    FUN_100de6690(plVar10 + 3);
    plVar10 = plVar10 + 0xd;
  }
  if (*puVar5 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
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
  plVar7 = (long *)param_1[0xf];
  goto code_r0x000108aa97c4;
}

