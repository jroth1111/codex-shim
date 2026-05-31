
long FUN_10063330c(undefined8 param_1,long *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar7 = (long *)0x0;
  uVar5 = param_2[1];
  lVar6 = param_2[2];
  param_2 = (long *)*param_2;
  bVar3 = param_2 != (long *)0x0;
  if (!bVar3) {
    lVar6 = 0;
  }
  do {
    if (lVar6 == 0) {
      return 0;
    }
    if (!bVar3) {
      FUN_107c05cb0(&UNK_10b212c38);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100633438);
      (*pcVar2)();
    }
    if (plVar7 == (long *)0x0) {
      for (; plVar7 = param_2, uVar5 != 0; uVar5 = uVar5 - 1) {
        param_2 = (long *)plVar7[0x24];
      }
      param_2 = (long *)0x0;
      uVar5 = 0;
      plVar8 = plVar7;
      if (*(short *)((long)plVar7 + 0x112) == 0) goto LAB_1006333b8;
    }
    else {
      plVar8 = plVar7;
      if (*(ushort *)((long)plVar7 + 0x112) <= uVar5) {
LAB_1006333b8:
        do {
          plVar7 = (long *)*plVar8;
          if (plVar7 == (long *)0x0) {
            FUN_107c05cb0(&UNK_10b2382c8);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100633428);
            (*pcVar2)();
          }
          param_2 = (long *)((long)param_2 + 1);
          puVar1 = (ushort *)(plVar8 + 0x22);
          uVar5 = (ulong)*puVar1;
          plVar8 = plVar7;
        } while (*(ushort *)((long)plVar7 + 0x112) <= *puVar1);
      }
    }
    uVar9 = uVar5 + 1;
    plVar8 = plVar7;
    if (param_2 != (long *)0x0) {
      plVar8 = plVar7 + uVar9;
      do {
        plVar8 = (long *)plVar8[0x24];
        param_2 = (long *)((long)param_2 + -1);
      } while (param_2 != (long *)0x0);
      uVar9 = 0;
    }
    lVar6 = lVar6 + -1;
    lVar4 = func_0x00010063f0dc(param_1,plVar7 + uVar5 * 3 + 1,(long)plVar7 + uVar5 + 0x114);
    param_2 = (long *)0x0;
    bVar3 = true;
    uVar5 = uVar9;
    plVar7 = plVar8;
    if (lVar4 != 0) {
      return lVar4;
    }
  } while( true );
}

