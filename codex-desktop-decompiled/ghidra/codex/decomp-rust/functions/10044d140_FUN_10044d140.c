
/* WARNING: Type propagation algorithm not settling */

void FUN_10044d140(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  long in_stack_000000b8;
  char in_stack_000000c0;
  
  lVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *unaff_x19 = 0x1d;
  unaff_x19[1] = lVar1;
  if (in_stack_00000080 != -0x8000000000000000) {
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000078);
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  if ((in_stack_000000b0 & 0x7fffffffffffffff) == 0) {
    lVar1 = *unaff_x19;
  }
  else {
    _free(in_stack_00000068);
    lVar1 = *unaff_x19;
  }
  if (lVar1 == 0x1d) {
    FUN_100d34830(&stack0x000000e0);
    if (in_stack_000000c0 != '\x16') {
      FUN_100e077ec(&stack0x000000c0);
    }
  }
  else {
    _memcpy(&stack0x00000110);
    FUN_100d34830(&stack0x000000e0);
    if (in_stack_000000b8 == unaff_x27) {
      lVar1 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = unaff_x25;
      lVar1 = thunk_FUN_1087e422c(((ulong)(in_stack_000000b8 - unaff_x27) >> 6) + unaff_x25,
                                  unaff_x29 + -0xc0,&UNK_10b23a190);
    }
    if (in_stack_000000c0 != '\x16') {
      FUN_100e077ec(&stack0x000000c0);
    }
    if (lVar1 == 0) {
      _memcpy();
    }
    else {
      unaff_x19[1] = lVar1;
      *unaff_x19 = 0x1d;
      FUN_100e35e0c(&stack0x00000110);
    }
  }
  return;
}

