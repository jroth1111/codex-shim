
void FUN_100acf078(void)

{
  ulong uVar1;
  long unaff_x21;
  ulong *unaff_x24;
  undefined8 *puVar2;
  ulong unaff_x26;
  uint unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  char in_stack_00000100;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x98);
  if (in_stack_00000058 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000040 + 0x20);
      do {
        if (puVar2[-4] != 0) {
          _free(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 6;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (in_stack_00000058 != 0) {
      _free(in_stack_00000040);
    }
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000120);
  if (in_stack_00000100 != '\x16') {
    FUN_100e077ec(&stack0x00000100);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  if (unaff_x28 == 0x8000000000000000) {
    unaff_x24[1] = uVar1;
    *unaff_x24 = 0x800000000000000f;
  }
  else {
    unaff_x24[5] = in_stack_000000a8;
    unaff_x24[4] = in_stack_000000a0;
    unaff_x24[7] = in_stack_000000b8;
    unaff_x24[6] = in_stack_000000b0;
    unaff_x24[9] = in_stack_000000c8;
    unaff_x24[8] = in_stack_000000c0;
    unaff_x24[0xb] = in_stack_000000d8;
    unaff_x24[10] = in_stack_000000d0;
    unaff_x24[1] = uVar1;
    *unaff_x24 = unaff_x28;
    unaff_x24[3] = in_stack_00000098;
    unaff_x24[2] = in_stack_00000090;
  }
  return;
}

