
undefined8 FUN_1006c5074(void)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined1 *puStack0000000000000160;
  undefined *puStack0000000000000168;
  char *pcStack0000000000000170;
  undefined8 *puStack0000000000000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  puStack0000000000000178 = &stack0x00000180;
  pcStack0000000000000170 = s_0canceling_queued_request_with_c_108ac2e6c;
  puStack0000000000000160 = (undefined1 *)&stack0x00000170;
  puStack0000000000000168 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  in_stack_00000188 = in_stack_00000138;
  in_stack_00000180 = in_stack_00000130;
  in_stack_00000190 = in_stack_00000140;
  plVar2 = (long *)_malloc(0x18);
  if (plVar2 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 2) = 4;
    pcStack0000000000000170 = (char *)plVar2;
    puVar3 = (undefined8 *)_malloc(8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = in_stack_00000000;
      *plVar2 = (long)puVar3;
      plVar2[1] = (long)&UNK_10b21ddf8;
      in_stack_00000190 = CONCAT71(in_stack_00000190._1_7_,1);
      FUN_10084e7d8(in_stack_00000180,in_stack_00000188,&stack0x000002a0);
      return 0;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006c525c);
  (*pcVar1)();
}

