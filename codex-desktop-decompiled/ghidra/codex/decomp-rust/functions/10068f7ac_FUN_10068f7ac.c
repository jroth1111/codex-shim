
undefined8 FUN_10068f7ac(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  byte in_stack_000003c0;
  ulong in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  
  puStack00000000000000e8 = &stack0x00000250;
  uStack00000000000000e0 = 1;
  uStack00000000000000f0 = 1;
  uStack00000000000000f8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((1 < in_stack_000003c0 - 2) && (in_stack_000003c0 != 0)) {
    if (in_stack_000003c0 == 1) {
      (**(code **)(in_stack_000003c8 + 0x20))(&stack0x000003e0,in_stack_000003d0,in_stack_000003d8);
    }
    else if ((in_stack_000003c8 & 3) == 1) {
      uVar2 = *(undefined8 *)(in_stack_000003c8 - 1);
      puVar3 = *(undefined8 **)(in_stack_000003c8 + 7);
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar2);
      }
      if (puVar3[1] != 0) {
        _free(uVar2);
      }
      _free((undefined8 *)(in_stack_000003c8 - 1));
    }
  }
  return 0;
}

