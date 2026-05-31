
/* WARNING: Type propagation algorithm not settling */

void FUN_1012b5d74(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  char in_stack_000000d0;
  long in_stack_000000f8;
  long in_stack_00000108;
  long in_stack_00000110;
  ulong in_stack_00000220;
  long in_stack_00000250;
  undefined8 in_stack_00000258;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  long in_stack_00000298;
  undefined8 in_stack_000002a0;
  
  lVar3 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *in_stack_000000a0 = -0x8000000000000000;
  in_stack_000000a0[1] = lVar3;
  if (in_stack_000000a8 != -0x8000000000000000) {
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000068);
    }
    if ((in_stack_00000298 != -0x8000000000000000) && (in_stack_00000298 != 0)) {
      _free(in_stack_000002a0);
    }
  }
  if ((in_stack_000000b0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000250 != -0x7fffffffffffffff) && (in_stack_00000250 != -0x8000000000000000)) {
    if (in_stack_00000250 != 0) {
      _free(in_stack_00000258);
    }
    if ((in_stack_00000268 != -0x8000000000000000) && (in_stack_00000268 != 0)) {
      _free(in_stack_00000270);
    }
  }
  if (in_stack_00000220 != 0x8000000000000003) {
    bVar2 = in_stack_00000220 != 0x8000000000000000;
    if (in_stack_00000220 < 0x8000000000000001) {
      in_stack_00000220 = 0;
    }
    if ((bVar2) && ((in_stack_00000220 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(&stack0x00000220);
    }
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_000000c8 & 0x7fffffffffffffff) == 0) {
    lVar3 = *in_stack_000000a0;
  }
  else {
    _free(in_stack_00000040);
    lVar3 = *in_stack_000000a0;
  }
  if (lVar3 == -0x8000000000000000) {
    FUN_100d34830(&stack0x000000f0);
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
  }
  else {
    _memcpy(&stack0x00000118,in_stack_000000a0,0x108);
    lVar1 = in_stack_00000108;
    lVar3 = in_stack_000000f8;
    FUN_100d34830(&stack0x000000f0);
    if (lVar1 == lVar3) {
      lVar3 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = in_stack_00000110;
      lVar3 = FUN_1087e422c(in_stack_00000110 + ((ulong)(lVar1 - lVar3) >> 6),unaff_x29 + -0x100,
                            &UNK_10b23a190);
    }
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
    if (lVar3 == 0) {
      _memcpy(in_stack_000000a0,&stack0x00000118,0x108);
    }
    else {
      *in_stack_000000a0 = -0x8000000000000000;
      in_stack_000000a0[1] = lVar3;
      FUN_100e270ac(&stack0x00000118);
    }
  }
  if ((in_stack_00000098._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

