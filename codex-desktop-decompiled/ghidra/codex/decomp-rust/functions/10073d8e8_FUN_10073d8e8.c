
undefined1  [16] FUN_10073d8e8(void)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  code *pcVar3;
  long unaff_x19;
  undefined1 unaff_w20;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000300;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s__Failed_to_read_requirements_fil_108ac5be3,&stack0x00000358);
  *(undefined8 *)(unaff_x25 + 0x348) = in_stack_00000020;
  *(undefined8 *)(unaff_x25 + 0x340) = in_stack_00000018;
  uVar2 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(unaff_w20,&stack0x00000640);
  if ((in_stack_00000300 & 3) == 1) {
    uVar4 = *(undefined8 *)(in_stack_00000300 - 1);
    puVar5 = *(undefined8 **)(in_stack_00000300 + 7);
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(in_stack_00000300 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

