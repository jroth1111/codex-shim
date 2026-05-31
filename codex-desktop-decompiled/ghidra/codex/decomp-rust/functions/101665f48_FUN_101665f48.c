
void FUN_101665f48(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 *puStack0000000000000048;
  undefined8 uStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined *puStack0000000000000068;
  char *pcStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined1 *puStack0000000000000090;
  undefined1 *puStack00000000000000a0;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *pcStack00000000000000e0;
  long lStack00000000000000e8;
  
  puStack0000000000000078 = &stack0x00000080;
  pcStack0000000000000070 = s__Error_finding_conversation_path_108ada402;
  puStack0000000000000060 = (undefined1 *)&stack0x00000070;
  puStack0000000000000068 = &UNK_10b208fd0;
  puStack0000000000000048 = (undefined1 *)&stack0x00000060;
  uStack00000000000000b0 = *(undefined8 *)(unaff_x25 + 0x60);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x25 + 0x68);
  puStack00000000000000a0 = *(undefined1 **)(unaff_x25 + 0x58);
  puStack0000000000000090 = (undefined1 *)unaff_x23;
  if (*(long *)(unaff_x25 + 0x50) == 0) {
    puStack0000000000000090 = (undefined1 *)(unaff_x23 + 1);
  }
  uStack00000000000000d8 = *(undefined4 *)(unaff_x25 + 8);
  uStack00000000000000dc = *(undefined4 *)(unaff_x25 + 0xc);
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000040;
  *(char *)(unaff_x29 + -0x68) = (char)unaff_x23;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
  uStack00000000000000c8 = in_stack_00000030;
  uStack00000000000000c0 = in_stack_00000028;
  uStack00000000000000d0 = in_stack_00000038;
  lStack00000000000000e8 = unaff_x29 + -0x60;
  pcStack00000000000000e0 = s__108b39f4f;
  uStack0000000000000058 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  __ZN9codex_tui20TerminalRestoreGuard16restore_silently17hc7f24a05eb7d3823E(*unaff_x20);
  __ZN9codex_tui11session_log15log_session_end17h7062f4130039c03eE();
  lVar1 = unaff_x20[1];
  if ((*(short *)(lVar1 + 0x54) != 0 && *(short *)(lVar1 + 0x56) != 0) &&
     (uVar2 = FUN_10165939c(lVar1,*(undefined2 *)(lVar1 + 0x50),*(undefined2 *)(lVar1 + 0x52)),
     (uVar2 & 3) == 1)) {
    uVar4 = *(undefined8 *)(uVar2 - 1);
    puVar5 = *(undefined8 **)(uVar2 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(uVar2 - 1));
  }
  puStack0000000000000090 = &stack0x00000008;
  puStack00000000000000a0 = &stack0x00000018;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x19 + 3,s_No_saved_session_found_with_ID___108ada426,&stack0x00000090);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
  unaff_x19[9] = 0;
  unaff_x19[8] = 0;
  *(undefined8 *)((long)unaff_x19 + 0x51) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x49) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x69) = 5;
  return;
}

