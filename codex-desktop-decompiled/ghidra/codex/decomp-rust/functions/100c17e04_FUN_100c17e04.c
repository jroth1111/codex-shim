
/* WARNING: Removing unreachable block (ram,0x000100c17e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c17e04(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  uint in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  FUN_100c2a168(&stack0x000006a0);
  FUN_100def764(&stack0x00000400);
  func_0x000100dea8fc(&stack0x00000460);
  if ((((in_stack_00000030 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = func_0x000108a82c0c(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *in_stack_00000038 = 0x200000000;
  return;
}

