
undefined8 FUN_10169224c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 uVar2;
  undefined8 *in_stack_00000008;
  char *pcStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined *puStack0000000000000090;
  
  puStack0000000000000018 = &stack0x000000a0;
  pcStack0000000000000010 = s_failed_to_unsubscribe_thread___108adadf0;
  puStack0000000000000088 = (undefined1 *)&stack0x00000010;
  puStack0000000000000090 = &UNK_10b208fd0;
  puStack0000000000000070 = (undefined1 *)&stack0x00000088;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 1;
  uStack0000000000000080 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000008)();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  unaff_x23[1] = *(undefined8 *)(unaff_x19 + 0x20);
  *unaff_x23 = uVar2;
  __ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_27abort_thread_event_listener17hc7624571bfeae477E
            (uVar1,&stack0x000000a0);
  *(undefined1 *)(unaff_x19 + 0x948) = 1;
  return 0;
}

