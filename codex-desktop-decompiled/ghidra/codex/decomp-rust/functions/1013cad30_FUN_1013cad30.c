
/* WARNING: Removing unreachable block (ram,0x0001013cac9c) */

void FUN_1013cad30(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_000000b0;
  long in_stack_000000c8;
  long in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 in_stack_000000f8;
  char in_stack_00000120;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000500);
  if (in_stack_000000e8 != -0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar2 = (undefined8 *)(in_stack_000000c8 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (in_stack_000000e8 != 0) {
      _free(in_stack_000000c8);
    }
  }
  if (unaff_x27 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      puVar2 = (undefined8 *)(unaff_x21 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (unaff_x27 != 0) {
      _free(unaff_x21);
    }
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b0);
  }
  FUN_100d34830(&stack0x00000140);
  if (in_stack_00000120 != '\x16') {
    FUN_100e077ec(&stack0x00000120);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  *in_stack_000000f0 = 0x800000000000000b;
  in_stack_000000f0[1] = uVar1;
  return;
}

