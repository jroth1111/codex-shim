
/* WARNING: Removing unreachable block (ram,0x000100c0d024) */

void FUN_100c0f500(void)

{
  int iVar1;
  uint uVar2;
  long unaff_x20;
  uint unaff_w23;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  int in_stack_00000088;
  undefined8 *in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  char in_stack_00000420;
  
  in_stack_000000f0 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000002b0);
  in_stack_000000e8 = -0x7ffffffffffffff9;
  if (unaff_x20 != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000440);
  if (in_stack_00000420 != '\x16') {
    FUN_100e077ec(&stack0x00000420);
  }
  if (in_stack_000000e8 == -0x7ffffffffffffff9) {
    *in_stack_00000090 = 2;
    in_stack_00000090[1] = in_stack_000000f0;
    if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000b0);
    }
    if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_000000b8);
    }
    if (in_stack_000000a8 != 0) {
      _free(in_stack_00000080);
    }
    FUN_100d5c778(&stack0x000000d0);
    iVar1 = 0;
    if (in_stack_00000098 != 0x8000000000000001) {
      iVar1 = in_stack_00000088;
    }
    if ((iVar1 == 1) && ((in_stack_00000098 & 0x7fffffffffffffff) != 0)) {
      _free(in_stack_000000b0);
      uVar2 = 0;
      if (in_stack_000000a0 != 0x8000000000000001) {
        uVar2 = unaff_w23;
      }
    }
    else {
      uVar2 = 0;
      if (in_stack_000000a0 != 0x8000000000000001) {
        uVar2 = unaff_w23;
      }
    }
    if (((uVar2 & 1) != 0) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0)) {
      _free(in_stack_000000b8);
    }
  }
  else {
    in_stack_00000090[0x1a] = in_stack_00000160;
    in_stack_00000090[0x19] = in_stack_00000158;
    in_stack_00000090[0x1c] = in_stack_00000170;
    in_stack_00000090[0x1b] = in_stack_00000168;
    in_stack_00000090[0x1e] = in_stack_00000180;
    in_stack_00000090[0x1d] = in_stack_00000178;
    in_stack_00000090[0x12] = in_stack_00000120;
    in_stack_00000090[0x11] = in_stack_00000118;
    in_stack_00000090[0x14] = in_stack_00000130;
    in_stack_00000090[0x13] = in_stack_00000128;
    in_stack_00000090[0x16] = in_stack_00000140;
    in_stack_00000090[0x15] = in_stack_00000138;
    in_stack_00000090[0x18] = in_stack_00000150;
    in_stack_00000090[0x17] = in_stack_00000148;
    in_stack_00000090[0xe] = in_stack_00000100;
    in_stack_00000090[0xd] = in_stack_000000f8;
    in_stack_00000090[0x1f] = in_stack_00000188;
    in_stack_00000090[0x10] = in_stack_00000110;
    in_stack_00000090[0xf] = in_stack_00000108;
    *in_stack_00000090 = in_stack_00000060;
    in_stack_00000090[1] = in_stack_00000038;
    in_stack_00000090[2] = in_stack_000000a8;
    in_stack_00000090[3] = in_stack_00000080;
    in_stack_00000090[4] = in_stack_00000078;
    in_stack_00000090[5] = in_stack_00000070;
    in_stack_00000090[6] = in_stack_000000b8;
    in_stack_00000090[7] = in_stack_00000030;
    in_stack_00000090[8] = in_stack_00000068;
    in_stack_00000090[9] = in_stack_000000b0;
    in_stack_00000090[10] = in_stack_00000040;
    in_stack_00000090[0xb] = in_stack_000000e8;
    in_stack_00000090[0xc] = in_stack_000000f0;
    FUN_100d5c778(&stack0x000000d0);
  }
  return;
}

