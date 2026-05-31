
undefined8 FUN_100776f94(void)

{
  long unaff_x19;
  undefined8 *in_stack_00000540;
  
  FUN_1007795bc(&stack0x00000570);
  (**(code **)*in_stack_00000540)();
  if (*(long *)(unaff_x19 + 0x440) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x448));
  }
  FUN_100e31b20(unaff_x19 + 0x268);
  *(undefined2 *)(unaff_x19 + 0x631) = 0;
  *(undefined1 *)(unaff_x19 + 0x633) = 1;
  return 0;
}

