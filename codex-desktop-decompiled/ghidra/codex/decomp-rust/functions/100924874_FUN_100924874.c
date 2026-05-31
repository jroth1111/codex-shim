
bool FUN_100924874(void)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x23;
  undefined8 *puVar4;
  ulong in_stack_000055e0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_000055e0 & 3) == 1) {
    uVar3 = *(undefined8 *)(in_stack_000055e0 - 1);
    puVar4 = *(undefined8 **)(in_stack_000055e0 + 7);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(in_stack_000055e0 - 1));
    bVar1 = *(byte *)(unaff_x19 + 0x6a1);
  }
  else {
    bVar1 = *(byte *)(unaff_x19 + 0x6a1);
  }
  if (((bVar1 & 1) != 0) && (*(long *)(unaff_x19 + 0xb8) != -0x7ffffffffffffffd)) {
    FUN_100e0609c();
  }
  *(undefined1 *)(unaff_x19 + 0x6a1) = 0;
  *(undefined1 *)(unaff_x19 + 0x6a0) = 1;
  return unaff_x23 == 3;
}

