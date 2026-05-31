
void FUN_101cbd240(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000068;
  long in_stack_00000070;
  long in_stack_000001c8;
  undefined8 in_stack_000001d0;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  ulong in_stack_00000210;
  undefined8 in_stack_00000218;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000240);
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar1;
  if (unaff_x21 != 2) {
    if (in_stack_000001c8 != 0) {
      _free(in_stack_000001d0);
    }
    if (in_stack_000001e0 != 0) {
      _free(in_stack_000001e8);
    }
    if ((in_stack_00000210 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000218);
    }
    if (in_stack_00000208 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000200 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 4;
        in_stack_00000208 = in_stack_00000208 + -1;
      } while (in_stack_00000208 != 0);
    }
    if (in_stack_000001f8 != 0) {
      _free(in_stack_00000200);
    }
  }
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000070 != unaff_x25) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)unaff_x24 < 0) && ((unaff_x24 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c(in_stack_00000020);
  }
  return;
}
