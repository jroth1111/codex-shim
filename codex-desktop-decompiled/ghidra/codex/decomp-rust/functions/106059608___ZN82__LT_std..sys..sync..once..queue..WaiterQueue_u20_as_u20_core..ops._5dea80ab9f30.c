
void __ZN82__LT_std__sys__sync__once__queue__WaiterQueue_u20_as_u20_core__ops__drop__Drop_GT_4drop17h131bf1b8f1dcf278E
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_x4;
  long *plVar6;
  ulong uStack_40;
  long *plStack_38;
  
  LOAcquire();
  uVar4 = *(ulong *)*param_1;
  *(ulong *)*param_1 = param_1[1];
  LORelease();
  uStack_40 = uVar4 & 3;
  if (uStack_40 == 1) {
    puVar2 = (undefined8 *)(uVar4 & 0xfffffffffffffffc);
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      puVar1 = (undefined8 *)puVar2[1];
      lVar5 = *(long *)*puVar2;
      *(long *)*puVar2 = lVar5 + 1;
      if (lVar5 < 0) break;
      plVar6 = (long *)*puVar2;
      *(undefined4 *)(puVar2 + 2) = 1;
      lVar5 = plVar6[6];
      *(char *)(plVar6 + 6) = '\x01';
      LORelease();
      plStack_38 = plVar6;
      if ((char)lVar5 == -1) {
        _dispatch_semaphore_signal(plVar6[5]);
        lVar5 = *plVar6;
        *plVar6 = lVar5 + -1;
        LORelease();
      }
      else {
        lVar5 = *plVar6;
        *plVar6 = lVar5 + -1;
        LORelease();
      }
      puVar2 = puVar1;
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
      }
    }
  }
  else {
    func_0x000108a07b2c(0,&uStack_40,&UNK_108c511a0,0,in_x4,&UNK_10b4aee90);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1060596e4);
  (*pcVar3)();
}

