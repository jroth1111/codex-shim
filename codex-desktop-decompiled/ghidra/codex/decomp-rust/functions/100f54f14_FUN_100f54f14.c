
undefined1  [16] FUN_100f54f14(void)

{
  long unaff_x19;
  long unaff_x22;
  long unaff_x29;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x00010602ab90(s__108ac265a,&stack0x00000088);
  if (*(long *)(unaff_x29 + -0x50) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x48));
  }
  if (unaff_x22 != 0) {
    _free();
  }
  if ((in_stack_00000030 != -0x8000000000000000) && (in_stack_00000030 != 0)) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000018 != 0) {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000048 != -0x8000000000000000) && (in_stack_00000048 != 0)) {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000060 != -0x8000000000000000) && (in_stack_00000060 != 0)) {
    _free(in_stack_00000068);
  }
  *(undefined1 *)(unaff_x19 + 0xcc1) = 1;
  return ZEXT816(0);
}

