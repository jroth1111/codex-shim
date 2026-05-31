
void FUN_10183ae24(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  
  FUN_1019913c4(&stack0x00000248,s_duplicate_key______108ac65eb,unaff_x29 + -0x100);
  lVar1 = FUN_1088bbf28(&stack0x00000248);
  *unaff_x19 = -0x7ffffffffffffffa;
  unaff_x19[1] = lVar1;
  if (*(long *)(unaff_x29 + -0xa8) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xa0));
  }
  FUN_10196a210(&stack0x000000e0);
  if (*unaff_x19 == -0x7ffffffffffffffa) {
    FUN_10194df64(unaff_x23 + 9);
  }
  else {
    in_stack_000000b8 = unaff_x19[5];
    in_stack_000000b0 = unaff_x19[4];
    in_stack_000000c8 = unaff_x19[7];
    in_stack_000000c0 = unaff_x19[6];
    in_stack_000000d8 = unaff_x19[9];
    in_stack_000000d0 = unaff_x19[8];
    in_stack_00000098 = unaff_x19[1];
    in_stack_00000090 = *unaff_x19;
    in_stack_000000a8 = unaff_x19[3];
    in_stack_000000a0 = unaff_x19[2];
    if (unaff_x22 != unaff_x20) {
      lVar1 = FUN_108880da4(in_stack_00000018,&UNK_10b25f968,&UNK_10b25d520);
      *unaff_x19 = -0x7ffffffffffffffa;
      unaff_x19[1] = lVar1;
      FUN_10194c9ac(&stack0x00000090);
      unaff_x23 = &stack0x00000020;
    }
    FUN_10194df64(unaff_x23 + 9);
  }
  if (in_stack_00000020 != unaff_x24) {
    func_0x00010194dc28(&stack0x00000020);
  }
  return;
}

