
/* WARNING: Removing unreachable block (ram,0x0001002927ac) */
/* WARNING: Removing unreachable block (ram,0x0001002929a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100292734(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *unaff_x21;
  uint in_stack_00000020;
  undefined4 *in_stack_00000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  long in_stack_00000820;
  undefined8 in_stack_00000828;
  ulong in_stack_00000830;
  undefined8 in_stack_00000aa0;
  
  puStack0000000000000040 = &stack0x00000960;
  puStack0000000000000048 = &UNK_10b1f3630;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000830 >> 0x1f != 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c75429,0x37,&UNK_10b1f51e0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100293424);
    (*pcVar1)();
  }
  __ZN2h25proto7streams4recv4Recv11ignore_data17h9dae9767af5cac28E(&stack0x00000a80);
  (**(code **)(in_stack_00000820 + 0x20))(&stack0x00000838,in_stack_00000828,in_stack_00000830);
  if ((((in_stack_00000020 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar2 = FUN_107c05e34(), (uVar2 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *(undefined8 *)(in_stack_00000038 + 10) = in_stack_00000aa0;
  *(undefined8 *)(in_stack_00000038 + 8) = param_1;
  *(undefined1 *)(in_stack_00000038 + 2) = 1;
  *(undefined1 *)((long)in_stack_00000038 + 9) = 0;
  *(undefined2 *)((long)in_stack_00000038 + 10) = 0;
  in_stack_00000038[3] = 0;
  *(undefined1 ***)(in_stack_00000038 + 4) = &stack0x00000040;
  *(undefined8 *)(in_stack_00000038 + 6) = 1;
  *in_stack_00000038 = 1;
  return;
}

