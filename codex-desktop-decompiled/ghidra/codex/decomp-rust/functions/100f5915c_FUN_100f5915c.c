
undefined1  [16] FUN_100f5915c(void)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  
  func_0x00010602ab90(s__108ac265a,&stack0x000000d0);
  if (*(long *)(unaff_x29 + -0x90) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x88));
  }
  if (unaff_x23 != 0) {
    _free();
  }
  if (in_stack_00000018 != 0) {
    _free();
  }
  if ((unaff_x24 != -0x8000000000000000) && (unaff_x24 != 0)) {
    _free(in_stack_00000038);
  }
  *(undefined1 *)(unaff_x19 + 0xcb0) = 1;
  return ZEXT816(0);
}

