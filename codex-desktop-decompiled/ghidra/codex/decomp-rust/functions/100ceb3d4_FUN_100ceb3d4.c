
void FUN_100ceb3d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  char in_wzr;
  undefined1 auVar10 [16];
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*(char *)((long)param_1 + 0x19) == '\x03') {
    if ((char)param_1[0xf] == '\x03') {
      FUN_100dca0dc(param_1 + 0xd);
      param_2 = extraout_x1_00;
    }
    if (param_1[9] != 0) {
      _free(param_1[10]);
      param_2 = extraout_x1_01;
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x19) != '\x04') {
      return;
    }
    func_0x000100d8755c(param_1 + 7);
    param_2 = extraout_x1;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
    plStack_48 = (long *)0x0;
    plStack_40 = (long *)0x0;
    lVar9 = *param_1;
    pcVar1 = (char *)(lVar9 + 0x10);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
    }
    plVar5 = *(long **)(lVar9 + 0x30);
    if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
      do {
        plStack_38 = plVar5;
        plVar7 = plStack_38 + 1;
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) {
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *plVar7 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        else {
          plVar5[2] = 0;
          *plVar7 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        if (plStack_48 == plStack_38) {
          *(long **)(lVar9 + 0x30) = plVar5;
          goto LAB_100da26c8;
        }
        plStack_38[1] = 0;
        plStack_38[2] = (long)plStack_48;
        if (plStack_48 != (long *)0x0) {
          plStack_48[1] = (long)plStack_38;
        }
        plVar7 = plStack_38;
        if (plStack_40 != (long *)0x0) {
          plVar7 = plStack_40;
        }
        plStack_40 = plVar7;
        plStack_48 = plStack_38;
      } while (plVar5 != (long *)0x0);
      *(undefined8 *)(lVar9 + 0x30) = 0;
    }
    plVar5 = *(long **)(lVar9 + 0x20);
    if (*(long **)(lVar9 + 0x20) != (long *)0x0) {
      do {
        plStack_38 = plVar5;
        plVar7 = plStack_38 + 1;
        plVar5 = (long *)*plVar7;
        if (plVar5 == (long *)0x0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *plVar7 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        else {
          plVar5[2] = 0;
          *plVar7 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        if (plStack_48 == plStack_38) {
          *(long **)(lVar9 + 0x20) = plVar5;
LAB_100da26c8:
          func_0x00010897c064(1,&plStack_48,&plStack_38,0,param_5,&UNK_10b23aac0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100da26e8);
          (*pcVar2)();
        }
        plStack_38[1] = 0;
        plStack_38[2] = (long)plStack_48;
        if (plStack_48 != (long *)0x0) {
          plStack_48[1] = (long)plStack_38;
        }
        plVar7 = plStack_38;
        if (plStack_40 != (long *)0x0) {
          plVar7 = plStack_40;
        }
        plStack_40 = plVar7;
        plStack_48 = plStack_38;
      } while (plVar5 != (long *)0x0);
      *(undefined8 *)(lVar9 + 0x20) = 0;
    }
    if (*pcVar1 == '\x01') {
      *pcVar1 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
    }
    do {
      uVar4 = func_0x000100fe5248(&plStack_48);
    } while ((uVar4 & 1) != 0);
    do {
      auVar10 = func_0x000100fe5248(&plStack_48);
      param_2 = auVar10._8_8_;
    } while ((auVar10._0_8_ & 1) != 0);
  }
  plVar5 = (long *)*param_1;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    plVar7 = plVar5 + 2;
    if ((char)*plVar7 == '\0') {
      *(char *)plVar7 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(plVar7,param_2,1000000000);
    }
    plVar6 = (long *)plVar5[6];
    if ((long *)plVar5[6] != (long *)0x0) {
      do {
        plStack_38 = plVar6;
        plVar8 = plStack_38 + 1;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) {
          plVar5[5] = 0;
          *plVar8 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        else {
          plVar6[2] = 0;
          *plVar8 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        if (plStack_50 == plStack_38) {
          plVar5[6] = (long)plVar6;
          goto LAB_100dc2888;
        }
        plStack_38[1] = 0;
        plStack_38[2] = (long)plStack_50;
        if (plStack_50 != (long *)0x0) {
          plStack_50[1] = (long)plStack_38;
        }
        plVar8 = plStack_38;
        if (plStack_48 != (long *)0x0) {
          plVar8 = plStack_48;
        }
        plStack_48 = plVar8;
        plStack_50 = plStack_38;
      } while (plVar6 != (long *)0x0);
      plVar5[6] = 0;
    }
    plVar6 = (long *)plVar5[4];
    if ((long *)plVar5[4] != (long *)0x0) {
      do {
        plStack_38 = plVar6;
        plVar8 = plStack_38 + 1;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) {
          plVar5[3] = 0;
          *plVar8 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        else {
          plVar6[2] = 0;
          *plVar8 = 0;
          plStack_38[2] = 0;
          *(undefined1 *)(plStack_38 + 4) = 2;
        }
        if (plStack_50 == plStack_38) {
          plVar5[4] = (long)plVar6;
LAB_100dc2888:
          func_0x00010897c064(1,&plStack_50,&plStack_38,0,param_5,&UNK_10b23aac0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100dc28a8);
          (*pcVar2)();
        }
        plStack_38[1] = 0;
        plStack_38[2] = (long)plStack_50;
        if (plStack_50 != (long *)0x0) {
          plStack_50[1] = (long)plStack_38;
        }
        plVar8 = plStack_38;
        if (plStack_48 != (long *)0x0) {
          plVar8 = plStack_48;
        }
        plStack_48 = plVar8;
        plStack_50 = plStack_38;
      } while (plVar6 != (long *)0x0);
      plVar5[4] = 0;
    }
    if ((char)*plVar7 == '\x01') {
      *(char *)plVar7 = in_wzr;
      plVar5 = plStack_48;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar7,0);
      plVar5 = plStack_48;
    }
    while (plVar5 != (long *)0x0) {
      plStack_48 = (long *)plVar5[1];
      if (plStack_48 == (long *)0x0) {
        plStack_50 = (long *)0x0;
      }
      else {
        plStack_48[2] = 0;
      }
      plStack_38 = plVar5 + -2;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5 = (long *)plVar5[3];
      if (*plVar5 == 0xcc) {
        *plVar5 = 0x84;
      }
      else {
        (**(code **)(plVar5[2] + 0x20))();
      }
      lVar9 = *plStack_38;
      *plStack_38 = lVar9 + -1;
      LORelease();
      plVar5 = plStack_48;
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9e34a6907af95765E(&plStack_38);
        plVar5 = plStack_48;
      }
    }
    plVar5 = (long *)*param_1;
    plStack_48 = (long *)0x0;
  }
  lVar9 = *plVar5;
  *plVar5 = lVar9 + -1;
  LORelease();
  if (lVar9 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  lVar9 = *param_1;
  if (*(long *)(lVar9 + 0x38) != 0) {
    (**(code **)(*(long *)(lVar9 + 0x38) + 0x18))(*(undefined8 *)(lVar9 + 0x40));
  }
  if (lVar9 != -1) {
    lVar3 = *(long *)(lVar9 + 8);
    *(long *)(lVar9 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar9);
      return;
    }
  }
  return;
}

