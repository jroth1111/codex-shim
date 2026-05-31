
undefined8 FUN_1009cc1a0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined1 uVar7;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  
  *(char **)(unaff_x29 + -0x70) = s_Failed_to_submit_user_input__108accf78;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x100;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 1;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -0x80;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(undefined8 *)(unaff_x29 + -200) = param_1;
  uStack00000000000000c8 = *(undefined8 *)(unaff_x25 + 0xf8);
  uStack00000000000000c0 = *(undefined8 *)(unaff_x25 + 0xf0);
  uStack00000000000000d0 = in_stack_00000128;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x100) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x28;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_Failed_to_submit_user_input__108accf78,unaff_x29 + -0x100);
  uStack00000000000000c8 = *(undefined8 *)(unaff_x29 + -0xd8);
  uStack00000000000000c0 = *(undefined8 *)(unaff_x29 + -0xe0);
  uStack00000000000000d0 = *(undefined8 *)(unaff_x29 + -0xd0);
  __ZN16codex_mcp_server17codex_tool_runner38create_call_tool_result_with_thread_id17h3601e7ab73c1e301E
            (&stack0x00000130,unaff_x29 + -0x70,&stack0x000000c0,1);
  *(undefined1 *)(unaff_x19 + 0x20e) = 1;
  lVar3 = *(long *)(unaff_x19 + 0xb8);
  plVar5 = *(long **)(unaff_x19 + 0xc0);
  if ((plVar5 != (long *)0x0) && (lVar2 = *plVar5, *plVar5 = lVar2 + 1, lVar2 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009cc288);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 200);
  *(undefined1 *)(unaff_x19 + 0x20e) = 0;
  unaff_x22[0x11] = in_stack_000001b8;
  unaff_x22[0x10] = in_stack_000001b0;
  unaff_x22[0x13] = in_stack_000001c8;
  unaff_x22[0x12] = in_stack_000001c0;
  unaff_x22[0x15] = in_stack_000001d8;
  unaff_x22[0x14] = in_stack_000001d0;
  unaff_x22[9] = in_stack_00000178;
  unaff_x22[8] = in_stack_00000170;
  unaff_x22[0xb] = in_stack_00000188;
  unaff_x22[10] = in_stack_00000180;
  unaff_x22[0xd] = in_stack_00000198;
  unaff_x22[0xc] = in_stack_00000190;
  unaff_x22[0xf] = in_stack_000001a8;
  unaff_x22[0xe] = in_stack_000001a0;
  unaff_x22[1] = in_stack_00000138;
  *unaff_x22 = in_stack_00000130;
  unaff_x22[3] = in_stack_00000148;
  unaff_x22[2] = in_stack_00000140;
  unaff_x22[5] = in_stack_00000158;
  unaff_x22[4] = in_stack_00000150;
  unaff_x22[7] = in_stack_00000168;
  unaff_x22[6] = in_stack_00000160;
  *(long *)(unaff_x19 + 0x2c0) = lVar3 + 0x10;
  *(long **)(unaff_x19 + 0x2c8) = plVar5;
  *(undefined8 *)(unaff_x19 + 0x2d0) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x3b0) = 0;
  func_0x0001009b7030(unaff_x19 + 0x210);
  FUN_100d5ee48(unaff_x19 + 0x210);
  *(long *)(unaff_x19 + 0x210) = *(long *)(unaff_x19 + 0xd0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x280) = 0;
  pcVar4 = (char *)FUN_100fd3e50(unaff_x19 + 0x210);
  if (pcVar4 == (char *)0x0) {
    *unaff_x27 = 6;
    uVar7 = 3;
    uVar6 = 1;
  }
  else {
    if (((*(char *)(unaff_x19 + 0x280) == '\x03') && (*(char *)(unaff_x19 + 0x278) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x230) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x238);
      if (*(long *)(unaff_x19 + 0x240) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x240) + 0x18))(*(undefined8 *)(unaff_x19 + 0x248));
      }
    }
    FUN_100c30bc0(unaff_x29 + -0xe0,pcVar4 + 0x28,*(undefined8 *)(unaff_x19 + 0xc0),
                  *(undefined8 *)(unaff_x19 + 200));
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar4,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar4,1,pcVar4);
    *(undefined1 *)(unaff_x19 + 0x20e) = 0;
    FUN_100df5738(unaff_x19 + 0x170);
    if ((*(long *)(unaff_x19 + 0xd8) == unaff_x26) && (*(long *)(unaff_x19 + 0xe0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    lVar3 = **(long **)(unaff_x19 + 0xd0);
    **(long **)(unaff_x19 + 0xd0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E();
    }
    *(undefined2 *)(unaff_x19 + 0x209) = 0;
    plVar5 = *(long **)(unaff_x19 + 0xc0);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                  ((undefined8 *)(unaff_x19 + 0xc0));
      }
    }
    *(undefined1 *)(unaff_x19 + 0x20b) = 0;
    lVar3 = **(long **)(unaff_x19 + 0xb8);
    **(long **)(unaff_x19 + 0xb8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
    *(undefined1 *)(unaff_x19 + 0x20c) = 0;
    lVar3 = **(long **)(unaff_x19 + 0xb0);
    **(long **)(unaff_x19 + 0xb0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    *(undefined1 *)(unaff_x19 + 0x20d) = 0;
    uVar7 = 1;
    *unaff_x27 = 1;
    func_0x000100cd5474();
    uVar6 = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xef0) = uVar7;
  return uVar6;
}

