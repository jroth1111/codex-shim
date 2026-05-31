
void FUN_101460da8(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  in_stack_00000048 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if (in_stack_00000038 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000028 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (in_stack_00000038 != 0) {
      _free(in_stack_00000028);
      unaff_x25 = *(long *)(unaff_x29 + -0xa0);
    }
  }
  if (unaff_x25 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0x98);
    lVar3 = *(long *)(unaff_x29 + -0x90);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar2[-4] != 0) {
          _free(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (unaff_x25 != 0) {
      _free(lVar1);
    }
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000008);
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    *in_stack_00000018 = -0x7fffffffffffffff;
    in_stack_00000018[1] = in_stack_00000048;
  }
  else {
    in_stack_00000018[1] = in_stack_00000048;
    *in_stack_00000018 = in_stack_00000040;
    in_stack_00000018[3] = in_stack_00000058;
    in_stack_00000018[2] = in_stack_00000050;
    in_stack_00000018[5] = in_stack_00000068;
    in_stack_00000018[4] = in_stack_00000060;
  }
  return;
}

