
/* WARNING: Removing unreachable block (ram,0x000100c18b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c15a8c(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  uint in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack00000000000001a0;
  undefined1 *puStack00000000000001a8;
  
  puStack00000000000001a8 = &stack0x00000a80;
  pcStack00000000000001a0 = s_id_____>_max_stream_id______igno_108ac8440;
  puStack0000000000000040 = (undefined1 *)&stack0x000001a0;
  puStack0000000000000048 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100def764(&stack0x000006a0);
  func_0x000100dea8fc(&stack0x00000700);
  if ((((in_stack_00000030 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = func_0x000108a82c0c(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *in_stack_00000038 = 0x200000000;
  return;
}

