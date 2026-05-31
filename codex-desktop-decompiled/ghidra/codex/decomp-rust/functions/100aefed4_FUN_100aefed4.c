
/* WARNING: Removing unreachable block (ram,0x000100af1804) */
/* WARNING: Removing unreachable block (ram,0x000100af172c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aefed4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x29;
  undefined1 *puStack0000000000000050;
  long lStack0000000000000058;
  long in_stack_00000640;
  undefined1 *in_stack_00000648;
  long in_stack_00000650;
  long in_stack_00000658;
  long in_stack_00000660;
  long in_stack_00000668;
  long in_stack_00000670;
  long in_stack_00000678;
  long in_stack_00000680;
  long in_stack_00000688;
  long in_stack_00000690;
  long in_stack_00000698;
  long in_stack_000006a0;
  long in_stack_000006a8;
  long in_stack_000006b0;
  long in_stack_000006b8;
  long in_stack_000006c0;
  long in_stack_000006c8;
  
  FUN_100af3de0(&stack0x00000390);
  *(long *)(unaff_x19 + 0x3a0) = *(long *)(unaff_x19 + 0x220) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x3b0) = 0;
  FUN_100b15b38(&stack0x00000390,(undefined8 *)(unaff_x19 + 0x3a0));
  if (*(char *)(unaff_x19 + 0x3b0) == '\x04') {
    if ((*(char *)(unaff_x19 + 0x410) == '\x03') && (*(char *)(unaff_x19 + 0x408) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x3c8);
      if (*(long *)(unaff_x19 + 0x3d0) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x3d0) + 0x18))(*(undefined8 *)(unaff_x19 + 0x3d8));
      }
    }
  }
  else if (*(char *)(unaff_x19 + 0x3b0) == '\x03') {
    FUN_100cd5a2c(unaff_x19 + 0x3b8);
  }
  FUN_100aed454(&stack0x00000640,&UNK_108cb8398,0x24,&stack0x00000790);
  puStack0000000000000050 = in_stack_00000648;
  lStack0000000000000058 = in_stack_00000650;
  if (in_stack_00000640 == 3) {
    if (((ulong)in_stack_00000648 & 1) == 0) {
      lVar3 = **(long **)(unaff_x19 + 0x220);
      **(long **)(unaff_x19 + 0x220) = lVar3 + 1;
      if (lVar3 < 0) {
LAB_100af24e8:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100af24ec);
        (*pcVar8)();
      }
      in_stack_00000640 = 2;
      in_stack_00000690 = 2;
      FUN_1047bc38c(unaff_x19 + 0xc80,&stack0x00000640,&stack0x00000390);
    }
    else {
      lVar3 = **(long **)(unaff_x19 + 0x220);
      **(long **)(unaff_x19 + 0x220) = lVar3 + 1;
      if (lVar3 < 0) goto LAB_100af24e8;
      __ZN19codex_network_proxy8upstream14UpstreamClient14from_env_proxy17hd8b471f135c459fcE
                (unaff_x19 + 0xc80);
    }
    __ZN19codex_network_proxy10http_proxy33remove_hop_by_hop_request_headers17hdaa7e6bc1924e873E
              (unaff_x19 + 0x120);
    *(undefined1 *)(unaff_x19 + 0x39f) = 0;
    *(undefined8 *)(unaff_x19 + 0x468) = *(undefined8 *)(unaff_x19 + 0x1e8);
    *(undefined8 *)(unaff_x19 + 0x460) = *(undefined8 *)(unaff_x19 + 0x1e0);
    *(undefined8 *)(unaff_x19 + 0x478) = *(undefined8 *)(unaff_x19 + 0x1f8);
    *(undefined8 *)(unaff_x19 + 0x470) = *(undefined8 *)(unaff_x19 + 0x1f0);
    *(undefined8 *)(unaff_x19 + 0x488) = *(undefined8 *)(unaff_x19 + 0x208);
    *(undefined8 *)(unaff_x19 + 0x480) = *(undefined8 *)(unaff_x19 + 0x200);
    *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x19 + 0x490) = *(undefined8 *)(unaff_x19 + 0x210);
    *(undefined8 *)(unaff_x19 + 0x428) = *(undefined8 *)(unaff_x19 + 0x1a8);
    *(undefined8 *)(unaff_x19 + 0x420) = *(undefined8 *)(unaff_x19 + 0x1a0);
    *(undefined8 *)(unaff_x19 + 0x438) = *(undefined8 *)(unaff_x19 + 0x1b8);
    *(undefined8 *)(unaff_x19 + 0x430) = *(undefined8 *)(unaff_x19 + 0x1b0);
    *(undefined8 *)(unaff_x19 + 0x448) = *(undefined8 *)(unaff_x19 + 0x1c8);
    *(undefined8 *)(unaff_x19 + 0x440) = *(undefined8 *)(unaff_x19 + 0x1c0);
    *(undefined8 *)(unaff_x19 + 0x458) = *(undefined8 *)(unaff_x19 + 0x1d8);
    *(undefined8 *)(unaff_x19 + 0x450) = *(undefined8 *)(unaff_x19 + 0x1d0);
    *(undefined8 *)(unaff_x19 + 1000) = *(undefined8 *)(unaff_x19 + 0x168);
    *(undefined8 *)(unaff_x19 + 0x3e0) = *(undefined8 *)(unaff_x19 + 0x160);
    *(undefined8 *)(unaff_x19 + 0x3f8) = *(undefined8 *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x19 + 0x3f0) = *(undefined8 *)(unaff_x19 + 0x170);
    *(undefined8 *)(unaff_x19 + 0x408) = *(undefined8 *)(unaff_x19 + 0x188);
    *(undefined8 *)(unaff_x19 + 0x400) = *(undefined8 *)(unaff_x19 + 0x180);
    *(undefined8 *)(unaff_x19 + 0x418) = *(undefined8 *)(unaff_x19 + 0x198);
    *(undefined8 *)(unaff_x19 + 0x410) = *(undefined8 *)(unaff_x19 + 400);
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0x128);
    *(undefined8 *)(unaff_x19 + 0x3a0) = *(undefined8 *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x130);
    *(undefined8 *)(unaff_x19 + 0x3c8) = *(undefined8 *)(unaff_x19 + 0x148);
    *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x158);
    *(undefined8 *)(unaff_x19 + 0x3d0) = *(undefined8 *)(unaff_x19 + 0x150);
    *(long *)(unaff_x19 + 0x4a0) = unaff_x19 + 0xc80;
    *(undefined1 *)(unaff_x19 + 0x6b8) = 0;
    FUN_10075ce14(&stack0x00000640,unaff_x19 + 0x3a0);
    if (in_stack_00000640 == 4) {
      *unaff_x20 = 3;
      uVar7 = 0xe;
      goto LAB_100af2164;
    }
    FUN_100d8de08(unaff_x19 + 0x3a0);
    if (in_stack_00000640 == 3) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62e768 - 1 < 2 ||
           ((bRam000000010b62e768 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84fa16d0088429a3E
                               ), cVar4 != '\0')))) &&
          (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84fa16d0088429a3E
                             ), (uVar6 & 1) != 0)))) {
        in_stack_00000658 =
             ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84fa16d0088429a3E
             + 0x30;
        puStack0000000000000050 = &stack0x00000790;
        in_stack_00000640 = 1;
        lStack0000000000000058 = 1;
        FUN_100af3f1c(&stack0x00000640);
      }
      else {
        lVar3 = 
        ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84fa16d0088429a3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000005a8);
          if (iVar5 != 0) {
            in_stack_00000658 =
                 ___ZN19codex_network_proxy10http_proxy16http_plain_proxy28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h84fa16d0088429a3E
                 + 0x30;
            puStack0000000000000050 = &stack0x00000740;
            in_stack_00000640 = 1;
            lStack0000000000000058 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&stack0x00000390,&stack0x00000640);
          }
        }
      }
      __ZN19codex_network_proxy9responses13text_response17hb12ec00a07c01d4aE
                (&stack0x00000640,0x1f6,&UNK_108cdcf40,0x10);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x90);
      puVar11 = *(undefined8 **)(unaff_x29 + -0x88);
      pcVar8 = (code *)*puVar11;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar10);
      }
      if (puVar11[1] != 0) {
        _free(uVar10);
      }
    }
    lVar3 = **(long **)(unaff_x19 + 0xd70);
    **(long **)(unaff_x19 + 0xd70) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0xd70);
    }
    FUN_100e17094(unaff_x19 + 0xc80);
    FUN_100e43948(unaff_x19 + 0x2e0);
    if (*(long *)(unaff_x19 + 0x2c8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2d0));
    }
    *(undefined1 *)(unaff_x19 + 0x39d) = 0;
    if ((*(byte *)(unaff_x19 + 0x2a8) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x2a8))) {
      lVar3 = **(long **)(unaff_x19 + 0x2b0);
      **(long **)(unaff_x19 + 0x2b0) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x2b0);
      }
    }
    if ((5 < *(byte *)(unaff_x19 + 0x268) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x268))) {
      lVar3 = **(long **)(unaff_x19 + 0x270);
      **(long **)(unaff_x19 + 0x270) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x270);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x280) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x280))) {
      lVar3 = **(long **)(unaff_x19 + 0x288);
      **(long **)(unaff_x19 + 0x288) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x288);
      }
    }
    if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x230));
    }
    lVar3 = **(long **)(unaff_x19 + 0x220);
    **(long **)(unaff_x19 + 0x220) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
    }
    *(undefined1 *)(unaff_x19 + 0x39f) = 0;
    plVar9 = *(long **)(unaff_x19 + 0x110);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
      *plVar9 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
      }
    }
  }
  else {
    FUN_100e43948(unaff_x19 + 0x2e0);
    if (((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) && (*(long *)(unaff_x19 + 0x2c8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2d0));
    }
    *(undefined1 *)(unaff_x19 + 0x39d) = 0;
    if ((*(byte *)(unaff_x19 + 0x2a8) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x2a8))) {
      lVar3 = **(long **)(unaff_x19 + 0x2b0);
      **(long **)(unaff_x19 + 0x2b0) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x2b0);
      }
    }
    if ((5 < *(byte *)(unaff_x19 + 0x268) - 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x268))) {
      lVar3 = **(long **)(unaff_x19 + 0x270);
      **(long **)(unaff_x19 + 0x270) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x270);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x280) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x280))) {
      lVar3 = **(long **)(unaff_x19 + 0x288);
      **(long **)(unaff_x19 + 0x288) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x288);
      }
    }
    if ((*(long *)(unaff_x19 + 0x228) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x228) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x230));
    }
    lVar3 = **(long **)(unaff_x19 + 0x220);
    **(long **)(unaff_x19 + 0x220) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(unaff_x19 + 0x220);
    }
    if ((*(byte *)(unaff_x19 + 0x39f) & 1) != 0) {
      FUN_100df6754(unaff_x19 + 0x120);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x210);
      puVar11 = *(undefined8 **)(unaff_x19 + 0x218);
      pcVar8 = (code *)*puVar11;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar10);
      }
      if (puVar11[1] != 0) {
        _free(uVar10);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x39f) = 0;
    plVar9 = *(long **)(unaff_x19 + 0x110);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
      *plVar9 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(unaff_x19 + 0x110);
      }
    }
  }
  unaff_x20[2] = lStack0000000000000058;
  unaff_x20[1] = (long)puStack0000000000000050;
  unaff_x20[0xc] = in_stack_000006a0;
  unaff_x20[0xb] = in_stack_00000698;
  unaff_x20[0xe] = in_stack_000006b0;
  unaff_x20[0xd] = in_stack_000006a8;
  unaff_x20[0x10] = in_stack_000006c0;
  unaff_x20[0xf] = in_stack_000006b8;
  unaff_x20[4] = in_stack_00000660;
  unaff_x20[3] = in_stack_00000658;
  unaff_x20[6] = in_stack_00000670;
  unaff_x20[5] = in_stack_00000668;
  unaff_x20[8] = in_stack_00000680;
  unaff_x20[7] = in_stack_00000678;
  *unaff_x20 = in_stack_00000640;
  unaff_x20[0x11] = in_stack_000006c8;
  uVar7 = 1;
  unaff_x20[10] = in_stack_00000690;
  unaff_x20[9] = in_stack_00000688;
LAB_100af2164:
  *(undefined1 *)(unaff_x19 + 0x39a) = uVar7;
  return;
}

