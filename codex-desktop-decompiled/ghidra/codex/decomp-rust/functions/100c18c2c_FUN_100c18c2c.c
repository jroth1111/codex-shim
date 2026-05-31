
/* WARNING: Removing unreachable block (ram,0x000100c18b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c18c2c(void)

{
  ulong uVar1;
  undefined8 *unaff_x21;
  undefined2 unaff_w24;
  long unaff_x25;
  undefined8 uVar2;
  uint in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_0000052c;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100def764(&stack0x00000400);
  func_0x000100dea8fc(&stack0x00000460);
  if ((((in_stack_00000030 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar1 = func_0x000108a82c0c(), (uVar1 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *(undefined8 *)(in_stack_00000038 + 7) = in_stack_00000188;
  *(undefined8 *)(in_stack_00000038 + 5) = in_stack_00000180;
  uVar2 = *(undefined8 *)(unaff_x25 + 0x24);
  *(undefined8 *)(in_stack_00000038 + 10) = *(undefined8 *)(unaff_x25 + 0x2c);
  *(undefined8 *)(in_stack_00000038 + 8) = uVar2;
  *(undefined1 *)(in_stack_00000038 + 2) = 0;
  *(undefined1 *)((long)in_stack_00000038 + 9) = 1;
  *(undefined2 *)((long)in_stack_00000038 + 10) = unaff_w24;
  *(ulong *)(in_stack_00000038 + 3) = CONCAT44(5,in_stack_0000052c);
  *in_stack_00000038 = 1;
  return;
}

