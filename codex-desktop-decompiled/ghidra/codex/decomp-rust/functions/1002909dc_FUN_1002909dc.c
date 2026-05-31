
/* WARNING: Removing unreachable block (ram,0x000100292828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002909dc(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  uint in_stack_00000020;
  undefined8 *in_stack_00000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  long in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined8 in_stack_00000830;
  
  puStack0000000000000040 = &stack0x00000960;
  puStack0000000000000048 = &UNK_10b1f3630;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)(in_stack_00000820 + 0x20))(&stack0x00000838,in_stack_00000828,in_stack_00000830);
  if ((((in_stack_00000020 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = FUN_107c05e34(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *in_stack_00000038 = 0x200000000;
  return;
}

