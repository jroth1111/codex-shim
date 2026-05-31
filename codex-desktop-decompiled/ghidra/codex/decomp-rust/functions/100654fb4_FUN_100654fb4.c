
/* WARNING: Removing unreachable block (ram,0x000100654dfc) */
/* WARNING: Removing unreachable block (ram,0x000100654e10) */
/* WARNING: Removing unreachable block (ram,0x000100654e2c) */
/* WARNING: Removing unreachable block (ram,0x000100654e3c) */
/* WARNING: Removing unreachable block (ram,0x000100654e4c) */
/* WARNING: Removing unreachable block (ram,0x000100654e50) */
/* WARNING: Removing unreachable block (ram,0x000100654ed0) */
/* WARNING: Removing unreachable block (ram,0x000100654ef0) */
/* WARNING: Removing unreachable block (ram,0x000100654e54) */
/* WARNING: Removing unreachable block (ram,0x000100654e64) */
/* WARNING: Removing unreachable block (ram,0x000100654e00) */
/* WARNING: Removing unreachable block (ram,0x000100654e0c) */

void FUN_100654fb4(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *unaff_x19;
  undefined8 *puVar4;
  ulong uVar5;
  ulong unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x29;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000068;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  in_stack_00000068 = in_stack_00000068 + '\x01';
  plVar1 = (long *)FUN_100654604(&stack0x00000020);
  if (plVar1 == (long *)0x0) goto LAB_100654e80;
  if (*plVar1 == 1) {
    uVar5 = plVar1[1];
    if ((uVar5 & 3) == 1) {
      puVar4 = (undefined8 *)(uVar5 - 1);
      uVar6 = *puVar4;
      puVar7 = *(undefined8 **)(uVar5 + 7);
      pcVar3 = (code *)*puVar7;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar6);
      }
      if (puVar7[1] != 0) {
        _free(uVar6);
      }
      goto LAB_100654df0;
    }
  }
  else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
    puVar4 = (undefined8 *)plVar1[1];
LAB_100654df0:
    _free(puVar4);
  }
  _free(plVar1);
LAB_100654e80:
  uVar2 = thunk_FUN_108832da4(uVar2,&stack0x00000020);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar2;
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  return;
}

