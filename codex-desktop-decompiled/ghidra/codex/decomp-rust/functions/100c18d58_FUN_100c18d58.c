
/* WARNING: Removing unreachable block (ram,0x000100c18b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c18d58(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x25;
  undefined8 uVar4;
  ulong in_stack_00000018;
  int in_stack_00000020;
  uint in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined2 in_stack_00000822;
  undefined8 in_stack_0000082c;
  undefined4 in_stack_00000834;
  undefined4 in_stack_00000838;
  undefined4 in_stack_0000083c;
  undefined8 in_stack_00000840;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = __ZN74__LT_h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h4647af2e74121437E
                    (&stack0x00000690);
  uVar1 = *(undefined4 *)(lVar2 + 0x124);
  FUN_100def764(&stack0x000006a0);
  func_0x000100dea8fc(&stack0x00000700);
  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
            (unaff_x21 + 2,&stack0x000006a0,in_stack_00000020 != 1000000000);
  *(undefined8 *)(unaff_x25 + 0x2c) = in_stack_00000840;
  *(ulong *)(unaff_x25 + 0x24) = CONCAT44(in_stack_0000083c,in_stack_00000838);
  if ((((in_stack_00000018 & 0x100000000) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar3 = func_0x000108a82c0c(), (uVar3 & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x20);
  if ((((in_stack_00000030 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar3 = func_0x000108a82c0c(), (uVar3 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *(ulong *)(in_stack_00000038 + 7) = CONCAT44(in_stack_00000838,in_stack_00000834);
  *(undefined8 *)(in_stack_00000038 + 5) = in_stack_0000082c;
  uVar4 = *(undefined8 *)(unaff_x25 + 0x24);
  *(undefined8 *)(in_stack_00000038 + 10) = *(undefined8 *)(unaff_x25 + 0x2c);
  *(undefined8 *)(in_stack_00000038 + 8) = uVar4;
  *(undefined1 *)(in_stack_00000038 + 2) = 0;
  *(undefined1 *)((long)in_stack_00000038 + 9) = 1;
  *(undefined2 *)((long)in_stack_00000038 + 10) = in_stack_00000822;
  *(ulong *)(in_stack_00000038 + 3) = CONCAT44(1,uVar1);
  *in_stack_00000038 = 1;
  return;
}

