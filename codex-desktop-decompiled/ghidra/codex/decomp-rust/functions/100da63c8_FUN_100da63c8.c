
void FUN_100da63c8(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plStack_48;
  
  lVar2 = param_1[1];
  do {
    if (lVar2 == 0) {
      lVar2 = *(long *)*param_1;
      *(long *)*param_1 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001034c4c20(param_1);
      }
      return;
    }
    lVar3 = *(long *)(lVar2 + 0x5d8) + -1;
    lVar4 = *(long *)(lVar2 + 0x5c8);
    lVar5 = *(long *)(lVar2 + 0x5d0);
    *(long *)(lVar2 + 0x5c8) = *(long *)(*param_1 + 0x10) + 0x10;
    *(undefined8 *)(lVar2 + 0x5d0) = 0;
    if (lVar4 == 0) {
      if (lVar5 != 0) goto LAB_100da6440;
      param_1[1] = 0;
    }
    else {
      *(long *)(lVar4 + 0x5d0) = lVar5;
      if (lVar5 == 0) {
        param_1[1] = lVar4;
        *(long *)(lVar4 + 0x5d8) = lVar3;
      }
      else {
LAB_100da6440:
        *(long *)(lVar5 + 0x5c8) = lVar4;
        *(long *)(lVar2 + 0x5d8) = lVar3;
      }
    }
    plVar6 = (long *)(lVar2 + -0x10);
    LOAcquire();
    cVar1 = *(char *)(lVar2 + 0x5e8);
    *(char *)(lVar2 + 0x5e8) = '\x01';
    LORelease();
    plStack_48 = plVar6;
    FUN_100d9429c(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    if (cVar1 == '\0') {
      lVar2 = *plVar6;
      *plVar6 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f372c9ab5a49609E(&plStack_48);
      }
    }
    lVar2 = param_1[1];
  } while( true );
}

