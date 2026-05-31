
/* WARNING: Possible PIC construction at 0x000103daf4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daacb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dc1b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dac580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dc1b94) */
/* WARNING: Removing unreachable block (ram,0x000103daacb4) */
/* WARNING: Removing unreachable block (ram,0x000103dac584) */

void FUN_103da66bc(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 extraout_x1;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x19;
  ulong *unaff_x20;
  char *pcVar12;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong *puVar13;
  ulong *unaff_x23;
  long *plVar14;
  ulong *unaff_x24;
  ulong uVar15;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *unaff_x30;
  
  cVar3 = (char)param_1[0x6b];
  if (cVar3 == '\0') {
    lVar5 = *(long *)param_1[0x69];
    *(long *)param_1[0x69] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000103e319ec(param_1 + 0x69);
    }
  }
  else {
    if (cVar3 == '\x03') {
      if ((((char)param_1[0x7a] == '\x03') && ((char)param_1[0x79] == '\x03')) &&
         ((char)param_1[0x70] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x71);
        if (param_1[0x72] != 0) {
          (**(code **)(param_1[0x72] + 0x18))(param_1[0x73]);
        }
      }
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      if (param_1[0x6c] != 0x17) {
        FUN_103d985c8(param_1 + 0x6c);
        param_2 = extraout_x1;
      }
      pcVar12 = (char *)param_1[0x6a];
      if (*pcVar12 == '\0') {
        *pcVar12 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar12,param_2,1000000000);
      }
      FUN_1060fa678(pcVar12,1,pcVar12);
    }
    lVar5 = *(long *)param_1[0x69];
    *(long *)param_1[0x69] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000103e319ec(param_1 + 0x69);
    }
    if ((*(byte *)((long)param_1 + 0x359) & 1) == 0) {
      return;
    }
  }
  lVar5 = 0;
  if (0x12 < *param_1) {
    lVar5 = *param_1 - 0x13;
  }
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      plVar7 = (long *)param_1[0xb];
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        *plVar7 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      uVar11 = param_1[1];
      lVar5 = uVar11 + 0x7ffffffffffffffa;
      if (uVar11 < 0x8000000000000006) {
        lVar5 = 2;
      }
      if (lVar5 < 2) {
        if (lVar5 == 0) {
          unaff_x20 = (ulong *)param_1[2];
          FUN_103dafb14(unaff_x20);
          goto code_r0x000108aa97c4;
        }
        if (lVar5 == 1) {
          unaff_x20 = (ulong *)param_1[3];
          uVar11 = param_1[4];
          if (uVar11 != 0) {
            puVar13 = unaff_x20 + 4;
            do {
              if (puVar13[-4] != 0) {
                _free(puVar13[-3]);
              }
              if (puVar13[-1] != 0x8000000000000000 && puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 6;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (param_1[2] == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
      }
      else {
        if (lVar5 == 2) {
          puVar13 = param_1 + 1;
          if (uVar11 == 0x8000000000000005) {
            return;
          }
          goto SUB_103daac44;
        }
        if (lVar5 == 3) {
          return;
        }
      }
      puVar13 = param_1 + 2;
SUB_103daac44:
      puVar6 = puVar13;
      *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined1 **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      uVar11 = *puVar6 ^ 0x8000000000000000;
      if (-1 < (long)*puVar6) {
        uVar11 = 5;
      }
      if (uVar11 < 3) {
        return;
      }
      if (uVar11 == 3) {
        if (puVar6[1] == 0) {
          return;
        }
        unaff_x20 = (ulong *)puVar6[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar11 != 4) {
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
        *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        uVar11 = puVar6[4];
        if (uVar11 == 0 || uVar11 * 9 == -0x11) {
          unaff_x20 = (ulong *)puVar6[1];
          unaff_x22 = (ulong *)puVar6[2];
          *(ulong **)((long)register0x00000008 + -0x68) = puVar6;
        }
        else {
          _free(puVar6[3] + uVar11 * -8 + -8);
          unaff_x20 = (ulong *)puVar6[1];
          unaff_x22 = (ulong *)puVar6[2];
          *(ulong **)((long)register0x00000008 + -0x68) = puVar6;
        }
        if (unaff_x22 != (ulong *)0x0) {
          unaff_x26 = (ulong *)0x0;
          unaff_x28 = 5;
          unaff_x25 = unaff_x22;
          unaff_x21 = unaff_x20;
          do {
            unaff_x21 = unaff_x21 + 0xd;
            unaff_x19 = unaff_x20 + (long)unaff_x26 * 0xd;
            if (*unaff_x19 != 0) {
              _free(unaff_x19[1]);
            }
            uVar11 = unaff_x19[3] ^ 0x8000000000000000;
            if (-1 < (long)unaff_x19[3]) {
              uVar11 = 5;
            }
            if (2 < uVar11) {
              if (uVar11 == 3) {
                if (unaff_x19[4] != 0) {
                  unaff_x23 = (ulong *)unaff_x19[5];
LAB_103dc1bb8:
                  _free(unaff_x23);
                }
              }
              else if (uVar11 == 4) {
                unaff_x23 = (ulong *)unaff_x19[5];
                unaff_x27 = unaff_x19[6];
                if (unaff_x27 != 0) goto code_r0x000103dc1b8c;
                if (unaff_x19[4] != 0) goto LAB_103dc1bb8;
              }
              else {
                func_0x000103dc1800();
              }
            }
            unaff_x26 = (ulong *)((long)unaff_x26 + 1);
            unaff_x25 = (ulong *)((long)unaff_x25 - 1);
            if (unaff_x26 == unaff_x22) break;
          } while( true );
        }
        if (**(long **)((long)register0x00000008 + -0x68) == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      unaff_x20 = (ulong *)puVar6[2];
      unaff_x23 = (ulong *)puVar6[3];
      if (unaff_x23 != (ulong *)0x0) {
        unaff_x22 = unaff_x20 + 9;
        unaff_x30 = (undefined1 *)0x103daacb4;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        puVar13 = unaff_x20;
        unaff_x19 = puVar6;
        goto SUB_103daac44;
      }
      if (puVar6[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (lVar5 != 2) {
      plVar7 = (long *)param_1[0xe];
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        *plVar7 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0xe);
        }
      }
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        uVar11 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar11 = param_1[4];
      }
      if (uVar11 == 0x8000000000000005) {
        return;
      }
      puVar13 = param_1 + 4;
      goto SUB_103daac44;
    }
    unaff_x20 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar10 = *unaff_x20;
    uVar11 = uVar10 ^ 0x8000000000000000;
    if (-1 < (long)uVar10) {
      uVar11 = 4;
    }
    if ((long)uVar11 < 2) {
      if (uVar11 == 0) {
        plVar7 = (long *)param_1[5];
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          *plVar7 = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        if (param_1[2] != 0x8000000000000000 && param_1[2] != 0) {
          _free(param_1[3]);
        }
        unaff_x20 = (ulong *)param_1[7];
      }
      else {
        if (uVar11 != 1) goto LAB_103daf4d4;
        plVar7 = (long *)param_1[7];
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          *plVar7 = lVar5 + -1;
          LORelease();
          if (lVar5 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        if (param_1[4] != 0x8000000000000000 && param_1[4] != 0) {
          _free(param_1[5]);
        }
        unaff_x20 = (ulong *)param_1[10];
      }
    }
    else if ((uVar11 == 2) || (uVar11 == 3)) {
      unaff_x20 = (ulong *)param_1[2];
    }
    else {
LAB_103daf4d4:
      if (uVar10 != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] != 0x8000000000000005) {
        unaff_x30 = &LAB_103daf500;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        puVar13 = param_1 + 4;
        goto SUB_103daac44;
      }
      unaff_x20 = (ulong *)param_1[0xd];
    }
    goto SUB_103da4abc;
  }
  plVar7 = (long *)param_1[0x67];
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    *plVar7 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x67);
    }
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  lVar5 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar5 = 1;
  }
  lVar9 = 8;
  switch(lVar5) {
  case 0:
    break;
  case 1:
    FUN_103db1dfc(param_1);
    lVar9 = 0x330;
    break;
  case 2:
    func_0x000103db0bc0(param_1 + 1);
    lVar9 = 0xe8;
    break;
  case 3:
    if (param_1[1] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    lVar9 = 0x58;
    break;
  case 4:
    func_0x000103db14f0(param_1 + 1);
    lVar9 = 0xb0;
    break;
  case 5:
    if (param_1[1] == 0x8000000000000001) goto LAB_103dac64c;
    if (param_1[1] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
code_r0x000103dac5f0:
    if ((param_1[10] & 0x7fffffffffffffff) == 0) goto LAB_103dac64c;
    lVar5 = 0x58;
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
    goto code_r0x000103dac638;
  case 9:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    goto code_r0x000103dac638;
  case 10:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
    goto code_r0x000103dac638;
  case 0xb:
    func_0x000103db0ac4(param_1 + 1);
    lVar9 = 0xf8;
    break;
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
    goto code_r0x000103dac638;
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
    goto code_r0x000103dac638;
  case 0x10:
    if (param_1[4] != 0x8000000000000000) {
      func_0x000103dc1800();
    }
code_r0x000103dac638:
    if (param_1[1] != 0) {
      lVar5 = 0x10;
code_r0x000103dac644:
      _free(*(undefined8 *)((long)param_1 + lVar5));
    }
LAB_103dac64c:
    lVar9 = 0x68;
    break;
  default:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0x8000000000000005) {
      unaff_x30 = (undefined1 *)0x103dac584;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      puVar13 = param_1 + 4;
      unaff_x19 = param_1;
      goto SUB_103daac44;
    }
    goto LAB_103dac64c;
  }
  unaff_x20 = *(ulong **)((long)param_1 + lVar9);
SUB_103da4abc:
  if (unaff_x20 == (ulong *)0x0) {
    return;
  }
  uVar11 = unaff_x20[1];
  if (uVar11 != 0) {
    uVar10 = unaff_x20[3];
    if (uVar10 != 0) {
      plVar7 = (long *)*unaff_x20;
      plVar14 = plVar7 + 1;
      lVar5 = *plVar7;
      uVar15 = CONCAT17(-(-1 < lVar5),
                        CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar5 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
               0x8080808080808080;
      do {
        while (uVar15 == 0) {
          lVar5 = *plVar14;
          plVar7 = plVar7 + -0x20;
          plVar14 = plVar14 + 1;
          uVar15 = CONCAT17(-(-1 < lVar5),
                            CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18))
                                                                ,CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                       >> 0x10)),
                                                                          CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                   0x8080808080808080;
        }
        uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) & 0x78;
        uVar1 = *(undefined8 *)((long)plVar7 + uVar4 * -4 + -0x10);
        puVar2 = *(undefined8 **)((long)plVar7 + uVar4 * -4 + -8);
        pcVar8 = (code *)*puVar2;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar1);
        }
        if (puVar2[1] != 0) {
          _free(uVar1);
        }
        uVar15 = uVar15 - 1 & uVar15;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (uVar11 * 0x21 != -0x29) {
      _free(*unaff_x20 + uVar11 * -0x20 + -0x20);
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(unaff_x20);
  return;
code_r0x000103dc1b8c:
  unaff_x24 = unaff_x23 + 9;
  unaff_x30 = (undefined1 *)0x103dc1b94;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  puVar13 = unaff_x23;
  goto SUB_103daac44;
}

