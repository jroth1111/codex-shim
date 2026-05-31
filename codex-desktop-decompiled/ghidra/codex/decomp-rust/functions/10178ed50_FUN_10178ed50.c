
void FUN_10178ed50(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000040;
  long in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000140;
  long in_stack_00000228;
  long in_stack_00000230;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000010);
  }
  if ((in_stack_00000068 != -0x7fffffffffffffff) && (in_stack_00000068 != -0x8000000000000000)) {
    if (in_stack_00000230 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000228 + 0x10);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 4;
        in_stack_00000230 = in_stack_00000230 + -1;
      } while (in_stack_00000230 != 0);
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000228);
    }
  }
  if (in_stack_00000050 != -0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000040 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (in_stack_00000050 != 0) {
      _free(in_stack_00000040);
    }
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  FUN_1017a1d58(&stack0x00000160);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

