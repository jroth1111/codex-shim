
undefined1  [16] FUN_1006e3d38(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000008,s_login_server_thread_panicked__108ac3898,&stack0x00000040);
  uVar4 = in_stack_00000018;
  uVar3 = in_stack_00000010;
  uVar2 = in_stack_00000008;
  puVar8 = (undefined8 *)_malloc(0x18);
  if (puVar8 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar8 = uVar2;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    plVar9 = (long *)_malloc(0x18);
    puVar5 = in_stack_00000038;
    lVar7 = in_stack_00000030;
    if (plVar9 != (long *)0x0) {
      *plVar9 = (long)puVar8;
      plVar9[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar9 + 2) = 0x28;
      if (in_stack_00000030 != 0) {
        if ((code *)*in_stack_00000038 != (code *)0x0) {
          (*(code *)*in_stack_00000038)(in_stack_00000030);
        }
        if (puVar5[1] != 0) {
          _free(lVar7);
        }
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x38));
      }
      lVar7 = **(long **)(unaff_x19 + 0x50);
      **(long **)(unaff_x19 + 0x50) = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      *(undefined1 *)(unaff_x19 + 0x68) = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)plVar9 + 1;
      return auVar1 << 0x40;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1006e3e6c);
  (*pcVar6)();
}

