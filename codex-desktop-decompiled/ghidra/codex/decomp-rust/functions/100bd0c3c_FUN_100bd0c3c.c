
/* WARNING: Removing unreachable block (ram,0x000100bd1230) */

void FUN_100bd0c3c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x27 = 4;
  unaff_x27[1] = uVar1;
  if (unaff_x24 != 0) {
    _free(in_stack_00000038);
  }
  if (unaff_x25 != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x23 != -0x8000000000000000) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  if (((unaff_x24 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

