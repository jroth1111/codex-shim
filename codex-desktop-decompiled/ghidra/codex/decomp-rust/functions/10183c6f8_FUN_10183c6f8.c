
void FUN_10183c6f8(void)

{
  undefined8 uVar1;
  undefined1 unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x25;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar1 = FUN_1019aaab4(s_duplicate_field_____108ac2973,&stack0x000000a0);
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_00000050) && (in_stack_00000050 != 0)) {
    _free();
  }
  if ((-0x7fffffffffffffff < in_stack_00000058) && (in_stack_00000058 != 0)) {
    _free(in_stack_00000088);
  }
  if ((-0x7fffffffffffffff < in_stack_00000060) && (in_stack_00000060 != 0)) {
    _free(in_stack_00000080);
  }
  if ((-0x7fffffffffffffff < in_stack_00000068) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < in_stack_00000070) && (in_stack_00000070 != 0)) {
    _free(in_stack_00000038);
  }
  *(undefined1 *)(unaff_x25 + 0x58) = unaff_w20;
  *unaff_x21 = 0x8000000000000001;
  unaff_x21[1] = uVar1;
  return;
}

