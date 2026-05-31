
void FUN_101793368(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000020;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
  *in_stack_00000020 = 4;
  in_stack_00000020[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000000 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (unaff_x22 != 0) {
      _free(in_stack_00000000);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000010);
  }
  FUN_1017a1d58(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    func_0x0001017a6a48(unaff_x29 + -0xb0);
  }
  return;
}

