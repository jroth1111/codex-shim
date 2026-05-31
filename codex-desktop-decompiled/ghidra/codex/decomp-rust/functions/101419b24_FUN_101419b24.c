
void FUN_101419b24(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *(undefined8 *)(unaff_x29 + -0x90) = 0x8000000000000001;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar1;
  if (-0x7fffffffffffffff < in_stack_00000028) {
    if (unaff_x27 != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (in_stack_00000028 != 0) {
      _free();
    }
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000008._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  if (*(long *)(unaff_x29 + -0x90) == -0x7fffffffffffffff) {
    uVar1 = *(undefined8 *)(unaff_x29 + -0x88);
    *in_stack_00000000 = 0x8000000000000002;
    in_stack_00000000[1] = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x29 + -0x90);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x78);
    uVar3 = *(undefined8 *)(unaff_x29 + -0x80);
    in_stack_00000000[1] = *(undefined8 *)(unaff_x29 + -0x88);
    *in_stack_00000000 = uVar1;
    in_stack_00000000[3] = uVar4;
    in_stack_00000000[2] = uVar3;
  }
  return;
}

