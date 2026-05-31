
/* WARNING: Possible PIC construction at 0x000100deabd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dead3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deac28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deaeac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deac9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deaf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deafa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deaddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deaf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100deae64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dead84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100deade0) */
/* WARNING: Removing unreachable block (ram,0x000100deace8) */
/* WARNING: Removing unreachable block (ram,0x000100deaf5c) */
/* WARNING: Removing unreachable block (ram,0x000100deaca0) */
/* WARNING: Removing unreachable block (ram,0x000100deaeb0) */
/* WARNING: Removing unreachable block (ram,0x000100deac2c) */
/* WARNING: Removing unreachable block (ram,0x000100dead40) */
/* WARNING: Removing unreachable block (ram,0x000100deabd8) */
/* WARNING: Removing unreachable block (ram,0x000100deae68) */

void FUN_100d9b254(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 unaff_x23;
  long *plVar10;
  undefined8 unaff_x24;
  long *plVar11;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar12;
  
  if ((char)param_1[0xe3] != '\0') {
    if ((char)param_1[0xe3] == '\x03') {
      if (((char)param_1[0xe2] == '\x03') && ((char)param_1[0xd9] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xda);
        if (param_1[0xdb] != 0) {
          (**(code **)(param_1[0xdb] + 0x18))(param_1[0xdc]);
        }
      }
      FUN_100d30a54(param_1 + 0x6a);
      *(undefined1 *)((long)param_1 + 0x719) = 0;
    }
    return;
  }
  lVar3 = 0;
  if (0x12 < *param_1) {
    lVar3 = *param_1 - 0x13;
  }
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      plVar5 = (long *)param_1[10];
      puVar4 = param_1 + 1;
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        *plVar5 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
LAB_100d30b84:
      uVar8 = *puVar4 ^ 0x8000000000000000;
      if (-1 < (long)*puVar4) {
        uVar8 = 5;
      }
      if (uVar8 < 3) {
        return;
      }
      if (uVar8 == 3) {
        if (puVar4[1] == 0) {
          return;
        }
        plVar5 = (long *)puVar4[2];
        goto code_r0x000108aa97c4;
      }
      if (uVar8 == 4) {
        plVar5 = (long *)puVar4[2];
        lVar3 = puVar4[3] + 1;
        plVar10 = plVar5;
        while (lVar3 = lVar3 + -1, lVar3 != 0) {
          FUN_100de6690(plVar10);
          plVar10 = plVar10 + 9;
        }
        if (puVar4[1] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      }
      uVar8 = puVar4[4];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(puVar4[3] + uVar8 * -8 + -8);
      }
      goto SUB_100cd7284;
    }
    if (lVar3 != 2) {
      plVar5 = (long *)param_1[0xe];
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        *plVar5 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0xe);
        }
      }
      if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
        uVar8 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar8 = param_1[4];
      }
      puVar4 = param_1 + 4;
      if (uVar8 == 0x8000000000000005) {
        return;
      }
      goto LAB_100d30b84;
    }
    uVar7 = param_1[1];
    uVar8 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar8 = 4;
    }
    if ((long)uVar8 < 2) {
      if (uVar8 == 0) {
        plVar5 = (long *)param_1[5];
        if (plVar5 != (long *)0x0) {
          lVar3 = *plVar5;
          *plVar5 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
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
        if (uVar8 != 1) goto LAB_100df6994;
        plVar5 = (long *)param_1[7];
        if (plVar5 != (long *)0x0) {
          lVar3 = *plVar5;
          *plVar5 = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
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
    else if ((uVar8 == 2) || (uVar8 == 3)) {
      plVar5 = (long *)param_1[2];
    }
    else {
LAB_100df6994:
      if (uVar7 != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] != 0x8000000000000005) {
        FUN_100de6690();
      }
      plVar5 = (long *)param_1[0xd];
    }
    goto SUB_100dccb50;
  }
  plVar5 = (long *)param_1[0x67];
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    *plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x67);
    }
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  lVar3 = *param_1 - 2;
  if (*param_1 < 2) {
    lVar3 = 1;
  }
  lVar9 = 8;
  unaff_x19 = param_1;
  switch(lVar3) {
  case 0:
    goto code_r0x000100deafbc;
  case 1:
    func_0x000100e03ee4(param_1);
    lVar9 = 0x330;
    goto code_r0x000100deafbc;
  case 2:
    FUN_100dfdc0c(param_1 + 1);
    lVar9 = 0xe8;
    goto code_r0x000100deafbc;
  case 3:
    puVar4 = param_1 + 1;
    if (*puVar4 != 0x8000000000000000) {
      uVar8 = param_1[5];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(param_1[4] + uVar8 * -8 + -8);
      }
      unaff_x30 = &UNK_100dead88;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x20 = puVar4;
      break;
    }
    lVar9 = 0x58;
    goto code_r0x000100deafbc;
  case 4:
    FUN_100e00e28(param_1 + 1);
    lVar9 = 0xb0;
    goto code_r0x000100deafbc;
  case 5:
    puVar4 = param_1 + 1;
    if (*puVar4 != 0x8000000000000001) {
      if (*puVar4 != 0x8000000000000000) {
        uVar8 = param_1[5];
        if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
          _free(param_1[4] + uVar8 * -8 + -8);
        }
        unaff_x30 = &UNK_100deae68;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x20 = puVar4;
        break;
      }
code_r0x000100deaf04:
      if ((param_1[10] & 0x7fffffffffffffff) == 0) goto LAB_100deafb8;
      lVar3 = 0x58;
code_r0x000100deafb0:
      _free(*(undefined8 *)((long)param_1 + lVar3));
    }
    goto LAB_100deafb8;
  case 6:
    puVar4 = param_1 + 1;
    if (*puVar4 == 0x8000000000000001) goto LAB_100deafb8;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deaf04;
    uVar8 = param_1[5];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[4] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deaf04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 7:
    puVar4 = param_1 + 1;
    if (*puVar4 == 0x8000000000000001) goto LAB_100deafb8;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deaf04;
    uVar8 = param_1[5];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[4] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deade0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 8:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) {
code_r0x000100deafa4:
      if (param_1[1] != 0) {
        lVar3 = 0x10;
        goto code_r0x000100deafb0;
      }
      goto LAB_100deafb8;
    }
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deafa4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 9:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deafa4;
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deace8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 10:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deafa4;
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deaf5c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 0xb:
    FUN_100dfdaa4(param_1 + 1);
    lVar9 = 0xf8;
    goto code_r0x000100deafbc;
  case 0xc:
    puVar4 = param_1 + 1;
    if (*puVar4 == 0x8000000000000001) goto LAB_100deafb8;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deaf04;
    uVar8 = param_1[5];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[4] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deaca0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 0xd:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deafa4;
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deaeb0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 0xe:
    puVar4 = param_1 + 1;
    if (*puVar4 == 0x8000000000000001) goto LAB_100deafb8;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deaf04;
    uVar8 = param_1[5];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[4] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deac2c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 0xf:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deafa4;
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100dead40;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  case 0x10:
    puVar4 = param_1 + 4;
    if (*puVar4 == 0x8000000000000000) goto code_r0x000100deafa4;
    uVar8 = param_1[8];
    if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
      _free(param_1[7] + uVar8 * -8 + -8);
    }
    unaff_x30 = &UNK_100deabd8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = puVar4;
    break;
  default:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0x8000000000000005) {
      FUN_100de6690();
    }
LAB_100deafb8:
    lVar9 = 0x68;
code_r0x000100deafbc:
    plVar5 = *(long **)((long)param_1 + lVar9);
SUB_100dccb50:
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar3 = plVar5[1];
    if (lVar3 != 0) {
      lVar9 = plVar5[3];
      if (lVar9 != 0) {
        plVar10 = (long *)*plVar5;
        plVar11 = plVar10 + 1;
        lVar12 = *plVar10;
        uVar8 = CONCAT17(-(-1 < lVar12),
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
          while (uVar8 == 0) {
            lVar12 = *plVar11;
            plVar10 = plVar10 + -0x20;
            plVar11 = plVar11 + 1;
            uVar8 = CONCAT17(-(-1 < lVar12),
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
          uVar7 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) & 0x78;
          uVar1 = *(undefined8 *)((long)plVar10 + uVar7 * -4 + -0x10);
          puVar2 = *(undefined8 **)((long)plVar10 + uVar7 * -4 + -8);
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
      if (lVar3 * 0x21 != -0x29) {
        _free(*plVar5 + lVar3 * -0x20 + -0x20);
      }
    }
    goto code_r0x000108aa97c4;
  }
SUB_100cd7284:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar5 = (long *)puVar4[1];
  lVar3 = puVar4[2] + 1;
  plVar10 = plVar5;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    if (*plVar10 != 0) {
      _free(plVar10[1]);
    }
    FUN_100de6690(plVar10 + 3);
    plVar10 = plVar10 + 0xd;
  }
  if (*puVar4 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar5);
  return;
}

