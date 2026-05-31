
/* WARNING: Removing unreachable block (ram,0x0001012b589c) */

void FUN_1012b54b8(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  uint unaff_w20;
  int unaff_w21;
  uint unaff_w24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long in_stack_000000c8;
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
  
  lVar5 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *in_stack_000000a0 = -0x8000000000000000;
  in_stack_000000a0[1] = lVar5;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_000000c0 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_000000c8 != 0) {
    _free(in_stack_00000040);
  }
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
  uVar1 = 0;
  if (in_stack_00000220 != 0x8000000000000003) {
    uVar1 = unaff_w24;
  }
  if ((uVar1 & 1) != 0) {
    bVar4 = in_stack_00000220 != 0x8000000000000000;
    if (in_stack_00000220 < 0x8000000000000001) {
      in_stack_00000220 = 0;
    }
    if ((bVar4) && ((in_stack_00000220 & 0x7fffffffffffffff) == 0)) {
      FUN_100e79780(&stack0x00000220);
    }
  }
  iVar2 = 0;
  if (in_stack_000000b8 != 0x8000000000000001) {
    iVar2 = unaff_w21;
  }
  if ((iVar2 == 1) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
    uVar1 = 0;
    if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    uVar1 = 0;
    if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000038);
  }
  if (*in_stack_000000a0 == -0x8000000000000000) {
    FUN_100d34830(&stack0x000000f0);
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
  }
  else {
    _memcpy(&stack0x00000118,in_stack_000000a0,0x108);
    lVar3 = in_stack_00000108;
    lVar5 = in_stack_000000f8;
    FUN_100d34830(&stack0x000000f0);
    if (lVar3 == lVar5) {
      lVar5 = 0;
    }
    else {
      *(long *)(unaff_x29 + -0x100) = in_stack_00000110;
      lVar5 = FUN_1087e422c(in_stack_00000110 + ((ulong)(lVar3 - lVar5) >> 6),unaff_x29 + -0x100,
                            &UNK_10b23a190);
    }
    if (in_stack_000000d0 != '\x16') {
      FUN_100e077ec(&stack0x000000d0);
    }
    if (lVar5 == 0) {
      _memcpy(in_stack_000000a0,&stack0x00000118,0x108);
    }
    else {
      *in_stack_000000a0 = -0x8000000000000000;
      in_stack_000000a0[1] = lVar5;
      FUN_100e270ac(&stack0x00000118);
    }
  }
  if ((in_stack_00000098._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000060);
  }
  return;
}

