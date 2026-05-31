
/* WARNING: Removing unreachable block (ram,0x000100291d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100291cac(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 *in_stack_00000038;
  
  FUN_1002a7234(&stack0x000006a0);
  FUN_1002bf550(&stack0x00000400);
  FUN_1002beeb4(&stack0x00000460);
  if ((((unaff_x22 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = FUN_107c05e34(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *in_stack_00000038 = 0x200000000;
  return;
}

