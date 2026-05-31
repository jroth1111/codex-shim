
void FUN_100ad6260(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  long unaff_x27;
  long in_stack_00000180;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *unaff_x19 = 0x8000000000000007;
  unaff_x19[1] = uVar1;
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
  if (unaff_x24 != 0) {
    _free();
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000180 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000180);
  }
  return;
}

