
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009cbd2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  char *pcVar12;
  undefined8 extraout_x1;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x19;
  undefined1 uVar15;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x25;
  long lVar16;
  long unaff_x26;
  undefined1 *unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 uStack00000000000000c0;
  undefined1 *puStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined1 *puStack00000000000000e8;
  undefined *puStack00000000000000f0;
  char *pcStack00000000000000f8;
  undefined1 *puStack0000000000000100;
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
  
  puStack0000000000000100 = &stack0x00000108;
  pcStack00000000000000f8 = s_Failed_to_submit_user_input__108accf78;
  puStack00000000000000e8 = (undefined1 *)&stack0x000000f8;
  puStack00000000000000f0 = &UNK_10b208fd0;
  puStack00000000000000c8 = (undefined1 *)&stack0x000000e8;
  uStack00000000000000c0 = 1;
  uStack00000000000000d0 = 1;
  uStack00000000000000d8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000c0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar16 = *unaff_x25;
    uVar14 = *(undefined8 *)(lVar16 + 0x20);
    uVar7 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x100) = 1;
    *(undefined8 *)(unaff_x29 + -0xf8) = uVar14;
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar7;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x100);
    if (iVar11 != 0) {
      lVar10 = *(long *)(lVar16 + 0x60);
      uVar7 = *(undefined8 *)(lVar16 + 0x68);
      lVar6 = *(long *)(lVar16 + 0x50);
      uVar8 = *(undefined8 *)(lVar16 + 0x58);
      uVar14 = 1;
      if (lVar6 == 0) {
        uVar14 = 2;
      }
      uVar4 = *(undefined4 *)(lVar16 + 8);
      uVar5 = *(undefined4 *)(lVar16 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x000000c0;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar10 == 0) {
        uVar1 = 2;
      }
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xf8);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0x100);
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xf0);
      *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar14;
      *(long *)(unaff_x29 + -0xd8) = lVar6;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
      *(undefined8 *)(unaff_x29 + -200) = uVar1;
      *(long *)(unaff_x29 + -0xc0) = lVar10;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
      *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
    }
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x100) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x28;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_Failed_to_submit_user_input__108accf78,unaff_x29 + -0x100);
  puStack00000000000000c8 = *(undefined1 **)(unaff_x29 + -0xd8);
  uStack00000000000000c0 = *(undefined8 *)(unaff_x29 + -0xe0);
  uStack00000000000000d0 = *(undefined8 *)(unaff_x29 + -0xd0);
  __ZN16codex_mcp_server17codex_tool_runner38create_call_tool_result_with_thread_id17h3601e7ab73c1e301E
            (&stack0x00000130,unaff_x29 + -0x70,&stack0x000000c0,1);
  *(undefined1 *)(unaff_x19 + 0x20e) = 1;
  lVar16 = *(long *)(unaff_x19 + 0xb8);
  plVar13 = *(long **)(unaff_x19 + 0xc0);
  if ((plVar13 != (long *)0x0) && (lVar10 = *plVar13, *plVar13 = lVar10 + 1, lVar10 < 0)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1009cc288);
    (*pcVar9)();
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 200);
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
  *(long *)(unaff_x19 + 0x2c0) = lVar16 + 0x10;
  *(long **)(unaff_x19 + 0x2c8) = plVar13;
  *(undefined8 *)(unaff_x19 + 0x2d0) = uVar14;
  *(undefined1 *)(unaff_x19 + 0x3b0) = 0;
  func_0x0001009b7030(unaff_x19 + 0x210);
  FUN_100d5ee48(unaff_x19 + 0x210);
  *(long *)(unaff_x19 + 0x210) = *(long *)(unaff_x19 + 0xd0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x280) = 0;
  pcVar12 = (char *)FUN_100fd3e50(unaff_x19 + 0x210);
  if (pcVar12 == (char *)0x0) {
    *unaff_x27 = 6;
    uVar15 = 3;
    uVar14 = 1;
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
    FUN_100c30bc0(unaff_x29 + -0xe0,pcVar12 + 0x28,*(undefined8 *)(unaff_x19 + 0xc0),
                  *(undefined8 *)(unaff_x19 + 200));
    if (*pcVar12 == '\0') {
      *pcVar12 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar12,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar12,1,pcVar12);
    *(undefined1 *)(unaff_x19 + 0x20e) = 0;
    FUN_100df5738(unaff_x19 + 0x170);
    if ((*(long *)(unaff_x19 + 0xd8) == unaff_x26) && (*(long *)(unaff_x19 + 0xe0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    lVar16 = **(long **)(unaff_x19 + 0xd0);
    **(long **)(unaff_x19 + 0xd0) = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E();
    }
    *(undefined2 *)(unaff_x19 + 0x209) = 0;
    plVar13 = *(long **)(unaff_x19 + 0xc0);
    if (plVar13 != (long *)0x0) {
      lVar16 = *plVar13;
      *plVar13 = lVar16 + -1;
      LORelease();
      if (lVar16 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                  ((undefined8 *)(unaff_x19 + 0xc0));
      }
    }
    *(undefined1 *)(unaff_x19 + 0x20b) = 0;
    lVar16 = **(long **)(unaff_x19 + 0xb8);
    **(long **)(unaff_x19 + 0xb8) = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E();
    }
    *(undefined1 *)(unaff_x19 + 0x20c) = 0;
    lVar16 = **(long **)(unaff_x19 + 0xb0);
    **(long **)(unaff_x19 + 0xb0) = lVar16 + -1;
    LORelease();
    if (lVar16 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    *(undefined1 *)(unaff_x19 + 0x20d) = 0;
    uVar15 = 1;
    *unaff_x27 = 1;
    func_0x000100cd5474();
    uVar14 = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xef0) = uVar15;
  return uVar14;
}

