
/* WARNING: Type propagation algorithm not settling */

void FUN_101c85548(void)

{
  long lVar1;
  long lVar2;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  char in_stack_000000c0;
  long in_stack_000000e8;
  long in_stack_000000f8;
  long in_stack_00000100;

  lVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *in_stack_00000060 = -0x8000000000000000;
  in_stack_00000060[1] = lVar2;
  if (in_stack_00000090 != -0x7ffffffffffffffa) {
    FUN_10204178c(&stack0x00000220);
  }
  if ((in_stack_00000098 != 0x8000000000000001) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_000000b0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_000000b8 & 0x7fffffffffffffff) == 0) {
    lVar2 = *in_stack_00000060;
  }
  else {
    _free(in_stack_00000050);
    lVar2 = *in_stack_00000060;
  }
  if (lVar2 == -0x8000000000000000) {
    FUN_102033488(&stack0x000000e0);
    if (in_stack_000000c0 != '\x16') {
      FUN_1020378e0(&stack0x000000c0);
    }
  }
  else {
    _memcpy(&stack0x00000108,in_stack_00000060,0x108);
    lVar1 = in_stack_000000f8;
    lVar2 = in_stack_000000e8;
    FUN_102033488(&stack0x000000e0);
    if (lVar1 == lVar2) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = in_stack_00000100;
      lVar2 = FUN_1088c7110(in_stack_00000100 + ((ulong)(lVar1 - lVar2) >> 6),unaff_x29 + -0x100,
                            &UNK_10b276c98);
    }
    if (in_stack_000000c0 != '\x16') {
      FUN_1020378e0(&stack0x000000c0);
    }
    if (lVar2 == 0) {
      _memcpy(in_stack_00000060,&stack0x00000108,0x108);
    }
    else {
      *in_stack_00000060 = -0x8000000000000000;
      in_stack_00000060[1] = lVar2;
      FUN_102031bec(&stack0x00000108);
    }
  }
  if ((in_stack_00000068._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000070);
  }
  return;
}
