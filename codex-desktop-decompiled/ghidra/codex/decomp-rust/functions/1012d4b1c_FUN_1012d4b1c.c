
/* WARNING: Removing unreachable block (ram,0x0001012d4b74) */
/* WARNING: Removing unreachable block (ram,0x0001012d4b78) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bac) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bc4) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bd8) */
/* WARNING: Removing unreachable block (ram,0x0001012d4be4) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bcc) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bb0) */
/* WARNING: Removing unreachable block (ram,0x0001012d4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001012d4944) */

void FUN_1012d4b1c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000040);
  if (unaff_x25 != 0) {
    puVar3 = (undefined8 *)(unaff_x21 + 8);
    do {
      if ((puVar3[-1] & 0x7fffffffffffffff) != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      unaff_x25 = unaff_x25 + -1;
    } while (unaff_x25 != 0);
  }
  if (unaff_x24 != 0) {
    _free();
  }
  *(char *)(unaff_x20 + 0x38) = *(char *)(unaff_x20 + 0x38) + '\x01';
  in_stack_00000040 = 0x8000000000000000;
  in_stack_00000048 = uVar1;
  in_stack_00000050 = 0;
  plVar2 = (long *)FUN_1006546a8();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 1) {
      FUN_100de21d4(plVar2 + 1);
    }
    else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
      _free(plVar2[1]);
    }
    _free(plVar2);
  }
  uVar1 = FUN_108832dfc(uVar1);
  unaff_x19[1] = uVar1;
  *unaff_x19 = 0x8000000000000001;
  return;
}

