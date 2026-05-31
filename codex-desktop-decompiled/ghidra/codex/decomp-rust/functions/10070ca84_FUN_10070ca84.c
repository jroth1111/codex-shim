
/* WARNING: Removing unreachable block (ram,0x00010070cb68) */

void FUN_10070ca84(void)

{
  ulong unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  *(char **)(unaff_x29 + -0xb0) = s__failed_to_deserialize_server_me_108ac5082;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x88;
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x00000410;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_10070bab8();
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

