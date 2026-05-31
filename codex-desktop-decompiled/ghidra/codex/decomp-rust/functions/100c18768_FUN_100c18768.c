
/* WARNING: Removing unreachable block (ram,0x000100c18b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c18768(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  undefined2 unaff_w25;
  uint in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  long in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  
  puStack0000000000000040 = &stack0x00000960;
  puStack0000000000000048 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)(in_stack_00000820 + 0x20))(&stack0x00000838,in_stack_00000828,in_stack_00000830);
  if ((((in_stack_00000030 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = func_0x000108a82c0c(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *(undefined8 *)(in_stack_00000038 + 10) = 0;
  *(undefined8 *)(in_stack_00000038 + 8) = 0;
  *(undefined1 *)(in_stack_00000038 + 2) = 1;
  *(undefined1 *)((long)in_stack_00000038 + 9) = 1;
  *(undefined2 *)((long)in_stack_00000038 + 10) = unaff_w25;
  in_stack_00000038[3] = 1;
  *(undefined **)(in_stack_00000038 + 4) = &UNK_10b209220;
  *(undefined8 *)(in_stack_00000038 + 6) = 1;
  *in_stack_00000038 = 1;
  return;
}

