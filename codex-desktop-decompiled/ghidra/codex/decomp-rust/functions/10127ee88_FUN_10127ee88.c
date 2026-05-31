
void FUN_10127ee88(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x26 = unaff_x24;
  unaff_x26[1] = uVar1;
  if ((in_stack_00000058 != 0x8000000000000001) && ((in_stack_00000058 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if (unaff_x23 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000048 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (unaff_x23 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

