
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101665d3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long lStack0000000000000080;
  undefined *puStack0000000000000088;
  undefined1 *puStack0000000000000090;
  undefined1 *puStack00000000000000a0;
  
  *(char **)(unaff_x29 + -0x70) = s__Error_finding_conversation_path_108ada402;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x60;
  lStack0000000000000080 = unaff_x29 + -0x70;
  puStack0000000000000088 = &UNK_10b208fd0;
  puStack0000000000000090 = (undefined1 *)0x1;
  puStack00000000000000a0 = (undefined1 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000090);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar6 = *unaff_x21;
    in_stack_00000048 = *(undefined8 *)(lVar6 + 0x20);
    in_stack_00000050 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000040 = 1;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000040);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar6,puVar2,puVar1,&stack0x00000040,&stack0x00000090);
    }
  }
  __ZN9codex_tui20TerminalRestoreGuard16restore_silently17hc7f24a05eb7d3823E(*unaff_x20);
  __ZN9codex_tui11session_log15log_session_end17h7062f4130039c03eE();
  lVar6 = unaff_x20[1];
  if ((*(short *)(lVar6 + 0x54) != 0 && *(short *)(lVar6 + 0x56) != 0) &&
     (uVar4 = FUN_10165939c(lVar6,*(undefined2 *)(lVar6 + 0x50),*(undefined2 *)(lVar6 + 0x52)),
     (uVar4 & 3) == 1)) {
    uVar7 = *(undefined8 *)(uVar4 - 1);
    puVar8 = *(undefined8 **)(uVar4 + 7);
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar8[1] != 0) {
      _free(uVar7);
    }
    _free((undefined8 *)(uVar4 - 1));
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

