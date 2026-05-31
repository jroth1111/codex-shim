
/* WARNING: Removing unreachable block (ram,0x0001017bcdd0) */
/* WARNING: Removing unreachable block (ram,0x0001017bcee0) */
/* WARNING: Removing unreachable block (ram,0x0001017bcdd4) */
/* WARNING: Removing unreachable block (ram,0x0001017bcddc) */
/* WARNING: Removing unreachable block (ram,0x0001017bcdec) */
/* WARNING: Removing unreachable block (ram,0x0001017bcdfc) */
/* WARNING: Removing unreachable block (ram,0x0001017bcf88) */
/* WARNING: Removing unreachable block (ram,0x0001017bcf60) */

void FUN_1017bd0dc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x26;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar2 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000018);
  if ((-0x7ffffffffffffffe < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000008);
  }
  if ((-0x7fffffffffffffff < in_stack_00000010) && (in_stack_00000010 != 0)) {
    _free();
  }
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  in_stack_00000018 = 2;
  in_stack_00000020 = uVar2;
  lVar1 = FUN_10177b538();
  if (lVar1 != 0) {
    FUN_1017a4f34();
    _free();
  }
  uVar2 = FUN_10887f554(uVar2);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar2;
  return;
}

