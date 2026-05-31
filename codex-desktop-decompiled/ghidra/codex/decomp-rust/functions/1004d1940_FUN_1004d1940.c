
/* WARNING: Removing unreachable block (ram,0x0001004d2190) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1004d1940(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  uint unaff_w24;
  int unaff_w26;
  ulong unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  char in_stack_000000b0;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000098 = 7;
  in_stack_00000098[1] = uVar2;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_000000a8 != 0) {
    _free(in_stack_00000050);
  }
  if (unaff_x20 != 7) {
    if (unaff_x20 == 3) {
      uVar3 = *(ulong *)(unaff_x29 + -0xd8) & 0x7fffffffffffffff;
    }
    else {
      if (unaff_x20 != 4) goto LAB_1004d2118;
      uVar3 = *(ulong *)(unaff_x29 + -0xd8);
    }
    if (uVar3 != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd0));
      iVar1 = 0;
      if (unaff_x27 != 0x8000000000000001) {
        iVar1 = unaff_w26;
      }
      goto joined_r0x0001004d2128;
    }
  }
LAB_1004d2118:
  iVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar1 = unaff_w26;
  }
joined_r0x0001004d2128:
  if ((iVar1 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
    iVar1 = 0;
    if (in_stack_000000a0 != 0x8000000000000001) {
      iVar1 = unaff_w28;
    }
  }
  else {
    iVar1 = 0;
    if (in_stack_000000a0 != 0x8000000000000001) {
      iVar1 = unaff_w28;
    }
  }
  if ((iVar1 == 1) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

