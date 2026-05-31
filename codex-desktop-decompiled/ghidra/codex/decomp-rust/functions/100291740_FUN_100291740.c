
/* WARNING: Removing unreachable block (ram,0x000100292828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100291740(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  undefined8 uVar5;
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
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x000006a0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar5 = *unaff_x19;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000560);
    if (iVar3 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar5,puVar2,puVar1,&stack0x00000560,&stack0x000006a0);
    }
  }
  (**(code **)(in_stack_00000820 + 0x20))(&stack0x00000838,in_stack_00000828,in_stack_00000830);
  if ((((in_stack_00000020 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar4 = FUN_107c05e34(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(unaff_x21 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x21);
  *in_stack_00000038 = 0x200000000;
  return;
}

