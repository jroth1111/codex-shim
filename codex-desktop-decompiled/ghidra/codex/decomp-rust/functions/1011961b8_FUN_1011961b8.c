
undefined8 FUN_1011961b8(void)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 extraout_x1;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined1 uVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00007550;
  undefined8 in_stack_00007558;
  undefined8 in_stack_00007560;
  undefined8 in_stack_00007568;
  undefined8 in_stack_00007570;
  undefined8 in_stack_00007578;
  undefined8 in_stack_00007580;
  undefined8 in_stack_00007588;
  undefined8 in_stack_00007590;
  undefined8 in_stack_00007598;
  undefined8 in_stack_000075a0;
  undefined8 in_stack_000075a8;
  undefined8 in_stack_000075b0;
  undefined8 in_stack_000075b8;
  undefined8 in_stack_000075c0;
  undefined8 in_stack_000075c8;
  undefined8 in_stack_000075d0;
  undefined8 in_stack_000075d8;
  undefined8 in_stack_000075e0;
  undefined8 in_stack_000075e8;
  undefined8 in_stack_000075f0;
  undefined8 in_stack_000075f8;
  
  *(char **)(unaff_x29 + -0x80) = s__Failed_to_submit_initial_prompt_108accf3c;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x7098);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x20 + 0x70a0);
  *(undefined8 *)(unaff_x29 + -0x80) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x21;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002580,s__Failed_to_submit_initial_prompt_108accf3c,unaff_x29 + -0x70);
  __ZN16codex_mcp_server17codex_tool_runner38create_call_tool_result_with_thread_id17h3601e7ab73c1e301E
            (&stack0x00007550,unaff_x29 + -0x80,&stack0x00004ae0,1);
  *(undefined1 *)(unaff_x19 + 0x325) = 1;
  lVar5 = *(long *)(unaff_x20 + 0x7080);
  plVar4 = *(long **)(unaff_x20 + 0x4b10);
  if ((plVar4 != (long *)0x0) && (lVar2 = *plVar4, *plVar4 = lVar2 + 1, lVar2 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119630c);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x4b18);
  *(undefined1 *)(unaff_x19 + 0x325) = 0;
  unaff_x22[0x13] = in_stack_000075e8;
  unaff_x22[0x12] = in_stack_000075e0;
  unaff_x22[0x15] = in_stack_000075f8;
  unaff_x22[0x14] = in_stack_000075f0;
  unaff_x22[0xf] = in_stack_000075c8;
  unaff_x22[0xe] = in_stack_000075c0;
  unaff_x22[0x11] = in_stack_000075d8;
  unaff_x22[0x10] = in_stack_000075d0;
  unaff_x22[0xb] = in_stack_000075a8;
  unaff_x22[10] = in_stack_000075a0;
  unaff_x22[0xd] = in_stack_000075b8;
  unaff_x22[0xc] = in_stack_000075b0;
  unaff_x22[7] = in_stack_00007588;
  unaff_x22[6] = in_stack_00007580;
  unaff_x22[9] = in_stack_00007598;
  unaff_x22[8] = in_stack_00007590;
  unaff_x22[3] = in_stack_00007568;
  unaff_x22[2] = in_stack_00007560;
  unaff_x22[5] = in_stack_00007578;
  unaff_x22[4] = in_stack_00007570;
  unaff_x22[1] = in_stack_00007558;
  *unaff_x22 = in_stack_00007550;
  *(long *)(unaff_x20 + 0x7798) = lVar5 + 0x10;
  *(long **)(unaff_x20 + 0x77a0) = plVar4;
  *(undefined8 *)(unaff_x20 + 0x77a8) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x4c8) = 0;
  func_0x0001009b7030(unaff_x20 + 0x76e8);
  FUN_100d5ee48(unaff_x20 + 0x76e8);
  *(long *)(unaff_x20 + 0x76e8) = *(long *)(unaff_x20 + 0x7090) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x398) = 0;
  pcVar3 = (char *)FUN_100fd3e50(unaff_x20 + 0x76e8);
  if (pcVar3 == (char *)0x0) {
    *unaff_x28 = 9;
    uVar7 = 3;
    uVar6 = 1;
  }
  else {
    if (((*(char *)(unaff_x19 + 0x398) == '\x03') && (*(char *)(unaff_x19 + 0x390) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x348) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x20 + 0x7710);
      if (*(long *)(unaff_x20 + 0x7718) != 0) {
        (**(code **)(*(long *)(unaff_x20 + 0x7718) + 0x18))(*(undefined8 *)(unaff_x20 + 0x7720));
      }
    }
    FUN_100c30bc0(&stack0x00002580,pcVar3 + 0x28,*(undefined8 *)(unaff_x20 + 0x4b10),
                  *(undefined8 *)(unaff_x20 + 0x4b18));
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar3,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar3,1,pcVar3);
    *(undefined1 *)(unaff_x19 + 0x325) = 0;
    FUN_100df5738(unaff_x20 + 0x7648);
    *(undefined1 *)(unaff_x19 + 0x326) = 0;
    if (*(long *)(unaff_x20 + 0x7598) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x75a0));
    }
    if (*(long *)(unaff_x20 + 0x73a8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x73b0));
    }
    func_0x000100dfc74c(unaff_x20 + 0x73c0);
    FUN_100e26e4c(unaff_x20 + 0x70b0);
    lVar5 = **(long **)(unaff_x20 + 0x70a8);
    **(long **)(unaff_x20 + 0x70a8) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x70a8);
    }
    *(undefined1 *)(unaff_x19 + 0x321) = 0;
    lVar5 = **(long **)(unaff_x20 + 0x7090);
    **(long **)(unaff_x20 + 0x7090) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E(unaff_x20 + 0x7090);
    }
    *(undefined1 *)(unaff_x19 + 0x322) = 0;
    lVar5 = **(long **)(unaff_x20 + 0x7088);
    **(long **)(unaff_x20 + 0x7088) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(unaff_x20 + 0x7088);
    }
    lVar5 = **(long **)(unaff_x20 + 0x7080);
    **(long **)(unaff_x20 + 0x7080) = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x20 + 0x7080);
    }
    *(undefined1 *)(unaff_x19 + 0x323) = 0;
    FUN_100de93d0(unaff_x20 + 0x4b38);
    if (*(long *)(unaff_x20 + 0x4b20) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x4b28));
    }
    plVar4 = *(long **)(unaff_x20 + 0x4b10);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      *plVar4 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x20 + 0x4b10);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x324) = 0;
    uVar7 = 1;
    *(undefined1 *)(unaff_x19 + 800) = 1;
    func_0x000100cc1538(in_stack_00000018);
    uVar6 = 0;
  }
  *(undefined1 *)(unaff_x24 + 0x18) = uVar7;
  return uVar6;
}

