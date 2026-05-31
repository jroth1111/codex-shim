
/* WARNING: Removing unreachable block (ram,0x00010070dedc) */

void FUN_10070d9f4(void)

{
  ulong unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  *(char **)(unaff_x29 + -0xb0) = s__failed_to_deserialize_server_me_108ac5082;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000410;
  FUN_10070f3c8(&stack0x000003f0);
  FUN_10070cd54();
  FUN_100de65d4(unaff_x29 + -0x98);
  if (unaff_x28 != 0) {
    _free();
  }
  if ((in_stack_00000018 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  return;
}

