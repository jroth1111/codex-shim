
void FUN_101c5cb58(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_00000120;
  long in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  ulong in_stack_000001d0;
  undefined8 in_stack_000001d8;
  
  uVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000050);
  *in_stack_00000000 = 2;
  in_stack_00000000[1] = uVar2;
  if (in_stack_00000188 != 0) {
    _free(in_stack_00000190);
  }
  if (in_stack_000001a0 != 0) {
    _free(in_stack_000001a8);
  }
  lVar1 = in_stack_000001c0;
  lVar3 = in_stack_000001c8;
  if ((in_stack_000001d0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000001d8);
    lVar1 = in_stack_000001c0;
    lVar3 = in_stack_000001c8;
  }
  in_stack_000001c0 = lVar1;
  in_stack_000001c8 = lVar3;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (in_stack_000001b8 != 0) {
    _free(lVar1);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000140);
  if (in_stack_00000120 != '\x16') {
    FUN_1020378e0(&stack0x00000120);
  }
  if ((in_stack_00000028._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

