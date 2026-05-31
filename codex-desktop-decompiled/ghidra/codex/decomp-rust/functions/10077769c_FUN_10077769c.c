
undefined8 FUN_10077769c(void)

{
  code *pcVar1;
  long unaff_x19;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *in_stack_00000540;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000540)();
  *(undefined1 *)(unaff_x19 + 0xe88) = 1;
  func_0x000100e13d44(unaff_x19 + 0x638);
  if ((*(long *)(unaff_x19 + 0x458) == -0x8000000000000000) &&
     (uVar2 = *(ulong *)(unaff_x19 + 0x460), (uVar2 & 3) == 1)) {
    uVar3 = *(undefined8 *)(uVar2 - 1);
    puVar4 = *(undefined8 **)(uVar2 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
    _free((undefined8 *)(uVar2 - 1));
  }
  if (*(long *)(unaff_x19 + 0x440) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x448));
  }
  FUN_100e31b20(unaff_x19 + 0x268);
  *(undefined2 *)(unaff_x19 + 0x631) = 0;
  *(undefined1 *)(unaff_x19 + 0x633) = 1;
  return 0;
}

