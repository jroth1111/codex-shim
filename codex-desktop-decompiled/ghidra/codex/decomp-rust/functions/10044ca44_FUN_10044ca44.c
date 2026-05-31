
/* WARNING: Removing unreachable block (ram,0x00010044ce9c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10044ca44(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  uint unaff_w20;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  char in_stack_000000c0;
  
  lVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x19 = 0x1d;
  unaff_x19[1] = lVar2;
  if (in_stack_000000a0 != 0) {
    _free(in_stack_00000058);
  }
  if (in_stack_000000a8 != 0) {
    _free(in_stack_00000060);
  }
  if (in_stack_000000b0 != 0) {
    _free();
  }
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
  if ((in_stack_00000090 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w24;
    }
  }
  else {
    _free(in_stack_00000048);
    uVar1 = 0;
    if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w24;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w28;
    }
  }
  else {
    _free(in_stack_00000050);
    uVar1 = 0;
    if ((in_stack_000000a0 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w28;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000058);
    uVar1 = 0;
    if ((in_stack_000000a8 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000060);
  }
  if (*unaff_x19 == 0x1d) {
    FUN_100d34830(&stack0x000000e0);
    if (in_stack_000000c0 != '\x16') {
      FUN_100e077ec(&stack0x000000c0);
    }
  }
  else {
    _memcpy(&stack0x00000110);
    FUN_100d34830(&stack0x000000e0);
    if (in_stack_000000b8 == unaff_x27) {
      lVar2 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0xc0) = unaff_x25;
      lVar2 = thunk_FUN_1087e422c(((ulong)(in_stack_000000b8 - unaff_x27) >> 6) + unaff_x25,
                                  unaff_x29 + -0xc0,&UNK_10b23a190);
    }
    if (in_stack_000000c0 != '\x16') {
      FUN_100e077ec(&stack0x000000c0);
    }
    if (lVar2 == 0) {
      _memcpy();
    }
    else {
      unaff_x19[1] = lVar2;
      *unaff_x19 = 0x1d;
      FUN_100e35e0c(&stack0x00000110);
    }
  }
  return;
}

