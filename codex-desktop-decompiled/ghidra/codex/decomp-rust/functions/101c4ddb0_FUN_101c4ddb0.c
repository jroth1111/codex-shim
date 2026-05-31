
void FUN_101c4ddb0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  long in_stack_00000028;
  char in_stack_00000030;
  
  lVar3 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000020 = -0x8000000000000000;
  in_stack_00000020[1] = lVar3;
  for (; unaff_x26 != 0; unaff_x26 = unaff_x26 + -1) {
    FUN_10203b5c4(unaff_x21);
    unaff_x21 = unaff_x21 + 0x270;
  }
  if (unaff_x23 != 0) {
    _free();
    lVar3 = *in_stack_00000020;
    if (lVar3 != -0x8000000000000000) {
      lVar1 = in_stack_00000020[1];
      lVar2 = in_stack_00000020[2];
      FUN_102033488(&stack0x00000050);
      if (in_stack_00000028 == unaff_x25) {
        lVar4 = 0;
      }
      else {
        *(long *)(unaff_x29 + -0x78) = unaff_x28 + 1;
        lVar4 = FUN_1088c7110(((ulong)(in_stack_00000028 - unaff_x25) >> 6) + unaff_x28 + 1,
                              unaff_x29 + -0x78,&UNK_10b276c98);
      }
      if (in_stack_00000030 != '\x16') {
        FUN_1020378e0(&stack0x00000030);
      }
      if (lVar4 != 0) {
        *in_stack_00000020 = -0x8000000000000000;
        in_stack_00000020[1] = lVar4;
        lVar4 = lVar1;
        for (; lVar2 != 0; lVar2 = lVar2 + -1) {
          FUN_10203b5c4(lVar4);
          lVar4 = lVar4 + 0x270;
        }
        if (lVar3 != 0) {
          _free(lVar1);
        }
      }
      goto LAB_101c4dcfc;
    }
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
LAB_101c4dcfc:
  if ((in_stack_00000008._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000010);
  }
  return;
}

