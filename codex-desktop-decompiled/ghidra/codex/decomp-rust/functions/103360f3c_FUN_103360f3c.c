
void FUN_103360f3c(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_38;
  
  do {
    plVar5 = (long *)param_1[5];
    plVar2 = (long *)plVar5[0xbc];
    plVar6 = (long *)*param_1;
    if (plVar5 == plVar6 + 2) {
      if (plVar2 == (long *)0x0) {
        if (param_1[1] != 0) {
          (**(code **)(param_1[1] + 0x18))(param_1[2]);
        }
        lVar4 = *plVar6;
        *plVar6 = lVar4 + -1;
        LORelease();
        if (lVar4 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        lVar4 = *param_1;
        func_0x000103352e58(lVar4 + 0x10);
        if (lVar4 != -1) {
          lVar3 = *(long *)(lVar4 + 8);
          *(long *)(lVar4 + 8) = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(lVar4);
            return;
          }
        }
        return;
      }
      param_1[5] = (long)plVar2;
      plVar5 = plVar2;
      plVar2 = (long *)plVar2[0xbc];
    }
    if (plVar2 == (long *)0x0) {
      if ((long *)param_1[4] != plVar5) {
LAB_103361048:
        func_0x000108a0b760(&UNK_108d79d3f,0x14);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10336105c);
        (*pcVar1)();
      }
      lVar4 = *param_1 + 0x10;
      *(undefined8 *)(*param_1 + 0x5f0) = 0;
      LOAcquire();
      lVar3 = param_1[4];
      param_1[4] = lVar4;
      LORelease();
      *(long *)(lVar3 + 0x5e0) = lVar4;
      plVar2 = (long *)plVar5[0xbc];
      if (plVar2 == (long *)0x0) goto LAB_103361048;
    }
    param_1[5] = (long)plVar2;
    plStack_38 = plVar5 + -2;
    lVar4 = *plStack_38;
    *plStack_38 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f372c9ab5a49609E(&plStack_38);
    }
  } while( true );
}

