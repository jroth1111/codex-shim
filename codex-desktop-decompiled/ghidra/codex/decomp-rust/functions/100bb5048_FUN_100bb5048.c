
void FUN_100bb5048(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  undefined8 *in_stack_00000048;
  long in_stack_00000180;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *in_stack_00000048 = 0x8000000000000006;
  in_stack_00000048[1] = uVar1;
  if (unaff_x21 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x21 = unaff_x21 + -1;
    } while (unaff_x21 != 0);
  }
  if (unaff_x23 != 0) {
    _free();
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000180 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000180);
  }
  return;
}

