
/* WARNING: Removing unreachable block (ram,0x00010177a370) */
/* WARNING: Removing unreachable block (ram,0x00010177a3a0) */
/* WARNING: Removing unreachable block (ram,0x00010177a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010177a3d4) */
/* WARNING: Removing unreachable block (ram,0x00010177a3e4) */
/* WARNING: Removing unreachable block (ram,0x00010177a3e8) */
/* WARNING: Removing unreachable block (ram,0x00010177a46c) */
/* WARNING: Removing unreachable block (ram,0x00010177a49c) */
/* WARNING: Removing unreachable block (ram,0x00010177a4a8) */
/* WARNING: Removing unreachable block (ram,0x00010177a4b8) */
/* WARNING: Removing unreachable block (ram,0x00010177a4bc) */
/* WARNING: Removing unreachable block (ram,0x00010177a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010177a3fc) */
/* WARNING: Removing unreachable block (ram,0x00010177a37c) */
/* WARNING: Removing unreachable block (ram,0x00010177a400) */
/* WARNING: Removing unreachable block (ram,0x00010177a384) */
/* WARNING: Removing unreachable block (ram,0x00010177a394) */
/* WARNING: Removing unreachable block (ram,0x00010177a420) */

void FUN_10177a524(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  uVar2 = FUN_108880790(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  if ((in_stack_000000a0 != -0x8000000000000000) && (in_stack_000000a0 != 0)) {
    _free(in_stack_000000a8);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_000000c0);
  }
  *(undefined8 *)(unaff_x29 + -0xb8) = 2;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000058;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000068;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000060;
  *(undefined8 *)(unaff_x29 + -0x80) = in_stack_00000078;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000070;
  lVar1 = FUN_10177b538();
  if (lVar1 != 0) {
    FUN_1017a4f34(lVar1);
    _free(lVar1);
  }
  uVar2 = FUN_10887f554(uVar2);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar2;
  if (in_stack_00000000 != 0) {
    _free(in_stack_00000008);
  }
  return;
}

