
/* WARNING: Removing unreachable block (ram,0x000101262f18) */
/* WARNING: Removing unreachable block (ram,0x000101262ed4) */
/* WARNING: Removing unreachable block (ram,0x000101262f1c) */
/* WARNING: Removing unreachable block (ram,0x000101262fdc) */
/* WARNING: Removing unreachable block (ram,0x000101262f20) */

void FUN_1012630e0(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  
  uVar2 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000030);
  if (unaff_x21 != 0) {
    _free(in_stack_00000000);
  }
  *(char *)(unaff_x20 + 0x38) = *(char *)(unaff_x20 + 0x38) + '\x01';
  plVar1 = (long *)FUN_1006546a8();
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 1) {
      FUN_100de21d4(plVar1 + 1);
    }
    else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
      _free(plVar1[1]);
    }
    _free(plVar1);
  }
  uVar2 = FUN_108832dfc(uVar2);
  unaff_x19[1] = uVar2;
  *unaff_x19 = 0x8000000000000001;
  return;
}

