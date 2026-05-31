
/* WARNING: Removing unreachable block (ram,0x000101caf3e4) */

void FUN_101caee54(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x22;
  uint unaff_w23;
  long unaff_x26;
  ulong unaff_x28;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  long *in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_00000120;
  long in_stack_00000130;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002d0);
  *unaff_x22 = 0x8000000000000000;
  unaff_x22[1] = uVar2;
  if (in_stack_000000a8 != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_000000b0 != unaff_x26 + 1) {
    FUN_10204178c(&stack0x00000258);
  }
  if ((in_stack_000000b8 != 0x8000000000000001) && ((in_stack_000000b8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w23;
    }
  }
  else {
    _free(in_stack_00000048);
    uVar1 = 0;
    if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w23;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000070);
  }
  if (*in_stack_000000c8 == -0x8000000000000000) {
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  else {
    _memcpy(&stack0x00000138,in_stack_000000c8,0x108);
    if (in_stack_00000130 != in_stack_00000120) {
      lVar3 = FUN_1088c7110(in_stack_00000058,&UNK_10b271520,&UNK_10b26ca30);
      *in_stack_000000c8 = -0x8000000000000000;
      in_stack_000000c8[1] = lVar3;
      FUN_102031bec(&stack0x00000138);
    }
    FUN_1020353a0(unaff_x19 + 0x48);
  }
  if (in_stack_000000d0 != unaff_x26) {
    func_0x00010203527c(&stack0x000000d0);
  }
  if (((long)in_stack_000000c0 < 0) && ((in_stack_000000c0 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    func_0x00010203527c(in_stack_00000090);
  }
  return;
}
