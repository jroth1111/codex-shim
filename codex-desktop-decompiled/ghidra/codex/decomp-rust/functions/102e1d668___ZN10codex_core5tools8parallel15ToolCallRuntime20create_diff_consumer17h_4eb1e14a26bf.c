
undefined8
__ZN10codex_core5tools8parallel15ToolCallRuntime20create_diff_consumer17h98d063c091f58a3cE
          (long *param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_30;
  long lStack_28;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x40) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_0x0001033f7174(*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50),param_2)
    ;
    lVar5 = func_0x0001038791b8(lVar5 + 0x28,uVar4,param_2);
    uVar4 = 0;
    if (lVar5 != 0) {
      lVar3 = **(long **)(lVar5 + -0x10);
      **(long **)(lVar5 + -0x10) = lVar3 + 1;
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e1d724);
        (*pcVar2)();
      }
      plVar1 = *(long **)(lVar5 + -0x10);
      lStack_28 = *(long *)(lVar5 + -8);
      plStack_30 = plVar1;
      uVar4 = (**(code **)(lStack_28 + 0x70))
                        ((long)plVar1 +
                         (*(long *)(lStack_28 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      lVar5 = *plVar1;
      *plVar1 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(&plStack_30);
      }
    }
  }
  return uVar4;
}

