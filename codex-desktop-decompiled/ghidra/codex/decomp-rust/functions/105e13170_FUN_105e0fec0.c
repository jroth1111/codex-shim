
void FUN_105e0fec0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  long *plVar7;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    *plVar7 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4fa00514c9db900bE();
    }
  }
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    *plVar7 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4fa00514c9db900bE();
    }
  }
  plVar7 = *(long **)(param_1 + 0x70);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    *plVar7 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4fa00514c9db900bE();
    }
  }
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    *plVar7 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      lVar3 = *(long *)(param_1 + 0x80);
      *(undefined4 *)(lVar3 + 0x2fc) = 1;
      DataMemoryBarrier(2,3);
      plVar7 = *(long **)(lVar3 + 0x248);
      if (*(long **)(lVar3 + 0x248) == (long *)0x0) {
        lStack_78 = 1;
        plStack_80 = (long *)0x1;
        lStack_68 = 0;
        lStack_70 = -1;
        uStack_60 = 0;
        lStack_50 = 0;
        lStack_58 = 0;
        lStack_40 = 0;
        lStack_48 = 0;
        lStack_38 = 0;
        plVar6 = (long *)_malloc(0x50);
        if (plVar6 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x105e13320);
          (*pcVar2)();
        }
        plVar6[5] = lStack_58;
        plVar6[4] = CONCAT71(uStack_5f,uStack_60);
        plVar6[7] = lStack_48;
        plVar6[6] = lStack_50;
        plVar6[9] = lStack_38;
        plVar6[8] = lStack_40;
        plVar6[1] = lStack_78;
        *plVar6 = (long)plStack_80;
        plVar6[3] = lStack_68;
        plVar6[2] = lStack_70;
        plVar7 = *(long **)(lVar3 + 0x248);
        if (plVar7 == (long *)0x0) {
          *(long **)(lVar3 + 0x248) = plVar6 + 2;
          plVar7 = plVar6 + 2;
        }
        else {
          lVar4 = *plVar6;
          *plVar6 = lVar4 + -1;
          LORelease();
          plStack_80 = plVar6;
          if (lVar4 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2c96b15901d2af0aE(&plStack_80);
          }
        }
      }
      FUN_108a4e168(plVar7,0xffffffffffffffff);
      if ((*(long *)(lVar3 + 0x2d0) != 0) && (uVar5 = *(ulong *)(lVar3 + 0x238), 1 < uVar5)) {
        pcVar1 = (char *)(*(long *)(lVar3 + 0x2d0) + 0x218);
        if (*pcVar1 == '\0') {
          *pcVar1 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar1,extraout_x1,1000000000);
        }
        FUN_1060fa678(pcVar1,uVar5 >> 1,pcVar1);
      }
      lVar4 = **(long **)(lVar3 + 0x210);
      **(long **)(lVar3 + 0x210) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h8925986035c36127E(lVar3 + 0x210);
      }
      FUN_105e0884c(lVar3 + 0x80);
      if (*(long *)(lVar3 + 0x248) != 0) {
        plStack_80 = (long *)(*(long *)(lVar3 + 0x248) + -0x10);
        lVar4 = *plStack_80;
        *plStack_80 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2c96b15901d2af0aE(&plStack_80);
        }
      }
      FUN_105e0fec0(lVar3 + 0x250);
      if (lVar3 != -1) {
        lVar4 = *(long *)(lVar3 + 8);
        *(long *)(lVar3 + 8) = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          _free(lVar3);
        }
      }
      return;
    }
  }
  return;
}

