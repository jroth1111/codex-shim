
void FUN_1013c7544(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *puVar2;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_000000b0;
  long in_stack_000000c8;
  long in_stack_000000e8;
  undefined8 in_stack_000000f8;
  char in_stack_00000120;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000500);
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
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b0);
  }
  FUN_100d34830(unaff_x23 + 0x20);
  if (in_stack_00000120 != '\x16') {
    FUN_100e077ec(&stack0x00000120);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  if (unaff_x22 == 0x8000000000000000) {
    *unaff_x26 = 0x800000000000000b;
    unaff_x26[1] = uVar1;
  }
  else {
    unaff_x26[4] = in_stack_000006a8;
    unaff_x26[3] = in_stack_000006a0;
    unaff_x26[6] = in_stack_000006b8;
    unaff_x26[5] = in_stack_000006b0;
    unaff_x26[8] = in_stack_000006c8;
    unaff_x26[7] = in_stack_000006c0;
    unaff_x26[9] = in_stack_000006d0;
    unaff_x26[2] = uVar1;
    unaff_x26[1] = unaff_x22;
    *unaff_x26 = 0x8000000000000004;
  }
  return;
}

