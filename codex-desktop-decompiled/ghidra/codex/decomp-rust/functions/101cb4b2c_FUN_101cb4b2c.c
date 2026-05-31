
/* WARNING: Removing unreachable block (ram,0x000101cb48dc) */

void FUN_101cb4b2c(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000080;
  long *in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  long in_stack_000000b0;
  ulong in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_00000110;
  long in_stack_00000120;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;

  lVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002c0);
  *in_stack_00000088 = -0x8000000000000000;
  in_stack_00000088[1] = lVar2;
  if (in_stack_00000098 != 0) {
    _free(in_stack_00000058);
  }
  if (in_stack_000000b0 != 0) {
    _free(in_stack_00000060);
  }
  if (unaff_x20 != unaff_x19 + 1) {
    FUN_10204178c(&stack0x00000248);
  }
  if ((in_stack_000000a8 != 0x8000000000000001) && ((in_stack_000000a8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w26;
    }
  }
  else {
    _free(in_stack_00000050);
    uVar1 = 0;
    if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w26;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000058);
  }
  if (*in_stack_00000088 == -0x8000000000000000) {
    FUN_1020353a0(&stack0x00000108);
  }
  else {
    in_stack_000001b8 = in_stack_00000088[0x11];
    in_stack_000001b0 = in_stack_00000088[0x10];
    in_stack_000001c8 = in_stack_00000088[0x13];
    in_stack_000001c0 = in_stack_00000088[0x12];
    in_stack_000001d8 = in_stack_00000088[0x15];
    in_stack_000001d0 = in_stack_00000088[0x14];
    in_stack_000001e8 = in_stack_00000088[0x17];
    in_stack_000001e0 = in_stack_00000088[0x16];
    in_stack_00000178 = in_stack_00000088[9];
    in_stack_00000170 = in_stack_00000088[8];
    in_stack_00000188 = in_stack_00000088[0xb];
    in_stack_00000180 = in_stack_00000088[10];
    in_stack_00000198 = in_stack_00000088[0xd];
    in_stack_00000190 = in_stack_00000088[0xc];
    in_stack_000001a8 = in_stack_00000088[0xf];
    in_stack_000001a0 = in_stack_00000088[0xe];
    in_stack_00000138 = in_stack_00000088[1];
    in_stack_00000130 = *in_stack_00000088;
    in_stack_00000148 = in_stack_00000088[3];
    in_stack_00000140 = in_stack_00000088[2];
    in_stack_00000158 = in_stack_00000088[5];
    in_stack_00000150 = in_stack_00000088[4];
    in_stack_00000168 = in_stack_00000088[7];
    in_stack_00000160 = in_stack_00000088[6];
    if (in_stack_00000120 != in_stack_00000110) {
      lVar2 = FUN_1088c7110(in_stack_00000048,&UNK_10b271520,&UNK_10b26ca30);
      *in_stack_00000088 = -0x8000000000000000;
      in_stack_00000088[1] = lVar2;
      FUN_1020316f4(&stack0x00000130);
    }
    FUN_1020353a0(&stack0x00000108);
  }
  if (in_stack_000000c0 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x000000c0);
  }
  if (((long)in_stack_000000b8 < 0) &&
     ((in_stack_000000b8 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000080);
  }
  return;
}
