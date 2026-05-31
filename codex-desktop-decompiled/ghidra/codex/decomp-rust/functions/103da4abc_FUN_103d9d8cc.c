
/* WARNING: Possible PIC construction at 0x000103d9d924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daf60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daf648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daacb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dc1b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dc1b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dac958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dabac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dadc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dacc58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103db3e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dafc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daed60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dc1b94) */
/* WARNING: Removing unreachable block (ram,0x000103daacb4) */
/* WARNING: Removing unreachable block (ram,0x000103daf610) */
/* WARNING: Removing unreachable block (ram,0x000103d9d928) */
/* WARNING: Removing unreachable block (ram,0x000103dabac8) */
/* WARNING: Removing unreachable block (ram,0x000103dabad4) */
/* WARNING: Removing unreachable block (ram,0x000103dabad8) */
/* WARNING: Removing unreachable block (ram,0x000103dabadc) */

void FUN_103d9d8cc(ulong *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong *unaff_x19;
  undefined8 uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong uVar14;
  ulong *unaff_x23;
  ulong *unaff_x24;
  long *plVar15;
  ulong *unaff_x25;
  ulong uVar16;
  ulong *unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  
  puVar18 = &stack0xfffffffffffffff0;
  puVar6 = param_1;
  if ((char)param_1[0xd5] != '\0') {
    if ((char)param_1[0xd5] != '\x03') {
      return;
    }
    if (((char)param_1[0xd4] == '\x03') && ((char)param_1[0xcb] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xcc);
      if (param_1[0xcd] != 0) {
        (**(code **)(param_1[0xcd] + 0x18))(param_1[0xce]);
      }
    }
    unaff_x30 = 0x103d9d928;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar6 = param_1 + 99;
    unaff_x19 = param_1;
    unaff_x29 = puVar18;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = *puVar6 - 0x11;
  if (*puVar6 < 0x11) {
    lVar10 = 1;
  }
  if (lVar10 == 0) {
    plVar8 = (long *)puVar6[0x31];
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      *plVar8 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(puVar6 + 0x31);
      }
    }
    puVar5 = puVar6 + 1;
    puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(ulong **)((long)register0x00000008 + -0x20) = puVar4;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar11 = *puVar5 ^ 0x8000000000000000;
    if (-1 < (long)*puVar5) {
      uVar11 = 1;
    }
    lVar10 = 8;
    if ((long)uVar11 < 2) {
      if (uVar11 != 0) {
        if (uVar11 == 1) {
          func_0x000103db32b4(puVar5);
          lVar10 = 0x178;
        }
        else {
LAB_103dac930:
          if (puVar6[2] != 0) {
            _free(puVar6[3]);
          }
          if (puVar6[5] != 0x8000000000000005) {
            puVar20 = (undefined *)0x103dac95c;
            puVar7 = puVar6 + 5;
            goto SUB_103daac44;
          }
          lVar10 = 0x68;
        }
      }
    }
    else if (uVar11 != 2) {
      if (uVar11 != 3) goto LAB_103dac930;
      func_0x000103db5990(puVar6 + 2);
      lVar10 = 200;
    }
    puVar4 = *(ulong **)((long)puVar5 + lVar10);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
SUB_103da4abc:
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x10) = uVar17;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar19;
    if (puVar4 == (ulong *)0x0) {
      return;
    }
    uVar11 = puVar4[1];
    if (uVar11 != 0) {
      uVar14 = puVar4[3];
      if (uVar14 != 0) {
        plVar8 = (long *)*puVar4;
        plVar15 = plVar8 + 1;
        lVar10 = *plVar8;
        uVar16 = CONCAT17(-(-1 < lVar10),
                          CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar10
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                 0x8080808080808080;
        do {
          while (uVar16 == 0) {
            lVar10 = *plVar15;
            plVar8 = plVar8 + -0x20;
            plVar15 = plVar15 + 1;
            uVar16 = CONCAT17(-(-1 < lVar10),
                              CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar10 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                     0x8080808080808080;
          }
          uVar2 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
          uVar17 = *(undefined8 *)((long)plVar8 + uVar2 * -4 + -0x10);
          puVar1 = *(undefined8 **)((long)plVar8 + uVar2 * -4 + -8);
          pcVar9 = (code *)*puVar1;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar17);
          }
          if (puVar1[1] != 0) {
            _free(uVar17);
          }
          uVar16 = uVar16 - 1 & uVar16;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (uVar11 * 0x21 != -0x29) {
        _free(*puVar4 + uVar11 * -0x20 + -0x20);
      }
    }
    goto code_r0x000108aa97c4;
  }
  if (lVar10 != 1) {
    if (lVar10 == 2) {
      puVar5 = puVar6 + 1;
      puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
      *(ulong **)((long)register0x00000008 + -0x20) = puVar4;
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
      uVar11 = *puVar5;
      lVar10 = uVar11 + 0x7fffffffffffffff;
      if (uVar11 < 0x8000000000000001) {
        lVar10 = 2;
      }
      if (lVar10 < 4) {
        if (lVar10 < 2) {
          if (lVar10 == 0) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            plVar8 = (long *)puVar6[5];
            if (plVar8 != (long *)0x0) {
              lVar10 = *plVar8;
              *plVar8 = lVar10 + -1;
              LORelease();
              if (lVar10 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (puVar6[2] != 0x8000000000000000 && puVar6[2] != 0) {
              _free(puVar6[3]);
            }
            puVar4 = (ulong *)puVar6[7];
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
          }
          else {
            if (lVar10 != 1) goto LAB_103daf5e4;
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            plVar8 = (long *)puVar6[7];
            if (plVar8 != (long *)0x0) {
              lVar10 = *plVar8;
              *plVar8 = lVar10 + -1;
              LORelease();
              if (lVar10 == 1) {
                DataMemoryBarrier(2,1);
                __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
              }
            }
            if (puVar6[4] != 0x8000000000000000 && puVar6[4] != 0) {
              _free(puVar6[5]);
            }
            puVar4 = (ulong *)puVar6[10];
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
            uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
          }
          goto SUB_103da4abc;
        }
        if (lVar10 == 2) {
          if ((uVar11 != 0x8000000000000000) && (uVar11 != 0)) {
            _free(puVar6[2]);
          }
          puVar20 = (undefined *)0x103daf64c;
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
          puVar7 = puVar6 + 4;
          goto SUB_103daac44;
        }
        if (lVar10 != 3) goto LAB_103daf5e4;
LAB_103daf5bc:
        if (puVar6[2] != 0) {
          _free(puVar6[3]);
        }
        puVar4 = (ulong *)puVar6[5];
      }
      else {
        if (lVar10 < 6) {
          if ((lVar10 == 4) || (lVar10 == 5)) {
LAB_103daf614:
            puVar4 = (ulong *)puVar6[2];
            goto LAB_103daf650;
          }
        }
        else {
          if (lVar10 == 6) goto LAB_103daf614;
          if (lVar10 == 7) goto LAB_103daf5bc;
        }
LAB_103daf5e4:
        if (puVar6[2] != 0) {
          _free(puVar6[3]);
        }
        if (puVar6[5] != 0x8000000000000005) {
          puVar20 = (undefined *)0x103daf610;
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
          puVar7 = puVar6 + 5;
          goto SUB_103daac44;
        }
        puVar4 = (ulong *)puVar6[0xe];
      }
LAB_103daf650:
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto SUB_103da4abc;
    }
    plVar8 = (long *)puVar6[0xe];
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      *plVar8 = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    if (puVar6[1] == 0x8000000000000000 || puVar6[1] == 0) {
      uVar11 = puVar6[4];
    }
    else {
      _free(puVar6[2]);
      uVar11 = puVar6[4];
    }
    if (uVar11 == 0x8000000000000005) {
      return;
    }
    puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar20 = *(undefined **)((long)register0x00000008 + -8);
    puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar3 = (undefined1 *)register0x00000008;
    puVar7 = puVar6 + 4;
    puVar5 = *(ulong **)((long)register0x00000008 + -0x18);
    goto SUB_103daac44;
  }
  plVar8 = (long *)puVar6[0x60];
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    *plVar8 = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(puVar6 + 0x60);
    }
  }
  puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = puVar4;
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar10 = 0;
  if (*puVar6 != 0) {
    lVar10 = *puVar6 - 1;
  }
  switch(lVar10) {
  case 0:
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if (puVar6[0x5a] != 0x8000000000000000 && puVar6[0x5a] != 0) {
      _free(puVar6[0x5b]);
    }
    FUN_103db6a18(puVar6);
    FUN_103dacdb4(puVar6 + 0x48);
    if (puVar6[0x5d] == 0x8000000000000000 || puVar6[0x5d] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar6[0x5e];
    goto code_r0x000108aa97c4;
  case 1:
    puVar4 = (ulong *)puVar6[2];
    uVar11 = puVar6[3];
    if (uVar11 != 0) {
      puVar5 = puVar4 + 1;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    goto code_r0x000103dabbd4;
  case 2:
    if (puVar6[4] != 0x8000000000000000 && puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    puVar4 = (ulong *)puVar6[2];
    lVar10 = puVar6[3] + 1;
    puVar5 = puVar4;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      func_0x000103db4794(puVar5);
      puVar5 = puVar5 + 0x24;
    }
    goto code_r0x000103dabbd4;
  case 3:
    puVar5 = puVar6 + 1;
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar7 = puVar6 + 4;
    puVar4 = (ulong *)0x8000000000000000;
    if (*puVar7 == 0x8000000000000000) {
      if (puVar6[0xd] != 0x8000000000000000 && puVar6[0xd] != 0) {
        _free(puVar6[0xe]);
      }
      puVar4 = (ulong *)puVar6[2];
      lVar10 = puVar6[3] + 1;
      puVar6 = puVar4;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        func_0x000103dacf94(puVar6);
        puVar6 = puVar6 + 0x18;
      }
      if (*puVar5 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar21 = &LAB_103daed64;
    break;
  case 4:
    puVar5 = puVar6 + 1;
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar7 = puVar6 + 4;
    puVar4 = (ulong *)0x8000000000000000;
    if (*puVar7 == 0x8000000000000000) {
      if (puVar6[0xd] != 0x8000000000000000 && puVar6[0xd] != 0) {
        _free(puVar6[0xe]);
      }
      puVar4 = (ulong *)puVar6[2];
      func_0x000103d8f564(puVar4,puVar6[3]);
      if (*puVar5 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar21 = &LAB_103dafc80;
    break;
  case 5:
    puVar5 = puVar6 + 1;
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar7 = puVar6 + 4;
    puVar4 = (ulong *)0x8000000000000000;
    if (*puVar7 == 0x8000000000000000) {
      if (puVar6[0xd] == 0x8000000000000000 || puVar6[0xd] == 0) {
        puVar7 = (ulong *)puVar6[2];
        uVar11 = puVar6[3];
        puVar4 = puVar7;
      }
      else {
        _free(puVar6[0xe]);
        puVar7 = (ulong *)puVar6[2];
        uVar11 = puVar6[3];
        puVar4 = puVar7;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        func_0x000103db5128(puVar7);
        if (-0x7fffffffffffffff < (long)puVar7[0x12] && puVar7[0x12] != 0) {
          _free(puVar7[0x13]);
        }
        puVar7 = puVar7 + 0x18;
      }
      if (*puVar5 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar21 = &LAB_103db3e70;
    break;
  case 6:
    puVar4 = (ulong *)puVar6[2];
    lVar10 = puVar6[3] + 1;
    puVar5 = puVar4;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      func_0x000103db35e4(puVar5);
      puVar5 = puVar5 + 0x13;
    }
code_r0x000103dabbd4:
    if (puVar6[1] == 0) {
code_r0x000103dabc9c:
      return;
    }
    goto code_r0x000108aa97c4;
  case 7:
    puVar5 = puVar6 + 1;
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar4 = (ulong *)0x8000000000000005;
    func_0x000103d91ca8();
    if (puVar6[0xd] != 0x8000000000000005) {
      puVar20 = &LAB_103dacc5c;
      puVar7 = puVar6 + 0xd;
      goto SUB_103daac44;
    }
    puVar7 = puVar6 + 4;
    if (*puVar7 == 0x8000000000000000) {
      return;
    }
    puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar21 = *(undefined1 **)((long)register0x00000008 + -8);
    puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar5 = *(ulong **)((long)register0x00000008 + -0x18);
    puVar3 = (undefined1 *)register0x00000008;
    break;
  case 8:
    puVar5 = puVar6 + 1;
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar7 = puVar6 + 4;
    puVar4 = (ulong *)0x8000000000000000;
    if (*puVar7 == 0x8000000000000000) {
      if (puVar6[0xd] != 0x8000000000000000 && puVar6[0xd] != 0) {
        _free(puVar6[0xe]);
      }
      puVar4 = (ulong *)puVar6[2];
      lVar10 = puVar6[3] + 1;
      puVar6 = puVar4;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_103daa59c(puVar6);
        puVar6 = puVar6 + 0x1c;
      }
      if (*puVar5 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar21 = &LAB_103dadc50;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
    break;
  case 9:
    if (puVar6[1] == 0x8000000000000005) {
      return;
    }
  default:
    puVar18 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar20 = *(undefined **)((long)register0x00000008 + -8);
    puVar4 = *(ulong **)((long)register0x00000008 + -0x20);
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
    unaff_x24 = *(ulong **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(ulong **)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)register0x00000008;
    puVar7 = puVar6 + 1;
    puVar5 = *(ulong **)((long)register0x00000008 + -0x18);
SUB_103daac44:
    puVar6 = puVar7;
    *(ulong **)(puVar3 + -0x40) = unaff_x24;
    *(ulong **)(puVar3 + -0x38) = unaff_x23;
    *(ulong **)(puVar3 + -0x30) = unaff_x22;
    *(ulong **)(puVar3 + -0x28) = unaff_x21;
    *(ulong **)(puVar3 + -0x20) = puVar4;
    *(ulong **)(puVar3 + -0x18) = puVar5;
    *(undefined1 **)(puVar3 + -0x10) = puVar18;
    *(undefined **)(puVar3 + -8) = puVar20;
    puVar18 = puVar3 + -0x10;
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
      puVar4 = (ulong *)puVar6[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar11 != 4) {
      unaff_x23 = *(ulong **)(puVar3 + -0x38);
      *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
      *(ulong *)(puVar3 + -0x58) = unaff_x27;
      *(ulong **)(puVar3 + -0x50) = unaff_x26;
      *(ulong **)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
      *(ulong **)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
      *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
      *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      puVar18 = puVar3 + -0x10;
      uVar11 = puVar6[4];
      if (uVar11 == 0 || uVar11 * 9 == -0x11) {
        puVar4 = (ulong *)puVar6[1];
        unaff_x22 = (ulong *)puVar6[2];
        *(ulong **)(puVar3 + -0x68) = puVar6;
      }
      else {
        _free(puVar6[3] + uVar11 * -8 + -8);
        puVar4 = (ulong *)puVar6[1];
        unaff_x22 = (ulong *)puVar6[2];
        *(ulong **)(puVar3 + -0x68) = puVar6;
      }
      if (unaff_x22 != (ulong *)0x0) {
        unaff_x26 = (ulong *)0x0;
        unaff_x28 = 5;
        unaff_x25 = unaff_x22;
        unaff_x21 = puVar4;
        do {
          unaff_x21 = unaff_x21 + 0xd;
          unaff_x24 = (ulong *)0x68;
          puVar5 = puVar4 + (long)unaff_x26 * 0xd;
          if (*puVar5 != 0) {
            _free(puVar5[1]);
          }
          puVar7 = puVar5 + 3;
          uVar11 = *puVar7 ^ 0x8000000000000000;
          if (-1 < (long)*puVar7) {
            uVar11 = 5;
          }
          if (2 < uVar11) {
            if (uVar11 == 3) {
              if (puVar5[4] != 0) {
                unaff_x23 = (ulong *)puVar5[5];
LAB_103dc1bb8:
                _free(unaff_x23);
              }
            }
            else {
              if (uVar11 != 4) {
                puVar21 = (undefined1 *)0x103dc1b28;
                puVar3 = puVar3 + -0x70;
                goto SUB_103dc1800;
              }
              unaff_x23 = (ulong *)puVar5[5];
              unaff_x27 = puVar5[6];
              if (unaff_x27 != 0) goto code_r0x000103dc1b8c;
              if (puVar5[4] != 0) goto LAB_103dc1bb8;
            }
          }
          unaff_x26 = (ulong *)((long)unaff_x26 + 1);
          unaff_x25 = (ulong *)((long)unaff_x25 - 1);
          if (unaff_x26 == unaff_x22) break;
        } while( true );
      }
      if (**(long **)(puVar3 + -0x68) == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    puVar4 = (ulong *)puVar6[2];
    unaff_x23 = (ulong *)puVar6[3];
    if (unaff_x23 != (ulong *)0x0) {
      unaff_x22 = puVar4 + 9;
      puVar20 = (undefined *)0x103daacb4;
      puVar3 = puVar3 + -0x40;
      puVar7 = puVar4;
      puVar5 = puVar6;
      goto SUB_103daac44;
    }
    if (puVar6[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  case 10:
    goto code_r0x000103dabc9c;
  case 0xb:
    goto code_r0x000103dabc08;
  case 0xc:
    func_0x000103db6fa4(puVar6 + 3);
    if (puVar6[6] == 0x8000000000000000 || puVar6[6] == 0) {
      return;
    }
    puVar4 = (ulong *)puVar6[7];
    goto code_r0x000108aa97c4;
  case 0xd:
    if (puVar6[1] == 2) {
      return;
    }
    goto code_r0x000103dabc08;
  case 0xe:
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    puVar20 = &UNK_103dabac8;
    puVar7 = puVar6 + 7;
    puVar5 = puVar6;
    goto SUB_103daac44;
  }
SUB_103dc1800:
  *(ulong **)(puVar3 + -0x40) = unaff_x24;
  *(ulong **)(puVar3 + -0x38) = unaff_x23;
  *(ulong **)(puVar3 + -0x30) = unaff_x22;
  *(ulong **)(puVar3 + -0x28) = unaff_x21;
  *(ulong **)(puVar3 + -0x20) = puVar4;
  *(ulong **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined1 **)(puVar3 + -8) = puVar21;
  uVar11 = puVar7[4];
  if (uVar11 != 0 && uVar11 * 9 != -0x11) {
    _free(puVar7[3] + uVar11 * -8 + -8);
  }
  puVar4 = (ulong *)puVar7[1];
  lVar10 = puVar7[2] + 1;
  puVar6 = puVar4;
  while (lVar10 = lVar10 + -1, lVar10 != 0) {
    func_0x000103dc0794(puVar6);
    puVar6 = puVar6 + 0xd;
  }
  if (*puVar7 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
code_r0x000103dabc08:
  if (puVar6[5] != 0) {
    _free(puVar6[6]);
  }
  if (puVar6[0xb] != 0x8000000000000000 && puVar6[0xb] != 0) {
    _free(puVar6[0xc]);
  }
  if (puVar6[8] != 0) {
    _free(puVar6[9]);
  }
  if (puVar6[0xe] == 0x8000000000000000) {
    return;
  }
  if (puVar6[0xe] == 0) {
    return;
  }
  puVar4 = (ulong *)puVar6[0xf];
  goto code_r0x000108aa97c4;
code_r0x000103dc1b8c:
  unaff_x24 = unaff_x23 + 9;
  puVar20 = (undefined *)0x103dc1b94;
  puVar3 = puVar3 + -0x70;
  puVar7 = unaff_x23;
  goto SUB_103daac44;
}

